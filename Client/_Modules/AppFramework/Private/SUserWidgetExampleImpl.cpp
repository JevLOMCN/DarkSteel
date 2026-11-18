// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// Construct @ 142f7ea10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall SUserWidgetExampleImpl::Construct(SUserWidgetExampleImpl *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FArguments *pFVar6;
  FArguments *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TSharedRef<STextBlock,1> *pTVar10;
  EVerticalAlignment *pEVar11;
  FSlotBase *this_00;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FText local_848;
  bool local_838;
  undefined1 local_830 [8];
  ForAnyElementType FStack_828;
  ulonglong local_820;
  STextBlock *local_818;
  TReferenceControllerBase<1> *pTStack_810;
  bool local_808;
  FText local_800;
  TSharedRef<STextBlock,1> local_7f0;
  FText local_7e0;
  FText local_7d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7c0;
  FTextFormat local_7a8;
  FArguments local_798;
  FArguments local_588;
  
  pFVar6 = SUserWidget::FArguments::FArguments(&local_798);
  pFVar7 = STextBlock::FArguments::FArguments(&local_588);
  local_800.TextData.Reference = (param_1->_Title).TextData.Reference;
  if (local_800.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_800.TextData.Reference + 8))
              (local_800.TextData.Reference,local_res10);
  }
  local_800.Flags = (param_1->_Title).Flags;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_7d0,L"SlateTestSuite",L"UserWidgetExampleTitle",
                      L" Implemented in the .cpp : {0}");
  pFVar9 = FTextFormat::FTextFormat(&local_7a8,pFVar8,Default);
  pFVar8 = FText::Format<FText>(&local_7e0,pFVar9,&local_800);
  FText::FText(&local_848,pFVar8);
  local_838 = true;
  local_820 = 0;
  local_830 = (undefined1  [8])0x0;
  FStack_828.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar7->_Text).Value,&local_848);
  (pFVar7->_Text).bIsSet = local_838;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_830);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_830,
             (FWriteAccessScope *)&local_818);
  if (((int)local_820 != 0) && (FStack_828.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_828.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_828,0,0,0x10);
    local_820 = local_820 & 0xffffffff00000000;
  }
  if (local_808 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_810,(FDestructionSentinel *)&local_818);
  }
  if (FStack_828.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_828.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_830);
  if (local_848.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_848.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_7c0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SUserWidgetTest.cpp"
             ,0x11,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar10 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7c0,&local_7f0,pFVar7);
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_818 = pTVar10->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_Content).Widget.Object = (SWidget *)local_818;
  (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_810 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  puVar1 = &this->field_0x268;
  *(EHorizontalAlignment *)puVar1 = pFVar6->_HAlign;
  pEVar11 = (EVerticalAlignment *)&this->field_0x26c;
  if (puVar1 == (undefined1 *)0x0) {
    pEVar11 = (EVerticalAlignment *)&DAT_00000054;
  }
  this_00 = (FSlotBase *)&this->field_0x238;
  *pEVar11 = pFVar6->_VAlign;
  if (puVar1 == (undefined1 *)0x0) {
    this_00 = (FSlotBase *)&DAT_00000020;
  }
  FSlotBase::DetatchParentFromContent(this_00);
  pTVar3 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar4 = (pFVar6->_Content).Widget.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this_00->Widget).SharedReferenceCount.ReferenceController;
  (this_00->Widget).Object = pSVar4;
  (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7c0._Widget.SharedReferenceCount.ReferenceController);
  if (local_7e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7e0.TextData.Reference + 0x10))();
  }
  if (local_7d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7d0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_798._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_798);
  return;
}

// DoStuff @ 142fb7900

void __thiscall SUserWidgetExampleImpl::DoStuff(SUserWidgetExampleImpl *this)

{
  return;
}

