// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 15

// ~SProfileVisualizer @ 148d58ac0

void __thiscall SProfileVisualizer::~SProfileVisualizer(SProfileVisualizer *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->HeaderMessageText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ProfilerType).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedBarGraph).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProfileData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EventsTree).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BarVisualizer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainSplitter).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 148d67880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SProfileVisualizer::Construct(SProfileVisualizer *this,FArguments *param_1)

{
  byte *pbVar1;
  FVisualizerEvent *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  STextBlock *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  FStyle *pFVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  bool bVar18;
  FName *pFVar19;
  FSlotArguments *pFVar20;
  FArguments *pFVar21;
  FSlot *pFVar22;
  FSizeParam *pFVar23;
  FSlotArguments *pFVar24;
  FArguments *pFVar25;
  FArguments *pFVar26;
  FText *pFVar27;
  TSharedRef<STextBlock,1> *pTVar28;
  TSharedRef<SButton,1> *pTVar29;
  FSlot *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar30;
  FArguments *pFVar31;
  FArguments *pFVar32;
  TAttribute<FText> *pTVar33;
  TSharedRef<SBorder,1> *pTVar34;
  FArguments *pFVar35;
  undefined8 *puVar36;
  TSharedRef<SWidget,1> *pTVar37;
  ulong64 uVar38;
  SBarVisualizer *pSVar39;
  SBarVisualizer *pSVar40;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar41;
  FSlotArguments *pFVar42;
  FArguments *pFVar43;
  TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs> *pTVar44;
  TSharedRef<SEventsTree,1> *pTVar45;
  FArguments *pFVar46;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> *pTVar47;
  TSharedRef<SSplitter,1> *pTVar48;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar49;
  SEventsTree *this_02;
  TSharedPtr<FVisualizerEvent,1> *pTVar50;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  ulonglong uStack_4120;
  T0RequiredArgs local_4110;
  T0RequiredArgs local_410f;
  T0RequiredArgs local_410e;
  T0RequiredArgs local_410d;
  T0RequiredArgs local_410c;
  T0RequiredArgs local_410b;
  T0RequiredArgs local_410a;
  T0RequiredArgs local_4109;
  T0RequiredArgs local_4108 [8];
  FSlotArguments *local_4100;
  FLLMScope local_40f8;
  FLLMScope local_40f4;
  FLLMScope local_40f0;
  FLLMScope local_40ec;
  FLLMScope local_40e8;
  FLLMScope local_40e4;
  FLLMScope local_40e0;
  FLLMScope local_40dc;
  undefined2 local_40d8;
  undefined1 local_40d0 [8];
  ForAnyElementType FStack_40c8;
  ulonglong local_40c0;
  float local_40b8;
  undefined1 local_40b4;
  undefined1 local_40b0 [8];
  ForAnyElementType FStack_40a8;
  ulonglong local_40a0;
  uchar local_4098;
  undefined1 local_4097;
  undefined1 local_4090 [8];
  ForAnyElementType FStack_4088;
  ulonglong local_4080;
  uchar local_4078;
  undefined1 local_4077;
  undefined1 local_4070 [8];
  ForAnyElementType FStack_4068;
  ulonglong local_4060;
  FSlotArguments *local_4058;
  TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs> local_4050;
  FSlateBrush *local_4038;
  FName local_4030;
  FName local_4028;
  undefined4 uStack_4020;
  uint uStack_401c;
  FMemScope local_4018;
  SButton *local_4010;
  FSharedReferencer<1> local_4008;
  FArguments *local_4000;
  SButton *local_3ff8;
  FSharedReferencer<1> local_3ff0;
  SHorizontalBox *local_3fe8;
  FSharedReferencer<1> local_3fe0;
  SBorder *local_3fd8;
  FSharedReferencer<1> local_3fd0;
  FSlateBrush *local_3fc8;
  undefined1 local_3fc0;
  undefined1 local_3fb8 [8];
  ForAnyElementType FStack_3fb0;
  ulonglong local_3fa8;
  FText local_3fa0;
  bool local_3f90;
  undefined1 local_3f88 [8];
  ForAnyElementType FStack_3f80;
  ulonglong local_3f78;
  FText local_3f70;
  undefined1 local_3f60;
  undefined1 local_3f58 [8];
  ForAnyElementType FStack_3f50;
  ulonglong local_3f48;
  FText local_3f40;
  bool local_3f30;
  undefined1 local_3f28 [8];
  ForAnyElementType FStack_3f20;
  ulonglong local_3f18;
  FText local_3f10;
  undefined1 local_3f00;
  undefined1 local_3ef8 [8];
  ForAnyElementType FStack_3ef0;
  ulonglong local_3ee8;
  undefined8 local_3ee0;
  undefined8 uStack_3ed8;
  uint local_3ed0;
  undefined1 local_3ecc;
  undefined1 local_3ec8 [8];
  ForAnyElementType FStack_3ec0;
  ulonglong local_3eb8;
  SWidget *local_3eb0;
  TReferenceControllerBase<1> *pTStack_3ea8;
  SWidget *local_3ea0;
  TReferenceControllerBase<1> *pTStack_3e98;
  SWidget *local_3e90;
  TReferenceControllerBase<1> *pTStack_3e88;
  TSharedRef<SWidget,1> local_3e78;
  undefined1 local_3e68 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e50;
  ForAnyElementType FStack_3e48;
  ulonglong local_3e40;
  FSlot *local_3e38;
  FName local_3e30;
  FMemScope local_3e28;
  FMemScope local_3e20;
  TReferenceControllerBase<1> *local_3e18;
  TReferenceControllerBase<1> *local_3e10;
  TReferenceControllerBase<1> *local_3e08;
  FName local_3e00;
  FSlotArguments *local_3df8;
  FArguments *local_3df0;
  TReferenceControllerBase<1> *local_3de8;
  FMemScope local_3de0;
  undefined1 local_3dd8 [4];
  undefined1 local_3dd4 [4];
  FSlot *local_3dd0;
  FName local_3dc8;
  FMemScope local_3dc0;
  FName local_3db8;
  FName local_3db0;
  FMemScope local_3da8;
  FMemScope local_3da0;
  TReferenceControllerBase<1> *local_3d98;
  FText local_3d90;
  FName local_3d80;
  FMemScope local_3d78;
  TAttribute<float> local_3d70;
  TAttribute<EVisibility> local_3d50;
  TAttribute<EVisibility> local_3d30;
  TSharedRef<SWidget,1> local_3d10;
  TSharedRef<SWidget,1> local_3d00;
  TSharedRef<SWidget,1> local_3cf0;
  TSharedRef<SWidget,1> local_3ce0;
  TAttribute<FSlateBrush_const_*> local_3cd0;
  TAttribute<FSlateBrush_const_*> local_3ca8;
  FDestructionSentinel local_3c80;
  FDestructionSentinel local_3c68;
  FDestructionSentinel local_3c50;
  FDestructionSentinel local_3c38;
  FDestructionSentinel local_3c20;
  FDestructionSentinel local_3c08;
  FDestructionSentinel local_3bf0;
  FDestructionSentinel local_3bd8;
  FDestructionSentinel local_3bc0;
  FDestructionSentinel local_3ba8;
  FDestructionSentinel local_3b90;
  TAttribute<TSharedPtr<FVisualizerEvent,1>_> local_3b78;
  FDestructionSentinel local_3b48;
  undefined1 *local_3b30;
  FDestructionSentinel local_3b28;
  undefined1 *local_3b10;
  TSharedRef<SButton,1> local_3b08;
  TSharedRef<STextBlock,1> local_3af8;
  FText local_3ae8;
  FText local_3ad8;
  TSharedRef<SBorder,1> local_3ac8;
  TSharedRef<SButton,1> local_3ab8;
  TSharedRef<STextBlock,1> local_3aa8;
  FText local_3a98;
  TSharedRef<SBorder,1> local_3a88;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3a78;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3a60;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3a48;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3a30;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3a18;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3a00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_39e8;
  FVisualizerEvent *local_39d0;
  TReferenceControllerBase<1> *pTStack_39c8;
  FName local_39c0;
  TSharedRef<SEventsTree,1> local_39b8;
  TSharedRef<STextBlock,1> local_39a8;
  TSharedRef<SHorizontalBox,1> local_3998;
  TSharedRef<SBorder,1> local_3988;
  TSharedRef<SSplitter,1> local_3978;
  TSharedRef<SVerticalBox,1> local_3968;
  code *local_3958;
  TReferenceControllerBase<1> *pTStack_3950;
  SWidget *local_3948;
  TReferenceControllerBase<1> *pTStack_3940;
  TSharedRef<SWidget,1> local_3938;
  TSharedRef<SWidget,1> local_3928;
  code *local_3918;
  longlong lStack_3910;
  code *local_3908;
  longlong lStack_3900;
  code *local_38f8;
  longlong lStack_38f0;
  code *local_38e8;
  longlong lStack_38e0;
  undefined1 local_38d8 [16];
  undefined1 local_38c8 [32];
  undefined1 local_38a8 [24];
  undefined1 local_3890 [16];
  undefined1 local_3880 [32];
  undefined1 local_3860 [24];
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3848;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_3830;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3818;
  TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs> local_3800;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_37e8;
  TSharedPtr<FVisualizerEvent,1> local_37d0;
  TAttribute<FText> local_37c0;
  undefined1 local_3790 [88];
  TOptional<FSizeParam> local_3738;
  undefined1 local_36a8 [88];
  TOptional<FSizeParam> local_3650;
  FSlotArguments local_35c0;
  FSlotArguments local_3528;
  FSlotArguments local_3490;
  FSlotArguments local_33a8;
  FSlotArguments local_32c0;
  FArguments local_31d8;
  FArguments local_2fd0;
  FArguments local_2dc8;
  FArguments local_2b88;
  FArguments local_2900;
  FArguments local_2670;
  FArguments local_2290;
  FArguments local_1eb0;
  FArguments local_1ad0;
  FArguments local_1590;
  FArguments local_1050;
  FArguments local_af8;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x148d6789f;
  bVar14 = false;
  bVar13 = false;
  bVar18 = false;
  local_res8 = 0;
  pFVar2 = (param_1->_ProfileData).Object;
  pTVar3 = (param_1->_ProfileData).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_39d0 = (this->ProfileData).Object;
  pTStack_39c8 = (this->ProfileData).SharedReferenceCount.ReferenceController;
  (this->ProfileData).Object = pFVar2;
  (this->ProfileData).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_39c8);
  pIVar4 = (param_1->_ProfilerType).TextData.Reference;
  pIVar5 = (this->ProfilerType).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->ProfilerType).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_3dd8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->ProfilerType).Flags = (param_1->_ProfilerType).Flags;
  pIVar4 = (param_1->_HeaderMessageText).TextData.Reference;
  pIVar5 = (this->HeaderMessageText).TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->HeaderMessageText).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_3dd4);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->HeaderMessageText).Flags = (param_1->_HeaderMessageText).Flags;
  uVar11 = *(undefined8 *)((longlong)&(param_1->_HeaderMessageTextColor).field0_0x0 + 8);
  *(undefined8 *)&(this->HeaderMessageTextColor).field0_0x0 =
       *(undefined8 *)&(param_1->_HeaderMessageTextColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->HeaderMessageTextColor).field0_0x0 + 8) = uVar11;
  FVar16 = FProfileVisualizerStyle::StyleInstance.SharedReferenceCount;
  pFVar15 = FProfileVisualizerStyle::StyleInstance.Object;
  if (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FProfileVisualizerStyle::StyleInstance.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar15 == (FStyle *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pcVar10 = *(code **)(*(longlong *)pFVar15 + 0x50);
  pFVar19 = ::FName::FName(&local_39c0,"ProfileVisualizer.ContentAreaBrush");
  local_4038 = (FSlateBrush *)(*pcVar10)(pFVar15,*pFVar19,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  local_4030 = (FName)SVerticalBox::FArguments::FArguments(&local_2fd0);
  pFVar20 = SVerticalBox::Slot(&local_32c0);
  local_4100 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar21 = SHorizontalBox::FArguments::FArguments(&local_31d8);
  pFVar22 = ::operator_new(0x58);
  local_3dd0 = (FSlot *)0x0;
  if (pFVar22 != (FSlot *)0x0) {
    *(undefined8 *)pFVar22 = 0;
    *(undefined8 *)&pFVar22->field_0x8 = 0;
    *(undefined8 *)&pFVar22->field_0x10 = 0;
    *(undefined8 *)&pFVar22->field_0x18 = 0;
    *(undefined8 *)&pFVar22->field_0x20 = 0;
    *(undefined8 *)&pFVar22->field_0x28 = 0;
    *(undefined8 *)&pFVar22->field_0x30 = 0;
    *(undefined8 *)&pFVar22->field_0x38 = 0;
    *(undefined8 *)&pFVar22->field_0x40 = 0;
    *(undefined8 *)&pFVar22->field_0x48 = 0;
    *(undefined8 *)&pFVar22->field_0x50 = 0;
    local_3dd0 = SHorizontalBox::FSlot::FSlot(pFVar22);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_36a8,(FSlot *)&local_3dd0);
  pFVar23 = (FSizeParam *)FAuto::FAuto((FAuto *)local_38d8);
  TOptional<FSizeParam>::operator=(&local_3650,pFVar23);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38a8);
  if ((void *)local_38a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38c8);
  if ((void *)local_38c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38c8);
  pFVar24 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_36a8 + 0x18),0.0);
  pFVar25 = SButton::FArguments::FArguments(&local_1590);
  pFVar22 = (FSlot *)0x0;
  uVar12 = uStack_4120 >> 0x20;
  uStack_4120 = uVar12 << 0x20;
  local_38e8 = OnLoadClicked;
  lStack_38e0 = uStack_4120;
  pFVar25 = SButton::FArguments::OnClicked<SProfileVisualizer>
                      (pFVar25,this,(pmf_cc36586c *)&local_38e8);
  pFVar26 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar27 = FText::AsLocalizable_Advanced_LocText(&local_3d90,L"ProfileVisualizer",L"Load",L"Load");
  FText::FText(&local_3f40,pFVar27);
  local_3f30 = true;
  local_3f18 = 0;
  local_3f28 = (undefined1  [8])0x0;
  FStack_3f20.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar26->_Text).Value,&local_3f40);
  (pFVar26->_Text).bIsSet = local_3f30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f28,
             (FWriteAccessScope *)&local_3ba8);
  if (((int)local_3f18 != 0) && (FStack_3f20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f20,0,0,0x10);
    local_3f18 = local_3f18 & 0xffffffff00000000;
  }
  if (local_3ba8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3ba8.Accessor,&local_3ba8);
  }
  if (FStack_3f20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f28);
  if (local_3f40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3f40.TextData.Reference + 0x10))();
  }
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_3a98,L"ProfileVisualizer",L"Load_GPUTooltip",
                       L"Load GPU profiling data");
  FText::FText(&local_3f70,pFVar27);
  local_3f60 = 1;
  local_3f48 = 0;
  local_3f58 = (undefined1  [8])0x0;
  FStack_3f50.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar26,&local_3f70);
  *(undefined1 *)&pFVar26->_padding_ = local_3f60;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f58,
             (FWriteAccessScope *)&local_3b90);
  if (((int)local_3f48 != 0) && (FStack_3f50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f50,0,0,0x10);
    local_3f48 = local_3f48 & 0xffffffff00000000;
  }
  if (local_3b90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b90.Accessor,&local_3b90);
  }
  if (FStack_3f50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f58);
  if (local_3f70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3f70.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_40f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3dc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3dc0,&local_3dc8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_39e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x38,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_3dc0);
  FLLMScope::~FLLMScope(&local_40f8);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_39e8,&local_3aa8,pFVar26);
  pSVar6 = pTVar28->Object;
  local_3e08 = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_3e08 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3e08->SharedReferenceCount = (atomic<int>)((int)local_3e08->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_3e08->SharedReferenceCount = (atomic<int>)((int)local_3e08->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3eb0 = (pFVar25->_Content).Widget.Object;
  pTStack_3ea8 = (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar25->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController = local_3e08;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3ea8);
  FLLMScope::FLLMScope(&local_40dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3d80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3d78,&local_3d80,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_3a00,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x34,local_res10);
  FMemScope::~FMemScope(&local_3d78);
  FLLMScope::~FLLMScope(&local_40dc);
  pTVar29 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3a00,&local_3ab8,pFVar25);
  local_4010 = pTVar29->Object;
  local_4008.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_4008.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4008.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4008.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4008.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4008.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3e10 = local_4008.ReferenceController;
  if ((SButton **)&pFVar24->field_0x8 != &local_4010) {
    *(SButton **)&pFVar24->field_0x8 = local_4010;
    local_4010 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->field_0x10,&local_4008);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4008.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(pFVar21,pFVar24);
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar22 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_3e38 = pFVar22;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3790,(FSlot *)&local_3e38);
  pFVar23 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3890);
  TOptional<FSizeParam>::operator=(&local_3738,pFVar23);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3860);
  if ((void *)local_3860._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3860._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3860);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3880);
  if ((void *)local_3880._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3880._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3880);
  pFVar24 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_3790 + 0x18),0.0);
  pFVar25 = SButton::FArguments::FArguments(&local_1ad0);
  uStack_4120 = uVar12 << 0x20;
  local_38f8 = OnSaveClicked;
  lStack_38f0 = uStack_4120;
  pFVar25 = SButton::FArguments::OnClicked<SProfileVisualizer>
                      (pFVar25,this,(pmf_cc36586c *)&local_38f8);
  pFVar26 = STextBlock::FArguments::FArguments(&local_af8);
  pFVar27 = FText::AsLocalizable_Advanced_LocText(&local_3ad8,L"ProfileVisualizer",L"Save",L"Save");
  FText::FText(&local_3fa0,pFVar27);
  local_3f90 = true;
  local_3f78 = 0;
  local_3f88 = (undefined1  [8])0x0;
  FStack_3f80.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar26->_Text).Value,&local_3fa0);
  (pFVar26->_Text).bIsSet = local_3f90;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f88,
             (FWriteAccessScope *)&local_3c80);
  if (((int)local_3f78 != 0) && (FStack_3f80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f80,0,0,0x10);
    local_3f78 = local_3f78 & 0xffffffff00000000;
  }
  if (local_3c80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c80.Accessor,&local_3c80);
  }
  if (FStack_3f80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f88);
  if (local_3fa0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3fa0.TextData.Reference + 0x10))();
  }
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_3ae8,L"ProfileVisualizer",L"Save_GPUTooltip",
                       L"Save the GPU profiling data");
  FText::FText(&local_3f10,pFVar27);
  local_3f00 = 1;
  local_3ee8 = 0;
  local_3ef8 = (undefined1  [8])0x0;
  FStack_3ef0.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar26,&local_3f10);
  *(undefined1 *)&pFVar26->_padding_ = local_3f00;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ef8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3ef8,
             (FWriteAccessScope *)&local_3c68);
  if (((int)local_3ee8 != 0) && (FStack_3ef0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3ef0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3ef0,0,0,0x10);
    local_3ee8 = local_3ee8 & 0xffffffff00000000;
  }
  if (local_3c68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c68.Accessor,&local_3c68);
  }
  if (FStack_3ef0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3ef0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ef8);
  if (local_3f10.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3f10.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_40f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3e30 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3e28,&local_3e30,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3a18,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x45,local_res18);
  FMemScope::~FMemScope(&local_3e28);
  FLLMScope::~FLLMScope(&local_40f4);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3a18,&local_3af8,pFVar26);
  pSVar6 = pTVar28->Object;
  local_3e18 = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_3e18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_3e18->SharedReferenceCount = (atomic<int>)((int)local_3e18->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_3e18->SharedReferenceCount = (atomic<int>)((int)local_3e18->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3ea0 = (pFVar25->_Content).Widget.Object;
  pTStack_3e98 = (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar25->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController = local_3e18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3e98);
  FLLMScope::FLLMScope(&local_40f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3e00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3e20,&local_3e00,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_3a30,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x41,local_res20);
  FMemScope::~FMemScope(&local_3e20);
  FLLMScope::~FLLMScope(&local_40f0);
  pTVar29 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3a30,&local_3b08,pFVar25);
  local_3ff8 = pTVar29->Object;
  local_3ff0.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_3ff0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3ff0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3ff0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3ff0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3ff0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3d98 = local_3ff0.ReferenceController;
  if ((SButton **)&pFVar24->field_0x8 != &local_3ff8) {
    *(SButton **)&pFVar24->field_0x8 = local_3ff8;
    local_3ff8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->field_0x10,&local_3ff0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ff0.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(pFVar21,pFVar24);
  FLLMScope::FLLMScope(&local_40ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3db8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3da0,&local_3db8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3a48,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x2f,&local_4110);
  FMemScope::~FMemScope(&local_3da0);
  FLLMScope::~FLLMScope(&local_40ec);
  pTVar30 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3a48,&local_3998,pFVar21);
  pFVar20 = local_4100;
  local_3fe8 = pTVar30->Object;
  local_3fe0.ReferenceController = (pTVar30->SharedReferenceCount).ReferenceController;
  if (local_3fe0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3fe0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3fe0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3fe0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3fe0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3de8 = local_3fe0.ReferenceController;
  if ((SHorizontalBox **)&local_4100->field_0x8 != &local_3fe8) {
    *(SHorizontalBox **)&local_4100->field_0x8 = local_3fe8;
    local_3fe8 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_4100->field_0x10,&local_3fe0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3fe0.ReferenceController);
  pFVar31 = SVerticalBox::FArguments::operator+((FArguments *)local_4030,pFVar20);
  pFVar20 = SVerticalBox::Slot(&local_33a8);
  pFVar20 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pFVar32 = SBorder::FArguments::FArguments(&local_1eb0);
  local_4098 = (uchar)EVisibility::Visible.Value.Value;
  local_4097 = 1;
  local_4080 = 0;
  local_4090 = (undefined1  [8])0x0;
  FStack_4088.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar32->_padding_ = EVisibility::Visible.Value.Value;
  *(undefined1 *)((longlong)&pFVar32->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar32->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4090);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4090,
             (FWriteAccessScope *)&local_3c50);
  if (((int)local_4080 != 0) && (FStack_4088.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4088.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4088,0,0,0x10);
    local_4080 = local_4080 & 0xffffffff00000000;
  }
  if (local_3c50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c50.Accessor,&local_3c50);
  }
  if (FStack_4088.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4088.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4090);
  local_3fc8 = local_4038;
  local_3fc0 = 1;
  local_3fa8 = 0;
  local_3fb8 = (undefined1  [8])0x0;
  FStack_3fb0.Data = (FScriptContainerElement *)0x0;
  (pFVar32->_BorderImage).Value = local_4038;
  (pFVar32->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3fb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3fb8,
             (FWriteAccessScope *)&local_3c38);
  if (((int)local_3fa8 != 0) && (FStack_3fb0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3fb0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3fb0,0,0,0x10);
    local_3fa8 = local_3fa8 & 0xffffffff00000000;
  }
  if (local_3c38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c38.Accessor,&local_3c38);
  }
  if (FStack_3fb0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3fb0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3fb8);
  pFVar26 = STextBlock::FArguments::FArguments(&local_1050);
  bVar17 = FText::IsEmpty(&this->HeaderMessageText);
  local_4078 = (uchar)EVisibility::Visible;
  if (bVar17) {
    local_4078 = (uchar)EVisibility::Collapsed;
  }
  local_4077 = 1;
  local_4060 = 0;
  local_4070 = (undefined1  [8])0x0;
  FStack_4068.Data = (FScriptContainerElement *)0x0;
  *(uchar *)&pFVar26->_padding_ = local_4078;
  *(undefined1 *)((longlong)&pFVar26->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4070);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4070,
             (FWriteAccessScope *)&local_3bc0);
  if (((int)local_4060 != 0) && (FStack_4068.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4068.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4068,0,0,0x10);
    local_4060 = local_4060 & 0xffffffff00000000;
  }
  if (local_3bc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3bc0.Accessor,&local_3bc0);
  }
  if (FStack_4068.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4068.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4070);
  pTVar33 = TAttribute<FText>::TAttribute<FText><FText>(&local_37c0,&this->HeaderMessageText);
  pFVar26 = STextBlock::FArguments::Text(pFVar26,pTVar33);
  local_3ee0 = *(undefined8 *)&(this->HeaderMessageTextColor).field0_0x0;
  uStack_3ed8 = *(undefined8 *)((longlong)&(this->HeaderMessageTextColor).field0_0x0 + 8);
  local_3ed0 = local_3ed0 & 0xffffff00;
  local_3ecc = 1;
  local_3eb8 = 0;
  local_3ec8 = (undefined1  [8])0x0;
  FStack_3ec0.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar26->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 = local_3ee0;
  *(undefined8 *)((longlong)&(pFVar26->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_3ed8;
  (pFVar26->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_3ed0;
  (pFVar26->_ColorAndOpacity).Value.ColorTableId = local_3ed0._1_1_;
  *(undefined2 *)&(pFVar26->_ColorAndOpacity).Value.field_0x12 = local_3ed0._2_2_;
  (pFVar26->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ec8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3ec8,
             (FWriteAccessScope *)&local_3c20);
  if (((int)local_3eb8 != 0) && (FStack_3ec0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3ec0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3ec0,0,0,0x10);
    local_3eb8 = local_3eb8 & 0xffffffff00000000;
  }
  if (local_3c20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c20.Accessor,&local_3c20);
  }
  if (FStack_3ec0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3ec0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ec8);
  local_40d8 = 0x101;
  local_40c0 = 0;
  local_40d0 = (undefined1  [8])0x0;
  FStack_40c8.Data = (FScriptContainerElement *)0x0;
  (pFVar26->_AutoWrapText).Value = true;
  (pFVar26->_AutoWrapText).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_AutoWrapText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_40d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40d0,
             (FWriteAccessScope *)&local_3c08);
  if (((int)local_40c0 != 0) && (FStack_40c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40c8,0,0,0x10);
    local_40c0 = local_40c0 & 0xffffffff00000000;
  }
  if (local_3c08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c08.Accessor,&local_3c08);
  }
  if (FStack_40c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40d0);
  FLLMScope::FLLMScope(&local_40e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4030 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3da8,&local_4030,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3a60,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x52,&local_410f);
  FMemScope::~FMemScope(&local_3da8);
  FLLMScope::~FLLMScope(&local_40e8);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3a60,&local_39a8,pFVar26);
  pTVar3 = (pTVar28->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar28->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3e90 = (pFVar32->_Content).Widget.Object;
  pTStack_3e88 = (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar32->_Content).Widget.Object = (SWidget *)pSVar6;
  (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3e88);
  FLLMScope::FLLMScope(&local_40e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3db0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3de0,&local_3db0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_3a78,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,0x4e,&local_410e);
  FMemScope::~FMemScope(&local_3de0);
  FLLMScope::~FLLMScope(&local_40e4);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3a78,&local_3ac8,pFVar32);
  pTVar7 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_3fd8 = pTVar34->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3fd0.ReferenceController = pTVar7;
  if ((SBorder **)&pFVar20->field_0x8 != &local_3fd8) {
    *(SBorder **)&pFVar20->field_0x8 = local_3fd8;
    local_3fd8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_3fd0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3fd0.ReferenceController);
  local_3df0 = SVerticalBox::FArguments::operator+(pFVar31,pFVar20);
  local_3df8 = SVerticalBox::Slot(&local_3490);
  local_4000 = (FArguments *)SSplitter::FArguments::FArguments(&local_2900);
  ((FArguments *)local_4000)->_Orientation = Orient_Vertical;
  local_4058 = SSplitter::Slot(&local_3528);
  local_40b4 = 1;
  local_40b8 = __real_3f800000;
  local_40a0 = 0;
  local_40b0 = (undefined1  [8])0x0;
  FStack_40a8.Data = (FScriptContainerElement *)0x0;
  (local_4058->_Value).Value = __real_3f800000;
  (local_4058->_Value).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_4058->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_40b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40b0,
             (FWriteAccessScope *)&local_3bf0);
  if (((int)local_40a0 != 0) && (FStack_40a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40a8,0,0,0x10);
    local_40a0 = local_40a0 & 0xffffffff00000000;
  }
  if (local_3bf0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3bf0.Accessor,&local_3bf0);
  }
  if (FStack_40a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40b0);
  pFVar32 = SBorder::FArguments::FArguments(&local_2290);
  local_3d30.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_3d30.bIsSet = true;
  local_3d30.Getter._0_8_ = 0;
  local_3d30.Getter._8_8_ = 0;
  local_3d30.Getter._16_8_ = 0;
  pFVar32 = TSlateBaseNamedArgs<SBorder>::Visibility
                      ((TSlateBaseNamedArgs<SBorder> *)pFVar32,&local_3d30);
  local_3ca8.Value = local_4038;
  local_3ca8.bIsSet = true;
  local_3ca8.Getter._0_8_ = 0;
  local_3ca8.Getter._8_8_ = 0;
  local_3ca8.Getter._16_8_ = 0;
  pFVar32 = SBorder::FArguments::BorderImage(pFVar32,&local_3ca8);
  pFVar35 = SBarVisualizer::FArguments::FArguments(&local_2b88);
  local_3e68._0_8_ = (this->ProfileData).Object;
  local_3e68._8_8_ = (this->ProfileData).SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_3e68._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_3e68._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_3e68._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3e68[0x10] = true;
  local_3e40 = 0;
  local_3e50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3e48.Data = (FScriptContainerElement *)0x0;
  TAttribute<TSharedPtr<FVisualizerEvent,1>_>::operator=
            (&pFVar35->_ProfileData,(TAttribute<TSharedPtr<FVisualizerEvent,1>_> *)local_3e68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3e50,(FWriteAccessScope *)&local_3bd8);
  if (((int)local_3e40 != 0) && (FStack_3e48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e48,0,0,0x10);
    local_3e40 = local_3e40 & 0xffffffff00000000;
  }
  if (local_3bd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3bd8.Accessor,&local_3bd8);
  }
  if (FStack_3e48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e50.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3e68._8_8_);
  uStack_4120 = uVar12 << 0x20;
  local_3908 = RouteBarGraphSelectionChanged;
  lStack_3900 = uStack_4120;
  TDelegateRegistration<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  BindSP<SProfileVisualizer>
            ((TDelegateRegistration<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              *)&pFVar35->_OnBarGraphSelectionChanged,this,(pmf_4443d42f *)&local_3908);
  uStack_4120 = uVar12 << 0x20;
  local_3918 = RouteBarGraphExpansionChanged;
  lStack_3910 = uStack_4120;
  TDelegateRegistration<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  BindSP<SProfileVisualizer>
            ((TDelegateRegistration<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              *)&pFVar35->_OnBarGraphExpansionChanged,this,(pmf_4443d42f *)&local_3918);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar35->_OnBarEventSelectionChanged,(FWriteAccessScope *)&local_3b48);
  local_3b30 = &(pFVar35->_OnBarEventSelectionChanged).field_0x8;
  puVar36 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3b30);
  if (puVar36 == (undefined8 *)0x0) {
    pFVar20 = (FSlotArguments *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_401c = local_3d90._12_4_;
    local_4028 = (FName)RouteBarEventSelectionChanged;
    uStack_4020 = 0;
    pTVar37 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3928);
    pFVar20 = (FSlotArguments *)(pTVar37->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar37->Object;
    if (pFVar20 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar20->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar20->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar20->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar20->field_0x8 + 1);
      UNLOCK();
    }
    *puVar36 = &
               ___7__TCommonDelegateInstanceState___A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_4100 = pFVar20;
    uVar38 = FDelegateHandle::GenerateNewID();
    puVar36[2] = uVar38;
    *puVar36 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXHV__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar36[3] = pSVar8;
    puVar36[4] = pFVar20;
    if (pFVar20 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar20->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar20->field_0xc + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar13 = true;
    bVar18 = true;
    *(FName *)(puVar36 + 5) = local_4028;
    puVar36[6] = CONCAT44(uStack_401c,uStack_4020);
    pFVar20 = local_4100;
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3928.SharedReferenceCount.ReferenceController);
  }
  bVar14 = false;
  bVar13 = false;
  bVar18 = false;
  if (local_3b48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b48.Accessor,&local_3b48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar35->_OnBarGraphContextMenu,(FWriteAccessScope *)&local_3b28);
  local_3b10 = &(pFVar35->_OnBarGraphContextMenu).field_0x8;
  puVar36 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_3b10);
  if (puVar36 == (undefined8 *)0x0) {
    pFVar20 = (FSlotArguments *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_4120 = (ulonglong)(uint)local_3d90._12_4_ << 0x20;
    pTVar37 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3938);
    pFVar20 = (FSlotArguments *)(pTVar37->SharedReferenceCount).ReferenceController;
    local_4028 = (FName)pTVar37->Object;
    if (pFVar20 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar20->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar20->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar20->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar20->field_0x8 + 1);
      UNLOCK();
    }
    bVar14 = true;
    bVar13 = true;
    bVar18 = true;
    *puVar36 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_4100 = pFVar20;
    uVar38 = FDelegateHandle::GenerateNewID();
    puVar36[2] = uVar38;
    *puVar36 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar36 + 3) = local_4028;
    puVar36[4] = pFVar20;
    if (pFVar20 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar20->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar20->field_0xc + 1);
      UNLOCK();
    }
    puVar36[5] = OnBarGraphContextMenu;
    puVar36[6] = uStack_4120;
    pFVar20 = local_4100;
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar20);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3938.SharedReferenceCount.ReferenceController);
  }
  if (local_3b28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b28.Accessor,&local_3b28);
  }
  FLLMScope::FLLMScope(&local_40e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4028 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4018,&local_4028,true);
  TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SBarVisualizer,RequiredArgs::T0RequiredArgs>
            (&local_4050,"SBarVisualizer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
             ,100,&local_410d);
  FMemScope::~FMemScope(&local_4018);
  FLLMScope::~FLLMScope(&local_40e0);
  if (local_4050._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4050._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4050._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar9 = (this->BarVisualizer).SharedReferenceCount.ReferenceController;
  (this->BarVisualizer).Object = local_4050._Widget.Object;
  (this->BarVisualizer).SharedReferenceCount.ReferenceController =
       local_4050._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pSVar39 = TSharedPtr<SBarVisualizer,1>::operator->(&local_4050._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar39,(FSlateBaseNamedArgs *)pFVar35);
  pSVar39 = local_4050._Widget.Object;
  SBarVisualizer::Construct(local_4050._Widget.Object,pFVar35);
  pSVar40 = TSharedPtr<SBarVisualizer,1>::operator->(&local_4050._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar40);
  pSVar40 = TSharedPtr<SBarVisualizer,1>::operator->(&local_4050._Widget);
  pbVar1 = (byte *)((longlong)&pSVar40->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4050._Widget.Object == (SBarVisualizer *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar16.ReferenceController = local_4050._Widget.SharedReferenceCount.ReferenceController;
  local_4050._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4050._Widget.Object = (SBarVisualizer *)0x0;
  if ((pSVar39 == (SBarVisualizer *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
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
  local_3948 = (pFVar32->_Content).Widget.Object;
  pTStack_3940 = (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar32->_Content).Widget.Object = (SWidget *)pSVar39;
  (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3940);
  pTVar41 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_37e8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
                       ,0x60,&local_410c);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar41,&local_3a88,pFVar32);
  pTVar9 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_3e78.Object = (SWidget *)pTVar34->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3e78.SharedReferenceCount.ReferenceController = pTVar9;
  pFVar42 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4058,&local_3e78);
  local_4018 = (FMemScope)SSplitter::FArguments::operator+((FArguments *)local_4000,pFVar42);
  pFVar42 = SSplitter::Slot(&local_35c0);
  local_3d70.Value = 1.0;
  local_3d70.bIsSet = true;
  local_3d70.Getter._0_8_ = 0;
  local_3d70.Getter._8_8_ = 0;
  local_3d70.Getter._16_8_ = 0;
  local_4058 = SSplitter::FSlot::FSlotArguments::Value(pFVar42,&local_3d70);
  pFVar32 = SBorder::FArguments::FArguments(&local_2670);
  local_3d50.Value = (EVisibility)EVisibility::Visible.Value.Value;
  local_3d50.bIsSet = true;
  local_3d50.Getter._0_8_ = 0;
  local_3d50.Getter._8_8_ = 0;
  local_3d50.Getter._16_8_ = 0;
  pFVar32 = TSlateBaseNamedArgs<SBorder>::Visibility
                      ((TSlateBaseNamedArgs<SBorder> *)pFVar32,&local_3d50);
  local_3cd0.Value = local_4038;
  local_3cd0.bIsSet = true;
  local_3cd0.Getter._0_8_ = 0;
  local_3cd0.Getter._8_8_ = 0;
  local_3cd0.Getter._16_8_ = 0;
  local_4000 = SBorder::FArguments::BorderImage(pFVar32,&local_3cd0);
  pFVar43 = SEventsTree::FArguments::FArguments(&local_2dc8);
  local_3b78.Value.Object = (this->ProfileData).Object;
  local_3b78.Value.SharedReferenceCount.ReferenceController =
       (this->ProfileData).SharedReferenceCount.ReferenceController;
  if (local_3b78.Value.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b78.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b78.Value.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
         );
    UNLOCK();
  }
  local_3b78.bIsSet = true;
  local_3b78.Getter._16_8_ = 0;
  local_3b78.Getter._0_8_ = 0;
  local_3b78.Getter._8_8_ = 0;
  pFVar43 = SEventsTree::FArguments::ProfileData(pFVar43,&local_3b78);
  local_3e78.SharedReferenceCount.ReferenceController =
       local_3e78.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_3e78.Object = (SWidget *)RouteEventSelectionChanged;
  local_3958 = RouteEventSelectionChanged;
  pTStack_3950 = local_3e78.SharedReferenceCount.ReferenceController;
  pFVar43 = SEventsTree::FArguments::OnEventSelectionChanged<SProfileVisualizer>
                      (pFVar43,this,(pmf_4443d42f *)&local_3958);
  pTVar44 = MakeTDecl<SEventsTree,RequiredArgs::T0RequiredArgs>
                      (&local_3800,"SEventsTree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
                       ,0x73,&local_410b);
  pTVar44 = TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs>::Expose<SEventsTree>
                      (pTVar44,&this->EventsTree);
  pTVar45 = TSlateDecl<SEventsTree,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar44,&local_39b8,pFVar43);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SEventsTree>(&local_3d00,pTVar45);
  pFVar32 = SBorder::FArguments::operator[](local_4000,&local_3d00);
  pTVar41 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_3818,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
                       ,0x6f,&local_410a);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar41,&local_3988,pFVar32);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_3d10,pTVar34);
  pFVar42 = TSlotBase<SSplitter::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4058,&local_3d10);
  pFVar46 = SSplitter::FArguments::operator+((FArguments *)local_4018,pFVar42);
  pTVar47 = MakeTDecl<SSplitter,RequiredArgs::T0RequiredArgs>
                      (&local_3830,"SSplitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
                       ,0x5b,&local_4109);
  pTVar47 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::Expose<SSplitter>
                      (pTVar47,&this->MainSplitter);
  pTVar48 = TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar47,&local_3978,pFVar46);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitter>(&local_3cf0,pTVar48);
  pFVar20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3df8,&local_3cf0);
  pFVar31 = SVerticalBox::FArguments::operator+(local_3df0,pFVar20);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3848,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SProfileVisualizer.cpp"
                       ,0x2b,local_4108);
  pTVar49 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_3968,pFVar31);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3ce0,pTVar49);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_3ce0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ce0.SharedReferenceCount.ReferenceController);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_3968);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_3848);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cf0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3978.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3830._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d10.SharedReferenceCount.ReferenceController);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_3988);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3818._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3800._Widget.SharedReferenceCount.ReferenceController);
  SEventsTree::FArguments::~FArguments(&local_2dc8);
  SBorder::FArguments::~FArguments(&local_2670);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_35c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_3a88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4050._Widget.SharedReferenceCount.ReferenceController);
  SBarVisualizer::FArguments::~FArguments(&local_2b88);
  SBorder::FArguments::~FArguments(&local_2290);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_3528);
  SSplitter::FArguments::~FArguments(&local_2900);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3490);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_3ac8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a78._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a60._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_1050);
  SBorder::FArguments::~FArguments(&local_1eb0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_33a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3de8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_3998);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3d98);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_3b08);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_3a30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3e18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3af8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a18._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_3ae8);
  FText::~FText(&local_3ad8);
  STextBlock::FArguments::~FArguments(&local_af8);
  SButton::FArguments::~FArguments(&local_1ad0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_3790);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3e10);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_3ab8);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_3a00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3e08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3aa8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_39e8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_3a98);
  FText::~FText(&local_3d90);
  STextBlock::FArguments::~FArguments(&local_5a0);
  SButton::FArguments::~FArguments(&local_1590);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_36a8);
  SHorizontalBox::FArguments::~FArguments(&local_31d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_32c0);
  SVerticalBox::FArguments::~FArguments(&local_2fd0);
  this_02 = TSharedPtr<SEventsTree,1>::operator->(&this->EventsTree);
  pTVar50 = TSharedPtr<FVisualizerEvent,1>::TSharedPtr<FVisualizerEvent,1>
                      (&local_37d0,&this->ProfileData);
  SEventsTree::HandleBarGraphExpansionChanged(this_02,pTVar50);
  return;
}

// FillAppMenu @ 148d76ff0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SProfileVisualizer::FillAppMenu(SProfileVisualizer *this,FMenuBuilder *param_1)

{
  return;
}

// FillFileMenu @ 148d77000

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SProfileVisualizer::FillFileMenu(SProfileVisualizer *this,FMenuBuilder *param_1)

{
  return;
}

// FillHelpMenu @ 148d77010

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SProfileVisualizer::FillHelpMenu(SProfileVisualizer *this,FMenuBuilder *param_1)

{
  return;
}

// MakeBarVisualizerContextMenu @ 148d807f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SProfileVisualizer::MakeBarVisualizerContextMenu
          (SProfileVisualizer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ISlateStyle *pIVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  FSlateIcon *pFVar9;
  FText *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_328 [16];
  undefined4 local_318;
  undefined1 local_310 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_308;
  ForAnyElementType local_300;
  ulonglong local_2f8;
  TSharedRef<SWidget,1> local_2f0;
  undefined1 local_2e0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c8;
  ForAnyElementType FStack_2c0;
  ulonglong local_2b8;
  undefined1 local_2b0 [128];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  ForAnyElementType FStack_228;
  ulonglong local_220;
  int local_218;
  bool local_214;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  undefined1 local_1f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f0;
  ForAnyElementType FStack_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType FStack_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b0;
  ForAnyElementType FStack_1a8;
  ulonglong local_1a0;
  int local_198;
  bool local_194;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  ForAnyElementType FStack_188;
  ulonglong local_180;
  undefined1 local_178 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_170;
  ForAnyElementType FStack_168;
  ulonglong local_160;
  bool local_157;
  bool local_155;
  bool local_150;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  ForAnyElementType FStack_140;
  ulonglong local_138;
  undefined4 local_130;
  undefined1 local_128 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType FStack_108;
  ulonglong local_100;
  undefined1 local_f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  ulonglong local_d0;
  undefined1 local_c8 [24];
  FName local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [40];
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (TReferenceControllerBase<1> *)0x0;
  pIVar5 = FAppStyle::Get();
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_310 = (undefined1  [8])0x0;
  TStack_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_2f0.Object = (SWidget *)0x0;
  local_2f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)local_2b0,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_2f0,false,
             (TSharedPtr<FExtender,1> *)local_310,pIVar5,(FName)0x0,(FName)0x0);
  local_2b0._96_4_ = 0;
  local_2b0._100_4_ = 0;
  local_2b0._0_8_ = &___7FMenuBuilder__6B_;
  FText::FText((FText *)(local_2b0 + 0x68));
  local_2b0[0x78] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2b0[0x79] = false;
  local_220 = 0;
  local_230.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_228.Data = (FScriptContainerElement *)0x0;
  memset(&local_218,0,200);
  local_218 = 0;
  local_200 = 0;
  local_1e0 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_180 = 0;
  local_160 = 0;
  local_138 = 0;
  local_214 = false;
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_208.Data = (FScriptContainerElement *)0x0;
  local_1f8[0] = false;
  local_1f8[1] = false;
  local_1f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1e8.Data = (FScriptContainerElement *)0x0;
  local_1d8[0] = false;
  local_1d8[1] = false;
  local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c8.Data = (FScriptContainerElement *)0x0;
  local_1b8[0] = false;
  local_1b8[1] = false;
  local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a8.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  local_194 = false;
  local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_188.Data = (FScriptContainerElement *)0x0;
  local_178[0] = Preferred;
  local_178[1] = false;
  local_170.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_168.Data = (FScriptContainerElement *)0x0;
  local_157 = false;
  local_155 = false;
  local_150 = false;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_130._0_1_ = false;
  local_130._1_1_ = true;
  local_130._2_1_ = true;
  local_130._3_1_ = false;
  FMenuBuilder::AddSearchWidget((FMenuBuilder *)local_2b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_328._0_8_ = (atomic<unsigned___int64>)0x0;
  local_328._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  local_318._0_1_ = false;
  local_318._1_3_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
             (FWriteAccessScope *)local_c8);
  local_b0 = (FName)((longlong)local_328 + 8);
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_328 + 8));
  pTVar11 = local_res10;
  if (puVar6 != (undefined8 *)0x0) {
    local_310 = (undefined1  [8])ShowGraphBarInEventsWindow;
    TStack_308.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_2f0.SharedReferenceCount.ReferenceController & 0xffffffff00000000);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2f0);
    pTVar11 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar7->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(undefined4 *)(puVar6 + 1) = 0xffffffff;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar6[3] = pSVar1;
    puVar6[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    puVar6[5] = local_310;
    ((FMRSWRecursiveAccessDetector *)(puVar6 + 6))->State =
         (atomic<unsigned___int64>)TStack_308.AccessDetector.State;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f0.SharedReferenceCount.ReferenceController);
  }
  if (local_c8[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
  }
  FUIAction::FUIAction
            ((FUIAction *)local_a8,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_328,RepeatDisabled);
  local_310._0_2_ = 0x19;
  local_2f8 = 0;
  TStack_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_300.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_f8);
  local_f8[0x10] = false;
  local_d0 = 0;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pFVar9 = FSlateIcon::FSlateIcon((FSlateIcon *)local_c8);
  pFVar10 = FText::GetEmpty();
  local_2e0._0_8_ = (pFVar10->TextData).Reference;
  if ((ITextData *)local_2e0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2e0._0_8_ + 8))(local_2e0._0_8_,&local_res10);
  }
  local_2e0._8_4_ = pFVar10->Flags;
  local_2e0[0x10] = true;
  local_2b8 = 0;
  local_2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2c0.Data = (FScriptContainerElement *)0x0;
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_2f0,L"ProfileVisualizer",L"GraphBarShowInNew",
                       L"Show in New Events Window");
  FText::FText((FText *)local_128,pFVar10);
  local_128[0x10] = true;
  local_100 = 0;
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_108.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)local_2b0,(TAttribute<FText> *)local_128,
             (TAttribute<FText> *)local_2e0,pFVar9,(FUIAction *)local_a8,local_res20,Button,
             local_res18,(TAttribute<FText> *)local_f8,(TAttribute<EVisibility> *)local_310);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)local_328);
  if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  if ((ITextData *)local_128._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_128._0_8_ + 0x10))();
  }
  if (local_2f0.Object != (SWidget *)0x0) {
    (**(code **)((local_2f0.Object)->_padding_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2c8,(FWriteAccessScope *)local_328);
  if (((int)local_2b8 != 0) && (FStack_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c0,0,0,0x10);
    local_2b8 = local_2b8 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c8.AccessDetector);
  if ((ITextData *)local_2e0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2e0._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)local_328);
  if (((int)local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  if ((ITextData *)local_f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_308,(FWriteAccessScope *)local_328);
  if (((int)local_2f8 != 0) && (local_300.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_300.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_300,0,0,0x10);
    local_2f8 = local_2f8 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_308.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  FMenuBuilder::MakeWidget
            ((FMenuBuilder *)local_2b0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)local_328);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_170,(FWriteAccessScope *)local_328);
  if (((int)local_160 != 0) && (FStack_168.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_168,0,0,0x10);
    local_160 = local_160 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_168.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_170.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_190,(FWriteAccessScope *)local_328);
  if (((int)local_180 != 0) && (FStack_188.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_188.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_188,0,0,0x10);
    local_180 = local_180 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b0,(FWriteAccessScope *)local_328);
  if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
    local_1a0 = local_1a0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1d0,(FWriteAccessScope *)local_328);
  if (((int)local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c8,0,0,0x10);
    local_1c0 = local_1c0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1f0,(FWriteAccessScope *)local_328);
  if (((int)local_1e0 != 0) && (FStack_1e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e8,0,0,0x10);
    local_1e0 = local_1e0 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_210,(FWriteAccessScope *)local_328);
  if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_208.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
    local_200 = local_200 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_208.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_230,(FWriteAccessScope *)local_328);
  if (((int)local_220 != 0) && (FStack_228.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_228.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_228,0,0,0x10);
    local_220 = local_220 & 0xffffffff00000000;
  }
  if (local_318._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_328._8_8_,(FDestructionSentinel *)local_328);
  }
  if (FStack_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_228.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
  if ((ITextData *)local_2b0._104_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2b0._104_8_ + 0x10))();
  }
  local_2b0._0_8_ = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_2b0._40_8_,local_2b0._48_4_);
  if ((TSharedPtr<FExtender,1> *)local_2b0._40_8_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_2b0._40_8_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_2b0._24_8_,local_2b0._32_4_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_2b0._24_8_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_2b0._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2b0._16_8_);
  return __return_storage_ptr__;
}

// MakeMainMenu @ 148d81520

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SProfileVisualizer::MakeMainMenu
          (SProfileVisualizer *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  ISlateStyle *pIVar1;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar2;
  FText *pFVar3;
  FName local_res10;
  undefined8 local_res18;
  FDestructionSentinel local_158;
  undefined1 local_138 [8];
  ForAnyElementType local_130;
  int local_128;
  TSharedPtr<FExtender,1> local_118;
  undefined1 local_108 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  undefined1 local_d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  code *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  bool local_98;
  FBaseMenuBuilder local_88;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pIVar1 = FAppStyle::Get();
  local_res18 = 0;
  local_118.Object = (FExtender *)0x0;
  local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a8 = (code *)0x0;
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            (&local_88,MenuBar,false,(TSharedPtr<FUICommandList_const_,1> *)&local_a8,false,
             &local_118,pIVar1,(FName)0x0,(FName)0x0);
  local_88._padding_ = (longlong)&___7FMenuBarBuilder__6B_;
  ::FName::FName(&local_res10,"WindowMenuBar");
  *(ISlateStyle **)(local_88._padding_ + 0x60) = pIVar1;
  *(FName *)(local_88._padding_ + 0x68) = local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_118.SharedReferenceCount.ReferenceController =
       local_118.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_118.Object = (FExtender *)FillFileMenu;
  local_a8 = FillFileMenu;
  pTStack_a0 = local_118.SharedReferenceCount.ReferenceController;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = 0;
  pTVar2 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SProfileVisualizer>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_138,this,(pmf_42987ab8 *)&local_a8);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_158,L"ProfileVisualizer",L"FileMenu_ToolTip",
                      L"Open the file menu");
  FText::FText((FText *)local_d8,pFVar3);
  local_d8[0x10] = true;
  local_b0 = 0;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_118,L"ProfileVisualizer",L"FileMenu",L"File");
  FText::FText((FText *)local_108,pFVar3);
  local_108[0x10] = true;
  local_e0 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  FMenuBarBuilder::AddPullDownMenu
            ((FMenuBarBuilder *)&local_88,(TAttribute<FText> *)local_108,
             (TAttribute<FText> *)local_d8,pTVar2,(FName)0x0,(FName)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_a8);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if ((ITextData *)local_108._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_108._0_8_ + 0x10))();
  }
  if (local_118.Object != (FExtender *)0x0) {
    (**(code **)(((local_118.Object)->Extensions).AllocatorInstance.Data + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_a8);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_a0,(FDestructionSentinel *)&local_a8);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
  }
  if ((longlong *)local_158._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_158._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
             (FWriteAccessScope *)&local_a8);
  if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_98 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_a0,(FDestructionSentinel *)&local_a8);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  local_118.SharedReferenceCount.ReferenceController =
       local_118.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_118.Object = (FExtender *)FillAppMenu;
  local_158._0_8_ = FillAppMenu;
  local_158.Accessor =
       (FMRSWRecursiveAccessDetector *)local_118.SharedReferenceCount.ReferenceController;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = 0;
  pTVar2 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SProfileVisualizer>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_138,this,(pmf_42987ab8 *)&local_158);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_118,L"ProfileVisualizer",L"AppMenu_ToolTip",
                      L"Open the summoning menu");
  FText::FText((FText *)local_108,pFVar3);
  local_108[0x10] = true;
  local_e0 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_a8,L"ProfileVisualizer",L"AppMenu",L"Window");
  FText::FText((FText *)local_d8,pFVar3);
  local_d8[0x10] = true;
  local_b0 = 0;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  FMenuBarBuilder::AddPullDownMenu
            ((FMenuBarBuilder *)&local_88,(TAttribute<FText> *)local_d8,
             (TAttribute<FText> *)local_108,pTVar2,(FName)0x0,(FName)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_158);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_a8 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_158);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if ((ITextData *)local_108._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_108._0_8_ + 0x10))();
  }
  if (local_118.Object != (FExtender *)0x0) {
    (**(code **)(((local_118.Object)->Extensions).AllocatorInstance.Data + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
             (FWriteAccessScope *)&local_158);
  if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  local_118.SharedReferenceCount.ReferenceController =
       local_118.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_118.Object = (FExtender *)FillHelpMenu;
  local_158._0_8_ = FillHelpMenu;
  local_158.Accessor =
       (FMRSWRecursiveAccessDetector *)local_118.SharedReferenceCount.ReferenceController;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res18 = 0;
  pTVar2 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
           CreateSP<SProfileVisualizer>
                     ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                      local_138,this,(pmf_42987ab8 *)&local_158);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_118,L"ProfileVisualizer",L"HelpMenu_ToolTip",
                      L"Open the help menu");
  FText::FText((FText *)local_108,pFVar3);
  local_108[0x10] = true;
  local_e0 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_a8,L"ProfileVisualizer",L"HelpMenu",L"Help");
  FText::FText((FText *)local_d8,pFVar3);
  local_d8[0x10] = true;
  local_b0 = 0;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  FMenuBarBuilder::AddPullDownMenu
            ((FMenuBarBuilder *)&local_88,(TAttribute<FText> *)local_d8,
             (TAttribute<FText> *)local_108,pTVar2,(FName)0x0,(FName)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_158);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_a8 + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_158);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if ((ITextData *)local_108._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_108._0_8_ + 0x10))();
  }
  if (local_118.Object != (FExtender *)0x0) {
    (**(code **)(((local_118.Object)->Extensions).AllocatorInstance.Data + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
             (FWriteAccessScope *)&local_158);
  if ((local_128 != 0) && (local_130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_158.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  FMultiBoxBuilder::MakeWidget
            ((FMultiBoxBuilder *)&local_88,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  local_88._padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_88._padding_,(int)local_88._padding_);
  if ((TSharedPtr<FExtender,1> *)local_88._padding_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_88._padding_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_88._padding_,(int)local_88._padding_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_88._padding_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_88._padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_88._padding_);
  return __return_storage_ptr__;
}

// OnBarGraphContextMenu @ 148d82df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SProfileVisualizer::OnBarGraphContextMenu
          (SProfileVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FVisualizerEvent *pFVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWidgetPath *pFVar5;
  FSlateApplication *this_00;
  FSlateApplication *pFVar6;
  FDeprecateVector2DParameter *pFVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  undefined1 auStackY_518 [32];
  undefined1 local_4b8;
  undefined1 local_4b7;
  FPopupTransitionEffect local_4b4;
  TSharedRef<SWidget,1> local_4b0;
  TVector2<float>_u_0 local_4a0;
  FDeprecateVector2DParameter local_498;
  TSharedRef<SWidget,1> local_490;
  undefined1 local_480 [8];
  TSharedPtr<IMenu,1> local_478;
  TSharedRef<SWidget,1> local_468;
  FWidgetPath local_458;
  FWidgetPath local_2f8;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  (this->SelectedBarGraph).Object = pFVar2;
  (this->SelectedBarGraph).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if ((FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0) {
    pFVar5 = FWidgetPath::FWidgetPath(&local_198);
    FWidgetPath::FWidgetPath(&local_458,pFVar5);
    if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
    if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_198.Widgets.Array.ArrayNum);
    local_2f8.Widgets.Array.AllocatorInstance.SecondaryData =
         local_198.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  else {
    pFVar5 = FWidgetPath::FWidgetPath(&local_2f8,(FWidgetPath *)param_2->_padding_);
    FWidgetPath::FWidgetPath(&local_458,pFVar5);
    if (local_2f8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2f8.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_2f8.Widgets.Array;
    if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_2f8.Widgets.Array.ArrayNum);
  }
  if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_2f8.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  this_00 = FSlateApplication::Get();
  local_4a0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_4b7 = 0;
  local_4b4.SlideDirection = ContextMenu;
  pFVar6 = FSlateApplication::Get();
  pFVar7 = (FDeprecateVector2DParameter *)
           (**(code **)(*(longlong *)pFVar6 + 0x68))(pFVar6,local_480);
  local_498 = *pFVar7;
  pTVar8 = MakeBarVisualizerContextMenu(this,&local_468);
  pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_490);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar9->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4b0.Object = pSVar3;
  local_4b0.SharedReferenceCount.ReferenceController = pTVar1;
  FSlateApplication::PushMenu
            (this_00,&local_478,&local_4b0,&local_458,pTVar8,&local_498,&local_4b4,true,
             (FDeprecateVector2DParameter *)&local_4a0._s_0,SUB82(&local_4b8,0),true,-1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  if (local_458.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar10 = (ForElementType<FArrangedWidget>)&local_458.Widgets.Array;
  if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar10 = local_458.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_458.Widgets.Array.ArrayNum);
  if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_458.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnLoadClicked @ 148d86880

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SProfileVisualizer::OnLoadClicked(SProfileVisualizer *this,FReply *__return_storage_ptr__)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnSaveClicked @ 148d89b10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SProfileVisualizer::OnSaveClicked(SProfileVisualizer *this,FReply *__return_storage_ptr__)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// RouteBarEventSelectionChanged @ 148d8f5f0

void __thiscall
SProfileVisualizer::RouteBarEventSelectionChanged
          (SProfileVisualizer *this,int param_1,TSharedPtr<FVisualizerEvent,1> *param_2)

{
  SEventsTree *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  if ((this->EventsTree).Object == (SEventsTree *)0x0) {
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
  local_18.Object = param_2->Object;
  this_00 = (this->EventsTree).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SEventsTree::HandleBarEventSelectionChanged(this_00,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RouteBarGraphExpansionChanged @ 148d8f690

void __thiscall
SProfileVisualizer::RouteBarGraphExpansionChanged
          (SProfileVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  SEventsTree *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  if ((this->EventsTree).Object == (SEventsTree *)0x0) {
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
  local_18.Object = param_1->Object;
  this_00 = (this->EventsTree).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SEventsTree::HandleBarGraphExpansionChanged(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RouteBarGraphSelectionChanged @ 148d8f720

void __thiscall
SProfileVisualizer::RouteBarGraphSelectionChanged
          (SProfileVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  SEventsTree *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  if ((this->EventsTree).Object == (SEventsTree *)0x0) {
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
  local_18.Object = param_1->Object;
  this_00 = (this->EventsTree).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SEventsTree::HandleBarGraphSelectionChanged(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RouteEventSelectionChanged @ 148d8f7b0

void __thiscall
SProfileVisualizer::RouteEventSelectionChanged
          (SProfileVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  SBarVisualizer *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  if ((this->BarVisualizer).Object == (SBarVisualizer *)0x0) {
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
  local_18.Object = param_1->Object;
  this_00 = (this->BarVisualizer).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SBarVisualizer::HandleEventSelectionChanged(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ShowGraphBarInEventsWindow @ 148d918b0

void __thiscall SProfileVisualizer::ShowGraphBarInEventsWindow(SProfileVisualizer *this,int param_1)

{
  SEventsTree *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  if ((this->EventsTree).Object == (SEventsTree *)0x0) {
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
  local_18.Object = (this->SelectedBarGraph).Object;
  this_00 = (this->EventsTree).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SEventsTree::HandleBarGraphExpansionChanged(this_00,&local_18);
  return;
}

