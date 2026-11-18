// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// Construct @ 1430218f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorThemeBar::Construct(SColorThemeBar *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  TAttribute<TSharedPtr<FColorTheme,1>_> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  ITextData *pIVar7;
  ITextData *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  SBox *pSVar10;
  code *pcVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  SThemeColorBlocksBar *pSVar15;
  FSharedReferencer<1> FVar16;
  FArguments *pFVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char cVar20;
  bool bVar21;
  byte bVar22;
  FSlot *pFVar23;
  FSizeParam *pFVar24;
  FArguments *pFVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget_const_,1> *pTVar27;
  ulong64 uVar28;
  FName *pFVar29;
  FSlateFontInfo *pFVar30;
  TSharedRef<STextBlock,1> *pTVar31;
  FSlotArguments *pFVar32;
  FArguments *pFVar33;
  FText *pFVar34;
  FArguments *pFVar35;
  TSharedRef<SHorizontalBox,1> *pTVar36;
  TSharedRef<SBox,1> *pTVar37;
  FSlot *pFVar38;
  longlong *plVar39;
  TReferenceControllerBase<1> *pTVar40;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1428;
  FLLMScope local_1424;
  FLLMScope local_1420;
  FLLMScope local_141c;
  undefined1 local_1418 [8];
  ForAnyElementType local_1410;
  int local_1408;
  SBox *local_1400;
  TReferenceControllerBase<1> *pTStack_13f8;
  bool local_13f0;
  bool local_13ef;
  undefined1 local_13e8 [8];
  ForAnyElementType FStack_13e0;
  int local_13d8;
  bool local_13d0;
  bool local_13cf;
  undefined1 local_13c8 [8];
  ForAnyElementType FStack_13c0;
  int local_13b8;
  FArguments *local_13b0;
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs> local_13a8;
  FColorTheme *local_1390;
  FSharedReferencer<1> local_1388;
  undefined8 local_1380;
  FSharedReferencer<1> local_1378;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined1 local_1360;
  undefined1 local_1358 [8];
  ForAnyElementType FStack_1350;
  ulonglong local_1348;
  undefined8 local_1340;
  FSharedReferencer<1> local_1338;
  SHorizontalBox *local_1330;
  TReferenceControllerBase<1> *pTStack_1328;
  FArguments *local_1320;
  FName local_1318;
  FMemScope local_1310;
  undefined1 local_1308 [8];
  FSlot *local_1300;
  FName local_12f8;
  FMemScope local_12f0;
  FSlot *local_12e8;
  FName local_12e0;
  FMemScope local_12d8;
  FArguments *local_12d0;
  FName local_12c8;
  FMemScope local_12c0;
  FColorTheme *local_12b8;
  FSharedReferencer<1> local_12b0;
  bool local_12a8;
  TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy> local_12a0;
  FFontOutlineSettings local_1288;
  TAttribute<float> local_1268;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1248;
  TSharedRef<STextBlock,1> local_1230;
  FDestructionSentinel local_1220;
  FDestructionSentinel local_1208;
  FDestructionSentinel local_11f0;
  FDestructionSentinel local_11d8;
  FDestructionSentinel local_11c0;
  FDestructionSentinel local_11a8;
  undefined1 *local_1190;
  undefined1 local_1188 [104];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1120;
  ForAnyElementType FStack_1118;
  ulonglong local_1110;
  FReadAccessScope local_1108;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_10f0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_10d8;
  TSharedRef<SWidget_const_,1> local_10c0;
  FName local_10b0;
  TSharedRef<SBox,1> local_10a8;
  STextBlock *local_1098;
  TReferenceControllerBase<1> *pTStack_1090;
  TSharedRef<SHorizontalBox,1> local_1088;
  FReadAccessScope local_1078;
  FReadAccessScope local_1060;
  FText local_1048;
  undefined1 local_1038 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1008;
  undefined1 local_ff0 [16];
  FSharedReferencer<1> local_fe0 [9];
  TOptional<FSizeParam> local_f98;
  FSlateFontInfo local_f08;
  FArguments local_ea8;
  FSlotArguments local_bd0;
  FArguments local_ae8;
  FArguments local_8e0;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14302190f;
  pTVar3 = &param_1->_ColorTheme;
  pFVar38 = (FSlot *)0x0;
  local_res8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(param_1->_ColorTheme).Getter,&local_1108);
  if (((*(int *)&(param_1->_ColorTheme).Getter.field_0x10 == 0) ||
      (plVar39 = *(longlong **)&(param_1->_ColorTheme).Getter.field_0x8, plVar39 == (longlong *)0x0)
      ) || (cVar20 = (**(code **)(*plVar39 + 0x38))(), cVar20 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1108);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(param_1->_ColorTheme).Getter,&local_1078);
    pFVar23 = pFVar38;
    if (*(int *)&(param_1->_ColorTheme).Getter.field_0x10 != 0) {
      pFVar23 = *(FSlot **)&(param_1->_ColorTheme).Getter.field_0x8;
    }
    (**(code **)(*(longlong *)pFVar23 + 0x60))(pFVar23,&local_1390);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1078);
    if (pTVar3 != (TAttribute<TSharedPtr<FColorTheme,1>_> *)&local_1390) {
      (pTVar3->Value).Object = local_1390;
      local_1390 = (FColorTheme *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->_ColorTheme).Value.SharedReferenceCount,&local_1388);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1388.ReferenceController);
  }
  (this->ColorTheme).Object = (pTVar3->Value).Object;
  pTVar40 = (param_1->_ColorTheme).Value.SharedReferenceCount.ReferenceController;
  if (pTVar40 != (this->ColorTheme).WeakReferenceCount.ReferenceController) {
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->WeakReferenceCount = (atomic<int>)((int)pTVar40->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ColorTheme).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ColorTheme).WeakReferenceCount.ReferenceController = pTVar40;
  }
  if (&param_1->_OnCurrentThemeChanged != &this->OnCurrentThemeChanged) {
    local_1418 = (undefined1  [8])0x0;
    local_1410.Data = (FScriptContainerElement *)0x0;
    local_1408 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnCurrentThemeChanged,&local_1060);
    if ((*(int *)&(param_1->_OnCurrentThemeChanged).field_0x10 != 0) &&
       (plVar39 = *(longlong **)&(param_1->_OnCurrentThemeChanged).field_0x8,
       plVar39 != (longlong *)0x0)) {
      (**(code **)(*plVar39 + 0x50))(plVar39,local_1418);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1060);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCurrentThemeChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1418);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1418,
               (FWriteAccessScope *)&local_11f0);
    if ((local_1408 != 0) && (local_1410.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1410.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1410,0,0,0x10);
      local_1408 = 0;
    }
    if (local_11f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11f0.Accessor,&local_11f0);
    }
    if (local_1410.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1410.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1418);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ShowTrashCallback,&param_1->_ShowTrashCallback);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->HideTrashCallback,&param_1->_HideTrashCallback);
  (this->bUseSRGB).Value = (param_1->_UseSRGB).Value;
  (this->bUseSRGB).bIsSet = (param_1->_UseSRGB).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseSRGB).Getter,&(param_1->_UseSRGB).Getter);
  (this->bUseAlpha).Value = (param_1->_UseAlpha).Value;
  (this->bUseAlpha).bIsSet = (param_1->_UseAlpha).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseAlpha).Getter,&(param_1->_UseAlpha).Getter);
  local_1320 = SBox::FArguments::FArguments(&local_8e0);
  uVar14 = _UNK_150925428;
  uVar19 = ___xmm_40a0000040a0000040a0000040a00000;
  local_1360 = 1;
  local_1370 = ___xmm_40a0000040a0000040a0000040a00000;
  uStack_1368 = _UNK_150925428;
  local_1348 = 0;
  local_1358 = (undefined1  [8])0x0;
  FStack_1350.Data = (FScriptContainerElement *)0x0;
  (local_1320->_Padding).bIsSet = true;
  uVar18 = ___xmm_40a0000040a0000040a0000040a00000;
  ___xmm_40a0000040a0000040a0000040a00000 = (undefined4)uVar19;
  _UNK_150925424 = SUB84(uVar19,4);
  uVar13 = _UNK_150925424;
  (local_1320->_Padding).Value.Left = (float)___xmm_40a0000040a0000040a0000040a00000;
  ___xmm_40a0000040a0000040a0000040a00000 = uVar18;
  uVar19 = _UNK_150925428;
  (local_1320->_Padding).Value.Top = (float)uVar13;
  _UNK_150925428 = (undefined4)uVar14;
  _UNK_15092542c = SUB84(uVar14,4);
  uVar13 = _UNK_15092542c;
  (local_1320->_Padding).Value.Right = (float)_UNK_150925428;
  _UNK_150925428 = uVar19;
  (local_1320->_Padding).Value.Bottom = (float)uVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_1320->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1358,
             (FWriteAccessScope *)&local_11d8);
  if (((int)local_1348 != 0) && (FStack_1350.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1350.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1350,0,0,0x10);
    local_1348 = local_1348 & 0xffffffff00000000;
  }
  if (local_11d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11d8.Accessor,&local_11d8);
  }
  if (FStack_1350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1350.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1358);
  local_13b0 = SHorizontalBox::FArguments::FArguments(&local_ae8);
  pFVar23 = ::operator_new(0x58);
  local_1300 = pFVar38;
  if (pFVar23 != (FSlot *)0x0) {
    *(undefined8 *)pFVar23 = 0;
    *(undefined8 *)&pFVar23->field_0x8 = 0;
    *(undefined8 *)&pFVar23->field_0x10 = 0;
    *(undefined8 *)&pFVar23->field_0x18 = 0;
    *(undefined8 *)&pFVar23->field_0x20 = 0;
    *(undefined8 *)&pFVar23->field_0x28 = 0;
    *(undefined8 *)&pFVar23->field_0x30 = 0;
    *(undefined8 *)&pFVar23->field_0x38 = 0;
    *(undefined8 *)&pFVar23->field_0x40 = 0;
    *(undefined8 *)&pFVar23->field_0x48 = 0;
    *(undefined8 *)&pFVar23->field_0x50 = 0;
    local_1300 = SHorizontalBox::FSlot::FSlot(pFVar23);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_ff0,(FSlot *)&local_1300);
  pFVar24 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1038);
  TOptional<FSizeParam>::operator=(&local_f98,pFVar24);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1008)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1038 + 0x10));
  pFVar25 = STextBlock::FArguments::FArguments(&local_5a0);
  (pFVar25->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Text).Getter,
             (FWriteAccessScope *)&local_11a8);
  local_1190 = &(pFVar25->_Text).Getter.field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1190);
  if (puVar26 == (undefined8 *)0x0) {
    pTVar40 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_1400 = (SBox *)GetThemeName;
    pTStack_13f8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_1230.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_10c0);
    pTVar40 = (pTVar27->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar27->Object;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSColorThemeBar___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = pSVar6;
    puVar26[4] = pTVar40;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->WeakReferenceCount = (atomic<int>)((int)pTVar40->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar38 = (FSlot *)&DAT_00000007;
    puVar26[5] = local_1400;
    puVar26[6] = pTStack_13f8;
  }
  if (((ulonglong)pFVar38 & 4) != 0) {
    pFVar38 = (FSlot *)(ulonglong)((uint)pFVar38 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  }
  if (((ulonglong)pFVar38 & 2) != 0) {
    pFVar38 = (FSlot *)(ulonglong)((uint)pFVar38 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  }
  if (((ulonglong)pFVar38 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_10c0.SharedReferenceCount.ReferenceController);
  }
  if (local_11a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11a8.Accessor,&local_11a8);
  }
  local_1288.OutlineSize = 0;
  local_1288.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_1288.bMiteredCorners = false;
  local_1288.bSeparateFillAlpha = false;
  local_1288.bApplyOutlineToDropShadows = false;
  local_1288.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar29 = ::FName::FName(&local_10b0,"Regular");
  pFVar30 = FCoreStyle::GetDefaultFontStyle(&local_f08,*pFVar29,__real_41200000,&local_1288);
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)local_1188,pFVar30);
  local_1188[0x60] = true;
  local_1110 = 0;
  local_1120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1118.Data = (FScriptContainerElement *)0x0;
  TAttribute<FSlateFontInfo>::operator=(&pFVar25->_Font,(TAttribute<FSlateFontInfo> *)local_1188);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1120,(FWriteAccessScope *)&local_11c0);
  if (((int)local_1110 != 0) && (FStack_1118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1118,0,0,0x10);
    local_1110 = local_1110 & 0xffffffff00000000;
  }
  if (local_11c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_11c0.Accessor,&local_11c0);
  }
  if (FStack_1118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1120.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1188._56_8_);
  FLLMScope::FLLMScope(&local_1428,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_12f0,&local_12f8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1248,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x35e,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_12f0);
  FLLMScope::~FLLMScope(&local_1428);
  if (local_1248._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1248._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1248._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1098 = (this->ThemeNameText).Object;
  pTStack_1090 = (this->ThemeNameText).SharedReferenceCount.ReferenceController;
  (this->ThemeNameText).Object = local_1248._Widget.Object;
  (this->ThemeNameText).SharedReferenceCount.ReferenceController =
       local_1248._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1090);
  pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1248,&local_1230,pFVar25);
  pTVar40 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_ff0._8_8_ = pTVar31->Object;
  if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar23 = (FSlot *)0x0;
  local_1340 = 0;
  local_1338.ReferenceController = pTVar40;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_ff0 + 0x10),&local_1338);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1338.ReferenceController);
  local_12d0 = SHorizontalBox::FArguments::operator+(local_13b0,(FSlotArguments *)local_ff0);
  pFVar38 = ::operator_new(0x58);
  if (pFVar38 != (FSlot *)0x0) {
    *(undefined8 *)pFVar38 = 0;
    *(undefined8 *)&pFVar38->field_0x8 = 0;
    *(undefined8 *)&pFVar38->field_0x10 = 0;
    *(undefined8 *)&pFVar38->field_0x18 = 0;
    *(undefined8 *)&pFVar38->field_0x20 = 0;
    *(undefined8 *)&pFVar38->field_0x28 = 0;
    *(undefined8 *)&pFVar38->field_0x30 = 0;
    *(undefined8 *)&pFVar38->field_0x38 = 0;
    *(undefined8 *)&pFVar38->field_0x40 = 0;
    *(undefined8 *)&pFVar38->field_0x48 = 0;
    *(undefined8 *)&pFVar38->field_0x50 = 0;
    pFVar23 = SHorizontalBox::FSlot::FSlot(pFVar38);
  }
  local_12e8 = pFVar23;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_bd0,(FSlot *)&local_12e8);
  local_1268.Value = 1.0;
  local_1268.Getter._16_8_ = 0;
  local_1268.bIsSet = true;
  local_1268.Getter._0_8_ = 0;
  local_1268.Getter._8_8_ = 0;
  pFVar32 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_bd0,&local_1268);
  local_13b0 = (FArguments *)
               TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar32->field_0x18,__real_41000000,0.0,0.0,0.0);
  pFVar33 = SThemeColorBlocksBar::FArguments::FArguments(&local_ea8);
  local_12b8 = (param_1->_ColorTheme).Value.Object;
  local_12b0.ReferenceController =
       (param_1->_ColorTheme).Value.SharedReferenceCount.ReferenceController;
  if (local_12b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_12b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_12b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_12a8 = (param_1->_ColorTheme).bIsSet;
  TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedPtr<FColorTheme,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_12a0,&(param_1->_ColorTheme).Getter);
  if (&pFVar33->_ColorTheme != (TAttribute<TSharedPtr<FColorTheme,1>_> *)&local_12b8) {
    (pFVar33->_ColorTheme).Value.Object = local_12b8;
    local_12b8 = (FColorTheme *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar33->_ColorTheme).Value.SharedReferenceCount,&local_12b0);
  }
  (pFVar33->_ColorTheme).bIsSet = local_12a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->_ColorTheme).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_12a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_12a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_12b0.ReferenceController);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar33->_ShowTrashCallback,&this->ShowTrashCallback);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar33->_HideTrashCallback,&this->HideTrashCallback);
  pFVar34 = FText::AsLocalizable_Advanced_LocText
                      (&local_1048,L"SColorThemes",L"NoColorsText",L"No Colors Added Yet");
  pIVar7 = (pFVar33->_EmptyText).TextData.Reference;
  pIVar8 = (pFVar34->TextData).Reference;
  if (pIVar7 != pIVar8) {
    (pFVar33->_EmptyText).TextData.Reference = pIVar8;
    if (pIVar8 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_1308);
    }
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
    }
  }
  (pFVar33->_EmptyText).Flags = pFVar34->Flags;
  pIVar7 = (pFVar34->TextData).Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  local_13d0 = (this->bUseSRGB).Value;
  local_13cf = (this->bUseSRGB).bIsSet;
  local_13c8 = (undefined1  [8])0x0;
  FStack_13c0.Data = (FScriptContainerElement *)0x0;
  local_13b8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_13c8,
             &(this->bUseSRGB).Getter);
  (pFVar33->_UseSRGB).Value = local_13d0;
  (pFVar33->_UseSRGB).bIsSet = local_13cf;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->_UseSRGB).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13c8,
             (FWriteAccessScope *)&local_1208);
  if ((local_13b8 != 0) && (FStack_13c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13c0,0,0,0x10);
    local_13b8 = 0;
  }
  if (local_1208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1208.Accessor,&local_1208);
  }
  if (FStack_13c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13c8);
  local_13f0 = (this->bUseAlpha).Value;
  local_13ef = (this->bUseAlpha).bIsSet;
  local_13e8 = (undefined1  [8])0x0;
  FStack_13e0.Data = (FScriptContainerElement *)0x0;
  local_13d8 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_13e8,
             &(this->bUseAlpha).Getter);
  (pFVar33->_UseAlpha).Value = local_13f0;
  (pFVar33->_UseAlpha).bIsSet = local_13ef;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->_UseAlpha).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13e8,
             (FWriteAccessScope *)&local_1220);
  if ((local_13d8 != 0) && (FStack_13e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13e0,0,0,0x10);
    local_13d8 = 0;
  }
  if (local_1220.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1220.Accessor,&local_1220);
  }
  if (FStack_13e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13e8);
  FLLMScope::FLLMScope(&local_1424,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_12d8,&local_12e0,true);
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThemeColorBlocksBar,RequiredArgs::T0RequiredArgs>
            (&local_13a8,"SThemeColorBlocksBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x367,local_res10);
  FMemScope::~FMemScope(&local_12d8);
  FLLMScope::~FLLMScope(&local_1424);
  pSVar15 = local_13a8._Widget.Object;
  if ((local_13a8._Widget.Object == (SThemeColorBlocksBar *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_13a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar33);
  SThemeColorBlocksBar::Construct(local_13a8._Widget.Object,pFVar33);
  if ((local_13a8._Widget.Object == (SThemeColorBlocksBar *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((local_13a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar20 = (**(code **)((local_13a8._Widget.Object)->_padding_ + 0x228))
                       (local_13a8._Widget.Object);
    bVar22 = 0;
    if (cVar20 == '\0') goto LAB_143022508;
  }
  bVar22 = 0x20;
LAB_143022508:
  *(byte *)&(local_13a8._Widget.Object)->_padding_ =
       (byte)(local_13a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_13a8._Widget.Object)->_padding_ =
       (byte)(local_13a8._Widget.Object)->_padding_ | bVar22;
  if ((local_13a8._Widget.Object == (SThemeColorBlocksBar *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_13a8._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_13a8._Widget.Object == (SThemeColorBlocksBar *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar16.ReferenceController = local_13a8._Widget.SharedReferenceCount.ReferenceController;
  local_13a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_13a8._Widget.Object = (SThemeColorBlocksBar *)0x0;
  if ((pSVar15 == (SThemeColorBlocksBar *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar35 = local_13b0;
  local_1378.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&local_13b0->_padding_ != &local_1380) {
    local_13b0->_padding_ = (longlong)pSVar15;
    local_1380 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_13b0->_padding_,&local_1378);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378.ReferenceController);
  pFVar35 = SHorizontalBox::FArguments::operator+(local_12d0,(FSlotArguments *)pFVar35);
  FLLMScope::FLLMScope(&local_1420,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_12c0,&local_12c8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_10d8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x359,local_res18);
  FMemScope::~FMemScope(&local_12c0);
  FLLMScope::~FLLMScope(&local_1420);
  pTVar36 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_10d8,&local_1088,pFVar35);
  pFVar17 = local_1320;
  pTVar5 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_1330 = pTVar36->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (local_1320->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1320->_Content).Widget.Object = (SWidget *)local_1330;
  (local_1320->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_1328 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FLLMScope::FLLMScope(&local_141c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1318 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1310,&local_1318,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_10f0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x356,local_res20);
  FMemScope::~FMemScope(&local_1310);
  FLLMScope::~FLLMScope(&local_141c);
  pTVar37 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_10f0,&local_10a8,pFVar17);
  plVar39 = &this->_padding_;
  pTVar9 = (pTVar37->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar37->Object;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar39);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar39);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar10;
  this->_padding_ = (longlong)pTVar9;
  local_1400 = pSVar10;
  pTStack_13f8 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar39);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1088.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._UseAlpha.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._UseSRGB.Getter);
  if (local_ea8._EmptyText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_ea8._EmptyText.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._HideTrashCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._ShowTrashCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._OnGetActiveColor);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._OnSelectColor);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_ea8._ColorTheme.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ea8._ColorTheme.Value.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ea8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_bd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1230.SharedReferenceCount.ReferenceController._4_4_,
                      local_1230.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1248._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f08.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a0);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_ff0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_ae8._Slots.AllocatorInstance.Data,local_ae8._Slots.ArrayNum);
  if ((FSlotArguments *)local_ae8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_ae8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ae8);
  SBox::FArguments::~FArguments(&local_8e0);
  return;
}

// GetThemeName @ 143035c90

FText * __thiscall SColorThemeBar::GetThemeName(SColorThemeBar *this,FText *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FText *pFVar5;
  FColorTheme *pFVar6;
  FColorTheme *pFVar7;
  FColorTheme *pFVar8;
  bool bVar9;
  
  pFVar7 = (FColorTheme *)(this->ColorTheme).WeakReferenceCount.ReferenceController;
  pFVar8 = (FColorTheme *)0x0;
  pFVar6 = pFVar7;
  if (pFVar7 != (FColorTheme *)0x0) {
    aVar3 = *(atomic<int> *)&(pFVar7->Name).Data.ArrayNum;
    do {
      pFVar6 = pFVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_143035cd1;
      paVar1 = (atomic<int> *)&(pFVar7->Name).Data.ArrayNum;
      LOCK();
      aVar4 = *paVar1;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        *paVar1 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pFVar8 = (this->ColorTheme).Object;
    pFVar6 = pFVar7;
    if (pFVar8 != (FColorTheme *)0x0) goto LAB_143035cf7;
  }
LAB_143035cd1:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar7 = pFVar6;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
LAB_143035cf7:
  FText::FromString(__return_storage_ptr__,&pFVar8->Name);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14303ad50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorThemeBar::OnMouseButtonDown
          (SColorThemeBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FColorTheme *pFVar4;
  longlong *plVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  FColorTheme *pFVar8;
  FColorTheme *pFVar9;
  bool bVar10;
  FColorTheme *local_38;
  FColorTheme *local_30;
  FReadAccessScope local_28;
  
  FVar2 = (param_2->EffectingButton).KeyName;
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar10 = FVar2 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar10) {
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  pFVar4 = (FColorTheme *)(this->ColorTheme).WeakReferenceCount.ReferenceController;
  pFVar9 = (FColorTheme *)0x0;
  pFVar8 = pFVar4;
  if (pFVar4 != (FColorTheme *)0x0) {
    aVar6 = *(atomic<int> *)&(pFVar4->Name).Data.ArrayNum;
    do {
      pFVar8 = pFVar9;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14303adc1;
      paVar1 = (atomic<int> *)&(pFVar4->Name).Data.ArrayNum;
      LOCK();
      aVar7 = *paVar1;
      bVar10 = aVar6 == aVar7;
      if (bVar10) {
        *paVar1 = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar10);
    pFVar9 = (this->ColorTheme).Object;
    pFVar8 = pFVar4;
  }
LAB_14303adc1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCurrentThemeChanged,
             &local_28);
  if ((*(int *)&(this->OnCurrentThemeChanged).field_0x10 == 0) ||
     (plVar5 = *(longlong **)&(this->OnCurrentThemeChanged).field_0x8, plVar5 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    local_38 = pFVar9;
    local_30 = pFVar8;
    (**(code **)(*plVar5 + 0x68))(plVar5,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pFVar8 = (FColorTheme *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

