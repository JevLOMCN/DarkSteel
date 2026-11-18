// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FWidgetBlock @ 1427b5920

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FWidgetBlock * __thiscall
FWidgetBlock::FWidgetBlock
          (FWidgetBlock *this,TSharedRef<SWidget,1> *param_1,FText *param_2,
          TAttribute<FText> *param_3,FMenuEntryStyleParams *param_4,TAttribute<FSlateIcon> *param_5)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  FName FVar3;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_38;
  TSharedPtr<FUICommandInfo_const_,1> local_28;
  
  local_res8 = 0;
  local_38.Object = (FUICommandList *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.Object = (FUICommandInfo *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_28,&local_38,(FName)0x0,Widget,false);
  this->_padding_ = (longlong)&___7FWidgetBlock__6B_;
  (this->ContentWidget).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ContentWidget).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Label).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->TextData).Reference;
  (this->Label).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  (this->Label).Flags = param_2->Flags;
  (this->ToolTipText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->ToolTipText).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  this_00 = &(this->ToolTipText).Getter;
  (this->ToolTipText).Value.Flags = (param_3->Value).Flags;
  (this->ToolTipText).bIsSet = param_3->bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ToolTipText).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipText).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,&param_3->Getter);
  this_01 = &(this->Icon).Getter;
  FVar3 = (param_5->Value).StyleName;
  (this->Icon).Value.StyleSetName = (param_5->Value).StyleSetName;
  (this->Icon).Value.StyleName = FVar3;
  FVar3 = (param_5->Value).StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_5->Value).SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar3;
  (this->Icon).bIsSet = param_5->bIsSet;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->Icon).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Icon).Getter.field_0x10 = 0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_01,&param_5->Getter);
  FMenuEntryStyleParams::FMenuEntryStyleParams(&this->StyleParams,param_4);
  *(undefined8 *)&this->CustomMenuDelegate = 0;
  *(undefined8 *)&(this->CustomMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomMenuDelegate).field_0x10 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FWidgetBlock @ 1427ba200

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FWidgetBlock::~FWidgetBlock(FWidgetBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate);
  pvVar1 = *(void **)&(this->CustomMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CustomMenuDelegate);
  FMenuEntryStyleParams::~FMenuEntryStyleParams(&this->StyleParams);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter);
  pvVar1 = *(void **)&(this->Icon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Icon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipText).Getter);
  pvVar1 = *(void **)&(this->ToolTipText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipText).Getter);
  pIVar2 = (this->ToolTipText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->Label).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentWidget).SharedReferenceCount.ReferenceController);
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  return;
}

// ConstructWidget @ 1427f4430

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FWidgetBlock::ConstructWidget
          (FWidgetBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

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
  TSharedRef<SWidgetBlock,1> local_250;
  FDestructionSentinel local_240;
  FSlateBaseNamedArgs local_228;
  
  pFVar6 = (FSlateBaseNamedArgs *)SWidgetBlock::FArguments::FArguments((FArguments *)&local_228);
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
         &___7__TIntrusiveReferenceController_VSWidgetBlock___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&SWidgetBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar7[1].SharedReferenceCount =
         &SWidgetBlock::_vftable__for__SCompoundWidget__;
    pTVar9 = pTVar7;
  }
  TSharedRef<SWidgetBlock,1>::TSharedRef<SWidgetBlock,1>
            (&local_250,(SWidgetBlock *)(pTVar9 + 1),pTVar9);
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
  if ((local_250.Object == (SWidgetBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_250.Object)->field_0x8,"SWidgetBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SWidgetBlock.cpp"
             ,0x31,0x2e8);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res18);
  if ((local_250.Object == (SWidgetBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_250.Object)->field_0x8,pFVar6);
  if ((local_250.Object == (SWidgetBlock *)0x0) &&
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
    if (cVar4 == '\0') goto LAB_1427f4718;
  }
  bVar5 = 0x20;
LAB_1427f4718:
  (local_250.Object)->field_0x38 = (local_250.Object)->field_0x38 & 0xdf;
  (local_250.Object)->field_0x38 = (local_250.Object)->field_0x38 | bVar5;
  if ((local_250.Object == (SWidgetBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  (local_250.Object)->field_0x39 = (local_250.Object)->field_0x39 | 4;
  if ((local_250.Object == (SWidgetBlock *)0x0) &&
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
  if ((local_250.Object == (SWidgetBlock *)0x0) &&
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

// CreateMenuEntry @ 1427fe620

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FWidgetBlock::CreateMenuEntry(FWidgetBlock *this,FMenuBuilder *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  FText *pFVar5;
  longlong *plVar6;
  ITextData *pIVar7;
  ITextData *pIVar8;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FDestructionSentinel local_1a8;
  undefined1 local_190 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  ForAnyElementType FStack_180;
  ulonglong local_178;
  undefined1 local_170 [80];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  ulonglong local_110;
  float local_108;
  bool local_104;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  FOptionalSize local_e8;
  bool local_e4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  ulonglong local_d0;
  FOptionalSize local_c8;
  bool local_c4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  undefined1 local_a8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  FText local_78;
  undefined1 local_68 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  plVar6 = (longlong *)0x0;
  local_res8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate,
             (FReadAccessScope *)&local_1a8);
  if ((*(int *)&(this->CustomMenuDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CustomMenuDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_1a8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate
                 ,(FReadAccessScope *)&local_1a8);
      if (*(int *)&(this->CustomMenuDelegate).field_0x10 != 0) {
        plVar6 = *(longlong **)&(this->CustomMenuDelegate).field_0x8;
      }
      (**(code **)(*plVar6 + 0x60))(plVar6,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_1a8);
      return;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_1a8);
  bVar4 = FText::IsEmpty(&this->Label);
  if (bVar4) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"WidgetBlock",L"CustomControl",L"Custom Control");
    pIVar8 = (ITextData *)CONCAT44(uStackX_c,local_res8);
    bVar2 = false;
    bVar4 = true;
    pIVar7 = (pFVar5->TextData).Reference;
  }
  else {
    pIVar7 = (this->Label).TextData.Reference;
    if (pIVar7 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_res8);
    }
    bVar2 = true;
    bVar4 = false;
    pIVar8 = pIVar7;
  }
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_res8);
  }
  if (bVar4) {
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if ((bVar2) && (pIVar8 != (ITextData *)0x0)) {
    (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
  }
  local_e8.Size = FOptionalSize::Unspecified;
  local_110 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_178 = 0;
  local_c8.Size = FOptionalSize::Unspecified;
  local_170._4_4_ = HAlign_Fill;
  local_170[0xc] = false;
  local_170[0x14] = false;
  local_170[0x1c] = false;
  local_170[0x24] = false;
  local_170[0x2c] = false;
  local_170[0x34] = false;
  local_170[0x3c] = false;
  local_170[0x44] = false;
  local_170._72_4_ = 0.0;
  local_170[0x4c] = false;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  local_108 = 0.0;
  local_104 = false;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_f8.Data = (FScriptContainerElement *)0x0;
  local_e4 = false;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_c4 = false;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_170[0] = true;
  local_190[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_190[1] = false;
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_180.Data = (FScriptContainerElement *)0x0;
  FSlateIcon::FSlateIcon((FSlateIcon *)local_68);
  local_68[0x20] = false;
  local_30 = 0;
  local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::FText(&local_78);
  FText::FText((FText *)local_a8,pFVar5);
  local_a8[0x10] = true;
  local_80 = 0;
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::GetEmpty();
  FMenuBuilder::AddWidget
            (param_1,&this->ContentWidget,pFVar5,(FMenuEntryStyleParams *)local_170,true,
             (TAttribute<FText> *)local_a8,(TAttribute<FSlateIcon> *)local_68,
             (TAttribute<EVisibility> *)local_190);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_1a8);
  if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_40,(FWriteAccessScope *)&local_1a8);
  if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
    local_30 = local_30 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_1a8);
  if (((int)local_178 != 0) && (FStack_180.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_180.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_180,0,0,0x10);
    local_178 = local_178 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_1a8);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)&local_1a8);
  if (((int)local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_1a8);
  if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_1a8);
  if (((int)local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = local_110 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  }
  return;
}

// GetAlignmentOverrides @ 14280d100

bool __thiscall
FWidgetBlock::GetAlignmentOverrides(FWidgetBlock *this,FMenuEntryStyleParams *param_1)

{
  TOptional<FSizeParam::ESizeRule> *pTVar1;
  TOptional<float> *pTVar2;
  TOptional<EVerticalAlignment> *pTVar3;
  TOptional<EVerticalAlignment> local_18 [2];
  
  param_1->HorizontalAlignment = (this->StyleParams).HorizontalAlignment;
  local_18[0].TypedValue = VAlign_Fill;
  pTVar3 = local_18;
  if ((this->StyleParams).VerticalAlignment.bIsSet != false) {
    pTVar3 = &(this->StyleParams).VerticalAlignment;
  }
  if (pTVar3 != &param_1->VerticalAlignment) {
    (param_1->VerticalAlignment).TypedValue = pTVar3->TypedValue;
    (param_1->VerticalAlignment).bIsSet = true;
  }
  if ((this->StyleParams).SizeRule.bIsSet == false) {
    if (((this->StyleParams).HorizontalAlignment == HAlign_Fill) &&
       ((TOptional<FSizeParam::ESizeRule> *)&local_18[0].bIsSet != &param_1->SizeRule)) {
      (param_1->SizeRule).TypedValue = SizeRule_Auto;
      (param_1->SizeRule).bIsSet = true;
    }
  }
  else {
    pTVar1 = &(this->StyleParams).SizeRule;
    if (pTVar1 != &param_1->SizeRule) {
      (param_1->SizeRule).TypedValue = pTVar1->TypedValue;
      (param_1->SizeRule).bIsSet = true;
    }
    pTVar2 = &(this->StyleParams).FillSize;
    if (pTVar2 != &param_1->FillSize) {
      if ((this->StyleParams).FillSize.bIsSet == false) {
        if ((param_1->FillSize).bIsSet != false) {
          (param_1->FillSize).bIsSet = false;
        }
      }
      else {
        (param_1->FillSize).TypedValue = pTVar2->TypedValue;
        (param_1->FillSize).bIsSet = true;
      }
    }
    pTVar2 = &(this->StyleParams).FillSizeMin;
    if (pTVar2 != &param_1->FillSizeMin) {
      if ((this->StyleParams).FillSizeMin.bIsSet == false) {
        if ((param_1->FillSizeMin).bIsSet != false) {
          (param_1->FillSizeMin).bIsSet = false;
        }
      }
      else {
        (param_1->FillSizeMin).TypedValue = pTVar2->TypedValue;
        (param_1->FillSizeMin).bIsSet = true;
      }
    }
  }
  (param_1->MinimumSize).Value = (this->StyleParams).MinimumSize.Value;
  (param_1->MinimumSize).bIsSet = (this->StyleParams).MinimumSize.bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(param_1->MinimumSize).Getter,&(this->StyleParams).MinimumSize.Getter);
  (param_1->MaximumSize).Value = (this->StyleParams).MaximumSize.Value;
  (param_1->MaximumSize).bIsSet = (this->StyleParams).MaximumSize.bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(param_1->MaximumSize).Getter,&(this->StyleParams).MaximumSize.Getter);
  return true;
}

// SetCustomMenuDelegate @ 142834f00

void __thiscall
FWidgetBlock::SetCustomMenuDelegate
          (FWidgetBlock *this,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->CustomMenuDelegate,param_1);
  return;
}

