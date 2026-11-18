// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 9

// Construct @ 14285d0d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableLabel::Construct(SEditableLabel *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlot *pFVar5;
  FSizeParam *pFVar6;
  FArguments *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  FName FVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulong64 uVar13;
  TAttribute<FText> *pTVar14;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SEditableText,1> *pTVar15;
  FArguments *pFVar16;
  TSharedRef<SHorizontalBox,1> *pTVar17;
  FSlot *pFVar18;
  SEditableLabel *pSVar19;
  SEditableLabel *local_res8;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FDestructionSentinel local_1488;
  STextBlock *local_1470;
  FSharedReferencer<1> local_1468;
  bool local_1460;
  FSlot *local_1458;
  TSharedRef<SWidget,1> local_1450;
  float local_1440;
  bool local_143c;
  undefined1 local_1438 [8];
  ForAnyElementType FStack_1430;
  int local_1428;
  undefined2 local_1420;
  undefined1 local_1418 [8];
  ForAnyElementType FStack_1410;
  ulonglong local_1408;
  float local_1400;
  bool local_13fc;
  undefined1 local_13f8 [8];
  ForAnyElementType FStack_13f0;
  int local_13e8;
  undefined2 local_13e0;
  undefined1 local_13d8 [8];
  ForAnyElementType FStack_13d0;
  ulonglong local_13c8;
  undefined2 local_13c0;
  undefined1 local_13b8 [8];
  ForAnyElementType FStack_13b0;
  ulonglong local_13a8;
  uchar local_13a0;
  undefined1 local_139f;
  undefined1 local_1398 [8];
  ForAnyElementType FStack_1390;
  ulonglong local_1388;
  FName local_1380;
  FSlateBrush *local_1378;
  bool local_1370;
  undefined1 local_1368 [8];
  ForAnyElementType FStack_1360;
  int local_1358;
  FText local_1350;
  bool local_1340;
  undefined1 local_1338 [8];
  ForAnyElementType FStack_1330;
  int local_1328;
  FText local_1320;
  bool local_1310;
  undefined1 local_1308 [8];
  ForAnyElementType FStack_1300;
  int local_12f8;
  undefined8 local_12f0;
  undefined8 uStack_12e8;
  undefined4 local_12e0;
  bool local_12dc;
  undefined1 local_12d8 [8];
  ForAnyElementType FStack_12d0;
  int local_12c8;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined4 local_12b0;
  bool local_12ac;
  undefined1 local_12a8 [8];
  ForAnyElementType FStack_12a0;
  int local_1298;
  undefined8 local_1290;
  undefined8 uStack_1288;
  bool local_1280;
  undefined1 local_1278 [8];
  ForAnyElementType FStack_1270;
  int local_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  bool local_1250;
  undefined1 local_1248 [8];
  ForAnyElementType FStack_1240;
  int local_1238;
  FDestructionSentinel local_1230;
  undefined1 *local_1218;
  TAttribute<EKeyboardType> local_1210;
  TAttribute<bool> local_11f0;
  undefined1 local_11d0 [16];
  undefined1 local_11c0 [32];
  undefined1 local_11a0 [24];
  TSharedRef<STextBlock,1> local_1188;
  double local_1178;
  double dStack_1170;
  bool local_1168;
  undefined1 local_1160 [24];
  FSlateFontInfo local_1148;
  bool local_10e8;
  undefined1 local_10e0 [8];
  ForAnyElementType FStack_10d8;
  int local_10d0;
  FSlateFontInfo local_10c8;
  bool local_1068;
  undefined1 local_1060 [8];
  ForAnyElementType FStack_1058;
  int local_1050;
  TSharedRef<SHorizontalBox,1> local_1048;
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs> local_1038;
  TSharedRef<SEditableText,1> local_1020;
  undefined1 local_1010 [16];
  FSharedReferencer<1> local_1000 [8];
  undefined4 local_fc0;
  undefined1 local_fbc;
  TOptional<FSizeParam> local_fb8;
  undefined1 local_f28 [16];
  FSharedReferencer<1> local_f18 [8];
  undefined4 local_ed8;
  undefined1 local_ed4;
  TOptional<FSizeParam> local_ed0;
  TAttribute<FText> local_e40;
  FArguments local_e10;
  FArguments local_c08;
  FArguments local_6b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14285d0f3;
  pFVar18 = (FSlot *)0x0;
  local_res10[0] = 0;
  (this->CanEditAttribute).Value = (param_1->_CanEdit).Value;
  (this->CanEditAttribute).bIsSet = (param_1->_CanEdit).bIsSet;
  local_res8 = this;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->CanEditAttribute).Getter,&(param_1->_CanEdit).Getter);
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTextChanged,&param_1->_OnTextChanged);
  TAttribute<FText>::operator=(&this->TextAttribute,&param_1->_Text);
  local_1488._0_8_ = SHorizontalBox::FArguments::FArguments(&local_e10);
  pFVar5 = ::operator_new(0x58);
  local_1458 = pFVar18;
  if (pFVar5 != (FSlot *)0x0) {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    *(undefined8 *)&pFVar5->field_0x40 = 0;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    local_1458 = SHorizontalBox::FSlot::FSlot(pFVar5);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_f28,(FSlot *)&local_1458);
  pFVar6 = (FSizeParam *)FAuto::FAuto((FAuto *)local_11d0);
  TOptional<FSizeParam>::operator=(&local_ed0,pFVar6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  if ((void *)local_11a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11c0);
  if ((void *)local_11c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11c0);
  local_ed8 = 2;
  local_ed4 = 1;
  pFVar7 = STextBlock::FArguments::FArguments(&local_c08);
  local_12e0._0_1_ = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_12e0._1_1_ = (param_1->_ColorAndOpacity).Value.ColorTableId;
  local_12e0._2_2_ = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  local_12f0 = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  uStack_12e8 = *(undefined8 *)
                 ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_12dc = (param_1->_ColorAndOpacity).bIsSet;
  local_12c8 = 0;
  local_12d8 = (undefined1  [8])0x0;
  FStack_12d0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_12d8,
             &(param_1->_ColorAndOpacity).Getter);
  *(undefined8 *)&(pFVar7->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_12f0;
  *(undefined8 *)((longlong)&(pFVar7->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_12e8;
  (pFVar7->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_12e0;
  (pFVar7->_ColorAndOpacity).Value.ColorTableId = local_12e0._1_1_;
  *(undefined2 *)&(pFVar7->_ColorAndOpacity).Value.field_0x12 = local_12e0._2_2_;
  (pFVar7->_ColorAndOpacity).bIsSet = local_12dc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_12d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_12d8,
             (FWriteAccessScope *)&local_1470);
  if ((local_12c8 != 0) && (FStack_12d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_12d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_12d0,0,0,0x10);
    local_12c8 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_12d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_12d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12d8);
  FSlateFontInfo::FSlateFontInfo(&local_1148,&(param_1->_Font).Value);
  local_10e8 = (param_1->_Font).bIsSet;
  local_10d0 = 0;
  local_10e0 = (undefined1  [8])0x0;
  FStack_10d8.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_10e0,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar7->_Font).Value,&local_1148);
  (pFVar7->_Font).bIsSet = local_10e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_10e0,
             (FWriteAccessScope *)&local_1470);
  if ((local_10d0 != 0) && (FStack_10d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_10d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_10d8,0,0,0x10);
    local_10d0 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_10d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_10d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_10e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1148.CompositeFont.SharedReferenceCount.ReferenceController);
  local_1290 = *(undefined8 *)&(param_1->_HighlightColor).Value.field0_0x0;
  uStack_1288 = *(undefined8 *)((longlong)&(param_1->_HighlightColor).Value.field0_0x0 + 8);
  local_1280 = (param_1->_HighlightColor).bIsSet;
  local_1268 = 0;
  local_1278 = (undefined1  [8])0x0;
  FStack_1270.Data = (FScriptContainerElement *)0x0;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1278,
             &(param_1->_HighlightColor).Getter);
  *(undefined8 *)&(pFVar7->_HighlightColor).Value.field0_0x0 = local_1290;
  *(undefined8 *)((longlong)&(pFVar7->_HighlightColor).Value.field0_0x0 + 8) = uStack_1288;
  (pFVar7->_HighlightColor).bIsSet = local_1280;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_HighlightColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1278);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1278,
             (FWriteAccessScope *)&local_1470);
  if ((local_1268 != 0) && (FStack_1270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1270,0,0,0x10);
    local_1268 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_1270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1278);
  local_1378 = (param_1->_HighlightShape).Value;
  local_1370 = (param_1->_HighlightShape).bIsSet;
  local_1368 = (undefined1  [8])0x0;
  FStack_1360.Data = (FScriptContainerElement *)0x0;
  local_1358 = 0;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_1368,
             &(param_1->_HighlightShape).Getter);
  (pFVar7->_HighlightShape).Value = local_1378;
  (pFVar7->_HighlightShape).bIsSet = local_1370;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_HighlightShape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1368);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1368,
             (FWriteAccessScope *)&local_1470);
  if ((local_1358 != 0) && (FStack_1360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1360,0,0,0x10);
    local_1358 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_1360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1368);
  local_1320.TextData.Reference = (param_1->_HighlightText).Value.TextData.Reference;
  if (local_1320.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1320.TextData.Reference + 8))
              (local_1320.TextData.Reference,&local_1458);
  }
  local_1320.Flags = (param_1->_HighlightText).Value.Flags;
  local_1310 = (param_1->_HighlightText).bIsSet;
  local_1308 = (undefined1  [8])0x0;
  FStack_1300.Data = (FScriptContainerElement *)0x0;
  local_12f8 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1308,
             &(param_1->_HighlightText).Getter);
  FText::operator=(&(pFVar7->_HighlightText).Value,&local_1320);
  (pFVar7->_HighlightText).bIsSet = local_1310;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_HighlightText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1308);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1308,
             (FWriteAccessScope *)&local_1470);
  if ((local_12f8 != 0) && (FStack_1300.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1300.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1300,0,0,0x10);
    local_12f8 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_1300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1300.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1308);
  if (local_1320.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1320.TextData.Reference + 0x10))();
  }
  local_1440 = (param_1->_MinDesiredWidth).Value;
  local_143c = (param_1->_MinDesiredWidth).bIsSet;
  local_1438 = (undefined1  [8])0x0;
  FStack_1430.Data = (FScriptContainerElement *)0x0;
  local_1428 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1438,
             &(param_1->_MinDesiredWidth).Getter);
  (pFVar7->_MinDesiredWidth).Value = local_1440;
  (pFVar7->_MinDesiredWidth).bIsSet = local_143c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1438);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1438,
             (FWriteAccessScope *)&local_1470);
  if ((local_1428 != 0) && (FStack_1430.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1430.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1430,0,0,0x10);
    local_1428 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_1430.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1430.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1438);
  local_1260 = *(undefined8 *)&(param_1->_ShadowColorAndOpacity).Value.field0_0x0;
  uStack_1258 = *(undefined8 *)((longlong)&(param_1->_ShadowColorAndOpacity).Value.field0_0x0 + 8);
  local_1250 = (param_1->_ShadowColorAndOpacity).bIsSet;
  local_1238 = 0;
  local_1248 = (undefined1  [8])0x0;
  FStack_1240.Data = (FScriptContainerElement *)0x0;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_1248,
             &(param_1->_ShadowColorAndOpacity).Getter);
  *(undefined8 *)&(pFVar7->_ShadowColorAndOpacity).Value.field0_0x0 = local_1260;
  *(undefined8 *)((longlong)&(pFVar7->_ShadowColorAndOpacity).Value.field0_0x0 + 8) = uStack_1258;
  (pFVar7->_ShadowColorAndOpacity).bIsSet = local_1250;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ShadowColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1248);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1248,
             (FWriteAccessScope *)&local_1470);
  if ((local_1238 != 0) && (FStack_1240.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1240.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1240,0,0,0x10);
    local_1238 = 0;
  }
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_1240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1240.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1248);
  local_1178 = (param_1->_ShadowOffset).Value.field0_0x0._s_0.X;
  dStack_1170 = (param_1->_ShadowOffset).Value.field0_0x0._s_0.Y;
  local_1168 = (param_1->_ShadowOffset).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_1160,&(param_1->_ShadowOffset).Getter);
  (pFVar7->_ShadowOffset).Value.field0_0x0._s_0.X = local_1178;
  (pFVar7->_ShadowOffset).Value.field0_0x0._s_0.Y = dStack_1170;
  (pFVar7->_ShadowOffset).bIsSet = local_1168;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ShadowOffset).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1160);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1160);
  if ((void *)local_1160._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1160._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1160);
  pFVar7->_TextStyle = param_1->_TextStyle;
  local_1350.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_1350.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1350.TextData.Reference + 8))
              (local_1350.TextData.Reference,&local_1458);
  }
  local_1350.Flags = (param_1->_Text).Value.Flags;
  local_1340 = (param_1->_Text).bIsSet;
  local_1338 = (undefined1  [8])0x0;
  FStack_1330.Data = (FScriptContainerElement *)0x0;
  local_1328 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1338,
             &(param_1->_Text).Getter);
  FText::operator=(&(pFVar7->_Text).Value,&local_1350);
  (pFVar7->_Text).bIsSet = local_1340;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1338);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1338,
             (FWriteAccessScope *)&local_1470);
  if ((local_1328 != 0) && (FStack_1330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1330,0,0,0x10);
    local_1328 = 0;
  }
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  if (local_1460 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_1468.ReferenceController,
               (FDestructionSentinel *)&local_1470);
  }
  if (FStack_1330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1338);
  if (local_1350.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1350.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_1458,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1380 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1450,&local_1380,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_1470,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableLabel.cpp"
             ,0x1e,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_1450);
  FLLMScope::~FLLMScope((FLLMScope *)&local_1458);
  if (local_1468.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1468.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1468.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (this->TextBlock).SharedReferenceCount.ReferenceController;
  (this->TextBlock).Object = local_1470;
  (this->TextBlock).SharedReferenceCount.ReferenceController = local_1468.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_1470,&local_1188
                      ,pFVar7);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  local_f28._8_8_ = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1450.Object = (SWidget *)0x0;
  local_1450.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_f28 + 0x10),&local_1450.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1450.SharedReferenceCount.ReferenceController);
  local_1380 = (FName)SHorizontalBox::FArguments::operator+
                                ((FArguments *)local_1488._0_8_,(FSlotArguments *)local_f28);
  pFVar5 = ::operator_new(0x58);
  if (pFVar5 != (FSlot *)0x0) {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    *(undefined8 *)&pFVar5->field_0x40 = 0;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    FVar9 = (FName)SHorizontalBox::FSlot::FSlot(pFVar5);
  }
  local_1488._0_8_ = FVar9;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1010,(FSlot *)&local_1488);
  pFVar6 = (FSizeParam *)FAuto::FAuto((FAuto *)local_11d0);
  TOptional<FSizeParam>::operator=(&local_fb8,pFVar6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  if ((void *)local_11a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11c0);
  if ((void *)local_11c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11c0);
  local_fc0 = 2;
  local_fbc = 1;
  pFVar10 = SEditableText::FArguments::FArguments(&local_6b0);
  local_1420 = 0x101;
  local_1408 = 0;
  local_1418 = (undefined1  [8])0x0;
  FStack_1410.Data = (FScriptContainerElement *)0x0;
  (pFVar10->_ClearKeyboardFocusOnCommit).Value = true;
  (pFVar10->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar10->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1418);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1418,
             (FWriteAccessScope *)&local_1488);
  if (((int)local_1408 != 0) && (FStack_1410.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1410.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1410,0,0,0x10);
    local_1408 = local_1408 & 0xffffffff00000000;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_1410.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1410.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1418);
  local_12c0 = *(undefined8 *)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  uStack_12b8 = *(undefined8 *)
                 ((longlong)&(param_1->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_12b0._0_1_ = (param_1->_ColorAndOpacity).Value.ColorUseRule;
  local_12b0._1_1_ = (param_1->_ColorAndOpacity).Value.ColorTableId;
  local_12b0._2_2_ = *(undefined2 *)&(param_1->_ColorAndOpacity).Value.field_0x12;
  local_12ac = (param_1->_ColorAndOpacity).bIsSet;
  local_1298 = 0;
  local_12a8 = (undefined1  [8])0x0;
  FStack_12a0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_12a8,
             &(param_1->_ColorAndOpacity).Getter);
  *(undefined8 *)&(pFVar10->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_12c0;
  *(undefined8 *)((longlong)&(pFVar10->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_12b8;
  (pFVar10->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_12b0;
  (pFVar10->_ColorAndOpacity).Value.ColorTableId = local_12b0._1_1_;
  *(undefined2 *)&(pFVar10->_ColorAndOpacity).Value.field_0x12 = local_12b0._2_2_;
  (pFVar10->_ColorAndOpacity).bIsSet = local_12ac;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_12a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_12a8,
             (FWriteAccessScope *)&local_1488);
  if ((local_1298 != 0) && (FStack_12a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_12a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_12a0,0,0,0x10);
    local_1298 = 0;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_12a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_12a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12a8);
  FSlateFontInfo::FSlateFontInfo(&local_10c8,&(param_1->_Font).Value);
  local_1068 = (param_1->_Font).bIsSet;
  local_1050 = 0;
  local_1060 = (undefined1  [8])0x0;
  FStack_1058.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy> *)local_1060,
             &(param_1->_Font).Getter);
  FSlateFontInfo::operator=(&(pFVar10->_Font).Value,&local_10c8);
  (pFVar10->_Font).bIsSet = local_1068;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1060);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1060,
             (FWriteAccessScope *)&local_1488);
  if ((local_1050 != 0) && (FStack_1058.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1058.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1058,0,0,0x10);
    local_1050 = 0;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_1058.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1058.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1060);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10c8.CompositeFont.SharedReferenceCount.ReferenceController);
  local_1400 = (param_1->_MinDesiredWidth).Value;
  local_13fc = (param_1->_MinDesiredWidth).bIsSet;
  local_13f8 = (undefined1  [8])0x0;
  FStack_13f0.Data = (FScriptContainerElement *)0x0;
  local_13e8 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_13f8,
             &(param_1->_MinDesiredWidth).Getter);
  (pFVar10->_MinDesiredWidth).Value = local_1400;
  (pFVar10->_MinDesiredWidth).bIsSet = local_13fc;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13f8,
             (FWriteAccessScope *)&local_1488);
  if ((local_13e8 != 0) && (FStack_13f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13f0,0,0,0x10);
    local_13e8 = 0;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_13f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnTextCommitted,
             (FWriteAccessScope *)&local_1230);
  local_1218 = &(pFVar10->_OnTextCommitted).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1218);
  pSVar19 = local_res8;
  if (puVar11 != (undefined8 *)0x0) {
    local_1488._0_8_ = HandleEditableTextTextCommitted;
    local_1488.Accessor =
         (FMRSWRecursiveAccessDetector *)
         ((ulonglong)local_1188.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1450);
    pSVar19 = (SEditableLabel *)(pTVar12->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar12->Object;
    if (pSVar19 != (SEditableLabel *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar19->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar19->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar19->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar19->_padding_ + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSEditableLabel___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar2;
    puVar11[4] = pSVar19;
    if (pSVar19 != (SEditableLabel *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar19->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar19->_padding_)[1] + 1);
      UNLOCK();
    }
    pFVar18 = (FSlot *)&DAT_00000007;
    ((FName *)(puVar11 + 5))->ComparisonIndex = (FNameEntryId)local_1488.AccessType;
    ((FName *)(puVar11 + 5))->Number = local_1488._4_4_;
    puVar11[6] = local_1488.Accessor;
  }
  if (((ulonglong)pFVar18 & 4) != 0) {
    pFVar18 = (FSlot *)(ulonglong)((uint)pFVar18 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
  }
  if (((ulonglong)pFVar18 & 2) != 0) {
    pFVar18 = (FSlot *)(ulonglong)((uint)pFVar18 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
  }
  if (((ulonglong)pFVar18 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1450.SharedReferenceCount.ReferenceController);
  }
  if (local_1230.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1230.Accessor,&local_1230);
  }
  local_13e0 = 0x101;
  local_13d8 = (undefined1  [8])0x0;
  FStack_13d0.Data = (FScriptContainerElement *)0x0;
  local_13c8 = 0;
  (pFVar10->_RevertTextOnEscape).Value = true;
  (pFVar10->_RevertTextOnEscape).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_RevertTextOnEscape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13d8,
             (FWriteAccessScope *)&local_1488);
  if (((int)local_13c8 != 0) && (FStack_13d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13d0,0,0,0x10);
    local_13c8 = local_13c8 & 0xffffffff00000000;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_13d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13d8);
  local_13c0 = 0x100;
  local_13a8 = 0;
  local_13b8 = (undefined1  [8])0x0;
  FStack_13b0.Data = (FScriptContainerElement *)0x0;
  (pFVar10->_SelectAllTextOnCommit).Value = false;
  (pFVar10->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_13b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_13b8,
             (FWriteAccessScope *)&local_1488);
  if (((int)local_13a8 != 0) && (FStack_13b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_13b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_13b0,0,0,0x10);
    local_13a8 = local_13a8 & 0xffffffff00000000;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_13b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_13b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_13b8);
  local_11f0.Value = true;
  local_11f0.bIsSet = true;
  local_11f0.Getter._16_8_ = 0;
  local_11f0.Getter._0_8_ = 0;
  local_11f0.Getter._8_8_ = 0;
  pFVar10 = SEditableText::FArguments::SelectAllTextWhenFocused(pFVar10,&local_11f0);
  pFVar10->_Style = param_1->_EditableTextStyle;
  pTVar14 = TAttribute<FText>::TAttribute<FText>(&local_e40,&param_1->_Text);
  pFVar10 = SEditableText::FArguments::Text(pFVar10,pTVar14);
  local_1210.Value = Keyboard_Number;
  local_1210.bIsSet = true;
  local_1210.Getter._16_8_ = 0;
  local_1210.Getter._0_8_ = 0;
  local_1210.Getter._8_8_ = 0;
  pFVar10 = SEditableText::FArguments::VirtualKeyboardType(pFVar10,&local_1210);
  local_13a0 = (uchar)EVisibility::Collapsed.Value.Value;
  local_139f = 1;
  local_1388 = 0;
  local_1398 = (undefined1  [8])0x0;
  FStack_1390.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar10->_padding_ = EVisibility::Collapsed.Value.Value;
  *(undefined1 *)((longlong)&pFVar10->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1398);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1398,
             (FWriteAccessScope *)&local_1488);
  if (((int)local_1388 != 0) && (FStack_1390.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1390.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1390,0,0,0x10);
    local_1388 = local_1388 & 0xffffffff00000000;
  }
  if (local_1488.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1488.Accessor,&local_1488);
  }
  if (FStack_1390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1390.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1398);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_1458,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1488.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_1488._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_1450,(FName *)&local_1488,true);
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>
            (&local_1038,"SEditableText",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableLabel.cpp"
             ,0x2f,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_1450);
  FLLMScope::~FLLMScope((FLLMScope *)&local_1458);
  pSVar19 = local_res8;
  this_00 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::Expose<SEditableText>
                      (&local_1038,&local_res8->EditableText);
  pTVar15 = TSlateDecl<SEditableText,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_1020,pFVar10);
  pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
  local_1010._8_8_ = pTVar15->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1488.AccessType = 0;
  local_1488._4_4_ = 0;
  local_1488.Accessor = (FMRSWRecursiveAccessDetector *)pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)(local_1010 + 0x10),
             (FSharedReferencer<1> *)&local_1488.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1488.Accessor);
  pFVar16 = SHorizontalBox::FArguments::operator+
                      ((FArguments *)local_1380,(FSlotArguments *)local_1010);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1488.AccessType = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_1488._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope((FMemScope *)&local_1450,(FName *)&local_1488,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_1230,"SHorizontalBox"
             ,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SEditableLabel.cpp"
             ,0x18,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_1450);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_1230,
                       &local_1048,pFVar16);
  pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_1488._0_8_ = pTVar17->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1488.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &pSVar19->_padding_,(TSharedRef<SWidget,1> *)&local_1488);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1048.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1230.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1020.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1038._Widget.SharedReferenceCount.ReferenceController);
  SEditableText::FArguments::~FArguments(&local_6b0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1010);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1188.SharedReferenceCount.ReferenceController._4_4_,
                      local_1188.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1468.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_c08);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_f28);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e10._Slots.AllocatorInstance.Data,local_e10._Slots.ArrayNum);
  if ((FSlotArguments *)local_e10._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e10._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e10);
  return;
}

// EnterTextMode @ 14286f430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableLabel::EnterTextMode(SEditableLabel *this)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  bool *pbVar4;
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_58;
  TAttribute<EVisibility> local_48;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  pbVar4 = TAttribute<bool>::Get(&this->CanEditAttribute);
  if (*pbVar4 != false) {
    if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
    local_48.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_48.Getter._16_8_ = 0;
    local_48.bIsSet = true;
    local_48.Getter._0_8_ = 0;
    local_48.Getter._8_8_ = 0;
    SLeafWidget::SetVisibility((SLeafWidget *)(this->TextBlock).Object,&local_48);
    if ((this->EditableText).Object == (SEditableText *)0x0) {
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
    pSVar1 = (this->EditableText).Object;
    local_28[1] = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28[0] = (uchar)EVisibility::Visible.Value.Value;
    local_10 = 0;
    (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,local_28);
    this_00 = FSlateApplication::Get();
    local_58.Object = (SWidget *)(this->EditableText).Object;
    local_58.SharedReferenceCount.ReferenceController =
         (this->EditableText).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::SetAllUserFocus(this_00,&local_58,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ExitTextMode @ 1428717d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEditableLabel::ExitTextMode(SEditableLabel *this)

{
  SEditableText *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *this_00;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedPtr<SWidget,1> local_68;
  TSharedRef<SWidget,1> local_58;
  TAttribute<EVisibility> local_48;
  uchar local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if ((this->TextBlock).Object == (STextBlock *)0x0) {
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
  local_48.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_48.bIsSet = true;
  local_48.Getter._16_8_ = 0;
  local_48.Getter._0_8_ = 0;
  local_48.Getter._8_8_ = 0;
  SLeafWidget::SetVisibility((SLeafWidget *)(this->TextBlock).Object,&local_48);
  if ((this->EditableText).Object == (SEditableText *)0x0) {
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
  pSVar1 = (this->EditableText).Object;
  local_28[1] = 1;
  local_20 = 0;
  uStack_18 = 0;
  local_28[0] = (uchar)EVisibility::Collapsed.Value.Value;
  local_10 = 0;
  (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,local_28);
  this_00 = FSlateApplication::Get();
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::SetAllUserFocus(this_00,&local_68,SetDirectly);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// HandleEditableTextTextCommitted @ 14287e470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEditableLabel::HandleEditableTextTextCommitted(SEditableLabel *this,FText *param_1,Type param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  ExitTextMode(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged,
             &local_28);
  if ((*(int *)&(this->OnTextChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTextChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// HandleTextBlockDoubleClicked @ 14287f120

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableLabel::HandleTextBlockDoubleClicked(SEditableLabel *this,FReply *__return_storage_ptr__)

{
  SEditableText *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  EnterTextMode(this);
  FReply::FReply(&local_c8,true);
  if ((this->EditableText).Object == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar3)();
      return pFVar5;
    }
  }
  pSVar1 = (this->EditableText).Object;
  pTVar2 = (this->EditableText).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar1 == (SEditableText *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = (SWidget *)pSVar1;
  local_d8.SharedReferenceCount.ReferenceController = pTVar2;
  pFVar5 = FReply::SetUserFocus(&local_c8,&local_d8,Navigation,false);
  FReply::FReply(__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// HasKeyboardFocus @ 14287f250

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableLabel::HasKeyboardFocus(SEditableLabel *this)

{
  SEditableText *pSVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = SWidget::HasKeyboardFocus((SWidget *)this);
  if (bVar2) {
    return true;
  }
  pSVar1 = (this->EditableText).Object;
  if ((pSVar1 != (SEditableText *)0x0) &&
     (cVar3 = (**(code **)(pSVar1->_padding_ + 0x1a0))(), cVar3 != '\0')) {
    return true;
  }
  return false;
}

// OnKeyDown @ 142886e20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableLabel::OnKeyDown
          (SEditableLabel *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FReply *pFVar4;
  bool *pbVar5;
  TSharedRef<SEditableText,1> *pTVar6;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SEditableText,1> local_d8;
  FReply local_c8;
  
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Escape.KeyName) {
    ExitTextMode(this);
    FReply::FReply(&local_c8,true);
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_d8);
    pFVar4 = FReply::SetUserFocus(&local_c8,pTVar3,Navigation,false);
    FReply::FReply(__return_storage_ptr__,pFVar4);
    FReply::~FReply(&local_c8);
  }
  else {
    if (FVar2 == EKeys::F2.KeyName) {
      pbVar5 = TAttribute<bool>::Get(&this->CanEditAttribute);
      if (*pbVar5 != false) {
        EnterTextMode(this);
        FReply::FReply(&local_c8,true);
        pTVar6 = TSharedPtr<SEditableText,1>::ToSharedRef(&this->EditableText,&local_d8);
        local_e8.Object = (SWidget *)pTVar6->Object;
        local_e8.SharedReferenceCount.ReferenceController =
             (pTVar6->SharedReferenceCount).ReferenceController;
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar4 = FReply::SetUserFocus(&local_c8,&local_e8,Navigation,false);
        FReply::FReply(__return_storage_ptr__,pFVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        FReply::~FReply(&local_c8);
        goto LAB_142886f3b;
      }
    }
    FReply::FReply(__return_storage_ptr__,false);
  }
LAB_142886f3b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142887690

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SEditableLabel::OnMouseButtonDoubleClick
          (SEditableLabel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SEditableText *pSVar3;
  code *pcVar4;
  FReply *pFVar5;
  bool bVar6;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar6) {
    EnterTextMode(this);
    FReply::FReply(&local_c8,true);
    if ((this->EditableText).Object == (SEditableText *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar4)();
        return pFVar5;
      }
    }
    pTVar2 = (this->EditableText).SharedReferenceCount.ReferenceController;
    pSVar3 = (this->EditableText).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 == (SEditableText *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar4)();
        return pFVar5;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.Object = (SWidget *)pSVar3;
    local_d8.SharedReferenceCount.ReferenceController = pTVar2;
    pFVar5 = FReply::SetUserFocus(&local_c8,&local_d8,Navigation,false);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// SupportsKeyboardFocus @ 14289d2b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SEditableLabel::SupportsKeyboardFocus(SEditableLabel *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->CanEditAttribute);
  return *pbVar1;
}

