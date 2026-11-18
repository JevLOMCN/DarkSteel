// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 18

// GetPrivateWidgetClass @ 142743510

FSlateWidgetClassData * __cdecl SBorder::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SBorder");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SBorder::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1427461d0

FSlateWidgetClassData * __thiscall SBorder::GetWidgetClass(SBorder *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SBorder");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SCompoundWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SBorder::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SBorder::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// SBorder @ 1428b96d0

SBorder * __thiscall SBorder::SBorder(SBorder *this)

{
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_02;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_03;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar6;
  SBorder *pSVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  FName local_50 [3];
  uint local_38;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SBorder__6B_;
  this_00 = &this->BorderImageAttribute;
  pIVar4 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
  pFVar5 = ::FName::FName(local_50,"Border");
  TVar6 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
          (*pcVar1)(pIVar4,*pFVar5,0,0);
  *this_00 = TVar6;
  pSVar7 = this + 1;
  if ((this_00 < this) || (pSVar7 <= this_00)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar7 = (SBorder *)(*pcVar1)();
      return pSVar7;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar2) {
    local_res8[0] = bVar2;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBorder,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01 = &this->BorderBackgroundColorAttribute;
  local_38 = local_38 & 0xffffff00;
  *(FLinearColor_u_0 *)this_01 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(uint *)&(this->BorderBackgroundColorAttribute).field_0x10 = local_38;
  if ((this_01 < this) || (pSVar7 <= this_01)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar7 = (SBorder *)(*pcVar1)();
      return pSVar7;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar2) {
    local_res10[0] = bVar2;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBorder,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_02 = &this->DesiredSizeScaleAttribute;
  *(undefined8 *)this_02 = 0x3ff0000000000000;
  *(undefined8 *)&(this->DesiredSizeScaleAttribute).field_0x8 = 0x3ff0000000000000;
  iVar3 = _finite(*(double *)this_02);
  if (iVar3 != 0) {
    iVar3 = _finite(*(double *)&(this->DesiredSizeScaleAttribute).field_0x8);
    if (iVar3 != 0) goto LAB_1428b9838;
  }
  local_res18[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res18);
LAB_1428b9838:
  if ((this_02 < this) || (pSVar7 <= this_02)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar7 = (SBorder *)(*pcVar1)();
      return pSVar7;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar2) {
    local_res20[0] = bVar2;
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBorder,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  this_03 = &this->ShowDisabledEffectAttribute;
  *this_03 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1;
  if ((this_03 < this) || (pSVar7 <= this_03)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar7 = (SBorder *)(*pcVar1)();
      return pSVar7;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_03,(SWidget *)this);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SBorder,void>'::__l2::<lambda_1>::operator()(local_58);
  }
  this->bFlipForRightToLeftFlowDirection = false;
  return this;
}

// ~SBorder @ 1428c1080

void __thiscall SBorder::~SBorder(SBorder *this)

{
  this->_padding_ = (longlong)&___7SBorder__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ClearContent @ 1428db560

void __thiscall SBorder::ClearContent(SBorder *this)

{
  TSharedPtr<SWidget,1> local_18;
  
  FSlotBase::DetachWidget((FSlotBase *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ComputeDesiredSize @ 1428e07e0

TVector2<double> * __thiscall
SBorder::ComputeDesiredSize(SBorder *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  TVector2<double> local_18;
  
  pTVar3 = SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,&local_18,param_1);
  dVar1 = *(double *)&(this->DesiredSizeScaleAttribute).field_0x8;
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (pTVar3->field0_0x0)._s_0.X * *(double *)&this->DesiredSizeScaleAttribute;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 * dVar2;
  return __return_storage_ptr__;
}

// Construct @ 1428f8a40

void __thiscall SBorder::Construct(SBorder *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 auVar8 [8];
  char cVar9;
  FName FVar10;
  bool *pbVar11;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar12;
  EVerticalAlignment *pEVar13;
  longlong *this_00;
  longlong *plVar14;
  EWidgetUpdateFlags EVar15;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  undefined1 auStack_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  int local_28;
  
  FVar10 = SWidget::GetType((SWidget *)this);
  if (*(FName *)FVar10 == SBorderTypeName) {
    EVar1 = (EWidgetUpdateFlags)this->_padding_;
    EVar15 = EVar1 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar15;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar15);
    *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  }
  local_50 = (undefined1  [8])(param_1->_ContentScale).Value.field0_0x0._s_0.X;
  auStack_48 = (undefined1  [8])(param_1->_ContentScale).Value.field0_0x0._s_0.Y;
  local_40[0] = (param_1->_ContentScale).bIsSet;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_38,&(param_1->_ContentScale).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<UE::Math::TVector2<double>_> *)local_50,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  local_50 = *(undefined1 (*) [8])&(param_1->_ColorAndOpacity).Value.field0_0x0;
  auStack_48 = *(undefined1 (*) [8])((longlong)&(param_1->_ColorAndOpacity).Value.field0_0x0 + 8);
  local_40[0] = (param_1->_ColorAndOpacity).bIsSet;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
             &(param_1->_ColorAndOpacity).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FLinearColor> *)local_50,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  local_50 = (undefined1  [8])(param_1->_DesiredSizeScale).Value.field0_0x0._s_0.X;
  auStack_48 = (undefined1  [8])(param_1->_DesiredSizeScale).Value.field0_0x0._s_0.Y;
  local_40[0] = (param_1->_DesiredSizeScale).bIsSet;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_38,&(param_1->_DesiredSizeScale).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DesiredSizeScaleAttribute,(SWidget *)this,
           (TAttribute<UE::Math::TVector2<double>_> *)local_50,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  auVar8 = local_50;
  uVar6 = (param_1->_ShowEffectWhenDisabled).Value;
  uVar7 = (param_1->_ShowEffectWhenDisabled).bIsSet;
  local_50[1] = uVar7;
  local_50[0] = uVar6;
  local_50._2_6_ = auVar8._2_6_;
  auStack_48 = (undefined1  [8])0x0;
  local_40 = (undefined1  [8])0x0;
  local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_48,
             &(param_1->_ShowEffectWhenDisabled).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_48,
             (FReadAccessScope *)&local_68);
  if ((local_38._0_4_ == 0) || (local_40 == (undefined1  [8])0x0)) {
LAB_1428f8ccc:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
    if (local_50[1] == '\0') {
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                ((FSlateAttributeImpl *)&this->ShowDisabledEffectAttribute,(SWidget *)this,Member);
    }
    else {
      pbVar11 = TAttribute<bool>::Get((TAttribute<bool> *)local_50);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Set((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
             *)&this->ShowDisabledEffectAttribute,(SWidget *)this,pbVar11);
    }
  }
  else {
    cVar9 = (**(code **)(*(longlong *)local_40 + 0x38))();
    if (cVar9 == '\0') goto LAB_1428f8ccc;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::AssignBinding((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                     *)&this->ShowDisabledEffectAttribute,(SWidget *)this,
                    (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_48,None);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_48,
             (FWriteAccessScope *)&local_68);
  if ((local_38._0_4_ != 0) && (local_40 != (undefined1  [8])0x0)) {
    (*(code *)**(undefined8 **)local_40)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)local_40,0,0,0x10);
    local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_40 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_40);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_48);
  this->bFlipForRightToLeftFlowDirection = param_1->_FlipForRightToLeftFlowDirection;
  local_50 = (undefined1  [8])(param_1->_BorderImage).Value;
  auStack_48[0] = (param_1->_BorderImage).bIsSet;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,
             &(param_1->_BorderImage).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BorderImageAttribute,(SWidget *)this,
           (TAttribute<FSlateBrush_const_*> *)local_50,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
  if ((atomic<unsigned___int64>)local_38 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  local_50 = *(undefined1 (*) [8])&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0
  ;
  auStack_48 = *(undefined1 (*) [8])
                ((longlong)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_40._0_5_ = *(undefined5 *)&(param_1->_BorderBackgroundColor).Value.ColorUseRule;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
             &(param_1->_BorderBackgroundColor).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BorderBackgroundColorAttribute,(SWidget *)this,
           (TAttribute<FSlateColor> *)local_50,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  local_50 = *(undefined1 (*) [8])&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  auStack_48 = *(undefined1 (*) [8])
                ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  local_40._0_5_ = *(undefined5 *)&(param_1->_ForegroundColor).Value.ColorUseRule;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
             &(param_1->_ForegroundColor).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateColor> *)local_50,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMouseButtonDown,
             (FReadAccessScope *)&local_68);
  if ((*(int *)&(param_1->_OnMouseButtonDown).field_0x10 == 0) ||
     (plVar14 = *(longlong **)&(param_1->_OnMouseButtonDown).field_0x8, plVar14 == (longlong *)0x0))
  {
LAB_1428f8f81:
    bVar5 = false;
  }
  else {
    cVar9 = (**(code **)(*plVar14 + 0x38))();
    if (cVar9 == '\0') goto LAB_1428f8f81;
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_68);
  if (bVar5) {
    local_68.AccessType = Reader;
    local_68._4_4_ = 0;
    local_68.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_68.bDestroyed = false;
    local_68._17_3_ = 0;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68,&param_1->_OnMouseButtonDown);
    SWidget::SetOnMouseButtonDown
              ((SWidget *)this,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMouseButtonUp,
             (FReadAccessScope *)&local_68);
  if ((*(int *)&(param_1->_OnMouseButtonUp).field_0x10 == 0) ||
     (plVar14 = *(longlong **)&(param_1->_OnMouseButtonUp).field_0x8, plVar14 == (longlong *)0x0)) {
LAB_1428f8fee:
    bVar5 = false;
  }
  else {
    cVar9 = (**(code **)(*plVar14 + 0x38))();
    if (cVar9 == '\0') goto LAB_1428f8fee;
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_68);
  if (bVar5) {
    local_68.AccessType = Reader;
    local_68._4_4_ = 0;
    local_68.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_68.bDestroyed = false;
    local_68._17_3_ = 0;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68,&param_1->_OnMouseButtonUp);
    SWidget::SetOnMouseButtonUp
              ((SWidget *)this,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMouseMove,
             (FReadAccessScope *)&local_68);
  if ((*(int *)&(param_1->_OnMouseMove).field_0x10 == 0) ||
     (plVar14 = *(longlong **)&(param_1->_OnMouseMove).field_0x8, plVar14 == (longlong *)0x0)) {
LAB_1428f905b:
    bVar5 = false;
  }
  else {
    cVar9 = (**(code **)(*plVar14 + 0x38))();
    if (cVar9 == '\0') goto LAB_1428f905b;
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_68);
  if (bVar5) {
    local_68.AccessType = Reader;
    local_68._4_4_ = 0;
    local_68.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_68.bDestroyed = false;
    local_68._17_3_ = 0;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68,&param_1->_OnMouseMove);
    SWidget::SetOnMouseMove
              ((SWidget *)this,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMouseDoubleClick
             ,(FReadAccessScope *)&local_68);
  if ((*(int *)&(param_1->_OnMouseDoubleClick).field_0x10 != 0) &&
     (plVar14 = *(longlong **)&(param_1->_OnMouseDoubleClick).field_0x8, plVar14 != (longlong *)0x0)
     ) {
    cVar9 = (**(code **)(*plVar14 + 0x38))();
    if (cVar9 != '\0') {
      bVar5 = true;
      goto LAB_1428f90cb;
    }
  }
  bVar5 = false;
LAB_1428f90cb:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_68);
  if (bVar5) {
    local_68.AccessType = Reader;
    local_68._4_4_ = 0;
    local_68.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_68.bDestroyed = false;
    local_68._17_3_ = 0;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68,&param_1->_OnMouseDoubleClick);
    SWidget::SetOnMouseDoubleClick
              ((SWidget *)this,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)&local_68);
  }
  plVar14 = &this->_padding_;
  local_28 = 0;
  *(EHorizontalAlignment *)plVar14 = param_1->_HAlign;
  pEVar13 = (EVerticalAlignment *)((longlong)&this->_padding_ + 4);
  if (plVar14 == (longlong *)0x0) {
    pEVar13 = (EVerticalAlignment *)&DAT_00000054;
  }
  *pEVar13 = param_1->_VAlign;
  local_50 = *(undefined1 (*) [8])&(param_1->_Padding).Value;
  auStack_48 = *(undefined1 (*) [8])&(param_1->_Padding).Value.Right;
  local_40[0] = (param_1->_Padding).bIsSet;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
             &(param_1->_Padding).Getter);
  this_00 = &this->_padding_;
  if (plVar14 == (longlong *)0x0) {
    this_00 = (longlong *)&DAT_00000040;
  }
  pTVar12 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)this_00,(TAttribute<FMargin> *)local_50);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&pTVar12->field_0x20);
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar3 = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&pTVar12->field_0x38;
  *(SWidget **)&pTVar12->field_0x30 = pSVar3;
  *(TReferenceControllerBase<1> **)&pTVar12->field_0x38 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&pTVar12->field_0x20);
  return;
}

// GetContent @ 14293eba0

TSharedRef<SWidget,1> * __thiscall SBorder::GetContent(SBorder *this)

{
  return (TSharedRef<SWidget,1> *)&this->_padding_;
}

// OnPaint @ 14297dbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SBorder::OnPaint(SBorder *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ESlateColorStylingMode EVar5;
  char cVar6;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  FSlateColor *pFVar13;
  FLinearColor *pFVar14;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  ESlateDrawEffect EVar15;
  bool bVar16;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  float fStack_160;
  undefined4 local_15c;
  FSlateWindowElementList *local_158;
  FDeprecateVector2DParameter local_150;
  FSlateLayoutTransform local_148;
  FDeprecateSlateVector2D local_13c;
  FSlateRect *local_130;
  FPaintArgs *local_128;
  TTransform2<float> local_120;
  TVector2<float>_u_0 local_108;
  float local_100;
  TVector2<float>_u_0 local_fc;
  float local_ec [2];
  float afStack_e4 [2];
  TVector2<float>_u_0 local_dc;
  byte local_d4;
  TVector2<float>_u_0 local_d0;
  float local_c8;
  undefined8 local_c4;
  TVector2<float>_u_0 local_bc;
  float local_b4 [2];
  float afStack_ac [2];
  TVector2<float>_u_0 local_a4;
  byte local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_158 = param_4;
  TVar7 = this->BorderImageAttribute;
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar16 = true;
  }
  else {
    bVar16 = false;
  }
  local_130 = param_3;
  local_128 = param_1;
  if ((TVar7 != (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                 )0x0) &&
     (((TEnumAsByte<ESlateBrushDrawType::Type> *)((longlong)TVar7 + 0x1c))->Value != '\0')) {
    if ((this->ShowDisabledEffectAttribute ==
         (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) ||
       (bVar16 != false)) {
      EVar15 = None;
    }
    else {
      EVar15 = DisabledEffect;
    }
    if ((this->bFlipForRightToLeftFlowDirection == false) || (GSlateFlowDirection != RightToLeft)) {
      EVar5 = *(ESlateColorStylingMode *)((longlong)TVar7 + 0x18);
      pFVar13 = (FSlateColor *)((longlong)TVar7 + 8);
      if (EVar5 != UseColor_Specified) {
        if (EVar5 == UseColor_ColorTable) {
          pFVar13 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar13);
        }
        else if ((EVar5 == UseColor_Foreground) || (EVar5 != UseColor_Foreground_Subdued)) {
          pFVar13 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar13 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      fVar8 = (pFVar13->SpecifiedColor).field0_0x0._s_0.R;
      fVar9 = (pFVar13->SpecifiedColor).field0_0x0._s_0.G;
      fVar10 = (pFVar13->SpecifiedColor).field0_0x0._s_0.B;
      fVar11 = (pFVar13->SpecifiedColor).field0_0x0._s_0.A;
      this_00 = &this->BorderBackgroundColorAttribute;
      cVar6 = (this->BorderBackgroundColorAttribute).field_0x10;
      fVar1 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      fVar2 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      fVar3 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      fVar4 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      if (cVar6 != '\0') {
        if (cVar6 == '\x01') {
          this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                     *)FSlateColor::GetColorFromTable((FSlateColor *)this_00);
        }
        else if ((cVar6 == '\x02') || (cVar6 != '\x03')) {
          this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                     *)&param_6->ForegroundColor;
        }
        else {
          this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                     *)&param_6->SubduedForeground;
        }
      }
      local_168._0_4_ = fVar8 * fVar1 * (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).R;
      local_d0 = (param_2->AbsolutePosition).field0_0x0;
      local_d4 = param_2->field_0x34;
      local_108._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
      local_c8 = param_2->Scale;
      local_ec = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_e4 = (param_2->AccumulatedRenderTransform).M.M[1];
      fStack_160 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).B * fVar10 * fVar3;
      local_168._4_4_ = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).G * fVar9 * fVar2;
      local_dc = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      local_15c = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).A * fVar11 * fVar4;
    }
    else {
      local_168._0_4_ = param_2->Scale;
      local_150 = (FDeprecateVector2DParameter)0x3f0000003f000000;
      unique0x00023d00 = (param_2->AbsolutePosition).field0_0x0;
      local_13c = param_2->Size;
      local_120.M.M[0] = ___xmm_3f8000000000000000000000bf800000;
      local_120.M.M[1] = _UNK_15092fd68;
      local_120.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
      local_148._0_8_ = 0x3f800000;
      local_148.Translation.field0_0x0._s_0.Y = 0.0;
      FGeometry::FGeometry
                ((FGeometry *)&local_108._s_0,(FDeprecateVector2DParameter *)&local_13c,&local_148,
                 &local_120,&local_150,(FSlateLayoutTransform *)local_168,
                 &param_2->AccumulatedRenderTransform);
      EVar5 = *(ESlateColorStylingMode *)((longlong)TVar7 + 0x18);
      pFVar13 = (FSlateColor *)((longlong)TVar7 + 8);
      if (EVar5 != UseColor_Specified) {
        if (EVar5 == UseColor_ColorTable) {
          pFVar13 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar13);
        }
        else if ((EVar5 == UseColor_Foreground) || (EVar5 != UseColor_Foreground_Subdued)) {
          pFVar13 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar13 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      fVar8 = (pFVar13->SpecifiedColor).field0_0x0._s_0.R;
      fVar9 = (pFVar13->SpecifiedColor).field0_0x0._s_0.G;
      fVar10 = (pFVar13->SpecifiedColor).field0_0x0._s_0.B;
      fVar11 = (pFVar13->SpecifiedColor).field0_0x0._s_0.A;
      fVar1 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      fVar2 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      fVar3 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      fVar4 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      pFVar14 = FSlateColor::GetColor((FSlateColor *)&this->BorderBackgroundColorAttribute,param_6);
      local_168._0_4_ = fVar8 * fVar1 * (pFVar14->field0_0x0)._s_0.R;
      local_d0 = local_fc;
      local_c8 = local_100;
      fStack_160 = (pFVar14->field0_0x0)._s_0.B * fVar10 * fVar3;
      local_168._4_4_ = (pFVar14->field0_0x0)._s_0.G * fVar9 * fVar2;
      local_15c = (pFVar14->field0_0x0)._s_0.A * fVar11 * fVar4;
    }
    param_4 = local_158;
    local_9c = (local_d4 & 1) * '\x02' | local_9c & 0xfc;
    local_c4 = 0;
    local_bc = local_108;
    local_b4 = local_ec;
    afStack_ac = afStack_e4;
    local_a4 = local_dc;
    FSlateDrawElement::MakeBox
              (local_158,param_5,(FPaintGeometry *)&local_d0._s_0,(FSlateBrush *)TVar7,EVar15,
               (FLinearColor *)local_168);
  }
  iVar12 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,local_128,param_2,local_130,param_4,param_5,param_6,
                      bVar16);
  return iVar12;
}

// PrivateRegisterAttributes @ 142984df0

void __cdecl SBorder::PrivateRegisterAttributes(FInitializer *param_1)

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
  pFVar1 = ::FName::FName(&local_res10,"BorderImage");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2a8,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142984e77:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142984e77;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"BorderBackgroundColor");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2b0,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142984ef1:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142984ef1;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"DesiredSizeScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2c8,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142984f75;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142984f75:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ShowDisabledEffect");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2d8,(FInvalidateWidgetReasonAttribute *)local_28);
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

// SetBorderBackgroundColor @ 14298e820

void __thiscall SBorder::SetBorderBackgroundColor(SBorder *this,TAttribute<FSlateColor> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BorderBackgroundColorAttribute,(SWidget *)this,param_1,None);
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

// SetBorderImage @ 14298eae0

void __thiscall SBorder::SetBorderImage(SBorder *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BorderImageAttribute,(SWidget *)this,param_1,None);
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

// SetContent @ 14298ef30

void __thiscall SBorder::SetContent(SBorder *this,TSharedRef<SWidget,1> *param_1)

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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDesiredSizeScale @ 14298f880

void __thiscall
SBorder::SetDesiredSizeScale(SBorder *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DesiredSizeScaleAttribute,(SWidget *)this,param_1,None);
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

// SetHAlign @ 142990c90

void __thiscall SBorder::SetHAlign(SBorder *this,EHorizontalAlignment param_1)

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

// SetPadding @ 142998550

void __thiscall SBorder::SetPadding(SBorder *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *pSVar4;
  FSlotBase *this_01;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  local_38._0_4_ = (param_1->Value).Left;
  local_38._4_4_ = (param_1->Value).Top;
  local_38._8_4_ = (param_1->Value).Right;
  local_38._12_4_ = (param_1->Value).Bottom;
  local_38[0x10] = param_1->bIsSet;
  this_00 = &param_1->Getter;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  this_01 = (FSlotBase *)&this->_padding_;
  if (&this->_padding_ == (longlong *)0x0) {
    this_01 = (FSlotBase *)&DAT_00000020;
  }
  pSVar4 = FSlotBase::GetOwnerWidget(this_01);
  if (pSVar4 == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\BasicLayoutWidgetSlot.h"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,pSVar4,(TAttribute<FMargin> *)local_38,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  if ((void *)local_20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
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

// SetShowEffectWhenDisabled @ 1429997d0

void __thiscall SBorder::SetShowEffectWhenDisabled(SBorder *this,TAttribute<bool> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShowDisabledEffectAttribute,(SWidget *)this,param_1,None);
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

// SetVAlign @ 14299f060

void __thiscall SBorder::SetVAlign(SBorder *this,EVerticalAlignment param_1)

{
  FSlotBase *this_00;
  
  if (*(EVerticalAlignment *)((longlong)&this->_padding_ + 4) != param_1) {
    *(EVerticalAlignment *)((longlong)&this->_padding_ + 4) = param_1;
    this_00 = (FSlotBase *)&this->_padding_;
    if (this == (SBorder *)0xfffffffffffffd98) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

