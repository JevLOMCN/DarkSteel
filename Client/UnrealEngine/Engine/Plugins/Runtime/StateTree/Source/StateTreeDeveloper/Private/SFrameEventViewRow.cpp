// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 5

// Construct @ 14d71a1e0

void __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::Construct
          (SFrameEventViewRow *this,FArguments *param_1,TSharedPtr<STableViewBase,1> *param_2,
          TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_3)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FFrameEventTreeElement *pFVar3;
  STableViewBase *pSVar4;
  SHorizontalBox *this_00;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  SWidget *pSVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SHorizontalBox,1> *pTVar10;
  UObject *pUVar11;
  FSlot *pFVar12;
  FSlotArguments *pFVar13;
  FArguments *pFVar14;
  TSharedRef<SWidget,1> *pTVar15;
  TSharedRef<SExpanderArrow,1> *pTVar16;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar17;
  FArguments *pFVar18;
  FTextBlockStyle *pFVar19;
  FText *pFVar20;
  TSharedRef<STextBlock,1> *pTVar21;
  FSlotArguments *pFVar22;
  FSlotBase *this_01;
  longlong *plVar23;
  FSlotArguments *pFVar24;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FLLMScope local_fc8 [2];
  undefined2 local_fc0;
  undefined1 local_fb8 [8];
  ForAnyElementType FStack_fb0;
  ulonglong local_fa8;
  float local_fa0;
  undefined1 local_f9c;
  undefined1 local_f98 [8];
  ForAnyElementType FStack_f90;
  ulonglong local_f88;
  undefined4 local_f80;
  undefined1 local_f7c;
  undefined1 local_f78 [8];
  ForAnyElementType FStack_f70;
  ulonglong local_f68;
  SExpanderArrow *local_f60;
  FSharedReferencer<1> local_f58;
  STextBlock *local_f50;
  FSharedReferencer<1> local_f48;
  FText local_f40;
  bool local_f30;
  undefined1 local_f28 [8];
  ForAnyElementType FStack_f20;
  ulonglong local_f18;
  FString local_f10;
  TSharedPtr<SWidget,1> local_ef8;
  TSharedRef<STableViewBase,1> local_ee8;
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> local_ed8;
  undefined4 local_ec8 [2];
  undefined4 local_ec0 [2];
  undefined4 local_eb8 [2];
  undefined4 local_eb0 [2];
  FName local_ea8;
  FMemScope local_ea0;
  FSlotArguments *local_e98;
  FName local_e90;
  T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&> local_e88;
  FMemScope local_e80;
  FSlotArguments *local_e78;
  FName local_e70;
  FMemScope local_e68;
  FString *local_e60;
  UObject *local_e58;
  FText local_e50;
  TSharedRef<SWidget,1> local_e38;
  FDestructionSentinel local_e28;
  FDestructionSentinel local_e10;
  FDestructionSentinel local_df8;
  FDestructionSentinel local_de0;
  TSharedRef<SHorizontalBox,1> local_dc8;
  TSharedRef<SWidget,1> local_db8;
  TSharedRef<SExpanderArrow,1> local_da8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_d98;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
  local_d80;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_d68;
  TSharedRef<STextBlock,1> local_d50;
  FText local_d40;
  SWidget *local_d30;
  TReferenceControllerBase<1> *pTStack_d28;
  FFrameEventTreeElement *local_d20;
  TReferenceControllerBase<1> *pTStack_d18;
  undefined1 local_d10 [80];
  undefined4 local_cc0;
  undefined1 local_cbc;
  undefined4 local_cb8;
  undefined1 local_cb4;
  TPanelChildren<SBoxPanel::FSlot> *local_c20;
  int local_c18;
  undefined1 local_c10 [32];
  FSlotArgumentsMixin local_bf0 [4];
  TPanelChildren<SBoxPanel::FSlot> *local_b20;
  int local_b18;
  undefined1 local_b10 [520];
  undefined1 local_908 [32];
  undefined1 local_8e8 [32];
  undefined1 local_8c8 [24];
  FArguments local_8b0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_6a8;
  FArguments local_5a8;
  
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar3 = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d20 = (this->Item).Object;
  pTStack_d18 = (this->Item).SharedReferenceCount.ReferenceController;
  (this->Item).Object = pFVar3;
  (this->Item).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d18);
  if ((param_2->Object == (STableViewBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ee8.Object = pSVar4;
  local_ee8.SharedReferenceCount.ReferenceController = pTVar2;
  if ((pSVar4 == (STableViewBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)this,param_1
             ,&local_ee8);
  (**(code **)(this->_padding_ + 0x80))(this,pSVar4->TableViewMode);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_8b0);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_ea8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_ea0,&local_ea8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_d98,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
             ,0x15,local_res8);
  FMemScope::~FMemScope(&local_ea0);
  FLLMScope::~FLLMScope(local_res18);
  pTVar10 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d98,&local_dc8,pFVar9);
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  this_00 = pTVar10->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_dc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d98._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_8b0._Slots.AllocatorInstance.Data,local_8b0._Slots.ArrayNum);
  if ((FSlotArguments *)local_8b0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_8b0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8b0);
  if ((this_00 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar24 = (FSlotArguments *)0x0;
  local_f10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f10.Data.ArrayNum = 0;
  local_f10.Data.ArrayMax = 0;
  if (((this->Item).Object == (FFrameEventTreeElement *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar11 = FWeakObjectPtr::Get(&(((this->Item).Object)->WeakStateTree).WeakPtr);
  if (pUVar11 != (UObject *)0x0) {
    if (((this->Item).Object == (FFrameEventTreeElement *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_e60 = &local_f10;
    local_e58 = pUVar11;
    (*(code *)(&
              PTR_VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>_152bc2830
              )[(((this->Item).Object)->Event).TypeIndex])(&local_e60);
  }
  FText::FromString(&local_e50,&local_f10);
  if (local_f10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f10.Data.AllocatorInstance.Data);
  }
  SWidget::SetToolTipText((SWidget *)this_00,&local_e50);
  if (local_e50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e50.TextData.Reference + 0x10))();
  }
  if ((this_00 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = ::operator_new(0x58);
  local_e98 = pFVar24;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_e98 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar12);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_d10 + 8),(FSlot *)&local_e98);
  local_c18 = -1;
  local_d10._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_cb8 = 2;
  local_cb4 = 1;
  local_cc0 = 1;
  local_cbc = 1;
  local_c20 = (TPanelChildren<SBoxPanel::FSlot> *)&this_00->field_0x218;
  pFVar13 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_d10 + 8));
  pFVar14 = SExpanderArrow::FArguments::FArguments((FArguments *)local_b10);
  local_fc0 = 0x100;
  local_fa8 = 0;
  local_fb8 = (undefined1  [8])0x0;
  FStack_fb0.Data = (FScriptContainerElement *)0x0;
  (pFVar14->_ShouldDrawWires).Value = false;
  (pFVar14->_ShouldDrawWires).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_ShouldDrawWires).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fb8,
             (FWriteAccessScope *)&local_e28);
  if (((int)local_fa8 != 0) && (FStack_fb0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_fb0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fb0,0,0,0x10);
    local_fa8 = local_fa8 & 0xffffffff00000000;
  }
  if (local_e28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e28.Accessor,&local_e28);
  }
  if (FStack_fb0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_fb0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fb8);
  local_f9c = 1;
  local_fa0 = __real_42000000;
  local_f88 = 0;
  local_f98 = (undefined1  [8])0x0;
  FStack_f90.Data = (FScriptContainerElement *)0x0;
  (pFVar14->_IndentAmount).Value = __real_42000000;
  (pFVar14->_IndentAmount).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_IndentAmount).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f98,
             (FWriteAccessScope *)&local_e10);
  if (((int)local_f88 != 0) && (FStack_f90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f90,0,0,0x10);
    local_f88 = local_f88 & 0xffffffff00000000;
  }
  if (local_e10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e10.Accessor,&local_e10);
  }
  if (FStack_f90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f98);
  local_f7c = 1;
  local_f80 = 0;
  local_f68 = 0;
  local_f78 = (undefined1  [8])0x0;
  FStack_f70.Data = (FScriptContainerElement *)0x0;
  (pFVar14->_BaseIndentLevel).Value = 0;
  (pFVar14->_BaseIndentLevel).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_BaseIndentLevel).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f78,
             (FWriteAccessScope *)&local_df8);
  if (((int)local_f68 != 0) && (FStack_f70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f70,0,0,0x10);
    local_f68 = local_f68 & 0xffffffff00000000;
  }
  if (local_df8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_df8.Accessor,&local_df8);
  }
  if (FStack_f70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f78);
  pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_db8);
  if (pTVar15->Object == (SWidget *)0x0) {
    local_ed8.Object = (SFrameEventViewRow *)0x0;
  }
  else {
    local_ed8.Object = (SFrameEventViewRow *)&pTVar15->Object[-1].StatID;
  }
  local_ed8.SharedReferenceCount.ReferenceController =
       (pTVar15->SharedReferenceCount).ReferenceController;
  if (local_ed8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ed8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_ed8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_db8.SharedReferenceCount.ReferenceController);
  local_e88.Arg0 = &local_ed8;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e80,&local_e90,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
            (&local_d80,"SExpanderArrow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
             ,0x1d,&local_e88);
  FMemScope::~FMemScope(&local_e80);
  FLLMScope::~FLLMScope(local_res20);
  pTVar16 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>_&&>_>
            ::operator<<=(&local_d80,&local_da8,pFVar14);
  pTVar5 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_f60 = pTVar16->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f58.ReferenceController = pTVar5;
  if ((SExpanderArrow **)&pFVar13->field_0x8 != &local_f60) {
    *(SExpanderArrow **)&pFVar13->field_0x8 = local_f60;
    local_f60 = (SExpanderArrow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar13->field_0x10,&local_f58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_da8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d80._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ed8.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c8);
  if ((void *)local_8c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e8);
  if ((void *)local_8e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_908);
  if ((void *)local_908._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_908._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_908);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_b10);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_d10);
  CreateImageForEvent(this,&local_ef8);
  pSVar7 = local_ef8.Object;
  if (local_ef8.Object != (SWidget *)0x0) {
    if ((this_00 == (SHorizontalBox *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar17 = SHorizontalBox::AddSlot(this_00,&local_6a8);
    if ((longlong *)local_ec8 != &pFVar17->_padding_) {
      *(undefined4 *)&pFVar17->_padding_ = 2;
      *(undefined1 *)((longlong)&pFVar17->_padding_ + 4) = 1;
    }
    pFVar13 = pFVar24;
    if (pFVar17 != (FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)0xffffffffffffffb0) {
      pFVar13 = (FSlotArguments *)&pFVar17->_padding_;
    }
    puVar1 = &pFVar13->field_0x48;
    if (local_ec0 != (undefined4 *)puVar1) {
      *(undefined4 *)puVar1 = 1;
      pFVar13->field_0x4c = 1;
    }
    pFVar22 = pFVar24;
    if (puVar1 != (undefined1 *)0x0) {
      pFVar22 = pFVar13;
    }
    pFVar13 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar22);
    if ((pSVar7 == (SWidget *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_e38.Object = local_ef8.Object;
    local_e38.SharedReferenceCount.ReferenceController =
         local_ef8.SharedReferenceCount.ReferenceController;
    if (local_ef8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_ef8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_ef8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar7 == (SWidget *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar13,&local_e38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e38.SharedReferenceCount.ReferenceController);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_6a8);
  }
  if ((this_00 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = ::operator_new(0x58);
  local_e78 = pFVar24;
  if (pFVar12 != (FSlot *)0x0) {
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)&pFVar12->field_0x8 = 0;
    *(undefined8 *)&pFVar12->field_0x10 = 0;
    *(undefined8 *)&pFVar12->field_0x18 = 0;
    *(undefined8 *)&pFVar12->field_0x20 = 0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    *(undefined8 *)&pFVar12->field_0x30 = 0;
    *(undefined8 *)&pFVar12->field_0x38 = 0;
    *(undefined8 *)&pFVar12->field_0x40 = 0;
    *(undefined8 *)&pFVar12->field_0x48 = 0;
    *(undefined8 *)&pFVar12->field_0x50 = 0;
    local_e78 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar12);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)(local_c10 + 8),(FSlot *)&local_e78);
  local_c10._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_b18 = -1;
  local_b20 = (TPanelChildren<SBoxPanel::FSlot> *)&this_00->field_0x218;
  pFVar13 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      (local_bf0,__real_40000000);
  pFVar13 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar13);
  if (local_eb8 != (undefined4 *)&pFVar13->field_0x50) {
    *(undefined4 *)&pFVar13->field_0x50 = 2;
    pFVar13->field_0x54 = 1;
  }
  pFVar22 = pFVar24;
  if (pFVar13 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar22 = pFVar13;
  }
  puVar1 = &pFVar22->field_0x48;
  if (local_eb0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar22->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar24 = pFVar22;
  }
  pFVar18 = STextBlock::FArguments::FArguments(&local_5a8);
  pFVar19 = GetEventTextStyle(this);
  pFVar18->_TextStyle = pFVar19;
  pFVar20 = GetEventDescription(this,&local_d40);
  FText::FText(&local_f40,pFVar20);
  local_f30 = true;
  local_f18 = 0;
  local_f28 = (undefined1  [8])0x0;
  FStack_f20.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar18->_Text).Value,&local_f40);
  (pFVar18->_Text).bIsSet = local_f30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f28,
             (FWriteAccessScope *)&local_de0);
  if (((int)local_f18 != 0) && (FStack_f20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f20,0,0,0x10);
    local_f18 = local_f18 & 0xffffffff00000000;
  }
  if (local_de0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_de0.Accessor,&local_de0);
  }
  if (FStack_f20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f28);
  if (local_f40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f40.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_fc8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e70 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e68,&local_e70,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_d68,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
             ,0x35,local_res10);
  FMemScope::~FMemScope(&local_e68);
  FLLMScope::~FLLMScope(local_fc8);
  pTVar21 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d68,&local_d50,pFVar18);
  pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_f50 = pTVar21->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f48.ReferenceController = pTVar5;
  if ((STextBlock **)&pFVar24->field_0x8 != &local_f50) {
    *(STextBlock **)&pFVar24->field_0x8 = local_f50;
    local_f50 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->field_0x10,&local_f48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f48.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d50.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d68._Widget.SharedReferenceCount.ReferenceController);
  if (local_d40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d40.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a8);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_c10);
  plVar23 = &this->_padding_;
  *(undefined4 *)plVar23 = 0;
  if ((this_00 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (FSlotBase *)&this->_padding_;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    if (plVar23 == (longlong *)0x0) {
      this_01 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::DetatchParentFromContent(this_01);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    if (plVar23 == (longlong *)0x0) {
      this_01 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::DetatchParentFromContent(this_01);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d30 = (this_01->Widget).Object;
  pTStack_d28 = (this_01->Widget).SharedReferenceCount.ReferenceController;
  (this_01->Widget).Object = (SWidget *)this_00;
  (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d28);
  FSlotBase::AfterContentOrOwnerAssigned(this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ef8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// CreateImageForEvent @ 14d7234c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedPtr<SWidget,1> * __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::CreateImageForEvent
          (SFrameEventViewRow *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  char cVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FStateTreeStyle *pFVar5;
  TSharedPtr<SWidget,1> *pTVar6;
  FName *pFVar7;
  FSlateBrush *pFVar8;
  FArguments *pFVar9;
  TSharedRef<SImage,1> *pTVar10;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar11;
  FFrameEventTreeElement *pFVar12;
  char *pcVar13;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *this_00;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar14;
  T0RequiredArgs local_res8 [16];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_ff8;
  T0RequiredArgs local_ff7 [3];
  FLLMScope local_ff4;
  FLLMScope local_ff0;
  FLLMScope local_fec;
  FLLMScope local_fe8;
  FLLMScope local_fe4;
  FName local_fe0;
  FMemScope local_fd8;
  FName local_fd0;
  FMemScope local_fc8;
  FName local_fc0;
  FMemScope local_fb8;
  FName local_fb0;
  FMemScope local_fa8;
  FName local_fa0;
  FMemScope local_f98;
  TAttribute<FSlateBrush_const_*> local_f90;
  TAttribute<FSlateBrush_const_*> local_f68;
  TAttribute<FSlateBrush_const_*> local_f40;
  TAttribute<FSlateBrush_const_*> local_f18;
  TAttribute<FSlateBrush_const_*> local_ef0;
  FName local_ec8;
  FName local_ec0;
  FName local_eb8;
  FName local_eb0;
  FName local_ea8;
  FName local_ea0;
  FName local_e98;
  FName local_e90;
  FName local_e88;
  FName local_e80;
  FName local_e78;
  FName local_e70;
  TSharedRef<SImage,1> local_e68;
  TSharedRef<SImage,1> local_e58;
  TSharedRef<SImage,1> local_e48;
  TSharedRef<SImage,1> local_e38;
  TSharedRef<SImage,1> local_e28;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_e18;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_e00;
  FName local_de8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_de0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_dc8;
  FName local_db0;
  FName local_da8;
  FName local_da0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_d98;
  FName local_d80;
  FArguments local_d78;
  FArguments local_ad0;
  FArguments local_828;
  FArguments local_580;
  FArguments local_2d8;
  undefined8 uStack_30;
  
  uStack_30 = 0x14d7234d9;
  pFVar5 = FStateTreeStyle::Get();
  this_00 = &this->Item;
  if ((this_00->Object == (FFrameEventTreeElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar12 = this_00->Object;
  pTVar14 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
             *)0x0;
  pTVar11 = &pFVar12->Event;
  if ((pFVar12->Event).TypeIndex != '\0') {
    pTVar11 = pTVar14;
  }
  if (pTVar11 !=
      (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
       *)0x0) {
    cVar1 = (char)pTVar11->_padding_;
    if (cVar1 == '\x11') {
      pcVar13 = "StateTreeEditor.Debugger.State.Enter";
      pFVar7 = &local_da8;
    }
    else if (cVar1 == '\x12') {
      pcVar13 = "StateTreeEditor.Debugger.State.Exit";
      pFVar7 = &local_db0;
    }
    else {
      if (cVar1 != '\x13') goto LAB_14d723d75;
      pcVar13 = "StateTreeEditor.Debugger.State.Completed";
      pFVar7 = &local_de8;
    }
    pcVar3 = *(code **)(*(longlong *)pFVar5 + 0x50);
    pFVar7 = ::FName::FName(pFVar7,pcVar13);
    pFVar8 = (FSlateBrush *)(*pcVar3)(pFVar5,*pFVar7);
    pFVar9 = SImage::FArguments::FArguments(&local_d78);
    local_f68.bIsSet = true;
    local_f68.Getter._16_8_ = 0;
    local_f68.Getter._0_8_ = 0;
    local_f68.Getter._8_8_ = 0;
    local_f68.Value = pFVar8;
    pFVar9 = SImage::FArguments::Image(pFVar9,&local_f68);
    FLLMScope::FLLMScope(&local_ff4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_fe0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_fd8,&local_fe0,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_e18,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
               ,0x52,local_res8);
    FMemScope::~FMemScope(&local_fd8);
    FLLMScope::~FLLMScope(&local_ff4);
    pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_e18,&local_e68,pFVar9);
    __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
    pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e18._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_d78);
    return __return_storage_ptr__;
  }
  if ((pFVar12 == (FFrameEventTreeElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar12 = this_00->Object;
  pTVar11 = &pFVar12->Event;
  if ((pFVar12->Event).TypeIndex != '\x01') {
    pTVar11 = pTVar14;
  }
  if (pTVar11 ==
      (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
       *)0x0) {
    if ((pFVar12 == (FFrameEventTreeElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
    pTVar11 = &this_00->Object->Event;
    if ((this_00->Object->Event).TypeIndex != '\x04') {
      pTVar11 = pTVar14;
    }
    if (pTVar11 ==
        (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
         *)0x0) {
      pFVar12 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->(this_00);
      pTVar11 = &pFVar12->Event;
      if ((pFVar12->Event).TypeIndex != '\x05') {
        pTVar11 = pTVar14;
      }
      if (pTVar11 ==
          (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
           *)0x0) {
        pFVar12 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->(this_00);
        bVar4 = TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                ::IsType<FStateTreeTraceConditionEvent>(&pFVar12->Event);
        if (bVar4) {
          pFVar12 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->(this_00)
          ;
          if (((pFVar12->Event).TypeIndex != '\b') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
            return pTVar6;
          }
          switch((char)(pFVar12->Event)._padding_) {
          case '\f':
            pcVar13 = "StateTreeEditor.Debugger.Condition.Passed";
            pFVar7 = &local_ea8;
            break;
          case '\r':
            pcVar13 = "StateTreeEditor.Debugger.Condition.Failed";
            pFVar7 = &local_e98;
            break;
          case '\x0e':
            pcVar13 = "StateTreeEditor.Debugger.Condition.Passed";
            pFVar7 = &local_ea0;
            break;
          case '\x0f':
            pcVar13 = "StateTreeEditor.Debugger.Condition.Failed";
            pFVar7 = &local_e90;
            break;
          case '\x10':
            pcVar13 = "StateTreeEditor.Debugger.Condition.Failed";
            pFVar7 = &local_e88;
            break;
          default:
            pcVar13 = "StateTreeEditor.Debugger.Unset";
            pFVar7 = &local_e70;
            break;
          case '\x12':
            pcVar13 = "StateTreeEditor.Debugger.Condition.OnEvaluating";
            pFVar7 = &local_e80;
            break;
          case '\x13':
            pcVar13 = "StateTreeEditor.Debugger.Condition.OnTransition";
            pFVar7 = &local_e78;
          }
          pcVar3 = *(code **)(*(longlong *)pFVar5 + 0x50);
          pFVar7 = ::FName::FName(pFVar7,pcVar13);
          pFVar8 = (FSlateBrush *)(*pcVar3)(pFVar5,*pFVar7);
          pFVar9 = SImage::FArguments::FArguments(&local_2d8);
          local_ef0.bIsSet = true;
          local_ef0.Getter._16_8_ = 0;
          local_ef0.Getter._0_8_ = 0;
          local_ef0.Getter._8_8_ = 0;
          local_ef0.Value = pFVar8;
          pFVar9 = SImage::FArguments::Image(pFVar9,&local_ef0);
          FLLMScope::FLLMScope
                    (&local_fe4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_fa0 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_f98,&local_fa0,true);
          TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
          TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                    (&local_dc8,"SImage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
                     ,0xa1,local_ff7);
          FMemScope::~FMemScope(&local_f98);
          FLLMScope::~FLLMScope(&local_fe4);
          pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                              (&local_dc8,&local_e28,pFVar9);
          __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
          pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e28.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_dc8._Widget.SharedReferenceCount.ReferenceController);
          SImage::FArguments::~FArguments(&local_2d8);
          return __return_storage_ptr__;
        }
      }
      else {
        cVar1 = (char)pTVar11->_padding_;
        if (((cVar1 == '\x02') || (cVar1 == '\n')) || (cVar1 == '\v')) {
          cVar1 = (char)pTVar11->_padding_;
          if (cVar1 == '\x01') {
            pcVar13 = "StateTreeEditor.Debugger.Task.Stopped";
            pFVar7 = &local_eb0;
          }
          else if (cVar1 == '\x02') {
            pcVar13 = "StateTreeEditor.Debugger.Task.Succeeded";
            pFVar7 = &local_eb8;
          }
          else {
            if (cVar1 != '\x03') goto LAB_14d723d75;
            pcVar13 = "StateTreeEditor.Debugger.Task.Failed";
            pFVar7 = &local_ec0;
          }
          pcVar3 = *(code **)(*(longlong *)pFVar5 + 0x50);
          pFVar7 = ::FName::FName(pFVar7,pcVar13);
          pFVar8 = (FSlateBrush *)(*pcVar3)(pFVar5,*pFVar7);
          pFVar9 = SImage::FArguments::FArguments(&local_580);
          local_f90.bIsSet = true;
          local_f90.Getter._16_8_ = 0;
          local_f90.Getter._0_8_ = 0;
          local_f90.Getter._8_8_ = 0;
          local_f90.Value = pFVar8;
          pFVar9 = SImage::FArguments::Image(pFVar9,&local_f90);
          FLLMScope::FLLMScope
                    (&local_fe8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_fb0 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_fa8,&local_fb0,true);
          TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
          TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                    (&local_de0,"SImage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
                     ,0x8b,&local_ff8);
          FMemScope::~FMemScope(&local_fa8);
          FLLMScope::~FLLMScope(&local_fe8);
          pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                              (&local_de0,&local_e38,pFVar9);
          __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
          pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e38.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_de0._Widget.SharedReferenceCount.ReferenceController);
          SImage::FArguments::~FArguments(&local_580);
          return __return_storage_ptr__;
        }
      }
    }
    else if ((char)pTVar11->_padding_ == '\a') {
      pcVar3 = *(code **)(*(longlong *)pFVar5 + 0x50);
      pFVar7 = ::FName::FName(&local_ec8,"StateTreeEditor.Debugger.State.Selected");
      pFVar8 = (FSlateBrush *)(*pcVar3)(pFVar5,*pFVar7);
      pFVar9 = SImage::FArguments::FArguments(&local_828);
      local_f18.bIsSet = true;
      local_f18.Getter._16_8_ = 0;
      local_f18.Getter._0_8_ = 0;
      local_f18.Getter._8_8_ = 0;
      local_f18.Value = pFVar8;
      pFVar9 = SImage::FArguments::Image(pFVar9,&local_f18);
      FLLMScope::FLLMScope(&local_fec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_fc0 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_fb8,&local_fc0,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_d98,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
                 ,0x71,local_res20);
      FMemScope::~FMemScope(&local_fb8);
      FLLMScope::~FLLMScope(&local_fec);
      pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_d98,&local_e48,pFVar9);
      __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
      pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d98._Widget.SharedReferenceCount.ReferenceController);
      SImage::FArguments::~FArguments(&local_828);
      return __return_storage_ptr__;
    }
LAB_14d723d75:
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  cVar1 = (char)pTVar11->_padding_;
  if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    pcVar13 = "StateTreeEditor.Debugger.Log.Error";
    pFVar7 = &local_d80;
  }
  else {
    if (cVar1 != '\x03') goto LAB_14d723d75;
    pcVar13 = "StateTreeEditor.Debugger.Log.Warning";
    pFVar7 = &local_da0;
  }
  pcVar3 = *(code **)(*(longlong *)pFVar5 + 0x50);
  pFVar7 = ::FName::FName(pFVar7,pcVar13);
  pFVar8 = (FSlateBrush *)(*pcVar3)(pFVar5,*pFVar7);
  pFVar9 = SImage::FArguments::FArguments(&local_ad0);
  local_f40.bIsSet = true;
  local_f40.Getter._16_8_ = 0;
  local_f40.Getter._0_8_ = 0;
  local_f40.Getter._8_8_ = 0;
  local_f40.Value = pFVar8;
  pFVar9 = SImage::FArguments::Image(pFVar9,&local_f40);
  FLLMScope::FLLMScope(&local_ff0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_fd0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_fc8,&local_fd0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_e00,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeDebuggerViewRow.cpp"
             ,0x62,local_res18);
  FMemScope::~FMemScope(&local_fc8);
  FLLMScope::~FLLMScope(&local_ff0);
  pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_e00,&local_e58,pFVar9);
  __return_storage_ptr__->Object = (SWidget *)pTVar10->Object;
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e00._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_ad0);
  return __return_storage_ptr__;
}

// GetEventDescription @ 14d72e8a0

FText * __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription
          (SFrameEventViewRow *this,FText *__return_storage_ptr__)

{
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UObject *pUVar5;
  FFrameEventTreeElement *pFVar6;
  ulonglong uVar7;
  int iVar8;
  FString local_38;
  FString *local_28;
  UObject *local_20;
  FString *local_18;
  UObject *local_10;
  
  this_00 = &this->Item;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (this_00->Object == (FFrameEventTreeElement *)0x0) {
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
  pFVar6 = this_00->Object;
  if ((pFVar6->Description).Data.ArrayNum < 2) {
    if (pFVar6 == (FFrameEventTreeElement *)0x0) {
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
    pUVar5 = FWeakObjectPtr::Get(&(this_00->Object->WeakStateTree).WeakPtr);
    if (pUVar5 != (UObject *)0x0) {
      if (this_00->Object == (FFrameEventTreeElement *)0x0) {
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
      uVar7 = (ulonglong)(this_00->Object->Event).TypeIndex;
      if (10 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FText *)(*pcVar2)();
          return pFVar4;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTraceStateEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar7) == '\0') {
        pFVar6 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->(this_00);
        uVar7 = (ulonglong)(pFVar6->Event).TypeIndex;
        if (10 < uVar7) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar4 = (FText *)(*pcVar2)();
            return pFVar4;
          }
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTraceTaskEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar7) == '\0') {
          pFVar6 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->(this_00);
          uVar7 = (ulonglong)(pFVar6->Event).TypeIndex;
          if (10 < uVar7) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar4 = (FText *)(*pcVar2)();
              return pFVar4;
            }
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTraceEvaluatorEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar7) == '\0') {
            pFVar6 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->
                               (this_00);
            bVar3 = TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                    ::IsType<FStateTreeTracePropertyEvent>(&pFVar6->Event);
            if (!bVar3) {
              pFVar6 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->
                                 (this_00);
              bVar3 = TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                      ::IsType<FStateTreeTraceConditionEvent>(&pFVar6->Event);
              if (!bVar3) {
                pFVar6 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->
                                   (this_00);
                uVar7 = (ulonglong)(pFVar6->Event).TypeIndex;
                if (10 < uVar7) {
                  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L"");
                  if (bVar3) {
                    pcVar2 = (code *)swi(3);
                    pFVar4 = (FText *)(*pcVar2)();
                    return pFVar4;
                  }
                }
                if (*(char *)((longlong)
                              &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTraceLogEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                               ::__l2::bIsSameType + uVar7) == '\0') {
                  pFVar6 = TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::operator->
                                     (this_00);
                  local_28 = &local_38;
                  local_20 = pUVar5;
                  (*(code *)(&
                            PTR_VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l13::<lambda_2>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>_152bc27d0
                            )[(pFVar6->Event).TypeIndex])(&local_28);
                  goto LAB_14d72ebab;
                }
              }
            }
          }
        }
      }
      if (this_00->Object == (FFrameEventTreeElement *)0x0) {
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
      local_18 = &local_38;
      local_10 = pUVar5;
      (*(code *)(&
                PTR_VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventDescription_::__l11::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>_152bc2770
                )[(this_00->Object->Event).TypeIndex])(&local_18);
    }
  }
  else {
    if (pFVar6 == (FFrameEventTreeElement *)0x0) {
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
    iVar1 = (this_00->Object->Description).Data.ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              (&local_38,(wchar_t *)(this_00->Object->Description).Data.AllocatorInstance.Data,iVar8
              );
  }
LAB_14d72ebab:
  FText::FromString(__return_storage_ptr__,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEventTextStyle @ 14d72ebf0

FTextBlockStyle * __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::GetEventTextStyle(SFrameEventViewRow *this)

{
  FFrameEventTreeElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreeStyle *pFVar4;
  FTextBlockStyle *pFVar5;
  FName *pFVar6;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar7;
  char *pcVar8;
  ulonglong uVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  pFVar4 = FStateTreeStyle::Get();
  if ((this->Item).Object == (FFrameEventTreeElement *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTextBlockStyle *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar9 = (ulonglong)(((this->Item).Object)->Event).TypeIndex;
  if (10 < uVar9) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTextBlockStyle *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTracePhaseEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9) == '\0') {
    if ((this->Item).Object == (FFrameEventTreeElement *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTextBlockStyle *)(*pcVar2)();
        return pFVar5;
      }
    }
    uVar9 = (ulonglong)(((this->Item).Object)->Event).TypeIndex;
    if (10 < uVar9) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTextBlockStyle *)(*pcVar2)();
        return pFVar5;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTracePropertyEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9) == '\0') {
      if ((this->Item).Object == (FFrameEventTreeElement *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FTextBlockStyle *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar1 = (this->Item).Object;
      pTVar7 = &pFVar1->Event;
      if ((pFVar1->Event).TypeIndex != '\x01') {
        pTVar7 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                  *)0x0;
      }
      if ((pTVar7 == (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                      *)0x0) || ((byte)pTVar7->_padding_ < 6)) {
        pcVar8 = "StateTreeDebugger.Element.Normal";
        pFVar6 = &local_res20;
      }
      else {
        pcVar8 = "StateTreeDebugger.Element.Subdued";
        pFVar6 = &local_res18;
      }
    }
    else {
      pcVar8 = "StateTreeDebugger.Element.Subdued";
      pFVar6 = &local_res10;
    }
  }
  else {
    pcVar8 = "StateTreeDebugger.Element.Bold";
    pFVar6 = &local_res8;
  }
  pFVar6 = ::FName::FName(pFVar6,pcVar8);
  pFVar5 = (FTextBlockStyle *)
           (**(code **)(*(longlong *)pFVar4 + 0xa0))(pFVar4,FTextBlockStyle::TypeName,*pFVar6,0,1);
  if (pFVar5 == (FTextBlockStyle *)0x0) {
    pFVar5 = FTextBlockStyle::GetDefault();
  }
  return pFVar5;
}

// GetEventTooltip @ 14d72edc0

FText * __thiscall
UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip
          (SFrameEventViewRow *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  UObject *pUVar4;
  FString local_28;
  FString *local_18;
  UObject *local_10;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if ((this->Item).Object == (FFrameEventTreeElement *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(((this->Item).Object)->WeakStateTree).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    if ((this->Item).Object == (FFrameEventTreeElement *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FText *)(*pcVar1)();
        return pFVar3;
      }
    }
    local_18 = &local_28;
    local_10 = pUVar4;
    (*(code *)(&
              PTR_VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventViewRow::GetEventTooltip_::__l5::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_&>_152bc2830
              )[(((this->Item).Object)->Event).TypeIndex])(&local_18);
  }
  FText::FromString(__return_storage_ptr__,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

