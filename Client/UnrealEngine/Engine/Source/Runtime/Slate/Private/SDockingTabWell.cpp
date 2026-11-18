// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 29

// SDockingTabWell @ 1426fe7c0

/* WARNING: Enum "Type": Some values do not have unique names */

SDockingTabWell * __thiscall SDockingTabWell::SDockingTabWell(SDockingTabWell *this)

{
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SDockingTabWell__6B_;
  (this->Tabs)._padding_ = (longlong)this;
  (this->Tabs)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Tabs)._padding_,"Children");
  *(undefined2 *)&(this->Tabs)._padding_ = 0xdc00;
  (this->Tabs)._padding_ = (longlong)&___7__TSlotlessChildren_VSDockTab____6B_;
  (this->Tabs).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tabs).Children.ArrayNum = 0;
  (this->Tabs).Children.ArrayMax = 0;
  (this->Tabs).bChangesInvalidatePrepass = true;
  (this->ParentTabStackPtr).Object = (SDockingTabStack *)0x0;
  (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->TabBeingDraggedPtr).Object = (SDockTab *)0x0;
  (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SDockingTabWell @ 1427023a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabWell::~SDockingTabWell(SDockingTabWell *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
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
  DestructItems<TSharedRef<SDockTab,1>,int>
            ((TSharedRef<SDockTab,1> *)(this->Tabs).Children.AllocatorInstance.Data,
             (this->Tabs).Children.ArrayNum);
  pFVar4 = (this->Tabs).Children.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FChildren::~FChildren((FChildren *)&this->Tabs);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddTab @ 14270b7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabWell::AddTab
          (SDockingTabWell *this,TSharedRef<SDockTab,1> *param_1,int param_2,bool param_3)

{
  SDockTab *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabWell *pSVar2;
  FTabManager *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  int iVar6;
  atomic<int> aVar7;
  TSharedRef<SWidget,1> *pTVar8;
  longlong *plVar9;
  TSharedRef<FTabManager,1> *pTVar10;
  int iVar11;
  SDockingTabStack *pSVar12;
  SDockingTabStack *pSVar13;
  SDockingTabStack *pSVar14;
  SDockingTabStack *pSVar15;
  bool bVar16;
  TSharedPtr<SDockingTabWell,1> local_78;
  TSharedRef<SWidget,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  TSharedRef<FTabManager,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  this_00 = param_1->Object;
  pSVar14 = (SDockingTabStack *)0x0;
  pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_68);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pSVar2 = (SDockingTabWell *)pTVar8->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.Object = pSVar2;
  local_78.SharedReferenceCount.ReferenceController = pTVar1;
  SDockTab::SetParent(this_00,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_2 == -1) {
    TSlotlessChildren<SDockTab>::Add(&this->Tabs,param_1);
    if (!param_3) {
      iVar11 = (this->Tabs).Children.ArrayNum + -1;
LAB_14270b89f:
      BringTabToFront(this,iVar11);
    }
  }
  else {
    iVar6 = (this->Tabs).Children.ArrayNum;
    if (param_2 < iVar6) {
      iVar6 = param_2;
    }
    iVar11 = 0;
    if (0 < iVar6) {
      iVar11 = iVar6;
    }
    if (iVar11 <= this->ForegroundTabIndex) {
      this->ForegroundTabIndex = this->ForegroundTabIndex + 1;
    }
    TSlotlessChildren<SDockTab>::Insert(&this->Tabs,param_1,iVar11);
    if (!param_3) goto LAB_14270b89f;
  }
  pSVar13 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pSVar12 = pSVar13;
  pSVar15 = pSVar14;
  if (pSVar13 != (SDockingTabStack *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar13->_padding_;
    do {
      pSVar12 = pSVar14;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14270b8d5;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar13->_padding_;
      bVar16 = aVar5 == aVar7;
      if (bVar16) {
        *(atomic<int> *)&pSVar13->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar16);
    pSVar15 = (this->ParentTabStackPtr).Object;
    pSVar12 = pSVar13;
    if (pSVar15 != (SDockingTabStack *)0x0) {
      pSVar14 = (SDockingTabStack *)&DAT_00000001;
      plVar9 = (longlong *)(**(code **)(pSVar15->_padding_ + 0x260))(pSVar15,local_58);
      if (*plVar9 != 0) {
        bVar16 = true;
        goto LAB_14270b8d8;
      }
    }
  }
LAB_14270b8d5:
  bVar16 = false;
  pSVar13 = pSVar12;
LAB_14270b8d8:
  if (pSVar14 != (SDockingTabStack *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  if (bVar16) {
    if ((pSVar15 == (SDockingTabStack *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar9 = (longlong *)(**(code **)(pSVar15->_padding_ + 0x260))(pSVar15,local_38);
    if ((*plVar9 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = SDockingArea::GetTabManager((SDockingArea *)*plVar9,&local_48);
    pFVar3 = ((pTVar10->Object->PrivateApi).Object)->TabManager;
    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar13);
  return;
}

// BringTabToFront @ 14270ecb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabWell::BringTabToFront(SDockingTabWell *this,int param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGlobalTabmanager *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGlobalTabmanager *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<FGlobalTabmanager,1> *pTVar10;
  TSharedRef<FTabManager,1> *pTVar11;
  TSharedRef<SDockTab,1> *pTVar12;
  SDockTab *local_c8;
  TReferenceControllerBase<1> *local_c0;
  SDockTab *local_b8;
  TReferenceControllerBase<1> *local_b0;
  TSharedPtr<FTabManager,1> local_a8;
  TSharedPtr<SDockingArea,1> local_98;
  TSharedPtr<SDockTab,1> local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  TSharedRef<FTabManager,1> local_38;
  
  iVar1 = this->ForegroundTabIndex;
  if (param_1 != iVar1) {
    iVar9 = (this->Tabs).Children.ArrayNum;
    if (iVar9 <= iVar1) {
      iVar1 = -1;
    }
    iVar9 = iVar9 + -1;
    if (param_1 < iVar9) {
      iVar9 = param_1;
    }
    this->ForegroundTabIndex = iVar9;
    GetDockArea(this,&local_98);
    if ((0 < (this->Tabs).Children.ArrayNum) && (local_98.Object != (SDockingArea *)0x0)) {
      if (iVar1 == -1) {
        local_70 = 0;
        local_b8 = (SDockTab *)0x0;
        local_b0 = (TReferenceControllerBase<1> *)0x0;
        local_78 = 0;
      }
      else {
        pTVar12 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,iVar1);
        local_b0 = (pTVar12->SharedReferenceCount).ReferenceController;
        local_b8 = pTVar12->Object;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_60 = 0;
        local_68 = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (this->ForegroundTabIndex == -1) {
        local_50 = 0;
        local_c8 = (SDockTab *)0x0;
        local_c0 = (TReferenceControllerBase<1> *)0x0;
        local_58 = 0;
      }
      else {
        pTVar12 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,this->ForegroundTabIndex);
        local_c0 = (pTVar12->SharedReferenceCount).ReferenceController;
        local_c8 = pTVar12->Object;
        if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_40 = 0;
        local_48 = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (local_b8 != local_c8) {
        pTVar10 = FGlobalTabmanager::Get();
        pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
        pFVar3 = pTVar10->Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_98.Object == (SDockingArea *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar11 = SDockingArea::GetTabManager(local_98.Object,&local_38);
        pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
        pFVar5 = (FGlobalTabmanager *)pTVar11->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (pFVar5 == (FGlobalTabmanager *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14270ee85:
          (**(code **)(**(longlong **)pFVar5->_padding_ + 0x20))
                    (*(longlong **)pFVar5->_padding_,&local_c8,&local_b8);
        }
        else if (pFVar5 != pFVar3) goto LAB_14270ee85;
        plVar6 = *(longlong **)pFVar3->_padding_;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  RefreshParentContent(this);
  if (this->ForegroundTabIndex == -1) {
    return;
  }
  pTVar12 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,this->ForegroundTabIndex);
  SDockTab::GetTabManagerPtr(pTVar12->Object,&local_a8);
  if ((FGlobalTabmanager *)local_a8.Object == (FGlobalTabmanager *)0x0) goto LAB_14270efbc;
  pTVar10 = FGlobalTabmanager::Get();
  if ((FGlobalTabmanager *)local_a8.Object == (FGlobalTabmanager *)0x0) {
LAB_14270ef6e:
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
  else {
    if ((FGlobalTabmanager *)local_a8.Object == pTVar10->Object) {
      pTVar10 = FGlobalTabmanager::Get();
      FGlobalTabmanager::UpdateMainMenu(pTVar10->Object,pTVar12,false);
      goto LAB_14270efbc;
    }
    if ((FGlobalTabmanager *)local_a8.Object == (FGlobalTabmanager *)0x0) goto LAB_14270ef6e;
  }
  local_88.Object = pTVar12->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTabManager::UpdateMainMenu(local_a8.Object,&local_88,false);
LAB_14270efbc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return;
}

// BringTabToFront @ 14270efe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabWell::BringTabToFront(SDockingTabWell *this,TSharedPtr<SDockTab,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (this->Tabs).Children.ArrayNum;
  if (0 < iVar6) {
    uVar4 = 0;
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
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
      if ((param_1->Object != (SDockTab *)0x0) &&
         (param_1->Object == *(SDockTab **)((this->Tabs).Children.AllocatorInstance.Data + lVar5)))
      {
        BringTabToFront(this,uVar4);
        break;
      }
      iVar6 = (this->Tabs).Children.ArrayNum;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar4 < iVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ComputeChildDropIndex @ 1427150d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDockingTabWell::ComputeChildDropIndex
          (SDockingTabWell *this,FGeometry *param_1,TSharedRef<SDockTab,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *this_00;
  FName FVar3;
  FName FVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TVector2<double> *pTVar12;
  FName *pFVar13;
  FTabId *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  TSharedRef<SDockTab,1> *pTVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  FName local_res8;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  TVector2<double> local_a8;
  FTabId local_98 [7];
  
  pTVar12 = ComputeChildSize(this,&local_a8,param_1);
  fVar24 = (float)(pTVar12->field0_0x0)._s_0.X;
  fVar21 = SDockTab::GetOverlapWidth(param_2->Object);
  fVar7 = __real_42540000;
  fVar6 = __real_42000000;
  iVar10 = (this->Tabs).Children.ArrayNum;
  uVar16 = 0;
  iVar20 = 0;
  fVar23 = 0.0;
  fVar22 = fVar24 * __real_3f000000 + this->ChildBeingDraggedOffset;
  uVar18 = uVar16;
  if (0 < iVar10) {
    do {
      if (this->ChildBeingDraggedOffset <= fVar23) break;
      uVar15 = (uint)uVar16;
      fVar23 = fVar23 + fVar24;
      uVar9 = 0;
      if ((int)uVar15 < iVar10) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        iVar10 = (*pcVar5)();
        return iVar10;
      }
      pFVar1 = (this->Tabs).Children.AllocatorInstance.Data;
      bVar8 = SDockTab::IsTabNameHidden(*(SDockTab **)(pFVar1 + uVar18));
      if (bVar8) {
        bVar8 = SDockTab::CanCloseTab(*(SDockTab **)(pFVar1 + uVar18));
        if (bVar8) {
          fVar22 = (fVar22 + fVar24) - fVar7;
        }
        else {
          fVar22 = (fVar22 + fVar24) - fVar6;
        }
      }
      iVar10 = (this->Tabs).Children.ArrayNum;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar15 + 1) < iVar10);
  }
  iVar10 = (this->Tabs).Children.ArrayNum;
  pTVar19 = (TSharedRef<SDockTab,1> *)(this->Tabs).Children.AllocatorInstance.Data;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = iVar10;
  if (iVar10 == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar10,0,&local_b8,iVar10,&local_ac);
    ConstructItems<TSharedRef<SDockTab,1>,TSharedRef<SDockTab,1>,int>(local_b8.Data,pTVar19,iVar10);
  }
  pTVar19 = (TSharedRef<SDockTab,1> *)(local_b8.Data + (longlong)local_b0 * 0x10);
  FVar17.Data = local_b8.Data;
  do {
    if ((TSharedRef<SDockTab,1> *)FVar17.Data == pTVar19) {
      UE::Editor::HomeScreen::IsHomeScreenEnabled();
LAB_142715339:
      iVar10 = (this->Tabs).Children.ArrayNum;
      iVar11 = (int)(fVar22 / (fVar24 - fVar21));
      if (iVar11 < iVar10) {
        iVar10 = iVar11;
      }
      if (iVar20 < iVar10) {
        iVar20 = iVar10;
      }
      DestructItems<TSharedRef<SDockTab,1>,int>((TSharedRef<SDockTab,1> *)local_b8.Data,local_b0);
      if ((TSharedRef<SDockTab,1> *)local_b8.Data != (TSharedRef<SDockTab,1> *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return iVar20;
    }
    pTVar2 = (((TSharedRef<SDockTab,1> *)FVar17.Data)->SharedReferenceCount).ReferenceController;
    this_00 = ((TSharedRef<SDockTab,1> *)FVar17.Data)->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13 = ::FName::FName(&local_res8,L"LevelEditor");
    pFVar14 = SDockTab::GetLayoutIdentifier(this_00,local_98);
    FVar3 = *pFVar13;
    FVar4 = pFVar14->TabType;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (FVar4 == FVar3) {
      bVar8 = UE::Editor::HomeScreen::IsHomeScreenEnabled();
      if ((TSharedRef<SDockTab,1> *)FVar17.Data != (TSharedRef<SDockTab,1> *)0x0) {
        iVar20 = bVar8 + 1;
      }
      goto LAB_142715339;
    }
    FVar17.Data = FVar17.Data + 0x10;
  } while( true );
}

// ComputeChildSize @ 1427153e0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SDockingTabWell::ComputeChildSize
          (SDockingTabWell *this,TVector2<double> *__return_storage_ptr__,FGeometry *param_1)

{
  int iVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  ETabRole EVar7;
  TSharedRef<SDockTab,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TVector2<double> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  SDockTab *this_00;
  float fVar12;
  TVector2<double>_u_0 TVar13;
  float fStackX_c;
  float local_res10;
  TReferenceControllerBase<1> *local_50;
  
  iVar1 = (this->Tabs).Children.ArrayNum;
  bVar5 = false;
  if (iVar1 < 1) {
    fVar12 = 0.0;
  }
  else {
    pTVar8 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,0);
    fVar12 = SDockTab::GetOverlapWidth(pTVar8->Object);
  }
  this_00 = (this->TabBeingDraggedPtr).Object;
  fStackX_c = SUB84(param_1->Size,4);
  local_res10 = SUB84(param_1->Size,0);
  iVar3 = iVar1;
  if (this_00 != (SDockTab *)0x0) {
    iVar3 = iVar1 + 1;
  }
  dVar2 = (double)((local_res10 - fVar12) / (float)iVar3 + fVar12);
  if (iVar1 < 1) {
    pTVar9 = (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = false;
    bVar5 = true;
    pTVar11 = pTVar9;
  }
  else {
    pTVar8 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,0);
    pTVar11 = (pTVar8->SharedReferenceCount).ReferenceController;
    this_00 = pTVar8->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    pTVar9 = local_50;
    local_50 = pTVar11;
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  TVar13 = FDockingConstants::MaxMinorTabSize.field0_0x0;
  if (this_00 != (SDockTab *)0x0) {
    EVar7 = SDockTab::GetVisualTabRole(this_00);
    pTVar10 = &FDockingConstants::MaxMinorTabSize;
    if (EVar7 == MajorTab) {
      pTVar10 = &FDockingConstants::MaxMajorTabSize;
    }
    TVar13._s_0 = pTVar10->field0_0x0;
  }
  if (TVar13._s_0.X <= dVar2) {
    dVar2 = TVar13._s_0.X;
  }
  dVar4 = (double)fStackX_c;
  if (TVar13._s_0.Y <= (double)fStackX_c) {
    dVar4 = TVar13._s_0.Y;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 142715590

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SDockingTabWell::ComputeDesiredSize
          (SDockingTabWell *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  TReferenceControllerBase<1> *pTVar2;
  SDockTab *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  
  pTVar2 = (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
  this_00 = (this->TabBeingDraggedPtr).Object;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar9 = (this->Tabs).Children.ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar9) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TVector2<double> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (this->Tabs).Children.AllocatorInstance.Data;
      if ((this_00 == (SDockTab *)0x0) || (this_00 != *(SDockTab **)(pFVar3 + lVar11))) {
        FVar8 = SWidget::GetDesiredSize(*(SWidget **)(pFVar3 + lVar11));
        dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
        dVar12 = (double)*(float *)((longlong)FVar8 + 4);
        if ((double)*(float *)((longlong)FVar8 + 4) <= dVar1) {
          dVar12 = dVar1;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             (double)*(float *)FVar8 + (__return_storage_ptr__->field0_0x0)._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
      }
      iVar9 = (this->Tabs).Children.ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < iVar9);
  }
  if (this_00 != (SDockTab *)0x0) {
    FVar8 = SWidget::GetDesiredSize((SWidget *)this_00);
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    dVar12 = (double)*(float *)((longlong)FVar8 + 4);
    if ((double)*(float *)((longlong)FVar8 + 4) <= dVar1) {
      dVar12 = dVar1;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)*(float *)FVar8 + (__return_storage_ptr__->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ComputeDraggedTabOffset @ 1427158a0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
SDockingTabWell::ComputeDraggedTabOffset
          (SDockingTabWell *this,FGeometry *param_1,FPointerEvent *param_2,TVector2<double> *param_3
          )

{
  SDockTab *this_00;
  code *pcVar1;
  bool bVar2;
  TTransform2<float> *pTVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TVector2<double>_u_0 local_78;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double dStack_50;
  TTransform2<float> local_48 [2];
  
  ComputeChildSize(this,(TVector2<double> *)&local_78._s_0,param_1);
  this_00 = (this->TabBeingDraggedPtr).Object;
  local_68 = __real_404a800000000000;
  local_58 = __real_4040000000000000;
  local_60 = local_78._s_0.Y;
  dStack_50 = local_78._s_0.Y;
  uVar6 = local_78._0_4_;
  uVar7 = local_78._4_4_;
  if (this_00 != (SDockTab *)0x0) {
    bVar2 = SDockTab::IsTabNameHidden(this_00);
    if (bVar2) {
      if ((this->TabBeingDraggedPtr).Object == (SDockTab *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar5 = (float)(*pcVar1)();
          return fVar5;
        }
      }
      bVar2 = SDockTab::CanCloseTab((this->TabBeingDraggedPtr).Object);
      puVar4 = &local_68;
      if (!bVar2) {
        puVar4 = &local_58;
      }
      uVar6 = *(undefined4 *)puVar4;
      uVar7 = *(undefined4 *)((longlong)puVar4 + 4);
    }
  }
  pTVar3 = Inverse<TTransform2<float>_>(local_48,&param_1->AccumulatedRenderTransform);
  local_78._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  local_78._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  return (float)((double)((float)local_78._4_4_ * (pTVar3->M).M[1][0] +
                          (float)local_78._0_4_ * (pTVar3->M).M[0][0] +
                         (pTVar3->Trans).field0_0x0._s_0.X) -
                (double)CONCAT44(uVar7,uVar6) * (param_3->field0_0x0)._s_0.X);
}

// Construct @ 14271ad10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabWell::Construct(SDockingTabWell *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TVector2<double> TVar6;
  bool bVar7;
  TSharedPtr<SDockingTabStack,1> *pTVar8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->ForegroundTabIndex = -1;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TabBeingDraggedPtr != (TSharedPtr<SDockTab,1> *)&local_18) {
    (this->TabBeingDraggedPtr).Object = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TabBeingDraggedPtr).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->ChildBeingDraggedOffset = 0.0;
  TVar6 = UE::Math::TVector2<double>::ZeroVector;
  this->SeparatorBrush = (FSlateBrush *)0x0;
  (this->TabGrabOffsetFraction).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar6.field0_0x0;
  pTVar8 = TAttribute<TSharedPtr<SDockingTabStack,1>_>::Get(&param_1->_ParentStackNode);
  if (pTVar8->Object == (SDockingTabStack *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._ParentStackNode.Get().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabWell.cpp"
                       ,0x24,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar8 = TAttribute<TSharedPtr<SDockingTabStack,1>_>::Get(&param_1->_ParentStackNode);
  (this->ParentTabStackPtr).Object = pTVar8->Object;
  pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
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
    (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController = pTVar3;
  }
  return;
}

// GetChildren @ 14273bd30

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SDockingTabWell::GetChildren(SDockingTabWell *this)

{
  return (FChildren *)&this->Tabs;
}

// GetDockArea @ 14273dbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingArea,1> * __thiscall
SDockingTabWell::GetDockArea
          (SDockingTabWell *this,TSharedPtr<SDockingArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TSharedPtr<SDockingArea,1> *pTVar5;
  undefined8 *puVar6;
  SDockingTabStack *pSVar7;
  SDockingTabStack *pSVar8;
  SDockingTabStack *pSVar9;
  bool bVar10;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((((this->ParentTabStackPtr).Object == (SDockingTabStack *)0x0) ||
      (pTVar1 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SDockingArea *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar8 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pSVar7 = pSVar8;
  pSVar9 = (SDockingTabStack *)0x0;
  if (pSVar8 != (SDockingTabStack *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = (SDockingTabStack *)0x0;
      pSVar9 = (SDockingTabStack *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14273dc41;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar8->_padding_;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    pSVar9 = (this->ParentTabStackPtr).Object;
    pSVar7 = pSVar8;
    if (pSVar9 != (SDockingTabStack *)0x0) goto LAB_14273dc67;
  }
LAB_14273dc41:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<SDockingArea,1> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14273dc67:
  puVar6 = (undefined8 *)(**(code **)(pSVar9->_padding_ + 0x260))(pSVar9,local_18);
  __return_storage_ptr__->Object = (SDockingArea *)*puVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return __return_storage_ptr__;
}

// GetForegroundTab @ 14273e7b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockTab,1> * __thiscall
SDockingTabWell::GetForegroundTab
          (SDockingTabWell *this,TSharedPtr<SDockTab,1> *__return_storage_ptr__)

{
  SDockTab *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<SDockTab,1> *pTVar3;
  
  pSVar1 = (this->TabBeingDraggedPtr).Object;
  if (pSVar1 == (SDockTab *)0x0) {
    if ((0 < (this->Tabs).Children.ArrayNum) && (-1 < this->ForegroundTabIndex)) {
      pTVar3 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,this->ForegroundTabIndex);
      pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
      pSVar1 = pTVar3->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      __return_storage_ptr__->Object = pSVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = (SDockTab *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    __return_storage_ptr__->Object = pSVar1;
    pTVar2 = (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetForegroundTabIndex @ 14273e9b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SDockingTabWell::GetForegroundTabIndex(SDockingTabWell *this)

{
  if (0 < (this->Tabs).Children.ArrayNum) {
    return this->ForegroundTabIndex;
  }
  return -1;
}

// GetNumTabs @ 142740890

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall SDockingTabWell::GetNumTabs(SDockingTabWell *this)

{
  return (this->Tabs).Children.ArrayNum;
}

// GetParentDockTabStack @ 142742b90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SDockingTabStack,1> * __thiscall
SDockingTabWell::GetParentDockTabStack
          (SDockingTabWell *this,TSharedPtr<SDockingTabStack,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabStack *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SDockingTabStack *pSVar5;
  SDockingTabStack *pSVar6;
  bool bVar7;
  
  if ((((this->ParentTabStackPtr).Object == (SDockingTabStack *)0x0) ||
      (pTVar1 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SDockingTabStack *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pSVar2 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pSVar5 = pSVar2;
  pSVar6 = (SDockingTabStack *)0x0;
  if (pSVar2 != (SDockingTabStack *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar5 = (SDockingTabStack *)0x0;
      pSVar6 = (SDockingTabStack *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142742be2;
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
    pSVar6 = (this->ParentTabStackPtr).Object;
  }
LAB_142742be2:
  __return_storage_ptr__->Object = pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetTabs @ 142744de0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlotlessChildren<SDockTab> * __thiscall SDockingTabWell::GetTabs(SDockingTabWell *this)

{
  return &this->Tabs;
}

// GetWindowZoneOverride @ 1427464f0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SDockingTabWell::GetWindowZoneOverride(SDockingTabWell *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SDockingTabStack *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  Type TVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  uint uStackX_c;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar1;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) goto LAB_142746527;
  aVar5 = pTVar1->SharedReferenceCount;
  do {
    pTVar8 = pTVar9;
    if (aVar5 == (atomic<int>)0x0) goto LAB_142746527;
    LOCK();
    aVar6 = pTVar1->SharedReferenceCount;
    bVar10 = aVar5 == aVar6;
    if (bVar10) {
      pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar6 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar6;
  } while (!bVar10);
  pSVar2 = (this->ParentTabStackPtr).Object;
  pTVar8 = pTVar1;
  if (pSVar2 == (SDockingTabStack *)0x0) goto LAB_142746527;
  (**(code **)(pSVar2->_padding_ + 0x260))(pSVar2,&local_18);
  if (local_18 == 0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142746629:
    bVar10 = false;
  }
  else {
    if ((local_18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      TVar7 = (*pcVar4)();
      return TVar7;
    }
    if (((*(longlong *)(local_18 + 0x300) == 0) || (*(longlong *)(local_18 + 0x308) == 0)) ||
       (*(int *)(*(longlong *)(local_18 + 0x308) + 8) < 1)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar8 = pTVar9;
      pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000001;
      goto LAB_142746629;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(local_18 + 0x308);
    pTVar8 = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar3->SharedReferenceCount;
      do {
        pTVar8 = pTVar9;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1427465f1;
        LOCK();
        aVar6 = pTVar3->SharedReferenceCount;
        bVar10 = aVar5 == aVar6;
        if (bVar10) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar10);
      pTVar9 = *(TReferenceControllerBase<1> **)(local_18 + 0x300);
      pTVar8 = pTVar3;
    }
LAB_1427465f1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar10 = pTVar9 == (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000001;
    if (bVar10) goto LAB_142746629;
    bVar10 = true;
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return TitleBar;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  pTVar8 = pTVar1;
LAB_142746527:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return ClientArea;
}

// OnArrangeChildren @ 142760be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabWell::OnArrangeChildren
          (SDockingTabWell *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int iVar1;
  SDockTab *this_00;
  FScriptContainerElement *pFVar2;
  SDockTab *this_01;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_238 [32];
  uint local_208;
  undefined8 local_200;
  longlong local_1f0;
  FSlateLayoutTransform local_1e0;
  FSlateLayoutTransform local_1d4;
  TSharedRef<SWidget,1> local_1c8;
  FDeprecateVector2DParameter local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  FDeprecateVector2DParameter local_1a8;
  TSharedRef<SDockTab,1> local_1a0;
  TSharedRef<SWidget,1> local_190;
  TVector2<double>_u_0 local_180;
  FArrangedWidget local_168;
  FArrangedWidget local_118;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar18 = (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
  this_00 = (this->TabBeingDraggedPtr).Object;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar1 = (this->Tabs).Children.ArrayNum;
  local_1f0 = (longlong)iVar1;
  local_1b0 = pTVar18;
  ComputeChildSize(this,(TVector2<double> *)&local_180._s_0,param_1);
  local_168.Geometry._16_8_ = __real_404a800000000000;
  local_168.Geometry.AccumulatedRenderTransform.M.M[0][1] = (float)__real_4040000000000000;
  local_168.Geometry.AccumulatedRenderTransform.M.M[1][0] = __real_4040000000000000._4_4_;
  local_208 = 0xffffffff;
  local_168.Geometry.Position.field0_0x0._s_0.Y = (float)local_180._8_4_;
  local_168.Geometry.AccumulatedRenderTransform.M.M[0][0] = (float)local_180._12_4_;
  local_168.Geometry.AccumulatedRenderTransform.M.M[1][1] = (float)local_180._8_4_;
  local_168.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X = (float)local_180._12_4_;
  if (this_00 != (SDockTab *)0x0) {
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a0.Object = this_00;
    local_1a0.SharedReferenceCount.ReferenceController = pTVar18;
    local_208 = ComputeChildDropIndex(this,param_1,&local_1a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  uVar12 = local_168.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
  fVar11 = local_168.Geometry.AccumulatedRenderTransform.M.M[1][1];
  fVar8 = local_168.Geometry.AccumulatedRenderTransform.M.M[0][0];
  uVar7 = local_168.Geometry.Position.field0_0x0._s_0.Y;
  dVar4 = __real_3fe0000000000000;
  fVar9 = local_168.Geometry.AccumulatedRenderTransform.M.M[0][1];
  fVar10 = local_168.Geometry.AccumulatedRenderTransform.M.M[1][0];
  uVar15 = 0;
  fVar25 = 0.0;
  uVar5 = local_168.Geometry.AbsolutePosition.field0_0x0._s_0.Y;
  uVar6 = local_168.Geometry.Position.field0_0x0._s_0.X;
  if (0 < iVar1) {
    lVar16 = 0;
    uVar17 = 0xffffffff;
    do {
      uVar14 = 0;
      if ((int)uVar15 < (this->Tabs).Children.ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Tabs).Children.AllocatorInstance.Data;
      pTVar18 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar16 + 8);
      this_01 = *(SDockTab **)(pFVar2 + lVar16);
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar20 = local_180._0_4_;
      uVar21 = local_180._4_4_;
      uVar22 = local_180._8_4_;
      uVar23 = local_180._12_4_;
      if (((this_01 != (SDockTab *)0x0) && (bVar13 = SDockTab::IsTabNameHidden(this_01), bVar13)) &&
         (bVar13 = SDockTab::CanCloseTab(this_01), uVar20 = fVar9, uVar21 = fVar10, uVar22 = fVar11,
         uVar23 = uVar12, bVar13)) {
        uVar20 = uVar5;
        uVar21 = uVar6;
        uVar22 = uVar7;
        uVar23 = fVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      fVar24 = (float)((double)CONCAT44(uVar21,uVar20) * dVar4 +
                      (double)this->ChildBeingDraggedOffset);
      fVar19 = SDockTab::GetOverlapWidth(this_01);
      fVar19 = (float)((double)CONCAT44(uVar21,uVar20) - (double)fVar19);
      if (this_00 == (SDockTab *)0x0) {
LAB_142760e3b:
        if (uVar17 == uVar15) {
          fVar25 = fVar25 + fVar19;
        }
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b8._4_4_ = (float)(double)CONCAT44(uVar23,uVar22);
        local_1b8._0_4_ = (float)(double)CONCAT44(uVar21,uVar20);
        local_1e0.Scale = 1.0;
        local_1e0.Translation.field0_0x0._s_0.Y = 0.0;
        local_1e0.Translation.field0_0x0._s_0.X = fVar25;
        local_190.Object = (SWidget *)this_01;
        local_190.SharedReferenceCount.ReferenceController = pTVar18;
        FGeometry::MakeChild(param_1,&local_168,&local_190,&local_1b8,&local_1e0);
        FArrangedChildren::AddWidget(param_2,&local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        fVar25 = fVar25 + fVar19;
      }
      else if (this_00 != this_01) {
        if (((fVar25 <= fVar24) && (fVar24 < fVar19 + fVar25)) &&
           (uVar17 = uVar15, (int)uVar15 < (int)local_208)) {
          uVar17 = local_208;
        }
        goto LAB_142760e3b;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x10;
      local_1f0 = local_1f0 + -1;
      pTVar18 = local_1b0;
    } while (local_1f0 != 0);
  }
  if (this_00 != (SDockTab *)0x0) {
    bVar13 = SDockTab::IsTabNameHidden(this_00);
    if ((bVar13) &&
       (bVar13 = SDockTab::CanCloseTab(this_00), local_180._0_4_ = uVar5, local_180._4_4_ = uVar6,
       local_180._8_4_ = uVar7, local_180._12_4_ = fVar8, !bVar13)) {
      local_180._0_4_ = fVar9;
      local_180._4_4_ = fVar10;
      local_180._8_4_ = fVar11;
      local_180._12_4_ = uVar12;
    }
    local_1d4.Translation.field0_0x0._s_0.X = this->ChildBeingDraggedOffset;
    local_200._4_4_ = (float)(double)CONCAT44(local_180._12_4_,local_180._8_4_);
    local_200._0_4_ = (float)(double)CONCAT44(local_180._4_4_,local_180._0_4_);
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8 = local_200;
    local_1d4.Scale = 1.0;
    local_1d4.Translation.field0_0x0._s_0.Y = 0.0;
    local_1c8.Object = (SWidget *)this_00;
    local_1c8.SharedReferenceCount.ReferenceController = pTVar18;
    FGeometry::MakeChild(param_1,&local_118,&local_1c8,&local_1a8,&local_1d4);
    FArrangedChildren::AddWidget(param_2,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return;
}

// OnDragEnter @ 142761c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabWell::OnDragEnter(SDockingTabWell *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  TSharedPtr<SDockTab,1> *pTVar1;
  FDragDropOperation *pFVar2;
  code *pcVar3;
  FDockingDragOperation *this_00;
  TReferenceControllerBase<1> *pTVar4;
  SDockTab *this_01;
  double dVar5;
  atomic<int> aVar6;
  char cVar7;
  atomic<int> aVar8;
  FString *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  SDockingTabStack *pSVar11;
  SDockingTabStack *pSVar12;
  SDockingTabStack *this_02;
  SDockingTabStack *pSVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  SDockTab *local_b8;
  FSharedReferencer<1> local_b0;
  TSharedRef<SDockTab,1> local_a8;
  TSharedRef<SDockingTabWell,1> local_98;
  FDockingStackOptionalContent local_88;
  TSharedRef<SDockingNode,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWidget,1> local_38;
  
  pFVar2 = (param_2->Content).Object;
  if (pFVar2 != (FDragDropOperation *)0x0) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
    pFVar9 = FDockingDragOperation::GetTypeId();
    cVar7 = (*pcVar3)(pFVar2,pFVar9);
    if (cVar7 != '\0') {
      pTVar14 = (param_2->Content).SharedReferenceCount.ReferenceController;
      this_00 = (FDockingDragOperation *)(param_2->Content).Object;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 == (FDockingDragOperation *)0x0) goto LAB_142762044;
      pSVar12 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController
      ;
      this_02 = (SDockingTabStack *)0x0;
      pSVar11 = this_02;
      pSVar13 = pSVar12;
      if (pSVar12 == (SDockingTabStack *)0x0) {
LAB_142761d25:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        pSVar12 = pSVar13;
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar6 = *(atomic<int> *)&pSVar12->_padding_;
        do {
          pSVar11 = (SDockingTabStack *)0x0;
          pSVar13 = this_02;
          if (aVar6 == (atomic<int>)0x0) goto LAB_142761d25;
          LOCK();
          aVar8 = *(atomic<int> *)&pSVar12->_padding_;
          bVar15 = aVar6 == aVar8;
          if (bVar15) {
            *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar15);
        pSVar11 = (this->ParentTabStackPtr).Object;
        pSVar13 = pSVar12;
        if (pSVar11 == (SDockingTabStack *)0x0) goto LAB_142761d25;
      }
      if (pSVar12 != (SDockingTabStack *)0x0) {
        LOCK();
        *(int *)&pSVar12->_padding_ = (int)pSVar12->_padding_ + 1;
        UNLOCK();
      }
      local_58.Object = (SDockingNode *)pSVar11;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar12;
      bVar15 = FDockingDragOperation::CanDockInNode(this_00,&local_58,DockingViaTabWell);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (!bVar15) goto LAB_142762044;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_48);
      pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
      local_98.Object = (SDockingTabWell *)pTVar10->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      FDockingDragOperation::OnTabWellEntered(this_00,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_b0.ReferenceController =
           (this_00->TabBeingDragged).SharedReferenceCount.ReferenceController;
      local_b8 = (this_00->TabBeingDragged).Object;
      if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar1 = &this->TabBeingDraggedPtr;
      if (pTVar1 != (TSharedPtr<SDockTab,1> *)&local_b8) {
        pTVar1->Object = local_b8;
        local_b8 = (SDockTab *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TabBeingDraggedPtr).SharedReferenceCount,&local_b0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.ReferenceController);
      if ((pTVar1->Object == (SDockTab *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a8.SharedReferenceCount.ReferenceController =
           (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
      local_a8.Object = pTVar1->Object;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_a8.Object == (SDockTab *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TSlotlessChildren<SDockTab>::Add(&this->Tabs,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      dVar5 = (this_00->TabGrabOffsetFraction).field0_0x0._s_0.Y;
      (this->TabGrabOffsetFraction).field0_0x0._s_0.X =
           (this_00->TabGrabOffsetFraction).field0_0x0._s_0.X;
      (this->TabGrabOffsetFraction).field0_0x0._s_0.Y = dVar5;
      pSVar12 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController
      ;
      pSVar11 = pSVar12;
      if (pSVar12 == (SDockingTabStack *)0x0) {
LAB_142761f05:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pSVar12 = pSVar11;
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        aVar6 = *(atomic<int> *)&pSVar12->_padding_;
        do {
          pSVar11 = this_02;
          if (aVar6 == (atomic<int>)0x0) goto LAB_142761f05;
          LOCK();
          aVar8 = *(atomic<int> *)&pSVar12->_padding_;
          bVar15 = aVar6 == aVar8;
          if (bVar15) {
            *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar15);
        this_02 = (this->ParentTabStackPtr).Object;
        pSVar11 = pSVar12;
        if (this_02 == (SDockingTabStack *)0x0) goto LAB_142761f05;
      }
      local_88.ContentLeft.Object = SNullWidget::NullWidget.Object;
      local_88.ContentLeft.SharedReferenceCount.ReferenceController =
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
      local_88.ContentRight.Object = SNullWidget::NullWidget.Object;
      local_88.ContentRight.SharedReferenceCount.ReferenceController =
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
      local_88.TitleBarContentRight.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      local_88.TitleBarContentRight.Object = SNullWidget::NullWidget.Object;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this_00->TabBeingDragged).SharedReferenceCount.ReferenceController;
      this_01 = (this_00->TabBeingDragged).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_01 == (SDockTab *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar10 = SDockTab::GetContent(this_01,&local_38);
      SDockingTabStack::SetNodeContent(this_02,pTVar10,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.TitleBarContentRight.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.ContentRight.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.ContentLeft.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar12);
      goto LAB_142762044;
    }
  }
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
LAB_142762044:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// OnDragLeave @ 142762430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabWell::OnDragLeave(SDockingTabWell *this,FDragDropEvent *param_1)

{
  TSharedPtr<SDockTab,1> *pTVar1;
  int iVar2;
  FDragDropOperation *pFVar3;
  code *pcVar4;
  FDockingDragOperation *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SDockTab *this_01;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> aVar8;
  char cVar9;
  bool bVar10;
  atomic<int> aVar11;
  FString *pFVar12;
  TSharedPtr<SDockingArea,1> *pTVar13;
  FGeometry *pFVar14;
  TSharedRef<SWidget,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  int iVar18;
  FSharedReferencer<1> FVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  SDockingTabStack *local_f8;
  TSharedRef<SDockTab,1> local_f0;
  FDockingDragOperation *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedRef<SDockingNode,1> local_d0;
  longlong local_c0;
  FSharedReferencer<1> FStack_b8;
  TSharedPtr<SDockingTabWell,1> local_b0;
  TSharedPtr<SDockingArea,1> local_a0;
  TSharedRef<SWidget,1> local_90;
  FGeometry local_80;
  TSharedRef<SDockingTabWell,1> local_48;
  
  pFVar3 = (param_1->Content).Object;
  bVar10 = false;
  if (pFVar3 != (FDragDropOperation *)0x0) {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
    pFVar12 = FDockingDragOperation::GetTypeId();
    cVar9 = (*pcVar4)(pFVar3,pFVar12);
    if (cVar9 != '\0') {
      local_d8 = (param_1->Content).SharedReferenceCount.ReferenceController;
      this_00 = (FDockingDragOperation *)(param_1->Content).Object;
      if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar16 = local_d8;
      local_e0 = this_00;
      if (this_00 == (FDockingDragOperation *)0x0) goto LAB_142762889;
      pTVar16 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
      local_f8 = (SDockingTabStack *)0x0;
      if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_1427624e6:
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar21) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_f8 == (SDockingTabStack *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar21)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        aVar8 = pTVar16->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar16 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1427624e6;
          }
          LOCK();
          aVar11 = pTVar16->SharedReferenceCount;
          bVar21 = aVar8 == aVar11;
          if (bVar21) {
            pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar11 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar11;
        } while (!bVar21);
        local_f8 = (this->ParentTabStackPtr).Object;
        if (local_f8 == (SDockingTabStack *)0x0) goto LAB_1427624e6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar5 = (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
      this_01 = (this->TabBeingDraggedPtr).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar19.ReferenceController = local_d0.SharedReferenceCount.ReferenceController;
      if (this_01 == (SDockTab *)0x0) {
LAB_1427625a9:
        bVar21 = false;
      }
      else {
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar10 = true;
        local_d0.Object = (SDockingNode *)local_f8;
        local_d0.SharedReferenceCount.ReferenceController = pTVar16;
        bVar21 = FDockingDragOperation::CanDockInNode(this_00,&local_d0,DockingViaTabWell);
        FVar19.ReferenceController = pTVar16;
        if (!bVar21) goto LAB_1427625a9;
        bVar21 = true;
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
      }
      if (bVar21) {
        if ((this_01 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_01 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6 = (this->Tabs).Children.AllocatorInstance.Data;
        for (pFVar20 = pFVar6; pFVar20 != pFVar6 + (longlong)(this->Tabs).Children.ArrayNum * 0x10;
            pFVar20 = pFVar20 + 0x10) {
          if (*(SDockTab **)pFVar20 == this_01) {
            iVar18 = (int)((longlong)pFVar20 - (longlong)pFVar6 >> 4);
            goto LAB_142762658;
          }
        }
        iVar18 = -1;
LAB_142762658:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        iVar2 = (this->Tabs).Children.ArrayNum;
        if (1 < iVar2) {
          iVar17 = iVar18 + 1;
          if (iVar2 <= iVar18 + 1) {
            iVar17 = 0;
            if (0 < iVar18 + -1) {
              iVar17 = iVar18 + -1;
            }
          }
          BringTabToFront(this,iVar17);
        }
        pTVar1 = &this->TabBeingDraggedPtr;
        if ((pTVar1->Object == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_f0.SharedReferenceCount.ReferenceController =
             (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
        local_f0.Object = pTVar1->Object;
        if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_f0.Object == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TSlotlessChildren<SDockTab>::Remove(&this->Tabs,&local_f0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
        if ((this_01 == (SDockTab *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_b0.Object = (SDockingTabWell *)0x0;
        local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        SDockTab::SetParent(this_01,&local_b0);
        local_c0 = 0;
        FStack_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar1 != (TSharedPtr<SDockTab,1> *)&local_c0) {
          pTVar1->Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TabBeingDraggedPtr).SharedReferenceCount,&FStack_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_b8.ReferenceController);
        if ((this->Tabs).Children.ArrayNum == 0) {
          SDockingTabStack::OnLastTabRemoved(local_f8);
        }
        pTVar13 = GetDockArea(this,&local_a0);
        if ((pTVar13->Object == (SDockingArea *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SDockingArea::CleanUp(pTVar13->Object,TabRemoval_DraggedOut);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
        pFVar14 = SWidget::GetTickSpaceGeometry((SWidget *)local_f8);
        local_80.Size = pFVar14->Size;
        local_80._8_8_ = *(undefined8 *)&pFVar14->Scale;
        local_80._16_8_ = *(undefined8 *)((longlong)&(pFVar14->AbsolutePosition).field0_0x0 + 4);
        local_80._24_8_ = *(undefined8 *)((longlong)&(pFVar14->Position).field0_0x0 + 4);
        local_80.AccumulatedRenderTransform.M.M._4_8_ =
             *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[0] + 1);
        local_80.AccumulatedRenderTransform._12_8_ =
             *(undefined8 *)((pFVar14->AccumulatedRenderTransform).M.M[1] + 1);
        local_80._48_8_ =
             *(undefined8 *)((longlong)&(pFVar14->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
        pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_90);
        pTVar7 = (pTVar15->SharedReferenceCount).ReferenceController;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.SharedReferenceCount.ReferenceController);
        FDockingDragOperation::OnTabWellLeft(local_e0,&local_48,&local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      pTVar16 = local_d8;
      goto LAB_142762889;
    }
  }
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
LAB_142762889:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// OnDragOver @ 142762e00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabWell::OnDragOver
          (SDockingTabWell *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  FDockingDragOperation *this_00;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FReply *pFVar6;
  SDockingTabStack *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  SDockingTabStack *pSVar9;
  SDockingTabStack *pSVar10;
  bool bVar11;
  float fVar12;
  TSharedRef<SDockingNode,1> local_38;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142762f6a:
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1);
    if (cVar4 == '\0') goto LAB_142762f6a;
    pTVar8 = (param_2->Content).SharedReferenceCount.ReferenceController;
    this_00 = (FDockingDragOperation *)(param_2->Content).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FDockingDragOperation *)0x0) {
      pSVar10 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController
      ;
      pSVar7 = (SDockingTabStack *)0x0;
      pSVar9 = pSVar10;
      if (pSVar10 == (SDockingTabStack *)0x0) {
LAB_142762ea5:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar11) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar2)();
          return pFVar6;
        }
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        pSVar10 = pSVar9;
        if (bVar11) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar2)();
          return pFVar6;
        }
      }
      else {
        aVar3 = *(atomic<int> *)&pSVar10->_padding_;
        do {
          pSVar9 = pSVar7;
          if (aVar3 == (atomic<int>)0x0) goto LAB_142762ea5;
          LOCK();
          aVar5 = *(atomic<int> *)&pSVar10->_padding_;
          bVar11 = aVar3 == aVar5;
          if (bVar11) {
            *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar11);
        pSVar7 = (this->ParentTabStackPtr).Object;
        pSVar9 = pSVar10;
        if (pSVar7 == (SDockingTabStack *)0x0) goto LAB_142762ea5;
      }
      if (pSVar10 != (SDockingTabStack *)0x0) {
        LOCK();
        *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
        UNLOCK();
      }
      local_38.Object = (SDockingNode *)pSVar7;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar10;
      bVar11 = FDockingDragOperation::CanDockInNode(this_00,&local_38,DockingViaTabWell);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (bVar11) {
        fVar12 = ComputeDraggedTabOffset
                           (this,param_1,(FPointerEvent *)param_2,&this->TabGrabOffsetFraction);
        this->ChildBeingDraggedOffset = fVar12;
        bVar11 = true;
        goto LAB_142762f70;
      }
    }
  }
  bVar11 = false;
LAB_142762f70:
  FReply::FReply(__return_storage_ptr__,bVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// OnDrop @ 142763920

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabWell::OnDrop
          (SDockingTabWell *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  TSharedPtr<SDockTab,1> *this_00;
  FDragDropOperation *pFVar1;
  code *pcVar2;
  FDockingDragOperation *this_01;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  FReply *pFVar7;
  TSharedRef<SDockTab,1> *pTVar8;
  SDockingTabStack *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TSharedPtr<SDockTab,1> local_98;
  TSharedRef<SDockTab,1> local_88;
  TSharedPtr<SDockTab,1> local_78;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  TSharedRef<SDockingNode,1> local_58;
  TSharedRef<SDockTab,1> local_48;
  TSharedRef<SDockTab,1> local_38;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142763c71:
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FDockingDragOperation::GetTypeId();
    cVar4 = (*pcVar2)(pFVar1);
    if (cVar4 == '\0') goto LAB_142763c71;
    pTVar11 = (param_2->Content).SharedReferenceCount.ReferenceController;
    this_01 = (FDockingDragOperation *)(param_2->Content).Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_01 != (FDockingDragOperation *)0x0) {
      pTVar10 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
      pSVar9 = (SDockingTabStack *)0x0;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1427639c5:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar12) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
      }
      else {
        aVar3 = pTVar10->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1427639c5;
          }
          LOCK();
          aVar5 = pTVar10->SharedReferenceCount;
          bVar12 = aVar3 == aVar5;
          if (bVar12) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar12);
        pSVar9 = (this->ParentTabStackPtr).Object;
        if (pSVar9 == (SDockingTabStack *)0x0) goto LAB_1427639c5;
      }
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = (SDockingNode *)pSVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar10;
      bVar12 = FDockingDragOperation::CanDockInNode(this_01,&local_58,DockingViaTabWell);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (bVar12) {
        this_00 = &this->TabBeingDraggedPtr;
        if (this_00->Object == (SDockTab *)0x0) {
          local_98.SharedReferenceCount.ReferenceController =
               (this_01->TabBeingDragged).SharedReferenceCount.ReferenceController;
          local_98.Object = (this_01->TabBeingDragged).Object;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if (this_00 != &local_98) {
            this_00->Object = local_98.Object;
            local_98.Object = (SDockTab *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->TabBeingDraggedPtr).SharedReferenceCount,
                       &local_98.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          if (this_00->Object == (SDockTab *)0x0) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4649851716294933962>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabWell.cpp"
                                ,0x236,"TabBeingDraggedPtr.IsValid()");
            if (bVar12) {
              pcVar2 = (code *)swi(3);
              pFVar7 = (FReply *)(*pcVar2)();
              return pFVar7;
            }
            goto LAB_142763c73;
          }
        }
        TSharedPtr<SDockTab,1>::ToSharedRef(this_00,&local_88);
        iVar6 = ComputeChildDropIndex(this,param_1,&local_88);
        local_78.Object = (this_01->TabBeingDragged).Object;
        local_78.SharedReferenceCount.ReferenceController =
             (this_01->TabBeingDragged).SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar8 = TSharedPtr<SDockTab,1>::ToSharedRef(&local_78,&local_48);
        if ((pTVar8->Object != local_88.Object) &&
           (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4649851716294933954>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabWell.cpp"
                                ,0x23e,
                                "DragDropOperation->GetTabBeingDragged().ToSharedRef() == TabBeingDragged"
                               ), bVar12)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FReply *)(*pcVar2)();
          return pFVar7;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        pTVar8 = TSharedPtr<SDockTab,1>::ToSharedRef(this_00,&local_38);
        TSlotlessChildren<SDockTab>::Remove(&this->Tabs,pTVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        pTVar10 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
        pSVar9 = (SDockingTabStack *)0x0;
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142763bd6:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar12) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FReply *)(*pcVar2)();
            return pFVar7;
          }
        }
        else {
          aVar3 = pTVar10->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar10 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_142763bd6;
            }
            LOCK();
            aVar5 = pTVar10->SharedReferenceCount;
            bVar12 = aVar3 == aVar5;
            if (bVar12) {
              pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar5 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar5;
          } while (!bVar12);
          pSVar9 = (this->ParentTabStackPtr).Object;
          if (pSVar9 == (SDockingTabStack *)0x0) goto LAB_142763bd6;
        }
        SDockingTabStack::OpenTab(pSVar9,&local_88,iVar6,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
        local_68 = 0;
        FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->TabBeingDraggedPtr != (TSharedPtr<SDockTab,1> *)&local_68) {
          (this->TabBeingDraggedPtr).Object = (SDockTab *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->TabBeingDraggedPtr).SharedReferenceCount,&FStack_60);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_60.ReferenceController);
        FReply::FReply(__return_storage_ptr__,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        goto LAB_142763c7d;
      }
    }
  }
LAB_142763c73:
  FReply::FReply(__return_storage_ptr__,false);
LAB_142763c7d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142766ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabWell::OnMouseButtonUp
          (SDockingTabWell *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  TSharedPtr<SDockTab,1> *pTVar2;
  atomic<int> aVar3;
  code *pcVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  int iVar7;
  FReply *pFVar8;
  TSharedRef<SDockTab,1> local_f8;
  longlong local_e8;
  FSharedReferencer<1> FStack_e0;
  TSharedPtr<SDockTab,1> local_d8;
  FReply local_c8;
  
  bVar6 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar6) {
    pTVar2 = &this->TabBeingDraggedPtr;
    local_f8.Object = pTVar2->Object;
    if (local_f8.Object != (SDockTab *)0x0) {
      local_f8.SharedReferenceCount.ReferenceController =
           (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_f8.Object == (SDockTab *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FReply *)(*pcVar4)();
        return pFVar8;
      }
      local_e8 = 0;
      FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<SDockTab,1> *)&local_e8) {
        pTVar2->Object = (SDockTab *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TabBeingDraggedPtr).SharedReferenceCount,&FStack_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_e0.ReferenceController);
      iVar7 = ComputeChildDropIndex(this,param_1,&local_f8);
      TSlotlessChildren<SDockTab>::Remove(&this->Tabs,&local_f8);
      TSlotlessChildren<SDockTab>::Insert(&this->Tabs,&local_f8,iVar7);
      local_d8.Object = local_f8.Object;
      local_d8.SharedReferenceCount.ReferenceController =
           local_f8.SharedReferenceCount.ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BringTabToFront(this,&local_d8);
      FReply::FReply(&local_c8,true);
      FVar5.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_c8.MouseCaptor.Object = (SWidget *)0x0;
      local_c8.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
        }
      }
      local_c8.bUseHighPrecisionMouse = 0;
      local_c8.bReleaseMouseCapture = 1;
      FReply::FReply(__return_storage_ptr__,&local_c8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 142767090

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabWell::OnMouseMove
          (SDockingTabWell *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    fVar2 = ComputeDraggedTabOffset(this,param_1,param_2,&this->TabGrabOffsetFraction);
    this->ChildBeingDraggedOffset = fVar2;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 1427686d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDockingTabWell::OnPaint
          (SDockingTabWell *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  undefined1 uVar2;
  ESlateColorStylingMode EVar3;
  FDeprecateSlateVector2D FVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float afVar8 [2];
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  float fVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  TSharedRef<SDockTab,1> *pTVar17;
  FSlateColor *this_00;
  ForElementType<FArrangedWidget> FVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  FGeometry *pFVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auStackY_468 [32];
  float local_428;
  float fStack_424;
  undefined8 local_420;
  float local_418;
  float fStack_414;
  undefined8 local_410;
  FDeprecateSlateVector2D local_400;
  TReferenceControllerBase<1> *local_3d8;
  FSlateRect local_3b0;
  undefined8 local_3a0;
  float local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  float fStack_38c;
  undefined8 local_388;
  float local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  float local_374;
  FSlateRect local_370;
  FSlateRect local_360;
  FSlateRect local_350;
  TVector2<float>_u_0 local_340;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  TVector2<float>_u_0 local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  TVector2<float>_u_0_s_0 local_30c;
  TVector2<float>_u_0_s_0 local_300;
  TVector2<float>_u_0_s_0 local_2f4;
  TTransform2<float> local_2e8;
  float local_2d0 [2];
  float afStack_2c8 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  FLinearColor_u_0 local_298;
  TTransform2<float> local_288;
  FPaintArgs local_270;
  FPaintArgs local_240;
  TVector2<float>_u_0 local_210;
  float local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  float local_1f4 [2];
  float afStack_1ec [2];
  undefined8 local_1e4;
  byte local_1dc;
  FArrangedChildren local_1d8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_1d8.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_1d8.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_1d8.Array.ArrayNum = 0;
  local_1d8.bAllow3DWidgets = false;
  local_1d8.Array.ArrayMax = 4;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_1d8,false);
  local_400 = (FDeprecateSlateVector2D)(this->TabBeingDraggedPtr).Object;
  if (local_400 == (FDeprecateSlateVector2D)0x0) {
    if (((this->Tabs).Children.ArrayNum < 1) || (this->ForegroundTabIndex < 0)) {
      local_2a8 = 0;
      local_3d8 = (TReferenceControllerBase<1> *)0x0;
      local_2a0 = 0;
      local_400 = (FDeprecateSlateVector2D)0x0;
    }
    else {
      pTVar17 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,this->ForegroundTabIndex);
      local_3d8 = (pTVar17->SharedReferenceCount).ReferenceController;
      local_400 = (FDeprecateSlateVector2D)pTVar17->Object;
      if (local_3d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_3d8->SharedReferenceCount = (atomic<int>)((int)local_3d8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2b0 = 0;
      local_2b8 = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    local_3d8 = (this->TabBeingDraggedPtr).SharedReferenceCount.ReferenceController;
    if (local_3d8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3d8->SharedReferenceCount = (atomic<int>)((int)local_3d8->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  fVar12 = __real_3f266666;
  afVar10 = _UNK_15076b188;
  afVar8 = ___xmm_3f80000000000000000000003f800000;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  local_420 = (FGeometry *)0x0;
  uVar23 = local_1d8.Array.ArrayNum - 1;
  pFVar22 = (FGeometry *)0x0;
  if (-1 < (int)uVar23) {
    lVar20 = (longlong)(int)uVar23 * 0x48;
    uVar19 = local_1d8.Array.ArrayNum;
    uVar21 = local_1d8.Array.ArrayNum;
    do {
      uVar16 = 0;
      if ((int)uVar23 < (int)uVar19) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar19 = local_1d8.Array.ArrayNum, bVar13)) {
        pcVar5 = (code *)swi(3);
        iVar15 = (*pcVar5)();
        return iVar15;
      }
      FVar18 = (ForElementType<FArrangedWidget>)&local_1d8.Array;
      if (local_1d8.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar18 = local_1d8.Array.AllocatorInstance.SecondaryData;
      }
      pFVar22 = (FGeometry *)((longlong)FVar18 + lVar20);
      if ((local_400 == (FDeprecateSlateVector2D)0x0) ||
         (uVar16 = param_5, local_400 != pFVar22[1].Size)) {
        bVar13 = false;
        if ((this->SeparatorBrush != (FSlateBrush *)0x0) &&
           ((((this->SeparatorBrush->DrawAs).Value != '\0' && (-1 < (int)uVar21)) &&
            ((int)uVar21 < (int)uVar19)))) {
          uVar16 = 0;
          if ((int)uVar21 < (int)uVar19) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            iVar15 = (*pcVar5)();
            return iVar15;
          }
          FVar18 = (ForElementType<FArrangedWidget>)&local_1d8.Array;
          if (local_1d8.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar18 = local_1d8.Array.AllocatorInstance.SecondaryData;
          }
          if (((*(char *)((longlong)pFVar22[1].Size + 0x3b) == '\0') &&
              (FVar4 = *(FDeprecateSlateVector2D *)
                        ((longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar18 + 0x80))->Object +
                        lVar20), *(char *)((longlong)FVar4 + 0x3b) == '\0')) &&
             ((local_400 == (FDeprecateSlateVector2D)0x0 || (local_400 != FVar4)))) {
            bVar13 = true;
          }
        }
        local_32c = pFVar22->Scale;
        local_418 = SUB84(pFVar22->Size,0);
        local_30c = (pFVar22->AbsolutePosition).field0_0x0._s_0;
        local_398 = local_418;
        fStack_414 = SUB84(pFVar22->Size,4);
        fStack_38c = fStack_414;
        uStack_394 = 0;
        uStack_390 = 0;
        local_3a0 = 0;
        local_340._s_0.X = local_32c * 0.0 + local_30c.X;
        local_340._s_0.Y = local_32c * 0.0 + local_30c.Y;
        local_338 = local_418 * local_32c;
        local_334 = local_32c * 0.0;
        local_330 = local_32c * 0.0;
        local_32c = fStack_414 * local_32c;
        FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_340._s_0,&local_360);
        local_370.Bottom = param_3->Bottom;
        if (local_360.Bottom <= param_3->Bottom) {
          local_370.Bottom = local_360.Bottom;
        }
        local_370.Top = param_3->Top;
        if (param_3->Top <= local_360.Top) {
          local_370.Top = local_360.Top;
        }
        local_370.Right = param_3->Right;
        if (local_360.Right <= param_3->Right) {
          local_370.Right = local_360.Right;
        }
        local_370.Left = local_360.Left;
        if (local_360.Left <= param_3->Left) {
          local_370.Left = param_3->Left;
        }
        if ((local_370.Bottom < local_370.Top) || (local_370.Right < local_370.Left)) {
          local_370.Left = 0.0;
          local_370.Top = 0.0;
          local_370.Right = 0.0;
          local_370.Bottom = 0.0;
        }
        else {
        }
        if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        local_270.RootGrid = param_1->RootGrid;
        local_270.CurrentGrid = param_1->CurrentGrid;
        local_270.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
        local_270.CurrentTime = param_1->CurrentTime;
        local_270.DeltaTime = param_1->DeltaTime;
        local_270._44_4_ = *(undefined4 *)&param_1->field_0x2c;
        local_270.PaintParentPtr = (SWidget *)this;
        uVar16 = SWidget::Paint((SWidget *)pFVar22[1].Size,&local_270,pFVar22,&local_370,param_4,
                                param_5,param_6,bVar14);
        afVar11 = _UNK_15076b188;
        afVar9 = ___xmm_3f80000000000000000000003f800000;
        if (bVar13) {
          local_300 = (pFVar22->AbsolutePosition).field0_0x0._s_0;
          fVar1 = pFVar22->Scale;
          fStack_424 = SUB84(pFVar22->Size,4);
          local_428 = SUB84(pFVar22->Size,0);
          ___xmm_3f80000000000000000000003f800000 = afVar8[0];
          _UNK_15076b184 = afVar8[1];
          local_288.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_288.M.M[0][1] = _UNK_15076b184;
          _UNK_15076b188 = afVar10[0];
          _UNK_15076b18c = afVar10[1];
          local_288.M.M[1][0] = _UNK_15076b188;
          local_288.M.M[1][1] = _UNK_15076b18c;
          fVar27 = (fStack_424 - fStack_424 * fVar12) * fVar7;
          local_288.Trans.field0_0x0._s_0.Y = fVar27;
          local_288.Trans.field0_0x0._s_0.X = local_428 + fVar6;
          fVar24 = (local_428 + fVar6) * fVar1 + local_300.X;
          fVar27 = fVar27 * fVar1 + local_300.Y;
          ___xmm_3f80000000000000000000003f800000 = afVar9;
          _UNK_15076b188 = afVar11;
          Concatenate<TTransform2<float>_>
                    (&local_2e8,&local_288,&pFVar22->AccumulatedRenderTransform);
          local_210._s_0.Y = fVar27;
          local_210._s_0.X = fVar24;
          local_1fc = CONCAT44(fStack_424 * fVar12,0x3f800000);
          auVar25._0_8_ = (double)(local_2e8.Trans.field0_0x0._s_0.X + fVar7);
          auVar25._8_8_ = 0;
          local_204 = 0;
          local_1dc = pFVar22->bHasRenderTransform * '\x02' | local_1dc & 0xfc;
          auVar25 = roundpd(auVar25,auVar25,1);
          local_1f4[0] = local_2e8.M.M[0][0];
          local_1f4[1] = local_2e8.M.M[0][1];
          afStack_1ec[0] = local_2e8.M.M[1][0];
          afStack_1ec[1] = local_2e8.M.M[1][1];
          local_2d0[0] = local_2e8.M.M[0][0];
          local_2d0[1] = local_2e8.M.M[0][1];
          afStack_2c8[0] = local_2e8.M.M[1][0];
          afStack_2c8[1] = local_2e8.M.M[1][1];
          auVar26._0_8_ = (double)(local_2e8.Trans.field0_0x0._s_0.Y + fVar7);
          auVar26._8_8_ = 0;
          auVar26 = roundpd(auVar26,auVar26,1);
          local_410 = CONCAT44((float)auVar26._0_8_,(float)auVar25._0_8_);
          local_2c0 = local_410;
          local_1e4 = local_410;
          EVar3 = (this->SeparatorBrush->TintColor).ColorUseRule;
          this_00 = &this->SeparatorBrush->TintColor;
          local_208 = fVar1;
          if (EVar3 != UseColor_Specified) {
            if (EVar3 == UseColor_ColorTable) {
              this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
            }
            else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
              this_00 = (FSlateColor *)&param_6->ForegroundColor;
            }
            else {
              this_00 = (FSlateColor *)&param_6->SubduedForeground;
            }
          }
          local_298._0_8_ = *(undefined8 *)&(this_00->SpecifiedColor).field0_0x0;
          local_298._8_8_ = *(undefined8 *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8);
          FSlateDrawElement::MakeBox
                    (param_4,param_5,(FPaintGeometry *)&local_210._s_0,this->SeparatorBrush,None,
                     (FLinearColor *)&local_298._s_0);
        }
        uVar19 = local_1d8.Array.ArrayNum;
        pFVar22 = local_420;
        if ((int)uVar16 < param_5) {
          uVar16 = param_5;
        }
      }
      local_420 = pFVar22;
      param_5 = uVar16;
      lVar20 = lVar20 + -0x48;
      uVar21 = uVar21 - 1;
      uVar23 = uVar23 - 1;
      pFVar22 = local_420;
    } while (-1 < (int)uVar23);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uVar23 = param_5;
  if (local_400 != (FDeprecateSlateVector2D)0x0) {
    local_314 = pFVar22->Scale;
    local_420._0_4_ = SUB84(pFVar22->Size,0);
    local_2f4 = (pFVar22->AbsolutePosition).field0_0x0._s_0;
    local_380 = (float)local_420;
    local_420._4_4_ = SUB84(pFVar22->Size,4);
    local_374 = local_420._4_4_;
    uStack_37c = 0;
    uStack_378 = 0;
    local_388 = 0;
    local_328._s_0.X = local_314 * 0.0 + local_2f4.X;
    local_328._s_0.Y = local_314 * 0.0 + local_2f4.Y;
    local_320 = (float)local_420 * local_314;
    local_31c = local_314 * 0.0;
    local_318 = local_314 * 0.0;
    local_314 = local_420._4_4_ * local_314;
    FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_328._s_0,&local_350);
    local_3b0.Bottom = param_3->Bottom;
    if (local_350.Bottom <= param_3->Bottom) {
      local_3b0.Bottom = local_350.Bottom;
    }
    local_3b0.Top = param_3->Top;
    if (param_3->Top <= local_350.Top) {
      local_3b0.Top = local_350.Top;
    }
    local_3b0.Right = param_3->Right;
    if (local_350.Right <= param_3->Right) {
      local_3b0.Right = local_350.Right;
    }
    local_3b0.Left = param_3->Left;
    if (param_3->Left <= local_350.Left) {
      local_3b0.Left = local_350.Left;
    }
    if ((local_3b0.Bottom < local_3b0.Top) || (local_3b0.Right < local_3b0.Left)) {
      local_3b0.Left = 0.0;
      local_3b0.Top = 0.0;
      local_3b0.Right = 0.0;
      local_3b0.Bottom = 0.0;
    }
    else {
    }
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    local_240.RootGrid = param_1->RootGrid;
    local_240.CurrentGrid = param_1->CurrentGrid;
    local_240.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_240.CurrentTime = param_1->CurrentTime;
    local_240.DeltaTime = param_1->DeltaTime;
    local_240._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_240.PaintParentPtr = (SWidget *)this;
    uVar23 = SWidget::Paint((SWidget *)pFVar22[1].Size,&local_240,pFVar22,&local_3b0,param_4,param_5
                            ,param_6,bVar13);
    if ((int)uVar23 < param_5) {
      uVar23 = param_5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3d8);
  FVar18 = (ForElementType<FArrangedWidget>)&local_1d8.Array;
  if (local_1d8.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1d8.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar18,local_1d8.Array.ArrayNum);
  if (local_1d8.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1d8.Array.AllocatorInstance.SecondaryData);
  }
  return uVar23;
}

// RefreshParentContent @ 142776890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SDockingTabWell::RefreshParentContent(SDockingTabWell *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FGlobalTabmanager *pFVar2;
  code *pcVar3;
  SWidget *pSVar4;
  atomic<int> aVar5;
  int iVar6;
  FSharedReferencer<1> FVar7;
  atomic<int> aVar8;
  int iVar9;
  TSharedRef<SDockTab,1> *pTVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  FText *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  SWindow *pSVar14;
  SWindow *pSVar15;
  SWindow *this_00;
  SWindow *pSVar16;
  bool bVar17;
  uint uStackX_c;
  TSharedPtr<SWindow,1> local_e8;
  FDockingStackOptionalContent local_d8;
  FDockingStackOptionalContent local_a8;
  TSharedPtr<SDockTab,1> local_78;
  FText local_68;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  this_00 = (SWindow *)0x0;
  if (((this->Tabs).Children.ArrayNum < 1) || (this->ForegroundTabIndex == -1)) {
    pSVar14 = (SWindow *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
    pSVar15 = pSVar14;
    if (pSVar14 != (SWindow *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar14->_padding_;
      do {
        pSVar15 = this_00;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142776ba5;
        LOCK();
        aVar8 = *(atomic<int> *)&pSVar14->_padding_;
        bVar17 = aVar5 == aVar8;
        if (bVar17) {
          *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar17);
      this_00 = (SWindow *)(this->ParentTabStackPtr).Object;
      pSVar15 = pSVar14;
      if (this_00 != (SWindow *)0x0) goto LAB_142776bcb;
    }
LAB_142776ba5:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar14 = pSVar15;
    if (bVar17) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_142776bcb:
    local_a8.ContentLeft.Object = SNullWidget::NullWidget.Object;
    local_a8.ContentLeft.SharedReferenceCount.ReferenceController =
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
    local_a8.ContentRight.Object = SNullWidget::NullWidget.Object;
    local_a8.ContentRight.SharedReferenceCount.ReferenceController =
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
    local_a8.TitleBarContentRight.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_a8.TitleBarContentRight.Object = SNullWidget::NullWidget.Object;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SDockingTabStack::SetNodeContent((SDockingTabStack *)this_00,&SNullWidget::NullWidget,&local_a8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.TitleBarContentRight.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.ContentRight.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.ContentLeft.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
    return;
  }
  pTVar10 = TSlotlessChildren<SDockTab>::operator[](&this->Tabs,this->ForegroundTabIndex);
  pTVar11 = FGlobalTabmanager::Get();
  pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar11->Object;
  local_78.Object = pTVar10->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.SharedReferenceCount.ReferenceController = pTVar1;
  FGlobalTabmanager::SetActiveTab(pFVar2,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SDockTab::GetParentWindow(pTVar10->Object,&local_e8);
  if (local_e8.Object == (SWindow *)0x0) {
    pSVar14 = (SWindow *)((ulonglong)uStackX_c << 0x20);
    pSVar15 = this_00;
  }
  else {
    pTVar11 = FGlobalTabmanager::Get();
    pFVar2 = pTVar11->Object;
    pSVar15 = (SWindow *)(pFVar2->RootWindowPtr).WeakReferenceCount.ReferenceController;
    pSVar14 = pSVar15;
    pSVar16 = this_00;
    if (pSVar15 != (SWindow *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar15->_padding_;
      do {
        pSVar14 = this_00;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142776956;
        LOCK();
        aVar8 = *(atomic<int> *)&pSVar15->_padding_;
        bVar17 = aVar5 == aVar8;
        if (bVar17) {
          *(atomic<int> *)&pSVar15->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar17);
      pSVar14 = pSVar15;
      pSVar16 = (pFVar2->RootWindowPtr).Object;
    }
LAB_142776956:
    pSVar15 = (SWindow *)&DAT_00000001;
    if (local_e8.Object != pSVar16) {
      bVar17 = true;
      goto LAB_142776978;
    }
  }
  bVar17 = false;
LAB_142776978:
  if (pSVar15 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
  }
  if (bVar17) {
    if ((local_e8.Object == (SWindow *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar12 = SDockTab::GetTabLabel(pTVar10->Object,&local_68);
    SWindow::SetTitle(local_e8.Object,pFVar12);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  pSVar14 = (SWindow *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pSVar15 = pSVar14;
  if (pSVar14 != (SWindow *)0x0) {
    iVar6 = (int)pSVar14->_padding_;
    do {
      pSVar15 = this_00;
      if (iVar6 == 0) goto LAB_142776a15;
      LOCK();
      iVar9 = (int)pSVar14->_padding_;
      bVar17 = iVar6 == iVar9;
      if (bVar17) {
        *(int *)&pSVar14->_padding_ = iVar6 + 1;
        iVar9 = iVar6;
      }
      UNLOCK();
      iVar6 = iVar9;
    } while (!bVar17);
    this_00 = (SWindow *)(this->ParentTabStackPtr).Object;
    pSVar15 = pSVar14;
  }
LAB_142776a15:
  FVar7.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar4 = SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.ContentRight.Object = SNullWidget::NullWidget.Object;
  local_d8.ContentRight.SharedReferenceCount.ReferenceController =
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
  local_d8.TitleBarContentRight.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  local_d8.TitleBarContentRight.Object = SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = SDockTab::GetLeftContent(pTVar10->Object,&local_58);
  local_d8.ContentLeft.Object = pTVar13->Object;
  local_d8.ContentLeft.SharedReferenceCount.ReferenceController =
       (pTVar13->SharedReferenceCount).ReferenceController;
  pTVar13->Object = pSVar4;
  (pTVar13->SharedReferenceCount).ReferenceController = FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar13 = SDockTab::GetRightContent(pTVar10->Object,&local_48);
  pSVar4 = pTVar13->Object;
  pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
  pTVar13->Object = local_d8.ContentRight.Object;
  (pTVar13->SharedReferenceCount).ReferenceController =
       local_d8.ContentRight.SharedReferenceCount.ReferenceController;
  local_d8.ContentRight.Object = pSVar4;
  local_d8.ContentRight.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pTVar13 = SDockTab::GetTitleBarRightContent(pTVar10->Object,&local_38);
  pSVar4 = pTVar13->Object;
  pTVar1 = (pTVar13->SharedReferenceCount).ReferenceController;
  pTVar13->Object = local_d8.TitleBarContentRight.Object;
  (pTVar13->SharedReferenceCount).ReferenceController =
       local_d8.TitleBarContentRight.SharedReferenceCount.ReferenceController;
  local_d8.TitleBarContentRight.Object = pSVar4;
  local_d8.TitleBarContentRight.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((this_00 == (SWindow *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar13 = SDockTab::GetContent(pTVar10->Object,&local_28);
  SDockingTabStack::SetNodeContent((SDockingTabStack *)this_00,pTVar13,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.TitleBarContentRight.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ContentRight.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ContentLeft.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return;
}

// RemoveAndDestroyTab @ 14277b210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDockingTabWell::RemoveAndDestroyTab
          (SDockingTabWell *this,TSharedRef<SDockTab,1> *param_1,ELayoutModification param_2)

{
  FScriptContainerElement *pFVar1;
  FTabManager *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TSharedRef<FGlobalTabmanager,1> *pTVar9;
  TSharedRef<FTabManager,1> *pTVar10;
  int iVar11;
  TReferenceControllerBase<1> *pTVar12;
  SDockingTabStack *this_00;
  bool bVar13;
  SDockingArea *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<SDockTab,1> local_48;
  TSharedRef<FTabManager,1> local_38;
  
  pFVar1 = (this->Tabs).Children.AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Tabs).Children.ArrayNum * 0x10) {
    pFVar8 = pFVar1;
    while (*(SDockTab **)pFVar8 != param_1->Object) {
      pFVar8 = pFVar8 + 0x10;
      if (pFVar8 == pFVar1 + (longlong)(this->Tabs).Children.ArrayNum * 0x10) {
        return;
      }
    }
    iVar5 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 4);
    if (iVar5 != -1) {
      pTVar12 = (this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
      this_00 = (SDockingTabStack *)0x0;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar12->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar12 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14277b2c4;
          }
          LOCK();
          aVar6 = pTVar12->SharedReferenceCount;
          bVar13 = aVar4 == aVar6;
          if (bVar13) {
            pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar13);
        this_00 = (this->ParentTabStackPtr).Object;
      }
LAB_14277b2c4:
      iVar7 = 0;
      if (0 < this->ForegroundTabIndex) {
        iVar7 = this->ForegroundTabIndex;
      }
      BringTabToFront(this,iVar5);
      iVar11 = iVar7;
      if (iVar5 == iVar7) {
        if (iVar7 == (this->Tabs).Children.ArrayNum + -1) {
          iVar11 = 0;
          if (0 < iVar7 + -1) {
            iVar11 = iVar7 + -1;
          }
        }
        else {
          iVar11 = iVar7 + 1;
        }
      }
      BringTabToFront(this,iVar11);
      TSlotlessChildren<SDockTab>::RemoveAt(&this->Tabs,iVar5);
      iVar7 = this->ForegroundTabIndex;
      if (iVar5 <= iVar7) {
        iVar7 = iVar7 + -1;
        this->ForegroundTabIndex = iVar7;
      }
      if ((param_2 == TabRemoval_Sidebar) && (iVar7 == -1)) {
        local_48.Object = (SDockTab *)0x0;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = FGlobalTabmanager::Get();
        FGlobalTabmanager::SetActiveTab(pTVar9->Object,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (this_00 == (SDockingTabStack *)0x0) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4649851716294933729>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabWell.cpp"
                            ,799,"ParentTabStack.IsValid()");
        if (bVar13) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        (**(code **)(this_00->_padding_ + 0x260))(this_00,&local_58);
        SDockingTabStack::OnTabClosed(this_00,param_1,param_2);
        if ((param_2 == TabRemoval_Closed) && (local_58 != (SDockingArea *)0x0)) {
          if ((local_58 == (SDockingArea *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar10 = SDockingArea::GetTabManager(local_58,&local_38);
          pFVar2 = ((pTVar10->Object->PrivateApi).Object)->TabManager;
          (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2,param_1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
        }
        if ((this->Tabs).Children.ArrayNum == 0) {
          SDockingTabStack::OnLastTabRemoved(this_00);
        }
        else {
          RefreshParentContent(this);
        }
        if (local_58 != (SDockingArea *)0x0) {
          if ((local_58 == (SDockingArea *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SDockingArea::CleanUp(local_58,param_2);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  return;
}

// StartDraggingTab @ 14278b9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDockingTabWell::StartDraggingTab
          (SDockingTabWell *this,FReply *__return_storage_ptr__,TSharedRef<SDockTab,1> *param_1,
          TVector2<double> *param_2,FPointerEvent *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPrivateApi *pFVar5;
  SDockTab *this_00;
  FTabManager *pFVar6;
  SWidget *pSVar7;
  code *pcVar8;
  double dVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  ETabRole EVar12;
  int iVar13;
  FReply *pFVar14;
  FTabId *pFVar15;
  TSharedRef<SWidget,1> *pTVar16;
  FGeometry *pFVar17;
  FDockingDragOperation *this_01;
  SDockingTabStack *pSVar18;
  SDockingTabStack *pSVar19;
  SDockingTabStack *pSVar20;
  SDockingTabStack *pSVar21;
  float fVar22;
  undefined1 auStackY_368 [32];
  TSharedPtr<SDockingArea,1> local_330;
  TSharedPtr<FTabManager,1> local_320;
  undefined8 local_310;
  TSharedRef<SWidget,1> local_308;
  SDockTab *local_2f8;
  FSharedReferencer<1> local_2f0;
  TSharedRef<SWidget,1> local_2e8;
  FPointerEvent *local_2d8;
  TRawPtrProxy<FDockingDragOperation> local_2d0;
  TSharedRef<SWidget,1> local_2c8;
  TVector2<double>_u_0 local_2b8;
  TSharedRef<SDockingArea,1> local_2a8;
  TSharedRef<FDockingDragOperation,1> local_298;
  TSharedRef<SWidget,1> local_288;
  TVector2<double>_u_0 local_278;
  TSharedRef<FDragDropOperation,1> local_268;
  FDeprecateSlateVector2D local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  FTabId local_220;
  FTabId local_210;
  undefined8 local_200 [2];
  FReply local_1f0;
  FReply local_138;
  FGeometry local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2d8 = param_3;
  SDockTab::GetTabManagerPtr(param_1->Object,&local_320);
  if (local_320.Object == (FTabManager *)0x0) {
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_320.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return __return_storage_ptr__;
  }
  if ((local_320.Object == (FTabManager *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FReply *)(*pcVar8)();
    return pFVar14;
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = ((local_320.Object)->PrivateApi).Object;
  this_00 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar5->TabManager->bCanDoDragOperation == false) {
LAB_14278bb06:
    bVar11 = false;
  }
  else {
    pFVar15 = SDockTab::GetLayoutIdentifier(this_00,&local_220);
    pFVar6 = pFVar5->TabManager;
    if ((pFVar15->TabType == (pFVar6->MainNonCloseableTabID).TabType) &&
       (((pFVar15->InstanceId == -1 ||
         (iVar3 = (pFVar6->MainNonCloseableTabID).InstanceId, iVar3 == -1)) ||
        (pFVar15->InstanceId == iVar3)))) goto LAB_14278bb06;
    bVar11 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2c8);
  pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar16->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_308.Object = pSVar7;
  local_308.SharedReferenceCount.ReferenceController = pTVar4;
  pFVar17 = FInputEvent::FindGeometry((FInputEvent *)local_2d8,&local_80,&local_308);
  fVar22 = ComputeDraggedTabOffset(this,pFVar17,local_2d8,param_2);
  this->ChildBeingDraggedOffset = fVar22;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_2f0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_2f8 = param_1->Object;
  if (local_2f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar18 = (SDockingTabStack *)0x0;
  if (&this->TabBeingDraggedPtr != (TSharedPtr<SDockTab,1> *)&local_2f8) {
    (this->TabBeingDraggedPtr).Object = local_2f8;
    local_2f8 = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TabBeingDraggedPtr).SharedReferenceCount,&local_2f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.ReferenceController);
  dVar9 = (param_2->field0_0x0)._s_0.Y;
  (this->TabGrabOffsetFraction).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->TabGrabOffsetFraction).field0_0x0._s_0.Y = dVar9;
  TSlotlessChildren<SDockTab>::Remove(&this->Tabs,param_1);
  if (!bVar11) {
    FReply::FReply(&local_138,true);
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_288);
    pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar16->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2e8.Object = pSVar7;
    local_2e8.SharedReferenceCount.ReferenceController = pTVar4;
    pFVar14 = FReply::CaptureMouse(&local_138,&local_2e8);
    FReply::FReply(__return_storage_ptr__,pFVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FReply::~FReply(&local_138);
    goto LAB_14278bfd7;
  }
  this->ForegroundTabIndex = -1;
  pSVar20 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pSVar19 = pSVar20;
  pSVar21 = pSVar18;
  if (pSVar20 == (SDockingTabStack *)0x0) {
LAB_14278bc55:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar20 = pSVar19;
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FReply *)(*pcVar8)();
      return pFVar14;
    }
  }
  else {
    iVar3 = (int)pSVar20->_padding_;
    do {
      pSVar19 = pSVar18;
      if (iVar3 == 0) goto LAB_14278bc55;
      LOCK();
      iVar13 = (int)pSVar20->_padding_;
      bVar11 = iVar3 == iVar13;
      if (bVar11) {
        *(int *)&pSVar20->_padding_ = iVar3 + 1;
        iVar13 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar13;
    } while (!bVar11);
    pSVar21 = (this->ParentTabStackPtr).Object;
    pSVar19 = pSVar20;
    if (pSVar21 == (SDockingTabStack *)0x0) goto LAB_14278bc55;
  }
  pFVar15 = SDockTab::GetLayoutIdentifier(param_1->Object,&local_210);
  SDockingTabStack::RemovePersistentTab(pSVar21,pFVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar20);
  GetDockArea(this,&local_330);
  EVar12 = SDockTab::GetTabRole(param_1->Object);
  if (EVar12 == MajorTab) {
    if ((local_330.Object == (SDockingArea *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FReply *)(*pcVar8)();
      return pFVar14;
    }
    if (&(local_330.Object)->PanelDrawerPtr !=
        (TWeakPtr<UE::Slate::Private::SPanelDrawerArea,1> *)local_200) {
      pTVar4 = ((local_330.Object)->PanelDrawerPtr).WeakReferenceCount.ReferenceController;
      ((local_330.Object)->PanelDrawerPtr).Object = (SPanelDrawerArea *)0x0;
      ((local_330.Object)->PanelDrawerPtr).WeakReferenceCount.ReferenceController =
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
  }
  pSVar20 = (SDockingTabStack *)(this->ParentTabStackPtr).WeakReferenceCount.ReferenceController;
  pSVar21 = pSVar18;
  pSVar19 = pSVar20;
  if (pSVar20 == (SDockingTabStack *)0x0) {
LAB_14278bd45:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar20 = pSVar19;
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FReply *)(*pcVar8)();
      return pFVar14;
    }
  }
  else {
    iVar3 = (int)pSVar20->_padding_;
    do {
      pSVar19 = pSVar18;
      if (iVar3 == 0) goto LAB_14278bd45;
      LOCK();
      iVar13 = (int)pSVar20->_padding_;
      bVar11 = iVar3 == iVar13;
      if (bVar11) {
        *(int *)&pSVar20->_padding_ = iVar3 + 1;
        iVar13 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar13;
    } while (!bVar11);
    pSVar21 = (this->ParentTabStackPtr).Object;
    pSVar19 = pSVar20;
    if (pSVar21 == (SDockingTabStack *)0x0) goto LAB_14278bd45;
  }
  pFVar17 = SWidget::GetTickSpaceGeometry((SWidget *)pSVar21);
  local_248 = *(undefined8 *)((longlong)&(pFVar17->AbsolutePosition).field0_0x0 + 4);
  uStack_240 = *(undefined8 *)((longlong)&(pFVar17->Position).field0_0x0 + 4);
  local_310 = pFVar17->Size;
  uStack_250 = *(undefined8 *)&pFVar17->Scale;
  local_238 = *(undefined8 *)((pFVar17->AccumulatedRenderTransform).M.M[0] + 1);
  uStack_230 = *(undefined8 *)((pFVar17->AccumulatedRenderTransform).M.M[1] + 1);
  local_228 = *(undefined8 *)((longlong)&(pFVar17->AccumulatedRenderTransform).Trans.field0_0x0 + 4)
  ;
  local_2b8._s_0.X = (double)(float)local_310;
  local_2b8._s_0.Y = (double)local_310._4_4_;
  local_258 = local_310;
  if ((local_330.Object == (SDockingArea *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FReply *)(*pcVar8)();
    return pFVar14;
  }
  FVar10.ReferenceController = local_330.SharedReferenceCount.ReferenceController;
  if (local_330.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_330.Object == (SDockingArea *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FReply *)(*pcVar8)();
    return pFVar14;
  }
  this_01 = ::operator_new(200);
  if (this_01 != (FDockingDragOperation *)0x0) {
    local_2a8.Object = local_330.Object;
    local_2a8.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_278._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_278._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    pSVar18 = (SDockingTabStack *)
              FDockingDragOperation::FDockingDragOperation
                        (this_01,param_1,(TVector2<double> *)&local_278._s_0,&local_2a8,
                         (TVector2<double> *)&local_2b8._s_0);
    if ((((pSVar18 != (SDockingTabStack *)0x0) && (pSVar18->_padding_ != 0)) &&
        (pSVar18->_padding_ != 0)) &&
       ((0 < *(int *)(pSVar18->_padding_ + 8) &&
        (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar11)))) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FReply *)(*pcVar8)();
      return pFVar14;
    }
  }
  local_2d0.Object = (FDockingDragOperation *)pSVar18;
  TSharedRef<FDockingDragOperation,1>::TSharedRef<FDockingDragOperation,1><FDockingDragOperation>
            (&local_298,&local_2d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar20);
  FReply::FReply(&local_1f0,true);
  local_268.Object = (FDragDropOperation *)local_298.Object;
  local_268.SharedReferenceCount.ReferenceController =
       local_298.SharedReferenceCount.ReferenceController;
  if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = FReply::BeginDragDrop(&local_1f0,&local_268);
  FReply::FReply(__return_storage_ptr__,pFVar14);
  FReply::~FReply(&local_1f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.SharedReferenceCount.ReferenceController);
LAB_14278bfd7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_320.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

