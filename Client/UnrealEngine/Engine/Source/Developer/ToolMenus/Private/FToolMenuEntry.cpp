// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 36

// StaticStruct @ 142c2ddd0

UScriptStruct * __cdecl FToolMenuEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuEntry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuEntry,(UObject *)pUVar1,L"ToolMenuEntry"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuEntry.OuterSingleton;
}

// FToolMenuEntry @ 142c38b90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuEntry::FToolMenuEntry(FToolMenuEntry *this,FToolMenuEntry *param_1)

{
  bool bVar1;
  UToolMenuEntryScript *pUVar2;
  FUICommandList *pFVar3;
  FName FVar4;
  EValueType EVar5;
  undefined7 uVar6;
  EToolMenuInsertFallback EVar7;
  undefined2 uVar8;
  
  this->Name = param_1->Name;
  EVar5 = (param_1->Owner).ValueType;
  uVar6 = *(undefined7 *)&(param_1->Owner).field_0x9;
  (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
  (this->Owner).ValueType = EVar5;
  *(undefined7 *)&(this->Owner).field_0x9 = uVar6;
  this->Type = param_1->Type;
  this->UserInterfaceActionType = param_1->UserInterfaceActionType;
  this->TutorialHighlightName = param_1->TutorialHighlightName;
  (this->InsertPosition).Name = (param_1->InsertPosition).Name;
  EVar7 = (param_1->InsertPosition).Fallback;
  uVar8 = *(undefined2 *)&(param_1->InsertPosition).field_0xa;
  (this->InsertPosition).Position = (param_1->InsertPosition).Position;
  (this->InsertPosition).Fallback = EVar7;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar8;
  this->bShouldCloseWindowAfterMenuSelection = param_1->bShouldCloseWindowAfterMenuSelection;
  pUVar2 = (param_1->ScriptObject).field0_0x0.DebugPtr;
  (this->ScriptObject).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UToolMenuEntryScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->StyleNameOverride = param_1->StyleNameOverride;
  (this->SubMenuData).bIsSubMenu = (param_1->SubMenuData).bIsSubMenu;
  (this->SubMenuData).bOpenSubMenuOnClick = (param_1->SubMenuData).bOpenSubMenuOnClick;
  (this->SubMenuData).bAutoCollapse = (param_1->SubMenuData).bAutoCollapse;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SubMenuData).ConstructMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->SubMenuData).ConstructMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SubMenuData).ConstructMenu.NewToolMenuWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->SubMenuData).ConstructMenu.NewToolMenuWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SubMenuData).ConstructMenu.NewToolMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->SubMenuData).ConstructMenu.NewToolMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SubMenuData).ConstructMenu.NewMenuLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->SubMenuData).ConstructMenu.NewMenuLegacy);
  (this->SubMenuData).Style.StyleSet.bIsSet = false;
  bVar1 = (param_1->SubMenuData).Style.StyleSet.bIsSet;
  (this->SubMenuData).Style.StyleSet.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->SubMenuData).Style.StyleSet.TypedValue = (param_1->SubMenuData).Style.StyleSet.TypedValue
    ;
  }
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.Number = 0;
  if ((param_1->SubMenuData).Style.StyleName.field0_0x0.TypedValue.ComparisonIndex.Value !=
      0xffffffff) {
    (this->SubMenuData).Style.StyleName.field0_0x0 =
         (param_1->SubMenuData).Style.StyleName.field0_0x0;
  }
  FText::FText((FText *)&this->ToolBarData,(FText *)&param_1->ToolBarData);
  (this->ToolBarData).LabelOverride.bIsSet = (param_1->ToolBarData).LabelOverride.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolBarData).LabelOverride.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).LabelOverride.Getter);
  (this->ToolBarData).StyleNameOverride = (param_1->ToolBarData).StyleNameOverride;
  (this->ToolBarData).BlockGroupName = (param_1->ToolBarData).BlockGroupName;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenuWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenuWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolBarData).ConstructLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolBarData).ConstructLegacy);
  (this->ToolBarData).OptionsDropdownData.Object = (param_1->ToolBarData).OptionsDropdownData.Object
  ;
  (this->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController =
       (param_1->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController;
  (param_1->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ToolBarData).OptionsDropdownData.Object = (FToolMenuEntryOptionsDropdownData *)0x0;
  (this->ToolBarData).bSimpleComboBox = (param_1->ToolBarData).bSimpleComboBox;
  (this->ToolBarData).bIsFocusable = (param_1->ToolBarData).bIsFocusable;
  (this->ToolBarData).bForceSmallIcons = (param_1->ToolBarData).bForceSmallIcons;
  (this->ToolBarData).PlacementOverride.Value = (param_1->ToolBarData).PlacementOverride.Value;
  (this->ToolBarData).PlacementOverride.bIsSet = (param_1->ToolBarData).PlacementOverride.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).PlacementOverride.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).PlacementOverride.Getter);
  FMenuEntryResizeParams::FMenuEntryResizeParams
            (&(this->ToolBarData).ResizeParams,&(param_1->ToolBarData).ResizeParams);
  (this->ToolBarData).ActionOverride.bIsSet = false;
  bVar1 = (param_1->ToolBarData).ActionOverride.bIsSet;
  (this->ToolBarData).ActionOverride.bIsSet = bVar1;
  if (bVar1 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolBarData).ActionOverride,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolBarData).ActionOverride);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->ToolBarData).ActionOverride.TypedValue.CanExecuteAction,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->ToolBarData).ActionOverride.TypedValue.CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->ToolBarData).ActionOverride.TypedValue.GetActionCheckState,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->ToolBarData).ActionOverride.TypedValue.GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->ToolBarData).ActionOverride.TypedValue.IsActionVisibleDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->ToolBarData).ActionOverride.TypedValue.IsActionVisibleDelegate);
  }
  (this->WidgetData).bNoIndent = (param_1->WidgetData).bNoIndent;
  (this->WidgetData).bSearchable = (param_1->WidgetData).bSearchable;
  (this->WidgetData).bNoPadding = (param_1->WidgetData).bNoPadding;
  FMenuEntryStyleParams::FMenuEntryStyleParams
            (&(this->WidgetData).StyleParams,&(param_1->WidgetData).StyleParams);
  FMenuEntryResizeParams::FMenuEntryResizeParams
            (&(this->WidgetData).ResizeParams,&(param_1->WidgetData).ResizeParams);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MakeWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->MakeWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MakeCustomWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->MakeCustomWidget);
  FText::FText(&(this->Label).Value,&(param_1->Label).Value);
  (this->Label).bIsSet = (param_1->Label).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter);
  FText::FText(&(this->ToolTip).Value,&(param_1->ToolTip).Value);
  (this->ToolTip).bIsSet = (param_1->ToolTip).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolTip).Getter);
  FVar4 = (param_1->Icon).Value.StyleName;
  (this->Icon).Value.StyleSetName = (param_1->Icon).Value.StyleSetName;
  (this->Icon).Value.StyleName = FVar4;
  FVar4 = (param_1->Icon).Value.StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_1->Icon).Value.SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar4;
  (this->Icon).bIsSet = (param_1->Icon).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Icon).Getter);
  FText::FText(&(this->InputBindingLabel).Value,&(param_1->InputBindingLabel).Value);
  (this->InputBindingLabel).bIsSet = (param_1->InputBindingLabel).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InputBindingLabel).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->InputBindingLabel).Getter);
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
            (&(this->Visibility).Value,&(param_1->Visibility).Value);
  (this->Action).Action.bIsSet = false;
  bVar1 = (param_1->Action).Action.bIsSet;
  (this->Action).Action.bIsSet = bVar1;
  if (bVar1 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Action,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Action);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->Action).Action.TypedValue.CanExecuteAction,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->Action).Action.TypedValue.CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->Action).Action.TypedValue.GetActionCheckState,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->Action).Action.TypedValue.GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->Action).Action.TypedValue.IsActionVisibleDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->Action).Action.TypedValue.IsActionVisibleDelegate);
    (this->Action).Action.TypedValue.RepeatMode = (param_1->Action).Action.TypedValue.RepeatMode;
  }
  (this->Action).ToolAction.bIsSet = false;
  bVar1 = (param_1->Action).ToolAction.bIsSet;
  (this->Action).ToolAction.bIsSet = bVar1;
  if (bVar1 != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Action).ToolAction,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Action).ToolAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->Action).ToolAction.TypedValue.CanExecuteAction,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->Action).ToolAction.TypedValue.CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->Action).ToolAction.TypedValue.GetActionCheckState,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->Action).ToolAction.TypedValue.GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(this->Action).ToolAction.TypedValue.IsActionVisibleDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(param_1->Action).ToolAction.TypedValue.IsActionVisibleDelegate);
  }
  (this->Action).DynamicToolAction.bIsSet = false;
  bVar1 = (param_1->Action).DynamicToolAction.bIsSet;
  (this->Action).DynamicToolAction.bIsSet = bVar1;
  if (bVar1 != false) {
    FToolDynamicUIAction::FToolDynamicUIAction
              (&(this->Action).DynamicToolAction.TypedValue,
               &(param_1->Action).DynamicToolAction.TypedValue);
  }
  (this->StringExecuteAction).Type = (param_1->StringExecuteAction).Type;
  (this->StringExecuteAction).CustomType = (param_1->StringExecuteAction).CustomType;
  (this->StringExecuteAction).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringExecuteAction).String.Data.AllocatorInstance.Data =
       (param_1->StringExecuteAction).String.Data.AllocatorInstance.Data;
  (param_1->StringExecuteAction).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->StringExecuteAction).String.Data.ArrayNum =
       (param_1->StringExecuteAction).String.Data.ArrayNum;
  (this->StringExecuteAction).String.Data.ArrayMax =
       (param_1->StringExecuteAction).String.Data.ArrayMax;
  (param_1->StringExecuteAction).String.Data.ArrayNum = 0;
  (param_1->StringExecuteAction).String.Data.ArrayMax = 0;
  (this->Command).Object = (param_1->Command).Object;
  (this->Command).SharedReferenceCount.ReferenceController =
       (param_1->Command).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->CommandList).Object;
  (param_1->Command).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Command).Object = (FUICommandInfo *)0x0;
  (this->CommandList).Object = pFVar3;
  (this->CommandList).SharedReferenceCount.ReferenceController =
       (param_1->CommandList).SharedReferenceCount.ReferenceController;
  (param_1->CommandList).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->CommandList).Object = (FUICommandList *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Construct,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Construct);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConstructLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ConstructLegacy);
  this->bAddedDuringRegister = param_1->bAddedDuringRegister;
  this->bCommandIsKeybindOnly = param_1->bCommandIsKeybindOnly;
  (this->ShowInToolbarTopLevel).Value = (param_1->ShowInToolbarTopLevel).Value;
  (this->ShowInToolbarTopLevel).bIsSet = (param_1->ShowInToolbarTopLevel).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowInToolbarTopLevel).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ShowInToolbarTopLevel).Getter);
  return this;
}

// FToolMenuEntry @ 142c391d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuEntry::FToolMenuEntry(FToolMenuEntry *this,FToolMenuEntry *param_1)

{
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_03;
  bool bVar2;
  UToolMenuEntryScript *pUVar3;
  ITextData *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  EValueType EVar7;
  undefined7 uVar8;
  EToolMenuInsertFallback EVar9;
  undefined2 uVar10;
  undefined1 local_res8 [8];
  
  this->Name = param_1->Name;
  EVar7 = (param_1->Owner).ValueType;
  uVar8 = *(undefined7 *)&(param_1->Owner).field_0x9;
  (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
  (this->Owner).ValueType = EVar7;
  *(undefined7 *)&(this->Owner).field_0x9 = uVar8;
  this->Type = param_1->Type;
  this->UserInterfaceActionType = param_1->UserInterfaceActionType;
  this->TutorialHighlightName = param_1->TutorialHighlightName;
  (this->InsertPosition).Name = (param_1->InsertPosition).Name;
  EVar9 = (param_1->InsertPosition).Fallback;
  uVar10 = *(undefined2 *)&(param_1->InsertPosition).field_0xa;
  (this->InsertPosition).Position = (param_1->InsertPosition).Position;
  (this->InsertPosition).Fallback = EVar9;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar10;
  this->bShouldCloseWindowAfterMenuSelection = param_1->bShouldCloseWindowAfterMenuSelection;
  pUVar3 = (param_1->ScriptObject).field0_0x0.DebugPtr;
  (this->ScriptObject).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UToolMenuEntryScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->StyleNameOverride = param_1->StyleNameOverride;
  (this->SubMenuData).bIsSubMenu = (param_1->SubMenuData).bIsSubMenu;
  (this->SubMenuData).bOpenSubMenuOnClick = (param_1->SubMenuData).bOpenSubMenuOnClick;
  (this->SubMenuData).bAutoCollapse = (param_1->SubMenuData).bAutoCollapse;
  FNewToolMenuChoice::FNewToolMenuChoice
            (&(this->SubMenuData).ConstructMenu,&(param_1->SubMenuData).ConstructMenu);
  (this->SubMenuData).Style.StyleSet.bIsSet = false;
  bVar2 = (param_1->SubMenuData).Style.StyleSet.bIsSet;
  (this->SubMenuData).Style.StyleSet.bIsSet = bVar2;
  if (bVar2 != false) {
    (this->SubMenuData).Style.StyleSet.TypedValue = (param_1->SubMenuData).Style.StyleSet.TypedValue
    ;
  }
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.Number = 0;
  if ((param_1->SubMenuData).Style.StyleName.field0_0x0.TypedValue.ComparisonIndex.Value !=
      0xffffffff) {
    (this->SubMenuData).Style.StyleName.field0_0x0 =
         (param_1->SubMenuData).Style.StyleName.field0_0x0;
  }
  (this->ToolBarData).LabelOverride.Value.TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->ToolBarData).LabelOverride.Value.TextData.Reference;
  (this->ToolBarData).LabelOverride.Value.TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  pTVar1 = &(this->ToolBarData).LabelOverride.Getter;
  (this->ToolBarData).LabelOverride.Value.Flags = (param_1->ToolBarData).LabelOverride.Value.Flags;
  (this->ToolBarData).LabelOverride.bIsSet = (param_1->ToolBarData).LabelOverride.bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolBarData).LabelOverride.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolBarData).LabelOverride.Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolBarData).LabelOverride.Getter);
  (this->ToolBarData).StyleNameOverride = (param_1->ToolBarData).StyleNameOverride;
  (this->ToolBarData).BlockGroupName = (param_1->ToolBarData).BlockGroupName;
  FNewToolMenuChoice::FNewToolMenuChoice
            (&(this->ToolBarData).ComboButtonContextMenuGenerator,
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator);
  this_00 = &(this->ToolBarData).ConstructLegacy;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ToolBarData).ConstructLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->ToolBarData).ConstructLegacy.field_0x10 = 0;
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->ToolBarData).ConstructLegacy);
  (this->ToolBarData).OptionsDropdownData.Object = (param_1->ToolBarData).OptionsDropdownData.Object
  ;
  pTVar5 = (param_1->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController;
  (this->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_01 = &(this->ToolBarData).PlacementOverride.Getter;
  (this->ToolBarData).bSimpleComboBox = (param_1->ToolBarData).bSimpleComboBox;
  (this->ToolBarData).bIsFocusable = (param_1->ToolBarData).bIsFocusable;
  (this->ToolBarData).bForceSmallIcons = (param_1->ToolBarData).bForceSmallIcons;
  (this->ToolBarData).PlacementOverride.Value = (param_1->ToolBarData).PlacementOverride.Value;
  (this->ToolBarData).PlacementOverride.bIsSet = (param_1->ToolBarData).PlacementOverride.bIsSet;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->ToolBarData).PlacementOverride.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolBarData).PlacementOverride.Getter.field_0x10 = 0;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_01,&(param_1->ToolBarData).PlacementOverride.Getter);
  FMenuEntryResizeParams::FMenuEntryResizeParams
            (&(this->ToolBarData).ResizeParams,&(param_1->ToolBarData).ResizeParams);
  (this->ToolBarData).ActionOverride.bIsSet = false;
  bVar2 = (param_1->ToolBarData).ActionOverride.bIsSet;
  (this->ToolBarData).ActionOverride.bIsSet = bVar2;
  if (bVar2 != false) {
    TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               &(this->ToolBarData).ActionOverride,
               (TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               &(param_1->ToolBarData).ActionOverride);
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (&(this->ToolBarData).ActionOverride.TypedValue.CanExecuteAction,
               &(param_1->ToolBarData).ActionOverride.TypedValue.CanExecuteAction);
    TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (&(this->ToolBarData).ActionOverride.TypedValue.GetActionCheckState,
               &(param_1->ToolBarData).ActionOverride.TypedValue.GetActionCheckState);
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (&(this->ToolBarData).ActionOverride.TypedValue.IsActionVisibleDelegate,
               &(param_1->ToolBarData).ActionOverride.TypedValue.IsActionVisibleDelegate);
  }
  (this->WidgetData).bNoIndent = (param_1->WidgetData).bNoIndent;
  (this->WidgetData).bSearchable = (param_1->WidgetData).bSearchable;
  (this->WidgetData).bNoPadding = (param_1->WidgetData).bNoPadding;
  FMenuEntryStyleParams::FMenuEntryStyleParams
            (&(this->WidgetData).StyleParams,&(param_1->WidgetData).StyleParams);
  FMenuEntryResizeParams::FMenuEntryResizeParams
            (&(this->WidgetData).ResizeParams,&(param_1->WidgetData).ResizeParams);
  *(undefined8 *)&this->MakeWidget = 0;
  *(undefined8 *)&(this->MakeWidget).field_0x8 = 0;
  *(undefined4 *)&(this->MakeWidget).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MakeWidget,&param_1->MakeWidget);
  *(undefined8 *)&this->MakeCustomWidget = 0;
  *(undefined8 *)&(this->MakeCustomWidget).field_0x8 = 0;
  *(undefined4 *)&(this->MakeCustomWidget).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->MakeCustomWidget,&param_1->MakeCustomWidget);
  (this->Label).Value.TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->Label).Value.TextData.Reference;
  (this->Label).Value.TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  pTVar1 = &(this->Label).Getter;
  (this->Label).Value.Flags = (param_1->Label).Value.Flags;
  (this->Label).bIsSet = (param_1->Label).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Label).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Label).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->Label).Getter);
  (this->ToolTip).Value.TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->ToolTip).Value.TextData.Reference;
  (this->ToolTip).Value.TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  pTVar1 = &(this->ToolTip).Getter;
  (this->ToolTip).Value.Flags = (param_1->ToolTip).Value.Flags;
  (this->ToolTip).bIsSet = (param_1->ToolTip).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTip).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolTip).Getter);
  FVar6 = (param_1->Icon).Value.StyleName;
  this_02 = &(this->Icon).Getter;
  (this->Icon).Value.StyleSetName = (param_1->Icon).Value.StyleSetName;
  (this->Icon).Value.StyleName = FVar6;
  FVar6 = (param_1->Icon).Value.StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_1->Icon).Value.SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar6;
  (this->Icon).bIsSet = (param_1->Icon).bIsSet;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->Icon).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Icon).Getter.field_0x10 = 0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_02,&(param_1->Icon).Getter);
  (this->InputBindingLabel).Value.TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->InputBindingLabel).Value.TextData.Reference;
  (this->InputBindingLabel).Value.TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  pTVar1 = &(this->InputBindingLabel).Getter;
  (this->InputBindingLabel).Value.Flags = (param_1->InputBindingLabel).Value.Flags;
  (this->InputBindingLabel).bIsSet = (param_1->InputBindingLabel).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->InputBindingLabel).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->InputBindingLabel).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->InputBindingLabel).Getter);
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
            (&(this->Visibility).Value,&(param_1->Visibility).Value);
  (this->Action).Action.bIsSet = false;
  bVar2 = (param_1->Action).Action.bIsSet;
  (this->Action).Action.bIsSet = bVar2;
  if (bVar2 != false) {
    FUIAction::FUIAction((FUIAction *)&this->Action,(FUIAction *)&param_1->Action);
  }
  (this->Action).ToolAction.bIsSet = false;
  bVar2 = (param_1->Action).ToolAction.bIsSet;
  (this->Action).ToolAction.bIsSet = bVar2;
  if (bVar2 != false) {
    TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               &(this->Action).ToolAction,
               (TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               &(param_1->Action).ToolAction);
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (&(this->Action).ToolAction.TypedValue.CanExecuteAction,
               &(param_1->Action).ToolAction.TypedValue.CanExecuteAction);
    TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (&(this->Action).ToolAction.TypedValue.GetActionCheckState,
               &(param_1->Action).ToolAction.TypedValue.GetActionCheckState);
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (&(this->Action).ToolAction.TypedValue.IsActionVisibleDelegate,
               &(param_1->Action).ToolAction.TypedValue.IsActionVisibleDelegate);
  }
  (this->Action).DynamicToolAction.bIsSet = false;
  bVar2 = (param_1->Action).DynamicToolAction.bIsSet;
  (this->Action).DynamicToolAction.bIsSet = bVar2;
  if (bVar2 != false) {
    FToolDynamicUIAction::FToolDynamicUIAction
              (&(this->Action).DynamicToolAction.TypedValue,
               &(param_1->Action).DynamicToolAction.TypedValue);
  }
  (this->StringExecuteAction).Type = (param_1->StringExecuteAction).Type;
  (this->StringExecuteAction).CustomType = (param_1->StringExecuteAction).CustomType;
  ::FString::FString(&(this->StringExecuteAction).String,&(param_1->StringExecuteAction).String);
  (this->Command).Object = (param_1->Command).Object;
  pTVar5 = (param_1->Command).SharedReferenceCount.ReferenceController;
  (this->Command).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CommandList).Object = (param_1->CommandList).Object;
  pTVar5 = (param_1->CommandList).SharedReferenceCount.ReferenceController;
  (this->CommandList).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->Construct = 0;
  *(undefined8 *)&(this->Construct).field_0x8 = 0;
  *(undefined4 *)&(this->Construct).field_0x10 = 0;
  TDelegate<void___cdecl(FToolMenuSection_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Construct,&param_1->Construct);
  *(undefined8 *)&this->ConstructLegacy = 0;
  *(undefined8 *)&(this->ConstructLegacy).field_0x8 = 0;
  *(undefined4 *)&(this->ConstructLegacy).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->ConstructLegacy,&param_1->ConstructLegacy);
  this_03 = &(this->ShowInToolbarTopLevel).Getter;
  this->bAddedDuringRegister = param_1->bAddedDuringRegister;
  this->bCommandIsKeybindOnly = param_1->bCommandIsKeybindOnly;
  (this->ShowInToolbarTopLevel).Value = (param_1->ShowInToolbarTopLevel).Value;
  (this->ShowInToolbarTopLevel).bIsSet = (param_1->ShowInToolbarTopLevel).bIsSet;
  *(undefined8 *)this_03 = 0;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ShowInToolbarTopLevel).Getter.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_03,&(param_1->ShowInToolbarTopLevel).Getter);
  return this;
}

// FToolMenuEntry @ 142c39820

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuEntry::FToolMenuEntry
          (FToolMenuEntry *this,FToolMenuOwner *param_1,FName param_2,EMultiBlockType param_3)

{
  FToolMenuOwner_u_0 FVar1;
  EValueType EVar2;
  undefined7 uVar3;
  
  FVar1 = param_1->field0_0x0;
  EVar2 = param_1->ValueType;
  uVar3 = *(undefined7 *)&param_1->field_0x9;
  this->Name = param_2;
  this->Type = param_3;
  (this->Owner).field0_0x0 = FVar1;
  (this->Owner).ValueType = EVar2;
  *(undefined7 *)&(this->Owner).field_0x9 = uVar3;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  (this->InsertPosition).Name.ComparisonIndex = 0;
  (this->InsertPosition).Name.Number = 0;
  (this->InsertPosition).Position = Default;
  (this->InsertPosition).Fallback = Log|Insert;
  (this->ScriptObject).field0_0x0.DebugPtr = (UToolMenuEntryScript *)0x0;
  this->UserInterfaceActionType = Button;
  this->bShouldCloseWindowAfterMenuSelection = true;
  (this->StyleNameOverride).ComparisonIndex = 0;
  (this->StyleNameOverride).Number = 0;
  (this->SubMenuData).bIsSubMenu = false;
  (this->SubMenuData).bOpenSubMenuOnClick = false;
  (this->SubMenuData).bAutoCollapse = false;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.OnGetContent = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.OnGetContent.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.OnGetContent.field_0x10 = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenuWidget = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenuWidget.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.NewToolMenuWidget.field_0x10 = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenu = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenu.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.NewToolMenu.field_0x10 = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewMenuLegacy = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewMenuLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.NewMenuLegacy.field_0x10 = 0;
  (this->SubMenuData).Style.StyleSet.bIsSet = false;
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.Number = 0;
  FToolMenuEntryToolBarData::FToolMenuEntryToolBarData(&this->ToolBarData);
  FToolMenuEntryWidgetData::FToolMenuEntryWidgetData(&this->WidgetData);
  *(undefined8 *)&this->MakeWidget = 0;
  *(undefined8 *)&(this->MakeWidget).field_0x8 = 0;
  *(undefined4 *)&(this->MakeWidget).field_0x10 = 0;
  *(undefined8 *)&this->MakeCustomWidget = 0;
  *(undefined8 *)&(this->MakeCustomWidget).field_0x8 = 0;
  *(undefined4 *)&(this->MakeCustomWidget).field_0x10 = 0;
  FText::FText(&(this->Label).Value);
  (this->Label).bIsSet = false;
  *(undefined8 *)&(this->Label).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Label).Getter = 0;
  *(undefined8 *)&(this->Label).Getter.field_0x8 = 0;
  FText::FText(&(this->ToolTip).Value);
  (this->ToolTip).bIsSet = false;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ToolTip).Getter = 0;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x8 = 0;
  FSlateIcon::FSlateIcon(&(this->Icon).Value);
  (this->Icon).bIsSet = false;
  *(undefined8 *)&(this->Icon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Icon).Getter = 0;
  *(undefined8 *)&(this->Icon).Getter.field_0x8 = 0;
  FText::FText(&(this->InputBindingLabel).Value);
  (this->InputBindingLabel).bIsSet = false;
  *(undefined8 *)&(this->InputBindingLabel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingLabel).Getter = 0;
  *(undefined8 *)&(this->InputBindingLabel).Getter.field_0x8 = 0;
  *(undefined2 *)&(this->Visibility).Value._padding_ = 0x19;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value.TypeIndex = '\0';
  (this->Action).Action.bIsSet = false;
  (this->Action).ToolAction.bIsSet = false;
  (this->Action).DynamicToolAction.bIsSet = false;
  (this->StringExecuteAction).Type = Command;
  (this->StringExecuteAction).CustomType.ComparisonIndex = 0;
  (this->StringExecuteAction).CustomType.Number = 0;
  (this->StringExecuteAction).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringExecuteAction).String.Data.ArrayNum = 0;
  (this->StringExecuteAction).String.Data.ArrayMax = 0;
  (this->Command).Object = (FUICommandInfo *)0x0;
  (this->Command).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CommandList).Object = (FUICommandList *)0x0;
  (this->CommandList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Construct = 0;
  *(undefined8 *)&(this->Construct).field_0x8 = 0;
  *(undefined4 *)&(this->Construct).field_0x10 = 0;
  *(undefined8 *)&this->ConstructLegacy = 0;
  *(undefined8 *)&(this->ConstructLegacy).field_0x8 = 0;
  *(undefined4 *)&(this->ConstructLegacy).field_0x10 = 0;
  this->bAddedDuringRegister = false;
  this->bCommandIsKeybindOnly = false;
  (this->ShowInToolbarTopLevel).Value = false;
  (this->ShowInToolbarTopLevel).bIsSet = true;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter = 0;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter.field_0x8 = 0;
  return this;
}

// FToolMenuEntry @ 142c39a80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuEntry::FToolMenuEntry(FToolMenuEntry *this)

{
  this->Type = None;
  this->UserInterfaceActionType = Button;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Owner).field0_0x0.ValueInt64 = 0;
  (this->Owner).ValueType = None;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  (this->InsertPosition).Name.ComparisonIndex = 0;
  (this->InsertPosition).Name.Number = 0;
  (this->ScriptObject).field0_0x0.DebugPtr = (UToolMenuEntryScript *)0x0;
  (this->InsertPosition).Position = Default;
  (this->InsertPosition).Fallback = Log|Insert;
  this->bShouldCloseWindowAfterMenuSelection = true;
  (this->StyleNameOverride).ComparisonIndex = 0;
  (this->StyleNameOverride).Number = 0;
  (this->SubMenuData).bIsSubMenu = false;
  (this->SubMenuData).bOpenSubMenuOnClick = false;
  (this->SubMenuData).bAutoCollapse = false;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.OnGetContent = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.OnGetContent.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.OnGetContent.field_0x10 = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenuWidget = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenuWidget.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.NewToolMenuWidget.field_0x10 = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenu = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewToolMenu.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.NewToolMenu.field_0x10 = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewMenuLegacy = 0;
  *(undefined8 *)&(this->SubMenuData).ConstructMenu.NewMenuLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->SubMenuData).ConstructMenu.NewMenuLegacy.field_0x10 = 0;
  (this->SubMenuData).Style.StyleSet.bIsSet = false;
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.Number = 0;
  FToolMenuEntryToolBarData::FToolMenuEntryToolBarData(&this->ToolBarData);
  FToolMenuEntryWidgetData::FToolMenuEntryWidgetData(&this->WidgetData);
  *(undefined8 *)&this->MakeWidget = 0;
  *(undefined8 *)&(this->MakeWidget).field_0x8 = 0;
  *(undefined4 *)&(this->MakeWidget).field_0x10 = 0;
  *(undefined8 *)&this->MakeCustomWidget = 0;
  *(undefined8 *)&(this->MakeCustomWidget).field_0x8 = 0;
  *(undefined4 *)&(this->MakeCustomWidget).field_0x10 = 0;
  FText::FText(&(this->Label).Value);
  (this->Label).bIsSet = false;
  *(undefined8 *)&(this->Label).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Label).Getter = 0;
  *(undefined8 *)&(this->Label).Getter.field_0x8 = 0;
  FText::FText(&(this->ToolTip).Value);
  (this->ToolTip).bIsSet = false;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ToolTip).Getter = 0;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x8 = 0;
  FSlateIcon::FSlateIcon(&(this->Icon).Value);
  (this->Icon).bIsSet = false;
  *(undefined8 *)&(this->Icon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Icon).Getter = 0;
  *(undefined8 *)&(this->Icon).Getter.field_0x8 = 0;
  FText::FText(&(this->InputBindingLabel).Value);
  (this->InputBindingLabel).bIsSet = false;
  *(undefined8 *)&(this->InputBindingLabel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->InputBindingLabel).Getter = 0;
  *(undefined8 *)&(this->InputBindingLabel).Getter.field_0x8 = 0;
  *(undefined2 *)&(this->Visibility).Value._padding_ = 0x19;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value.TypeIndex = '\0';
  (this->Action).Action.bIsSet = false;
  (this->Action).ToolAction.bIsSet = false;
  (this->Action).DynamicToolAction.bIsSet = false;
  (this->StringExecuteAction).Type = Command;
  (this->StringExecuteAction).CustomType.ComparisonIndex = 0;
  (this->StringExecuteAction).CustomType.Number = 0;
  (this->StringExecuteAction).String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringExecuteAction).String.Data.ArrayNum = 0;
  (this->StringExecuteAction).String.Data.ArrayMax = 0;
  (this->Command).Object = (FUICommandInfo *)0x0;
  (this->Command).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CommandList).Object = (FUICommandList *)0x0;
  (this->CommandList).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Construct = 0;
  *(undefined8 *)&(this->Construct).field_0x8 = 0;
  *(undefined4 *)&(this->Construct).field_0x10 = 0;
  *(undefined8 *)&this->ConstructLegacy = 0;
  *(undefined8 *)&(this->ConstructLegacy).field_0x8 = 0;
  *(undefined4 *)&(this->ConstructLegacy).field_0x10 = 0;
  this->bAddedDuringRegister = false;
  this->bCommandIsKeybindOnly = false;
  (this->ShowInToolbarTopLevel).Value = false;
  (this->ShowInToolbarTopLevel).bIsSet = true;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter = 0;
  *(undefined8 *)&(this->ShowInToolbarTopLevel).Getter.field_0x8 = 0;
  return this;
}

// ~FToolMenuEntry @ 142c3c210

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolMenuEntry::~FToolMenuEntry(FToolMenuEntry *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowInToolbarTopLevel).Getter);
  pvVar1 = *(void **)&(this->ShowInToolbarTopLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ShowInToolbarTopLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConstructLegacy);
  pvVar1 = *(void **)&(this->ConstructLegacy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConstructLegacy);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Construct);
  pvVar1 = *(void **)&(this->Construct).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Construct);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Command).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->StringExecuteAction).String.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FToolUIActionChoice::~FToolUIActionChoice(&this->Action);
  uVar6 = (ulonglong)(this->Visibility).Value.TypeIndex;
  if (2 < uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(&this->Visibility);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InputBindingLabel).Getter);
  pvVar1 = *(void **)&(this->InputBindingLabel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InputBindingLabel).Getter);
  pIVar3 = (this->InputBindingLabel).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter);
  pvVar1 = *(void **)&(this->Icon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Icon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter);
  pvVar1 = *(void **)&(this->ToolTip).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTip).Getter);
  pIVar3 = (this->ToolTip).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Label).Getter);
  pvVar1 = *(void **)&(this->Label).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Label).Getter);
  pIVar3 = (this->Label).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MakeCustomWidget);
  pvVar1 = *(void **)&(this->MakeCustomWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MakeCustomWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MakeWidget);
  pvVar1 = *(void **)&(this->MakeWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MakeWidget);
  FMenuEntryResizeParams::~FMenuEntryResizeParams(&(this->WidgetData).ResizeParams);
  FMenuEntryStyleParams::~FMenuEntryStyleParams(&(this->WidgetData).StyleParams);
  FToolMenuEntryToolBarData::~FToolMenuEntryToolBarData(&this->ToolBarData);
  FNewToolMenuChoice::~FNewToolMenuChoice(&(this->SubMenuData).ConstructMenu);
  return;
}

// operator= @ 142c3de80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuEntry::operator=(FToolMenuEntry *this,FToolMenuEntry *param_1)

{
  TOptional<FName> *pTVar1;
  FToolMenuEntryStyle *pFVar2;
  FToolMenuEntryStyle *pFVar3;
  TSharedPtr<FToolMenuEntryOptionsDropdownData,1> *pTVar4;
  TSharedPtr<FToolMenuEntryOptionsDropdownData,1> *pTVar5;
  FString *pFVar6;
  FString *pFVar7;
  TSharedPtr<FUICommandInfo_const_,1> *pTVar8;
  TSharedPtr<FUICommandList_const_,1> *pTVar9;
  UToolMenuEntryScript *pUVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  EValueType EVar14;
  undefined7 uVar15;
  EToolMenuInsertFallback EVar16;
  undefined2 uVar17;
  bool bVar18;
  FToolMenuEntry *pFVar19;
  TOptional<FName> *pTVar20;
  
  this->Name = param_1->Name;
  EVar14 = (param_1->Owner).ValueType;
  uVar15 = *(undefined7 *)&(param_1->Owner).field_0x9;
  (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
  (this->Owner).ValueType = EVar14;
  *(undefined7 *)&(this->Owner).field_0x9 = uVar15;
  this->Type = param_1->Type;
  this->UserInterfaceActionType = param_1->UserInterfaceActionType;
  this->TutorialHighlightName = param_1->TutorialHighlightName;
  (this->InsertPosition).Name = (param_1->InsertPosition).Name;
  EVar16 = (param_1->InsertPosition).Fallback;
  uVar17 = *(undefined2 *)&(param_1->InsertPosition).field_0xa;
  (this->InsertPosition).Position = (param_1->InsertPosition).Position;
  (this->InsertPosition).Fallback = EVar16;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar17;
  this->bShouldCloseWindowAfterMenuSelection = param_1->bShouldCloseWindowAfterMenuSelection;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 = (param_1->ScriptObject).field0_0x0.DebugPtr, pUVar10 != (UToolMenuEntryScript *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->ScriptObject).field0_0x0 = (param_1->ScriptObject).field0_0x0;
  this->StyleNameOverride = param_1->StyleNameOverride;
  (this->SubMenuData).bIsSubMenu = (param_1->SubMenuData).bIsSubMenu;
  (this->SubMenuData).bOpenSubMenuOnClick = (param_1->SubMenuData).bOpenSubMenuOnClick;
  (this->SubMenuData).bAutoCollapse = (param_1->SubMenuData).bAutoCollapse;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SubMenuData).ConstructMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->SubMenuData).ConstructMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SubMenuData).ConstructMenu.NewToolMenuWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->SubMenuData).ConstructMenu.NewToolMenuWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SubMenuData).ConstructMenu.NewToolMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->SubMenuData).ConstructMenu.NewToolMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->SubMenuData).ConstructMenu.NewMenuLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->SubMenuData).ConstructMenu.NewMenuLegacy);
  pFVar2 = &(param_1->SubMenuData).Style;
  pFVar3 = &(this->SubMenuData).Style;
  if (pFVar2 != pFVar3) {
    if ((param_1->SubMenuData).Style.StyleSet.bIsSet == false) {
      if ((this->SubMenuData).Style.StyleSet.bIsSet != false) {
        (this->SubMenuData).Style.StyleSet.bIsSet = false;
      }
    }
    else {
      (pFVar3->StyleSet).TypedValue = (pFVar2->StyleSet).TypedValue;
      (this->SubMenuData).Style.StyleSet.bIsSet = true;
    }
  }
  pTVar1 = &(param_1->SubMenuData).Style.StyleName;
  pTVar20 = &(this->SubMenuData).Style.StyleName;
  if (pTVar1 != pTVar20) {
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar20->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar20->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar11 = (pTVar1->field0_0x0).TypedValue;
      (pTVar20->field0_0x0).TypedValue = FVar11;
      if (FVar11.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar18) {
          pcVar13 = (code *)swi(3);
          pFVar19 = (FToolMenuEntry *)(*pcVar13)();
          return pFVar19;
        }
      }
    }
  }
  FText::operator=((FText *)&this->ToolBarData,(FText *)&param_1->ToolBarData);
  (this->ToolBarData).LabelOverride.bIsSet = (param_1->ToolBarData).LabelOverride.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolBarData).LabelOverride.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).LabelOverride.Getter);
  (this->ToolBarData).StyleNameOverride = (param_1->ToolBarData).StyleNameOverride;
  (this->ToolBarData).BlockGroupName = (param_1->ToolBarData).BlockGroupName;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenuWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenuWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolBarData).ConstructLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolBarData).ConstructLegacy);
  pTVar4 = &(param_1->ToolBarData).OptionsDropdownData;
  pTVar5 = &(this->ToolBarData).OptionsDropdownData;
  if (pTVar5 != pTVar4) {
    pTVar5->Object = pTVar4->Object;
    pTVar4->Object = (FToolMenuEntryOptionsDropdownData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ToolBarData).OptionsDropdownData.SharedReferenceCount,
               &(param_1->ToolBarData).OptionsDropdownData.SharedReferenceCount);
  }
  (this->ToolBarData).bSimpleComboBox = (param_1->ToolBarData).bSimpleComboBox;
  (this->ToolBarData).bIsFocusable = (param_1->ToolBarData).bIsFocusable;
  (this->ToolBarData).bForceSmallIcons = (param_1->ToolBarData).bForceSmallIcons;
  (this->ToolBarData).PlacementOverride.Value = (param_1->ToolBarData).PlacementOverride.Value;
  (this->ToolBarData).PlacementOverride.bIsSet = (param_1->ToolBarData).PlacementOverride.bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ToolBarData).PlacementOverride.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->ToolBarData).PlacementOverride.Getter);
  FMenuEntryResizeParams::operator=
            (&(this->ToolBarData).ResizeParams,&(param_1->ToolBarData).ResizeParams);
  TOptional<FToolUIAction>::operator=
            (&(this->ToolBarData).ActionOverride,&(param_1->ToolBarData).ActionOverride);
  (this->WidgetData).bNoIndent = (param_1->WidgetData).bNoIndent;
  (this->WidgetData).bSearchable = (param_1->WidgetData).bSearchable;
  (this->WidgetData).bNoPadding = (param_1->WidgetData).bNoPadding;
  FMenuEntryStyleParams::operator=
            (&(this->WidgetData).StyleParams,&(param_1->WidgetData).StyleParams);
  FMenuEntryResizeParams::operator=
            (&(this->WidgetData).ResizeParams,&(param_1->WidgetData).ResizeParams);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MakeWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->MakeWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MakeCustomWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->MakeCustomWidget);
  FText::operator=(&(this->Label).Value,&(param_1->Label).Value);
  (this->Label).bIsSet = (param_1->Label).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter);
  FText::operator=(&(this->ToolTip).Value,&(param_1->ToolTip).Value);
  (this->ToolTip).bIsSet = (param_1->ToolTip).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolTip).Getter);
  FVar11 = (param_1->Icon).Value.StyleName;
  (this->Icon).Value.StyleSetName = (param_1->Icon).Value.StyleSetName;
  (this->Icon).Value.StyleName = FVar11;
  FVar11 = (param_1->Icon).Value.StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_1->Icon).Value.SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar11;
  (this->Icon).bIsSet = (param_1->Icon).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Icon).Getter);
  FText::operator=(&(this->InputBindingLabel).Value,&(param_1->InputBindingLabel).Value);
  (this->InputBindingLabel).bIsSet = (param_1->InputBindingLabel).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InputBindingLabel).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->InputBindingLabel).Getter);
  FToolMenuVisibilityChoice::operator=(&this->Visibility,&param_1->Visibility);
  FToolUIActionChoice::operator=(&this->Action,&param_1->Action);
  pFVar6 = &(param_1->StringExecuteAction).String;
  (this->StringExecuteAction).Type = (param_1->StringExecuteAction).Type;
  (this->StringExecuteAction).CustomType = (param_1->StringExecuteAction).CustomType;
  pFVar7 = &(this->StringExecuteAction).String;
  if (pFVar7 != pFVar6) {
    pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pFVar7->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StringExecuteAction).String.Data.ArrayNum =
         (param_1->StringExecuteAction).String.Data.ArrayNum;
    (this->StringExecuteAction).String.Data.ArrayMax =
         (param_1->StringExecuteAction).String.Data.ArrayMax;
    (param_1->StringExecuteAction).String.Data.ArrayNum = 0;
    (param_1->StringExecuteAction).String.Data.ArrayMax = 0;
  }
  pTVar8 = &param_1->Command;
  if (&this->Command != pTVar8) {
    (this->Command).Object = pTVar8->Object;
    pTVar8->Object = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Command).SharedReferenceCount,&(param_1->Command).SharedReferenceCount);
  }
  pTVar9 = &param_1->CommandList;
  if (&this->CommandList != pTVar9) {
    (this->CommandList).Object = pTVar9->Object;
    pTVar9->Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommandList).SharedReferenceCount,
               &(param_1->CommandList).SharedReferenceCount);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Construct,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Construct);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConstructLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ConstructLegacy);
  this->bAddedDuringRegister = param_1->bAddedDuringRegister;
  this->bCommandIsKeybindOnly = param_1->bCommandIsKeybindOnly;
  (this->ShowInToolbarTopLevel).Value = (param_1->ShowInToolbarTopLevel).Value;
  (this->ShowInToolbarTopLevel).bIsSet = (param_1->ShowInToolbarTopLevel).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShowInToolbarTopLevel).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ShowInToolbarTopLevel).Getter);
  return this;
}

// operator= @ 142c3e3f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuEntry::operator=(FToolMenuEntry *this,FToolMenuEntry *param_1)

{
  TOptional<FName> *pTVar1;
  FToolMenuEntryStyle *pFVar2;
  FToolMenuEntryStyle *pFVar3;
  UToolMenuEntryScript *pUVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  FToolMenuEntryOptionsDropdownData *pFVar7;
  FUICommandInfo *pFVar8;
  FUICommandList *pFVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  EValueType EVar12;
  undefined7 uVar13;
  EToolMenuInsertFallback EVar14;
  undefined2 uVar15;
  bool bVar16;
  FToolMenuEntry *pFVar17;
  TOptional<FName> *pTVar18;
  
  this->Name = param_1->Name;
  EVar12 = (param_1->Owner).ValueType;
  uVar13 = *(undefined7 *)&(param_1->Owner).field_0x9;
  (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
  (this->Owner).ValueType = EVar12;
  *(undefined7 *)&(this->Owner).field_0x9 = uVar13;
  this->Type = param_1->Type;
  this->UserInterfaceActionType = param_1->UserInterfaceActionType;
  this->TutorialHighlightName = param_1->TutorialHighlightName;
  (this->InsertPosition).Name = (param_1->InsertPosition).Name;
  EVar14 = (param_1->InsertPosition).Fallback;
  uVar15 = *(undefined2 *)&(param_1->InsertPosition).field_0xa;
  (this->InsertPosition).Position = (param_1->InsertPosition).Position;
  (this->InsertPosition).Fallback = EVar14;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar15;
  this->bShouldCloseWindowAfterMenuSelection = param_1->bShouldCloseWindowAfterMenuSelection;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ScriptObject).field0_0x0.DebugPtr, pUVar4 != (UToolMenuEntryScript *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ScriptObject).field0_0x0 = (param_1->ScriptObject).field0_0x0;
  this->StyleNameOverride = param_1->StyleNameOverride;
  (this->SubMenuData).bIsSubMenu = (param_1->SubMenuData).bIsSubMenu;
  (this->SubMenuData).bOpenSubMenuOnClick = (param_1->SubMenuData).bOpenSubMenuOnClick;
  (this->SubMenuData).bAutoCollapse = (param_1->SubMenuData).bAutoCollapse;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SubMenuData).ConstructMenu.OnGetContent,
             &(param_1->SubMenuData).ConstructMenu.OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SubMenuData).ConstructMenu.NewToolMenuWidget,
             &(param_1->SubMenuData).ConstructMenu.NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SubMenuData).ConstructMenu.NewToolMenu,
             &(param_1->SubMenuData).ConstructMenu.NewToolMenu);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SubMenuData).ConstructMenu.NewMenuLegacy,
             &(param_1->SubMenuData).ConstructMenu.NewMenuLegacy);
  pFVar2 = &(param_1->SubMenuData).Style;
  pFVar3 = &(this->SubMenuData).Style;
  if (pFVar2 != pFVar3) {
    if ((param_1->SubMenuData).Style.StyleSet.bIsSet == false) {
      if ((this->SubMenuData).Style.StyleSet.bIsSet != false) {
        (this->SubMenuData).Style.StyleSet.bIsSet = false;
      }
    }
    else {
      (pFVar3->StyleSet).TypedValue = (pFVar2->StyleSet).TypedValue;
      (this->SubMenuData).Style.StyleSet.bIsSet = true;
    }
  }
  pTVar1 = &(param_1->SubMenuData).Style.StyleName;
  pTVar18 = &(this->SubMenuData).Style.StyleName;
  if (pTVar1 != pTVar18) {
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value == 0xffffffff) {
      if ((pTVar18->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
        (pTVar18->field0_0x0).TypedValue.ComparisonIndex.Value = 0xffffffff;
        (this->SubMenuData).Style.StyleName.field0_0x0.TypedValue.Number = 0;
      }
    }
    else {
      FVar5 = (pTVar1->field0_0x0).TypedValue;
      (pTVar18->field0_0x0).TypedValue = FVar5;
      if (FVar5.ComparisonIndex.Value.Value == 0xffffffff) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar16) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FToolMenuEntry *)(*pcVar10)();
          return pFVar17;
        }
      }
    }
  }
  TAttribute<FText>::operator=
            (&(this->ToolBarData).LabelOverride,&(param_1->ToolBarData).LabelOverride);
  (this->ToolBarData).StyleNameOverride = (param_1->ToolBarData).StyleNameOverride;
  (this->ToolBarData).BlockGroupName = (param_1->ToolBarData).BlockGroupName;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ToolBarData).ComboButtonContextMenuGenerator.OnGetContent,
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenuWidget,
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu,
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy,
             &(param_1->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy);
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ToolBarData).ConstructLegacy,&(param_1->ToolBarData).ConstructLegacy);
  pTVar6 = (param_1->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController;
  pFVar7 = (param_1->ToolBarData).OptionsDropdownData.Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (this->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController;
  (this->ToolBarData).OptionsDropdownData.Object = pFVar7;
  (this->ToolBarData).OptionsDropdownData.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  (this->ToolBarData).bSimpleComboBox = (param_1->ToolBarData).bSimpleComboBox;
  (this->ToolBarData).bIsFocusable = (param_1->ToolBarData).bIsFocusable;
  (this->ToolBarData).bForceSmallIcons = (param_1->ToolBarData).bForceSmallIcons;
  (this->ToolBarData).PlacementOverride.Value = (param_1->ToolBarData).PlacementOverride.Value;
  (this->ToolBarData).PlacementOverride.bIsSet = (param_1->ToolBarData).PlacementOverride.bIsSet;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ToolBarData).PlacementOverride.Getter,
             &(param_1->ToolBarData).PlacementOverride.Getter);
  FMenuEntryResizeParams::operator=
            (&(this->ToolBarData).ResizeParams,&(param_1->ToolBarData).ResizeParams);
  TOptional<FToolUIAction>::operator=
            (&(this->ToolBarData).ActionOverride,&(param_1->ToolBarData).ActionOverride);
  (this->WidgetData).bNoIndent = (param_1->WidgetData).bNoIndent;
  (this->WidgetData).bSearchable = (param_1->WidgetData).bSearchable;
  (this->WidgetData).bNoPadding = (param_1->WidgetData).bNoPadding;
  FMenuEntryStyleParams::operator=
            (&(this->WidgetData).StyleParams,&(param_1->WidgetData).StyleParams);
  FMenuEntryResizeParams::operator=
            (&(this->WidgetData).ResizeParams,&(param_1->WidgetData).ResizeParams);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MakeWidget,&param_1->MakeWidget);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->MakeCustomWidget,&param_1->MakeCustomWidget);
  TAttribute<FText>::operator=(&this->Label,&param_1->Label);
  TAttribute<FText>::operator=(&this->ToolTip,&param_1->ToolTip);
  FVar5 = (param_1->Icon).Value.StyleName;
  (this->Icon).Value.StyleSetName = (param_1->Icon).Value.StyleSetName;
  (this->Icon).Value.StyleName = FVar5;
  FVar5 = (param_1->Icon).Value.StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_1->Icon).Value.SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar5;
  (this->Icon).bIsSet = (param_1->Icon).bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->Icon).Getter,&(param_1->Icon).Getter);
  TAttribute<FText>::operator=(&this->InputBindingLabel,&param_1->InputBindingLabel);
  FToolMenuVisibilityChoice::operator=(&this->Visibility,&param_1->Visibility);
  FToolUIActionChoice::operator=(&this->Action,&param_1->Action);
  (this->StringExecuteAction).Type = (param_1->StringExecuteAction).Type;
  (this->StringExecuteAction).CustomType = (param_1->StringExecuteAction).CustomType;
  ::FString::operator=(&(this->StringExecuteAction).String,&(param_1->StringExecuteAction).String);
  pTVar6 = (param_1->Command).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->Command).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (this->Command).SharedReferenceCount.ReferenceController;
  (this->Command).Object = pFVar8;
  (this->Command).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar6 = (param_1->CommandList).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_1->CommandList).Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (this->CommandList).SharedReferenceCount.ReferenceController;
  (this->CommandList).Object = pFVar9;
  (this->CommandList).SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  TDelegate<void___cdecl(FToolMenuSection_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->Construct,&param_1->Construct);
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->ConstructLegacy,&param_1->ConstructLegacy);
  this->bAddedDuringRegister = param_1->bAddedDuringRegister;
  this->bCommandIsKeybindOnly = param_1->bCommandIsKeybindOnly;
  (this->ShowInToolbarTopLevel).Value = (param_1->ShowInToolbarTopLevel).Value;
  (this->ShowInToolbarTopLevel).bIsSet = (param_1->ShowInToolbarTopLevel).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ShowInToolbarTopLevel).Getter,&(param_1->ShowInToolbarTopLevel).Getter);
  return this;
}

// AddKeybindFromCommand @ 142c456f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuEntry::AddKeybindFromCommand
          (FToolMenuEntry *this,TSharedPtr<FUICommandInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 local_res8 [32];
  
  if (this->Type == ToolBarButton) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->Command).SharedReferenceCount.ReferenceController;
    (this->Command).Object = pFVar2;
    (this->Command).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    this->bCommandIsKeybindOnly = true;
    return;
  }
  `FToolMenuEntry::AddKeybindFromCommand'::__l7::<lambda_1>::operator()(local_res8);
  return;
}

// AddOptionsDropdown @ 142c46410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuEntry::AddOptionsDropdown
          (FToolMenuEntry *this,FUIAction *param_1,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TAttribute<FText> *param_3)

{
  TSharedPtr<FToolMenuEntryOptionsDropdownData,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FToolMenuEntryOptionsDropdownData *pFVar5;
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  int local_e8;
  undefined1 local_e0 [8];
  ForAnyElementType FStack_d8;
  int local_d0;
  undefined1 local_c8 [8];
  ForAnyElementType FStack_c0;
  int local_b8;
  undefined1 local_b0 [8];
  ForAnyElementType FStack_a8;
  int local_a0;
  FToolMenuEntryOptionsDropdownData *local_98;
  FSharedReferencer<1> FStack_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  
  pTVar4 = ::operator_new(0x108);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_98 = ___xmm_00000000000000000000000000000010;
    pFVar5 = (FToolMenuEntryOptionsDropdownData *)&DAT_00000010;
    FStack_90.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFToolMenuEntryOptionsDropdownData___00_SharedPointerInternals__6B_
    ;
    pTVar4[2]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    *(undefined8 *)&pTVar4[6].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[7]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[7].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[8]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[8].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[9]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[9].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[10]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[10].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[0xb]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xb].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[0xc]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xc].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[0xd]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xd].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[0xe]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xe].WeakReferenceCount = 0;
    *(undefined8 *)((longlong)&pTVar4[0xf]._padding_ + 4) = 0;
    *(undefined8 *)&pTVar4[0xf].WeakReferenceCount = 0;
    *(undefined4 *)((longlong)&pTVar4[0x10]._padding_ + 4) = 0;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[6]._padding_ = 0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    FText::FText((FText *)(pTVar4 + 7));
    *(undefined1 *)&pTVar4[8]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[9]._padding_ = 0;
    FUIAction::FUIAction((FUIAction *)(pTVar4 + 10));
    pFVar5 = (FToolMenuEntryOptionsDropdownData *)(pTVar4 + 1);
    if (pFVar5 == (FToolMenuEntryOptionsDropdownData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_90.ReferenceController = pTVar4;
    local_98 = pFVar5;
  }
  pTVar1 = &(this->ToolBarData).OptionsDropdownData;
  if (pTVar1 != (TSharedPtr<FToolMenuEntryOptionsDropdownData,1> *)&local_98) {
    pTVar1->Object = pFVar5;
    local_98 = (FToolMenuEntryOptionsDropdownData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ToolBarData).OptionsDropdownData.SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar1->Object == (FToolMenuEntryOptionsDropdownData *)0x0) {
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
  pFVar5 = pTVar1->Object;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar5->Action).ExecuteAction,&param_1->ExecuteAction);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar5->Action).CanExecuteAction,&param_1->CanExecuteAction);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar5->Action).GetActionCheckState,&param_1->GetActionCheckState);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar5->Action).IsActionVisibleDelegate,&param_1->IsActionVisibleDelegate);
  (pFVar5->Action).RepeatMode = param_1->RepeatMode;
  local_f8 = (undefined1  [8])0x0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,
             param_2);
  local_d0 = 0;
  local_e0 = (undefined1  [8])0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_c8 = (undefined1  [8])0x0;
  FStack_c0.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_b0 = (undefined1  [8])0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  if (pTVar1->Object == (FToolMenuEntryOptionsDropdownData *)0x0) {
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
  pFVar5 = pTVar1->Object;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar5,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar5->MenuContentGenerator).NewToolMenuWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar5->MenuContentGenerator).NewToolMenu,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar5->MenuContentGenerator).NewMenuLegacy,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b0,
             (FWriteAccessScope *)&local_88);
  if ((local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_70);
  if ((local_b8 != 0) && (FStack_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e0,
             (FWriteAccessScope *)&local_58);
  if ((local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_40);
  if ((local_e8 != 0) && (local_f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f0,0,0,0x10);
    local_e8 = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  if (pTVar1->Object == (FToolMenuEntryOptionsDropdownData *)0x0) {
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
  TAttribute<FText>::operator=(&pTVar1->Object->ToolTip,param_3);
  FUIAction::~FUIAction(param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// CommandAcceptsInput @ 142c50320

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FToolMenuEntry::CommandAcceptsInput(FToolMenuEntry *this,FKeyEvent *param_1)

{
  FUICommandInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  FKey *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uStackX_1c;
  
  bVar10 = false;
  pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_1c << 0x20);
  bVar11 = false;
  uVar14 = 0;
  do {
    if ((this->Command).Object == (FUICommandInfo *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar1 = (this->Command).Object;
    uVar9 = uVar14 & 0xff;
    if ((pFVar1->ActiveChords).ArrayNum <= (int)uVar9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar2 = (pFVar1->ActiveChords).AllocatorInstance.Data;
    this_00 = *(FKey **)(pFVar2 + uVar9 * 0x10);
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + uVar9 * 0x10 + 8);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar6 = FKey::IsValid(this_00);
    if (bVar6) {
      bVar6 = FKey::IsModifierKey(this_00);
      if ((((bVar6) ||
           ((uVar13 = this_00[1].KeyName.ComparisonIndex.Value, (uVar13 >> 1 & 1) != 0 &&
            ((param_1->_padding_ & 0xc) == 0)))) ||
          (((uVar13 >> 2 & 1) != 0 && ((param_1->_padding_ & 0x30) == 0)))) ||
         ((((uVar13 & 1) != 0 && ((param_1->_padding_ & 3) == 0)) ||
          (((uVar13 >> 3 & 1) != 0 && ((param_1->_padding_ & 0xc0) == 0)))))) goto LAB_142c50455;
      pTVar12 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      bVar10 = true;
      FVar4 = (param_1->Key).KeyName;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00->KeyName != FVar4) goto LAB_142c50455;
      bVar8 = 1;
    }
    else {
LAB_142c50455:
      bVar8 = 0;
    }
    bVar11 = (bool)(bVar11 | bVar8);
    if (bVar10) {
      bVar10 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    if (1 < uVar13) {
      return bVar11;
    }
  } while( true );
}

// GetActionForCommand @ 142c5d7b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FUIAction * __thiscall
FToolMenuEntry::GetActionForCommand
          (FToolMenuEntry *this,FToolMenuContext *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2)

{
  int iVar1;
  FUICommandInfo *pFVar2;
  FUICommandList *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FUIAction *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_68;
  TSharedPtr<FUICommandInfo_const_,1> local_58;
  TSharedPtr<FUICommandInfo_const_,1> local_48;
  FUICommandList *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pFVar2 = (this->Command).Object;
  if (pFVar2 != (FUICommandInfo *)0x0) {
    pFVar3 = (this->CommandList).Object;
    if (pFVar3 == (FUICommandList *)0x0) {
      pTVar4 = (this->Command).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar1 = (param_1->CommandLists).ArrayNum;
      pFVar6 = (param_1->CommandLists).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
      do {
        if ((param_1->CommandLists).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedPtr<FUICommandList,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar7) {
          pFVar5 = (FUIAction *)0x0;
          goto LAB_142c5d927;
        }
        pFVar3 = *(FUICommandList **)pFVar6;
        if (pFVar3 != (FUICommandList *)0x0) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_48.Object = pFVar2;
          local_48.SharedReferenceCount.ReferenceController = pTVar4;
          pFVar5 = FUICommandList::GetActionForCommand(pFVar3,&local_48);
          if (pFVar5 != (FUIAction *)0x0) {
            local_68.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(pFVar6 + 8);
            local_68.Object = *(FUICommandList **)pFVar6;
            if (local_68.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            if (param_2 != &local_68) {
              param_2->Object = local_68.Object;
              local_68.Object = (FUICommandList *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&param_2->SharedReferenceCount,&local_68.SharedReferenceCount);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.SharedReferenceCount.ReferenceController);
LAB_142c5d927:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            return pFVar5;
          }
        }
        pFVar6 = pFVar6 + 0x10;
      } while( true );
    }
    local_58.SharedReferenceCount.ReferenceController =
         (this->Command).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar2;
    pFVar5 = FUICommandList::GetActionForCommand(pFVar3,&local_58);
    if (pFVar5 != (FUIAction *)0x0) {
      pTVar4 = (this->CommandList).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->CommandList).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = param_2->Object;
      pTStack_30 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = pFVar3;
      (param_2->SharedReferenceCount).ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      return pFVar5;
    }
  }
  return (FUIAction *)0x0;
}

// GetCheckState @ 142c5dc80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

ECheckBoxState __thiscall
FToolMenuEntry::GetCheckState(FToolMenuEntry *this,FToolMenuContext *param_1)

{
  ECheckBoxState EVar1;
  FUIAction *this_00;
  TSharedPtr<FUICommandList_const_,1> local_18;
  
  local_18.Object = (FUICommandList *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this_00 = GetActionForCommand(this,param_1,&local_18);
  if (this_00 != (FUIAction *)0x0) {
    EVar1 = FUIAction::GetCheckState(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return EVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (((this->Action).Action.bIsSet != false) && (&this->Action != (FToolUIActionChoice *)0x0)) {
    EVar1 = FUIAction::GetCheckState((FUIAction *)&this->Action);
    return EVar1;
  }
  if (((this->Action).ToolAction.bIsSet != false) && (this != (FToolMenuEntry *)0xfffffffffffff9e8))
  {
    EVar1 = TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
            ::Execute(&(this->Action).ToolAction.TypedValue.GetActionCheckState,param_1);
    return EVar1;
  }
  if (((this->Action).DynamicToolAction.bIsSet != false) &&
     (this != (FToolMenuEntry *)0xfffffffffffff980)) {
    EVar1 = FToolMenuDynamicGetActionCheckState::Execute
                      (&(this->Action).DynamicToolAction.TypedValue.GetActionCheckState,param_1);
    return EVar1;
  }
  return Undetermined;
}

// InitComboButton @ 142c613a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitComboButton
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,FToolUIActionChoice *param_2,
          FNewToolMenuChoice *param_3,TAttribute<FText> *param_4,TAttribute<FText> *param_5,
          TAttribute<FSlateIcon> *param_6,bool param_7,FName param_8)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_30 = uStack_30 & 0xffffff00;
    local_38 = 0;
    iStack_34 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_38 = *(int *)pFVar1;
    iStack_34 = *(int *)(pFVar1 + 4);
    uStack_30 = *(uint *)(pFVar1 + 8);
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_28.ValueName.Index = local_38;
  local_28.ValueName.Number = iStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,param_1,
                 ToolBarComboButton);
  __return_storage_ptr__->TutorialHighlightName = param_8;
  TAttribute<FText>::operator=(&__return_storage_ptr__->Label,param_4);
  TAttribute<FText>::operator=(&__return_storage_ptr__->ToolTip,param_5);
  FVar3 = (param_6->Value).StyleName;
  (__return_storage_ptr__->Icon).Value.StyleSetName = (param_6->Value).StyleSetName;
  (__return_storage_ptr__->Icon).Value.StyleName = FVar3;
  FVar3 = (param_6->Value).StatusOverlayStyleName;
  (__return_storage_ptr__->Icon).Value.SmallStyleName = (param_6->Value).SmallStyleName;
  (__return_storage_ptr__->Icon).Value.StatusOverlayStyleName = FVar3;
  (__return_storage_ptr__->Icon).bIsSet = param_6->bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(__return_storage_ptr__->Icon).Getter,&param_6->Getter);
  FToolUIActionChoice::operator=(&__return_storage_ptr__->Action,param_2);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->ToolBarData).ComboButtonContextMenuGenerator.OnGetContent,
             &param_3->OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->ToolBarData).ComboButtonContextMenuGenerator.
              NewToolMenuWidget,&param_3->NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->ToolBarData).ComboButtonContextMenuGenerator.NewToolMenu,
             &param_3->NewToolMenu);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->ToolBarData).ComboButtonContextMenuGenerator.NewMenuLegacy,
             &param_3->NewMenuLegacy);
  (__return_storage_ptr__->ToolBarData).bSimpleComboBox = param_7;
  return __return_storage_ptr__;
}

// InitDynamicEntry @ 142c61580

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitDynamicEntry
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,
          TDelegate<void___cdecl(FToolMenuSection_&),FDefaultDelegateUserPolicy> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  FToolMenuOwner_u_0 local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_20 = uStack_20 & 0xffffff00;
    local_28 = 0;
    iStack_24 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_28 = *(int *)pFVar1;
    iStack_24 = *(int *)(pFVar1 + 4);
    uStack_20 = *(uint *)(pFVar1 + 8);
    uStack_1c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_18.ValueName.Index = local_28;
  local_18.ValueName.Number = iStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_18.ValueName,param_1,MenuEntry);
  TDelegate<void___cdecl(FToolMenuSection_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&__return_storage_ptr__->Construct,param_2);
  return __return_storage_ptr__;
}

// InitMenuEntry @ 142c61980

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitMenuEntry
          (FToolMenuEntry *__return_storage_ptr__,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TAttribute<FText> *param_2,TAttribute<FText> *param_3,TAttribute<FSlateIcon> *param_4,
          FName param_5,TOptional<FName> param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  undefined8 local_res8;
  FName local_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_50,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_38 = 0;
    uStack_30 = uStack_30 & 0xffffff00;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_28.ValueName.Index = (int)local_38;
    local_28.ValueName.Number = local_38._4_4_;
    uStack_20 = uStack_30;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
    local_28.ValueName.Index = *(int *)pFVar1;
    local_28.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_20 = *(uint *)(pFVar1 + 8);
  }
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,(FName)0x0,MenuEntry);
  __return_storage_ptr__->TutorialHighlightName = param_5;
  local_res8 = 0xffffffff;
  if (*(int *)param_6.field0_0x0 != -1) {
    local_res8 = *(undefined8 *)param_6.field0_0x0;
  }
  SetCommand(__return_storage_ptr__,param_1,(TOptional<FName>)&local_res8,param_2,param_3,param_4);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&__return_storage_ptr__->CommandList != (TSharedPtr<FUICommandList_const_,1> *)&local_48) {
    (__return_storage_ptr__->CommandList).Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->CommandList).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// InitMenuEntry @ 142c61b50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitMenuEntry
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,FToolUIActionChoice *param_2,
          TSharedRef<SWidget,1> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  UToolMenus *pUVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this;
  FToolMenuEntry *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  atomic<int> *paVar14;
  FName local_res8;
  int local_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  FToolMenuOwner_u_0 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar10 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar10;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar7 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_50 = uStack_50 & 0xffffff00;
    local_58 = 0;
    iStack_54 = 0;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar9 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FToolMenuEntry *)(*pcVar6)();
        return pFVar11;
      }
    }
    pFVar1 = (pUVar7->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar7->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_58 = *(int *)pFVar1;
    iStack_54 = *(int *)(pFVar1 + 4);
    uStack_50 = *(uint *)(pFVar1 + 8);
    uStack_4c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_48.ValueName.Index = local_58;
  local_48.ValueName.Number = iStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_48.ValueName,param_1,MenuEntry);
  FToolUIActionChoice::operator=(&__return_storage_ptr__->Action,param_2);
  pSVar4 = param_3->Object;
  pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->MakeCustomWidget,(FWriteAccessScope *)&local_38);
  local_20 = &(__return_storage_ptr__->MakeCustomWidget).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__AEBUFToolMenuContext__AEBUFToolMenuCustomWidgetContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy,`FToolMenuEntry::InitMenuEntry'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar12[3] = pSVar4;
    puVar12[4] = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// InitMenuEntry @ 142c61d10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitMenuEntry
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,TAttribute<FSlateIcon> *param_4,FToolUIActionChoice *param_5,
          EUserInterfaceActionType param_6,FName param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_30 = uStack_30 & 0xffffff00;
    local_38 = 0;
    iStack_34 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_38 = *(int *)pFVar1;
    iStack_34 = *(int *)(pFVar1 + 4);
    uStack_30 = *(uint *)(pFVar1 + 8);
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_28.ValueName.Index = local_38;
  local_28.ValueName.Number = iStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,param_1,MenuEntry);
  __return_storage_ptr__->TutorialHighlightName = param_7;
  TAttribute<FText>::operator=(&__return_storage_ptr__->Label,param_2);
  TAttribute<FText>::operator=(&__return_storage_ptr__->ToolTip,param_3);
  FVar3 = (param_4->Value).StyleName;
  (__return_storage_ptr__->Icon).Value.StyleSetName = (param_4->Value).StyleSetName;
  (__return_storage_ptr__->Icon).Value.StyleName = FVar3;
  FVar3 = (param_4->Value).StatusOverlayStyleName;
  (__return_storage_ptr__->Icon).Value.SmallStyleName = (param_4->Value).SmallStyleName;
  (__return_storage_ptr__->Icon).Value.StatusOverlayStyleName = FVar3;
  (__return_storage_ptr__->Icon).bIsSet = param_4->bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(__return_storage_ptr__->Icon).Getter,&param_4->Getter);
  __return_storage_ptr__->UserInterfaceActionType = param_6;
  FToolUIActionChoice::operator=(&__return_storage_ptr__->Action,param_5);
  return __return_storage_ptr__;
}

// InitMenuEntry @ 142c61eb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitMenuEntry
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,
          TSharedPtr<FUICommandInfo_const_,1> *param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,FName param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  FName local_res10;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res10,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_38 = 0;
    uStack_30 = uStack_30 & 0xffffff00;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_28.ValueName.Index = (int)local_38;
    local_28.ValueName.Number = local_38._4_4_;
    uStack_20 = uStack_30;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
    local_28.ValueName.Index = *(int *)pFVar1;
    local_28.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_20 = *(uint *)(pFVar1 + 8);
  }
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,param_1,MenuEntry);
  __return_storage_ptr__->TutorialHighlightName = param_6;
  local_res8 = param_1;
  if (param_1.ComparisonIndex.Value.Value == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FToolMenuEntry *)(*pcVar4)();
      return pFVar9;
    }
  }
  SetCommand(__return_storage_ptr__,param_2,(TOptional<FName>)&local_res8,param_3,param_4,param_5);
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&__return_storage_ptr__->CommandList != (TSharedPtr<FUICommandList_const_,1> *)&local_48) {
    (__return_storage_ptr__->CommandList).Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->CommandList).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  return __return_storage_ptr__;
}

// InitMenuEntryWithCommandList @ 142c62320

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitMenuEntryWithCommandList
          (FToolMenuEntry *__return_storage_ptr__,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,FName param_6,
          TOptional<FName> param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FUICommandList *pFVar5;
  code *pcVar6;
  UToolMenus *pUVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this;
  FToolMenuEntry *pFVar11;
  undefined8 local_res8;
  FName local_68 [2];
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  FToolMenuOwner_u_0 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  FUICommandList *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar10 = ::FName::FName(local_68,"ToolMenus");
    FVar3 = *pFVar10;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar7 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_58 = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_48.ValueName.Index = (int)local_58;
    local_48.ValueName.Number = local_58._4_4_;
    uStack_40 = uStack_50;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar9 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FToolMenuEntry *)(*pcVar6)();
        return pFVar11;
      }
    }
    pFVar1 = (pUVar7->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar7->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_4c = *(undefined4 *)(pFVar1 + 0xc);
    local_48.ValueName.Index = *(int *)pFVar1;
    local_48.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_40 = *(uint *)(pFVar1 + 8);
  }
  uStack_3c = uStack_4c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_48.ValueName,(FName)0x0,MenuEntry);
  __return_storage_ptr__->TutorialHighlightName = param_6;
  local_res8 = 0xffffffff;
  if (*(int *)param_7.field0_0x0 != -1) {
    local_res8 = *(undefined8 *)param_7.field0_0x0;
  }
  SetCommand(__return_storage_ptr__,param_1,(TOptional<FName>)&local_res8,param_3,param_4,param_5);
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar5 = param_2->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = (__return_storage_ptr__->CommandList).Object;
  pTStack_30 = (__return_storage_ptr__->CommandList).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->CommandList).Object = pFVar5;
  (__return_storage_ptr__->CommandList).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return __return_storage_ptr__;
}

// InitSeparator @ 142c62540

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitSeparator(FToolMenuEntry *__return_storage_ptr__,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  FToolMenuOwner_u_0 local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_20 = uStack_20 & 0xffffff00;
    local_28 = 0;
    iStack_24 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_28 = *(int *)pFVar1;
    iStack_24 = *(int *)(pFVar1 + 4);
    uStack_20 = *(uint *)(pFVar1 + 8);
    uStack_1c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_18.ValueName.Index = local_28;
  local_18.ValueName.Number = iStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_18.ValueName,param_1,Separator);
  return __return_storage_ptr__;
}

// InitSubMenu @ 142c62650

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitSubMenu
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,FToolUIActionChoice *param_2,
          TSharedRef<SWidget,1> *param_3,FNewToolMenuChoice *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  UToolMenus *pUVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this;
  FToolMenuEntry *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  atomic<int> *paVar14;
  FName local_res8;
  int local_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  FToolMenuOwner_u_0 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar10 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar10;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar7 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_50 = uStack_50 & 0xffffff00;
    local_58 = 0;
    iStack_54 = 0;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar9 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FToolMenuEntry *)(*pcVar6)();
        return pFVar11;
      }
    }
    pFVar1 = (pUVar7->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar7->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_58 = *(int *)pFVar1;
    iStack_54 = *(int *)(pFVar1 + 4);
    uStack_50 = *(uint *)(pFVar1 + 8);
    uStack_4c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_48.ValueName.Index = local_58;
  local_48.ValueName.Number = iStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_48.ValueName,param_1,MenuEntry);
  FToolUIActionChoice::operator=(&__return_storage_ptr__->Action,param_2);
  pSVar4 = param_3->Object;
  pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &pTVar5->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->MakeCustomWidget,(FWriteAccessScope *)&local_38);
  local_20 = &(__return_storage_ptr__->MakeCustomWidget).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__AEBUFToolMenuContext__AEBUFToolMenuCustomWidgetContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy,`FToolMenuEntry::InitSubMenu'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar12[3] = pSVar4;
    puVar12[4] = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  __return_storage_ptr__->bShouldCloseWindowAfterMenuSelection = param_5;
  (__return_storage_ptr__->SubMenuData).bIsSubMenu = true;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.OnGetContent,
             &param_4->OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewToolMenuWidget,
             &param_4->NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewToolMenu,&param_4->NewToolMenu)
  ;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewMenuLegacy,
             &param_4->NewMenuLegacy);
  (__return_storage_ptr__->SubMenuData).bOpenSubMenuOnClick = false;
  return __return_storage_ptr__;
}

// InitSubMenu @ 142c62870

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitSubMenu
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,FNewToolMenuChoice *param_4,FToolUIActionChoice *param_5,
          EUserInterfaceActionType param_6,bool param_7,TAttribute<FSlateIcon> *param_8,bool param_9
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_30 = uStack_30 & 0xffffff00;
    local_38 = 0;
    iStack_34 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_38 = *(int *)pFVar1;
    iStack_34 = *(int *)(pFVar1 + 4);
    uStack_30 = *(uint *)(pFVar1 + 8);
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_28.ValueName.Index = local_38;
  local_28.ValueName.Number = iStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,param_1,MenuEntry);
  TAttribute<FText>::operator=(&__return_storage_ptr__->Label,param_2);
  TAttribute<FText>::operator=(&__return_storage_ptr__->ToolTip,param_3);
  FVar3 = (param_8->Value).StyleName;
  (__return_storage_ptr__->Icon).Value.StyleSetName = (param_8->Value).StyleSetName;
  (__return_storage_ptr__->Icon).Value.StyleName = FVar3;
  FVar3 = (param_8->Value).StatusOverlayStyleName;
  (__return_storage_ptr__->Icon).Value.SmallStyleName = (param_8->Value).SmallStyleName;
  (__return_storage_ptr__->Icon).Value.StatusOverlayStyleName = FVar3;
  (__return_storage_ptr__->Icon).bIsSet = param_8->bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(__return_storage_ptr__->Icon).Getter,&param_8->Getter);
  FToolUIActionChoice::operator=(&__return_storage_ptr__->Action,param_5);
  __return_storage_ptr__->UserInterfaceActionType = param_6;
  __return_storage_ptr__->bShouldCloseWindowAfterMenuSelection = param_9;
  (__return_storage_ptr__->SubMenuData).bIsSubMenu = true;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.OnGetContent,
             &param_4->OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewToolMenuWidget,
             &param_4->NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewToolMenu,&param_4->NewToolMenu)
  ;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewMenuLegacy,
             &param_4->NewMenuLegacy);
  (__return_storage_ptr__->SubMenuData).bOpenSubMenuOnClick = param_7;
  return __return_storage_ptr__;
}

// InitSubMenu @ 142c62a60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitSubMenu
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,FNewToolMenuChoice *param_4,bool param_5,
          TAttribute<FSlateIcon> *param_6,bool param_7,FName param_8)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_30 = uStack_30 & 0xffffff00;
    local_38 = 0;
    iStack_34 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_38 = *(int *)pFVar1;
    iStack_34 = *(int *)(pFVar1 + 4);
    uStack_30 = *(uint *)(pFVar1 + 8);
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_28.ValueName.Index = local_38;
  local_28.ValueName.Number = iStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,param_1,MenuEntry);
  __return_storage_ptr__->TutorialHighlightName = param_8;
  TAttribute<FText>::operator=(&__return_storage_ptr__->Label,param_2);
  TAttribute<FText>::operator=(&__return_storage_ptr__->ToolTip,param_3);
  FVar3 = (param_6->Value).StyleName;
  (__return_storage_ptr__->Icon).Value.StyleSetName = (param_6->Value).StyleSetName;
  (__return_storage_ptr__->Icon).Value.StyleName = FVar3;
  FVar3 = (param_6->Value).StatusOverlayStyleName;
  (__return_storage_ptr__->Icon).Value.SmallStyleName = (param_6->Value).SmallStyleName;
  (__return_storage_ptr__->Icon).Value.StatusOverlayStyleName = FVar3;
  (__return_storage_ptr__->Icon).bIsSet = param_6->bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(__return_storage_ptr__->Icon).Getter,&param_6->Getter);
  __return_storage_ptr__->bShouldCloseWindowAfterMenuSelection = param_7;
  (__return_storage_ptr__->SubMenuData).bIsSubMenu = true;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.OnGetContent,
             &param_4->OnGetContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewToolMenuWidget,
             &param_4->NewToolMenuWidget);
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewToolMenu,&param_4->NewToolMenu)
  ;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(__return_storage_ptr__->SubMenuData).ConstructMenu.NewMenuLegacy,
             &param_4->NewMenuLegacy);
  (__return_storage_ptr__->SubMenuData).bOpenSubMenuOnClick = param_5;
  return __return_storage_ptr__;
}

// InitToolBarButton @ 142c62c40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitToolBarButton
          (FToolMenuEntry *__return_storage_ptr__,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TAttribute<FText> *param_2,TAttribute<FText> *param_3,TAttribute<FSlateIcon> *param_4,
          FName param_5,TOptional<FName> param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  undefined8 local_res8;
  FName local_40;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_40,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_38 = 0;
    uStack_30 = uStack_30 & 0xffffff00;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    local_28.ValueName.Index = (int)local_38;
    local_28.ValueName.Number = local_38._4_4_;
    uStack_20 = uStack_30;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
    local_28.ValueName.Index = *(int *)pFVar1;
    local_28.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_20 = *(uint *)(pFVar1 + 8);
  }
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,(FName)0x0,
                 ToolBarButton);
  __return_storage_ptr__->TutorialHighlightName = param_5;
  local_res8 = 0xffffffff;
  if (*(int *)param_6.field0_0x0 != -1) {
    local_res8 = *(undefined8 *)param_6.field0_0x0;
  }
  SetCommand(__return_storage_ptr__,param_1,(TOptional<FName>)&local_res8,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// InitToolBarButton @ 142c62dd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitToolBarButton
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,FToolUIActionChoice *param_2,
          TAttribute<FText> *param_3,TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,
          EUserInterfaceActionType param_6,FName param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  FToolMenuEntry *pFVar9;
  FName local_res8;
  int local_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  FToolMenuOwner_u_0 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(&local_res8,"ToolMenus");
    FVar3 = *pFVar8;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    uStack_30 = uStack_30 & 0xffffff00;
    local_38 = 0;
    iStack_34 = 0;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar7 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_38 = *(int *)pFVar1;
    iStack_34 = *(int *)(pFVar1 + 4);
    uStack_30 = *(uint *)(pFVar1 + 8);
    uStack_2c = *(undefined4 *)(pFVar1 + 0xc);
  }
  local_28.ValueName.Index = local_38;
  local_28.ValueName.Number = iStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_28.ValueName,param_1,ToolBarButton)
  ;
  __return_storage_ptr__->TutorialHighlightName = param_7;
  TAttribute<FText>::operator=(&__return_storage_ptr__->Label,param_3);
  TAttribute<FText>::operator=(&__return_storage_ptr__->ToolTip,param_4);
  FVar3 = (param_5->Value).StyleName;
  (__return_storage_ptr__->Icon).Value.StyleSetName = (param_5->Value).StyleSetName;
  (__return_storage_ptr__->Icon).Value.StyleName = FVar3;
  FVar3 = (param_5->Value).StatusOverlayStyleName;
  (__return_storage_ptr__->Icon).Value.SmallStyleName = (param_5->Value).SmallStyleName;
  (__return_storage_ptr__->Icon).Value.StatusOverlayStyleName = FVar3;
  (__return_storage_ptr__->Icon).bIsSet = param_5->bIsSet;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(__return_storage_ptr__->Icon).Getter,&param_5->Getter);
  __return_storage_ptr__->UserInterfaceActionType = param_6;
  FToolUIActionChoice::operator=(&__return_storage_ptr__->Action,param_2);
  return __return_storage_ptr__;
}

// InitWidget @ 142c62f70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
FToolMenuEntry::InitWidget
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,TSharedRef<SWidget,1> *param_2,
          FText *param_3,bool param_4,bool param_5,bool param_6,FText *param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  UToolMenus *pUVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this;
  FToolMenuEntry *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  atomic<int> *paVar14;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  FName local_res20;
  FText local_108;
  bool local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  FText local_d8;
  bool local_c8;
  undefined1 local_c0 [8];
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FToolMenuOwner_u_0 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar10 = ::FName::FName(&local_res20,"ToolMenus");
    FVar3 = *pFVar10;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar7 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_a8 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_48.ValueName.Index = (int)local_a8;
    local_48.ValueName.Number = local_a8._4_4_;
    uStack_40 = uStack_a0;
  }
  else {
    uVar9 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar9 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FToolMenuEntry *)(*pcVar6)();
        return pFVar11;
      }
    }
    pFVar1 = (pUVar7->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar7->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_9c = *(undefined4 *)(pFVar1 + 0xc);
    local_48.ValueName.Index = *(int *)pFVar1;
    local_48.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_40 = *(uint *)(pFVar1 + 8);
  }
  uStack_3c = uStack_9c;
  FToolMenuEntry(__return_storage_ptr__,(FToolMenuOwner *)&local_48.ValueName,param_1,Widget);
  local_108.TextData.Reference = (param_3->TextData).Reference;
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 8))
              (local_108.TextData.Reference,local_res8);
  }
  local_108.Flags = param_3->Flags;
  local_f8 = true;
  local_e0 = 0;
  local_f0 = (undefined1  [8])0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(__return_storage_ptr__->Label).Value,&local_108);
  (__return_storage_ptr__->Label).bIsSet = local_f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(__return_storage_ptr__->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
             (FWriteAccessScope *)&local_98);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  local_d8.TextData.Reference = (param_7->TextData).Reference;
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 8))
              (local_d8.TextData.Reference,local_res18);
  }
  local_d8.Flags = param_7->Flags;
  local_c8 = true;
  local_b0 = 0;
  local_c0 = (undefined1  [8])0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(__return_storage_ptr__->ToolTip).Value,&local_d8);
  (__return_storage_ptr__->ToolTip).bIsSet = local_c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(__return_storage_ptr__->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_80);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar5 = param_2->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar14 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar14 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar14 = (atomic<int>)((int)*paVar14 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &__return_storage_ptr__->MakeCustomWidget,(FWriteAccessScope *)&local_68);
  local_50 = &(__return_storage_ptr__->MakeCustomWidget).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_50);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__AEBUFToolMenuContext__AEBUFToolMenuCustomWidgetContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&,FToolMenuCustomWidgetContext_const_&),FDefaultDelegateUserPolicy,`FToolMenuEntry::InitWidget'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar12[3] = pSVar5;
    puVar12[4] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar14 = (atomic<int>)((int)*paVar14 + 1);
      UNLOCK();
    }
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  (__return_storage_ptr__->WidgetData).bNoIndent = param_4;
  (__return_storage_ptr__->WidgetData).bSearchable = param_5;
  (__return_storage_ptr__->WidgetData).bNoPadding = param_6;
  return __return_storage_ptr__;
}

// IsCommandKeybindOnly @ 142c63670

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FToolMenuEntry::IsCommandKeybindOnly(FToolMenuEntry *this)

{
  return this->bCommandIsKeybindOnly;
}

// IsNonLegacyDynamicConstruct @ 142c637d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FToolMenuEntry::IsNonLegacyDynamicConstruct(FToolMenuEntry *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Construct,&local_28);
  if (((*(int *)&(this->Construct).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->Construct).field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = IsScriptObjectDynamicConstruct(this);
  if (bVar3) {
    return true;
  }
  return false;
}

// IsScriptObjectDynamicConstruct @ 142c63af0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FToolMenuEntry::IsScriptObjectDynamicConstruct(FToolMenuEntry *this)

{
  UToolMenuEntryScript *pUVar1;
  longlong *plVar2;
  char cVar3;
  FName *pFVar4;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = ::FName::FName(local_res8,0x12,L"ConstructMenuEntry",FNAME_Add);
      ConstructMenuEntryName = *pFVar4;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar1 = (this->ScriptObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UToolMenuEntryScript *)0x0) {
    plVar2 = (longlong *)pUVar1->_padding_;
    cVar3 = (**(code **)(*plVar2 + 0x3d8))(plVar2,ConstructMenuEntryName);
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// ResetActions @ 142c6f780

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolMenuEntry::ResetActions(FToolMenuEntry *this)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined8 local_188;
  FSharedReferencer<1> FStack_180;
  undefined8 local_178;
  FSharedReferencer<1> FStack_170;
  undefined8 local_164;
  undefined8 local_158 [2];
  undefined1 local_148 [240];
  FMRSWRecursiveAccessDetector local_58 [3];
  FMRSWRecursiveAccessDetector local_40 [3];
  FMRSWRecursiveAccessDetector local_28 [3];
  bool local_10;
  
  local_148[0x68] = false;
  local_148[0xd0] = false;
  local_10 = false;
  FToolUIActionChoice::operator=(&this->Action,(FToolUIActionChoice *)local_148);
  if (local_10 != false) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_28);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_40);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_58);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_148 + 0xd8));
  }
  if (local_148[0xd0] != false) {
    FToolUIAction::~FToolUIAction((FToolUIAction *)(local_148 + 0x70));
  }
  if (local_148[0x68] != false) {
    FUIAction::~FUIAction((FUIAction *)local_148);
  }
  local_188 = 0;
  FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Command != (TSharedPtr<FUICommandInfo_const_,1> *)&local_188) {
    (this->Command).Object = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Command).SharedReferenceCount,&FStack_180);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_180.ReferenceController);
  local_178 = 0;
  FStack_170.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CommandList != (TSharedPtr<FUICommandList_const_,1> *)&local_178) {
    (this->CommandList).Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CommandList).SharedReferenceCount,&FStack_170);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_170.ReferenceController);
  (this->StringExecuteAction).Type = Command;
  (this->StringExecuteAction).CustomType.ComparisonIndex = 0;
  (this->StringExecuteAction).CustomType.Number = 0;
  pFVar2 = &(this->StringExecuteAction).String;
  local_164 = 0;
  if (pFVar2 != (FString *)local_158) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StringExecuteAction).String.Data.ArrayNum = 0;
    (this->StringExecuteAction).String.Data.ArrayMax = 0;
  }
  return;
}

// SetCommand @ 142c6fa10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuEntry::SetCommand
          (FToolMenuEntry *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TOptional<FName> param_2,TAttribute<FText> *param_3,TAttribute<FText> *param_4,
          TAttribute<FSlateIcon> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandInfo *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  FName FVar9;
  ITextData *pIVar10;
  TAttribute<FText> *pTVar11;
  FName *pFVar12;
  int iVar13;
  int iVar14;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_218 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  ForAnyElementType FStack_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType FStack_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [8];
  ForAnyElementType FStack_198;
  int local_190;
  undefined1 local_188 [24];
  undefined1 local_170 [8];
  ForAnyElementType FStack_168;
  int local_160;
  FName local_158;
  FName FStack_150;
  FName local_148;
  FName FStack_140;
  undefined1 local_138 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  FName local_118;
  FName FStack_110;
  FName local_108;
  FName FStack_100;
  char local_f8;
  undefined1 local_f0 [8];
  ForAnyElementType FStack_e8;
  int local_e0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FUICommandInfo *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_res8[0] = 0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (this->Command).Object;
  pTStack_40 = (this->Command).SharedReferenceCount.ReferenceController;
  (this->Command).Object = pFVar2;
  (this->Command).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  if (*(int *)param_2.field0_0x0 == -1) {
    if (param_1->Object == (FUICommandInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar9 = param_1->Object->CommandName;
  }
  else {
    FVar9 = *(FName *)param_2.field0_0x0;
  }
  this->Name = FVar9;
  if (param_3->bIsSet == false) {
    if (param_1->Object == (FUICommandInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = param_1->Object;
    local_218._0_8_ = (pFVar2->Label).TextData.Reference;
    if ((ITextData *)local_218._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_218._0_8_ + 8))(local_218._0_8_,local_res10);
    }
    local_218._8_4_ = (pFVar2->Label).Flags;
    local_218[0x10] = true;
    local_1f0 = 0;
    local_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1f8.Data = (FScriptContainerElement *)0x0;
    TAttribute<FText>::operator=(&this->Label,(TAttribute<FText> *)local_218);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_200,(FWriteAccessScope *)&local_c0);
    if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
      local_1f0 = local_1f0 & 0xffffffff00000000;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_200.AccessDetector);
    pIVar10 = (ITextData *)local_218._0_8_;
  }
  else {
    local_1b8._0_8_ = (param_3->Value).TextData.Reference;
    if ((ITextData *)local_1b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1b8._0_8_ + 8))(local_1b8._0_8_,local_res8);
    }
    local_1b8._8_4_ = (param_3->Value).Flags;
    local_1b8[0x10] = param_3->bIsSet;
    local_1a0 = (undefined1  [8])0x0;
    FStack_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a0,
               &param_3->Getter);
    TAttribute<FText>::operator=(&this->Label,(TAttribute<FText> *)local_1b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
               (FWriteAccessScope *)&local_d8);
    if ((local_190 != 0) && (FStack_198.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_198.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10);
      local_190 = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (FStack_198.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_198.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a0);
    pIVar10 = (ITextData *)local_1b8._0_8_;
  }
  if (pIVar10 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar10 + 0x10))();
  }
  if (param_4->bIsSet == false) {
    if (param_1->Object == (FUICommandInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = param_1->Object;
    local_1e8._0_8_ = (pFVar2->Description).TextData.Reference;
    if ((ITextData *)local_1e8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1e8._0_8_ + 8))(local_1e8._0_8_,local_res20);
    }
    local_1e8._8_4_ = (pFVar2->Description).Flags;
    pTVar11 = (TAttribute<FText> *)local_1e8;
    local_1e8[0x10] = true;
    bVar7 = false;
    bVar8 = true;
    local_1c0 = 0;
    local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1c8.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_188._0_8_ = (param_4->Value).TextData.Reference;
    if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 8))(local_188._0_8_,local_res18);
    }
    local_188._8_4_ = (param_4->Value).Flags;
    local_188[0x10] = param_4->bIsSet;
    local_170 = (undefined1  [8])0x0;
    FStack_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_170,
               &param_4->Getter);
    pTVar11 = (TAttribute<FText> *)local_188;
    bVar7 = true;
    bVar8 = false;
  }
  TAttribute<FText>::operator=(&this->ToolTip,pTVar11);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1d0,(FWriteAccessScope *)&local_a8);
    if (((int)local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c8,0,0,0x10);
      local_1c0 = local_1c0 & 0xffffffff00000000;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
    if ((ITextData *)local_1e8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1e8._0_8_ + 0x10))();
    }
  }
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
               (FWriteAccessScope *)&local_90);
    if ((local_160 != 0) && (FStack_168.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_168.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_168,0,0,0x10);
      local_160 = 0;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (FStack_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_170);
    if ((ITextData *)local_188._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_188._0_8_ + 0x10))();
    }
  }
  iVar13 = 0;
  if (param_5->bIsSet == false) {
    if (param_1->Object == (FUICommandInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = param_1->Object;
    pFVar12 = &local_158;
    iVar14 = 0x20;
    local_158 = (pFVar2->Icon).StyleSetName;
    FStack_150 = (pFVar2->Icon).StyleName;
    local_138[0] = 1;
    local_148 = (pFVar2->Icon).SmallStyleName;
    FStack_140 = (pFVar2->Icon).StatusOverlayStyleName;
    local_120 = 0;
    local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_128.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_118 = (param_5->Value).StyleSetName;
    FStack_110 = (param_5->Value).StyleName;
    local_108 = (param_5->Value).SmallStyleName;
    FStack_100 = (param_5->Value).StatusOverlayStyleName;
    local_e0 = 0;
    local_f0 = (undefined1  [8])0x0;
    FStack_e8.Data = (FScriptContainerElement *)0x0;
    local_f8 = param_5->bIsSet;
    TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)local_f0,
               &param_5->Getter);
    pFVar12 = &local_118;
    iVar14 = iVar13;
    iVar13 = 0x10;
  }
  FVar9 = *pFVar12;
  FVar4 = pFVar12[1];
  FVar5 = pFVar12[2];
  FVar6 = pFVar12[3];
  (this->Icon).bIsSet = SUB41(pFVar12[4].ComparisonIndex.Value,0);
  (this->Icon).Value.StyleSetName = FVar9;
  (this->Icon).Value.StyleName = FVar4;
  (this->Icon).Value.SmallStyleName = FVar5;
  (this->Icon).Value.StatusOverlayStyleName = FVar6;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Icon).Getter,
             (TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar12 + 5));
  if (iVar14 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_130,(FWriteAccessScope *)&local_78);
    if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_128.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
      local_120 = local_120 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_128.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  }
  if (iVar13 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
               (FWriteAccessScope *)&local_60);
    if ((local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
      local_e0 = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_f0);
  }
  return;
}

// SetCommandList @ 142c70070

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuEntry::SetCommandList(FToolMenuEntry *this,TSharedPtr<FUICommandList_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FUICommandList *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->CommandList).SharedReferenceCount.ReferenceController;
  (this->CommandList).Object = pFVar2;
  (this->CommandList).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetShowInToolbarTopLevel @ 142c70810

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuEntry::SetShowInToolbarTopLevel(FToolMenuEntry *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->ShowInToolbarTopLevel).Value = param_1->Value;
  (this->ShowInToolbarTopLevel).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ShowInToolbarTopLevel).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// TryExecuteToolUIAction @ 142c725a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
FToolMenuEntry::TryExecuteToolUIAction(FToolMenuEntry *this,FToolMenuContext *param_1)

{
  TOptional<FToolUIAction> *this_00;
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  TOptional<FToolUIAction> *pTVar5;
  TOptional<FToolUIAction> *pTVar6;
  FReadAccessScope local_38;
  
  this_00 = &(this->Action).ToolAction;
  if (((this->Action).ToolAction.bIsSet != false) && (this_00 != (TOptional<FToolUIAction> *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
    if ((*(int *)&(this->Action).ToolAction.TypedValue.ExecuteAction.field_0x10 != 0) &&
       ((plVar1 = *(longlong **)&(this->Action).ToolAction.TypedValue.ExecuteAction.field_0x8,
        plVar1 != (longlong *)0x0 && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pTVar6 = (TOptional<FToolUIAction> *)0x0;
      bVar4 = true;
      pTVar5 = this_00;
      if ((this->Action).ToolAction.bIsSet == false) {
        pTVar5 = pTVar6;
      }
      bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &(pTVar5->TypedValue).CanExecuteAction);
      if (bVar3) {
        pTVar5 = pTVar6;
        if ((this->Action).ToolAction.bIsSet != false) {
          pTVar5 = this_00;
        }
        bVar4 = TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
                Execute(&(pTVar5->TypedValue).CanExecuteAction,param_1);
        if (!bVar4) {
          return bVar4;
        }
      }
      pTVar5 = pTVar6;
      if ((this->Action).ToolAction.bIsSet != false) {
        pTVar5 = this_00;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,&local_38);
      if (*(int *)&(pTVar5->TypedValue).ExecuteAction.field_0x10 != 0) {
        pTVar6 = *(TOptional<FToolUIAction> **)&(pTVar5->TypedValue).ExecuteAction.field_0x8;
      }
      (**(code **)(*(longlong *)&(pTVar6->TypedValue).ExecuteAction + 0x60))(pTVar6,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return bVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  return false;
}

// operator() @ 150498c50

bool __thiscall `FToolMenuEntry::AddKeybindFromCommand'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5347697942419472617>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5347697942419472617>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

