// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// BuildMultiBlockWidget @ 1427dd500

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMenuSeparatorBlock::BuildMultiBlockWidget
          (SMenuSeparatorBlock *this,ISlateStyle *param_1,FName *param_2)

{
  undefined1 *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  SVerticalBox *pSVar3;
  longlong lVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FArguments *pFVar10;
  FSlot *this_01;
  FSizeParam *pFVar11;
  undefined8 *puVar12;
  FArguments *pFVar13;
  FSlateBrush *pFVar14;
  TSharedRef<SSeparator,1> *pTVar15;
  TSharedRef<SVerticalBox,1> *pTVar16;
  FText *pFVar17;
  SMultiBoxWidget *pSVar18;
  SMultiBoxWidget *pSVar19;
  SMultiBoxWidget *this_02;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  undefined1 local_6c0 [8];
  ForAnyElementType FStack_6b8;
  ulonglong local_6b0;
  undefined8 local_6a8;
  FSharedReferencer<1> local_6a0;
  undefined1 local_698 [8];
  SMultiBoxWidget *local_690;
  FName local_688;
  FMemScope local_680;
  FName local_678;
  FMemScope local_670;
  FText local_668;
  TSharedPtr<SWidget,1> local_658;
  TAttribute<EVisibility> local_648;
  FDestructionSentinel local_628;
  TSharedRef<SVerticalBox,1> local_610;
  TSharedRef<SSeparator,1> local_600;
  undefined1 local_5f0 [8];
  TReferenceControllerBase<1> *local_5e8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5e0;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_5c8;
  undefined1 local_5b0 [16];
  undefined1 local_5a0 [32];
  undefined1 local_580 [24];
  undefined8 *local_568;
  SSeparator *local_560;
  FSharedReferencer<1> local_558 [3];
  undefined1 local_540;
  undefined1 local_538 [40];
  FSlotArgumentsMixin local_510;
  FArguments local_480;
  undefined1 local_278 [544];
  undefined1 local_58 [32];
  
  pFVar10 = SVerticalBox::FArguments::FArguments(&local_480);
  this_01 = ::operator_new(0x58);
  this_02 = (SMultiBoxWidget *)0x0;
  local_690 = this_02;
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
    local_690 = (SMultiBoxWidget *)SVerticalBox::FSlot::FSlot(this_01);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_568,(FSlot *)&local_690);
  pFVar11 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5b0);
  TOptional<FSizeParam>::operator=(&local_510._SizeParam,pFVar11);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_580);
  if ((void *)local_580._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_580._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_580);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
  if ((void *)local_5a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a0);
  puVar12 = (undefined8 *)
            (**(code **)((longlong)*param_1 + 0x48))
                      (param_1,*param_2,".Separator.Padding",&FStyleDefaults::DefaultMargin,0);
  local_558[1].ReferenceController = (TReferenceControllerBase<1> *)*puVar12;
  local_558[2].ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
  local_6b0 = 0;
  local_540 = 1;
  local_6c0 = (undefined1  [8])0x0;
  FStack_6b8.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_538,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c0,
             (FWriteAccessScope *)&local_628);
  if (((int)local_6b0 != 0) && (FStack_6b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b8,0,0,0x10);
    local_6b0 = local_6b0 & 0xffffffff00000000;
  }
  if (local_628.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_628.Accessor,&local_628);
  }
  if (FStack_6b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6c0);
  pFVar13 = SSeparator::FArguments::FArguments((FArguments *)local_278);
  pFVar14 = (FSlateBrush *)(**(code **)((longlong)*param_1 + 0x50))(param_1,*param_2);
  pFVar13->_SeparatorImage = pFVar14;
  pFVar13->_Thickness = 1.0;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_688 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_680,&local_688,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_5c8,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuSeparatorBlock.cpp"
             ,0x36,local_res8);
  FMemScope::~FMemScope(&local_680);
  FLLMScope::~FLLMScope(local_res18);
  pTVar15 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5c8,&local_600,pFVar13);
  pTVar1 = (pTVar15->SharedReferenceCount).ReferenceController;
  local_560 = pTVar15->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6a8 = 0;
  local_6a0.ReferenceController = pTVar1;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_558,&local_6a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a0.ReferenceController);
  pFVar10 = SVerticalBox::FArguments::operator+(pFVar10,(FSlotArguments *)&local_568);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_678 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_670,&local_678,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_5e0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuSeparatorBlock.cpp"
             ,0x30,local_res10);
  FMemScope::~FMemScope(&local_670);
  FLLMScope::~FLLMScope(local_res20);
  pTVar16 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5e0,&local_610,pFVar10);
  this_00 = &this->field_0x240;
  pTVar2 = (pTVar16->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar16->Object;
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
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x258;
  *(SVerticalBox **)&this->field_0x250 = pSVar3;
  *(TReferenceControllerBase<1> **)&this->field_0x258 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_610.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_600.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_278);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_510);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_538);
  if ((void *)local_538._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_538._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_558[0].ReferenceController);
  if (local_568 != (undefined8 *)0x0) {
    (**(code **)*local_568)(local_568,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_480._Slots.AllocatorInstance.Data,local_480._Slots.ArrayNum);
  if ((FSlotArguments *)local_480._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_480._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_480);
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&this->field_0x2c0;
  local_648.Value.Value.Value = *(TEnumAsByte<EVisibility::Private> *)(lVar4 + 0xc0);
  local_648.bIsSet = *(bool *)(lVar4 + 0xc1);
  local_648.Getter._0_8_ = 0;
  local_648.Getter._8_8_ = 0;
  local_648.Getter._16_4_ = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&local_648.Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)(lVar4 + 200));
  SCompoundWidget::SetVisibility((SCompoundWidget *)&this->field_0x8,&local_648);
  pSVar19 = *(SMultiBoxWidget **)&this->field_0x2b8;
  pSVar18 = pSVar19;
  if (pSVar19 != (SMultiBoxWidget *)0x0) {
    iVar7 = (int)pSVar19->_padding_;
    do {
      pSVar18 = this_02;
      if (iVar7 == 0) goto LAB_1427dda45;
      LOCK();
      iVar9 = (int)pSVar19->_padding_;
      bVar8 = iVar7 == iVar9;
      if (bVar8) {
        *(int *)&pSVar19->_padding_ = iVar7 + 1;
        iVar9 = iVar7;
      }
      UNLOCK();
      iVar7 = iVar9;
    } while (!bVar8);
    this_02 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar18 = pSVar19;
    if (this_02 != (SMultiBoxWidget *)0x0) goto LAB_1427dda6b;
  }
LAB_1427dda45:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar19 = pSVar18;
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1427dda6b:
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar8 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  pFVar17 = FText::GetEmpty();
  local_668.TextData.Reference = (pFVar17->TextData).Reference;
  if (local_668.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_668.TextData.Reference + 8))
              (local_668.TextData.Reference,local_698);
  }
  local_668.Flags = pFVar17->Flags;
  puVar12 = (undefined8 *)(**(code **)(*(longlong *)this + 8))(this,local_5f0);
  local_658.Object = (SWidget *)*puVar12;
  local_658.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
  if (local_658.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_02,&local_658,&local_668,bVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar19);
  return;
}

// Construct @ 1427ef290

void __thiscall SMenuSeparatorBlock::Construct(SMenuSeparatorBlock *this,FArguments *param_1)

{
  return;
}

