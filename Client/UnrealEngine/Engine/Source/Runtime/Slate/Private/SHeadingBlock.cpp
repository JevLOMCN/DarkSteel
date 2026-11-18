// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// BuildMultiBlockWidget @ 1427db630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SHeadingBlock::BuildMultiBlockWidget(SHeadingBlock *this,ISlateStyle *param_1,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SHorizontalBox *pSVar5;
  code *pcVar6;
  atomic<int> aVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar10;
  bool bVar11;
  atomic<int> aVar12;
  FText *pFVar13;
  undefined8 *puVar14;
  FSlot *pFVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  FString *pFVar18;
  FTextBlockStyle *pFVar19;
  TSharedRef<STextBlock,1> *pTVar20;
  FArguments *pFVar21;
  FSlot *pFVar22;
  FArguments *pFVar23;
  FSlateBrush *pFVar24;
  TSharedRef<SSeparator,1> *pTVar25;
  TSharedRef<SHorizontalBox,1> *pTVar26;
  ForAnyElementType FVar27;
  TReferenceControllerBase<1> *pTVar28;
  SMultiBoxWidget *this_00;
  undefined1 *this_01;
  T0RequiredArgs local_res8 [8];
  ISlateStyle *local_res10;
  FName *local_res18;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_e18 [4];
  FLLMScope local_e14;
  FLLMScope local_e10;
  FLLMScope local_e0c;
  FArguments *local_e08;
  STextBlock *local_e00;
  FSharedReferencer<1> local_df8;
  FText local_df0;
  bool local_de0;
  undefined1 local_dd8 [8];
  ForAnyElementType FStack_dd0;
  ulonglong local_dc8;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *local_dc0;
  undefined8 local_db8;
  TReferenceControllerBase<1> *pTStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined1 local_d98;
  undefined1 local_d90 [8];
  ForAnyElementType FStack_d88;
  ulonglong local_d80;
  undefined8 local_d78;
  FSharedReferencer<1> local_d70;
  undefined1 local_d68 [8];
  FSlot *local_d60;
  FName local_d58;
  FName local_d50;
  FName local_d48;
  FMemScope local_d40;
  FName local_d38;
  FMemScope local_d30;
  FName local_d28;
  FMemScope local_d20;
  FString local_d18;
  FString local_d08;
  TAttribute<EVisibility> local_cf8;
  FText local_cd8;
  TSharedPtr<SWidget,1> local_cc8;
  FDestructionSentinel local_cb8;
  FDestructionSentinel local_ca0;
  TAttribute<FMargin> local_c88;
  TSharedRef<SSeparator,1> local_c58;
  TSharedRef<STextBlock,1> local_c48;
  FText local_c38;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_c28;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_c10;
  undefined1 local_bf8 [8];
  TReferenceControllerBase<1> *local_bf0;
  FString local_be8;
  TSharedRef<SHorizontalBox,1> local_bd8;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_bc8;
  undefined8 *local_bb0;
  SSeparator *local_ba8;
  FSharedReferencer<1> local_ba0 [3];
  undefined1 local_b88;
  undefined1 local_b80 [24];
  undefined4 local_b68;
  undefined1 local_b64;
  undefined4 local_b60;
  undefined1 local_b5c;
  FSlotArgumentsMixin local_b58;
  undefined8 *local_ac8 [2];
  TReferenceControllerBase<1> *local_ab8;
  undefined1 local_a98 [32];
  undefined4 local_a78;
  undefined1 local_a74;
  FSlotArgumentsMixin local_a70;
  FArguments local_9e0;
  undefined1 local_7d8 [544];
  undefined1 local_5b8 [24];
  FArguments local_5a0;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x2c8;
  lVar2 = *(longlong *)&this->field_0x2c0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar2 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar28 = *(TReferenceControllerBase<1> **)&this->field_0x2b8;
  this_00 = (SMultiBoxWidget *)0x0;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar28->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar28 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427db714;
      }
      LOCK();
      aVar12 = pTVar28->SharedReferenceCount;
      bVar11 = aVar7 == aVar12;
      if (bVar11) {
        pTVar28->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar12 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar12;
    } while (!bVar11);
    this_00 = *(SMultiBoxWidget **)&this->field_0x2b0;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_1427db73a;
  }
LAB_1427db714:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1427db73a:
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar11 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  pFVar13 = FText::GetEmpty();
  local_cd8.TextData.Reference = (pFVar13->TextData).Reference;
  if (local_cd8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_cd8.TextData.Reference + 8))
              (local_cd8.TextData.Reference,local_d68);
  }
  local_cd8.Flags = pFVar13->Flags;
  puVar14 = (undefined8 *)(**(code **)(*(longlong *)this + 8))(this,local_bf8);
  local_cc8.Object = (SWidget *)*puVar14;
  local_cc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar14[1];
  if (local_cc8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_cc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_cc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_00,&local_cc8,&local_cd8,bVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_bf0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  pIVar8 = local_res10;
  pFVar22 = (FSlot *)0x0;
  puVar14 = (undefined8 *)
            (**(code **)((longlong)*local_res10 + 0x48))
                      (local_res10,*local_res18,".Heading.Padding",&FStyleDefaults::DefaultMargin,0)
  ;
  local_c88.Value._0_8_ = *puVar14;
  local_c88.Value._8_8_ = puVar14[1];
  local_c88.bIsSet = true;
  local_c88.Getter._16_8_ = 0;
  local_c88.Getter._0_8_ = 0;
  local_c88.Getter._8_8_ = 0;
  local_dc0 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                        ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                          *)&this->field_0x260,&local_c88);
  local_e08 = SHorizontalBox::FArguments::FArguments(&local_9e0);
  pFVar15 = ::operator_new(0x58);
  local_d60 = pFVar22;
  if (pFVar15 != (FSlot *)0x0) {
    *(undefined8 *)pFVar15 = 0;
    *(undefined8 *)&pFVar15->field_0x8 = 0;
    *(undefined8 *)&pFVar15->field_0x10 = 0;
    *(undefined8 *)&pFVar15->field_0x18 = 0;
    *(undefined8 *)&pFVar15->field_0x20 = 0;
    *(undefined8 *)&pFVar15->field_0x28 = 0;
    *(undefined8 *)&pFVar15->field_0x30 = 0;
    *(undefined8 *)&pFVar15->field_0x38 = 0;
    *(undefined8 *)&pFVar15->field_0x40 = 0;
    *(undefined8 *)&pFVar15->field_0x48 = 0;
    *(undefined8 *)&pFVar15->field_0x50 = 0;
    local_d60 = SHorizontalBox::FSlot::FSlot(pFVar15);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_ac8,(FSlot *)&local_d60);
  local_a78 = 2;
  local_a74 = 1;
  pFVar16 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_ac8);
  pFVar17 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar13 = FText::ToUpper((FText *)(lVar2 + 0x1c8),&local_c38);
  FText::FText(&local_df0,pFVar13);
  local_de0 = true;
  local_dc8 = 0;
  local_dd8 = (undefined1  [8])0x0;
  FStack_dd0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar17->_Text).Value,&local_df0);
  (pFVar17->_Text).bIsSet = local_de0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_dd8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_dd8,
             (FWriteAccessScope *)&local_cb8);
  if (((int)local_dc8 != 0) && (FStack_dd0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_dd0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_dd0,0,0,0x10);
    local_dc8 = local_dc8 & 0xffffffff00000000;
  }
  if (local_cb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cb8.Accessor,&local_cb8);
  }
  if (FStack_dd0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_dd0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_dd8);
  if (local_df0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_df0.TextData.Reference + 0x10))();
  }
  pFVar9 = local_res18;
  local_d58 = *local_res18;
  ::FString::FString(&local_d08,".Heading");
  pFVar18 = ::FName::ToString(&local_d58,&local_be8);
  ::FString::ConcatFF(&local_d18,pFVar18,&local_d08);
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_d18.Data.ArrayNum != 0) {
    FVar27.Data = local_d18.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_d50,(wchar_t *)FVar27.Data);
  if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d18.Data.AllocatorInstance.Data);
  }
  if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_be8.Data.AllocatorInstance.Data);
  }
  if (local_d08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d08.Data.AllocatorInstance.Data);
  }
  pFVar19 = (FTextBlockStyle *)
            (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FTextBlockStyle::TypeName,local_d50,0,1);
  if (pFVar19 == (FTextBlockStyle *)0x0) {
    pFVar19 = FTextBlockStyle::GetDefault();
  }
  pFVar17->_TextStyle = pFVar19;
  FLLMScope::FLLMScope(&local_e14,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d40,&local_d48,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_c10,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SHeadingBlock.cpp"
             ,0x3d,local_res8);
  FMemScope::~FMemScope(&local_d40);
  FLLMScope::~FLLMScope(&local_e14);
  pTVar20 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c10,&local_c48,pFVar17);
  pTVar28 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_e00 = pTVar20->Object;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_df8.ReferenceController = pTVar28;
  if ((STextBlock **)&pFVar16->field_0x8 != &local_e00) {
    *(STextBlock **)&pFVar16->field_0x8 = local_e00;
    local_e00 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar16->field_0x10,&local_df8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_df8.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(local_e08,pFVar16);
  pFVar15 = ::operator_new(0x58);
  if (pFVar15 != (FSlot *)0x0) {
    *(undefined8 *)pFVar15 = 0;
    *(undefined8 *)&pFVar15->field_0x8 = 0;
    *(undefined8 *)&pFVar15->field_0x10 = 0;
    *(undefined8 *)&pFVar15->field_0x18 = 0;
    *(undefined8 *)&pFVar15->field_0x20 = 0;
    *(undefined8 *)&pFVar15->field_0x28 = 0;
    *(undefined8 *)&pFVar15->field_0x30 = 0;
    *(undefined8 *)&pFVar15->field_0x38 = 0;
    *(undefined8 *)&pFVar15->field_0x40 = 0;
    *(undefined8 *)&pFVar15->field_0x48 = 0;
    *(undefined8 *)&pFVar15->field_0x50 = 0;
    pFVar22 = SHorizontalBox::FSlot::FSlot(pFVar15);
  }
  local_e08 = (FArguments *)pFVar22;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_bb0,(FSlot *)&local_e08);
  local_d98 = 1;
  local_d80 = 0;
  local_da8 = ___xmm_00000000000000000000000041600000;
  uStack_da0 = _UNK_150957958;
  local_b88 = 1;
  local_d90 = (undefined1  [8])0x0;
  FStack_d88.Data = (FScriptContainerElement *)0x0;
  local_ba0[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_00000000000000000000000041600000;
  local_ba0[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_150957958;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b80,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d90,
             (FWriteAccessScope *)&local_ca0);
  if (((int)local_d80 != 0) && (FStack_d88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d88,0,0,0x10);
    local_d80 = local_d80 & 0xffffffff00000000;
  }
  if (local_ca0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ca0.Accessor,&local_ca0);
  }
  if (FStack_d88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d90);
  local_b60 = 2;
  local_b5c = 1;
  local_b68 = 0;
  local_b64 = 1;
  pFVar23 = SSeparator::FArguments::FArguments((FArguments *)local_7d8);
  pFVar23->_Orientation = Orient_Horizontal;
  pFVar23->_Thickness = 1.0;
  pFVar24 = (FSlateBrush *)(**(code **)((longlong)*local_res10 + 0x50))(local_res10,*pFVar9);
  pFVar23->_SeparatorImage = pFVar24;
  FLLMScope::FLLMScope(&local_e10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d30,&local_d38,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_bc8,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SHeadingBlock.cpp"
             ,0x47,local_res20);
  FMemScope::~FMemScope(&local_d30);
  FLLMScope::~FLLMScope(&local_e10);
  pTVar25 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_bc8,&local_c58,pFVar23);
  pTVar3 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_ba8 = pTVar25->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d78 = 0;
  local_d70.ReferenceController = pTVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_ba0,&local_d70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d70.ReferenceController);
  pFVar21 = SHorizontalBox::FArguments::operator+(pFVar21,(FSlotArguments *)&local_bb0);
  FLLMScope::FLLMScope(&local_e0c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d20,&local_d28,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_c28,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SHeadingBlock.cpp"
             ,0x38,local_e18);
  FMemScope::~FMemScope(&local_d20);
  FLLMScope::~FLLMScope(&local_e0c);
  pTVar26 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_c28,&local_bd8,pFVar21);
  pTVar10 = local_dc0;
  this_01 = &local_dc0->field_0x20;
  pTVar4 = (pTVar26->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar26->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_db8 = *(undefined8 *)&pTVar10->field_0x30;
  pTStack_db0 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x38;
  *(SHorizontalBox **)&pTVar10->field_0x30 = pSVar5;
  *(TReferenceControllerBase<1> **)&pTVar10->field_0x38 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_db0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bd8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bc8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
  if ((void *)local_5b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_7d8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b80);
  if ((void *)local_b80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ba0[0].ReferenceController);
  if (local_bb0 != (undefined8 *)0x0) {
    (**(code **)*local_bb0)(local_bb0,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c10._Widget.SharedReferenceCount.ReferenceController);
  if (local_c38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c38.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a98);
  if ((void *)local_a98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ab8);
  if (local_ac8[0] != (undefined8 *)0x0) {
    (**(code **)*local_ac8[0])(local_ac8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_9e0._Slots.AllocatorInstance.Data,local_9e0._Slots.ArrayNum);
  if ((FSlotArguments *)local_9e0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_9e0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9e0);
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x2c0;
  local_cf8.Value.Value.Value = *(TEnumAsByte<EVisibility::Private> *)(lVar2 + 0xc0);
  local_cf8.bIsSet = *(bool *)(lVar2 + 0xc1);
  local_cf8.Getter._0_8_ = 0;
  local_cf8.Getter._8_8_ = 0;
  local_cf8.Getter._16_4_ = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_cf8.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar2 + 200));
  SCompoundWidget::SetVisibility((SCompoundWidget *)&this->field_0x8,&local_cf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Construct @ 1427eed30

void __thiscall SHeadingBlock::Construct(SHeadingBlock *this,FArguments *param_1)

{
  return;
}

