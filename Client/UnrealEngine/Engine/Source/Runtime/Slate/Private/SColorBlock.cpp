// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// SColorBlock @ 142847470

SColorBlock * __thiscall SColorBlock::SColorBlock(SColorBlock *this)

{
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<UE::Math::TVector4<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_02;
  TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_03;
  TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_04;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  SColorBlock *pSVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33 [19];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SColorBlock__6B_;
  this_00 = &this->Color;
  *this_00 = (TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
             FLinearColor::White.field0_0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
               *)this_00);
  pSVar5 = this + 1;
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01 = &this->AlphaBackgroundBrush;
  *this_01 = (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x0;
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_02 = &this->GradientCornerRadius;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->GradientCornerRadius).field_0x8 = 0;
  *(undefined8 *)&(this->GradientCornerRadius).field_0x10 = 0;
  *(undefined8 *)&(this->GradientCornerRadius).field_0x18 = 0x3ff0000000000000;
  iVar4 = _finite(*(double *)this_02);
  if (iVar4 == 0) {
LAB_1428475ad:
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l33::<lambda_1>::operator()(local_res18);
  }
  else {
    iVar4 = _finite(*(double *)&(this->GradientCornerRadius).field_0x8);
    if (iVar4 == 0) goto LAB_1428475ad;
    iVar4 = _finite(*(double *)&(this->GradientCornerRadius).field_0x10);
    if (iVar4 == 0) goto LAB_1428475ad;
    iVar4 = _finite(*(double *)&(this->GradientCornerRadius).field_0x18);
    if (iVar4 == 0) goto LAB_1428475ad;
  }
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar3) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  this_03 = &this->ColorBlockSize;
  *(undefined8 *)this_03 = 0x4030000000000000;
  *(undefined8 *)&(this->ColorBlockSize).field_0x8 = 0x4030000000000000;
  iVar4 = _finite(*(double *)this_03);
  if (iVar4 != 0) {
    iVar4 = _finite(*(double *)&(this->ColorBlockSize).field_0x8);
    if (iVar4 != 0) goto LAB_14284764e;
  }
  local_38 = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(&local_38);
LAB_14284764e:
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_03,(SWidget *)this);
  if (!bVar3) {
    local_37 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(&local_37);
  }
  this_04 = &this->AlphaDisplayMode;
  *(undefined8 *)&this->MouseButtonDownHandler = 0;
  *(undefined8 *)&(this->MouseButtonDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->MouseButtonDownHandler).field_0x10 = 0;
  *this_04 = (TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )0x0;
  if ((this_04 < this) || (pSVar5 <= this_04)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_04,(SWidget *)this);
  if (!bVar3) {
    local_36 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(&local_36);
  }
  pTVar1 = &this->ColorIsHSV;
  *pTVar1 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_35 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(&local_35);
  }
  pTVar1 = &this->ShowBackgroundForAlpha;
  *pTVar1 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    local_34 = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(&local_34);
  }
  pTVar1 = &this->bUseSRGB;
  *pTVar1 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1;
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
      pSVar5 = (SColorBlock *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar1,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorBlock,void>'::__l2::<lambda_1>::operator()(local_33);
  }
  return this;
}

// ~SColorBlock @ 14284a670

void __thiscall SColorBlock::~SColorBlock(SColorBlock *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorBlock__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseButtonDownHandler);
  pvVar1 = *(void **)&(this->MouseButtonDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseButtonDownHandler);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 142858040

TVector2<double> * __thiscall
SColorBlock::ComputeDesiredSize
          (SColorBlock *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->ColorBlockSize).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->ColorBlockSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Construct @ 142858f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SColorBlock::Construct(SColorBlock *this,FArguments *param_1)

{
  TVector4<double>_u_0 local_28;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->Color,(SWidget *)this,&param_1->_Color,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->AlphaBackgroundBrush,(SWidget *)this,&param_1->_AlphaBackgroundBrush,None);
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector4<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->GradientCornerRadius,(SWidget *)this,&param_1->_CornerRadius,
           (TVector4<double> *)&local_28._s_0,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorBlockSize,(SWidget *)this,&param_1->_Size,None);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MouseButtonDownHandler,&param_1->_OnMouseButtonDown);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EColorBlockAlphaDisplayMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->AlphaDisplayMode,(SWidget *)this,&param_1->_AlphaDisplayMode,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorIsHSV,(SWidget *)this,&param_1->_ColorIsHSV,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ShowBackgroundForAlpha,(SWidget *)this,&param_1->_ShowBackgroundForAlpha,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->bUseSRGB,(SWidget *)this,&param_1->_UseSRGB,None);
  return;
}

// GetPrivateWidgetClass @ 142879a20

FSlateWidgetClassData * __cdecl SColorBlock::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SColorBlock");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SColorBlock::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14287dfd0

FSlateWidgetClassData * __thiscall SColorBlock::GetWidgetClass(SColorBlock *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SColorBlock");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SColorBlock::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorBlock::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// MakeSection @ 1428835a0

void __thiscall
SColorBlock::MakeSection
          (SColorBlock *this,TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,FLinearColor *param_4,
          FWidgetStyle *param_5,bool param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FLinearColor *pFVar7;
  FWidgetStyle *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte local_188;
  byte local_187;
  byte local_186;
  byte local_185;
  byte local_184;
  byte local_183;
  byte local_182;
  byte local_181;
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  FLinearColor_u_0 local_e0 [11];
  
  pFVar7 = param_4;
  fVar24 = __real_437f0000;
  fVar23 = __real_3f000000;
  fVar22 = __real_3f800000;
  fVar21 = (param_4->field0_0x0)._s_0.R;
  fVar20 = (param_4->field0_0x0)._s_0.G;
  fVar25 = (param_4->field0_0x0)._s_0.B;
  fVar26 = fVar21;
  if (fVar21 <= fVar20) {
    fVar26 = fVar20;
  }
  if (fVar26 <= fVar25) {
    fVar26 = fVar25;
  }
  if (fVar26 <= __real_3f800000) {
    FLinearColor::ToFColor(param_4,SUB81(&param_4,0));
    pFVar8 = param_5;
    fVar21 = __real_3b808081;
    if (param_6 != false) {
      param_4._3_1_ = 0xff;
    }
    pFVar13 = (param_1->AllocatorInstance).Data;
    fStack_108 = FLinearColor::sRGBToLinearTable[param_4._2_1_] *
                 (param_5->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_110 = (float)(param_2->field0_0x0)._s_0.X;
    fStack_104 = FLinearColor::sRGBToLinearTable[param_4._1_1_] *
                 (param_5->ColorAndOpacityTint).field0_0x0._s_0.G;
    fStack_100 = FLinearColor::sRGBToLinearTable[(byte)param_4] *
                 (param_5->ColorAndOpacityTint).field0_0x0._s_0.B;
    fStack_10c = (float)(param_2->field0_0x0)._s_0.Y;
    fStack_fc = (float)param_4._3_1_ * (param_5->ColorAndOpacityTint).field0_0x0._s_0.A *
                __real_3b808081;
    if (((pFVar13 <= (FScriptContainerElement *)&local_110) &&
        ((FScriptContainerElement *)&local_110 < pFVar13 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar5 = (param_1->AllocatorInstance).Data;
    pFVar13 = pFVar5 + (longlong)iVar11 * 0x18;
    *(ulonglong *)pFVar13 = CONCAT44(fStack_10c,local_110);
    *(ulonglong *)(pFVar13 + 8) = CONCAT44(fStack_104,fStack_108);
    dVar1 = (param_3->field0_0x0)._s_0.X;
    *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = CONCAT44(fStack_fc,fStack_100);
    pFVar13 = (param_1->AllocatorInstance).Data;
    local_f8 = (float)dVar1;
    fStack_f0 = FLinearColor::sRGBToLinearTable[param_4._2_1_] *
                (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.R;
    fStack_f4 = (float)(param_3->field0_0x0)._s_0.Y;
    fStack_ec = FLinearColor::sRGBToLinearTable[param_4._1_1_] *
                (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.G;
    fStack_e8 = FLinearColor::sRGBToLinearTable[(byte)param_4] *
                (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.B;
    fStack_e4 = (float)param_4._3_1_ * (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.A * fVar21;
    if (((pFVar13 <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < pFVar13 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    lVar12 = (longlong)iVar11;
    param_1->ArrayNum = iVar11 + 1;
    pFVar13 = (param_1->AllocatorInstance).Data;
    *(ulonglong *)(pFVar13 + lVar12 * 0x18) = CONCAT44(fStack_f4,local_f8);
    *(ulonglong *)(pFVar13 + lVar12 * 0x18 + 8) = CONCAT44(fStack_ec,fStack_f0);
    uVar19 = CONCAT44(fStack_e4,fStack_e8);
  }
  else {
    fVar27 = __real_3f800000;
    if (!param_6) {
      fVar27 = (param_4->field0_0x0)._s_0.A;
    }
    fVar17 = __real_3f800000 / fVar26;
    local_e0[0]._0_4_ = fVar17 * fVar21;
    local_e0[0]._4_4_ = fVar17 * fVar20;
    local_e0[0]._8_4_ = fVar17 * fVar25;
    fVar21 = 0.0;
    local_e0[0]._12_4_ = fVar27;
    if (this->bUseSRGB ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      fVar20 = (float)local_e0[0]._8_4_;
      if ((float)local_e0[0]._8_4_ <= 0.0) {
        fVar20 = fVar21;
      }
      fVar25 = (float)local_e0[0]._4_4_;
      if ((float)local_e0[0]._4_4_ <= 0.0) {
        fVar25 = fVar21;
      }
      fVar17 = (float)local_e0[0]._0_4_;
      if ((float)local_e0[0]._0_4_ <= 0.0) {
        fVar17 = fVar21;
      }
      if (__real_3f800000 <= fVar20) {
        fVar20 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar25) {
        fVar25 = __real_3f800000;
      }
      if (__real_3f800000 <= fVar17) {
        fVar17 = __real_3f800000;
      }
      uVar14 = (uint)(fVar20 * __real_437f0000 + __real_3f000000);
      fVar20 = fVar27;
      if (fVar27 <= 0.0) {
        fVar20 = fVar21;
      }
      uVar16 = (uint)(fVar25 * __real_437f0000 + __real_3f000000);
      if (__real_3f800000 <= fVar20) {
        fVar20 = __real_3f800000;
      }
      uVar15 = (uint)(fVar17 * __real_437f0000 + __real_3f000000);
      uVar10 = (uint)(fVar20 * __real_437f0000 + __real_3f000000);
    }
    else {
      FLinearColor::ToFColorSRGB((FLinearColor *)&local_e0[0]._s_0);
      uVar14 = (uint)local_188;
      uVar10 = (uint)local_185;
      uVar15 = (uint)local_186;
      uVar16 = (uint)local_187;
    }
    pFVar8 = param_5;
    uVar19 = *(undefined8 *)&pFVar7->field0_0x0;
    local_168._12_4_ = fVar26 * fVar27;
    fVar20 = FLinearColor::sRGBToLinearTable[uVar15 & 0xff] *
             (param_5->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_168._8_4_ = (undefined4)*(undefined8 *)((longlong)&pFVar7->field0_0x0 + 8);
    fVar26 = FLinearColor::sRGBToLinearTable[uVar16 & 0xff] *
             (param_5->ColorAndOpacityTint).field0_0x0._s_0.G;
    fVar27 = FLinearColor::sRGBToLinearTable[uVar14 & 0xff] *
             (param_5->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar25 = (float)(uVar10 & 0xff) * (param_5->ColorAndOpacityTint).field0_0x0._s_0.A *
             __real_3b808081;
    local_168._0_8_ = uVar19;
    if (this->bUseSRGB ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      fVar17 = (float)local_168._12_4_;
      if ((float)local_168._12_4_ <= 0.0) {
        fVar17 = fVar21;
      }
      local_168._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
      fVar18 = (float)local_168._8_4_;
      if ((float)local_168._8_4_ <= 0.0) {
        fVar18 = fVar21;
      }
      if ((float)local_168._4_4_ <= 0.0) {
        local_168._4_4_ = fVar21;
      }
      if (fVar22 <= fVar17) {
        fVar17 = fVar22;
      }
      if (fVar22 <= fVar18) {
        fVar18 = fVar22;
      }
      if (fVar22 <= (float)local_168._4_4_) {
        local_168._4_4_ = fVar22;
      }
      uVar16 = (uint)(fVar17 * fVar24 + fVar23);
      uVar14 = (uint)(fVar18 * fVar24 + fVar23);
      local_168._0_4_ = (undefined4)uVar19;
      if ((float)local_168._0_4_ <= 0.0) {
        local_168._0_4_ = fVar21;
      }
      uVar15 = (uint)((float)local_168._4_4_ * fVar24 + fVar23);
      if (fVar22 <= (float)local_168._0_4_) {
        local_168._0_4_ = fVar22;
      }
      uVar10 = (uint)((float)local_168._0_4_ * fVar24 + fVar23);
    }
    else {
      FLinearColor::ToFColorSRGB((FLinearColor *)local_168);
      uVar14 = (uint)local_184;
      uVar16 = (uint)local_181;
      uVar10 = (uint)local_182;
      uVar15 = (uint)local_183;
    }
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    local_158 = (float)dVar1;
    fVar21 = FLinearColor::sRGBToLinearTable[uVar10 & 0xff] *
             (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.R;
    fStack_154 = (float)dVar2;
    fVar23 = FLinearColor::sRGBToLinearTable[uVar15 & 0xff] *
             (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.G;
    fVar24 = FLinearColor::sRGBToLinearTable[uVar14 & 0xff] *
             (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.B;
    pFVar13 = (param_1->AllocatorInstance).Data;
    fVar22 = (float)(uVar16 & 0xff) * (pFVar8->ColorAndOpacityTint).field0_0x0._s_0.A *
             __real_3b808081;
    fStack_150 = fVar20;
    fStack_14c = fVar26;
    fStack_148 = fVar27;
    fStack_144 = fVar25;
    if (((pFVar13 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 < pFVar13 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    dVar3 = (param_3->field0_0x0)._s_0.X;
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    param_1->ArrayNum = iVar11 + 1;
    pFVar5 = (param_1->AllocatorInstance).Data;
    dVar1 = (dVar1 + dVar3) * __real_3fe0000000000000;
    pFVar13 = pFVar5 + (longlong)iVar11 * 0x18;
    *(ulonglong *)pFVar13 = CONCAT44(fStack_154,local_158);
    *(ulonglong *)(pFVar13 + 8) = CONCAT44(fStack_14c,fStack_150);
    *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = CONCAT44(fStack_144,fStack_148);
    pFVar13 = (param_1->AllocatorInstance).Data;
    local_140 = (float)dVar1;
    fStack_13c = (float)((dVar4 + dVar2) * __real_3fe0000000000000);
    fStack_138 = fVar21;
    fStack_134 = fVar23;
    fStack_130 = fVar24;
    fStack_12c = fVar22;
    if (((pFVar13 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar13 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar5 = (param_1->AllocatorInstance).Data;
    pFVar13 = pFVar5 + (longlong)iVar11 * 0x18;
    *(ulonglong *)pFVar13 = CONCAT44(fStack_13c,local_140);
    *(ulonglong *)(pFVar13 + 8) = CONCAT44(fStack_134,fStack_138);
    *(ulonglong *)(pFVar5 + (longlong)iVar11 * 0x18 + 0x10) = CONCAT44(fStack_12c,fStack_130);
    pFVar13 = (param_1->AllocatorInstance).Data;
    fStack_124 = (float)dVar4;
    local_128 = (float)dVar3;
    fStack_120 = fVar20;
    fStack_11c = fVar26;
    fStack_118 = fVar27;
    fStack_114 = fVar25;
    if (((pFVar13 <= (FScriptContainerElement *)&local_128) &&
        ((FScriptContainerElement *)&local_128 < pFVar13 + (longlong)param_1->ArrayMax * 0x18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    lVar12 = (longlong)iVar11;
    param_1->ArrayNum = iVar11 + 1;
    pFVar13 = (param_1->AllocatorInstance).Data;
    *(ulonglong *)(pFVar13 + lVar12 * 0x18) = CONCAT44(fStack_124,local_128);
    *(ulonglong *)(pFVar13 + lVar12 * 0x18 + 8) = CONCAT44(fStack_11c,fStack_120);
    uVar19 = CONCAT44(fStack_114,fStack_118);
  }
  *(undefined8 *)(pFVar13 + lVar12 * 0x18 + 0x10) = uVar19;
  return;
}

// OnMouseButtonDown @ 142887eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorBlock::OnMouseButtonDown
          (SColorBlock *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->MouseButtonDownHandler
             ,&local_28);
  if (((*(int *)&(this->MouseButtonDownHandler).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->MouseButtonDownHandler).field_0x8, plVar1 != (longlong *)0x0))
     && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->MouseButtonDownHandler,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 14288d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SColorBlock::OnPaint
          (SColorBlock *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  TVar1;
  FDeprecateSlateVector2D FVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  TVector2<double>_u_0 TVar6;
  FLinearColor *pFVar7;
  TVector2<double> *pTVar8;
  float fVar9;
  undefined1 auStackY_148 [32];
  bool bVar10;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  double dStack_f0;
  TVector2<double>_u_0 local_e8;
  float local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  double local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  FSlateWindowElementList *local_a8;
  FLinearColor_u_0 local_98;
  TVector2<float>_u_0 local_88;
  float local_80;
  undefined8 local_7c;
  FDeprecateSlateVector2D local_74;
  float local_6c [2];
  float afStack_64 [2];
  TVector2<float>_u_0 local_5c;
  byte local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_98._s_0.R = (float)*(undefined4 *)&this->Color;
  local_98._s_0.G = (float)*(undefined4 *)&(this->Color).field_0x4;
  local_98._s_0.B = (float)*(undefined4 *)&(this->Color).field_0x8;
  local_98._s_0.A = (float)*(undefined4 *)&(this->Color).field_0xc;
  TVar1 = this->AlphaDisplayMode;
  local_a8 = param_4;
  if (this->ColorIsHSV !=
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    pFVar7 = FLinearColor::HSVToLinearRGB((FLinearColor *)&local_98._s_0,(FLinearColor *)&local_b8);
    local_98._s_0.R = (float)*(undefined4 *)&pFVar7->field0_0x0;
    local_98._s_0.G = *(float *)((longlong)&pFVar7->field0_0x0 + 4);
    local_98._s_0.B = *(float *)((longlong)&pFVar7->field0_0x0 + 8);
    local_98._s_0.A = *(float *)((longlong)&pFVar7->field0_0x0 + 0xc);
  }
  if (((this->ShowBackgroundForAlpha !=
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) &&
      (local_98._s_0.A < __real_3f800000)) &&
     (TVar1 != (TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x3)) {
    local_88 = (param_2->AbsolutePosition).field0_0x0;
    local_80 = param_2->Scale;
    local_5c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_74 = param_2->Size;
    local_6c = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_64 = (param_2->AccumulatedRenderTransform).M.M[1];
    local_54 = param_2->bHasRenderTransform * '\x02' | local_54 & 0xfc;
    local_7c = 0;
    FSlateDrawElement::MakeBox
              (local_a8,param_5,(FPaintGeometry *)&local_88._s_0,
               (FSlateBrush *)this->AlphaBackgroundBrush,!param_7 << 5,&FLinearColor::White);
  }
  fVar3 = __real_3f000000;
  local_c8 = (undefined1  [8])0x0;
  local_c0 = 0.0;
  if (TVar1 == (TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x0) {
LAB_14288d8bb:
    pTVar8 = (TVector2<double> *)local_108;
    pFVar7 = (FLinearColor *)&local_b8;
    local_108._0_4_ = SUB84(param_2->Size,0);
    fVar3 = (float)local_108._0_4_;
    bVar10 = false;
    fStack_b4 = local_98._s_0.G;
    local_b8 = local_98._s_0.R;
    fStack_ac = local_98._s_0.A;
    fStack_b0 = local_98._s_0.B;
    local_108._4_4_ = SUB84(param_2->Size,4);
    fVar9 = (float)local_108._4_4_;
    local_108 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  else {
    if (TVar1 == (TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x1) {
      local_108._0_4_ = SUB84(param_2->Size,0);
      local_108._4_4_ = SUB84(param_2->Size,4);
      local_e8._s_0.X = (double)((float)local_108._0_4_ * __real_3f000000);
      local_f8._4_4_ = local_98._s_0.G;
      local_f8._0_4_ = local_98._s_0.R;
      dStack_f0._0_4_ = local_98._s_0.B;
      dStack_f0._4_4_ = local_98._s_0.A;
      local_e8._s_0.Y = (double)((float)local_108._4_4_ * __real_3f000000);
      local_108 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      MakeSection(this,(TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *)local_c8,
                  (TVector2<double> *)local_108,(TVector2<double> *)&local_e8._s_0,
                  (FLinearColor *)local_f8,param_6,false);
      _local_d8 = param_2->Size;
      pTVar8 = (TVector2<double> *)local_f8;
      local_108._0_4_ = (undefined4)_local_d8;
      uVar4 = local_108._0_4_;
      local_108._4_4_ = SUB84(_local_d8,4);
      local_f8._0_4_ = (float)local_108._0_4_ * fVar3;
      local_f8._4_4_ = (float)local_108._4_4_ * fVar3;
      bVar10 = true;
      _local_b8 = CONCAT44(local_98._s_0.G,local_98._s_0.R);
      _fStack_b0 = CONCAT44(local_98._s_0.A,local_98._s_0.B);
      local_e8._s_0.Y = (double)(float)local_108._4_4_;
      local_108._0_8_ = local_f8;
      pFVar7 = (FLinearColor *)&local_b8;
      local_e8._s_0.X = (double)(float)uVar4;
      dStack_f0 = (double)(float)local_f8._4_4_;
      local_f8 = (undefined1  [8])(double)(float)local_f8._0_4_;
      goto LAB_14288d900;
    }
    if (TVar1 == (TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x2) {
      _local_d8 = param_2->Size;
      local_108._4_4_ = local_98._s_0.G;
      local_108._0_4_ = local_98._s_0.R;
      local_108._8_4_ = local_98._s_0.B;
      local_108._12_4_ = local_98._s_0.A;
      local_e8._s_0.X = (double)(local_d8 * __real_3f000000);
      local_e8._s_0.Y = (double)(fStack_d4 * __real_3f000000);
      _local_f8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      MakeSection(this,(TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *)local_c8,
                  (TVector2<double> *)local_f8,(TVector2<double> *)&local_e8._s_0,
                  (FLinearColor *)local_108,param_6,true);
      pTVar8 = (TVector2<double> *)local_108;
      local_f8._0_4_ = SUB84(param_2->Size,0);
      uVar4 = local_f8._0_4_;
      local_f8._4_4_ = SUB84(param_2->Size,4);
      local_d8 = (float)local_f8._0_4_ * fVar3;
      fStack_d4 = (float)local_f8._4_4_ * fVar3;
      bVar10 = false;
      FVar2._4_4_ = local_98._s_0.G;
      FVar2._0_4_ = local_98._s_0.R;
      uStack_d0 = CONCAT44(local_98._s_0.A,local_98._s_0.B);
      local_e8._s_0.Y = (double)(float)local_f8._4_4_;
      local_f8 = (undefined1  [8])_local_d8;
      pFVar7 = (FLinearColor *)&local_d8;
      local_e8._s_0.X = (double)(float)uVar4;
      local_108._8_8_ = (double)fStack_d4;
      local_108._0_8_ = (double)local_d8;
      _local_d8 = FVar2;
      goto LAB_14288d900;
    }
    if (TVar1 != (TSlateAttribute<EColorBlockAlphaDisplayMode,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x3) goto LAB_14288d8bb;
    _local_d8 = param_2->Size;
    pTVar8 = (TVector2<double> *)local_f8;
    pFVar7 = (FLinearColor *)local_108;
    bVar10 = true;
    local_108._4_4_ = local_98._s_0.G;
    local_108._0_4_ = local_98._s_0.R;
    local_108._8_4_ = local_98._s_0.B;
    local_108._12_4_ = local_98._s_0.A;
    _local_f8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    fVar9 = fStack_d4;
    fVar3 = local_d8;
  }
  local_e8._s_0.X = (double)fVar3;
  local_e8._s_0.Y = (double)fVar9;
LAB_14288d900:
  MakeSection(this,(TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *)local_c8,pTVar8,
              (TVector2<double> *)&local_e8._s_0,pFVar7,param_6,bVar10);
  local_74 = param_2->Size;
  local_80 = param_2->Scale;
  local_5c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_e8._s_0.X = (double)local_c8;
  local_108._0_8_ = local_74;
  auVar5 = local_108;
  local_f8 = (undefined1  [8])local_74;
  TVar6 = _local_f8;
  local_e8._s_0.Y = local_c0;
  local_88 = (param_2->AbsolutePosition).field0_0x0;
  local_6c = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_64 = (param_2->AccumulatedRenderTransform).M.M[1];
  local_54 = param_2->bHasRenderTransform * '\x02' | local_54 & 0xfc;
  local_c8 = (undefined1  [8])0x0;
  local_c0 = 0.0;
  local_7c = 0;
  local_108._0_4_ = local_74._0_4_;
  local_f8._4_4_ = local_74._4_4_;
  bVar10 = (float)local_f8._4_4_ <= (float)local_108._0_4_;
  fStack_b4 = (float)*(double *)&(this->GradientCornerRadius).field_0x8;
  local_b8 = (float)*(double *)&this->GradientCornerRadius;
  fStack_ac = (float)*(double *)&(this->GradientCornerRadius).field_0x18;
  fStack_b0 = (float)*(double *)&(this->GradientCornerRadius).field_0x10;
  local_108 = auVar5;
  _local_f8 = TVar6;
  FSlateDrawElement::MakeGradient
            (local_a8,param_5 + 1U,(FPaintGeometry *)&local_88._s_0,
             (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *)&local_e8._s_0,(uint)bVar10,
             !param_7 << 5,(TVector4<float> *)&local_b8);
  if (local_c8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_c8);
  }
  return param_5 + 1U;
}

// PrivateRegisterAttributes @ 1428922a0

void __cdecl SColorBlock::PrivateRegisterAttributes(FInitializer *param_1)

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
  pFVar1 = ::FName::FName(&local_res10,5,L"Color",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142892332:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142892332;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x14,L"AlphaBackgroundBrush",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x228,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_1428923b7:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_1428923b7;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x14,L"GradientCornerRadius",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x230,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_14289243c:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_14289243c;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0xe,L"ColorBlockSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x250,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_1428924c1:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_1428924c1;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x10,L"AlphaDisplayMode",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x278,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142892546:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142892546;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,10,L"ColorIsHSV",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x279,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_1428925cb:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_1428925cb;
  }
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,0x16,L"ShowBackgroundForAlpha",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x27a,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_14289265a;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_14289265a:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,8,L"bUseSRGB",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x27b,(FInvalidateWidgetReasonAttribute *)local_28);
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

