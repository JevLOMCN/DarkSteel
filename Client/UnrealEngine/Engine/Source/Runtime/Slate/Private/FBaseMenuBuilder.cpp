// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FBaseMenuBuilder @ 1427b0660

FBaseMenuBuilder * __thiscall
FBaseMenuBuilder::FBaseMenuBuilder
          (FBaseMenuBuilder *this,EMultiBoxType param_1,bool param_2,
          TSharedPtr<FUICommandList_const_,1> *param_3,bool param_4,TSharedPtr<FExtender,1> *param_5
          ,ISlateStyle *param_6,FName param_7,FName param_8)

{
  longlong lVar1;
  TSharedPtr<FExtender,1> *pTVar2;
  TSharedPtr<FExtender,1> local_18;
  
  pTVar2 = param_5;
  local_18.Object = param_5->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_5->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBoxBuilder::FMultiBoxBuilder
            ((FMultiBoxBuilder *)this,param_1,FMultiBoxCustomization::None,param_2,param_3,&local_18
             ,param_7,param_8);
  lVar1 = this->_padding_;
  this->_padding_ = (longlong)&___7FBaseMenuBuilder__6B_;
  this->bCloseSelfOnly = param_4;
  ::FName::FName((FName *)&param_5,"Menu");
  *(ISlateStyle **)(lVar1 + 0x60) = param_6;
  *(TSharedPtr<FExtender,1> **)(lVar1 + 0x68) = param_5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar2->SharedReferenceCount).ReferenceController);
  return this;
}

// AddMenuEntry @ 1427c7b20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FBaseMenuBuilder::AddMenuEntry(FBaseMenuBuilder *this,FMenuEntryParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  FMultiBlock *pFVar8;
  undefined1 local_res8 [8];
  TSharedRef<FMultiBlock_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  uchar local_48;
  bool local_47;
  undefined1 local_40 [8];
  void *pvStack_38;
  undefined4 local_30;
  
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_1->_padding_,0);
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
    FMenuEntryBlock::FMenuEntryBlock((FMenuEntryBlock *)(pTVar6 + 1),param_1);
    pFVar8 = (FMultiBlock *)(pTVar6 + 1);
    if (pFVar8 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427c7c3a;
    }
  }
  if (((*(longlong *)&pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar8->_padding_ = pFVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1427c7c3a:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((pFVar8 == (FMultiBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58 = 0;
  uStack_50 = 0;
  FVar7 = GenerateTutorialIdentifierName
                    ((FName)local_res8,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_1->TutorialHighlightName,
                     (int)&local_58);
  pFVar8->TutorialHighlightName = *(FName *)FVar7;
  if ((param_1->Visibility).bIsSet != false) {
    local_48 = (param_1->Visibility).Value.Value.Value;
    local_47 = (param_1->Visibility).bIsSet;
    local_40 = (undefined1  [8])0x0;
    pvStack_38 = (void *)0x0;
    local_30 = 0;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,
               &(param_1->Visibility).Getter);
    (pFVar8->VisibilityOverride).Value.Value.Value = local_48;
    (pFVar8->VisibilityOverride).bIsSet = local_47;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar8->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = pFVar8;
  local_68.SharedReferenceCount.ReferenceController = pTVar6;
  FMultiBox::AddMultiBlock(this_00,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (**(code **)(this->_padding_ + 0x10))(this,param_1->_padding_,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddMenuEntry @ 1427c7dd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FBaseMenuBuilder::AddMenuEntry
          (FBaseMenuBuilder *this,FUIAction *param_1,TSharedRef<SWidget,1> *param_2,FName *param_3,
          TAttribute<FText> *param_4,EUserInterfaceActionType param_5,FName param_6,
          TAttribute<EVisibility> *param_7)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *pTVar6;
  FName FVar7;
  FMultiBlock *pFVar8;
  undefined1 local_res8 [8];
  TSharedRef<FMultiBlock_const_,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  uchar local_38;
  bool local_37;
  undefined1 local_30 [8];
  void *pvStack_28;
  undefined4 local_20;
  
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,*param_3,0);
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    pTVar6 = (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0;
    pFVar8 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar6 = SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
             TIntrusiveReferenceController<FMenuEntryBlock,1><FName_const_&,FUIAction_const_&,TSharedRef<SWidget,1>_const_&,TAttribute<FText>_const_&,enum_EUserInterfaceActionType_const_&,bool_&>
                       (pTVar6,param_3,param_1,param_2,param_4,&param_5,&this->bCloseSelfOnly);
    pFVar8 = (FMultiBlock *)&pTVar6->ObjectStorage;
    if (pFVar8 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427c7eef;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar6 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
      LOCK();
      *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar6 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)pFVar8->_padding_) {
      if (pTVar6 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar6->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar6);
  }
LAB_1427c7eef:
  local_48 = 0;
  uStack_40 = 0;
  FVar7 = GenerateTutorialIdentifierName
                    ((FName)local_res8,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_6,(int)&local_48);
  pFVar8->TutorialHighlightName = *(FName *)FVar7;
  if (param_7->bIsSet != false) {
    local_38 = (param_7->Value).Value.Value;
    local_30 = (undefined1  [8])0x0;
    pvStack_28 = (void *)0x0;
    local_20 = 0;
    local_37 = param_7->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_30,
               &param_7->Getter);
    (pFVar8->VisibilityOverride).Value.Value.Value = local_38;
    (pFVar8->VisibilityOverride).bIsSet = local_37;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar8->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
    if (pvStack_28 != (void *)0x0) {
      FMemory::Free(pvStack_28);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_30);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar6 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    LOCK();
    *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
    UNLOCK();
  }
  local_58.Object = pFVar8;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
  FMultiBox::AddMultiBlock(this_00,&local_58);
  (**(code **)(this->_padding_ + 0x10))(this,*param_3,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddMenuEntry @ 1427c8020

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FBaseMenuBuilder::AddMenuEntry
          (FBaseMenuBuilder *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          FSlateIcon *param_3,FUIAction *param_4,FName param_5,EUserInterfaceActionType param_6,
          FName param_7,TAttribute<FText> *param_8,TAttribute<EVisibility> *param_9)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName FVar8;
  FMultiBlock *pFVar9;
  undefined1 local_res8 [8];
  TSharedRef<FMultiBlock_const_,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  uchar local_38;
  bool local_37;
  undefined1 local_30 [8];
  void *pvStack_28;
  undefined4 local_20;
  
  (**(code **)(this->_padding_ + 0x18))();
  FVar5 = param_5;
  (**(code **)(this->_padding_ + 0x10))(this,param_5,0);
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar9 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
    FMenuEntryBlock::FMenuEntryBlock
              ((FMenuEntryBlock *)(pTVar7 + 1),&param_5,param_1,param_2,param_3,param_4,param_6,
               this->bCloseSelfOnly,true,param_8);
    pFVar9 = (FMultiBlock *)(pTVar7 + 1);
    if (pFVar9 == (FMultiBlock *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427c8187;
    }
  }
  if (((*(longlong *)&pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar9->_padding_ = pFVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar9->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1427c8187:
  local_48 = 0;
  uStack_40 = 0;
  FVar8 = GenerateTutorialIdentifierName
                    ((FName)local_res8,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_7,(int)&local_48);
  pFVar9->TutorialHighlightName = *(FName *)FVar8;
  if (param_9->bIsSet != false) {
    local_38 = (param_9->Value).Value.Value;
    local_30 = (undefined1  [8])0x0;
    pvStack_28 = (void *)0x0;
    local_20 = 0;
    local_37 = param_9->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_30,
               &param_9->Getter);
    (pFVar9->VisibilityOverride).Value.Value.Value = local_38;
    (pFVar9->VisibilityOverride).bIsSet = local_37;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar9->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
    if (pvStack_28 != (void *)0x0) {
      FMemory::Free(pvStack_28);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_30);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar9;
  local_58.SharedReferenceCount.ReferenceController = pTVar7;
  FMultiBox::AddMultiBlock(this_00,&local_58);
  (**(code **)(this->_padding_ + 0x10))(this,FVar5,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// AddMenuEntry @ 1427c82b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FBaseMenuBuilder::AddMenuEntry
          (FBaseMenuBuilder *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,FName param_2,
          TAttribute<FText> *param_3,TAttribute<FText> *param_4,FSlateIcon *param_5,FName param_6,
          TAttribute<EVisibility> *param_7)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName FVar8;
  uint uVar9;
  longlong lVar10;
  FMultiBlock *pFVar11;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  TSharedPtr<FUICommandList_const_,1> local_88;
  TSharedPtr<FUICommandInfo_const_,1> local_78;
  FUICommandInfo *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FMultiBlock_const_,1> local_58;
  uchar local_48;
  bool local_47;
  undefined1 local_40 [8];
  void *pvStack_38;
  undefined4 local_30;
  
  local_res18[0] = param_2;
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_2,0);
  if (param_1->Object == (FUICommandInfo *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCommand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  uVar9 = iVar2 - 1;
  uVar6 = 0;
  if ((int)uVar9 < iVar2) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar10 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar10 + -8);
    local_88.Object = *(FUICommandList **)(lVar10 + -0x10);
    bVar5 = this->bCloseSelfOnly;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
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
    FMenuEntryBlock::FMenuEntryBlock
              ((FMenuEntryBlock *)(pTVar7 + 1),local_res18,&local_78,&local_88,param_3,param_4,
               param_5,bVar5,true);
    pFVar11 = (FMultiBlock *)(pTVar7 + 1);
    if (pFVar11 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427c84a9;
    }
  }
  if (((*(longlong *)&pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar11->_padding_ = pFVar11;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1427c84a9:
  local_68 = param_1->Object;
  local_60 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar8 = GenerateTutorialIdentifierName
                    ((FName)local_res8,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_6,(int)&local_68);
  pFVar11->TutorialHighlightName = *(FName *)FVar8;
  *(longlong *)&pFVar11[1].ResizeParams.Value.AllowClipping.Getter.field_0x4 = this->_padding_;
  if (param_7->bIsSet != false) {
    local_48 = (param_7->Value).Value.Value;
    local_40 = (undefined1  [8])0x0;
    pvStack_38 = (void *)0x0;
    local_30 = 0;
    local_47 = param_7->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,
               &param_7->Getter);
    (pFVar11->VisibilityOverride).Value.Value.Value = local_48;
    (pFVar11->VisibilityOverride).bIsSet = local_47;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar11->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar11;
  local_58.SharedReferenceCount.ReferenceController = pTVar7;
  FMultiBox::AddMultiBlock(this_00,&local_58);
  (**(code **)(this->_padding_ + 0x10))(this,local_res18[0],1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ~FBaseMenuBuilder @ 142a18980

void __thiscall FBaseMenuBuilder::~FBaseMenuBuilder(FBaseMenuBuilder *this)

{
  this->_padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

