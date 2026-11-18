// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 21

// SUniformWrapPanel @ 1429bb640

SUniformWrapPanel * __thiscall SUniformWrapPanel::SUniformWrapPanel(SUniformWrapPanel *this)

{
  TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_02
  ;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_03;
  code *pcVar2;
  double _X;
  bool bVar3;
  int iVar4;
  SUniformWrapPanel *pSVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SUniformWrapPanel__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  this_00 = &this->SlotPadding;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_UFSlot_SUniformWrapPanel____6B_;
  pSVar5 = this + 1;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->SlotPadding).field_0x8 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if ((this_00 < this) || (pSVar5 <= this_00)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01 = &this->NumColumnsOverride;
  *(undefined4 *)&this_01->field_0x0 = 0;
  if ((this_01 < this) || (pSVar5 <= this_01)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  pTVar1 = &this->MinDesiredSlotWidth;
  *(undefined4 *)&pTVar1->field_0x0 = 0;
  iVar4 = _finite(0.0);
  if (iVar4 == 0) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res18);
  }
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  pTVar1 = &this->MinDesiredSlotHeight;
  *(undefined4 *)&pTVar1->field_0x0 = 0;
  iVar4 = _finite(0.0);
  if (iVar4 == 0) {
    local_58 = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(&local_58);
  }
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_57 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(&local_57);
  }
  _X = __real_47efffffe0000000;
  pTVar1 = &this->MaxDesiredSlotWidth;
  *(undefined4 *)&pTVar1->field_0x0 = 0x7f7fffff;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_56 = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(&local_56);
  }
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_55 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(&local_55);
  }
  pTVar1 = &this->MaxDesiredSlotHeight;
  *(undefined4 *)&pTVar1->field_0x0 = 0x7f7fffff;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_54 = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(&local_54);
  }
  if ((pTVar1 < this) || (pSVar5 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_53 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(&local_53);
  }
  this_02 = &this->HAlign;
  *(undefined4 *)&this_02->field_0x0 = 1;
  if ((this_02 < this) || (pSVar5 <= this_02)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar3) {
    local_52 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(&local_52);
  }
  this_03 = &this->EvenRowDistribution;
  this_03->field_0x0 = 0;
  if ((this_03 < this) || (pSVar5 <= this_03)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SUniformWrapPanel *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_03,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SUniformWrapPanel,void>'::__l2::<lambda_1>::operator()(&local_51);
  }
  return this;
}

// ~SUniformWrapPanel @ 1429c0340

void __thiscall SUniformWrapPanel::~SUniformWrapPanel(SUniformWrapPanel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SUniformWrapPanel__6B_;
  DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
             (this->Children).Children.AllocatorInstance.Data,(this->Children).Children.ArrayNum);
  pFVar1 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// AddSlot @ 1429c5ba0

FScopedWidgetSlotArguments * __thiscall
SUniformWrapPanel::AddSlot
          (SUniformWrapPanel *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *this_00;
  FScopedWidgetSlotArguments *pFVar3;
  
  this_00 = ::operator_new(0x28);
  if (this_00 == (FSlotBase *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScopedWidgetSlotArguments *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    this_00->_padding_ = 0;
    this_00->Owner = (FChildren *)0x0;
    (this_00->Widget).Object = (SWidget *)0x0;
    (this_00->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(this_00);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSlot_SUniformWrapPanel__6B_;
    __return_storage_ptr__->_padding_ = (longlong)this_00;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
  }
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  __return_storage_ptr__->Children = &this->Children;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ClearChildren @ 1429cd320

void __thiscall SUniformWrapPanel::ClearChildren(SUniformWrapPanel *this)

{
  int *piVar1;
  TArray<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Children).Children;
  this->NumColumns = 0;
  this->NumRows = 0;
  piVar1 = &(this->Children).Children.ArrayMax;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Children).Children.ArrayNum;
  local_10._4_4_ = (this->Children).Children.ArrayMax;
  *piVar1 = 0;
  (this->Children).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Children).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
             local_18.Data,(int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
              ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Children).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Children).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_>,int>
            ((TUniquePtr<SUniformWrapPanel::FSlot,TDefaultDelete<SUniformWrapPanel::FSlot>_> *)
             local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1429cf510

TVector2<double> * __thiscall
SUniformWrapPanel::ComputeDesiredSize
          (SUniformWrapPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  int iVar2;
  FGeometry *pFVar3;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  float local_res8;
  float fStackX_c;
  TVector2<double>_u_0 local_18;
  
  ComputeUniformCellSize(this,(TVector2<double> *)&local_18._s_0);
  if (this->NumVisibleChildren < 1) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  pFVar3 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  fVar1 = __real_bf000000;
  local_res8 = SUB84(pFVar3->Size,0);
  fStackX_c = SUB84(pFVar3->Size,4);
  if (((double)local_res8 == 0.0) && (fStackX_c == 0.0)) {
    TVar4 = this->NumColumnsOverride;
    if (TVar4 == (TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TVar4 = (TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
              -((int)ROUND(__real_bf000000 -
                           (SQRT((float)this->NumVisibleChildren) +
                           SQRT((float)this->NumVisibleChildren))) >> 1);
    }
  }
  else {
    TVar4 = this->NumColumnsOverride;
    if (TVar4 == (TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      TVar4 = SUB84((longlong)
                    ROUND((__real_3ff0000000000000 / local_18._s_0.X +
                          __real_3ff0000000000000 / local_18._s_0.X) * (double)local_res8 -
                          __real_3fe0000000000000) >> 1,0);
    }
  }
  this->NumColumns = (int)TVar4;
  iVar2 = this->NumVisibleChildren;
  if ((int)TVar4 < 1) {
    this->NumRows = iVar2;
    this->NumColumns = 1;
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_18._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar2 * local_18._s_0.Y;
    return __return_storage_ptr__;
  }
  iVar2 = -((int)ROUND(fVar1 - ((float)iVar2 + (float)iVar2) / (float)(int)TVar4) >> 1);
  this->NumRows = iVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)TVar4 * local_18._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar2 * local_18._s_0.Y;
  return __return_storage_ptr__;
}

// ComputeUniformCellSize @ 1429cfa10

TVector2<double> * __thiscall
SUniformWrapPanel::ComputeUniformCellSize
          (SUniformWrapPanel *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar3;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  SWidget *this_00;
  code *pcVar12;
  EVisibility EVar13;
  bool bVar14;
  TVector2<double> *pTVar15;
  FDeprecateSlateVector2D FVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  
  uVar18 = 0;
  iVar20 = (this->Children).Children.ArrayNum;
  fVar1 = *(float *)&(this->SlotPadding).field_0x8;
  TVar2 = this->MinDesiredSlotWidth;
  TVar3 = this->MinDesiredSlotHeight;
  TVar4 = this->MaxDesiredSlotWidth;
  TVar5 = this->MaxDesiredSlotHeight;
  fVar6 = *(float *)&this->SlotPadding;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  fVar7 = *(float *)&(this->SlotPadding).field_0xc;
  fVar8 = *(float *)&(this->SlotPadding).field_0x4;
  this->NumColumns = 0;
  this->NumRows = 0;
  this->NumVisibleChildren = 0;
  if (0 < iVar20) {
    lVar19 = 0;
    EVar13 = EVisibility::Collapsed;
    do {
      uVar17 = 0;
      if ((int)uVar18 < iVar20) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar13 = EVisibility::Collapsed, bVar14)) {
        pcVar12 = (code *)swi(3);
        pTVar15 = (TVector2<double> *)(*pcVar12)();
        return pTVar15;
      }
      this_00 = *(SWidget **)
                 (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar19) + 0x10);
      if ((TEnumAsByte<EVisibility::Private>)this_00->VisibilityAttribute != EVar13.Value.Value) {
        FVar16 = SWidget::GetDesiredSize(this_00);
        fVar9 = *(float *)FVar16;
        fVar10 = *(float *)((longlong)FVar16 + 4);
        if (((double)fVar9 != 0.0) || (EVar13 = EVisibility::Collapsed, (double)fVar10 != 0.0)) {
          this->NumVisibleChildren = this->NumVisibleChildren + 1;
          dVar21 = (double)(fVar1 + fVar6) + (double)fVar9;
          dVar22 = (double)(fVar7 + fVar8) + (double)fVar10;
          if (dVar21 <= (double)(float)TVar2) {
            dVar21 = (double)(float)TVar2;
          }
          dVar11 = (__return_storage_ptr__->field0_0x0)._s_0.X;
          if (dVar21 <= dVar11) {
            dVar21 = dVar11;
          }
          if ((double)(float)TVar4 <= dVar21) {
            dVar21 = (double)(float)TVar4;
          }
          (__return_storage_ptr__->field0_0x0)._s_0.X = dVar21;
          if (dVar22 <= (double)(float)TVar3) {
            dVar22 = (double)(float)TVar3;
          }
          dVar21 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
          if (dVar22 <= dVar21) {
            dVar22 = dVar21;
          }
          if ((double)(float)TVar5 <= dVar22) {
            dVar22 = (double)(float)TVar5;
          }
          (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar22;
          EVar13 = EVisibility::Collapsed;
        }
      }
      iVar20 = (this->Children).Children.ArrayNum;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 8;
    } while ((int)uVar18 < iVar20);
  }
  return __return_storage_ptr__;
}

// Construct @ 1429d8e50

void __thiscall SUniformWrapPanel::Construct(SUniformWrapPanel *this,FArguments *param_1)

{
  TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SlotPadding,(SWidget *)this,&param_1->_SlotPadding,None);
  this->NumColumns = 0;
  this->NumRows = 0;
  this->NumVisibleChildren = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotWidth,(SWidget *)this,&param_1->_MinDesiredSlotWidth,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotHeight,(SWidget *)this,&param_1->_MinDesiredSlotHeight,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredSlotWidth,(SWidget *)this,&param_1->_MaxDesiredSlotWidth,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->NumColumnsOverride,(SWidget *)this,&param_1->_NumColumnsOverride,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredSlotHeight,(SWidget *)this,&param_1->_MaxDesiredSlotHeight,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->HAlign,(SWidget *)this,&param_1->_HAlign,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->EvenRowDistribution,(SWidget *)this,&param_1->_EvenRowDistribution,None);
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SUniformWrapPanel::FSlot>::AddSlots(&this->Children,&local_18);
  return;
}

// GetChildren @ 1429ea740

FChildren * __thiscall SUniformWrapPanel::GetChildren(SUniformWrapPanel *this)

{
  return (FChildren *)&this->Children;
}

// GetPrivateWidgetClass @ 1429ed350

FSlateWidgetClassData * __cdecl SUniformWrapPanel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SUniformWrapPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SUniformWrapPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1429efec0

FSlateWidgetClassData * __thiscall SUniformWrapPanel::GetWidgetClass(SUniformWrapPanel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SUniformWrapPanel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SUniformWrapPanel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SUniformWrapPanel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 1429f89d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SUniformWrapPanel::OnArrangeChildren
          (SUniformWrapPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int *piVar1;
  EVisibility EVar2;
  TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FDeprecateSlateVector2D FVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_1d8 [32];
  undefined8 local_1a8;
  float local_1a0;
  TVector2<double>_u_0 local_180;
  FSlateLayoutTransform local_170;
  FDeprecateVector2DParameter local_164 [5];
  FArrangedWidget local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (0 < (this->Children).Children.ArrayNum) {
    ComputeUniformCellSize(this,(TVector2<double> *)&local_180._s_0);
    fVar29 = __real_bf000000;
    dVar15 = __real_3fe0000000000000;
    lVar10 = (longlong)(int)this->NumColumnsOverride;
    piVar1 = &this->NumVisibleChildren;
    if (this->NumColumnsOverride ==
        (TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      local_1a8._0_4_ = SUB84(param_1->Size,0);
      lVar10 = (longlong)
               ROUND((__real_3ff0000000000000 / local_180._s_0.X +
                     __real_3ff0000000000000 / local_180._s_0.X) * (double)(float)local_1a8 -
                     __real_3fe0000000000000) >> 1;
      if (*piVar1 < lVar10) {
        lVar10 = (longlong)*piVar1;
      }
      if (lVar10 < 1) {
        lVar10 = 1;
      }
    }
    fVar24 = (float)*piVar1;
    iVar12 = (int)lVar10;
    this->NumColumns = iVar12;
    iVar8 = -((int)ROUND(fVar29 - (fVar24 + fVar24) / (float)iVar12) >> 1);
    this->NumRows = iVar8;
    if (this->EvenRowDistribution !=
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      iVar12 = -((int)ROUND(fVar29 - (fVar24 + fVar24) / (float)iVar8) >> 1);
    }
    TVar3 = this->HAlign;
    fVar29 = 0.0;
    if (TVar3 == (TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x0) {
      local_1a8._0_4_ = SUB84(param_1->Size,0);
      local_180._s_0.X = (double)((float)local_1a8 / (float)iVar12);
    }
    else if (TVar3 == (TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                       )0x2) {
      local_1a8._0_4_ = SUB84(param_1->Size,0);
      auVar17._0_8_ = (double)iVar12 * local_180._s_0.X;
      auVar17._8_8_ = 0;
      auVar20._0_8_ = ((double)(float)local_1a8 - auVar17._0_8_) * dVar15;
      auVar20._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar20,1);
      fVar29 = (float)auVar17._0_8_;
    }
    else if (TVar3 == (TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                       )0x3) {
      local_1a8._0_4_ = SUB84(param_1->Size,0);
      auVar16._0_8_ = (double)iVar12 * local_180._s_0.X;
      auVar16._8_8_ = 0;
      auVar22._0_8_ = (double)(float)local_1a8 - auVar16._0_8_;
      auVar22._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar22,1);
      fVar29 = (float)auVar17._0_8_;
    }
    uVar6 = local_180._s_0.X;
    iVar8 = (this->Children).Children.ArrayNum;
    uVar14 = 0;
    iVar13 = 0;
    if (0 < iVar8) {
      lVar10 = 0;
      fVar24 = __real_3f000000;
      do {
        uVar9 = 0;
        if ((int)uVar14 < iVar8) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar10);
        EVar2.Value.Value =
             *(TEnumAsByte<EVisibility::Private> *)
              &(*(SWidget **)(lVar4 + 0x10))->VisibilityAttribute;
        if ((((param_2->VisibilityFilter).Value.Value & (byte)EVar2.Value.Value) != 0) &&
           ((FVar11 = SWidget::GetDesiredSize(*(SWidget **)(lVar4 + 0x10)), *(float *)FVar11 != 0.0
            || (*(float *)((longlong)FVar11 + 4) != 0.0)))) {
          fVar26 = *(float *)&(this->SlotPadding).field_0x8;
          fVar27 = *(float *)&this->SlotPadding;
          iVar8 = *(int *)(lVar4 + 0x20);
          fVar25 = (float)(double)uVar6;
          fVar28 = fVar25 - (fVar26 + fVar27);
          if (iVar8 == 0) {
LAB_1429f8d5f:
            local_1a8._0_4_ = fVar28;
            if (fVar28 <= 0.0) {
              local_1a8._0_4_ = 0.0;
            }
          }
          else {
            FVar11 = SWidget::GetDesiredSize(*(SWidget **)(lVar4 + 0x10));
            local_1a8._0_4_ = *(float *)FVar11;
            if (fVar28 <= *(float *)FVar11) {
              local_1a8._0_4_ = fVar28;
            }
            if ((float)local_1a8 <= 0.0) {
              local_1a8._0_4_ = 0.0;
            }
            if (iVar8 != 1) {
              if (iVar8 == 2) {
                fVar27 = ((fVar25 - (float)local_1a8) * fVar24 + fVar27) - fVar26;
              }
              else {
                if (iVar8 != 3) goto LAB_1429f8d5f;
                fVar27 = (fVar25 - (float)local_1a8) - fVar26;
              }
            }
          }
          fVar24 = *(float *)&(this->SlotPadding).field_0xc;
          fVar26 = *(float *)&(this->SlotPadding).field_0x4;
          iVar8 = *(int *)(lVar4 + 0x24);
          fVar28 = (float)local_180._s_0.Y;
          fVar25 = fVar28 - (fVar24 + fVar26);
          if (iVar8 == 0) {
LAB_1429f8df7:
            local_1a8._4_4_ = fVar25;
            if (fVar25 <= 0.0) {
              local_1a8._4_4_ = 0.0;
            }
          }
          else {
            FVar11 = SWidget::GetDesiredSize(*(SWidget **)(lVar4 + 0x10));
            local_1a8._4_4_ = *(float *)((longlong)FVar11 + 4);
            if (fVar25 <= *(float *)((longlong)FVar11 + 4)) {
              local_1a8._4_4_ = fVar25;
            }
            if (local_1a8._4_4_ <= 0.0) {
              local_1a8._4_4_ = 0.0;
            }
            if (iVar8 != 1) {
              if (iVar8 == 2) {
                fVar26 = ((fVar28 - local_1a8._4_4_) * __real_3f000000 + fVar26) - fVar24;
              }
              else {
                if (iVar8 != 3) goto LAB_1429f8df7;
                fVar26 = (fVar28 - local_1a8._4_4_) - fVar24;
              }
            }
          }
          if (iVar13 / iVar12 == this->NumRows + -1) {
            iVar8 = *piVar1 % iVar12;
            if (*piVar1 % iVar12 == 0) {
              iVar8 = iVar12;
            }
            if (this->HAlign ==
                (TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                 )0x3) {
              local_1a0 = SUB84(param_1->Size,0);
              auVar18._0_8_ = (double)iVar8 * (double)uVar6;
              auVar18._8_8_ = 0;
              auVar23._0_8_ = (double)local_1a0 - auVar18._0_8_;
              auVar23._8_8_ = 0;
              auVar17 = roundpd(auVar18,auVar23,1);
              dVar15 = auVar17._0_8_;
            }
            else {
              if (this->HAlign !=
                  (TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   )0x2) goto LAB_1429f8ea2;
              local_1a0 = SUB84(param_1->Size,0);
              auVar19._0_8_ = (double)iVar8 * (double)uVar6;
              auVar19._8_8_ = 0;
              auVar21._0_8_ = ((double)local_1a0 - auVar19._0_8_) * __real_3fe0000000000000;
              auVar21._8_8_ = 0;
              auVar17 = roundpd(auVar19,auVar21,1);
              dVar15 = auVar17._0_8_;
            }
            fVar29 = (float)dVar15;
          }
LAB_1429f8ea2:
          local_170.Scale = 1.0;
          local_164[0] = local_1a8;
          local_170.Translation.field0_0x0._s_0.X =
               (float)((double)(iVar13 % iVar12) * (double)uVar6 + (double)fVar27 + (double)fVar29);
          local_170.Translation.field0_0x0._s_0.Y =
               (float)((double)(iVar13 / iVar12) * local_180._s_0.Y + (double)fVar26);
          FGeometry::MakeChild
                    (param_1,&local_138,(TSharedRef<SWidget,1> *)(lVar4 + 0x10),local_164,&local_170
                    );
          FArrangedChildren::AddWidget(param_2,EVar2,&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.Widget.SharedReferenceCount.ReferenceController);
          iVar13 = iVar13 + 1;
          fVar24 = __real_3f000000;
        }
        iVar8 = (this->Children).Children.ArrayNum;
        uVar14 = uVar14 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar14 < iVar8);
    }
  }
  return;
}

// PrivateRegisterAttributes @ 142a03ca0

void __cdecl SUniformWrapPanel::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xb,L"SlotPadding",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x248,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a03d32:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a03d32;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x13,L"MinDesiredSlotWidth",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x268,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a03db7:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a03db7;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x14,L"MinDesiredSlotHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x26c,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a03e3c:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a03e3c;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x13,L"MaxDesiredSlotWidth",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a03ec1:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a03ec1;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x12,L"NumColumnsOverride",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x264,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a03f46:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a03f46;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x14,L"MaxDesiredSlotHeight",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x274,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142a03fcb:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142a03fcb;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,6,L"HAlign",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x278,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142a0405a;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142a0405a:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x13,L"EvenRowDistribution",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x27c,(FInvalidateWidgetReasonAttribute *)local_28);
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

// RemoveSlot @ 142a05c00

bool __thiscall
SUniformWrapPanel::RemoveSlot(SUniformWrapPanel *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SUniformWrapPanel::FSlot>::Remove(&this->Children,param_1);
  return iVar1 != -1;
}

// SetEvenRowDistribution @ 142a09900

void __thiscall
SUniformWrapPanel::SetEvenRowDistribution(SUniformWrapPanel *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->EvenRowDistribution,(SWidget *)this,param_1,None);
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

// SetHorizontalAlignment @ 142a0a580

void __thiscall
SUniformWrapPanel::SetHorizontalAlignment
          (SUniformWrapPanel *this,TAttribute<EHorizontalAlignment> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->HAlign,(SWidget *)this,param_1,None);
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

// SetMaxDesiredSlotHeight @ 142a0acc0

void __thiscall
SUniformWrapPanel::SetMaxDesiredSlotHeight(SUniformWrapPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredSlotHeight,(SWidget *)this,param_1,None);
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

// SetMaxDesiredSlotWidth @ 142a0ad10

void __thiscall
SUniformWrapPanel::SetMaxDesiredSlotWidth(SUniformWrapPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MaxDesiredSlotWidth,(SWidget *)this,param_1,None);
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

// SetMinDesiredSlotHeight @ 142a0ade0

void __thiscall
SUniformWrapPanel::SetMinDesiredSlotHeight(SUniformWrapPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotHeight,(SWidget *)this,param_1,None);
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

// SetMinDesiredSlotWidth @ 142a0ae80

void __thiscall
SUniformWrapPanel::SetMinDesiredSlotWidth(SUniformWrapPanel *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->MinDesiredSlotWidth,(SWidget *)this,param_1,None);
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

// SetNumColumnsOverride @ 142a0af50

void __thiscall
SUniformWrapPanel::SetNumColumnsOverride(SUniformWrapPanel *this,TAttribute<int> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->NumColumnsOverride,(SWidget *)this,param_1,None);
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

// SetSlotPadding @ 142a0bde0

void __thiscall
SUniformWrapPanel::SetSlotPadding(SUniformWrapPanel *this,TAttribute<FMargin> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SlotPadding,(SWidget *)this,param_1,None);
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

