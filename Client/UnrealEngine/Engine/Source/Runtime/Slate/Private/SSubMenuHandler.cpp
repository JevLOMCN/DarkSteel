// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// CancelPendingSubMenu @ 1428dac70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSubMenuHandler::CancelPendingSubMenu(SSubMenuHandler *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  pTVar4 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428daca0;
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
    local_18.Object = (this->ActiveTimerHandle).Object;
    if (local_18.Object != (FActiveTimerHandle *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar4;
      if ((local_18.Object == (FActiveTimerHandle *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1428daca0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Construct @ 142906f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSubMenuHandler::Construct
          (SSubMenuHandler *this,FArguments *param_1,TWeakPtr<SMenuOwner,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SMenuOwner *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  SMenuAnchor *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  SWidget *pSVar8;
  code *pcVar9;
  FWeakReferencer<1> *pFVar10;
  char cVar11;
  bool bVar12;
  FArguments *pFVar13;
  longlong lVar14;
  TSharedRef<SMenuAnchor,1> *pTVar15;
  FSharedReferencer<1> FVar16;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SMenuAnchor *local_3b8;
  FSharedReferencer<1> local_3b0;
  undefined8 local_3a8;
  FSharedReferencer<1> local_3a0;
  undefined8 local_398;
  FSharedReferencer<1> local_390;
  undefined8 local_388;
  FSharedReferencer<1> local_380;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_378;
  TSharedPtr<SWidget,1> local_360;
  TAttribute<EMenuPlacement> local_350;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  SWidget *local_320;
  TReferenceControllerBase<1> *pTStack_318;
  TSharedRef<SMenuAnchor,1> local_310;
  longlong local_300;
  TReferenceControllerBase<1> *pTStack_2f8;
  FReadAccessScope local_2f0;
  undefined1 local_2d8 [16];
  FArguments local_2c8;
  
  pSVar3 = param_2->Object;
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_330 = *(undefined4 *)&(this->MenuOwnerWidget).Object;
  uStack_32c = *(undefined4 *)((longlong)&(this->MenuOwnerWidget).Object + 4);
  pFVar10 = &(this->MenuOwnerWidget).WeakReferenceCount;
  uStack_328 = *(undefined4 *)&pFVar10->ReferenceController;
  uStack_324 = *(undefined4 *)
                ((longlong)&(this->MenuOwnerWidget).WeakReferenceCount.ReferenceController + 4);
  pTVar6 = pFVar10->ReferenceController;
  (this->MenuOwnerWidget).Object = pSVar3;
  (this->MenuOwnerWidget).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pSVar5 = (param_1->_MenuAnchor).Object;
  local_3b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pSVar5 != (SMenuAnchor *)0x0) {
    (this->MenuAnchor).Object = pSVar5;
    pTVar4 = (param_1->_MenuAnchor).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (this->MenuAnchor).WeakReferenceCount.ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (this->MenuAnchor).WeakReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      (this->MenuAnchor).WeakReferenceCount.ReferenceController = pTVar4;
    }
    local_3a0.ReferenceController =
         (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
    local_3b8 = (SMenuAnchor *)(param_1->_Content).Widget.Object;
    if (local_3a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3b0,&local_3a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a0.ReferenceController);
    goto LAB_142907386;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetMenuContent,
             &local_2f0);
  if (((*(int *)&(param_1->_OnGetMenuContent).field_0x10 == 0) ||
      (plVar7 = *(longlong **)&(param_1->_OnGetMenuContent).field_0x8, plVar7 == (longlong *)0x0))
     || (cVar11 = (**(code **)(*plVar7 + 0x38))(), cVar11 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2f0);
    if ((param_1->_MenuContent).Object == (SWidget *)0x0) {
      local_390.ReferenceController =
           (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
      local_3b8 = (SMenuAnchor *)(param_1->_Content).Widget.Object;
      if (local_390.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_390.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_390.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_398 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3b0,&local_390);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_390.ReferenceController);
      goto LAB_142907386;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2f0);
  }
  pFVar13 = SMenuAnchor::FArguments::FArguments(&local_2c8);
  local_350.Value = (param_1->_Placement).Value;
  local_350.bIsSet = (param_1->_Placement).bIsSet;
  local_350.Getter._0_8_ = 0;
  local_350.Getter._8_8_ = 0;
  local_350.Getter._16_4_ = 0;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_350.Getter,&(param_1->_Placement).Getter);
  pFVar13 = SMenuAnchor::FArguments::Placement(pFVar13,&local_350);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar13->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  local_360.Object = (param_1->_MenuContent).Object;
  local_360.SharedReferenceCount.ReferenceController =
       (param_1->_MenuContent).SharedReferenceCount.ReferenceController;
  if (local_360.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_360.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_360.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar13 = SMenuAnchor::FArguments::MenuContent(pFVar13,&local_360);
  pTVar4 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar8 = (param_1->_Content).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_320 = (pFVar13->_Content).Widget.Object;
  pTStack_318 = (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_Content).Widget.Object = pSVar8;
  (pFVar13->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_318);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (&local_378,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSubMenuHandler.cpp"
             ,0x16,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (local_378._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_378._Widget.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_378._Widget.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1)
    ;
    UNLOCK();
  }
  if (&this->MenuAnchor == (TWeakPtr<SMenuAnchor,1> *)local_2d8) {
    if (local_378._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_378._Widget.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar14 = (local_378._Widget.SharedReferenceCount.ReferenceController)->_padding_;
        FVar16.ReferenceController = local_378._Widget.SharedReferenceCount.ReferenceController;
        goto LAB_142907311;
      }
    }
  }
  else {
    FVar16.ReferenceController = (this->MenuAnchor).WeakReferenceCount.ReferenceController;
    (this->MenuAnchor).Object = local_378._Widget.Object;
    (this->MenuAnchor).WeakReferenceCount.ReferenceController =
         local_378._Widget.SharedReferenceCount.ReferenceController;
    if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar16.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar14 = (FVar16.ReferenceController)->_padding_;
LAB_142907311:
        (**(code **)(lVar14 + 8))(FVar16.ReferenceController,1);
      }
    }
  }
  pTVar15 = TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_378,&local_310,pFVar13);
  local_380.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
  local_3b8 = pTVar15->Object;
  if (local_380.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_380.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_380.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_388 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3b0,&local_380);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_380.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_378._Widget.SharedReferenceCount.ReferenceController);
  SMenuAnchor::FArguments::~FArguments(&local_2c8);
LAB_142907386:
  if ((local_3b8 == (SMenuAnchor *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar16.ReferenceController = local_3b0.ReferenceController;
  if (local_3b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_3b8 == (SMenuAnchor *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_300 = this->_padding_;
  pTStack_2f8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)local_3b8;
  this->_padding_ = (longlong)FVar16.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2f8);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b0.ReferenceController);
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
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
  return;
}

// IsSubMenuOpen @ 142956f20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SSubMenuHandler::IsSubMenuOpen(SSubMenuHandler *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  SMenuAnchor *pSVar6;
  SMenuAnchor *pSVar7;
  SMenuAnchor *pSVar8;
  bool bVar9;
  uint uStackX_c;
  
  pSVar6 = (SMenuAnchor *)0x0;
  if ((((this->MenuAnchor).Object == (SMenuAnchor *)0x0) ||
      (pTVar1 = (this->MenuAnchor).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pSVar8 = (SMenuAnchor *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pSVar8 = (SMenuAnchor *)(this->MenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar7 = pSVar8;
    if (pSVar8 == (SMenuAnchor *)0x0) {
LAB_142956f84:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pSVar8 = pSVar7;
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar8->_padding_;
      do {
        pSVar7 = pSVar6;
        if (aVar3 == (atomic<int>)0x0) goto LAB_142956f84;
        LOCK();
        aVar5 = *(atomic<int> *)&pSVar8->_padding_;
        bVar9 = aVar3 == aVar5;
        if (bVar9) {
          *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar9);
      pSVar6 = (this->MenuAnchor).Object;
      pSVar7 = pSVar8;
      if (pSVar6 == (SMenuAnchor *)0x0) goto LAB_142956f84;
    }
    if ((((char)(pSVar6->MethodInUse)._padding_ != '\0') &&
        ((pSVar6->PopupMenuPtr).Object != (IMenu *)0x0)) &&
       ((pTVar1 = (pSVar6->PopupMenuPtr).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar1->SharedReferenceCount)))) {
      bVar9 = true;
      pSVar6 = (SMenuAnchor *)&DAT_00000001;
      goto LAB_142956ff7;
    }
    pSVar6 = (SMenuAnchor *)&DAT_00000001;
  }
  bVar9 = false;
LAB_142956ff7:
  if (pSVar6 != (SMenuAnchor *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar8);
  }
  return bVar9;
}

// OnMouseEnter @ 14296fe20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSubMenuHandler::OnMouseEnter(SSubMenuHandler *this,FGeometry *param_1,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar6;
  SMenuAnchor *pSVar7;
  SMenuAnchor *pSVar8;
  SMenuAnchor *pSVar9;
  SMenuAnchor *pSVar10;
  SMenuAnchor *pSVar11;
  bool bVar12;
  bool bVar13;
  TSharedPtr<SMenuAnchor_const_,1> local_58;
  TVector2<double>_u_0 local_48;
  TSharedPtr<SMenuAnchor_const_,1> local_38;
  
  pSVar8 = (SMenuAnchor *)(this->MenuOwnerWidget).WeakReferenceCount.ReferenceController;
  pSVar11 = (SMenuAnchor *)0x0;
  pSVar7 = pSVar8;
  pSVar10 = pSVar11;
  if (pSVar8 == (SMenuAnchor *)0x0) {
LAB_14296fe65:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("PinnedMenuOwnerWidget.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSubMenuHandler.cpp"
                        ,0x2e,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar3 = (int)pSVar8->_padding_;
    do {
      pSVar7 = pSVar11;
      pSVar10 = (SMenuAnchor *)0x0;
      if (iVar3 == 0) goto LAB_14296fe65;
      LOCK();
      iVar5 = (int)pSVar8->_padding_;
      bVar12 = iVar3 == iVar5;
      if (bVar12) {
        *(int *)&pSVar8->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar12);
    pSVar10 = (SMenuAnchor *)(this->MenuOwnerWidget).Object;
    pSVar7 = pSVar8;
    if (pSVar10 == (SMenuAnchor *)0x0) goto LAB_14296fe65;
  }
  SMenuOwner::GetOpenMenu((SMenuOwner *)pSVar10,&local_58);
  if (local_58.Object != (SMenuAnchor *)0x0) {
    if ((local_58.Object == (SMenuAnchor *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((((char)((local_58.Object)->MethodInUse)._padding_ != '\0') &&
         (((local_58.Object)->PopupMenuPtr).Object != (IMenu *)0x0)) &&
        (pTVar1 = ((local_58.Object)->PopupMenuPtr).WeakReferenceCount.ReferenceController,
        pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
      bVar12 = true;
      SMenuAnchor::GetMenuPosition(local_58.Object,(TVector2<double> *)&local_48._s_0);
      bVar13 = (double)*(float *)&param_2->ScreenSpacePosition < local_48._s_0.X ==
               (0.0 < *(float *)&param_2->CursorDelta || *(float *)&param_2->CursorDelta == 0.0);
      goto LAB_14296ff8e;
    }
  }
  bVar12 = false;
  bVar13 = false;
LAB_14296ff8e:
  if ((((this->MenuAnchor).Object == (SMenuAnchor *)0x0) ||
      (pTVar1 = (this->MenuAnchor).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    if ((bVar12) && (bVar13)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    RequestSubMenuToggle(this,false,bVar12,false);
  }
  else {
    if ((pSVar10 == (SMenuAnchor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PinnedMenuOwnerWidget.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSubMenuHandler.cpp"
                           ,0x41,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar7 = (SMenuAnchor *)(this->MenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar9 = pSVar7;
    if (pSVar7 != (SMenuAnchor *)0x0) {
      iVar3 = (int)pSVar7->_padding_;
      do {
        pSVar9 = pSVar11;
        if (iVar3 == 0) goto LAB_142970005;
        LOCK();
        iVar5 = (int)pSVar7->_padding_;
        bVar4 = iVar3 == iVar5;
        if (bVar4) {
          *(int *)&pSVar7->_padding_ = iVar3 + 1;
          iVar5 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar5;
      } while (!bVar4);
      pSVar11 = (this->MenuAnchor).Object;
      pSVar9 = pSVar7;
    }
LAB_142970005:
    if ((pSVar10 == (SMenuAnchor *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar6 = SMenuOwner::GetOpenMenu((SMenuOwner *)pSVar10,&local_38);
    pSVar10 = pTVar6->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (pSVar10 != pSVar11) {
      if ((bVar12) && (bVar13)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      RequestSubMenuToggle(this,true,bVar12,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return;
}

// OnMouseLeave @ 1429701e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSubMenuHandler::OnMouseLeave(SSubMenuHandler *this,FPointerEvent *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedRef<FActiveTimerHandle,1> local_18;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  pTVar4 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142970215;
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
    local_18.Object = (this->ActiveTimerHandle).Object;
    if (local_18.Object != (FActiveTimerHandle *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar4;
      if ((local_18.Object == (FActiveTimerHandle *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)this,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142970215:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// RequestSubMenuToggle @ 142989ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSubMenuHandler::RequestSubMenuToggle(SSubMenuHandler *this,bool param_1,bool param_2,bool param_3)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<FActiveTimerHandle,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  float fVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_98;
  TSharedRef<FActiveTimerHandle,1> local_88;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  if ((((this->MenuAnchor).Object != (SMenuAnchor *)0x0) &&
      (pTVar10 = (this->MenuAnchor).WeakReferenceCount.ReferenceController,
      pTVar10 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar10->SharedReferenceCount)) {
    if (param_3) {
      UpdateSubMenuState(this,0.0,0.0,true);
      return;
    }
    fVar11 = __real_3f000000;
    if (!param_2) {
      fVar11 = 0.0;
    }
    if ((((this->ActiveTimerHandle).Object == (FActiveTimerHandle *)0x0) ||
        (pTVar10 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController,
        pTVar10 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar10->SharedReferenceCount < 1))
    {
      local_78 = (undefined1  [8])0x0;
      local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_70.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
                 (FWriteAccessScope *)&local_60);
      local_48 = &local_70;
      puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_70);
      uVar5 = local_88.SharedReferenceCount.ReferenceController._4_4_;
      if (puVar6 == (undefined8 *)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
      }
      else {
        pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                           ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
        pTVar10 = (pTVar7->SharedReferenceCount).ReferenceController;
        pSVar1 = pTVar7->Object;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy___N__6B_
        ;
        *(bool *)(puVar6 + 1) = param_1;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar8;
        *puVar6 = &
                  ___7__TBaseSPMethodDelegateInstance__0A_VSSubMenuHandler___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy___N__6B_
        ;
        puVar6[3] = pSVar1;
        puVar6[4] = pTVar10;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        bVar4 = true;
        bVar3 = true;
        bVar2 = true;
        puVar6[5] = UpdateSubMenuState;
        puVar6[6] = (ulonglong)uVar5 << 0x20;
      }
      if (bVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
      }
      if (bVar3) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
      }
      if (bVar4) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      pTVar9 = SWidget::RegisterActiveTimer
                         ((SWidget *)this,&local_88,fVar11,
                          (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                           *)local_78);
      TWeakPtr<FActiveTimerHandle,1>::operator=<FActiveTimerHandle>(&this->ActiveTimerHandle,pTVar9)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                          local_88.SharedReferenceCount.ReferenceController._0_4_));
    }
  }
  return;
}

// ShouldSubMenuAppearHovered @ 1429a0ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SSubMenuHandler::ShouldSubMenuAppearHovered(SSubMenuHandler *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  SMenuAnchor *pSVar7;
  SMenuAnchor *pSVar8;
  SMenuAnchor *pSVar9;
  SMenuAnchor *pSVar10;
  bool bVar11;
  uint uStackX_c;
  
  pSVar7 = (SMenuAnchor *)0x0;
  if ((((this->MenuAnchor).Object == (SMenuAnchor *)0x0) ||
      (pTVar1 = (this->MenuAnchor).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pSVar9 = (SMenuAnchor *)((ulonglong)uStackX_c << 0x20);
LAB_1429a0c2b:
    pSVar10 = (SMenuAnchor *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pSVar9 = (SMenuAnchor *)(this->MenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar8 = pSVar9;
    pSVar10 = pSVar7;
    if (pSVar9 == (SMenuAnchor *)0x0) {
LAB_1429a0b45:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar9 = pSVar8;
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar9->_padding_;
      do {
        pSVar8 = pSVar7;
        pSVar10 = (SMenuAnchor *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_1429a0b45;
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar9->_padding_;
        bVar11 = aVar3 == aVar6;
        if (bVar11) {
          *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar11);
      pSVar10 = (this->MenuAnchor).Object;
      pSVar8 = pSVar9;
      if (pSVar10 == (SMenuAnchor *)0x0) goto LAB_1429a0b45;
    }
    if ((((char)(pSVar10->MethodInUse)._padding_ == '\0') ||
        ((pSVar10->PopupMenuPtr).Object == (IMenu *)0x0)) ||
       ((pTVar1 = (pSVar10->PopupMenuPtr).WeakReferenceCount.ReferenceController,
        pTVar1 == (TReferenceControllerBase<1> *)0x0 || ((int)pTVar1->SharedReferenceCount < 1)))) {
      pSVar7 = (SMenuAnchor *)&DAT_00000001;
      goto LAB_1429a0c2b;
    }
    pSVar10 = (SMenuAnchor *)(this->MenuOwnerWidget).WeakReferenceCount.ReferenceController;
    pSVar8 = pSVar10;
    if (pSVar10 == (SMenuAnchor *)0x0) {
LAB_1429a0bc6:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar10 = pSVar8;
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar10->_padding_;
      do {
        pSVar8 = pSVar7;
        if (aVar3 == (atomic<int>)0x0) goto LAB_1429a0bc6;
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar10->_padding_;
        bVar11 = aVar3 == aVar6;
        if (bVar11) {
          *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar11);
      pSVar7 = (SMenuAnchor *)(this->MenuOwnerWidget).Object;
      pSVar8 = pSVar10;
      if (pSVar7 == (SMenuAnchor *)0x0) goto LAB_1429a0bc6;
    }
    plVar4 = &pSVar7->_padding_;
    pSVar7 = (SMenuAnchor *)&DAT_00000003;
    if (*(undefined1 *)((longlong)plVar4 + 3) == '\0') {
      bVar11 = true;
      goto LAB_1429a0c33;
    }
  }
  bVar11 = false;
LAB_1429a0c33:
  if (((ulonglong)pSVar7 & 2) != 0) {
    pSVar7 = (SMenuAnchor *)(ulonglong)((uint)pSVar7 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
  }
  if (((ulonglong)pSVar7 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
  }
  return bVar11;
}

// UpdateSubMenuState @ 1429af5a0

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SSubMenuHandler::UpdateSubMenuState(SSubMenuHandler *this,double param_1,float param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  EActiveTimerReturnType EVar7;
  int iVar8;
  TSharedPtr<SMenuAnchor_const_,1> *pTVar9;
  SMenuAnchor *pSVar10;
  SMenuAnchor *pSVar11;
  SMenuAnchor *this_00;
  SMenuAnchor *pSVar12;
  SMenuAnchor *pSVar13;
  bool bVar14;
  TSharedPtr<SMenuAnchor_const_,1> local_18;
  
  pSVar11 = (SMenuAnchor *)(this->MenuOwnerWidget).WeakReferenceCount.ReferenceController;
  pSVar13 = (SMenuAnchor *)0x0;
  pSVar10 = pSVar11;
  this_00 = pSVar13;
  if (pSVar11 != (SMenuAnchor *)0x0) {
    iVar3 = (int)pSVar11->_padding_;
    do {
      pSVar10 = pSVar13;
      this_00 = (SMenuAnchor *)0x0;
      if (iVar3 == 0) goto LAB_1429af5f5;
      LOCK();
      iVar8 = (int)pSVar11->_padding_;
      bVar14 = iVar3 == iVar8;
      if (bVar14) {
        *(int *)&pSVar11->_padding_ = iVar3 + 1;
        iVar8 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar8;
    } while (!bVar14);
    this_00 = (SMenuAnchor *)(this->MenuOwnerWidget).Object;
    pSVar10 = pSVar11;
    if (this_00 != (SMenuAnchor *)0x0) goto LAB_1429af61b;
  }
LAB_1429af5f5:
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("PinnedMenuOwnerWidget.IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSubMenuHandler.cpp"
                      ,0x8a,L"");
  pSVar11 = pSVar10;
  if (bVar14) {
    pcVar6 = (code *)swi(3);
    EVar7 = (*pcVar6)();
    return EVar7;
  }
LAB_1429af61b:
  if (param_3) {
    if (((((this->MenuAnchor).Object == (SMenuAnchor *)0x0) ||
         (pTVar4 = (this->MenuAnchor).WeakReferenceCount.ReferenceController,
         pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("MenuAnchor.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SSubMenuHandler.cpp"
                               ,0x90,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      EVar7 = (*pcVar6)();
      return EVar7;
    }
    pSVar10 = (SMenuAnchor *)(this->MenuAnchor).WeakReferenceCount.ReferenceController;
    pSVar12 = pSVar10;
    if (pSVar10 != (SMenuAnchor *)0x0) {
      iVar3 = (int)pSVar10->_padding_;
      do {
        pSVar12 = pSVar13;
        if (iVar3 == 0) goto LAB_1429af695;
        LOCK();
        iVar8 = (int)pSVar10->_padding_;
        bVar14 = iVar3 == iVar8;
        if (bVar14) {
          *(int *)&pSVar10->_padding_ = iVar3 + 1;
          iVar8 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar8;
      } while (!bVar14);
      pSVar13 = (this->MenuAnchor).Object;
      pSVar12 = pSVar10;
    }
LAB_1429af695:
    if ((this_00 == (SMenuAnchor *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      EVar7 = (*pcVar6)();
      return EVar7;
    }
    pTVar9 = SMenuOwner::GetOpenMenu((SMenuOwner *)this_00,&local_18);
    pSVar10 = pTVar9->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pSVar10 != pSVar13) {
      if ((this_00 == (SMenuAnchor *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        EVar7 = (*pcVar6)();
        return EVar7;
      }
      SMenuOwner::CloseSummonedMenus((SMenuOwner *)this_00);
      if (pSVar13 != (SMenuAnchor *)0x0) {
        (**(code **)(pSVar13->_padding_ + 0x250))(pSVar13,1,1,0);
      }
      if ((this_00 == (SMenuAnchor *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        EVar7 = (*pcVar6)();
        return EVar7;
      }
      if ((pSVar13 == (SMenuAnchor *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        EVar7 = (*pcVar6)();
        return EVar7;
      }
      if (pSVar12 != (SMenuAnchor *)0x0) {
        LOCK();
        *(int *)&pSVar12->_padding_ = (int)pSVar12->_padding_ + 1;
        UNLOCK();
      }
      if ((pSVar13 == (SMenuAnchor *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        EVar7 = (*pcVar6)();
        return EVar7;
      }
      *(SMenuAnchor **)&(this_00->Placement).Value = pSVar13;
      if (pSVar12 != *(SMenuAnchor **)&(this_00->Placement).Getter.field_0x0) {
        if (pSVar12 != (SMenuAnchor *)0x0) {
          LOCK();
          puVar1 = (undefined1 *)((longlong)&pSVar12->_padding_ + 4);
          *(int *)puVar1 = *(int *)puVar1 + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)&(this_00->Placement).Getter.field_0x0;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          lVar2 = (longlong)plVar5 + 0xc;
          iVar3 = *(int *)lVar2;
          *(int *)lVar2 = *(int *)lVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(SMenuAnchor **)&(this_00->Placement).Getter.field_0x0 = pSVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar12);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar12);
  }
  else {
    if ((this_00 == (SMenuAnchor *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      EVar7 = (*pcVar6)();
      return EVar7;
    }
    SMenuOwner::CloseSummonedMenus((SMenuOwner *)this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar11);
  return Stop;
}

