// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 133

// FSlateEditableTextLayout @ 1429b7ac0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateEditableTextLayout * __thiscall
FSlateEditableTextLayout::FSlateEditableTextLayout
          (FSlateEditableTextLayout *this,ISlateEditableTextWidget *param_1,
          TAttribute<FText> *param_2,FTextBlockStyle *param_3,TOptional<ETextShapingMethod> param_4,
          TOptional<ETextFlowDirection> param_5,
          TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
          *param_6,TSharedRef<ITextLayoutMarshaller,1> *param_7,
          TSharedRef<ITextLayoutMarshaller,1> *param_8)

{
  TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 *this_01;
  undefined1 *puVar1;
  TSharedPtr<FSlateTextLayout,1> *this_02;
  TSharedPtr<FUICommandList,1> *this_03;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  char cVar8;
  bool bVar9;
  FSharedReferencer<1> *this_04;
  undefined8 *puVar10;
  TSharedRef<IBreakIterator,1> *pTVar11;
  FSlateEditableTextLayout *pFVar12;
  FText *pFVar13;
  FTextSnapshot *pFVar14;
  FSlateTextLayout *pFVar15;
  ETextShapingMethod *pEVar16;
  ETextFlowDirection *pEVar17;
  ForElementType<TAlignedBytes<16,16>_> FVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  ForElementType<TAlignedBytes<16,16>_> FVar21;
  TRawPtrProxy<FUICommandList> TVar22;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar23;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar24;
  FGenericCommands *pFVar25;
  FUICommandList *pFVar26;
  ulong64 uVar27;
  TAttribute<FString> *pTVar28;
  bool bVar29;
  undefined6 in_stack_0000002a;
  undefined6 in_stack_00000032;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_718;
  ForAnyElementType local_710;
  int local_708;
  ForElementType<TAlignedBytes<16,16>_> local_700;
  undefined8 local_6f8;
  bool local_6f0;
  undefined1 local_6e8 [8];
  ForAnyElementType FStack_6e0;
  ulonglong local_6d8;
  undefined4 local_6d0;
  undefined1 local_6cc;
  undefined1 local_6c8 [8];
  ForAnyElementType FStack_6c0;
  ulonglong local_6b8;
  undefined2 local_6b0;
  undefined1 local_6a8 [8];
  ForAnyElementType FStack_6a0;
  ulonglong local_698;
  undefined1 local_690 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_688;
  ForAnyElementType FStack_680;
  ulonglong local_678;
  float local_670;
  undefined1 local_66c;
  undefined1 local_668 [8];
  ForAnyElementType FStack_660;
  ulonglong local_658;
  undefined4 local_650;
  undefined1 local_64c;
  undefined1 local_648 [8];
  ForAnyElementType FStack_640;
  ulonglong local_638;
  undefined2 local_630;
  undefined1 local_628 [8];
  ForAnyElementType FStack_620;
  ulonglong local_618;
  longlong local_610;
  undefined1 local_608;
  undefined1 local_600 [8];
  ForAnyElementType FStack_5f8;
  ulonglong local_5f0;
  longlong local_5e8;
  undefined1 local_5e0;
  undefined1 local_5d8 [8];
  ForAnyElementType FStack_5d0;
  ulonglong local_5c8;
  IBreakIterator *local_5c0;
  FSharedReferencer<1> local_5b8;
  ITextLayoutMarshaller *local_5b0;
  FSharedReferencer<1> local_5a8;
  ITextLayoutMarshaller *local_5a0;
  FSharedReferencer<1> local_598;
  TSharedPtr<FSlateTextLayout,1> local_590;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined1 local_570;
  undefined1 local_568 [8];
  ForAnyElementType FStack_560;
  ulonglong local_558;
  FTextInputMethodContext *local_548;
  FSharedReferencer<1> FStack_540;
  FCursorLineHighlighter *local_538;
  FSharedReferencer<1> FStack_530;
  FTextCompositionHighlighter *local_528;
  FSharedReferencer<1> FStack_520;
  FTextSelectionHighlighter *local_518;
  FSharedReferencer<1> FStack_510;
  FTextSearchHighlighter *local_508;
  FSharedReferencer<1> FStack_500;
  FVirtualKeyboardEntry *local_4f8;
  FSharedReferencer<1> FStack_4f0;
  undefined1 local_4e8 [8];
  FDelegateAllocation local_4e0;
  TRawPtrProxy<FSlateEditableTextLayout::FVirtualKeyboardEntry> local_4d0;
  FSharedReferencer<1> *local_4c8;
  TRawPtrProxy<FSlateEditableTextLayout::FTextInputMethodContext> local_4c0;
  FSharedReferencer<1> *local_4b8;
  TRawPtrProxy<SlateEditableTextTypes::FCursorLineHighlighter> local_4b0;
  FSharedReferencer<1> *local_4a8;
  TRawPtrProxy<SlateEditableTextTypes::FTextCompositionHighlighter> local_4a0;
  FSharedReferencer<1> *local_498;
  TRawPtrProxy<SlateEditableTextTypes::FTextSelectionHighlighter> local_490;
  TRawPtrProxy<SlateEditableTextTypes::FTextSearchHighlighter> local_488;
  FSharedReferencer<1> *local_480;
  FSharedReferencer<1> *local_478;
  FSharedReferencer<1> *local_470;
  FSlateTextLayout *local_468;
  TReferenceControllerBase<1> *local_460;
  TSharedPtr<FUICommandInfo_const_,1> local_458;
  TSharedPtr<FUICommandInfo_const_,1> local_448;
  TSharedPtr<FUICommandInfo_const_,1> local_438;
  TSharedPtr<FUICommandInfo_const_,1> local_428;
  TSharedPtr<FUICommandInfo_const_,1> local_418;
  TSharedPtr<FUICommandInfo_const_,1> local_408;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDestructionSentinel local_3b0;
  FDestructionSentinel local_398;
  FDestructionSentinel local_380;
  FDestructionSentinel local_368;
  FDestructionSentinel local_350;
  FDestructionSentinel local_338;
  FDestructionSentinel local_320;
  FDestructionSentinel local_308;
  FDestructionSentinel local_2f0;
  FDestructionSentinel local_2d8;
  FDestructionSentinel local_2c0;
  undefined1 *local_2a8;
  FDestructionSentinel local_2a0;
  FDelegateAllocation *local_288;
  FName local_280;
  undefined1 local_278 [16];
  int *local_268;
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> local_258;
  TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1> local_248;
  FName local_238 [2];
  TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1> local_228;
  FReadAccessScope local_218;
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1> local_1f8;
  undefined1 local_1e8 [8];
  TReferenceControllerBase<1> *local_1e0;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> local_1d8;
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> local_1c8;
  TSharedRef<IBreakIterator,1> local_1b8;
  TSharedRef<IBreakIterator,1> local_1a8;
  undefined1 local_198 [16];
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_158;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_140;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_128;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_110;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_f8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_e0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_c8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_b0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_98;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_80;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_68;
  
  (this->Marshaller).Object = (ITextLayoutMarshaller *)0x0;
  this_00 = &this->CreateSlateTextLayout;
  this_04 = &(this->Marshaller).SharedReferenceCount;
  (this->HintMarshaller).Object = (ITextLayoutMarshaller *)0x0;
  this_01 = &(this->CreateSlateTextLayout).field_0x8;
  (this->GraphemeBreakIterator).Object = (IBreakIterator *)0x0;
  (this->GraphemeBreakIterator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_04->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_478 = &(this->HintMarshaller).SharedReferenceCount;
  (this->TextLayout).Object = (FSlateTextLayout *)0x0;
  (this->TextLayout).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->HintTextLayout).Ptr = (FSlateTextBlockLayout *)0x0;
  local_478->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined4 *)&(this->CreateSlateTextLayout).field_0x10 = 0;
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  FTextBlockStyle::FTextBlockStyle(&this->HintTextStyle);
  FText::FText(&(this->BoundText).Value);
  (this->BoundText).bIsSet = false;
  *(undefined8 *)&(this->BoundText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BoundText).Getter = 0;
  *(undefined8 *)&(this->BoundText).Getter.field_0x8 = 0;
  FTextSnapshot::FTextSnapshot(&this->BoundTextLastTick);
  FText::FText(&(this->HintText).Value);
  (this->HintText).bIsSet = false;
  *(undefined8 *)&(this->HintText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HintText).Getter = 0;
  *(undefined8 *)&(this->HintText).Getter.field_0x8 = 0;
  FText::FText(&(this->BoundSearchText).Value);
  (this->BoundSearchText).bIsSet = false;
  *(undefined8 *)&(this->BoundSearchText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BoundSearchText).Getter = 0;
  *(undefined8 *)&(this->BoundSearchText).Getter.field_0x8 = 0;
  FTextSnapshot::FTextSnapshot(&this->BoundSearchTextLastTick);
  FText::FText(&this->SearchText);
  *(undefined8 *)&(this->SearchResultToIndexMap).field_0x8 = 0;
  *(undefined8 *)&this->SearchResultToIndexMap = 0;
  *(undefined8 *)&(this->SearchResultToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->SearchResultToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SearchResultToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SearchResultToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SearchResultToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SearchResultToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SearchResultToIndexMap).field_0x48 = 0;
  (this->WrapTextAt).Value = 0.0;
  (this->WrapTextAt).bIsSet = false;
  *(undefined8 *)&(this->WrapTextAt).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WrapTextAt).Getter = 0;
  *(undefined8 *)&(this->WrapTextAt).Getter.field_0x8 = 0;
  (this->AutoWrapText).Value = false;
  (this->AutoWrapText).bIsSet = false;
  *(undefined8 *)&(this->AutoWrapText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AutoWrapText).Getter = 0;
  *(undefined8 *)&(this->AutoWrapText).Getter.field_0x8 = 0;
  (this->WrappingPolicy).Value = DefaultWrapping;
  (this->WrappingPolicy).bIsSet = false;
  *(undefined8 *)&(this->WrappingPolicy).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WrappingPolicy).Getter = 0;
  *(undefined8 *)&(this->WrappingPolicy).Getter.field_0x8 = 0;
  (this->Margin).bIsSet = false;
  (this->Margin).Value.Left = 0.0;
  (this->Margin).Value.Top = 0.0;
  (this->Margin).Value.Right = 0.0;
  (this->Margin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->Margin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Margin).Getter = 0;
  *(undefined8 *)&(this->Margin).Getter.field_0x8 = 0;
  (this->Justification).Value = Left;
  (this->Justification).bIsSet = false;
  *(undefined8 *)&(this->Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Justification).Getter = 0;
  *(undefined8 *)&(this->Justification).Getter.field_0x8 = 0;
  (this->LineHeightPercentage).Value = 0.0;
  (this->LineHeightPercentage).bIsSet = false;
  *(undefined8 *)&(this->LineHeightPercentage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LineHeightPercentage).Getter = 0;
  *(undefined8 *)&(this->LineHeightPercentage).Getter.field_0x8 = 0;
  (this->ApplyLineHeightToBottomLine).Value = false;
  (this->ApplyLineHeightToBottomLine).bIsSet = false;
  *(undefined8 *)&(this->ApplyLineHeightToBottomLine).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ApplyLineHeightToBottomLine).Getter = 0;
  *(undefined8 *)&(this->ApplyLineHeightToBottomLine).Getter.field_0x8 = 0;
  (this->DebugSourceInfo).Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSourceInfo).Value.Data.ArrayNum = 0;
  (this->DebugSourceInfo).Value.Data.ArrayMax = 0;
  (this->DebugSourceInfo).bIsSet = false;
  *(undefined4 *)&(this->DebugSourceInfo).Getter.field_0x14 = 0;
  *(undefined8 *)&(this->DebugSourceInfo).Getter = 0;
  *(undefined8 *)&(this->DebugSourceInfo).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->DebugSourceInfo).Getter.field_0x10 = 0;
  (this->VirtualKeyboardEntry).Object = (FVirtualKeyboardEntry *)0x0;
  local_4c8 = &(this->VirtualKeyboardEntry).SharedReferenceCount;
  (this->TextInputMethodChangeNotifier).Object = (ITextInputMethodChangeNotifier *)0x0;
  (this->TextInputMethodChangeNotifier).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_4c8->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TextInputMethodContext).Object = (FTextInputMethodContext *)0x0;
  local_4b8 = &(this->TextInputMethodContext).SharedReferenceCount;
  (this->ActiveLineHighlights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveLineHighlights).ArrayNum = 0;
  (this->ActiveLineHighlights).ArrayMax = 0;
  local_4b8->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CursorLineHighlighter).Object = (FCursorLineHighlighter *)0x0;
  local_4a8 = &(this->CursorLineHighlighter).SharedReferenceCount;
  (this->PositionToScrollIntoView).bIsSet = false;
  (this->SelectionStart).bIsSet = false;
  local_4a8->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TextCompositionHighlighter).Object = (FTextCompositionHighlighter *)0x0;
  local_498 = &(this->TextCompositionHighlighter).SharedReferenceCount;
  (this->CursorInfo).CursorPosition.LineIndex = 0;
  (this->CursorInfo).CursorPosition.Offset = 0;
  (this->CursorInfo).CursorAlignment = Left;
  (this->CursorInfo).CursorTextDirection = LeftToRight;
  local_498->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TextSelectionHighlighter).Object = (FTextSelectionHighlighter *)0x0;
  local_470 = &(this->TextSelectionHighlighter).SharedReferenceCount;
  (this->CursorInfo).LastCursorInteractionTime = 0.0;
  (this->UndoStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SearchSelectionHighlighter).Object = (FTextSearchHighlighter *)0x0;
  local_480 = &(this->SearchSelectionHighlighter).SharedReferenceCount;
  (this->UndoStates).ArrayNum = 0;
  (this->UndoStates).ArrayMax = 0;
  (this->StateBeforeChangingText).bIsSet = false;
  local_480->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::FText(&(this->OriginalText).Text);
  (this->OriginalText).SelectionStart.bIsSet = false;
  (this->OriginalText).CursorInfo.CursorPosition.LineIndex = 0;
  (this->OriginalText).CursorInfo.CursorPosition.Offset = 0;
  (this->OriginalText).CursorInfo.CursorAlignment = Left;
  (this->OriginalText).CursorInfo.CursorTextDirection = LeftToRight;
  (this->OriginalText).CursorInfo.LastCursorInteractionTime = 0.0;
  FText::FText(&this->VirtualKeyboardText);
  (this->OverflowPolicyOverride).bIsSet = false;
  this_03 = &this->UICommandList;
  this_03->Object = (FUICommandList *)0x0;
  (this->UICommandList).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveContextMenu).bIsPendingSummon = false;
  (this->ActiveContextMenu).ActiveMenu.Object = (IMenu *)0x0;
  (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_6 != this_00) {
    local_718.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_710.Data = (FScriptContainerElement *)0x0;
    local_708 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_188);
    if ((*(int *)&param_6->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_6->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_718);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_718,(FWriteAccessScope *)&local_3e0);
    iVar2 = local_708;
    FVar7.Data = local_710.Data;
    local_710.Data = (FScriptContainerElement *)0x0;
    local_708 = 0;
    if (local_3e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_3c8);
    puVar1 = &(this->CreateSlateTextLayout).field_0x8;
    if ((*(int *)&(this->CreateSlateTextLayout).field_0x10 != 0) &&
       (*(undefined8 **)puVar1 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)puVar1)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this_01,0,0,0x10);
      *(undefined4 *)&(this->CreateSlateTextLayout).field_0x10 = 0;
    }
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = FVar7.Data;
    *(int *)&(this->CreateSlateTextLayout).field_0x10 = iVar2;
    if (local_3c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_718,(FWriteAccessScope *)&local_3b0);
    if ((local_708 != 0) && (local_710.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_710.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_710,0,0,0x10);
      local_708 = 0;
    }
    if (local_3b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b0.Accessor,&local_3b0);
    }
    if (local_710.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_710.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_718.AccessDetector);
  }
  pTVar28 = &this->DebugSourceInfo;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_218);
  if (((*(int *)&(this->CreateSlateTextLayout).field_0x10 == 0) ||
      (*(longlong **)this_01 == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(**(longlong **)this_01 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_218);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_2c0);
    local_2a8 = this_01;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)this_01);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFSlateTextLayout___00__PEAVSWidget__AEBUFTextBlockStyle___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar27 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar27;
      *puVar10 = &TBaseFunctorDelegateInstance<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`5'::<lambda_1>_>
                  ::_vftable_;
    }
    if (local_2c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_218);
  }
  this->OwnerWidget = param_1;
  local_5b0 = param_7->Object;
  local_5a8.ReferenceController = (param_7->SharedReferenceCount).ReferenceController;
  if (local_5a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_5a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Marshaller != (TSharedPtr<ITextLayoutMarshaller,1> *)&local_5b0) {
    (this->Marshaller).Object = local_5b0;
    local_5b0 = (ITextLayoutMarshaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_04,&local_5a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8.ReferenceController);
  local_5a0 = param_8->Object;
  local_598.ReferenceController = (param_8->SharedReferenceCount).ReferenceController;
  if (local_598.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_598.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_598.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->HintMarshaller != (TSharedPtr<ITextLayoutMarshaller,1> *)&local_5a0) {
    (this->HintMarshaller).Object = local_5a0;
    local_5a0 = (ITextLayoutMarshaller *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_478,&local_598);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598.ReferenceController);
  FTextBlockStyle::operator=(&this->TextStyle,param_3);
  FTextBlockStyle::operator=(&this->HintTextStyle,&this->TextStyle);
  puVar10 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x90))(param_1,local_1e8);
  uVar4 = *puVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_170);
  FVar21 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FVar18 = FVar21;
  if (*(int *)&(this->CreateSlateTextLayout).field_0x10 != 0) {
    FVar18 = *(ForElementType<TAlignedBytes<16,16>_> *)this_01;
  }
  (**(code **)(*(longlong *)FVar18 + 0x60))(FVar18,&local_468,uVar4,&this->TextStyle);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_170);
  local_590.Object = local_468;
  local_590.SharedReferenceCount.ReferenceController = local_460;
  if (local_460 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_460->SharedReferenceCount = (atomic<int>)((int)local_460->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_02 = &this->TextLayout;
  if (this_02 != &local_590) {
    this_02->Object = local_468;
    local_590.Object = (FSlateTextLayout *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TextLayout).SharedReferenceCount,&local_590.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_590.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_460);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e0);
  local_6cc = 1;
  local_6d0 = 0;
  local_6b8 = 0;
  (this->WrapTextAt).Value = 0.0;
  local_6c8 = (undefined1  [8])0x0;
  FStack_6c0.Data = (FScriptContainerElement *)0x0;
  (this->WrapTextAt).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c8,
             (FWriteAccessScope *)&local_3f8);
  if (((int)local_6b8 != 0) && (FStack_6c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6c0,0,0,0x10);
    local_6b8 = local_6b8 & 0xffffffff00000000;
  }
  if (local_3f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
  }
  if (FStack_6c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6c8);
  local_6b0 = 0x100;
  local_698 = 0;
  (this->AutoWrapText).Value = false;
  (this->AutoWrapText).bIsSet = true;
  local_6a8 = (undefined1  [8])0x0;
  FStack_6a0.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a8,
             (FWriteAccessScope *)&local_398);
  if (((int)local_698 != 0) && (FStack_6a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6a0,0,0,0x10);
    local_698 = local_698 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_6a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a8);
  local_630 = 0x100;
  local_618 = 0;
  (this->WrappingPolicy).Value = DefaultWrapping;
  (this->WrappingPolicy).bIsSet = true;
  local_628 = (undefined1  [8])0x0;
  FStack_620.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WrappingPolicy).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_628);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_628,
             (FWriteAccessScope *)&local_380);
  if (((int)local_618 != 0) && (FStack_620.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_620.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_620,0,0,0x10);
    local_618 = local_618 & 0xffffffff00000000;
  }
  if (local_380.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_380.Accessor,&local_380);
  }
  if (FStack_620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_620.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_628);
  local_570 = 1;
  (this->Margin).bIsSet = true;
  local_558 = 0;
  local_580 = 0;
  uStack_578 = 0;
  local_568 = (undefined1  [8])0x0;
  FStack_560.Data = (FScriptContainerElement *)0x0;
  (this->Margin).Value.Left = 0.0;
  (this->Margin).Value.Top = 0.0;
  (this->Margin).Value.Right = 0.0;
  (this->Margin).Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Margin).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_568,
             (FWriteAccessScope *)&local_368);
  if (((int)local_558 != 0) && (FStack_560.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_560.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_560,0,0,0x10);
    local_558 = local_558 & 0xffffffff00000000;
  }
  if (local_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
  }
  if (FStack_560.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_560.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_568);
  local_650 = 0;
  local_638 = 0;
  local_64c = 1;
  local_648 = (undefined1  [8])0x0;
  FStack_640.Data = (FScriptContainerElement *)0x0;
  (this->Justification).Value = Left;
  (this->Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
             (FWriteAccessScope *)&local_320);
  if (((int)local_638 != 0) && (FStack_640.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_640.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_640,0,0,0x10);
    local_638 = local_638 & 0xffffffff00000000;
  }
  if (local_320.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
  }
  if (FStack_640.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_640.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  local_670 = __real_3f800000;
  local_658 = 0;
  (this->LineHeightPercentage).Value = __real_3f800000;
  local_66c = 1;
  local_668 = (undefined1  [8])0x0;
  FStack_660.Data = (FScriptContainerElement *)0x0;
  (this->LineHeightPercentage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LineHeightPercentage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_668);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_668,
             (FWriteAccessScope *)&local_2d8);
  if (((int)local_658 != 0) && (FStack_660.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_660.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_660,0,0,0x10);
    local_658 = local_658 & 0xffffffff00000000;
  }
  if (local_2d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
  }
  if (FStack_660.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_660.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_668);
  local_700 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6d8 = 0;
  local_6f8 = 0;
  local_6f0 = true;
  local_6e8 = (undefined1  [8])0x0;
  FStack_6e0.Data = (FScriptContainerElement *)0x0;
  if (pTVar28 != (TAttribute<FString> *)&local_700) {
    pFVar5 = (pTVar28->Value).Data.AllocatorInstance.Data;
    FVar18 = FVar21;
    local_6f8._0_4_ = 0;
    local_6f8._4_4_ = 0;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
      FVar18 = local_700;
    }
    (pTVar28->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar18;
    (this->DebugSourceInfo).Value.Data.ArrayNum = (int)local_6f8;
    (this->DebugSourceInfo).Value.Data.ArrayMax = local_6f8._4_4_;
  }
  local_6f8 = 0;
  local_700 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  (this->DebugSourceInfo).bIsSet = local_6f0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DebugSourceInfo).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6e8,
             (FWriteAccessScope *)&local_308);
  if (((int)local_6d8 != 0) && (FStack_6e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6e0,0,0,0x10);
    local_6d8 = local_6d8 & 0xffffffff00000000;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e8);
  if (local_700 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_700);
  }
  this->SearchCase = IgnoreCase;
  bVar29 = GSlateUseSharedBreakIterator == false;
  if (bVar29) {
    pTVar11 = FBreakIterator::CreateCharacterBoundaryIterator(&local_1a8);
  }
  else {
    pTVar11 = FBreakIterator::GetCharacterBoundaryIterator(&local_1b8);
  }
  local_5b8.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
  local_5c0 = pTVar11->Object;
  if (local_5b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5b8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_5b8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->GraphemeBreakIterator != (TSharedPtr<IBreakIterator,1> *)&local_5c0) {
    (this->GraphemeBreakIterator).Object = local_5c0;
    local_5c0 = (IBreakIterator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GraphemeBreakIterator).SharedReferenceCount,&local_5b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b8.ReferenceController);
  if (bVar29) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
  }
  TAttribute<FText>::operator=(&this->BoundText,param_2);
  bVar29 = (bool)(**(code **)((longlong)*this->OwnerWidget + 8))();
  if ((this_02->Object == (FSlateTextLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FSlateEditableTextLayout *)(*pcVar6)();
    return pFVar12;
  }
  local_678 = 0;
  local_690[1] = true;
  local_688.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_680.Data = (FScriptContainerElement *)0x0;
  local_690[0] = bVar29;
  FSlateTextLayout::SetIsPassword(this_02->Object,(TAttribute<bool> *)local_690);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_688,(FWriteAccessScope *)&local_2f0);
  if (((int)local_678 != 0) && (FStack_680.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_680.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_680,0,0,0x10);
    local_678 = local_678 & 0xffffffff00000000;
  }
  if (local_2f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
  }
  if (FStack_680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_680.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_688.AccessDetector);
  pFVar13 = FText::GetEmpty();
  if ((this->BoundText).bIsSet != false) {
    pFVar13 = TAttribute<FText>::Get(&this->BoundText);
  }
  SetEditableText(this,pFVar13,true);
  pFVar14 = FTextSnapshot::FTextSnapshot((FTextSnapshot *)(local_278 + 8),pFVar13);
  FTextSnapshot::operator=(&this->BoundTextLastTick,pFVar14);
  if (local_268 != (int *)0x0) {
    LOCK();
    iVar2 = *local_268;
    *local_268 = *local_268 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (*(void **)(local_268 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(local_268 + 2));
      }
      ::operator_delete(local_268,0x18);
    }
  }
  if ((longlong *)local_278._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_278._8_8_ + 0x10))();
  }
  this->bWasPasswordLastTick = bVar29;
  if (*(char *)((longlong)CONCAT62(in_stack_0000002a,param_4) + 1) != '\0') {
    pFVar15 = TSharedPtr<FSlateTextLayout,1>::operator->(this_02);
    pEVar16 = TOptional<enum_ETextShapingMethod>::GetValue
                        ((void *)CONCAT62(in_stack_0000002a,param_4));
    FTextLayout::SetTextShapingMethod((FTextLayout *)pFVar15,*pEVar16);
  }
  if (*(char *)((longlong)CONCAT62(in_stack_00000032,param_5) + 1) != '\0') {
    pFVar15 = TSharedPtr<FSlateTextLayout,1>::operator->(this_02);
    pEVar17 = TOptional<enum_ETextFlowDirection>::GetValue
                        ((void *)CONCAT62(in_stack_00000032,param_5));
    FTextLayout::SetTextFlowDirection((FTextLayout *)pFVar15,*pEVar17);
  }
  FVar18 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x28);
  local_4d0.Object = (FVirtualKeyboardEntry *)FVar21;
  if (FVar18 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(longlong *)((longlong)FVar18 + 8) = 0;
    *(undefined ***)FVar18 = &___7FVirtualKeyboardEntry_FSlateEditableTextLayout__6B_;
    *(longlong *)((longlong)FVar18 + 0x10) = 0;
    *(undefined4 *)((longlong)FVar18 + 0x18) = 0;
    *(FSlateEditableTextLayout **)((longlong)FVar18 + 0x20) = this;
    local_4d0.Object = (FVirtualKeyboardEntry *)FVar18;
  }
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1>::
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1><FSlateEditableTextLayout::FVirtualKeyboardEntry>
            (&local_1c8,&local_4d0);
  local_4f8 = local_1c8.Object;
  FStack_4f0.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->VirtualKeyboardEntry !=
      (TSharedPtr<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *)&local_4f8) {
    (this->VirtualKeyboardEntry).Object = local_1c8.Object;
    local_4f8 = (FVirtualKeyboardEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_4c8,&FStack_4f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_4f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  this->bHasRegisteredTextInputMethodContext = false;
  FVar18 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x68);
  local_4c0.Object = (FTextInputMethodContext *)FVar21;
  if (FVar18 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(FSlateEditableTextLayout **)((longlong)FVar18 + 8) = this;
    *(undefined ***)FVar18 = &___7FTextInputMethodContext_FSlateEditableTextLayout__6B_;
    *(longlong *)((longlong)FVar18 + 0x10) = 0;
    *(longlong *)((longlong)FVar18 + 0x18) = 0;
    FGeometry::FGeometry((FGeometry *)((longlong)FVar18 + 0x20));
    *(FScriptContainerElement *)((longlong)FVar18 + 0x58) = (FScriptContainerElement)0x0;
    *(undefined4 *)((longlong)FVar18 + 0x5c) = 0xffffffff;
    *(undefined4 *)((longlong)FVar18 + 0x60) = 0;
    local_4c0.Object = (FTextInputMethodContext *)FVar18;
  }
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1>::
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1><FSlateEditableTextLayout::FTextInputMethodContext>
            (&local_1d8,&local_4c0);
  local_548 = local_1d8.Object;
  FStack_540.ReferenceController = local_1d8.SharedReferenceCount.ReferenceController;
  if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->TextInputMethodContext !=
      (TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1> *)&local_548) {
    (this->TextInputMethodContext).Object = local_1d8.Object;
    local_548 = (FTextInputMethodContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_4b8,&FStack_540);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_540.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  FVar18 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x38);
  local_4b0.Object = (FCursorLineHighlighter *)FVar21;
  if (FVar18 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined ***)FVar18 = &___7FCursorLineHighlighter_SlateEditableTextTypes__6B_;
    *(FCursorInfo **)((longlong)FVar18 + 8) = &this->CursorInfo;
    *(longlong *)((longlong)FVar18 + 0x10) = 0;
    *(FScriptContainerElement *)((longlong)FVar18 + 0x18) = (FScriptContainerElement)0x0;
    *(longlong *)((longlong)FVar18 + 0x30) = 0;
    *(longlong *)((longlong)FVar18 + 0x20) = 0;
    *(longlong *)((longlong)FVar18 + 0x28) = 0;
    if ((*(longlong *)((longlong)FVar18 + 8) == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("CursorInfo",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextTypes.cpp"
                            ,0x61,L""), bVar29)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FSlateEditableTextLayout *)(*pcVar6)();
      return pFVar12;
    }
    pIVar19 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar19 + 0x50);
    pFVar20 = ::FName::FName(local_238,"EditableText.SelectionBackground");
    local_5e8 = (*pcVar6)(pIVar19,*pFVar20,0,0);
    local_5e0 = 1;
    local_5c8 = 0;
    local_5d8 = (undefined1  [8])0x0;
    FStack_5d0.Data = (FScriptContainerElement *)0x0;
    *(longlong *)((longlong)FVar18 + 0x10) = local_5e8;
    *(FScriptContainerElement *)((longlong)FVar18 + 0x18) = (FScriptContainerElement)0x1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar18 + 0x20),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d8,
               (FWriteAccessScope *)&local_350);
    if (((int)local_5c8 != 0) && (FStack_5d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5d0,0,0,0x10);
      local_5c8 = local_5c8 & 0xffffffff00000000;
    }
    if (local_350.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
    }
    if (FStack_5d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5d8);
    local_4b0.Object = (FCursorLineHighlighter *)FVar18;
  }
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FCursorLineHighlighter,1><SlateEditableTextTypes::FCursorLineHighlighter>
            (&local_1f8,&local_4b0);
  local_538 = local_1f8.Object;
  FStack_530.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
  if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->CursorLineHighlighter !=
      (TSharedPtr<SlateEditableTextTypes::FCursorLineHighlighter,1> *)&local_538) {
    (this->CursorLineHighlighter).Object = local_1f8.Object;
    local_538 = (FCursorLineHighlighter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_4a8,&FStack_530);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_530.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  FVar18 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x30);
  local_4a0.Object = (FTextCompositionHighlighter *)FVar21;
  if (FVar18 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(longlong *)((longlong)FVar18 + 8) = 0;
    *(undefined ***)FVar18 = &___7FTextCompositionHighlighter_SlateEditableTextTypes__6B_;
    *(FScriptContainerElement *)((longlong)FVar18 + 0x10) = (FScriptContainerElement)0x0;
    *(longlong *)((longlong)FVar18 + 0x28) = 0;
    *(longlong *)((longlong)FVar18 + 0x18) = 0;
    *(longlong *)((longlong)FVar18 + 0x20) = 0;
    pIVar19 = FAppStyle::Get();
    pcVar6 = *(code **)((longlong)*pIVar19 + 0x50);
    pFVar20 = ::FName::FName(&local_280,"EditableText.CompositionBackground");
    local_610 = (*pcVar6)(pIVar19,*pFVar20,0,0);
    local_608 = 1;
    local_5f0 = 0;
    local_600 = (undefined1  [8])0x0;
    FStack_5f8.Data = (FScriptContainerElement *)0x0;
    *(longlong *)((longlong)FVar18 + 8) = local_610;
    *(FScriptContainerElement *)((longlong)FVar18 + 0x10) = (FScriptContainerElement)0x1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar18 + 0x18),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_600);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
               (FWriteAccessScope *)&local_338);
    if (((int)local_5f0 != 0) && (FStack_5f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5f8,0,0,0x10);
      local_5f0 = local_5f0 & 0xffffffff00000000;
    }
    if (local_338.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
    }
    if (FStack_5f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_600);
    local_4a0.Object = (FTextCompositionHighlighter *)FVar18;
  }
  TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FTextCompositionHighlighter,1><SlateEditableTextTypes::FTextCompositionHighlighter>
            (&local_248,&local_4a0);
  local_528 = local_248.Object;
  FStack_520.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->TextCompositionHighlighter !=
      (TSharedPtr<SlateEditableTextTypes::FTextCompositionHighlighter,1> *)&local_528) {
    (this->TextCompositionHighlighter).Object = local_248.Object;
    local_528 = (FTextCompositionHighlighter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_498,&FStack_520);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_520.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  FVar18 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x10);
  local_490.Object = (FTextSelectionHighlighter *)FVar21;
  if (FVar18 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined ***)FVar18 = &___7FTextSelectionHighlighter_SlateEditableTextTypes__6B_;
    local_490.Object = (FTextSelectionHighlighter *)FVar18;
  }
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1><SlateEditableTextTypes::FTextSelectionHighlighter>
            (&local_258,&local_490);
  local_518 = local_258.Object;
  FStack_510.ReferenceController = local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->TextSelectionHighlighter !=
      (TSharedPtr<SlateEditableTextTypes::FTextSelectionHighlighter,1> *)&local_518) {
    (this->TextSelectionHighlighter).Object = local_258.Object;
    local_518 = (FTextSelectionHighlighter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_470,&FStack_510);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_510.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  FVar18 = (ForElementType<TAlignedBytes<16,16>_>)::operator_new(0x10);
  if (FVar18 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    *(undefined ***)FVar18 = &___7FTextSearchHighlighter_SlateEditableTextTypes__6B_;
    FVar21 = FVar18;
  }
  local_488.Object = (FTextSearchHighlighter *)FVar21;
  TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1>::
  TSharedRef<SlateEditableTextTypes::FTextSearchHighlighter,1><SlateEditableTextTypes::FTextSearchHighlighter>
            (&local_228,&local_488);
  local_508 = local_228.Object;
  FStack_500.ReferenceController = local_228.SharedReferenceCount.ReferenceController;
  if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SearchSelectionHighlighter !=
      (TSharedPtr<SlateEditableTextTypes::FTextSearchHighlighter,1> *)&local_508) {
    (this->SearchSelectionHighlighter).Object = local_228.Object;
    local_508 = (FTextSearchHighlighter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_480,&FStack_500);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_500.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  (this->ScrollOffset).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->PreferredCursorScreenOffsetInLine = 0.0;
  if (((TOptional<FTextLocation> *)local_198 != &this->SelectionStart) &&
     ((this->SelectionStart).bIsSet != false)) {
    (this->SelectionStart).bIsSet = false;
  }
  this->CurrentUndoLevel = -1;
  this->NumTransactionsOpened = 0;
  this->bIsDragSelecting = false;
  this->bWasFocusedByLastMouseDown = false;
  this->bHasDragSelectedSinceFocused = false;
  this->bTextChangedByVirtualKeyboard = false;
  this->bTextCommittedByVirtualKeyboard = false;
  this->bSelectionChangedExternally = false;
  this->VirtualKeyboardTextCommitType = Default;
  (this->CachedSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  puVar10 = ::operator_new(0x140);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[10] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x14] = 0;
    puVar10[0x16] = 0;
    puVar10[0x19] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x20] = 0;
    puVar10[0x27] = 0;
    *puVar10 = &___7FUICommandList__6B_;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[7] = 0;
    *(undefined4 *)(puVar10 + 8) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x44) = 0x80;
    *(undefined4 *)(puVar10 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = 0;
    puVar10[0xb] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0x11] = 0;
    *(undefined4 *)(puVar10 + 0x12) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x94) = 0x80;
    *(undefined4 *)(puVar10 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = 0;
    puVar10[0x15] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    puVar10[0x1b] = 0;
    *(undefined4 *)(puVar10 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xe4) = 0x80;
    *(undefined4 *)(puVar10 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0xec) = 0;
    puVar10[0x1f] = 0;
    puVar10[0x21] = 0;
    puVar10[0x22] = 0;
    puVar10[0x23] = 0;
    puVar10[0x24] = 0;
    puVar10[0x25] = 0;
    puVar10[0x26] = 0;
  }
  TVar22 = MakeShareable<FUICommandList>((FUICommandList *)local_278);
  TSharedPtr<FUICommandList,1>::operator=<FUICommandList>
            (this_03,(TRawPtrProxy<FUICommandList> *)TVar22.Object);
  if ((this_03->Object == (FUICommandList *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar29)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FSlateEditableTextLayout *)(*pcVar6)();
    return pFVar12;
  }
  pFVar26 = this_03->Object;
  pTVar23 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_80,this,(pmf_d88d0994)0x1429cce20);
  pTVar24 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_98,this,(pmf_83092294)0x142a11310);
  pFVar25 = TCommands<FGenericCommands>::Get();
  local_418.Object = (pFVar25->Undo).Object;
  local_418.SharedReferenceCount.ReferenceController =
       (pFVar25->Undo).SharedReferenceCount.ReferenceController;
  if (local_418.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar26,&local_418,pTVar24,pTVar23,RepeatEnabled);
  if ((this_03->Object == (FUICommandList *)0x0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar29)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FSlateEditableTextLayout *)(*pcVar6)();
    return pFVar12;
  }
  pFVar26 = this_03->Object;
  pTVar23 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_68,this,(pmf_d88d0994)0x1429ccbf0);
  pTVar24 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_158,this,(pmf_83092294)0x1429e3470);
  pFVar25 = TCommands<FGenericCommands>::Get();
  local_408.Object = (pFVar25->Cut).Object;
  local_408.SharedReferenceCount.ReferenceController =
       (pFVar25->Cut).SharedReferenceCount.ReferenceController;
  if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar26,&local_408,pTVar24,pTVar23,RepeatDisabled);
  pFVar26 = TSharedPtr<FUICommandList,1>::operator->(this_03);
  pTVar23 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_140,this,(pmf_d88d0994)0x1429ccd40);
  pTVar24 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_128,this,(pmf_83092294)0x142a02c30);
  pFVar25 = TCommands<FGenericCommands>::Get();
  local_458.Object = (pFVar25->Paste).Object;
  local_458.SharedReferenceCount.ReferenceController =
       (pFVar25->Paste).SharedReferenceCount.ReferenceController;
  if (local_458.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_458.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar26,&local_458,pTVar24,pTVar23,RepeatEnabled);
  pFVar26 = TSharedPtr<FUICommandList,1>::operator->(this_03);
  pTVar23 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_110,this,(pmf_d88d0994)0x1429ccb50);
  pTVar24 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_e0,this,(pmf_83092294)0x1429de450);
  pFVar25 = TCommands<FGenericCommands>::Get();
  local_428.Object = (pFVar25->Copy).Object;
  local_428.SharedReferenceCount.ReferenceController =
       (pFVar25->Copy).SharedReferenceCount.ReferenceController;
  if (local_428.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar26,&local_428,pTVar24,pTVar23,RepeatDisabled);
  pFVar26 = TSharedPtr<FUICommandList,1>::operator->(this_03);
  pTVar23 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_c8,this,(pmf_d88d0994)0x1429ccca0);
  local_4e8 = (undefined1  [8])0x0;
  local_4e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4e8,
             (FWriteAccessScope *)&local_2a0);
  local_288 = &local_4e0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x20,&local_4e0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar27 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar27;
    *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FSlateEditableTextLayout::FSlateEditableTextLayout'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar10[3] = this;
  }
  if (local_2a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
  }
  pFVar25 = TCommands<FGenericCommands>::Get();
  local_438.Object = (pFVar25->Delete).Object;
  local_438.SharedReferenceCount.ReferenceController =
       (pFVar25->Delete).SharedReferenceCount.ReferenceController;
  if (local_438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction
            (pFVar26,&local_438,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_4e8,pTVar23,
             RepeatDisabled);
  pFVar26 = TSharedPtr<FUICommandList,1>::operator->(this_03);
  pTVar23 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_b0,this,(pmf_d88d0994)0x1429cce10);
  pTVar24 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateRaw<FSlateEditableTextLayout>(&local_f8,this,(pmf_83092294)0x142a068e0);
  pFVar25 = TCommands<FGenericCommands>::Get();
  local_448.Object = (pFVar25->SelectAll).Object;
  local_448.SharedReferenceCount.ReferenceController =
       (pFVar25->SelectAll).SharedReferenceCount.ReferenceController;
  if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FUICommandList::MapAction(pFVar26,&local_448,pTVar24,pTVar23,RepeatDisabled);
  FTextBlockStyle::~FTextBlockStyle(param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_8->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSlateEditableTextLayout @ 1429be970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::~FSlateEditableTextLayout(FSlateEditableTextLayout *this)

{
  atomic<int> *paVar1;
  TWeakPtr<IMenu,1> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  FTextInputMethodContext *pFVar5;
  longlong lVar6;
  ITextData *pIVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  TDisplayStringPtr<FString_const_> TVar10;
  code *pcVar11;
  char cVar12;
  TOptional<EFocusCause> TVar13;
  atomic<int> aVar14;
  longlong *plVar15;
  TSharedPtr<SWidget,1> *this_00;
  SWidget *this_01;
  undefined6 extraout_var;
  FSlateApplication *this_02;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  FTextInputMethodContext *local_98;
  TReferenceControllerBase<1> *local_90;
  FTextInputMethodContext *local_88;
  TReferenceControllerBase<1> *local_80;
  FTextInputMethodContext *local_78;
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<IVirtualKeyboardEntry,1> local_48;
  undefined8 local_38 [2];
  
  pTVar2 = &(this->ActiveContextMenu).ActiveMenu;
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  if (((this->ActiveContextMenu).bIsPendingSummon != false) ||
     (((pTVar2->Object != (IMenu *)0x0 &&
       (pTVar17 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController,
       pTVar17 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar17->SharedReferenceCount)))
     ) {
    if (((pTVar2->Object != (IMenu *)0x0) &&
        (pTVar17 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController,
        pTVar17 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar17->SharedReferenceCount))
    {
      pTVar17 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController;
      pTVar16 = pTVar17;
      pTVar18 = pTVar19;
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_1429bea15:
        bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pTVar17 = pTVar16;
        if (bVar20) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      else {
        aVar3 = pTVar17->SharedReferenceCount;
        do {
          pTVar16 = pTVar19;
          if (aVar3 == (atomic<int>)0x0) goto LAB_1429bea15;
          LOCK();
          aVar14 = pTVar17->SharedReferenceCount;
          bVar20 = aVar3 == aVar14;
          if (bVar20) {
            pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar14 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar14;
        } while (!bVar20);
        pTVar18 = (TReferenceControllerBase<1> *)pTVar2->Object;
        pTVar16 = pTVar17;
        if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_1429bea15;
      }
      (**(code **)(pTVar18->_padding_ + 0x38))(pTVar18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    }
    pTVar2 = &(this->ActiveContextMenu).ActiveMenu;
    (this->ActiveContextMenu).bIsPendingSummon = false;
    if (pTVar2 != (TWeakPtr<IMenu,1> *)local_38) {
      pTVar17 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController;
      pTVar2->Object = (IMenu *)0x0;
      (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar17->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar17->_padding_ + 8))();
        }
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    FSlateApplication::Get();
    if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    plVar15 = (longlong *)
              (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe8))()
    ;
    if ((plVar15 != (longlong *)0x0) && (this->bHasRegisteredTextInputMethodContext != false)) {
      if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar19 = (this->TextInputMethodContext).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->TextInputMethodContext).Object;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar5 == (FTextInputMethodContext *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar5->OwnerLayout = (FSlateEditableTextLayout *)0x0;
      pFVar5->bIsComposing = false;
      lVar6 = *plVar15;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98 = pFVar5;
      local_90 = pTVar19;
      cVar12 = (**(code **)(lVar6 + 0x30))(plVar15,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      if (cVar12 != '\0') {
        lVar6 = *plVar15;
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88 = pFVar5;
        local_80 = pTVar19;
        (**(code **)(lVar6 + 0x28))(plVar15,&local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
      }
      lVar6 = *plVar15;
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78 = pFVar5;
      local_70 = pTVar19;
      (**(code **)(lVar6 + 0x18))(plVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
    if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
       (bVar20 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard(), bVar20)) {
      pTVar19 = (TReferenceControllerBase<1> *)&DAT_00000001;
      plVar15 = (longlong *)(**(code **)((longlong)*this->OwnerWidget + 0x98))();
      if (*plVar15 != 0) {
        this_00 = (TSharedPtr<SWidget,1> *)
                  (**(code **)((longlong)*this->OwnerWidget + 0x98))(this->OwnerWidget,local_68);
        this_01 = TSharedPtr<SWidget,1>::operator->(this_00);
        TVar13 = SWidget::HasAnyUserFocus(this_01);
        pTVar19 = (TReferenceControllerBase<1> *)&DAT_00000003;
        if (*(char *)(CONCAT62(extraout_var,TVar13) + 1) != '\0') {
          bVar20 = true;
          goto LAB_1429bec9d;
        }
      }
    }
  }
  bVar20 = false;
LAB_1429bec9d:
  if (((ulonglong)pTVar19 & 2) != 0) {
    pTVar19 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar19 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  }
  if (((ulonglong)pTVar19 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  if (bVar20) {
    this_02 = FSlateApplication::Get();
    local_48.Object = (IVirtualKeyboardEntry *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlateApplication::ShowVirtualKeyboard(this_02,false,0,&local_48);
  }
  pTVar19 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar19->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar19->_padding_ + 8))(pTVar19,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UICommandList).SharedReferenceCount.ReferenceController);
  pIVar7 = (this->VirtualKeyboardText).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pIVar7 = (this->OriginalText).Text.TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  if (((this->StateBeforeChangingText).bIsSet != false) &&
     (pIVar7 = (this->StateBeforeChangingText).TypedValue.Text.TextData.Reference,
     pIVar7 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  DestructItems<SlateEditableTextTypes::FUndoState,int>
            ((FUndoState *)(this->UndoStates).AllocatorInstance.Data,(this->UndoStates).ArrayNum);
  pFVar8 = (this->UndoStates).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)(this->ActiveLineHighlights).AllocatorInstance.Data,
             (this->ActiveLineHighlights).ArrayNum);
  pFVar8 = (this->ActiveLineHighlights).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchSelectionHighlighter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextSelectionHighlighter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextCompositionHighlighter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CursorLineHighlighter).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextInputMethodChangeNotifier).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextInputMethodContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DebugSourceInfo).Getter);
  pvVar9 = *(void **)&(this->DebugSourceInfo).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DebugSourceInfo).Getter);
  pFVar8 = (this->DebugSourceInfo).Value.Data.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ApplyLineHeightToBottomLine).Getter);
  pvVar9 = *(void **)&(this->ApplyLineHeightToBottomLine).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ApplyLineHeightToBottomLine).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LineHeightPercentage).Getter);
  pvVar9 = *(void **)&(this->LineHeightPercentage).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LineHeightPercentage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Justification).Getter);
  pvVar9 = *(void **)&(this->Justification).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Margin).Getter);
  pvVar9 = *(void **)&(this->Margin).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Margin).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WrappingPolicy).Getter);
  pvVar9 = *(void **)&(this->WrappingPolicy).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WrappingPolicy).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AutoWrapText).Getter);
  pvVar9 = *(void **)&(this->AutoWrapText).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AutoWrapText).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WrapTextAt).Getter);
  pvVar9 = *(void **)&(this->WrapTextAt).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WrapTextAt).Getter);
  *(undefined4 *)&(this->SearchResultToIndexMap).field_0x48 = 0;
  pvVar9 = *(void **)&(this->SearchResultToIndexMap).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FTextLocation,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTextLocation,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTextLocation,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchResultToIndexMap);
  pIVar7 = (this->SearchText).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TVar10 = (this->BoundSearchTextLastTick).LocalizedStringPtr;
  if (TVar10 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar4 = *(int *)TVar10;
    *(int *)TVar10 = *(int *)TVar10 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if (*(void **)((longlong)TVar10 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar10 + 8));
      }
      ::operator_delete((void *)TVar10,0x18);
    }
  }
  pIVar7 = (this->BoundSearchTextLastTick).TextDataPtr.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BoundSearchText).Getter);
  pvVar9 = *(void **)&(this->BoundSearchText).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BoundSearchText).Getter);
  pIVar7 = (this->BoundSearchText).Value.TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HintText).Getter);
  pvVar9 = *(void **)&(this->HintText).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HintText).Getter);
  pIVar7 = (this->HintText).Value.TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TVar10 = (this->BoundTextLastTick).LocalizedStringPtr;
  if (TVar10 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar4 = *(int *)TVar10;
    *(int *)TVar10 = *(int *)TVar10 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if (*(void **)((longlong)TVar10 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar10 + 8));
      }
      ::operator_delete((void *)TVar10,0x18);
    }
  }
  pIVar7 = (this->BoundTextLastTick).TextDataPtr.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter);
  pvVar9 = *(void **)&(this->BoundText).Getter.field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BoundText).Getter);
  pIVar7 = (this->BoundText).Value.TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  FTextBlockStyle::~FTextBlockStyle(&this->HintTextStyle);
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&this->HintTextLayout,
             (this->HintTextLayout).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextLayout).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CreateSlateTextLayout);
  pvVar9 = *(void **)&(this->CreateSlateTextLayout).field_0x8;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CreateSlateTextLayout);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HintMarshaller).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Marshaller).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GraphemeBreakIterator).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1429c0fa0

int __thiscall
`FSlateEditableTextLayout::JumpTo'::__l2::<lambda_1>::operator()
          (void *this,TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *param_1,
          float param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x68;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTextLayout::FLineView_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    if (0.0 <= *(double *)(pFVar2 + 0x38)) {
      if (param_2 < (float)(*(double *)(pFVar2 + 0x38) + *(double *)(pFVar2 + 0x48))) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    }
    pFVar2 = pFVar2 + 0x68;
  }
  return iVar4;
}

// AdvanceSearch @ 1429c6ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::AdvanceSearch(FSlateEditableTextLayout *this,bool param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FSlateTextLayout *pFVar6;
  code *pcVar7;
  FTextLocation FVar8;
  bool bVar9;
  int iVar10;
  TVector2<double> *pTVar11;
  FTextLocation FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  TOptional<FTextLocation> *pTVar16;
  FTextLocation FVar17;
  FTextLocation *pFVar18;
  uint uVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  undefined1 *puVar22;
  uint uVar23;
  FTextLocation FVar24;
  FTextLocation FVar25;
  FTextLocation FVar26;
  FTextLocation FVar27;
  uint uStackX_c;
  FTextLocation local_128;
  FTextLocation local_120;
  TOptional<FTextLocation> local_118;
  int iStack_10c;
  undefined1 local_108 [12];
  uint uStack_fc;
  FTextLocation local_f8;
  FTextLocation local_f0;
  TOptional<FTextLocation> local_e8;
  uint local_d8;
  undefined1 local_d4 [8];
  uint local_cc;
  FTextLocation local_c8;
  FTextLocation local_c0;
  FTextLocation local_b8;
  FTextLocation local_b0;
  FTextLocation local_a8;
  FString *local_a0;
  TVector2<double> local_98;
  TVector2<double> local_88;
  TVector2<double> local_78;
  TVector2<double> local_68 [3];
  
  FVar24.LineIndex = 0;
  FVar24.Offset = 0;
  iVar15 = (this->CursorInfo).CursorPosition.LineIndex;
  uVar14 = 0;
  iVar10 = -1;
  uVar13 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  uStackX_c = 0xffffffff;
  local_118.TypedValue.Offset = uVar14;
  if (0 < (int)uVar13) {
    local_118.TypedValue.Offset = uVar13;
  }
  local_118.TypedValue.LineIndex = iVar15;
  bVar9 = FText::IsEmpty(&this->SearchText);
  uVar13 = 0;
  if (!bVar9) {
    pTVar16 = &local_118;
    if ((this->SelectionStart).bIsSet != false) {
      pTVar16 = &this->SelectionStart;
    }
    local_120.Offset = local_118.TypedValue.Offset;
    local_120.LineIndex = local_118.TypedValue.LineIndex;
    local_128 = pTVar16->TypedValue;
    iVar10 = local_128.LineIndex;
    pFVar18 = &local_128;
    if (param_1) {
      if (iVar10 == iVar15) {
        if (local_118.TypedValue.Offset <= local_128.Offset) {
          pFVar18 = &local_120;
        }
      }
      else if (iVar15 <= iVar10) {
        pFVar18 = &local_120;
      }
    }
    else if (iVar10 == iVar15) {
      if (local_128.Offset <= local_118.TypedValue.Offset) {
        pFVar18 = &local_120;
      }
    }
    else if (iVar10 <= iVar15) {
      pFVar18 = &local_120;
    }
    FVar17 = *pFVar18;
    FVar26 = (FTextLocation)((ulonglong)FVar17 >> 0x20);
    local_a0 = FText::ToString(&this->SearchText);
    iVar15 = (local_a0->Data).ArrayNum;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->TextLayout).Object;
    FVar25 = FVar24;
    do {
      uVar23 = FVar17.LineIndex;
      uVar19 = uVar14;
      if ((int)uVar23 < *(int *)&pFVar6->field_0x28) {
        uVar19 = ~uVar23 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar20 = (longlong *)((longlong)(int)uVar23 * 0x70 + *(longlong *)&pFVar6->field_0x20);
      if (param_1) {
LAB_1429c6c90:
        iVar10 = (local_a0->Data).ArrayNum;
        if (iVar10 == 0) {
          pwVar21 = L"";
          uVar19 = uVar13;
        }
        else {
          pwVar21 = (wchar_t *)(local_a0->Data).AllocatorInstance.Data;
          uVar19 = iVar10 - 1;
        }
        iVar10 = ::FString::Find((FString *)*plVar20,pwVar21,uVar19,this->SearchCase,(uint)param_1,
                                 FVar26.LineIndex);
        if (iVar10 != -1) {
          if ((TOptional<FTextLocation> *)&local_118.bIsSet != &this->SelectionStart) {
            FVar8.Offset = iVar10;
            FVar8.LineIndex = uVar23;
            (this->SelectionStart).TypedValue = FVar8;
            (this->SelectionStart).bIsSet = true;
          }
          local_c8.Offset = iVar15 + -1 + iVar10;
          if (iVar15 == 0) {
            local_c8.Offset = iVar10;
          }
          local_118._8_4_ = uVar23;
          iStack_10c = iVar10;
          local_c8.LineIndex = uVar23;
          if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                    (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_c8);
          if (((this->SelectionStart).bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar17 = (this->SelectionStart).TypedValue;
          iVar10 = FVar17.LineIndex;
          uStackX_c = FVar17.Offset;
          goto LAB_1429c6d6e;
        }
        if (!param_1) goto LAB_1429c6d4a;
        uVar23 = uVar23 - 1;
        if ((int)uVar23 < 0) {
          uVar23 = *(int *)&pFVar6->field_0x28 - 1;
        }
        FVar17.Offset = 0;
        FVar17.LineIndex = uVar23;
        uVar19 = uVar13;
        if ((int)uVar23 < *(int *)&pFVar6->field_0x28) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)(*(longlong *)
                           ((longlong)(int)uVar23 * 0x70 + *(longlong *)&pFVar6->field_0x20) + 8);
        FVar26.Offset = 0;
        FVar26.LineIndex = iVar10 - 1;
        if (iVar10 == 0) {
          FVar26 = FVar24;
        }
      }
      else {
        iVar10 = *(int *)(*plVar20 + 8);
        uVar19 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar19 = uVar14;
        }
        if (FVar26.LineIndex < (int)uVar19) goto LAB_1429c6c90;
LAB_1429c6d4a:
        FVar27.LineIndex = 0;
        FVar27.Offset = 0;
        FVar17 = FVar24;
        FVar26 = FVar24;
        if (uVar23 + 1 != *(uint *)&pFVar6->field_0x28) {
          FVar17.Offset = 0;
          FVar17.LineIndex = uVar23 + 1;
          FVar26 = FVar27;
        }
      }
      FVar25.LineIndex = FVar25.LineIndex + 1;
      FVar25.Offset = 0;
    } while ((int)FVar25.LineIndex <= *(int *)&pFVar6->field_0x28);
    iVar10 = -1;
    uStackX_c = 0xffffffff;
  }
LAB_1429c6d6e:
  UpdateCursorHighlight(this);
  this->CurrentSearchResultIndex = 0;
  if ((iVar10 != -1) && (uStackX_c != 0xffffffff)) {
    uVar19 = iVar10 - uStackX_c ^ uStackX_c >> 0xd;
    uVar14 = (-0x61c88647 - uVar19) - uStackX_c ^ uVar19 << 8;
    uVar23 = (uStackX_c - uVar14) - uVar19 ^ uVar14 >> 0xd;
    uVar19 = (uVar19 - uVar23) - uVar14 ^ uVar23 >> 0xc;
    uVar14 = (uVar14 - uVar23) - uVar19 ^ uVar19 << 0x10;
    uVar23 = (uVar23 - uVar14) - uVar19 ^ uVar14 >> 5;
    uVar19 = (uVar19 - uVar23) - uVar14 ^ uVar23 >> 3;
    uVar14 = (uVar14 - uVar19) - uVar23 ^ uVar19 << 10;
    if (*(int *)&(this->SearchResultToIndexMap).field_0x8 !=
        *(int *)&(this->SearchResultToIndexMap).field_0x34) {
      puVar22 = *(undefined1 **)&(this->SearchResultToIndexMap).field_0x40;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = &(this->SearchResultToIndexMap).field_0x38;
      }
      iVar15 = *(int *)(puVar22 +
                       (ulonglong)
                       (*(int *)&(this->SearchResultToIndexMap).field_0x48 - 1U &
                       ((uVar23 - uVar14) - uVar19 ^ uVar14 >> 0xf)) * 4);
      if (iVar15 != -1) {
        do {
          lVar1 = *(longlong *)&this->SearchResultToIndexMap + (longlong)iVar15 * 0x14;
          if ((*(int *)(*(longlong *)&this->SearchResultToIndexMap + (longlong)iVar15 * 0x14) ==
               iVar10) && (*(uint *)(lVar1 + 4) == uStackX_c)) {
            if (iVar15 != -1) {
              FVar17 = (FTextLocation)(lVar1 + 8);
              if (lVar1 == 0) {
                FVar17 = FVar24;
              }
              if (FVar17 != (FTextLocation)0x0) {
                this->CurrentSearchResultIndex = *(int *)FVar17;
                goto LAB_1429c6ed1;
              }
            }
            break;
          }
          iVar15 = *(int *)(lVar1 + 0xc);
        } while (iVar15 != -1);
      }
    }
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9013400259803480819>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0x2f3,"Index");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_1429c6ed1:
    local_108._0_4_ = (this->CursorInfo).CursorPosition.LineIndex;
    uVar14 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_108._4_4_ = uVar13;
    if (0 < (int)uVar14) {
      local_108._4_4_ = uVar14;
    }
    pTVar16 = (TOptional<FTextLocation> *)local_108;
    if ((this->SelectionStart).bIsSet != false) {
      pTVar16 = &this->SelectionStart;
    }
    iVar10 = (pTVar16->TypedValue).LineIndex;
    bVar9 = SBORROW4(iVar10,local_108._0_4_);
    iVar15 = iVar10 - local_108._0_4_;
    if (iVar10 == local_108._0_4_) {
      iVar15 = (pTVar16->TypedValue).Offset;
      bVar9 = SBORROW4(iVar15,local_108._4_4_);
      iVar15 = iVar15 - local_108._4_4_;
    }
    local_f0.LineIndex = local_108._0_4_;
    if (bVar9 != iVar15 < 0) {
      local_f0.LineIndex = iVar10;
    }
    local_f0.Offset = 0;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar11 = FTextLayout::GetLocationAt
                        ((FTextLayout *)(this->TextLayout).Object,&local_98,&local_f0,false);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->TextLayout).Object;
    dVar4 = (pTVar11->field0_0x0)._s_0.X;
    fVar2 = *(float *)&pFVar6->field_0x94;
    if ((pFVar6 == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_108._8_4_ = (this->CursorInfo).CursorPosition.LineIndex;
    uVar14 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    uStack_fc = uVar13;
    if (0 < (int)uVar14) {
      uStack_fc = uVar14;
    }
    pFVar18 = (FTextLocation *)(local_108 + 8);
    if ((this->SelectionStart).bIsSet != false) {
      pFVar18 = &(this->SelectionStart).TypedValue;
    }
    local_b8.Offset = uStack_fc;
    local_b8.LineIndex = local_108._8_4_;
    local_c0 = *pFVar18;
    pFVar18 = &local_c0;
    if (local_c0.LineIndex == local_108._8_4_) {
      if ((int)uStack_fc <= local_c0.Offset) {
        pFVar18 = &local_b8;
      }
    }
    else if ((int)local_108._8_4_ <= local_c0.LineIndex) {
      pFVar18 = &local_b8;
    }
    pTVar11 = FTextLayout::GetLocationAt
                        ((FTextLayout *)(this->TextLayout).Object,&local_88,pFVar18,false);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->TextLayout).Object;
    dVar5 = (pTVar11->field0_0x0)._s_0.X;
    fVar3 = *(float *)&pFVar6->field_0x94;
    if ((pFVar6 == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_f8.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
    uVar14 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    if (0 < (int)uVar14) {
      uVar13 = uVar14;
    }
    local_f8.Offset = uVar13;
    pFVar18 = &local_f8;
    if ((this->SelectionStart).bIsSet != false) {
      pFVar18 = &(this->SelectionStart).TypedValue;
    }
    local_a8.Offset = uVar13;
    local_a8.LineIndex = local_f8.LineIndex;
    local_b0 = *pFVar18;
    pFVar18 = &local_b0;
    if (local_b0.LineIndex == local_f8.LineIndex) {
      if (local_b0.Offset <= (int)uVar13) {
        pFVar18 = &local_a8;
      }
    }
    else if (local_b0.LineIndex <= local_f8.LineIndex) {
      pFVar18 = &local_a8;
    }
    pTVar11 = FTextLayout::GetLocationAt
                        ((FTextLayout *)(this->TextLayout).Object,&local_78,pFVar18,false);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (dVar5 / (double)fVar3 < 0.0) {
      pFVar6 = (this->TextLayout).Object;
      dVar5 = (pTVar11->field0_0x0)._s_0.X;
      fVar3 = *(float *)&pFVar6->field_0x94;
      if ((pFVar6 == (FSlateTextLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar11 = FTextLayout::GetViewSize((FTextLayout *)(this->TextLayout).Object,local_68);
      if ((pTVar11->field0_0x0)._s_0.X <=
          (double)(float)(dVar5 / (double)fVar3 - dVar4 / (double)fVar2)) {
        local_e8.TypedValue.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
        uVar14 = (this->CursorInfo).CursorPosition.Offset +
                 (uint)((this->CursorInfo).CursorAlignment == Right);
        if (0 < (int)uVar14) {
          FVar24.Offset = 0;
          FVar24.LineIndex = uVar14;
        }
        pTVar16 = &local_e8;
        if ((this->SelectionStart).bIsSet != false) {
          pTVar16 = &this->SelectionStart;
        }
        local_e8.TypedValue.Offset = FVar24.LineIndex;
        FVar17 = pTVar16->TypedValue;
        uVar14 = FVar17.LineIndex;
        bVar9 = SBORROW4(uVar14,local_e8.TypedValue.LineIndex);
        iVar15 = uVar14 - local_e8.TypedValue.LineIndex;
        if (uVar14 == local_e8.TypedValue.LineIndex) {
          bVar9 = SBORROW4(FVar17.Offset,local_e8.TypedValue.Offset);
          iVar15 = FVar17.Offset - local_e8.TypedValue.Offset;
        }
        FVar12 = (FTextLocation)
                 ((longlong)FVar24 << 0x20 | (ulonglong)(uint)local_e8.TypedValue.LineIndex);
        if (bVar9 != iVar15 < 0) {
          FVar12 = FVar17;
        }
        if ((TOptional<SlateEditableTextTypes::FScrollInfo> *)local_d4 ==
            &this->PositionToScrollIntoView) {
          return;
        }
      }
      else {
        FVar12.Offset = local_f0.Offset;
        FVar12.LineIndex = local_f0.LineIndex;
        local_cc = local_d8;
        if ((TOptional<SlateEditableTextTypes::FScrollInfo> *)&local_e8.bIsSet ==
            &this->PositionToScrollIntoView) {
          return;
        }
      }
      (this->PositionToScrollIntoView).TypedValue.Position = FVar12;
      *(uint *)&(this->PositionToScrollIntoView).TypedValue.Alignment = local_cc & 0xffffff00;
      (this->PositionToScrollIntoView).bIsSet = true;
    }
  }
  return;
}

// AnyTextSelected @ 1429c74a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::AnyTextSelected(FSlateEditableTextLayout *this)

{
  TOptional<FTextLocation> *pTVar1;
  int iVar2;
  TOptional<FTextLocation> local_res8 [2];
  
  local_res8[0].TypedValue.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  iVar2 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res8[0].TypedValue.Offset = 0;
  if (0 < iVar2) {
    local_res8[0].TypedValue.Offset = iVar2;
  }
  pTVar1 = local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar1 = &this->SelectionStart;
  }
  if (((pTVar1->TypedValue).LineIndex == local_res8[0].TypedValue.LineIndex) &&
     ((pTVar1->TypedValue).Offset == local_res8[0].TypedValue.Offset)) {
    return false;
  }
  return true;
}

// ApplyToSelection @ 1429c7580

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::ApplyToSelection
          (FSlateEditableTextLayout *this,FRunInfo *param_1,FTextBlockStyle *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  FString *pFVar5;
  TSharedRef<FSlatePasswordRun,1> *pTVar6;
  TSharedRef<FSlateTextRun,1> *pTVar7;
  FString *pFVar8;
  longlong lVar9;
  uint uVar10;
  FSharedReferencer<1> FVar11;
  FSlateTextLayout *pFVar12;
  int iVar13;
  FTextSelection *pFVar14;
  TOptional<FTextLocation> *pTVar15;
  FTextLocation FVar16;
  TReferenceControllerBase<1> *pTVar17;
  TSharedRef<IRun,1> *pTVar18;
  FSlateTextRun *pFVar19;
  uint uVar20;
  longlong lVar21;
  FSharedReferencer<1> FVar22;
  int iVar23;
  uint uVar24;
  undefined1 *puVar25;
  bool bVar26;
  FTextSelection local_258;
  FTextLocation local_248;
  FTextLocation local_240;
  undefined1 local_238 [12];
  int iStack_22c;
  uint local_228;
  uint uStack_224;
  uint local_220;
  int iStack_21c;
  longlong local_218;
  longlong *local_210;
  uint local_208;
  int iStack_204;
  TRawPtrProxy<FString> local_200;
  TRawPtrProxy<FString> local_1f8;
  TRawPtrProxy<FString> local_1f0;
  FTextLocation local_1e8;
  longlong local_1e0;
  TRawPtrProxy<FString> local_1d8 [2];
  TSharedRef<FString,1> local_1c8;
  TSharedRef<FString_const_,1> local_1b8;
  TSharedRef<FString,1> local_1a8;
  TSharedRef<FString_const_,1> local_198;
  TSharedRef<FString,1> local_188;
  TSharedRef<FString_const_,1> local_178;
  TSharedRef<FString,1> local_168;
  TSharedRef<FString_const_,1> local_158;
  TSharedRef<IRun,1> local_148;
  FTextSelection local_138;
  TSharedRef<IRun,1> local_128;
  FTextSelection local_118;
  TSharedRef<IRun,1> local_108;
  FTextSelection local_f8;
  TSharedRef<IRun,1> local_e8;
  undefined1 local_d8 [8];
  TSharedRef<FSlatePasswordRun,1> local_d0;
  TSharedRef<FSlateTextRun,1> local_c0;
  TSharedRef<FSlatePasswordRun,1> local_b0;
  TSharedRef<FSlateTextRun,1> local_a0;
  TSharedRef<FSlatePasswordRun,1> local_90;
  TSharedRef<FSlateTextRun,1> local_80;
  TSharedRef<FSlatePasswordRun,1> local_70;
  TSharedRef<FSlateTextRun,1> local_60 [2];
  
  cVar4 = (**(code **)*this->OwnerWidget)();
  if (cVar4 != '\0') {
    return;
  }
  BeginEditTransation(this);
  local_258.LocationB.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  local_238._8_4_ = local_258.LocationB.LineIndex;
  iVar13 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  local_258.LocationB.Offset = 0;
  if (0 < iVar13) {
    local_258.LocationB.Offset = iVar13;
  }
  iStack_22c = local_258.LocationB.Offset;
  pTVar15 = (TOptional<FTextLocation> *)(local_238 + 8);
  if ((this->SelectionStart).bIsSet != false) {
    pTVar15 = &this->SelectionStart;
  }
  FVar16 = pTVar15->TypedValue;
  local_258.LocationA.LineIndex = FVar16.LineIndex;
  local_258.LocationA.Offset = FVar16.Offset;
  uVar24 = local_258.LocationA.LineIndex;
  if (local_258.LocationA.LineIndex == local_258.LocationB.LineIndex) {
    if (local_258.LocationA.Offset < local_258.LocationB.Offset) goto LAB_1429c76bf;
  }
  else if (local_258.LocationA.LineIndex < local_258.LocationB.LineIndex) goto LAB_1429c76bf;
  uVar24 = local_258.LocationB.LineIndex;
LAB_1429c76bf:
  iVar13 = local_258.LocationB.Offset;
  if (local_258.LocationA.LineIndex == local_258.LocationB.LineIndex) {
    if (local_258.LocationA.Offset < local_258.LocationB.Offset) {
      iVar13 = local_258.LocationA.Offset;
    }
  }
  else if (local_258.LocationA.LineIndex < local_258.LocationB.LineIndex) {
    iVar13 = local_258.LocationA.Offset;
  }
  bVar26 = SBORROW4(local_258.LocationA.LineIndex,local_258.LocationB.LineIndex);
  iVar1 = local_258.LocationA.LineIndex - local_258.LocationB.LineIndex;
  if (local_258.LocationA.LineIndex == local_258.LocationB.LineIndex) {
    bVar26 = SBORROW4(local_258.LocationA.Offset,local_258.LocationB.Offset);
    iVar1 = local_258.LocationA.Offset - local_258.LocationB.Offset;
  }
  uVar20 = local_258.LocationB.LineIndex;
  if ((local_258.LocationA.LineIndex != local_258.LocationB.LineIndex ||
      local_258.LocationA.Offset != local_258.LocationB.Offset) && bVar26 == iVar1 < 0) {
    uVar20 = local_258.LocationA.LineIndex;
  }
  bVar26 = SBORROW4(local_258.LocationA.LineIndex,local_258.LocationB.LineIndex);
  iVar1 = local_258.LocationA.LineIndex - local_258.LocationB.LineIndex;
  if (local_258.LocationA.LineIndex == local_258.LocationB.LineIndex) {
    bVar26 = SBORROW4(local_258.LocationA.Offset,local_258.LocationB.Offset);
    iVar1 = local_258.LocationA.Offset - local_258.LocationB.Offset;
  }
  iVar23 = local_258.LocationB.Offset;
  if ((local_258.LocationA.LineIndex != local_258.LocationB.LineIndex ||
      local_258.LocationA.Offset != local_258.LocationB.Offset) && bVar26 == iVar1 < 0) {
    iVar23 = local_258.LocationA.Offset;
  }
  local_1e8 = FVar16;
  if (uVar24 == uVar20) {
    pFVar5 = ::operator_new(0x10);
    local_200.Object = (FString *)0x0;
    if (pFVar5 != (FString *)0x0) {
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      local_200.Object = pFVar5;
    }
    TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_1a8,&local_200);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextLayout::GetSelectionAsText
              ((FTextLayout *)(this->TextLayout).Object,local_1a8.Object,&local_258);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar14 = &local_258;
    if (local_258.LocationA.LineIndex == local_258.LocationB.LineIndex) {
      if (local_258.LocationB.Offset <= local_258.LocationA.Offset) {
        pFVar14 = (FTextSelection *)&local_258.LocationB;
      }
    }
    else if (local_258.LocationB.LineIndex <= local_258.LocationA.LineIndex) {
      pFVar14 = (FTextSelection *)&local_258.LocationB;
    }
    FTextLayout::RemoveAt
              ((FTextLayout *)(this->TextLayout).Object,&pFVar14->LocationA,iVar23 - iVar13);
    local_1b8.Object = local_1a8.Object;
    local_1b8.SharedReferenceCount.ReferenceController =
         local_1a8.SharedReferenceCount.ReferenceController;
    if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar4 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if (cVar4 == '\0') {
      pTVar7 = FSlateTextRun::Create(&local_c0,param_1,&local_1b8,param_2);
      pTVar17 = (pTVar7->SharedReferenceCount).ReferenceController;
      pFVar19 = pTVar7->Object;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      pTVar6 = FSlatePasswordRun::Create(&local_d0,param_1,&local_1b8,param_2);
      pTVar17 = (pTVar6->SharedReferenceCount).ReferenceController;
      pFVar19 = (FSlateTextRun *)pTVar6->Object;
      local_c0.SharedReferenceCount.ReferenceController =
           local_d0.SharedReferenceCount.ReferenceController;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->TextLayout).Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar14 = &local_258;
    FVar22.ReferenceController = local_1a8.SharedReferenceCount.ReferenceController;
    local_148.Object = (IRun *)pFVar19;
    local_148.SharedReferenceCount.ReferenceController = pTVar17;
    if (local_258.LocationA.LineIndex == local_258.LocationB.LineIndex) {
      pTVar18 = &local_148;
      if (local_258.LocationB.Offset <= local_258.LocationA.Offset) {
        pFVar14 = (FTextSelection *)&local_258.LocationB;
      }
    }
    else {
      if (local_258.LocationB.LineIndex <= local_258.LocationA.LineIndex) {
        pFVar14 = (FTextSelection *)&local_258.LocationB;
      }
      pTVar18 = &local_148;
    }
  }
  else {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->TextLayout).Object;
    pFVar5 = (FString *)0x0;
    puVar25 = &pFVar12->field_0x20;
    uVar10 = 0;
    if ((int)uVar24 < *(int *)&pFVar12->field_0x28) {
      uVar10 = ~uVar24 >> 0x1f;
    }
    local_210 = (longlong *)puVar25;
    if ((uVar10 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = *(int *)(*(longlong *)((longlong)(int)uVar24 * 0x70 + *(longlong *)puVar25) + 8);
    uVar10 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar10 = 0;
    }
    local_248.LineIndex = uVar24;
    local_248.Offset = iVar13;
    local_228 = uVar24;
    uStack_224 = uVar10;
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FString *)0x0) {
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      pFVar5 = pFVar8;
    }
    local_1f8.Object = pFVar5;
    TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_188,&local_1f8);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_138.LocationA.Offset = local_248.Offset;
    local_138.LocationA.LineIndex = local_248.LineIndex;
    local_138.LocationB.Offset = uStack_224;
    local_138.LocationB.LineIndex = local_228;
    FTextLayout::GetSelectionAsText
              ((FTextLayout *)(this->TextLayout).Object,local_188.Object,&local_138);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextLayout::RemoveAt
              ((FTextLayout *)(this->TextLayout).Object,&local_248,uVar10 - local_248.Offset);
    local_198.Object = local_188.Object;
    local_198.SharedReferenceCount.ReferenceController =
         local_188.SharedReferenceCount.ReferenceController;
    if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar4 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if (cVar4 == '\0') {
      pTVar7 = FSlateTextRun::Create(&local_a0,param_1,&local_198,param_2);
      pTVar17 = (pTVar7->SharedReferenceCount).ReferenceController;
      pFVar19 = pTVar7->Object;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      pTVar6 = FSlatePasswordRun::Create(&local_b0,param_1,&local_198,param_2);
      pTVar17 = (pTVar6->SharedReferenceCount).ReferenceController;
      pFVar19 = (FSlateTextRun *)pTVar6->Object;
      local_a0.SharedReferenceCount.ReferenceController =
           local_b0.SharedReferenceCount.ReferenceController;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->TextLayout).Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128.Object = (IRun *)pFVar19;
    local_128.SharedReferenceCount.ReferenceController = pTVar17;
    FTextLayout::InsertAt((FTextLayout *)pFVar12,&local_248,&local_128,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    plVar3 = local_210;
    local_1e0 = (longlong)(int)uVar20;
    uVar24 = uVar24 + 1;
    lVar9 = (longlong)(int)uVar24;
    if (lVar9 < local_1e0) {
      lVar21 = lVar9 * 0x70;
      local_218 = local_1e0 - lVar9;
      do {
        pFVar5 = (FString *)0x0;
        uVar10 = 0;
        if ((int)uVar24 < (int)plVar3[1]) {
          uVar10 = ~uVar24 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_240.Offset = 0;
        iVar1 = *(int *)(*(longlong *)(*plVar3 + lVar21) + 8);
        iVar13 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar13 = 0;
        }
        local_240.LineIndex = uVar24;
        local_220 = uVar24;
        iStack_21c = iVar13;
        pFVar8 = ::operator_new(0x10);
        if (pFVar8 != (FString *)0x0) {
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          pFVar5 = pFVar8;
        }
        local_1f0.Object = pFVar5;
        TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_168,&local_1f0);
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_118.LocationA.Offset = local_240.Offset;
        local_118.LocationA.LineIndex = local_240.LineIndex;
        local_118.LocationB.Offset = iStack_21c;
        local_118.LocationB.LineIndex = local_220;
        FTextLayout::GetSelectionAsText
                  ((FTextLayout *)(this->TextLayout).Object,local_168.Object,&local_118);
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FTextLayout::RemoveAt
                  ((FTextLayout *)(this->TextLayout).Object,&local_240,iVar13 - local_240.Offset);
        FVar22.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
        local_178.Object = local_168.Object;
        local_178.SharedReferenceCount.ReferenceController =
             local_168.SharedReferenceCount.ReferenceController;
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        cVar4 = (**(code **)((longlong)*this->OwnerWidget + 8))();
        if (cVar4 == '\0') {
          pTVar7 = FSlateTextRun::Create(&local_80,param_1,&local_178,param_2);
          pTVar17 = (pTVar7->SharedReferenceCount).ReferenceController;
          pFVar19 = pTVar7->Object;
          FVar11.ReferenceController = local_80.SharedReferenceCount.ReferenceController;
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        else {
          pTVar6 = FSlatePasswordRun::Create(&local_90,param_1,&local_178,param_2);
          pTVar17 = (pTVar6->SharedReferenceCount).ReferenceController;
          pFVar19 = (FSlateTextRun *)pTVar6->Object;
          FVar11.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar11.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = (this->TextLayout).Object;
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_108.Object = (IRun *)pFVar19;
        local_108.SharedReferenceCount.ReferenceController = pTVar17;
        FTextLayout::InsertAt((FTextLayout *)pFVar12,&local_240,&local_108,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar22.ReferenceController);
        uVar24 = uVar24 + 1;
        lVar21 = lVar21 + 0x70;
        local_218 = local_218 + -1;
      } while (local_218 != 0);
      local_218 = 0;
      FVar16 = local_1e8;
    }
    pFVar5 = (FString *)0x0;
    uVar24 = 0;
    if ((int)uVar20 < (int)local_210[1]) {
      uVar24 = ~uVar20 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_238._4_4_ = 0;
    local_238._0_4_ = uVar20;
    local_208 = uVar20;
    iStack_204 = iVar23;
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FString *)0x0) {
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      pFVar5 = pFVar8;
    }
    local_1d8[0].Object = pFVar5;
    TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_1c8,local_1d8);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_f8.LocationA.Offset = local_238._4_4_;
    local_f8.LocationA.LineIndex = local_238._0_4_;
    local_f8.LocationB.Offset = iStack_204;
    local_f8.LocationB.LineIndex = local_208;
    FTextLayout::GetSelectionAsText
              ((FTextLayout *)(this->TextLayout).Object,local_1c8.Object,&local_f8);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTextLayout::RemoveAt
              ((FTextLayout *)(this->TextLayout).Object,(FTextLocation *)local_238,
               iVar23 - local_238._4_4_);
    local_158.Object = local_1c8.Object;
    local_158.SharedReferenceCount.ReferenceController =
         local_1c8.SharedReferenceCount.ReferenceController;
    if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar4 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if (cVar4 == '\0') {
      pTVar7 = FSlateTextRun::Create(local_60,param_1,&local_158,param_2);
      pTVar17 = (pTVar7->SharedReferenceCount).ReferenceController;
      pFVar19 = pTVar7->Object;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      pTVar6 = FSlatePasswordRun::Create(&local_70,param_1,&local_158,param_2);
      pTVar17 = (pTVar6->SharedReferenceCount).ReferenceController;
      pFVar19 = (FSlateTextRun *)pTVar6->Object;
      local_60[0].SharedReferenceCount.ReferenceController =
           local_70.SharedReferenceCount.ReferenceController;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60[0].SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar12 = (this->TextLayout).Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar18 = &local_e8;
    pFVar14 = (FTextSelection *)local_238;
    FVar22.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
    local_e8.Object = (IRun *)pFVar19;
    local_e8.SharedReferenceCount.ReferenceController = pTVar17;
  }
  FTextLayout::InsertAt((FTextLayout *)pFVar12,&pFVar14->LocationA,pTVar18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  if ((TOptional<FTextLocation> *)local_d8 != &this->SelectionStart) {
    (this->SelectionStart).TypedValue = FVar16;
    (this->SelectionStart).bIsSet = true;
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar26)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
            (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,
             (FTextLocation *)(local_238 + 8));
  UpdatePreferredCursorScreenOffsetInLine(this);
  UpdateCursorHighlight(this);
  EndEditTransaction(this);
  return;
}

// BeginEditTransation @ 1429caa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::BeginEditTransation(FSlateEditableTextLayout *this)

{
  TOptional<SlateEditableTextTypes::FUndoState> *this_00;
  ITextData *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  FUndoState local_48;
  
  this->NumTransactionsOpened = this->NumTransactionsOpened + 1;
  if (this->NumTransactionsOpened < 2) {
    cVar4 = (**(code **)*this->OwnerWidget)();
    if (cVar4 == '\0') {
      local_48.CursorInfo.LastCursorInteractionTime = 0.0;
      local_48.Text.TextData.Reference = (ITextData *)0x0;
      local_48.Text.Flags = 0;
      local_48.Text._12_4_ = 0;
      local_48.SelectionStart.TypedValue.LineIndex = 0;
      local_48.SelectionStart.TypedValue.Offset = 0;
      local_48.SelectionStart.bIsSet = false;
      local_48.SelectionStart._9_3_ = 0;
      local_48._28_4_ = 0;
      local_48.CursorInfo.CursorPosition.LineIndex = 0;
      local_48.CursorInfo.CursorPosition.Offset = 0;
      local_48.CursorInfo.CursorAlignment = Left;
      local_48.CursorInfo.CursorTextDirection = LeftToRight;
      local_48.CursorInfo._10_6_ = 0;
      FText::FText(&local_48.Text);
      local_48._24_8_ = local_48._24_8_ & 0xffffffffffffff00;
      local_48.CursorInfo.CursorPosition.LineIndex = 0;
      local_48.CursorInfo.CursorPosition.Offset = 0;
      this_00 = &this->StateBeforeChangingText;
      local_48.CursorInfo._8_8_ = local_48.CursorInfo._8_8_ & 0xffffffffffff0000;
      local_48.CursorInfo.LastCursorInteractionTime = 0.0;
      if ((TOptional<SlateEditableTextTypes::FUndoState> *)&local_48 != this_00) {
        if (((this->StateBeforeChangingText).bIsSet != false) &&
           (pIVar1 = (this_00->TypedValue).Text.TextData.Reference, pIVar1 != (ITextData *)0x0)) {
          (**(code **)((longlong)*pIVar1 + 0x10))();
        }
        FText::FText((FText *)this_00,&local_48.Text);
        uVar3 = local_48.CursorInfo._8_8_;
        (this->StateBeforeChangingText).TypedValue.SelectionStart.bIsSet =
             local_48.SelectionStart.bIsSet;
        if (local_48.SelectionStart.bIsSet != false) {
          (this->StateBeforeChangingText).TypedValue.SelectionStart.TypedValue =
               local_48.SelectionStart.TypedValue;
        }
        (this->StateBeforeChangingText).TypedValue.CursorInfo.CursorPosition.LineIndex =
             local_48.CursorInfo.CursorPosition.LineIndex;
        (this->StateBeforeChangingText).TypedValue.CursorInfo.CursorPosition.Offset =
             local_48.CursorInfo.CursorPosition.Offset;
        (this->StateBeforeChangingText).TypedValue.CursorInfo.CursorAlignment =
             local_48.CursorInfo.CursorAlignment;
        (this->StateBeforeChangingText).TypedValue.CursorInfo.CursorTextDirection =
             local_48.CursorInfo.CursorTextDirection;
        *(undefined2 *)&(this->StateBeforeChangingText).TypedValue.CursorInfo.field_0xa =
             local_48.CursorInfo._10_2_;
        *(undefined4 *)&(this->StateBeforeChangingText).TypedValue.CursorInfo.field_0xc =
             local_48.CursorInfo._12_4_;
        (this->StateBeforeChangingText).TypedValue.CursorInfo.LastCursorInteractionTime =
             local_48.CursorInfo.LastCursorInteractionTime;
        (this->StateBeforeChangingText).bIsSet = true;
        local_48.CursorInfo._8_8_ = uVar3;
      }
      if (local_48.Text.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.Text.TextData.Reference + 0x10))();
      }
      if ((this->StateBeforeChangingText).bIsSet == false) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      MakeUndoState(this,&this_00->TypedValue);
    }
  }
  return;
}

// BeginSearch @ 1429cadb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::BeginSearch
          (FSlateEditableTextLayout *this,FText *param_1,Type param_2,bool param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res18 [16];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->SearchText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->SearchText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->SearchText).Flags = param_1->Flags;
  this->SearchCase = param_2;
  AdvanceSearch(this,param_3);
  return;
}

// BuildDefaultContextMenu @ 1429caf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FSlateEditableTextLayout::BuildDefaultContextMenu
          (FSlateEditableTextLayout *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<FExtender,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISlateStyle *pIVar3;
  FText *pFVar4;
  FName *pFVar5;
  FSlateIcon *pFVar6;
  FGenericCommands *pFVar7;
  TAttribute<EVisibility> *pTVar8;
  TAttribute<FText> *pTVar9;
  TAttribute<FText> *pTVar10;
  TSharedPtr<FUICommandInfo_const_,1> *pTVar11;
  atomic<int> *paVar12;
  atomic<int> *paVar13;
  FName local_res8;
  FName local_res10;
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  ForAnyElementType FStack_368;
  ulonglong local_360;
  FExtender *local_358;
  TReferenceControllerBase<1> *local_350;
  bool local_348;
  undefined1 local_340 [24];
  undefined1 local_328 [8];
  ForAnyElementType FStack_320;
  ulonglong local_318;
  FUICommandList *local_310;
  TReferenceControllerBase<1> *local_308;
  bool local_300;
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [8];
  ForAnyElementType FStack_2d8;
  ulonglong local_2d0;
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  ForAnyElementType FStack_298;
  ulonglong local_290;
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  ForAnyElementType FStack_278;
  ulonglong local_270;
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  ForAnyElementType FStack_258;
  ulonglong local_250;
  int local_248;
  bool local_244;
  undefined1 local_240 [8];
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  ForAnyElementType FStack_218;
  ulonglong local_210;
  bool local_207;
  bool local_205;
  bool local_200;
  undefined1 local_1f8 [8];
  ForAnyElementType FStack_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  ulonglong local_1b8;
  FMenuBuilder local_1b0;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar3 = FAppStyle::Get();
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_358 = param_1->Object;
  paVar13 = (atomic<int> *)&DAT_00000008;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar12 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar12 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  pTVar2 = (this->UICommandList).SharedReferenceCount.ReferenceController;
  local_310 = (this->UICommandList).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    paVar13 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar12 = (atomic<int>)((int)*paVar12 + 1);
    UNLOCK();
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  local_350 = pTVar1;
  local_308 = pTVar2;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_1b0,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_310,true,
             (TSharedPtr<FExtender,1> *)&local_358,pIVar3,(FName)0x0,local_res8);
  local_1b0.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_1b0.CurrentSectionExtensionHook.Number = 0;
  local_1b0._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_1b0.CurrentSectionHeadingText);
  local_1b0.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1b0.CurrentSectionVisibility.bIsSet = false;
  local_1b0.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_1b0.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_1b0.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_1b0.CurrentSectionResizeParams,0,200);
  local_1b0.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_1b0.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_1b0.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_1b0.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.bIsSet = false;
  local_1b0.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_1b0.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_1b0.bSectionNeedsToBeApplied = false;
  local_1b0.bSearchable = true;
  local_1b0.bRecursivelySearchable = true;
  local_1b0.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_1b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  memset((TAttribute<FMenuEntryResizeParams> *)local_2c8,0,200);
  local_2b0 = 0;
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  local_2a8[0] = false;
  local_2a8[1] = false;
  local_2a0 = (undefined1  [8])0x0;
  FStack_298.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_250 = 0;
  local_230 = 0;
  local_210 = 0;
  local_1e8 = 0;
  local_360 = 0;
  local_290 = 0;
  local_288[0] = false;
  local_288[1] = false;
  local_280 = (undefined1  [8])0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  local_268[0] = false;
  local_268[1] = false;
  local_260 = (undefined1  [8])0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  local_244 = false;
  local_240 = (undefined1  [8])0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  local_228[0] = Preferred;
  local_228[1] = false;
  local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_218.Data = (FScriptContainerElement *)0x0;
  local_207 = false;
  local_205 = false;
  local_200 = false;
  local_1f8 = (undefined1  [8])0x0;
  FStack_1f0.Data = (FScriptContainerElement *)0x0;
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_310,L"EditableTextContextMenu",L"Heading",L"Modify Text");
  FText::FText((FText *)local_1e0,pFVar4);
  local_1e0[0x10] = true;
  local_1b8 = 0;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FName::FName(&local_res8,"EditText");
  FMenuBuilder::BeginSection
            (&local_1b0,*pFVar5,(TAttribute<FText> *)local_1e0,(TAttribute<EVisibility> *)local_378,
             (TAttribute<FMenuEntryResizeParams> *)local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_358);
  if (((int)local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
    local_1b8 = local_1b8 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  if ((FName)local_1e0._0_8_ != (FName)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1e0._0_8_ + 0x10))();
  }
  if (local_310 != (FUICommandList *)0x0) {
    (**(code **)(local_310->_padding_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)&local_358);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (FWriteAccessScope *)&local_358);
  if (((int)local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
    local_1e8 = local_1e8 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_220,(FWriteAccessScope *)&local_358);
  if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_218.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
    local_210 = local_210 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_218.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_240,
             (FWriteAccessScope *)&local_358);
  if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_238.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
    local_230 = local_230 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_238.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_240);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_260,
             (FWriteAccessScope *)&local_358);
  if (((int)local_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_258.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10);
    local_250 = local_250 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_260);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
             (FWriteAccessScope *)&local_358);
  if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
    local_270 = local_270 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_280);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a0,
             (FWriteAccessScope *)&local_358);
  if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_298.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
    local_290 = local_290 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
             (FWriteAccessScope *)&local_358);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1e0);
  FText::FText((FText *)local_340);
  local_340[0x10] = false;
  local_318 = 0;
  local_328 = (undefined1  [8])0x0;
  FStack_320.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_2f8);
  local_2f8[0x10] = false;
  local_2d0 = 0;
  local_2e0 = (undefined1  [8])0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar7 = TCommands<FGenericCommands>::Get();
  local_310 = (FUICommandList *)(pFVar7->Undo).Object;
  local_308 = (pFVar7->Undo).SharedReferenceCount.ReferenceController;
  if (local_308 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_308->SharedReferenceCount = (atomic<int>)((int)local_308->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1b0,(TSharedPtr<FUICommandInfo_const_,1> *)&local_310,
             local_res10,(TAttribute<FText> *)local_2f8,(TAttribute<FText> *)local_340,pFVar6,
             local_res8,(TAttribute<EVisibility> *)local_378);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
             (FWriteAccessScope *)&local_358);
  if (((int)local_2d0 != 0) && (FStack_2d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2d8,0,0,0x10);
    local_2d0 = local_2d0 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
             (FWriteAccessScope *)&local_358);
  if (((int)local_318 != 0) && (FStack_320.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_320.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_320,0,0,0x10);
    local_318 = local_318 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_328);
  if ((ITextData *)local_340._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_340._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)&local_358);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_348 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_350,(FDestructionSentinel *)&local_358);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  FMenuBuilder::EndSection(&local_1b0);
  memset((TAttribute<FMenuEntryResizeParams> *)local_2c8,0,200);
  local_248 = 0;
  local_2b0 = 0;
  local_290 = 0;
  local_270 = 0;
  local_250 = 0;
  local_230 = 0;
  local_210 = 0;
  local_1e8 = 0;
  local_360 = 0;
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  local_2a8[0] = false;
  local_2a8[1] = false;
  local_2a0 = (undefined1  [8])0x0;
  FStack_298.Data = (FScriptContainerElement *)0x0;
  local_288[0] = false;
  local_288[1] = false;
  local_280 = (undefined1  [8])0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  local_268[0] = false;
  local_268[1] = false;
  local_260 = (undefined1  [8])0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  local_244 = false;
  local_240 = (undefined1  [8])0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  local_228[0] = Preferred;
  local_228[1] = false;
  local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_218.Data = (FScriptContainerElement *)0x0;
  local_207 = false;
  local_205 = false;
  local_200 = false;
  local_1f8 = (undefined1  [8])0x0;
  FStack_1f0.Data = (FScriptContainerElement *)0x0;
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_340);
  local_340[0x10] = false;
  local_318 = 0;
  local_328 = (undefined1  [8])0x0;
  FStack_320.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FName::FName(&local_res8,"EditableTextModify2");
  FMenuBuilder::BeginSection
            (&local_1b0,*pFVar5,(TAttribute<FText> *)local_340,(TAttribute<EVisibility> *)local_378,
             (TAttribute<FMenuEntryResizeParams> *)local_2c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
             (FWriteAccessScope *)&local_310);
  if (((int)local_318 != 0) && (FStack_320.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_320.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_320,0,0,0x10);
    local_318 = local_318 & 0xffffffff00000000;
  }
  if (local_300 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_308,(FDestructionSentinel *)&local_310);
  }
  if (FStack_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_328);
  if ((ITextData *)local_340._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_340._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)&local_310);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_300 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_308,(FDestructionSentinel *)&local_310);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (FWriteAccessScope *)&local_310);
  if (((int)local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
    local_1e8 = local_1e8 & 0xffffffff00000000;
  }
  if (local_300 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_308,(FDestructionSentinel *)&local_310);
  }
  if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_220,(FWriteAccessScope *)&local_310);
  if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_218.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
    local_210 = local_210 & 0xffffffff00000000;
  }
  if (local_300 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_308,(FDestructionSentinel *)&local_310);
  }
  if (FStack_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_218.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
  if (FStack_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_238.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_240);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_260);
  if (FStack_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_258.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_260);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
  if (FStack_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_280);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a0);
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c0);
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1e0);
  FText::FText((FText *)local_2f8);
  local_2f8[0x10] = false;
  local_2d0 = 0;
  local_2e0 = (undefined1  [8])0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_340);
  local_340[0x10] = false;
  local_318 = 0;
  local_328 = (undefined1  [8])0x0;
  FStack_320.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar7 = TCommands<FGenericCommands>::Get();
  local_310 = (FUICommandList *)(pFVar7->Cut).Object;
  local_308 = (pFVar7->Cut).SharedReferenceCount.ReferenceController;
  if (local_308 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_308->SharedReferenceCount = (atomic<int>)((int)local_308->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1b0,(TSharedPtr<FUICommandInfo_const_,1> *)&local_310,
             local_res10,(TAttribute<FText> *)local_340,(TAttribute<FText> *)local_2f8,pFVar6,
             local_res8,(TAttribute<EVisibility> *)local_378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_328);
  if (FStack_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_328);
  if ((ITextData *)local_340._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_340._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1e0);
  FText::FText((FText *)local_2f8);
  local_2f8[0x10] = false;
  local_2d0 = 0;
  local_2e0 = (undefined1  [8])0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_340);
  local_340[0x10] = false;
  local_318 = 0;
  local_328 = (undefined1  [8])0x0;
  FStack_320.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar7 = TCommands<FGenericCommands>::Get();
  local_310 = (FUICommandList *)(pFVar7->Copy).Object;
  local_308 = (pFVar7->Copy).SharedReferenceCount.ReferenceController;
  if (local_308 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_308->SharedReferenceCount = (atomic<int>)((int)local_308->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1b0,(TSharedPtr<FUICommandInfo_const_,1> *)&local_310,
             local_res10,(TAttribute<FText> *)local_340,(TAttribute<FText> *)local_2f8,pFVar6,
             local_res8,(TAttribute<EVisibility> *)local_378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_328);
  if (FStack_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_328);
  if ((ITextData *)local_340._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_340._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1e0);
  FText::FText((FText *)local_2f8);
  local_2f8[0x10] = false;
  local_2d0 = 0;
  local_2e0 = (undefined1  [8])0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_340);
  local_340[0x10] = false;
  local_318 = 0;
  local_328 = (undefined1  [8])0x0;
  FStack_320.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar7 = TCommands<FGenericCommands>::Get();
  local_310 = (FUICommandList *)(pFVar7->Paste).Object;
  local_308 = (pFVar7->Paste).SharedReferenceCount.ReferenceController;
  if (local_308 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_308->SharedReferenceCount = (atomic<int>)((int)local_308->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1b0,(TSharedPtr<FUICommandInfo_const_,1> *)&local_310,
             local_res10,(TAttribute<FText> *)local_340,(TAttribute<FText> *)local_2f8,pFVar6,
             local_res8,(TAttribute<EVisibility> *)local_378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_328);
  if (FStack_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_328);
  if ((ITextData *)local_340._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_340._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  local_378[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_378[1] = false;
  local_360 = 0;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1e0);
  FText::FText((FText *)local_2f8);
  local_2f8[0x10] = false;
  local_2d0 = 0;
  local_2e0 = (undefined1  [8])0x0;
  FStack_2d8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_340);
  local_340[0x10] = false;
  local_318 = 0;
  local_328 = (undefined1  [8])0x0;
  FStack_320.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar7 = TCommands<FGenericCommands>::Get();
  local_310 = (FUICommandList *)(pFVar7->Delete).Object;
  local_308 = (pFVar7->Delete).SharedReferenceCount.ReferenceController;
  if (local_308 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_308->SharedReferenceCount = (atomic<int>)((int)local_308->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1b0,(TSharedPtr<FUICommandInfo_const_,1> *)&local_310,
             local_res10,(TAttribute<FText> *)local_340,(TAttribute<FText> *)local_2f8,pFVar6,
             local_res8,(TAttribute<EVisibility> *)local_378);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_328);
  if (FStack_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_320.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_328);
  if ((ITextData *)local_340._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_340._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
  if (FStack_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e0);
  if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  FMenuBuilder::EndSection(&local_1b0);
  memset((TAttribute<FMenuEntryResizeParams> *)local_2c8,0,200);
  local_248 = 0;
  local_2b0 = 0;
  local_290 = 0;
  local_270 = 0;
  local_250 = 0;
  local_230 = 0;
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  local_2a8[0] = false;
  local_2a8[1] = false;
  local_2a0 = (undefined1  [8])0x0;
  FStack_298.Data = (FScriptContainerElement *)0x0;
  local_288[0] = false;
  local_288[1] = false;
  local_280 = (undefined1  [8])0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  local_268[0] = false;
  local_268[1] = false;
  local_260 = (undefined1  [8])0x0;
  FStack_258.Data = (FScriptContainerElement *)0x0;
  local_244 = false;
  local_240 = (undefined1  [8])0x0;
  FStack_238.Data = (FScriptContainerElement *)0x0;
  TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
  TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>(local_228);
  local_207 = false;
  local_205 = false;
  local_1e8 = 0;
  local_1f8 = (undefined1  [8])0x0;
  FStack_1f0.Data = (FScriptContainerElement *)0x0;
  local_200 = false;
  TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f8
            );
  pTVar8 = TAttribute<EVisibility>::TAttribute<EVisibility>((TAttribute<EVisibility> *)local_378);
  pTVar9 = TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_340);
  pFVar5 = ::FName::FName(&local_res8,"EditableTextModify3");
  FMenuBuilder::BeginSection
            (&local_1b0,*pFVar5,pTVar9,pTVar8,(TAttribute<FMenuEntryResizeParams> *)local_2c8);
  TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_340);
  TAttribute<EVisibility>::~TAttribute<EVisibility>((TAttribute<EVisibility> *)local_378);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>
            ((TAttribute<FMenuEntryResizeParams> *)local_2c8);
  pTVar8 = TAttribute<EVisibility>::TAttribute<EVisibility>((TAttribute<EVisibility> *)local_378);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar6 = FSlateIcon::FSlateIcon((FSlateIcon *)local_1e0);
  pTVar9 = TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_2f8);
  pTVar10 = TAttribute<FText>::TAttribute<FText>((TAttribute<FText> *)local_340);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar7 = TCommands<FGenericCommands>::Get();
  pTVar11 = TSharedPtr<FUICommandInfo_const_,1>::TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>
                      ((TSharedPtr<FUICommandInfo_const_,1> *)&local_310,&pFVar7->SelectAll);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1b0,pTVar11,(FName)0x0,pTVar10,pTVar9,pFVar6,(FName)0x0,
             pTVar8);
  TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_340);
  TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_2f8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>((TAttribute<EVisibility> *)local_378);
  FMenuBuilder::EndSection(&local_1b0);
  FMenuBuilder::MakeWidget
            (&local_1b0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1b0);
  return __return_storage_ptr__;
}

// CacheDesiredSize @ 1429cc500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::CacheDesiredSize(FSlateEditableTextLayout *this,float param_1)

{
  float fVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  bool *pbVar6;
  FMargin *pFVar7;
  ETextWrappingPolicy *pEVar8;
  Type *pTVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  FMargin local_68;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48 [4];
  
  fVar10 = FTextEditHelper::GetFontHeight(&(this->TextStyle).Font);
  fVar11 = FTextEditHelper::CalculateCaretWidth(fVar10);
  pfVar5 = TAttribute<float>::Get(&this->WrapTextAt);
  fVar10 = *pfVar5;
  pbVar6 = TAttribute<bool>::Get(&this->AutoWrapText);
  fVar13 = fVar10;
  if ((((*pbVar6 != false) &&
       (fVar1 = (this->CachedSize).field0_0x0._s_0.X, __real_3f800000 <= fVar1)) &&
      (fVar13 = fVar1, __real_3f800000 <= fVar10)) && (fVar10 <= fVar1)) {
    fVar13 = fVar10;
  }
  pFVar7 = TAttribute<FMargin>::Get(&this->Margin);
  local_68.Top = pFVar7->Top;
  local_68.Bottom = pFVar7->Bottom;
  local_68.Left = pFVar7->Left + fVar11;
  local_68.Right = pFVar7->Right + fVar11;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FTextLayout::SetScale((FTextLayout *)(this->TextLayout).Object,param_1);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FTextLayout::SetWrappingWidth((FTextLayout *)(this->TextLayout).Object,fVar13);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TextLayout).Object;
  pEVar8 = TAttribute<enum_ETextWrappingPolicy>::Get(&this->WrappingPolicy);
  FTextLayout::SetWrappingPolicy((FTextLayout *)pFVar2,*pEVar8);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FTextLayout::SetMargin((FTextLayout *)(this->TextLayout).Object,&local_68);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TextLayout).Object;
  pfVar5 = TAttribute<float>::Get(&this->LineHeightPercentage);
  FTextLayout::SetLineHeightPercentage((FTextLayout *)pFVar2,*pfVar5);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TextLayout).Object;
  pbVar6 = TAttribute<bool>::Get(&this->ApplyLineHeightToBottomLine);
  FTextLayout::SetApplyLineHeightToBottomLine((FTextLayout *)pFVar2,*pbVar6);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TextLayout).Object;
  pTVar9 = TAttribute<enum_ETextJustify::Type>::Get(&this->Justification);
  FTextLayout::SetJustification((FTextLayout *)pFVar2,*pTVar9);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TextLayout).Object;
  fVar10 = (this->ScrollOffset).field0_0x0._s_0.X;
  fVar13 = (this->ScrollOffset).field0_0x0._s_0.Y;
  if ((pFVar2 == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar12 = (double)*(float *)&((this->TextLayout).Object)->field_0x94;
  local_58._s_0.Y = dVar12 * (double)fVar13;
  local_58._s_0.X = dVar12 * (double)fVar10;
  local_48[0]._0_8_ = (undefined8)(this->CachedSize).field0_0x0._s_0.X;
  local_48[0]._8_8_ = (undefined8)(this->CachedSize).field0_0x0._s_0.Y;
  FTextLayout::SetVisibleRegion
            ((FTextLayout *)pFVar2,(TVector2<double> *)&local_48[0]._s_0,
             (TVector2<double> *)&local_58._s_0);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
  return;
}

// CanExecuteCopy @ 1429ccb50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecuteCopy(FSlateEditableTextLayout *this)

{
  char cVar1;
  TOptional<FTextLocation> *pTVar2;
  int iVar3;
  TOptional<FTextLocation> local_res8 [2];
  
  cVar1 = (**(code **)((longlong)*this->OwnerWidget + 8))();
  local_res8[0].TypedValue.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  iVar3 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res8[0].TypedValue.Offset = 0;
  if (0 < iVar3) {
    local_res8[0].TypedValue.Offset = iVar3;
  }
  pTVar2 = local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar2 = &this->SelectionStart;
  }
  if (((pTVar2->TypedValue).LineIndex == local_res8[0].TypedValue.LineIndex) &&
     ((pTVar2->TypedValue).Offset == local_res8[0].TypedValue.Offset)) {
    return false;
  }
  return cVar1 == '\0';
}

// CanExecuteCut @ 1429ccbf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecuteCut(FSlateEditableTextLayout *this)

{
  char cVar1;
  char cVar2;
  TOptional<FTextLocation> *pTVar3;
  int iVar4;
  int local_res8;
  int iStackX_c;
  
  cVar1 = (**(code **)*this->OwnerWidget)();
  cVar2 = (**(code **)((longlong)*this->OwnerWidget + 8))();
  local_res8 = (this->CursorInfo).CursorPosition.LineIndex;
  iVar4 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  iStackX_c = 0;
  if (0 < iVar4) {
    iStackX_c = iVar4;
  }
  pTVar3 = (TOptional<FTextLocation> *)&local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar3 = &this->SelectionStart;
  }
  if (((pTVar3->TypedValue).LineIndex == local_res8) && ((pTVar3->TypedValue).Offset == iStackX_c))
  {
    return false;
  }
  return cVar2 == '\0' && cVar1 == '\0';
}

// CanExecuteDelete @ 1429ccca0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecuteDelete(FSlateEditableTextLayout *this)

{
  char cVar1;
  TOptional<FTextLocation> *pTVar2;
  int iVar3;
  TOptional<FTextLocation> local_res8 [2];
  
  cVar1 = (**(code **)*this->OwnerWidget)();
  local_res8[0].TypedValue.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  iVar3 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res8[0].TypedValue.Offset = 0;
  if (0 < iVar3) {
    local_res8[0].TypedValue.Offset = iVar3;
  }
  pTVar2 = local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar2 = &this->SelectionStart;
  }
  if (((pTVar2->TypedValue).LineIndex == local_res8[0].TypedValue.LineIndex) &&
     ((pTVar2->TypedValue).Offset == local_res8[0].TypedValue.Offset)) {
    return false;
  }
  return cVar1 == '\0';
}

// CanExecutePaste @ 1429ccd40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecutePaste(FSlateEditableTextLayout *this)

{
  bool bVar1;
  char cVar2;
  FString local_18;
  
  cVar2 = (**(code **)*this->OwnerWidget)();
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FWindowsPlatformApplicationMisc::ClipboardPaste(&local_18);
  bVar1 = 1 < local_18.Data.ArrayNum;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1 && cVar2 == '\0';
}

// CanExecuteRedo @ 1429ccda0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecuteRedo(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  
  cVar2 = (**(code **)*this->OwnerWidget)();
  if (cVar2 == '\0') {
    if ((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    cVar2 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
    if (cVar2 == '\0') {
      return true;
    }
  }
  return false;
}

// CanExecuteSelectAll @ 1429cce10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecuteSelectAll(FSlateEditableTextLayout *this)

{
  return true;
}

// CanExecuteUndo @ 1429cce20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::CanExecuteUndo(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  
  cVar2 = (**(code **)*this->OwnerWidget)();
  if (cVar2 == '\0') {
    if ((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    cVar2 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
    if (cVar2 == '\0') {
      return true;
    }
  }
  return false;
}

// ClearSelection @ 1429cd570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::ClearSelection(FSlateEditableTextLayout *this)

{
  undefined1 local_18 [24];
  
  if (((TOptional<FTextLocation> *)local_18 != &this->SelectionStart) &&
     ((this->SelectionStart).bIsSet != false)) {
    (this->SelectionStart).bIsSet = false;
  }
  return;
}

// ClearUndoStates @ 1429cd5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::ClearUndoStates(FSlateEditableTextLayout *this)

{
  int *piVar1;
  
  this->CurrentUndoLevel = -1;
  DestructItems<SlateEditableTextTypes::FUndoState,int>
            ((FUndoState *)(this->UndoStates).AllocatorInstance.Data,(this->UndoStates).ArrayNum);
  piVar1 = &(this->UndoStates).ArrayMax;
  (this->UndoStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->UndoStates).AllocatorInstance,0,piVar1);
  }
  return;
}

// ComputeDesiredSize @ 1429cd780

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateEditableTextLayout::ComputeDesiredSize
          (FSlateEditableTextLayout *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TSharedPtr<FSlateTextLayout,1> *this_00;
  float fVar1;
  ETextWrappingPolicy EVar2;
  bool bVar3;
  Type TVar4;
  FSlateTextBlockLayout *this_01;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  TVector2<double> *pTVar11;
  float *pfVar12;
  FMargin *pFVar13;
  Type *pTVar14;
  bool *pbVar15;
  ETextWrappingPolicy *pEVar16;
  FText *pFVar17;
  FText *pFVar18;
  FSlateTextLayout *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  TVector2<double>_u_0 local_108;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  FWidgetDesiredSizeArgs local_f0;
  TVector2<double>_u_0 local_a8;
  TVector2<double> local_98 [6];
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                          ,0xe33,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TVector2<double> *)(*pcVar5)();
    return pTVar11;
  }
  fVar20 = FTextEditHelper::GetFontHeight(&(this->TextStyle).Font);
  fVar21 = FTextEditHelper::CalculateCaretWidth(fVar20);
  pfVar12 = TAttribute<float>::Get(&this->WrapTextAt);
  this_00 = &this->TextLayout;
  fVar23 = *pfVar12;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TVector2<double> *)(*pcVar5)();
    return pTVar11;
  }
  bVar10 = FTextLayout::IsEmpty((FTextLayout *)this_00->Object);
  if ((bVar10) && ((this->HintTextLayout).Ptr != (FSlateTextBlockLayout *)0x0)) {
    pFVar13 = TAttribute<FMargin>::Get(&this->Margin);
    this_01 = (this->HintTextLayout).Ptr;
    fVar6 = pFVar13->Left;
    fVar7 = pFVar13->Top;
    fVar8 = pFVar13->Right;
    fVar9 = pFVar13->Bottom;
    pTVar14 = TAttribute<enum_ETextJustify::Type>::Get(&this->Justification);
    TVar4 = *pTVar14;
    pbVar15 = TAttribute<bool>::Get(&this->ApplyLineHeightToBottomLine);
    bVar10 = *pbVar15;
    pfVar12 = TAttribute<float>::Get(&this->LineHeightPercentage);
    fVar22 = *pfVar12;
    pEVar16 = TAttribute<enum_ETextWrappingPolicy>::Get(&this->WrappingPolicy);
    EVar2 = *pEVar16;
    pbVar15 = TAttribute<bool>::Get(&this->AutoWrapText);
    bVar3 = *pbVar15;
    pfVar12 = TAttribute<float>::Get(&this->WrapTextAt);
    fVar1 = *pfVar12;
    pFVar17 = FText::GetEmpty();
    pFVar18 = TAttribute<FText>::Get(&this->HintText);
    local_f0.Text.TextData.Reference = (pFVar18->TextData).Reference;
    if (local_f0.Text.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.Text.TextData.Reference + 8))
                (local_f0.Text.TextData.Reference,local_f8);
    }
    local_f0.Text.Flags = pFVar18->Flags;
    local_f0.HighlightText.TextData.Reference = (pFVar17->TextData).Reference;
    if (local_f0.HighlightText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.HighlightText.TextData.Reference + 8))
                (local_f0.HighlightText.TextData.Reference,local_f4);
    }
    local_f0.HighlightText.Flags = pFVar17->Flags;
    local_f0.Margin.Top = fVar7;
    local_f0.Margin.Left = fVar6 + fVar21;
    local_f0.Margin.Bottom = fVar9;
    local_f0.Margin.Right = fVar8 + fVar21;
    local_f0.TransformPolicy = None;
    local_f0.WrapTextAt = fVar1;
    local_f0.LineHeightPercentage = fVar22;
    local_f0.ApplyLineHeightToBottomLine = bVar10;
    local_f0.WrappingPolicy = EVar2;
    local_f0.Justification = TVar4;
    local_f0.AutoWrapText = bVar3;
    FSlateTextBlockLayout::ComputeDesiredSize
              (this_01,(TVector2<double> *)&local_a8._s_0,&local_f0,param_1,&this->HintTextStyle);
    if (local_f0.HighlightText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.HighlightText.TextData.Reference + 0x10))();
    }
    if (local_f0.Text.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.Text.TextData.Reference + 0x10))();
    }
    uVar24 = SUB84(local_a8._s_0.Y,0);
    uVar25 = (undefined4)((ulonglong)local_a8._8_8_ >> 0x20);
    if (fVar23 <= 0.0) {
      fVar23 = (float)local_a8._s_0.X;
    }
  }
  else {
    if ((this_00->Object == (FSlateTextLayout *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TVector2<double> *)(*pcVar5)();
      return pTVar11;
    }
    FTextLayout::GetSize((FTextLayout *)this_00->Object,(TVector2<double> *)&local_108._s_0);
    if ((0.0 < fVar23) && ((double)fVar23 < (double)CONCAT44(local_108._4_4_,local_108._0_4_))) {
      pFVar19 = TSharedPtr<FSlateTextLayout,1>::operator->(this_00);
      pTVar11 = FTextLayout::GetWrappedSize((FTextLayout *)pFVar19,local_98);
      local_108._0_4_ = *(undefined4 *)&pTVar11->field0_0x0;
      local_108._4_4_ = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
      local_108._8_4_ = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 8);
      local_108._12_4_ = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
    }
    fVar23 = (float)(double)CONCAT44(local_108._4_4_,local_108._0_4_);
    uVar24 = local_108._8_4_;
    uVar25 = local_108._12_4_;
  }
  if ((this_00->Object == (FSlateTextLayout *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TVector2<double> *)(*pcVar5)();
    return pTVar11;
  }
  pFVar19 = this_00->Object;
  fVar21 = *(float *)&pFVar19->field_0xa8 + *(float *)&pFVar19->field_0xa0;
  fVar22 = *(float *)&pFVar19->field_0xac + *(float *)&pFVar19->field_0xa4;
  if (fVar21 <= fVar23) {
    fVar21 = fVar23;
  }
  if (fVar22 <= (float)(double)CONCAT44(uVar25,uVar24)) {
    fVar22 = (float)(double)CONCAT44(uVar25,uVar24);
  }
  if (fVar22 <= fVar20) {
    fVar22 = fVar20;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar21;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar22;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1429cfc60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::ComputeVolatility(FSlateEditableTextLayout *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter,
             &local_28);
  if (((*(int *)&(this->BoundText).Getter.field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->BoundText).Getter.field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  bVar3 = TAttribute<FText>::IsBound(&this->HintText);
  if (((((!bVar3) && (bVar3 = TAttribute<FText>::IsBound(&this->BoundSearchText), !bVar3)) &&
       ((bVar3 = TAttribute<float>::IsBound(&this->WrapTextAt), !bVar3 &&
        ((bVar3 = TAttribute<bool>::IsBound(&this->AutoWrapText), !bVar3 &&
         (bVar3 = TAttribute<enum_ETextWrappingPolicy>::IsBound(&this->WrappingPolicy), !bVar3))))))
      && (bVar3 = TAttribute<FMargin>::IsBound(&this->Margin), !bVar3)) &&
     ((bVar3 = TAttribute<enum_ETextJustify::Type>::IsBound(&this->Justification), !bVar3 &&
      (bVar3 = TAttribute<float>::IsBound(&this->LineHeightPercentage), !bVar3)))) {
    return false;
  }
  return true;
}

// CopySelectedTextToClipboard @ 1429de450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::CopySelectedTextToClipboard(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FTextLocation *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FTextLocation local_res8;
  FString local_28;
  FTextSelection local_18;
  
  cVar2 = (**(code **)((longlong)*this->OwnerWidget + 8))();
  if (cVar2 == '\0') {
    bVar3 = AnyTextSelected(this);
    if (bVar3) {
      local_res8.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
      iVar5 = (this->CursorInfo).CursorPosition.Offset +
              (uint)((this->CursorInfo).CursorAlignment == Right);
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_res8.Offset = 0;
      if (0 < iVar5) {
        local_res8.Offset = iVar5;
      }
      pFVar4 = &local_res8;
      if ((this->SelectionStart).bIsSet != false) {
        pFVar4 = &(this->SelectionStart).TypedValue;
      }
      local_18.LocationA = *pFVar4;
      local_18.LocationB.Offset = local_res8.Offset;
      local_18.LocationB.LineIndex = local_res8.LineIndex;
      if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FTextLayout::GetSelectionAsText((FTextLayout *)(this->TextLayout).Object,&local_28,&local_18);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar6.Data);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CreateTextOrPasswordRun @ 1429e3320

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IRun,1> * __thiscall
FSlateEditableTextLayout::CreateTextOrPasswordRun
          (FSlateEditableTextLayout *this,TSharedRef<IRun,1> *__return_storage_ptr__,
          FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,FTextBlockStyle *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  TSharedRef<FSlateTextRun,1> *pTVar3;
  TSharedRef<FSlateTextRun,1> local_18;
  
  cVar2 = (**(code **)((longlong)*this->OwnerWidget + 8))();
  if (cVar2 == '\0') {
    pTVar3 = FSlateTextRun::Create(&local_18,param_1,param_2,param_3);
  }
  else {
    pTVar3 = (TSharedRef<FSlateTextRun,1> *)
             FSlatePasswordRun::Create
                       ((TSharedRef<FSlatePasswordRun,1> *)&local_18,param_1,param_2,param_3);
  }
  __return_storage_ptr__->Object = (IRun *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CutSelectedTextToClipboard @ 1429e3470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::CutSelectedTextToClipboard(FSlateEditableTextLayout *this)

{
  char cVar1;
  bool bVar2;
  FSlateTextLayout *this_00;
  FTextLocation *pFVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FTextLocation local_res8 [4];
  FString local_28;
  FTextSelection local_18;
  
  cVar1 = (**(code **)*this->OwnerWidget)();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if (cVar1 == '\0') {
      bVar2 = AnyTextSelected(this);
      if (bVar2) {
        BeginEditTransation(this);
        local_res8[0].LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
        iVar5 = (this->CursorInfo).CursorPosition.Offset +
                (uint)((this->CursorInfo).CursorAlignment == Right);
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        local_res8[0].Offset = 0;
        if (0 < iVar5) {
          local_res8[0].Offset = iVar5;
        }
        pFVar3 = local_res8;
        if ((this->SelectionStart).bIsSet != false) {
          pFVar3 = &(this->SelectionStart).TypedValue;
        }
        local_18.LocationA = *pFVar3;
        local_18.LocationB.Offset = local_res8[0].Offset;
        local_18.LocationB.LineIndex = local_res8[0].LineIndex;
        this_00 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
        FTextLayout::GetSelectionAsText((FTextLayout *)this_00,&local_28,&local_18);
        FVar4.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar4.Data = local_28.Data.AllocatorInstance.Data;
        }
        FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar4.Data);
        DeleteSelectedText(this);
        UpdateCursorHighlight(this);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        EndEditTransaction(this);
      }
    }
  }
  return;
}

// DeleteSelectedText @ 1429e3590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::DeleteSelectedText(FSlateEditableTextLayout *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  TOptional<FTextLocation> *pTVar8;
  FSlateTextLayout *pFVar9;
  FSlateTextLayout *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedRef<FSlatePasswordRun,1> *pTVar12;
  TSharedRef<FSlateTextRun,1> *pTVar13;
  uint uVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  undefined1 auStack_1a8 [32];
  TSharedRef<IRun,1> *local_188;
  TSharedRef<IRun,1> *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  TSharedRef<IRun,1> local_148;
  undefined1 local_138 [16];
  FTextLocation local_128;
  FTextLocation local_120;
  FTextLocation local_118;
  FTextLocation local_110;
  FTextLocation local_108;
  undefined8 local_100;
  FNewLineData local_f8;
  TSharedRef<FString_const_,1> local_d8;
  TSharedRef<FSlatePasswordRun,1> local_c8;
  TSharedRef<FSlateTextRun,1> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [40];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  TSharedRef<IRun,1> *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  cVar5 = (**(code **)*this->OwnerWidget)();
  if ((cVar5 == '\0') && (bVar6 = AnyTextSelected(this), bVar6)) {
    local_138._0_4_ = (this->CursorInfo).CursorPosition.LineIndex;
    uVar14 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_138._4_4_ = 0;
    if (0 < (int)uVar14) {
      local_138._4_4_ = uVar14;
    }
    local_100 = CONCAT44(local_138._4_4_,local_138._0_4_);
    pTVar8 = (TOptional<FTextLocation> *)local_138;
    if ((this->SelectionStart).bIsSet != false) {
      pTVar8 = &this->SelectionStart;
    }
    local_138._8_8_ = (ulonglong)(uint)local_138._4_4_;
    local_108 = pTVar8->TypedValue;
    uVar14 = local_108.LineIndex;
    uVar18 = local_108.Offset;
    if (uVar14 == local_138._0_4_) {
      local_138._8_8_ = (ulonglong)local_108 >> 0x20;
      uVar19 = uVar14;
      if ((int)local_138._4_4_ <= (int)uVar18) {
        local_138._8_8_ = (ulonglong)(uint)local_138._4_4_;
        uVar19 = local_138._0_4_;
      }
    }
    else {
      local_138._8_8_ = (ulonglong)(uint)local_138._4_4_;
      uVar19 = local_138._0_4_;
      if ((int)uVar14 < (int)local_138._0_4_) {
        local_138._8_8_ = (ulonglong)local_108 >> 0x20;
        uVar19 = uVar14;
      }
    }
    iVar7 = (int)local_138._8_8_;
    bVar6 = SBORROW4(uVar14,local_138._0_4_);
    iVar17 = uVar14 - local_138._0_4_;
    if (uVar14 == local_138._0_4_) {
      bVar6 = SBORROW4(uVar18,local_138._4_4_);
      iVar17 = uVar18 - local_138._4_4_;
    }
    uVar15 = local_138._0_4_;
    if ((uVar14 != local_138._0_4_ || uVar18 != local_138._4_4_) && bVar6 == iVar17 < 0) {
      uVar15 = uVar14;
    }
    bVar6 = SBORROW4(uVar14,local_138._0_4_);
    iVar17 = uVar14 - local_138._0_4_;
    if (uVar14 == local_138._0_4_) {
      bVar6 = SBORROW4(uVar18,local_138._4_4_);
      iVar17 = uVar18 - local_138._4_4_;
    }
    uVar4 = local_138._4_4_;
    if ((uVar14 != local_138._0_4_ || uVar18 != local_138._4_4_) && bVar6 == iVar17 < 0) {
      uVar4 = uVar18;
    }
    pFVar9 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    if (uVar19 == uVar15) {
      local_128.LineIndex = uVar19;
      local_128.Offset = iVar7;
      FTextLayout::RemoveAt((FTextLayout *)pFVar9,&local_128,uVar4 - iVar7);
    }
    else {
      uVar14 = 0;
      if ((int)uVar15 < *(int *)&pFVar9->field_0x28) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_188 = (TSharedRef<IRun,1> *)(longlong)(int)uVar15;
        local_180 = (TSharedRef<IRun,1> *)(longlong)*(int *)&pFVar9->field_0x28;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar17 = *(int *)(*(longlong *)
                         ((longlong)(int)uVar15 * 0x70 + *(longlong *)&pFVar9->field_0x20) + 8);
      uVar14 = iVar17 - 1;
      if (iVar17 == 0) {
        uVar14 = 0;
      }
      if (uVar14 == uVar4) {
        pFVar10 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
        FTextLayout::RemoveLine((FTextLayout *)pFVar10,uVar15);
      }
      else {
        pFVar10 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
        local_120.Offset = 0;
        local_120.LineIndex = uVar15;
        FTextLayout::RemoveAt((FTextLayout *)pFVar10,&local_120,uVar4);
      }
      while (uVar15 = uVar15 - 1, (int)uVar19 < (int)uVar15) {
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FTextLayout::RemoveLine((FTextLayout *)(this->TextLayout).Object,uVar15);
      }
      uVar14 = 0;
      if ((int)uVar19 < *(int *)&pFVar9->field_0x28) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_188 = (TSharedRef<IRun,1> *)(longlong)(int)uVar19;
        local_180 = (TSharedRef<IRun,1> *)(longlong)*(int *)&pFVar9->field_0x28;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar2 = *(longlong *)&pFVar9->field_0x20;
      if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)((longlong)(int)uVar19 * 0x70 + lVar2) + 8);
      iVar17 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar17 = 0;
      }
      local_118.LineIndex = uVar19;
      local_118.Offset = iVar7;
      FTextLayout::RemoveAt((FTextLayout *)(this->TextLayout).Object,&local_118,iVar17 - iVar7);
      if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTextLayout::JoinLineWithNextLine((FTextLayout *)(this->TextLayout).Object,uVar19);
      if (*(int *)&pFVar9->field_0x28 == 0) {
        pTVar11 = ::operator_new(0x20);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar20 = pTVar11 + 1;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          pTVar11->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFString___00_SharedPointerInternals__6B_;
          pTVar11[1]._padding_ = 0;
          pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar16 = pTVar11;
          if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_158.Data = (FScriptContainerElement *)0x0;
        local_150 = 0;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98._8_4_ = 0;
        local_98._12_4_ = 0;
        uStack_50 = 0;
        local_88._8_8_ = 0;
        local_88._16_8_ = 0;
        local_88._24_8_ = 0;
        uStack_60 = 0x8000000000;
        local_58 = 0xffffffff;
        uStack_40 = 0;
        local_d8.Object = (FString *)pTVar20;
        local_d8.SharedReferenceCount.ReferenceController = pTVar16;
        local_98._0_8_ = local_158.Data;
        local_88._0_8_ = local_158.Data;
        local_88._32_8_ = local_158.Data;
        local_48 = (TSharedRef<IRun,1> *)local_158.Data;
        cVar5 = (**(code **)((longlong)*this->OwnerWidget + 8))();
        if (cVar5 == '\0') {
          pTVar13 = FSlateTextRun::Create(&local_b8,(FRunInfo *)local_98,&local_d8,&this->TextStyle)
          ;
          local_148.Object = (IRun *)pTVar13->Object;
          local_148.SharedReferenceCount.ReferenceController =
               (pTVar13->SharedReferenceCount).ReferenceController;
          if (local_148.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        else {
          pTVar12 = FSlatePasswordRun::Create
                              (&local_c8,(FRunInfo *)local_98,&local_d8,&this->TextStyle);
          local_148.Object = (IRun *)pTVar12->Object;
          local_148.SharedReferenceCount.ReferenceController =
               (pTVar12->SharedReferenceCount).ReferenceController;
          local_b8.SharedReferenceCount.ReferenceController =
               local_c8.SharedReferenceCount.ReferenceController;
          if (local_148.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (local_158.Data <= &local_148) {
          if (&local_148 < (TSharedRef<IRun,1> *)(local_158.Data + (longlong)local_150._4_4_ * 0x10)
             ) {
            local_170 = (longlong)(int)local_150;
            local_168 = 0x10;
            local_188 = &local_148;
            local_180 = (TSharedRef<IRun,1> *)local_158.Data;
            local_178 = (longlong)local_150._4_4_;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        iVar7 = (int)local_150;
        if ((int)local_150 == local_150._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_158,(int *)((longlong)&local_150 + 4));
        }
        local_150 = CONCAT44(local_150._4_4_,iVar7 + 1);
        *(IRun **)&local_158.Data[(longlong)iVar7 * 0x10].field_0x0 = local_148.Object;
        *(TReferenceControllerBase<1> **)(local_158.Data + (longlong)iVar7 * 0x10 + 8) =
             local_148.SharedReferenceCount.ReferenceController;
        if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
        uStack_40 = uStack_40 & 0xffffffff00000000;
        if (local_48 != (TSharedRef<IRun,1> *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        if ((TSharedRef<IRun,1> *)local_98._0_8_ != (TSharedRef<IRun,1> *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_f8.Runs.AllocatorInstance.Data = local_158.Data;
        local_f8.Runs.ArrayNum = (int)local_150;
        local_f8.Runs.ArrayMax = local_150._4_4_;
        pFVar9 = (this->TextLayout).Object;
        local_158.Data = (FScriptContainerElement *)0x0;
        local_150 = 0;
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f8.Text.Object = (FString *)pTVar20;
        local_f8.Text.SharedReferenceCount.ReferenceController = pTVar11;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)0x0,0);
        FTextLayout::AddLine((FTextLayout *)pFVar9,&local_f8);
        DestructItems<TSharedRef<IRun,1>,int>
                  ((TSharedRef<IRun,1> *)local_f8.Runs.AllocatorInstance.Data,local_f8.Runs.ArrayNum
                  );
        if ((TSharedRef<IRun,1> *)local_f8.Runs.AllocatorInstance.Data != (TSharedRef<IRun,1> *)0x0)
        {
          FMemory::Free(local_f8.Runs.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.Text.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)local_158.Data,(int)local_150);
        if ((TSharedRef<IRun,1> *)local_158.Data != (TSharedRef<IRun,1> *)0x0) {
          FMemory::Free(local_158.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        iVar7 = (int)local_138._8_8_;
      }
    }
    if (((TOptional<FTextLocation> *)local_a8 != &this->SelectionStart) &&
       ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    local_110.LineIndex = uVar19;
    local_110.Offset = iVar7;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_110);
    UpdateCursorHighlight(this);
  }
  return;
}

// EnableTextInputMethodContext @ 1429e41f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::EnableTextInputMethodContext(FSlateEditableTextLayout *this)

{
  atomic<int> *paVar1;
  TSharedPtr<ITextInputMethodChangeNotifier,1> *this_00;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextInputMethodContext *pFVar4;
  ISlateEditableTextWidget *pIVar5;
  undefined8 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ITextInputMethodChangeNotifier *pIVar13;
  FSlateApplication *pFVar14;
  longlong lVar15;
  TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1> *pTVar16;
  undefined8 local_88;
  TReferenceControllerBase<1> *local_80;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  FTextInputMethodContext *local_68;
  TReferenceControllerBase<1> *local_60;
  FTextInputMethodContext *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  FSlateApplication::Get();
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar11 = (longlong *)
            (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe8))();
  if (plVar11 != (longlong *)0x0) {
    if (this->bHasRegisteredTextInputMethodContext == false) {
      this->bHasRegisteredTextInputMethodContext = true;
      pcVar9 = *(code **)(*plVar11 + 0x10);
      if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar3 = (this->TextInputMethodContext).SharedReferenceCount.ReferenceController;
      pFVar4 = (this->TextInputMethodContext).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FTextInputMethodContext *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = pFVar4;
      local_60 = pTVar3;
      puVar12 = (undefined8 *)(*pcVar9)(plVar11,local_38,&local_68);
      this_00 = &this->TextInputMethodChangeNotifier;
      if (this_00 != (TSharedPtr<ITextInputMethodChangeNotifier,1> *)puVar12) {
        this_00->Object = (ITextInputMethodChangeNotifier *)*puVar12;
        *puVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->TextInputMethodChangeNotifier).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar12 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (this_00->Object != (ITextInputMethodChangeNotifier *)0x0) {
        pIVar13 = TSharedPtr<ITextInputMethodChangeNotifier,1>::operator->(this_00);
        (**(code **)((longlong)*pIVar13 + 8))(pIVar13,0);
      }
    }
    if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = (this->TextInputMethodContext).Object;
    if (pFVar4->OwnerLayout != (FSlateEditableTextLayout *)0x0) {
      pIVar5 = pFVar4->OwnerLayout->OwnerWidget;
      puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar5 + 0x90))(pIVar5,local_48);
      pTVar3 = (TReferenceControllerBase<1> *)puVar12[1];
      uVar6 = *puVar12;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        pFVar14 = FSlateApplication::Get();
        lVar15 = *(longlong *)pFVar14;
      }
      else {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        pFVar14 = FSlateApplication::Get();
        lVar15 = *(longlong *)pFVar14;
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88 = uVar6;
      local_80 = pTVar3;
      puVar12 = (undefined8 *)(**(code **)(lVar15 + 0x28))(pFVar14,local_28,&local_88);
      (pFVar4->CachedParentWindow).Object = (SWindow *)*puVar12;
      pTVar7 = (TReferenceControllerBase<1> *)puVar12[1];
      if (pTVar7 != (pFVar4->CachedParentWindow).WeakReferenceCount.ReferenceController) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar8 = (pFVar4->CachedParentWindow).WeakReferenceCount.ReferenceController;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar8->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
          }
        }
        (pFVar4->CachedParentWindow).WeakReferenceCount.ReferenceController = pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    pTVar16 = &this->TextInputMethodContext;
    if ((pTVar16->Object == (FTextInputMethodContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(pTVar16->Object->_padding_ + 0x58))(pTVar16->Object,&local_78);
    if (local_78 != (longlong *)0x0) {
      if ((local_78 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (**(code **)(*local_78 + 0x90))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    pcVar9 = *(code **)(*plVar11 + 0x20);
    if ((pTVar16->Object == (FTextInputMethodContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar4 = pTVar16->Object;
    pTVar3 = (this->TextInputMethodContext).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FTextInputMethodContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = pFVar4;
    local_50 = pTVar3;
    (*pcVar9)(plVar11,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// EndEditTransaction @ 1429e4620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::EndEditTransaction(FSlateEditableTextLayout *this)

{
  int *piVar1;
  TOptional<SlateEditableTextTypes::FUndoState> *this_00;
  int iVar2;
  longlong *plVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FString *pFVar8;
  FString *pFVar9;
  FSlateTextLayout *pFVar10;
  ITextLayoutMarshaller *pIVar11;
  int iVar12;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res14;
  FText local_48;
  FReadAccessScope local_38;
  
  piVar1 = &this->NumTransactionsOpened;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumTransactionsOpened >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xc75,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (0 < this->NumTransactionsOpened) {
    return;
  }
  if ((this->StateBeforeChangingText).bIsSet == false) {
    return;
  }
  GetEditableText(this,&local_48);
  pFVar8 = FText::ToString(&local_48);
  this_00 = &this->StateBeforeChangingText;
  if (((this->StateBeforeChangingText).bIsSet == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = FText::ToString((FText *)this_00);
  iVar12 = (pFVar8->Data).ArrayNum;
  iVar2 = (pFVar9->Data).ArrayNum;
  if (iVar12 == iVar2) {
    if (iVar12 < 2) goto LAB_1429e4876;
    iVar12 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                    (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
    bVar6 = iVar12 == 0;
  }
  else {
    bVar6 = iVar2 + iVar12 == 1;
  }
  if (!bVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter,
               &local_38);
    if (((*(int *)&(this->BoundText).Getter.field_0x10 == 0) ||
        (plVar3 = *(longlong **)&(this->BoundText).Getter.field_0x8, plVar3 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar3 + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter);
      pIVar4 = (this->BoundText).Value.TextData.Reference;
      if (pIVar4 != local_48.TextData.Reference) {
        (this->BoundText).Value.TextData.Reference = local_48.TextData.Reference;
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 8))
                    (local_48.TextData.Reference,local_res8);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->BoundText).Value.Flags = local_48.Flags;
      (this->BoundText).bIsSet = true;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    if (((this->StateBeforeChangingText).bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    PushUndoState(this,&this_00->TypedValue);
    pFVar10 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    (**(code **)(*(longlong *)pFVar10 + 8))(pFVar10);
    (**(code **)((longlong)*this->OwnerWidget + 0xb0))(this->OwnerWidget,&local_48);
    iVar12 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_res14 = 0;
    if (0 < iVar12) {
      local_res14 = iVar12;
    }
    local_res10 = (this->CursorInfo).CursorPosition.LineIndex;
    (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_res10);
    UpdatePreferredCursorScreenOffsetInLine(this);
    pIVar11 = TSharedPtr<ITextLayoutMarshaller,1>::operator->(&this->Marshaller);
    cVar7 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
    if (cVar7 != '\0') {
      ForceRefreshTextLayout(this,&local_48);
    }
  }
LAB_1429e4876:
  if ((this->StateBeforeChangingText).bIsSet != false) {
    pIVar4 = (this_00->TypedValue).Text.TextData.Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    (this->StateBeforeChangingText).bIsSet = false;
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// ForceRefreshTextLayout @ 1429e84f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::ForceRefreshTextLayout(FSlateEditableTextLayout *this,FText *param_1)

{
  TOptional<FTextLocation> *pTVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  FTextLocation FVar5;
  FTextLocation local_28 [2];
  FTextLocation local_18;
  undefined8 uStack_10;
  
  pTVar1 = &this->SelectionStart;
  bVar4 = (this->SelectionStart).bIsSet;
  FVar5 = local_28[0];
  if (bVar4 != false) {
    FVar5 = pTVar1->TypedValue;
  }
  local_18 = (this->CursorInfo).CursorPosition;
  uStack_10._0_1_ = (this->CursorInfo).CursorAlignment;
  uStack_10._1_1_ = (this->CursorInfo).CursorTextDirection;
  uStack_10._2_6_ = *(undefined6 *)&(this->CursorInfo).field_0xa;
  dVar2 = (this->CursorInfo).LastCursorInteractionTime;
  SetEditableText(this,param_1,true);
  if ((TOptional<FTextLocation> *)local_28 != pTVar1) {
    if (bVar4 == false) {
      if ((this->SelectionStart).bIsSet != false) {
        (this->SelectionStart).bIsSet = false;
      }
    }
    else {
      pTVar1->TypedValue = FVar5;
      (this->SelectionStart).bIsSet = true;
    }
  }
  (this->CursorInfo).CursorPosition = local_18;
  (this->CursorInfo).CursorAlignment = (undefined1)uStack_10;
  (this->CursorInfo).CursorTextDirection = uStack_10._1_1_;
  *(undefined6 *)&(this->CursorInfo).field_0xa = uStack_10._2_6_;
  (this->CursorInfo).LastCursorInteractionTime = dVar2;
  UpdateCursorHighlight(this);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
  return;
}

// GetAutoWrapText @ 1429e8e50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::GetAutoWrapText(FSlateEditableTextLayout *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get(&this->AutoWrapText);
  return *pbVar1;
}

// GetCharacterAt @ 1429e92e0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t __thiscall
FSlateEditableTextLayout::GetCharacterAt(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FSlateTextLayout *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  wchar_t wVar8;
  int iVar9;
  uint uVar10;
  
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    wVar8 = (*pcVar6)();
    return wVar8;
  }
  pFVar4 = (this->TextLayout).Object;
  uVar1 = param_1->LineIndex;
  uVar10 = 0;
  if ((int)uVar1 < *(int *)&pFVar4->field_0x28) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    wVar8 = (*pcVar6)();
    return wVar8;
  }
  if (*(int *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&pFVar4->field_0x20) + 8) <
      2) {
    return L'\n';
  }
  uVar1 = param_1->LineIndex;
  uVar10 = 0;
  if ((int)uVar1 < *(int *)&pFVar4->field_0x28) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    wVar8 = (*pcVar6)();
    return wVar8;
  }
  iVar2 = param_1->Offset;
  plVar5 = *(longlong **)((longlong)(int)uVar1 * 0x70 + *(longlong *)&pFVar4->field_0x20);
  if (-1 < iVar2) {
    iVar3 = (int)plVar5[1];
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    if (iVar2 < iVar9) goto LAB_1429e943c;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x107,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    wVar8 = (*pcVar6)();
    return wVar8;
  }
LAB_1429e943c:
  return *(wchar_t *)(*plVar5 + (longlong)iVar2 * 2);
}

// GetChildren @ 1429ea490

/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall FSlateEditableTextLayout::GetChildren(FSlateEditableTextLayout *this)

{
  FSlateTextBlockLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  FChildren *pFVar4;
  FSlateTextBlockLayout *pFVar5;
  
  pFVar5 = (FSlateTextBlockLayout *)&this->TextLayout;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FChildren *)(*pcVar2)();
    return pFVar4;
  }
  bVar3 = FTextLayout::IsEmpty((FTextLayout *)((TSharedPtr<FSlateTextLayout,1> *)pFVar5)->Object);
  if ((bVar3) && (pFVar1 = (this->HintTextLayout).Ptr, pFVar1 != (FSlateTextBlockLayout *)0x0)) {
    pFVar5 = pFVar1;
    if (((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FChildren *)(*pcVar2)();
      return pFVar4;
    }
  }
  else if ((((TSharedPtr<FSlateTextLayout,1> *)pFVar5)->Object == (FSlateTextLayout *)0x0) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FChildren *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = FSlateTextLayout::GetChildren((pFVar5->TextLayout).Object);
  return pFVar4;
}

// GetComputedWrappingWidth @ 1429eaa80

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FSlateEditableTextLayout::GetComputedWrappingWidth(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->TextLayout).Object != (FSlateTextLayout *)0x0) {
    return *(float *)&((this->TextLayout).Object)->field_0x98;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return *(float *)&((this->TextLayout).Object)->field_0x98;
}

// GetCurrentTextLine @ 1429eaea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::GetCurrentTextLine(FSlateEditableTextLayout *this,FString *param_1)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = (this->CursorInfo).CursorPosition.LineIndex;
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pFVar2 = (this->TextLayout).Object;
  if ((-1 < iVar6) && (iVar6 < *(int *)&pFVar2->field_0x28)) {
    if (iVar6 < 0) {
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
    puVar3 = *(undefined8 **)((longlong)iVar6 * 0x70 + *(longlong *)&pFVar2->field_0x20);
    iVar1 = *(int *)(puVar3 + 1);
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(param_1,(wchar_t *)*puVar3,iVar6);
  }
  return;
}

// GetCursorLocation @ 1429eb050

/* WARNING: Enum "Type": Some values do not have unique names */

FTextLocation __thiscall FSlateEditableTextLayout::GetCursorLocation(FSlateEditableTextLayout *this)

{
  ECursorAlignment EVar1;
  int iVar2;
  FTextLocation in_RDX;
  int iVar3;
  
  EVar1 = (this->CursorInfo).CursorAlignment;
  iVar2 = (this->CursorInfo).CursorPosition.Offset;
  *(int *)in_RDX = (this->CursorInfo).CursorPosition.LineIndex;
  iVar2 = iVar2 + (uint)(EVar1 == Right);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)((longlong)in_RDX + 4) = iVar3;
  return in_RDX;
}

// GetEditableText @ 1429eb590

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::GetEditableText
          (FSlateEditableTextLayout *this,FText *__return_storage_ptr__)

{
  ITextLayoutMarshaller *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pIVar1 = (this->Marshaller).Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*pcVar2)(pIVar1,&local_18,(this->TextLayout).Object);
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHintText @ 1429eba20

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::GetHintText(FSlateEditableTextLayout *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = FText::GetEmpty();
  if ((this->HintText).bIsSet != false) {
    pFVar2 = TAttribute<FText>::Get(&this->HintText);
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetNumSearchResults @ 1429ec140

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSlateEditableTextLayout::GetNumSearchResults(FSlateEditableTextLayout *this)

{
  return *(int *)&(this->SearchResultToIndexMap).field_0x8 -
         *(int *)&(this->SearchResultToIndexMap).field_0x34;
}

// GetPlainText @ 1429ecd40

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::GetPlainText(FSlateEditableTextLayout *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  FString local_38;
  FTextSelection local_28;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = IsInSlateThread();
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0x15b,
                         L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar2 = (this->TextLayout).Object;
  iVar1 = *(int *)&pFVar2->field_0x28;
  if (iVar1 < 1) {
    pFVar7 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar3 = (pFVar7->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar7->Flags;
  }
  else {
    uVar8 = iVar1 - 1;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    uVar6 = 0;
    if ((int)uVar8 < iVar1) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar1 = *(int *)(*(longlong *)((longlong)(int)uVar8 * 0x70 + *(longlong *)&pFVar2->field_0x20) +
                    8);
    local_28.LocationA.LineIndex = 0;
    local_28.LocationA.Offset = 0;
    local_28.LocationB.Offset = iVar1 - 1;
    if (iVar1 == 0) {
      local_28.LocationB.Offset = 0;
    }
    local_28.LocationB.LineIndex = uVar8;
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar4)();
        return pFVar7;
      }
    }
    FTextLayout::GetSelectionAsText((FTextLayout *)(this->TextLayout).Object,&local_38,&local_28);
    FText::FromString(__return_storage_ptr__,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRunUnderCursor @ 1429ed600

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IRun_const_,1> * __thiscall
FSlateEditableTextLayout::GetRunUnderCursor
          (FSlateEditableTextLayout *this,TSharedPtr<IRun_const_,1> *__return_storage_ptr__)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<IRun_const_,1> *pTVar7;
  TSharedRef<IRun,1> *pTVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FRunModel *this_00;
  longlong lVar12;
  int local_res8;
  int local_resc;
  TSharedRef<IRun,1> local_28;
  
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IRun_const_,1> *)(*pcVar4)();
    return pTVar7;
  }
  iVar1 = (this->CursorInfo).CursorPosition.LineIndex;
  pFVar2 = (this->TextLayout).Object;
  iVar9 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  iVar11 = 0;
  if (0 < iVar9) {
    iVar11 = iVar9;
  }
  if ((-1 < iVar1) && (iVar1 < *(int *)&pFVar2->field_0x28)) {
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<IRun_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
    uVar10 = 0;
    lVar12 = *(longlong *)&pFVar2->field_0x20 + (longlong)iVar1 * 0x70;
    if (0 < *(int *)(lVar12 + 0x30)) {
      do {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar12 + 0x30)) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<IRun_const_,1> *)(*pcVar4)();
          return pTVar7;
        }
        this_00 = (FRunModel *)((longlong)(int)uVar10 * 0x30 + *(longlong *)(lVar12 + 0x28));
        FTextLayout::FRunModel::GetTextRange(this_00);
        if (((local_res8 <= iVar11) && (iVar11 < local_resc)) ||
           (uVar10 == *(int *)(lVar12 + 0x30) - 1U)) {
          pTVar8 = FTextLayout::FRunModel::GetRun(this_00,&local_28);
          __return_storage_ptr__->Object = pTVar8->Object;
          pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          return __return_storage_ptr__;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(lVar12 + 0x30));
    }
  }
  __return_storage_ptr__->Object = (IRun *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetScrollOffset @ 1429ed880

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateEditableTextLayout::GetScrollOffset(FSlateEditableTextLayout *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(TVector2<float>_u_0 *)in_RDX = (this->ScrollOffset).field0_0x0;
  return in_RDX;
}

// GetSearchResultIndex @ 1429ed8a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSlateEditableTextLayout::GetSearchResultIndex(FSlateEditableTextLayout *this)

{
  return this->CurrentSearchResultIndex;
}

// GetSearchText @ 1429ed8d0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::GetSearchText
          (FSlateEditableTextLayout *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->SearchText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->SearchText).Flags;
  return __return_storage_ptr__;
}

// GetSelectedRuns @ 1429ed980

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateEditableTextLayout::GetSelectedRuns
          (FSlateEditableTextLayout *this,
          TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TOptional<FTextLocation> *pTVar1;
  uint uVar2;
  FSlateTextLayout *pFVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TOptional<FTextLocation> *pTVar9;
  TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedRef<IRun,1> *pTVar11;
  int iVar12;
  int iVar13;
  FSharedReferencer<1> FVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FRunModel *this_00;
  uint local_res8;
  uint local_res18;
  uint local_res20;
  uint local_108;
  int iStack_104;
  int local_f8;
  int iStack_f4;
  IRun *local_e8;
  TReferenceControllerBase<1> *local_e0;
  IRun *local_d8;
  TReferenceControllerBase<1> *local_d0;
  IRun *local_c8;
  TReferenceControllerBase<1> *local_c0;
  IRun *local_b8;
  TReferenceControllerBase<1> *local_b0;
  longlong *local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  TSharedRef<IRun,1> local_88;
  TSharedRef<IRun,1> local_78;
  TSharedRef<IRun,1> local_68;
  TSharedRef<IRun,1> local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_a0._0_4_ = (this->CursorInfo).CursorPosition.LineIndex;
  pTVar1 = &this->SelectionStart;
  iVar15 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  local_a0._4_4_ = 0;
  if (0 < iVar15) {
    local_a0._4_4_ = iVar15;
  }
  pTVar9 = (TOptional<FTextLocation> *)local_a0;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar9 = pTVar1;
  }
  if (((pTVar9->TypedValue).LineIndex != local_a0._0_4_) ||
     ((pTVar9->TypedValue).Offset != local_a0._4_4_)) {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    uVar2 = (this->CursorInfo).CursorPosition.LineIndex;
    pFVar3 = (this->TextLayout).Object;
    iVar16 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    iVar15 = 0;
    if (0 < iVar16) {
      iVar15 = iVar16;
    }
    if (((this->SelectionStart).bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    iVar16 = (pTVar1->TypedValue).LineIndex;
    if ((((-1 < iVar16) && (iVar16 < *(int *)&pFVar3->field_0x28)) && (-1 < (int)uVar2)) &&
       ((int)uVar2 < *(int *)&pFVar3->field_0x28)) {
      if (((this->SelectionStart).bIsSet == false) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar10;
      }
      local_108 = (pTVar1->TypedValue).LineIndex;
      iStack_104 = (pTVar1->TypedValue).Offset;
      local_res8 = uVar2;
      local_res18 = uVar2;
      if (local_108 == uVar2) {
        if (iStack_104 < iVar15) {
          local_res8 = local_108;
        }
        else if (iVar15 < iStack_104) {
          local_res18 = local_108;
        }
      }
      else {
        local_res8 = local_108;
        if (((int)uVar2 <= (int)local_108) && (local_res8 = uVar2, (int)uVar2 < (int)local_108)) {
          local_res18 = local_108;
        }
      }
      local_a0._8_8_ = SEXT48((int)local_res8);
      local_90 = (longlong)(int)local_res18;
      uVar5 = local_res8;
      if ((int)local_res8 <= local_90) {
        do {
          uVar6 = local_a0._8_8_;
          uVar8 = 0;
          if ((int)uVar5 < *(int *)&pFVar3->field_0x28) {
            uVar8 = ~uVar5 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar10;
          }
          local_res20 = 0;
          local_a8 = (longlong *)(uVar6 * 0x70 + *(longlong *)&pFVar3->field_0x20);
          if (0 < (int)local_a8[6]) {
            do {
              uVar8 = 0;
              if ((int)local_res20 < (int)local_a8[6]) {
                uVar8 = ~local_res20 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)
                          (*pcVar4)();
                return pTVar10;
              }
              this_00 = (FRunModel *)((longlong)(int)local_res20 * 0x30 + local_a8[5]);
              if ((uVar5 == local_res8) || (uVar5 == local_res18)) {
                FTextLayout::FRunModel::GetTextRange(this_00);
                if (uVar5 != local_res8) {
                  if (uVar5 != local_res18) goto LAB_1429ee066;
                  bVar7 = SBORROW4(local_108,uVar2);
                  iVar16 = local_108 - uVar2;
                  if (local_108 == uVar2) {
                    bVar7 = SBORROW4(iStack_104,iVar15);
                    iVar16 = iStack_104 - iVar15;
                  }
                  iVar13 = iVar15;
                  if ((local_108 != uVar2 || iStack_104 != iVar15) && bVar7 == iVar16 < 0) {
                    iVar13 = iStack_104;
                  }
                  iVar16 = 0;
                  if (0 < local_f8) {
                    iVar16 = local_f8;
                  }
                  if (iStack_f4 < iVar13) {
                    iVar13 = iStack_f4;
                  }
                  if ((iVar13 <= iVar16) || (iVar13 - iVar16 < 1)) goto LAB_1429ee1ab;
                  pTVar11 = FTextLayout::FRunModel::GetRun(this_00,&local_68);
                  local_c8 = pTVar11->Object;
                  local_c0 = (pTVar11->SharedReferenceCount).ReferenceController;
                  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_c0->SharedReferenceCount =
                         (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
                  if (((pFVar17 <= (FScriptContainerElement *)&local_c8) &&
                      ((FScriptContainerElement *)&local_c8 <
                       pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)
                              (*pcVar4)();
                    return pTVar10;
                  }
                  iVar16 = __return_storage_ptr__->ArrayNum;
                  if (iVar16 == __return_storage_ptr__->ArrayMax) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&__return_storage_ptr__->AllocatorInstance,
                                        &__return_storage_ptr__->ArrayMax);
                  }
                  __return_storage_ptr__->ArrayNum = iVar16 + 1;
                  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data +
                            (longlong)iVar16 * 0x10;
                  *(IRun **)pFVar17 = local_c8;
                  *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_c0;
                  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_c0->SharedReferenceCount =
                         (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_c0);
                  FVar14.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
                  goto LAB_1429ee19f;
                }
                if (uVar5 == local_res18) {
LAB_1429ee066:
                  bVar7 = SBORROW4(local_108,uVar2);
                  iVar16 = local_108 - uVar2;
                  if (local_108 == uVar2) {
                    bVar7 = SBORROW4(iStack_104,iVar15);
                    iVar16 = iStack_104 - iVar15;
                  }
                  iVar13 = iVar15;
                  if ((local_108 != uVar2 || iStack_104 != iVar15) && bVar7 == iVar16 < 0) {
                    iVar13 = iStack_104;
                  }
                  bVar7 = SBORROW4(local_108,uVar2);
                  iVar16 = local_108 - uVar2;
                  if (local_108 == uVar2) {
                    bVar7 = SBORROW4(iStack_104,iVar15);
                    iVar16 = iStack_104 - iVar15;
                  }
                  iVar12 = iVar15;
                  if (bVar7 != iVar16 < 0) {
                    iVar12 = iStack_104;
                  }
                  if (iVar12 < local_f8) {
                    iVar12 = local_f8;
                  }
                  if (iStack_f4 < iVar13) {
                    iVar13 = iStack_f4;
                  }
                  if ((iVar12 < iVar13) && (0 < iVar13 - iVar12)) {
                    pTVar11 = FTextLayout::FRunModel::GetRun(this_00,&local_58);
                    local_b8 = pTVar11->Object;
                    local_b0 = (pTVar11->SharedReferenceCount).ReferenceController;
                    if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_b0->SharedReferenceCount =
                           (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
                    if (((pFVar17 <= (FScriptContainerElement *)&local_b8) &&
                        ((FScriptContainerElement *)&local_b8 <
                         pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)
                                (*pcVar4)();
                      return pTVar10;
                    }
                    iVar16 = __return_storage_ptr__->ArrayNum;
                    if (iVar16 == __return_storage_ptr__->ArrayMax) {
                      iVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&__return_storage_ptr__->AllocatorInstance,
                                          &__return_storage_ptr__->ArrayMax);
                    }
                    __return_storage_ptr__->ArrayNum = iVar16 + 1;
                    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data +
                              (longlong)iVar16 * 0x10;
                    *(IRun **)pFVar17 = local_b8;
                    *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_b0;
                    if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_b0->SharedReferenceCount =
                           (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_b0);
                    FVar14.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
                    goto LAB_1429ee19f;
                  }
                }
                else {
                  iVar16 = *(int *)(*local_a8 + 8) + -1;
                  if (*(int *)(*local_a8 + 8) == 0) {
                    iVar16 = 0;
                  }
                  bVar7 = SBORROW4(local_108,uVar2);
                  iVar13 = local_108 - uVar2;
                  if (local_108 == uVar2) {
                    bVar7 = SBORROW4(iStack_104,iVar15);
                    iVar13 = iStack_104 - iVar15;
                  }
                  iVar12 = iVar15;
                  if (bVar7 != iVar13 < 0) {
                    iVar12 = iStack_104;
                  }
                  if (iVar12 < local_f8) {
                    iVar12 = local_f8;
                  }
                  if (iStack_f4 < iVar16) {
                    iVar16 = iStack_f4;
                  }
                  if ((iVar12 < iVar16) && (0 < iVar16 - iVar12)) {
                    pTVar11 = FTextLayout::FRunModel::GetRun(this_00,&local_78);
                    local_d8 = pTVar11->Object;
                    local_d0 = (pTVar11->SharedReferenceCount).ReferenceController;
                    if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_d0->SharedReferenceCount =
                           (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
                    if (((pFVar17 <= (FScriptContainerElement *)&local_d8) &&
                        ((FScriptContainerElement *)&local_d8 <
                         pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)
                                (*pcVar4)();
                      return pTVar10;
                    }
                    iVar16 = __return_storage_ptr__->ArrayNum;
                    if (iVar16 == __return_storage_ptr__->ArrayMax) {
                      iVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&__return_storage_ptr__->AllocatorInstance,
                                          &__return_storage_ptr__->ArrayMax);
                    }
                    __return_storage_ptr__->ArrayNum = iVar16 + 1;
                    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data +
                              (longlong)iVar16 * 0x10;
                    *(IRun **)pFVar17 = local_d8;
                    *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_d0;
                    if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_d0->SharedReferenceCount =
                           (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_d0);
                    FVar14.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
                    goto LAB_1429ee19f;
                  }
                }
              }
              else {
                pTVar11 = FTextLayout::FRunModel::GetRun(this_00,&local_88);
                local_e8 = pTVar11->Object;
                local_e0 = (pTVar11->SharedReferenceCount).ReferenceController;
                if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_e0->SharedReferenceCount =
                       (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar17 <= (FScriptContainerElement *)&local_e8) &&
                    ((FScriptContainerElement *)&local_e8 <
                     pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  pTVar10 = (TArray<TSharedRef<IRun_const_,1>,TSizedDefaultAllocator<32>_> *)
                            (*pcVar4)();
                  return pTVar10;
                }
                iVar16 = __return_storage_ptr__->ArrayNum;
                if (iVar16 == __return_storage_ptr__->ArrayMax) {
                  iVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&__return_storage_ptr__->AllocatorInstance,
                                      &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar16 + 1;
                pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar16 * 0x10
                ;
                *(IRun **)pFVar17 = local_e8;
                *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_e0;
                if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_e0->SharedReferenceCount =
                       (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_e0);
                FVar14.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
LAB_1429ee19f:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar14.ReferenceController);
              }
LAB_1429ee1ab:
              local_res20 = local_res20 + 1;
            } while ((int)local_res20 < (int)local_a8[6]);
          }
          local_a0._8_8_ = local_a0._8_8_ + 1;
          uVar5 = uVar5 + 1;
        } while ((longlong)local_a0._8_8_ <= local_90);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSelectedText @ 1429ee240

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::GetSelectedText
          (FSlateEditableTextLayout *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FTextLocation *pFVar5;
  int iVar6;
  undefined1 local_res8 [16];
  FTextLocation local_res18;
  FTextLocation local_res20;
  FString local_38;
  FTextSelection local_28;
  
  local_res20.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  iVar6 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res20.Offset = 0;
  if (0 < iVar6) {
    local_res20.Offset = iVar6;
  }
  bVar3 = (this->SelectionStart).bIsSet;
  pFVar5 = &local_res20;
  if (bVar3 != false) {
    pFVar5 = &(this->SelectionStart).TypedValue;
  }
  if (((*pFVar5).LineIndex == local_res20.LineIndex) && ((*pFVar5).Offset == local_res20.Offset)) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    return __return_storage_ptr__;
  }
  local_res18.LineIndex = local_res20.LineIndex;
  local_res18.Offset = local_res20.Offset;
  pFVar5 = &local_res18;
  if (bVar3 != false) {
    pFVar5 = &(this->SelectionStart).TypedValue;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.LocationA = *pFVar5;
  local_28.LocationB.Offset = local_res20.Offset;
  local_28.LocationB.LineIndex = local_res20.LineIndex;
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  FTextLayout::GetSelectionAsText((FTextLayout *)(this->TextLayout).Object,&local_38,&local_28);
  FText::FromString(__return_storage_ptr__,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSelection @ 1429ee3b0

/* WARNING: Enum "Type": Some values do not have unique names */

FTextSelection * __thiscall
FSlateEditableTextLayout::GetSelection
          (FSlateEditableTextLayout *this,FTextSelection *__return_storage_ptr__)

{
  FTextLocation FVar1;
  TOptional<FTextLocation> *pTVar2;
  int iVar3;
  TOptional<FTextLocation> local_res8 [2];
  
  local_res8[0].TypedValue.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  iVar3 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res8[0].TypedValue.Offset = 0;
  if (0 < iVar3) {
    local_res8[0].TypedValue.Offset = iVar3;
  }
  pTVar2 = local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar2 = &this->SelectionStart;
  }
  __return_storage_ptr__->LocationA = pTVar2->TypedValue;
  FVar1.Offset = local_res8[0].TypedValue.Offset;
  FVar1.LineIndex = local_res8[0].TypedValue.LineIndex;
  __return_storage_ptr__->LocationB = FVar1;
  return __return_storage_ptr__;
}

// GetSize @ 1429ee830

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall FSlateEditableTextLayout::GetSize(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D in_RDX;
  TVector2<double> local_18;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FDeprecateSlateVector2D)(*pcVar1)();
      return FVar3;
    }
  }
  pTVar4 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,&local_18);
  *(ulonglong *)in_RDX =
       CONCAT44((float)(pTVar4->field0_0x0)._s_0.Y,(float)(pTVar4->field0_0x0)._s_0.X);
  return in_RDX;
}

// GetText @ 1429eebf0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateEditableTextLayout::GetText(FSlateEditableTextLayout *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInSlateThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0x10b,
                         L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  pFVar4 = FText::GetEmpty();
  if ((this->BoundText).bIsSet != false) {
    pFVar4 = TAttribute<FText>::Get(&this->BoundText);
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// GetTextInputMethodContext @ 1429ef230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITextInputMethodContext,1> * __thiscall
FSlateEditableTextLayout::GetTextInputMethodContext
          (FSlateEditableTextLayout *this,
          TSharedRef<ITextInputMethodContext,1> *__return_storage_ptr__)

{
  FTextInputMethodContext *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<ITextInputMethodContext,1> *pTVar5;
  
  if ((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<ITextInputMethodContext,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->TextInputMethodContext).Object;
  pTVar2 = (this->TextInputMethodContext).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FTextInputMethodContext *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<ITextInputMethodContext,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = (ITextInputMethodContext *)pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetTextLine @ 1429ef3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::GetTextLine(FSlateEditableTextLayout *this,int param_1,FString *param_2)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pFVar2 = (this->TextLayout).Object;
  if ((-1 < param_1) && (param_1 < *(int *)&pFVar2->field_0x28)) {
    if (param_1 < 0) {
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
    puVar3 = *(undefined8 **)((longlong)param_1 * 0x70 + *(longlong *)&pFVar2->field_0x20);
    iVar1 = *(int *)(puVar3 + 1);
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(param_2,(wchar_t *)*puVar3,iVar6);
  }
  return;
}

// GetTextLineCount @ 1429ef570

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSlateEditableTextLayout::GetTextLineCount(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FTextLayout::GetLineCount((FTextLayout *)(this->TextLayout).Object);
  return iVar3;
}

// GetTextStyle @ 1429ef610

/* WARNING: Enum "Type": Some values do not have unique names */

FTextBlockStyle * __thiscall FSlateEditableTextLayout::GetTextStyle(FSlateEditableTextLayout *this)

{
  return &this->TextStyle;
}

// GetVirtualKeyboardEntry @ 1429efae0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IVirtualKeyboardEntry,1> * __thiscall
FSlateEditableTextLayout::GetVirtualKeyboardEntry
          (FSlateEditableTextLayout *this,
          TSharedRef<IVirtualKeyboardEntry,1> *__return_storage_ptr__)

{
  FVirtualKeyboardEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<IVirtualKeyboardEntry,1> *pTVar5;
  
  if ((this->VirtualKeyboardEntry).Object == (FVirtualKeyboardEntry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<IVirtualKeyboardEntry,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->VirtualKeyboardEntry).Object;
  pTVar2 = (this->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FVirtualKeyboardEntry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<IVirtualKeyboardEntry,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = (IVirtualKeyboardEntry *)pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GoTo @ 1429f0100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::GoTo(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  FSlateTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_res8;
  int local_resc;
  undefined1 local_18 [16];
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  iVar5 = param_1->LineIndex;
  pFVar1 = (this->TextLayout).Object;
  if ((-1 < iVar5) && (iVar5 < *(int *)&pFVar1->field_0x28)) {
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = *(int *)(*(longlong *)((longlong)iVar5 * 0x70 + *(longlong *)&pFVar1->field_0x20) + 8);
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (param_1->Offset <= iVar4) {
      if (((TOptional<FTextLocation> *)local_18 != &this->SelectionStart) &&
         ((this->SelectionStart).bIsSet != false)) {
        (this->SelectionStart).bIsSet = false;
      }
      if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,param_1);
      iVar5 = (this->CursorInfo).CursorPosition.Offset +
              (uint)((this->CursorInfo).CursorAlignment == Right);
      local_resc = 0;
      if (0 < iVar5) {
        local_resc = iVar5;
      }
      local_res8 = (this->CursorInfo).CursorPosition.LineIndex;
      (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_res8);
      UpdatePreferredCursorScreenOffsetInLine(this);
      UpdateCursorHighlight(this);
    }
  }
  return;
}

// GoTo @ 1429f0290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::GoTo(FSlateEditableTextLayout *this,ETextLocation param_1)

{
  JumpTo(this,param_1,MoveCursor);
  return;
}

// HandleBackspace @ 1429f0450

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::HandleBackspace(FSlateEditableTextLayout *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FSlateTextLayout *pFVar8;
  int iVar9;
  FTextSelection *pFVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FTextLocation local_res8;
  int local_res10;
  int iStackX_14;
  uint local_res18;
  uint uStackX_1c;
  FTextLocation local_res20;
  undefined1 local_60 [16];
  FTextSelection local_50;
  
  cVar3 = (**(code **)*this->OwnerWidget)();
  if (cVar3 != '\0') {
    return false;
  }
  bVar4 = AnyTextSelected(this);
  if (!bVar4) {
    iVar9 = (this->CursorInfo).CursorPosition.Offset +
            (uint)((this->CursorInfo).CursorAlignment == Right);
    iVar1 = (this->CursorInfo).CursorPosition.LineIndex;
    iVar12 = 0;
    if (0 < iVar9) {
      iVar12 = iVar9;
    }
    local_res8.Offset = iVar12;
    local_res8.LineIndex = iVar1;
    local_res10 = iVar1;
    iStackX_14 = iVar12;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    uVar11 = 0;
    if (iVar12 == 0) {
      if (0 < iVar1) {
        pFVar8 = (this->TextLayout).Object;
        uVar13 = iVar1 - 1;
        uVar6 = uVar11;
        if ((int)uVar13 < *(int *)&pFVar8->field_0x28) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)(int)uVar13 * 0x70 + *(longlong *)&pFVar8->field_0x20) + 8);
        pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
        bVar4 = FTextLayout::JoinLineWithNextLine((FTextLayout *)pFVar8,uVar13);
        if (bVar4) {
          uStackX_1c = iVar1 - 1;
          if (iVar1 == 0) {
            uStackX_1c = uVar11;
          }
          local_res8.Offset = uStackX_1c;
          local_res8.LineIndex = uVar13;
          local_res18 = uVar13;
        }
      }
    }
    else {
      pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
      local_res20.Offset = uVar11;
      if (0 < (int)(iVar12 - 1U)) {
        local_res20.Offset = iVar12 - 1U;
      }
      local_res20.LineIndex = iVar1;
      FTextLayout::GetGraphemeAt((FTextLayout *)pFVar8,&local_50,&local_res20);
      bVar4 = SBORROW4(local_50.LocationA.LineIndex,local_50.LocationB.LineIndex);
      iVar9 = local_50.LocationA.LineIndex - local_50.LocationB.LineIndex;
      if (local_50.LocationA.LineIndex == local_50.LocationB.LineIndex) {
        bVar4 = SBORROW4(local_50.LocationA.Offset,local_50.LocationB.Offset);
        iVar9 = local_50.LocationA.Offset - local_50.LocationB.Offset;
      }
      iVar14 = local_50.LocationB.Offset;
      if ((local_50.LocationA.LineIndex != local_50.LocationB.LineIndex ||
          local_50.LocationA.Offset != local_50.LocationB.Offset) && bVar4 == iVar9 < 0) {
        iVar14 = local_50.LocationA.Offset;
      }
      bVar4 = SBORROW4(local_50.LocationA.LineIndex,local_50.LocationB.LineIndex);
      iVar9 = local_50.LocationA.LineIndex - local_50.LocationB.LineIndex;
      if (local_50.LocationA.LineIndex == local_50.LocationB.LineIndex) {
        bVar4 = SBORROW4(local_50.LocationA.Offset,local_50.LocationB.Offset);
        iVar9 = local_50.LocationA.Offset - local_50.LocationB.Offset;
      }
      iVar7 = local_50.LocationB.Offset;
      if (bVar4 != iVar9 < 0) {
        iVar7 = local_50.LocationA.Offset;
      }
      pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
      pFVar10 = &local_50;
      if (local_50.LocationA.LineIndex == local_50.LocationB.LineIndex) {
        if (local_50.LocationB.Offset <= local_50.LocationA.Offset) {
          pFVar10 = (FTextSelection *)&local_50.LocationB;
        }
      }
      else if (local_50.LocationB.LineIndex <= local_50.LocationA.LineIndex) {
        pFVar10 = (FTextSelection *)&local_50.LocationB;
      }
      bVar4 = FTextLayout::RemoveAt((FTextLayout *)pFVar8,&pFVar10->LocationA,iVar14 - iVar7);
      if (bVar4) {
        uVar13 = iVar12 - (iVar14 - iVar7);
        if (0 < (int)uVar13) {
          uVar11 = uVar13;
        }
        local_res8.Offset = uVar11;
      }
    }
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_res8);
    if (((TOptional<FTextLocation> *)local_60 != &this->SelectionStart) &&
       ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    UpdateCursorHighlight(this);
    return true;
  }
  DeleteSelectedText(this);
  return true;
}

// HandleCarriageReturn @ 1429f0740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::HandleCarriageReturn
          (FSlateEditableTextLayout *this,bool param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  TOptional<EFocusCause> TVar5;
  undefined6 extraout_var;
  FSlateApplication *this_00;
  undefined7 in_register_00000011;
  undefined4 in_register_00000084;
  undefined1 local_res8 [8];
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  cVar2 = (**(code **)*this->OwnerWidget)
                    (this->OwnerWidget,CONCAT71(in_register_00000011,param_1),
                     CONCAT44(in_register_00000084,param_2));
  if (cVar2 == '\0') {
    cVar2 = (**(code **)((longlong)*this->OwnerWidget + 0x10))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)((longlong)*this->OwnerWidget + 0x50))(), cVar2 != '\0')) {
      InsertNewLineAtCursorImpl(this);
      return true;
    }
    if (!param_1) {
      ClearUndoStates(this);
      UpdateTextChangedByVirtualKeyboard(this);
      GetEditableText(this,&local_18);
      (**(code **)((longlong)*this->OwnerWidget + 0xb8))(this->OwnerWidget,&local_18,1);
      LoadText(this);
      cVar2 = (**(code **)((longlong)*this->OwnerWidget + 0x40))();
      if (cVar2 != '\0') {
        SelectAllText(this);
      }
      cVar2 = (**(code **)((longlong)*this->OwnerWidget + 0x38))();
      if (cVar2 != '\0') {
        (**(code **)((longlong)*this->OwnerWidget + 0x98))(this->OwnerWidget,&local_28);
        if (local_28 != (SWidget *)0x0) {
          if ((local_28 == (SWidget *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          TVar5 = SWidget::HasUserFocus(local_28,(int)local_res8);
          if (*(char *)(CONCAT62(extraout_var,TVar5) + 1) != '\0') {
            this_00 = FSlateApplication::Get();
            FSlateApplication::ClearKeyboardFocus(this_00,Cleared);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return true;
    }
  }
  return false;
}

// HandleDelete @ 1429f08c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::HandleDelete(FSlateEditableTextLayout *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FSlateTextLayout *pFVar8;
  uint uVar9;
  FTextSelection *pFVar10;
  int iVar11;
  longlong lVar12;
  FTextLocation local_res8;
  FTextLocation local_res10;
  undefined1 local_48 [16];
  FTextSelection local_38;
  
  cVar3 = (**(code **)*this->OwnerWidget)();
  if (cVar3 != '\0') {
    return false;
  }
  bVar4 = AnyTextSelected(this);
  if (bVar4) {
    DeleteSelectedText(this);
    return true;
  }
  local_res8.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  uVar9 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  uVar6 = 0;
  local_res8.Offset = uVar6;
  if (0 < (int)uVar9) {
    local_res8.Offset = uVar9;
  }
  local_res10.Offset = local_res8.Offset;
  local_res10.LineIndex = local_res8.LineIndex;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  lVar12 = (longlong)local_res8.LineIndex;
  pFVar8 = (this->TextLayout).Object;
  uVar9 = uVar6;
  if (local_res8.LineIndex < *(int *)&pFVar8->field_0x28) {
    uVar9 = (uint)~local_res8.LineIndex >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar1 = *(int *)(*(longlong *)(lVar12 * 0x70 + *(longlong *)&pFVar8->field_0x20) + 8);
  uVar9 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar9 = uVar6;
  }
  if (uVar9 == 0) {
    if ((-1 < (int)(local_res8.LineIndex + 1U)) &&
       ((int)(local_res8.LineIndex + 1U) < *(int *)&pFVar8->field_0x28)) {
      pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
      FTextLayout::RemoveLine((FTextLayout *)pFVar8,local_res8.LineIndex);
    }
  }
  else if (local_res8.Offset < (int)uVar9) {
    pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    FTextLayout::GetGraphemeAt((FTextLayout *)pFVar8,&local_38,&local_res8);
    bVar4 = SBORROW4(local_38.LocationA.LineIndex,local_38.LocationB.LineIndex);
    iVar1 = local_38.LocationA.LineIndex - local_38.LocationB.LineIndex;
    if (local_38.LocationA.LineIndex == local_38.LocationB.LineIndex) {
      bVar4 = SBORROW4(local_38.LocationA.Offset,local_38.LocationB.Offset);
      iVar1 = local_38.LocationA.Offset - local_38.LocationB.Offset;
    }
    iVar11 = local_38.LocationB.Offset;
    if ((local_38.LocationA.LineIndex != local_38.LocationB.LineIndex ||
        local_38.LocationA.Offset != local_38.LocationB.Offset) && bVar4 == iVar1 < 0) {
      iVar11 = local_38.LocationA.Offset;
    }
    bVar4 = SBORROW4(local_38.LocationA.LineIndex,local_38.LocationB.LineIndex);
    iVar1 = local_38.LocationA.LineIndex - local_38.LocationB.LineIndex;
    if (local_38.LocationA.LineIndex == local_38.LocationB.LineIndex) {
      bVar4 = SBORROW4(local_38.LocationA.Offset,local_38.LocationB.Offset);
      iVar1 = local_38.LocationA.Offset - local_38.LocationB.Offset;
    }
    iVar7 = local_38.LocationB.Offset;
    if (bVar4 != iVar1 < 0) {
      iVar7 = local_38.LocationA.Offset;
    }
    pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    pFVar10 = &local_38;
    if (local_38.LocationA.LineIndex == local_38.LocationB.LineIndex) {
      if (local_38.LocationB.Offset <= local_38.LocationA.Offset) {
        pFVar10 = (FTextSelection *)&local_38.LocationB;
      }
    }
    else if (local_38.LocationB.LineIndex <= local_38.LocationA.LineIndex) {
      pFVar10 = (FTextSelection *)&local_38.LocationB;
    }
    FTextLayout::RemoveAt((FTextLayout *)pFVar8,&pFVar10->LocationA,iVar11 - iVar7);
  }
  else if ((-1 < (int)(local_res8.LineIndex + 1U)) &&
          ((int)(local_res8.LineIndex + 1U) < *(int *)&pFVar8->field_0x28)) {
    pFVar8 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    FTextLayout::JoinLineWithNextLine((FTextLayout *)pFVar8,local_res8.LineIndex);
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
            (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_res10);
  if (((TOptional<FTextLocation> *)local_48 != &this->SelectionStart) &&
     ((this->SelectionStart).bIsSet != false)) {
    (this->SelectionStart).bIsSet = false;
  }
  UpdateCursorHighlight(this);
  return true;
}

// HandleEscape @ 1429f0b60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::HandleEscape(FSlateEditableTextLayout *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  bVar4 = FText::IsEmpty(&this->SearchText);
  if (!bVar4) {
    pFVar7 = FText::GetEmpty();
    pIVar1 = (this->SearchText).TextData.Reference;
    pIVar2 = (pFVar7->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (this->SearchText).TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (this->SearchText).Flags = pFVar7->Flags;
    UpdateCursorHighlight(this);
    return true;
  }
  bVar4 = AnyTextSelected(this);
  if (bVar4) {
    if (((TOptional<FTextLocation> *)local_18 != &this->SelectionStart) &&
       ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    UpdateCursorHighlight(this);
    return true;
  }
  cVar5 = (**(code **)*this->OwnerWidget)();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)((longlong)*this->OwnerWidget + 0x30))();
    if (cVar5 != '\0') {
      bVar4 = HasTextChangedFromOriginal(this);
      if (bVar4) {
        bVar4 = HasTextChangedFromOriginal(this);
        if (bVar4) {
          SetEditableText(this,&(this->OriginalText).Text,false);
          if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
          (**(code **)((longlong)*this->OwnerWidget + 0xb8))
                    (this->OwnerWidget,&this->OriginalText,3);
        }
        return true;
      }
    }
  }
  return false;
}

// HandleFocusLost @ 1429f0cf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::HandleFocusLost(FSlateEditableTextLayout *this,FFocusEvent *param_1)

{
  EFocusCause EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FSlateApplication *this_00;
  longlong *plVar7;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *pTVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 local_68 [16];
  FTextInputMethodContext *local_58;
  TReferenceControllerBase<1> *local_50;
  FText local_48;
  TSharedPtr<IVirtualKeyboardEntry,1> local_38;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (((this->ActiveContextMenu).bIsPendingSummon == false) &&
     ((((this->ActiveContextMenu).ActiveMenu.Object == (IMenu *)0x0 ||
       (pTVar2 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController,
       pTVar2 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar2->SharedReferenceCount < 1))))
  {
    bVar4 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard();
    if (bVar4) {
      this_00 = FSlateApplication::Get();
      local_38.Object = (IVirtualKeyboardEntry *)0x0;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FSlateApplication::ShowVirtualKeyboard(this_00,false,param_1->UserIndex,&local_38);
    }
    else {
      FSlateApplication::Get();
      if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar7 = (longlong *)
               (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe8))
                         ();
      if ((plVar7 != (longlong *)0x0) && (this->bHasRegisteredTextInputMethodContext != false)) {
        pcVar3 = *(code **)(*plVar7 + 0x28);
        pTVar8 = TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::ToSharedRef
                           (&this->TextInputMethodContext,&local_28);
        local_58 = pTVar8->Object;
        local_50 = (pTVar8->SharedReferenceCount).ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar3)(plVar7,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
    }
    cVar6 = (**(code **)((longlong)*this->OwnerWidget + 0x28))();
    if ((((cVar6 != '\0') && (param_1->Cause != WindowActivate)) &&
        ((TOptional<FTextLocation> *)local_68 != &this->SelectionStart)) &&
       ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    cVar6 = (**(code **)*this->OwnerWidget)();
    if (cVar6 == '\0') {
      EVar1 = param_1->Cause;
      if ((EVar1 == Mouse) || (EVar1 == Navigation)) {
        uVar10 = 2;
      }
      else if (EVar1 == Cleared) {
        uVar10 = 3;
      }
      else {
        uVar10 = 0;
      }
      ClearUndoStates(this);
      GetEditableText(this,&local_48);
      (**(code **)((longlong)*this->OwnerWidget + 0xb8))(this->OwnerWidget,&local_48,uVar10);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    LoadText(this);
    UpdateCursorHighlight(this);
    if ((this->PositionToScrollIntoView).bIsSet != false) {
      (this->PositionToScrollIntoView).bIsSet = false;
    }
    puVar9 = (undefined8 *)
             (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
    SWidget::Invalidate((SWidget *)*puVar9,LayoutAndVolatility);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return true;
  }
  return false;
}

// HandleFocusReceived @ 1429f0f30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::HandleFocusReceived(FSlateEditableTextLayout *this,FFocusEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ISlateEditableTextWidget *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FSlateApplication *pFVar6;
  undefined8 *puVar7;
  FText *pFVar8;
  double dVar9;
  TSharedPtr<IVirtualKeyboardEntry,1> local_18;
  
  if (((this->ActiveContextMenu).bIsPendingSummon != false) ||
     ((((this->ActiveContextMenu).ActiveMenu.Object != (IMenu *)0x0 &&
       (pTVar1 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController,
       pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount))))
  {
    return false;
  }
  (**(code **)((longlong)*this->OwnerWidget + 0x68))();
  bVar4 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard();
  if (!bVar4) {
    EnableTextInputMethodContext(this);
    goto LAB_1429f0ff9;
  }
  cVar5 = (**(code **)*this->OwnerWidget)();
  if (cVar5 != '\0') goto LAB_1429f0ff9;
  if (param_1->Cause == Mouse) {
    cVar5 = (**(code **)((longlong)*this->OwnerWidget + 0x80))();
    if (cVar5 != '\0') goto LAB_1429f0fa6;
  }
  else {
LAB_1429f0fa6:
    cVar5 = (**(code **)((longlong)*this->OwnerWidget + 0x80))();
    if (cVar5 != '\x01') goto LAB_1429f0ff9;
  }
  pFVar6 = FSlateApplication::Get();
  local_18.Object = (IVirtualKeyboardEntry *)(this->VirtualKeyboardEntry).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::ShowVirtualKeyboard(pFVar6,true,param_1->UserIndex,&local_18);
LAB_1429f0ff9:
  LoadText(this);
  MakeUndoState(this,&this->OriginalText);
  if ((param_1->Cause != Mouse) && (param_1->Cause != OtherWidgetLostFocus)) {
    cVar5 = (**(code **)((longlong)*this->OwnerWidget + 0x18))();
    if (cVar5 != '\0') {
      JumpTo(this,EndOfDocument,MoveCursor);
    }
  }
  if (param_1->Cause != Mouse) {
    cVar5 = (**(code **)((longlong)*this->OwnerWidget + 0x20))();
    if (cVar5 != '\0') {
      SelectAllText(this);
    }
  }
  UpdateCursorHighlight(this);
  if ((this->PositionToScrollIntoView).bIsSet != false) {
    (this->PositionToScrollIntoView).bIsSet = false;
  }
  puVar7 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,&local_18);
  SWidget::Invalidate((SWidget *)*puVar7,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar6 = FSlateApplication::Get();
  dVar9 = (double)(**(code **)(*(longlong *)pFVar6 + 0x60))(pFVar6);
  pIVar2 = this->OwnerWidget;
  (this->CursorInfo).LastCursorInteractionTime = dVar9;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0xa8);
  pFVar8 = FText::GetEmpty();
  if ((this->BoundText).bIsSet != false) {
    pFVar8 = TAttribute<FText>::Get(&this->BoundText);
  }
  (*pcVar3)(pIVar2,pFVar8);
  return true;
}

// HandleKeyChar @ 1429f1100

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleKeyChar
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FCharacterEvent *param_1)

{
  byte bVar1;
  wchar_t wVar2;
  char cVar3;
  bool bVar4;
  FReply *pFVar5;
  FReply local_178;
  FReply local_c0;
  
  wVar2 = param_1->Character;
  switch(wVar2) {
  case L'\x01':
  case L'\x03':
  case L'\n':
  case L'\r':
  case L'\x16':
  case L'\x18':
  case L'\x19':
  case L'\x1a':
  case L'\x1b':
  case L'\x7f':
    bVar4 = true;
    goto LAB_1429f126f;
  default:
    cVar3 = (**(code **)*this->OwnerWidget)();
    if ((cVar3 == '\0') &&
       (cVar3 = (**(code **)((longlong)*this->OwnerWidget + 0x58))(), cVar3 != '\0')) {
      BeginEditTransation(this);
      bVar4 = HandleTypeChar(this,wVar2);
      pFVar5 = &local_c0;
      if (bVar4) {
        pFVar5 = &local_178;
      }
      FReply::FReply(pFVar5,bVar4);
      FReply::FReply(__return_storage_ptr__,pFVar5);
      if ((!bVar4 + 1U & 2) != 0) {
        FReply::~FReply(&local_c0);
      }
      if (bVar4) {
        FReply::~FReply(&local_178);
      }
LAB_1429f1263:
      EndEditTransaction(this);
      return __return_storage_ptr__;
    }
    break;
  case L'\b':
    cVar3 = (**(code **)*this->OwnerWidget)();
    if (cVar3 == '\0') {
      BeginEditTransation(this);
      bVar4 = HandleBackspace(this);
      pFVar5 = &local_178;
      if (bVar4) {
        pFVar5 = &local_c0;
      }
      bVar1 = !bVar4 * '\x04' + 4;
      FReply::FReply(pFVar5,bVar4);
      FReply::FReply(__return_storage_ptr__,pFVar5);
      if ((bVar1 & 8) != 0) {
        FReply::~FReply(&local_178);
      }
      if ((bVar1 & 4) != 0) {
        FReply::~FReply(&local_c0);
        EndEditTransaction(this);
        return __return_storage_ptr__;
      }
      goto LAB_1429f1263;
    }
  }
  bVar4 = false;
LAB_1429f126f:
  FReply::FReply(__return_storage_ptr__,bVar4);
  return __return_storage_ptr__;
}

// HandleKeyDown @ 1429f1330

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleKeyDown
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FKeyEvent *param_1)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  FMoveCursor *pFVar9;
  FText *pFVar10;
  FReply *pFVar11;
  ETextLocation EVar12;
  TReferenceControllerBase<1> *pTVar13;
  ECursorMoveGranularity EVar14;
  uint uVar15;
  uint uStackX_14;
  FMoveCursor local_1ce8;
  FText local_1cd0;
  FMoveCursor local_1cc0;
  FMoveCursor local_1ca8;
  FMoveCursor local_1c90;
  FMoveCursor local_1c78;
  FMoveCursor local_1c60;
  FReply local_1c48;
  FReply local_1b90;
  FReply local_1ad8;
  FReply local_1a20;
  FReply local_1968;
  FReply local_18b0;
  FReply local_17f8;
  FReply local_1740;
  FReply local_1688;
  FReply local_15d0;
  FReply local_1518;
  FReply local_1460;
  FReply local_13a8;
  FReply local_12f0;
  FReply local_1238;
  FReply local_1180;
  FReply local_10c8;
  FReply local_1010;
  FReply local_f58;
  FReply local_ea0;
  FReply local_de8;
  FReply local_d30;
  FReply local_c78;
  FReply local_bc0;
  FReply local_b08;
  FReply local_a50;
  FReply local_998;
  FReply local_8e0;
  FReply local_828;
  FReply local_770;
  FReply local_6b8;
  FReply local_600;
  FReply local_548;
  FReply local_490;
  FReply local_3d8;
  FReply local_320;
  FReply local_268;
  FReply local_1b0;
  FReply local_f8;
  undefined8 uStack_40;
  
  uStack_40 = 0x1429f134d;
  bVar8 = false;
  EVar12 = BeginningOfDocument;
  EVar14 = Character;
  FReply::FReply(__return_storage_ptr__,false);
  pTVar2 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_1->Key).KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar3 == EKeys::Left.KeyName) {
    cVar6 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if ((cVar6 == '\0') || ((param_1->_padding_ & 0xc) == 0)) {
      lVar5 = param_1->_padding_;
      if (((lVar5 & 4) != 0) || ((lVar5 & 8) != 0)) {
        EVar14 = Word;
      }
      local_1ce8.Action = (ECursorAction)((lVar5 & 3) != 0);
      local_1ce8.Method = Cardinal;
      local_1ce8.DirectionOrPosition.field0_0x0._s_0.X = -1.0;
      local_1ce8.DirectionOrPosition.field0_0x0._s_0.Y = 0.0;
      local_1ce8.GeometryScale = 1.0;
      local_1ce8.Granularity = EVar14;
      bVar8 = MoveCursor(this,&local_1ce8);
      pFVar11 = &local_a50;
      if (bVar8) {
        pFVar11 = &local_998;
      }
      bVar1 = !bVar8 * '\x02' + 2;
      FReply::FReply(pFVar11,bVar8);
      FReply::FReply(&local_1b90,pFVar11);
      if ((bVar1 & 4) != 0) {
        FReply::~FReply(&local_a50);
      }
      if ((bVar1 & 2) != 0) {
        FReply::~FReply(&local_998);
      }
      FReply::operator=(__return_storage_ptr__,&local_1b90);
      pFVar11 = &local_1b90;
    }
    else {
      JumpTo(this,BeginningOfLine,(uint)((param_1->_padding_ & 3) != 0));
      FReply::FReply(&local_1c48,true);
      FReply::operator=(__return_storage_ptr__,&local_1c48);
      pFVar11 = &local_1c48;
    }
  }
  else if (FVar3 == EKeys::Right.KeyName) {
    cVar6 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if ((cVar6 == '\0') || ((param_1->_padding_ & 0xc) == 0)) {
      pFVar9 = FMoveCursor::Cardinal
                         (&local_1cc0,(uint)((param_1->_padding_ & 0xc) != 0),(TIntPoint<int>)0x1,
                          (uint)((param_1->_padding_ & 3) != 0));
      bVar8 = MoveCursor(this,pFVar9);
      pFVar11 = &local_8e0;
      if (bVar8) {
        pFVar11 = &local_828;
      }
      bVar1 = !bVar8 * '\b' + 8;
      FReply::FReply(pFVar11,bVar8);
      FReply::FReply(&local_1a20,pFVar11);
      if ((bVar1 & 0x10) != 0) {
        FReply::~FReply(&local_8e0);
      }
      if ((bVar1 & 8) != 0) {
        FReply::~FReply(&local_828);
      }
      FReply::operator=(__return_storage_ptr__,&local_1a20);
      pFVar11 = &local_1a20;
    }
    else {
      JumpTo(this,EndOfLine,(uint)((param_1->_padding_ & 3) != 0));
      FReply::FReply(&local_1ad8,true);
      FReply::operator=(__return_storage_ptr__,&local_1ad8);
      pFVar11 = &local_1ad8;
    }
  }
  else if (FVar3 == EKeys::Up.KeyName) {
    pFVar9 = FMoveCursor::Cardinal
                       (&local_1ca8,Character,(TIntPoint<int>)0xffffffff00000000,
                        (uint)((param_1->_padding_ & 3) != 0));
    bVar8 = MoveCursor(this,pFVar9);
    pFVar11 = &local_770;
    if (bVar8) {
      pFVar11 = &local_6b8;
    }
    FReply::FReply(pFVar11,bVar8);
    FReply::FReply(&local_1968,pFVar11);
    if (((!bVar8 + '\x01') * ' ' & 0x40U) != 0) {
      FReply::~FReply(&local_770);
    }
    if (bVar8) {
      FReply::~FReply(&local_6b8);
    }
    FReply::operator=(__return_storage_ptr__,&local_1968);
    pFVar11 = &local_1968;
  }
  else if (FVar3 == EKeys::Down.KeyName) {
    pFVar9 = FMoveCursor::Cardinal
                       (&local_1c90,Character,(TIntPoint<int>)0x100000000,
                        (uint)((param_1->_padding_ & 3) != 0));
    bVar8 = MoveCursor(this,pFVar9);
    pFVar11 = &local_600;
    if (bVar8) {
      pFVar11 = &local_548;
    }
    uVar15 = (bVar8 ^ 1) + 1;
    FReply::FReply(pFVar11,bVar8);
    FReply::FReply(&local_18b0,pFVar11);
    if (uVar15 >> 1 != 0) {
      FReply::~FReply(&local_600);
    }
    if ((char)((char)uVar15 * -0x80) < '\0') {
      FReply::~FReply(&local_548);
    }
    FReply::operator=(__return_storage_ptr__,&local_18b0);
    pFVar11 = &local_18b0;
  }
  else if (FVar3 == EKeys::Home.KeyName) {
    if ((param_1->_padding_ & 0xc) == 0) {
      EVar12 = BeginningOfLine;
    }
    JumpTo(this,EVar12,(uint)((param_1->_padding_ & 3) != 0));
    FReply::FReply(&local_17f8,true);
    FReply::operator=(__return_storage_ptr__,&local_17f8);
    pFVar11 = &local_17f8;
  }
  else if (FVar3 == EKeys::End.KeyName) {
    EVar12 = EndOfDocument;
    if ((param_1->_padding_ & 0xc) == 0) {
      EVar12 = EndOfLine;
    }
    JumpTo(this,EVar12,(uint)((param_1->_padding_ & 3) != 0));
    FReply::FReply(&local_1740,true);
    FReply::operator=(__return_storage_ptr__,&local_1740);
    pFVar11 = &local_1740;
  }
  else if (FVar3 == EKeys::PageUp.KeyName) {
    JumpTo(this,PreviousPage,(uint)((param_1->_padding_ & 3) != 0));
    FReply::FReply(&local_1688,true);
    FReply::operator=(__return_storage_ptr__,&local_1688);
    pFVar11 = &local_1688;
  }
  else if (FVar3 == EKeys::PageDown.KeyName) {
    JumpTo(this,NextPage,(uint)((param_1->_padding_ & 3) != 0));
    FReply::FReply(&local_15d0,true);
    FReply::operator=(__return_storage_ptr__,&local_15d0);
    pFVar11 = &local_15d0;
  }
  else {
    if ((FVar3 == EKeys::Enter.KeyName) &&
       (cVar6 = (**(code **)*this->OwnerWidget)(), cVar6 == '\0')) {
      BeginEditTransation(this);
      HandleCarriageReturn
                (this,*(bool *)((longlong)&param_1->_padding_ + 2),
                 *(int *)((longlong)&param_1->_padding_ + 4));
      FReply::FReply(&local_1518,true);
      FReply::operator=(__return_storage_ptr__,&local_1518);
      FReply::~FReply(&local_1518);
      EndEditTransaction(this);
      goto LAB_1429f1f62;
    }
    if ((FVar3 == EKeys::Tab.KeyName) &&
       (cVar6 = (**(code **)((longlong)*this->OwnerWidget + 0x58))(this->OwnerWidget,9),
       cVar6 != '\0')) {
      FReply::FReply(&local_1460,true);
      FReply::operator=(__return_storage_ptr__,&local_1460);
      pFVar11 = &local_1460;
    }
    else if (FVar3 == EKeys::Escape.KeyName) {
      bVar8 = HandleEscape(this);
      pFVar11 = &local_490;
      if (bVar8) {
        pFVar11 = &local_3d8;
      }
      uVar15 = (bVar8 ^ 1) + 1;
      FReply::FReply(pFVar11,bVar8);
      FReply::FReply(&local_13a8,pFVar11);
      if (uVar15 >> 1 != 0) {
        FReply::~FReply(&local_490);
      }
      if ((uVar15 & 1) != 0) {
        FReply::~FReply(&local_3d8);
      }
      FReply::operator=(__return_storage_ptr__,&local_13a8);
      pFVar11 = &local_13a8;
    }
    else {
      if (FVar3 == EKeys::Delete.KeyName) {
        if (((param_1->_padding_ & 3) != 0) && (bVar7 = CanExecuteCut(this), bVar7)) {
          CutSelectedTextToClipboard(this);
          FReply::FReply(&local_12f0,true);
          FReply::operator=(__return_storage_ptr__,&local_12f0);
          pFVar11 = &local_12f0;
          goto LAB_1429f1f5d;
        }
        if ((FVar3 == EKeys::Delete.KeyName) &&
           (cVar6 = (**(code **)*this->OwnerWidget)(), cVar6 == '\0')) {
          bVar8 = AnyTextSelected(this);
          if ((!bVar8) &&
             (((lVar5 = param_1->_padding_, (lVar5 & 0xc) != 0 && ((lVar5 & 0x30) == 0)) &&
              ((lVar5 & 3) == 0)))) {
            cVar6 = (**(code **)((longlong)*this->OwnerWidget + 8))();
            if (cVar6 == '\0') {
              pFVar9 = FMoveCursor::Cardinal(&local_1c78,Word,(TIntPoint<int>)0x1,SelectText);
              MoveCursor(this,pFVar9);
            }
            else {
              JumpTo(this,EndOfLine,SelectText);
            }
          }
          BeginEditTransation(this);
          bVar8 = HandleDelete(this);
          pFVar11 = &local_320;
          if (bVar8) {
            pFVar11 = &local_268;
          }
          uVar15 = (bVar8 ^ 1) + 1;
          FReply::FReply(pFVar11,bVar8);
          FReply::FReply(&local_1238,pFVar11);
          if (uVar15 >> 1 != 0) {
            FReply::~FReply(&local_320);
          }
          if ((uVar15 & 1) != 0) {
            FReply::~FReply(&local_268);
          }
          FReply::operator=(__return_storage_ptr__,&local_1238);
          FReply::~FReply(&local_1238);
          EndEditTransaction(this);
          goto LAB_1429f1f62;
        }
      }
      if (FVar3 == EKeys::Insert.KeyName) {
        if (((param_1->_padding_ & 0xc) == 0) || (bVar7 = CanExecuteCopy(this), !bVar7)) {
          if (((FVar3 != EKeys::Insert.KeyName) || ((param_1->_padding_ & 3) == 0)) ||
             (bVar7 = CanExecutePaste(this), !bVar7)) goto LAB_1429f1ba8;
          PasteTextFromClipboard(this);
          FReply::FReply(&local_10c8,true);
          FReply::operator=(__return_storage_ptr__,&local_10c8);
          pFVar11 = &local_10c8;
        }
        else {
          CopySelectedTextToClipboard(this);
          FReply::FReply(&local_1180,true);
          FReply::operator=(__return_storage_ptr__,&local_1180);
          pFVar11 = &local_1180;
        }
      }
      else {
LAB_1429f1ba8:
        bVar7 = CanExecuteUndo(this);
        if ((((bVar7) && (FVar3 == EKeys::BackSpace.KeyName)) && ((param_1->_padding_ & 0x30) != 0))
           && ((param_1->_padding_ & 3) == 0)) {
          Undo(this);
          FReply::FReply(&local_1010,true);
          FReply::operator=(__return_storage_ptr__,&local_1010);
          pFVar11 = &local_1010;
        }
        else {
          cVar6 = (**(code **)*this->OwnerWidget)();
          if (cVar6 == '\0') {
            if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FReply *)(*pcVar4)();
              return pFVar11;
            }
            cVar6 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
            if (cVar6 != '\0') goto LAB_1429f1cc8;
            if (((FVar3 == EKeys::Y.KeyName) && ((param_1->_padding_ & 0xc) != 0)) ||
               ((FVar3 == EKeys::Z.KeyName &&
                (((param_1->_padding_ & 0xc) != 0 && ((param_1->_padding_ & 3) != 0)))))) {
LAB_1429f1c90:
              Redo(this);
              FReply::FReply(&local_f58,true);
              FReply::operator=(__return_storage_ptr__,&local_f58);
              pFVar11 = &local_f58;
              goto LAB_1429f1f5d;
            }
            if (FVar3 == EKeys::BackSpace.KeyName) {
              if (((param_1->_padding_ & 0x30) == 0) || ((param_1->_padding_ & 3) == 0))
              goto LAB_1429f1cc8;
              goto LAB_1429f1c90;
            }
          }
          else {
LAB_1429f1cc8:
            if ((((FVar3 == EKeys::BackSpace.KeyName) &&
                 (lVar5 = param_1->_padding_, (lVar5 & 0xc) != 0)) && ((lVar5 & 0x30) == 0)) &&
               (((lVar5 & 3) == 0 && (cVar6 = (**(code **)*this->OwnerWidget)(), cVar6 == '\0')))) {
              BeginEditTransation(this);
              cVar6 = (**(code **)((longlong)*this->OwnerWidget + 8))();
              if (cVar6 == '\0') {
                pFVar9 = FMoveCursor::Cardinal
                                   (&local_1c60,Word,(TIntPoint<int>)0xffffffff,SelectText);
                MoveCursor(this,pFVar9);
              }
              else {
                JumpTo(this,BeginningOfLine,SelectText);
              }
              bVar8 = HandleBackspace(this);
              pFVar11 = &local_1b0;
              if (bVar8) {
                pFVar11 = &local_f8;
              }
              uVar15 = (bVar8 ^ 1) + 1;
              FReply::FReply(pFVar11,bVar8);
              FReply::FReply(&local_ea0,pFVar11);
              if (uVar15 >> 1 != 0) {
                FReply::~FReply(&local_1b0);
              }
              if ((uVar15 & 1) != 0) {
                FReply::~FReply(&local_f8);
              }
              FReply::operator=(__return_storage_ptr__,&local_ea0);
              FReply::~FReply(&local_ea0);
              EndEditTransaction(this);
              goto LAB_1429f1f62;
            }
          }
          if (FVar3 == EKeys::F3.KeyName) {
            lVar5 = param_1->_padding_;
            if ((lVar5 & 0xc) == 0) {
              if ((lVar5 & 0x30) != 0) goto LAB_1429f1eaa;
              AdvanceSearch(this,(lVar5 & 3) != 0);
              FReply::FReply(&local_d30,true);
              FReply::operator=(__return_storage_ptr__,&local_d30);
              pFVar11 = &local_d30;
            }
            else {
              if ((lVar5 & 0x30) != 0) goto LAB_1429f1eaa;
              pFVar10 = GetSelectedText(this,&local_1cd0);
              BeginSearch(this,pFVar10,IgnoreCase,(lVar5 & 3) != 0);
              if (local_1cd0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1cd0.TextData.Reference + 0x10))();
              }
              FReply::FReply(&local_de8,true);
              FReply::operator=(__return_storage_ptr__,&local_de8);
              pFVar11 = &local_de8;
            }
          }
          else {
LAB_1429f1eaa:
            if (((param_1->_padding_ & 0x30) == 0) && ((param_1->_padding_ & 0xc) == 0)) {
              pTVar13 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
              FVar3 = (param_1->Key).KeyName;
              if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar13->SharedReferenceCount =
                     (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                UNLOCK();
              }
              bVar8 = true;
              if ((FVar3 == EKeys::Tab.KeyName) || (param_1->CharacterCode == 0))
              goto LAB_1429f1eec;
              bVar7 = true;
LAB_1429f1ef4:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar13);
            }
            else {
              pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_14 << 0x20);
LAB_1429f1eec:
              bVar7 = false;
              if (bVar8) goto LAB_1429f1ef4;
            }
            if (bVar7) {
              FReply::FReply(&local_c78,true);
              FReply::operator=(__return_storage_ptr__,&local_c78);
              pFVar11 = &local_c78;
            }
            else {
              if ((((byte)param_1->_padding_ >> 5 & 1) == 0) || (param_1->CharacterCode == 0))
              goto LAB_1429f1f62;
              FReply::FReply(&local_bc0,true);
              FReply::operator=(__return_storage_ptr__,&local_bc0);
              pFVar11 = &local_bc0;
            }
          }
        }
      }
    }
  }
LAB_1429f1f5d:
  FReply::~FReply(pFVar11);
LAB_1429f1f62:
  if ((char)__return_storage_ptr__->_padding_ == '\0') {
    if (((this->UICommandList).Object == (FUICommandList *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar4)();
      return pFVar11;
    }
    bVar8 = FUICommandList::ProcessCommandBindings((this->UICommandList).Object,param_1);
    if (bVar8) {
      FReply::FReply(&local_b08,true);
      FReply::operator=(__return_storage_ptr__,&local_b08);
      FReply::~FReply(&local_b08);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// HandleKeyUp @ 1429f2000

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleKeyUp
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FKeyEvent *param_1)

{
  bool bVar1;
  char cVar2;
  FSlateApplication *pFVar3;
  TSharedPtr<IVirtualKeyboardEntry,1> local_18;
  
  bVar1 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard();
  if (bVar1) {
    pFVar3 = FSlateApplication::Get();
    cVar2 = (**(code **)(*(longlong *)pFVar3 + 0xb0))(pFVar3);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)*this->OwnerWidget)();
      if (cVar2 == '\0') {
        pFVar3 = FSlateApplication::Get();
        local_18.Object = (IVirtualKeyboardEntry *)(this->VirtualKeyboardEntry).Object;
        local_18.SharedReferenceCount.ReferenceController =
             (this->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController;
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FSlateApplication::ShowVirtualKeyboard
                  (pFVar3,true,*(int *)((longlong)&param_1->_padding_ + 4),&local_18);
        bVar1 = true;
        goto LAB_1429f2085;
      }
    }
  }
  bVar1 = false;
LAB_1429f2085:
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// HandleMouseButtonDoubleClick @ 1429f20b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleMouseButtonDoubleClick
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  bool bVar2;
  char cVar3;
  TTransform2<float> *pTVar4;
  FDeprecateVector2DParameter FVar5;
  bool bVar6;
  float fVar7;
  undefined8 local_48;
  TTransform2<float> local_40;
  
  bVar6 = false;
  local_48 = (FDeprecateVector2DParameter)((ulonglong)local_48 & 0xffffffff00000000);
  cVar3 = (**(code **)((longlong)*this->OwnerWidget + 0x48))();
  FVar5 = local_48;
  if (cVar3 != '\0') {
    FVar5 = (FDeprecateVector2DParameter)
            (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->EffectingButton).KeyName;
    if (FVar5 != (FDeprecateVector2DParameter)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar5 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar5 + 8) + 1);
      UNLOCK();
    }
    bVar6 = true;
    if (FVar1 == EKeys::LeftMouseButton.KeyName) {
      bVar2 = true;
      goto LAB_1429f210b;
    }
  }
  bVar2 = false;
LAB_1429f210b:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar5);
  }
  if (bVar2) {
    pTVar4 = Inverse<TTransform2<float>_>(&local_40,&param_1->AccumulatedRenderTransform);
    local_48._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_48._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    fVar7 = local_48._4_4_ * (pTVar4->M).M[1][0];
    local_48._4_4_ =
         (local_48._4_4_ * (pTVar4->M).M[1][1] + (float)local_48 * (pTVar4->M).M[0][1] +
         (pTVar4->Trans).field0_0x0._s_0.Y) * param_1->Scale;
    local_48._0_4_ =
         (fVar7 + (float)local_48 * (pTVar4->M).M[0][0] + (pTVar4->Trans).field0_0x0._s_0.X) *
         param_1->Scale;
    SelectWordAt(this,(FDeprecateVector2DParameter *)&local_48);
  }
  FReply::FReply(__return_storage_ptr__,bVar2);
  return __return_storage_ptr__;
}

// HandleMouseButtonDown @ 1429f21d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleMouseButtonDown
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  char cVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TOptional<EFocusCause> TVar10;
  undefined8 *puVar11;
  undefined6 extraout_var;
  TTransform2<float> *pTVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FDeprecateVector2DParameter FVar14;
  float fVar15;
  undefined8 local_138;
  TReferenceControllerBase<1> *local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  FReply local_f8;
  
  local_138 = (FDeprecateVector2DParameter)((ulonglong)local_138 & 0xffffffff00000000);
  FReply::FReply(__return_storage_ptr__,false);
  puVar11 = (undefined8 *)
            (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,&local_138);
  bVar9 = SWidget::HasMouseCapture((SWidget *)*puVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  if (bVar9) {
    return __return_storage_ptr__;
  }
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar5 = (param_2->EffectingButton).KeyName;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar9 = false;
  FVar14 = local_138;
  if (FVar5 == EKeys::LeftMouseButton.KeyName) {
LAB_1429f2283:
    bVar7 = true;
    bVar8 = true;
    if (!bVar9) goto LAB_1429f2290;
  }
  else {
    FVar14 = (FDeprecateVector2DParameter)
             (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar5 = (param_2->EffectingButton).KeyName;
    if (FVar14 != (FDeprecateVector2DParameter)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar14 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar14 + 8) + 1);
      UNLOCK();
    }
    bVar9 = true;
    if (FVar5 == EKeys::RightMouseButton.KeyName) goto LAB_1429f2283;
    bVar8 = false;
  }
  bVar7 = bVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar14);
LAB_1429f2290:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar7) {
    puVar11 = (undefined8 *)
              (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_128);
    TVar10 = SWidget::HasAnyUserFocus((SWidget *)*puVar11);
    cVar3 = *(char *)(CONCAT62(extraout_var,TVar10) + 1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(local_128._12_4_,local_128._8_4_));
    if (cVar3 == '\0') {
      LoadText(this);
      this->bWasFocusedByLastMouseDown = true;
    }
    pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar5 = (param_2->EffectingButton).KeyName;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = FVar5 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (bVar9) {
      if ((param_2->_padding_ & 3) == 0) {
        if (((TOptional<FTextLocation> *)local_110 != &this->SelectionStart) &&
           ((this->SelectionStart).bIsSet != false)) {
          (this->SelectionStart).bIsSet = false;
        }
        pTVar12 = Inverse<TTransform2<float>_>
                            ((TTransform2<float> *)local_128,&param_1->AccumulatedRenderTransform);
        local_138._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
        local_138._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
        local_128._8_4_ =
             local_138._4_4_ * (pTVar12->M).M[1][0] + (float)local_138 * (pTVar12->M).M[0][0] +
             (pTVar12->Trans).field0_0x0._s_0.X;
        local_128._12_4_ =
             (float)local_138 * (pTVar12->M).M[0][1] + local_138._4_4_ * (pTVar12->M).M[1][1] +
             (pTVar12->Trans).field0_0x0._s_0.Y;
        local_128._16_4_ = 0.0;
      }
      else {
        pTVar12 = Inverse<TTransform2<float>_>
                            ((TTransform2<float> *)local_128,&param_1->AccumulatedRenderTransform);
        local_138._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
        local_138._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
        local_128._8_4_ =
             local_138._4_4_ * (pTVar12->M).M[1][0] + (float)local_138 * (pTVar12->M).M[0][0] +
             (pTVar12->Trans).field0_0x0._s_0.X;
        local_128._12_4_ =
             (float)local_138 * (pTVar12->M).M[0][1] + local_138._4_4_ * (pTVar12->M).M[1][1] +
             (pTVar12->Trans).field0_0x0._s_0.Y;
        local_128._16_4_ = 1.4013e-45;
      }
      local_138._4_4_ = (float)local_128._12_4_;
      local_138._0_4_ = (float)local_128._8_4_;
      local_128._20_4_ = param_1->Scale;
      local_128._0_4_ = 0.0;
      local_128._4_4_ = 1.4013e-45;
      MoveCursor(this,(FMoveCursor *)local_128);
      this->bIsDragSelecting = true;
    }
    else {
      pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar5 = (param_2->EffectingButton).KeyName;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar9 = FVar5 == EKeys::RightMouseButton.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if ((bVar9) && (bVar9 = AnyTextSelected(this), bVar9)) {
        pTVar12 = Inverse<TTransform2<float>_>
                            ((TTransform2<float> *)local_128,&param_1->AccumulatedRenderTransform);
        local_138._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
        local_138._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
        fVar15 = local_138._4_4_ * (pTVar12->M).M[1][0];
        local_138._4_4_ =
             ((float)local_138 * (pTVar12->M).M[0][1] + local_138._4_4_ * (pTVar12->M).M[1][1] +
             (pTVar12->Trans).field0_0x0._s_0.Y) * param_1->Scale;
        local_138._0_4_ =
             (fVar15 + (float)local_138 * (pTVar12->M).M[0][0] + (pTVar12->Trans).field0_0x0._s_0.X)
             * param_1->Scale;
        bVar9 = IsTextSelectedAt(this,(FDeprecateVector2DParameter *)&local_138);
        if (!bVar9) {
          if (((TOptional<FTextLocation> *)local_104 != &this->SelectionStart) &&
             ((this->SelectionStart).bIsSet != false)) {
            (this->SelectionStart).bIsSet = false;
          }
          pTVar12 = Inverse<TTransform2<float>_>
                              ((TTransform2<float> *)local_128,&param_1->AccumulatedRenderTransform)
          ;
          local_138._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
          local_138._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
          local_128._8_4_ =
               local_138._4_4_ * (pTVar12->M).M[1][0] + (float)local_138 * (pTVar12->M).M[0][0] +
               (pTVar12->Trans).field0_0x0._s_0.X;
          local_128._12_4_ =
               (float)local_138 * (pTVar12->M).M[0][1] + local_138._4_4_ * (pTVar12->M).M[1][1] +
               (pTVar12->Trans).field0_0x0._s_0.Y;
          local_128._0_4_ = 0.0;
          local_128._4_4_ = 1.4013e-45;
          local_128._16_4_ = 0.0;
          local_138._4_4_ = (float)local_128._12_4_;
          local_138._0_4_ = (float)local_128._8_4_;
          local_128._20_4_ = param_1->Scale;
          MoveCursor(this,(FMoveCursor *)local_128);
        }
      }
    }
    FReply::FReply(&local_f8,true);
    FReply::operator=(__return_storage_ptr__,&local_f8);
    FReply::~FReply(&local_f8);
    puVar11 = (undefined8 *)
              (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_128);
    (__return_storage_ptr__->MouseCaptor).Object = (SWidget *)*puVar11;
    pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
    if (pTVar4 != (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController;
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
      (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)puVar11[1]);
    pTVar13 = (TSharedRef<SWidget,1> *)
              (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_128);
    FReply::SetUserFocus(__return_storage_ptr__,pTVar13,Mouse,false);
  }
  return __return_storage_ptr__;
}

// HandleMouseButtonUp @ 1429f2680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleMouseButtonUp
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  undefined8 *puVar10;
  FSlateApplication *pFVar11;
  TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *pTVar12;
  FWidgetPath *pFVar13;
  FReply *pFVar14;
  TSharedRef<SWindow,1> *pTVar15;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
  *this_00;
  FDeprecateSlateVector2D FVar16;
  ForElementType<FArrangedWidget> FVar17;
  TWeakPtr<IMenu,1> *pTVar18;
  undefined1 auStackY_748 [32];
  undefined4 local_6e8;
  FDeprecateSlateVector2D local_6e4;
  TSharedPtr<IMenu,1> local_6d8;
  FDeprecateSlateVector2D local_6c8 [2];
  SWidget *local_6b8;
  TReferenceControllerBase<1> *pTStack_6b0;
  TVector2<float>_u_0 local_6a8;
  undefined1 local_6a0 [16];
  TVector2<float>_u_0 local_690;
  TSharedRef<SWidget,1> local_688;
  TSharedRef<SWidget,1> local_678;
  TSharedPtr<IVirtualKeyboardEntry,1> local_668;
  undefined1 local_658 [296];
  FReply local_530;
  undefined1 local_478 [328];
  FSharedReferencer<1> local_330;
  ForAnyElementType local_328;
  undefined1 local_318 [328];
  FSharedReferencer<1> local_1d0;
  ForAnyElementType local_1c8;
  undefined1 local_1b8 [328];
  FSharedReferencer<1> local_70;
  ForAnyElementType local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_6e8 = 0;
  FReply::FReply(__return_storage_ptr__,false);
  puVar10 = (undefined8 *)
            (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_658 + 8);
  bVar8 = SWidget::HasMouseCapture((SWidget *)*puVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_658._16_8_);
  if (!bVar8) {
    return __return_storage_ptr__;
  }
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = false;
  FVar16 = local_6c8[0];
  if (FVar4 == EKeys::LeftMouseButton.KeyName) {
LAB_1429f274b:
    bVar6 = true;
    if (!bVar8) goto LAB_1429f275c;
  }
  else {
    FVar16 = (FDeprecateSlateVector2D)
             (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (FVar16 != (FDeprecateSlateVector2D)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar16 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 8) + 1);
      UNLOCK();
    }
    bVar8 = true;
    if (FVar4 == EKeys::RightMouseButton.KeyName) goto LAB_1429f274b;
    bVar6 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar16);
LAB_1429f275c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if ((((bVar6) && (this->bWasFocusedByLastMouseDown == false)) &&
      (bVar8 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard(), bVar8)) &&
     ((cVar9 = (**(code **)*this->OwnerWidget)(), cVar9 == '\0' &&
      ((cVar9 = (**(code **)((longlong)*this->OwnerWidget + 0x80))(), cVar9 == '\x01' ||
       (cVar9 = (**(code **)((longlong)*this->OwnerWidget + 0x80))(), cVar9 == '\0')))))) {
    pFVar11 = FSlateApplication::Get();
    pTVar12 = TSharedPtr<FSlateEditableTextLayout::FVirtualKeyboardEntry,1>::ToSharedRef
                        (&this->VirtualKeyboardEntry,
                         (TSharedRef<FSlateEditableTextLayout::FVirtualKeyboardEntry,1> *)
                         (local_658 + 0x18));
    local_668.Object = (IVirtualKeyboardEntry *)pTVar12->Object;
    local_668.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_668.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::ShowVirtualKeyboard
              (pFVar11,true,*(int *)((longlong)&param_2->_padding_ + 4),&local_668);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_658._32_8_);
  }
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) && (this->bIsDragSelecting != false)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    this->bIsDragSelecting = false;
    if (this->bWasFocusedByLastMouseDown != false) {
      if (((this->bHasDragSelectedSinceFocused == false) || ((this->SelectionStart).bIsSet == false)
          ) && (cVar9 = (**(code **)((longlong)*this->OwnerWidget + 0x20))(), cVar9 != '\0')) {
        JumpTo(this,EndOfDocument,MoveCursor);
        SelectAllText(this);
      }
      this->bWasFocusedByLastMouseDown = false;
    }
    FReply::FReply((FReply *)(local_658 + 0x70),true);
    FReply::operator=(__return_storage_ptr__,(FReply *)(local_658 + 0x70));
    pFVar14 = (FReply *)(local_658 + 0x70);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = FVar4 != EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar8) {
      return __return_storage_ptr__;
    }
    local_6e4 = param_1->Size;
    local_6a0._0_4_ = local_6e4._0_4_;
    local_6a0._12_4_ = local_6e4._4_4_;
    local_6a8 = (TVector2<float>_u_0)0x0;
    local_6a0._4_8_ = 0;
    TransformRect<TTransform2<float>_>
              ((FSlateRotatedRect *)(local_658 + 0x38),&param_1->AccumulatedRenderTransform,
               (FSlateRotatedRect *)&local_6a8._s_0);
    bVar8 = FSlateRotatedRect::IsUnderLocation
                      ((FSlateRotatedRect *)(local_658 + 0x38),
                       *(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
    if (bVar8) {
      bVar8 = (FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0;
      if (bVar8) {
        pFVar13 = FWidgetPath::FWidgetPath((FWidgetPath *)local_318);
      }
      else {
        pFVar13 = FWidgetPath::FWidgetPath
                            ((FWidgetPath *)local_1b8,(FWidgetPath *)param_2->_padding_);
      }
      FWidgetPath::FWidgetPath((FWidgetPath *)local_478,pFVar13);
      if (bVar8) {
        if (local_1c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0.ReferenceController);
        FVar17 = (ForElementType<FArrangedWidget>)((longlong)local_318 + 8);
        if ((ForElementType<FArrangedWidget>)local_318._296_8_ !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar17 = (ForElementType<FArrangedWidget>)local_318._296_8_;
        }
        DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar17,local_318._304_4_);
        if ((ForElementType<FArrangedWidget>)local_318._296_8_ !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_318._296_8_);
        }
      }
      if (!bVar8) {
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.ReferenceController);
        FVar17 = (ForElementType<FArrangedWidget>)((longlong)local_1b8 + 8);
        if ((ForElementType<FArrangedWidget>)local_1b8._296_8_ !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar17 = (ForElementType<FArrangedWidget>)local_1b8._296_8_;
        }
        DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar17,local_1b8._304_4_);
        if ((ForElementType<FArrangedWidget>)local_1b8._296_8_ !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1b8._296_8_);
        }
      }
      (**(code **)((longlong)*this->OwnerWidget + 0xa0))(this->OwnerWidget,&local_6b8);
      if (local_6b8 != (SWidget *)0x0) {
        pTVar18 = &(this->ActiveContextMenu).ActiveMenu;
        (this->ActiveContextMenu).bIsPendingSummon = true;
        if (pTVar18 != (TWeakPtr<IMenu,1> *)(local_658 + 0x50)) {
          pTVar3 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController;
          pTVar18->Object = (IMenu *)0x0;
          (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
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
        }
        pFVar11 = FSlateApplication::Get();
        local_690 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_6c8[0] = param_2->ScreenSpacePosition;
        local_6e8._0_2_ = (ushort)(byte)local_6e8;
        local_6e4._0_4_ = 5;
        if ((local_6b8 == (SWidget *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FReply *)(*pcVar5)();
          return pFVar14;
        }
        local_678.Object = local_6b8;
        local_678.SharedReferenceCount.ReferenceController = pTStack_6b0;
        if (pTStack_6b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_6b0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_6b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_6b8 == (SWidget *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FReply *)(*pcVar5)();
          return pFVar14;
        }
        pTVar15 = FInputEvent::GetWindow
                            ((FInputEvent *)param_2,(TSharedRef<SWindow,1> *)(local_658 + 0x28));
        local_688.Object = (SWidget *)pTVar15->Object;
        local_688.SharedReferenceCount.ReferenceController =
             (pTVar15->SharedReferenceCount).ReferenceController;
        if (local_688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FSlateApplication::PushMenu
                  (pFVar11,&local_6d8,&local_688,(FWidgetPath *)local_478,&local_678,
                   (FDeprecateVector2DParameter *)local_6c8,(FPopupTransitionEffect *)&local_6e4,
                   true,(FDeprecateVector2DParameter *)&local_690._s_0,SUB82(&local_6e8,0),true,-1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_688.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_658._48_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_678.SharedReferenceCount.ReferenceController);
        if (local_6d8.Object == (IMenu *)0x0) {
          (this->ActiveContextMenu).bIsPendingSummon = false;
          pTVar18 = &(this->ActiveContextMenu).ActiveMenu;
          if (pTVar18 != (TWeakPtr<IMenu,1> *)(local_658 + 0x60)) {
            pTVar3 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController;
            pTVar18->Object = (IMenu *)0x0;
            (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
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
          }
        }
        else {
          if ((local_6d8.Object == (IMenu *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FReply *)(*pcVar5)();
            return pFVar14;
          }
          this_00 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
                     *)(**(code **)((longlong)*local_6d8.Object + 0x28))();
          TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
          ::AddRaw<FSlateEditableTextLayout>
                    (this_00,(FSlateEditableTextLayout *)local_658,(pmf_fe49a0f2)this);
          if ((local_6d8.Object == (IMenu *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FReply *)(*pcVar5)();
            return pFVar14;
          }
          FVar7.ReferenceController = local_6d8.SharedReferenceCount.ReferenceController;
          if (local_6d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_6d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_6d8.Object == (IMenu *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FReply *)(*pcVar5)();
            return pFVar14;
          }
          (this->ActiveContextMenu).bIsPendingSummon = false;
          (this->ActiveContextMenu).ActiveMenu.Object = local_6d8.Object;
          if (FVar7.ReferenceController !=
              (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController) {
            if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar7.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            pTVar3 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController;
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
            (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController =
                 FVar7.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6d8.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_6b0);
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_330.ReferenceController);
      FVar17 = (ForElementType<FArrangedWidget>)((longlong)local_478 + 8);
      if ((ForElementType<FArrangedWidget>)local_478._296_8_ != (ForElementType<FArrangedWidget>)0x0
         ) {
        FVar17 = (ForElementType<FArrangedWidget>)local_478._296_8_;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar17,local_478._304_4_);
      if ((ForElementType<FArrangedWidget>)local_478._296_8_ != (ForElementType<FArrangedWidget>)0x0
         ) {
        FMemory::Free((void *)local_478._296_8_);
      }
    }
    FReply::FReply(&local_530,true);
    FReply::operator=(__return_storage_ptr__,&local_530);
    pFVar14 = &local_530;
  }
  FReply::~FReply(pFVar14);
  FReply::ReleaseMouseCapture(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HandleMouseMove @ 1429f2dc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FSlateEditableTextLayout::HandleMouseMove
          (FSlateEditableTextLayout *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  TTransform2<float> *pTVar3;
  bool bVar4;
  float local_58;
  float fStack_54;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [32];
  
  bVar4 = false;
  if (this->bIsDragSelecting != false) {
    puVar2 = (undefined8 *)(**(code **)((longlong)*this->OwnerWidget + 0x90))();
    bVar4 = true;
    bVar1 = SWidget::HasMouseCapture((SWidget *)*puVar2);
    if ((bVar1) &&
       ((UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X != *(float *)&param_2->CursorDelta
        || (UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y !=
            *(float *)&(param_2->CursorDelta).field_0x4)))) {
      bVar1 = true;
      goto LAB_1429f2e30;
    }
  }
  bVar1 = false;
LAB_1429f2e30:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  if (bVar1) {
    pTVar3 = Inverse<TTransform2<float>_>
                       ((TTransform2<float> *)local_48,&param_1->AccumulatedRenderTransform);
    fStack_54 = SUB84(param_2->ScreenSpacePosition,4);
    local_58 = SUB84(param_2->ScreenSpacePosition,0);
    local_48._8_4_ =
         fStack_54 * (pTVar3->M).M[1][0] + local_58 * (pTVar3->M).M[0][0] +
         (pTVar3->Trans).field0_0x0._s_0.X;
    local_48._12_4_ =
         local_58 * (pTVar3->M).M[0][1] + fStack_54 * (pTVar3->M).M[1][1] +
         (pTVar3->Trans).field0_0x0._s_0.Y;
    local_48._0_4_ = 0.0;
    local_48._4_4_ = 1.4013e-45;
    local_48._16_4_ = 1.4013e-45;
    local_48._20_4_ = param_1->Scale;
    MoveCursor(this,(FMoveCursor *)local_48);
    this->bHasDragSelectedSinceFocused = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// HandleTypeChar @ 1429f2f30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::HandleTypeChar(FSlateEditableTextLayout *this,wchar_t param_1)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  FTextLocation local_res8;
  FTextLocation local_res18 [2];
  undefined1 local_38 [16];
  
  cVar5 = (**(code **)*this->OwnerWidget)();
  if ((cVar5 == '\0') && (((param_1 & 0xffe0U) != 0 || (param_1 == L'\t')))) {
    bVar6 = AnyTextSelected(this);
    if (bVar6) {
      DeleteSelectedText(this);
    }
    local_res8.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
    uVar8 = (this->CursorInfo).CursorPosition.Offset +
            (uint)((this->CursorInfo).CursorAlignment == Right);
    local_res8.Offset = 0;
    if (0 < (int)uVar8) {
      local_res8.Offset = uVar8;
    }
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    lVar9 = (longlong)local_res8.LineIndex;
    pFVar2 = (this->TextLayout).Object;
    uVar8 = 0;
    if (local_res8.LineIndex < *(int *)&pFVar2->field_0x28) {
      uVar8 = (uint)~local_res8.LineIndex >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    lVar3 = *(longlong *)&pFVar2->field_0x20;
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    FTextLayout::InsertAt((FTextLayout *)(this->TextLayout).Object,&local_res8,param_1);
    if (((TOptional<FTextLocation> *)local_38 != &this->SelectionStart) &&
       ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    iVar1 = *(int *)(*(longlong *)(lVar9 * 0x70 + lVar3) + 8);
    local_res18[0].LineIndex = local_res8.LineIndex;
    local_res18[0].Offset = iVar1 + -1;
    if (iVar1 == 0) {
      local_res18[0].Offset = 0;
    }
    if ((int)(local_res8.Offset + 1U) < local_res18[0].Offset) {
      local_res18[0].Offset = local_res8.Offset + 1U;
    }
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,local_res18);
    UpdateCursorHighlight(this);
    return true;
  }
  return false;
}

// HasActiveContextMenu @ 1429f3140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::HasActiveContextMenu(FSlateEditableTextLayout *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((this->ActiveContextMenu).bIsPendingSummon == false) &&
     ((((this->ActiveContextMenu).ActiveMenu.Object == (IMenu *)0x0 ||
       (pTVar1 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1))))
  {
    return false;
  }
  return true;
}

// HasTextChangedFromOriginal @ 1429f3e40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::HasTextChangedFromOriginal(FSlateEditableTextLayout *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  FString *pFVar4;
  FString *pFVar5;
  bool bVar6;
  FText local_18;
  
  cVar2 = (**(code **)*this->OwnerWidget)();
  if (cVar2 == '\0') {
    GetEditableText(this,&local_18);
    pFVar4 = FText::ToString(&local_18);
    pFVar5 = FText::ToString(&(this->OriginalText).Text);
    iVar3 = (pFVar4->Data).ArrayNum;
    iVar1 = (pFVar5->Data).ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) {
        bVar6 = false;
      }
      else {
        iVar3 = wcscmp((wchar_t *)(pFVar4->Data).AllocatorInstance.Data,
                       (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
        bVar6 = iVar3 != 0;
      }
    }
    else {
      bVar6 = iVar1 + iVar3 != 1;
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return bVar6;
  }
  return false;
}

// InsertNewLineAtCursorImpl @ 1429f45d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::InsertNewLineAtCursorImpl(FSlateEditableTextLayout *this)

{
  FCursorInfo *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TOptional<FTextLocation> *pTVar4;
  int iVar5;
  FTextLocation local_res8;
  undefined1 local_res10 [12];
  undefined4 local_res1c;
  undefined8 local_28 [2];
  
  cVar2 = (**(code **)((longlong)*this->OwnerWidget + 0x10))();
  if (cVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget->IsMultiLineTextEdit()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                       ,0x85a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = &this->CursorInfo;
  local_res10._0_4_ = (this_00->CursorPosition).LineIndex;
  iVar5 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res10._4_4_ = 0;
  if (0 < iVar5) {
    local_res10._4_4_ = iVar5;
  }
  pTVar4 = (TOptional<FTextLocation> *)local_res10;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar4 = &this->SelectionStart;
  }
  if (((pTVar4->TypedValue).LineIndex != local_res10._0_4_) ||
     ((pTVar4->TypedValue).Offset != local_res10._4_4_)) {
    DeleteSelectedText(this);
  }
  local_res8.LineIndex = (this_00->CursorPosition).LineIndex;
  iVar5 = (this->CursorInfo).CursorPosition.Offset +
          (uint)((this->CursorInfo).CursorAlignment == Right);
  local_res8.Offset = 0;
  if (0 < iVar5) {
    local_res8.Offset = iVar5;
  }
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = FTextLayout::SplitLineAt((FTextLayout *)(this->TextLayout).Object,&local_res8);
  if (bVar3) {
    local_res10._8_4_ = local_res8.LineIndex + 1;
    local_res1c = 0;
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (this_00,(FTextLayout *)(this->TextLayout).Object,(FTextLocation *)(local_res10 + 8));
  }
  if (((TOptional<FTextLocation> *)local_28 != &this->SelectionStart) &&
     ((this->SelectionStart).bIsSet != false)) {
    (this->SelectionStart).bIsSet = false;
  }
  UpdateCursorHighlight(this);
  return;
}

// InsertRunAtCursor @ 1429f4740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::InsertRunAtCursor
          (FSlateEditableTextLayout *this,TSharedRef<IRun,1> *param_1)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FTextLocation local_res8;
  FTextLocation local_res18 [2];
  void *local_48;
  undefined8 local_40;
  TSharedRef<IRun,1> local_38;
  
  cVar4 = (**(code **)*this->OwnerWidget)();
  if (cVar4 == '\0') {
    BeginEditTransation(this);
    DeleteSelectedText(this);
    local_res8.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
    uVar7 = (this->CursorInfo).CursorPosition.Offset +
            (uint)((this->CursorInfo).CursorAlignment == Right);
    uVar6 = 0;
    local_res8.Offset = uVar6;
    if (0 < (int)uVar7) {
      local_res8.Offset = uVar7;
    }
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_38.Object = param_1->Object;
    pFVar2 = (this->TextLayout).Object;
    local_38.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTextLayout::InsertAt((FTextLayout *)pFVar2,&local_res8,&local_38,true);
    local_48 = (void *)0x0;
    local_40 = 0;
    (**(code **)((longlong)*param_1->Object + 0x88))(param_1->Object,&local_48);
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar8 = (longlong)local_res8.LineIndex;
    pFVar2 = (this->TextLayout).Object;
    uVar7 = uVar6;
    if (local_res8.LineIndex < *(int *)&pFVar2->field_0x28) {
      uVar7 = (uint)~local_res8.LineIndex >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = *(int *)(*(longlong *)(lVar8 * 0x70 + *(longlong *)&pFVar2->field_0x20) + 8);
    local_res18[0].Offset = iVar1 - 1;
    if (iVar1 == 0) {
      local_res18[0].Offset = uVar6;
    }
    uVar7 = (int)local_40 - 1;
    if ((int)local_40 == 0) {
      uVar7 = uVar6;
    }
    local_res18[0].LineIndex = local_res8.LineIndex;
    if ((int)(uVar7 + local_res8.Offset) < local_res18[0].Offset) {
      local_res18[0].Offset = uVar7 + local_res8.Offset;
    }
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,local_res18);
    UpdateCursorHighlight(this);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    EndEditTransaction(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InsertTextAtCursor @ 1429f49e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::InsertTextAtCursor(FSlateEditableTextLayout *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  cVar3 = (**(code **)*this->OwnerWidget)();
  if (cVar3 == '\0') {
    BeginEditTransation(this);
    DeleteSelectedText(this);
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      InsertTextAtCursorImpl(this,param_1);
      if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
    }
    EndEditTransaction(this);
  }
  return;
}

// InsertTextAtCursorImpl @ 1429f4ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::InsertTextAtCursorImpl(FSlateEditableTextLayout *this,FString *param_1)

{
  FCursorInfo *this_00;
  FScriptContainerElement *pFVar1;
  FSlateTextLayout *pFVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  bool local_res8 [8];
  undefined1 local_res18 [8];
  FTextLocation local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_a8;
  FTextLocation local_98;
  TArray<FTextRange,TSizedDefaultAllocator<32>_> local_90;
  FTextLocation local_80;
  FTextLocation local_78;
  <lambda_1> local_70;
  FScriptContainerElement *local_68;
  FString local_60;
  undefined1 local_50 [24];
  
  cVar5 = (**(code **)*this->OwnerWidget)();
  if (cVar5 == '\0') {
    local_a8.ArrayNum = (param_1->Data).ArrayNum;
    lVar12 = (longlong)local_a8.ArrayNum;
    iVar8 = local_a8.ArrayNum + -1;
    if (local_a8.ArrayNum == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_a8.ArrayNum == 0) {
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                   &local_a8.ArrayMax);
        memcpy(local_a8.AllocatorInstance.Data,pFVar1,lVar12 * 2);
      }
      local_res8[0] = (bool)(**(code **)((longlong)*this->OwnerWidget + 0x10))();
      local_70.bIsMultiLine = local_res8;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      RemoveAll<_FSlateEditableTextLayout::InsertTextAtCursorImpl_::__l6::<lambda_1>_>
                (&local_a8,&local_70);
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      FTextRange::CalculateLineRangesFromString((FString *)&local_a8,&local_90);
      bVar6 = AnyTextSelected(this);
      if (bVar6) {
        DeleteSelectedText(this);
      }
      iVar8 = local_90.ArrayNum;
      uVar10 = (ulonglong)local_90.ArrayNum;
      this_00 = &this->CursorInfo;
      bVar6 = true;
      local_68 = local_90.AllocatorInstance.Data + uVar10 * 8;
      FVar13.Data = local_90.AllocatorInstance.Data;
      while( true ) {
        pFVar1 = local_68;
        if ((int)uVar10 != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FTextRange,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar13.Data == pFVar1) break;
        if (!bVar6) {
          local_98.LineIndex = (this_00->CursorPosition).LineIndex;
          iVar11 = (this->CursorInfo).CursorPosition.Offset +
                   (uint)((this->CursorInfo).CursorAlignment == Right);
          local_98.Offset = 0;
          if (0 < iVar11) {
            local_98.Offset = iVar11;
          }
          if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = FTextLayout::SplitLineAt((FTextLayout *)(this->TextLayout).Object,&local_98);
          if (bVar6) {
            local_80.LineIndex = local_98.LineIndex + 1;
            local_80.Offset = 0;
            if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                      (this_00,(FTextLayout *)(this->TextLayout).Object,&local_80);
          }
        }
        bVar6 = false;
        ::FString::Mid((FString *)&local_a8,&local_60,*(int *)FVar13.Data,
                       *(int *)(FVar13.Data + 4) - *(int *)FVar13.Data);
        local_res20.LineIndex = (this_00->CursorPosition).LineIndex;
        iVar11 = (this->CursorInfo).CursorPosition.Offset +
                 (uint)((this->CursorInfo).CursorAlignment == Right);
        local_res20.Offset = 0;
        if (0 < iVar11) {
          local_res20.Offset = iVar11;
        }
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar12 = (longlong)local_res20.LineIndex;
        pFVar2 = (this->TextLayout).Object;
        uVar9 = 0;
        if (local_res20.LineIndex < *(int *)&pFVar2->field_0x28) {
          uVar9 = (uint)~local_res20.LineIndex >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)&pFVar2->field_0x20;
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FTextLayout::InsertAt((FTextLayout *)(this->TextLayout).Object,&local_res20,&local_60);
        if (((TOptional<FTextLocation> *)local_50 != &this->SelectionStart) &&
           ((this->SelectionStart).bIsSet != false)) {
          (this->SelectionStart).bIsSet = false;
        }
        iVar11 = *(int *)(*(longlong *)(lVar12 * 0x70 + lVar3) + 8);
        local_78.Offset = iVar11 + -1;
        if (iVar11 == 0) {
          local_78.Offset = 0;
        }
        iVar11 = local_60.Data.ArrayNum + -1;
        local_78.LineIndex = local_res20.LineIndex;
        if (local_60.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        if (iVar11 + local_res20.Offset < local_78.Offset) {
          local_78.Offset = iVar11 + local_res20.Offset;
        }
        if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                  (this_00,(FTextLayout *)(this->TextLayout).Object,&local_78);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        uVar10 = local_90._8_8_ & 0xffffffff;
        FVar13.Data = FVar13.Data + 8;
      }
      UpdateCursorHighlight(this);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// IsAtBeginningOfDocument @ 1429f4f00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsAtBeginningOfDocument
          (FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  if ((param_1->LineIndex == 0) && (param_1->Offset == 0)) {
    return true;
  }
  return false;
}

// IsAtBeginningOfLine @ 1429f4f20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsAtBeginningOfLine(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  return param_1->Offset == 0;
}

// IsAtEndOfDocument @ 1429f4f30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsAtEndOfDocument(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  uint uVar1;
  int iVar2;
  FSlateTextLayout *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (this->TextLayout).Object;
  iVar8 = *(int *)&pFVar3->field_0x28;
  if (iVar8 == 0) {
    return true;
  }
  uVar1 = param_1->LineIndex;
  if (iVar8 - 1U == uVar1) {
    uVar7 = 0;
    if ((int)uVar1 < iVar8) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar2 = *(int *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&pFVar3->field_0x20) +
                    8);
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    if (iVar8 == param_1->Offset) {
      return true;
    }
  }
  return false;
}

// IsAtEndOfLine @ 1429f5020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsAtEndOfLine(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  uint uVar1;
  int iVar2;
  FSlateTextLayout *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (this->TextLayout).Object;
  uVar1 = param_1->LineIndex;
  uVar7 = 0;
  if ((int)uVar1 < *(int *)&pFVar3->field_0x28) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar2 = *(int *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&pFVar3->field_0x20) + 8
                  );
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  return iVar8 == param_1->Offset;
}

// IsAtWordStart @ 1429f50f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsAtWordStart(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTextSelection local_18;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  FTextLayout::GetWordAt((FTextLayout *)(this->TextLayout).Object,&local_18,param_1);
  bVar3 = SBORROW4(local_18.LocationA.LineIndex,local_18.LocationB.LineIndex);
  iVar1 = local_18.LocationA.LineIndex - local_18.LocationB.LineIndex;
  if (local_18.LocationA.LineIndex == local_18.LocationB.LineIndex) {
    bVar3 = SBORROW4(local_18.LocationA.Offset,local_18.LocationB.Offset);
    iVar1 = local_18.LocationA.Offset - local_18.LocationB.Offset;
  }
  if (bVar3 != iVar1 < 0) {
    local_18.LocationB.LineIndex = local_18.LocationA.LineIndex;
    local_18.LocationB.Offset = local_18.LocationA.Offset;
  }
  if ((((local_18.LocationB.LineIndex != -1) && (local_18.LocationB.Offset != -1)) &&
      (local_18.LocationB.LineIndex == param_1->LineIndex)) &&
     (local_18.LocationB.Offset == param_1->Offset)) {
    return true;
  }
  return false;
}

// IsTextSelectedAt @ 1429f64e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsTextSelectedAt
          (FSlateEditableTextLayout *this,FDeprecateVector2DParameter *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  TOptional<FTextLocation> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int iStackX_c;
  TVector2<double>_u_0 local_res18;
  double local_58;
  double dStack_50;
  
  iVar1 = (this->CursorInfo).CursorPosition.LineIndex;
  iVar10 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  iStackX_c = 0;
  if (0 < iVar10) {
    iStackX_c = iVar10;
  }
  local_res8 = iVar1;
  pTVar7 = (TOptional<FTextLocation> *)&local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar7 = &this->SelectionStart;
  }
  if (((pTVar7->TypedValue).LineIndex == iVar1) && ((pTVar7->TypedValue).Offset == iStackX_c)) {
    return false;
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_58 = (double)SUB84(*param_1,0);
  dStack_50 = (double)SUB84(*param_1,4);
  FTextLayout::GetTextLocationAt
            ((FTextLayout *)(this->TextLayout).Object,(TVector2<double> *)&local_res18._s_0,
             (ETextHitPoint *)&local_58);
  pTVar7 = (TOptional<FTextLocation> *)&local_res8;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar7 = &this->SelectionStart;
  }
  iVar8 = (pTVar7->TypedValue).Offset;
  iVar6 = (pTVar7->TypedValue).LineIndex;
  iVar10 = iVar6;
  if (iVar6 == iVar1) {
    if (iVar8 < iStackX_c) goto LAB_1429f6675;
  }
  else if (iVar6 < iVar1) goto LAB_1429f6675;
  iVar10 = iVar1;
LAB_1429f6675:
  iVar11 = iStackX_c;
  if (iVar6 == iVar1) {
    if (iVar8 < iStackX_c) {
      iVar11 = iVar8;
    }
  }
  else if (iVar6 < iVar1) {
    iVar11 = iVar8;
  }
  bVar4 = SBORROW4(iVar6,iVar1);
  iVar2 = iVar6 - iVar1;
  if (iVar6 == iVar1) {
    bVar4 = SBORROW4(iVar8,iStackX_c);
    iVar2 = iVar8 - iStackX_c;
  }
  iVar9 = iVar1;
  if ((iVar6 != iVar1 || iVar8 != iStackX_c) && bVar4 == iVar2 < 0) {
    iVar9 = iVar6;
  }
  bVar4 = SBORROW4(iVar6,iVar1);
  iVar2 = iVar6 - iVar1;
  if (iVar6 == iVar1) {
    bVar4 = SBORROW4(iVar8,iStackX_c);
    iVar2 = iVar8 - iStackX_c;
  }
  if ((iVar6 != iVar1 || iVar8 != iStackX_c) && bVar4 == iVar2 < 0) {
    iStackX_c = iVar8;
  }
  if (iVar10 == iVar9) {
    if (((local_res18._0_4_ == iVar10) && (iVar11 <= (int)local_res18._4_4_)) &&
       ((int)local_res18._4_4_ <= iStackX_c)) {
      return true;
    }
  }
  else {
    if (iVar10 == local_res18._0_4_) {
      return iVar11 <= (int)local_res18._4_4_;
    }
    if (iVar9 == local_res18._0_4_) {
      return (int)local_res18._4_4_ <= iStackX_c;
    }
    if ((iVar10 < (int)local_res18._0_4_) && ((int)local_res18._0_4_ < iVar9)) {
      return true;
    }
  }
  return false;
}

// IsTextSelectedAt @ 1429f6750

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::IsTextSelectedAt
          (FSlateEditableTextLayout *this,FGeometry *param_1,FDeprecateVector2DParameter *param_2)

{
  bool bVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  float local_28;
  float fStack_24;
  TTransform2<float> local_20;
  
  pTVar2 = Inverse<TTransform2<float>_>(&local_20,&param_1->AccumulatedRenderTransform);
  fStack_24 = SUB84(*param_2,4);
  local_28 = SUB84(*param_2,0);
  fVar3 = fStack_24 * (pTVar2->M).M[1][0];
  fStack_24 = (local_28 * (pTVar2->M).M[0][1] + fStack_24 * (pTVar2->M).M[1][1] +
              (pTVar2->Trans).field0_0x0._s_0.Y) * param_1->Scale;
  local_28 = (fVar3 + local_28 * (pTVar2->M).M[0][0] + (pTVar2->Trans).field0_0x0._s_0.X) *
             param_1->Scale;
  bVar1 = IsTextSelectedAt(this,(FDeprecateVector2DParameter *)&local_28);
  return bVar1;
}

// JumpTo @ 1429f6820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::JumpTo
          (FSlateEditableTextLayout *this,ETextLocation param_1,ECursorAction param_2)

{
  undefined1 *puVar1;
  FCursorInfo *pFVar2;
  TOptional<FTextLocation> *pTVar3;
  float fVar4;
  float fVar5;
  ECursorAlignment EVar6;
  longlong lVar7;
  FTextLocation FVar8;
  FTextLocation FVar9;
  FTextLocation FVar10;
  FTextLocation FVar11;
  bool bVar12;
  FSlateTextLayout *pFVar13;
  FSlateTextLayout *pFVar14;
  TVector2<double> *pTVar15;
  ISlateEditableTextWidget *pIVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  code *pcVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 local_res10 [16];
  TOptional<SlateEditableTextTypes::ECursorAlignment> local_res20 [4];
  TOptional<SlateEditableTextTypes::ECursorAlignment> local_188 [4];
  FTextLocation local_180;
  FTextLocation local_178;
  FTextLocation local_170;
  FTextLocation local_168;
  int local_160;
  int iStack_15c;
  int local_158;
  uint uStack_154;
  FTextLocation local_150;
  FTextLocation local_148;
  FTextLocation local_140;
  FTextLocation local_138;
  longlong local_130;
  int local_128;
  int local_124;
  FTextLocation local_120;
  int local_118;
  int local_114;
  FTextLocation local_110;
  int local_108;
  int local_104;
  FTextLocation local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  FTextLocation local_e8;
  int local_e0;
  int local_dc;
  FTextLocation local_d8;
  FTextLocation local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 local_94;
  FTextLocation local_88;
  FTextLocation local_7c;
  TVector2<double> local_70 [3];
  
  if (NextPage < param_1) {
    return;
  }
  switch(param_1) {
  case BeginningOfDocument:
    pFVar2 = &this->CursorInfo;
    local_160 = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_120.LineIndex = 0;
    local_120.Offset = 0;
    pTVar3 = &this->SelectionStart;
    iStack_15c = 0;
    if (0 < iVar18) {
      iStack_15c = iVar18;
    }
    if (param_2 == SelectText) {
      if (((this->SelectionStart).bIsSet == false) &&
         ((TOptional<FTextLocation> *)&local_160 != pTVar3)) {
        FVar10.Offset = iStack_15c;
        FVar10.LineIndex = local_160;
        pTVar3->TypedValue = FVar10;
        (this->SelectionStart).bIsSet = true;
      }
    }
    else if (((TOptional<FTextLocation> *)&local_ac != pTVar3) &&
            ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (pFVar2,(FTextLayout *)pFVar13,&local_120);
    pIVar16 = this->OwnerWidget;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    piVar19 = &local_118;
    local_114 = 0;
    if (0 < iVar18) {
      local_114 = iVar18;
    }
    pcVar22 = *(code **)((longlong)*pIVar16 + 0xc0);
    local_118 = (pFVar2->CursorPosition).LineIndex;
    break;
  case EndOfDocument:
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    bVar12 = FTextLayout::IsEmpty((FTextLayout *)pFVar13);
    if (bVar12) {
      return;
    }
    pFVar2 = &this->CursorInfo;
    uVar20 = 0;
    local_158 = (pFVar2->CursorPosition).LineIndex;
    uVar17 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    uStack_154 = uVar20;
    if (0 < (int)uVar17) {
      uStack_154 = uVar17;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    local_100.LineIndex = *(int *)&pFVar13->field_0x28 - 1;
    uVar17 = uVar20;
    if (local_100.LineIndex < *(int *)&pFVar13->field_0x28) {
      uVar17 = (uint)~local_100.LineIndex >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    iVar18 = *(int *)(*(longlong *)
                       ((longlong)local_100.LineIndex * 0x70 + *(longlong *)&pFVar13->field_0x20) +
                     8);
    pTVar3 = &this->SelectionStart;
    local_100.Offset = iVar18 - 1;
    if (iVar18 == 0) {
      local_100.Offset = uVar20;
    }
    if (param_2 == SelectText) {
      if (((this->SelectionStart).bIsSet == false) &&
         ((TOptional<FTextLocation> *)&local_158 != pTVar3)) {
        FVar11.Offset = uStack_154;
        FVar11.LineIndex = local_158;
        pTVar3->TypedValue = FVar11;
        (this->SelectionStart).bIsSet = true;
      }
    }
    else if (((TOptional<FTextLocation> *)&local_94 != pTVar3) &&
            ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (pFVar2,(FTextLayout *)pFVar13,&local_100);
    pIVar16 = this->OwnerWidget;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    piVar19 = &local_f8;
    local_f4 = 0;
    if (0 < iVar18) {
      local_f4 = iVar18;
    }
    pcVar22 = *(code **)((longlong)*pIVar16 + 0xc0);
    local_f8 = (pFVar2->CursorPosition).LineIndex;
    break;
  case BeginningOfLine:
    pFVar2 = &this->CursorInfo;
    local_180.LineIndex = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_180.Offset = 0;
    if (0 < iVar18) {
      local_180.Offset = iVar18;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    iVar18 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)pFVar14,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)
                        &pFVar13->field_0x30,&local_180,(this->CursorInfo).CursorAlignment == Right)
    ;
    if (iVar18 < 0) {
      return;
    }
    if (*(int *)&pFVar13->field_0x38 <= iVar18) {
      return;
    }
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_d0.LineIndex = local_180.LineIndex;
    local_d0.Offset = *(int *)((longlong)iVar18 * 0x68 + 0x58 + *(longlong *)&pFVar13->field_0x30);
    pTVar3 = &this->SelectionStart;
    if (param_2 == SelectText) {
      if (((this->SelectionStart).bIsSet == false) &&
         ((TOptional<FTextLocation> *)&local_c8 != pTVar3)) {
        FVar8.Offset = local_180.Offset;
        FVar8.LineIndex = local_180.LineIndex;
        pTVar3->TypedValue = FVar8;
        (this->SelectionStart).bIsSet = true;
      }
    }
    else if (((TOptional<FTextLocation> *)&local_b8 != pTVar3) &&
            ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (pFVar2,(FTextLayout *)pFVar13,&local_d0);
    pIVar16 = this->OwnerWidget;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    piVar19 = &local_128;
    local_124 = 0;
    if (0 < iVar18) {
      local_124 = iVar18;
    }
    pcVar22 = *(code **)((longlong)*pIVar16 + 0xc0);
    local_128 = (pFVar2->CursorPosition).LineIndex;
    break;
  case EndOfLine:
    pFVar2 = &this->CursorInfo;
    iVar21 = 0;
    local_178.LineIndex = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_178.Offset = iVar21;
    if (0 < iVar18) {
      local_178.Offset = iVar18;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    iVar18 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)pFVar14,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)
                        &pFVar13->field_0x30,&local_178,(this->CursorInfo).CursorAlignment == Right)
    ;
    if (iVar18 < 0) {
      return;
    }
    if (*(int *)&pFVar13->field_0x38 <= iVar18) {
      return;
    }
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_110.Offset =
         *(int *)((longlong)iVar18 * 0x68 + 0x5c + *(longlong *)&pFVar13->field_0x30) + -1;
    local_110.LineIndex = local_178.LineIndex;
    if (local_110.Offset < 0) {
      local_110.Offset = iVar21;
    }
    pTVar3 = &this->SelectionStart;
    if (param_2 == SelectText) {
      if (((this->SelectionStart).bIsSet == false) &&
         ((TOptional<FTextLocation> *)&local_c0 != pTVar3)) {
        FVar9.Offset = local_178.Offset;
        FVar9.LineIndex = local_178.LineIndex;
        pTVar3->TypedValue = FVar9;
        (this->SelectionStart).bIsSet = true;
      }
    }
    else if (((TOptional<FTextLocation> *)&local_a0 != pTVar3) &&
            ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndAlignment
              (pFVar2,(FTextLayout *)pFVar13,&local_110,Right);
    pIVar16 = this->OwnerWidget;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    piVar19 = &local_108;
    local_104 = iVar21;
    if (0 < iVar18) {
      local_104 = iVar18;
    }
    pcVar22 = *(code **)((longlong)*pIVar16 + 0xc0);
    local_108 = (pFVar2->CursorPosition).LineIndex;
    break;
  case PreviousPage:
    pFVar2 = &this->CursorInfo;
    iVar21 = 0;
    local_150.LineIndex = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_150.Offset = iVar21;
    if (0 < iVar18) {
      local_150.Offset = iVar18;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    puVar1 = &pFVar13->field_0x30;
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    iVar18 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)pFVar14,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)puVar1,
                        &local_150,(this->CursorInfo).CursorAlignment == Right);
    if (iVar18 < 0) {
      return;
    }
    if (*(int *)&pFVar13->field_0x38 <= iVar18) {
      return;
    }
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_170.LineIndex = 0;
    local_170.Offset = 0;
    local_130 = (longlong)iVar18 * 0x68 + *(longlong *)puVar1;
    local_148.Offset = local_150.Offset;
    local_148.LineIndex = local_150.LineIndex;
    local_res20[0].bIsSet = false;
    iVar18 = `FSlateEditableTextLayout::JumpTo'::__l2::<lambda_1>::operator()
                       (local_res10,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)puVar1,
                        (this->CachedSize).field0_0x0._s_0.Y);
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    TranslateLocationVertical
              (this,&local_148,-iVar18,*(float *)&pFVar14->field_0x94,&local_170,local_res20);
    pTVar3 = &this->SelectionStart;
    if (param_2 == SelectText) {
      if (((this->SelectionStart).bIsSet == false) &&
         ((TOptional<FTextLocation> *)&local_148 != pTVar3)) {
        pTVar3->TypedValue = local_148;
        (this->SelectionStart).bIsSet = true;
      }
    }
    else if (((TOptional<FTextLocation> *)&local_88 != pTVar3) &&
            ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
    if (local_res20[0].bIsSet == false) {
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                (pFVar2,(FTextLayout *)pFVar14,&local_170);
    }
    else {
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndAlignment
                (pFVar2,(FTextLayout *)pFVar14,&local_170,local_res20[0].TypedValue);
    }
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_f0 = (pFVar2->CursorPosition).LineIndex;
    local_ec = iVar21;
    if (0 < iVar18) {
      local_ec = iVar18;
    }
    (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_f0);
    UpdatePreferredCursorScreenOffsetInLine(this);
    UpdateCursorHighlight(this);
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    EVar6 = (this->CursorInfo).CursorAlignment;
    local_e8.LineIndex = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset + (uint)(EVar6 == Right);
    local_e8.Offset = iVar21;
    if (0 < iVar18) {
      local_e8.Offset = iVar18;
    }
    iVar18 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)pFVar14,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)puVar1,
                        &local_e8,EVar6 == Right);
    if (iVar18 < 0) {
      return;
    }
    if (*(int *)&pFVar13->field_0x38 <= iVar18) {
      return;
    }
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    lVar7 = *(longlong *)puVar1;
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    fVar25 = (float)((*(double *)((longlong)iVar18 * 0x68 + 0x38 + lVar7) -
                     *(double *)(local_130 + 0x38)) / (double)*(float *)&pFVar13->field_0x94) +
             (this->ScrollOffset).field0_0x0._s_0.Y;
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    (this->ScrollOffset).field0_0x0._s_0.Y = fVar25;
    goto LAB_1429f72f7;
  case NextPage:
    pFVar2 = &this->CursorInfo;
    iVar21 = 0;
    local_140.LineIndex = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_140.Offset = iVar21;
    if (0 < iVar18) {
      local_140.Offset = iVar18;
    }
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    puVar1 = &pFVar13->field_0x30;
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    iVar18 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)pFVar14,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)puVar1,
                        &local_140,(this->CursorInfo).CursorAlignment == Right);
    if (iVar18 < 0) {
      return;
    }
    if (*(int *)&pFVar13->field_0x38 <= iVar18) {
      return;
    }
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    local_168.LineIndex = 0;
    local_168.Offset = 0;
    local_130 = (longlong)iVar18 * 0x68 + *(longlong *)puVar1;
    local_138.Offset = local_140.Offset;
    local_138.LineIndex = local_140.LineIndex;
    local_188[0].bIsSet = false;
    iVar18 = `FSlateEditableTextLayout::JumpTo'::__l2::<lambda_1>::operator()
                       (local_res10,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)puVar1,
                        (this->CachedSize).field0_0x0._s_0.Y);
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    TranslateLocationVertical
              (this,&local_138,iVar18,*(float *)&pFVar14->field_0x94,&local_168,local_188);
    pTVar3 = &this->SelectionStart;
    if (param_2 == SelectText) {
      if (((this->SelectionStart).bIsSet == false) &&
         ((TOptional<FTextLocation> *)&local_138 != pTVar3)) {
        pTVar3->TypedValue = local_138;
        (this->SelectionStart).bIsSet = true;
      }
    }
    else if (((TOptional<FTextLocation> *)&local_7c != pTVar3) &&
            ((this->SelectionStart).bIsSet != false)) {
      (this->SelectionStart).bIsSet = false;
    }
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
    if (local_188[0].bIsSet == false) {
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
                (pFVar2,(FTextLayout *)pFVar14,&local_168);
    }
    else {
      SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndAlignment
                (pFVar2,(FTextLayout *)pFVar14,&local_168,local_188[0].TypedValue);
    }
    iVar18 = (this->CursorInfo).CursorPosition.Offset +
             (uint)((this->CursorInfo).CursorAlignment == Right);
    local_e0 = (pFVar2->CursorPosition).LineIndex;
    local_dc = iVar21;
    if (0 < iVar18) {
      local_dc = iVar18;
    }
    (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_e0);
    UpdatePreferredCursorScreenOffsetInLine(this);
    UpdateCursorHighlight(this);
    pFVar14 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    EVar6 = (this->CursorInfo).CursorAlignment;
    local_d8.LineIndex = (pFVar2->CursorPosition).LineIndex;
    iVar18 = (this->CursorInfo).CursorPosition.Offset + (uint)(EVar6 == Right);
    local_d8.Offset = iVar21;
    if (0 < iVar18) {
      local_d8.Offset = iVar18;
    }
    iVar18 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)pFVar14,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)puVar1,
                        &local_d8,EVar6 == Right);
    if (iVar18 < 0) {
      return;
    }
    if (*(int *)&pFVar13->field_0x38 <= iVar18) {
      return;
    }
    if ((iVar18 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    lVar7 = *(longlong *)puVar1;
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    dVar24 = *(double *)((longlong)iVar18 * 0x68 + 0x38 + lVar7);
    fVar25 = *(float *)&pFVar13->field_0x94;
    dVar23 = *(double *)(local_130 + 0x38);
    fVar4 = (this->ScrollOffset).field0_0x0._s_0.Y;
    pFVar13 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    fVar5 = (this->CachedSize).field0_0x0._s_0.Y;
    pTVar15 = FTextLayout::GetSize((FTextLayout *)pFVar13,local_70);
    dVar23 = (double)((float)((dVar24 - dVar23) / (double)fVar25) + fVar4);
    dVar24 = (pTVar15->field0_0x0)._s_0.Y - (double)fVar5;
    if (dVar23 <= dVar24) {
      dVar24 = dVar23;
    }
    (this->ScrollOffset).field0_0x0._s_0.Y = (float)dVar24;
LAB_1429f72f7:
    if ((this->PositionToScrollIntoView).bIsSet == false) {
      return;
    }
    (this->PositionToScrollIntoView).bIsSet = false;
    return;
  }
  (*pcVar22)(pIVar16,piVar19);
  UpdatePreferredCursorScreenOffsetInLine(this);
  UpdateCursorHighlight(this);
  return;
}

// LoadText @ 1429f7360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::LoadText(FSlateEditableTextLayout *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter,
             &local_28);
  if ((*(int *)&(this->BoundText).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->BoundText).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      SetText(this,&this->BoundText);
      if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001429f73fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// MakeUndoState @ 1429f7430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::MakeUndoState(FSlateEditableTextLayout *this,FUndoState *param_1)

{
  ITextData *pIVar1;
  int iVar2;
  undefined4 uVar3;
  ECursorAlignment EVar4;
  ETextDirection EVar5;
  undefined2 uVar6;
  undefined1 local_res8 [8];
  FText local_18;
  
  GetEditableText(this,&local_18);
  pIVar1 = (param_1->Text).TextData.Reference;
  if (pIVar1 != local_18.TextData.Reference) {
    (param_1->Text).TextData.Reference = local_18.TextData.Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (param_1->Text).Flags = local_18.Flags;
  iVar2 = (this->CursorInfo).CursorPosition.Offset;
  EVar4 = (this->CursorInfo).CursorAlignment;
  EVar5 = (this->CursorInfo).CursorTextDirection;
  uVar6 = *(undefined2 *)&(this->CursorInfo).field_0xa;
  uVar3 = *(undefined4 *)&(this->CursorInfo).field_0xc;
  (param_1->CursorInfo).CursorPosition.LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  (param_1->CursorInfo).CursorPosition.Offset = iVar2;
  (param_1->CursorInfo).CursorAlignment = EVar4;
  (param_1->CursorInfo).CursorTextDirection = EVar5;
  *(undefined2 *)&(param_1->CursorInfo).field_0xa = uVar6;
  *(undefined4 *)&(param_1->CursorInfo).field_0xc = uVar3;
  (param_1->CursorInfo).LastCursorInteractionTime = (this->CursorInfo).LastCursorInteractionTime;
  if (&this->SelectionStart != &param_1->SelectionStart) {
    if ((this->SelectionStart).bIsSet == false) {
      if ((param_1->SelectionStart).bIsSet != false) {
        (param_1->SelectionStart).bIsSet = false;
      }
    }
    else {
      (param_1->SelectionStart).TypedValue = (this->SelectionStart).TypedValue;
      (param_1->SelectionStart).bIsSet = true;
    }
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// MoveCursor @ 1429f7710

/* WARNING: Removing unreachable block (ram,0x0001429f7a23) */
/* WARNING: Removing unreachable block (ram,0x0001429f7a3d) */
/* WARNING: Removing unreachable block (ram,0x0001429f7a40) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::MoveCursor(FSlateEditableTextLayout *this,FMoveCursor *param_1)

{
  TOptional<FTextLocation> *pTVar1;
  float fVar2;
  ECursorMoveMethod EVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  FSlateApplication *pFVar10;
  FSlateTextLayout *pFVar11;
  ITextInputMethodSystem *pIVar12;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *pTVar13;
  FTextLocation *pFVar14;
  int iVar15;
  int iVar16;
  TOptional<SlateEditableTextTypes::ECursorAlignment> local_res20 [4];
  FTextLocation local_e8;
  FTextLocation local_e0;
  FTextLocation local_d8;
  FTextLocation local_d0 [2];
  int local_c0;
  int local_bc;
  FTextInputMethodContext *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FTextInputMethodContext *local_a8;
  TReferenceControllerBase<1> *local_a0;
  double local_98;
  double local_90;
  FTextLocation local_88;
  FTextLocation local_80;
  undefined1 local_78 [16];
  TReferenceControllerBase<1> *local_68;
  TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> local_60;
  FTextLocation local_50 [5];
  
  pFVar10 = FSlateApplication::Get();
  bVar5 = FSlateApplication::AllowMoveCursor(pFVar10);
  if (!bVar5) {
    return true;
  }
  if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  cVar7 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
  if ((cVar7 != '\0') && (param_1->Method != ScreenPosition)) {
    return true;
  }
  iVar16 = (this->CursorInfo).CursorPosition.LineIndex;
  bVar5 = true;
  local_e8.LineIndex = 0;
  local_e8.Offset = 0;
  iVar15 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  local_e0.Offset = 0;
  if (0 < iVar15) {
    local_e0.Offset = iVar15;
  }
  local_e0.LineIndex = iVar16;
  if ((param_1->Action == MoveCursor) && (EVar3 = param_1->Method, EVar3 != ScreenPosition)) {
    bVar8 = AnyTextSelected(this);
    if (bVar8) {
      fVar2 = (param_1->DirectionOrPosition).field0_0x0._s_0.X;
      bVar5 = fVar2 == 0.0;
      if ((EVar3 != Cardinal) ||
         ((0.0 <= (float)(int)fVar2 &&
          (0.0 <= (float)(int)(param_1->DirectionOrPosition).field0_0x0._s_0.Y)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((this->SelectionStart).bIsSet == false) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar16 = local_e0.LineIndex;
      }
      local_d8 = (this->SelectionStart).TypedValue;
      local_d0[0] = local_e0;
      iVar15 = local_d8.LineIndex;
      pFVar14 = &local_d8;
      if (bVar8) {
        if (iVar15 == iVar16) {
          if (local_e0.Offset <= local_d8.Offset) {
            pFVar14 = local_d0;
          }
        }
        else if (iVar16 <= iVar15) {
          pFVar14 = local_d0;
        }
      }
      else if (iVar15 == iVar16) {
        if (local_d8.Offset <= local_e0.Offset) {
          pFVar14 = local_d0;
        }
      }
      else if (iVar15 <= iVar16) {
        pFVar14 = local_d0;
      }
      local_e8 = *pFVar14;
      local_e0 = local_e8;
      if (param_1->Granularity == Word) {
        bVar8 = IsAtWordStart(this,&local_e8);
        if (bVar8) {
          local_res20[0] =
               (TOptional<SlateEditableTextTypes::ECursorAlignment>)((ushort)local_res20[0] & 0xff);
          bVar8 = false;
          cVar7 = '\0';
          goto LAB_1429f7a4c;
        }
      }
    }
  }
  cVar7 = '\0';
  bVar8 = false;
  local_res20[0].bIsSet = false;
  if (bVar5) {
    if (param_1->Method == Cardinal) {
      if (param_1->Granularity == Character) {
        if ((param_1->DirectionOrPosition).field0_0x0._s_0.X == 0.0) {
          cVar7 = (**(code **)((longlong)*this->OwnerWidget + 0x10))();
          if (cVar7 == '\0') {
            return false;
          }
          TranslateLocationVertical
                    (this,&local_e0,(int)(param_1->DirectionOrPosition).field0_0x0._s_0.Y,
                     param_1->GeometryScale,&local_e8,local_res20);
          cVar7 = local_res20[0].bIsSet;
        }
        else {
          local_e8 = TranslatedLocation(this,&local_88,(schar)&local_e0);
          bVar8 = true;
          local_e8 = *(FTextLocation *)local_e8;
        }
      }
      else {
        local_e8 = ScanForWordBoundary(this,&local_80,(schar)&local_e0);
        bVar8 = true;
        local_e8 = *(FTextLocation *)local_e8;
      }
    }
    else if (param_1->Method == ScreenPosition) {
      pFVar11 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
      local_98 = (double)(param_1->DirectionOrPosition).field0_0x0._s_0.X *
                 (double)param_1->GeometryScale;
      local_90 = (double)(param_1->DirectionOrPosition).field0_0x0._s_0.Y *
                 (double)param_1->GeometryScale;
      local_e8 = FTextLayout::GetTextLocationAt
                           ((FTextLayout *)pFVar11,(TVector2<double> *)local_78,
                            (ETextHitPoint *)&local_98);
      bVar8 = true;
      local_e8 = *(FTextLocation *)local_e8;
    }
  }
LAB_1429f7a4c:
  pTVar1 = &this->SelectionStart;
  if (param_1->Action == SelectText) {
    if (((this->SelectionStart).bIsSet == false) &&
       ((TOptional<FTextLocation> *)&local_e0 != pTVar1)) {
      pTVar1->TypedValue = local_e0;
      (this->SelectionStart).bIsSet = true;
    }
  }
  else if (((TOptional<FTextLocation> *)local_50 != pTVar1) &&
          ((this->SelectionStart).bIsSet != false)) {
    (this->SelectionStart).bIsSet = false;
  }
  pFVar11 = TSharedPtr<FSlateTextLayout,1>::operator*<FSlateTextLayout>(&this->TextLayout);
  if (cVar7 == '\0') {
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)pFVar11,&local_e8);
  }
  else {
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndAlignment
              (&this->CursorInfo,(FTextLayout *)pFVar11,&local_e8,local_res20[0].TypedValue);
  }
  iVar16 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  local_bc = 0;
  if (0 < iVar16) {
    local_bc = iVar16;
  }
  local_c0 = (this->CursorInfo).CursorPosition.LineIndex;
  (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_c0);
  if (bVar8) {
    UpdatePreferredCursorScreenOffsetInLine(this);
  }
  UpdateCursorHighlight(this);
  if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  cVar7 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
  if (cVar7 != '\0') {
    pFVar10 = FSlateApplication::Get();
    pIVar12 = FSlateApplication::GetTextInputMethodSystem(pFVar10);
    if ((pIVar12 != (ITextInputMethodSystem *)0x0) &&
       (this->bHasRegisteredTextInputMethodContext != false)) {
      pcVar4 = *(code **)((longlong)*pIVar12 + 0x28);
      pTVar13 = TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::ToSharedRef
                          (&this->TextInputMethodContext,
                           (TSharedRef<FSlateEditableTextLayout::FTextInputMethodContext,1> *)
                           (local_78 + 8));
      local_b8 = pTVar13->Object;
      local_b0 = (pTVar13->SharedReferenceCount).ReferenceController;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar4)(pIVar12,&local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
      pcVar4 = *(code **)((longlong)*pIVar12 + 0x20);
      pTVar13 = TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::ToSharedRef
                          (&this->TextInputMethodContext,&local_60);
      local_a8 = pTVar13->Object;
      local_a0 = (pTVar13->SharedReferenceCount).ReferenceController;
      if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar4)(pIVar12,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
    }
  }
  return true;
}

// OnArrangeChildren @ 1429f7fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::OnArrangeChildren
          (FSlateEditableTextLayout *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FSlateTextBlockLayout *this_00;
  FSlateTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  bVar3 = FTextLayout::IsEmpty((FTextLayout *)(this->TextLayout).Object);
  if ((bVar3) && (this_00 = (this->HintTextLayout).Ptr, this_00 != (FSlateTextBlockLayout *)0x0)) {
    FSlateTextBlockLayout::ArrangeChildren(this_00,param_1,param_2);
    return;
  }
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pFVar1 = (this->TextLayout).Object;
                    /* WARNING: Could not recover jumptable at 0x0001429f808e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,param_1,param_2);
  return;
}

// OnContextMenuClosed @ 1429f98e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::OnContextMenuClosed
          (FSlateEditableTextLayout *this,TSharedRef<IMenu,1> *param_1)

{
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  (**(code **)((longlong)*this->OwnerWidget + 0x98))(this->OwnerWidget,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::SetKeyboardFocus(this_00,&local_18,OtherWidgetLostFocus);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnPaint @ 1429fc870

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateEditableTextLayout::OnPaint
          (FSlateEditableTextLayout *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3
          ,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  FSlateTextBlockLayout *this_00;
  FSlateTextLayout *pFVar2;
  ITextLayoutMarshaller *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSlateColor *this_01;
  FTextBlockStyle *pFVar7;
  FString local_348;
  float local_338;
  float fStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  uint local_328;
  FTextBlockStyle local_318;
  
  (this->CachedSize).field0_0x0 = *(TVector2<float>_u_0 *)&param_2->Size;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  bVar5 = FTextLayout::IsEmpty((FTextLayout *)(this->TextLayout).Object);
  if ((bVar5) && ((this->HintTextLayout).Ptr != (FSlateTextBlockLayout *)0x0)) {
    EVar1 = (this->TextStyle).ColorAndOpacity.ColorUseRule;
    this_01 = &(this->TextStyle).ColorAndOpacity;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_01 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_01 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_01 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_338 = (this_01->SpecifiedColor).field0_0x0._s_0.R;
    fStack_334 = *(float *)((longlong)&(this_01->SpecifiedColor).field0_0x0 + 4);
    fStack_330 = *(float *)((longlong)&(this_01->SpecifiedColor).field0_0x0 + 8);
    this_00 = (this->HintTextLayout).Ptr;
    local_328 = local_328 & 0xffffff00;
    (this->HintTextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.R = local_338;
    (this->HintTextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.G = fStack_334;
    (this->HintTextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.B = fStack_330;
    (this->HintTextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0._s_0.A = 0.35;
    (this->HintTextStyle).ColorAndOpacity.ColorUseRule = (undefined1)local_328;
    (this->HintTextStyle).ColorAndOpacity.ColorTableId = local_328._1_1_;
    *(undefined2 *)&(this->HintTextStyle).ColorAndOpacity.field_0x12 = local_328._2_2_;
    uStack_32c = 0x3eb33333;
    if (((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar7 = FSlateTextLayout::GetDefaultTextStyle((this_00->TextLayout).Object);
    bVar5 = FTextBlockStyle::IsIdenticalTo(pFVar7,&this->HintTextStyle);
    if (!bVar5) {
      if (((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar2 = (this_00->TextLayout).Object;
      pFVar7 = FTextBlockStyle::FTextBlockStyle(&local_318,&this->HintTextStyle);
      FSlateTextLayout::SetDefaultTextStyle(pFVar2,pFVar7);
      local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.Data.ArrayNum = 0;
      local_348.Data.ArrayMax = 0;
      if (((this_00->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pIVar3 = (this_00->Marshaller).Object;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x10);
      if (((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      (*pcVar4)(pIVar3,&local_348,(this_00->TextLayout).Object);
      FSlateTextBlockLayout::UpdateTextLayout(this_00,&local_348);
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
    }
    FSlateTextBlockLayout::OnPaint
              ((this->HintTextLayout).Ptr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar2 = (this->TextLayout).Object;
                    /* WARNING: Could not recover jumptable at 0x0001429fcb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(*(longlong *)pFVar2 + 0x40))(pFVar2,param_1,param_2,param_3);
  return iVar6;
}

// PasteTextFromClipboard @ 142a02c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::PasteTextFromClipboard(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FString local_18;
  
  cVar2 = (**(code **)*this->OwnerWidget)();
  if (cVar2 == '\0') {
    BeginEditTransation(this);
    DeleteSelectedText(this);
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FWindowsPlatformApplicationMisc::ClipboardPaste(&local_18);
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      InsertTextAtCursorImpl(this,&local_18);
      if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    EndEditTransaction(this);
  }
  return;
}

// PushUndoState @ 142a046b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::PushUndoState(FSlateEditableTextLayout *this,FUndoState *param_1)

{
  int *piVar1;
  TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar2;
  FUndoState *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  this_00 = &this->UndoStates;
  uVar2 = this->CurrentUndoLevel;
  if (uVar2 != 0xffffffff) {
    uVar7 = (this->UndoStates).ArrayNum - uVar2;
    if ((int)(uVar7 | uVar2) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (uVar7 != 0) {
      TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (this_00,uVar2,uVar7);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&this_00->AllocatorInstance,(this->UndoStates).ArrayNum,
                 &(this->UndoStates).ArrayMax);
    }
    this->CurrentUndoLevel = -1;
  }
  pFVar3 = (FUndoState *)(this_00->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->UndoStates).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->UndoStates).ArrayNum;
  piVar1 = &(this->UndoStates).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&this_00->AllocatorInstance,piVar1);
    (this->UndoStates).ArrayNum = iVar6;
  }
  (this->UndoStates).ArrayNum = iVar6 + 1;
  SlateEditableTextTypes::FUndoState::FUndoState
            ((FUndoState *)((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x38),param_1);
  if (99 < (this->UndoStates).ArrayNum) {
    TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_>::RemoveAt
              (this_00,0,Default);
    return;
  }
  return;
}

// Redo @ 142a04840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::Redo(FSlateEditableTextLayout *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FSlateApplication *pFVar5;
  FText *pFVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  int local_res8;
  int local_resc;
  
  cVar3 = (**(code **)*this->OwnerWidget)();
  if ((cVar3 == '\0') && (this->CurrentUndoLevel != -1)) {
    if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
    if (cVar3 == '\0') {
      iVar1 = this->CurrentUndoLevel;
      iVar7 = iVar1 + 1;
      if (iVar7 < (this->UndoStates).ArrayNum) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = (FText *)((this->UndoStates).AllocatorInstance.Data + (longlong)iVar7 * 0x38);
        SaveText(this,pFVar6);
        bVar4 = SetEditableText(this,pFVar6,false);
        if (bVar4) {
          (**(code **)((longlong)*this->OwnerWidget + 0xb0))(this->OwnerWidget,pFVar6);
        }
        (this->CursorInfo).CursorPosition = (FTextLocation)pFVar6[2].TextData.Reference;
        (this->CursorInfo).CursorAlignment = (ECursorAlignment)pFVar6[2].Flags;
        (this->CursorInfo).CursorTextDirection = *(ETextDirection *)((longlong)&pFVar6[2].Flags + 1)
        ;
        pFVar5 = FSlateApplication::Get();
        dVar9 = (double)(**(code **)(*(longlong *)pFVar5 + 0x60))(pFVar5);
        (this->CursorInfo).LastCursorInteractionTime = dVar9;
        if (pFVar6 + 1 != (FText *)&this->SelectionStart) {
          if ((char)pFVar6[1].Flags == '\0') {
            if ((this->SelectionStart).bIsSet != false) {
              (this->SelectionStart).bIsSet = false;
            }
          }
          else {
            (this->SelectionStart).TypedValue = (FTextLocation)pFVar6[1].TextData.Reference;
            (this->SelectionStart).bIsSet = true;
          }
        }
        iVar8 = (this->CursorInfo).CursorPosition.Offset +
                (uint)((this->CursorInfo).CursorAlignment == Right);
        local_resc = 0;
        if (0 < iVar8) {
          local_resc = iVar8;
        }
        local_res8 = (this->CursorInfo).CursorPosition.LineIndex;
        (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_res8);
        UpdateCursorHighlight(this);
        iVar8 = (this->UndoStates).ArrayNum;
        this->CurrentUndoLevel = iVar7;
        if (iVar8 <= iVar1 + 2) {
          this->CurrentUndoLevel = -1;
          TArray<SlateEditableTextTypes::FUndoState,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->UndoStates,iVar8 + -1,Default);
        }
      }
    }
  }
  return;
}

// Refresh @ 142a04a50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateEditableTextLayout::Refresh(FSlateEditableTextLayout *this)

{
  bool bVar1;
  FText *pFVar2;
  
  pFVar2 = FText::GetEmpty();
  if ((this->BoundText).bIsSet != false) {
    pFVar2 = TAttribute<FText>::Get(&this->BoundText);
  }
  bVar1 = RefreshImpl(this,pFVar2,false);
  return bVar1;
}

// RefreshImpl @ 142a04b90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::RefreshImpl(FSlateEditableTextLayout *this,FText *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FTextSnapshot *pFVar8;
  FText *pFVar9;
  undefined1 local_res8 [8];
  FText local_98;
  FText local_88;
  FDestructionSentinel local_78;
  FTextSnapshot local_60;
  undefined1 local_48 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  bVar3 = IsInGameThread();
  if (((!bVar3) && (bVar3 = IsInSlateThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0x25a,
                         L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar6 = false;
  bVar3 = (bool)(**(code **)((longlong)*this->OwnerWidget + 8))();
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_30 = 0;
  local_48[1] = true;
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  local_48[0] = bVar3;
  FSlateTextLayout::SetIsPassword((this->TextLayout).Object,(TAttribute<bool> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_40,(FWriteAccessScope *)&local_78);
  if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
    local_30 = local_30 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  if (param_1 == (FText *)0x0) {
LAB_142a04d6a:
    if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar7 = (**(code **)((longlong)*(this->Marshaller).Object + 0x30))();
    if ((cVar7 != '\0') || (bVar3 != this->bWasPasswordLastTick)) {
      if (param_1 == (FText *)0x0) {
        pFVar9 = GetEditableText(this,&local_88);
        ForceRefreshTextLayout(this,pFVar9);
      }
      else {
        local_98.TextData.Reference = (param_1->TextData).Reference;
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 8))
                    (local_98.TextData.Reference,local_res8);
        }
        local_98.Flags = param_1->Flags;
        ForceRefreshTextLayout(this,&local_98);
        local_88.TextData.Reference = local_98.TextData.Reference;
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      bVar6 = true;
      this->bWasPasswordLastTick = bVar3;
      goto LAB_142a04e22;
    }
  }
  else {
    if (param_2) {
LAB_142a04cf7:
      bVar6 = SetEditableText(this,param_1,true);
    }
    else {
      bVar5 = FTextSnapshot::IdenticalTo(&this->BoundTextLastTick,param_1);
      if (bVar5) goto LAB_142a04d6a;
      bVar5 = FTextSnapshot::IsDisplayStringEqualTo(&this->BoundTextLastTick,param_1);
      if (!bVar5) goto LAB_142a04cf7;
    }
    pFVar8 = FTextSnapshot::FTextSnapshot(&local_60,param_1);
    FTextSnapshot::operator=(&this->BoundTextLastTick,pFVar8);
    if (local_60.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar1 = *(int *)local_60.LocalizedStringPtr;
      *(int *)local_60.LocalizedStringPtr = *(int *)local_60.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)((longlong)local_60.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_60.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_60.LocalizedStringPtr,0x18);
      }
    }
    if (local_60.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextDataPtr.Reference + 0x10))();
    }
    if (bVar6 == false) goto LAB_142a04d6a;
  }
  this->bWasPasswordLastTick = bVar3;
  if (bVar6 == false) {
    return false;
  }
LAB_142a04e22:
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
  return bVar6;
}

// RemoveCursorHighlight @ 142a05a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::RemoveCursorHighlight(FSlateEditableTextLayout *this)

{
  int *piVar1;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FSlateTextLayout *pFVar4;
  code *pcVar5;
  bool bVar6;
  FTextLineHighlight *pFVar7;
  FTextLineHighlight *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->TextLayout).Object;
  pTVar2 = &this->ActiveLineHighlights;
  iVar3 = (this->ActiveLineHighlights).ArrayNum;
  pFVar7 = (FTextLineHighlight *)(pTVar2->AllocatorInstance).Data;
  pFVar8 = pFVar7 + iVar3;
  while( true ) {
    if ((this->ActiveLineHighlights).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTextLineHighlight,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if ((-1 < pFVar7->LineIndex) && (pFVar7->LineIndex < *(int *)&pFVar4->field_0x28)) {
      if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FTextLayout::RemoveLineHighlight((FTextLayout *)(this->TextLayout).Object,pFVar7);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)(pTVar2->AllocatorInstance).Data,
             (this->ActiveLineHighlights).ArrayNum);
  piVar1 = &(this->ActiveLineHighlights).ArrayMax;
  (this->ActiveLineHighlights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<FTextLocation,int>,TDefaultMapHashableKeyFuncs<FTextLocation,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FTextLocation,int>,TDefaultMapHashableKeyFuncs<FTextLocation,int,0>,FDefaultSetAllocator>
           *)&this->SearchResultToIndexMap);
  return;
}

// RestoreOriginalText @ 142a062a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::RestoreOriginalText(FSlateEditableTextLayout *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = HasTextChangedFromOriginal(this);
  if (bVar2) {
    SetEditableText(this,&(this->OriginalText).Text,false);
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
    (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
    (**(code **)((longlong)*this->OwnerWidget + 0xb8))(this->OwnerWidget,&this->OriginalText,3);
  }
  return;
}

// SaveText @ 142a06330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::SaveText(FSlateEditableTextLayout *this,FText *param_1)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter,
             &local_28);
  if ((*(int *)&(this->BoundText).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->BoundText).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TAttribute<FText>::Set<FText>(&this->BoundText,param_1);
  return;
}

// ScanForWordBoundary @ 142a063c0

/* WARNING: Enum "Type": Some values do not have unique names */

FTextLocation __thiscall
FSlateEditableTextLayout::ScanForWordBoundary
          (FSlateEditableTextLayout *this,FTextLocation *param_1,schar param_2)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTextLocation FVar6;
  uint uVar7;
  uint uVar8;
  FTextLocation local_res10;
  
  TranslatedLocation(this,param_1,param_2);
  do {
    if (param_1->Offset == 0) {
      return (FTextLocation)param_1;
    }
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FTextLocation)(*pcVar3)();
      return FVar6;
    }
    pFVar2 = (this->TextLayout).Object;
    iVar1 = *(int *)&pFVar2->field_0x28;
    if (iVar1 == 0) {
      return (FTextLocation)param_1;
    }
    uVar8 = param_1->LineIndex;
    uVar7 = 0;
    if (iVar1 - 1U == uVar8) {
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar6 = (FTextLocation)(*pcVar3)();
        return FVar6;
      }
      iVar1 = *(int *)(*(longlong *)((longlong)(int)uVar8 * 0x70 + *(longlong *)&pFVar2->field_0x20)
                      + 8);
      uVar8 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar8 = uVar7;
      }
      if (uVar8 == param_1->Offset) {
        return (FTextLocation)param_1;
      }
    }
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FTextLocation)(*pcVar3)();
      return FVar6;
    }
    uVar8 = param_1->LineIndex;
    pFVar2 = (this->TextLayout).Object;
    uVar5 = uVar7;
    if ((int)uVar8 < *(int *)&pFVar2->field_0x28) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FTextLocation)(*pcVar3)();
      return FVar6;
    }
    iVar1 = *(int *)(*(longlong *)((longlong)(int)uVar8 * 0x70 + *(longlong *)&pFVar2->field_0x20) +
                    8);
    uVar8 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar8 = uVar7;
    }
    if (uVar8 == param_1->Offset) {
      return (FTextLocation)param_1;
    }
    bVar4 = IsAtWordStart(this,param_1);
    if (bVar4) {
      return (FTextLocation)param_1;
    }
    FVar6 = TranslatedLocation(this,&local_res10,(schar)param_1);
    *param_1 = *(FTextLocation *)FVar6;
  } while( true );
}

// ScrollTo @ 142a06580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::ScrollTo(FSlateEditableTextLayout *this,FTextLocation *param_1)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTextLocation local_18;
  uint local_10;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  iVar5 = param_1->LineIndex;
  pFVar2 = (this->TextLayout).Object;
  if ((-1 < iVar5) && (iVar5 < *(int *)&pFVar2->field_0x28)) {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = *(int *)(*(longlong *)((longlong)iVar5 * 0x70 + *(longlong *)&pFVar2->field_0x20) + 8);
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    if (param_1->Offset <= iVar5) {
      local_18 = *param_1;
      local_10 = local_10 & 0xffffff00;
      if ((TOptional<SlateEditableTextTypes::FScrollInfo> *)&local_18 !=
          &this->PositionToScrollIntoView) {
        (this->PositionToScrollIntoView).TypedValue.Position = local_18;
        *(uint *)&(this->PositionToScrollIntoView).TypedValue.Alignment = local_10;
        (this->PositionToScrollIntoView).bIsSet = true;
      }
      (**(code **)((longlong)*this->OwnerWidget + 0x68))();
    }
  }
  return;
}

// ScrollTo @ 142a066a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::ScrollTo(FSlateEditableTextLayout *this,ETextLocation param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTextLocation FVar4;
  FTextLocation local_res8;
  
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVar4.LineIndex = 0;
  FVar4.Offset = 0;
  local_res8.LineIndex = 0;
  local_res8.Offset = 0;
  if (param_1 != BeginningOfDocument) {
    if (param_1 == EndOfDocument) {
      uVar3 = *(int *)&((this->TextLayout).Object)->field_0x28 - 1;
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      FVar4.Offset = 0;
      FVar4.LineIndex = uVar3;
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xa71,L"Unsupported ETextLocation mode passed to ScrollTo!");
      FVar4 = local_res8;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res8 = FVar4;
  ScrollTo(this,&local_res8);
  return;
}

// SelectAllText @ 142a068e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::SelectAllText(FSlateEditableTextLayout *this)

{
  TOptional<FTextLocation> *pTVar1;
  int iVar2;
  FSlateTextLayout *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  FTextLocation local_res8;
  undefined8 local_28;
  undefined1 local_20 [8];
  TReferenceControllerBase<1> *local_18;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  bVar5 = FTextLayout::IsEmpty((FTextLayout *)(this->TextLayout).Object);
  if (!bVar5) {
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
    pFVar3 = (this->TextLayout).Object;
    pTVar1 = &this->SelectionStart;
    local_28 = 0;
    iVar2 = *(int *)&pFVar3->field_0x28;
    if ((TOptional<FTextLocation> *)&local_28 != pTVar1) {
      (pTVar1->TypedValue).LineIndex = 0;
      (pTVar1->TypedValue).Offset = 0;
      (this->SelectionStart).bIsSet = true;
    }
    uVar8 = iVar2 - 1;
    uVar6 = 0;
    if ((int)uVar8 < *(int *)&pFVar3->field_0x28) {
      uVar6 = ~uVar8 >> 0x1f;
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
    iVar2 = *(int *)(*(longlong *)((longlong)(int)uVar8 * 0x70 + *(longlong *)&pFVar3->field_0x20) +
                    8);
    local_res8.Offset = iVar2 - 1;
    if (iVar2 == 0) {
      local_res8.Offset = 0;
    }
    local_res8.LineIndex = uVar8;
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_res8);
    UpdateCursorHighlight(this);
    puVar7 = (undefined8 *)
             (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_20);
    SWidget::Invalidate((SWidget *)*puVar7,LayoutAndVolatility);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  }
  return;
}

// SelectText @ 142a06ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SelectText
          (FSlateEditableTextLayout *this,FTextLocation *param_1,FTextLocation *param_2)

{
  code *pcVar1;
  bool bVar2;
  FTextLocation local_res8;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  bVar2 = FTextLayout::IsEmpty((FTextLayout *)(this->TextLayout).Object);
  if (!bVar2) {
    local_res8 = *param_2;
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_res8);
    if ((param_1->LineIndex == param_2->LineIndex) && (param_1->Offset == param_2->Offset)) {
      if ((this->SelectionStart).bIsSet != false) {
        (this->SelectionStart).bIsSet = false;
      }
    }
    else if ((TOptional<FTextLocation> *)param_1 != &this->SelectionStart) {
      (this->SelectionStart).TypedValue = *param_1;
      (this->SelectionStart).bIsSet = true;
    }
    UpdateCursorHighlight(this);
  }
  return;
}

// SelectWordAt @ 142a06cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SelectWordAt
          (FSlateEditableTextLayout *this,FDeprecateVector2DParameter *param_1)

{
  TOptional<FTextLocation> *pTVar1;
  int iVar2;
  code *pcVar3;
  FTextLocation FVar4;
  bool bVar5;
  FTextLocation FVar6;
  FTextLocation FVar7;
  FTextLocation local_res8 [2];
  FTextLocation local_res18;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  FTextSelection local_30;
  double local_20;
  double dStack_18;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_20 = (double)SUB84(*param_1,0);
  dStack_18 = (double)SUB84(*param_1,4);
  FTextLayout::GetTextLocationAt
            ((FTextLayout *)(this->TextLayout).Object,(TVector2<double> *)&local_res18,
             (ETextHitPoint *)&local_20);
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FTextLayout::GetWordAt((FTextLayout *)(this->TextLayout).Object,&local_30,&local_res18);
  FVar6.Offset = local_30.LocationB.Offset;
  FVar6.LineIndex = local_30.LocationB.LineIndex;
  FVar4.Offset = local_30.LocationA.Offset;
  FVar4.LineIndex = local_30.LocationA.LineIndex;
  bVar5 = SBORROW4(local_30.LocationA.LineIndex,local_30.LocationB.LineIndex);
  iVar2 = local_30.LocationA.LineIndex - local_30.LocationB.LineIndex;
  if (local_30.LocationA.LineIndex == local_30.LocationB.LineIndex) {
    bVar5 = SBORROW4(local_30.LocationA.Offset,local_30.LocationB.Offset);
    iVar2 = local_30.LocationA.Offset - local_30.LocationB.Offset;
  }
  FVar7 = FVar6;
  if (bVar5 != iVar2 < 0) {
    FVar7 = FVar4;
  }
  bVar5 = SBORROW4(local_30.LocationA.LineIndex,local_30.LocationB.LineIndex);
  iVar2 = local_30.LocationA.LineIndex - local_30.LocationB.LineIndex;
  if (local_30.LocationA.LineIndex == local_30.LocationB.LineIndex) {
    bVar5 = SBORROW4(local_30.LocationA.Offset,local_30.LocationB.Offset);
    iVar2 = local_30.LocationA.Offset - local_30.LocationB.Offset;
  }
  if ((local_30.LocationA.LineIndex != local_30.LocationB.LineIndex ||
      local_30.LocationA.Offset != local_30.LocationB.Offset) && bVar5 == iVar2 < 0) {
    FVar6 = FVar4;
  }
  if ((((FVar7.LineIndex != -1) && (FVar7.Offset != -1)) && (FVar6.LineIndex != -1)) &&
     (FVar6.Offset != -1)) {
    pTVar1 = &this->SelectionStart;
    if (((TOptional<FTextLocation> *)local_40 != pTVar1) && ((this->SelectionStart).bIsSet != false)
       ) {
      (this->SelectionStart).bIsSet = false;
    }
    if (((FVar7.LineIndex != FVar6.LineIndex) || (FVar7.Offset != FVar6.Offset)) &&
       ((TOptional<FTextLocation> *)local_48 != pTVar1)) {
      pTVar1->TypedValue = FVar7;
      (this->SelectionStart).bIsSet = true;
    }
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
              (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,local_res8);
    UpdateCursorHighlight(this);
  }
  return;
}

// SelectWordAt @ 142a06e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SelectWordAt
          (FSlateEditableTextLayout *this,FGeometry *param_1,FDeprecateVector2DParameter *param_2)

{
  TTransform2<float> *pTVar1;
  float fVar2;
  float local_28;
  float fStack_24;
  TTransform2<float> local_20;
  
  pTVar1 = Inverse<TTransform2<float>_>(&local_20,&param_1->AccumulatedRenderTransform);
  fStack_24 = SUB84(*param_2,4);
  local_28 = SUB84(*param_2,0);
  fVar2 = fStack_24 * (pTVar1->M).M[1][0];
  fStack_24 = (local_28 * (pTVar1->M).M[0][1] + fStack_24 * (pTVar1->M).M[1][1] +
              (pTVar1->Trans).field0_0x0._s_0.Y) * param_1->Scale;
  local_28 = (fVar2 + local_28 * (pTVar1->M).M[0][0] + (pTVar1->Trans).field0_0x0._s_0.X) *
             param_1->Scale;
  SelectWordAt(this,(FDeprecateVector2DParameter *)&local_28);
  return;
}

// SetApplyLineHeightToBottomLine @ 142a07360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetApplyLineHeightToBottomLine
          (FSlateEditableTextLayout *this,TAttribute<bool> *param_1)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->ApplyLineHeightToBottomLine).Value = param_1->Value;
  (this->ApplyLineHeightToBottomLine).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ApplyLineHeightToBottomLine).Getter,&param_1->Getter);
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar1,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetAutoWrapText @ 142a07520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetAutoWrapText(FSlateEditableTextLayout *this,TAttribute<bool> *param_1)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->AutoWrapText).Value = param_1->Value;
  (this->AutoWrapText).bIsSet = param_1->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AutoWrapText).Getter,&param_1->Getter);
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar1,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetCompositionBrush @ 142a07aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetCompositionBrush
          (FSlateEditableTextLayout *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  FTextCompositionHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->TextCompositionHighlighter).Object == (FTextCompositionHighlighter *)0x0) {
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
  pFVar1 = (this->TextCompositionHighlighter).Object;
  (pFVar1->CompositionBrush).Value = param_1->Value;
  (pFVar1->CompositionBrush).bIsSet = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(pFVar1->CompositionBrush).Getter,&param_1->Getter);
  return;
}

// SetCursorBrush @ 142a08590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetCursorBrush
          (FSlateEditableTextLayout *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  FCursorLineHighlighter *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->CursorLineHighlighter).Object == (FCursorLineHighlighter *)0x0) {
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
  pFVar1 = (this->CursorLineHighlighter).Object;
  (pFVar1->CursorBrush).Value = param_1->Value;
  (pFVar1->CursorBrush).bIsSet = param_1->bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(pFVar1->CursorBrush).Getter,&param_1->Getter);
  return;
}

// SetDebugSourceInfo @ 142a088d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetDebugSourceInfo
          (FSlateEditableTextLayout *this,TAttribute<FString> *param_1)

{
  TDelegate<FString___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  int iVar1;
  longlong *plVar2;
  FSlateTextBlockLayout *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  iVar1 = (param_1->Value).Data.ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  ::FString::AssignRange
            (&(this->DebugSourceInfo).Value,(wchar_t *)(param_1->Value).Data.AllocatorInstance.Data,
             iVar6);
  this_00 = &(this->DebugSourceInfo).Getter;
  (this->DebugSourceInfo).bIsSet = param_1->bIsSet;
  if (&param_1->Getter != this_00) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_28)
    ;
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  FTextLayout::SetDebugSourceInfo((FTextLayout *)(this->TextLayout).Object,&this->DebugSourceInfo);
  pFVar3 = (this->HintTextLayout).Ptr;
  if (pFVar3 != (FSlateTextBlockLayout *)0x0) {
    if ((pFVar3->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
    FTextLayout::SetDebugSourceInfo
              ((FTextLayout *)(pFVar3->TextLayout).Object,&this->DebugSourceInfo);
  }
  return;
}

// SetEditableText @ 142a08bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateEditableTextLayout::SetEditableText
          (FSlateEditableTextLayout *this,FText *param_1,bool param_2)

{
  ITextLayoutMarshaller *pIVar1;
  FSlateTextLayout *pFVar2;
  FSlateTextLayout *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FString *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  TSharedRef<FSlatePasswordRun,1> *pTVar11;
  TSharedRef<FSlateTextRun,1> *pTVar12;
  undefined8 *puVar13;
  uint uVar14;
  atomic<int> *paVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_1b8 [32];
  TSharedRef<IRun,1> *local_198;
  TSharedRef<IRun,1> *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  ForAnyElementType local_168;
  undefined8 local_160;
  TSharedRef<IRun,1> local_158;
  FTextLocation local_148;
  int local_140;
  uint local_13c;
  TSharedRef<FString,1> local_138;
  FNewLineData local_128;
  TRawPtrProxy<FString> local_108 [2];
  TSharedRef<FString_const_,1> local_f8;
  FText local_e8;
  TSharedRef<FSlatePasswordRun,1> local_d8;
  TSharedRef<FSlateTextRun,1> local_c8;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [64];
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  bVar4 = IsInGameThread();
  if (((!bVar4) && (bVar4 = IsInSlateThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInSlateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0x16e,
                         L"Slate can only be accessed from the GameThread or the SlateLoadingThread!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar10 = (FString *)0x0;
  bVar4 = false;
  if (!param_2) {
    GetEditableText(this,&local_e8);
    pFVar8 = FText::ToString(&local_e8);
    pFVar9 = FText::ToString(param_1);
    iVar7 = (pFVar8->Data).ArrayNum;
    iVar19 = (pFVar9->Data).ArrayNum;
    if (iVar7 == iVar19) {
      if (1 < iVar7) {
        iVar7 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                       (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
        bVar4 = iVar7 != 0;
      }
    }
    else {
      bVar4 = iVar19 + iVar7 != 1;
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    if (!bVar4) {
      return false;
    }
  }
  pFVar8 = FText::ToString(param_1);
  if (((TOptional<FTextLocation> *)local_a8 != &this->SelectionStart) &&
     ((this->SelectionStart).bIsSet != false)) {
    (this->SelectionStart).bIsSet = false;
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FTextLayout::ClearLines((FTextLayout *)(this->TextLayout).Object);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FTextLayout::ClearLineHighlights((FTextLayout *)(this->TextLayout).Object);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FTextLayout::ClearRunRenderers((FTextLayout *)(this->TextLayout).Object);
  if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pIVar1 = (this->Marshaller).Object;
  pcVar3 = *(code **)((longlong)*pIVar1 + 8);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (*pcVar3)(pIVar1,pFVar8,(this->TextLayout).Object);
  if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (**(code **)((longlong)*(this->Marshaller).Object + 0x28))();
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->TextLayout).Object;
  if (*(int *)&pFVar2->field_0x28 == 0) {
    pFVar8 = ::operator_new(0x10);
    if (pFVar8 != (FString *)0x0) {
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
      pFVar10 = pFVar8;
    }
    local_108[0].Object = pFVar10;
    TSharedRef<FString,1>::TSharedRef<FString,1><FString>(&local_138,local_108);
    local_f8.Object = local_138.Object;
    local_f8.SharedReferenceCount.ReferenceController =
         local_138.SharedReferenceCount.ReferenceController;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_4_ = 0;
    local_98._12_4_ = 0;
    local_88._56_8_ = 0;
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_88._16_8_ = 0;
    local_88._24_8_ = 0;
    local_88._32_8_ = 0;
    local_88._40_8_ = 0x8000000000;
    local_88._48_8_ = 0xffffffff;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    cVar6 = (**(code **)((longlong)*this->OwnerWidget + 8))();
    if (cVar6 == '\0') {
      pTVar12 = FSlateTextRun::Create(&local_c8,(FRunInfo *)local_98,&local_f8,&this->TextStyle);
      local_158.Object = (IRun *)pTVar12->Object;
      local_158.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      pTVar11 = FSlatePasswordRun::Create(&local_d8,(FRunInfo *)local_98,&local_f8,&this->TextStyle)
      ;
      local_158.Object = (IRun *)pTVar11->Object;
      local_158.SharedReferenceCount.ReferenceController =
           (pTVar11->SharedReferenceCount).ReferenceController;
      local_c8.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    if (local_168.Data <= &local_158) {
      if (&local_158 < (TSharedRef<IRun,1> *)(local_168.Data + (longlong)local_160._4_4_ * 0x10)) {
        local_180 = (longlong)(int)local_160;
        local_178 = 0x10;
        local_198 = &local_158;
        local_190 = (TSharedRef<IRun,1> *)local_168.Data;
        local_188 = (longlong)local_160._4_4_;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
    }
    iVar7 = (int)local_160;
    if ((int)local_160 == local_160._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_168,(int *)((longlong)&local_160 + 4));
    }
    local_160 = CONCAT44(local_160._4_4_,iVar7 + 1);
    *(IRun **)&local_168.Data[(longlong)iVar7 * 0x10].field_0x0 = local_158.Object;
    *(TReferenceControllerBase<1> **)(local_168.Data + (longlong)iVar7 * 0x10 + 8) =
         local_158.SharedReferenceCount.ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_128.Runs.AllocatorInstance.Data = local_168.Data;
    local_128.Runs.ArrayNum = (int)local_160;
    local_128.Runs.ArrayMax = local_160._4_4_;
    this_00 = (this->TextLayout).Object;
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160 = 0;
    if (local_138.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    local_128.Text.Object = local_138.Object;
    local_128.Text.SharedReferenceCount.ReferenceController =
         local_138.SharedReferenceCount.ReferenceController;
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)0x0,0);
    FTextLayout::AddLine((FTextLayout *)this_00,&local_128);
    DestructItems<TSharedRef<IRun,1>,int>
              ((TSharedRef<IRun,1> *)local_128.Runs.AllocatorInstance.Data,local_128.Runs.ArrayNum);
    if ((TSharedRef<IRun,1> *)local_128.Runs.AllocatorInstance.Data != (TSharedRef<IRun,1> *)0x0) {
      FMemory::Free(local_128.Runs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.Text.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedRef<IRun,1>,int>((TSharedRef<IRun,1> *)local_168.Data,(int)local_160);
    if ((TSharedRef<IRun,1> *)local_168.Data != (TSharedRef<IRun,1> *)0x0) {
      FMemory::Free(local_168.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
  }
  iVar7 = (this->CursorInfo).CursorPosition.LineIndex;
  iVar16 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  iVar19 = 0;
  if (0 < iVar16) {
    iVar19 = iVar16;
  }
  uVar14 = 0;
  if (iVar7 < *(int *)&pFVar2->field_0x28) {
    if ((iVar7 < 0) &&
       (local_198 = (TSharedRef<IRun,1> *)(longlong)iVar7,
       local_190 = (TSharedRef<IRun,1> *)(longlong)*(int *)&pFVar2->field_0x28,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar7 = *(int *)(*(longlong *)((longlong)iVar7 * 0x70 + *(longlong *)&pFVar2->field_0x20) + 8);
    uVar18 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar18 = uVar14;
    }
    if (iVar19 <= (int)uVar18) goto LAB_142a092bf;
  }
  iVar7 = *(int *)&pFVar2->field_0x28;
  uVar17 = iVar7 - 1;
  uVar18 = uVar14;
  if ((int)uVar17 < iVar7) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_198 = (TSharedRef<IRun,1> *)(longlong)(int)uVar17;
    local_190 = (TSharedRef<IRun,1> *)(longlong)iVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar7 = *(int *)(*(longlong *)((longlong)(int)uVar17 * 0x70 + *(longlong *)&pFVar2->field_0x20) +
                  8);
  local_148.Offset = iVar7 - 1;
  if (iVar7 == 0) {
    local_148.Offset = uVar14;
  }
  local_148.LineIndex = uVar17;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  SlateEditableTextTypes::FCursorInfo::SetCursorLocationAndCalculateAlignment
            (&this->CursorInfo,(FTextLayout *)(this->TextLayout).Object,&local_148);
  uVar18 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  local_13c = uVar14;
  if (0 < (int)uVar18) {
    local_13c = uVar18;
  }
  local_140 = (this->CursorInfo).CursorPosition.LineIndex;
  (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_140);
  UpdatePreferredCursorScreenOffsetInLine(this);
  UpdateCursorHighlight(this);
LAB_142a092bf:
  puVar13 = (undefined8 *)
            (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_b8);
  SWidget::Invalidate((SWidget *)*puVar13,Layout);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  return true;
}

// SetHintText @ 142a0a140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetHintText(FSlateEditableTextLayout *this,TAttribute<FText> *param_1)

{
  TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *this_00;
  undefined1 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  ITextLayoutMarshaller *pIVar5;
  FSlateTextLayout *pFVar6;
  SWidget *pSVar7;
  FSlateTextBlockLayout *pFVar8;
  code *pcVar9;
  char cVar10;
  bool bVar11;
  undefined8 *puVar12;
  FSlateTextBlockLayout *pFVar13;
  FTextBlockStyle *pFVar14;
  FText *this_01;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_res18;
  undefined1 local_res19;
  FSlateTextBlockLayout *local_368;
  TSharedRef<ITextLayoutMarshaller,1> local_360;
  TSharedPtr<IBreakIterator,1> local_350;
  undefined1 local_340 [8];
  TReferenceControllerBase<1> *local_338;
  undefined1 local_330 [8];
  TReferenceControllerBase<1> *local_328;
  FReadAccessScope local_320;
  FTextBlockStyle local_308;
  
  TAttribute<FText>::operator=(&this->HintText,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->HintText).Getter,
             &local_320);
  if ((*(int *)&(this->HintText).Getter.field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(this->HintText).Getter.field_0x8, plVar3 == (longlong *)0x0)) {
LAB_142a0a35d:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_320);
    this_01 = FText::GetEmpty();
    if ((this->HintText).bIsSet != false) {
      this_01 = TAttribute<FText>::Get(&this->HintText);
    }
    bVar11 = FText::IsEmpty(this_01);
    if (bVar11) {
      pFVar13 = (this->HintTextLayout).Ptr;
      if (pFVar13 != (FSlateTextBlockLayout *)0x0) {
        (this->HintTextLayout).Ptr = (FSlateTextBlockLayout *)0x0;
        TDefaultDelete<FSlateTextBlockLayout>::operator()
                  ((TDefaultDelete<FSlateTextBlockLayout> *)&this->HintTextLayout,pFVar13);
      }
      goto LAB_142a0a45d;
    }
  }
  else {
    cVar10 = (**(code **)(*plVar3 + 0x38))();
    if (cVar10 == '\0') goto LAB_142a0a35d;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_320);
  }
  if ((this->HintMarshaller).Object == (ITextLayoutMarshaller *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar4 = (this->HintMarshaller).SharedReferenceCount.ReferenceController;
  pIVar5 = (this->HintMarshaller).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar5 == (ITextLayoutMarshaller *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = (this->TextLayout).Object;
  uVar1 = pFVar6->field_0x92;
  if (pFVar6 == (FSlateTextLayout *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar2 = ((this->TextLayout).Object)->field_0x91;
  puVar12 = (undefined8 *)
            (**(code **)((longlong)*this->OwnerWidget + 0x98))(this->OwnerWidget,local_340);
  pSVar7 = (SWidget *)*puVar12;
  pFVar13 = ::operator_new(0x70);
  if (pFVar13 == (FSlateTextBlockLayout *)0x0) {
    pFVar13 = (FSlateTextBlockLayout *)0x0;
  }
  else {
    local_350.Object = (IBreakIterator *)0x0;
    local_350.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res9 = 1;
    local_res19 = 1;
    local_res8 = uVar1;
    local_res18 = uVar2;
    local_360.Object = pIVar5;
    local_360.SharedReferenceCount.ReferenceController = pTVar4;
    pFVar14 = FTextBlockStyle::FTextBlockStyle(&local_308,&this->HintTextStyle);
    pFVar13 = FSlateTextBlockLayout::FSlateTextBlockLayout
                        (pFVar13,pSVar7,pFVar14,SUB82(&local_res18,0),SUB82(&local_res8,0),
                         &this->CreateSlateTextLayout,&local_360,&local_350);
  }
  this_00 = &this->HintTextLayout;
  local_368 = pFVar13;
  if (this_00 !=
      (TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *)&local_368) {
    pFVar8 = this_00->Ptr;
    this_00->Ptr = pFVar13;
    pFVar13 = (FSlateTextBlockLayout *)0x0;
    local_368 = (FSlateTextBlockLayout *)0x0;
    TDefaultDelete<FSlateTextBlockLayout>::operator()
              ((TDefaultDelete<FSlateTextBlockLayout> *)this_00,pFVar8);
  }
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&local_368,pFVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_338);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar13 = this_00->Ptr;
  if ((pFVar13->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FTextLayout::SetDebugSourceInfo
            ((FTextLayout *)(pFVar13->TextLayout).Object,&this->DebugSourceInfo);
LAB_142a0a45d:
  puVar12 = (undefined8 *)
            (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_330);
  SWidget::Invalidate((SWidget *)*puVar12,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_328);
  return;
}

// SetHorizontalScrollFraction @ 142a0a620

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateEditableTextLayout::SetHorizontalScrollFraction(FSlateEditableTextLayout *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D in_RDX;
  double dVar5;
  float in_XMM2_Da;
  TVector2<double> local_28 [2];
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FDeprecateSlateVector2D)(*pcVar1)();
      return FVar3;
    }
  }
  pTVar4 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,local_28);
  dVar5 = (double)in_XMM2_Da;
  if (__real_3ff0000000000000 <= (double)in_XMM2_Da) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  (this->ScrollOffset).field0_0x0._s_0.X = (float)(dVar5 * (pTVar4->field0_0x0)._s_0.X);
  *(TVector2<float>_u_0 *)in_RDX = (this->ScrollOffset).field0_0x0;
  return in_RDX;
}

// SetJustification @ 142a0a7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetJustification
          (FSlateEditableTextLayout *this,TAttribute<ETextJustify::Type> *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar1 = TAttribute<enum_ETextJustify::Type>::IdenticalTo(&this->Justification,param_1);
  if (!bVar1) {
    (this->Justification).Value = param_1->Value;
    (this->Justification).bIsSet = param_1->bIsSet;
    TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->Justification).Getter,&param_1->Getter);
    puVar2 = (undefined8 *)
             (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
    SWidget::Invalidate((SWidget *)*puVar2,LayoutAndVolatility);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// SetLineHeightPercentage @ 142a0a9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetLineHeightPercentage
          (FSlateEditableTextLayout *this,TAttribute<float> *param_1)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->LineHeightPercentage).Value = param_1->Value;
  (this->LineHeightPercentage).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LineHeightPercentage).Getter,&param_1->Getter);
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar1,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetMargin @ 142a0aad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetMargin(FSlateEditableTextLayout *this,TAttribute<FMargin> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  fVar1 = (param_1->Value).Top;
  fVar2 = (param_1->Value).Right;
  fVar3 = (param_1->Value).Bottom;
  (this->Margin).Value.Left = (param_1->Value).Left;
  (this->Margin).Value.Top = fVar1;
  (this->Margin).Value.Right = fVar2;
  (this->Margin).Value.Bottom = fVar3;
  (this->Margin).bIsSet = param_1->bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Margin).Getter,&param_1->Getter);
  puVar4 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar4,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetOverflowPolicy @ 142a0b100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetOverflowPolicy
          (FSlateEditableTextLayout *this,TOptional<ETextOverflowPolicy> param_1)

{
  TOptional<ETextOverflowPolicy> *pTVar1;
  FSlateTextBlockLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined6 in_register_00000012;
  ETextOverflowPolicy *pEVar7;
  ETextOverflowPolicy EVar8;
  ETextOverflowPolicy local_res8;
  char local_res9;
  ETextOverflowPolicy local_res10;
  char local_res11;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pEVar7 = (ETextOverflowPolicy *)CONCAT62(in_register_00000012,param_1);
  pTVar1 = &this->OverflowPolicyOverride;
  bVar4 = (this->OverflowPolicyOverride).bIsSet;
  if (bVar4 == (bool)pEVar7[1]) {
    if (bVar4 == false) {
      bVar5 = false;
    }
    else {
      bVar5 = pTVar1->TypedValue != *pEVar7;
    }
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    if ((TOptional<ETextOverflowPolicy> *)pEVar7 != pTVar1) {
      if (pEVar7[1] == Clip) {
        if (bVar4 != false) {
          (this->OverflowPolicyOverride).bIsSet = false;
        }
      }
      else {
        pTVar1->TypedValue = *pEVar7;
        (this->OverflowPolicyOverride).bIsSet = true;
      }
    }
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_res9 = (this->OverflowPolicyOverride).bIsSet;
    if ((bool)local_res9 != false) {
      local_res8 = pTVar1->TypedValue;
    }
    FTextLayout::SetTextOverflowPolicy
              ((FTextLayout *)(this->TextLayout).Object,SUB82(&local_res8,0));
    pFVar2 = (this->HintTextLayout).Ptr;
    if (pFVar2 != (FSlateTextBlockLayout *)0x0) {
      bVar4 = (this->OverflowPolicyOverride).bIsSet;
      EVar8 = local_res8;
      if (bVar4 != false) {
        EVar8 = pTVar1->TypedValue;
      }
      if (((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (bVar4 != false) {
        local_res10 = EVar8;
      }
      local_res11 = bVar4;
      FTextLayout::SetTextOverflowPolicy
                ((FTextLayout *)(pFVar2->TextLayout).Object,SUB82(&local_res10,0));
    }
    puVar6 = (undefined8 *)
             (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_28);
    SWidget::Invalidate((SWidget *)*puVar6,LayoutAndVolatility);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  return;
}

// SetScrollOffset @ 142a0b7c0

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateEditableTextLayout::SetScrollOffset
          (FSlateEditableTextLayout *this,FDeprecateVector2DParameter *param_1,FGeometry *param_2)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  FDeprecateSlateVector2D FVar5;
  TVector2<double> *pTVar6;
  undefined8 *in_R9;
  float local_res8;
  float fStackX_c;
  TVector2<double> local_18;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5 = (FDeprecateSlateVector2D)(*pcVar3)();
      return FVar5;
    }
  }
  pTVar6 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,&local_18);
  dVar2 = (pTVar6->field0_0x0)._s_0.Y;
  local_res8 = (float)*in_R9;
  local_res8 = (float)(pTVar6->field0_0x0)._s_0.X - local_res8;
  if (*(float *)&param_2->Size <= local_res8) {
    local_res8 = *(float *)&param_2->Size;
  }
  if (local_res8 <= 0.0) {
    local_res8 = 0.0;
  }
  (this->ScrollOffset).field0_0x0._s_0.X = local_res8;
  fStackX_c = (float)((ulonglong)*in_R9 >> 0x20);
  fStackX_c = (float)dVar2 - fStackX_c;
  fVar1 = *(float *)&(param_2->Size).field_0x4;
  if (fVar1 <= fStackX_c) {
    fStackX_c = fVar1;
  }
  if (fStackX_c <= 0.0) {
    fStackX_c = 0.0;
  }
  (this->ScrollOffset).field0_0x0._s_0.Y = fStackX_c;
  *param_1 = (FDeprecateVector2DParameter)(this->ScrollOffset).field0_0x0;
  return (FDeprecateSlateVector2D)param_1;
}

// SetSearchText @ 142a0b8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetSearchText(FSlateEditableTextLayout *this,TAttribute<FText> *param_1)

{
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  FText *pFVar3;
  FTextSnapshot *pFVar4;
  undefined8 *puVar5;
  FTextSnapshot local_28;
  
  pFVar3 = FText::GetEmpty();
  if (param_1->bIsSet != false) {
    pFVar3 = TAttribute<FText>::Get(param_1);
  }
  TAttribute<FText>::operator=(&this->BoundSearchText,param_1);
  pFVar4 = FTextSnapshot::FTextSnapshot(&local_28,pFVar3);
  FTextSnapshot::operator=(&this->BoundSearchTextLastTick,pFVar4);
  TVar2 = local_28.LocalizedStringPtr;
  if (local_28.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar1 = *(int *)local_28.LocalizedStringPtr;
    *(int *)local_28.LocalizedStringPtr = *(int *)local_28.LocalizedStringPtr + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)local_28.LocalizedStringPtr + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_28.LocalizedStringPtr + 8));
      }
      ::operator_delete((void *)TVar2,0x18);
    }
  }
  if (local_28.TextDataPtr.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextDataPtr.Reference + 0x10))();
  }
  BeginSearch(this,pFVar3,IgnoreCase,false);
  puVar5 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,&local_28);
  SWidget::Invalidate((SWidget *)*puVar5,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28.LocalizedStringPtr);
  return;
}

// SetText @ 142a0c170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetText(FSlateEditableTextLayout *this,TAttribute<FText> *param_1)

{
  TAttribute<FText> *this_00;
  int iVar1;
  TOptional<EFocusCause> TVar2;
  int iVar3;
  FText *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  bool bVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  FText local_58;
  FText local_48;
  FText local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  this_00 = &this->BoundText;
  bVar9 = false;
  pFVar4 = FText::GetEmpty();
  if ((this->BoundText).bIsSet != false) {
    pFVar4 = TAttribute<FText>::Get(this_00);
  }
  local_38.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = pFVar4->Flags;
  TAttribute<FText>::operator=(this_00,param_1);
  pFVar4 = FText::GetEmpty();
  if ((this->BoundText).bIsSet != false) {
    pFVar4 = TAttribute<FText>::Get(this_00);
  }
  local_58.TextData.Reference = (pFVar4->TextData).Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res8);
  }
  local_58.Flags = pFVar4->Flags;
  GetEditableText(this,&local_48);
  pFVar5 = FText::ToString(&local_48);
  pFVar6 = FText::ToString(&local_58);
  iVar3 = (pFVar5->Data).ArrayNum;
  iVar1 = (pFVar6->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      bVar8 = false;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar8 = iVar3 != 0;
    }
  }
  else {
    bVar8 = iVar1 + iVar3 != 1;
  }
  puVar7 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_28);
  TVar2 = SWidget::HasAnyUserFocus((SWidget *)*puVar7);
  if (*(char *)(CONCAT62(extraout_var,TVar2) + 1) == '\0') {
    pFVar5 = FText::ToString(&local_58);
    pFVar6 = FText::ToString(&local_38);
    iVar3 = (pFVar5->Data).ArrayNum;
    iVar1 = (pFVar6->Data).ArrayNum;
    if (iVar3 == iVar1) goto LAB_142a0c2cd;
    bVar9 = iVar1 + iVar3 == 1;
LAB_142a0c2df:
    bVar9 = !bVar9;
  }
  else {
    pFVar5 = FText::ToString(&local_58);
    pFVar6 = FText::ToString(&local_48);
    iVar3 = (pFVar5->Data).ArrayNum;
    iVar1 = (pFVar6->Data).ArrayNum;
    if (iVar3 != iVar1) {
      bVar9 = iVar1 + iVar3 == 1;
      goto LAB_142a0c2df;
    }
LAB_142a0c2cd:
    if (1 < iVar3) {
      iVar3 = wcscmp((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
      bVar9 = iVar3 == 0;
      goto LAB_142a0c2df;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  bVar8 = RefreshImpl(this,&local_58,bVar8);
  if (bVar8) {
    puVar7 = (undefined8 *)
             (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_28);
    TVar2 = SWidget::HasAnyUserFocus((SWidget *)*puVar7);
    if ((*(char *)(CONCAT62(extraout_var_00,TVar2) + 1) == '\0') ||
       (this->bWasFocusedByLastMouseDown != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      JumpTo(this,EndOfDocument,MoveCursor);
    }
    if (bVar9) {
      (**(code **)((longlong)*this->OwnerWidget + 0xb0))(this->OwnerWidget,&local_58);
    }
    else {
LAB_142a0c368:
      bVar9 = TAttribute<FText>::IsBound(this_00);
      if (!bVar9) goto LAB_142a0c397;
    }
  }
  else if (!bVar9) goto LAB_142a0c368;
  puVar7 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_28);
  SWidget::Invalidate((SWidget *)*puVar7,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
LAB_142a0c397:
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// SetTextFlowDirection @ 142a0cc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetTextFlowDirection
          (FSlateEditableTextLayout *this,TOptional<ETextFlowDirection> *param_1)

{
  FSlateTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  ETextFlowDirection EVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  this_00 = (this->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar3 = GetDefaultTextFlowDirection();
  }
  else {
    EVar3 = param_1->TypedValue;
  }
  FTextLayout::SetTextFlowDirection((FTextLayout *)this_00,EVar3);
  return;
}

// SetTextShapingMethod @ 142a0d2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetTextShapingMethod
          (FSlateEditableTextLayout *this,TOptional<ETextShapingMethod> *param_1)

{
  FSlateTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  ETextShapingMethod EVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  this_00 = (this->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar3 = GetDefaultTextShapingMethod();
  }
  else {
    EVar3 = param_1->TypedValue;
  }
  FTextLayout::SetTextShapingMethod((FTextLayout *)this_00,EVar3);
  return;
}

// SetTextStyle @ 142a0d4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetTextStyle(FSlateEditableTextLayout *this,FTextBlockStyle *param_1)

{
  FSlateTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FTextBlockStyle *pFVar3;
  FTextBlockStyle local_2e8;
  
  FTextBlockStyle::operator=(&this->TextStyle,param_1);
  FTextBlockStyle::operator=(&this->HintTextStyle,&this->TextStyle);
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  this_00 = (this->TextLayout).Object;
  pFVar3 = FTextBlockStyle::FTextBlockStyle(&local_2e8,&this->TextStyle);
  FSlateTextLayout::SetDefaultTextStyle(this_00,pFVar3);
  if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142a0d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Marshaller).Object + 0x20))();
  return;
}

// SetTextWrapping @ 142a0d710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetTextWrapping
          (FSlateEditableTextLayout *this,TAttribute<float> *param_1,TAttribute<bool> *param_2,
          TAttribute<ETextWrappingPolicy> *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->WrapTextAt).Value = param_1->Value;
  (this->WrapTextAt).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->WrapTextAt).Getter,&param_1->Getter);
  (this->AutoWrapText).Value = param_2->Value;
  (this->AutoWrapText).bIsSet = param_2->bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AutoWrapText).Getter,&param_2->Getter);
  (this->WrappingPolicy).Value = param_3->Value;
  (this->WrappingPolicy).bIsSet = param_3->bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->WrappingPolicy).Getter,&param_3->Getter);
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar1,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetVerticalScrollFraction @ 142a0d910

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateEditableTextLayout::SetVerticalScrollFraction(FSlateEditableTextLayout *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D in_RDX;
  double dVar5;
  float in_XMM2_Da;
  TVector2<double> local_28 [2];
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FDeprecateSlateVector2D)(*pcVar1)();
      return FVar3;
    }
  }
  pTVar4 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,local_28);
  dVar5 = (double)in_XMM2_Da;
  if (__real_3ff0000000000000 <= (double)in_XMM2_Da) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  (this->ScrollOffset).field0_0x0._s_0.Y = (float)(dVar5 * (pTVar4->field0_0x0)._s_0.Y);
  *(TVector2<float>_u_0 *)in_RDX = (this->ScrollOffset).field0_0x0;
  return in_RDX;
}

// SetWrapTextAt @ 142a0db20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetWrapTextAt(FSlateEditableTextLayout *this,TAttribute<float> *param_1)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->WrapTextAt).Value = param_1->Value;
  (this->WrapTextAt).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->WrapTextAt).Getter,&param_1->Getter);
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar1,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SetWrappingPolicy @ 142a0dda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::SetWrappingPolicy
          (FSlateEditableTextLayout *this,TAttribute<ETextWrappingPolicy> *param_1)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (this->WrappingPolicy).Value = param_1->Value;
  (this->WrappingPolicy).bIsSet = param_1->bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->WrappingPolicy).Getter,&param_1->Getter);
  puVar1 = (undefined8 *)
           (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_18);
  SWidget::Invalidate((SWidget *)*puVar1,LayoutAndVolatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// Tick @ 142a0f2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::Tick
          (FSlateEditableTextLayout *this,FGeometry *param_1,double param_2,float param_3)

{
  TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1> *this_00;
  double dVar1;
  int iVar2;
  ISlateEditableTextWidget *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateTextLayout *pFVar5;
  longlong lVar6;
  code *pcVar7;
  EVisibility EVar8;
  bool bVar9;
  char cVar10;
  TOptional<EFocusCause> TVar11;
  int iVar12;
  FText *pFVar13;
  ITextInputMethodChangeNotifier *pIVar14;
  FSlateApplication *this_01;
  undefined8 *puVar15;
  undefined6 extraout_var;
  FTextInputMethodContext *pFVar16;
  FText *pFVar17;
  FTextSnapshot *pFVar18;
  bool *pbVar19;
  TVector2<double> *pTVar20;
  longlong lVar21;
  float *pfVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_res8 [2];
  ETextOverflowPolicy local_res10;
  char local_res11;
  float local_118;
  float fStack_114;
  TVector2<double>_u_0 local_108;
  FText local_f8;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  TVector2<double>_u_0 local_d8;
  FTextSnapshot local_c8;
  TVector2<double> local_b0;
  TVector2<double> local_a0;
  TVector2<double> local_90 [5];
  
  pFVar17 = (FText *)0x0;
  local_res8[0] = 0;
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xd6e,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  UpdateTextChangedByVirtualKeyboard(this);
  if (this->bTextCommittedByVirtualKeyboard != false) {
    pIVar3 = this->OwnerWidget;
    pcVar7 = *(code **)((longlong)*pIVar3 + 0xb8);
    pFVar13 = GetEditableText(this,&local_f8);
    (*pcVar7)(pIVar3,pFVar13);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    this->bTextCommittedByVirtualKeyboard = false;
  }
  if ((((this->TextInputMethodChangeNotifier).Object != (ITextInputMethodChangeNotifier *)0x0) &&
      (pFVar16 = (this->TextInputMethodContext).Object, pFVar16 != (FTextInputMethodContext *)0x0))
     && (((*(float *)&param_1->Size != *(float *)&(pFVar16->CachedGeometry).Size ||
          ((((*(float *)&(param_1->Size).field_0x4 !=
              *(float *)&(pFVar16->CachedGeometry).Size.field_0x4 ||
             ((param_1->AbsolutePosition).field0_0x0._s_0.X !=
              (pFVar16->CachedGeometry).AbsolutePosition.field0_0x0._s_0.X)) ||
            ((param_1->AbsolutePosition).field0_0x0._s_0.Y !=
             (pFVar16->CachedGeometry).AbsolutePosition.field0_0x0._s_0.Y)) ||
           (((param_1->Position).field0_0x0._s_0.X !=
             (pFVar16->CachedGeometry).Position.field0_0x0._s_0.X ||
            ((param_1->Position).field0_0x0._s_0.Y !=
             (pFVar16->CachedGeometry).Position.field0_0x0._s_0.Y)))))) ||
         (param_1->Scale != (pFVar16->CachedGeometry).Scale)))) {
    FGeometry::operator=(&pFVar16->CachedGeometry,param_1);
    pIVar14 = TSharedPtr<ITextInputMethodChangeNotifier,1>::operator->
                        (&this->TextInputMethodChangeNotifier);
    (**(code **)((longlong)*pIVar14 + 8))(pIVar14,1);
  }
  this_01 = FSlateApplication::Get();
  bVar9 = FSlateApplication::AllowMoveCursor(this_01);
  pFVar13 = pFVar17;
  if (bVar9) {
    puVar15 = (undefined8 *)
              (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_e8);
    TVar11 = SWidget::HasAnyUserFocus((SWidget *)*puVar15);
    if (((*(char *)(CONCAT62(extraout_var,TVar11) + 1) == '\0') &&
        ((this->ActiveContextMenu).bIsPendingSummon == false)) &&
       (((this->ActiveContextMenu).ActiveMenu.Object == (IMenu *)0x0 ||
        ((pTVar4 = (this->ActiveContextMenu).ActiveMenu.WeakReferenceCount.ReferenceController,
         pTVar4 == (TReferenceControllerBase<1> *)0x0 || ((int)pTVar4->SharedReferenceCount < 1)))))
       ) {
      pFVar13 = (FText *)&DAT_00000001;
      goto LAB_142a0f482;
    }
    bVar9 = true;
    pFVar13 = (FText *)&DAT_00000001;
  }
  else {
LAB_142a0f482:
    bVar9 = false;
  }
  if (pFVar13 != (FText *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  }
  pFVar5 = (this->TextLayout).Object;
  if (bVar9) {
    if ((pFVar5 == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,0x100);
    FTextLayout::SetTextOverflowPolicy((FTextLayout *)(this->TextLayout).Object,SUB82(local_res8,0))
    ;
  }
  else {
    if ((pFVar5 == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_res11 = (this->OverflowPolicyOverride).bIsSet;
    if ((bool)local_res11 != false) {
      local_res10 = (this->OverflowPolicyOverride).TypedValue;
    }
    FTextLayout::SetTextOverflowPolicy
              ((FTextLayout *)(this->TextLayout).Object,SUB82(&local_res10,0));
    pFVar17 = FText::GetEmpty();
    if ((this->BoundText).bIsSet != false) {
      pFVar17 = TAttribute<FText>::Get(&this->BoundText);
    }
  }
  RefreshImpl(this,pFVar17,false);
  if (this->bSelectionChangedExternally != false) {
    this_00 = &this->TextInputMethodContext;
    this->bSelectionChangedExternally = false;
    if (this_00->Object != (FTextInputMethodContext *)0x0) {
      if (this->ExternalSelectionEnd < this->ExternalSelectionStart) {
        pFVar16 = TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::operator->
                            (this_00);
        iVar2 = this->ExternalSelectionEnd;
        iVar12 = this->ExternalSelectionStart;
      }
      else {
        pFVar16 = TSharedPtr<FSlateEditableTextLayout::FTextInputMethodContext,1>::operator->
                            (this_00);
        iVar2 = this->ExternalSelectionStart;
        iVar12 = this->ExternalSelectionEnd;
      }
      (**(code **)(pFVar16->_padding_ + 0x28))(pFVar16,iVar2,iVar12 - iVar2);
    }
  }
  pFVar17 = FText::GetEmpty();
  if ((this->BoundSearchText).bIsSet != false) {
    pFVar17 = TAttribute<FText>::Get(&this->BoundSearchText);
  }
  bVar9 = FTextSnapshot::IdenticalTo(&this->BoundSearchTextLastTick,pFVar17);
  if (!bVar9) {
    bVar9 = FTextSnapshot::IsDisplayStringEqualTo(&this->BoundSearchTextLastTick,pFVar17);
    if (!bVar9) {
      BeginSearch(this,pFVar17,IgnoreCase,false);
    }
    pFVar18 = FTextSnapshot::FTextSnapshot(&local_c8,pFVar17);
    FTextSnapshot::operator=(&this->BoundSearchTextLastTick,pFVar18);
    if (local_c8.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar12 = *(int *)local_c8.LocalizedStringPtr;
      *(int *)local_c8.LocalizedStringPtr = *(int *)local_c8.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar12 == 1) {
        if (*(void **)((longlong)local_c8.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_c8.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_c8.LocalizedStringPtr,0x18);
      }
    }
    if (local_c8.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextDataPtr.Reference + 0x10))();
    }
  }
  fVar23 = FTextEditHelper::GetFontHeight(&(this->TextStyle).Font);
  fVar23 = FTextEditHelper::CalculateCaretWidth(fVar23);
  pbVar19 = TAttribute<bool>::Get(&this->AutoWrapText);
  if ((((*pbVar19 != false) && ((this->CachedSize).field0_0x0._s_0.X == 0.0)) &&
      ((this->CachedSize).field0_0x0._s_0.Y == 0.0)) ||
     (cVar10 = (**(code **)((longlong)*this->OwnerWidget + 0x10))(), EVar8 = EVisibility::Visible,
     cVar10 == '\0')) {
    EVar8.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  if ((this->PositionToScrollIntoView).bIsSet != false) {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->TextLayout).Object;
    if ((pFVar5 == (FSlateTextLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = FTextLayout::GetLineViewIndexForTextLocation
                       ((FTextLayout *)(this->TextLayout).Object,
                        (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)
                        &pFVar5->field_0x30,(FTextLocation *)&this->PositionToScrollIntoView,
                        (this->PositionToScrollIntoView).TypedValue.Alignment == Right);
    if ((-1 < iVar12) && (iVar12 < *(int *)&pFVar5->field_0x38)) {
      if ((iVar12 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&pFVar5->field_0x30;
      lVar21 = (longlong)iVar12 * 0x68;
      dVar24 = *(double *)(lVar6 + lVar21 + 0x48);
      dVar1 = *(double *)(lVar6 + lVar21 + 0x38);
      if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->TextLayout).Object;
      fVar26 = (float)((dVar24 + dVar1) / (double)*(float *)&pFVar5->field_0x94);
      if ((pFVar5 == (FSlateTextLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->TextLayout).Object;
      fVar27 = (float)(*(double *)(lVar6 + lVar21 + 0x38) / (double)*(float *)&pFVar5->field_0x94);
      if ((pFVar5 == (FSlateTextLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar20 = FTextLayout::GetLocationAt
                          ((FTextLayout *)(this->TextLayout).Object,&local_b0,
                           (FTextLocation *)&this->PositionToScrollIntoView,
                           (this->PositionToScrollIntoView).TypedValue.Alignment == Right);
      if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar24 = (pTVar20->field0_0x0)._s_0.X /
               (double)*(float *)&((this->TextLayout).Object)->field_0x94;
      fVar25 = (float)dVar24;
      fVar23 = (float)((double)fVar23 + dVar24);
      if (0.0 <= fVar25) {
        local_118 = SUB84(param_1->Size,0);
        if (local_118 < fVar23) {
          (this->ScrollOffset).field0_0x0._s_0.X =
               (fVar23 - local_118) + (this->ScrollOffset).field0_0x0._s_0.X;
        }
      }
      else {
        (this->ScrollOffset).field0_0x0._s_0.X = fVar25 + (this->ScrollOffset).field0_0x0._s_0.X;
      }
      if (0.0 <= fVar27) {
        fStack_114 = SUB84(param_1->Size,4);
        if (fStack_114 < fVar26) {
          (this->ScrollOffset).field0_0x0._s_0.Y =
               (fVar26 - fStack_114) + (this->ScrollOffset).field0_0x0._s_0.Y;
        }
      }
      else {
        (this->ScrollOffset).field0_0x0._s_0.Y = fVar27 + (this->ScrollOffset).field0_0x0._s_0.Y;
      }
    }
    if ((this->PositionToScrollIntoView).bIsSet != false) {
      (this->PositionToScrollIntoView).bIsSet = false;
    }
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar20 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,&local_a0);
  fVar23 = __real_3f800000;
  local_118 = SUB84(param_1->Size,0);
  fVar26 = (float)(pTVar20->field0_0x0)._s_0.X;
  if ((local_118 <= 0.0) || (fVar26 <= 0.0)) {
    fVar27 = __real_3f800000;
    if (0.0 < fVar26) goto LAB_142a0fa4e;
LAB_142a0fa71:
    fVar25 = 0.0;
  }
  else {
    fVar27 = local_118 / fVar26;
LAB_142a0fa4e:
    if (__real_3f800000 <= fVar27) goto LAB_142a0fa71;
    fVar25 = (this->ScrollOffset).field0_0x0._s_0.X / fVar26;
    if (__real_3f800000 - fVar27 <= fVar25) {
      fVar25 = __real_3f800000 - fVar27;
    }
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
  }
  pIVar3 = this->OwnerWidget;
  (this->ScrollOffset).field0_0x0._s_0.X = fVar25 * fVar26;
  fVar26 = (float)(**(code **)((longlong)*pIVar3 + 200))(pIVar3,fVar25,fVar27,EVar8.Value.Value);
  (this->ScrollOffset).field0_0x0._s_0.X = fVar26;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar20 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,local_90);
  fStack_114 = SUB84(param_1->Size,4);
  fVar26 = (float)(pTVar20->field0_0x0)._s_0.Y;
  if ((fStack_114 <= 0.0) || (fVar26 <= 0.0)) {
    fVar27 = fVar23;
    if (0.0 < fVar26) goto LAB_142a0fb07;
  }
  else {
    fVar27 = fStack_114 / fVar26;
LAB_142a0fb07:
    if (fVar27 < fVar23) {
      fVar25 = (this->ScrollOffset).field0_0x0._s_0.Y / fVar26;
      if (fVar23 - fVar27 <= fVar25) {
        fVar25 = fVar23 - fVar27;
      }
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      goto LAB_142a0fb33;
    }
  }
  fVar25 = 0.0;
LAB_142a0fb33:
  pfVar22 = &(this->ScrollOffset).field0_0x0._s_0.Y;
  pIVar3 = this->OwnerWidget;
  *pfVar22 = fVar25 * fVar26;
  fVar23 = (float)(**(code **)((longlong)*pIVar3 + 0xd0))(pIVar3,fVar25,fVar27,EVar8.Value.Value);
  *pfVar22 = fVar23;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (this->TextLayout).Object;
  fVar23 = (this->ScrollOffset).field0_0x0._s_0.X;
  fVar26 = (this->ScrollOffset).field0_0x0._s_0.Y;
  if ((pFVar5 == (FSlateTextLayout *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar24 = (double)*(float *)&((this->TextLayout).Object)->field_0x94;
  local_108._s_0.X = (double)fVar23 * dVar24;
  local_108._s_0.Y = (double)fVar26 * dVar24;
  dVar24 = (double)SUB84(param_1->Size,4);
  local_d8._8_4_ = SUB84(dVar24,0);
  local_d8._s_0.X = (double)SUB84(param_1->Size,0);
  local_d8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  FTextLayout::SetVisibleRegion
            ((FTextLayout *)pFVar5,(TVector2<double> *)&local_d8._s_0,
             (TVector2<double> *)&local_108._s_0);
  return;
}

// ToggleVirtualKeyboard @ 142a10480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::ToggleVirtualKeyboard
          (FSlateEditableTextLayout *this,bool param_1,int param_2)

{
  bool bVar1;
  FSlateApplication *this_00;
  TSharedPtr<IVirtualKeyboardEntry,1> local_18;
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    bVar1 = FGenericPlatformApplicationMisc::RequiresVirtualKeyboard();
    if (bVar1) {
      this_00 = FSlateApplication::Get();
      local_18.SharedReferenceCount.ReferenceController =
           (this->VirtualKeyboardEntry).SharedReferenceCount.ReferenceController;
      local_18.Object = (IVirtualKeyboardEntry *)(this->VirtualKeyboardEntry).Object;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::ShowVirtualKeyboard(this_00,param_1,param_2,&local_18);
    }
  }
  return;
}

// TranslateLocationVertical @ 142a10580

/* WARNING: Removing unreachable block (ram,0x000142a107a5) */
/* WARNING: Removing unreachable block (ram,0x000142a107b4) */
/* WARNING: Removing unreachable block (ram,0x000142a107b7) */
/* WARNING: Removing unreachable block (ram,0x000142a107db) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::TranslateLocationVertical
          (FSlateEditableTextLayout *this,FTextLocation *param_1,int param_2,float param_3,
          FTextLocation *param_4,TOptional<SlateEditableTextTypes::ECursorAlignment> *param_5)

{
  int iVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FTextLocation FVar7;
  uint uVar8;
  TVector2<double> *pTVar9;
  undefined1 local_54 [20];
  double local_40;
  
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->TextLayout).Object;
  iVar1 = *(int *)&pFVar2->field_0x38;
  if ((pFVar2 == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = FTextLayout::GetLineViewIndexForTextLocation
                    ((FTextLayout *)(this->TextLayout).Object,
                     (TArray<FTextLayout::FLineView,TSizedDefaultAllocator<32>_> *)
                     &pFVar2->field_0x30,param_1,(this->CursorInfo).CursorAlignment == Right);
  if ((uVar5 == 0xffffffff) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<9013400259803483134>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xbfe,"CurrentLineViewIndex != INDEX_NONE"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = 0;
  uVar6 = uVar8;
  if ((int)uVar5 < *(int *)&pFVar2->field_0x38) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = iVar1 - 1;
  if ((int)(uVar5 + param_2) < (int)uVar6) {
    uVar6 = uVar5 + param_2;
  }
  uVar5 = uVar8;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  if ((int)uVar5 < *(int *)&pFVar2->field_0x38) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar9 = (TVector2<double> *)(*(longlong *)&pFVar2->field_0x30 + (longlong)(int)uVar5 * 0x68);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_54._12_8_ = (double)this->PreferredCursorScreenOffsetInLine * (double)param_3;
  local_40 = (double)param_3 * pTVar9[3].field0_0x0._s_0.Y;
  FVar7 = FTextLayout::GetTextLocationAt
                    ((FTextLayout *)(this->TextLayout).Object,(FLineView *)local_54,pTVar9,
                     local_54 + 0xc);
  *param_4 = *(FTextLocation *)FVar7;
  return;
}

// TranslatedLocation @ 142a10870

/* WARNING: Enum "Type": Some values do not have unique names */

FTextLocation __thiscall
FSlateEditableTextLayout::TranslatedLocation
          (FSlateEditableTextLayout *this,FTextLocation *param_1,schar param_2)

{
  uint uVar1;
  int iVar2;
  FSlateTextLayout *pFVar3;
  IBreakIterator *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FTextLocation FVar9;
  uint uVar10;
  int iVar11;
  undefined7 in_register_00000081;
  FTextLocation *pFVar12;
  char in_R9B;
  
  pFVar12 = (FTextLocation *)CONCAT71(in_register_00000081,param_2);
  if ((in_R9B == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Direction != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xbd4,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FTextLocation)(*pcVar6)();
    return FVar9;
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FTextLocation)(*pcVar6)();
    return FVar9;
  }
  pFVar3 = (this->TextLayout).Object;
  if (((this->GraphemeBreakIterator).Object == (IBreakIterator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FTextLocation)(*pcVar6)();
    return FVar9;
  }
  uVar1 = pFVar12->LineIndex;
  pIVar4 = (this->GraphemeBreakIterator).Object;
  pcVar6 = *(code **)((longlong)*pIVar4 + 0x30);
  uVar10 = 0;
  if ((int)uVar1 < *(int *)&pFVar3->field_0x28) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FTextLocation)(*pcVar6)();
    return FVar9;
  }
  (*pcVar6)(pIVar4,*(undefined8 *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&pFVar3->field_0x20));
  pIVar4 = (this->GraphemeBreakIterator).Object;
  if (in_R9B < '\x01') {
    if ((pIVar4 == (IBreakIterator *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FTextLocation)(*pcVar6)();
      return FVar9;
    }
    pIVar4 = (this->GraphemeBreakIterator).Object;
    iVar8 = (**(code **)((longlong)*pIVar4 + 0x80))(pIVar4,pFVar12->Offset);
  }
  else {
    if ((pIVar4 == (IBreakIterator *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar9 = (FTextLocation)(*pcVar6)();
      return FVar9;
    }
    pIVar4 = (this->GraphemeBreakIterator).Object;
    iVar8 = (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,pFVar12->Offset);
  }
  if (((this->GraphemeBreakIterator).Object == (IBreakIterator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar9 = (FTextLocation)(*pcVar6)();
    return FVar9;
  }
  (**(code **)((longlong)*(this->GraphemeBreakIterator).Object + 0x50))();
  if (iVar8 == -1) {
    iVar11 = pFVar12->LineIndex;
    if (in_R9B < '\x01') {
      if (0 < iVar11) {
        uVar1 = iVar11 - 1;
        uVar10 = 0;
        if ((int)uVar1 < *(int *)&pFVar3->field_0x28) {
          uVar10 = ~uVar1 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          FVar9 = (FTextLocation)(*pcVar6)();
          return FVar9;
        }
        lVar5 = *(longlong *)&pFVar3->field_0x20;
        param_1->LineIndex = uVar1;
        iVar11 = *(int *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + lVar5) + 8);
        iVar8 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar8 = 0;
        }
        param_1->Offset = iVar8;
        return (FTextLocation)param_1;
      }
    }
    else if (iVar11 < *(int *)&pFVar3->field_0x28 + -1) {
      iVar11 = iVar11 + 1;
      param_1->Offset = 0;
      goto LAB_142a10b94;
    }
    *param_1 = *pFVar12;
  }
  else {
    if (iVar8 < 0) {
LAB_142a10b68:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewOffsetInLine >= 0 && NewOffsetInLine <= Lines[Location.GetLineIndex()].Text->Len()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Text\\SlateEditableTextLayout.cpp"
                         ,0xbf4,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FTextLocation)(*pcVar6)();
        return FVar9;
      }
    }
    else {
      uVar1 = pFVar12->LineIndex;
      uVar10 = 0;
      if ((int)uVar1 < *(int *)&pFVar3->field_0x28) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        FVar9 = (FTextLocation)(*pcVar6)();
        return FVar9;
      }
      iVar2 = *(int *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + *(longlong *)&pFVar3->field_0x20)
                      + 8);
      iVar11 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar11 = 0;
      }
      if (iVar11 < iVar8) goto LAB_142a10b68;
    }
    iVar11 = pFVar12->LineIndex;
    param_1->Offset = iVar8;
LAB_142a10b94:
    param_1->LineIndex = iVar11;
  }
  return (FTextLocation)param_1;
}

// Undo @ 142a11310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::Undo(FSlateEditableTextLayout *this)

{
  ITextData *pIVar1;
  code *pcVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  FText *pFVar6;
  uint uVar7;
  uint uVar9;
  int local_res8;
  uint local_resc;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FUndoState local_50;
  int iVar8;
  
  cVar4 = (**(code **)*this->OwnerWidget)();
  if ((cVar4 == '\0') && (0 < (this->UndoStates).ArrayNum)) {
    if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
    if (cVar4 == '\0') {
      iVar8 = this->CurrentUndoLevel;
      if (iVar8 == -1) {
        iVar8 = (this->UndoStates).ArrayNum;
        FText::FText(&local_50.Text);
        local_50.CursorInfo.LastCursorInteractionTime = 0.0;
        local_50.SelectionStart.bIsSet = false;
        local_50.CursorInfo.CursorPosition.LineIndex = 0;
        local_50.CursorInfo.CursorPosition.Offset = 0;
        local_50.CursorInfo.CursorAlignment = Left;
        local_50.CursorInfo.CursorTextDirection = LeftToRight;
        MakeUndoState(this,&local_50);
        PushUndoState(this,&local_50);
        if (local_50.Text.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_50.Text.TextData.Reference + 0x10))();
        }
      }
      uVar7 = iVar8 - 1;
      if (-1 < (int)uVar7) {
        uVar9 = 0;
        if ((int)uVar7 < (this->UndoStates).ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = (FText *)((this->UndoStates).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
        SaveText(this,pFVar6);
        bVar5 = SetEditableText(this,pFVar6,false);
        if (bVar5) {
          (**(code **)((longlong)*this->OwnerWidget + 0xb0))(this->OwnerWidget,pFVar6);
        }
        pIVar1 = pFVar6[2].TextData.Reference;
        uVar3 = (undefined2)pFVar6[2].Flags;
        local_68 = (int)pIVar1;
        iStack_64 = (int)((ulonglong)pIVar1 >> 0x20);
        (this->CursorInfo).CursorPosition.LineIndex = local_68;
        (this->CursorInfo).CursorPosition.Offset = iStack_64;
        uStack_60._0_1_ = (undefined1)uVar3;
        uStack_60._1_1_ = (undefined1)((ushort)uVar3 >> 8);
        (this->CursorInfo).CursorAlignment = (undefined1)uStack_60;
        (this->CursorInfo).CursorTextDirection = uStack_60._1_1_;
        *(undefined2 *)&(this->CursorInfo).field_0xa = uStack_60._2_2_;
        *(undefined4 *)&(this->CursorInfo).field_0xc = uStack_5c;
        (this->CursorInfo).LastCursorInteractionTime = 0.0;
        if (pFVar6 + 1 != (FText *)&this->SelectionStart) {
          if ((char)pFVar6[1].Flags == '\0') {
            if ((this->SelectionStart).bIsSet != false) {
              (this->SelectionStart).bIsSet = false;
            }
          }
          else {
            (this->SelectionStart).TypedValue = (FTextLocation)pFVar6[1].TextData.Reference;
            (this->SelectionStart).bIsSet = true;
          }
        }
        uVar9 = (this->CursorInfo).CursorPosition.Offset +
                (uint)((this->CursorInfo).CursorAlignment == Right);
        local_resc = 0;
        if (0 < (int)uVar9) {
          local_resc = uVar9;
        }
        local_res8 = (this->CursorInfo).CursorPosition.LineIndex;
        (**(code **)((longlong)*this->OwnerWidget + 0xc0))(this->OwnerWidget,&local_res8);
        UpdateCursorHighlight(this);
        this->CurrentUndoLevel = uVar7;
      }
    }
  }
  return;
}

// UpdateCursorHighlight @ 142a127c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateEditableTextLayout::UpdateCursorHighlight(FSlateEditableTextLayout *this)

{
  int *piVar1;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<SlateEditableTextTypes::FTextSelectionHighlighter,1> *this_00;
  ECursorAlignment EVar3;
  FTextSearchHighlighter *pFVar4;
  FTextCompositionHighlighter *pFVar5;
  FTextSelectionHighlighter *pFVar6;
  FCursorLineHighlighter *pFVar7;
  FVirtualKeyboardEntry *pFVar8;
  code *pcVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  char cVar16;
  TOptional<EFocusCause> TVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined6 extraout_var;
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> *pTVar21;
  FSlateTextLayout *pFVar22;
  uint uVar23;
  TReferenceControllerBase<1> *pTVar24;
  uint uVar25;
  wchar_t *pwVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  TOptional<FTextLocation> *pTVar29;
  FTextLineHighlight *pFVar30;
  longlong *plVar31;
  uint uVar32;
  FTextLineHighlight *pFVar33;
  ulonglong uVar34;
  FString *pFVar35;
  TReferenceControllerBase<1> *pTVar36;
  int iVar37;
  FTextLocation FVar38;
  FTextLocation FVar39;
  undefined8 local_res8;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  undefined1 local_246 [6];
  undefined1 local_240 [16];
  undefined8 local_230;
  FString *local_228;
  longlong *local_220;
  int local_218 [2];
  ulonglong local_210;
  FTextLocation local_208;
  FTextLocation local_200;
  int local_1f8;
  int iStack_1f4;
  uint local_1f0;
  int iStack_1ec;
  FTextLocation local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  FTextSearchHighlighter *local_1d0;
  TReferenceControllerBase<1> *local_1c8;
  uint local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  FTextCompositionHighlighter *local_1b0;
  TReferenceControllerBase<1> *local_1a8;
  uint local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  FTextSelectionHighlighter *local_190;
  TReferenceControllerBase<1> *local_188;
  uint local_180;
  undefined8 local_17c;
  undefined4 local_174;
  FTextSelectionHighlighter *local_170;
  TReferenceControllerBase<1> *local_168;
  uint local_160;
  ulonglong local_15c;
  undefined4 local_154;
  FTextSelectionHighlighter *local_150;
  TReferenceControllerBase<1> *local_148;
  uint local_140;
  ulonglong local_13c;
  undefined4 local_134;
  FTextSelectionHighlighter *local_130;
  TReferenceControllerBase<1> *local_128;
  int local_11c;
  uint uStack_118;
  undefined4 local_114;
  FTextOffsetLocations local_110;
  FTextSelection local_100;
  int local_f0;
  undefined8 local_ec;
  int local_e4;
  FCursorLineHighlighter *local_e0;
  TReferenceControllerBase<1> *local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  FTextLocation local_b8;
  undefined8 local_b0;
  TPairInitializer<FTextLocation_&&,int_const_&> local_a8;
  int *local_98;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> local_80;
  TSharedRef<SlateEditableTextTypes::FTextSelectionHighlighter,1> local_70;
  FReadAccessScope local_60;
  
  EVar3 = (this->CursorInfo).CursorAlignment;
  local_114 = CONCAT31(local_114._1_3_,EVar3);
  local_11c = (this->CursorInfo).CursorPosition.LineIndex;
  uVar23 = (this->CursorInfo).CursorPosition.Offset + (uint)(EVar3 == Right);
  uStack_118 = 0;
  if (0 < (int)uVar23) {
    uStack_118 = uVar23;
  }
  if ((TOptional<SlateEditableTextTypes::FScrollInfo> *)&local_11c !=
      &this->PositionToScrollIntoView) {
    FVar39.Offset = uStack_118;
    FVar39.LineIndex = local_11c;
    (this->PositionToScrollIntoView).TypedValue.Position = FVar39;
    *(undefined4 *)&(this->PositionToScrollIntoView).TypedValue.Alignment = local_114;
    (this->PositionToScrollIntoView).bIsSet = true;
  }
  (**(code **)((longlong)*this->OwnerWidget + 0x68))();
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar22 = (this->TextLayout).Object;
  pTVar2 = &this->ActiveLineHighlights;
  iVar18 = (this->ActiveLineHighlights).ArrayNum;
  pFVar30 = (FTextLineHighlight *)(pTVar2->AllocatorInstance).Data;
  pFVar33 = pFVar30 + iVar18;
  while( true ) {
    if ((this->ActiveLineHighlights).ArrayNum != iVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FTextLineHighlight,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar30 == pFVar33) break;
    if ((-1 < pFVar30->LineIndex) && (pFVar30->LineIndex < *(int *)&pFVar22->field_0x28)) {
      if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FTextLayout::RemoveLineHighlight((FTextLayout *)(this->TextLayout).Object,pFVar30);
    }
    pFVar30 = pFVar30 + 1;
  }
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)(pTVar2->AllocatorInstance).Data,
             (this->ActiveLineHighlights).ArrayNum);
  piVar1 = &(this->ActiveLineHighlights).ArrayMax;
  (this->ActiveLineHighlights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<FTextLocation,int>,TDefaultMapHashableKeyFuncs<FTextLocation,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FTextLocation,int>,TDefaultMapHashableKeyFuncs<FTextLocation,int,0>,FDefaultSetAllocator>
           *)&this->SearchResultToIndexMap);
  uVar23 = (this->CursorInfo).CursorPosition.LineIndex;
  uVar25 = (this->CursorInfo).CursorPosition.Offset +
           (uint)((this->CursorInfo).CursorAlignment == Right);
  local_240._0_4_ = uVar23;
  local_240._4_4_ = 0;
  if (0 < (int)uVar25) {
    local_240._4_4_ = uVar25;
  }
  pTVar29 = (TOptional<FTextLocation> *)local_240;
  if ((this->SelectionStart).bIsSet != false) {
    pTVar29 = &this->SelectionStart;
  }
  FVar39 = pTVar29->TypedValue;
  local_208 = FVar39;
  puVar20 = (undefined8 *)
            (**(code **)((longlong)*this->OwnerWidget + 0x90))(this->OwnerWidget,local_90);
  TVar17 = SWidget::HasAnyUserFocus((SWidget *)*puVar20);
  bVar12 = *(bool *)(CONCAT62(extraout_var,TVar17) + 1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  cVar14 = (**(code **)(((this->TextInputMethodContext).Object)->_padding_ + 8))();
  if ((FVar39.LineIndex != uVar23) || (bVar13 = false, FVar39.Offset != local_240._4_4_)) {
    bVar13 = true;
  }
  bVar15 = FText::IsEmpty(&this->SearchText);
  cVar16 = (**(code **)*this->OwnerWidget)();
  if (!bVar15) {
    local_228 = FText::ToString(&this->SearchText);
    local_210 = CONCAT44(local_210._4_4_,(local_228->Data).ArrayNum);
    local_218[0] = 0;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar35 = local_228;
    uVar34 = 0;
    pFVar22 = (this->TextLayout).Object;
    FVar38 = (FTextLocation)&pFVar22->field_0x20;
    local_230 = (ulonglong)local_230._4_4_ << 0x20;
    iVar18 = *(int *)&pFVar22->field_0x28;
    local_200 = FVar38;
    if (0 < iVar18) {
      local_220 = (longlong *)0x0;
      do {
        plVar31 = local_220;
        uVar25 = (uint)uVar34;
        uVar23 = 0;
        if ((int)uVar25 < iVar18) {
          uVar23 = ~uVar25 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar37 = 0;
        local_228 = (FString *)(*(longlong *)FVar38 + (longlong)plVar31);
        iVar19 = *(int *)((local_228->Data).AllocatorInstance.Data + 8);
        iVar18 = iVar19 + -1;
        if (iVar19 == 0) {
          iVar18 = 0;
        }
        local_240._8_4_ = iVar18;
        if (0 < iVar18) {
          do {
            uVar25 = (uint)uVar34;
            iVar18 = (pFVar35->Data).ArrayNum;
            iVar19 = 0;
            if (iVar18 == 0) {
              pwVar26 = L"";
            }
            else {
              pwVar26 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
              iVar19 = iVar18 + -1;
            }
            iVar18 = ::FString::Find((FString *)(local_228->Data).AllocatorInstance.Data,pwVar26,
                                     iVar19,this->SearchCase,FromStart,iVar37);
            plVar31 = local_220;
            FVar38 = local_200;
            if (iVar18 == -1) break;
            iVar37 = (int)local_210 + -1 + iVar18;
            if ((int)local_210 == 0) {
              iVar37 = iVar18;
            }
            if (((this->SearchSelectionHighlighter).Object == (FTextSearchHighlighter *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar36 = (this->SearchSelectionHighlighter).SharedReferenceCount.ReferenceController;
            pFVar4 = (this->SearchSelectionHighlighter).Object;
            if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar4 == (FTextSearchHighlighter *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1dc = CONCAT44(iVar37,iVar18);
            local_1d4 = 0xfffffff7;
            local_1e0 = (uint)local_230;
            pFVar27 = (pTVar2->AllocatorInstance).Data;
            local_1f8 = iVar18;
            iStack_1f4 = iVar37;
            local_1d0 = pFVar4;
            local_1c8 = pTVar36;
            if (((pFVar27 <= (FScriptContainerElement *)&local_1e0) &&
                ((FScriptContainerElement *)&local_1e0 <
                 pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar19 = (this->ActiveLineHighlights).ArrayNum;
            if (iVar19 == (this->ActiveLineHighlights).ArrayMax) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&pTVar2->AllocatorInstance,
                                  &(this->ActiveLineHighlights).ArrayMax);
            }
            (this->ActiveLineHighlights).ArrayNum = iVar19 + 1;
            pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x20;
            *(undefined4 *)pFVar27 = local_1e0;
            *(undefined8 *)(pFVar27 + 4) = local_1dc;
            *(undefined4 *)(pFVar27 + 0xc) = local_1d4;
            *(FTextSearchHighlighter **)(pFVar27 + 0x10) = local_1d0;
            *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_1c8;
            if (local_1c8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_1c8->SharedReferenceCount =
                   (atomic<int>)((int)local_1c8->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar36);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar36);
            uVar25 = (uint)local_230;
            uVar34 = local_230 & 0xffffffff;
            local_a8.Value = (int *)&local_d0;
            local_218[0] = local_218[0] + 1;
            local_98 = local_218;
            local_d0 = (uint)local_230;
            local_cc = iVar18;
            TSet<TTuple<FTextLocation,int>,TDefaultMapHashableKeyFuncs<FTextLocation,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FTextLocation_&&,int_const_&>_>
                      ((TSet<TTuple<FTextLocation,int>,TDefaultMapHashableKeyFuncs<FTextLocation,int,0>,FDefaultSetAllocator>
                        *)&this->SearchResultToIndexMap,&local_a8,(bool *)&local_a8.Value);
            plVar31 = local_220;
            FVar38 = local_200;
          } while (iVar37 < (int)local_240._8_4_);
        }
        iVar18 = *(int *)((longlong)FVar38 + 8);
        uVar25 = uVar25 + 1;
        uVar34 = (ulonglong)uVar25;
        local_220 = plVar31 + 0xe;
        local_230 = CONCAT44(local_230._4_4_,uVar25);
        FVar39 = local_208;
        uVar23 = local_240._0_4_;
      } while ((int)uVar25 < iVar18);
    }
    if (((this->SearchSelectionHighlighter).Object == (FTextSearchHighlighter *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    ((this->SearchSelectionHighlighter).Object)->bHasKeyboardFocus = bVar12;
  }
  if (cVar14 != '\0') {
    local_110.OffsetData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.OffsetData.ArrayNum = 0;
    local_110.OffsetData.ArrayMax = 0;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FTextLayout::GetTextOffsetLocations((FTextLayout *)(this->TextLayout).Object,&local_110);
    if (((this->TextInputMethodContext).Object == (FTextInputMethodContext *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_110,(int)&local_1f0);
    FTextLayout::FTextOffsetLocations::OffsetToTextLocation(&local_110,(int)&local_c8);
    if (local_1f0 == local_c8) {
      local_res8 = CONCAT44(local_c4,iStack_1ec);
      if (((local_1f0 == uVar23) && (iStack_1ec <= (int)local_240._4_4_)) &&
         ((int)local_240._4_4_ <= local_c4)) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      if ((0 < local_c4 - iStack_1ec) && (bVar13)) {
        pTVar2 = &this->ActiveLineHighlights;
        if (((this->TextCompositionHighlighter).Object == (FTextCompositionHighlighter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar36 = (this->TextCompositionHighlighter).SharedReferenceCount.ReferenceController;
        pFVar5 = (this->TextCompositionHighlighter).Object;
        if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar5 == (FTextCompositionHighlighter *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1b4 = 10;
        local_1bc = local_res8;
        local_1c0 = local_1f0;
        pFVar27 = (pTVar2->AllocatorInstance).Data;
        local_1b0 = pFVar5;
        local_1a8 = pTVar36;
        if (((pFVar27 <= (FScriptContainerElement *)&local_1c0) &&
            ((FScriptContainerElement *)&local_1c0 <
             pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar18 = (this->ActiveLineHighlights).ArrayNum;
        if (iVar18 == (this->ActiveLineHighlights).ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar2->AllocatorInstance,
                              &(this->ActiveLineHighlights).ArrayMax);
        }
        (this->ActiveLineHighlights).ArrayNum = iVar18 + 1;
        pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
        *(uint *)pFVar27 = local_1c0;
        *(undefined8 *)(pFVar27 + 4) = local_1bc;
        *(undefined4 *)(pFVar27 + 0xc) = local_1b4;
        *(FTextCompositionHighlighter **)(pFVar27 + 0x10) = local_1b0;
        *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_1a8;
        if (local_1a8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_1a8->SharedReferenceCount = (atomic<int>)((int)local_1a8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36)
        ;
      }
    }
    if (local_110.OffsetData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.OffsetData.AllocatorInstance.Data);
    }
    goto LAB_142a139a4;
  }
  if (!bVar13) goto LAB_142a139a4;
  local_b0 = CONCAT44(local_240._4_4_,local_240._0_4_);
  local_230 = (ulonglong)(uint)local_240._4_4_;
  local_220 = (longlong *)(ulonglong)(uint)local_240._4_4_;
  uVar25 = FVar39.Offset;
  uVar28 = FVar39.LineIndex;
  local_200.Offset = 0;
  local_200.LineIndex = local_240._4_4_;
  local_210 = (ulonglong)(uint)local_240._4_4_;
  local_228 = (FString *)(ulonglong)(uint)local_240._4_4_;
  local_208.Offset = 0;
  local_208.LineIndex = local_240._4_4_;
  if (uVar28 == uVar23) {
    if ((int)uVar25 < (int)local_240._4_4_) {
      uVar34 = (ulonglong)FVar39 & 0xffffffff;
    }
    else {
LAB_142a131d3:
      uVar34 = (ulonglong)uVar23;
    }
  }
  else {
    if ((int)uVar23 <= (int)uVar28) goto LAB_142a131d3;
    uVar34 = (ulonglong)FVar39 & 0xffffffff;
  }
  local_res18 = (ulonglong)(uint)local_240._4_4_;
  if (uVar28 == uVar23) {
    local_res18 = (ulonglong)FVar39 >> 0x20;
    if ((int)local_240._4_4_ <= (int)uVar25) {
      local_res18 = (ulonglong)(uint)local_240._4_4_;
    }
  }
  else if ((int)uVar28 < (int)uVar23) {
    local_res18 = (ulonglong)FVar39 >> 0x20;
  }
  bVar13 = SBORROW4(uVar28,uVar23);
  iVar18 = uVar28 - uVar23;
  if (uVar28 == uVar23) {
    bVar13 = SBORROW4(uVar25,local_240._4_4_);
    iVar18 = uVar25 - local_240._4_4_;
  }
  uVar32 = uVar23;
  if ((uVar28 != uVar23 || uVar25 != local_240._4_4_) && bVar13 == iVar18 < 0) {
    uVar32 = uVar28;
  }
  uVar10 = local_240._4_4_;
  if (uVar28 == uVar23) {
    if ((int)local_240._4_4_ < (int)uVar25) {
      uVar10 = uVar25;
    }
  }
  else if ((int)uVar23 <= (int)uVar28) {
    uVar10 = uVar25;
  }
  this_00 = &this->TextSelectionHighlighter;
  local_240._8_8_ = local_res18;
  local_b8 = FVar39;
  if ((this_00->Object == (FTextSelectionHighlighter *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00->Object->bHasKeyboardFocus = bVar12;
  uVar23 = (uint)uVar34;
  if (uVar23 == uVar32) {
    local_res8 = CONCAT44(uVar10,(int)local_res18);
    pTVar2 = &this->ActiveLineHighlights;
    pTVar21 = TSharedPtr<SlateEditableTextTypes::FTextSelectionHighlighter,1>::ToSharedRef
                        (this_00,&local_80);
    pTVar36 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_190 = pTVar21->Object;
    if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_194 = 0xfffffff6;
    local_19c = local_res8;
    pFVar27 = (pTVar2->AllocatorInstance).Data;
    local_1a0 = uVar23;
    local_188 = pTVar36;
    if (((pFVar27 <= (FScriptContainerElement *)&local_1a0) &&
        ((FScriptContainerElement *)&local_1a0 <
         pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar18 = (this->ActiveLineHighlights).ArrayNum;
    if (iVar18 == (this->ActiveLineHighlights).ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,&(this->ActiveLineHighlights).ArrayMax);
    }
    (this->ActiveLineHighlights).ArrayNum = iVar18 + 1;
    pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
    *(uint *)pFVar27 = local_1a0;
    *(undefined8 *)(pFVar27 + 4) = local_19c;
    *(undefined4 *)(pFVar27 + 0xc) = local_194;
    *(FTextSelectionHighlighter **)(pFVar27 + 0x10) = local_190;
    *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_188;
    if (local_188 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_188->SharedReferenceCount = (atomic<int>)((int)local_188->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar22 = TSharedPtr<FSlateTextLayout,1>::operator->(&this->TextLayout);
    FVar39 = (FTextLocation)(longlong)(int)uVar23;
    plVar31 = (longlong *)&pFVar22->field_0x20;
    local_208 = (FTextLocation)(longlong)(int)uVar32;
    local_220 = plVar31;
    local_200 = FVar39;
    if ((longlong)FVar39 <= (longlong)local_208) {
      pFVar35 = (FString *)((longlong)FVar39 * 0x70);
      pTVar2 = &this->ActiveLineHighlights;
      do {
        uVar23 = (uint)uVar34;
        local_228 = pFVar35;
        if (FVar39 == local_200) {
          uVar25 = 0;
          if ((int)uVar23 < (int)plVar31[1]) {
            uVar25 = ~uVar23 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar19 = *(int *)(*(longlong *)
                             ((longlong)&(pFVar35->Data).AllocatorInstance.Data + *plVar31) + 8);
          iVar18 = iVar19 + -1;
          if (iVar19 == 0) {
            iVar18 = 0;
          }
          uVar11 = CONCAT44(iVar18,(int)local_240._8_8_);
          if ((this_00->Object == (FTextSelectionHighlighter *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar36 = (this->TextSelectionHighlighter).SharedReferenceCount.ReferenceController;
          pFVar6 = this_00->Object;
          if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar6 == (FTextSelectionHighlighter *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_174 = 0xfffffff6;
          pFVar27 = (pTVar2->AllocatorInstance).Data;
          local_180 = uVar23;
          local_17c = uVar11;
          local_170 = pFVar6;
          local_168 = pTVar36;
          if (((pFVar27 <= (FScriptContainerElement *)&local_180) &&
              ((FScriptContainerElement *)&local_180 <
               pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar18 = (this->ActiveLineHighlights).ArrayNum;
          if (iVar18 == (this->ActiveLineHighlights).ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar2->AllocatorInstance,
                                &(this->ActiveLineHighlights).ArrayMax);
          }
          (this->ActiveLineHighlights).ArrayNum = iVar18 + 1;
          pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
          *(uint *)pFVar27 = local_180;
          *(undefined8 *)(pFVar27 + 4) = local_17c;
          *(undefined4 *)(pFVar27 + 0xc) = local_174;
          *(FTextSelectionHighlighter **)(pFVar27 + 0x10) = local_170;
          *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_168;
          pTVar24 = local_168;
          if (local_168 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_168->SharedReferenceCount =
                 (atomic<int>)((int)local_168->SharedReferenceCount + 1);
            UNLOCK();
          }
LAB_142a13965:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar24);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar36);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar36);
          plVar31 = local_220;
        }
        else {
          if (FVar39 != local_208) {
            uVar25 = 0;
            if ((int)uVar23 < (int)plVar31[1]) {
              uVar25 = ~uVar23 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar18 = *(int *)(*(longlong *)
                               ((longlong)&(pFVar35->Data).AllocatorInstance.Data + *plVar31) + 8);
            uVar25 = iVar18 - 1;
            if (iVar18 == 0) {
              uVar25 = 0;
            }
            local_230 = (ulonglong)uVar25 << 0x20;
            if ((this_00->Object == (FTextSelectionHighlighter *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar36 = (this->TextSelectionHighlighter).SharedReferenceCount.ReferenceController;
            pFVar6 = this_00->Object;
            if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar6 == (FTextSelectionHighlighter *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_134 = 0xfffffff6;
            local_13c = local_230;
            pFVar27 = (pTVar2->AllocatorInstance).Data;
            local_140 = uVar23;
            local_130 = pFVar6;
            local_128 = pTVar36;
            if (((pFVar27 <= (FScriptContainerElement *)&local_140) &&
                ((FScriptContainerElement *)&local_140 <
                 pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar18 = (this->ActiveLineHighlights).ArrayNum;
            if (iVar18 == (this->ActiveLineHighlights).ArrayMax) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&pTVar2->AllocatorInstance,
                                  &(this->ActiveLineHighlights).ArrayMax);
            }
            (this->ActiveLineHighlights).ArrayNum = iVar18 + 1;
            pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
            *(uint *)pFVar27 = local_140;
            *(ulonglong *)(pFVar27 + 4) = local_13c;
            *(undefined4 *)(pFVar27 + 0xc) = local_134;
            *(FTextSelectionHighlighter **)(pFVar27 + 0x10) = local_130;
            *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_128;
            pTVar24 = local_128;
            if (local_128 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_128->SharedReferenceCount =
                   (atomic<int>)((int)local_128->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_142a13965;
          }
          local_210 = (ulonglong)uVar10 << 0x20;
          pTVar21 = TSharedPtr<SlateEditableTextTypes::FTextSelectionHighlighter,1>::ToSharedRef
                              (this_00,&local_70);
          pTVar36 = (pTVar21->SharedReferenceCount).ReferenceController;
          local_150 = pTVar21->Object;
          if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_154 = 0xfffffff6;
          local_15c = local_210;
          pFVar27 = (pTVar2->AllocatorInstance).Data;
          local_160 = uVar23;
          local_148 = pTVar36;
          if (((pFVar27 <= (FScriptContainerElement *)&local_160) &&
              ((FScriptContainerElement *)&local_160 <
               pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar18 = (this->ActiveLineHighlights).ArrayNum;
          if (iVar18 == (this->ActiveLineHighlights).ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar2->AllocatorInstance,
                                &(this->ActiveLineHighlights).ArrayMax);
          }
          (this->ActiveLineHighlights).ArrayNum = iVar18 + 1;
          pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
          *(uint *)pFVar27 = local_160;
          *(ulonglong *)(pFVar27 + 4) = local_15c;
          *(undefined4 *)(pFVar27 + 0xc) = local_154;
          *(FTextSelectionHighlighter **)(pFVar27 + 0x10) = local_150;
          *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_148;
          if (local_148 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_148->SharedReferenceCount =
                 (atomic<int>)((int)local_148->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_148);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar36);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.SharedReferenceCount.ReferenceController);
        }
        uVar34 = (ulonglong)(uVar23 + 1);
        pFVar35 = local_228 + 7;
        FVar39 = (FTextLocation)((longlong)FVar39 + 1);
        local_228 = pFVar35;
      } while ((longlong)FVar39 <= (longlong)local_208);
    }
  }
LAB_142a139a4:
  if ((bVar12 != false) && (cVar16 == '\0')) {
    local_1e8 = (this->CursorInfo).CursorPosition;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((-1 < local_1e8.LineIndex) &&
       (pFVar22 = (this->TextLayout).Object, local_1e8.LineIndex < *(int *)&pFVar22->field_0x28)) {
      if ((pFVar22 == (FSlateTextLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FTextLayout::GetGraphemeAt((FTextLayout *)(this->TextLayout).Object,&local_100,&local_1e8);
      pTVar2 = &this->ActiveLineHighlights;
      if (((this->CursorLineHighlighter).Object == (FCursorLineHighlighter *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar36 = (this->CursorLineHighlighter).SharedReferenceCount.ReferenceController;
      pFVar7 = (this->CursorLineHighlighter).Object;
      if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar7 == (FCursorLineHighlighter *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar12 = SBORROW4(local_100.LocationA.LineIndex,local_100.LocationB.LineIndex);
      iVar18 = local_100.LocationA.LineIndex - local_100.LocationB.LineIndex;
      if (local_100.LocationA.LineIndex == local_100.LocationB.LineIndex) {
        bVar12 = SBORROW4(local_100.LocationA.Offset,local_100.LocationB.Offset);
        iVar18 = local_100.LocationA.Offset - local_100.LocationB.Offset;
      }
      iVar19 = local_100.LocationB.Offset;
      if ((local_100.LocationA.LineIndex != local_100.LocationB.LineIndex ||
          local_100.LocationA.Offset != local_100.LocationB.Offset) && bVar12 == iVar18 < 0) {
        iVar19 = local_100.LocationA.Offset;
      }
      bVar12 = SBORROW4(local_100.LocationA.LineIndex,local_100.LocationB.LineIndex);
      iVar18 = local_100.LocationA.LineIndex - local_100.LocationB.LineIndex;
      if (local_100.LocationA.LineIndex == local_100.LocationB.LineIndex) {
        bVar12 = SBORROW4(local_100.LocationA.Offset,local_100.LocationB.Offset);
        iVar18 = local_100.LocationA.Offset - local_100.LocationB.Offset;
      }
      if (bVar12 != iVar18 < 0) {
        local_100.LocationB.Offset = local_100.LocationA.Offset;
      }
      local_f0 = local_1e8.LineIndex;
      local_ec = CONCAT44(iVar19,local_100.LocationB.Offset);
      local_e4 = 0xb;
      if (pTVar36 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar36->SharedReferenceCount = (atomic<int>)((int)pTVar36->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar27 = (pTVar2->AllocatorInstance).Data;
      local_e0 = pFVar7;
      local_d8 = pTVar36;
      if (((pFVar27 <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           pFVar27 + (longlong)(this->ActiveLineHighlights).ArrayMax * 0x20)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar18 = (this->ActiveLineHighlights).ArrayNum;
      if (iVar18 == (this->ActiveLineHighlights).ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar2->AllocatorInstance,&(this->ActiveLineHighlights).ArrayMax)
        ;
      }
      (this->ActiveLineHighlights).ArrayNum = iVar18 + 1;
      pFVar27 = (pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
      *(int *)pFVar27 = local_f0;
      *(undefined8 *)(pFVar27 + 4) = local_ec;
      *(int *)(pFVar27 + 0xc) = local_e4;
      *(FCursorLineHighlighter **)(pFVar27 + 0x10) = local_e0;
      *(TReferenceControllerBase<1> **)(pFVar27 + 0x18) = local_d8;
      if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar36);
    }
  }
  iVar18 = (this->ActiveLineHighlights).ArrayNum;
  pFVar30 = (FTextLineHighlight *)(this->ActiveLineHighlights).AllocatorInstance.Data;
  pFVar33 = pFVar30 + iVar18;
  while( true ) {
    if ((this->ActiveLineHighlights).ArrayNum != iVar18) {
      local_246[0] = 0;
      `TCheckedPointerIterator<FTextLineHighlight,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_246);
    }
    if (pFVar30 == pFVar33) break;
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FTextLayout::AddLineHighlight((FTextLayout *)(this->TextLayout).Object,pFVar30);
    pFVar30 = pFVar30 + 1;
  }
  if (((this->VirtualKeyboardEntry).Object == (FVirtualKeyboardEntry *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = (this->VirtualKeyboardEntry).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar8->_padding_,&local_60)
  ;
  if (((int)pFVar8->_padding_ != 0) && ((longlong *)pFVar8->_padding_ != (longlong *)0x0)) {
    (**(code **)(*(longlong *)pFVar8->_padding_ + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  return;
}

// UpdatePreferredCursorScreenOffsetInLine @ 142a14080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::UpdatePreferredCursorScreenOffsetInLine(FSlateEditableTextLayout *this)

{
  ECursorAlignment EVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  int iVar5;
  FTextLocation local_res8 [4];
  TVector2<double> local_18;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  EVar1 = (this->CursorInfo).CursorAlignment;
  local_res8[0].LineIndex = (this->CursorInfo).CursorPosition.LineIndex;
  iVar5 = (this->CursorInfo).CursorPosition.Offset + (uint)(EVar1 == Right);
  local_res8[0].Offset = 0;
  if (0 < iVar5) {
    local_res8[0].Offset = iVar5;
  }
  pTVar4 = FTextLayout::GetLocationAt
                     ((FTextLayout *)(this->TextLayout).Object,&local_18,local_res8,EVar1 == Right);
  this->PreferredCursorScreenOffsetInLine = (float)(pTVar4->field0_0x0)._s_0.X;
  return;
}

// UpdateTextChangedByVirtualKeyboard @ 142a14450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateEditableTextLayout::UpdateTextChangedByVirtualKeyboard(FSlateEditableTextLayout *this)

{
  ISlateEditableTextWidget *pIVar1;
  code *pcVar2;
  FText *pFVar3;
  FText local_18;
  
  if (this->bTextChangedByVirtualKeyboard != false) {
    SetEditableText(this,&this->VirtualKeyboardText,false);
    pIVar1 = this->OwnerWidget;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0xb0);
    pFVar3 = GetEditableText(this,&local_18);
    (*pcVar2)(pIVar1,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    this->bTextChangedByVirtualKeyboard = false;
  }
  return;
}

