// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GenerateWidgetForColumn @ 148951b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SVisualizeRTWidget::FRow::GenerateWidgetForColumn
          (FRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FText *pFVar7;
  FRTInfo *pFVar8;
  FArguments *pFVar9;
  FSlot *this_00;
  FArguments *pFVar10;
  TSharedRef<STextBlock,1> *pTVar11;
  TSharedRef<SHorizontalBox,1> *pTVar12;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_1018 [8];
  FText local_1010;
  FLLMScope local_1000;
  FLLMScope local_ffc;
  FLLMScope local_ff8 [2];
  FText local_ff0;
  bool local_fe0;
  undefined1 local_fd8 [8];
  ForAnyElementType FStack_fd0;
  ulonglong local_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined1 local_fb0;
  undefined1 local_fa8 [8];
  ForAnyElementType FStack_fa0;
  ulonglong local_f98;
  undefined8 local_f90;
  FSharedReferencer<1> local_f88;
  undefined1 local_f80 [8];
  FSlot *local_f78;
  FName local_f70;
  FMemScope local_f68;
  FName local_f60;
  FMemScope local_f58;
  FName local_f50;
  FMemScope local_f48;
  FDestructionSentinel local_f40;
  FDestructionSentinel local_f28;
  TAttribute<FText> local_f10;
  FText local_ee0;
  FText local_ed0;
  FText local_ec0;
  FText local_eb0;
  TSharedRef<SHorizontalBox,1> local_ea0;
  TSharedRef<STextBlock,1> local_e90;
  TSharedRef<STextBlock,1> local_e80;
  FText local_e70;
  FText local_e60;
  FText local_e50;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_e40;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_e28;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_e10;
  FText local_df8;
  FText local_de8;
  FText local_dd8;
  undefined8 *local_dc8;
  STextBlock *local_dc0;
  FSharedReferencer<1> local_db8 [3];
  undefined1 local_da0;
  undefined1 local_d98 [40];
  FSlotArgumentsMixin local_d70;
  FArguments local_ce0;
  FArguments local_ad8;
  FArguments local_580;
  
  FText::FText(&local_1010);
  FVar1 = *param_1;
  if (FVar1 == ColumnName) {
    if (((this->Info).Object == (FRTInfo *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar6;
    }
    pFVar7 = FText::FromString(&local_e60,&((this->Info).Object)->Name);
    FText::operator=(&local_1010,pFVar7);
  }
  else if (FVar1 == ColumnWidth) {
    if (((this->Info).Object == (FRTInfo *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar6;
    }
    pFVar7 = FText::FromString(&local_e50,&((this->Info).Object)->Width);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_e50.TextData.Reference;
  }
  else if (FVar1 == ColumnDepth) {
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_df8,&pFVar8->Depth);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_df8.TextData.Reference;
  }
  else if (FVar1 == ColumnHeight) {
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_de8,&pFVar8->Height);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_de8.TextData.Reference;
  }
  else if (FVar1 == ColumnFormat) {
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_dd8,&pFVar8->Format);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_dd8.TextData.Reference;
  }
  else if (FVar1 == ColumnDimensions) {
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_ee0,&pFVar8->Dimensions);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_ee0.TextData.Reference;
  }
  else if (FVar1 == ColumnSize) {
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_ed0,&pFVar8->Size);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_ed0.TextData.Reference;
  }
  else if (FVar1 == ColumnType) {
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_ec0,&pFVar8->Type);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_ec0.TextData.Reference;
  }
  else {
    if (FVar1 != ColumnNumber) goto LAB_148951dff;
    pFVar8 = TSharedPtr<FRTInfo,1>::operator->(&this->Info);
    pFVar7 = FText::FromString(&local_eb0,&pFVar8->Number);
    FText::operator=(&local_1010,pFVar7);
    local_e60.TextData.Reference = local_eb0.TextData.Reference;
  }
  if (local_e60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e60.TextData.Reference + 0x10))();
  }
LAB_148951dff:
  bVar5 = FText::IsEmpty(&local_1010);
  if (bVar5) {
    pFVar10 = STextBlock::FArguments::FArguments(&local_580);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_e70,L"VisualizeRenderTargets",L"UnknownColumnName",L"N/A");
    FText::FText(&local_ff0,pFVar7);
    local_fe0 = true;
    local_fc8 = 0;
    local_fd8 = (undefined1  [8])0x0;
    FStack_fd0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar10->_Text).Value,&local_ff0);
    (pFVar10->_Text).bIsSet = local_fe0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fd8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fd8,
               (FWriteAccessScope *)&local_f28);
    if (((int)local_fc8 != 0) && (FStack_fd0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_fd0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fd0,0,0,0x10);
      local_fc8 = local_fc8 & 0xffffffff00000000;
    }
    if (local_f28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f28.Accessor,&local_f28);
    }
    if (FStack_fd0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_fd0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_fd8);
    if (local_ff0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_ff0.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_ff8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_f50 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_f48,&local_f50,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_e10,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\VisualizeRT.cpp"
               ,0x145,local_1018);
    FMemScope::~FMemScope(&local_f48);
    FLLMScope::~FLLMScope(local_ff8);
    pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_e10,&local_e80,pFVar10);
    __return_storage_ptr__->Object = (SWidget *)pTVar11->Object;
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e80.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e10._Widget.SharedReferenceCount.ReferenceController);
    if (local_e70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e70.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
  }
  else {
    pFVar9 = SHorizontalBox::FArguments::FArguments(&local_ce0);
    this_00 = ::operator_new(0x58);
    local_f78 = (FSlot *)0x0;
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
      local_f78 = SHorizontalBox::FSlot::FSlot(this_00);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_dc8,(FSlot *)&local_f78);
    local_fb0 = 1;
    local_f98 = 0;
    local_fc0 = ___xmm_40000000400000004000000040000000;
    uStack_fb8 = _UNK_15076ba38;
    local_da0 = 1;
    local_fa8 = (undefined1  [8])0x0;
    FStack_fa0.Data = (FScriptContainerElement *)0x0;
    local_db8[1].ReferenceController =
         (TReferenceControllerBase<1> *)___xmm_40000000400000004000000040000000;
    local_db8[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_15076ba38;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d98,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fa8,
               (FWriteAccessScope *)&local_f40);
    if (((int)local_f98 != 0) && (FStack_fa0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_fa0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fa0,0,0,0x10);
      local_f98 = local_f98 & 0xffffffff00000000;
    }
    if (local_f40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f40.Accessor,&local_f40);
    }
    if (FStack_fa0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_fa0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_fa8);
    pFVar10 = STextBlock::FArguments::FArguments(&local_ad8);
    local_f10.Value.TextData.Reference = local_1010.TextData.Reference;
    if (local_1010.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1010.TextData.Reference + 8))
                (local_1010.TextData.Reference,local_f80);
    }
    local_f10.Value.Flags = local_1010.Flags;
    local_f10.Getter._16_8_ = 0;
    local_f10.bIsSet = true;
    local_f10.Getter._0_8_ = 0;
    local_f10.Getter._8_8_ = 0;
    pFVar10 = STextBlock::FArguments::Text(pFVar10,&local_f10);
    FLLMScope::FLLMScope(&local_1000,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_f70 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_f68,&local_f70,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_e28,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\VisualizeRT.cpp"
               ,0x140,local_res18);
    FMemScope::~FMemScope(&local_f68);
    FLLMScope::~FLLMScope(&local_1000);
    pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_e28,&local_e90,pFVar10);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    local_dc0 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f90 = 0;
    local_f88.ReferenceController = pTVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_db8,&local_f88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f88.ReferenceController);
    pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,(FSlotArguments *)&local_dc8);
    FLLMScope::FLLMScope(&local_ffc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_f60 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_f58,&local_f60,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_e40,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\VisualizeRT.cpp"
               ,0x13d,local_res20);
    FMemScope::~FMemScope(&local_f58);
    FLLMScope::~FLLMScope(&local_ffc);
    pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_e40,&local_ea0,pFVar9);
    __return_storage_ptr__->Object = (SWidget *)pTVar12->Object;
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ea0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e40._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e90.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e28._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_ad8);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_d70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d98);
    if ((void *)local_d98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_d98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_d98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_db8[0].ReferenceController);
    if (local_dc8 != (undefined8 *)0x0) {
      (**(code **)*local_dc8)(local_dc8,1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_ce0._Slots.AllocatorInstance.Data,local_ce0._Slots.ArrayNum);
    if ((FSlotArguments *)local_ce0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_ce0._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_ce0);
  }
  if (local_1010.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1010.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

