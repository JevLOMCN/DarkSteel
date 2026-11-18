// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Construct @ 1428fcae0

void __thiscall SHeader::Construct(SHeader *this,FArguments *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  FSlot *pFVar5;
  FSlotArguments *pFVar6;
  FArguments *pFVar7;
  ISlateStyle *pIVar8;
  FName *pFVar9;
  FSlateBrush *pFVar10;
  TSharedRef<SSeparator,1> *pTVar11;
  FSlotArguments *pFVar12;
  FSizeParam *pFVar13;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  FSlotArguments *local_res20;
  FName local_ac8;
  FName local_ac0;
  SSeparator *local_ab8;
  FSharedReferencer<1> local_ab0;
  SSeparator *local_aa8;
  FSharedReferencer<1> local_aa0;
  SWidget *local_a98;
  FSharedReferencer<1> local_a90;
  undefined4 local_a88 [2];
  undefined4 local_a80 [2];
  FSlot *local_a78;
  FSlot *local_a70;
  TAttribute<float> local_a68;
  TAttribute<float> local_a48;
  FName local_a28;
  FName local_a20;
  TSharedRef<SSeparator,1> local_a18;
  TSharedRef<SSeparator,1> local_a08;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_9f8;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_9e0;
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [32];
  undefined1 local_998 [24];
  undefined8 *local_980 [2];
  TReferenceControllerBase<1> *local_970;
  undefined1 local_968 [24];
  undefined1 local_950 [32];
  undefined4 local_930;
  undefined1 local_92c;
  FSlotArgumentsMixin local_928;
  FSlot *local_898 [2];
  TReferenceControllerBase<1> *local_888;
  undefined1 local_868 [40];
  FSlotArgumentsMixin local_840;
  FSlot *local_7b0 [2];
  TReferenceControllerBase<1> *local_7a0;
  undefined1 local_780 [40];
  FSlotArgumentsMixin local_758;
  FArguments local_6c8;
  undefined1 local_4c0 [544];
  undefined1 local_2a0 [24];
  undefined1 local_288 [544];
  undefined1 local_68 [40];
  
  pFVar4 = SHorizontalBox::FArguments::FArguments(&local_6c8);
  pFVar5 = ::operator_new(0x58);
  local_res20 = (FSlotArguments *)0x0;
  if (pFVar5 != (FSlot *)0x0) {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    *(undefined8 *)&pFVar5->field_0x40 = 0;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    local_res20 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar5);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_7b0,(FSlot *)&local_res20);
  local_a70 = local_7b0[0];
  local_a68.Value = 1.0;
  local_a68.Getter._16_8_ = 0;
  local_a68.bIsSet = true;
  local_a68.Getter._0_8_ = 0;
  local_a68.Getter._8_8_ = 0;
  pFVar6 = SHorizontalBox::FSlot::FSlotArguments::FillWidth((FSlotArguments *)local_7b0,&local_a68);
  if (local_a88 != (undefined4 *)&pFVar6->field_0x50) {
    *(undefined4 *)&pFVar6->field_0x50 = 2;
    pFVar6->field_0x54 = 1;
  }
  pFVar12 = (FSlotArguments *)0x0;
  if (pFVar6 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar12 = pFVar6;
  }
  pFVar7 = SSeparator::FArguments::FArguments((FArguments *)local_288);
  pIVar8 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x50);
  pFVar9 = ::FName::FName(&local_a28,"Header.Pre");
  pFVar10 = (FSlateBrush *)(*pcVar1)(pIVar8,*pFVar9);
  pFVar7->_SeparatorImage = pFVar10;
  pFVar7->_Orientation = Orient_Horizontal;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_ac8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_ac0,&local_ac8,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_9e0,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SHeader.cpp"
             ,0x14,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_ac0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pTVar11 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9e0,&local_a08,pFVar7);
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_ab8 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (FSlotArguments *)0x0;
  local_ab0.ReferenceController = pTVar2;
  if ((SSeparator **)&pFVar12->field_0x8 != &local_ab8) {
    *(SSeparator **)&pFVar12->field_0x8 = local_ab8;
    local_ab8 = (SSeparator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_ab0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab0.ReferenceController);
  pFVar4 = SHorizontalBox::FArguments::operator+(pFVar4,pFVar12);
  pFVar5 = ::operator_new(0x58);
  pFVar12 = pFVar6;
  if (pFVar5 != (FSlot *)0x0) {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    *(undefined8 *)&pFVar5->field_0x40 = 0;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    pFVar12 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar5);
  }
  local_res20 = pFVar12;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_980,(FSlot *)&local_res20);
  pFVar13 = (FSizeParam *)FAuto::FAuto((FAuto *)local_9c8);
  TOptional<FSizeParam>::operator=(&local_928._SizeParam,pFVar13);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_998);
  if ((void *)local_998._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_998._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_998);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b8);
  if ((void *)local_9b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b8);
  local_930 = 2;
  local_92c = 1;
  pFVar12 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_968,__real_40a00000,0.0);
  local_a90.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_a98 = (param_1->_Content).Widget.Object;
  if (local_a90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar12->field_0x8 != &local_a98) {
    *(SWidget **)&pFVar12->field_0x8 = local_a98;
    local_a98 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->field_0x10,&local_a90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a90.ReferenceController);
  pFVar4 = SHorizontalBox::FArguments::operator+(pFVar4,pFVar12);
  pFVar5 = ::operator_new(0x58);
  pFVar12 = pFVar6;
  if (pFVar5 != (FSlot *)0x0) {
    *(undefined8 *)pFVar5 = 0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined8 *)&pFVar5->field_0x18 = 0;
    *(undefined8 *)&pFVar5->field_0x20 = 0;
    *(undefined8 *)&pFVar5->field_0x28 = 0;
    *(undefined8 *)&pFVar5->field_0x30 = 0;
    *(undefined8 *)&pFVar5->field_0x38 = 0;
    *(undefined8 *)&pFVar5->field_0x40 = 0;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    pFVar12 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar5);
  }
  local_res20 = pFVar12;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_898,(FSlot *)&local_res20);
  local_a78 = local_898[0];
  local_a48.Value = 1.0;
  local_a48.Getter._16_8_ = 0;
  local_a48.bIsSet = true;
  local_a48.Getter._0_8_ = 0;
  local_a48.Getter._8_8_ = 0;
  pFVar12 = SHorizontalBox::FSlot::FSlotArguments::FillWidth((FSlotArguments *)local_898,&local_a48)
  ;
  if (local_a80 != (undefined4 *)&pFVar12->field_0x50) {
    *(undefined4 *)&pFVar12->field_0x50 = 2;
    pFVar12->field_0x54 = 1;
  }
  if (pFVar12 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar6 = pFVar12;
  }
  pFVar7 = SSeparator::FArguments::FArguments((FArguments *)local_4c0);
  pIVar8 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x50);
  pFVar9 = ::FName::FName(&local_a20,"Header.Post");
  pFVar10 = (FSlateBrush *)(*pcVar1)(pIVar8,*pFVar9);
  pFVar7->_SeparatorImage = pFVar10;
  pFVar7->_Orientation = Orient_Horizontal;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_ac0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_ac8,&local_ac0,true);
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
            (&local_9f8,"SSeparator",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SHeader.cpp"
             ,0x26,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_ac8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pTVar11 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_9f8,&local_a18,pFVar7);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_aa8 = pTVar11->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_aa0.ReferenceController = pTVar3;
  if ((SSeparator **)&pFVar6->field_0x8 != &local_aa8) {
    *(SSeparator **)&pFVar6->field_0x8 = local_aa8;
    local_aa8 = (SSeparator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar6->field_0x10,&local_aa0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aa0.ReferenceController);
  pFVar4 = SHorizontalBox::FArguments::operator+(pFVar4,pFVar6);
  SHorizontalBox::Construct((SHorizontalBox *)this,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9f8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a0);
  if ((void *)local_2a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_4c0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_840);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_868);
  if ((void *)local_868._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_868._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_868);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_888);
  if (local_898[0] != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_898[0])(local_898[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_928);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_950);
  if ((void *)local_950._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_950._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_950);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_970);
  if (local_980[0] != (undefined8 *)0x0) {
    (**(code **)*local_980[0])(local_980[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9e0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_288);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_758);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_780);
  if ((void *)local_780._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_780._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_780);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_7a0);
  if (local_7b0[0] != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_7b0[0])(local_7b0[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_6c8._Slots.AllocatorInstance.Data,local_6c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_6c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_6c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_6c8);
  pFVar5 = local_a70;
  if ((param_1->_HAlign == HAlign_Left) || (pFVar5 = local_a78, param_1->_HAlign == HAlign_Right)) {
    SHorizontalBox::FSlot::SetAutoWidth(pFVar5);
  }
  return;
}

