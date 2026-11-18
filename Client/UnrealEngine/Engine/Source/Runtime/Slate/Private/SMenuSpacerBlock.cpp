// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// BuildMultiBlockWidget @ 1427ddb50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMenuSpacerBlock::BuildMultiBlockWidget(SMenuSpacerBlock *this,ISlateStyle *param_1,FName *param_2)

{
  undefined1 *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SVerticalBox *pSVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  FArguments *pFVar8;
  FSlot *this_01;
  FSlotArguments *pFVar9;
  FArguments *pFVar10;
  FSlateBrush *pFVar11;
  TSharedRef<SSeparator,1> *pTVar12;
  TSharedRef<SVerticalBox,1> *pTVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  float *pfVar16;
  SMultiBoxWidget *pSVar17;
  SMultiBoxWidget *pSVar18;
  SMultiBoxWidget *this_02;
  FSlotArguments *pFVar19;
  bool bVar20;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_6a8 [2];
  SSeparator *local_6a0;
  FSharedReferencer<1> local_698;
  undefined8 local_690;
  TReferenceControllerBase<1> *pTStack_688;
  uchar local_680;
  undefined1 local_67f;
  undefined1 local_678 [8];
  void *pvStack_670;
  undefined8 local_668;
  undefined1 local_660 [8];
  FSlotArguments *local_658;
  FName local_650;
  FMemScope local_648;
  FName local_640;
  FMemScope local_638;
  undefined1 local_630 [16];
  undefined1 local_620;
  undefined1 local_618 [8];
  void *pvStack_610;
  undefined8 local_608;
  FText local_600;
  TSharedPtr<SWidget,1> local_5f0;
  TAttribute<EVisibility> local_5e0;
  TSharedRef<SVerticalBox,1> local_5c0;
  TSharedRef<SSeparator,1> local_5b0;
  undefined1 local_5a0 [8];
  TReferenceControllerBase<1> *local_598;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_590;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_578;
  undefined8 *local_560 [2];
  TReferenceControllerBase<1> *local_550;
  undefined1 local_530 [40];
  FSlotArgumentsMixin local_508;
  FArguments local_478;
  undefined1 local_270 [544];
  undefined1 local_50 [24];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pfVar16 = (float *)(**(code **)((longlong)*param_1 + 0x48))
                                 (param_1,*param_2,".Separator.Padding",
                                  &FStyleDefaults::DefaultMargin,0);
    BlockPadding.Bottom = pfVar16[3] * __real_3f000000;
    BlockPadding.Right = pfVar16[2];
    BlockPadding.Top = pfVar16[1] * __real_3f000000;
    BlockPadding.Left = *pfVar16;
    _Init_thread_footer(&::_TSS0);
  }
  pFVar8 = SVerticalBox::FArguments::FArguments(&local_478);
  this_01 = ::operator_new(0x58);
  local_658 = (FSlotArguments *)0x0;
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    local_658 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(this_01);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_560,(FSlot *)&local_658);
  pFVar9 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_560);
  local_630._4_4_ = BlockPadding.Top;
  local_630._0_4_ = BlockPadding.Left;
  local_630._8_4_ = BlockPadding.Right;
  local_630._12_4_ = BlockPadding.Bottom;
  local_620 = 1;
  local_608 = 0;
  local_618 = (undefined1  [8])0x0;
  pvStack_610 = (void *)0x0;
  *(undefined1 (*) [16])&pFVar9->field_0x18 = local_630;
  pFVar9->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
  pFVar19 = (FSlotArguments *)0x0;
  if (&pFVar9->field_0x18 != (undefined1 *)0x0) {
    pFVar19 = pFVar9;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
  if (pvStack_610 != (void *)0x0) {
    FMemory::Free(pvStack_610);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_618);
  pFVar10 = SSeparator::FArguments::FArguments((FArguments *)local_270);
  pFVar11 = (FSlateBrush *)(**(code **)((longlong)*param_1 + 0x50))(param_1,*param_2);
  pFVar10->_SeparatorImage = pFVar11;
  local_680 = (uchar)EVisibility::Hidden.Value.Value;
  this_02 = (SMultiBoxWidget *)0x0;
  local_67f = 1;
  local_668 = 0;
  local_678 = (undefined1  [8])0x0;
  pvStack_670 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar10->_padding_ = EVisibility::Hidden.Value.Value;
  *(undefined1 *)((longlong)&pFVar10->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  if (pvStack_670 != (void *)0x0) {
    FMemory::Free(pvStack_670);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_678);
  pFVar10->_Thickness = 1.0;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_650 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_648,&local_650,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_578,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuSpacerBlock.cpp"
             ,0x3a,local_res8);
  FMemScope::~FMemScope(&local_648);
  FLLMScope::~FLLMScope(local_res20);
  pTVar12 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_578,&local_5b0,pFVar10);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_6a0 = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_698.ReferenceController = pTVar1;
  if ((SSeparator **)&pFVar19->field_0x8 != &local_6a0) {
    *(SSeparator **)&pFVar19->field_0x8 = local_6a0;
    local_6a0 = (SSeparator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar19->field_0x10,&local_698);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_698.ReferenceController);
  pFVar8 = SVerticalBox::FArguments::operator+(pFVar8,pFVar19);
  FLLMScope::FLLMScope(local_6a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_640 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_638,&local_640,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_590,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuSpacerBlock.cpp"
             ,0x34,local_res10);
  FMemScope::~FMemScope(&local_638);
  FLLMScope::~FLLMScope(local_6a8);
  pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_590,&local_5c0,pFVar8);
  this_00 = &this->field_0x240;
  pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar13->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_690 = *(undefined8 *)&this->field_0x250;
  pTStack_688 = *(TReferenceControllerBase<1> **)&this->field_0x258;
  *(SVerticalBox **)&this->field_0x250 = pSVar3;
  *(TReferenceControllerBase<1> **)&this->field_0x258 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_688);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_590._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_578._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
  if ((void *)local_50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_270);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_508);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_530);
  if ((void *)local_530._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_530._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_530);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_550);
  if (local_560[0] != (undefined8 *)0x0) {
    (**(code **)*local_560[0])(local_560[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_478._Slots.AllocatorInstance.Data,local_478._Slots.ArrayNum);
  if ((FSlotArguments *)local_478._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_478._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_478);
  pSVar18 = *(SMultiBoxWidget **)&this->field_0x2b8;
  pSVar17 = pSVar18;
  if (pSVar18 != (SMultiBoxWidget *)0x0) {
    aVar6 = *(atomic<int> *)&pSVar18->_padding_;
    do {
      pSVar17 = this_02;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1427de005;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar18->_padding_;
      bVar20 = aVar6 == aVar7;
      if (bVar20) {
        *(atomic<int> *)&pSVar18->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar20);
    this_02 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar17 = pSVar18;
    if (this_02 != (SMultiBoxWidget *)0x0) goto LAB_1427de02b;
  }
LAB_1427de005:
  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar18 = pSVar17;
  if (bVar20) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1427de02b:
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar20 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  pFVar14 = FText::GetEmpty();
  local_600.TextData.Reference = (pFVar14->TextData).Reference;
  if (local_600.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_600.TextData.Reference + 8))
              (local_600.TextData.Reference,local_660);
  }
  local_600.Flags = pFVar14->Flags;
  puVar15 = (undefined8 *)(**(code **)(*(longlong *)this + 8))(this,local_5a0);
  local_5f0.Object = (SWidget *)*puVar15;
  local_5f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
  if (local_5f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_02,&local_5f0,&local_600,bVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_598);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar18);
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&this->field_0x2c0;
  local_5e0.Value.Value.Value = *(TEnumAsByte<EVisibility::Private> *)(lVar4 + 0xc0);
  local_5e0.bIsSet = *(bool *)(lVar4 + 0xc1);
  local_5e0.Getter._0_8_ = 0;
  local_5e0.Getter._8_8_ = 0;
  local_5e0.Getter._16_4_ = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_5e0.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar4 + 200));
  SCompoundWidget::SetVisibility((SCompoundWidget *)&this->field_0x8,&local_5e0);
  return;
}

// Construct @ 1427ef2a0

void __thiscall SMenuSpacerBlock::Construct(SMenuSpacerBlock *this,FArguments *param_1)

{
  return;
}

