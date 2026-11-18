// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 18

// SBackgroundBlur @ 1428b9520

SBackgroundBlur * __thiscall SBackgroundBlur::SBackgroundBlur(SBackgroundBlur *this)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<TOptional<int>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<UE::Math::TVector4<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_02;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  SBackgroundBlur *pSVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [24];
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SBackgroundBlur__6B_;
  this_00 = &this->BlurStrengthAttribute;
  *(undefined4 *)&this_00->field_0x0 = 0;
  iVar3 = _finite(0.0);
  if (iVar3 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  pSVar4 = this + 1;
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
      pSVar4 = (SBackgroundBlur *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar2) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBackgroundBlur,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_01 = &this->BlurRadiusAttribute;
  (this->BlurRadiusAttribute).field_0x4 = 0;
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
      pSVar4 = (SBackgroundBlur *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar2) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBackgroundBlur,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  this_02 = &this->CornerRadiusAttribute;
  *(undefined8 *)&this_02->field_0x0 = 0;
  *(undefined8 *)&(this->CornerRadiusAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->CornerRadiusAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->CornerRadiusAttribute).field_0x18 = 0;
  iVar3 = _finite(*(double *)&this_02->field_0x0);
  if (iVar3 != 0) {
    iVar3 = _finite(*(double *)&(this->CornerRadiusAttribute).field_0x8);
    if (iVar3 != 0) {
      iVar3 = _finite(*(double *)&(this->CornerRadiusAttribute).field_0x10);
      if (iVar3 != 0) {
        iVar3 = _finite(*(double *)&(this->CornerRadiusAttribute).field_0x18);
        if (iVar3 != 0) goto LAB_1428b9670;
      }
    }
  }
  local_res20[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l33::<lambda_1>::operator()(local_res20);
LAB_1428b9670:
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
      pSVar4 = (SBackgroundBlur *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBackgroundBlur,void>'::__l2::<lambda_1>::operator()(local_38);
  }
  return this;
}

// ~SBackgroundBlur @ 1428c1060

void __thiscall SBackgroundBlur::~SBackgroundBlur(SBackgroundBlur *this)

{
  this->_padding_ = (longlong)&___7SBackgroundBlur__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ComputeEffectiveKernelSize @ 1428e21c0

void __thiscall
SBackgroundBlur::ComputeEffectiveKernelSize
          (SBackgroundBlur *this,float param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (int)ROUND(param_1 * __real_40c00000 + __real_3f000000) >> 1;
  if ((this->BlurRadiusAttribute).field_0x4 != '\0') {
    uVar4 = *(uint *)&this->BlurRadiusAttribute;
  }
  *param_2 = uVar4;
  uVar2 = (ulonglong)uVar4;
  if ((bDownsampleForBlur != 0) && (9 < (int)uVar4)) {
    if ((int)uVar4 < 0x40) {
      iVar3 = 2;
    }
    else {
      iVar3 = (0x5f < (int)uVar4) + 3;
    }
    *param_3 = iVar3;
    uVar2 = (longlong)*param_2 / (longlong)iVar3 & 0xffffffff;
    *param_2 = (int)((longlong)*param_2 / (longlong)iVar3);
  }
  iVar3 = (int)uVar2;
  if ((uVar2 & 1) == 0) {
    iVar3 = iVar3 + 1;
    *param_2 = iVar3;
  }
  iVar1 = MaxKernelSize;
  if (iVar3 < MaxKernelSize) {
    iVar1 = iVar3;
  }
  iVar3 = 3;
  if (3 < iVar1) {
    iVar3 = iVar1;
  }
  *param_2 = iVar3;
  return;
}

// Construct @ 1428f8730

void __thiscall SBackgroundBlur::Construct(SBackgroundBlur *this,FArguments *param_1)

{
  longlong *plVar1;
  bool bVar2;
  EWidgetUpdateFlags EVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 auVar9 [8];
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar10;
  EVerticalAlignment *pEVar11;
  longlong *this_00;
  EWidgetUpdateFlags EVar12;
  FDestructionSentinel local_68;
  undefined1 local_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined1 local_20 [24];
  
  auVar9 = local_48;
  this->bApplyAlphaToBlur = param_1->_bApplyAlphaToBlur;
  this->LowQualityFallbackBrush = param_1->_LowQualityFallbackBrush;
  uVar7 = (param_1->_BlurStrength).Value;
  uVar8 = (param_1->_BlurStrength).bIsSet;
  local_48[4] = uVar8;
  local_48._0_4_ = uVar7;
  auStack_40 = (undefined1  [8])0x0;
  auStack_38 = (undefined1  [8])0x0;
  local_48._5_3_ = auVar9._5_3_;
  auStack_30 = (undefined1  [8])((ulonglong)auStack_30 & 0xffffffff00000000);
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_40,
             &(param_1->_BlurStrength).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BlurStrengthAttribute,(SWidget *)this,(TAttribute<float> *)local_48,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_40,
             (FWriteAccessScope *)&local_68);
  if ((auStack_30._0_4_ != 0) &&
     ((atomic<unsigned___int64>)auStack_38 != (atomic<unsigned___int64>)0x0)) {
    (*(code *)**(undefined8 **)auStack_38)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_38,0,0,0x10);
    auStack_30 = (undefined1  [8])((ulonglong)auStack_30 & 0xffffffff00000000);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if ((atomic<unsigned___int64>)auStack_38 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)auStack_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_40);
  bVar2 = (param_1->_BlurRadius).Value.bIsSet;
  local_48[4] = bVar2;
  if (bVar2 != false) {
    local_48._0_4_ = (param_1->_BlurRadius).Value.TypedValue;
  }
  auStack_40[0] = (param_1->_BlurRadius).bIsSet;
  uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
  auStack_38 = (undefined1  [8])0x0;
  auStack_30 = (undefined1  [8])0x0;
  TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TOptional<int>___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_38,
             &(param_1->_BlurRadius).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BlurRadiusAttribute,(SWidget *)this,(TAttribute<TOptional<int>_> *)local_48,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_38,
             (FWriteAccessScope *)&local_68);
  if (((int)uStack_28 != 0) && (auStack_30 != (undefined1  [8])0x0)) {
    (*(code *)**(undefined8 **)auStack_30)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)auStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (auStack_30 != (undefined1  [8])0x0) {
    FMemory::Free((void *)auStack_30);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_38);
  local_48 = (undefined1  [8])(param_1->_CornerRadius).Value.field0_0x0._s_0.X;
  auStack_40 = (undefined1  [8])(param_1->_CornerRadius).Value.field0_0x0._s_0.Y;
  auStack_38 = (undefined1  [8])(param_1->_CornerRadius).Value.field0_0x0._s_0.Z;
  auStack_30 = (undefined1  [8])(param_1->_CornerRadius).Value.field0_0x0._s_0.W;
  uStack_28._0_1_ = (param_1->_CornerRadius).bIsSet;
  TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector4<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_20,&(param_1->_CornerRadius).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->CornerRadiusAttribute,(SWidget *)this,
           (TAttribute<UE::Math::TVector4<double>_> *)local_48,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  plVar1 = &this->_padding_;
  *(EHorizontalAlignment *)plVar1 = param_1->_HAlign;
  pEVar11 = (EVerticalAlignment *)((longlong)&this->_padding_ + 4);
  local_20._0_4_ = 0;
  if (plVar1 == (longlong *)0x0) {
    pEVar11 = (EVerticalAlignment *)&DAT_00000054;
  }
  *pEVar11 = param_1->_VAlign;
  local_48 = *(undefined1 (*) [8])&(param_1->_Padding).Value;
  auStack_40 = *(undefined1 (*) [8])&(param_1->_Padding).Value.Right;
  auStack_38[0] = (param_1->_Padding).bIsSet;
  auStack_30 = (undefined1  [8])0x0;
  uStack_28 = 0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30,
             &(param_1->_Padding).Getter);
  this_00 = &this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    this_00 = (longlong *)&DAT_00000040;
  }
  pTVar10 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)this_00,(TAttribute<FMargin> *)local_48);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&pTVar10->field_0x20);
  pTVar4 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_Content).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x38;
  *(SWidget **)&pTVar10->field_0x30 = pSVar5;
  *(TReferenceControllerBase<1> **)&pTVar10->field_0x38 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&pTVar10->field_0x20);
  EVar3 = (EWidgetUpdateFlags)this->_padding_;
  EVar12 = EVar3 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar12;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar3,EVar12);
  return;
}

// GetPrivateWidgetClass @ 142946920

FSlateWidgetClassData * __cdecl SBackgroundBlur::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SBackgroundBlur");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SBackgroundBlur::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14294c590

FSlateWidgetClassData * __thiscall SBackgroundBlur::GetWidgetClass(SBackgroundBlur *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SBackgroundBlur");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBackgroundBlur::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBackgroundBlur::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// IsUsingLowQualityFallbackBrush @ 142957040

bool __thiscall SBackgroundBlur::IsUsingLowQualityFallbackBrush(SBackgroundBlur *this)

{
  return bForceLowQualityBrushFallback == 1;
}

// OnPaint @ 14297d700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SBackgroundBlur::OnPaint
          (SBackgroundBlur *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  FSlateBrush *pFVar2;
  bool bVar3;
  uint uVar4;
  FSlateRotatedRect *this_00;
  FSlateClippingZone *pFVar5;
  FSlateColor *this_01;
  uint uVar6;
  int iVar7;
  ESlateDrawEffect EVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [8];
  TVector2<float>_u_0 local_120 [3];
  FSlateWindowElementList *local_108;
  FLinearColor_u_0 local_100;
  undefined1 local_e8 [8];
  undefined1 auStack_e0 [40];
  FSlateRect *local_b8;
  FPaintArgs *local_b0;
  TVector2<float>_u_0 local_a8;
  float local_a0;
  undefined8 local_9c;
  TVector2<float>_u_0 local_94;
  float local_8c [2];
  float afStack_84 [2];
  TVector2<float>_u_0 local_7c;
  byte local_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_108 = param_4;
  local_b8 = param_3;
  local_b0 = param_1;
  if (bAllowBackgroundBlur != 0) {
    local_128 = *(undefined1 (*) [8])&param_2->Size;
    fVar14 = (float)local_128._0_4_;
    if ((float)local_128._4_4_ <= (float)local_128._0_4_) {
      fVar14 = (float)local_128._4_4_;
    }
    if (0.0 < fVar14) {
      if (bForceLowQualityBrushFallback == 1) {
        pFVar2 = this->LowQualityFallbackBrush;
        if ((pFVar2 == (FSlateBrush *)0x0) || ((pFVar2->DrawAs).Value == '\0')) goto LAB_14297db7a;
        if ((!param_7) || (bVar3 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
          bVar3 = false;
        }
        this_01 = &pFVar2->TintColor;
        EVar1 = (pFVar2->TintColor).ColorUseRule;
        EVar8 = DisabledEffect;
        if (bVar3) {
          EVar8 = None;
        }
        if (EVar1 != UseColor_Specified) {
          if (EVar1 == UseColor_ColorTable) {
            this_01 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
          }
          else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
            this_01 = (FSlateColor *)&param_6->ForegroundColor;
          }
          else {
            this_01 = (FSlateColor *)&param_6->SubduedForeground;
          }
        }
        local_a8 = (param_2->AbsolutePosition).field0_0x0;
        local_100._s_0.R =
             (this_01->SpecifiedColor).field0_0x0._s_0.R *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
        local_94._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
        local_100._s_0.G =
             (this_01->SpecifiedColor).field0_0x0._s_0.G *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
        local_100._s_0.B =
             (this_01->SpecifiedColor).field0_0x0._s_0.B *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
        local_74 = param_2->bHasRenderTransform * '\x02' | local_74 & 0xfc;
        local_100._s_0.A =
             (this_01->SpecifiedColor).field0_0x0._s_0.A *
             (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
        local_a0 = param_2->Scale;
        local_8c = (param_2->AccumulatedRenderTransform).M.M[0];
        afStack_84 = (param_2->AccumulatedRenderTransform).M.M[1];
        local_9c = 0;
        local_7c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
        FSlateDrawElement::MakeBox
                  (param_4,param_5,(FPaintGeometry *)&local_a8._s_0,this->LowQualityFallbackBrush,
                   EVar8,(FLinearColor *)&local_100._s_0);
      }
      else {
        fVar14 = __real_3f800000;
        if (this->bApplyAlphaToBlur != false) {
          fVar14 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
        }
        fVar14 = fVar14 * (float)this->BlurStrengthAttribute;
        if (fVar14 <= 0.0) goto LAB_14297db7a;
        auStack_e0._0_4_ = local_128._0_4_;
        auStack_e0._12_4_ = local_128._4_4_;
        local_e8 = (undefined1  [8])0x0;
        auStack_e0._4_8_ = 0;
        this_00 = TransformRect<TTransform2<float>_>
                            ((FSlateRotatedRect *)local_128,&param_2->AccumulatedRenderTransform,
                             (FSlateRotatedRect *)local_e8);
        FSlateRotatedRect::ToBoundingRect(this_00,(FSlateRect *)&local_100._s_0);
        iVar7 = 0;
        fVar11 = local_100._s_0.B - local_100._s_0.R;
        fVar13 = local_100._s_0.A - local_100._s_0.G;
        local_a8._s_0.Y = local_100._s_0.G;
        local_a8._s_0.X = local_100._s_0.R;
        local_a0 = param_2->Scale;
        local_7c = (TVector2<float>_u_0)0x0;
        local_74 = local_74 & 0xfd | 1;
        local_9c = CONCAT44(fVar13,fVar11);
        local_94 = (TVector2<float>_u_0)0x0;
        uVar4 = (int)ROUND(fVar14 * __real_40c00000 + __real_3f000000) >> 1;
        local_8c[0] = ___xmm_3f80000000000000000000003f800000;
        local_8c[1] = _UNK_15076b184;
        afStack_84[0] = _UNK_15076b188;
        afStack_84[1] = _UNK_15076b18c;
        iVar9 = (int)ROUND(fVar11 + fVar11 + __real_3f000000) >> 1;
        iVar10 = (int)ROUND(fVar13 + fVar13 + __real_3f000000) >> 1;
        if ((this->BlurRadiusAttribute).field_0x4 != '\0') {
          uVar4 = *(uint *)&this->BlurRadiusAttribute;
        }
        if ((bDownsampleForBlur != 0) && (9 < (int)uVar4)) {
          if ((int)uVar4 < 0x40) {
            iVar7 = 2;
          }
          else {
            iVar7 = (0x5f < (int)uVar4) + 3;
          }
          uVar4 = (int)uVar4 / iVar7;
        }
        if (fVar14 <= __real_3f000000) {
          fVar14 = __real_3f000000;
        }
        uVar6 = uVar4 + 1;
        if ((uVar4 & 1) != 0) {
          uVar6 = uVar4;
        }
        uVar4 = MaxKernelSize;
        if ((int)uVar6 < MaxKernelSize) {
          uVar4 = uVar6;
        }
        local_128._0_4_ = 3;
        if (3 < (int)uVar4) {
          local_128._0_4_ = uVar4;
        }
        local_128._4_4_ = 0;
        if (iVar7 != 0) {
          iVar9 = (iVar9 + -1 + iVar7) / iVar7;
          iVar10 = (iVar10 + -1 + iVar7) / iVar7;
          fVar14 = fVar14 / (float)iVar7;
        }
        param_4 = local_108;
        if ((0 < iVar9) && (0 < iVar10)) {
          pFVar5 = FSlateClippingZone::FSlateClippingZone((FSlateClippingZone *)local_e8,param_2);
          FSlateWindowElementList::PushClip(local_108,pFVar5);
          param_4 = local_108;
          dVar12 = (double)param_2->Scale;
          auStack_e0._0_4_ =
               (undefined4)(dVar12 * *(double *)&(this->CornerRadiusAttribute).field_0x10);
          local_128._4_4_ = fVar14;
          local_128._0_4_ = (float)(int)local_128._0_4_;
          local_120[0]._4_4_ = (undefined4)iVar10;
          local_120[0]._0_4_ = (undefined4)iVar9;
          local_e8._4_4_ = (float)(dVar12 * *(double *)&(this->CornerRadiusAttribute).field_0x8);
          local_e8._0_4_ = (float)(dVar12 * *(double *)&this->CornerRadiusAttribute);
          auStack_e0._8_4_ = SUB84(auStack_e0._4_8_,4);
          auStack_e0._4_4_ = (float)(dVar12 * *(double *)&(this->CornerRadiusAttribute).field_0x18);
          FSlateDrawElement::MakePostProcessBlur
                    (local_108,param_5,(FPaintGeometry *)&local_a8._s_0,(TVector4<float> *)local_128
                     ,iVar7,(TVector4<float> *)local_e8);
          FSlateWindowElementList::PopClip(param_4);
        }
      }
      param_5 = param_5 + 1;
    }
  }
LAB_14297db7a:
  iVar9 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,local_b0,param_2,local_b8,param_4,param_5,param_6,
                     param_7);
  return iVar9;
}

// PrivateRegisterAttributes @ 142984c50

void __cdecl SBackgroundBlur::PrivateRegisterAttributes(FInitializer *param_1)

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
  pFVar1 = ::FName::FName(&local_res10,"BlurStrength");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2b8,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142984cd7:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142984cd7;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"BlurRadius");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,700,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142984d5b;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142984d5b:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"CornerRadius");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2d0,(FInvalidateWidgetReasonAttribute *)local_28);
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

// SetApplyAlphaToBlur @ 14298e370

void __thiscall SBackgroundBlur::SetApplyAlphaToBlur(SBackgroundBlur *this,bool param_1)

{
  if (this->bApplyAlphaToBlur != param_1) {
    this->bApplyAlphaToBlur = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetBlurRadius @ 14298e780

void __thiscall
SBackgroundBlur::SetBlurRadius(SBackgroundBlur *this,TAttribute<TOptional<int>_> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<int>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BlurRadiusAttribute,(SWidget *)this,param_1,None);
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

// SetBlurStrength @ 14298e7d0

void __thiscall SBackgroundBlur::SetBlurStrength(SBackgroundBlur *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BlurStrengthAttribute,(SWidget *)this,param_1,None);
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

// SetContent @ 14298eed0

void __thiscall SBackgroundBlur::SetContent(SBackgroundBlur *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// SetCornerRadius @ 14298f520

void __thiscall
SBackgroundBlur::SetCornerRadius
          (SBackgroundBlur *this,TAttribute<UE::Math::TVector4<double>_> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->CornerRadiusAttribute,(SWidget *)this,param_1,None);
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

// SetHAlign @ 142990c60

void __thiscall SBackgroundBlur::SetHAlign(SBackgroundBlur *this,EHorizontalAlignment param_1)

{
  longlong *plVar1;
  FSlotBase *this_00;
  
  plVar1 = &this->_padding_;
  if ((EHorizontalAlignment)*plVar1 != param_1) {
    *(EHorizontalAlignment *)plVar1 = param_1;
    this_00 = (FSlotBase *)&this->_padding_;
    if (plVar1 == (longlong *)0x0) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

// SetLowQualityBackgroundBrush @ 142992f60

void __thiscall
SBackgroundBlur::SetLowQualityBackgroundBrush(SBackgroundBlur *this,FSlateBrush *param_1)

{
  if (this->LowQualityFallbackBrush != param_1) {
    this->LowQualityFallbackBrush = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetPadding @ 1429984e0

void __thiscall SBackgroundBlur::SetPadding(SBackgroundBlur *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  TAttribute<FMargin> local_38;
  
  local_38.Value.Left = (param_1->Value).Left;
  local_38.Value.Top = (param_1->Value).Top;
  local_38.Value.Right = (param_1->Value).Right;
  local_38.Value.Bottom = (param_1->Value).Bottom;
  local_38.bIsSet = param_1->bIsSet;
  this_00 = &param_1->Getter;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_38.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
             &this->_padding_,&local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetVAlign @ 14299f030

void __thiscall SBackgroundBlur::SetVAlign(SBackgroundBlur *this,EVerticalAlignment param_1)

{
  FSlotBase *this_00;
  
  if (*(EVerticalAlignment *)((longlong)&this->_padding_ + 4) != param_1) {
    *(EVerticalAlignment *)((longlong)&this->_padding_ + 4) = param_1;
    this_00 = (FSlotBase *)&this->_padding_;
    if (this == (SBackgroundBlur *)0xfffffffffffffd98) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

