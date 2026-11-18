// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 49

// ~SDockingArea @ 1427021a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::~SDockingArea(SDockingArea *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x48 = 0;
  pvVar3 = *(void **)&(this->InactivePanelDrawerTabs).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InactivePanelDrawerTabs);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount.ReferenceController)
  ;
  pTVar4 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
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
  pTVar4 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
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
  pTVar4 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RightSidebar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LeftSidebar).SharedReferenceCount.ReferenceController);
  SDockingSplitter::~SDockingSplitter((SDockingSplitter *)this);
  return;
}

// AddSidebarTabsFromRestoredLayout @ 14270b220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::AddSidebarTabsFromRestoredLayout(SDockingArea *this,FSidebarTabLists *param_1)

{
  int iVar1;
  STabSidebar *pSVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSharedRef<SDockTab,1> local_38;
  TSharedRef<SDockTab,1> local_28;
  
  iVar1 = (param_1->LeftSidebarTabs).ArrayNum;
  pFVar5 = (param_1->LeftSidebarTabs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_1->LeftSidebarTabs).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<SDockTab,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if ((this->LeftSidebar).Object == (STabSidebar *)0x0) {
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
    local_38.Object = *(SDockTab **)pFVar5;
    pSVar2 = (this->LeftSidebar).Object;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    STabSidebar::AddTab(pSVar2,&local_38);
    pFVar5 = pFVar5 + 0x10;
  }
  iVar1 = (param_1->RightSidebarTabs).ArrayNum;
  pFVar5 = (param_1->RightSidebarTabs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_1->RightSidebarTabs).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<SDockTab,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    if ((this->RightSidebar).Object == (STabSidebar *)0x0) {
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
    local_28.Object = *(SDockTab **)pFVar5;
    pSVar2 = (this->RightSidebar).Object;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    STabSidebar::AddTab(pSVar2,&local_28);
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// AddTabToSidebar @ 14270c370

/* WARNING: Enum "Type": Some values do not have unique names */

ESidebarLocation __thiscall
SDockingArea::AddTabToSidebar(SDockingArea *this,TSharedRef<SDockTab,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ESidebarLocation EVar4;
  FGeometry *pFVar5;
  STabSidebar *this_00;
  TSharedRef<SDockTab,1> *pTVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float fStackX_c;
  FSlateRect local_f8;
  FSlateRect local_e8;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  TVector2<float>_u_0 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  TVector2<float>_u_0_s_0 local_a4;
  TVector2<float>_u_0_s_0 local_98;
  TSharedRef<SDockTab,1> local_90;
  TSharedRef<SDockTab,1> local_80 [6];
  
  EVar4 = None;
  if (this->bCanHaveSidebar == false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2598829537659715129>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x1c7,"bCanHaveSidebar");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
    goto LAB_14270c76f;
  }
  pFVar5 = SWidget::GetPaintSpaceGeometry((SWidget *)this);
  local_c4 = pFVar5->Scale;
  local_a4 = (pFVar5->AbsolutePosition).field0_0x0._s_0;
  local_res8 = SUB84(pFVar5->Size,0);
  fStackX_c = SUB84(pFVar5->Size,4);
  local_d8._s_0.X = local_c4 * 0.0 + local_a4.X;
  local_d8._s_0.Y = local_c4 * 0.0 + local_a4.Y;
  local_d0 = local_res8 * local_c4;
  local_cc = local_c4 * 0.0;
  local_c8 = local_c4 * 0.0;
  local_c4 = fStackX_c * local_c4;
  FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_d8._s_0,&local_f8);
  fVar10 = local_f8.Right * __real_3f000000;
  pFVar5 = SWidget::GetPaintSpaceGeometry((SWidget *)param_1->Object);
  local_b0 = pFVar5->Scale;
  local_98 = (pFVar5->AbsolutePosition).field0_0x0._s_0;
  local_res8 = SUB84(pFVar5->Size,0);
  fStackX_c = SUB84(pFVar5->Size,4);
  local_c0._s_0.X = local_b0 * 0.0 + local_98.X;
  local_c0._s_0.Y = local_b0 * 0.0 + local_98.Y;
  local_b8 = local_res8 * local_b0;
  local_b4 = local_b0 * 0.0;
  local_ac = fStackX_c * local_b0;
  local_b0 = local_b0 * 0.0;
  FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_c0._s_0,&local_e8);
  if (local_e8.Bottom <= local_f8.Bottom) {
    local_f8.Bottom = local_e8.Bottom;
  }
  if (local_f8.Top <= local_e8.Top) {
    local_f8.Top = local_e8.Top;
  }
  fVar7 = local_e8.Right;
  if (fVar10 <= local_e8.Right) {
    fVar7 = fVar10;
  }
  if (local_f8.Left <= local_e8.Left) {
    local_f8.Left = local_e8.Left;
  }
  if ((local_f8.Bottom < local_f8.Top) || (fVar7 < local_f8.Left)) {
    fVar7 = local_f8.Right;
    if (local_e8.Right <= local_f8.Right) {
      fVar7 = local_e8.Right;
    }
    local_e8.Right = fVar7;
    bVar3 = false;
    if (fVar10 <= local_e8.Left) {
      fVar10 = local_e8.Left;
    }
    local_f8.Left = 0.0;
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    local_e8.Left = fVar10;
    if (local_f8.Top <= local_f8.Bottom) goto LAB_14270c61a;
LAB_14270c623:
    bVar2 = false;
    local_e8.Left = 0.0;
    local_f8.Top = 0.0;
    local_e8.Right = 0.0;
    local_f8.Bottom = 0.0;
  }
  else {
    bVar3 = true;
    if (local_f8.Right <= local_e8.Right) {
      local_e8.Right = local_f8.Right;
    }
    fVar8 = local_f8.Bottom;
    fVar9 = local_f8.Top;
    if (local_e8.Left <= fVar10) {
      local_e8.Left = fVar10;
    }
LAB_14270c61a:
    if (local_e8.Right < local_e8.Left) goto LAB_14270c623;
    bVar2 = true;
  }
  if (bVar3) {
    if ((bVar2) &&
       ((fVar7 - local_f8.Left) * (fVar8 - fVar9) <=
        (local_e8.Right - local_e8.Left) * (local_f8.Bottom - local_f8.Top))) goto LAB_14270c6fc;
    EVar4 = Left;
    if (((this->LeftSidebar).Object == (STabSidebar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
    local_90.Object = param_1->Object;
    this_00 = (this->LeftSidebar).Object;
    local_90.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = &local_90;
  }
  else {
    if ((!bVar2) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2598829537659715094>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                           ,0x1ea,"bOverlapsRight"), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
LAB_14270c6fc:
    EVar4 = Right;
    if (((this->RightSidebar).Object == (STabSidebar *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
    local_80[0].Object = param_1->Object;
    this_00 = (this->RightSidebar).Object;
    local_80[0].SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_80[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_80[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_80[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = local_80;
  }
  STabSidebar::AddTab(this_00,pTVar6);
LAB_14270c76f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return EVar4;
}

// CleanPanelDrawer @ 142712030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::CleanPanelDrawer(SDockingArea *this)

{
  undefined1 *puVar1;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *this_00;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPanelDrawerData *pFVar4;
  SPanelDrawerArea *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  ETabRole EVar8;
  atomic<int> aVar9;
  SDockTab *pSVar10;
  TSharedPtr<SDockTab,1> *this_01;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> local_48;
  TSharedPtr<SDockingArea,1> local_38;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  GetTopLevelDockingArea(this,&local_38);
  if (local_38.Object == (SDockingArea *)0x0) goto LAB_142712110;
  pTVar3 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar3->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar7 == (atomic<int>)0x0) goto LAB_142712095;
      LOCK();
      aVar9 = pTVar3->SharedReferenceCount;
      bVar12 = aVar7 == aVar9;
      if (bVar12) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar9 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar9;
    } while (!bVar12);
    pSVar5 = (this->PanelDrawerPtr).Object;
    pTVar11 = pTVar3;
    if (pSVar5 != (SPanelDrawerArea *)0x0) {
      if (pSVar5->bIsOpen == false) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar11 = (pSVar5->PanelDrawerData).SharedReferenceCount.ReferenceController;
        pFVar4 = (pSVar5->PanelDrawerData).Object;
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar4 != (FPanelDrawerData *)0x0) &&
           (this_01 = &pFVar4->HostedTab, this_01->Object != (SDockTab *)0x0)) {
          pSVar10 = TSharedPtr<SDockTab,1>::operator->(this_01);
          EVar8 = SDockTab::GetTabRole(pSVar10);
          if (EVar8 == NomadTab) {
            if (pSVar5->bIsOpen == false) {
              local_48.Object = (FPanelDrawerData *)0x0;
              local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
            }
            else {
              local_48.Object = (pSVar5->PanelDrawerData).Object;
              local_48.SharedReferenceCount.ReferenceController =
                   (pSVar5->PanelDrawerData).SharedReferenceCount.ReferenceController;
              if (local_48.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
            }
            TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator=
                      (&(local_38.Object)->HiddenPanelDrawerTabToReopenOnRestore,&local_48);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_48.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            pTVar11 = pTVar3;
            goto LAB_142712095;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      pTVar11 = pTVar3;
    }
  }
LAB_142712095:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (((((local_38.Object)->HiddenPanelDrawerTabToReopenOnRestore).Object == (FPanelDrawerData *)0x0
       ) && (pFVar4 = (this->HiddenPanelDrawerTabToReopenOnRestore).Object,
            pFVar4 != (FPanelDrawerData *)0x0)) && ((pFVar4->HostedTab).Object != (SDockTab *)0x0))
  {
    pSVar10 = TSharedPtr<SDockTab,1>::operator->(&pFVar4->HostedTab);
    EVar8 = SDockTab::GetTabRole(pSVar10);
    if (EVar8 == NomadTab) {
      if ((local_38.Object == (SDockingArea *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator=
                (&(local_38.Object)->HiddenPanelDrawerTabToReopenOnRestore,
                 &this->HiddenPanelDrawerTabToReopenOnRestore);
    }
  }
LAB_142712110:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
      (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_28) {
    (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  this_00 = &this->InactivePanelDrawerTabs;
  bVar12 = *(int *)&(this->InactivePanelDrawerTabs).field_0x48 < 2;
  if (bVar12) {
    TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->InactivePanelDrawerTabs).field_0x8);
  puVar1 = &(this->InactivePanelDrawerTabs).field_0xc;
  *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x34 = 0;
  *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->InactivePanelDrawerTabs).field_0x2c;
  *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InactivePanelDrawerTabs).field_0x10,0
              );
  }
  if (bVar12) {
    return;
  }
  *(undefined4 *)&(this->InactivePanelDrawerTabs).field_0x48 = 1;
  TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
  ::Rehash((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
            *)this_00);
  return;
}

// CleanUp @ 1427122f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::CleanUp(SDockingArea *this,ELayoutModification param_1)

{
  FPrivateApi *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  TSharedRef<SWidget,1> *pTVar7;
  SWindow *pSVar8;
  SWindow *pSVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  SWindow *pSVar12;
  bool bVar13;
  TSharedRef<SDockingArea,1> local_58;
  TSharedRef<SDockingArea,1> local_48;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  iVar5 = (**(code **)(this->_padding_ + 0x290))();
  if (iVar5 == 0) {
    this->bIsCenterTargetVisible = false;
    UpdateWindowChromeAndSidebar(this);
    return;
  }
  pSVar9 = (SWindow *)0x0;
  this->bIsCenterTargetVisible = true;
  pSVar12 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar12;
  pSVar11 = pSVar9;
  if (pSVar12 != (SWindow *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar12->_padding_;
    do {
      pSVar8 = pSVar9;
      pSVar11 = (SWindow *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142712356;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar12->_padding_;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    pSVar8 = pSVar12;
    pSVar11 = (this->ParentWindowPtr).Object;
  }
LAB_142712356:
  if ((this->bManageParentWindow == false) || (pSVar11 == (SWindow *)0x0)) goto LAB_142712519;
  if (param_1 != TabRemoval_Closed) {
    if (param_1 != TabRemoval_DraggedOut) goto LAB_142712519;
    this->bCleanUpUponTabRelocation = true;
    SWindow::HideWindow(pSVar11);
    pSVar12 = (SWindow *)(this->MyTabManager).WeakReferenceCount.ReferenceController;
    pSVar11 = pSVar12;
    if (pSVar12 == (SWindow *)0x0) {
LAB_142712495:
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar12 = pSVar11;
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      aVar4 = *(atomic<int> *)&pSVar12->_padding_;
      do {
        pSVar11 = pSVar9;
        if (aVar4 == (atomic<int>)0x0) goto LAB_142712495;
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar12->_padding_;
        bVar13 = aVar4 == aVar6;
        if (bVar13) {
          *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar13);
      pSVar9 = (SWindow *)(this->MyTabManager).Object;
      pSVar11 = pSVar12;
      if (pSVar9 == (SWindow *)0x0) goto LAB_142712495;
    }
    pFVar1 = ((TSharedRef<FTabManager::FPrivateApi,1> *)&pSVar9->_padding_)->Object;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    local_48.Object = (SDockingArea *)pTVar7->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FTabManager::FPrivateApi::OnDockAreaClosing(pFVar1,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar12);
    goto LAB_142712519;
  }
  pSVar12 = (SWindow *)(this->MyTabManager).WeakReferenceCount.ReferenceController;
  pSVar10 = pSVar12;
  if (pSVar12 == (SWindow *)0x0) {
LAB_1427123a5:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar12 = pSVar10;
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    aVar4 = *(atomic<int> *)&pSVar12->_padding_;
    do {
      pSVar10 = pSVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1427123a5;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar12->_padding_;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    pSVar9 = (SWindow *)(this->MyTabManager).Object;
    pSVar10 = pSVar12;
    if (pSVar9 == (SWindow *)0x0) goto LAB_1427123a5;
  }
  pFVar1 = ((TSharedRef<FTabManager::FPrivateApi,1> *)&pSVar9->_padding_)->Object;
  pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_38);
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_58.Object = (SDockingArea *)pTVar7->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  FTabManager::FPrivateApi::OnDockAreaClosing(pFVar1,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  SWindow::RequestDestroyWindow(pSVar11);
LAB_142712519:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  UpdateWindowChromeAndSidebar(this);
  return;
}

// CleanUpNodes @ 142712580

/* WARNING: Enum "Type": Some values do not have unique names */

ECleanupRetVal __thiscall SDockingArea::CleanUpNodes(SDockingArea *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDockingSplitter *pSVar4;
  SSplitter *this_00;
  SDockingNode *pSVar5;
  code *pcVar6;
  ECleanupRetVal EVar7;
  bool bVar8;
  ECleanupRetVal EVar9;
  ECleanupRetVal EVar10;
  int iVar11;
  EOrientation EVar12;
  uint uVar13;
  EOrientation EVar14;
  TSharedRef<SDockingNode,1> *pTVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStackX_8 [8];
  ECleanupRetVal EStackX_10;
  TSharedRef<SDockingNode,1> TStack_78;
  TAttribute<EVisibility> TStack_68;
  
  iVar11 = (int)this->_padding_;
  EVar9 = NoTabsUnderNode;
  uVar17 = 0;
  if (0 < iVar11) {
    lVar19 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      lVar18 = this->_padding_;
      EVar10 = (**(code **)(**(longlong **)(lVar18 + lVar19 * 0x10) + 0x290))();
      EVar7 = EVar10;
      if ((int)EVar9 < (int)EVar10) {
        EVar7 = EVar9;
      }
      EVar9 = EVar7;
      EStackX_10 = EVar9;
      iVar11 = (**(code **)(**(longlong **)(lVar18 + lVar19 * 0x10) + 0x248))();
      if (iVar11 == 0) {
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar18 + 8 + lVar19 * 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (EVar10 == NoTabsUnderNode) {
          SDockingSplitter::RemoveChildAt((SDockingSplitter *)this,uVar17);
        }
        else {
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      else if (iVar11 == 1) {
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar18 + 8 + lVar19 * 0x10);
        pSVar4 = *(SDockingSplitter **)(lVar18 + lVar19 * 0x10);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (EVar10 == NoTabsUnderNode) {
          SDockingSplitter::RemoveChildAt((SDockingSplitter *)this,uVar17);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          EVar9 = EStackX_10;
        }
        else {
          if ((pSVar4->Children).ArrayNum != 1) {
            if ((this->_padding_ == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              EVar9 = (*pcVar6)();
              return EVar9;
            }
            EVar14 = SSplitter::GetOrientation((SSplitter *)this->_padding_);
            if (((pSVar4->Splitter).Object == (SSplitter *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              EVar9 = (*pcVar6)();
              return EVar9;
            }
            EVar12 = SSplitter::GetOrientation((pSVar4->Splitter).Object);
            if (EVar12 != EVar14) {
              uVar17 = uVar17 + 1;
              lVar19 = lVar19 + 1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              EVar9 = EStackX_10;
              goto LAB_1427128b3;
            }
          }
          fVar1 = *(float *)&pSVar4->_padding_;
          fVar20 = SDockingSplitter::ComputeChildCoefficientTotal(pSVar4);
          SDockingSplitter::RemoveChildAt((SDockingSplitter *)this,uVar17);
          uVar16 = 0;
          if (0 < (pSVar4->Children).ArrayNum) {
            lVar18 = 0;
            do {
              uVar13 = 0;
              if ((int)uVar16 < (pSVar4->Children).ArrayNum) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                EVar9 = (*pcVar6)();
                return EVar9;
              }
              pFVar2 = (pSVar4->Children).AllocatorInstance.Data;
              TStack_78.Object = *(SDockingNode **)(pFVar2 + lVar18);
              TStack_78.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(pFVar2 + lVar18 + 8);
              if (TStack_78.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_78.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              (TStack_78.Object)->SizeCoefficient =
                   (fVar1 / fVar20) * (TStack_78.Object)->SizeCoefficient;
              (**(code **)((TStack_78.Object)->_padding_ + 0x2a0))(TStack_78.Object);
              SDockingSplitter::AddChildNode((SDockingSplitter *)this,&TStack_78,uVar17);
              uVar17 = uVar17 + 1;
              lVar19 = lVar19 + 1;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_78.SharedReferenceCount.ReferenceController);
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 0x10;
            } while ((int)uVar16 < (pSVar4->Children).ArrayNum);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          EVar9 = EStackX_10;
        }
      }
      else {
        auStackX_8[0] = 0;
        `SDockingSplitter::CleanUpNodes'::__l26::<lambda_1>::operator()(auStackX_8);
      }
LAB_1427128b3:
      iVar11 = (int)this->_padding_;
    } while ((int)uVar17 < iVar11);
  }
  if (iVar11 == 1) {
    iVar11 = (**(code **)(**(longlong **)this->_padding_ + 0x248))();
    if (iVar11 != 1) {
      if (((int)this->_padding_ < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        EVar9 = (*pcVar6)();
        return EVar9;
      }
      iVar11 = (**(code **)(**(longlong **)this->_padding_ + 0x248))();
      if (iVar11 != 2) goto LAB_142712af0;
    }
    if (((int)this->_padding_ < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    pTVar3 = (TReferenceControllerBase<1> *)((undefined8 *)this->_padding_)[1];
    pSVar4 = *(SDockingSplitter **)this->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockingSplitter::RemoveChildAt((SDockingSplitter *)this,0);
    if ((this->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    this_00 = (SSplitter *)this->_padding_;
    if (((pSVar4->Splitter).Object == (SSplitter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      EVar9 = (*pcVar6)();
      return EVar9;
    }
    EVar14 = SSplitter::GetOrientation((pSVar4->Splitter).Object);
    SSplitter::SetOrientation(this_00,EVar14);
    fVar20 = SDockingSplitter::ComputeChildCoefficientTotal(pSVar4);
    fVar1 = *(float *)&pSVar4->_padding_;
    uVar17 = 0;
    if (0 < (pSVar4->Children).ArrayNum) {
      lVar19 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar17 < (pSVar4->Children).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          EVar9 = (*pcVar6)();
          return EVar9;
        }
        pTVar15 = (TSharedRef<SDockingNode,1> *)((pSVar4->Children).AllocatorInstance.Data + lVar19)
        ;
        pSVar5 = pTVar15->Object;
        pSVar5->SizeCoefficient = (fVar1 / fVar20) * pSVar5->SizeCoefficient;
        (**(code **)(pSVar5->_padding_ + 0x2a0))();
        SDockingSplitter::AddChildNode((SDockingSplitter *)this,pTVar15,-1);
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((int)uVar17 < (pSVar4->Children).ArrayNum);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
LAB_142712af0:
  if ((((EVar9 == HistoryTabsUnderNode) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     (0 < *(int *)(this->_padding_ + 8))) {
    TStack_68.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    TStack_68.bIsSet = true;
    TStack_68.Getter._0_8_ = 0;
    TStack_68.Getter._8_8_ = 0;
    TStack_68.Getter._16_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,&TStack_68);
  }
  return EVar9;
}

// ClosePanelDrawer @ 142714220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::ClosePanelDrawer(SDockingArea *this)

{
  SPanelDrawerArea *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SDockTab *this_01;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FPanelDrawerData *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FTabId *local_28;
  FPanelDrawerData **local_20;
  FTabId local_18;
  
  pTVar4 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142714255;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->PanelDrawerPtr).Object;
    if (this_00 != (SPanelDrawerArea *)0x0) {
      if (this_00->bIsOpen == false) {
        local_48 = (FPanelDrawerData *)0x0;
        pTStack_40 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_48 = (this_00->PanelDrawerData).Object;
        pTStack_40 = (this_00->PanelDrawerData).SharedReferenceCount.ReferenceController;
        if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_40->SharedReferenceCount =
               (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (local_48 != (FPanelDrawerData *)0x0) {
        if ((local_48 == (FPanelDrawerData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((local_48->HostedTab).Object != (SDockTab *)0x0) {
          this_01 = TSharedPtr<SDockTab,1>::operator->(&local_48->HostedTab);
          local_28 = SDockTab::GetLayoutIdentifier(this_01,&local_18);
          local_20 = &local_48;
          TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>_>
                    ((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                      *)&this->InactivePanelDrawerTabs,
                     (TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>
                      *)&stack0x00000008,(bool *)&local_28);
        }
      }
      UE::Slate::Private::SPanelDrawerArea::ClosePanel(this_00,true,false);
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
          (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_38) {
        (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
    }
  }
LAB_142714255:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// ClosePanelDrawerForTransfer @ 1427143a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
SDockingArea::ClosePanelDrawerForTransfer
          (SDockingArea *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SPanelDrawerArea *this_00;
  SDockTab *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TSharedPtr<SDockTab,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FPanelDrawerData *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  FTabId *local_48;
  FPanelDrawerData **local_40;
  FTabId local_38;
  
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  pTVar7 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1427143e5;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    this_00 = (this->PanelDrawerPtr).Object;
    pTVar7 = pTVar1;
    if (this_00 != (SPanelDrawerArea *)0x0) {
      if (this_00->bIsOpen == false) {
        local_68 = (FPanelDrawerData *)0x0;
        pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_68 = (this_00->PanelDrawerData).Object;
        pTStack_60 = (this_00->PanelDrawerData).SharedReferenceCount.ReferenceController;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (local_68 != (FPanelDrawerData *)0x0) {
        if ((local_68 == (FPanelDrawerData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
          return pTVar6;
        }
        pSVar2 = (local_68->HostedTab).Object;
        if (pSVar2 != (SDockTab *)0x0) {
          if (__return_storage_ptr__ != &local_68->HostedTab) {
            __return_storage_ptr__->Object = pSVar2;
            (local_68->HostedTab).Object = (SDockTab *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&__return_storage_ptr__->SharedReferenceCount,
                       &(local_68->HostedTab).SharedReferenceCount);
          }
          if ((__return_storage_ptr__->Object == (SDockTab *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TSharedPtr<SDockTab,1> *)(*pcVar3)();
            return pTVar6;
          }
          local_48 = SDockTab::GetLayoutIdentifier(__return_storage_ptr__->Object,&local_38);
          local_40 = &local_68;
          TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>_>
                    ((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                      *)&this->InactivePanelDrawerTabs,
                     (TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>
                      *)&stack0x00000008,(bool *)&local_48);
        }
      }
      UE::Slate::Private::SPanelDrawerArea::ClosePanel(this_00,true,true);
      local_58 = 0;
      FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
          (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_58) {
        (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
    }
  }
LAB_1427143e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// Construct @ 142716400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::Construct
          (SDockingArea *this,FArguments *param_1,TSharedRef<FTabManager,1> *param_2,
          TSharedRef<FTabManager::FArea,1> *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  FPrivateApi *this_00;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  SDockingNode *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FArea *pFVar10;
  code *pcVar11;
  FArguments *pFVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FArguments *pFVar16;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *pTVar17;
  FArguments *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  FSlot *pFVar21;
  FSlotArguments *pFVar22;
  FArguments *pFVar23;
  FText *pFVar24;
  ISlateStyle *pIVar25;
  FTextBlockStyle *pFVar26;
  TSharedRef<STextBlock,1> *pTVar27;
  FSizeParam *pFVar28;
  FArguments *pFVar29;
  FName *pFVar30;
  TSharedRef<SImage,1> *pTVar31;
  TSharedRef<SHorizontalBox,1> *pTVar32;
  FArguments *pFVar33;
  TSharedRef<STabSidebar,1> *pTVar34;
  FSlotArguments *pFVar35;
  FArguments *pFVar36;
  FSlotArguments *pFVar37;
  FArguments *pFVar38;
  TSharedRef<SSplitter,1> *pTVar39;
  TSharedRef<SOverlay,1> *pTVar40;
  FArguments *pFVar41;
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> *pTVar42;
  TSharedRef<SDockingTarget,1> *pTVar43;
  TSharedRef<SWindow,1> *pTVar44;
  TSharedRef<SDockingNode,1> *pTVar45;
  TReferenceControllerBase<1> *pTVar46;
  undefined ***pppuVar47;
  FSlotArguments *pFVar48;
  FSlotArguments *pFVar49;
  FScriptContainerElement *pFVar50;
  FSlotArguments *this_01;
  TReferenceControllerBase<1> *pTVar51;
  undefined1 auStackY_3648 [32];
  FStaticCastTag local_3618 [8];
  FArguments *local_3610;
  T0RequiredArgs local_3608;
  T0RequiredArgs local_3607;
  T0RequiredArgs local_3606;
  T0RequiredArgs local_3605;
  T0RequiredArgs local_3604;
  T0RequiredArgs local_3603;
  T0RequiredArgs local_3602;
  T0RequiredArgs local_3601;
  T0RequiredArgs local_3600;
  T0RequiredArgs local_35ff;
  T0RequiredArgs local_35fe;
  T0RequiredArgs local_35fd;
  T0RequiredArgs local_35fc [4];
  FArguments *local_35f8;
  FLLMScope local_35f0;
  FLLMScope local_35ec;
  FLLMScope local_35e8;
  FLLMScope local_35e4;
  FLLMScope local_35e0;
  FLLMScope local_35dc;
  FLLMScope local_35d8;
  FLLMScope local_35d4 [4];
  TReferenceControllerBase<1> *local_35c8;
  undefined8 uStack_35c0;
  FArguments *local_35b8;
  SHorizontalBox *local_35b0;
  undefined1 local_35a8 [8];
  undefined1 local_35a0 [24];
  SSplitter *local_3588;
  FSharedReferencer<1> local_3580;
  STextBlock *local_3578;
  FSharedReferencer<1> local_3570;
  TSharedRef<FTabManager::FArea,1> *local_3568;
  SHorizontalBox *local_3560;
  FSharedReferencer<1> local_3558;
  uchar local_3550;
  undefined1 local_354f;
  undefined1 local_3548 [8];
  void *pvStack_3540;
  undefined8 local_3538;
  undefined8 local_3530;
  undefined8 uStack_3528;
  undefined1 local_3520;
  undefined1 local_3518 [8];
  ForAnyElementType FStack_3510;
  ulonglong local_3508;
  undefined8 local_3500;
  FSharedReferencer<1> local_34f8;
  undefined8 local_34f0;
  FSharedReferencer<1> local_34e8;
  TSharedPtr<SDockingNode,1> local_34e0;
  TSharedPtr<SDockingNode,1> local_34d0;
  TSharedPtr<SDockingNode,1> local_34c0;
  TSharedPtr<SDockingNode,1> local_34b0;
  TSharedPtr<SDockingNode,1> local_34a0;
  TSharedRef<SOverlay,1> local_3488;
  undefined8 local_3478;
  FSharedReferencer<1> local_3470;
  FSlateBrush *local_3468;
  undefined1 local_3460;
  undefined1 local_3458 [8];
  void *pvStack_3450;
  undefined8 local_3448;
  undefined4 local_3440 [2];
  undefined4 local_3438 [2];
  undefined4 local_3430 [2];
  undefined4 local_3428 [2];
  undefined4 local_3420 [2];
  undefined4 local_3418 [2];
  undefined4 local_3410 [2];
  undefined4 local_3408 [2];
  undefined4 local_3400 [2];
  undefined4 local_33f8 [2];
  undefined4 local_33f0 [2];
  undefined4 local_33e8 [2];
  undefined4 local_33e0 [2];
  TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&> local_33d8;
  FName local_33c8;
  T1RequiredArgs<TSharedRef<SOverlay,1>_const_&> local_33c0;
  FMemScope local_33b8;
  FName local_33b0;
  FMemScope local_33a8;
  FSlotArguments *local_33a0;
  TReferenceControllerBase<1> *local_3398;
  TReferenceControllerBase<1> *local_3390;
  TReferenceControllerBase<1> *local_3388;
  TReferenceControllerBase<1> *local_3380;
  TReferenceControllerBase<1> *local_3378;
  TReferenceControllerBase<1> *local_3370;
  TReferenceControllerBase<1> *local_3368;
  TReferenceControllerBase<1> *local_3360;
  TReferenceControllerBase<1> *local_3358;
  FMemScope local_3350;
  TReferenceControllerBase<1> *local_3348;
  FName local_3340;
  FMemScope local_3338;
  FName local_3330;
  FSlotArguments *local_3328;
  FSlotArguments *local_3320;
  FName local_3318;
  FMemScope local_3310;
  T1RequiredArgs<TSharedRef<SOverlay,1>_const_&> local_3308;
  FName local_3300;
  FMemScope local_32f8;
  FName local_32f0;
  FSlotArguments *local_32e8;
  FMemScope local_32e0;
  FMemScope local_32d8;
  FName local_32d0;
  FName local_32c8;
  undefined4 local_32c0 [2];
  TAttribute<float> local_32b8;
  TAttribute<EVisibility> local_3298;
  TAttribute<EVisibility> local_3278;
  undefined1 local_3258 [8];
  undefined1 local_3250 [24];
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_> local_3238;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_3220;
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_> local_3208;
  undefined8 local_31f0;
  undefined8 uStack_31e8;
  undefined4 local_31e0;
  TSharedRef<SWidget,1> local_31d8;
  TSharedRef<SWidget,1> local_31c8;
  TSharedRef<SWidget,1> local_31b8;
  FScriptContainerElement *local_31a8;
  TReferenceControllerBase<1> **local_31a0;
  TSharedRef<SDockingArea,1> local_3198;
  TSharedRef<SWidget,1> local_3188;
  TSharedRef<SWidget,1> local_3178;
  TSharedRef<SWidget,1> local_3168;
  TSharedRef<SWidget,1> local_3158;
  TSharedRef<SWidget,1> local_3148;
  TSharedRef<SWidget,1> local_3138;
  TSharedRef<SWidget,1> local_3128;
  TSharedRef<SWidget,1> local_3118;
  TSharedRef<SWidget,1> local_3108;
  TSharedRef<SWidget,1> local_30f8;
  FLinearColor_u_0 local_30e8;
  undefined4 local_30d8;
  undefined1 local_30d4;
  undefined8 local_30d0;
  undefined8 uStack_30c8;
  undefined8 local_30c0;
  FDestructionSentinel local_30b8;
  FDestructionSentinel local_30a0;
  longlong *local_3088;
  TAttribute<FText> local_3080;
  TAttribute<FText> local_3050;
  FText local_3020;
  STabSidebar *local_3010;
  TReferenceControllerBase<1> *pTStack_3008;
  longlong local_3000;
  TReferenceControllerBase<1> *pTStack_2ff8;
  STabSidebar *local_2ff0;
  TReferenceControllerBase<1> *pTStack_2fe8;
  TSharedRef<SWidget,1> local_2fd8;
  TSharedRef<SOverlay,1> local_2fc8;
  TSharedRef<SDockingTarget,1> local_2fb8;
  TSharedRef<SDockingTarget,1> local_2fa8;
  TSharedRef<SDockingTarget,1> local_2f98;
  TSharedRef<SDockingTarget,1> local_2f88;
  TSharedRef<SDockingTarget,1> local_2f78;
  TSharedRef<SHorizontalBox,1> local_2f68;
  TSharedRef<STabSidebar,1> local_2f58;
  TSharedRef<SOverlay,1> local_2f48;
  TSharedRef<SSplitter,1> local_2f38;
  TSharedRef<STabSidebar,1> local_2f28;
  TSharedRef<SWindow,1> local_2f18;
  TSharedRef<SDockingNode,1> local_2f08;
  FName local_2ef8;
  TSharedRef<SWidget,1> local_2ef0;
  TSharedRef<SWidget,1> local_2ee0;
  TReferenceControllerBase<1> *local_2ec8;
  undefined4 uStack_2ec0;
  uint uStack_2ebc;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2eb8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2ea0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2e88;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2e70;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2e58;
  TAttribute<EVisibility> local_2e40;
  TAttribute<EVisibility> local_2e20;
  FText local_2e00;
  TSharedRef<STextBlock,1> local_2df0;
  TSharedRef<SDockingArea,1> local_2de0;
  TSharedRef<SWidget,1> local_2dd0;
  TReferenceControllerBase<1> *local_2db8;
  TReferenceControllerBase<1> *pTStack_2db0;
  TSharedRef<SDockingArea,1> local_2da8;
  TSharedRef<SHorizontalBox,1> local_2d98;
  TSharedRef<SImage,1> local_2d88;
  TAttribute<EVisibility> local_2d78;
  TAttribute<EVisibility> local_2d58;
  TAttribute<EVisibility> local_2d38;
  undefined1 local_2d18 [16];
  undefined1 local_2d08 [32];
  undefined1 local_2ce8 [24];
  undefined1 local_2cd0 [16];
  undefined1 local_2cc0 [32];
  undefined1 local_2ca0 [24];
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2c88;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_2c70;
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> local_2c58;
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> local_2c40;
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> local_2c28;
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> local_2c10;
  TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs> local_2bf8;
  undefined8 *local_2be0;
  SImage *local_2bd8;
  FSharedReferencer<1> local_2bd0 [3];
  undefined1 local_2bb8;
  undefined1 local_2bb0 [24];
  undefined4 local_2b98;
  undefined1 local_2b94;
  undefined4 local_2b90;
  undefined1 local_2b8c;
  FSlotArgumentsMixin local_2b88;
  undefined8 *local_2af8 [2];
  TReferenceControllerBase<1> *local_2ae8;
  undefined1 local_2ac8 [40];
  FSlotArgumentsMixin local_2aa0;
  undefined1 local_2a10 [16];
  FSharedReferencer<1> local_2a00 [9];
  TOptional<FSizeParam> local_29b8;
  undefined1 local_2928 [16];
  FSharedReferencer<1> local_2918 [27];
  FSlotArguments local_2840;
  FSlotArguments local_27e0;
  FSlotArguments local_2780;
  FSlotArguments local_2720;
  FSlotArguments local_26c0;
  FSlotArguments local_2660;
  FSlotArguments local_2600;
  FSlotArguments local_25a0;
  FSlotArguments local_2540;
  FSlotArguments local_24e0;
  FSlotArguments local_2480;
  FArguments local_2398;
  FArguments local_2190;
  FArguments local_1f88;
  FArguments local_1d78;
  FArguments local_1b68;
  FArguments local_1958;
  FArguments local_1748;
  FArguments local_1538;
  FArguments local_1338;
  FArguments local_1138;
  FArguments local_f30;
  FArguments local_d28;
  FArguments local_b20;
  FArguments local_890;
  FArguments local_5e8;
  code *local_88;
  undefined **local_78;
  SDockingArea *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3648;
  local_35b8 = param_1;
  local_3568 = param_3;
  TWeakPtr<FTabManager,1>::operator=<FTabManager>(&this->MyTabManager,param_2);
  this_00 = (param_2->Object->PrivateApi).Object;
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ef0);
  TSharedRef<SDockingArea,1>::TSharedRef<SDockingArea,1><SWidget>(&local_3198,pTVar15,local_3618[0])
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ef0.SharedReferenceCount.ReferenceController);
  FTabManager::FPrivateApi::OnDockAreaCreated(this_00,&local_3198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3198.SharedReferenceCount.ReferenceController);
  this->bManageParentWindow = param_1->_ShouldManageParentWindow;
  this->bIsOverlayVisible = false;
  this->bIsCenterTargetVisible = false;
  pFVar35 = (FSlotArguments *)0x0;
  local_35c8 = (TReferenceControllerBase<1> *)TargetCrossVisibility;
  uStack_35c0._0_4_ = 0;
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2ee0);
  TSharedRef<SDockingArea,1>::TSharedRef<SDockingArea,1><SWidget>(&local_2de0,pTVar15,local_3618[0])
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ee0.SharedReferenceCount.ReferenceController);
  local_2ec8 = local_35c8;
  uStack_2ec0 = (undefined4)uStack_35c0;
  uStack_2ebc = uStack_35c0._4_4_;
  TAttribute<EVisibility>::TAttribute<EVisibility><SDockingArea>
            ((TAttribute<EVisibility> *)local_35a8,&local_2de0,(pmf_66f1f6e4 *)&local_2ec8);
  uStack_35c0 = (TReferenceControllerBase<1> *)((ulonglong)uStack_35c0._4_4_ << 0x20);
  local_35c8 = (TReferenceControllerBase<1> *)TargetCrossCenterVisibility;
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2dd0);
  TSharedRef<SDockingArea,1>::TSharedRef<SDockingArea,1><SWidget>(&local_2da8,pTVar15,local_3618[0])
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2dd0.SharedReferenceCount.ReferenceController);
  local_2db8 = local_35c8;
  pTStack_2db0 = uStack_35c0;
  TAttribute<EVisibility>::TAttribute<EVisibility><SDockingArea>
            ((TAttribute<EVisibility> *)local_3258,&local_2da8,(pmf_66f1f6e4 *)&local_2db8);
  pFVar16 = SOverlay::FArguments::FArguments(&local_2398);
  pTVar17 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2c88,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x1e,&local_3608);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar17,&local_3488,pFVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c88._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_2398._Slots.AllocatorInstance.Data,local_2398._Slots.ArrayNum);
  if ((FSlotArguments *)local_2398._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2398._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2398);
  pFVar18 = SHorizontalBox::FArguments::FArguments(&local_2190);
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SDockingArea::Construct'::`2'::<lambda_1>,0,0>::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SDockingArea::Construct'::__l2::<lambda_1>,EVisibility>::Call;
  *(undefined1 *)((longlong)&pFVar18->_padding_ + 1) = 1;
  local_70 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (FWriteAccessScope *)&local_30a0);
  local_3088 = &pFVar18->_padding_;
  puVar19 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_3088);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar19[4] = local_88;
    puVar19[9] = 0;
    if (local_88 != (code *)0x0) {
      pppuVar47 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar47 = local_60;
      }
      (*(code *)**pppuVar47)();
    }
  }
  if (local_30a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30a0.Accessor,&local_30a0);
  }
  pFVar21 = ::operator_new(0x58);
  local_33d8.Value = (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)pFVar35;
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
    local_33d8.Value =
         (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)SHorizontalBox::FSlot::FSlot(pFVar21)
    ;
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2af8,
             (TUniquePtr<SHorizontalBox::FSlot,TDefaultDelete<SHorizontalBox::FSlot>_>)
             &local_33d8.Value);
  local_32b8.Value = 1.0;
  local_32b8.Getter._16_8_ = 0;
  local_32b8.bIsSet = true;
  local_32b8.Getter._0_8_ = 0;
  local_32b8.Getter._8_8_ = 0;
  pFVar22 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_2af8,&local_32b8);
  puVar1 = &pFVar22->field_0x48;
  if (local_32c0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar22->field_0x4c = 1;
  }
  pFVar48 = pFVar35;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar48 = pFVar22;
  }
  if (local_3440 != (undefined4 *)&pFVar48->field_0x50) {
    *(undefined4 *)&pFVar48->field_0x50 = 2;
    pFVar48->field_0x54 = 1;
  }
  pFVar22 = pFVar35;
  if (pFVar48 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar22 = pFVar48;
  }
  pFVar23 = STextBlock::FArguments::FArguments(&local_5e8);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_3020,L"SDockingArea",L"NoTabsDockedText",
                       L"This asset editor has no docked tabs.");
  FText::FText(&local_3080.Value,pFVar24);
  local_3080.bIsSet = true;
  local_3080.Getter._16_8_ = 0;
  local_3080.Getter._0_8_ = 0;
  local_3080.Getter._8_8_ = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_3080);
  ::FName::FName(&local_32c8,"HintText");
  pIVar25 = FAppStyle::Get();
  pFVar26 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar25 + 0xa0))(pIVar25,FTextBlockStyle::TypeName);
  if (pFVar26 == (FTextBlockStyle *)0x0) {
    pFVar26 = FTextBlockStyle::GetDefault();
  }
  pFVar23->_TextStyle = pFVar26;
  FLLMScope::FLLMScope(&local_35d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_32d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_32d8,&local_32d0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_2e88,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x2d,&local_3607);
  FMemScope::~FMemScope(&local_32d8);
  FLLMScope::~FLLMScope(&local_35d8);
  pTVar27 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2e88,&local_2df0,pFVar23);
  pTVar46 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_3578 = pTVar27->Object;
  if (pTVar46 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3570.ReferenceController = pTVar46;
  if ((STextBlock **)&pFVar22->field_0x8 != &local_3578) {
    *(STextBlock **)&pFVar22->field_0x8 = local_3578;
    local_3578 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar22->field_0x10,&local_3570);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3570.ReferenceController);
  pFVar18 = SHorizontalBox::FArguments::operator+(pFVar18,pFVar22);
  pFVar21 = ::operator_new(0x58);
  local_3328 = pFVar35;
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
    local_3328 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_2be0,(FSlot *)&local_3328);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2cd0);
  TOptional<FSizeParam>::operator=(&local_2b88._SizeParam,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ca0);
  if ((void *)local_2ca0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ca0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ca0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2cc0);
  if ((void *)local_2cc0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2cc0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2cc0);
  local_3520 = 1;
  local_3508 = 0;
  local_3530 = ___xmm_40800000408000004080000040800000;
  uStack_3528 = _UNK_1509253f8;
  local_2bb8 = 1;
  local_3518 = (undefined1  [8])0x0;
  FStack_3510.Data = (FScriptContainerElement *)0x0;
  local_2bd0[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_40800000408000004080000040800000;
  local_2bd0[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_1509253f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2bb0,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3518);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3518,
             (FWriteAccessScope *)&local_30b8);
  if (((int)local_3508 != 0) && (FStack_3510.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3510.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3510,0,0,0x10);
    local_3508 = local_3508 & 0xffffffff00000000;
  }
  if (local_30b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30b8.Accessor,&local_30b8);
  }
  if (FStack_3510.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3510.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3518);
  local_2b98 = 2;
  local_2b94 = 1;
  local_2b90 = 2;
  local_2b8c = 1;
  pFVar29 = SImage::FArguments::FArguments(&local_890);
  local_31e0 = CONCAT22(local_31e0._2_2_,3);
  local_30d8 = local_31e0;
  local_31f0 = ___xmm_3f8000003f800000000000003f800000;
  uStack_31e8 = _UNK_15090c6d8;
  local_30d4 = 1;
  local_30e8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_30e8._8_8_ = _UNK_15090c6d8;
  local_30c0 = 0;
  local_30d0 = 0;
  uStack_30c8 = 0;
  pFVar29 = SImage::FArguments::ColorAndOpacity(pFVar29,(TAttribute<FSlateColor> *)&local_30e8._s_0)
  ;
  pFVar30 = ::FName::FName(&local_2ef8,"Icons.Help");
  FVar5 = *pFVar30;
  pIVar25 = FAppStyle::Get();
  local_3468 = (FSlateBrush *)(**(code **)((longlong)*pIVar25 + 0x50))(pIVar25,FVar5,0,0);
  local_3460 = 1;
  local_3448 = 0;
  local_3458 = (undefined1  [8])0x0;
  pvStack_3450 = (void *)0x0;
  (pFVar29->_Image).Value = local_3468;
  (pFVar29->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3458);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3458);
  if (pvStack_3450 != (void *)0x0) {
    FMemory::Free(pvStack_3450);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3458);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_2e00,L"SDockingArea",L"NoTabsDockedTooltip",
                       L"To recover your tabs, you can reopen them from the Window menu, or drag and drop them back from floating windows.\nYou can also reset your editor layout completely from the Window > Load Layout menu, but this affects all editor windows."
                      );
  FText::FText(&local_3050.Value,pFVar24);
  local_3050.bIsSet = true;
  local_3050.Getter._16_8_ = 0;
  local_3050.Getter._0_8_ = 0;
  local_3050.Getter._8_8_ = 0;
  pFVar29 = TSlateBaseNamedArgs<SImage>::ToolTipText
                      ((TSlateBaseNamedArgs<SImage> *)pFVar29,&local_3050);
  FLLMScope::FLLMScope(local_35d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3330 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3338,&local_3330,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2ea0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x37,&local_3606);
  FMemScope::~FMemScope(&local_3338);
  FLLMScope::~FLLMScope(local_35d4);
  pTVar31 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2ea0,&local_2d88,pFVar29);
  pTVar51 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_2bd8 = pTVar31->Object;
  if (pTVar51 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar51->SharedReferenceCount = (atomic<int>)((int)pTVar51->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar51->SharedReferenceCount = (atomic<int>)((int)pTVar51->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3478 = 0;
  local_3470.ReferenceController = pTVar51;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_2bd0,&local_3470);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3470.ReferenceController);
  pFVar18 = SHorizontalBox::FArguments::operator+(pFVar18,(FSlotArguments *)&local_2be0);
  FLLMScope::FLLMScope(&local_35f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3340 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3350,&local_3340,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2eb8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x21,&local_3605);
  FMemScope::~FMemScope(&local_3350);
  FLLMScope::~FLLMScope(&local_35f0);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2eb8,&local_2d98,pFVar18);
  pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_35b0 = pTVar32->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3348 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2eb8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar51);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2ea0._Widget.SharedReferenceCount.ReferenceController);
  if (local_2e00.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2e00.TextData.Reference + 0x10))();
  }
  SImage::FArguments::~FArguments(&local_890);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2b88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2bb0);
  if ((void *)local_2bb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2bb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2bb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bd0[0].ReferenceController);
  if (local_2be0 != (undefined8 *)0x0) {
    (**(code **)*local_2be0)(local_2be0,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2df0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e88._Widget.SharedReferenceCount.ReferenceController);
  if (local_3020.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3020.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5e8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2aa0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ac8);
  if ((void *)local_2ac8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ac8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ac8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2ae8);
  if (local_2af8[0] != (undefined8 *)0x0) {
    (**(code **)*local_2af8[0])(local_2af8[0],1);
  }
  if (local_88 != (code *)0x0) {
    pppuVar47 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar47 = local_60;
    }
    (*(code *)(*pppuVar47)[2])();
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2190._Slots.AllocatorInstance.Data,local_2190._Slots.ArrayNum);
  if ((FSlotArguments *)local_2190._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2190._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2190);
  pFVar16 = SOverlay::FArguments::FArguments(&local_d28);
  local_3550 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_354f = 1;
  local_3538 = 0;
  local_3548 = (undefined1  [8])0x0;
  pvStack_3540 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar16->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3548);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3548);
  if (pvStack_3540 != (void *)0x0) {
    FMemory::Free(pvStack_3540);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3548);
  local_3610 = (FArguments *)SOverlay::Slot(&local_24e0,0);
  pFVar18 = SHorizontalBox::FArguments::FArguments(&local_f30);
  pFVar21 = ::operator_new(0x58);
  local_33a0 = pFVar35;
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
    local_33a0 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2a10,(FSlot *)&local_33a0);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2d18);
  TOptional<FSizeParam>::operator=(&local_29b8,pFVar28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ce8);
  if ((void *)local_2ce8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2ce8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2ce8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2d08);
  if ((void *)local_2d08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2d08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2d08);
  pFVar33 = STabSidebar::FArguments::FArguments(&local_1338);
  pFVar33->_Location = Left;
  local_3298.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_3298.bIsSet = true;
  local_3298.Getter._0_8_ = 0;
  local_3298.Getter._8_8_ = 0;
  local_3298.Getter._16_8_ = 0;
  pFVar33 = TSlateBaseNamedArgs<STabSidebar>::Visibility
                      ((TSlateBaseNamedArgs<STabSidebar> *)pFVar33,&local_3298);
  local_3308.Arg0 = &local_3488;
  FLLMScope::FLLMScope(&local_35ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_32f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_32e0,&local_32f0,true);
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>::
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>
            (&local_3208,"STabSidebar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x49,&local_3308);
  FMemScope::~FMemScope(&local_32e0);
  FLLMScope::~FLLMScope(&local_35ec);
  if (local_3208._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3208._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3208._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_3010 = (this->LeftSidebar).Object;
  pTStack_3008 = (this->LeftSidebar).SharedReferenceCount.ReferenceController;
  (this->LeftSidebar).Object = local_3208._Widget.Object;
  (this->LeftSidebar).SharedReferenceCount.ReferenceController =
       local_3208._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3008);
  pTVar34 = TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>::
            operator<<=(&local_3208,&local_2f28,pFVar33);
  local_2a10._8_8_ = pTVar34->Object;
  local_34f8.ReferenceController = (pTVar34->SharedReferenceCount).ReferenceController;
  if (local_34f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_34f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_34f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_34f8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_34f8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3500 = 0;
  local_3358 = local_34f8.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_2a10 + 0x10),&local_34f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_34f8.ReferenceController);
  local_35f8 = SHorizontalBox::FArguments::operator+(pFVar18,(FSlotArguments *)local_2a10);
  pFVar21 = ::operator_new(0x58);
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
    pFVar35 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  local_3320 = pFVar35;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_2928,(FSlot *)&local_3320);
  pFVar36 = SOverlay::FArguments::FArguments(&local_1138);
  pFVar37 = SOverlay::Slot(&local_2540,0);
  pFVar38 = SSplitter::FArguments::FArguments(&local_b20);
  pFVar38->_Orientation = (EOrientation)local_3568->Object->_padding_;
  FLLMScope::FLLMScope(&local_35e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3318 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3310,&local_3318,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_3220,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x52,&local_3604);
  FMemScope::~FMemScope(&local_3310);
  FLLMScope::~FLLMScope(&local_35e8);
  if (local_3220._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3220._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3220._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_3000 = this->_padding_;
  pTStack_2ff8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_3220._Widget.Object;
  this->_padding_ = (longlong)local_3220._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2ff8);
  pTVar39 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3220,&local_2f38,pFVar38);
  local_3588 = pTVar39->Object;
  local_3580.ReferenceController = (pTVar39->SharedReferenceCount).ReferenceController;
  if (local_3580.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3580.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3580.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3580.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3580.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3360 = local_3580.ReferenceController;
  if ((SSplitter **)&pFVar37->_padding_ != &local_3588) {
    pFVar37->_padding_ = (longlong)local_3588;
    local_3588 = (SSplitter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar37->_padding_,&local_3580);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3580.ReferenceController);
  pFVar36 = SOverlay::FArguments::operator+(pFVar36,pFVar37);
  pFVar37 = SOverlay::Slot(&local_25a0,0);
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_3438 != plVar2) {
    *(undefined4 *)plVar2 = 2;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  this_01 = (FSlotArguments *)0x0;
  pFVar49 = this_01;
  if (plVar2 != (longlong *)0x0) {
    pFVar49 = pFVar37;
  }
  if ((longlong *)local_3430 != &pFVar49->_padding_) {
    *(undefined4 *)&pFVar49->_padding_ = 2;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  pFVar37 = this_01;
  if (pFVar49 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar49;
  }
  local_3560 = local_35b0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3558.ReferenceController = pTVar6;
  if ((SHorizontalBox **)&pFVar37->_padding_ != &local_3560) {
    pFVar37->_padding_ = (longlong)local_35b0;
    local_3560 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar37->_padding_,&local_3558);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3558.ReferenceController);
  pFVar36 = SOverlay::FArguments::operator+(pFVar36,pFVar37);
  FLLMScope::FLLMScope(&local_35e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3300 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_32f8,&local_3300,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_2e58,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x4f,&local_3603);
  FMemScope::~FMemScope(&local_32f8);
  FLLMScope::~FLLMScope(&local_35e4);
  pTVar40 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2e58,&local_2f48,pFVar36);
  local_2928._8_8_ = pTVar40->Object;
  local_34e8.ReferenceController = (pTVar40->SharedReferenceCount).ReferenceController;
  if (local_34e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_34e8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_34e8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_34e8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_34e8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_34f0 = 0;
  local_3368 = local_34e8.ReferenceController;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_2928 + 0x10),&local_34e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_34e8.ReferenceController);
  pFVar18 = SHorizontalBox::FArguments::operator+(local_35f8,(FSlotArguments *)local_2928);
  pFVar21 = ::operator_new(0x58);
  local_32e8 = this_01;
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
    local_32e8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_2480,(FSlot *)&local_32e8);
  pFVar35 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_2480);
  pFVar33 = STabSidebar::FArguments::FArguments(&local_1538);
  pFVar33->_Location = Right;
  local_3278.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_3278.bIsSet = true;
  local_3278.Getter._0_8_ = 0;
  local_3278.Getter._8_8_ = 0;
  local_3278.Getter._16_8_ = 0;
  pFVar33 = TSlateBaseNamedArgs<STabSidebar>::Visibility
                      ((TSlateBaseNamedArgs<STabSidebar> *)pFVar33,&local_3278);
  local_33c0.Arg0 = &local_3488;
  FLLMScope::FLLMScope(&local_35e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_33c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_33b8,&local_33c8,true);
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>::
  TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>
            (&local_3238,"STabSidebar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x60,&local_33c0);
  FMemScope::~FMemScope(&local_33b8);
  FLLMScope::~FLLMScope(&local_35e0);
  if (local_3238._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3238._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3238._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2ff0 = (this->RightSidebar).Object;
  pTStack_2fe8 = (this->RightSidebar).SharedReferenceCount.ReferenceController;
  (this->RightSidebar).Object = local_3238._Widget.Object;
  (this->RightSidebar).SharedReferenceCount.ReferenceController =
       local_3238._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2fe8);
  pTVar34 = TSlateDecl<STabSidebar,RequiredArgs::T1RequiredArgs<TSharedRef<SOverlay,1>_const_&>_>::
            operator<<=(&local_3238,&local_2f58,pFVar33);
  local_3188.Object = (SWidget *)pTVar34->Object;
  local_3370 = (pTVar34->SharedReferenceCount).ReferenceController;
  if (local_3370 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3370->SharedReferenceCount = (atomic<int>)((int)local_3370->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3188.SharedReferenceCount.ReferenceController = local_3370;
  pFVar35 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar35,&local_3188);
  pFVar18 = SHorizontalBox::FArguments::operator+(pFVar18,pFVar35);
  FLLMScope::FLLMScope(&local_35dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_33b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_33a8,&local_33b0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2e70,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x45,&local_3602);
  FMemScope::~FMemScope(&local_33a8);
  FLLMScope::~FLLMScope(&local_35dc);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2e70,&local_2f68,pFVar18);
  local_3178.Object = (SWidget *)pTVar32->Object;
  local_3378 = (pTVar32->SharedReferenceCount).ReferenceController;
  if (local_3378 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3378->SharedReferenceCount = (atomic<int>)((int)local_3378->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3178.SharedReferenceCount.ReferenceController = local_3378;
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3610,&local_3178);
  pFVar16 = SOverlay::FArguments::operator+(pFVar16,pFVar37);
  pFVar37 = SOverlay::Slot(&local_2600,0);
  this->WindowControlsArea = (FOverlaySlot *)pFVar37->_padding_;
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_3428 != plVar2) {
    *(undefined4 *)plVar2 = 0;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  pFVar49 = this_01;
  if (plVar2 != (longlong *)0x0) {
    pFVar49 = pFVar37;
  }
  if ((longlong *)local_3420 != &pFVar49->_padding_) {
    *(undefined4 *)&pFVar49->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  pFVar37 = this_01;
  if (pFVar49 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar49;
  }
  pFVar16 = SOverlay::FArguments::operator+(pFVar16,pFVar37);
  pFVar37 = SOverlay::Slot(&local_2660,0);
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_3418 != plVar2) {
    *(undefined4 *)plVar2 = 1;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  pFVar49 = this_01;
  if (plVar2 != (longlong *)0x0) {
    pFVar49 = pFVar37;
  }
  if ((longlong *)local_3410 != &pFVar49->_padding_) {
    *(undefined4 *)&pFVar49->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  pFVar37 = this_01;
  if (pFVar49 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar49;
  }
  pFVar41 = SDockingTarget::FArguments::FArguments(&local_1748);
  local_2d78.Value.Value.Value = local_35a8[0];
  local_2d78.bIsSet = local_35a8[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2d78.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_35a0);
  pFVar41 = TSlateBaseNamedArgs<SDockingTarget>::Visibility
                      ((TSlateBaseNamedArgs<SDockingTarget> *)pFVar41,&local_2d78);
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3168);
  pTVar46 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar7 = (SDockingNode *)pTVar15->Object;
  if (pTVar46 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3168.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3168.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_34e0.Object = pSVar7;
  local_34e0.SharedReferenceCount.ReferenceController = pTVar46;
  pFVar41 = SDockingTarget::FArguments::OwnerNode(pFVar41,&local_34e0);
  pFVar41->_DockDirection = LeftOf;
  pTVar42 = MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
                      (&local_2c28,"SDockingTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x70,&local_3601);
  pTVar43 = TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2f78,pFVar41);
  local_3158.Object = (SWidget *)pTVar43->Object;
  local_3380 = (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3380 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3380->SharedReferenceCount = (atomic<int>)((int)local_3380->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3158.SharedReferenceCount.ReferenceController = local_3380;
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar37,&local_3158);
  pFVar16 = SOverlay::FArguments::operator+(pFVar16,pFVar37);
  pFVar37 = SOverlay::Slot(&local_26c0,0);
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_3408 != plVar2) {
    *(undefined4 *)plVar2 = 3;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  pFVar49 = this_01;
  if (plVar2 != (longlong *)0x0) {
    pFVar49 = pFVar37;
  }
  if ((longlong *)local_3400 != &pFVar49->_padding_) {
    *(undefined4 *)&pFVar49->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  if (pFVar49 != (FSlotArguments *)0xffffffffffffffb8) {
    this_01 = pFVar49;
  }
  pFVar41 = SDockingTarget::FArguments::FArguments(&local_1958);
  local_2d58.Value.Value.Value = local_35a8[0];
  local_2d58.bIsSet = local_35a8[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2d58.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_35a0);
  pFVar41 = TSlateBaseNamedArgs<SDockingTarget>::Visibility
                      ((TSlateBaseNamedArgs<SDockingTarget> *)pFVar41,&local_2d58);
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3148);
  pTVar51 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar7 = (SDockingNode *)pTVar15->Object;
  if (pTVar51 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3148.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar51->SharedReferenceCount = (atomic<int>)((int)pTVar51->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3148.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar51->SharedReferenceCount = (atomic<int>)((int)pTVar51->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_34d0.Object = pSVar7;
  local_34d0.SharedReferenceCount.ReferenceController = pTVar51;
  pFVar41 = SDockingTarget::FArguments::OwnerNode(pFVar41,&local_34d0);
  pFVar41->_DockDirection = RightOf;
  pTVar42 = MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
                      (&local_2c10,"SDockingTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x79,&local_3600);
  pTVar43 = TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2f88,pFVar41);
  local_3138.Object = (SWidget *)pTVar43->Object;
  local_3388 = (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3388 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3388->SharedReferenceCount = (atomic<int>)((int)local_3388->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3138.SharedReferenceCount.ReferenceController = local_3388;
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)this_01,&local_3138);
  local_3610 = (FArguments *)SOverlay::FArguments::operator+(pFVar16,pFVar37);
  pFVar37 = SOverlay::Slot(&local_2720,0);
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_33f8 != plVar2) {
    *(undefined4 *)plVar2 = 0;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  pFVar49 = (FSlotArguments *)0x0;
  if (plVar2 != (longlong *)0x0) {
    pFVar49 = pFVar37;
  }
  if ((longlong *)local_33f0 != &pFVar49->_padding_) {
    *(undefined4 *)&pFVar49->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  pFVar37 = (FSlotArguments *)0x0;
  if (pFVar49 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar49;
  }
  pFVar41 = SDockingTarget::FArguments::FArguments(&local_1b68);
  local_2d38.Value.Value.Value = local_35a8[0];
  local_2d38.bIsSet = local_35a8[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2d38.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_35a0);
  pFVar41 = TSlateBaseNamedArgs<SDockingTarget>::Visibility
                      ((TSlateBaseNamedArgs<SDockingTarget> *)pFVar41,&local_2d38);
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3128);
  pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar7 = (SDockingNode *)pTVar15->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3128.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3128.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_34c0.Object = pSVar7;
  local_34c0.SharedReferenceCount.ReferenceController = pTVar6;
  pFVar41 = SDockingTarget::FArguments::OwnerNode(pFVar41,&local_34c0);
  pFVar41->_DockDirection = Above;
  pTVar42 = MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
                      (&local_2bf8,"SDockingTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x82,&local_35ff);
  pTVar43 = TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2f98,pFVar41);
  local_3118.Object = (SWidget *)pTVar43->Object;
  local_3390 = (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3390 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3390->SharedReferenceCount = (atomic<int>)((int)local_3390->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3118.SharedReferenceCount.ReferenceController = local_3390;
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar37,&local_3118);
  local_35f8 = (FArguments *)SOverlay::FArguments::operator+((FArguments *)local_3610,pFVar37);
  pFVar37 = SOverlay::Slot(&local_2780,0);
  plVar2 = &pFVar37->_padding_;
  if ((longlong *)local_33e8 != plVar2) {
    *(undefined4 *)plVar2 = 0;
    *(undefined1 *)((longlong)&pFVar37->_padding_ + 4) = 1;
  }
  pFVar49 = (FSlotArguments *)0x0;
  if (plVar2 != (longlong *)0x0) {
    pFVar49 = pFVar37;
  }
  if ((longlong *)local_33e0 != &pFVar49->_padding_) {
    *(undefined4 *)&pFVar49->_padding_ = 3;
    *(undefined1 *)((longlong)&pFVar49->_padding_ + 4) = 1;
  }
  pFVar37 = (FSlotArguments *)0x0;
  if (pFVar49 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar37 = pFVar49;
  }
  pFVar41 = SDockingTarget::FArguments::FArguments(&local_1d78);
  local_2e40.Value.Value.Value = local_35a8[0];
  local_2e40.bIsSet = local_35a8[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2e40.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_35a0);
  local_3610 = TSlateBaseNamedArgs<SDockingTarget>::Visibility
                         ((TSlateBaseNamedArgs<SDockingTarget> *)pFVar41,&local_2e40);
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3108);
  pTVar8 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar7 = (SDockingNode *)pTVar15->Object;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3108.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3108.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_34b0.Object = pSVar7;
  local_34b0.SharedReferenceCount.ReferenceController = pTVar8;
  pFVar41 = SDockingTarget::FArguments::OwnerNode(local_3610,&local_34b0);
  pFVar41->_DockDirection = Below;
  pTVar42 = MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
                      (&local_2c40,"SDockingTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x8b,&local_35fe);
  pTVar43 = TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2fa8,pFVar41);
  local_30f8.Object = (SWidget *)pTVar43->Object;
  local_3398 = (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3398 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3398->SharedReferenceCount = (atomic<int>)((int)local_3398->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30f8.SharedReferenceCount.ReferenceController = local_3398;
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar37,&local_30f8);
  local_35b0 = (SHorizontalBox *)SOverlay::FArguments::operator+((FArguments *)local_35f8,pFVar37);
  local_35f8 = (FArguments *)SOverlay::Slot(&local_27e0,0);
  pFVar41 = SDockingTarget::FArguments::FArguments(&local_1f88);
  local_2e20.Value.Value.Value = local_3258[0];
  local_2e20.bIsSet = local_3258[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_2e20.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_3250);
  local_3610 = TSlateBaseNamedArgs<SDockingTarget>::Visibility
                         ((TSlateBaseNamedArgs<SDockingTarget> *)pFVar41,&local_2e20);
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_31d8);
  pTVar9 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar7 = (SDockingNode *)pTVar15->Object;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31d8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31d8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_34a0.Object = pSVar7;
  local_34a0.SharedReferenceCount.ReferenceController = pTVar9;
  pFVar41 = SDockingTarget::FArguments::OwnerNode(local_3610,&local_34a0);
  pFVar41->_DockDirection = Center;
  pTVar42 = MakeTDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>
                      (&local_2c58,"SDockingTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x92,&local_35fd);
  pTVar43 = TSlateDecl<SDockingTarget,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_2fb8,pFVar41);
  local_31c8.Object = (SWidget *)pTVar43->Object;
  local_3610 = (FArguments *)(pTVar43->SharedReferenceCount).ReferenceController;
  if (local_3610 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_3610)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_3610)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_31c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3610;
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_35f8,&local_31c8);
  pFVar16 = SOverlay::FArguments::operator+((FArguments *)local_35b0,pFVar37);
  pFVar37 = SOverlay::Slot(&local_2840,0);
  FVar13.ReferenceController = local_3488.SharedReferenceCount.ReferenceController;
  local_2fd8.Object = (SWidget *)local_3488.Object;
  local_2fd8.SharedReferenceCount.ReferenceController =
       local_3488.SharedReferenceCount.ReferenceController;
  if (local_3488.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3488.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3488.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar37 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar37,&local_2fd8);
  pFVar16 = SOverlay::FArguments::operator+(pFVar16,pFVar37);
  pTVar17 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_2c70,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                       ,0x41,local_35fc);
  pTVar40 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar17,&local_2fc8,pFVar16);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SOverlay>(&local_31b8,pTVar40);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_31b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_31b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2840);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3610);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fb8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f88._OwnerNode.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1f88);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_27e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2fa8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c40._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d78._OwnerNode.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1d78);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2780);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3390);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2bf8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b68._OwnerNode.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1b68);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2720);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3388);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar51);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1958._OwnerNode.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1958);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_26c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3380);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1748._OwnerNode.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1748);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2660);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2600);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3370);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3238._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1538);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2480);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3368);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e58._Widget.SharedReferenceCount.ReferenceController);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_25a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3360);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3220._Widget.SharedReferenceCount.ReferenceController);
  SSplitter::FArguments::~FArguments(&local_b20);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_2540);
  SOverlay::FArguments::~FArguments(&local_1138);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_2928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3358);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3208._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1338);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_2a10);
  SHorizontalBox::FArguments::~FArguments(&local_f30);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_24e0);
  SOverlay::FArguments::~FArguments(&local_d28);
  pFVar12 = local_35b8;
  this->bCleanUpUponTabRelocation = false;
  if ((local_35b8->_ParentWindow).Object != (SWindow *)0x0) {
    pTVar44 = TSharedPtr<SWindow,1>::ToSharedRef(&local_35b8->_ParentWindow,&local_2f18);
    SetParentWindow(this,pTVar44);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f18.SharedReferenceCount.ReferenceController);
  }
  if ((pFVar12->_InitialContent).Object != (SDockingNode *)0x0) {
    pTVar45 = TSharedPtr<SDockingNode,1>::ToSharedRef(&pFVar12->_InitialContent,&local_2f08);
    SDockingSplitter::AddChildNode((SDockingSplitter *)this,pTVar45,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f08.SharedReferenceCount.ReferenceController);
  }
  pFVar10 = local_3568->Object;
  iVar4 = (pFVar10->InactivePanelDrawerTabs).ArrayNum;
  pFVar50 = (pFVar10->InactivePanelDrawerTabs).AllocatorInstance.Data;
  local_35b8 = (FArguments *)(pFVar50 + (longlong)iVar4 * 0x18);
  while( true ) {
    pFVar12 = local_35b8;
    if ((pFVar10->InactivePanelDrawerTabs).ArrayNum != iVar4) {
      local_3618[0] = (FStaticCastTag)0x0;
      `TCheckedPointerIterator<FTabManager::FPanelDrawerTab_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_3618);
    }
    if ((FArguments *)pFVar50 == pFVar12) break;
    pTVar46 = ::operator_new(0x28);
    if (pTVar46 == (TReferenceControllerBase<1> *)0x0) {
      pTVar46 = (TReferenceControllerBase<1> *)0x0;
      pTVar51 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar46->SharedReferenceCount = (atomic<int>)0x1;
      pTVar51 = pTVar46 + 1;
      pTVar46->WeakReferenceCount = (atomic<int>)0x1;
      pTVar46->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPanelDrawerData_Private_Slate_UE___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&pTVar46[1]._padding_ = 0x3f400000;
      *(undefined4 *)((longlong)&pTVar46[1]._padding_ + 4) = 0x3e800000;
      pTVar46[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar46[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar46[2]._padding_ = 0;
      if ((pTVar51 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    uVar3 = *(undefined4 *)(pFVar50 + 0x14);
    *(undefined4 *)&pTVar51->_padding_ = *(undefined4 *)(pFVar50 + 0x10);
    *(undefined4 *)((longlong)&pTVar51->_padding_ + 4) = uVar3;
    if (pTVar46 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_31a0 = &local_35c8;
    local_35c8 = pTVar51;
    uStack_35c0 = pTVar46;
    local_31a8 = pFVar50;
    TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>_>
              ((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                *)&this->InactivePanelDrawerTabs,&local_33d8,(bool *)&local_31a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_35c0)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46);
    pFVar50 = pFVar50 + 0x18;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3348);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3488.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3250);
  if ((void *)local_3250._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3250._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3250);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_35a0);
  if ((void *)local_35a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_35a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_35a0);
  return;
}

// DetachPanelDrawerArea @ 14272bf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::DetachPanelDrawerArea(SDockingArea *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [3];
  
  if (&this->PanelDrawerPtr != (TWeakPtr<UE::Slate::Private::SPanelDrawerArea,1> *)local_18) {
    pTVar3 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
    (this->PanelDrawerPtr).Object = (SPanelDrawerArea *)0x0;
    (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014272bf52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        return;
      }
    }
  }
  return;
}

// DockFromOutside @ 14272c240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::DockFromOutside(SDockingArea *this,RelativeDirection param_1,FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TSharedRef<SDockingNode,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SDockTab *pSVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  SDockingSplitter *this_00;
  bool bVar10;
  EOrientation EVar11;
  uint uVar12;
  FArguments *pFVar13;
  FStack *pFVar14;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar15;
  FArguments *pFVar16;
  FSharedReferencer<1> FVar17;
  FStack *pFVar18;
  FSharedReferencer<1> FVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  undefined8 local_res18;
  TRawPtrProxy<FTabManager::FSplitter> local_res20;
  TSharedRef<SDockingTabStack,1> local_568;
  TSharedRef<SDockTab,1> local_558;
  FName local_548;
  T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&> local_540;
  FMemScope local_538;
  TRawPtrProxy<FTabManager::FStack> local_530;
  FName local_528;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_520;
  FMemScope local_518;
  TSharedRef<FTabManager::FSplitter,1> local_510;
  TSharedRef<FTabManager::FSplitter,1> local_500;
  TSharedRef<SDockingSplitter,1> local_4e8;
  TSharedRef<SDockingNode,1> local_4d8;
  TSharedRef<FTabManager::FStack,1> local_4c8;
  TSharedRef<SDockingTabStack,1> local_4b8;
  TSharedRef<SDockingTabStack,1> local_4a8;
  TSharedRef<FTabManager::FLayoutNode,1> local_498;
  TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
  local_488;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_470;
  FSlateBaseNamedArgs local_458;
  FArguments local_260;
  
  pFVar1 = (param_2->Content).Object;
  pTVar2 = (param_2->Content).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar11 = SSplitter::GetOrientation((SSplitter *)this->_padding_);
  pFVar18 = (FStack *)0x0;
  if (((((param_1 & ~RightOf) != LeftOf) || (EVar11 != Orient_Horizontal)) &&
      (((param_1 - Above & 0xfffffffd) != 0 || (EVar11 != Orient_Vertical)))) &&
     (1 < (int)this->_padding_)) {
    pFVar13 = SDockingSplitter::FArguments::FArguments((FArguments *)&local_458);
    pFVar14 = ::operator_new(0x38);
    local_res20.Object = (FSplitter *)pFVar18;
    if (pFVar14 != (FStack *)0x0) {
      pFVar14->_padding_ = 0;
      pFVar14->_padding_ = (longlong)&___7FSplitter_FTabManager__6B_;
      pFVar14->_padding_ = 0;
      *(undefined4 *)&pFVar14->_padding_ = 0x3f800000;
      *(EOrientation *)&(pFVar14->Tabs).AllocatorInstance.Data = Orient_Horizontal;
      (((TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_> *)
       &(pFVar14->Tabs).ArrayNum)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar14->bHideTabWell = false;
      *(undefined3 *)&pFVar14->field_0x31 = 0;
      (pFVar14->ForegroundTabId).TabType.ComparisonIndex = 0;
      local_res20.Object = (FSplitter *)pFVar14;
    }
    TSharedRef<FTabManager::FSplitter,1>::
    TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>(&local_500,&local_res20);
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar11 = SSplitter::GetOrientation((SSplitter *)this->_padding_);
    (local_500.Object)->Orientation = EVar11;
    pTVar15 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)
                         &(local_500.Object)->_padding_,&local_498);
    local_510.Object = (FSplitter *)pTVar15->Object;
    local_510.SharedReferenceCount.ReferenceController =
         (pTVar15->SharedReferenceCount).ReferenceController;
    if (local_510.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_510.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_498.SharedReferenceCount.ReferenceController);
    local_540.Arg0 = &local_510;
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_548 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_538,&local_548,true);
    TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
    ::
    TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
              (&local_488,"SDockingSplitter",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
               ,0x3af,&local_540);
    FMemScope::~FMemScope(&local_538);
    FLLMScope::~FLLMScope(local_res10);
    TSlateDecl<SDockingSplitter,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FSplitter,1>_&&>_>
    ::operator<<=(&local_488,&local_4e8,pFVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_488._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_510.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_500.SharedReferenceCount.ReferenceController);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_458);
    pFVar14 = pFVar18;
    if (0 < (int)this->_padding_) {
      do {
        this_00 = local_4e8.Object;
        uVar20 = (uint)pFVar14;
        uVar12 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        SDockingSplitter::AddChildNode
                  (this_00,(TSharedRef<SDockingNode,1> *)
                           ((longlong)(int)uVar20 * 0x10 + this->_padding_),-1);
        iVar8 = (int)this->_padding_;
        pFVar14 = (FStack *)(ulonglong)(uVar20 + 1);
      } while ((int)(uVar20 + 1) < iVar8);
      while (0 < iVar8) {
        SDockingSplitter::RemoveChildAt((SDockingSplitter *)this,iVar8 + -1);
        iVar8 = (int)this->_padding_;
      }
    }
    local_4d8.Object = (SDockingNode *)local_4e8.Object;
    local_4d8.SharedReferenceCount.ReferenceController =
         local_4e8.SharedReferenceCount.ReferenceController;
    if (local_4e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockingSplitter::AddChildNode((SDockingSplitter *)this,&local_4d8,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4e8.SharedReferenceCount.ReferenceController);
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar11 = SSplitter::GetOrientation((SSplitter *)this->_padding_);
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SSplitter::SetOrientation((SSplitter *)this->_padding_,(uint)(EVar11 == Orient_Horizontal));
  }
  pFVar16 = SDockingTabStack::FArguments::FArguments(&local_260);
  pFVar14 = ::operator_new(0x50);
  if (pFVar14 != (FStack *)0x0) {
    pFVar14->_padding_ = 0;
    pFVar14->_padding_ = 0;
    *(undefined4 *)&pFVar14->_padding_ = 0x3f800000;
    pFVar14->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (pFVar14->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (((TArray<TSharedRef<FTabManager::FLayoutNode,1>,TSizedDefaultAllocator<32>_> *)
     &(pFVar14->Tabs).ArrayNum)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar14->bHideTabWell = false;
    (pFVar14->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar14->ForegroundTabId).TabType.Number = 0;
    (pFVar14->ForegroundTabId).InstanceId = -1;
    (pFVar14->ForegroundTabId).Flags = SaveLayout;
    (pFVar14->ExtensionId).ComparisonIndex = 0;
    (pFVar14->ExtensionId).Number = 0;
    local_res18 = 0;
    pFVar18 = pFVar14;
  }
  local_530.Object = pFVar18;
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_4c8,&local_530);
  local_520.Arg0 = &local_4c8;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_528 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_518,&local_528,true);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
            (&local_470,"SDockingTabStack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
             ,0x3c8,&local_520);
  FMemScope::~FMemScope(&local_518);
  FLLMScope::~FLLMScope(local_res8);
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>::
  operator<<=(&local_470,&local_568,pFVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_470._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c8.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_260);
  if (param_1 < RightOf) {
    if (((int)this->_padding_ < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar21 = local_568.Object._0_4_;
    uVar22 = local_568.Object._4_4_;
    pTVar4 = (TSharedRef<SDockingNode,1> *)this->_padding_;
    FVar19 = local_568.SharedReferenceCount.ReferenceController;
    local_4a8 = local_568;
    if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar19.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockingSplitter::PlaceNode
              ((SDockingSplitter *)this,(TSharedRef<SDockingNode,1> *)&local_4a8,param_1,pTVar4);
    FVar17.ReferenceController = local_4a8.SharedReferenceCount.ReferenceController;
  }
  else {
    iVar8 = (int)this->_padding_;
    uVar20 = iVar8 - 1;
    uVar12 = 0;
    if ((int)uVar20 < iVar8) {
      uVar12 = ~uVar20 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar21 = local_568.Object._0_4_;
    uVar22 = local_568.Object._4_4_;
    lVar9 = this->_padding_;
    FVar19 = local_568.SharedReferenceCount.ReferenceController;
    lVar3 = this->_padding_;
    local_4b8 = local_568;
    if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar19.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockingSplitter::PlaceNode
              ((SDockingSplitter *)this,(TSharedRef<SDockingNode,1> *)&local_4b8,param_1,
               (TSharedRef<SDockingNode,1> *)((longlong)((int)lVar9 + -1) * 0x10 + lVar3));
    FVar17.ReferenceController = local_4b8.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  if ((pFVar1 == (FDragDropOperation *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar5 = (TReferenceControllerBase<1> *)pFVar1[1]._padding_;
  pSVar6 = (SDockTab *)pFVar1[1]._padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SDockTab *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_558.Object = pSVar6;
  local_558.SharedReferenceCount.ReferenceController = pTVar5;
  if ((pSVar6 == (SDockTab *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SDockingTabStack::OpenTab((SDockingTabStack *)CONCAT44(uVar22,uVar21),&local_558,-1,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_558.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  this->bIsOverlayVisible = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// GatherPersistentLayout @ 142737a90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabManager::FLayoutNode,1> * __thiscall
SDockingArea::GatherPersistentLayout
          (SDockingArea *this,TSharedPtr<FTabManager::FLayoutNode,1> *__return_storage_ptr__)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FTabManager::FPanelDrawerTab,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  SWindow *this_00;
  SPanelDrawerArea *pSVar11;
  code *pcVar12;
  double dVar13;
  FName FVar14;
  FPanelDrawerSize FVar15;
  bool bVar16;
  atomic<int> aVar17;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *pTVar18;
  FSharedReferencer<1> FVar19;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *pTVar20;
  ETabRole EVar21;
  atomic<int> aVar22;
  EOrientation EVar23;
  int iVar24;
  TSharedRef<FTabManager::FArea,1> *pTVar25;
  TSharedPtr<FTabManager::FLayoutNode,1> *pTVar26;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar27;
  SDockTab *pSVar28;
  FTabId *pFVar29;
  FPanelDrawerData *pFVar30;
  TSharedPtr<SWindow,1> *pTVar31;
  int iVar32;
  TReferenceControllerBase<1> *pTVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  TReferenceControllerBase<1> *pTVar37;
  undefined1 *puVar38;
  uint *puVar39;
  longlong lVar40;
  bool bVar41;
  float fVar42;
  float local_res18;
  float fStackX_1c;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_res20;
  FArea *local_278;
  FSharedReferencer<1> FStack_270;
  FSlateRect local_268;
  FName local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  longlong local_238;
  TReferenceControllerBase<1> *pTStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 local_208;
  TReferenceControllerBase<1> *local_200;
  FMargin local_1f8;
  longlong local_1e8;
  TReferenceControllerBase<1> *pTStack_1e0;
  int local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  FSharedReferencer<1> local_1c8;
  undefined8 local_1c0;
  FSharedReferencer<1> local_1b8;
  undefined8 local_1b0;
  FSharedReferencer<1> local_1a8;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TVector2<double>_u_0 local_140;
  TSharedRef<FTabManager::FArea,1> local_130;
  TSharedRef<FTabManager::FLayoutNode,1> local_120;
  TSharedRef<FTabManager::FArea,1> local_110;
  TSharedRef<FTabManager::FLayoutNode,1> local_100;
  TSharedRef<FTabManager::FLayoutNode,1> local_f0;
  TSharedPtr<SWindow,1> local_e0;
  TSharedPtr<SWindow,1> local_d0;
  TSharedRef<FTabManager::FLayoutNode,1> local_c0;
  TSharedRef<FTabManager::FLayoutNode,1> local_b0;
  FTabId local_a0;
  FTabId local_90 [2];
  undefined4 local_64;
  
  local_200 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  bVar16 = false;
  FStack_270.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_200 == (TReferenceControllerBase<1> *)0x0) {
LAB_142737b1a:
    pTVar25 = FTabManager::NewPrimaryArea(&local_110);
    local_1b8.ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
    local_278 = pTVar25->Object;
    if (local_1b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_270,&local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.SharedReferenceCount.ReferenceController);
    bVar16 = true;
  }
  else {
    aVar17 = local_200->SharedReferenceCount;
    do {
      if (aVar17 == (atomic<int>)0x0) {
        local_200 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142737b1a;
      }
      LOCK();
      aVar22 = local_200->SharedReferenceCount;
      bVar41 = aVar17 == aVar22;
      if (bVar41) {
        local_200->SharedReferenceCount = (atomic<int>)((int)aVar17 + 1);
        aVar22 = aVar17;
      }
      UNLOCK();
      aVar17 = aVar22;
    } while (!bVar41);
    this_00 = (this->ParentWindowPtr).Object;
    if ((this_00 == (SWindow *)0x0) || (this->bManageParentWindow == false)) goto LAB_142737b1a;
    SWindow::GetNonMaximizedRectInScreen(this_00,&local_268);
    if (!this_00->bHasOSWindowBorder) {
      SWindow::GetWindowBorderSize(this_00,&local_1f8,false);
      local_268.Right = local_268.Right - (local_1f8.Right + local_1f8.Left);
      local_268.Bottom = local_268.Bottom - (local_1f8.Bottom + local_1f8.Top);
    }
    fVar42 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(local_268.Left,local_268.Top)
    ;
    local_210 = CONCAT44(local_268.Bottom - local_268.Top,local_268.Right - local_268.Left);
    local_res18 = (local_268.Right - local_268.Left) * (__real_3f800000 / fVar42);
    fStackX_1c = (local_268.Bottom - local_268.Top) * (__real_3f800000 / fVar42);
    local_208 = CONCAT44(fStackX_1c,local_res18);
    local_140._s_0.X = (double)local_res18;
    local_140._s_0.Y = (double)fStackX_1c;
    pTVar25 = FTabManager::NewArea(&local_130,(TVector2<double> *)&local_140._s_0);
    local_1c8.ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
    local_278 = pTVar25->Object;
    if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_270,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
    if ((local_278 == (FArea *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) {
      pcVar12 = (code *)swi(3);
      pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
      return pTVar26;
    }
    bVar41 = SWindow::IsWindowMaximized(this_00);
    dVar13 = __real_3ff0000000000000 / (double)fVar42;
    local_278->WindowPlacement = Placement_Specified;
    (local_278->UnscaledWindowPosition).field0_0x0._s_0.X = (double)local_268.Left * dVar13;
    (local_278->UnscaledWindowPosition).field0_0x0._s_0.Y = (double)local_268.Top * dVar13;
    local_278->bIsMaximized = bVar41;
    pTVar27 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&local_278->_padding_,
                         &local_120);
    pTVar33 = (pTVar27->SharedReferenceCount).ReferenceController;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  }
  if ((local_278 == (FArea *)0x0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar41)) {
    pcVar12 = (code *)swi(3);
    pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
    return pTVar26;
  }
  if ((this->_padding_ == 0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar41)) {
    pcVar12 = (code *)swi(3);
    pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
    return pTVar26;
  }
  EVar23 = SSplitter::GetOrientation((SSplitter *)this->_padding_);
  *(EOrientation *)&local_278->_padding_ = EVar23;
  pTVar27 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&local_278->_padding_,
                       &local_100);
  pTVar33 = (pTVar27->SharedReferenceCount).ReferenceController;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  uVar35 = 0;
  if (0 < (int)this->_padding_) {
    lVar40 = 0;
    do {
      uVar36 = 0;
      if ((int)uVar35 < (int)this->_padding_) {
        uVar36 = ~uVar35 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar12 = (code *)swi(3);
        pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
        return pTVar26;
      }
      plVar6 = *(longlong **)(lVar40 + this->_padding_);
      (**(code **)(*plVar6 + 0x288))(plVar6,&local_1e8);
      if (local_1e8 != 0) {
        bVar16 = true;
        if ((local_278 == (FArea *)0x0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar41)) {
          pcVar12 = (code *)swi(3);
          pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
          return pTVar26;
        }
        if ((local_1e8 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar41)) {
          pcVar12 = (code *)swi(3);
          pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
          return pTVar26;
        }
        local_238 = local_1e8;
        pTStack_230 = pTStack_1e0;
        if (pTStack_1e0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_1e0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_1e0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_1e8 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar41)) {
          pcVar12 = (code *)swi(3);
          pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
          return pTVar26;
        }
        if ((((longlong *)local_278->_padding_ <= &local_238) &&
            (&local_238 <
             (longlong *)local_278->_padding_ +
             (longlong)*(int *)((longlong)&local_278->_padding_ + 4) * 2)) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar41)) {
          pcVar12 = (code *)swi(3);
          pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
          return pTVar26;
        }
        iVar24 = (int)local_278->_padding_;
        piVar1 = (int *)((longlong)&local_278->_padding_ + 4);
        if (iVar24 == *piVar1) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&local_278->_padding_,piVar1);
        }
        *(int *)&local_278->_padding_ = iVar24 + 1;
        lVar7 = local_278->_padding_;
        *(longlong *)(lVar7 + (longlong)iVar24 * 0x10) = local_238;
        *(TReferenceControllerBase<1> **)(lVar7 + 8 + (longlong)iVar24 * 0x10) = pTStack_230;
        if (pTStack_230 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_230->SharedReferenceCount =
               (atomic<int>)((int)pTStack_230->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar27 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                            ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&local_278->_padding_,
                             &local_f0);
        pTVar33 = (pTVar27->SharedReferenceCount).ReferenceController;
        if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_230);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33)
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_1e0);
      uVar35 = uVar35 + 1;
      lVar40 = lVar40 + 0x10;
    } while ((int)uVar35 < (int)this->_padding_);
  }
  pTVar33 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  uVar35 = 1;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  uStack_250 = CONCAT35(uStack_250._5_3_,0x1ffffffff);
  local_248 = 0.75;
  fStack_244 = 0.25;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    aVar17 = pTVar33->SharedReferenceCount;
    do {
      if (aVar17 == (atomic<int>)0x0) {
        pTVar33 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142737eb4;
      }
      LOCK();
      aVar22 = pTVar33->SharedReferenceCount;
      bVar41 = aVar17 == aVar22;
      if (bVar41) {
        pTVar33->SharedReferenceCount = (atomic<int>)((int)aVar17 + 1);
        aVar22 = aVar17;
      }
      UNLOCK();
      aVar17 = aVar22;
    } while (!bVar41);
    pSVar11 = (this->PanelDrawerPtr).Object;
    if (pSVar11 != (SPanelDrawerArea *)0x0) {
      if (pSVar11->bIsOpen == false) {
        pTVar37 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar37 = (pSVar11->PanelDrawerData).SharedReferenceCount.ReferenceController;
        pFVar30 = (pSVar11->PanelDrawerData).Object;
        if (pTVar37 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar37->SharedReferenceCount = (atomic<int>)((int)pTVar37->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar30 != (FPanelDrawerData *)0x0) && ((pFVar30->HostedTab).Object != (SDockTab *)0x0)
           ) {
          pSVar28 = TSharedPtr<SDockTab,1>::operator->(&pFVar30->HostedTab);
          EVar21 = SDockTab::GetTabRole(pSVar28);
          if (EVar21 == NomadTab) {
            pTVar31 = GetParentWindow(this,&local_d0);
            uVar36 = 1;
            if (pTVar31->Object == (SWindow *)0x0) goto LAB_1427385c7;
LAB_142738658:
            bVar41 = true;
          }
          else {
            pTVar31 = GetParentWindow(this,&local_e0);
            uVar36 = 2;
            if (pTVar31->Object == (SWindow *)0x0) goto LAB_142738658;
LAB_1427385c7:
            bVar41 = false;
          }
          if ((uVar36 & 2) != 0) {
            local_res20 = (TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
                           *)CONCAT44(local_res20._4_4_,uVar36);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_e0.SharedReferenceCount.ReferenceController);
            uVar36 = (uint)local_res20;
          }
          if ((uVar36 & 1) != 0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.SharedReferenceCount.ReferenceController);
          }
          if (bVar41) {
            pSVar28 = TSharedPtr<SDockTab,1>::operator->(&pFVar30->HostedTab);
            pFVar29 = SDockTab::GetLayoutIdentifier(pSVar28,&local_a0);
            local_248 = (pFVar30->Size).MainContentCoefficient;
            local_258 = pFVar29->TabType;
            uStack_250._0_4_ = pFVar29->InstanceId;
            uStack_250._4_1_ = pFVar29->Flags;
            uStack_250._5_3_ = *(undefined3 *)&pFVar29->field_0xd;
            fStack_244 = (pFVar30->Size).PanelDrawerCoefficient;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar37);
            goto LAB_142737eb4;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar37);
    }
  }
LAB_142737eb4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  if (local_258 == (FName)0x0) {
    pFVar30 = (this->HiddenPanelDrawerTabToReopenOnRestore).Object;
    if ((pFVar30 == (FPanelDrawerData *)0x0) || ((pFVar30->HostedTab).Object == (SDockTab *)0x0))
    goto LAB_142737f9f;
    pSVar28 = TSharedPtr<SDockTab,1>::operator->(&pFVar30->HostedTab);
    pFVar29 = SDockTab::GetLayoutIdentifier(pSVar28,local_90);
    FVar14 = pFVar29->TabType;
    uStack_250._0_4_ = pFVar29->InstanceId;
    uStack_250._4_1_ = pFVar29->Flags;
    uStack_250._5_3_ = *(undefined3 *)&pFVar29->field_0xd;
    local_258 = FVar14;
    pFVar30 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->
                        (&this->HiddenPanelDrawerTabToReopenOnRestore);
    local_248 = (pFVar30->Size).MainContentCoefficient;
    fStack_244 = (pFVar30->Size).PanelDrawerCoefficient;
    if (FVar14 == (FName)0x0) goto LAB_142737f9f;
  }
  if ((local_278 == (FArea *)0x0) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar41)) {
    pcVar12 = (code *)swi(3);
    pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
    return pTVar26;
  }
  FVar15.PanelDrawerCoefficient = fStack_244;
  FVar15.MainContentCoefficient = local_248;
  (local_278->ActivePanelDrawerTab).TabId.TabType = local_258;
  (local_278->ActivePanelDrawerTab).TabId.InstanceId = (undefined4)uStack_250;
  (local_278->ActivePanelDrawerTab).TabId.Flags = uStack_250._4_1_;
  *(undefined3 *)&(local_278->ActivePanelDrawerTab).TabId.field_0xd = uStack_250._5_3_;
  (local_278->ActivePanelDrawerTab).Size = FVar15;
  pTVar27 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&local_278->_padding_,
                       &local_c0);
  pTVar33 = (pTVar27->SharedReferenceCount).ReferenceController;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
LAB_142737f9f:
  puVar2 = &(this->InactivePanelDrawerTabs).field_0x10;
  iVar24 = *(int *)&(this->InactivePanelDrawerTabs).field_0x28;
  local_res20 = &this->InactivePanelDrawerTabs;
  iStack_198 = 0;
  local_180 = 0;
  iStack_184 = 0;
  if (iVar24 != 0) {
    puVar39 = *(uint **)&(this->InactivePanelDrawerTabs).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)puVar2;
    }
    uVar36 = *puVar39;
    while (uVar36 == 0) {
      lVar40 = (longlong)iStack_198;
      local_180 = local_180 + 0x20;
      iStack_198 = iStack_198 + 1;
      iStack_184 = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_14273802e;
      uVar36 = puVar39[lVar40 + 1];
    }
    uVar35 = -uVar36 & uVar36;
    uVar5 = (ulonglong)uVar35 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_1d8 = (int)lVar40;
    iStack_184 = local_180 + -1 + local_1d8;
    if (iVar24 < iStack_184) {
      iStack_184 = iVar24;
    }
  }
LAB_14273802e:
  uVar36 = *(uint *)&(this->InactivePanelDrawerTabs).field_0x28;
  uStack_17c = local_64;
  uVar34 = uVar36 & 0xffffffe0;
  iStack_178 = *(int *)&(this->InactivePanelDrawerTabs).field_0x8 -
               *(int *)&(this->InactivePanelDrawerTabs).field_0x34;
  uStack_188 = 0xffffffff;
  TStack_168._padding_ = CONCAT44(uVar35,iStack_198);
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar32 = (int)uVar36 >> 5;
  TStack_168._28_4_ = local_64;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_1a0 = local_res20;
  uStack_194 = uVar35;
  local_190 = puVar2;
  local_170 = local_res20;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar36 < 0) || (iVar24 < (int)uVar36)) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar41)) {
    pcVar12 = (code *)swi(3);
    pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
    return pTVar26;
  }
  pTVar18 = local_res20;
  uVar35 = *(uint *)&(this->InactivePanelDrawerTabs).field_0x28;
  if (uVar36 != uVar35) {
    puVar38 = *(undefined1 **)&(this->InactivePanelDrawerTabs).field_0x20;
    if (puVar38 == (undefined1 *)0x0) {
      puVar38 = puVar2;
    }
    uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar32 * 4);
    while (uVar36 == 0) {
      lVar40 = (longlong)iVar32;
      uVar34 = uVar34 + 0x20;
      iVar32 = iVar32 + 1;
      uVar36 = uVar35;
      if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar32)
      goto LAB_142738160;
      uVar36 = *(uint *)(puVar38 + lVar40 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar40 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    local_1d4 = (int)lVar40;
    uVar36 = (uVar34 - 1) + local_1d4;
    if ((int)uVar35 < (int)uVar36) {
      uVar36 = uVar35;
    }
  }
LAB_142738160:
  while( true ) {
    pTVar20 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_res18 = (float)((uint)local_res18 & 0xffffff00);
      `TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res18);
    }
    lVar40 = (longlong)TStack_168.CurrentBitIndex;
    if (((TStack_168.CurrentBitIndex == uVar36) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar20 == pTVar18)) {
      if (!bVar16) {
        local_1a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_278 = (FArea *)0x0;
        local_1b0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_270,&local_1a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.ReferenceController);
      }
      FVar19.ReferenceController = FStack_270.ReferenceController;
      __return_storage_ptr__->Object = (FLayoutNode *)local_278;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           FStack_270.ReferenceController;
      if (FStack_270.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_270.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_270.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_200)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar19.ReferenceController);
      return __return_storage_ptr__;
    }
    lVar7 = *(longlong *)pTVar20;
    local_218 = 0x3f400000;
    uStack_214 = 0x3e800000;
    puVar4 = (undefined8 *)(lVar7 + lVar40 * 0x28);
    local_228 = *puVar4;
    uStack_220 = puVar4[1];
    if ((*(longlong *)(lVar7 + 0x10 + lVar40 * 0x28) == 0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) {
      pcVar12 = (code *)swi(3);
      pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
      return pTVar26;
    }
    puVar8 = *(undefined4 **)(lVar7 + 0x10 + lVar40 * 0x28);
    local_218 = *puVar8;
    uStack_214 = puVar8[1];
    if ((local_278 == (FArea *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) break;
    pTVar3 = &local_278->InactivePanelDrawerTabs;
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 <
         pFVar9 + (longlong)(local_278->InactivePanelDrawerTabs).ArrayMax * 0x18)) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar41)) {
      pcVar12 = (code *)swi(3);
      pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
      return pTVar26;
    }
    iVar24 = (local_278->InactivePanelDrawerTabs).ArrayNum;
    piVar1 = &(local_278->InactivePanelDrawerTabs).ArrayMax;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&pTVar3->AllocatorInstance,piVar1);
    }
    (local_278->InactivePanelDrawerTabs).ArrayNum = iVar24 + 1;
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    pFVar9 = pFVar10 + (longlong)iVar24 * 0x18;
    *(undefined8 *)pFVar9 = local_228;
    *(undefined8 *)(pFVar9 + 8) = uStack_220;
    *(ulonglong *)(pFVar10 + (longlong)iVar24 * 0x18 + 0x10) = CONCAT44(uStack_214,local_218);
    pTVar27 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                        ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&local_278->_padding_,
                         &local_b0);
    pTVar33 = (pTVar27->SharedReferenceCount).ReferenceController;
    if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  pcVar12 = (code *)swi(3);
  pTVar26 = (TSharedPtr<FTabManager::FLayoutNode,1> *)(*pcVar12)();
  return pTVar26;
}

// GetAllSidebarTabs @ 14273a060

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> * __thiscall
SDockingArea::GetAllSidebarTabs
          (SDockingArea *this,
          TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> local_28;
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->LeftSidebar).Object == (STabSidebar *)0x0) {
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
  pTVar3 = STabSidebar::GetAllTabs((this->LeftSidebar).Object,&local_28);
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_>::
  Append<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,pTVar3);
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((TSharedRef<SDockTab,1> *)local_28.AllocatorInstance.Data != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((this->RightSidebar).Object == (STabSidebar *)0x0) {
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
  pTVar3 = STabSidebar::GetAllTabs((this->RightSidebar).Object,&local_18);
  TArray<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_>::
  Append<TSharedRef<SDockTab,1>,TSizedDefaultAllocator<32>_>(__return_storage_ptr__,pTVar3);
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TSharedRef<SDockTab,1> *)local_18.AllocatorInstance.Data != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDockArea @ 14273d860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
SDockingArea::GetDockArea(SDockingArea *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingArea *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = (SDockingArea *)pTVar3->Object;
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

// GetDockArea @ 14273d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea_const_,1> * __thiscall
SDockingArea::GetDockArea
          (SDockingArea *this,TSharedPtr<SDockingArea_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingArea *pSVar2;
  TSharedRef<SWidget_const_,1> *pTVar3;
  TSharedRef<SWidget_const_,1> local_18;
  
  pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pSVar2 = (SDockingArea *)pTVar3->Object;
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

// GetNodeType @ 142740720

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SDockingArea::GetNodeType(SDockingArea *this)

{
  return DockArea;
}

// GetPanelDrawerArea @ 142742150

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> * __thiscall
SDockingArea::GetPanelDrawerArea
          (SDockingArea *this,
          TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SPanelDrawerArea *)0x0;
  pTVar1 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->PanelDrawerPtr).Object;
  }
  return __return_storage_ptr__;
}

// GetPanelDrawerHostedTab @ 142742210

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
SDockingArea::GetPanelDrawerHostedTab
          (SDockingArea *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SPanelDrawerArea *pSVar2;
  FPanelDrawerData *pFVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar1 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142742246;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    pSVar2 = (this->PanelDrawerPtr).Object;
    pTVar6 = pTVar1;
    if (pSVar2 != (SPanelDrawerArea *)0x0) {
      pFVar3 = (pSVar2->PanelDrawerData).Object;
      if (pFVar3 == (FPanelDrawerData *)0x0) {
        __return_storage_ptr__->Object = (SDockTab *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        __return_storage_ptr__->Object = (pFVar3->HostedTab).Object;
        pTVar6 = (pFVar3->HostedTab).SharedReferenceCount.ReferenceController;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          return __return_storage_ptr__;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
  }
LAB_142742246:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  __return_storage_ptr__->Object = (SDockTab *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPanelDrawerKeepAliveTabs @ 1427422d0

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
* __thiscall
SDockingArea::GetPanelDrawerKeepAliveTabs
          (SDockingArea *this,
          TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
          *__return_storage_ptr__)

{
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  SPanelDrawerArea *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *pTVar8;
  ETabRole EVar9;
  atomic<int> aVar10;
  ulonglong uVar11;
  TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
  *pTVar12;
  SDockTab *pSVar13;
  TSharedPtr<SWindow,1> *pTVar14;
  TSharedRef<SDockTab,1> *pTVar15;
  FTabId *pFVar16;
  FPanelDrawerData *pFVar17;
  int iVar18;
  undefined1 *puVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong lVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint uVar23;
  int iVar24;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *this_00;
  uint uVar25;
  TReferenceControllerBase<1> *pTVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  uint *puVar30;
  TReferenceControllerBase<1> *pTVar31;
  TSharedPtr<SDockTab,1> *this_01;
  bool bVar32;
  uint local_res10 [2];
  undefined4 local_res18;
  int local_res20;
  uint local_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  TSharedRef<SDockTab,1> local_160;
  int local_150;
  int local_14c;
  TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_140;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_120;
  uint uStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSharedPtr<SWindow,1> local_c0;
  TSharedRef<SDockTab,1> local_b0;
  TSharedRef<SDockTab,1> local_a0;
  FTabId local_90;
  FTabId local_80 [2];
  undefined4 local_54;
  
  pTVar26 = (TReferenceControllerBase<1> *)0x0;
  uVar25 = 0;
  local_res10[0] = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_188 = 1;
  uVar23 = (*(int *)&(this->InactivePanelDrawerTabs).field_0x8 -
           *(int *)&(this->InactivePanelDrawerTabs).field_0x34) + 1;
  if (uVar23 != 0) {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)__return_storage_ptr__,uVar23);
    if (uVar23 < 4) {
      uVar23 = 1;
    }
    else {
      uVar28 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_res18 = (undefined4)lVar21;
      uVar23 = 1 << ((byte)lVar21 & 0x1f);
    }
    if ((*(int *)&__return_storage_ptr__->field_0x48 == 0) ||
       (*(int *)&__return_storage_ptr__->field_0x48 < (int)uVar23)) {
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar23;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar23 != 0) {
        uVar27 = uVar23;
        if (uVar23 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar27 = 0;
            goto LAB_1427423c1;
          }
        }
        else {
LAB_1427423c1:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar27,4);
        }
        if (0 < (int)uVar23) {
          uVar28 = (ulonglong)uVar23;
          pTVar20 = pTVar26;
          do {
            puVar19 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar19 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar11 = (longlong)(int)uVar23 - 1U & (ulonglong)pTVar20;
            pTVar20 = (TReferenceControllerBase<1> *)((longlong)&pTVar20->_padding_ + 1);
            *(undefined4 *)(puVar19 + uVar11 * 4) = 0xffffffff;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
      }
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        uVar23 = *(uint *)&__return_storage_ptr__->field_0x28;
        local_140.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
        uStack_17c = 1;
        local_180 = 0;
        uStack_16c = 0;
        uStack_168 = 0;
        pTVar20 = pTVar26;
        if (uVar23 != 0) {
          puVar30 = *(uint **)&__return_storage_ptr__->field_0x20;
          if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
            puVar30 = (uint *)local_140.Array;
          }
          uVar27 = *puVar30;
          pTVar31 = pTVar26;
          while (uVar27 == 0) {
            uStack_168 = (int)pTVar31 + 0x20;
            pTVar31 = (TReferenceControllerBase<1> *)(ulonglong)uStack_168;
            iVar18 = (int)pTVar20;
            local_180 = iVar18 + 1;
            pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)local_180;
            if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_180)
            goto LAB_1427424b2;
            uVar27 = puVar30[(longlong)iVar18 + 1];
          }
          uStack_17c = -uVar27 & uVar27;
          uVar28 = (ulonglong)uStack_17c * 2 + 1;
          lVar21 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_res20 = (int)lVar21;
          uStack_16c = (uStack_168 - 1) + local_res20;
          pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)uStack_16c;
          if ((int)uVar23 < (int)uStack_16c) {
LAB_1427424b2:
            pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)uVar23;
            uStack_16c = uVar23;
          }
        }
        local_140._padding_ = CONCAT44(uStack_17c,local_180);
        local_140.CurrentBitIndex = uStack_16c;
        local_140.UnvisitedBitMask = 0xffffffff;
        local_140._28_4_ = uStack_164;
        local_140.BaseBitIndex = uStack_168;
        local_148 = __return_storage_ptr__;
        if ((int)pTVar20 < (int)uVar23) {
          do {
            iVar18 = (int)pTVar20;
            uVar2 = *(undefined8 *)(*(longlong *)local_148 + (longlong)iVar18 * 0x28);
            lVar21 = *(longlong *)local_148 + (longlong)iVar18 * 0x28;
            uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar23 = (uVar23 + (int)((ulonglong)uVar2 >> 0x20) ^ *(uint *)(lVar21 + 8)) &
                     *(int *)&__return_storage_ptr__->field_0x48 - 1U;
            *(uint *)(lVar21 + 0x24) = uVar23;
            puVar19 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar19 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar28 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar23;
            *(undefined4 *)(lVar21 + 0x20) = *(undefined4 *)(puVar19 + uVar28 * 4);
            *(int *)(puVar19 + uVar28 * 4) = iVar18;
            local_140.UnvisitedBitMask = local_140.UnvisitedBitMask & ~local_140._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_140);
            pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_140.CurrentBitIndex;
          } while (local_140.CurrentBitIndex < (local_140.Array)->NumBits);
        }
      }
    }
  }
  pTVar20 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  pTVar31 = pTVar20;
  if (pTVar20 == (TReferenceControllerBase<1> *)0x0) goto LAB_142742595;
  aVar7 = pTVar20->SharedReferenceCount;
  do {
    pTVar31 = pTVar26;
    if (aVar7 == (atomic<int>)0x0) goto LAB_142742595;
    LOCK();
    aVar10 = pTVar20->SharedReferenceCount;
    bVar32 = aVar7 == aVar10;
    if (bVar32) {
      pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
      aVar10 = aVar7;
    }
    UNLOCK();
    aVar7 = aVar10;
  } while (!bVar32);
  pSVar5 = (this->PanelDrawerPtr).Object;
  pTVar31 = pTVar20;
  if (pSVar5 == (SPanelDrawerArea *)0x0) goto LAB_142742595;
  if (pSVar5->bIsOpen == false) {
    pTVar31 = (TReferenceControllerBase<1> *)0x0;
LAB_1427428c4:
    this_00 = &this->HiddenPanelDrawerTabToReopenOnRestore;
    if ((this_00->Object != (FPanelDrawerData *)0x0) &&
       (pFVar17 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->(this_00),
       (pFVar17->HostedTab).Object != (SDockTab *)0x0)) {
      if ((this_00->Object == (FPanelDrawerData *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      pTVar15 = TSharedPtr<SDockTab,1>::ToSharedRef(&this_00->Object->HostedTab,&local_a0);
      if ((this_00->Object == (FPanelDrawerData *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      pSVar13 = TSharedPtr<SDockTab,1>::operator->(&this_00->Object->HostedTab);
      pFVar16 = SDockTab::GetLayoutIdentifier(pSVar13,local_80);
      TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
      ::Emplace<FTabId_const_&,TSharedRef<SDockTab,1>_>
                ((TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                  *)__return_storage_ptr__,pFVar16,pTVar15);
      local_b0.SharedReferenceCount.ReferenceController =
           local_a0.SharedReferenceCount.ReferenceController;
LAB_142742979:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    pTVar31 = (pSVar5->PanelDrawerData).SharedReferenceCount.ReferenceController;
    pFVar17 = (pSVar5->PanelDrawerData).Object;
    if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar17 == (FPanelDrawerData *)0x0) ||
       (this_01 = &pFVar17->HostedTab, this_01->Object == (SDockTab *)0x0)) goto LAB_1427428c4;
    pSVar13 = TSharedPtr<SDockTab,1>::operator->(this_01);
    EVar9 = SDockTab::GetTabRole(pSVar13);
    pTVar22 = pTVar26;
    if (EVar9 == NomadTab) {
      pTVar14 = GetParentWindow(this,&local_c0);
      pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000001;
      if (pTVar14->Object != (SWindow *)0x0) goto LAB_14274286f;
      bVar32 = false;
    }
    else {
LAB_14274286f:
      bVar32 = true;
    }
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.SharedReferenceCount.ReferenceController);
    }
    if (bVar32) {
      pTVar15 = TSharedPtr<SDockTab,1>::ToSharedRef(this_01,&local_b0);
      pSVar13 = TSharedPtr<SDockTab,1>::operator->(this_01);
      pFVar16 = SDockTab::GetLayoutIdentifier(pSVar13,&local_90);
      TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
      ::Emplace<FTabId_const_&,TSharedRef<SDockTab,1>_>
                ((TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                  *)__return_storage_ptr__,pFVar16,pTVar15);
      goto LAB_142742979;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  pTVar31 = pTVar20;
LAB_142742595:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  puVar19 = &(this->InactivePanelDrawerTabs).field_0x10;
  iVar18 = *(int *)&(this->InactivePanelDrawerTabs).field_0x28;
  pTVar1 = &this->InactivePanelDrawerTabs;
  iStack_104 = 0;
  local_100 = uVar25;
  if (iVar18 != 0) {
    puVar30 = *(uint **)&(this->InactivePanelDrawerTabs).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar19;
    }
    uVar23 = *puVar30;
    pTVar20 = pTVar26;
    local_100 = 0;
    uVar25 = 0;
    while (uVar23 == 0) {
      iVar24 = (int)pTVar26;
      local_100 = (int)pTVar20 + 0x20;
      pTVar20 = (TReferenceControllerBase<1> *)(ulonglong)local_100;
      uVar25 = iVar24 + 1;
      pTVar26 = (TReferenceControllerBase<1> *)(ulonglong)uVar25;
      iStack_104 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar25) goto LAB_142742621;
      uVar23 = puVar30[(longlong)iVar24 + 1];
    }
    local_188 = -uVar23 & uVar23;
    uVar28 = (ulonglong)local_188 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_150 = (int)lVar21;
    iStack_104 = (local_100 - 1) + local_150;
    if (iVar18 < iStack_104) {
      iStack_104 = iVar18;
    }
  }
LAB_142742621:
  uStack_114 = local_188;
  uStack_fc = local_54;
  iStack_f8 = *(int *)&(this->InactivePanelDrawerTabs).field_0x8 -
              *(int *)&(this->InactivePanelDrawerTabs).field_0x34;
  uVar23 = *(uint *)&(this->InactivePanelDrawerTabs).field_0x28;
  uStack_108 = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(local_188,uVar25);
  uVar27 = uVar23 & 0xffffffe0;
  TStack_e8.CurrentBitIndex = iStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar23 >> 5;
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = pTVar1;
  uStack_118 = uVar25;
  local_110 = puVar19;
  local_f0 = pTVar1;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar19;
  if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar32)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
               *)(*pcVar6)();
    return pTVar12;
  }
  uVar25 = *(uint *)&(this->InactivePanelDrawerTabs).field_0x28;
  if (uVar23 != uVar25) {
    puVar29 = *(undefined1 **)&(this->InactivePanelDrawerTabs).field_0x20;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = puVar19;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
    while (uVar23 == 0) {
      lVar21 = (longlong)iVar24;
      uVar27 = uVar27 + 0x20;
      iVar24 = iVar24 + 1;
      uVar23 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_142742720;
      uVar23 = *(uint *)(puVar29 + lVar21 * 4 + 4);
    }
    uVar28 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_14c = (int)lVar21;
    uVar23 = (uVar27 - 1) + local_14c;
    if ((int)uVar25 < (int)uVar23) {
      uVar23 = uVar25;
    }
  }
LAB_142742720:
  while( true ) {
    pTVar8 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar21 = (longlong)TStack_e8.CurrentBitIndex;
    if (((TStack_e8.CurrentBitIndex == uVar23) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar19)) && (pTVar8 == pTVar1))
    break;
    lVar3 = *(longlong *)pTVar8;
    lVar4 = *(longlong *)(lVar3 + 0x10 + lVar21 * 0x28);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
      local_160.Object = *(SDockTab **)(lVar4 + 8);
      local_160.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar4 + 0x10);
      if (local_160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_160.Object == (SDockTab *)0x0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar32)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TMap<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
      ::Emplace<FTabId_const_&,TSharedRef<SDockTab,1>_>
                ((TMapBase<FTabId,TSharedRef<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedRef<SDockTab,1>,0>_>
                  *)__return_storage_ptr__,(FTabId *)(lVar3 + lVar21 * 0x28),&local_160);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.SharedReferenceCount.ReferenceController);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  return __return_storage_ptr__;
}

// GetPanelDrawerSystemHostedTab @ 1427429c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
SDockingArea::GetPanelDrawerSystemHostedTab
          (SDockingArea *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__,FTabId *param_1)

{
  SPanelDrawerArea *pSVar1;
  SDockTab *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  FTabId *pFVar6;
  FPanelDrawerData *pFVar7;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *pTVar8;
  TSharedPtr<SDockTab,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FTabId local_28;
  FTabId local_18;
  
  pFVar7 = (this->HiddenPanelDrawerTabToReopenOnRestore).Object;
  if ((((pFVar7 == (FPanelDrawerData *)0x0) || ((pFVar7->HostedTab).Object == (SDockTab *)0x0)) ||
      (pFVar6 = SDockTab::GetLayoutIdentifier((pFVar7->HostedTab).Object,&local_28),
      pFVar6->TabType != param_1->TabType)) ||
     (((pFVar6->InstanceId != -1 && (param_1->InstanceId != -1)) &&
      (pFVar6->InstanceId != param_1->InstanceId)))) {
    pTVar8 = TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
             ::Find((TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
                     *)&this->InactivePanelDrawerTabs,param_1);
    if (pTVar8 == (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)0x0) {
      pTVar11 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar11->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142742ad1;
          }
          LOCK();
          aVar5 = pTVar11->SharedReferenceCount;
          bVar4 = aVar3 == aVar5;
          if (bVar4) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar4);
        pSVar1 = (this->PanelDrawerPtr).Object;
        if (pSVar1 != (SPanelDrawerArea *)0x0) {
          pFVar7 = (pSVar1->PanelDrawerData).Object;
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          if (pFVar7 != (FPanelDrawerData *)0x0) {
            this_00 = (pFVar7->HostedTab).Object;
            pTVar10 = (pFVar7->HostedTab).SharedReferenceCount.ReferenceController;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (((this_00 != (SDockTab *)0x0) &&
                (pFVar6 = SDockTab::GetLayoutIdentifier(this_00,&local_18),
                pFVar6->TabType == param_1->TabType)) &&
               ((pFVar6->InstanceId == -1 ||
                ((param_1->InstanceId == -1 || (pFVar6->InstanceId == param_1->InstanceId)))))) {
              __return_storage_ptr__->Object = this_00;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar11);
              return __return_storage_ptr__;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar10);
        }
      }
LAB_142742ad1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      __return_storage_ptr__->Object = (SDockTab *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      if ((pTVar8->Object == (FPanelDrawerData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TSharedPtr<SDockTab,1> *)(*pcVar2)();
        return pTVar9;
      }
      pFVar7 = pTVar8->Object;
      __return_storage_ptr__->Object = (pFVar7->HostedTab).Object;
      pTVar11 = (pFVar7->HostedTab).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
  }
  else {
    pFVar7 = TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>::operator->
                       (&this->HiddenPanelDrawerTabToReopenOnRestore);
    __return_storage_ptr__->Object = (pFVar7->HostedTab).Object;
    pTVar11 = (pFVar7->HostedTab).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// GetParentWindow @ 142742d70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __thiscall
SDockingArea::GetParentWindow(SDockingArea *this,TSharedPtr<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWindow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SWindow *pSVar5;
  SWindow *pSVar6;
  bool bVar7;
  
  if ((((this->ParentWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar1 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar2 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar5 = pSVar2;
  pSVar6 = (SWindow *)0x0;
  if (pSVar2 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar5 = (SWindow *)0x0;
      pSVar6 = (SWindow *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142742dc2;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar2->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pSVar5 = pSVar2;
    pSVar6 = (this->ParentWindowPtr).Object;
  }
LAB_142742dc2:
  __return_storage_ptr__->Object = pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTabManager @ 142744560

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager,1> * __thiscall
SDockingArea::GetTabManager(SDockingArea *this,TSharedRef<FTabManager,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedRef<FTabManager,1> *pTVar4;
  FTabManager *pFVar5;
  FTabManager *pFVar6;
  FTabManager *pFVar7;
  bool bVar8;
  
  pFVar6 = (FTabManager *)(this->MyTabManager).WeakReferenceCount.ReferenceController;
  pFVar7 = (FTabManager *)0x0;
  pFVar5 = pFVar6;
  if (pFVar6 != (FTabManager *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar6->_padding_;
    do {
      pFVar5 = pFVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1427445a1;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar6->_padding_;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        *(atomic<int> *)&pFVar6->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pFVar7 = (this->MyTabManager).Object;
    pFVar5 = pFVar6;
    if (pFVar7 != (FTabManager *)0x0) goto LAB_1427445c7;
  }
LAB_1427445a1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  pFVar6 = pFVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_1427445c7:
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FTabManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTopLevelDockingArea @ 142744ef0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
SDockingArea::GetTopLevelDockingArea
          (SDockingArea *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *this_00;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  TSharedRef<FTabManager,1> *pTVar5;
  TSharedPtr<SDockingArea,1> *pTVar6;
  TSharedPtr<SWindow,1> local_38;
  TSharedPtr<SDockTab,1> local_28;
  TSharedRef<FTabManager,1> local_18;
  
  if ((((this->ParentWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar1 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pTVar4 = FGlobalTabmanager::Get();
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    this_00 = pTVar4->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = GetTabManager(this,&local_18);
    FGlobalTabmanager::GetMajorTabForTabManager(this_00,&local_28,pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (local_28.Object != (SDockTab *)0x0) {
      if ((local_28.Object == (SDockTab *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedPtr<SDockingArea,1> *)(*pcVar2)();
        return pTVar6;
      }
      SDockTab::GetParentWindow(local_28.Object,&local_38);
      if (local_38.Object != (SWindow *)0x0) {
        FTabManager::GetDockingAreaForPanelDrawer
                  (*(FTabManager **)this_00->_padding_,__return_storage_ptr__,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  __return_storage_ptr__->Object = (SDockingArea *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// HasPanelDrawer @ 142747400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingArea::HasPanelDrawer(SDockingArea *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->PanelDrawerPtr).Object != (SPanelDrawerArea *)0x0) &&
      (pTVar1 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// HideCross @ 142748bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::HideCross(SDockingArea *this)

{
  this->bIsOverlayVisible = false;
  return;
}

// HostTabIntoPanelDrawer @ 142748c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingArea::HostTabIntoPanelDrawer(SDockingArea *this,TSharedRef<SDockTab,1> *param_1)

{
  FPanelDrawerData **ppFVar1;
  SPanelDrawerArea *this_00;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FSharedReferencer<1> FVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  SDockTab *pSVar11;
  FTabId *pFVar12;
  TSharedRef<UE::Slate::Private::FPanelDrawerData,1> *pTVar13;
  TSharedRef<FTabManager,1> *pTVar14;
  TSharedRef<SWidget_const_,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  FPanelDrawerData *local_f8;
  FSharedReferencer<1> FStack_f0;
  SDockTab *local_e8;
  FSharedReferencer<1> local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  TSharedPtr<FTabManager,1> local_c8;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  TSharedRef<UE::Slate::Private::FPanelDrawerData,1> local_a8;
  FTabId *local_98;
  FPanelDrawerData **local_90;
  TSharedPtr<SDockingArea,1> local_88;
  TSharedRef<UE::Slate::Private::FPanelDrawerData,1> local_78;
  TSharedRef<FTabManager,1> local_68;
  TSharedRef<SWidget_const_,1> local_58;
  FTabId local_48;
  FTabId local_38;
  
  pTVar16 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar16->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142748cc2;
      }
      LOCK();
      aVar8 = pTVar16->SharedReferenceCount;
      bVar17 = aVar5 == aVar8;
      if (bVar17) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar17);
    this_00 = (this->PanelDrawerPtr).Object;
    if (this_00 != (SPanelDrawerArea *)0x0) {
      if (this_00->bIsOpen == false) {
        local_f8 = (FPanelDrawerData *)0x0;
        FStack_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_f8 = (this_00->PanelDrawerData).Object;
        FStack_f0.ReferenceController =
             (this_00->PanelDrawerData).SharedReferenceCount.ReferenceController;
        if (FStack_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_f0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_f0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      if (local_f8 != (FPanelDrawerData *)0x0) {
        if ((local_f8 == (FPanelDrawerData *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if ((local_f8->HostedTab).Object != (SDockTab *)0x0) {
          pSVar11 = TSharedPtr<SDockTab,1>::operator->(&local_f8->HostedTab);
          local_98 = SDockTab::GetLayoutIdentifier(pSVar11,&local_48);
          local_90 = &local_f8;
          TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>_>
                    ((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                      *)&this->InactivePanelDrawerTabs,
                     (TPairInitializer<FTabId_const_&,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_&&>
                      *)&stack0x00000008,(bool *)&local_98);
        }
      }
      pFVar12 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_38);
      FVar2 = pFVar12->TabType;
      uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      iVar10 = TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FTabId>
                         ((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                           *)&this->InactivePanelDrawerTabs,
                          uVar9 + FVar2.Number ^ pFVar12->InstanceId,pFVar12);
      if (iVar10 == -1) {
        pTVar13 = MakeShared<UE::Slate::Private::FPanelDrawerData,1>(&local_78);
        local_d0.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
        local_f8 = pTVar13->Object;
        if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_d0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f0,&local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      else {
        ppFVar1 = (FPanelDrawerData **)
                  (*(longlong *)&this->InactivePanelDrawerTabs + ((longlong)iVar10 * 5 + 2) * 8);
        if (&local_f8 != ppFVar1) {
          local_f8 = *ppFVar1;
          *ppFVar1 = (FPanelDrawerData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_f0,(FSharedReferencer<1> *)(ppFVar1 + 1));
        }
        TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>,FDefaultSetAllocator>
                         *)&this->InactivePanelDrawerTabs,iVar10);
      }
      local_e0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
      pSVar11 = param_1->Object;
      if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_e0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = pSVar11;
      if ((local_f8 == (FPanelDrawerData *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if (&local_f8->HostedTab != (TSharedPtr<SDockTab,1> *)&local_e8) {
        (local_f8->HostedTab).Object = pSVar11;
        local_e8 = (SDockTab *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(local_f8->HostedTab).SharedReferenceCount,&local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.ReferenceController);
      pSVar11 = param_1->Object;
      pTVar14 = GetTabManager(this,&local_68);
      local_c8.Object = pTVar14->Object;
      local_c8.SharedReferenceCount.ReferenceController =
           (pTVar14->SharedReferenceCount).ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SDockTab::SetTabManager(pSVar11,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      pSVar11 = param_1->Object;
      pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_58);
      pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this == (SDockingArea *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x158,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88.Object = this;
      local_88.SharedReferenceCount.ReferenceController = pTVar3;
      SDockTab::SetParentDockingArea(pSVar11,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_b8 = 0;
      FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
          (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_b8) {
        (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_b0.ReferenceController);
      if ((local_f8 == (FPanelDrawerData *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FVar6.ReferenceController = FStack_f0.ReferenceController;
      local_a8.Object = local_f8;
      local_a8.SharedReferenceCount.ReferenceController = FStack_f0.ReferenceController;
      if (FStack_f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_f0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_f0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_f8 == (FPanelDrawerData *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      UE::Slate::Private::SPanelDrawerArea::OpenPanel(this_00,true,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      bVar17 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_f0.ReferenceController);
      goto LAB_142748cc4;
    }
  }
LAB_142748cc2:
  bVar17 = false;
LAB_142748cc4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return bVar17;
}

// IsPanelDrawerOpen @ 14274d410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingArea::IsPanelDrawerOpen(SDockingArea *this)

{
  SPanelDrawerArea *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14274d440;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->PanelDrawerPtr).Object;
    if (pSVar1 != (SPanelDrawerArea *)0x0) {
      bVar5 = pSVar1->bIsOpen;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return bVar5;
    }
  }
LAB_14274d440:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// IsTabInSidebar @ 14274e3f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingArea::IsTabInSidebar(SDockingArea *this,TSharedRef<SDockTab,1> *param_1)

{
  STabSidebar *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<SDockTab,1> local_28;
  TSharedPtr<SDockTab,1> local_18;
  
  if ((this->LeftSidebar).Object == (STabSidebar *)0x0) {
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
  local_28.Object = param_1->Object;
  pSVar1 = (this->LeftSidebar).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = STabSidebar::ContainsTab(pSVar1,&local_28);
  if (!bVar3) {
    if ((this->RightSidebar).Object == (STabSidebar *)0x0) {
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
    local_18.Object = param_1->Object;
    pSVar1 = (this->RightSidebar).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = STabSidebar::ContainsTab(pSVar1,&local_18);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_14274e4c4;
    }
  }
  bVar3 = true;
LAB_14274e4c4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// OnDragEnter @ 142761b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::OnDragEnter(SDockingArea *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  FDockingDragOperation *this_00;
  TReferenceControllerBase<1> *pTVar3;
  SDockingNode *pSVar4;
  char cVar5;
  bool bVar6;
  FString *pFVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<SDockingNode,1> local_18;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar7 = FDockingDragOperation::GetTypeId();
    cVar5 = (*pcVar2)(pFVar1,pFVar7);
    if (cVar5 != '\0') {
      this_00 = (FDockingDragOperation *)(param_2->Content).Object;
      pTVar9 = (param_2->Content).SharedReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FDockingDragOperation *)0x0) {
        pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                            (TSharedRef<SWidget,1> *)&local_18);
        pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
        pSVar4 = (SDockingNode *)pTVar8->Object;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
        }
        else {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_18.Object = pSVar4;
        local_18.SharedReferenceCount.ReferenceController = pTVar3;
        bVar6 = FDockingDragOperation::CanDockInNode(this_00,&local_18,DockingViaTarget);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (bVar6) {
          this->bIsOverlayVisible = true;
        }
      }
      goto LAB_142761c51;
    }
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_142761c51:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// OnDragLeave @ 142762250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::OnDragLeave(SDockingArea *this,FDragDropEvent *param_1)

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
      this->bIsOverlayVisible = false;
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnDrop @ 142763610

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingArea::OnDrop
          (SDockingArea *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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
        this->bIsOverlayVisible = false;
      }
      goto LAB_142763688;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_142763688:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnLiveTabAdded @ 142765bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::OnLiveTabAdded(SDockingArea *this)

{
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TAttribute<EVisibility> local_28;
  
  this->bIsCenterTargetVisible = false;
  local_28.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_28);
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_142765c5d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142765c5d;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    plVar1 = (longlong *)this->_padding_;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x298))(plVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar4 = (**(code **)(this->_padding_ + 0x290))(this);
  if (iVar4 == 0) {
    this->bIsCenterTargetVisible = false;
    UpdateWindowChromeAndSidebar(this);
    return;
  }
  this->bIsCenterTargetVisible = true;
  pTVar5 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  UpdateWindowChromeAndSidebar(this);
  return;
}

// OnOwningWindowActivated @ 1427674e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::OnOwningWindowActivated(SDockingArea *this)

{
  FGlobalTabmanager *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  uint uVar5;
  longlong lVar6;
  TSharedRef<SDockTab,1> *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x268))(this,&local_18);
  uVar5 = 0;
  if (0 < local_10) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < local_10) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = SDockTab::IsForeground(*(SDockTab **)((longlong)&local_18->Object + lVar6));
      if (bVar2) {
        pTVar4 = FGlobalTabmanager::Get();
        this_00 = pTVar4->Object;
        uVar3 = 0;
        if ((int)uVar5 < local_10) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FGlobalTabmanager::UpdateMainMenu(this_00,local_18 + (int)uVar5,true);
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < local_10);
  }
  DestructItems<TSharedRef<SDockTab,1>,int>(local_18,local_10);
  if (local_18 != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// OnOwningWindowBeingDestroyed @ 142767630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::OnOwningWindowBeingDestroyed(SDockingArea *this,TSharedRef<SWindow,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlateApplication *pFVar4;
  uint uVar5;
  longlong lVar6;
  TSharedRef<SDockTab,1> *local_28;
  int local_20;
  SWindow *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x268))(this,&local_28);
  uVar5 = 0;
  if (0 < local_20) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < local_20) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SDockTab::PersistVisualState(*(SDockTab **)((longlong)&local_28->Object + lVar6));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < local_20);
  }
  uVar5 = 0;
  lVar6 = 0;
  while ((int)uVar5 < local_20) {
    uVar3 = 0;
    if ((int)uVar5 < local_20) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = SDockTab::CanCloseTab(*(SDockTab **)((longlong)&local_28->Object + lVar6));
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x10;
    if (!bVar2) goto LAB_1427677eb;
  }
  uVar5 = 0;
  if (0 < local_20) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < local_20) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SDockTab::RemoveTabFromParent(*(SDockTab **)((longlong)&local_28->Object + lVar6));
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < local_20);
  }
  pFVar4 = FSlateApplication::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar4 + 0x140);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar4,&local_18);
LAB_1427677eb:
  DestructItems<TSharedRef<SDockTab,1>,int>(local_28,local_20);
  if (local_28 != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// OnTabFoundNewHome @ 14276af70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::OnTabFoundNewHome
          (SDockingArea *this,TSharedRef<SDockTab,1> *param_1,TSharedRef<SWindow,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWindow *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SWindow *pSVar5;
  SWindow *pSVar6;
  SWindow *this_00;
  bool bVar7;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  pSVar6 = (SWindow *)0x0;
  this->bIsOverlayVisible = false;
  if ((((this->ParentWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar1 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pSVar2 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    pSVar5 = pSVar2;
    this_00 = pSVar6;
    if (pSVar2 != (SWindow *)0x0) {
      aVar3 = *(atomic<int> *)&pSVar2->_padding_;
      do {
        pSVar5 = pSVar6;
        this_00 = (SWindow *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14276afe5;
        LOCK();
        aVar4 = *(atomic<int> *)&pSVar2->_padding_;
        bVar7 = aVar3 == aVar4;
        if (bVar7) {
          *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar7);
      pSVar5 = pSVar2;
      this_00 = (this->ParentWindowPtr).Object;
    }
LAB_14276afe5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar6 = pSVar5;
    if (((this_00 != (SWindow *)0x0) && (this->bManageParentWindow != false)) &&
       ((this->bCleanUpUponTabRelocation != false && (this_00 != param_2->Object)))) {
      local_38 = 0;
      local_48 = (undefined1  [8])0x0;
      local_40.Data = (FScriptContainerElement *)0x0;
      SWindow::SetRequestDestroyWindowOverride
                (this_00,(TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
                          *)local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
        local_38 = local_38 & 0xffffffff00000000;
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
      SWindow::RequestDestroyWindow(this_00);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// OnUserAttemptingDock @ 14276c9e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingArea::OnUserAttemptingDock
          (SDockingArea *this,FReply *__return_storage_ptr__,RelativeDirection param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FArguments *pFVar5;
  FStack *pFVar6;
  FReply *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FLLMScope local_res20 [2];
  TSharedRef<SDockTab,1> local_2c0;
  TRawPtrProxy<FTabManager::FStack> local_2b0;
  FName local_2a8;
  T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&> local_2a0;
  FMemScope local_298 [2];
  TSharedRef<SDockingTabStack,1> local_288;
  TSharedRef<FTabManager::FStack,1> local_278;
  TSharedRef<SDockingNode,1> local_268;
  TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
  local_258;
  FArguments local_240;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_14276ccaf:
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar3 = (*pcVar2)();
    if (cVar3 == '\0') goto LAB_14276ccaf;
    pTVar8 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDragDropOperation *)0x0) {
      if (param_1 == Center) {
        pFVar5 = SDockingTabStack::FArguments::FArguments(&local_240);
        pFVar6 = ::operator_new(0x50);
        local_2b0.Object = (FStack *)0x0;
        if (pFVar6 != (FStack *)0x0) {
          pFVar6->_padding_ = 0;
          pFVar6->_padding_ = 0;
          *(undefined4 *)&pFVar6->_padding_ = 0x3f800000;
          pFVar6->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
          (pFVar6->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar6->Tabs).ArrayNum = 0;
          (pFVar6->Tabs).ArrayMax = 0;
          pFVar6->bHideTabWell = false;
          (pFVar6->ForegroundTabId).TabType.ComparisonIndex = 0;
          (pFVar6->ForegroundTabId).TabType.Number = 0;
          (pFVar6->ForegroundTabId).InstanceId = -1;
          (pFVar6->ForegroundTabId).Flags = SaveLayout;
          (pFVar6->ExtensionId).ComparisonIndex = 0;
          (pFVar6->ExtensionId).Number = 0;
          local_2b0.Object = pFVar6;
        }
        TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
                  (&local_278,&local_2b0);
        local_2a0.Arg0 = &local_278;
        FLLMScope::FLLMScope
                  (local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_2a8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(local_298,&local_2a8,true);
        TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
        ::
        TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
                  (&local_258,"SDockingTabStack",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingArea.cpp"
                   ,0xde,&local_2a0);
        FMemScope::~FMemScope(local_298);
        FLLMScope::~FLLMScope(local_res20);
        TSlateDecl<SDockingTabStack,RequiredArgs::T1RequiredArgs<TSharedRef<FTabManager::FStack,1>_&&>_>
        ::operator<<=(&local_258,&local_288,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_258._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.SharedReferenceCount.ReferenceController);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
        local_268.Object = (SDockingNode *)local_288.Object;
        local_268.SharedReferenceCount.ReferenceController =
             local_288.SharedReferenceCount.ReferenceController;
        if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SDockingSplitter::AddChildNode((SDockingSplitter *)this,&local_268,-1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_268.SharedReferenceCount.ReferenceController);
        local_2c0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar1[1]._padding_;
        local_2c0.Object = (SDockTab *)pFVar1[1]._padding_;
        if (local_2c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2c0.Object == (SDockTab *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x416,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
        if ((local_2c0.Object == (SDockTab *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x26c,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
        SDockingTabStack::OpenTab(local_288.Object,&local_2c0,-1,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c0.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.SharedReferenceCount.ReferenceController);
        bVar4 = true;
      }
      else {
        DockFromOutside(this,param_1,param_2);
        bVar4 = true;
      }
      goto LAB_14276ccb5;
    }
  }
  bVar4 = false;
LAB_14276ccb5:
  FReply::FReply(__return_storage_ptr__,bVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// RemoveHiddenInactivePanelDrawerTab @ 14277c610

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingArea::RemoveHiddenInactivePanelDrawerTab(SDockingArea *this,TSharedPtr<SDockTab,1> *param_1)

{
  undefined1 *puVar1;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *pTVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  longlong local_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1->Object != (SDockTab *)0x0) {
    puVar1 = &(this->InactivePanelDrawerTabs).field_0x10;
    iVar4 = *(int *)&(this->InactivePanelDrawerTabs).field_0x28;
    pTVar2 = &this->InactivePanelDrawerTabs;
    iStack_90 = 0;
    local_78 = 0;
    uStack_8c = 1;
    iStack_7c = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->InactivePanelDrawerTabs).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14277c6cd;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_8c = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_8c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iStack_7c = local_78 + -1 + local_res18;
      if (iVar4 < iStack_7c) {
        iStack_7c = iVar4;
      }
    }
LAB_14277c6cd:
    uVar14 = *(uint *)&(this->InactivePanelDrawerTabs).field_0x28;
    iStack_70 = *(int *)&(this->InactivePanelDrawerTabs).field_0x8 -
                *(int *)&(this->InactivePanelDrawerTabs).field_0x34;
    uVar13 = uVar14 & 0xffffffe0;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = pTVar2;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = pTVar2;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar5 = *(uint *)&(this->InactivePanelDrawerTabs).field_0x28;
    if (uVar14 != uVar5) {
      puVar15 = *(undefined1 **)&(this->InactivePanelDrawerTabs).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14277c7d1;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_14277c7d1:
    while( true ) {
      pTVar7 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar14) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2)
         ) break;
      lVar10 = *(longlong *)
                (*(longlong *)pTVar7 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      if ((lVar10 != 0) && (*(SDockTab **)(lVar10 + 8) == param_1->Object)) {
        local_a8 = 0;
        FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((undefined8 *)(lVar10 + 8) != &local_a8) {
          *(undefined8 *)(lVar10 + 8) = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(lVar10 + 0x10),&FStack_a0);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_a0.ReferenceController);
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    pTVar11 = &this->HiddenPanelDrawerTabToReopenOnRestore;
    if ((pTVar11->Object != (FPanelDrawerData *)0x0) &&
       ((pTVar11->Object->HostedTab).Object == param_1->Object)) {
      local_b8 = 0;
      FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar11 != (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_b8) {
        pTVar11->Object = (FPanelDrawerData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_b0.ReferenceController);
      return true;
    }
  }
  return false;
}

// RemoveTabFromSidebar @ 14277d510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingArea::RemoveTabFromSidebar(SDockingArea *this,TSharedRef<SDockTab,1> *param_1)

{
  STabSidebar *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<SDockTab,1> local_28;
  TSharedRef<SDockTab,1> local_18;
  
  if ((this->LeftSidebar).Object == (STabSidebar *)0x0) {
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
  local_28.Object = param_1->Object;
  pSVar1 = (this->LeftSidebar).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = STabSidebar::RemoveTab(pSVar1,&local_28);
  if (!bVar3) {
    if ((this->RightSidebar).Object == (STabSidebar *)0x0) {
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
    local_18.Object = param_1->Object;
    pSVar1 = (this->RightSidebar).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = STabSidebar::RemoveTab(pSVar1,&local_18);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_14277d5e4;
    }
  }
  bVar3 = true;
LAB_14277d5e4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// RestorePanelDrawerArea @ 142781300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingArea::RestorePanelDrawerArea
          (SDockingArea *this,TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWindow *pSVar4;
  FPanelDrawerData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  atomic<int> aVar11;
  int iVar12;
  SDockTab *pSVar13;
  TSharedRef<FTabManager,1> *pTVar14;
  TSharedRef<SWidget_const_,1> *pTVar15;
  FTabId *pFVar16;
  FSharedReferencer<1> FVar17;
  SWindow *pSVar18;
  SWindow *pSVar19;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_d8;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  TSharedPtr<SDockingArea,1> local_b8;
  TSharedPtr<FTabManager,1> local_a8;
  TSharedPtr<SDockingArea,1> local_98;
  TSharedRef<UE::Slate::Private::FPanelDrawerData,1> local_88;
  undefined8 local_78;
  undefined8 local_70;
  TSharedRef<FTabManager,1> local_68;
  TSharedRef<SWidget_const_,1> local_58;
  undefined8 local_48 [2];
  FTabId local_38 [2];
  
  pSVar18 = (SWindow *)0x0;
  local_d8.Object = param_1->Object;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((SWindow *)local_d8.Object == (SWindow *)0x0) {
    local_c0.ReferenceController = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
    local_d8.Object = (SPanelDrawerArea *)pSVar18;
    if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_c0.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142781382;
        }
        LOCK();
        aVar11 = (local_c0.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar2 == aVar11;
        if (bVar9) {
          (local_c0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar11 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar11;
      } while (!bVar9);
      local_d8.Object = (this->PanelDrawerPtr).Object;
    }
LAB_142781382:
    local_c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_d8.SharedReferenceCount,&local_c0);
    FVar17.ReferenceController = local_c0.ReferenceController;
  }
  else {
    local_d8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar17.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  if ((SWindow *)local_d8.Object == (SWindow *)0x0) {
    bVar9 = false;
    goto LAB_14278170b;
  }
  GetTopLevelDockingArea(this,&local_b8);
  if (local_b8.Object == (SDockingArea *)0x0) {
    if ((((this->ParentWindowPtr).Object == (SWindow *)0x0) ||
        (pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pSVar4 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
      pSVar19 = pSVar4;
      if (pSVar4 != (SWindow *)0x0) {
        iVar8 = (int)pSVar4->_padding_;
        do {
          pSVar19 = pSVar18;
          if (iVar8 == 0) goto LAB_142781515;
          LOCK();
          iVar12 = (int)pSVar4->_padding_;
          bVar9 = iVar8 == iVar12;
          if (bVar9) {
            *(int *)&pSVar4->_padding_ = iVar8 + 1;
            iVar12 = iVar8;
          }
          UNLOCK();
          iVar8 = iVar12;
        } while (!bVar9);
        pSVar18 = (this->ParentWindowPtr).Object;
        pSVar19 = pSVar4;
      }
LAB_142781515:
      local_70 = 0;
      local_78 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar19);
      if (pSVar18 != (SWindow *)0x0) goto LAB_142781536;
    }
    bVar9 = false;
  }
  else {
    if ((local_b8.Object == (SDockingArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    SetPanelDrawerArea(local_b8.Object,&local_d8);
    if (((SWindow *)local_d8.Object == (SWindow *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if ((local_d8.Object)->bIsOpen == false) {
LAB_142781536:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      pFVar5 = (this->HiddenPanelDrawerTabToReopenOnRestore).Object;
      pTVar3 = (this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount.
               ReferenceController;
      (this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
      if ((pFVar5 == (FPanelDrawerData *)0x0) || ((pFVar5->HostedTab).Object == (SDockTab *)0x0)) {
        bVar9 = false;
      }
      else {
        pSVar13 = TSharedPtr<SDockTab,1>::operator->(&pFVar5->HostedTab);
        pTVar14 = GetTabManager(this,&local_68);
        local_a8.Object = pTVar14->Object;
        local_a8.SharedReferenceCount.ReferenceController =
             (pTVar14->SharedReferenceCount).ReferenceController;
        if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SDockTab::SetTabManager(pSVar13,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        pSVar13 = TSharedPtr<SDockTab,1>::operator->(&pFVar5->HostedTab);
        pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_58);
        pTVar6 = (pTVar15->SharedReferenceCount).ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this == (SDockingArea *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x158,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.Object = this;
        local_98.SharedReferenceCount.ReferenceController = pTVar6;
        SDockTab::SetParentDockingArea(pSVar13,&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        pSVar13 = TSharedPtr<SDockTab,1>::operator->(&pFVar5->HostedTab);
        pFVar16 = SDockTab::GetLayoutIdentifier(pSVar13,local_38);
        TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
        ::Remove((TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
                  *)&this->InactivePanelDrawerTabs,pFVar16);
        if (((SWindow *)local_d8.Object == (SWindow *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88.Object = pFVar5;
        local_88.SharedReferenceCount.ReferenceController = pTVar3;
        UE::Slate::Private::SPanelDrawerArea::OpenPanel(local_d8.Object,false,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar9 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_14278170b;
    }
    if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
        (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)local_48) {
      (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
      pTVar3 = (this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount.
               ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        (this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar1 = &pTVar3->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar3->_padding_)();
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
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar9 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
LAB_14278170b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return bVar9;
}

// RestorePanelDrawerArea @ 142781730

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SDockingArea::RestorePanelDrawerArea(SDockingArea *this)

{
  bool bVar1;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_18;
  
  local_18.Object = (SPanelDrawerArea *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = RestorePanelDrawerArea(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return bVar1;
}

// RestoreTabFromSidebar @ 142781c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingArea::RestoreTabFromSidebar(SDockingArea *this,TSharedRef<SDockTab,1> *param_1)

{
  STabSidebar *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<SDockTab,1> local_28;
  TSharedRef<SDockTab,1> local_18;
  
  if ((this->LeftSidebar).Object == (STabSidebar *)0x0) {
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
  local_28.Object = param_1->Object;
  pSVar1 = (this->LeftSidebar).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = STabSidebar::RestoreTab(pSVar1,&local_28);
  if (!bVar3) {
    if ((this->RightSidebar).Object == (STabSidebar *)0x0) {
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
    local_18.Object = param_1->Object;
    pSVar1 = (this->RightSidebar).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = STabSidebar::RestoreTab(pSVar1,&local_18);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_142781d14;
    }
  }
  bVar3 = true;
LAB_142781d14:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// SetPanelDrawerArea @ 142785870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::SetPanelDrawerArea
          (SDockingArea *this,TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SPanelDrawerArea *pSVar3;
  FPanelDrawerData *pFVar4;
  code *pcVar5;
  ETabRole EVar6;
  atomic<int> aVar7;
  SDockTab *pSVar8;
  TSharedRef<FTabManager,1> *pTVar9;
  TSharedRef<SWidget_const_,1> *pTVar10;
  FTabId *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedPtr<SDockTab,1> *this_00;
  bool bVar14;
  FPanelDrawerData *local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  TSharedPtr<FTabManager,1> local_78;
  TSharedPtr<SDockingArea,1> local_68;
  TSharedRef<FTabManager,1> local_58;
  TSharedRef<SWidget_const_,1> local_48;
  TSharedPtr<UE::Slate::Private::SPanelDrawerArea,1> local_38;
  FTabId local_28;
  
  pTVar12 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
  pTVar13 = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar12->SharedReferenceCount;
    do {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1427858c5;
      LOCK();
      aVar7 = pTVar12->SharedReferenceCount;
      bVar14 = aVar2 == aVar7;
      if (bVar14) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar14);
    pSVar3 = (this->PanelDrawerPtr).Object;
    pTVar13 = pTVar12;
    if (pSVar3 != (SPanelDrawerArea *)0x0) {
      if (param_1->Object == (SPanelDrawerArea *)0x0) {
        if (pSVar3->bIsOpen == false) {
          local_98 = (FPanelDrawerData *)0x0;
          FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          FStack_90.ReferenceController =
               (pSVar3->PanelDrawerData).SharedReferenceCount.ReferenceController;
          local_98 = (pSVar3->PanelDrawerData).Object;
          if (FStack_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_90.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_90.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
            (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_98) {
          (this->HiddenPanelDrawerTabToReopenOnRestore).Object = local_98;
          local_98 = (FPanelDrawerData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_90)
          ;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_90.ReferenceController);
      }
      if (param_1->Object != pSVar3) {
        UE::Slate::Private::SPanelDrawerArea::ClosePanel(pSVar3,false,false);
      }
    }
  }
LAB_1427858c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  (this->PanelDrawerPtr).Object = param_1->Object;
  pTVar12 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar12 != (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar13 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar13->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
      }
    }
    (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController = pTVar12;
  }
  pSVar3 = param_1->Object;
  if (pSVar3 == (SPanelDrawerArea *)0x0) {
    return;
  }
  if (pSVar3->bIsOpen == false) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar4 = (pSVar3->PanelDrawerData).Object;
    pTVar12 = (pSVar3->PanelDrawerData).SharedReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 != (FPanelDrawerData *)0x0) &&
       (this_00 = &pFVar4->HostedTab, this_00->Object != (SDockTab *)0x0)) {
      pSVar8 = TSharedPtr<SDockTab,1>::operator->(this_00);
      EVar6 = SDockTab::GetTabRole(pSVar8);
      if (EVar6 == NomadTab) {
        local_88 = 0;
        FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
            (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_88) {
          (this->HiddenPanelDrawerTabToReopenOnRestore).Object = (FPanelDrawerData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&FStack_80)
          ;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_80.ReferenceController);
        pSVar8 = TSharedPtr<SDockTab,1>::operator->(this_00);
        pTVar9 = GetTabManager(this,&local_58);
        local_78.Object = pTVar9->Object;
        local_78.SharedReferenceCount.ReferenceController =
             (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SDockTab::SetTabManager(pSVar8,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        pSVar8 = TSharedPtr<SDockTab,1>::operator->(this_00);
        pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_48);
        pTVar13 = (pTVar10->SharedReferenceCount).ReferenceController;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this == (SDockingArea *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x158,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68.Object = this;
        local_68.SharedReferenceCount.ReferenceController = pTVar13;
        SDockTab::SetParentDockingArea(pSVar8,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        pSVar8 = TSharedPtr<SDockTab,1>::operator->(this_00);
        pFVar11 = SDockTab::GetLayoutIdentifier(pSVar8,&local_28);
        TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
        ::Remove((TMapBase<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,TSharedPtr<UE::Slate::Private::FPanelDrawerData,1>,0>_>
                  *)&this->InactivePanelDrawerTabs,pFVar11);
        goto LAB_142785b5c;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  local_38.Object = (SPanelDrawerArea *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  RestorePanelDrawerArea(this,&local_38);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
LAB_142785b5c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// SetPanelDrawerHiddenActiveTab @ 142785c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingArea::SetPanelDrawerHiddenActiveTab
          (SDockingArea *this,TSharedRef<UE::Slate::Private::FPanelDrawerData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockTab *pSVar2;
  FPanelDrawerData *pFVar3;
  SDockingArea *pSVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FTabManager,1> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FPanelDrawerData *local_58;
  FSharedReferencer<1> local_50;
  TSharedPtr<SDockingArea,1> local_48;
  TSharedPtr<FTabManager,1> local_38;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<FTabManager,1> local_18;
  
  if (((((this->PanelDrawerPtr).Object == (SPanelDrawerArea *)0x0) ||
       (pTVar1 = (this->PanelDrawerPtr).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (pSVar2 = (param_1->Object->HostedTab).Object, pSVar2 != (SDockTab *)0x0)) {
    pTVar7 = GetTabManager(this,&local_18);
    local_38.Object = pTVar7->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockTab::SetTabManager(pSVar2,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    pFVar3 = param_1->Object;
    if (((pFVar3->HostedTab).Object == (SDockTab *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar2 = (pFVar3->HostedTab).Object;
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar4 = (SDockingArea *)pTVar8->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pSVar4;
    local_48.SharedReferenceCount.ReferenceController = pTVar1;
    SDockTab::SetParentDockingArea(pSVar2,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_50.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    local_58 = param_1->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->HiddenPanelDrawerTabToReopenOnRestore !=
        (TSharedPtr<UE::Slate::Private::FPanelDrawerData,1> *)&local_58) {
      (this->HiddenPanelDrawerTabToReopenOnRestore).Object = local_58;
      local_58 = (FPanelDrawerData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->HiddenPanelDrawerTabToReopenOnRestore).SharedReferenceCount,&local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
  }
  return;
}

// SetParentWindow @ 142786050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::SetParentWindow(SDockingArea *this,TSharedRef<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWindow *pSVar3;
  SWidget *pSVar4;
  FOverlaySlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ulong64 uVar11;
  TAttribute<FText> *pTVar12;
  FSlateApplication *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_108 [16];
  int local_f8;
  SWidget *local_e8;
  undefined8 uStack_e0;
  bool local_d8;
  IWindowTitleBar *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  SWindow *local_b8;
  TReferenceControllerBase<1> *local_b0;
  SWidget *local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined4 local_98;
  FText local_90;
  undefined1 local_80;
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  ulonglong local_68;
  undefined1 local_60 [16];
  bool local_50;
  undefined1 local_48 [32];
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res8 = 0;
  if (this->bManageParentWindow != false) {
    pSVar3 = param_1->Object;
    local_108._0_8_ = (atomic<unsigned___int64>)0x0;
    local_108._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
               (FWriteAccessScope *)local_60);
    local_48._0_8_ = (longlong)local_108 + 8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_108 + 8));
    if (puVar9 == (undefined8 *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    }
    else {
      local_c8 = (IWindowTitleBar *)OnOwningWindowBeingDestroyed;
      pTStack_c0 = uStack_e0 & 0xffffffff00000000;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget,1> *)&local_e8);
      pTVar14 = (pTVar10->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar10->Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar11;
      *puVar9 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSDockingArea___00__A6AXAEBV__TSharedRef_VSWindow___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[3] = pSVar4;
      puVar9[4] = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      puVar9[5] = local_c8;
      puVar9[6] = pTStack_c0;
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_e0)
      ;
    }
    if (local_50 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_60._8_8_,(FDestructionSentinel *)local_60);
    }
    SWindow::SetRequestDestroyWindowOverride
              (pSVar3,(TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
                       *)local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
               (FWriteAccessScope *)&local_e8);
    if ((local_f8 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_108._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_108._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_108 + 8),0,0,0x10);
      local_f8 = 0;
    }
    if (local_d8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)uStack_e0,(FDestructionSentinel *)&local_e8);
    }
    if ((FMRSWRecursiveAccessDetector *)local_108._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_108._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_108);
  }
  local_b8 = param_1->Object;
  local_b0 = (param_1->SharedReferenceCount).ReferenceController;
  local_c8 = (IWindowTitleBar *)0x0;
  pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = 0;
  local_a8 = (SWidget *)0x0;
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&local_90);
  local_a8 = SNullWidget::NullWidget.Object;
  local_80 = 0;
  local_68 = 0;
  local_108._8_8_ = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  local_78 = (undefined1  [8])0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108._0_8_ = (atomic<unsigned___int64>)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FStack_a0,(FSharedReferencer<1> *)(local_108 + 8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_108._8_8_);
  local_98 = 0;
  pTVar12 = SWindow::GetWindowCloseButtonToolTipText(param_1->Object,(TAttribute<FText> *)local_60);
  FText::operator=(&local_90,&pTVar12->Value);
  local_80 = pTVar12->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar12->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
  }
  pFVar13 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar13 + 0x138))(pFVar13,&local_e8,&local_b8,&local_c8);
  this_00 = this->WindowControlsArea;
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  if (uStack_e0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    uStack_e0->SharedReferenceCount = (atomic<int>)((int)uStack_e0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController;
  ((TSharedRef<SWidget,1> *)&this_00->_padding_)->Object = local_e8;
  ((FSharedReferencer<1> *)&this_00->_padding_)->ReferenceController = uStack_e0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  pTVar14 = pTStack_c0;
  pSVar3 = param_1->Object;
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pSVar3->TitleBar).SharedReferenceCount.ReferenceController;
  (pSVar3->TitleBar).Object = local_c8;
  (pSVar3->TitleBar).SharedReferenceCount.ReferenceController = pTStack_c0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)local_108);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_f8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_108._8_8_,(FDestructionSentinel *)local_108);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  (this->ParentWindowPtr).Object = param_1->Object;
  pTVar14 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar14 != (this->ParentWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ParentWindowPtr).WeakReferenceCount.ReferenceController = pTVar14;
  }
  uStack_e0 = (TReferenceControllerBase<1> *)((ulonglong)uStack_e0._4_4_ << 0x20);
  local_e8 = (SWidget *)OnOwningWindowActivated;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddSP<SDockingArea>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1->Object->WindowActivatedEvent,(SDockingArea *)&local_res8,(pmf_90a4e173 *)this
            );
  return;
}

// ShowCross @ 14278a1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::ShowCross(SDockingArea *this)

{
  this->bIsOverlayVisible = true;
  return;
}

// TargetCrossCenterVisibility @ 14278cb70

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockingArea::TargetCrossCenterVisibility(SDockingArea *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  if ((this->bIsOverlayVisible == false) ||
     (EVar1.Value.Value = EVisibility::Visible.Value.Value, this->bIsCenterTargetVisible == false))
  {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// TargetCrossVisibility @ 14278cba0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDockingArea::TargetCrossVisibility(SDockingArea *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  if ((this->bIsOverlayVisible == false) ||
     (EVar1.Value.Value = EVisibility::Visible.Value.Value, this->bIsCenterTargetVisible != false))
  {
    EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// TryOpenSidebarDrawer @ 14278ebc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SDockingArea::TryOpenSidebarDrawer(SDockingArea *this,TSharedRef<SDockTab,1> *param_1)

{
  STabSidebar *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<SDockTab,1> local_28;
  TSharedRef<SDockTab,1> local_18;
  
  if ((this->LeftSidebar).Object == (STabSidebar *)0x0) {
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
  local_28.Object = param_1->Object;
  pSVar1 = (this->LeftSidebar).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = STabSidebar::TryOpenSidebarDrawer(pSVar1,&local_28);
  if (!bVar3) {
    if ((this->RightSidebar).Object == (STabSidebar *)0x0) {
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
    local_18.Object = param_1->Object;
    pSVar1 = (this->RightSidebar).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = STabSidebar::TryOpenSidebarDrawer(pSVar1,&local_18);
    if (!bVar3) {
      bVar3 = false;
      goto LAB_14278ec94;
    }
  }
  bVar3 = true;
LAB_14278ec94:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// UpdateWindowChromeAndSidebar @ 142793a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingArea::UpdateWindowChromeAndSidebar(SDockingArea *this)

{
  longlong *this_00;
  SDockingNode *pSVar1;
  SWindow *pSVar2;
  SDockingTabStack *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  IWindowTitleBar *pIVar5;
  code *pcVar6;
  atomic<int> aVar7;
  float fVar8;
  ETabRole EVar9;
  int iVar10;
  atomic<int> aVar11;
  TSharedPtr<SWindow,1> *pTVar12;
  TArray<FTabId,TSizedDefaultAllocator<32>_> *pTVar13;
  SWindow *pSVar14;
  int iVar15;
  SWindow *pSVar16;
  FTabManager *pFVar17;
  TSharedRef<SDockTab,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  TSharedRef<SDockTab,1> *pTVar20;
  ForAnyElementType FVar21;
  TSharedRef<SDockingNode,1> *pTVar22;
  SWindow *pSVar23;
  bool bVar24;
  bool bVar25;
  bool local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSharedRef<SDockTab,1> *local_178;
  int local_170;
  TArray<TSharedRef<SDockingNode,1>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  ForAnyElementType FStack_138;
  ulonglong local_130;
  TAttribute<EVisibility> local_128;
  TAttribute<EVisibility> local_108;
  TSharedPtr<SWindow,1> local_e8;
  FDestructionSentinel local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  TArray<FTabId,TSizedDefaultAllocator<32>_> local_b0;
  TArray<FTabId,TSizedDefaultAllocator<32>_> local_a0;
  TSharedRef<SDockingNode,1> local_90;
  TSharedRef<SDockingNode,1> local_80 [4];
  
  pSVar14 = (SWindow *)0x0;
  SDockingSplitter::GetChildNodesRecursively((SDockingSplitter *)this,&local_168);
  iVar15 = local_168.ArrayNum;
  local_168.ArrayNum = iVar15;
  if (iVar15 < 1) goto LAB_14279415f;
  pTVar22 = (TSharedRef<SDockingNode,1> *)
            (local_168.AllocatorInstance.Data + (longlong)iVar15 * 0x10);
  FVar21.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if (local_168.ArrayNum != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<SDockingNode,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((TSharedRef<SDockingNode,1> *)FVar21.Data == pTVar22) break;
    pTVar19 = (((TSharedRef<SDockingNode,1> *)FVar21.Data)->SharedReferenceCount).
              ReferenceController;
    pSVar1 = ((TSharedRef<SDockingNode,1> *)FVar21.Data)->Object;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar10 = (**(code **)(pSVar1->_padding_ + 0x248))(pSVar1);
    if (iVar10 == 0) {
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined1 *)&pSVar1[1]._padding_ = 0;
      local_158._0_4_ = 0.0;
      local_158._4_4_ = 0.0;
      local_158._8_4_ = 0.0;
      local_158._12_4_ = 0.0;
      this_00 = &((SWindow *)pSVar1[1]._padding_)->_padding_;
      local_158[0x10] = true;
      local_130 = 0;
      local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_138.Data = (FScriptContainerElement *)0x0;
      pSVar16 = (SWindow *)pSVar1[1]._padding_;
      if (this_00 == (longlong *)0x0) {
        pSVar16 = pSVar14;
      }
      SlateAttributePrivate::
      TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
      ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                *)this_00,(ISlateAttributeContainer *)&pSVar16->_padding_,
               (TAttribute<FMargin> *)local_158,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_140,(FWriteAccessScope *)&local_d8);
      if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_138.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
        local_130 = local_130 & 0xffffffff00000000;
      }
      if (local_d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
      }
      if (FStack_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_138.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    FVar21.Data = FVar21.Data + 0x10;
  }
  this->bCanHaveSidebar = true;
  pSVar16 = pSVar14;
  if ((((this->ParentWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar19 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar19 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar19->SharedReferenceCount < 1))
  goto LAB_142794115;
  pSVar2 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar16 = pSVar2;
  pSVar23 = pSVar14;
  if (pSVar2 != (SWindow *)0x0) {
    iVar15 = (int)pSVar2->_padding_;
    do {
      pSVar16 = pSVar14;
      if (iVar15 == 0) goto LAB_142793c35;
      LOCK();
      iVar10 = (int)pSVar2->_padding_;
      bVar24 = iVar15 == iVar10;
      if (bVar24) {
        *(int *)&pSVar2->_padding_ = iVar15 + 1;
        iVar10 = iVar15;
      }
      UNLOCK();
      iVar15 = iVar10;
    } while (!bVar24);
    pSVar16 = pSVar2;
    pSVar23 = (this->ParentWindowPtr).Object;
  }
LAB_142793c35:
  local_b8 = 0;
  local_c0 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pSVar23 != (SWindow *)0x0) {
    pTVar19 = (this->MyTabManager).WeakReferenceCount.ReferenceController;
    bVar24 = false;
    pFVar17 = (FTabManager *)0x0;
    local_res10 = false;
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
LAB_142793c84:
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar25) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      aVar7 = pTVar19->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142793c84;
        }
        LOCK();
        aVar11 = pTVar19->SharedReferenceCount;
        bVar25 = aVar7 == aVar11;
        if (bVar25) {
          pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar25);
      pFVar17 = (this->MyTabManager).Object;
      if (pFVar17 == (FTabManager *)0x0) goto LAB_142793c84;
    }
    bVar25 = pFVar17->bAllowPerWindowMenu;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    if (bVar25 != false) {
      (**(code **)(this->_padding_ + 0x268))(this,&local_178);
      iVar15 = local_170;
      pTVar20 = local_178 + local_170;
      pTVar18 = local_178;
      do {
        if (local_170 != iVar15) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedRef<SDockTab,1>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pTVar18 == pTVar20) {
          bVar24 = false;
          goto LAB_142793d8b;
        }
        pTVar12 = SDockTab::GetParentWindow(pTVar18->Object,&local_e8);
        if (pTVar12->Object == pSVar23) {
          EVar9 = SDockTab::GetTabRole(pTVar18->Object);
          if (EVar9 == MajorTab) goto LAB_142793d73;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        EVar9 = SDockTab::GetTabRole(pTVar18->Object);
        if (EVar9 == NomadTab) {
          pSVar14 = (SWindow *)&DAT_00000001;
        }
        pTVar18 = pTVar18 + 1;
      } while( true );
    }
    goto LAB_142793dad;
  }
  goto LAB_14279411a;
LAB_142793d73:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  bVar24 = true;
  local_res10 = true;
LAB_142793d8b:
  DestructItems<TSharedRef<SDockTab,1>,int>(local_178,local_170);
  if (local_178 != (TSharedRef<SDockTab,1> *)0x0) {
    FMemory::Free(local_178);
  }
LAB_142793dad:
  if (((this->LeftSidebar).Object == (STabSidebar *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar13 = STabSidebar::GetAllTabIds((this->LeftSidebar).Object,&local_b0);
  iVar15 = pTVar13->ArrayNum;
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (iVar15 == 0) {
    if (((this->LeftSidebar).Object == (STabSidebar *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar25)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_128.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_128.Getter._16_8_ = 0;
    local_128.bIsSet = true;
    local_128.Getter._0_8_ = 0;
    local_128.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)(this->LeftSidebar).Object,&local_128);
  }
  if (((this->RightSidebar).Object == (STabSidebar *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar13 = STabSidebar::GetAllTabIds((this->RightSidebar).Object,&local_a0);
  iVar15 = pTVar13->ArrayNum;
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  if (iVar15 == 0) {
    if (((this->RightSidebar).Object == (STabSidebar *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar25)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_108.Getter._16_8_ = 0;
    local_108.bIsSet = true;
    local_108.Getter._0_8_ = 0;
    local_108.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)(this->RightSidebar).Object,&local_108);
  }
  this->bCanHaveSidebar = !bVar24;
  if (bVar24) {
LAB_142794003:
    bVar24 = false;
  }
  else {
    if (((this->LeftSidebar).Object == (STabSidebar *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar8 = __real_421c0000;
    TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
              ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
               &((this->LeftSidebar).Object)->_padding_,0.0,__real_421c0000,0.0,0.0);
    if (((this->RightSidebar).Object == (STabSidebar *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
              ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
               &((this->RightSidebar).Object)->_padding_,0.0,fVar8,0.0,0.0);
    if ((char)pSVar14 != '\0') goto LAB_142794003;
    bVar24 = true;
  }
  pTVar22 = SDockingSplitter::FindTabStack((SDockingSplitter *)this,&local_90,UpperRight);
  pSVar14 = (SWindow *)(pTVar22->SharedReferenceCount).ReferenceController;
  pSVar3 = (SDockingTabStack *)pTVar22->Object;
  if (pSVar14 != (SWindow *)0x0) {
    LOCK();
    *(int *)&pSVar14->_padding_ = (int)pSVar14->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  SDockingTabStack::ReserveSpaceForWindowChrome(pSVar3,Controls,local_res10,bVar24);
  pTVar22 = SDockingSplitter::FindTabStack((SDockingSplitter *)this,local_80,UpperLeft);
  pTVar19 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar3 = (SDockingTabStack *)pTVar22->Object;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80[0].SharedReferenceCount.ReferenceController);
  SDockingTabStack::ReserveSpaceForWindowChrome(pSVar3,Icon,local_res10,bVar24);
  pTVar4 = (pSVar23->TitleBar).SharedReferenceCount.ReferenceController;
  pIVar5 = (pSVar23->TitleBar).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pIVar5 != (IWindowTitleBar *)0x0) {
    pTVar4 = (pSVar23->TitleBar).SharedReferenceCount.ReferenceController;
    pIVar5 = (pSVar23->TitleBar).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar5 == (IWindowTitleBar *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,local_res10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
LAB_142794115:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
LAB_14279411a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar16);
  SDockingSplitter::AdjustDockedTabsIfNeeded((SDockingSplitter *)this);
  OnOwningWindowActivated(this);
LAB_14279415f:
  DestructItems<TSharedRef<SDockingNode,1>,int>
            ((TSharedRef<SDockingNode,1> *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((TSharedRef<SDockingNode,1> *)local_168.AllocatorInstance.Data !=
      (TSharedRef<SDockingNode,1> *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return;
}

