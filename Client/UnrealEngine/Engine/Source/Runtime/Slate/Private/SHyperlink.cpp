// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// Construct @ 142861180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SHyperlink::Construct(SHyperlink *this,FArguments *param_1)

{
  FHyperlinkStyle *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  FArguments *pFVar11;
  TSharedRef<STextBlock,1> *pTVar12;
  FButtonStyle *pFVar13;
  FTextBlockStyle *pFVar14;
  SHyperlink *pSVar15;
  bool bVar16;
  undefined4 local_res10 [2];
  FLLMScope local_res18 [2];
  undefined1 local_res20 [8];
  ETextShapingMethod local_d78 [2];
  ETextFlowDirection local_d76 [2];
  ETextOverflowPolicy local_d74 [4];
  FName local_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined1 local_d58;
  undefined1 local_d50 [8];
  ForAnyElementType FStack_d48;
  int local_d40;
  code *local_d38;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  bool local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined1 local_d10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d08;
  ForAnyElementType FStack_d00;
  ulonglong local_cf8;
  STextBlock *local_cf0;
  TReferenceControllerBase<1> *pTStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  char local_cd0;
  undefined1 local_cc8 [8];
  ForAnyElementType FStack_cc0;
  int local_cb8;
  FSlateBrush *local_cb0;
  bool local_ca8;
  undefined1 local_ca0 [8];
  void *pvStack_c98;
  undefined4 local_c90;
  undefined1 local_c88 [8];
  FMemScope local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  bool local_c68;
  undefined1 local_c60 [8];
  void *pvStack_c58;
  undefined4 local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  bool local_c38;
  undefined1 local_c30 [8];
  void *pvStack_c28;
  undefined4 local_c20;
  TSharedRef<STextBlock,1> local_c18;
  FDestructionSentinel local_c08;
  FDestructionSentinel local_bf0;
  FLinearColor_u_0 local_bd8;
  undefined4 local_bc8;
  undefined1 local_bc4;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  FDestructionSentinel local_ba8;
  undefined1 *local_b90;
  undefined4 local_b78;
  TAttribute<FText> local_b70;
  TAttribute<FText> local_b40;
  TSharedRef<SWidget,1> local_b10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_b00;
  FArguments local_ae8;
  FArguments local_5a8;
  
  local_res10[0] = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnNavigate,&param_1->_OnNavigate);
  if ((param_1->_Style == (FHyperlinkStyle *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SHyperlink.h"
                         ,0x46,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar13 = param_1->_UnderlineStyle;
  if (pFVar13 == (FButtonStyle *)0x0) {
    pFVar13 = &param_1->_Style->UnderlineStyle;
  }
  pFVar14 = param_1->_TextStyle;
  if (pFVar14 == (FTextBlockStyle *)0x0) {
    pFVar14 = &param_1->_Style->TextStyle;
  }
  bVar6 = (param_1->_Padding).bIsSet;
  bVar16 = bVar6 == false;
  if (bVar16) {
    pFVar1 = param_1->_Style;
    puVar8 = &local_d20;
    local_d10[0] = 1;
    local_d20._0_4_ = (pFVar1->Padding).Left;
    local_d20._4_4_ = (pFVar1->Padding).Top;
    uStack_d18._0_4_ = (pFVar1->Padding).Right;
    uStack_d18._4_4_ = (pFVar1->Padding).Bottom;
    local_cf8 = 0;
    local_d08.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_d00.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_ce0._0_4_ = (param_1->_Padding).Value.Left;
    local_ce0._4_4_ = (param_1->_Padding).Value.Top;
    uStack_cd8._0_4_ = (param_1->_Padding).Value.Right;
    uStack_cd8._4_4_ = (param_1->_Padding).Value.Bottom;
    local_cb8 = 0;
    local_cc8 = (undefined1  [8])0x0;
    FStack_cc0.Data = (FScriptContainerElement *)0x0;
    local_cd0 = bVar6;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_cc8,
               &(param_1->_Padding).Getter);
    puVar8 = &local_ce0;
  }
  local_d68 = *puVar8;
  uStack_d60 = puVar8[1];
  local_d58 = *(undefined1 *)(puVar8 + 2);
  local_d40 = 0;
  local_d50 = (undefined1  [8])0x0;
  FStack_d48.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_d50,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 3));
  if (bVar16) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d08,(FWriteAccessScope *)&local_d38);
    if (((int)local_cf8 != 0) && (FStack_d00.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_d00.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d00,0,0,0x10);
      local_cf8 = local_cf8 & 0xffffffff00000000;
    }
    if (local_d28 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_d2c,uStack_d30),
                 (FDestructionSentinel *)&local_d38);
    }
    if (FStack_d00.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d00.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d08.AccessDetector);
  }
  if (!bVar16) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_cc8,
               (FWriteAccessScope *)&local_c08);
    if ((local_cb8 != 0) && (FStack_cc0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_cc0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_cc0,0,0,0x10);
      local_cb8 = 0;
    }
    if (local_c08.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c08.Accessor,&local_c08);
    }
    if (FStack_cc0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_cc0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_cc8);
  }
  bVar5 = false;
  bVar16 = false;
  bVar6 = false;
  pFVar7 = SButton::FArguments::FArguments(&local_ae8);
  local_c68 = (bool)local_d58;
  local_c78 = local_d68;
  uStack_c70 = uStack_d60;
  local_c50 = 0;
  local_c60 = (undefined1  [8])0x0;
  pvStack_c58 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_c60,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_d50);
  (pFVar7->_ContentPadding).Value.Left = (float)(undefined4)local_c78;
  (pFVar7->_ContentPadding).Value.Top = (float)local_c78._4_4_;
  (pFVar7->_ContentPadding).Value.Right = (float)(undefined4)uStack_c70;
  (pFVar7->_ContentPadding).Value.Bottom = (float)uStack_c70._4_4_;
  (pFVar7->_ContentPadding).bIsSet = local_c68;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c60);
  if (pvStack_c58 != (void *)0x0) {
    FMemory::Free(pvStack_c58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c60);
  pFVar7->_ButtonStyle = pFVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnClicked,
             (FWriteAccessScope *)&local_ba8);
  local_b90 = &(pFVar7->_OnClicked).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_b90);
  pSVar15 = this;
  if (puVar8 != (undefined8 *)0x0) {
    uStack_d2c = local_c18.SharedReferenceCount.ReferenceController._4_4_;
    local_d38 = Hyperlink_OnClicked;
    uStack_d30 = 0;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_b10);
    pSVar15 = (SHyperlink *)(pTVar9->SharedReferenceCount).ReferenceController;
    local_d70 = (FName)pTVar9->Object;
    if (pSVar15 != (SHyperlink *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar15->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar15->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar16 = true;
    bVar6 = true;
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSHyperlink___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar8 + 3) = local_d70;
    puVar8[4] = pSVar15;
    if (pSVar15 != (SHyperlink *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar15->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar15->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar8[5] = local_d38;
    puVar8[6] = CONCAT44(uStack_d2c,uStack_d30);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar15);
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar15);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b10.SharedReferenceCount.ReferenceController);
  }
  if (local_ba8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ba8.Accessor,&local_ba8);
  }
  local_b78 = CONCAT22(local_b78._2_2_,2);
  local_bc8 = local_b78;
  local_bc4 = 1;
  local_bb0 = 0;
  local_bd8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_bd8._8_8_ = _UNK_15090c6d8;
  local_bc0 = 0;
  uStack_bb8 = 0;
  pFVar7 = SButton::FArguments::ForegroundColor(pFVar7,(TAttribute<FSlateColor> *)&local_bd8._s_0);
  bVar6 = (param_1->_TextShapingMethod).bIsSet;
  if (bVar6 != false) {
    local_d78[0] = (param_1->_TextShapingMethod).TypedValue;
  }
  if ((TOptional<ETextShapingMethod> *)local_d78 != &pFVar7->_TextShapingMethod) {
    if (bVar6 == false) {
      if ((pFVar7->_TextShapingMethod).bIsSet != false) {
        (pFVar7->_TextShapingMethod).bIsSet = false;
      }
    }
    else {
      (pFVar7->_TextShapingMethod).TypedValue = local_d78[0];
      (pFVar7->_TextShapingMethod).bIsSet = true;
    }
  }
  bVar6 = (param_1->_TextFlowDirection).bIsSet;
  if (bVar6 != false) {
    local_d76[0] = (param_1->_TextFlowDirection).TypedValue;
  }
  if ((TOptional<ETextFlowDirection> *)local_d76 != &pFVar7->_TextFlowDirection) {
    if (bVar6 == false) {
      if ((pFVar7->_TextFlowDirection).bIsSet != false) {
        (pFVar7->_TextFlowDirection).bIsSet = false;
      }
    }
    else {
      (pFVar7->_TextFlowDirection).TypedValue = local_d76[0];
      (pFVar7->_TextFlowDirection).bIsSet = true;
    }
  }
  pFVar11 = STextBlock::FArguments::FArguments(&local_5a8);
  pFVar11->_TextStyle = pFVar14;
  local_b70.Value.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_b70.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b70.Value.TextData.Reference + 8))
              (local_b70.Value.TextData.Reference,local_res20);
  }
  local_b70.Value.Flags = (param_1->_Text).Value.Flags;
  local_b70.bIsSet = (param_1->_Text).bIsSet;
  local_b70.Getter._0_8_ = 0;
  local_b70.Getter._8_8_ = 0;
  local_b70.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_b70.Getter,&(param_1->_Text).Getter);
  pFVar11 = STextBlock::FArguments::Text(pFVar11,&local_b70);
  local_c48 = *(undefined8 *)&(param_1->_HighlightColor).Value.field0_0x0;
  uStack_c40 = *(undefined8 *)((longlong)&(param_1->_HighlightColor).Value.field0_0x0 + 8);
  local_c38 = (param_1->_HighlightColor).bIsSet;
  local_c20 = 0;
  local_c30 = (undefined1  [8])0x0;
  pvStack_c28 = (void *)0x0;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_c30,
             &(param_1->_HighlightColor).Getter);
  *(undefined8 *)&(pFVar11->_HighlightColor).Value.field0_0x0 = local_c48;
  *(undefined8 *)((longlong)&(pFVar11->_HighlightColor).Value.field0_0x0 + 8) = uStack_c40;
  (pFVar11->_HighlightColor).bIsSet = local_c38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_HighlightColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c30);
  if (pvStack_c28 != (void *)0x0) {
    FMemory::Free(pvStack_c28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c30);
  local_cb0 = (param_1->_HighlightShape).Value;
  local_ca8 = (param_1->_HighlightShape).bIsSet;
  local_ca0 = (undefined1  [8])0x0;
  pvStack_c98 = (void *)0x0;
  local_c90 = 0;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_ca0,
             &(param_1->_HighlightShape).Getter);
  (pFVar11->_HighlightShape).Value = local_cb0;
  (pFVar11->_HighlightShape).bIsSet = local_ca8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_HighlightShape).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ca0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ca0);
  if (pvStack_c98 != (void *)0x0) {
    FMemory::Free(pvStack_c98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ca0);
  local_b40.Value.TextData.Reference = (param_1->_HighlightText).Value.TextData.Reference;
  if (local_b40.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b40.Value.TextData.Reference + 8))
              (local_b40.Value.TextData.Reference,local_c88);
  }
  local_b40.Value.Flags = (param_1->_HighlightText).Value.Flags;
  local_b40.bIsSet = (param_1->_HighlightText).bIsSet;
  local_b40.Getter._0_8_ = 0;
  local_b40.Getter._8_8_ = 0;
  local_b40.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_b40.Getter,&(param_1->_HighlightText).Getter);
  pFVar11 = STextBlock::FArguments::HighlightText(pFVar11,&local_b40);
  bVar6 = (param_1->_OverflowPolicy).bIsSet;
  if (bVar6 != false) {
    local_d74[0] = (param_1->_OverflowPolicy).TypedValue;
  }
  if ((TOptional<ETextOverflowPolicy> *)local_d74 != &pFVar11->_OverflowPolicy) {
    if (bVar6 == false) {
      if ((pFVar11->_OverflowPolicy).bIsSet != false) {
        (pFVar11->_OverflowPolicy).bIsSet = false;
      }
    }
    else {
      (pFVar11->_OverflowPolicy).TypedValue = local_d74[0];
      (pFVar11->_OverflowPolicy).bIsSet = true;
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d70 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c80,&local_d70,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_b00,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Input\\SHyperlink.h"
             ,0x54,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_c80);
  FLLMScope::~FLLMScope(local_res18);
  pTVar12 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_b00,&local_c18,pFVar11);
  pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_cf0 = pTVar12->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = (SWidget *)local_cf0;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_ce8 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SButton::Construct((SButton *)this,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_c18.SharedReferenceCount.ReferenceController._4_4_,
                      local_c18.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b00._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a8);
  SButton::FArguments::~FArguments(&local_ae8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d50,
             (FWriteAccessScope *)&local_bf0);
  if ((local_d40 != 0) && (FStack_d48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d48,0,0,0x10);
    local_d40 = 0;
  }
  if (local_bf0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_bf0.Accessor,&local_bf0);
  }
  if (FStack_d48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d50);
  return;
}

// CreateAccessibleWidget @ 1428668d0

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SHyperlink::CreateAccessibleWidget
          (SHyperlink *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleButton *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  bool bVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar7 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  if (this_00 == (FSlateAccessibleButton *)0x0) {
    this_00 = (FSlateAccessibleButton *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleButton::FSlateAccessibleButton(this_00,&local_28);
      this_00->field_0x28 = 4;
      *(undefined ***)this_00 = &FSlateAccessibleHyperlink::_vftable__for__FSlateAccessibleWidget__;
      *(undefined ***)&this_00->field_0x68 =
           &FSlateAccessibleHyperlink::_vftable__for__IAccessibleActivatable__;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleButton::FSlateAccessibleButton(this_00,&local_28);
      this_00->field_0x28 = 4;
      *(undefined ***)this_00 = &FSlateAccessibleHyperlink::_vftable__for__FSlateAccessibleWidget__;
      *(undefined ***)&this_00->field_0x68 =
           &FSlateAccessibleHyperlink::_vftable__for__IAccessibleActivatable__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar7 = true;
    if (((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = (FSlateAccessibleWidget *)this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// Hyperlink_OnClicked @ 14287fc50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SHyperlink::Hyperlink_OnClicked(SHyperlink *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNavigate,&local_28);
  if ((*(int *)&(this->OnNavigate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnNavigate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnCursorQuery @ 142885440

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SHyperlink::OnCursorQuery
          (SHyperlink *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->MouseCursor = Hand;
  return __return_storage_ptr__;
}

