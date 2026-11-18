// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 26

// ~SColorThemesViewer @ 14301b200

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::~SColorThemesViewer(SColorThemesViewer *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseAlpha).Getter);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CurrentThemeChangedEvent).field_0x8,
             *(int *)&(this->CurrentThemeChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->CurrentThemeChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CurrentThemeChangedEvent);
  TSharedPtr<SEditableTextBox,1>::~TSharedPtr<SEditableTextBox,1>(&this->RenameTextBox);
  TSharedPtr<SMultiBoxWidget,1>::~TSharedPtr<SMultiBoxWidget,1>(&this->MultiBoxWidget);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// BuildMenu @ 14301d970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::BuildMenu(SColorThemesViewer *this,FMenuBuilder *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FColorTheme *pFVar4;
  SEditableTextBox *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  atomic<int> aVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  atomic<int> aVar13;
  TAttribute<FMenuEntryResizeParams> *pTVar14;
  TAttribute<EVisibility> *pTVar15;
  TAttribute<FText> *pTVar16;
  FName *pFVar17;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar18;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar19;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar20;
  FUIAction *pFVar21;
  FName FVar22;
  FSlateIcon *pFVar23;
  FText *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  TSharedRef<SWidget,1> *pTVar27;
  ulonglong uVar28;
  FWeakReferencer<1> FVar29;
  ForAnyElementType FVar30;
  SColorThemesViewer *pSVar31;
  atomic<int> *paVar32;
  FColorTheme *pFVar33;
  uint local_res18 [2];
  uint local_res20;
  FSharedReferencer<1> FStack_13b0;
  undefined1 local_13a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_13a0;
  ForAnyElementType FStack_1398;
  ulonglong local_1390;
  SWidget *local_1388;
  TSharedRef<SEditableTextBox,1> local_1380;
  FText local_1370;
  undefined1 local_1360;
  undefined1 local_1358 [8];
  ForAnyElementType FStack_1350;
  ulonglong local_1348;
  FText local_1340;
  undefined1 local_1330;
  undefined1 local_1328 [8];
  ForAnyElementType FStack_1320;
  ulonglong local_1318;
  undefined8 local_1310;
  undefined8 local_1308;
  undefined8 local_1300;
  undefined8 local_12f8;
  undefined8 local_12f0;
  undefined8 local_12e8;
  undefined8 local_12e0;
  undefined8 local_12d8;
  FName local_12d0;
  FName local_12c8;
  undefined8 local_12c0;
  undefined8 local_12b8;
  FName local_12b0;
  FName local_12a8;
  undefined8 local_12a0;
  undefined8 local_1298;
  FName local_1290;
  FName local_1288;
  undefined8 local_1280;
  undefined8 local_1278;
  undefined8 local_1270;
  FName local_1268;
  FName local_1260;
  undefined8 local_1258;
  undefined1 local_1250 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1238;
  ForAnyElementType FStack_1230;
  ulonglong local_1228;
  undefined1 local_1220 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1208;
  ForAnyElementType FStack_1200;
  ulonglong local_11f8;
  undefined1 local_11f0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_11d8;
  ForAnyElementType FStack_11d0;
  ulonglong local_11c8;
  undefined1 local_11c0 [8];
  FDelegateAllocation local_11b8;
  undefined1 local_11a8 [8];
  FDelegateAllocation local_11a0;
  undefined1 local_1190 [8];
  FDelegateAllocation local_1188;
  undefined1 local_1178 [8];
  FDelegateAllocation local_1170;
  undefined1 local_1160 [8];
  FDelegateAllocation local_1158;
  SColorThemesViewer *local_1148;
  FScriptContainerElement *local_1140;
  TAttribute<EVisibility> local_1138;
  TAttribute<EVisibility> local_1118;
  code *local_10f8;
  undefined4 uStack_10f0;
  undefined4 uStack_10ec;
  TAttribute<EVisibility> local_10e8;
  TAttribute<EVisibility> local_10c8;
  TAttribute<EVisibility> local_10a8;
  TAttribute<EVisibility> local_1088;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1068;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_1050;
  TAttribute<FMenuEntryResizeParams> local_1038;
  TAttribute<FMenuEntryResizeParams> local_f50;
  TAttribute<FText> local_e68;
  FText local_e38;
  TAttribute<FText> local_e28;
  TAttribute<FText> local_df8;
  TAttribute<FText> local_dc8;
  TAttribute<FText> local_d98;
  TAttribute<FText> local_d68;
  TAttribute<FText> local_d38;
  TAttribute<FText> local_d08;
  TAttribute<FText> local_cd8;
  TAttribute<FText> local_ca8;
  TAttribute<FText> local_c78;
  TAttribute<FText> local_c48;
  TAttribute<FText> local_c18;
  undefined1 local_be8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_bb8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_ba0;
  EUIActionRepeatMode local_b88;
  longlong local_b80;
  TReferenceControllerBase<1> *pTStack_b78;
  longlong local_b70;
  TReferenceControllerBase<1> *pTStack_b68;
  longlong local_b60;
  undefined2 local_b58;
  FText local_b50;
  bool local_b40;
  TDelegateBase<FNotThreadSafeDelegateMode> local_b38;
  FText local_b20;
  bool local_b10;
  TDelegateBase<FNotThreadSafeDelegateMode> local_b08;
  FText local_af0;
  bool local_ae0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_ad8;
  TAttribute<EVisibility> local_ac0;
  FSlateIcon local_aa0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_a80;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_a68;
  SEditableTextBox *local_a50;
  FSharedReferencer<1> FStack_a48;
  undefined2 local_a40;
  bool local_a3e;
  EUserInterfaceActionType local_a3d;
  bool local_a3c;
  FExtender *local_a38;
  FSharedReferencer<1> FStack_a30;
  bool local_a28;
  FName local_a24;
  FDestructionSentinel local_a18;
  FDestructionSentinel local_a00;
  FDestructionSentinel local_9e8;
  FDestructionSentinel local_9d0;
  FDestructionSentinel local_9b8;
  FDestructionSentinel local_9a0;
  TAttribute<FText> local_988;
  FDestructionSentinel local_958;
  FDelegateAllocation *local_940;
  FDestructionSentinel local_938;
  FDelegateAllocation *local_920;
  FDestructionSentinel local_918;
  FDelegateAllocation *local_900;
  FDestructionSentinel local_8f8;
  FDelegateAllocation *local_8e0;
  FDestructionSentinel local_8d8;
  FDelegateAllocation *local_8c0;
  FText local_8b8;
  TSharedRef<SWidget,1> local_8a8;
  code *local_898;
  TReferenceControllerBase<1> *pTStack_890;
  FText local_888;
  FText local_878;
  FText local_868;
  code *local_858;
  TReferenceControllerBase<1> *pTStack_850;
  FText local_848;
  FText local_838;
  code *local_828;
  TReferenceControllerBase<1> *pTStack_820;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_818;
  FText local_800;
  FName local_7e8;
  FName local_7e0 [2];
  FName local_7d0;
  FName local_7c8;
  FText local_7c0;
  code *local_7a8;
  TReferenceControllerBase<1> *pTStack_7a0;
  FText local_798;
  FText local_788;
  FName local_770;
  FName local_768 [2];
  FName local_758;
  FName local_750;
  FName local_748 [2];
  FName local_738 [2];
  code *local_728;
  undefined4 uStack_720;
  uint uStack_71c;
  code *local_718;
  TReferenceControllerBase<1> *pTStack_710;
  FText local_708;
  FText local_6f8;
  FText local_6e8;
  FText local_6d8;
  TAttribute<EVisibility> local_6c8;
  TAttribute<FText> local_6a8;
  TAttribute<FText> local_678;
  TAttribute<EVisibility> local_648;
  TAttribute<EVisibility> local_628;
  FUIAction local_608;
  FUIAction local_5a0;
  FUIAction local_538;
  FUIAction local_4d0;
  FUIAction local_468;
  FUIAction local_400;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_398;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_380;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_368;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_350;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_338;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_320;
  TAttribute<FText> local_308;
  FSlateIcon local_2d8;
  FSlateIcon local_2b8;
  FSlateIcon local_298;
  FSlateIcon local_278;
  FSlateIcon local_258;
  FSlateIcon local_238;
  TAttribute<FMenuEntryResizeParams> local_218;
  TAttribute<FMenuEntryResizeParams> local_130;
  undefined8 uStack_48;
  
  uStack_48 = 0x14301d998;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  local_res18[0] = 0;
  pTVar14 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_218);
  pTVar15 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_648);
  pTVar16 = TAttribute<FText>::TAttribute<FText>(&local_308);
  pFVar17 = ::FName::FName(&local_7e8,"RecentsSection");
  FMenuBuilder::BeginSection(param_1,*pFVar17,pTVar16,pTVar15,pTVar14);
  TAttribute<FText>::~TAttribute<FText>(&local_308);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_648.Getter);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_218);
  pTVar15 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_628);
  pTVar16 = TAttribute<FText>::TAttribute<FText>(&local_6a8);
  FStack_13b0.ReferenceController._0_4_ = 0;
  local_1278 = 0;
  local_728 = IsRecentsThemeActive;
  uStack_720 = 0;
  uStack_71c = FStack_13b0.ReferenceController._4_4_;
  local_1270 = 0;
  pTVar18 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SColorThemesViewer>
                      (&local_368,this,(pmf_f3ce66f8 *)&local_728);
  local_818._16_8_ = 0;
  local_818._0_8_ = 0;
  local_818._8_8_ = 0;
  pTVar19 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_818);
  FStack_13b0.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)FStack_13b0.ReferenceController._4_4_ << 0x20);
  local_718 = SetCurrentColorTheme;
  pTStack_710 = FStack_13b0.ReferenceController;
  pTVar20 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SColorThemesViewer,TSharedPtr<FColorTheme,1>_&>
                      (&local_380,this,(pmf_5dc3998f *)&local_718,&Recents);
  pFVar21 = FUIAction::FUIAction(&local_608,pTVar20,pTVar19,pTVar18,RepeatDisabled);
  local_12c0 = 0;
  local_1280 = 0;
  pFVar17 = ::FName::FName(local_7e0,"Icons.Recent");
  FVar1 = *pFVar17;
  FVar22 = FAppStyle::GetAppStyleSetName();
  pFVar23 = FSlateIcon::FSlateIcon(&local_2d8,*(FName *)FVar22,FVar1,(FName)0x0,(FName)0x0);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6f8,L"SColorThemes",L"RecentsThemeToolTip",L"Recently used colors");
  FText::FText(&local_988.Value,pFVar24);
  local_988.bIsSet = true;
  local_988.Getter._16_8_ = 0;
  local_988.Getter._0_8_ = 0;
  local_988.Getter._8_8_ = 0;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_708,L"SColorThemes",L"RecentsTheme",L"Recents");
  FText::FText(&local_e28.Value,pFVar24);
  local_e28.bIsSet = true;
  local_e28.Getter._0_8_ = 0;
  local_e28.Getter._8_8_ = 0;
  local_e28.Getter._16_8_ = 0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,&local_e28,&local_988,pFVar23,pFVar21,(FName)0x0,
             RadioButton,(FName)0x0,pTVar16,pTVar15);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e28.Getter);
  if (local_e28.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e28.Value.TextData.Reference + 0x10))();
  }
  if (local_708.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_708.TextData.Reference + 0x10))();
  }
  TAttribute<FText>::~TAttribute<FText>(&local_988);
  if (local_6f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6f8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_608.IsActionVisibleDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_608.GetActionCheckState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_608.CanExecuteAction);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_608);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6a8.Getter);
  if (local_6a8.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a8.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_628.Getter);
  FMenuBuilder::EndSection(param_1);
  pTVar14 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_130);
  pTVar15 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_6c8);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6e8,L"SColorThemes",L"SavedThemes",L"Saved Color Themes");
  TAttribute<FText>::TAttribute<FText>(&local_678,pFVar24);
  pFVar17 = ::FName::FName(&local_7d0,"SavedThemes");
  FMenuBuilder::BeginSection(param_1,*pFVar17,&local_678,pTVar15,pTVar14);
  TAttribute<FText>::~TAttribute<FText>(&local_678);
  FText::~FText(&local_6e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_6c8.Getter);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_130);
  local_res20 = ColorThemes.ArrayNum;
  uVar28 = ColorThemes._8_8_ & 0xffffffff;
  local_1140 = ColorThemes.AllocatorInstance.Data + (longlong)(int)local_res20 * 0x10;
  FVar30 = ColorThemes.AllocatorInstance;
  pSVar31 = this;
  do {
    pFVar11 = local_1140;
    if (ColorThemes.ArrayNum != (int)uVar28) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<TSharedPtr<FColorTheme,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar30.Data == pFVar11) {
      FMenuBuilder::EndSection(param_1);
      local_1088.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_1088.bIsSet = false;
      local_1308 = 0;
      local_1088.Getter._16_8_ = 0;
      local_1088.Getter._0_8_ = 0;
      local_1088.Getter._8_8_ = 0;
      FMenuBuilder::AddMenuSeparator(param_1,(FName)0x0,&local_1088);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1088.Getter);
      memset(&local_1038,0,200);
      local_1038.Value.Wrapping.Priority.Value = 0;
      local_1038.Value.ClippingPriority.Getter._16_8_ = 0;
      local_1038.Value.AllowClipping.Getter._16_8_ = 0;
      local_1038.Value.VisibleInOverflow.Getter._16_8_ = 0;
      local_1038.Value.Wrapping.Allow.Getter._16_8_ = 0;
      local_1038.Value.Wrapping.Priority.Getter._16_8_ = 0;
      local_1038.Value.Wrapping.Mode.Getter._16_8_ = 0;
      local_1038.Getter._16_8_ = 0;
      local_10e8.Getter._16_8_ = 0;
      local_1038.Value.ClippingPriority.Getter._0_8_ = 0;
      local_1038.Value.ClippingPriority.Getter._8_8_ = 0;
      local_1038.Value.AllowClipping.Value = false;
      local_1038.Value.AllowClipping.bIsSet = false;
      local_1038.Value.AllowClipping.Getter._0_8_ = 0;
      local_1038.Value.AllowClipping.Getter._8_8_ = 0;
      local_1038.Value.VisibleInOverflow.Value = false;
      local_1038.Value.VisibleInOverflow.bIsSet = false;
      local_1038.Value.VisibleInOverflow.Getter._0_8_ = 0;
      local_1038.Value.VisibleInOverflow.Getter._8_8_ = 0;
      local_1038.Value.Wrapping.Allow.Value = false;
      local_1038.Value.Wrapping.Allow.bIsSet = false;
      local_1038.Value.Wrapping.Allow.Getter._0_8_ = 0;
      local_1038.Value.Wrapping.Allow.Getter._8_8_ = 0;
      local_1038.Value.Wrapping.Priority.bIsSet = false;
      local_1038.Value.Wrapping.Priority.Getter._0_8_ = 0;
      local_1038.Value.Wrapping.Priority.Getter._8_8_ = 0;
      local_1038.Value.Wrapping.Mode.Value = Preferred;
      local_1038.Value.Wrapping.Mode.bIsSet = false;
      local_1038.Value.Wrapping.Mode.Getter._0_8_ = 0;
      local_1038.Value.Wrapping.Mode.Getter._8_8_ = 0;
      local_1038.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
      local_1038.Value.Wrapping.ForceNewLine.bIsSet = false;
      local_1038.bIsSet = false;
      local_1038.Getter._0_8_ = 0;
      local_1038.Getter._8_8_ = 0;
      local_10e8.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_10e8.bIsSet = false;
      local_10e8.Getter._0_8_ = 0;
      local_10e8.Getter._8_8_ = 0;
      FText::FText(&local_dc8.Value);
      local_dc8.bIsSet = false;
      local_dc8.Getter._16_8_ = 0;
      local_dc8.Getter._0_8_ = 0;
      local_dc8.Getter._8_8_ = 0;
      pFVar17 = ::FName::FName(&local_770,"AddThemeSection");
      FMenuBuilder::BeginSection(param_1,*pFVar17,&local_dc8,&local_10e8,&local_1038);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_dc8.Getter);
      if (local_dc8.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_dc8.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10e8.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1038.Getter);
      FMenuEntryResizeParams::~FMenuEntryResizeParams(&local_1038.Value);
      local_1138.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_1138.bIsSet = false;
      local_1138.Getter._16_8_ = 0;
      local_1138.Getter._0_8_ = 0;
      local_1138.Getter._8_8_ = 0;
      FText::FText(&local_d38.Value);
      FStack_13b0.ReferenceController = FStack_13b0.ReferenceController & 0xffffffff00000000;
      local_d38.bIsSet = false;
      local_898 = NewColorTheme;
      pTStack_890 = FStack_13b0.ReferenceController;
      local_d38.Getter._0_8_ = 0;
      local_d38.Getter._8_8_ = 0;
      local_d38.Getter._16_8_ = 0;
      local_12f0 = 0;
      local_12e8 = 0;
      local_1050._16_8_ = 0;
      local_1050._0_8_ = 0;
      local_1050._8_8_ = 0;
      pTVar20 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SColorThemesViewer>(&local_398,this,(pmf_47834e30 *)&local_898);
      pFVar21 = FUIAction::FUIAction(&local_538,pTVar20,&local_1050,RepeatDisabled);
      local_1300 = 0;
      local_12f8 = 0;
      pFVar17 = ::FName::FName(local_768,"Icons.PlusCircle");
      FVar1 = *pFVar17;
      FVar22 = FAppStyle::GetAppStyleSetName();
      pFVar23 = FSlateIcon::FSlateIcon(&local_298,*(FName *)FVar22,FVar1,(FName)0x0,(FName)0x0);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_878,L"SColorThemes",L"CreateNewThemeTooltip",L"Create New Theme");
      FText::FText(&local_d68.Value,pFVar24);
      local_d68.bIsSet = true;
      local_d68.Getter._16_8_ = 0;
      local_d68.Getter._0_8_ = 0;
      local_d68.Getter._8_8_ = 0;
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_888,L"SColorThemes",L"CreateNewTheme",L"Create New Theme");
      FText::FText(&local_d98.Value,pFVar24);
      local_d98.bIsSet = true;
      local_d98.Getter._16_8_ = 0;
      local_d98.Getter._0_8_ = 0;
      local_d98.Getter._8_8_ = 0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,&local_d98,&local_d68,pFVar23,pFVar21,(FName)0x0,
                 CollapsedButton,(FName)0x0,&local_d38,&local_1138);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d98.Getter);
      if (local_d98.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d98.Value.TextData.Reference + 0x10))();
      }
      if (local_888.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_888.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d68.Getter);
      if (local_d68.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d68.Value.TextData.Reference + 0x10))();
      }
      if (local_878.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_878.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538.IsActionVisibleDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d38.Getter);
      if (local_d38.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d38.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1138.Getter);
      FMenuBuilder::EndSection(param_1);
      memset(&local_f50,0,200);
      local_f50.Value.Wrapping.Priority.Value = 0;
      local_f50.Value.ClippingPriority.Getter._16_8_ = 0;
      local_f50.Value.AllowClipping.Getter._16_8_ = 0;
      local_f50.Value.VisibleInOverflow.Getter._16_8_ = 0;
      local_f50.Value.Wrapping.Allow.Getter._16_8_ = 0;
      local_f50.Value.Wrapping.Priority.Getter._16_8_ = 0;
      local_f50.Value.Wrapping.Mode.Getter._16_8_ = 0;
      local_f50.Getter._16_8_ = 0;
      local_1118.Getter._16_8_ = 0;
      local_f50.Value.ClippingPriority.Getter._0_8_ = 0;
      local_f50.Value.ClippingPriority.Getter._8_8_ = 0;
      local_f50.Value.AllowClipping.Value = false;
      local_f50.Value.AllowClipping.bIsSet = false;
      local_f50.Value.AllowClipping.Getter._0_8_ = 0;
      local_f50.Value.AllowClipping.Getter._8_8_ = 0;
      local_f50.Value.VisibleInOverflow.Value = false;
      local_f50.Value.VisibleInOverflow.bIsSet = false;
      local_f50.Value.VisibleInOverflow.Getter._0_8_ = 0;
      local_f50.Value.VisibleInOverflow.Getter._8_8_ = 0;
      local_f50.Value.Wrapping.Allow.Value = false;
      local_f50.Value.Wrapping.Allow.bIsSet = false;
      local_f50.Value.Wrapping.Allow.Getter._0_8_ = 0;
      local_f50.Value.Wrapping.Allow.Getter._8_8_ = 0;
      local_f50.Value.Wrapping.Priority.bIsSet = false;
      local_f50.Value.Wrapping.Priority.Getter._0_8_ = 0;
      local_f50.Value.Wrapping.Priority.Getter._8_8_ = 0;
      local_f50.Value.Wrapping.Mode.Value = Preferred;
      local_f50.Value.Wrapping.Mode.bIsSet = false;
      local_f50.Value.Wrapping.Mode.Getter._0_8_ = 0;
      local_f50.Value.Wrapping.Mode.Getter._8_8_ = 0;
      local_f50.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
      local_f50.Value.Wrapping.ForceNewLine.bIsSet = false;
      local_f50.bIsSet = false;
      local_f50.Getter._0_8_ = 0;
      local_f50.Getter._8_8_ = 0;
      local_1118.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_1118.bIsSet = false;
      local_1118.Getter._0_8_ = 0;
      local_1118.Getter._8_8_ = 0;
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_868,L"SColorThemes",L"EditThemeSection",L"Edit Current Theme");
      FText::FText(&local_d08.Value,pFVar24);
      local_d08.bIsSet = true;
      local_d08.Getter._16_8_ = 0;
      local_d08.Getter._0_8_ = 0;
      local_d08.Getter._8_8_ = 0;
      pFVar17 = ::FName::FName(&local_758,"EditCurrentThemeSection");
      FMenuBuilder::BeginSection(param_1,*pFVar17,&local_d08,&local_1118,&local_f50);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d08.Getter);
      if (local_d08.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d08.Value.TextData.Reference + 0x10))();
      }
      if (local_868.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_868.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1118.Getter);
      TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_f50);
      local_10a8.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_10a8.bIsSet = false;
      local_10a8.Getter._16_8_ = 0;
      local_10a8.Getter._0_8_ = 0;
      local_10a8.Getter._8_8_ = 0;
      FText::FText(&local_ca8.Value);
      local_ca8.bIsSet = false;
      local_ca8.Getter._16_8_ = 0;
      local_12d0.ComparisonIndex.Value = 0;
      local_12d0.Number = 0;
      local_ca8.Getter._0_8_ = 0;
      local_ca8.Getter._8_8_ = 0;
      local_12c8.ComparisonIndex.Value = 0;
      local_12c8.Number = 0;
      local_1190 = (undefined1  [8])0x0;
      local_1188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1188.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1190,
                 (FWriteAccessScope *)&local_8f8);
      local_8e0 = &local_1188;
      puVar25 = UE::Core::Private::DelegateAllocate(0x20,&local_1188);
      if (puVar25 != (undefined8 *)0x0) {
        *puVar25 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar26 = FDelegateHandle::GenerateNewID();
        puVar25[2] = uVar26;
        *puVar25 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_2>_>
                    ::_vftable_;
        puVar25[3] = this;
      }
      if (local_8f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8f8.Accessor,&local_8f8);
      }
      FStack_13b0.ReferenceController = FStack_13b0.ReferenceController & 0xffffffff00000000;
      local_858 = StartRename;
      pTStack_850 = FStack_13b0.ReferenceController;
      pTVar20 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SColorThemesViewer>(&local_320,this,(pmf_47834e30 *)&local_858);
      pFVar21 = FUIAction::FUIAction
                          (&local_4d0,pTVar20,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1190,
                           RepeatDisabled);
      local_12e0 = 0;
      local_12d8 = 0;
      pFVar17 = ::FName::FName(&local_750,"GenericCommands.Rename");
      FVar1 = *pFVar17;
      FVar22 = FAppStyle::GetAppStyleSetName();
      pFVar23 = FSlateIcon::FSlateIcon(&local_278,*(FName *)FVar22,FVar1,(FName)0x0,(FName)0x0);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_838,L"SColorThemes",L"RenameThemeToolTip",
                           L"Rename the currently selected color theme");
      FText::FText(&local_cd8.Value,pFVar24);
      local_cd8.bIsSet = true;
      local_cd8.Getter._16_8_ = 0;
      local_cd8.Getter._0_8_ = 0;
      local_cd8.Getter._8_8_ = 0;
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_848,L"SColorThemes",L"RenameTheme",L"Rename");
      FText::FText((FText *)local_11f0,pFVar24);
      local_11f0[0x10] = true;
      local_11c8 = 0;
      local_11d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_11d0.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_11f0,&local_cd8,pFVar23,
                 pFVar21,local_12c8,CollapsedButton,local_12d0,&local_ca8,&local_10a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_11d8,(FWriteAccessScope *)&local_9a0);
      if (((int)local_11c8 != 0) && (FStack_11d0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_11d0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11d0,0,0,0x10);
        local_11c8 = local_11c8 & 0xffffffff00000000;
      }
      if (local_9a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a0.Accessor,&local_9a0);
      }
      if (FStack_11d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_11d0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_11d8.AccessDetector);
      if ((ITextData *)local_11f0._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_11f0._0_8_ + 0x10))();
      }
      if (local_848.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_848.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_cd8.Getter);
      if (local_cd8.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_cd8.Value.TextData.Reference + 0x10))();
      }
      if (local_838.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_838.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4d0.IsActionVisibleDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4d0.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4d0.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4d0);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ca8.Getter);
      if (local_ca8.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_ca8.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10a8.Getter);
      local_13a8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_13a8[1] = false;
      local_1390 = 0;
      local_13a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1398.Data = (FScriptContainerElement *)0x0;
      FText::FText(&local_c78.Value);
      local_c78.bIsSet = false;
      local_c78.Getter._16_8_ = 0;
      local_12b0.ComparisonIndex.Value = 0;
      local_12b0.Number = 0;
      local_c78.Getter._0_8_ = 0;
      local_c78.Getter._8_8_ = 0;
      local_12a8.ComparisonIndex.Value = 0;
      local_12a8.Number = 0;
      local_1178 = (undefined1  [8])0x0;
      local_1170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1170.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1178,
                 (FWriteAccessScope *)&local_8d8);
      local_8c0 = &local_1170;
      puVar25 = UE::Core::Private::DelegateAllocate(0x20,&local_1170);
      if (puVar25 != (undefined8 *)0x0) {
        *puVar25 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar26 = FDelegateHandle::GenerateNewID();
        puVar25[2] = uVar26;
        *puVar25 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_3>_>
                    ::_vftable_;
        puVar25[3] = this;
      }
      if (local_8d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8d8.Accessor,&local_8d8);
      }
      FStack_13b0.ReferenceController = FStack_13b0.ReferenceController & 0xffffffff00000000;
      local_828 = DuplicateColorTheme;
      pTStack_820 = FStack_13b0.ReferenceController;
      pTVar20 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SColorThemesViewer>(&local_338,this,(pmf_47834e30 *)&local_828);
      pFVar21 = FUIAction::FUIAction
                          (&local_468,pTVar20,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1178,
                           RepeatDisabled);
      local_1258 = 0;
      local_12b8 = 0;
      pFVar17 = ::FName::FName(local_748,"Icons.Duplicate");
      FVar1 = *pFVar17;
      FVar22 = FAppStyle::GetAppStyleSetName();
      pFVar23 = FSlateIcon::FSlateIcon(&local_238,*(FName *)FVar22,FVar1,(FName)0x0,(FName)0x0);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_798,L"SColorThemes",L"DuplicateThemeTooltip",
                           L"Duplicate the currently selected color theme");
      FText::FText((FText *)local_1250,pFVar24);
      local_1250[0x10] = true;
      local_1228 = 0;
      local_1238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1230.Data = (FScriptContainerElement *)0x0;
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_788,L"SColorThemes",L"DuplicateTheme",L"Duplicate");
      FText::FText((FText *)local_1220,pFVar24);
      local_1220[0x10] = true;
      local_11f8 = 0;
      local_1208.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1200.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_1220,
                 (TAttribute<FText> *)local_1250,pFVar23,pFVar21,local_12a8,CollapsedButton,
                 local_12b0,&local_c78,(TAttribute<EVisibility> *)local_13a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1208,(FWriteAccessScope *)&local_9e8);
      if (((int)local_11f8 != 0) && (FStack_1200.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1200.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1200,0,0,0x10);
        local_11f8 = local_11f8 & 0xffffffff00000000;
      }
      if (local_9e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9e8.Accessor,&local_9e8);
      }
      if (FStack_1200.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1200.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1208.AccessDetector);
      if ((ITextData *)local_1220._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1220._0_8_ + 0x10))();
      }
      if (local_788.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_788.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_1238,(FWriteAccessScope *)&local_9d0);
      if (((int)local_1228 != 0) && (FStack_1230.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1230.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1230,0,0,0x10);
        local_1228 = local_1228 & 0xffffffff00000000;
      }
      if (local_9d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9d0.Accessor,&local_9d0);
      }
      if (FStack_1230.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1230.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1238.AccessDetector);
      if ((ITextData *)local_1250._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_1250._0_8_ + 0x10))();
      }
      if (local_798.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_798.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_468.IsActionVisibleDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_468.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_468.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_468);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c78.Getter);
      if (local_c78.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c78.Value.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_13a0,(FWriteAccessScope *)&local_9b8);
      if (((int)local_1390 != 0) && (FStack_1398.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1398.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1398,0,0,0x10);
        local_1390 = local_1390 & 0xffffffff00000000;
      }
      if (local_9b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9b8.Accessor,&local_9b8);
      }
      if (FStack_1398.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1398.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_13a0.AccessDetector);
      local_10c8.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
      local_10c8.bIsSet = false;
      local_10c8.Getter._16_8_ = 0;
      local_10c8.Getter._0_8_ = 0;
      local_10c8.Getter._8_8_ = 0;
      FText::FText(&local_c18.Value);
      local_c18.bIsSet = false;
      local_c18.Getter._16_8_ = 0;
      local_1290.ComparisonIndex.Value = 0;
      local_1290.Number = 0;
      local_c18.Getter._0_8_ = 0;
      local_c18.Getter._8_8_ = 0;
      local_1288.ComparisonIndex.Value = 0;
      local_1288.Number = 0;
      local_1160 = (undefined1  [8])0x0;
      local_1158.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1158.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1160,
                 (FWriteAccessScope *)&local_918);
      local_900 = &local_1158;
      puVar25 = UE::Core::Private::DelegateAllocate(0x20,&local_1158);
      if (puVar25 != (undefined8 *)0x0) {
        *puVar25 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar26 = FDelegateHandle::GenerateNewID();
        puVar25[2] = uVar26;
        *puVar25 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`13'::<lambda_4>_>
                    ::_vftable_;
        puVar25[3] = this;
      }
      if (local_918.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
      }
      FStack_13b0.ReferenceController = FStack_13b0.ReferenceController & 0xffffffff00000000;
      local_7a8 = DeleteColorTheme;
      pTStack_7a0 = FStack_13b0.ReferenceController;
      pTVar20 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSP<SColorThemesViewer>(&local_350,this,(pmf_47834e30 *)&local_7a8);
      pFVar21 = FUIAction::FUIAction
                          (&local_400,pTVar20,
                           (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1160,
                           RepeatDisabled);
      local_12a0 = 0;
      local_1298 = 0;
      pFVar17 = ::FName::FName(local_738,"Icons.Delete");
      FVar1 = *pFVar17;
      FVar22 = FAppStyle::GetAppStyleSetName();
      pFVar23 = FSlateIcon::FSlateIcon(&local_258,*(FName *)FVar22,FVar1,(FName)0x0,(FName)0x0);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_e38,L"SColorThemes",L"DeleteThemeTooltip",
                           L"Delete the currently selected color theme");
      FText::FText(&local_c48.Value,pFVar24);
      local_c48.bIsSet = true;
      local_c48.Getter._16_8_ = 0;
      local_c48.Getter._0_8_ = 0;
      local_c48.Getter._8_8_ = 0;
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_7c0,L"SColorThemes",L"DeleteTheme",L"Delete");
      FText::FText(&local_e68.Value,pFVar24);
      local_e68.bIsSet = true;
      local_e68.Getter._16_8_ = 0;
      local_e68.Getter._0_8_ = 0;
      local_e68.Getter._8_8_ = 0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,&local_e68,&local_c48,pFVar23,pFVar21,local_1288,
                 CollapsedButton,local_1290,&local_c18,&local_10c8);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e68.Getter);
      if (local_e68.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e68.Value.TextData.Reference + 0x10))();
      }
      if (local_7c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_7c0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c48.Getter);
      if (local_c48.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c48.Value.TextData.Reference + 0x10))();
      }
      if (local_e38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e38.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_400.IsActionVisibleDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_400.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_400.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_400);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c18.Getter);
      if (local_c18.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c18.Value.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10c8.Getter);
      FMenuBuilder::EndSection(param_1);
      return;
    }
    FUIAction::FUIAction((FUIAction *)local_be8);
    local_b80 = 0;
    pTStack_b78 = (TReferenceControllerBase<1> *)0x0;
    local_b60 = 0;
    local_b70 = 0;
    pTStack_b68 = (TReferenceControllerBase<1> *)0x0;
    local_b58 = 0;
    FText::FText(&local_b50);
    local_b40 = false;
    local_b38._16_8_ = 0;
    local_b38._0_8_ = 0;
    local_b38._8_8_ = 0;
    FText::FText(&local_b20);
    local_b10 = false;
    local_b08._16_8_ = 0;
    local_b08._0_8_ = 0;
    local_b08._8_8_ = 0;
    FText::FText(&local_af0);
    local_ae0 = false;
    local_ad8._16_8_ = 0;
    local_ac0.Getter._16_8_ = 0;
    local_ad8._0_8_ = 0;
    local_ad8._8_8_ = 0;
    local_ac0.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_ac0.bIsSet = false;
    local_ac0.Getter._0_8_ = 0;
    local_ac0.Getter._8_8_ = 0;
    FSlateIcon::FSlateIcon(&local_aa0);
    local_a80._0_8_ = 0;
    local_a80._8_8_ = 0;
    local_a80._16_4_ = 0;
    local_a68._0_8_ = 0;
    local_a68._8_8_ = 0;
    local_a68._16_4_ = 0;
    local_a50 = (SEditableTextBox *)0x0;
    FStack_a48.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a40._0_1_ = false;
    local_a40._1_1_ = true;
    local_a38 = (FExtender *)0x0;
    FStack_a30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a3e = false;
    local_a3c = false;
    local_a28 = true;
    local_a24.ComparisonIndex.Value = 0;
    local_a24.Number = 0;
    local_b58 = CONCAT11(local_b58._1_1_,4);
    if ((*(longlong *)FVar30.Data == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar24 = FText::FromString(&local_6d8,*(FString **)FVar30.Data);
    FText::FText(&local_1340,pFVar24);
    local_1330 = 1;
    local_1318 = 0;
    local_1328 = (undefined1  [8])0x0;
    FStack_1320.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&local_b50,&local_1340);
    local_b40 = (bool)local_1330;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (&local_b38,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1328);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1328,
               (FWriteAccessScope *)&local_a18);
    if (((int)local_1318 != 0) && (FStack_1320.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1320.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1320,0,0,0x10);
      local_1318 = local_1318 & 0xffffffff00000000;
    }
    if (local_a18.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a18.Accessor,&local_a18);
    }
    if (FStack_1320.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1320.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1328);
    if (local_1340.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1340.TextData.Reference + 0x10))();
    }
    if (local_6d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6d8.TextData.Reference + 0x10))();
    }
    if ((*(longlong *)FVar30.Data == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar24 = FText::FromString(&local_8b8,*(FString **)FVar30.Data);
    FText::FText(&local_1370,pFVar24);
    local_1360 = 1;
    local_1348 = 0;
    local_1358 = (undefined1  [8])0x0;
    FStack_1350.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&local_b20,&local_1370);
    local_b10 = (bool)local_1360;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (&local_b08,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_1358);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1358,
               (FWriteAccessScope *)&local_a00);
    if (((int)local_1348 != 0) && (FStack_1350.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1350.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1350,0,0,0x10);
      local_1348 = local_1348 & 0xffffffff00000000;
    }
    if (local_a00.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a00.Accessor,&local_a00);
    }
    if (FStack_1350.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1350.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1358);
    if (local_1370.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1370.TextData.Reference + 0x10))();
    }
    if (local_8b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8b8.TextData.Reference + 0x10))();
    }
    local_1268.ComparisonIndex.Value = 0;
    local_1268.Number = 0;
    local_1260.ComparisonIndex.Value = 0;
    local_1260.Number = 0;
    pFVar17 = ::FName::FName(&local_7c8,"ColorPicker.ColorThemesSmall");
    FVar1 = *pFVar17;
    FVar22 = FAppStyle::GetAppStyleSetName();
    pFVar23 = FSlateIcon::FSlateIcon(&local_2b8,*(FName *)FVar22,FVar1,local_1260,local_1268);
    pTVar2 = *(TReferenceControllerBase<1> **)(FVar30.Data + 8);
    local_aa0.StyleSetName = pFVar23->StyleSetName;
    local_aa0.StyleName = pFVar23->StyleName;
    local_aa0.SmallStyleName = pFVar23->SmallStyleName;
    local_aa0.StatusOverlayStyleName = pFVar23->StatusOverlayStyleName;
    local_1388 = *(SWidget **)FVar30.Data;
    local_a3d = RadioButton;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar32 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar32 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar32 = (atomic<int>)((int)*paVar32 + 1);
      UNLOCK();
    }
    local_11c0 = (undefined1  [8])0x0;
    local_11b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_11b8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11c0,
               (FWriteAccessScope *)&local_938);
    local_920 = &local_11b8;
    puVar25 = UE::Core::Private::DelegateAllocate(0x28,&local_11b8);
    if (puVar25 != (undefined8 *)0x0) {
      *puVar25 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar25[2] = uVar26;
      *puVar25 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::`8'::<lambda_1>_>
                  ::_vftable_;
      puVar25[3] = local_1388;
      puVar25[4] = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar32 = (atomic<int>)((int)*paVar32 + 1);
        UNLOCK();
      }
    }
    if (local_938.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_938.Accessor,&local_938);
    }
    local_1068._16_8_ = 0;
    local_1068._0_8_ = 0;
    local_1068._8_8_ = 0;
    local_11a8 = (undefined1  [8])0x0;
    local_11a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_11a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11a8,
               (FWriteAccessScope *)&local_958);
    local_940 = &local_11a0;
    puVar25 = UE::Core::Private::DelegateAllocate(0x40,&local_11a0);
    if (puVar25 != (undefined8 *)0x0) {
      local_10f8 = SetCurrentColorTheme;
      uStack_10f0 = 0;
      uStack_10ec = local_e38._12_4_;
      pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_8a8);
      pSVar31 = (SColorThemesViewer *)(pTVar27->SharedReferenceCount).ReferenceController;
      local_1388 = pTVar27->Object;
      if (pSVar31 != (SColorThemesViewer *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar31->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar31->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar31->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar31->_padding_ + 1);
        UNLOCK();
      }
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      *puVar25 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFColorTheme___00____6B_
      ;
      puVar25[1] = *(longlong *)FVar30.Data;
      lVar3 = *(longlong *)(FVar30.Data + 8);
      puVar25[2] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_1148 = pSVar31;
      uVar26 = FDelegateHandle::GenerateNewID();
      puVar25[3] = uVar26;
      *puVar25 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSColorThemesViewer___00__A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFColorTheme___00____6B_
      ;
      puVar25[4] = local_1388;
      puVar25[5] = pSVar31;
      if (pSVar31 != (SColorThemesViewer *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar31->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar31->_padding_)[1] + 1);
        UNLOCK();
      }
      puVar25[6] = local_10f8;
      puVar25[7] = CONCAT44(uStack_10ec,uStack_10f0);
    }
    if (bVar7) {
      bVar7 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar31);
    }
    if (bVar8) {
      bVar8 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_1148);
    }
    if (bVar9) {
      bVar9 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_8a8.SharedReferenceCount.ReferenceController);
    }
    if (local_958.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_958.Accessor,&local_958);
    }
    pFVar21 = FUIAction::FUIAction
                        (&local_5a0,
                         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_11a8,
                         &local_1068,
                         (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_11c0,
                         RepeatDisabled);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar21);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_be8 + 0x18),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (&local_bb8,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->GetActionCheckState
              );
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (&local_ba0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar21->IsActionVisibleDelegate);
    local_b88 = pFVar21->RepeatMode;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5a0.IsActionVisibleDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5a0.GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5a0.CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_5a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FVar29 = CurrentlySelectedThemePtr.WeakReferenceCount;
    local_1310 = 0;
    local_b60 = 0;
    pFVar33 = (FColorTheme *)0x0;
    if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar10 = (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
               SharedReferenceCount;
      do {
        if (aVar10 == (atomic<int>)0x0) {
          FVar29.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar33 = (FColorTheme *)0x0;
          break;
        }
        LOCK();
        aVar13 = (FVar29.ReferenceController)->SharedReferenceCount;
        bVar12 = aVar10 == aVar13;
        if (bVar12) {
          (FVar29.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
          aVar13 = aVar10;
        }
        UNLOCK();
        pFVar33 = CurrentlySelectedThemePtr.Object;
        aVar10 = aVar13;
      } while (!bVar12);
    }
    pFVar4 = *(FColorTheme **)FVar30.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar29.ReferenceController);
    if (pFVar4 == pFVar33) {
      if (((this->RenameTextBox).Object == (SEditableTextBox *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pSVar5 = (this->RenameTextBox).Object;
      if (*(char *)((longlong)&pSVar5->_padding_ + 2) != '\0') {
        if ((pSVar5 == (SEditableTextBox *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = (this->RenameTextBox).Object;
        if ((*(longlong *)FVar30.Data == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar24 = FText::FromString(&local_800,*(FString **)FVar30.Data);
        FText::FText(&local_df8.Value,pFVar24);
        local_df8.bIsSet = true;
        local_df8.Getter._16_8_ = 0;
        local_df8.Getter._0_8_ = 0;
        local_df8.Getter._8_8_ = 0;
        SEditableTextBox::SetText(pSVar5,&local_df8);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_df8.Getter);
        if (local_df8.Value.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_df8.Value.TextData.Reference + 0x10))();
        }
        if (local_800.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_800.TextData.Reference + 0x10))();
        }
        if (((this->RenameTextBox).Object == (SEditableTextBox *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_1380.Object = (this->RenameTextBox).Object;
        local_1380.SharedReferenceCount.ReferenceController =
             (this->RenameTextBox).SharedReferenceCount.ReferenceController;
        if (local_1380.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1380.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1380.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        if ((local_1380.Object == (SEditableTextBox *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1380.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1380.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1380.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        local_a50 = local_1380.Object;
        FStack_13b0.ReferenceController = local_1380.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a48,&FStack_13b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_13b0.ReferenceController);
        TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_1380);
      }
    }
    FBaseMenuBuilder::AddMenuEntry((FBaseMenuBuilder *)param_1,(FMenuEntryParams *)local_be8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a48.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a68);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a80);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ac0.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ad8);
    if (local_af0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_af0.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_b08);
    if (local_b20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b20.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_b38);
    if (local_b50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b50.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b68)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b78)
    ;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_ba0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_bb8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_be8 + 0x18));
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8);
    FVar30.Data = FVar30.Data + 0x10;
    uVar28 = (ulonglong)local_res20;
  } while( true );
}

// CommitThemeName @ 14301fae0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SColorThemesViewer::CommitThemeName(SColorThemesViewer *this,FText *param_1,Type param_2)

{
  if (param_2 == OnEnter) {
    UpdateThemeNameFromTextBox(this);
    StopRename(this);
  }
  return;
}

// Construct @ 143022950

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::Construct(SColorThemesViewer *this,FArguments *param_1)

{
  bool bVar1;
  int iVar2;
  TSharedRef<FColorTheme,1> *pTVar3;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SMultiBoxWidget,1> *pTVar4;
  FName *pFVar5;
  FText *pFVar6;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SImage,1> *pTVar7;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar8;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SComboButton,1> *pTVar9;
  longlong lVar10;
  code **ppcVar11;
  undefined1 *puVar12;
  pmf_d8847f34 *ppVar13;
  pmf_dc9be694 *ppVar14;
  pmf_0c763265 *ppVar15;
  bool local_1663;
  bool local_1662;
  bool local_1661;
  T0RequiredArgs local_1660;
  T0RequiredArgs local_165f;
  T0RequiredArgs local_165e;
  T0RequiredArgs local_165d;
  T0RequiredArgs local_165c [4];
  undefined4 local_1658;
  int local_1654 [5];
  TAttribute<bool> *local_1640;
  TAttribute<bool> *local_1638;
  FArguments *local_1630;
  FArguments *local_1628;
  TAttribute<bool> *local_1620;
  TAttribute<bool> *local_1618;
  FArguments *local_1610;
  TAttribute<bool> *local_1608;
  TAttribute<bool> *local_1600;
  FArguments *local_15f8;
  TAttribute<int> *local_15f0;
  TAttribute<int> *local_15e8;
  FArguments *local_15e0;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *local_15d8;
  FArguments *local_15d0;
  FArguments *local_15c8;
  FName *local_15c0;
  FName local_15b8;
  ISlateStyle *local_15b0;
  FComboButtonStyle *local_15a8;
  FArguments *local_15a0;
  FArguments *local_1598;
  TAttribute<FText> *local_1590;
  TAttribute<FText> *local_1588;
  FArguments *local_1580;
  FArguments *local_1578;
  FArguments *local_1570;
  TSharedPtr<SMultiBoxWidget,1> *local_1568;
  NamedSlotProperty<SComboButton::FArguments> *local_1560;
  FArguments *local_1558;
  TAttribute<float> *local_1550;
  TAttribute<float> *local_1548;
  FSlotArguments *local_1540;
  TAttribute<float> *local_1538;
  TAttribute<float> *local_1530;
  FSlotArguments *local_1528;
  FArguments *local_1520;
  FArguments *local_1518;
  FSlotArguments *local_1510;
  FSlotArguments *local_1508;
  FArguments *local_1500;
  FArguments *local_14f8;
  NamedSlotProperty<SComboButton::FArguments> *local_14f0;
  FArguments *local_14e8;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_14e0;
  code *local_14d8;
  undefined4 local_14d0;
  TSharedPtr<FColorTheme,1> local_14c8;
  code *local_14b8;
  undefined4 local_14b0;
  TSharedPtr<SMultiBoxWidget,1> local_14a8;
  code *local_1498;
  undefined4 local_1490;
  TSharedRef<SWidget,1> local_1488;
  TSharedRef<SWidget,1> local_1478;
  TSharedRef<SWidget,1> local_1468;
  TSharedRef<SWidget,1> local_1458;
  FName local_1448;
  TSharedRef<FColorTheme,1> local_1440;
  undefined1 local_1430 [24];
  pmf_d8847f34 local_1418;
  TSharedRef<SEditableTextBox,1> local_1408;
  TSharedRef<SMultiBoxWidget,1> local_13f8;
  undefined1 local_13e8 [16];
  pmf_dc9be694 local_13d8;
  undefined1 local_13c8 [16];
  pmf_0c763265 local_13b8;
  TSharedRef<SComboButton,1> local_13a8;
  TSharedRef<SHorizontalBox,1> local_1398;
  TSharedRef<SImage,1> local_1388;
  TSharedRef<SMultiBoxWidget,1> local_1378;
  FText local_1368;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_1358;
  TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs> local_1340;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_1328;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1310;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_12f8;
  NamedSlotProperty<SComboButton::FArguments> local_12e0;
  NamedSlotProperty<SComboButton::FArguments> local_12d0;
  TAttribute<bool> local_12c0;
  TAttribute<bool> local_12a0;
  TAttribute<bool> local_1280;
  TAttribute<int> local_1260;
  TAttribute<float> local_1240;
  TAttribute<float> local_1220;
  TAttribute<FText> local_1200;
  FSlotArguments local_11d0;
  FArguments local_10e8;
  FArguments local_ec0;
  FArguments local_cb8;
  FArguments local_a10;
  FArguments local_6d8;
  undefined8 uStack_18;
  
  uStack_18 = 0x143022966;
  if (Recents.Object == (FColorTheme *)0x0) {
    pTVar3 = MakeShared<FColorTheme,1>(&local_1440);
    TSharedPtr<FColorTheme,1>::TSharedPtr<FColorTheme,1><FColorTheme>(&local_14c8,pTVar3);
    TSharedPtr<FColorTheme,1>::operator=(&Recents,&local_14c8);
    TSharedPtr<FColorTheme,1>::~TSharedPtr<FColorTheme,1>(&local_14c8);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_1440.SharedReferenceCount);
  }
  LoadColorThemesFromIni();
  if (CurrentlySelectedThemePtr.Object != (FColorTheme *)0x0) {
    local_1654[3] = 0x55063938;
    local_1654[4] = 1;
    if ((CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController ==
         (TReferenceControllerBase<1> *)0x0) ||
       (iVar2 = SharedPointerInternals::TReferenceControllerBase<1>::GetSharedReferenceCount
                          (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController),
       iVar2 < 1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_1658 = 1;
      goto LAB_143022a59;
    }
  }
  local_1658 = 0;
LAB_143022a59:
  if ((char)local_1658 == '\0') {
    TWeakPtr<FColorTheme,1>::operator=<FColorTheme>(&CurrentlySelectedThemePtr,&Recents);
  }
  local_1630 = SEditableTextBox::FArguments::FArguments(&local_6d8);
  local_1640 = &local_12c0;
  local_1663 = false;
  local_1638 = TAttribute<bool>::TAttribute<bool>(local_1640,&local_1663);
  local_1628 = TSlateBaseNamedArgs<SEditableTextBox>::IsEnabled
                         ((TSlateBaseNamedArgs<SEditableTextBox> *)local_1630,local_1638);
  local_14b8 = CommitThemeName;
  local_14b0 = 0;
  ppcVar11 = &local_14b8;
  puVar12 = local_1430;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_1430;
  ppVar13 = &local_1418;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar13 = (pmf_d8847f34 *)&ppVar13->field_0x1;
  }
  local_1610 = SEditableTextBox::FArguments::OnTextCommitted<SColorThemesViewer>
                         (local_1628,this,&local_1418);
  local_1620 = &local_12a0;
  local_1662 = false;
  local_1618 = TAttribute<bool>::TAttribute<bool>(local_1620,&local_1662);
  local_15f8 = SEditableTextBox::FArguments::ClearKeyboardFocusOnCommit(local_1610,local_1618);
  local_1608 = &local_1280;
  local_1661 = true;
  local_1600 = TAttribute<bool>::TAttribute<bool>(local_1608,&local_1661);
  local_15e0 = SEditableTextBox::FArguments::SelectAllTextWhenFocused(local_15f8,local_1600);
  local_15f0 = &local_1260;
  local_1654[0] = 0x80;
  local_15e8 = TAttribute<int>::TAttribute<int>(local_15f0,local_1654);
  local_15d0 = SEditableTextBox::FArguments::MaximumLength(local_15e0,local_15e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1660);
  local_15d8 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                         (&local_1358,"SEditableTextBox",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                          ,0x39a,&local_1660);
  this_00 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::Expose<SEditableTextBox>
                      (local_15d8,&this->RenameTextBox);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_00,&local_1408,local_15d0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1408.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1358._Widget.SharedReferenceCount);
  SEditableTextBox::FArguments::~FArguments(&local_6d8);
  local_15c8 = SMultiBoxWidget::FArguments::FArguments(&local_10e8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_165f);
  this_01 = MakeTDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>
                      (&local_1340,"SMultiBoxWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x3a1,&local_165f);
  pTVar4 = TSlateDecl<SMultiBoxWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_13f8,local_15c8);
  TSharedPtr<SMultiBoxWidget,1>::TSharedPtr<SMultiBoxWidget,1><SMultiBoxWidget>(&local_14a8,pTVar4);
  TSharedPtr<SMultiBoxWidget,1>::operator=(&this->MultiBoxWidget,&local_14a8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_14a8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_13f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1340._Widget.SharedReferenceCount);
  TAttribute<UE::Math::TVector2<double>_>::~TAttribute<UE::Math::TVector2<double>_>
            (&local_10e8._ContentScale);
  TSlateBaseNamedArgs<SMultiBoxWidget>::~TSlateBaseNamedArgs<SMultiBoxWidget>
            ((TSlateBaseNamedArgs<SMultiBoxWidget> *)&local_10e8);
  RefreshMenuWidget(this);
  local_14e0 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_15a0 = SComboButton::FArguments::FArguments(&local_a10);
  local_15b0 = FAppStyle::Get();
  local_15c0 = &local_1448;
  pFVar5 = ::FName::FName(local_15c0,"ColorPicker.ThemesComboButton");
  local_15b8 = *pFVar5;
  local_15a8 = ISlateStyle::GetWidgetStyle<FComboButtonStyle>
                         (local_15b0,local_15b8,(char *)0x0,(FComboButtonStyle *)0x0);
  local_1598 = SComboButton::FArguments::ComboButtonStyle(local_15a0,local_15a8);
  local_1498 = OnMenuOpenChanged;
  local_1490 = 0;
  ppcVar11 = &local_1498;
  puVar12 = local_13e8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_13e8;
  ppVar14 = &local_13d8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar14 = (pmf_dc9be694 *)&ppVar14->field_0x1;
  }
  local_1580 = SComboButton::FArguments::OnMenuOpenChanged<SColorThemesViewer>
                         (local_1598,this,&local_13d8);
  local_1590 = &local_1200;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_1368,L"SColorThemes",L"ColorThemeComboButtonToolTip",
                      L"Color Theme Options");
  local_1588 = TAttribute<FText>::TAttribute<FText>(local_1590,pFVar6);
  local_1578 = TSlateBaseNamedArgs<SComboButton>::ToolTipText
                         ((TSlateBaseNamedArgs<SComboButton> *)local_1580,local_1588);
  local_1570 = SComboButton::FArguments::VAlign(local_1578,VAlign_Center);
  local_1560 = SComboButton::FArguments::MenuContent(local_1570,&local_12e0);
  local_1568 = &this->MultiBoxWidget;
  pTVar4 = TSharedPtr<SMultiBoxWidget,1>::ToSharedRef(local_1568,&local_1378);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiBoxWidget>(&local_1488,pTVar4);
  local_1558 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_1560,&local_1488);
  local_14f0 = SComboButton::FArguments::ButtonContent(local_1558,&local_12d0);
  local_1500 = SHorizontalBox::FArguments::FArguments(&local_ec0);
  local_1540 = SHorizontalBox::Slot(&local_11d0);
  local_1550 = &local_1240;
  local_1654[1] = 0x10;
  local_1548 = TAttribute<float>::TAttribute<float><int>(local_1550,local_1654 + 1);
  local_1528 = SHorizontalBox::FSlot::FSlotArguments::MinWidth(local_1540,local_1548);
  local_1538 = &local_1220;
  local_1654[2] = 0x10;
  local_1530 = TAttribute<float>::TAttribute<float><int>(local_1538,local_1654 + 2);
  local_1510 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(local_1528,local_1530);
  local_1520 = SImage::FArguments::FArguments(&local_cb8);
  local_14d8 = GetComboButtonImage;
  local_14d0 = 0;
  ppcVar11 = &local_14d8;
  puVar12 = local_13c8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *(undefined1 *)ppcVar11;
    ppcVar11 = (code **)((longlong)ppcVar11 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_13c8;
  ppVar15 = &local_13b8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar15 = (pmf_0c763265 *)&ppVar15->field_0x1;
  }
  local_1518 = SImage::FArguments::Image<SColorThemesViewer>(local_1520,this,&local_13b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_165e);
  this_02 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_12f8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x3b7,&local_165e);
  pTVar7 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_1388,local_1518);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_1458,pTVar7);
  local_1508 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_1510,&local_1458);
  local_14f8 = SHorizontalBox::FArguments::operator+(local_1500,local_1508);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_165d);
  this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1310,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x3b1,&local_165d);
  pTVar8 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_1398,local_14f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_1468,pTVar8);
  local_14e8 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_14f0,&local_1468);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_165c);
  this_04 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                      (&local_1328,"SComboButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                       ,0x3a6,local_165c);
  pTVar9 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_04,&local_13a8,local_14e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboButton>(&local_1478,pTVar9);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_14e0,&local_1478);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1478);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_13a8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1328._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1468);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_1398);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_1310);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1458);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_1388);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_12f8);
  SImage::FArguments::~FArguments(&local_cb8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_11d0);
  SHorizontalBox::FArguments::~FArguments(&local_ec0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1488);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1378.SharedReferenceCount);
  FText::~FText(&local_1368);
  SComboButton::FArguments::~FArguments(&local_a10);
  return;
}

// DeleteColorTheme @ 14302f790

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::DeleteColorTheme(SColorThemesViewer *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  TSharedPtr<FColorTheme,1> *pTVar4;
  FString *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TSharedPtr<FColorTheme,1> local_88;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_78;
  FText local_68;
  TSharedPtr<FColorTheme,1> local_58;
  TSharedPtr<FColorTheme,1> local_48;
  TSharedPtr<FColorTheme,1> local_38;
  
  pTVar4 = GetCurrentColorTheme(this,&local_48);
  if (((ColorThemes.AllocatorInstance.Data <= pTVar4) &&
      (pTVar4 < (TSharedPtr<FColorTheme,1> *)
                (ColorThemes.AllocatorInstance.Data + (longlong)ColorThemes.ArrayMax * 0x10))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar2.Data = ColorThemes.AllocatorInstance.Data;
  lVar6 = (longlong)ColorThemes.ArrayNum;
  iVar12 = ColorThemes.ArrayNum;
  if (ColorThemes.ArrayNum != 0) {
    iVar12 = 0;
    bVar3 = *(FColorTheme **)ColorThemes.AllocatorInstance.Data != pTVar4->Object;
    lVar8 = 0;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar11 = iVar10 + 1;
      if (lVar8 < lVar6) {
        pFVar7 = FVar2.Data + lVar8 * 0x10;
        do {
          if (bVar3 != (*(FColorTheme **)pFVar7 != pTVar4->Object)) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          pFVar7 = pFVar7 + 0x10;
        } while (lVar8 < lVar6);
      }
      iVar9 = iVar11 - iVar10;
      if (bVar3 == false) {
        DestructItems<TSharedPtr<FColorTheme,1>,int>
                  ((TSharedPtr<FColorTheme,1> *)(FVar2.Data + (longlong)iVar10 * 0x10),iVar9);
      }
      else {
        if (iVar12 != iVar10) {
          memmove(FVar2.Data + (longlong)iVar12 * 0x10,FVar2.Data + (longlong)iVar10 * 0x10,
                  (longlong)iVar9 << 4);
        }
        iVar12 = iVar12 + iVar9;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar6);
  }
  ColorThemes.ArrayNum = iVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (ColorThemes.ArrayNum == 0) {
    FText::AsLocalizable_Advanced_LocText(&local_68,L"SColorThemes",L"NewThemeName",L"New Theme");
    pFVar5 = FText::ToString(&local_68);
    IsColorTheme(&local_88,pFVar5);
    if (local_88.Object == (FColorTheme *)0x0) {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      pTVar4 = NewColorTheme(&local_38,pFVar5,&local_78);
      if (&local_88 != pTVar4) {
        local_88.Object = pTVar4->Object;
        pTVar4->Object = (FColorTheme *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_88.SharedReferenceCount,&pTVar4->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  local_58.Object = Recents.Object;
  local_58.SharedReferenceCount.ReferenceController =
       Recents.SharedReferenceCount.ReferenceController;
  if (Recents.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (Recents.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(Recents.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetCurrentColorTheme(this,&local_58);
  SaveColorThemesToIni();
  RefreshMenuWidget(this);
  return;
}

// DuplicateColorTheme @ 14302fbd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SColorThemesViewer::DuplicateColorTheme(SColorThemesViewer *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  FLinearColor *pFVar5;
  ITextData *pIVar6;
  code *pcVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  FColorInfo *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FString *pFVar16;
  uint uVar17;
  longlong lVar18;
  FWeakReferencer<1> FVar19;
  FWeakReferencer<1> FVar20;
  FColorTheme *pFVar21;
  FColorTheme *pFVar22;
  FColorInfo *pFVar23;
  uint uVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_138;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  longlong local_118;
  TSharedPtr<FColorInfo,1> local_110;
  longlong local_100;
  TRawPtrProxy<FColorInfo> local_f8;
  FTextFormat local_f0;
  FText local_e0;
  FFormatArgumentValue local_d0;
  FLinearColor *local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  FText local_a0;
  TSharedPtr<FColorTheme,1> local_88;
  TSharedPtr<FColorTheme,1> local_78;
  FText local_68;
  FTextFormat local_58;
  
  FVar20.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar21 = (FColorTheme *)0x0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  FVar19.ReferenceController = FVar20.ReferenceController;
  pFVar22 = pFVar21;
  if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
LAB_14302fc36:
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    FVar20.ReferenceController = FVar19.ReferenceController;
    if (bVar26) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    aVar8 = (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    do {
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
      pFVar22 = (FColorTheme *)0x0;
      if (aVar8 == (atomic<int>)0x0) goto LAB_14302fc36;
      LOCK();
      aVar9 = (FVar20.ReferenceController)->SharedReferenceCount;
      bVar26 = aVar8 == aVar9;
      if (bVar26) {
        (FVar20.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar9 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar9;
    } while (!bVar26);
    FVar19.ReferenceController = FVar20.ReferenceController;
    pFVar22 = CurrentlySelectedThemePtr.Object;
    if (CurrentlySelectedThemePtr.Object == (FColorTheme *)0x0) goto LAB_14302fc36;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar20.ReferenceController);
  if (0 < (pFVar22->Colors).ArrayNum) {
    local_118 = 0;
    local_100 = 0;
    do {
      lVar25 = local_100;
      lVar18 = local_118;
      pFVar12 = ::operator_new(0x20);
      uVar24 = (uint)pFVar21;
      pFVar23 = (FColorInfo *)0x0;
      if (pFVar12 != (FColorInfo *)0x0) {
        uVar17 = 0;
        if ((int)uVar24 < (pFVar22->Colors).ArrayNum) {
          uVar17 = ~uVar24 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (pFVar22->Colors).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar25) == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = *(longlong *)(pFVar1 + lVar25);
        pIVar2 = *(ITextData **)(lVar18 + 0x10);
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
        }
        uVar17 = *(uint *)(lVar18 + 0x18);
        uVar10 = 0;
        if ((int)uVar24 < (pFVar22->Colors).ArrayNum) {
          uVar10 = ~uVar24 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (pFVar22->Colors).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar1 + lVar25) == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar3 = *(undefined8 **)(pFVar1 + lVar25);
        pTVar4 = (TReferenceControllerBase<1> *)puVar3[1];
        pFVar5 = (FLinearColor *)*puVar3;
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          (pFVar12->Color).Object = (FLinearColor *)0x0;
          (pFVar12->Color).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          FText::FText(&pFVar12->Label);
        }
        else {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          (pFVar12->Color).Object = (FLinearColor *)0x0;
          (pFVar12->Color).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          FText::FText(&pFVar12->Label);
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b0 = (pFVar12->Color).Object;
        pTStack_a8 = (pFVar12->Color).SharedReferenceCount.ReferenceController;
        (pFVar12->Color).Object = pFVar5;
        (pFVar12->Color).SharedReferenceCount.ReferenceController = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_a8);
        pIVar6 = (pFVar12->Label).TextData.Reference;
        if (pIVar6 != pIVar2) {
          (pFVar12->Label).TextData.Reference = pIVar2;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
          }
          if (pIVar6 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
          }
        }
        (pFVar12->Label).Flags = uVar17;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        lVar18 = local_118;
        pFVar23 = pFVar12;
        lVar25 = local_100;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          lVar18 = local_118;
          lVar25 = local_100;
        }
      }
      local_f8.Object = pFVar23;
      TSharedPtr<FColorInfo,1>::TSharedPtr<FColorInfo,1><FColorInfo>(&local_110,&local_f8);
      if (((local_138.AllocatorInstance.Data <= &local_110) &&
          (&local_110 <
           (TSharedPtr<FColorInfo,1> *)
           (local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0x10))) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = local_138.ArrayNum;
      if (local_138.ArrayNum == local_138.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_138.AllocatorInstance,&local_138.ArrayMax);
      }
      local_138.ArrayNum = iVar11 + 1;
      *(FColorInfo **)&local_138.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0 =
           local_110.Object;
      *(TReferenceControllerBase<1> **)
       (local_138.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
           local_110.SharedReferenceCount.ReferenceController;
      local_110.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_110.Object = (FColorInfo *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_118 = lVar18 + 1;
      local_100 = lVar25 + 0x10;
      pFVar21 = (FColorTheme *)(ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < (pFVar22->Colors).ArrayNum);
  }
  FVar20.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar22 = (FColorTheme *)0x0;
  FVar19.ReferenceController = FVar20.ReferenceController;
  if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar8 = (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    do {
      FVar19.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
      if (aVar8 == (atomic<int>)0x0) goto LAB_14302ffd5;
      LOCK();
      aVar9 = (FVar20.ReferenceController)->SharedReferenceCount;
      bVar26 = aVar8 == aVar9;
      if (bVar26) {
        (FVar20.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar9 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar9;
    } while (!bVar26);
    FVar19.ReferenceController = FVar20.ReferenceController;
    pFVar22 = CurrentlySelectedThemePtr.Object;
    if (CurrentlySelectedThemePtr.Object != (FColorTheme *)0x0) goto LAB_14302fffb;
  }
LAB_14302ffd5:
  bVar26 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  FVar20.ReferenceController = FVar19.ReferenceController;
  if (bVar26) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14302fffb:
  pFVar13 = FText::FromString(&local_68,&pFVar22->Name);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_a0,L"SColorThemes",L"CopyThemeNameAppend",L"{0} Copy");
  pFVar15 = FTextFormat::FTextFormat(&local_58,pFVar14,Default);
  local_d0.Type = Text;
  FText::FText((FText *)&local_d0.TextValue,pFVar13);
  if ((local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar26)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_128.AllocatorInstance.Data,&local_d0,1);
  local_f0.TextFormatData.Object = (pFVar15->TextFormatData).Object;
  local_f0.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_f0.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f0.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_e0,&local_f0,&local_128);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d0.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar2 = (pFVar13->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar20.ReferenceController);
  pFVar16 = FText::ToString(&local_e0);
  NewColorTheme(&local_88,pFVar16,&local_138);
  SaveColorThemesToIni();
  local_78.Object = local_88.Object;
  local_78.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetCurrentColorTheme(this,&local_78);
  StartRename(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  DestructItems<TSharedPtr<FColorInfo,1>,int>
            ((TSharedPtr<FColorInfo,1> *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((TSharedPtr<FColorInfo,1> *)local_138.AllocatorInstance.Data !=
      (TSharedPtr<FColorInfo,1> *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return;
}

// GetColorTheme @ 1430335f0

TSharedPtr<FColorTheme,1> * __cdecl
SColorThemesViewer::GetColorTheme
          (TSharedPtr<FColorTheme,1> *__return_storage_ptr__,FString *param_1)

{
  TSharedPtr<FColorTheme,1> *pTVar1;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_28;
  TSharedPtr<FColorTheme,1> local_18;
  
  IsColorTheme(__return_storage_ptr__,param_1);
  if (__return_storage_ptr__->Object == (FColorTheme *)0x0) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pTVar1 = NewColorTheme(&local_18,param_1,&local_28);
    if (__return_storage_ptr__ != pTVar1) {
      __return_storage_ptr__->Object = pTVar1->Object;
      pTVar1->Object = (FColorTheme *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar1->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
  }
  return __return_storage_ptr__;
}

// GetComboButtonImage @ 143033680

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateBrush * __thiscall SColorThemesViewer::GetComboButtonImage(SColorThemesViewer *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  atomic<int> aVar4;
  ISlateStyle *pIVar5;
  FName *pFVar6;
  FSlateBrush *pFVar7;
  FWeakReferencer<1> FVar8;
  char *pcVar9;
  FColorTheme *pFVar10;
  FColorTheme *pFVar11;
  bool bVar12;
  FName local_res10;
  FName local_res18 [2];
  
  FVar3.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar10 = (FColorTheme *)0x0;
  FVar8.ReferenceController = FVar3.ReferenceController;
  pFVar11 = pFVar10;
  if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    do {
      FVar8.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      pFVar11 = pFVar10;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar4 = (FVar3.ReferenceController)->SharedReferenceCount;
      bVar12 = aVar2 == aVar4;
      if (bVar12) {
        (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      FVar8.ReferenceController = FVar3.ReferenceController;
      pFVar11 = CurrentlySelectedThemePtr.Object;
      aVar2 = aVar4;
    } while (!bVar12);
  }
  bVar12 = Recents.Object == pFVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  pIVar5 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar5 + 0x50);
  if (bVar12) {
    pcVar9 = "Icons.Recent";
    pFVar6 = &local_res10;
  }
  else {
    pcVar9 = "ColorPicker.ColorThemesSmall";
    pFVar6 = local_res18;
  }
  pFVar6 = ::FName::FName(pFVar6,pcVar9);
  pFVar7 = (FSlateBrush *)(*pcVar1)(pIVar5,*pFVar6,0,0);
  return pFVar7;
}

// GetCurrentColorTheme @ 143033730

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FColorTheme,1> * __thiscall
SColorThemesViewer::GetCurrentColorTheme
          (SColorThemesViewer *this,TSharedPtr<FColorTheme,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedPtr<FColorTheme,1> *pTVar4;
  FWeakReferencer<1> FVar5;
  FColorTheme *pFVar6;
  bool bVar7;
  
  FVar5.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (((CurrentlySelectedThemePtr.Object == (FColorTheme *)0x0) ||
      (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
      < 1)) {
    if ((ColorThemes.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FColorTheme,1> *)(*pcVar1)();
      return pTVar4;
    }
    FVar5.ReferenceController =
         *(TReferenceControllerBase<1> **)(ColorThemes.AllocatorInstance.Data + 8);
    pFVar6 = *(FColorTheme **)ColorThemes.AllocatorInstance.Data;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    pFVar6 = (FColorTheme *)0x0;
    if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
              SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar6 = (FColorTheme *)0x0;
          break;
        }
        LOCK();
        aVar3 = (FVar5.ReferenceController)->SharedReferenceCount;
        bVar7 = aVar2 == aVar3;
        if (bVar7) {
          (FVar5.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        pFVar6 = CurrentlySelectedThemePtr.Object;
        aVar2 = aVar3;
      } while (!bVar7);
    }
  }
  __return_storage_ptr__->Object = pFVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetDefaultColorTheme @ 143033860

TSharedPtr<FColorTheme,1> * __cdecl
SColorThemesViewer::GetDefaultColorTheme
          (TSharedPtr<FColorTheme,1> *__return_storage_ptr__,bool param_1)

{
  FString *pFVar1;
  FText local_28;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_18;
  
  FText::AsLocalizable_Advanced_LocText(&local_28,L"SColorThemes",L"NewThemeName",L"New Theme");
  if (param_1) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    pFVar1 = FText::ToString(&local_28);
    NewColorTheme(__return_storage_ptr__,pFVar1,&local_18);
    DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
  }
  else {
    pFVar1 = FText::ToString(&local_28);
    GetColorTheme(__return_storage_ptr__,pFVar1);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetRecents @ 143035870

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FColorTheme,1> * __thiscall
SColorThemesViewer::GetRecents
          (SColorThemesViewer *this,TSharedPtr<FColorTheme,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = Recents.Object;
  FVar2 = Recents.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       Recents.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsColorTheme @ 143037930

TSharedPtr<FColorTheme,1> * __cdecl
SColorThemesViewer::IsColorTheme(TSharedPtr<FColorTheme,1> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TSharedPtr<FColorTheme,1> *pTVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  
  uVar8 = 0;
  if (0 < ColorThemes.ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < ColorThemes.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FColorTheme,1> *)(*pcVar3)();
        return pTVar7;
      }
      pFVar10 = ColorThemes.AllocatorInstance.Data + lVar9;
      if ((*(longlong *)pFVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FColorTheme,1> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(*(undefined8 **)pFVar10 + 1);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) goto LAB_143037a50;
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)**(undefined8 **)pFVar10,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
      }
      else {
        bVar4 = iVar1 + iVar6 == 1;
      }
      if (bVar4) {
LAB_143037a50:
        __return_storage_ptr__->Object = *(FColorTheme **)pFVar10;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          return __return_storage_ptr__;
        }
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < ColorThemes.ArrayNum);
  }
  __return_storage_ptr__->Object = (FColorTheme *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsRecentsThemeActive @ 143037b40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SColorThemesViewer::IsRecentsThemeActive(SColorThemesViewer *this)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  FColorTheme *pFVar5;
  FColorTheme *pFVar6;
  bool bVar7;
  
  FVar2.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar5 = (FColorTheme *)0x0;
  FVar4.ReferenceController = FVar2.ReferenceController;
  pFVar6 = pFVar5;
  if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      pFVar6 = pFVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4.ReferenceController = FVar2.ReferenceController;
      pFVar6 = CurrentlySelectedThemePtr.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  bVar7 = Recents.Object == pFVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return bVar7;
}

// LoadColorThemesFromIni @ 143038230

void __cdecl SColorThemesViewer::LoadColorThemesFromIni(void)

{
  code *pcVar1;
  float fVar2;
  FColorTheme *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FColorTheme,1> *pTVar9;
  FColorInfo *pFVar10;
  FColorInfo *pFVar11;
  TSharedPtr<FLinearColor,1> *pTVar12;
  FText *pFVar13;
  FString *pFVar14;
  ForAnyElementType FVar15;
  FColorInfo *pFVar16;
  TRawPtrProxy<FLinearColor> local_res8;
  TRawPtrProxy<FColorInfo> local_res10;
  TRawPtrProxy<FLinearColor> local_res18;
  TRawPtrProxy<FColorInfo> local_res20;
  TSharedPtr<FColorTheme,1> local_1d8;
  TSharedPtr<FColorTheme,1> local_1c8;
  FString local_1b8;
  FString local_1a8;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_198;
  FString local_188;
  FString local_178;
  TSharedPtr<FColorInfo,1> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_118;
  FLinearColor_u_0 local_108;
  TSharedPtr<FColorInfo,1> local_f8;
  FLinearColor_u_0 local_e8;
  TSharedPtr<FColorInfo,1> local_d8;
  FText local_c8;
  TSharedPtr<FColorTheme,1> local_b8;
  FText local_a8;
  TSharedPtr<FColorInfo,1> local_98;
  TSharedPtr<FColorTheme,1> local_88;
  TSharedPtr<FLinearColor,1> local_78;
  TSharedPtr<FLinearColor,1> local_68 [2];
  
  bVar5 = FPaths::FileExists(&GEditorPerProjectIni);
  fVar2 = __real_38d1b717;
  pFVar16 = (FColorInfo *)0x0;
  if (bVar5) {
    bVar5 = true;
    do {
      ::FString::PrintfImpl(&local_1a8,L"Theme%i");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_1a8.Data.ArrayNum != 0) {
        FVar15.Data = local_1a8.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::GetStr
                (GConfig,&local_1b8,L"ColorThemes",(wchar_t *)FVar15.Data,&GEditorPerProjectIni);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.ArrayNum < 2) {
        bVar5 = false;
      }
      else {
        IsColorTheme(&local_1d8,&local_1b8);
        if (local_1d8.Object == (FColorTheme *)0x0) {
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.ArrayNum = 0;
          local_198.ArrayMax = 0;
          pTVar9 = NewColorTheme(&local_b8,&local_1b8,&local_198);
          if (&local_1d8 != pTVar9) {
            local_1d8.Object = pTVar9->Object;
            pTVar9->Object = (FColorTheme *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_1d8.SharedReferenceCount,&pTVar9->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.SharedReferenceCount.ReferenceController);
          DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
          if ((local_1d8.Object == (FColorTheme *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ColorTheme.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                                 ,0x4f1,L""), bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        bVar6 = true;
        do {
          ::FString::PrintfImpl(&local_188,L"Theme%iColor%i");
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_188.Data.ArrayNum != 0) {
            FVar15.Data = local_188.Data.AllocatorInstance.Data;
          }
          FConfigCacheIni::GetStr
                    (GConfig,&local_148,L"ColorThemes",(wchar_t *)FVar15.Data,&GEditorPerProjectIni)
          ;
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (local_148.Data.ArrayNum < 2) {
            bVar6 = false;
          }
          else {
            FLinearColor::InitFromString((FLinearColor *)&local_108._s_0,&local_148);
            if ((local_1d8.Object == (FColorTheme *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar8 = FColorTheme::FindApproxColor
                              (local_1d8.Object,(FLinearColor *)&local_108._s_0,fVar2);
            if (iVar8 == -1) {
              pFVar10 = ::operator_new(0x20);
              pFVar11 = pFVar16;
              if (pFVar10 != (FColorInfo *)0x0) {
                pFVar11 = ::operator_new(0x10);
                local_res8.Object = (FLinearColor *)pFVar16;
                if (pFVar11 != (FColorInfo *)0x0) {
                  (pFVar11->Color).Object = (FLinearColor *)local_108._0_8_;
                  (pFVar11->Color).SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)local_108._8_8_;
                  local_res8.Object = (FLinearColor *)pFVar11;
                }
                pTVar12 = TSharedPtr<FLinearColor,1>::TSharedPtr<FLinearColor,1><FLinearColor>
                                    (&local_78,&local_res8);
                pFVar11 = FColorInfo::FColorInfo(pFVar10,pTVar12);
              }
              local_res10.Object = pFVar11;
              TSharedPtr<FColorInfo,1>::TSharedPtr<FColorInfo,1><FColorInfo>
                        (&local_168,&local_res10);
              ::FString::PrintfImpl(&local_178,L"Theme%iLabel%i");
              FVar15.Data = (FScriptContainerElement *)L"";
              if (local_178.Data.ArrayNum != 0) {
                FVar15.Data = local_178.Data.AllocatorInstance.Data;
              }
              FConfigCacheIni::GetStr
                        (GConfig,&local_158,L"ColorThemes",(wchar_t *)FVar15.Data,
                         &GEditorPerProjectIni);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              if (1 < local_158.Data.ArrayNum) {
                pFVar13 = FText::FromString(&local_a8,&local_158);
                pFVar11 = local_168.Object;
                if ((local_168.Object == (FColorInfo *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                FText::operator=(&pFVar11->Label,pFVar13);
                if (local_a8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
                }
              }
              if ((local_1d8.Object == (FColorTheme *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              FVar4.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
              pFVar3 = local_1d8.Object;
              local_f8.Object = local_168.Object;
              local_f8.SharedReferenceCount.ReferenceController =
                   local_168.SharedReferenceCount.ReferenceController;
              if (local_168.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_168.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_>::Insert
                        (&(local_1d8.Object)->Colors,&local_f8,0);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pFVar3->RefreshEvent);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f8.SharedReferenceCount.ReferenceController);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar4.ReferenceController);
            }
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        } while (bVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8.SharedReferenceCount.ReferenceController);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
    } while (bVar5);
    bVar5 = true;
    do {
      ::FString::PrintfImpl(&local_138,L"Color%i");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar15.Data = local_138.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::GetStr
                (GConfig,&local_128,L"RecentColors",(wchar_t *)FVar15.Data,&GEditorPerProjectIni);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.ArrayNum < 2) {
        bVar5 = false;
      }
      else {
        FLinearColor::InitFromString((FLinearColor *)&local_e8._s_0,&local_128);
        if ((Recents.Object == (FColorTheme *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar8 = FColorTheme::FindApproxColor(Recents.Object,(FLinearColor *)&local_e8._s_0,fVar2);
        if (iVar8 == -1) {
          pFVar10 = ::operator_new(0x20);
          pFVar11 = pFVar16;
          if (pFVar10 != (FColorInfo *)0x0) {
            pFVar11 = ::operator_new(0x10);
            local_res18.Object = (FLinearColor *)pFVar16;
            if (pFVar11 != (FColorInfo *)0x0) {
              (pFVar11->Color).Object = (FLinearColor *)local_e8._0_8_;
              (pFVar11->Color).SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)local_e8._8_8_;
              local_res18.Object = (FLinearColor *)pFVar11;
            }
            pTVar12 = TSharedPtr<FLinearColor,1>::TSharedPtr<FLinearColor,1><FLinearColor>
                                (local_68,&local_res18);
            pFVar11 = FColorInfo::FColorInfo(pFVar10,pTVar12);
          }
          local_res20.Object = pFVar11;
          TSharedPtr<FColorInfo,1>::TSharedPtr<FColorInfo,1><FColorInfo>(&local_98,&local_res20);
          if ((Recents.Object == (FColorTheme *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar4.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
          pFVar3 = Recents.Object;
          local_d8.Object = local_98.Object;
          local_d8.SharedReferenceCount.ReferenceController =
               local_98.SharedReferenceCount.ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_>::Insert
                    (&pFVar3->Colors,&local_d8,0);
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     &pFVar3->RefreshEvent);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar4.ReferenceController);
        }
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    } while (bVar5);
  }
  if (ColorThemes.ArrayNum == 0) {
    FText::AsLocalizable_Advanced_LocText(&local_c8,L"SColorThemes",L"NewThemeName",L"New Theme");
    pFVar14 = FText::ToString(&local_c8);
    IsColorTheme(&local_1c8,pFVar14);
    if (local_1c8.Object == (FColorTheme *)0x0) {
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      pTVar9 = NewColorTheme(&local_88,pFVar14,&local_118);
      if (&local_1c8 != pTVar9) {
        local_1c8.Object = pTVar9->Object;
        pTVar9->Object = (FColorTheme *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1c8.SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
    }
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// MakeUniqueThemeName @ 143038910

FString * __cdecl
SColorThemesViewer::MakeUniqueThemeName(FString *__return_storage_ptr__,FString *param_1)

{
  FColorTheme *pFVar1;
  FScriptContainerElement *pFVar2;
  TSharedPtr<FColorTheme,1> *pTVar3;
  FString local_38;
  TSharedPtr<FColorTheme,1> local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pTVar3 = IsColorTheme(&local_28,__return_storage_ptr__);
  pFVar1 = pTVar3->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  while (pFVar1 != (FColorTheme *)0x0) {
    ::FString::PrintfImpl(&local_18,L" %d");
    ::FString::ConcatFF(&local_38,param_1,&local_18);
    if (__return_storage_ptr__ != &local_38) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pTVar3 = IsColorTheme(&local_28,__return_storage_ptr__);
    pFVar1 = pTVar3->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// MenuToStandardNoReturn @ 143038b40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::MenuToStandardNoReturn(SColorThemesViewer *this)

{
  return;
}

// NewColorTheme @ 143038d90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::NewColorTheme(SColorThemesViewer *this)

{
  FString *pFVar1;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> local_38;
  TSharedPtr<FColorTheme,1> local_28;
  TSharedPtr<FColorTheme,1> local_18;
  
  FText::AsLocalizable_Advanced_LocText
            ((FText *)&local_28,L"SColorThemes",L"NewThemeName",L"New Theme");
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar1 = FText::ToString((FText *)&local_28);
  NewColorTheme(&local_18,pFVar1,&local_38);
  DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
  if (local_28.Object != (FColorTheme *)0x0) {
    (**(code **)(((local_28.Object)->Name).Data.AllocatorInstance.Data + 0x10))();
  }
  SaveColorThemesToIni();
  local_28.Object = local_18.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetCurrentColorTheme(this,&local_28);
  StartRename(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// NewColorTheme @ 143038e50

TSharedPtr<FColorTheme,1> * __cdecl
SColorThemesViewer::NewColorTheme
          (TSharedPtr<FColorTheme,1> *__return_storage_ptr__,FString *param_1,
          TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  TSharedPtr<FColorInfo,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  TSharedPtr<FColorTheme,1> *pTVar8;
  FColorTheme *pFVar9;
  int *piVar10;
  longlong lVar11;
  FColorTheme *pFVar12;
  uint uVar13;
  int iVar14;
  TRawPtrProxy<FColorTheme> local_res8;
  TSharedPtr<FColorTheme,1> local_38;
  FString local_28;
  
  iVar2 = (param_1->Data).ArrayNum;
  pFVar12 = (FColorTheme *)0x0;
  iVar14 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar14 = 0;
  }
  if ((iVar14 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThemeName.Len() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                         ,0x493,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FColorTheme,1> *)(*pcVar5)();
    return pTVar8;
  }
  MakeUniqueThemeName(&local_28,param_1);
  pFVar9 = ::operator_new(0x40);
  FVar6.Data = local_28.Data.AllocatorInstance.Data;
  if (pFVar9 != (FColorTheme *)0x0) {
    (pFVar9->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->Name).Data.ArrayNum = local_28.Data.ArrayNum;
    piVar10 = &(pFVar9->Name).Data.ArrayMax;
    if (local_28.Data.ArrayNum == 0) {
      *piVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_28.Data.ArrayNum,
                 piVar10);
      memcpy((pFVar9->Name).Data.AllocatorInstance.Data,FVar6.Data,
             (longlong)local_28.Data.ArrayNum * 2);
    }
    pTVar1 = &pFVar9->Colors;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar10 = &(pFVar9->Colors).ArrayMax;
    iVar2 = param_2->ArrayNum;
    pTVar3 = (TSharedPtr<FColorInfo,1> *)(param_2->AllocatorInstance).Data;
    (pFVar9->Colors).ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&pTVar1->AllocatorInstance,iVar2,piVar10);
      ConstructItems<TSharedPtr<FColorInfo,1>,TSharedPtr<FColorInfo,1>,int>
                ((pTVar1->AllocatorInstance).Data,pTVar3,iVar2);
    }
    *(undefined8 *)&pFVar9->RefreshEvent = 0;
    *(undefined8 *)&(pFVar9->RefreshEvent).field_0x8 = 0;
    *(undefined8 *)&(pFVar9->RefreshEvent).field_0x10 = 0;
    *(undefined1 **)&(pFVar9->RefreshEvent).field_0x18 = &DAT_00000002;
    pFVar12 = pFVar9;
  }
  local_res8.Object = pFVar12;
  TSharedPtr<FColorTheme,1>::TSharedPtr<FColorTheme,1><FColorTheme>(&local_38,&local_res8);
  if (((ColorThemes.AllocatorInstance.Data <= &local_38) &&
      (&local_38 <
       (TSharedPtr<FColorTheme,1> *)
       (ColorThemes.AllocatorInstance.Data + (longlong)ColorThemes.ArrayMax * 0x10))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FColorTheme,1> *)(*pcVar5)();
    return pTVar8;
  }
  if (ColorThemes.ArrayNum == ColorThemes.ArrayMax) {
    ColorThemes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&ColorThemes.AllocatorInstance,&ColorThemes.ArrayMax);
  }
  FVar6.Data = ColorThemes.AllocatorInstance.Data;
  lVar11 = (longlong)ColorThemes.ArrayNum;
  ColorThemes.ArrayNum = ColorThemes.ArrayNum + 1;
  *(FColorTheme **)(ColorThemes.AllocatorInstance.Data + lVar11 * 0x10) = local_38.Object;
  *(TReferenceControllerBase<1> **)(FVar6.Data + lVar11 * 0x10 + 8) =
       local_38.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.Object = (FColorTheme *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uVar13 = 0;
  if ((int)(ColorThemes.ArrayNum - 1U) < ColorThemes.ArrayNum) {
    uVar13 = ~(ColorThemes.ArrayNum - 1U) >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FColorTheme,1> *)(*pcVar5)();
    return pTVar8;
  }
  iVar2 = ColorThemes.ArrayNum;
  FVar6.Data = ColorThemes.AllocatorInstance.Data;
  __return_storage_ptr__->Object =
       *(FColorTheme **)
        (ColorThemes.AllocatorInstance.Data + (longlong)ColorThemes.ArrayNum * 0x10 + -0x10);
  pTVar4 = *(TReferenceControllerBase<1> **)(FVar6.Data + (longlong)iVar2 * 0x10 + -8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnMenuOpenChanged @ 14303ad40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::OnMenuOpenChanged(SColorThemesViewer *this,bool param_1)

{
  SEditableTextBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel FStack_48;
  undefined1 auStack_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  if (param_1) {
    return;
  }
  if ((this->RenameTextBox).Object == (SEditableTextBox *)0x0) {
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
  pSVar1 = (this->RenameTextBox).Object;
  auStack_30[0] = false;
  auStack_30[1] = true;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)auStack_30,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  RefreshMenuWidget(this);
  return;
}

// RefreshMenuWidget @ 14303d570

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::RefreshMenuWidget(SColorThemesViewer *this)

{
  SMultiBoxWidget *this_00;
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  TSharedRef<FMultiBox,1> *pTVar4;
  FMenuBuilder local_1c8;
  TSharedPtr<FExtender,1> local_40;
  TSharedPtr<FUICommandList_const_,1> local_30;
  TSharedRef<FMultiBox,1> local_20;
  
  pIVar3 = FAppStyle::Get();
  local_40.Object = (FExtender *)0x0;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_30.Object = (FUICommandList *)0x0;
  local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_1c8,Menu,false,&local_30,false,&local_40,pIVar3,(FName)0x0,
             (FName)0x0);
  local_1c8.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_1c8.CurrentSectionExtensionHook.Number = 0;
  local_1c8._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_1c8.CurrentSectionHeadingText);
  local_1c8.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1c8.CurrentSectionVisibility.bIsSet = false;
  local_1c8.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_1c8.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_1c8.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_1c8.CurrentSectionResizeParams,0,200);
  local_1c8.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_1c8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_1c8.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_1c8.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.bIsSet = false;
  local_1c8.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_1c8.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_1c8.bSectionNeedsToBeApplied = false;
  local_1c8.bSearchable = true;
  local_1c8.bRecursivelySearchable = true;
  local_1c8.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_1c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  BuildMenu(this,&local_1c8);
  if ((this->MultiBoxWidget).Object == (SMultiBoxWidget *)0x0) {
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
  this_00 = (this->MultiBoxWidget).Object;
  pTVar4 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)&local_1c8,&local_20);
  SMultiBoxWidget::UpdateMultiBoxWidget(this_00,pTVar4);
  FMenuBuilder::~FMenuBuilder(&local_1c8);
  return;
}

// SaveColorThemesToIni @ 14303deb0

void __cdecl SColorThemesViewer::SaveColorThemesToIni(void)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FColorTheme *pFVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  longlong lVar15;
  longlong local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar5 = FPaths::FileExists(&GEditorPerProjectIni);
  if (bVar5) {
    FConfigCacheIni::EmptySection(GConfig,L"ColorThemes",&GEditorPerProjectIni);
    uVar14 = 0;
    if (0 < ColorThemes.ArrayNum) {
      local_res8 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar14 < ColorThemes.ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = ColorThemes.AllocatorInstance.Data + local_res8;
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(*(undefined8 **)pFVar9 + 1) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)**(undefined8 **)pFVar9;
        }
        ::FString::PrintfImpl(&local_88,L"Theme%i");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar13.Data = local_88.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::SetString
                  (GConfig,L"ColorThemes",(wchar_t *)FVar13.Data,pwVar10,&GEditorPerProjectIni);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if ((*(longlong *)pFVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar15 = *(longlong *)pFVar9;
        uVar12 = 0;
        iVar8 = *(int *)(lVar15 + 0x18);
        if (0 < iVar8) {
          lVar11 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar12 < iVar8) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar1 = *(longlong *)(lVar15 + 0x10);
            if ((*(longlong *)(lVar1 + lVar11) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)(lVar1 + lVar11);
            uVar6 = 0;
            if ((int)uVar12 < *(int *)(lVar15 + 0x18)) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar1 = *(longlong *)(lVar15 + 0x10);
            if ((*(longlong *)(lVar1 + lVar11) == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar1 = *(longlong *)(lVar1 + lVar11);
            if ((*plVar2 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar7 = FLinearColor::ToString((FLinearColor *)*plVar2,&local_48);
            if ((pFVar7->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
            }
            ::FString::PrintfImpl(&local_78,L"Theme%iColor%i");
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_78.Data.ArrayNum != 0) {
              FVar13.Data = local_78.Data.AllocatorInstance.Data;
            }
            FConfigCacheIni::SetString
                      (GConfig,L"ColorThemes",(wchar_t *)FVar13.Data,pwVar10,&GEditorPerProjectIni);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            pFVar7 = FText::ToString((FText *)(lVar1 + 0x10));
            if ((pFVar7->Data).ArrayNum == 0) {
              pwVar10 = L"";
            }
            else {
              pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
            }
            ::FString::PrintfImpl(&local_68,L"Theme%iLabel%i");
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar13.Data = local_68.Data.AllocatorInstance.Data;
            }
            FConfigCacheIni::SetString
                      (GConfig,L"ColorThemes",(wchar_t *)FVar13.Data,pwVar10,&GEditorPerProjectIni);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            iVar8 = *(int *)(lVar15 + 0x18);
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + 0x10;
          } while ((int)uVar12 < iVar8);
        }
        uVar14 = uVar14 + 1;
        local_res8 = local_res8 + 0x10;
      } while ((int)uVar14 < ColorThemes.ArrayNum);
    }
    FConfigCacheIni::EmptySection(GConfig,L"RecentColors",&GEditorPerProjectIni);
    if ((Recents.Object == (FColorTheme *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = Recents.Object;
    uVar14 = 0;
    iVar8 = ((Recents.Object)->Colors).ArrayNum;
    if (0 < iVar8) {
      lVar15 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar14 < iVar8) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = (pFVar4->Colors).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar9 + lVar15) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(pFVar9 + lVar15);
        uVar12 = 0;
        if ((int)uVar14 < (pFVar4->Colors).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(longlong *)((pFVar4->Colors).AllocatorInstance.Data + lVar15) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*plVar2 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = FLinearColor::ToString((FLinearColor *)*plVar2,&local_38);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        ::FString::PrintfImpl(&local_58,L"Color%i");
        FVar13.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar13.Data = local_58.Data.AllocatorInstance.Data;
        }
        FConfigCacheIni::SetString
                  (GConfig,L"RecentColors",(wchar_t *)FVar13.Data,pwVar10,&GEditorPerProjectIni);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        iVar8 = (pFVar4->Colors).ArrayNum;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar14 < iVar8);
    }
  }
  return;
}

// SetCurrentColorTheme @ 14303e580

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SColorThemesViewer::SetCurrentColorTheme
          (SColorThemesViewer *this,TSharedPtr<FColorTheme,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> FVar4;
  FWeakReferencer<1> FVar5;
  
  CurrentlySelectedThemePtr.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  FVar5.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    FVar4.ReferenceController = CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
    FVar5.ReferenceController = pTVar3;
    if (CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
  }
  CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->CurrentThemeChangedEvent);
  StopRename(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetUseAlpha @ 14303e6e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::SetUseAlpha(SColorThemesViewer *this,TAttribute<bool> *param_1)

{
  return;
}

// StartRename @ 14303ea60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::StartRename(SColorThemesViewer *this)

{
  SEditableTextBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *this_00;
  TSharedRef<SEditableTextBox,1> local_68;
  TSharedPtr<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->RenameTextBox).Object == (SEditableTextBox *)0x0) {
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
  pSVar1 = (this->RenameTextBox).Object;
  local_30[0] = true;
  local_30[1] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_30,None
          );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  RefreshMenuWidget(this);
  this_00 = FSlateApplication::Get();
  if ((this->RenameTextBox).Object == (SEditableTextBox *)0x0) {
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
  local_68.SharedReferenceCount.ReferenceController =
       (this->RenameTextBox).SharedReferenceCount.ReferenceController;
  local_68.Object = (this->RenameTextBox).Object;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_68.Object == (SEditableTextBox *)0x0) {
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
  local_58.Object = (SWidget *)local_68.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::SetKeyboardFocus(this_00,&local_58,SetDirectly);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  TSharedRef<SEditableTextBox,1>::~TSharedRef<SEditableTextBox,1>(&local_68);
  return;
}

// StopRename @ 14303ee20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::StopRename(SColorThemesViewer *this)

{
  SEditableTextBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((this->RenameTextBox).Object == (SEditableTextBox *)0x0) {
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
  pSVar1 = (this->RenameTextBox).Object;
  local_30[0] = false;
  local_30[1] = true;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&pSVar1->_padding_ + 2),(SWidget *)pSVar1,(TAttribute<bool> *)local_30,None
          );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  RefreshMenuWidget(this);
  return;
}

// UpdateThemeNameFromTextBox @ 14303f8c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemesViewer::UpdateThemeNameFromTextBox(SColorThemesViewer *this)

{
  SEditableTextBox *pSVar1;
  FScriptContainerElement *pFVar2;
  FColorTheme *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  TSharedPtr<FColorTheme,1> *pTVar8;
  FColorTheme *pFVar9;
  longlong lVar10;
  FString local_58;
  FText local_48;
  TSharedPtr<FColorTheme,1> local_38;
  TSharedPtr<FColorTheme,1> local_28;
  FString local_18;
  
  if ((this->RenameTextBox).Object == (SEditableTextBox *)0x0) {
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
  pSVar1 = (this->RenameTextBox).Object;
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
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
  SEditableText::GetText((pSVar1->EditableText).Object,&local_48);
  pFVar7 = FText::ToString(&local_48);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  lVar10 = (longlong)local_58.Data.ArrayNum;
  pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pTVar8 = GetCurrentColorTheme(this,&local_38);
  if (pTVar8->Object == (FColorTheme *)0x0) {
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
  iVar6 = (pTVar8->Object->Name).Data.ArrayNum;
  if (iVar6 == local_58.Data.ArrayNum) {
    if (iVar6 < 2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      goto LAB_14303faf0;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pTVar8->Object->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)local_58.Data.AllocatorInstance.Data);
    bVar5 = iVar6 == 0;
  }
  else {
    bVar5 = iVar6 + local_58.Data.ArrayNum == 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (!bVar5) {
    pFVar9 = (FColorTheme *)MakeUniqueThemeName(&local_18,&local_58);
    pTVar8 = GetCurrentColorTheme(this,&local_28);
    if (pTVar8->Object == (FColorTheme *)0x0) {
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
    pFVar3 = pTVar8->Object;
    if (pFVar3 != pFVar9) {
      pFVar2 = (pFVar3->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar3->Name).Data.AllocatorInstance.Data = (pFVar9->Name).Data.AllocatorInstance.Data;
      (pFVar9->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Name).Data.ArrayNum = (pFVar9->Name).Data.ArrayNum;
      (pFVar3->Name).Data.ArrayMax = (pFVar9->Name).Data.ArrayMax;
      (pFVar9->Name).Data.ArrayNum = 0;
      (pFVar9->Name).Data.ArrayMax = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    SaveColorThemesToIni();
  }
LAB_14303faf0:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

