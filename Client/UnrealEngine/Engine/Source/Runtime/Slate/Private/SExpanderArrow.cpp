// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 13

// SExpanderArrow @ 142a17f10

SExpanderArrow * __thiscall SExpanderArrow::SExpanderArrow(SExpanderArrow *this)

{
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_02;
  code *pcVar1;
  double _X;
  bool bVar2;
  int iVar3;
  SExpanderArrow *pSVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this_00 = &this->ShouldDrawWires;
  this->StyleSet = (ISlateStyle *)0x0;
  this->_padding_ = (longlong)&___7SExpanderArrow__6B_;
  pSVar4 = this + 1;
  (this->OwnerRowPtr).Object = (ITableRow *)0x0;
  (this->OwnerRowPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ExpanderArrow).Object = (SButton *)0x0;
  (this->ExpanderArrow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_00->field_0x0 = 0;
  if ((this_00 < this) || (pSVar4 <= this_00)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar4 = (SExpanderArrow *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar2) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SExpanderArrow,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  _X = __real_4024000000000000;
  this_01 = &this->IndentAmountAttribute;
  *(undefined4 *)&this_01->field_0x0 = 0x41200000;
  iVar3 = _finite(_X);
  if (iVar3 == 0) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res10);
  }
  if ((this_01 < this) || (pSVar4 <= this_01)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar4 = (SExpanderArrow *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar2) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SExpanderArrow,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  this_02 = &this->BaseIndentLevelAttribute;
  *(undefined4 *)&this_02->field_0x0 = 0;
  if ((this_02 < this) || (pSVar4 <= this_02)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar4 = (SExpanderArrow *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SExpanderArrow,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  return this;
}

// ~SExpanderArrow @ 142a18d20

void __thiscall SExpanderArrow::~SExpanderArrow(SExpanderArrow *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7SExpanderArrow__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExpanderArrow).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142a1c130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SExpanderArrow::Construct(SExpanderArrow *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2)

{
  atomic<int> *paVar1;
  longlong *this_00;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SButton *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 *puVar12;
  TSharedRef<SWidget_const_,1> *pTVar13;
  ulong64 uVar14;
  SWidget *pSVar15;
  FArguments *pFVar16;
  ISlateStyle *pIVar17;
  FButtonStyle *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  FArguments *pFVar20;
  TSharedRef<SImage,1> *pTVar21;
  TSharedRef<SButton,1> *pTVar22;
  longlong *plVar23;
  FSlotBase *this_01;
  longlong *plVar24;
  longlong *plVar25;
  TReferenceControllerBase<1> *pTVar26;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FName local_b68;
  undefined4 uStack_b60;
  uint uStack_b5c;
  SButton *local_b58;
  TReferenceControllerBase<1> *pTStack_b50;
  FName local_b48;
  undefined1 local_b40 [8];
  undefined1 local_b38 [8];
  ForAnyElementType FStack_b30;
  int local_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined4 local_b10;
  undefined1 local_b0c;
  undefined1 local_b08 [8];
  ForAnyElementType FStack_b00;
  ulonglong local_af8;
  FMargin local_af0;
  undefined1 local_ae0;
  undefined1 local_ad8 [8];
  FDelegateAllocation FStack_ad0;
  longlong *local_ac0;
  TSharedRef<SImage,1> local_ab8;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined1 local_a98;
  undefined1 local_a90 [8];
  ForAnyElementType FStack_a88;
  ulonglong local_a80;
  SImage *local_a78;
  TReferenceControllerBase<1> *pTStack_a70;
  FName local_a68;
  FMemScope local_a60;
  FMemScope local_a58;
  undefined1 local_a50 [8];
  undefined1 local_a48 [24];
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_a30;
  FDestructionSentinel local_a18;
  FDestructionSentinel local_a00;
  FLinearColor_u_0 local_9e8;
  undefined4 local_9d8;
  undefined1 local_9d4;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  FDestructionSentinel local_9b8;
  FDestructionSentinel local_9a0;
  FDestructionSentinel local_988;
  FDelegateAllocation *local_970;
  FDestructionSentinel local_968;
  longlong *local_950;
  FDestructionSentinel local_948;
  undefined1 *local_930;
  FDestructionSentinel local_928;
  undefined1 *local_910;
  undefined4 local_8f8;
  undefined4 local_8e4;
  undefined1 local_8e0 [24];
  undefined1 local_8c8 [24];
  TSharedRef<SWidget_const_,1> local_8b0;
  TSharedRef<SWidget_const_,1> local_8a0;
  TSharedRef<SWidget,1> local_890;
  TSharedRef<SButton,1> local_880;
  SButton *local_870;
  TReferenceControllerBase<1> *pTStack_868;
  TSharedRef<SWidget_const_,1> local_860;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_850;
  FArguments local_838;
  FArguments local_590;
  
  plVar25 = (longlong *)0x0;
  local_res8 = 0;
  (this->OwnerRowPtr).Object = param_2->Object;
  pTVar26 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar26 != (this->OwnerRowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    (this->OwnerRowPtr).WeakReferenceCount.ReferenceController = pTVar26;
  }
  this->StyleSet = param_1->_StyleSet;
  local_b40._0_4_ = (param_1->_IndentAmount).Value;
  local_b40[4] = (param_1->_IndentAmount).bIsSet;
  local_b38 = (undefined1  [8])0x0;
  FStack_b30.Data = (FScriptContainerElement *)0x0;
  local_b28 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_b38,
             &(param_1->_IndentAmount).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IndentAmountAttribute,(SWidget *)this,(TAttribute<float> *)local_b40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b38,
             (FWriteAccessScope *)&local_9b8);
  if ((local_b28 != 0) && (FStack_b30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b30,0,0,0x10);
    local_b28 = 0;
  }
  if (local_9b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9b8.Accessor,&local_9b8);
  }
  if (FStack_b30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b38);
  local_a50._0_4_ = (param_1->_BaseIndentLevel).Value;
  local_a50[4] = (param_1->_BaseIndentLevel).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)local_a48,
             &(param_1->_BaseIndentLevel).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BaseIndentLevelAttribute,(SWidget *)this,(TAttribute<int> *)local_a50,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a48);
  if ((void *)local_a48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a48);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShouldDrawWires,(SWidget *)this,&param_1->_ShouldDrawWires,None);
  local_ae0 = 1;
  FStack_ad0.DelegateSize = 0;
  local_af0.Left = 0.0;
  local_af0.Top = 0.0;
  local_af0.Right = 0.0;
  local_af0.Bottom = 0.0;
  this_00 = &this->_padding_;
  local_ad8 = (undefined1  [8])0x0;
  FStack_ad0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ad8,
             (FWriteAccessScope *)&local_988);
  local_970 = &FStack_ad0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,&FStack_ad0);
  if (puVar12 == (undefined8 *)0x0) {
    pTVar26 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    plVar24 = plVar25;
  }
  else {
    local_b58 = (SButton *)GetExpanderPadding;
    pTStack_b50 = (TReferenceControllerBase<1> *)
                  ((ulonglong)local_ab8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_8b0);
    pTVar26 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar15 = pTVar13->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSExpanderArrow___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar15;
    puVar12[4] = pTVar26;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar12[5] = local_b58;
    puVar12[6] = pTStack_b50;
    plVar24 = (longlong *)&DAT_00000007;
  }
  if (((ulonglong)plVar24 & 4) != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (((ulonglong)plVar24 & 2) != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (((ulonglong)plVar24 & 1) != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0.SharedReferenceCount.ReferenceController);
  }
  if (local_988.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_988.Accessor,&local_988);
  }
  local_8e0[0x10] = (bool)local_ae0;
  local_8e0._0_4_ = local_af0.Left;
  local_8e0._4_4_ = local_af0.Top;
  local_8e0._8_4_ = local_af0.Right;
  local_8e0._12_4_ = local_af0.Bottom;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c8,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ad8);
  plVar23 = &this->_padding_;
  if (this_00 == (longlong *)0x0) {
    plVar23 = plVar25;
  }
  pSVar15 = FSlotBase::GetOwnerWidget((FSlotBase *)(plVar23 + 4));
  if (pSVar15 == (SWidget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("OwnerWidget",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                        ,0x170,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)this_00,pSVar15,(TAttribute<FMargin> *)local_8e0,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c8);
  if ((void *)local_8c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8c8);
  local_ac0 = plVar25;
  if (this_00 != (longlong *)0x0) {
    local_ac0 = &this->_padding_;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ad8,
             (FWriteAccessScope *)&local_9a0);
  if ((FStack_ad0.DelegateSize != 0) &&
     (FStack_ad0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_ad0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_ad0,0,0,0x10);
    FStack_ad0.DelegateSize = 0;
  }
  if (local_9a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_9a0.Accessor,&local_9a0);
  }
  if (FStack_ad0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_ad0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ad8);
  pFVar16 = SButton::FArguments::FArguments(&local_590);
  ::FName::FName(&local_a68,"NoBorder");
  pIVar17 = FAppStyle::Get();
  pFVar18 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar17 + 0xa0))(pIVar17,FButtonStyle::TypeName,local_a68,0,1);
  if (pFVar18 == (FButtonStyle *)0x0) {
    pFVar18 = FButtonStyle::GetDefault();
  }
  pFVar16->_ButtonStyle = pFVar18;
  pFVar16->_VAlign = VAlign_Center;
  pFVar16->_HAlign = HAlign_Center;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (FWriteAccessScope *)&local_968);
  local_950 = &pFVar16->_padding_;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_950);
  if (puVar12 == (undefined8 *)0x0) {
    pTVar26 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_b5c = local_ab8.SharedReferenceCount.ReferenceController._4_4_;
    local_b68 = (FName)GetExpanderVisibility;
    uStack_b60 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_8a0);
    pTVar26 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar15 = pTVar13->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 | 0x38);
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSExpanderArrow___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar15;
    puVar12[4] = pTVar26;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar12 + 5) = local_b68;
    puVar12[6] = CONCAT44(uStack_b5c,uStack_b60);
  }
  if (((ulonglong)plVar24 & 0x20) != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (((ulonglong)plVar24 & 0x10) != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (((ulonglong)plVar24 & 8) != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a0.SharedReferenceCount.ReferenceController);
  }
  if (local_968.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
  }
  pFVar16->_ClickMethod = MouseDown;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnClicked,
             (FWriteAccessScope *)&local_948);
  local_930 = &(pFVar16->_OnClicked).field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_930);
  if (puVar12 == (undefined8 *)0x0) {
    pTVar26 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_b5c = local_ab8.SharedReferenceCount.ReferenceController._4_4_;
    local_b68 = (FName)OnArrowClicked;
    uStack_b60 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_890);
    pTVar26 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar15 = pTVar19->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 | 0x1c0);
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSExpanderArrow___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar15;
    puVar12[4] = pTVar26;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar12 + 5) = local_b68;
    puVar12[6] = CONCAT44(uStack_b5c,uStack_b60);
  }
  if ((uint)plVar24 >> 8 != 0) {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if ((char)plVar24 < '\0') {
    plVar24 = (longlong *)(ulonglong)((uint)plVar24 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (((ulonglong)plVar24 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_890.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar11 = false;
  if (local_948.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_948.Accessor,&local_948);
  }
  local_a98 = 1;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_a80 = 0;
  local_a90 = (undefined1  [8])0x0;
  FStack_a88.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_ContentPadding).Value.Left = 0.0;
  (pFVar16->_ContentPadding).Value.Top = 0.0;
  (pFVar16->_ContentPadding).Value.Right = 0.0;
  (pFVar16->_ContentPadding).Value.Bottom = 0.0;
  (pFVar16->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a90,
             (FWriteAccessScope *)&local_a18);
  if (((int)local_a80 != 0) && (FStack_a88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a88,0,0,0x10);
    local_a80 = local_a80 & 0xffffffff00000000;
  }
  if (local_a18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a18.Accessor,&local_a18);
  }
  if (FStack_a88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a90);
  uVar9 = _UNK_15090c6d8;
  local_b0c = 1;
  local_b20 = ___xmm_3f8000003f800000000000003f800000;
  uStack_b18 = _UNK_15090c6d8;
  local_8e4 = CONCAT22(local_8e4._2_2_,2);
  uVar10 = local_8e4;
  local_b10 = local_8e4;
  local_af8 = 0;
  local_b08 = (undefined1  [8])0x0;
  FStack_b00.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar16->_ForegroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar16->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar9;
  local_8e4._0_1_ = (undefined1)2;
  local_8e4._1_1_ = (undefined1)(2 >> 8);
  (pFVar16->_ForegroundColor).Value.ColorUseRule = (undefined1)local_8e4;
  (pFVar16->_ForegroundColor).Value.ColorTableId = local_8e4._1_1_;
  *(undefined2 *)&(pFVar16->_ForegroundColor).Value.field_0x12 = local_8e4._2_2_;
  (pFVar16->_ForegroundColor).bIsSet = true;
  local_8e4 = uVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b08,
             (FWriteAccessScope *)&local_a00);
  if (((int)local_af8 != 0) && (FStack_b00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b00,0,0,0x10);
    local_af8 = local_af8 & 0xffffffff00000000;
  }
  if (local_a00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a00.Accessor,&local_a00);
  }
  if (FStack_b00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b08);
  pFVar16->_IsFocusable = false;
  pFVar20 = SImage::FArguments::FArguments(&local_838);
  (pFVar20->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Image).Getter,
             (FWriteAccessScope *)&local_928);
  local_910 = &(pFVar20->_Image).Getter.field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_910);
  if (puVar12 == (undefined8 *)0x0) {
    pTVar26 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_b5c = local_ab8.SharedReferenceCount.ReferenceController._4_4_;
    local_b68 = (FName)GetExpanderImage;
    uStack_b60 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_860);
    pTVar26 = (pTVar13->SharedReferenceCount).ReferenceController;
    local_b48 = (FName)pTVar13->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar11 = true;
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSExpanderArrow___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar12 + 3) = local_b48;
    puVar12[4] = pTVar26;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar12 + 5) = local_b68;
    puVar12[6] = CONCAT44(uStack_b5c,uStack_b60);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_860.SharedReferenceCount.ReferenceController);
  }
  if (local_928.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_928.Accessor,&local_928);
  }
  local_8f8 = CONCAT22(local_8f8._2_2_,3);
  local_9d8 = local_8f8;
  local_9c0 = 0;
  local_9e8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_9e8._8_8_ = _UNK_15090c6d8;
  local_9d4 = 1;
  local_9d0 = 0;
  uStack_9c8 = 0;
  pFVar20 = SImage::FArguments::ColorAndOpacity(pFVar20,(TAttribute<FSlateColor> *)&local_9e8._s_0);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a60,&local_b48,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_850,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SExpanderArrow.cpp"
             ,0x32,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_a60);
  FLLMScope::~FLLMScope(local_res18);
  pTVar21 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_850,&local_ab8,pFVar20);
  pTVar26 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_a78 = pTVar21->Object;
  if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)local_a78;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar26;
  pTStack_a70 = pTVar26;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_b68 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a58,&local_b68,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_a30,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Views\\SExpanderArrow.cpp"
             ,0x27,local_res10);
  FMemScope::~FMemScope(&local_a58);
  FLLMScope::~FLLMScope(local_res20);
  if (local_a30._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a30._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a30._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_870 = (this->ExpanderArrow).Object;
  pTStack_868 = (this->ExpanderArrow).SharedReferenceCount.ReferenceController;
  (this->ExpanderArrow).Object = local_a30._Widget.Object;
  (this->ExpanderArrow).SharedReferenceCount.ReferenceController =
       local_a30._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_868);
  pTVar22 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_a30,&local_880,pFVar16);
  plVar25 = local_ac0;
  this_01 = (FSlotBase *)(local_ac0 + 4);
  pTVar3 = (pTVar22->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar22->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent(this_01);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent(this_01);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)plVar25[7];
  plVar25[6] = (longlong)pSVar4;
  plVar25[7] = (longlong)pTVar3;
  local_b58 = pSVar4;
  pTStack_b50 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned(this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_880.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a30._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_ab8.SharedReferenceCount.ReferenceController._4_4_,
                      local_ab8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_850._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_838);
  SButton::FArguments::~FArguments(&local_590);
  return;
}

// GetExpanderImage @ 142a29120

FSlateBrush * __thiscall SExpanderArrow::GetExpanderImage(SExpanderArrow *this)

{
  int iVar1;
  SButton *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  FSlateBrush *pFVar7;
  FName FVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  
  pTVar11 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142a29165;
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerRowPtr).Object;
    pTVar10 = pTVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a2918b;
  }
LAB_142a29165:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar11 = pTVar10;
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FSlateBrush *)(*pcVar3)();
    return pFVar7;
  }
LAB_142a2918b:
  cVar5 = (**(code **)(pTVar9->_padding_ + 0x20))(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pSVar2 = (this->ExpanderArrow).Object;
  if (cVar5 == '\0') {
    if ((pSVar2 == (SButton *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar3)();
      return pFVar7;
    }
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*(char *)((longlong)&((this->ExpanderArrow).Object)->_padding_ + 3) == '\0') {
      FVar8 = CollapsedName;
      if ((iVar1 < ::_TSS3) && (_Init_thread_header(&::_TSS3), FVar8 = CollapsedName, ::_TSS3 == -1)
         ) {
        ::FName::FName(&CollapsedName,"TreeArrow_Collapsed");
        _Init_thread_footer(&::_TSS3);
        FVar8 = CollapsedName;
      }
    }
    else {
      FVar8 = CollapsedHoveredName;
      if ((iVar1 < ::_TSS2) &&
         (_Init_thread_header(&::_TSS2), FVar8 = CollapsedHoveredName, ::_TSS2 == -1)) {
        ::FName::FName(&CollapsedHoveredName,"TreeArrow_Collapsed_Hovered");
        _Init_thread_footer(&::_TSS2);
        FVar8 = CollapsedHoveredName;
      }
    }
  }
  else {
    if ((pSVar2 == (SButton *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSlateBrush *)(*pcVar3)();
      return pFVar7;
    }
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*(char *)((longlong)&((this->ExpanderArrow).Object)->_padding_ + 3) == '\0') {
      FVar8 = ExpandedName;
      if ((iVar1 < ::_TSS1) && (_Init_thread_header(&::_TSS1), FVar8 = ExpandedName, ::_TSS1 == -1))
      {
        ::FName::FName(&ExpandedName,"TreeArrow_Expanded");
        _Init_thread_footer(&::_TSS1);
        FVar8 = ExpandedName;
      }
    }
    else {
      FVar8 = ExpandedHoveredName;
      if ((iVar1 < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), FVar8 = ExpandedHoveredName, ::_TSS0 == -1)) {
        ::FName::FName(&ExpandedHoveredName,"TreeArrow_Expanded_Hovered");
        _Init_thread_footer(&::_TSS0);
        FVar8 = ExpandedHoveredName;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a293a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar7 = (FSlateBrush *)(**(code **)((longlong)*this->StyleSet + 0x50))(this->StyleSet,FVar8,0,0);
  return pFVar7;
}

// GetExpanderPadding @ 142a293b0

FMargin * __thiscall
SExpanderArrow::GetExpanderPadding(SExpanderArrow *this,FMargin *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  FMargin *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a29405;
      LOCK();
      aVar3 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerRowPtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a2942b;
  }
LAB_142a29405:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FMargin *)(*pcVar1)();
    return pFVar5;
  }
LAB_142a2942b:
  iVar4 = (**(code **)(pTVar6->_padding_ + 0x38))(pTVar6);
  iVar4 = iVar4 - (int)this->BaseIndentLevelAttribute;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  __return_storage_ptr__->Bottom = 0.0;
  __return_storage_ptr__->Left = (float)iVar4 * (float)this->IndentAmountAttribute;
  return __return_storage_ptr__;
}

// GetExpanderVisibility @ 142a294a0

EVisibility __thiscall SExpanderArrow::GetExpanderVisibility(SExpanderArrow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  atomic<int> aVar4;
  int iVar5;
  uchar *in_RDX;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  EVisibility EVar9;
  bool bVar10;
  
  pTVar7 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a294e1;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pTVar8 = (TReferenceControllerBase<1> *)(this->OwnerRowPtr).Object;
    pTVar6 = pTVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_142a29507;
  }
LAB_142a294e1:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    TVar3.Value = (*pcVar1)();
    return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
  }
LAB_142a29507:
  iVar5 = (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8);
  EVar9 = EVisibility::Hidden;
  if (iVar5 != 0) {
    EVar9 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar9.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (EVisibility)SUB81(in_RDX,0);
}

// GetPrivateWidgetClass @ 142a2a900

FSlateWidgetClassData * __cdecl SExpanderArrow::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SExpanderArrow");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SExpanderArrow::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 142a2bae0

FSlateWidgetClassData * __thiscall SExpanderArrow::GetWidgetClass(SExpanderArrow *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SExpanderArrow");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SExpanderArrow::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SExpanderArrow::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrowClicked @ 142a2e170

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SExpanderArrow::OnArrowClicked(SExpanderArrow *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateApplication *this_00;
  FReply *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  ushort local_res10;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::GetModifierKeys(this_00);
  if (((local_res10 & 1) != 0) || ((local_res10 & 2) != 0)) {
    pTVar6 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar6;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_142a2e236:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pTVar6 = pTVar5;
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FReply *)(*pcVar1)();
        return pFVar4;
      }
    }
    else {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        pTVar5 = pTVar7;
        if (aVar2 == (atomic<int>)0x0) goto LAB_142a2e236;
        LOCK();
        aVar3 = pTVar6->SharedReferenceCount;
        bVar8 = aVar2 == aVar3;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar8);
      pTVar7 = (TReferenceControllerBase<1> *)(this->OwnerRowPtr).Object;
      pTVar5 = pTVar6;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142a2e236;
    }
    (**(code **)(pTVar7->_padding_ + 0x68))(pTVar7);
    goto LAB_142a2e265;
  }
  pTVar6 = (this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar6;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_142a2e1d1:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pTVar6 = pTVar5;
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a2e1d1;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)(this->OwnerRowPtr).Object;
    pTVar5 = pTVar6;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142a2e1d1;
  }
  (**(code **)(pTVar7->_padding_ + 0x28))(pTVar7);
LAB_142a2e265:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnPaint @ 142a300c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SExpanderArrow::OnPaint
          (SExpanderArrow *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 uVar4;
  ISlateStyle *pIVar5;
  code *pcVar6;
  atomic<int> aVar7;
  float fVar8;
  float fVar9;
  float afVar10 [2];
  float afVar11 [2];
  float afVar12 [2];
  float afVar13 [2];
  TReferenceControllerBase<1> *pTVar14;
  ITableRow *pIVar15;
  char cVar16;
  atomic<int> aVar17;
  int iVar18;
  int iVar19;
  FSlateBrush *pFVar20;
  undefined1 *puVar21;
  uint uVar22;
  FSlateBrush *pFVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_388 [32];
  undefined8 local_348;
  undefined8 local_338;
  FLinearColor_u_0 local_320;
  float local_310;
  undefined4 uStack_30c;
  TVector2<float>_u_0 local_308;
  float local_300;
  float fStack_2fc;
  SExpanderArrow *local_2f8;
  FWidgetStyle *local_2f0;
  FSlateRect *local_2e8;
  FPaintArgs *local_2e0;
  TVector2<float>_u_0_s_0 local_2d4;
  TVector2<float>_u_0_s_0 local_2c8;
  TVector2<float>_u_0_s_0 local_2bc;
  TVector2<float>_u_0_s_0 local_2b0;
  TTransform2<float> local_2a8;
  TTransform2<float> local_290;
  TTransform2<float> local_278;
  TTransform2<float> local_260;
  TTransform2<float> local_248;
  TTransform2<float> local_230;
  TTransform2<float> local_218;
  TTransform2<float> local_200;
  undefined1 local_1e8 [16];
  undefined1 *local_1d8;
  int local_1d0;
  TVector2<float>_u_0 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  undefined8 local_1b4;
  float local_1ac [2];
  float afStack_1a4 [2];
  TVector2<float>_u_0 local_19c;
  byte local_194;
  TVector2<float>_u_0 local_190;
  float local_188;
  undefined8 local_184;
  undefined8 local_17c;
  float local_174 [2];
  float afStack_16c [2];
  TVector2<float>_u_0 local_164;
  byte local_15c;
  TVector2<float>_u_0 local_158;
  float local_150;
  undefined8 local_14c;
  undefined8 local_144;
  float local_13c [2];
  float afStack_134 [2];
  TVector2<float>_u_0 local_12c;
  byte local_124;
  TVector2<float>_u_0 local_120;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  float local_104 [2];
  float afStack_fc [2];
  TVector2<float>_u_0 local_f4;
  byte local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2f0 = param_6;
  local_2f8 = this;
  local_2e8 = param_3;
  local_2e0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_VerticalBarBrush,L"WhiteBrush");
    _Init_thread_footer(&::_TSS0);
  }
  pIVar5 = this->StyleSet;
  pFVar23 = (FSlateBrush *)0x0;
  TVar1 = this->IndentAmountAttribute;
  pFVar20 = pFVar23;
  if (pIVar5 != (ISlateStyle *)0x0) {
    pFVar20 = (FSlateBrush *)
              (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,NAME_VerticalBarBrush,0,0);
  }
  if ((this->ShouldDrawWires ==
       (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1) &&
     (pFVar20 != (FSlateBrush *)0x0)) {
    local_348 = (TVector2<float>_u_0)(this->OwnerRowPtr).WeakReferenceCount.ReferenceController;
    local_338 = (TVector2<float>_u_0)0x0;
    if (local_348 != (TVector2<float>_u_0)0x0) {
      aVar7 = ((TReferenceControllerBase<1> *)local_348)->SharedReferenceCount;
      do {
        if (aVar7 == (atomic<int>)0x0) {
          local_320._0_8_ = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
          local_348 = (TVector2<float>_u_0)0x0;
          local_320._s_0.B =
               (float)*(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
          local_320._s_0.A = (float)0x3e19999a;
          goto LAB_142a3024c;
        }
        LOCK();
        aVar17 = ((TReferenceControllerBase<1> *)local_348)->SharedReferenceCount;
        bVar24 = aVar7 == aVar17;
        if (bVar24) {
          ((TReferenceControllerBase<1> *)local_348)->SharedReferenceCount =
               (atomic<int>)((int)aVar7 + 1);
          aVar17 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar17;
      } while (!bVar24);
      local_338 = (TVector2<float>_u_0)(this->OwnerRowPtr).Object;
    }
    local_320._0_8_ = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
    local_320._s_0.B = (float)*(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
    local_320._s_0.A = (float)0x3e19999a;
    if (local_338 == (TVector2<float>_u_0)0x0) {
LAB_142a3024c:
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar24) {
        pcVar6 = (code *)swi(3);
        iVar18 = (*pcVar6)();
        return iVar18;
      }
    }
    pIVar15 = (ITableRow *)local_338;
    pTVar14 = (TReferenceControllerBase<1> *)local_348;
    (**(code **)((longlong)*(ITableRow *)local_338 + 0x48))(local_338,local_1e8);
    iVar18 = local_1d0;
    afVar12 = _UNK_15076b188;
    afVar10 = ___xmm_3f80000000000000000000003f800000;
    fVar9 = __real_40000000;
    fVar28 = __real_40400000;
    if (0 < local_1d0) {
      uVar22 = 1;
      do {
        iVar19 = (int)pFVar23;
        if ((local_1d0 <= iVar19) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar24)) {
          pcVar6 = (code *)swi(3);
          iVar18 = (*pcVar6)();
          return iVar18;
        }
        afVar13 = _UNK_15076b188;
        afVar11 = ___xmm_3f80000000000000000000003f800000;
        puVar21 = local_1e8;
        if (local_1d8 != (undefined1 *)0x0) {
          puVar21 = local_1d8;
        }
        if ((*(uint *)(puVar21 + ((ulonglong)pFVar23 >> 5) * 4) & uVar22) != 0) {
          local_2d4 = (param_2->AbsolutePosition).field0_0x0._s_0;
          local_310 = (float)iVar19 * (float)TVar1 - fVar28;
          uVar2 = *(undefined4 *)&(param_2->Size).field_0x4;
          fVar3 = param_2->Scale;
          uStack_30c = 0;
          local_308._s_0.Y = 0.0;
          local_308._s_0.X = local_310;
          local_300 = fVar3 * local_310 + local_2d4.X;
          ___xmm_3f80000000000000000000003f800000 = afVar10[0];
          _UNK_15076b184 = afVar10[1];
          local_2a8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_2a8.M.M[0][1] = _UNK_15076b184;
          _UNK_15076b188 = afVar12[0];
          _UNK_15076b18c = afVar12[1];
          local_2a8.M.M[1][0] = _UNK_15076b188;
          local_2a8.M.M[1][1] = _UNK_15076b18c;
          fStack_2fc = fVar3 * 0.0 + local_2d4.Y;
          ___xmm_3f80000000000000000000003f800000 = afVar11;
          _UNK_15076b188 = afVar13;
          local_2a8.Trans.field0_0x0 = local_308;
          Concatenate<TTransform2<float>_>
                    (&local_290,&local_2a8,&param_2->AccumulatedRenderTransform);
          local_1c8._s_0.Y = fStack_2fc;
          local_1c8._s_0.X = local_300;
          local_1b4 = CONCAT44(uVar2,0x40000000);
          local_194 = param_2->bHasRenderTransform * '\x02' | local_194 & 0xfc;
          local_1bc = 0;
          local_19c = local_290.Trans.field0_0x0;
          local_1ac[0] = local_290.M.M[0][0];
          local_1ac[1] = local_290.M.M[0][1];
          afStack_1a4[0] = local_290.M.M[1][0];
          afStack_1a4[1] = local_290.M.M[1][1];
          local_1c0 = fVar3;
          FSlateDrawElement::MakeBox
                    (param_4,param_5,(FPaintGeometry *)&local_1c8._s_0,pFVar20,None,
                     (FLinearColor *)&local_320._s_0);
        }
        pFVar23 = (FSlateBrush *)(ulonglong)(iVar19 + 1U);
        uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
        this = local_2f8;
      } while ((int)(iVar19 + 1U) < iVar18);
    }
    fVar3 = __real_3f000000;
    fVar27 = *(float *)&(param_2->Size).field_0x4 * __real_3f000000;
    if ((local_338 == (TVector2<float>_u_0)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar6 = (code *)swi(3);
      iVar18 = (*pcVar6)();
      return iVar18;
    }
    cVar16 = (**(code **)((longlong)*(ITableRow *)local_338 + 0x50))(local_338);
    afVar13 = _UNK_15076b188;
    afVar11 = ___xmm_3f80000000000000000000003f800000;
    fVar8 = __real_3f800000;
    if (cVar16 != '\0') {
      fVar26 = param_2->Scale;
      local_2c8 = (param_2->AbsolutePosition).field0_0x0._s_0;
      ___xmm_3f80000000000000000000003f800000 = afVar10[0];
      _UNK_15076b184 = afVar10[1];
      local_278.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_278.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar12[0];
      _UNK_15076b18c = afVar12[1];
      local_278.M.M[1][0] = _UNK_15076b188;
      local_278.M.M[1][1] = _UNK_15076b18c;
      local_348._0_4_ = (float)(iVar18 + -1) * (float)TVar1 - fVar28;
      local_348._4_4_ = 0;
      fVar25 = fVar27 + __real_3f800000;
      local_278.Trans.field0_0x0 = local_348;
      local_338._4_4_ = fVar26 * 0.0 + local_2c8.Y;
      local_338._0_4_ = fVar26 * (float)(undefined4)local_348 + local_2c8.X;
      ___xmm_3f80000000000000000000003f800000 = afVar11;
      _UNK_15076b188 = afVar13;
      Concatenate<TTransform2<float>_>(&local_260,&local_278,&param_2->AccumulatedRenderTransform);
      local_190 = local_338;
      local_17c = CONCAT44(fVar25,0x40000000);
      local_15c = param_2->bHasRenderTransform * '\x02' | local_15c & 0xfc;
      local_184 = 0;
      local_164 = local_260.Trans.field0_0x0;
      local_174[0] = local_260.M.M[0][0];
      local_174[1] = local_260.M.M[0][1];
      afStack_16c[0] = local_260.M.M[1][0];
      afStack_16c[1] = local_260.M.M[1][1];
      local_188 = fVar26;
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_190._s_0,pFVar20,None,
                 (FLinearColor *)&local_320._s_0);
    }
    if ((pIVar15 == (ITableRow *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar6 = (code *)swi(3);
      iVar18 = (*pcVar6)();
      return iVar18;
    }
    cVar16 = (**(code **)((longlong)*pIVar15 + 0x20))(pIVar15);
    if (cVar16 != '\0') {
      if ((pIVar15 == (ITableRow *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        iVar18 = (*pcVar6)();
        return iVar18;
      }
      iVar19 = (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
      afVar13 = _UNK_15076b188;
      afVar11 = ___xmm_3f80000000000000000000003f800000;
      if (iVar19 != 0) {
        local_2bc = (param_2->AbsolutePosition).field0_0x0._s_0;
        fVar26 = param_2->Scale;
        ___xmm_3f80000000000000000000003f800000 = afVar10[0];
        _UNK_15076b184 = afVar10[1];
        local_248.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_248.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar12[0];
        _UNK_15076b18c = afVar12[1];
        local_248.M.M[1][0] = _UNK_15076b188;
        local_248.M.M[1][1] = _UNK_15076b18c;
        local_348._0_4_ = (float)iVar18 * (float)TVar1 - fVar28;
        local_348._4_4_ = fVar27 - fVar8;
        local_248.Trans.field0_0x0 = local_348;
        local_338._4_4_ = fVar26 * (fVar27 - fVar8) + local_2bc.Y;
        local_338._0_4_ = fVar26 * (float)(undefined4)local_348 + local_2bc.X;
        ___xmm_3f80000000000000000000003f800000 = afVar11;
        _UNK_15076b188 = afVar13;
        Concatenate<TTransform2<float>_>(&local_230,&local_248,&param_2->AccumulatedRenderTransform)
        ;
        local_158 = local_338;
        local_144 = CONCAT44(fVar27 + fVar8,0x40000000);
        local_124 = param_2->bHasRenderTransform * '\x02' | local_124 & 0xfc;
        local_14c = 0;
        local_12c = local_230.Trans.field0_0x0;
        local_13c[0] = local_230.M.M[0][0];
        local_13c[1] = local_230.M.M[0][1];
        afStack_134[0] = local_230.M.M[1][0];
        afStack_134[1] = local_230.M.M[1][1];
        local_150 = fVar26;
        FSlateDrawElement::MakeBox
                  (param_4,param_5,(FPaintGeometry *)&local_158._s_0,pFVar20,None,
                   (FLinearColor *)&local_320._s_0);
      }
    }
    if (1 < iVar18) {
      if ((pIVar15 == (ITableRow *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar6 = (code *)swi(3);
        iVar18 = (*pcVar6)();
        return iVar18;
      }
      iVar19 = (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
      afVar13 = _UNK_15076b188;
      afVar11 = ___xmm_3f80000000000000000000003f800000;
      fVar28 = 0.0;
      if (iVar19 != 0) {
        fVar28 = __real_41200000;
      }
      fVar27 = param_2->Scale;
      local_2b0 = (param_2->AbsolutePosition).field0_0x0._s_0;
      local_348._4_4_ = (*(float *)&(param_2->Size).field_0x4 - fVar9) * fVar3;
      fVar26 = (float)(iVar18 + -1) * (float)TVar1;
      ___xmm_3f80000000000000000000003f800000 = afVar10[0];
      _UNK_15076b184 = afVar10[1];
      local_218.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_218.M.M[0][1] = _UNK_15076b184;
      _UNK_15076b188 = afVar12[0];
      _UNK_15076b18c = afVar12[1];
      local_218.M.M[1][0] = _UNK_15076b188;
      local_218.M.M[1][1] = _UNK_15076b18c;
      local_348._0_4_ = fVar26 - fVar8;
      fVar3 = *(float *)&param_2->Size;
      local_218.Trans.field0_0x0 = local_348;
      local_338._4_4_ = fVar27 * (float)local_348._4_4_ + local_2b0.Y;
      local_338._0_4_ = fVar27 * (float)(undefined4)local_348 + local_2b0.X;
      ___xmm_3f80000000000000000000003f800000 = afVar11;
      _UNK_15076b188 = afVar13;
      Concatenate<TTransform2<float>_>(&local_200,&local_218,&param_2->AccumulatedRenderTransform);
      local_120 = local_338;
      local_10c = CONCAT44(0x40000000,((fVar3 - fVar26) - fVar9) - fVar28);
      local_ec = param_2->bHasRenderTransform * '\x02' | local_ec & 0xfc;
      local_114 = 0;
      local_f4 = local_200.Trans.field0_0x0;
      local_104[0] = local_200.M.M[0][0];
      local_104[1] = local_200.M.M[0][1];
      afStack_fc[0] = local_200.M.M[1][0];
      afStack_fc[1] = local_200.M.M[1][1];
      local_118 = fVar27;
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_120._s_0,pFVar20,None,
                 (FLinearColor *)&local_320._s_0);
    }
    if (local_1d8 != (undefined1 *)0x0) {
      FMemory::Free(local_1d8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    param_6 = local_2f0;
  }
  iVar18 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,local_2e0,param_2,local_2e8,param_4,param_5,param_6,
                      param_7);
  return iVar18;
}

// PrivateRegisterAttributes @ 142a32320

void __cdecl SExpanderArrow::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xf,L"ShouldDrawWires",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2d0,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a323b2:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a323b2;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x18,L"BaseIndentLevelAttribute",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2d8,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142a32441;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142a32441:
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x15,L"IndentAmountAttribute",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2d4,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// SetBaseIndentLevel @ 142a35ed0

void __thiscall SExpanderArrow::SetBaseIndentLevel(SExpanderArrow *this,TAttribute<int> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BaseIndentLevelAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetIndentAmount @ 142a36220

void __thiscall SExpanderArrow::SetIndentAmount(SExpanderArrow *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->IndentAmountAttribute,(SWidget *)this,param_1,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

