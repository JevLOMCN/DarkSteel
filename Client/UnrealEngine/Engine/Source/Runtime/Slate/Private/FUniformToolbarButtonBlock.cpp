// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FUniformToolbarButtonBlock @ 1427b58c0

FUniformToolbarButtonBlock * __thiscall
FUniformToolbarButtonBlock::FUniformToolbarButtonBlock
          (FUniformToolbarButtonBlock *this,FButtonArgs *param_1)

{
  FButtonArgs *pFVar1;
  FButtonArgs local_1d8;
  
  pFVar1 = FButtonArgs::FButtonArgs(&local_1d8,param_1);
  FToolBarButtonBlock::FToolBarButtonBlock((FToolBarButtonBlock *)this,pFVar1);
  *(undefined ***)this = &___7FUniformToolbarButtonBlock__6B_;
  FButtonArgs::~FButtonArgs(param_1);
  return this;
}

// ConstructWidget @ 1427f4120

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FUniformToolbarButtonBlock::ConstructWidget
          (FUniformToolbarButtonBlock *this,
          TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined4 uVar2;
  SUniformToolbarButtonBlock *pSVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar7;
  TSharedRef<SUniformToolbarButtonBlock,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TEnumAsByte<EVisibility::Private> local_2d8 [8];
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined1 local_2c8;
  undefined1 local_2c0 [8];
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs> local_2a8;
  undefined8 local_290;
  FSharedReferencer<1> local_288;
  TSharedRef<SUniformToolbarButtonBlock,1> local_280;
  FDestructionSentinel local_270;
  TSharedRef<SUniformToolbarButtonBlock,1> local_258;
  FArguments local_248;
  
  pFVar5 = SToolBarButtonBlock::FArguments::FArguments(&local_248);
  if ((TOptional<EVisibility> *)local_2d8 != &pFVar5->_LabelVisibility) {
    (pFVar5->_LabelVisibility).TypedValue.Value.Value = (uchar)EVisibility::Visible.Value.Value;
    (pFVar5->_LabelVisibility).bIsSet = true;
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pFVar5->_IsFocusable = (bool)this->field_0x2d9;
  pFVar5->_ForceSmallIcons = true;
  uVar2 = *(undefined4 *)&this->field_0xb0;
  (pFVar5->_TutorialHighlightName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->field_0xac;
  (pFVar5->_TutorialHighlightName).Number = uVar2;
  local_2d0 = 1;
  local_2cc = 1;
  local_2c8 = 1;
  local_2b0 = 0;
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_2d0 != &pFVar5->_padding_) {
    *(undefined4 *)&pFVar5->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar5->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar5->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
             (FWriteAccessScope *)&local_270);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_2a8._RequiredArgs = local_res8;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x350);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSUniformToolbarButtonBlock___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x340);
    SToolBarButtonBlock::SToolBarButtonBlock((SToolBarButtonBlock *)(pTVar6 + 1));
    pTVar6[1]._padding_ =
         (longlong)&SUniformToolbarButtonBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &SUniformToolbarButtonBlock::_vftable__for__SCompoundWidget__;
    pTVar9 = pTVar6;
  }
  TSharedRef<SUniformToolbarButtonBlock,1>::TSharedRef<SUniformToolbarButtonBlock,1>
            (&local_280,(SUniformToolbarButtonBlock *)(pTVar9 + 1),pTVar9);
  local_288.ReferenceController = local_280.SharedReferenceCount.ReferenceController;
  if (local_280.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8._Widget.Object = local_280.Object;
  local_290 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2a8._Widget.SharedReferenceCount,&local_288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  pSVar3 = local_2a8._Widget.Object;
  if ((local_2a8._Widget.Object == (SUniformToolbarButtonBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar7;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar3->field_0x8,"SUniformToolbarButtonBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SUniformToolbarButtonBlock.cpp"
             ,0xc,0x340);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SUniformToolbarButtonBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2a8,&local_258,pFVar5);
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)pTVar8->Object;
  pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  return __return_storage_ptr__;
}

