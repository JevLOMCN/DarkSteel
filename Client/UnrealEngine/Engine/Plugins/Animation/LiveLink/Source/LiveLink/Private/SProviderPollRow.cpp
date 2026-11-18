// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// Construct @ 14d02e140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SProviderPollRow::Construct
          (SProviderPollRow *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FProviderPollResult *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  undefined1 local_3a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a0;
  ForAnyElementType FStack_398;
  ulonglong local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined1 local_370 [8];
  ForAnyElementType FStack_368;
  ulonglong local_360;
  FDestructionSentinel local_358;
  FDestructionSentinel local_340;
  FProviderPollResult *local_328;
  TReferenceControllerBase<1> *pTStack_320;
  FText local_318;
  FArguments local_308;
  
  pTVar1 = (param_1->_PollResultPtr).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->_PollResultPtr).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_328 = (this->PollResultPtr).Object;
  pTStack_320 = (this->PollResultPtr).SharedReferenceCount.ReferenceController;
  (this->PollResultPtr).Object = pFVar2;
  (this->PollResultPtr).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_320);
  pFVar8 = STableRow<TSharedPtr<FProviderPollResult,1>_>::FArguments::FArguments(&local_308);
  uVar5 = _UNK_15076b1f8;
  local_378 = 1;
  local_360 = 0;
  local_388 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_380 = _UNK_15076b1f8;
  local_370 = (undefined1  [8])0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  uVar4 = _UNK_15076b1f4;
  (pFVar8->_Padding).Value.Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  uVar6 = _UNK_15076b1f8;
  (pFVar8->_Padding).Value.Top = (float)uVar4;
  _UNK_15076b1f8 = (undefined4)uVar5;
  _UNK_15076b1fc = SUB84(uVar5,4);
  uVar4 = _UNK_15076b1fc;
  (pFVar8->_Padding).Value.Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar6;
  (pFVar8->_Padding).Value.Bottom = (float)uVar4;
  (pFVar8->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
             (FWriteAccessScope *)&local_358);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_370);
  SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *)this,pFVar8,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_308._OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_308);
  if ((this->PollResultPtr).Object == (FProviderPollResult *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->PollResultPtr).Object)->bIsValidProvider == false) {
    local_3a8[0] = false;
    local_3a8[1] = true;
    local_390 = 0;
    local_3a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_398.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&this->_padding_ + 2),(SWidget *)&this->_padding_,
             (TAttribute<bool> *)local_3a8,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_3a0,(FWriteAccessScope *)&local_340);
    if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_398.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
      local_390 = local_390 & 0xffffffff00000000;
    }
    if (local_340.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
    }
    if (FStack_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_398.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a0.AccessDetector);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_318,L"LiveLinkMessageBusSourceEditor",L"InvalidProvider",
                        L"This provider is invalid because it was built with an older version of Unreal Engine. You must upgrade your provider to UE5 to continue using it."
                       );
    SWidget::SetToolTipText((SWidget *)&this->_padding_,pFVar9);
    if (local_318.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
    }
  }
  return;
}

// GenerateWidgetForColumn @ 14d046480

TSharedRef<SWidget,1> * __thiscall
SProviderPollRow::GenerateWidgetForColumn
          (SProviderPollRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FText *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_bc8;
  FLLMScope local_bc4;
  FName local_bc0;
  FMemScope local_bb8;
  FName local_bb0;
  FMemScope local_ba8;
  TAttribute<FText> local_ba0;
  TAttribute<FText> local_b70;
  TSharedRef<STextBlock,1> local_b40;
  FText local_b30;
  TSharedRef<STextBlock,1> local_b20;
  FText local_b10;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_b00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ae8;
  FArguments local_ad0;
  FArguments local_578;
  
  if (*param_1 == ProviderPollUI::TypeColumnName) {
    pFVar6 = STextBlock::FArguments::FArguments(&local_ad0);
    if ((this->PollResultPtr).Object == (FProviderPollResult *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar8 = FText::FromString(&local_b30,&((this->PollResultPtr).Object)->Name);
    FText::FText(&local_ba0.Value,pFVar8);
    local_ba0.bIsSet = true;
    local_ba0.Getter._16_8_ = 0;
    local_ba0.Getter._0_8_ = 0;
    local_ba0.Getter._8_8_ = 0;
    pFVar6 = STextBlock::FArguments::Text(pFVar6,&local_ba0);
    FLLMScope::FLLMScope(&local_bc8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_bc0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_bb8,&local_bc0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_b00,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
               ,0x3d,local_res18);
    FMemScope::~FMemScope(&local_bb8);
    FLLMScope::~FLLMScope(&local_bc8);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_b00,&local_b40,pFVar6);
    __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b00._Widget.SharedReferenceCount.ReferenceController);
    if (local_b30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b30.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_ad0);
  }
  else if (*param_1 == ProviderPollUI::MachineColumnName) {
    pFVar6 = STextBlock::FArguments::FArguments(&local_578);
    if ((this->PollResultPtr).Object == (FProviderPollResult *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidget,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar8 = FText::FromString(&local_b10,&((this->PollResultPtr).Object)->MachineName);
    FText::FText(&local_b70.Value,pFVar8);
    local_b70.bIsSet = true;
    local_b70.Getter._16_8_ = 0;
    local_b70.Getter._0_8_ = 0;
    local_b70.Getter._8_8_ = 0;
    pFVar6 = STextBlock::FArguments::Text(pFVar6,&local_b70);
    FLLMScope::FLLMScope(&local_bc4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_bb0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_ba8,&local_bb0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_ae8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\SLiveLinkMessageBusSourceFactory.cpp"
               ,0x42,local_res20);
    FMemScope::~FMemScope(&local_ba8);
    FLLMScope::~FLLMScope(&local_bc4);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_ae8,&local_b20,pFVar6);
    __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b20.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ae8._Widget.SharedReferenceCount.ReferenceController);
    if (local_b10.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b10.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_578);
  }
  else {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

