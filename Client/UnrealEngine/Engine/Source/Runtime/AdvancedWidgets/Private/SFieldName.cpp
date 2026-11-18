// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 7

// Construct @ 14d84cad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::PropertyViewer::SFieldName::Construct
          (SFieldName *this,FArguments *param_1,FText *param_2,TSharedPtr<SWidget,1> *param_3)

{
  undefined1 *puVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SHorizontalBox *pSVar6;
  STextBlock *pSVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FSlot *pFVar11;
  FSlotArguments *pFVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  FText *pFVar16;
  TSharedRef<STextBlock,1> *pTVar17;
  TSharedRef<SHorizontalBox,1> *pTVar18;
  FSlotArguments *pFVar19;
  longlong *plVar20;
  T0RequiredArgs local_1198;
  T0RequiredArgs local_1197;
  T0RequiredArgs local_1196 [2];
  FLLMScope local_1194;
  FLLMScope local_1190;
  FLLMScope local_118c;
  SWidget *local_1188;
  FSharedReferencer<1> local_1180 [3];
  undefined1 local_1168;
  undefined1 local_1160 [8];
  ForAnyElementType FStack_1158;
  ulonglong local_1150;
  SHorizontalBox *local_1148;
  TReferenceControllerBase<1> *pTStack_1140;
  undefined8 local_1138;
  FSharedReferencer<1> local_1130;
  STextBlock *local_1128;
  TReferenceControllerBase<1> *pTStack_1120;
  undefined1 local_1118 [4];
  undefined1 local_1114 [4];
  undefined1 local_1110 [4];
  undefined1 local_110c [4];
  undefined1 local_1108 [4];
  undefined1 local_1104 [4];
  FSlotArguments *local_1100;
  FArguments *local_10f8;
  FSlotArguments *local_10f0;
  FName local_10e8;
  FMemScope local_10e0;
  FMemScope local_10d8;
  FName local_10d0;
  FMemScope local_10c8;
  FName local_10c0;
  undefined4 local_10b8 [2];
  FText local_10b0;
  FText local_10a0;
  undefined4 local_1090 [2];
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1088;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1070;
  FDestructionSentinel local_1058;
  TAttribute<FText> local_1040;
  TAttribute<FText> local_1010;
  TAttribute<FText> local_fe0;
  TAttribute<FText> local_fb0;
  TSharedRef<SHorizontalBox,1> local_f80;
  TSharedRef<STextBlock,1> local_f70;
  STextBlock *local_f60;
  TReferenceControllerBase<1> *pTStack_f58;
  TSharedRef<STextBlock,1> local_f50;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_f40;
  STextBlock *local_f28;
  TReferenceControllerBase<1> *pTStack_f20;
  TAttribute<FText> local_f18;
  TAttribute<FText> local_ee8;
  undefined8 *local_eb8;
  STextBlock *local_eb0;
  FSharedReferencer<1> local_ea8 [3];
  undefined1 local_e90;
  undefined1 local_e88 [40];
  FSlotArgumentsMixin local_e60;
  undefined8 *local_dd0 [2];
  TReferenceControllerBase<1> *local_dc0;
  undefined1 local_da0 [40];
  FSlotArgumentsMixin local_d78;
  FArguments local_ce8;
  FArguments local_ae0;
  FArguments local_588;
  undefined8 uStack_30;
  
  uStack_30 = 0x14d84caf3;
  if (param_3->Object == (SWidget *)0x0) {
    pFVar15 = STextBlock::FArguments::FArguments(&local_588);
    local_1010.Value.TextData.Reference = (param_2->TextData).Reference;
    if (local_1010.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1010.Value.TextData.Reference + 8))
                (local_1010.Value.TextData.Reference,local_110c);
    }
    local_1010.Value.Flags = param_2->Flags;
    local_1010.bIsSet = true;
    local_1010.Getter._16_8_ = 0;
    local_1010.Getter._0_8_ = 0;
    local_1010.Getter._8_8_ = 0;
    pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_1010);
    local_ee8.Value.TextData.Reference = (param_1->_HighlightText).Value.TextData.Reference;
    if (local_ee8.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ee8.Value.TextData.Reference + 8))
                (local_ee8.Value.TextData.Reference,local_1108);
    }
    local_ee8.Value.Flags = (param_1->_HighlightText).Value.Flags;
    local_ee8.bIsSet = (param_1->_HighlightText).bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_ee8.Getter,&(param_1->_HighlightText).Getter);
    pFVar15 = STextBlock::FArguments::HighlightText(pFVar15,&local_ee8);
    pFVar16 = FText::GetEmpty();
    local_10a0.TextData.Reference = (pFVar16->TextData).Reference;
    if (local_10a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10a0.TextData.Reference + 8))
                (local_10a0.TextData.Reference,local_1104);
    }
    local_10a0.Flags = pFVar16->Flags;
    FText::FText(&local_fb0.Value,&local_10a0);
    local_fb0.bIsSet = true;
    local_fb0.Getter._16_8_ = 0;
    local_fb0.Getter._0_8_ = 0;
    local_fb0.Getter._8_8_ = 0;
    pFVar15 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar15,&local_fb0);
    FLLMScope::FLLMScope(&local_118c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_10d0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_10c8,&local_10d0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1070,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
               ,0xa6,local_1196);
    FMemScope::~FMemScope(&local_10c8);
    FLLMScope::~FLLMScope(&local_118c);
    if (local_1070._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1070._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1070._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_f60 = (this->NameBlock).Object;
    pTStack_f58 = (this->NameBlock).SharedReferenceCount.ReferenceController;
    (this->NameBlock).Object = local_1070._Widget.Object;
    (this->NameBlock).SharedReferenceCount.ReferenceController =
         local_1070._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f58)
    ;
    pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1070,&local_f50,pFVar15);
    plVar20 = &this->_padding_;
    pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar17->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar20);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar20);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar7;
    this->_padding_ = (longlong)pTVar3;
    local_1128 = pSVar7;
    pTStack_1120 = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f50.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1070._Widget.SharedReferenceCount.ReferenceController);
    if (local_10a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10a0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
  }
  else {
    local_10f8 = SHorizontalBox::FArguments::FArguments(&local_ce8);
    pFVar11 = ::operator_new(0x58);
    pFVar14 = (FSlotArguments *)0x0;
    local_1100 = pFVar14;
    if (pFVar11 != (FSlot *)0x0) {
      *(undefined8 *)pFVar11 = 0;
      *(undefined8 *)&pFVar11->field_0x8 = 0;
      *(undefined8 *)&pFVar11->field_0x10 = 0;
      *(undefined8 *)&pFVar11->field_0x18 = 0;
      *(undefined8 *)&pFVar11->field_0x20 = 0;
      *(undefined8 *)&pFVar11->field_0x28 = 0;
      *(undefined8 *)&pFVar11->field_0x30 = 0;
      *(undefined8 *)&pFVar11->field_0x38 = 0;
      *(undefined8 *)&pFVar11->field_0x40 = 0;
      *(undefined8 *)&pFVar11->field_0x48 = 0;
      *(undefined8 *)&pFVar11->field_0x50 = 0;
      local_1100 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar11);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_dd0,(FSlot *)&local_1100);
    pFVar12 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_dd0);
    puVar1 = &pFVar12->field_0x48;
    if (local_10b8 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 3;
      pFVar12->field_0x4c = 1;
    }
    pFVar19 = pFVar14;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar19 = pFVar12;
    }
    if (local_1090 != (undefined4 *)&pFVar19->field_0x50) {
      *(undefined4 *)&pFVar19->field_0x50 = 2;
      pFVar19->field_0x54 = 1;
    }
    pFVar12 = pFVar14;
    if (pFVar19 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar12 = pFVar19;
    }
    if ((param_3->Object == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pSVar2 = param_3->Object;
    pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar2 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1188 = pSVar2;
    local_1180[0].ReferenceController = pTVar3;
    if ((SWidget **)&pFVar12->field_0x8 != &local_1188) {
      *(SWidget **)&pFVar12->field_0x8 = pSVar2;
      local_1188 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar12->field_0x10,local_1180);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1180[0].ReferenceController);
    pFVar13 = SHorizontalBox::FArguments::operator+(local_10f8,pFVar12);
    pFVar11 = ::operator_new(0x58);
    if (pFVar11 != (FSlot *)0x0) {
      *(undefined8 *)pFVar11 = 0;
      *(undefined8 *)&pFVar11->field_0x8 = 0;
      *(undefined8 *)&pFVar11->field_0x10 = 0;
      *(undefined8 *)&pFVar11->field_0x18 = 0;
      *(undefined8 *)&pFVar11->field_0x20 = 0;
      *(undefined8 *)&pFVar11->field_0x28 = 0;
      *(undefined8 *)&pFVar11->field_0x30 = 0;
      *(undefined8 *)&pFVar11->field_0x38 = 0;
      *(undefined8 *)&pFVar11->field_0x40 = 0;
      *(undefined8 *)&pFVar11->field_0x48 = 0;
      *(undefined8 *)&pFVar11->field_0x50 = 0;
      pFVar14 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar11);
    }
    local_10f0 = pFVar14;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_eb8,(FSlot *)&local_10f0);
    local_1168 = 1;
    local_1150 = 0;
    local_1180[1].ReferenceController =
         (TReferenceControllerBase<1> *)___xmm_40800000408000004080000040800000;
    local_1180[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_1509253f8;
    local_e90 = 1;
    local_1160 = (undefined1  [8])0x0;
    FStack_1158.Data = (FScriptContainerElement *)0x0;
    local_ea8[1].ReferenceController =
         (TReferenceControllerBase<1> *)___xmm_40800000408000004080000040800000;
    local_ea8[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_1509253f8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e88,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1160,
               (FWriteAccessScope *)&local_1058);
    if (((int)local_1150 != 0) && (FStack_1158.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1158.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1158,0,0,0x10);
      local_1150 = local_1150 & 0xffffffff00000000;
    }
    if (local_1058.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1058.Accessor,&local_1058);
    }
    if (FStack_1158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1158.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1160);
    pFVar15 = STextBlock::FArguments::FArguments(&local_ae0);
    local_1040.Value.TextData.Reference = (param_2->TextData).Reference;
    if (local_1040.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1040.Value.TextData.Reference + 8))
                (local_1040.Value.TextData.Reference,local_1118);
    }
    local_1040.Value.Flags = param_2->Flags;
    local_1040.Getter._16_8_ = 0;
    local_1040.bIsSet = true;
    local_1040.Getter._0_8_ = 0;
    local_1040.Getter._8_8_ = 0;
    pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_1040);
    local_f18.Value.TextData.Reference = (param_1->_HighlightText).Value.TextData.Reference;
    if (local_f18.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f18.Value.TextData.Reference + 8))
                (local_f18.Value.TextData.Reference,local_1114);
    }
    local_f18.Value.Flags = (param_1->_HighlightText).Value.Flags;
    local_f18.bIsSet = (param_1->_HighlightText).bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_f18.Getter,&(param_1->_HighlightText).Getter);
    pFVar15 = STextBlock::FArguments::HighlightText(pFVar15,&local_f18);
    pFVar16 = FText::GetEmpty();
    local_10b0.TextData.Reference = (pFVar16->TextData).Reference;
    if (local_10b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10b0.TextData.Reference + 8))
                (local_10b0.TextData.Reference,local_1110);
    }
    local_10b0.Flags = pFVar16->Flags;
    FText::FText(&local_fe0.Value,&local_10b0);
    local_fe0.bIsSet = true;
    local_fe0.Getter._16_8_ = 0;
    local_fe0.Getter._0_8_ = 0;
    local_fe0.Getter._8_8_ = 0;
    pFVar15 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar15,&local_fe0);
    FLLMScope::FLLMScope(&local_1194,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_10e8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_10e0,&local_10e8,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1088,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
               ,0x9b,&local_1198);
    FMemScope::~FMemScope(&local_10e0);
    FLLMScope::~FLLMScope(&local_1194);
    if (local_1088._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1088._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1088._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_f28 = (this->NameBlock).Object;
    pTStack_f20 = (this->NameBlock).SharedReferenceCount.ReferenceController;
    (this->NameBlock).Object = local_1088._Widget.Object;
    (this->NameBlock).SharedReferenceCount.ReferenceController =
         local_1088._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f20)
    ;
    pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1088,&local_f70,pFVar15);
    pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_eb0 = pTVar17->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1138 = 0;
    local_1130.ReferenceController = pTVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_ea8,&local_1130);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1130.ReferenceController);
    pFVar13 = SHorizontalBox::FArguments::operator+(pFVar13,(FSlotArguments *)&local_eb8);
    FLLMScope::FLLMScope(&local_1190,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_10c0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_10d8,&local_10c0,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_f40,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
               ,0x90,&local_1197);
    FMemScope::~FMemScope(&local_10d8);
    FLLMScope::~FLLMScope(&local_1190);
    pTVar18 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_f40,&local_f80,pFVar13);
    plVar20 = &this->_padding_;
    pTVar5 = (pTVar18->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar18->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar20);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)plVar20);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar6;
    this->_padding_ = (longlong)pTVar5;
    local_1148 = pSVar6;
    pTStack_1140 = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f80.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f40._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f70.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1088._Widget.SharedReferenceCount.ReferenceController);
    if (local_10b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10b0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_ae0);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_e60);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e88);
    if ((void *)local_e88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ea8[0].ReferenceController);
    if (local_eb8 != (undefined8 *)0x0) {
      (**(code **)*local_eb8)(local_eb8,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_d78);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_da0);
    if ((void *)local_da0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_da0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_da0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_dc0);
    if (local_dd0[0] != (undefined8 *)0x0) {
      (**(code **)*local_dd0[0])(local_dd0[0],1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_ce8._Slots.AllocatorInstance.Data,local_ce8._Slots.ArrayNum);
    if ((FSlotArguments *)local_ce8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_ce8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ce8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// Construct @ 14d84d4c0

void __thiscall
UE::PropertyViewer::SFieldName::Construct(SFieldName *this,FArguments *param_1,FProperty *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  FFieldObjectUnion FVar3;
  SFieldIcon *pSVar4;
  FSharedReferencer<1> FVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  FText *pFVar11;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  FFieldObjectUnion local_res18;
  FName local_res20;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
  local_528;
  FText local_510;
  SFieldIcon *local_4f8;
  FSharedReferencer<1> FStack_4f0;
  FName local_4e8;
  T1RequiredArgs<FProperty_const_*_&> local_4e0;
  FMemScope local_4d8;
  undefined8 local_4d0;
  FSharedReferencer<1> local_4c8;
  FText local_4c0;
  TSharedPtr<SWidget,1> local_4a8;
  undefined1 local_498 [272];
  void *local_388;
  undefined4 local_380;
  bool local_378;
  undefined1 local_370 [776];
  void *local_68;
  undefined4 local_60;
  bool local_58;
  
  local_res18 = (FFieldObjectUnion)param_2;
  if (param_2 == (FProperty *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
                       ,0x50,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_4f8 = (SFieldIcon *)0x0;
  FStack_4f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->_bShowIcon == false) goto LAB_14d84d80e;
  pFVar10 = SFieldIcon::FArguments::FArguments((FArguments *)local_370);
  local_378 = (param_1->_OverrideIconColorSettings).bIsSet;
  if (local_378 != false) {
    FFieldColorSettings::FFieldColorSettings
              ((FFieldColorSettings *)local_498,&(param_1->_OverrideIconColorSettings).TypedValue);
  }
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
            (&pFVar10->_OverrideColorSettings,
             (TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *)local_498);
  if (local_378 != false) {
    local_380 = 0;
    if (local_388 != (void *)0x0) {
      FMemory::Free(local_388);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_498 + 0xd0));
  }
  local_4e0.Arg0 = (FProperty **)&local_res18;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4d8,&local_4e8,true);
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
            (&local_528,"SFieldIcon",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
             ,0x55,&local_4e0);
  FMemScope::~FMemScope(&local_4d8);
  FLLMScope::~FLLMScope(local_res8);
  pSVar4 = local_528._Widget.Object;
  if (local_528._Widget.Object == (SFieldIcon *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_528._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SFieldIcon::Construct(local_528._Widget.Object,pFVar10,*(local_528._RequiredArgs)->Arg0);
  if (local_528._Widget.Object == (SFieldIcon *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((local_528._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar8 = (**(code **)(*(longlong *)local_528._Widget.Object + 0x228))(local_528._Widget.Object);
    bVar9 = 0;
    if (cVar8 != '\0') goto LAB_14d84d6d3;
  }
  else {
LAB_14d84d6d3:
    bVar9 = 0x20;
  }
  (local_528._Widget.Object)->field_0x30 = (local_528._Widget.Object)->field_0x30 & 0xdf;
  (local_528._Widget.Object)->field_0x30 = (local_528._Widget.Object)->field_0x30 | bVar9;
  if (local_528._Widget.Object == (SFieldIcon *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (local_528._Widget.Object)->field_0x31 = (local_528._Widget.Object)->field_0x31 | 4;
  if (local_528._Widget.Object == (SFieldIcon *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar5.ReferenceController = local_528._Widget.SharedReferenceCount.ReferenceController;
  local_528._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_528._Widget.Object = (SFieldIcon *)0x0;
  if (pSVar4 == (SFieldIcon *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_4c8.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4f8 = pSVar4;
  local_4d0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_4f0,&local_4c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_58 != false) {
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_370 + 0x2c8));
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_370);
LAB_14d84d80e:
  FVar5.ReferenceController = FStack_4f0.ReferenceController;
  pSVar4 = local_4f8;
  FText::FText(&local_510);
  TVar6.Reference = local_510.TextData.Reference;
  FVar3 = local_res18;
  pIVar1 = *(ITextData **)&(param_1->_OverrideDisplayName).field0_0x0;
  if (pIVar1 == (ITextData *)0x0) {
    bVar7 = IsThisNotNull(local_res18.Field,"FField::GetFName");
    if (bVar7) {
      local_res20 = (FVar3.Field)->NamePrivate;
    }
    else {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
    }
    pFVar11 = FText::FromName(&local_4c0,&local_res20);
    FText::operator=(&local_510,pFVar11);
    if (local_4c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4c0.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_510.TextData.Reference != pIVar1) {
      local_510.TextData.Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      if (TVar6.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
      }
    }
    local_510.Flags = (param_1->_OverrideDisplayName).field0_0x0.TypedValue.Flags;
  }
  FVar3 = local_res18;
  if ((local_res18.Unknown & 1) != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x180,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->Field).Container.Field = (FField *)FVar3;
  if ((((FVar3.Unknown & 1) != 0) &&
      ((UObject *)(FVar3.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending != false)) {
    GC::MarkAsReachable((UObject *)(FVar3.Unknown & 0xfffffffffffffffe));
  }
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4a8.Object = (SWidget *)pSVar4;
  local_4a8.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  Construct(this,param_1,&local_510,&local_4a8);
  if (local_510.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_510.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// Construct @ 14d84d990

void __thiscall
UE::PropertyViewer::SFieldName::Construct(SFieldName *this,FArguments *param_1,UClass *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  UObject *pUVar3;
  SFieldIcon *pSVar4;
  FSharedReferencer<1> FVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  FText *pFVar11;
  ulonglong uVar12;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  UClass *local_res18;
  FName local_res20;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
  local_518;
  FText local_500;
  T1RequiredArgs<UClass_const_*_&> local_4f0;
  FMemScope local_4e8;
  FName local_4e0;
  undefined8 local_4d8;
  FSharedReferencer<1> local_4d0;
  SFieldIcon *local_4c8;
  FSharedReferencer<1> FStack_4c0;
  FText local_4b8;
  TSharedPtr<SWidget,1> local_4a8;
  undefined1 local_498 [272];
  void *local_388;
  undefined4 local_380;
  bool local_378;
  undefined1 local_370 [776];
  void *local_68;
  undefined4 local_60;
  bool local_58;
  
  local_res18 = param_2;
  if (param_2 == (UClass *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Class",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
                       ,0x14,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_4c8 = (SFieldIcon *)0x0;
  FStack_4c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->_bShowIcon != false) {
    pFVar10 = SFieldIcon::FArguments::FArguments((FArguments *)local_370);
    local_378 = (param_1->_OverrideIconColorSettings).bIsSet;
    if (local_378 != false) {
      FFieldColorSettings::FFieldColorSettings
                ((FFieldColorSettings *)local_498,&(param_1->_OverrideIconColorSettings).TypedValue)
      ;
    }
    TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
              (&pFVar10->_OverrideColorSettings,
               (TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *)local_498);
    if (local_378 != false) {
      local_380 = 0;
      if (local_388 != (void *)0x0) {
        FMemory::Free(local_388);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_498 + 0xd0));
    }
    local_4f0.Arg0 = &local_res18;
    FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_4e8,&local_res20,true);
    TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>::
    TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
              (&local_518,"SFieldIcon",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
               ,0x19,&local_4f0);
    FMemScope::~FMemScope(&local_4e8);
    FLLMScope::~FLLMScope(local_res8);
    pSVar4 = local_518._Widget.Object;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SWidget::SWidgetConstruct((SWidget *)local_518._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
    SFieldIcon::Construct(local_518._Widget.Object,pFVar10,*(local_518._RequiredArgs)->Arg0);
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((local_518._Widget.Object)->field_0x30 & 0x10) == 0) {
      cVar8 = (**(code **)(*(longlong *)local_518._Widget.Object + 0x228))(local_518._Widget.Object)
      ;
      bVar9 = 0;
      if (cVar8 != '\0') goto LAB_14d84dba8;
    }
    else {
LAB_14d84dba8:
      bVar9 = 0x20;
    }
    (local_518._Widget.Object)->field_0x30 = (local_518._Widget.Object)->field_0x30 & 0xdf;
    (local_518._Widget.Object)->field_0x30 = (local_518._Widget.Object)->field_0x30 | bVar9;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (local_518._Widget.Object)->field_0x31 = (local_518._Widget.Object)->field_0x31 | 4;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5.ReferenceController = local_518._Widget.SharedReferenceCount.ReferenceController;
    local_518._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_518._Widget.Object = (SFieldIcon *)0x0;
    if (pSVar4 == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_4d0.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4c8 = pSVar4;
    local_4d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_4c0,&local_4d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_58 != false) {
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_370 + 0x2c8));
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_370);
  }
  FVar5.ReferenceController = FStack_4c0.ReferenceController;
  pSVar4 = local_4c8;
  FText::FText(&local_500);
  TVar6.Reference = local_500.TextData.Reference;
  pIVar1 = *(ITextData **)&(param_1->_OverrideDisplayName).field0_0x0;
  if (pIVar1 == (ITextData *)0x0) {
    local_4e0 = (FName)local_res18->_padding_;
    pFVar11 = FText::FromName(&local_4b8,&local_4e0);
    FText::operator=(&local_500,pFVar11);
    if (local_4b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_500.TextData.Reference != pIVar1) {
      local_500.TextData.Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      if (TVar6.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
      }
    }
    local_500.Flags = (param_1->_OverrideDisplayName).field0_0x0.TypedValue.Flags;
  }
  uVar12 = (ulonglong)local_res18 | 1;
  pUVar3 = (UObject *)((ulonglong)local_res18 & 0xfffffffffffffffe);
  if ((pUVar3 == (UObject *)0x0) || (GC::GIsIncrementalReachabilityPending == false)) {
    (this->Field).Container.Unknown = uVar12;
    if (pUVar3 == (UObject *)0x0) goto LAB_14d84ddb5;
  }
  else {
    GC::MarkAsReachable(pUVar3);
    (this->Field).Container.Unknown = uVar12;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar3);
  }
LAB_14d84ddb5:
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4a8.Object = (SWidget *)pSVar4;
  local_4a8.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  Construct(this,param_1,&local_500,&local_4a8);
  if (local_500.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// Construct @ 14d84de30

void __thiscall
UE::PropertyViewer::SFieldName::Construct(SFieldName *this,FArguments *param_1,UFunction *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  UObject *pUVar3;
  SFieldIcon *pSVar4;
  FSharedReferencer<1> FVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  FText *pFVar11;
  ulonglong uVar12;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  UFunction *local_res18;
  FName local_res20;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
  local_518;
  FText local_500;
  T1RequiredArgs<UFunction_const_*_&> local_4f0;
  FMemScope local_4e8;
  FName local_4e0;
  undefined8 local_4d8;
  FSharedReferencer<1> local_4d0;
  SFieldIcon *local_4c8;
  FSharedReferencer<1> FStack_4c0;
  FText local_4b8;
  TSharedPtr<SWidget,1> local_4a8;
  undefined1 local_498 [272];
  void *local_388;
  undefined4 local_380;
  bool local_378;
  undefined1 local_370 [776];
  void *local_68;
  undefined4 local_60;
  bool local_58;
  
  local_res18 = param_2;
  if (param_2 == (UFunction *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Function",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
                       ,0x6e,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_4c8 = (SFieldIcon *)0x0;
  FStack_4c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->_bShowIcon != false) {
    pFVar10 = SFieldIcon::FArguments::FArguments((FArguments *)local_370);
    local_378 = (param_1->_OverrideIconColorSettings).bIsSet;
    if (local_378 != false) {
      FFieldColorSettings::FFieldColorSettings
                ((FFieldColorSettings *)local_498,&(param_1->_OverrideIconColorSettings).TypedValue)
      ;
    }
    TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
              (&pFVar10->_OverrideColorSettings,
               (TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *)local_498);
    if (local_378 != false) {
      local_380 = 0;
      if (local_388 != (void *)0x0) {
        FMemory::Free(local_388);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_498 + 0xd0));
    }
    local_4f0.Arg0 = &local_res18;
    FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_4e8,&local_res20,true);
    TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>::
    TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
              (&local_518,"SFieldIcon",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
               ,0x73,&local_4f0);
    FMemScope::~FMemScope(&local_4e8);
    FLLMScope::~FLLMScope(local_res8);
    pSVar4 = local_518._Widget.Object;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SWidget::SWidgetConstruct((SWidget *)local_518._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
    SFieldIcon::Construct(local_518._Widget.Object,pFVar10,*(local_518._RequiredArgs)->Arg0);
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((local_518._Widget.Object)->field_0x30 & 0x10) == 0) {
      cVar8 = (**(code **)(*(longlong *)local_518._Widget.Object + 0x228))(local_518._Widget.Object)
      ;
      bVar9 = 0;
      if (cVar8 != '\0') goto LAB_14d84e048;
    }
    else {
LAB_14d84e048:
      bVar9 = 0x20;
    }
    (local_518._Widget.Object)->field_0x30 = (local_518._Widget.Object)->field_0x30 & 0xdf;
    (local_518._Widget.Object)->field_0x30 = (local_518._Widget.Object)->field_0x30 | bVar9;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (local_518._Widget.Object)->field_0x31 = (local_518._Widget.Object)->field_0x31 | 4;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5.ReferenceController = local_518._Widget.SharedReferenceCount.ReferenceController;
    local_518._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_518._Widget.Object = (SFieldIcon *)0x0;
    if (pSVar4 == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_4d0.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4c8 = pSVar4;
    local_4d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_4c0,&local_4d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_58 != false) {
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_370 + 0x2c8));
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_370);
  }
  FVar5.ReferenceController = FStack_4c0.ReferenceController;
  pSVar4 = local_4c8;
  FText::FText(&local_500);
  TVar6.Reference = local_500.TextData.Reference;
  pIVar1 = *(ITextData **)&(param_1->_OverrideDisplayName).field0_0x0;
  if (pIVar1 == (ITextData *)0x0) {
    local_4e0 = (FName)local_res18->_padding_;
    pFVar11 = FText::FromName(&local_4b8,&local_4e0);
    FText::operator=(&local_500,pFVar11);
    if (local_4b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_500.TextData.Reference != pIVar1) {
      local_500.TextData.Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      if (TVar6.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
      }
    }
    local_500.Flags = (param_1->_OverrideDisplayName).field0_0x0.TypedValue.Flags;
  }
  uVar12 = (ulonglong)local_res18 | 1;
  pUVar3 = (UObject *)((ulonglong)local_res18 & 0xfffffffffffffffe);
  if ((pUVar3 == (UObject *)0x0) || (GC::GIsIncrementalReachabilityPending == false)) {
    (this->Field).Container.Unknown = uVar12;
    if (pUVar3 == (UObject *)0x0) goto LAB_14d84e255;
  }
  else {
    GC::MarkAsReachable(pUVar3);
    (this->Field).Container.Unknown = uVar12;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar3);
  }
LAB_14d84e255:
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4a8.Object = (SWidget *)pSVar4;
  local_4a8.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  Construct(this,param_1,&local_500,&local_4a8);
  if (local_500.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// Construct @ 14d84e2d0

void __thiscall
UE::PropertyViewer::SFieldName::Construct
          (SFieldName *this,FArguments *param_1,UScriptStruct *param_2)

{
  ITextData *pIVar1;
  code *pcVar2;
  UObject *pUVar3;
  SFieldIcon *pSVar4;
  FSharedReferencer<1> FVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  FText *pFVar11;
  ulonglong uVar12;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  UScriptStruct *local_res18;
  FName local_res20;
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
  local_518;
  FText local_500;
  T1RequiredArgs<UScriptStruct_const_*_&> local_4f0;
  FMemScope local_4e8;
  FName local_4e0;
  undefined8 local_4d8;
  FSharedReferencer<1> local_4d0;
  SFieldIcon *local_4c8;
  FSharedReferencer<1> FStack_4c0;
  FText local_4b8;
  TSharedPtr<SWidget,1> local_4a8;
  undefined1 local_498 [272];
  void *local_388;
  undefined4 local_380;
  bool local_378;
  undefined1 local_370 [776];
  void *local_68;
  undefined4 local_60;
  bool local_58;
  
  local_res18 = param_2;
  if (param_2 == (UScriptStruct *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
                       ,0x32,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_4c8 = (SFieldIcon *)0x0;
  FStack_4c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->_bShowIcon != false) {
    pFVar10 = SFieldIcon::FArguments::FArguments((FArguments *)local_370);
    local_378 = (param_1->_OverrideIconColorSettings).bIsSet;
    if (local_378 != false) {
      FFieldColorSettings::FFieldColorSettings
                ((FFieldColorSettings *)local_498,&(param_1->_OverrideIconColorSettings).TypedValue)
      ;
    }
    TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
              (&pFVar10->_OverrideColorSettings,
               (TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *)local_498);
    if (local_378 != false) {
      local_380 = 0;
      if (local_388 != (void *)0x0) {
        FMemory::Free(local_388);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_498 + 0xd0));
    }
    local_4f0.Arg0 = &local_res18;
    FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_4e8,&local_res20,true);
    TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
    ::
    TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
              (&local_518,"SFieldIcon",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SFieldName.cpp"
               ,0x37,&local_4f0);
    FMemScope::~FMemScope(&local_4e8);
    FLLMScope::~FLLMScope(local_res8);
    pSVar4 = local_518._Widget.Object;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SWidget::SWidgetConstruct((SWidget *)local_518._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
    SFieldIcon::Construct(local_518._Widget.Object,pFVar10,*(local_518._RequiredArgs)->Arg0);
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((local_518._Widget.Object)->field_0x30 & 0x10) == 0) {
      cVar8 = (**(code **)(*(longlong *)local_518._Widget.Object + 0x228))(local_518._Widget.Object)
      ;
      bVar9 = 0;
      if (cVar8 != '\0') goto LAB_14d84e4e8;
    }
    else {
LAB_14d84e4e8:
      bVar9 = 0x20;
    }
    (local_518._Widget.Object)->field_0x30 = (local_518._Widget.Object)->field_0x30 & 0xdf;
    (local_518._Widget.Object)->field_0x30 = (local_518._Widget.Object)->field_0x30 | bVar9;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (local_518._Widget.Object)->field_0x31 = (local_518._Widget.Object)->field_0x31 | 4;
    if (local_518._Widget.Object == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5.ReferenceController = local_518._Widget.SharedReferenceCount.ReferenceController;
    local_518._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_518._Widget.Object = (SFieldIcon *)0x0;
    if (pSVar4 == (SFieldIcon *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar7) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_4d0.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4c8 = pSVar4;
    local_4d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_4c0,&local_4d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (local_58 != false) {
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_370 + 0x2c8));
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_370);
  }
  FVar5.ReferenceController = FStack_4c0.ReferenceController;
  pSVar4 = local_4c8;
  FText::FText(&local_500);
  TVar6.Reference = local_500.TextData.Reference;
  pIVar1 = *(ITextData **)&(param_1->_OverrideDisplayName).field0_0x0;
  if (pIVar1 == (ITextData *)0x0) {
    local_4e0 = (FName)local_res18->_padding_;
    pFVar11 = FText::FromName(&local_4b8,&local_4e0);
    FText::operator=(&local_500,pFVar11);
    if (local_4b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
    }
  }
  else {
    if (local_500.TextData.Reference != pIVar1) {
      local_500.TextData.Reference = pIVar1;
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      if (TVar6.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
      }
    }
    local_500.Flags = (param_1->_OverrideDisplayName).field0_0x0.TypedValue.Flags;
  }
  uVar12 = (ulonglong)local_res18 | 1;
  pUVar3 = (UObject *)((ulonglong)local_res18 & 0xfffffffffffffffe);
  if ((pUVar3 == (UObject *)0x0) || (GC::GIsIncrementalReachabilityPending == false)) {
    (this->Field).Container.Unknown = uVar12;
    if (pUVar3 == (UObject *)0x0) goto LAB_14d84e6f5;
  }
  else {
    GC::MarkAsReachable(pUVar3);
    (this->Field).Container.Unknown = uVar12;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar3);
  }
LAB_14d84e6f5:
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4a8.Object = (SWidget *)pSVar4;
  local_4a8.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
  Construct(this,param_1,&local_500,&local_4a8);
  if (local_500.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_500.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// GetToolTipText @ 14d86d410

FText * __thiscall
UE::PropertyViewer::SFieldName::GetToolTipText(SFieldName *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// SetHighlightText @ 14d886de0

void __thiscall
UE::PropertyViewer::SFieldName::SetHighlightText(SFieldName *this,TAttribute<FText> *param_1)

{
  STextBlock *this_00;
  void *pvVar1;
  ITextData *pIVar2;
  TAttribute<FText> local_38;
  
  this_00 = (this->NameBlock).Object;
  if (this_00 != (STextBlock *)0x0) {
    FText::FText(&local_38.Value,&param_1->Value);
    local_38.bIsSet = param_1->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_38.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
    STextBlock::SetHighlightText(this_00,&local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

