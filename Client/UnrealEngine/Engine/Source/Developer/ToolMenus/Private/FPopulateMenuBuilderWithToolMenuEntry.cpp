// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 5

// FPopulateMenuBuilderWithToolMenuEntry @ 142c37f40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FPopulateMenuBuilderWithToolMenuEntry * __thiscall
FPopulateMenuBuilderWithToolMenuEntry::FPopulateMenuBuilderWithToolMenuEntry
          (FPopulateMenuBuilderWithToolMenuEntry *this,FMenuBuilder *param_1,UToolMenu *param_2,
          FToolMenuSection *param_3,FToolMenuEntry *param_4,bool param_5)

{
  bool bVar1;
  
  this->MenuBuilder = param_1;
  this->MenuData = param_2;
  this->Section = param_3;
  this->Block = param_4;
  this->BlockNameOverride = param_4->Name;
  FUIAction::FUIAction(&this->UIAction);
  (this->Widget).Object = (SWidget *)0x0;
  (this->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&(this->LabelToDisplay).Value);
  (this->LabelToDisplay).bIsSet = false;
  *(undefined8 *)&(this->LabelToDisplay).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelToDisplay).Getter = 0;
  *(undefined8 *)&(this->LabelToDisplay).Getter.field_0x8 = 0;
  this->bAllowSubMenuCollapse = param_5;
  bVar1 = (bool)(**(code **)(param_2->_padding_ + 0x2b0))(param_2);
  this->bIsEditing = bVar1;
  return this;
}

// ~FPopulateMenuBuilderWithToolMenuEntry @ 142c3c100

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FPopulateMenuBuilderWithToolMenuEntry::~FPopulateMenuBuilderWithToolMenuEntry
          (FPopulateMenuBuilderWithToolMenuEntry *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelToDisplay).Getter);
  pvVar1 = *(void **)&(this->LabelToDisplay).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelToDisplay).Getter);
  pIVar2 = (this->LabelToDisplay).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Widget).SharedReferenceCount.ReferenceController);
  FUIAction::~FUIAction(&this->UIAction);
  return;
}

// AddStandardEntryToMenuBuilder @ 142c47d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPopulateMenuBuilderWithToolMenuEntry::AddStandardEntryToMenuBuilder
          (FPopulateMenuBuilderWithToolMenuEntry *this)

{
  EUserInterfaceActionType EVar1;
  FToolMenuEntry *pFVar2;
  FMenuBuilder *pFVar3;
  FName FVar4;
  UToolMenuEntryScript *this_00;
  ITextData *pIVar5;
  FName FVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  TRefCountPtr<ITextData> TVar10;
  bool bVar11;
  FUIAction *pFVar12;
  FText *pFVar13;
  FSlateIcon *pFVar14;
  TAttribute<FSlateIcon> *this_01;
  TAttribute<FText> *pTVar15;
  TSharedRef<SWidget,1> *pTVar16;
  FSharedReferencer<1> FVar17;
  undefined1 auStackY_618 [32];
  TSharedPtr<FUICommandList_const_,1> local_5c8;
  FName local_5b8;
  undefined1 local_5b0 [4];
  undefined1 local_5ac [4];
  undefined1 local_5a8 [8];
  undefined8 local_5a0;
  FSharedReferencer<1> local_598;
  undefined1 local_590 [8];
  undefined1 local_588 [24];
  undefined1 local_570 [8];
  undefined1 local_568 [32];
  TSharedRef<FUICommandList_const_,1> local_548;
  TSharedPtr<FUICommandInfo_const_,1> local_538;
  undefined1 local_528 [8];
  undefined1 local_520 [24];
  undefined1 local_508 [8];
  undefined1 local_500 [24];
  FString local_4e8;
  FString local_4d8;
  TSharedRef<SWidget,1> local_4c8;
  undefined1 local_4b8 [24];
  undefined1 local_4a0 [24];
  undefined1 local_488 [24];
  undefined1 local_470 [24];
  undefined1 local_458 [40];
  undefined1 local_430 [24];
  undefined1 local_418 [48];
  undefined1 local_3e8 [24];
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_3d0;
  EUIActionRepeatMode local_3b8;
  FName local_390;
  FText local_380;
  bool local_370;
  TDelegateBase<FNotThreadSafeDelegateMode> local_368;
  FText local_350;
  bool local_340;
  TDelegateBase<FNotThreadSafeDelegateMode> local_338;
  TRefCountPtr<ITextData> local_320;
  uint local_318;
  bool local_310;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_308;
  EVisibility local_2f0;
  bool local_2ef;
  TDelegateBase<FNotThreadSafeDelegateMode> local_2e8;
  FName local_2d0;
  FName FStack_2c8;
  FName local_2c0;
  FName FStack_2b8;
  EUserInterfaceActionType local_26d;
  FName local_254;
  undefined1 local_248 [48];
  undefined1 local_218 [24];
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_200;
  EUIActionRepeatMode local_1e8;
  FName local_1c0;
  TRefCountPtr<ITextData> local_180;
  uint local_178;
  bool local_170;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_168;
  TRefCountPtr<ITextData> local_150;
  uint local_148;
  bool local_140;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_138;
  EVisibility local_120;
  bool local_11f;
  TDelegateBase<FNotThreadSafeDelegateMode> local_118 [4];
  SWidget *local_b0;
  FSharedReferencer<1> local_a8;
  EUserInterfaceActionType local_9d;
  FName local_84;
  FToolMenuVisibilityChoice local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_618;
  UE::ToolMenus::Private::CombineVisibility
            (&local_78,&this->Section->Visibility,&this->Block->Visibility);
  pFVar2 = this->Block;
  if ((pFVar2->Command).Object == (FUICommandInfo *)0x0) {
    this_00 = (pFVar2->ScriptObject).field0_0x0.DebugPtr;
    if (this_00 == (UToolMenuEntryScript *)0x0) {
      if ((this->Widget).Object == (SWidget *)0x0) {
        pFVar3 = this->MenuBuilder;
        FToolMenuVisibilityChoice::ToVisibilityAttribute
                  (&local_78,(TAttribute<EVisibility> *)local_508);
        pFVar2 = this->Block;
        FVar4 = this->BlockNameOverride;
        FVar6 = pFVar2->TutorialHighlightName;
        EVar1 = pFVar2->UserInterfaceActionType;
        pFVar14 = TAttribute<FSlateIcon>::Get(&pFVar2->Icon);
        FBaseMenuBuilder::AddMenuEntry
                  ((FBaseMenuBuilder *)pFVar3,&this->LabelToDisplay,&this->Block->ToolTip,pFVar14,
                   &this->UIAction,FVar4,EVar1,FVar6,&pFVar2->InputBindingLabel,
                   (TAttribute<EVisibility> *)local_508);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_500);
        if ((void *)local_500._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_500._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_500);
      }
      else {
        FMenuEntryParams::FMenuEntryParams((FMenuEntryParams *)local_248);
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_248,
                   &(this->UIAction).ExecuteAction);
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_248 + 0x18),
                   &(this->UIAction).CanExecuteAction);
        TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(local_218,&(this->UIAction).GetActionCheckState);
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(&local_200,&(this->UIAction).IsActionVisibleDelegate);
        local_1e8 = (this->UIAction).RepeatMode;
        pTVar16 = TSharedPtr<SWidget,1>::ToSharedRef(&this->Widget,&local_4c8);
        local_598.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
        local_b0 = pTVar16->Object;
        if (local_598.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_598.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_598.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_5a0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a8,&local_598);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_598.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4c8.SharedReferenceCount.ReferenceController);
        TVar10.Reference = local_180.Reference;
        pFVar2 = this->Block;
        local_1c0 = this->BlockNameOverride;
        pIVar5 = (pFVar2->ToolTip).Value.TextData.Reference;
        if (local_180.Reference != pIVar5) {
          local_180.Reference = pIVar5;
          if (pIVar5 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_5ac);
          }
          if (TVar10.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar10.Reference + 0x10))(TVar10.Reference);
          }
        }
        local_178 = (pFVar2->ToolTip).Value.Flags;
        local_170 = (pFVar2->ToolTip).bIsSet;
        TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(&local_168,&(pFVar2->ToolTip).Getter);
        TVar10.Reference = local_150.Reference;
        pFVar2 = this->Block;
        local_9d = pFVar2->UserInterfaceActionType;
        local_84 = pFVar2->TutorialHighlightName;
        pIVar5 = (pFVar2->InputBindingLabel).Value.TextData.Reference;
        if (local_150.Reference != pIVar5) {
          local_150.Reference = pIVar5;
          if (pIVar5 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_5a8);
          }
          if (TVar10.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar10.Reference + 0x10))(TVar10.Reference);
          }
        }
        local_148 = (pFVar2->InputBindingLabel).Value.Flags;
        local_140 = (pFVar2->InputBindingLabel).bIsSet;
        TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(&local_138,&(pFVar2->InputBindingLabel).Getter);
        FToolMenuVisibilityChoice::ToVisibilityAttribute
                  (&local_78,(TAttribute<EVisibility> *)local_570);
        local_120.Value.Value = local_570[0];
        local_11f = local_570[1];
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  (local_118,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
        if ((void *)local_568._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_568._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_568);
        FBaseMenuBuilder::AddMenuEntry
                  ((FBaseMenuBuilder *)this->MenuBuilder,(FMenuEntryParams *)local_248);
        FMenuEntryParams::~FMenuEntryParams((FMenuEntryParams *)local_248);
      }
    }
    else {
      this_01 = UToolMenuEntryScript::CreateIconAttribute
                          (this_00,(TAttribute<FSlateIcon> *)local_458,&this->MenuData->Context);
      pFVar14 = TAttribute<FSlateIcon>::Get(this_01);
      FVar4 = pFVar14->StyleSetName;
      FVar6 = pFVar14->StyleName;
      FVar8 = pFVar14->SmallStyleName;
      FVar9 = pFVar14->StatusOverlayStyleName;
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_430);
      if ((void *)local_430._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_430._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_430);
      FMenuEntryParams::FMenuEntryParams((FMenuEntryParams *)local_418);
      pTVar15 = UToolMenuEntryScript::CreateLabelAttribute
                          (this_00,(TAttribute<FText> *)local_4b8,&this->MenuData->Context);
      FText::operator=(&local_380,&pTVar15->Value);
      local_370 = pTVar15->bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                (&local_368,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar15->Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
      if ((void *)local_4a0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4a0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4a0);
      if ((ITextData *)local_4b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_4b8._0_8_ + 0x10))();
      }
      pTVar15 = UToolMenuEntryScript::CreateToolTipAttribute
                          (this_00,(TAttribute<FText> *)local_488,&this->MenuData->Context);
      FText::operator=(&local_350,&pTVar15->Value);
      local_340 = pTVar15->bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                (&local_338,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar15->Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
      if ((void *)local_470._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_470._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_470);
      if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 0x10))();
      }
      local_2d0 = FVar4;
      FStack_2c8 = FVar6;
      local_2c0 = FVar8;
      FStack_2b8 = FVar9;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_418,
                 &(this->UIAction).ExecuteAction);
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_418 + 0x18),
                 &(this->UIAction).CanExecuteAction);
      TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(local_3e8,&(this->UIAction).GetActionCheckState);
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&local_3d0,&(this->UIAction).IsActionVisibleDelegate);
      TVar10.Reference = local_320.Reference;
      local_3b8 = (this->UIAction).RepeatMode;
      local_390 = (this_00->Data).Name;
      pFVar2 = this->Block;
      local_26d = pFVar2->UserInterfaceActionType;
      local_254 = pFVar2->TutorialHighlightName;
      pIVar5 = (pFVar2->InputBindingLabel).Value.TextData.Reference;
      if (local_320.Reference != pIVar5) {
        local_320.Reference = pIVar5;
        if (pIVar5 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_5b0);
        }
        if (TVar10.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar10.Reference + 0x10))(TVar10.Reference);
        }
      }
      local_318 = (pFVar2->InputBindingLabel).Value.Flags;
      local_310 = (pFVar2->InputBindingLabel).bIsSet;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_308,&(pFVar2->InputBindingLabel).Getter);
      FToolMenuVisibilityChoice::ToVisibilityAttribute
                (&local_78,(TAttribute<EVisibility> *)local_590);
      local_2f0.Value.Value = local_590[0];
      local_2ef = local_590[1];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                (&local_2e8,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_588);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_588);
      if ((void *)local_588._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_588._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_588);
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)this->MenuBuilder,(FMenuEntryParams *)local_418);
      FMenuEntryParams::~FMenuEntryParams((FMenuEntryParams *)local_418);
    }
  }
  else {
    local_5c8.Object = (FUICommandList *)0x0;
    local_5c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar11 = false;
    pFVar12 = FToolMenuEntry::GetActionForCommand(pFVar2,&this->MenuData->Context,&local_5c8);
    if ((pFVar12 == (FUIAction *)0x0) || (local_5c8.Object == (FUICommandList *)0x0)) {
      FVar17.ReferenceController = local_5c8.SharedReferenceCount.ReferenceController;
      if (1 < (byte)LogToolMenus._0_1_) {
        ::FName::ToString(&this->MenuData->MenuName,&local_4d8);
        pFVar13 = TAttribute<FText>::Get(&this->LabelToDisplay);
        FTextInspector::GetSourceString(pFVar13);
        ::FName::ToString(&this->BlockNameOverride,&local_4e8);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FPopulateMenuBuilderWithToolMenuEntry::AddStandardEntryToMenuBuilder(void)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
        if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
        }
        FVar17.ReferenceController = local_5c8.SharedReferenceCount.ReferenceController;
        if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
          FVar17.ReferenceController = local_5c8.SharedReferenceCount.ReferenceController;
        }
      }
    }
    else {
      pFVar3 = this->MenuBuilder;
      if ((local_5c8.Object == (FUICommandList *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar17.ReferenceController = local_5c8.SharedReferenceCount.ReferenceController;
      local_548.Object = local_5c8.Object;
      local_548.SharedReferenceCount.ReferenceController =
           local_5c8.SharedReferenceCount.ReferenceController;
      if (local_5c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_5c8.Object == (FUICommandList *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FMultiBoxBuilder::PushCommandList((FMultiBoxBuilder *)pFVar3,&local_548);
      bVar11 = true;
    }
    pFVar3 = this->MenuBuilder;
    FToolMenuVisibilityChoice::ToVisibilityAttribute(&local_78,(TAttribute<EVisibility> *)local_528)
    ;
    local_5b8.ComparisonIndex.Value = 0;
    local_5b8.Number = 0;
    pFVar14 = TAttribute<FSlateIcon>::Get(&this->Block->Icon);
    pFVar2 = this->Block;
    FVar4 = this->BlockNameOverride;
    local_538.Object = (pFVar2->Command).Object;
    local_538.SharedReferenceCount.ReferenceController =
         (pFVar2->Command).SharedReferenceCount.ReferenceController;
    if (local_538.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)pFVar3,&local_538,FVar4,&this->LabelToDisplay,&pFVar2->ToolTip,
               pFVar14,local_5b8,(TAttribute<EVisibility> *)local_528);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_520);
    if ((void *)local_520._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_520._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_520);
    if (bVar11) {
      FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)this->MenuBuilder);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
  }
  if ((2 < local_78.Value.TypeIndex) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_78.Value.TypeIndex])(&local_78);
  return;
}

// AddSubMenuEntryToMenuBuilder @ 142c48dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPopulateMenuBuilderWithToolMenuEntry::AddSubMenuEntryToMenuBuilder
          (FPopulateMenuBuilderWithToolMenuEntry *this)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  FMenuBuilder *pFVar4;
  FName FVar5;
  FName FVar6;
  code *pcVar7;
  ForElementType<TAlignedBytes<16,16>_> FVar8;
  char cVar9;
  bool bVar10;
  UToolMenus *pUVar11;
  FText *pFVar12;
  FText *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  UToolMenu *pUVar16;
  TSharedRef<SWidget,1> *pTVar17;
  FSlateIcon *pFVar18;
  FReadAccessScope *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  FMRSWRecursiveAccessDetector *this_02;
  FScriptContainerElement *pFVar19;
  FToolMenuEntry *pFVar20;
  FToolMenuEntry *pFVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_448 [32];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  ForAnyElementType local_3d8;
  int local_3d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3c8;
  FDelegateAllocation local_3c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  FDelegateAllocation local_3a8;
  undefined1 local_398 [8];
  ForAnyElementType local_390;
  int local_388;
  FWeakObjectPtr local_380;
  FWeakObjectPtr local_378;
  UToolMenu *local_370;
  UToolMenus *local_368;
  UToolMenu *local_360;
  UToolMenus *local_358;
  FDestructionSentinel local_350;
  FDestructionSentinel local_338;
  FDestructionSentinel local_320;
  FDestructionSentinel local_308;
  FDestructionSentinel local_2f0;
  FDestructionSentinel local_2d8;
  FDestructionSentinel local_2c0;
  FDestructionSentinel local_2a8;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  FDestructionSentinel local_270;
  FDelegateAllocation *local_258;
  undefined1 local_250 [8];
  undefined1 local_248 [24];
  undefined1 local_230 [8];
  undefined1 local_228 [24];
  undefined1 local_210 [8];
  undefined1 local_208 [24];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [8];
  FString local_1c8;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TSharedRef<SWidget,1> local_158;
  TSharedRef<SWidget,1> local_148;
  FPopulateMenuBuilderWithToolMenuEntry local_138;
  FToolMenuVisibilityChoice local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  UToolMenus::JoinMenuPaths((FName)local_1d0,this->MenuData->MenuName);
  pFVar21 = this->Block;
  pFVar20 = (FToolMenuEntry *)0x0;
  local_3e0 = (undefined1  [8])0x0;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar21->SubMenuData).ConstructMenu.NewMenuLegacy,&local_1b8);
  if (((*(int *)&(pFVar21->SubMenuData).ConstructMenu.NewMenuLegacy.field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(pFVar21->SubMenuData).ConstructMenu.NewMenuLegacy.field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar3 + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b8);
    pFVar21 = this->Block;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar21->SubMenuData).ConstructMenu.NewToolMenuWidget,&local_1a0);
    if (((*(int *)&(pFVar21->SubMenuData).ConstructMenu.NewToolMenuWidget.field_0x10 == 0) ||
        (plVar3 = *(longlong **)&(pFVar21->SubMenuData).ConstructMenu.NewToolMenuWidget.field_0x8,
        plVar3 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar3 + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1a0);
      pFVar21 = this->Block;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar21->SubMenuData).ConstructMenu,&local_170);
      if (((*(int *)&(pFVar21->SubMenuData).ConstructMenu.OnGetContent.field_0x10 == 0) ||
          (plVar3 = *(longlong **)&(pFVar21->SubMenuData).ConstructMenu.OnGetContent.field_0x8,
          plVar3 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar3 + 0x38))(), cVar9 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_170);
        if (this->BlockNameOverride == (FName)0x0) {
          bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                             ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                              &(this->Block->SubMenuData).ConstructMenu.NewToolMenu);
          if (!bVar10) {
            if (2 < (byte)LogToolMenus._0_1_) {
              ::FName::ToString(&this->MenuData->MenuName,&local_1c8);
              UE::Logging::Private::BasicLog<3>
                        (&`public:_void___cdecl_FPopulateMenuBuilderWithToolMenuEntry::AddSubMenuEntryToMenuBuilder(void)___ptr64'
                          ::__l22::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_142c49678;
          }
          pFVar21 = this->Block;
          pUVar16 = this->MenuData;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UToolMenu *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          local_380.ObjectIndex = 0;
          local_380.ObjectSerialNumber = 0;
          local_370 = pUVar16;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UToolMenu *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          FWeakObjectPtr::operator=(&local_380,(FObjectPtr)&local_370);
          pUVar11 = UToolMenus::Get();
          local_3c8.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_3c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3c0.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3c8,(FWriteAccessScope *)&local_290);
          local_278 = &local_3c0;
          puVar14 = UE::Core::Private::DelegateAllocate(0x7a8,&local_3c0);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry____6B_
            ;
            *(FWeakObjectPtr *)(puVar14 + 1) = local_380;
            FToolMenuEntry::FToolMenuEntry((FToolMenuEntry *)(puVar14 + 2),pFVar21);
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[0xf2] = uVar15;
            *puVar14 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUToolMenus____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry____6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UToolMenus *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            puVar14[0xf3] = 0;
            local_368 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UToolMenus *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 0xf3),(FObjectPtr)&local_368);
            puVar14[0xf4] = UToolMenus::PopulateSubMenuWithoutName;
          }
          if (local_290.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3c8,(FWriteAccessScope *)&local_2d8);
          iVar2 = local_3c0.DelegateSize;
          FVar8 = local_3c0.DelegateAllocator;
          local_3c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3c0.DelegateSize = 0;
          if (local_2d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e0,
                     (FWriteAccessScope *)&local_2c0);
          if (local_3d0 == 0) {
LAB_142c4922c:
            if ((ForElementType<TAlignedBytes<16,16>_>)local_3d8.Data !=
                (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free(local_3d8.Data);
            }
          }
          else if ((ForElementType<TAlignedBytes<16,16>_>)local_3d8.Data !=
                   (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            (*(code *)**(undefined8 **)local_3d8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_3d8,0,0,0x10);
            local_3d0 = 0;
            goto LAB_142c4922c;
          }
          local_3d8.Data = (FScriptContainerElement *)FVar8;
          local_3d0 = iVar2;
          if (local_2c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3c8,(FWriteAccessScope *)&local_2a8);
          if ((local_3c0.DelegateSize != 0) &&
             (local_3c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_3c0.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_3c0,0,0,0x10);
            local_3c0.DelegateSize = 0;
          }
          if (local_2a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
          }
          if (local_3c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_3c0.DelegateAllocator);
          }
          this_01 = &local_3c8;
        }
        else {
          if (((this->Block->SubMenuData).bAutoCollapse != false) &&
             (this->bAllowSubMenuCollapse != false)) {
            pUVar11 = UToolMenus::Get();
            pUVar16 = UToolMenus::GenerateSubMenu(pUVar11,this->MenuData,this->BlockNameOverride);
            if (pUVar16 != (UToolMenu *)0x0) {
              pFVar19 = (pUVar16->Sections).AllocatorInstance.Data;
              iVar2 = (pUVar16->Sections).ArrayNum;
              pFVar22 = pFVar19 + (longlong)iVar2 * 0x238;
              pFVar21 = pFVar20;
              while( true ) {
                if ((pUVar16->Sections).ArrayNum != iVar2) {
                  local_3e8[0] = 0;
                  `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_3e8);
                }
                if (pFVar19 == pFVar22) break;
                pFVar20 = (FToolMenuEntry *)
                          (ulonglong)(uint)((int)pFVar20 + *(int *)(pFVar19 + 0x20));
                if ((pFVar21 == (FToolMenuEntry *)0x0) && (0 < *(int *)(pFVar19 + 0x20))) {
                  pFVar21 = *(FToolMenuEntry **)(pFVar19 + 0x18);
                }
                pFVar19 = pFVar19 + 0x238;
              }
              if ((int)pFVar20 == 1) {
                FPopulateMenuBuilderWithToolMenuEntry
                          (&local_138,this->MenuBuilder,this->MenuData,this->Section,pFVar21,false);
                local_138.BlockNameOverride = this->Block->Name;
                Populate(&local_138);
                ~FPopulateMenuBuilderWithToolMenuEntry(&local_138);
                goto LAB_142c49941;
              }
            }
          }
          pFVar21 = this->Block;
          pUVar16 = this->MenuData;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UToolMenu *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          local_378.ObjectIndex = 0;
          local_378.ObjectSerialNumber = 0;
          local_360 = pUVar16;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UToolMenu *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          FWeakObjectPtr::operator=(&local_378,(FObjectPtr)&local_360);
          pUVar11 = UToolMenus::Get();
          local_3b0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_3a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3a8.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3b0,(FWriteAccessScope *)&local_270);
          local_258 = &local_3a8;
          puVar14 = UE::Core::Private::DelegateAllocate(0x7b0,&local_3a8);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &
                       ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry__VFName____6B_
            ;
            *(FWeakObjectPtr *)(puVar14 + 1) = local_378;
            FToolMenuEntry::FToolMenuEntry((FToolMenuEntry *)(puVar14 + 2),pFVar21);
            *(FName *)(puVar14 + 0xf2) = this->BlockNameOverride;
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[0xf3] = uVar15;
            *puVar14 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUToolMenus____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry__VFName____6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UToolMenus *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            puVar14[0xf4] = 0;
            local_358 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UToolMenus *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 0xf4),(FObjectPtr)&local_358);
            puVar14[0xf5] = UToolMenus::PopulateSubMenu;
          }
          if (local_270.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3b0,(FWriteAccessScope *)&local_350);
          iVar2 = local_3a8.DelegateSize;
          FVar8 = local_3a8.DelegateAllocator;
          local_3a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_3a8.DelegateSize = 0;
          if (local_350.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e0,
                     (FWriteAccessScope *)&local_338);
          if (local_3d0 == 0) {
LAB_142c495e9:
            if ((ForElementType<TAlignedBytes<16,16>_>)local_3d8.Data !=
                (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free(local_3d8.Data);
            }
          }
          else if ((ForElementType<TAlignedBytes<16,16>_>)local_3d8.Data !=
                   (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            (*(code *)**(undefined8 **)local_3d8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_3d8,0,0,0x10);
            local_3d0 = 0;
            goto LAB_142c495e9;
          }
          local_3d8.Data = (FScriptContainerElement *)FVar8;
          local_3d0 = iVar2;
          if (local_338.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_3b0,(FWriteAccessScope *)&local_320);
          if ((local_3a8.DelegateSize != 0) &&
             (local_3a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_3a8.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_3a8,0,0,0x10);
            local_3a8.DelegateSize = 0;
          }
          if (local_320.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
          }
          if (local_3a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_3a8.DelegateAllocator);
          }
          this_01 = &local_3b0;
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_01->AccessDetector);
        goto LAB_142c49678;
      }
      this_00 = &local_170;
    }
    else {
      this_00 = &local_1a0;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
    pUVar11 = UToolMenus::Get();
    UToolMenus::ConvertWidgetChoice
              (pUVar11,(TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_398,&(this->Block->SubMenuData).ConstructMenu,&this->MenuData->Context)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_398,&local_188);
    if (((local_388 == 0) || (local_390.Data == (FScriptContainerElement *)0x0)) ||
       (cVar9 = (**(code **)(*(longlong *)local_390.Data + 0x38))(), cVar9 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_188);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_188);
      pFVar4 = this->MenuBuilder;
      pFVar18 = TAttribute<FSlateIcon>::Get(&this->Block->Icon);
      pFVar12 = TAttribute<FText>::Get(&this->Block->ToolTip);
      pFVar13 = TAttribute<FText>::Get(&this->Block->Label);
      FMenuBuilder::AddWrapperSubMenu
                (pFVar4,pFVar13,pFVar12,
                 (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                 local_398,pFVar18);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_398,
               (FWriteAccessScope *)&local_2f0);
    if ((local_388 != 0) && (local_390.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_390.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_390,0,0,0x10);
      local_388 = 0;
    }
    if (local_2f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
    }
    if (local_390.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_398);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b8);
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_3e0,
               &(this->Block->SubMenuData).ConstructMenu.NewMenuLegacy);
LAB_142c49678:
    UE::ToolMenus::Private::CombineVisibility
              (&local_60,&this->Section->Visibility,&this->Block->Visibility);
    pFVar4 = this->MenuBuilder;
    if ((this->Widget).Object == (SWidget *)0x0) {
      if (this->bUIActionIsSet == false) {
        FToolMenuVisibilityChoice::ToVisibilityAttribute
                  (&local_60,(TAttribute<EVisibility> *)local_1f0);
        pFVar21 = this->Block;
        FVar5 = this->BlockNameOverride;
        FVar6 = pFVar21->TutorialHighlightName;
        bVar10 = pFVar21->bShouldCloseWindowAfterMenuSelection;
        pFVar18 = TAttribute<FSlateIcon>::Get(&pFVar21->Icon);
        pFVar21 = this->Block;
        FMenuBuilder::AddSubMenu
                  (pFVar4,&pFVar21->Label,&pFVar21->ToolTip,
                   (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_3e0,
                   (pFVar21->SubMenuData).bOpenSubMenuOnClick,pFVar18,bVar10,FVar5,FVar6,
                   (TAttribute<EVisibility> *)local_1f0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
        if ((void *)local_1e8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1e8._8_8_);
        }
        this_02 = (FMRSWRecursiveAccessDetector *)local_1e8;
      }
      else {
        pFVar21 = this->Block;
        FToolMenuVisibilityChoice::ToVisibilityAttribute
                  (&local_60,(TAttribute<EVisibility> *)local_210);
        bVar10 = this->Block->bShouldCloseWindowAfterMenuSelection;
        pFVar18 = TAttribute<FSlateIcon>::Get(&this->Block->Icon);
        pFVar20 = this->Block;
        FMenuBuilder::AddSubMenu
                  (pFVar4,&pFVar20->Label,&pFVar20->ToolTip,
                   (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_3e0,
                   &this->UIAction,this->BlockNameOverride,pFVar20->UserInterfaceActionType,
                   (pFVar20->SubMenuData).bOpenSubMenuOnClick,pFVar18,bVar10,
                   (TAttribute<EVisibility> *)local_210,&pFVar21->InputBindingLabel);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_208);
        if ((void *)local_208._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_208._8_8_);
        }
        this_02 = (FMRSWRecursiveAccessDetector *)local_208;
      }
    }
    else if (this->bUIActionIsSet == false) {
      FToolMenuVisibilityChoice::ToVisibilityAttribute
                (&local_60,(TAttribute<EVisibility> *)local_230);
      bVar10 = this->Block->bShouldCloseWindowAfterMenuSelection;
      bVar1 = (this->Block->SubMenuData).bOpenSubMenuOnClick;
      pTVar17 = TSharedPtr<SWidget,1>::ToSharedRef(&this->Widget,&local_148);
      FMenuBuilder::AddSubMenu
                (pFVar4,pTVar17,
                 (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_3e0,
                 bVar1,bVar10,(TAttribute<EVisibility> *)local_230);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_228);
      if ((void *)local_228._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_228._8_8_);
      }
      this_02 = (FMRSWRecursiveAccessDetector *)local_228;
    }
    else {
      FToolMenuVisibilityChoice::ToVisibilityAttribute
                (&local_60,(TAttribute<EVisibility> *)local_250);
      bVar10 = this->Block->bShouldCloseWindowAfterMenuSelection;
      pTVar17 = TSharedPtr<SWidget,1>::ToSharedRef(&this->Widget,&local_158);
      FMenuBuilder::AddSubMenu
                (pFVar4,&this->UIAction,pTVar17,
                 (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_3e0,
                 bVar10,(TAttribute<EVisibility> *)local_250);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
      if ((void *)local_248._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_248._8_8_);
      }
      this_02 = (FMRSWRecursiveAccessDetector *)local_248;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_02);
    if ((2 < local_60.Value.TypeIndex) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Value.TypeIndex])(&local_60);
  }
LAB_142c49941:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e0,
             (FWriteAccessScope *)&local_308);
  if ((local_3d0 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_3d8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3d8,0,0,0x10);
    local_3d0 = 0;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_3d8.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_3d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e0);
  return;
}

// Populate @ 142c655f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPopulateMenuBuilderWithToolMenuEntry::Populate(FPopulateMenuBuilderWithToolMenuEntry *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  EMultiBlockType EVar1;
  FToolMenuEntry *pFVar2;
  longlong *plVar3;
  UToolMenu *pUVar4;
  FMenuBuilder *pFVar5;
  FToolMenuEntry *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  FUIAction *pFVar10;
  FText *pFVar11;
  FSlateIcon *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FReadAccessScope *this_01;
  longlong *plVar14;
  undefined1 auStackY_608 [32];
  FText local_5b8;
  bool local_5a8;
  undefined1 local_5a0 [8];
  ForAnyElementType FStack_598;
  ulonglong local_590;
  SWidget *local_588;
  FSharedReferencer<1> local_580;
  SWidget *local_578;
  FSharedReferencer<1> local_570;
  undefined1 local_568 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_550;
  ForAnyElementType FStack_548;
  ulonglong local_540;
  undefined1 local_538 [8];
  SWidget *local_530;
  TReferenceControllerBase<1> *local_528;
  SWidget *local_520;
  TReferenceControllerBase<1> *local_518;
  undefined1 local_510 [32];
  ISlateStyle *local_4f0;
  FName local_4e8;
  TSharedRef<FMultiBox,1> local_4e0;
  FDestructionSentinel local_4d0;
  FDestructionSentinel local_4b8;
  undefined1 local_4a0 [8];
  undefined1 local_498 [24];
  undefined1 local_480 [8];
  undefined1 local_478 [24];
  FText local_460;
  TSharedRef<SWidget,1> local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FReadAccessScope local_410;
  FReadAccessScope local_3f8;
  FReadAccessScope local_3e0;
  FReadAccessScope local_3c8;
  undefined1 local_3b0 [24];
  undefined1 local_398 [24];
  undefined1 local_380 [24];
  undefined1 local_368 [32];
  FReadAccessScope local_348;
  FReadAccessScope local_330;
  undefined1 local_318 [208];
  undefined1 local_248 [8];
  void *pvStack_240;
  undefined8 local_238;
  undefined1 local_230 [48];
  undefined1 local_200 [24];
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1e8;
  EUIActionRepeatMode local_1d0;
  FName local_1a8;
  TAttribute<FText> local_198;
  TAttribute<FText> local_168;
  TAttribute<FText> local_138;
  EVisibility local_108;
  bool local_107;
  TDelegateBase<FNotThreadSafeDelegateMode> local_100;
  FName local_e8;
  FName FStack_e0;
  FName local_d8;
  FName FStack_d0;
  EUserInterfaceActionType local_85;
  FName local_6c;
  FToolMenuVisibilityChoice local_60;
  ulonglong local_38;
  
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_510 + 8);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_608;
  pFVar2 = this->Block;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->ConstructLegacy,
             &local_410);
  if (((*(int *)&(pFVar2->ConstructLegacy).field_0x10 != 0) &&
      (plVar14 = *(longlong **)&(pFVar2->ConstructLegacy).field_0x8, plVar14 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*plVar14 + 0x38))(), cVar8 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_410);
    if (this->bIsEditing != false) {
      return;
    }
    TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::Execute
              (&this->Block->ConstructLegacy,this->MenuBuilder,this->MenuData);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_410);
  UE::ToolMenus::Private::CombineVisibility
            (&local_60,&this->Section->Visibility,&this->Block->Visibility);
  pFVar10 = UToolMenus::ConvertUIAction((FUIAction *)local_3b0,this->Block,&this->MenuData->Context)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UIAction,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar10);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UIAction).CanExecuteAction,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->CanExecuteAction);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UIAction).GetActionCheckState,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->GetActionCheckState);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UIAction).IsActionVisibleDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->IsActionVisibleDelegate);
  (this->UIAction).RepeatMode = pFVar10->RepeatMode;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_368);
  if ((void *)local_368._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_368._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_368);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_380);
  if ((void *)local_380._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_380._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_380);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_398);
  if ((void *)local_398._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_398._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_398);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  if ((void *)local_3b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UIAction,&local_3f8);
  if (((*(int *)&(this->UIAction).ExecuteAction.field_0x10 == 0) ||
      (plVar14 = *(longlong **)&(this->UIAction).ExecuteAction.field_0x8, plVar14 == (longlong *)0x0
      )) || (cVar8 = (**(code **)(*plVar14 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->UIAction).CanExecuteAction,&local_3e0);
    if (((*(int *)&(this->UIAction).CanExecuteAction.field_0x10 != 0) &&
        (plVar14 = *(longlong **)&(this->UIAction).CanExecuteAction.field_0x8,
        plVar14 != (longlong *)0x0)) && (cVar8 = (**(code **)(*plVar14 + 0x38))(), cVar8 != '\0')) {
      this_01 = &local_3e0;
      goto LAB_142c657fb;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3e0);
    bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(this->UIAction).GetActionCheckState);
    if ((bVar9) ||
       (bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &(this->UIAction).IsActionVisibleDelegate), bVar9)) goto LAB_142c65800;
    bVar9 = false;
  }
  else {
    this_01 = &local_3f8;
LAB_142c657fb:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_01);
LAB_142c65800:
    bVar9 = true;
  }
  pFVar2 = this->Block;
  this->bUIActionIsSet = bVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->MakeCustomWidget,
             &local_3c8);
  plVar14 = (longlong *)0x0;
  if (((*(int *)&(pFVar2->MakeCustomWidget).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(pFVar2->MakeCustomWidget).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(*plVar3 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
    bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Block->MakeWidget);
    if (bVar9) {
      pFVar2 = this->Block;
      pUVar4 = this->MenuData;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->MakeWidget,
                 &local_330);
      if (*(int *)&(pFVar2->MakeWidget).field_0x10 != 0) {
        plVar14 = *(longlong **)&(pFVar2->MakeWidget).field_0x8;
      }
      (**(code **)(*plVar14 + 0x60))(plVar14,&local_520,&pUVar4->Context);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_330);
      local_578 = local_520;
      local_570.ReferenceController = local_518;
      if (local_518 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_518->SharedReferenceCount = (atomic<int>)((int)local_518->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&this->Widget != (TSharedPtr<SWidget,1> *)&local_578) {
        (this->Widget).Object = local_520;
        local_578 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Widget).SharedReferenceCount,&local_570);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_570.ReferenceController);
      local_4e0.SharedReferenceCount.ReferenceController = local_518;
      goto LAB_142c65a4d;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3c8);
    FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)this->MenuBuilder,&local_4e0);
    pFVar2 = this->Block;
    pUVar4 = this->MenuData;
    local_4f0 = (local_4e0.Object)->StyleSet;
    local_4e8 = (local_4e0.Object)->StyleName;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->MakeCustomWidget,
               &local_348);
    if (*(int *)&(pFVar2->MakeCustomWidget).field_0x10 != 0) {
      plVar14 = *(longlong **)&(pFVar2->MakeCustomWidget).field_0x8;
    }
    (**(code **)(*plVar14 + 0x60))(plVar14,&local_530,&pUVar4->Context,&local_4f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_348);
    local_588 = local_530;
    local_580.ReferenceController = local_528;
    if (local_528 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_528->SharedReferenceCount = (atomic<int>)((int)local_528->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->Widget != (TSharedPtr<SWidget,1> *)&local_588) {
      (this->Widget).Object = local_530;
      local_588 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Widget).SharedReferenceCount,&local_580);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_580.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_528);
LAB_142c65a4d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4e0.SharedReferenceCount.ReferenceController);
  }
  TAttribute<FText>::operator=(&this->LabelToDisplay,&this->Block->Label);
  if (this->bIsEditing != false) {
    if ((this->Block->Label).bIsSet != false) {
      pFVar11 = TAttribute<FText>::Get(&this->Block->Label);
      bVar9 = FText::IsEmpty(pFVar11);
      if (!bVar9) goto LAB_142c65b94;
    }
    pFVar11 = FText::FromName(&local_460,&this->BlockNameOverride);
    FText::FText(&local_5b8,pFVar11);
    local_5a8 = true;
    local_590 = 0;
    local_5a0 = (undefined1  [8])0x0;
    FStack_598.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(this->LabelToDisplay).Value,&local_5b8);
    (this->LabelToDisplay).bIsSet = local_5a8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelToDisplay).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a0,
               (FWriteAccessScope *)&local_4d0);
    if (((int)local_590 != 0) && (FStack_598.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_598.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_598,0,0,0x10);
      local_590 = local_590 & 0xffffffff00000000;
    }
    if (local_4d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d0.Accessor,&local_4d0);
    }
    if (FStack_598.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_598.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5a0);
    if (local_5b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5b8.TextData.Reference + 0x10))();
    }
    if (local_460.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
    }
  }
LAB_142c65b94:
  pFVar2 = this->Block;
  EVar1 = pFVar2->Type;
  if (EVar1 == MenuEntry) {
    if ((pFVar2->SubMenuData).bIsSubMenu == false) {
      AddStandardEntryToMenuBuilder(this);
    }
    else {
      AddSubMenuEntryToMenuBuilder(this);
    }
  }
  else if (EVar1 == Separator) {
    pFVar5 = this->MenuBuilder;
    FToolMenuVisibilityChoice::ToVisibilityAttribute(&local_60,(TAttribute<EVisibility> *)local_4a0)
    ;
    FMenuBuilder::AddSeparator(pFVar5,this->BlockNameOverride,(TAttribute<EVisibility> *)local_4a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
    if ((void *)local_498._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_498._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_498);
  }
  else if (EVar1 == Widget) {
    if (this->bIsEditing == false) {
      (pFVar2->WidgetData).StyleParams.bNoIndent = (pFVar2->WidgetData).bNoIndent;
      pFVar5 = this->MenuBuilder;
      FToolMenuVisibilityChoice::ToVisibilityAttribute
                (&local_60,(TAttribute<EVisibility> *)local_480);
      pFVar2 = this->Block;
      pFVar11 = TAttribute<FText>::Get(&pFVar2->ToolTip);
      local_568._0_8_ = (pFVar11->TextData).Reference;
      if ((ITextData *)local_568._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_568._0_8_ + 8))(local_568._0_8_,local_538);
      }
      local_568._8_4_ = pFVar11->Flags;
      local_540 = 0;
      local_568[0x10] = true;
      local_550.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_548.Data = (FScriptContainerElement *)0x0;
      bVar9 = (this->Block->WidgetData).bSearchable;
      FMenuEntryResizeParams::FMenuEntryResizeParams
                ((FMenuEntryResizeParams *)local_318,&(this->Block->WidgetData).ResizeParams);
      pFVar6 = this->Block;
      local_318[200] = true;
      local_238 = 0;
      local_248 = (undefined1  [8])0x0;
      pvStack_240 = (void *)0x0;
      pFVar11 = TAttribute<FText>::Get(&this->LabelToDisplay);
      pTVar13 = TSharedPtr<SWidget,1>::ToSharedRef(&this->Widget,&local_450);
      FMenuBuilder::AddWidget
                (pFVar5,pTVar13,pFVar11,&(pFVar6->WidgetData).StyleParams,
                 (TAttribute<FMenuEntryResizeParams> *)local_318,bVar9,
                 (TAttribute<FText> *)local_568,&pFVar2->Icon,(TAttribute<EVisibility> *)local_480);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_450.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
      if (pvStack_240 != (void *)0x0) {
        FMemory::Free(pvStack_240);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_248);
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_318);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_550,(FWriteAccessScope *)&local_4b8);
      if (((int)local_540 != 0) && (FStack_548.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_548.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_548,0,0,0x10);
        local_540 = local_540 & 0xffffffff00000000;
      }
      if (local_4b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
      }
      if (FStack_548.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_548.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_550.AccessDetector);
      if ((ITextData *)local_568._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_568._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
      if ((void *)local_478._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_478._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_478);
    }
    else {
      FMenuEntryParams::FMenuEntryParams((FMenuEntryParams *)local_230);
      TAttribute<FText>::operator=(&local_198,&this->LabelToDisplay);
      TAttribute<FText>::operator=(&local_168,&this->Block->ToolTip);
      pFVar12 = TAttribute<FSlateIcon>::Get(&this->Block->Icon);
      local_e8 = pFVar12->StyleSetName;
      FStack_e0 = pFVar12->StyleName;
      local_d8 = pFVar12->SmallStyleName;
      FStack_d0 = pFVar12->StatusOverlayStyleName;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_230,
                 &(this->UIAction).ExecuteAction);
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_230 + 0x18),
                 &(this->UIAction).CanExecuteAction);
      TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(local_200,&(this->UIAction).GetActionCheckState);
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&local_1e8,&(this->UIAction).IsActionVisibleDelegate);
      pFVar2 = this->Block;
      local_1d0 = (this->UIAction).RepeatMode;
      local_1a8 = this->BlockNameOverride;
      local_85 = pFVar2->UserInterfaceActionType;
      local_6c = pFVar2->TutorialHighlightName;
      TAttribute<FText>::operator=(&local_138,&pFVar2->InputBindingLabel);
      FToolMenuVisibilityChoice::ToVisibilityAttribute
                (&local_60,(TAttribute<EVisibility> *)local_510);
      local_108.Value.Value = local_510[0];
      local_107 = local_510[1];
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=(&local_100,this_00);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this_00);
      if ((void *)local_510._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_510._16_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)this->MenuBuilder,(FMenuEntryParams *)local_230);
      FMenuEntryParams::~FMenuEntryParams((FMenuEntryParams *)local_230);
    }
  }
  else if (2 < (byte)LogToolMenus._0_1_) {
    UEnum::GetValueAsString<enum_EMultiBlockType>(&local_420,EVar1);
    ::FName::ToString(&this->BlockNameOverride,&local_430);
    ::FName::ToString(&this->MenuData->MenuName,&local_440);
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FPopulateMenuBuilderWithToolMenuEntry::Populate(void)___ptr64'
                ::__l42::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
  }
  if ((2 < local_60.Value.TypeIndex) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_60.Value.TypeIndex])(&local_60);
  return;
}

