// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FButtonRowBlock @ 1427b0a70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FButtonRowBlock * __thiscall
FButtonRowBlock::FButtonRowBlock
          (FButtonRowBlock *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          FSlateIcon *param_3,FUIAction *param_4,EUserInterfaceActionType param_5)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  FName FVar3;
  FName FVar4;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_28;
  
  local_res8 = 0;
  local_28.Object = (FUICommandList *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_4,(FName)0x0,ButtonRow,false,&local_28);
  this->_padding_ = (longlong)&___7FButtonRowBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_1->Value).Flags;
  (this->LabelOverride).bIsSet = param_1->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_1->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_2->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  FVar3 = param_3->StyleName;
  (this->IconOverride).StyleSetName = param_3->StyleSetName;
  (this->IconOverride).StyleName = FVar3;
  FVar3 = param_3->SmallStyleName;
  FVar4 = param_3->StatusOverlayStyleName;
  this->UserInterfaceActionTypeOverride = param_5;
  (this->IconOverride).SmallStyleName = FVar3;
  (this->IconOverride).StatusOverlayStyleName = FVar4;
  return this;
}

// FButtonRowBlock @ 1427b0bb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FButtonRowBlock * __thiscall
FButtonRowBlock::FButtonRowBlock
          (FButtonRowBlock *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,FSlateIcon *param_5)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  FName FVar3;
  TAttribute<FText> *pTVar4;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_38;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  
  local_38.Object = param_2->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_res8 = 0;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_28,&local_38,(FName)0x0,ButtonRow,false);
  this->_padding_ = (longlong)&___7FButtonRowBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_3->Value).Flags;
  (this->LabelOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  pTVar4 = param_4;
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_4->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (pTVar4->Value).Flags;
  (this->ToolTipOverride).bIsSet = pTVar4->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar4->Getter);
  FVar3 = param_5->StyleName;
  (this->IconOverride).StyleSetName = param_5->StyleSetName;
  (this->IconOverride).StyleName = FVar3;
  FVar3 = param_5->StatusOverlayStyleName;
  (this->IconOverride).SmallStyleName = param_5->SmallStyleName;
  (this->IconOverride).StatusOverlayStyleName = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ConstructWidget @ 1427f1c90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FButtonRowBlock::ConstructWidget
          (FButtonRowBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FSlateBaseNamedArgs *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
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
  TSharedRef<SButtonRowBlock,1> local_250;
  FDestructionSentinel local_240;
  FSlateBaseNamedArgs local_228;
  
  pFVar7 = (FSlateBaseNamedArgs *)SButtonRowBlock::FArguments::FArguments((FArguments *)&local_228);
  local_290 = 1;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_28c = 1;
  local_288 = 1;
  local_270 = 0;
  local_280 = (undefined1  [8])0x0;
  FStack_278.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<EMouseCursor::Type>_> *)&local_290 != &pFVar7->_Cursor) {
    (pFVar7->_Cursor).Value.TypedValue = Default;
    (pFVar7->_Cursor).Value.bIsSet = true;
  }
  (pFVar7->_Cursor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Cursor).Getter,
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
  pTVar8 = ::operator_new(0x308);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSButtonRowBlock___00_SharedPointerInternals__6B_;
    memset(pTVar8 + 1,0,0x2f8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar8 + 1));
    pTVar8[1]._padding_ = (longlong)&SButtonRowBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar8[1].SharedReferenceCount =
         &SButtonRowBlock::_vftable__for__SCompoundWidget__;
    pTVar8[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x30]._padding_ = 0;
    pTVar10 = pTVar8;
  }
  TSharedRef<SButtonRowBlock,1>::TSharedRef<SButtonRowBlock,1>
            (&local_250,(SButtonRowBlock *)(pTVar10 + 1),pTVar10);
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
  if ((local_250.Object == (SButtonRowBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_250.Object)->_padding_,"SButtonRowBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SButtonRowBlock.cpp"
             ,0x34,0x2f8);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res18);
  if ((local_250.Object == (SButtonRowBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_250.Object)->_padding_,pFVar7);
  SButtonRowBlock::Construct(local_250.Object,(FArguments *)pFVar7);
  if ((local_250.Object == (SButtonRowBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  if (((local_250.Object)->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)((local_250.Object)->_padding_ + 0x228))(&(local_250.Object)->_padding_);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_1427f1f91;
  }
  bVar6 = 0x20;
LAB_1427f1f91:
  *(byte *)&(local_250.Object)->_padding_ = (byte)(local_250.Object)->_padding_ & 0xdf;
  *(byte *)&(local_250.Object)->_padding_ = (byte)(local_250.Object)->_padding_ | bVar6;
  if ((local_250.Object == (SButtonRowBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  pbVar1 = (byte *)((longlong)&(local_250.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_250.Object == (SButtonRowBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  FVar3.ReferenceController = local_2a0.ReferenceController;
  local_2a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_250.Object == (SButtonRowBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar2)();
    return pTVar9;
  }
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)local_250.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  return __return_storage_ptr__;
}

// HasIcon @ 142818370

/* WARNING: Removing unreachable block (ram,0x0001428183a8) */

bool __thiscall FButtonRowBlock::HasIcon(FButtonRowBlock *this)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined1 uVar4;
  FSlateBrush *pFVar5;
  longlong lVar6;
  FSlateIcon *this_00;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uStackX_c;
  
  this_00 = &this->IconOverride;
  bVar8 = false;
  if ((this_00->StyleSetName == (FName)0x0) || ((this->IconOverride).StyleName == (FName)0x0)) {
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    lVar6 = this->_padding_;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    if (lVar6 != 0) {
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      lVar6 = this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar6 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar4 = (*pcVar3)();
        return (bool)uVar4;
      }
      this_00 = (FSlateIcon *)(lVar6 + 0x40);
      bVar8 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  else {
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if ((this_00->StyleSetName != (FName)0x0) && (this_00->StyleName != (FName)0x0)) {
    pFVar5 = FSlateIcon::GetIcon(this_00);
    bVar8 = false;
    if (pFVar5->ResourceName == (FName)0x0) {
      pUVar1 = (pFVar5->ResourceObject).field0_0x0.DebugPtr;
      lVar6 = 0;
      if (pUVar1 != (UObject *)0x0) {
        lVar6 = *(longlong *)&pUVar1->field_0x18;
      }
      bVar8 = lVar6 == 0;
    }
    return !bVar8;
  }
  return false;
}

