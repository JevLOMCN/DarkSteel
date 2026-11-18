// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FEditableTextBlock @ 1427b0dc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FEditableTextBlock * __thiscall
FEditableTextBlock::FEditableTextBlock
          (FEditableTextBlock *this,FText *param_1,FText *param_2,FSlateIcon *param_3,
          TAttribute<FText> *param_4,bool param_5,
          TDelegate<void___cdecl(FText_const_&,ETextCommit::Type),FDefaultDelegateUserPolicy>
          *param_6,TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy> *param_7,
          TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy> *param_8)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  ITextData *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TAttribute<FText> *pTVar5;
  FUIAction *pFVar6;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_98;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [40];
  
  local_98.Object = (FUICommandList *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res8 = 0;
  pFVar6 = FUIAction::FUIAction((FUIAction *)local_88);
  FMultiBlock::FMultiBlock((FMultiBlock *)this,pFVar6,(FName)0x0,EditableText,false,&local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
  if ((void *)local_40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
  if ((void *)local_70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  this->_padding_ = (longlong)&___7FEditableTextBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
  }
  (this->LabelOverride).Value.Flags = param_1->Flags;
  (this->LabelOverride).bIsSet = true;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
  }
  pTVar5 = param_4;
  (this->ToolTipOverride).Value.Flags = param_2->Flags;
  (this->ToolTipOverride).bIsSet = true;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  uVar2 = (param_3->StyleSetName).Number;
  uVar3 = (param_3->StyleName).ComparisonIndex.Value;
  uVar4 = (param_3->StyleName).Number;
  (this->IconOverride).StyleSetName.ComparisonIndex.Value =
       (param_3->StyleSetName).ComparisonIndex.Value;
  (this->IconOverride).StyleSetName.Number = uVar2;
  (this->IconOverride).StyleName.ComparisonIndex.Value = uVar3;
  (this->IconOverride).StyleName.Number = uVar4;
  uVar2 = (param_3->SmallStyleName).Number;
  uVar3 = (param_3->StatusOverlayStyleName).ComparisonIndex.Value;
  uVar4 = (param_3->StatusOverlayStyleName).Number;
  (this->IconOverride).SmallStyleName.ComparisonIndex.Value =
       (param_3->SmallStyleName).ComparisonIndex.Value;
  (this->IconOverride).SmallStyleName.Number = uVar2;
  (this->IconOverride).StatusOverlayStyleName.ComparisonIndex.Value = uVar3;
  (this->IconOverride).StatusOverlayStyleName.Number = uVar4;
  (this->TextAttribute).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_4->Value).TextData.Reference;
  (this->TextAttribute).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_4);
  }
  this_00 = &(this->TextAttribute).Getter;
  (this->TextAttribute).Value.Flags = (pTVar5->Value).Flags;
  (this->TextAttribute).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TextAttribute).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->TextAttribute).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,&pTVar5->Getter);
  *(undefined8 *)&this->OnTextCommitted = 0;
  *(undefined8 *)&(this->OnTextCommitted).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextCommitted).field_0x10 = 0;
  TDelegate<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnTextCommitted,param_6);
  *(undefined8 *)&this->OnTextChanged = 0;
  *(undefined8 *)&(this->OnTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTextChanged).field_0x10 = 0;
  TDelegate<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnTextChanged,param_7);
  *(undefined8 *)&this->OnVerifyTextChanged = 0;
  *(undefined8 *)&(this->OnVerifyTextChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnVerifyTextChanged).field_0x10 = 0;
  TDelegate<bool___cdecl(FText_const_&,FText_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnVerifyTextChanged,param_8);
  this->bReadOnly = param_5;
  return this;
}

// ~FEditableTextBlock @ 1427b9050

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FEditableTextBlock::~FEditableTextBlock(FEditableTextBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVerifyTextChanged);
  pvVar1 = *(void **)&(this->OnVerifyTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVerifyTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChanged);
  pvVar1 = *(void **)&(this->OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextCommitted);
  pvVar1 = *(void **)&(this->OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TextAttribute).Getter);
  pvVar1 = *(void **)&(this->TextAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TextAttribute).Getter);
  pIVar2 = (this->TextAttribute).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipOverride).Getter);
  pvVar1 = *(void **)&(this->ToolTipOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipOverride).Getter);
  pIVar2 = (this->ToolTipOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelOverride).Getter);
  pvVar1 = *(void **)&(this->LabelOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelOverride).Getter);
  pIVar2 = (this->LabelOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  return;
}

// ConstructWidget @ 1427f23f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FEditableTextBlock::ConstructWidget
          (FEditableTextBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  FSlateBaseNamedArgs *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FSharedReferencer<1> local_2a0;
  undefined1 *local_298;
  undefined4 local_290;
  undefined1 local_28c;
  undefined1 local_288;
  undefined1 local_280 [8];
  ForAnyElementType FStack_278;
  ulonglong local_270;
  FMemScope local_268;
  undefined8 local_260;
  FSharedReferencer<1> local_258;
  TSharedRef<SEditableTextBlock,1> local_250;
  FDestructionSentinel local_240;
  FSlateBaseNamedArgs local_228;
  
  pFVar6 = (FSlateBaseNamedArgs *)
           SEditableTextBlock::FArguments::FArguments((FArguments *)&local_228);
  local_290 = 1;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_28c = 1;
  local_288 = 1;
  local_270 = 0;
  local_280 = (undefined1  [8])0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<EMouseCursor::Type>_> *)&local_290 != &pFVar6->_Cursor) {
    (pFVar6->_Cursor).Value.TypedValue = Default;
    (pFVar6->_Cursor).Value.bIsSet = true;
  }
  (pFVar6->_Cursor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Cursor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
             (FWriteAccessScope *)&local_240);
  if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_278.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
    local_270 = local_270 & 0xffffffff00000000;
  }
  if (local_240.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
  }
  if (FStack_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_280);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_268,&local_res20,true);
  local_298 = local_res10;
  local_2a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = ::operator_new(0x2f8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSEditableTextBlock___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&SEditableTextBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar7[1].SharedReferenceCount =
         &SEditableTextBlock::_vftable__for__SCompoundWidget__;
    pTVar9 = pTVar7;
  }
  TSharedRef<SEditableTextBlock,1>::TSharedRef<SEditableTextBlock,1>
            (&local_250,(SEditableTextBlock *)(pTVar9 + 1),pTVar9);
  local_258.ReferenceController = local_250.SharedReferenceCount.ReferenceController;
  if (local_250.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_250.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_260 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2a0,&local_258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250.SharedReferenceCount.ReferenceController);
  if ((local_250.Object == (SEditableTextBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_250.Object)->field_0x8,"SEditableTextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SEditableTextBlock.cpp"
             ,0x2a,0x2e8);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res18);
  if ((local_250.Object == (SEditableTextBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_250.Object)->field_0x8,pFVar6);
  if ((local_250.Object == (SEditableTextBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  if (((local_250.Object)->field_0x38 & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)&(local_250.Object)->field_0x8 + 0x228))
                      (&(local_250.Object)->field_0x8);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_1427f26d8;
  }
  bVar5 = 0x20;
LAB_1427f26d8:
  (local_250.Object)->field_0x38 = (local_250.Object)->field_0x38 & 0xdf;
  (local_250.Object)->field_0x38 = (local_250.Object)->field_0x38 | bVar5;
  if ((local_250.Object == (SEditableTextBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  (local_250.Object)->field_0x39 = (local_250.Object)->field_0x39 | 4;
  if ((local_250.Object == (SEditableTextBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  FVar2.ReferenceController = local_2a0.ReferenceController;
  local_2a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_250.Object == (SEditableTextBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)local_250.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  return __return_storage_ptr__;
}

// HasIcon @ 142818550

bool __thiscall FEditableTextBlock::HasIcon(FEditableTextBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  UObject *pUVar2;
  FSlateIcon *pFVar3;
  FSlateBrush *pFVar4;
  FSlateIcon *this_00;
  longlong lVar5;
  bool bVar6;
  FSlateIcon local_48;
  FSlateIcon local_28;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar5 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar5 == 0) {
    pFVar3 = FSlateIcon::FSlateIcon(&local_48);
  }
  else {
    local_48.StyleSetName = *(FName *)(lVar5 + 0x40);
    local_48.StyleName = *(FName *)(lVar5 + 0x48);
    pFVar3 = &local_48;
    local_48.SmallStyleName = *(FName *)(lVar5 + 0x50);
    local_48.StatusOverlayStyleName = *(FName *)(lVar5 + 0x58);
  }
  this_00 = &this->IconOverride;
  local_28.StyleSetName = pFVar3->StyleSetName;
  local_28.StyleName = pFVar3->StyleName;
  local_28.SmallStyleName = pFVar3->SmallStyleName;
  local_28.StatusOverlayStyleName = pFVar3->StatusOverlayStyleName;
  if (((this_00->StyleSetName == (FName)0x0) || ((this->IconOverride).StyleName == (FName)0x0)) &&
     ((this_00 = &local_28, pFVar3->StyleSetName == (FName)0x0 || (pFVar3->StyleName == (FName)0x0))
     )) {
    bVar6 = false;
  }
  else {
    pFVar4 = FSlateIcon::GetIcon(this_00);
    bVar6 = false;
    if (pFVar4->ResourceName == (FName)0x0) {
      pUVar2 = (pFVar4->ResourceObject).field0_0x0.DebugPtr;
      lVar5 = 0;
      if (pUVar2 != (UObject *)0x0) {
        lVar5 = *(longlong *)&pUVar2->field_0x18;
      }
      bVar6 = lVar5 == 0;
    }
    bVar6 = !bVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar6;
}

