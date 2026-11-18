// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// SCompoundWidget @ 1425bea50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SCompoundWidget * __thiscall SCompoundWidget::SCompoundWidget(SCompoundWidget *this)

{
  undefined1 *puVar1;
  FCompoundWidgetOneChildSlot *pFVar2;
  TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar3;
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar4;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  SCompoundWidget *pSVar12;
  FSlateWidgetClassData *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88;
  undefined1 local_87 [3];
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  
  SWidget::SWidget((SWidget *)this);
  pFVar2 = &this->ChildSlot;
  this->_padding_ = (longlong)&___7SCompoundWidget__6B_;
  *(SCompoundWidget **)&(this->ChildSlot).field_0x8 = this;
  *(undefined ***)&pFVar2->field_0x0 = &___7FChildren__6B_;
  ::FName::FName((FName *)&(this->ChildSlot).field_0x10,"Children");
  *(undefined2 *)&(this->ChildSlot).field_0x18 = 0xdc00;
  FSlotBase::FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20,(FChildren *)pFVar2);
  puVar1 = &(this->ChildSlot).field_0x40;
  *(undefined ***)&pFVar2->field_0x0 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
        _vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>__;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->ChildSlot).field_0x48 = 0;
  if (((puVar1 < this) || (this + 1 <= puVar1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    pSVar12 = (SCompoundWidget *)(*pcVar9)();
    return pSVar12;
  }
  iVar16 = (int)this;
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar13 = GetPrivateWidgetClass();
  }
  else {
    pFVar13 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar14 = (pFVar13->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)(pFVar13->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 0x58) {
    if ((*(int *)(pFVar14 + 8) == (int)puVar1 - iVar16) &&
       (pFVar14[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425beb6c;
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SCompoundWidget,void>'::__l2::<lambda_1>::operator()(local_res8);
LAB_1425beb6c:
  *(undefined8 *)&(this->ChildSlot).field_0x50 = 0;
  pTVar3 = &this->ContentScaleAttribute;
  *(undefined ***)&pFVar2->field_0x0 = &FCompoundWidgetOneChildSlot::_vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &FCompoundWidgetOneChildSlot::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>__;
  *(undefined8 *)&pTVar3->field_0x0 = 0x3ff0000000000000;
  *(undefined8 *)&(this->ContentScaleAttribute).field_0x8 = 0x3ff0000000000000;
  iVar11 = _finite(*(double *)&pTVar3->field_0x0);
  if ((iVar11 == 0) ||
     (iVar11 = _finite(*(double *)&(this->ContentScaleAttribute).field_0x8), iVar11 == 0)) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l17::<lambda_1>::operator()(local_res10);
  }
  if (((pTVar3 < this) || (this + 1 <= pTVar3)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    pSVar12 = (SCompoundWidget *)(*pcVar9)();
    return pSVar12;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar13 = GetPrivateWidgetClass();
  }
  else {
    pFVar13 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar14 = (pFVar13->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)(pFVar13->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 0x58) {
    if ((*(int *)(pFVar14 + 8) == (int)pTVar3 - iVar16) &&
       (pFVar14[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bec5c;
  }
  local_res18[0] = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SCompoundWidget,void>'::__l2::<lambda_1>::operator()(local_res18);
LAB_1425bec5c:
  pTVar4 = &this->ColorAndOpacityAttribute;
  *pTVar4 = (TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
            FLinearColor::White.field0_0x0;
  fVar6 = *(float *)&(this->ColorAndOpacityAttribute).field_0x4;
  fVar7 = *(float *)&(this->ColorAndOpacityAttribute).field_0x8;
  fVar8 = *(float *)&(this->ColorAndOpacityAttribute).field_0xc;
  iVar11 = _finite((double)*(float *)&pTVar4->field_0x0);
  if (((iVar11 == 0) || (iVar11 = _finite((double)fVar6), iVar11 == 0)) ||
     ((iVar11 = _finite((double)fVar7), iVar11 == 0 ||
      (iVar11 = _finite((double)fVar8), iVar11 == 0)))) {
    local_res20[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l37::<lambda_1>::operator()(local_res20);
  }
  if (((pTVar4 < this) || (this + 1 <= pTVar4)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    pSVar12 = (SCompoundWidget *)(*pcVar9)();
    return pSVar12;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar13 = GetPrivateWidgetClass();
  }
  else {
    pFVar13 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar14 = (pFVar13->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)(pFVar13->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 0x58) {
    if ((*(int *)(pFVar14 + 8) == (int)pTVar4 - iVar16) &&
       (pFVar14[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bed63;
  }
  local_88 = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SCompoundWidget,void>'::__l2::<lambda_1>::operator()(&local_88);
LAB_1425bed63:
  uStack_7c = _UNK_15090c6d8;
  local_84 = ___xmm_3f8000003f800000000000003f800000;
  pTVar5 = &this->ForegroundColorAttribute;
  local_74 = CONCAT22(local_74._2_2_,2);
  *(undefined8 *)&pTVar5->field_0x0 = ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)&(this->ForegroundColorAttribute).field_0x8 = uStack_7c;
  *(undefined4 *)&(this->ForegroundColorAttribute).field_0x10 = local_74;
  if (((pTVar5 < this) || (this + 1 <= pTVar5)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                          ,0x15,
                          L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    pSVar12 = (SCompoundWidget *)(*pcVar9)();
    return pSVar12;
  }
  pcVar9 = *(code **)(this->_padding_ + 8);
  if (pcVar9 == GetWidgetClass) {
    pFVar13 = GetPrivateWidgetClass();
  }
  else {
    pFVar13 = (FSlateWidgetClassData *)(*pcVar9)(this);
  }
  pFVar14 = (pFVar13->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar15 = pFVar14 + (longlong)(pFVar13->Descriptor).Attributes.ArrayNum * 0x58;
  while( true ) {
    if (pFVar14 == pFVar15) {
      `SlateAttributePrivate::
      TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
      ::VerifyAttributeAddress<SCompoundWidget,void>'::__l2::<lambda_1>::operator()(local_87);
      return this;
    }
    if ((*(int *)(pFVar14 + 8) == (int)pTVar5 - iVar16) &&
       (pFVar14[0x50] == (FScriptContainerElement)0x0)) break;
    pFVar14 = pFVar14 + 0x58;
  }
  return this;
}

// ~SCompoundWidget @ 1425c1c10

void __thiscall SCompoundWidget::~SCompoundWidget(SCompoundWidget *this)

{
  this->_padding_ = (longlong)&___7SCompoundWidget__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SWidget::~SWidget((SWidget *)this);
  return;
}

// ComputeDesiredSize @ 1425d1ef0

TVector2<double> * __thiscall
SCompoundWidget::ComputeDesiredSize
          (SCompoundWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  TVector2<float>_u_0 TVar4;
  float local_res8;
  float fStackX_c;
  
  lVar1 = *(longlong *)&(this->ChildSlot).field_0x30;
  if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(lVar1 + 0x39) ==
      EVisibility::Collapsed.Value.Value) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  fVar2 = *(float *)&(this->ChildSlot).field_0x44;
  fVar3 = *(float *)&(this->ChildSlot).field_0x4c;
  TVar4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((*(byte *)(lVar1 + 0x31) & 0x20) != 0) {
    TVar4._s_0 = *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar1 + 0x170))->_s_0;
  }
  local_res8 = TVar4._s_0.X;
  fStackX_c = TVar4._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(local_res8 +
               *(float *)&(this->ChildSlot).field_0x48 + *(float *)&(this->ChildSlot).field_0x40);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fStackX_c + fVar3 + fVar2);
  return __return_storage_ptr__;
}

// GetChildren @ 1425dfca0

FChildren * __thiscall SCompoundWidget::GetChildren(SCompoundWidget *this)

{
  return (FChildren *)&this->ChildSlot;
}

// GetForegroundColor @ 1425e10d0

FSlateColor * __thiscall
SCompoundWidget::GetForegroundColor(SCompoundWidget *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  
  uVar2 = (this->ForegroundColorAttribute).field_0x10;
  uVar3 = (this->ForegroundColorAttribute).field_0x11;
  uVar4 = *(undefined2 *)&(this->ForegroundColorAttribute).field_0x12;
  uVar1 = *(undefined8 *)&(this->ForegroundColorAttribute).field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&this->ForegroundColorAttribute;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  __return_storage_ptr__->ColorUseRule = uVar2;
  __return_storage_ptr__->ColorTableId = uVar3;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar4;
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 1425e2700

FSlateWidgetClassData * __cdecl SCompoundWidget::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SCompoundWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SCompoundWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1425e45b0

FSlateWidgetClassData * __thiscall SCompoundWidget::GetWidgetClass(SCompoundWidget *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SCompoundWidget");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SCompoundWidget::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCompoundWidget::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 1425eba00

void __thiscall
SCompoundWidget::OnArrangeChildren
          (SCompoundWidget *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)&this->ContentScaleAttribute;
  local_18._s_0.Y = (double)*(undefined8 *)&(this->ContentScaleAttribute).field_0x8;
  ArrangeSingleChild<SCompoundWidget::FCompoundWidgetOneChildSlot>
            (GSlateFlowDirection,param_1,param_2,&this->ChildSlot,(TVector2<double> *)&local_18._s_0
            );
  return;
}

// OnPaint @ 1425ef5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SCompoundWidget::OnPaint
          (SCompoundWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FLinearColor_u_0 *this_00;
  FArrangedWidget *pFVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStackY_2d8 [32];
  FLinearColor_u_0 local_298;
  undefined4 local_288;
  undefined1 local_284;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_280;
  ForAnyElementType FStack_278;
  ulonglong local_270;
  FDestructionSentinel local_268;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  FLinearColor_u_0 local_240;
  FLinearColor_u_0 local_230;
  FPaintArgs local_220;
  FLinearColor_u_0 local_1f0;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 local_1c0 [20];
  undefined1 local_1ac [20];
  uchar local_198;
  FArrangedWidget local_190 [4];
  FArrangedWidget *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_198 = (uchar)EVisibility::Visible.Value.Value;
  local_70 = (FArrangedWidget *)0x0;
  local_68 = 0;
  local_64 = 4;
  local_60 = 0;
  (**(code **)(this->_padding_ + 0x240))(this,param_2);
  if (0 < local_68) {
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((local_68 != 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\SCompoundWidget.cpp"
                           ,0x22,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if ((local_68 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    local_240._0_8_ = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
    local_240._8_8_ = *(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
    pFVar6 = local_190;
    if (local_70 != (FArrangedWidget *)0x0) {
      pFVar6 = local_70;
    }
    local_230._s_0.R = (param_6->SubduedForeground).field0_0x0._s_0.R;
    local_230._s_0.G = (param_6->SubduedForeground).field0_0x0._s_0.G;
    local_230._s_0.B = (param_6->SubduedForeground).field0_0x0._s_0.B;
    local_230._s_0.A = (param_6->SubduedForeground).field0_0x0._s_0.A;
    fVar8 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R *
            *(float *)&this->ColorAndOpacityAttribute;
    fVar9 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G *
            *(float *)&(this->ColorAndOpacityAttribute).field_0x4;
    fVar10 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B *
             *(float *)&(this->ColorAndOpacityAttribute).field_0x8;
    fVar11 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A *
             *(float *)&(this->ColorAndOpacityAttribute).field_0xc;
    local_250 = fVar8;
    fStack_24c = fVar9;
    fStack_248 = fVar10;
    fStack_244 = fVar11;
    if (bVar7 == false) {
      puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x200))(this,local_1ac);
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x1f8))(this,local_1c0);
    }
    local_298._0_8_ = *puVar5;
    local_298._8_8_ = puVar5[1];
    local_288 = *(undefined4 *)(puVar5 + 2);
    local_270 = 0;
    local_284 = 1;
    local_280.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_278.Data = (FScriptContainerElement *)0x0;
    this_00 = (FLinearColor_u_0 *)
              TAttribute<FSlateColor>::Get((TAttribute<FSlateColor> *)&local_298._s_0);
    EVar1 = *(ESlateColorStylingMode *)(this_00->RGBA + 4);
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = &FSlateColor::GetColorFromTable((FSlateColor *)&this_00->_s_0)->field0_0x0;
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = &local_240;
      }
      else {
        this_00 = &local_230;
      }
    }
    local_1e0 = (((FLinearColor *)&(this_00->_s_0).R)->field0_0x0)._s_0.R;
    fStack_1dc = (this_00->_s_0).G;
    fStack_1d8 = (this_00->_s_0).B;
    fStack_1d4 = (this_00->_s_0).A;
    fStack_1c4 = fStack_1d4 * __real_3f19999a;
    local_1f0._s_0.R = fVar8;
    local_1f0._s_0.G = fVar9;
    local_1f0._s_0.B = fVar10;
    local_1f0._s_0.A = fVar11;
    local_1d0 = local_1e0;
    fStack_1cc = fStack_1dc;
    fStack_1c8 = fStack_1d8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_280,(FWriteAccessScope *)&local_268);
    if (((int)local_270 != 0) && (FStack_278.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_278.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_278,0,0,0x10);
      local_270 = local_270 & 0xffffffff00000000;
    }
    if (local_268.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
    }
    if (FStack_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_278.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_280.AccessDetector);
    local_220.RootGrid = param_1->RootGrid;
    local_220.CurrentGrid = param_1->CurrentGrid;
    local_220.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_220.CurrentTime = param_1->CurrentTime;
    local_220.DeltaTime = param_1->DeltaTime;
    local_220._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_220.PaintParentPtr = (SWidget *)this;
    param_5 = SWidget::Paint((pFVar6->Widget).Object,&local_220,&pFVar6->Geometry,param_3,param_4,
                             param_5 + 1,(FWidgetStyle *)&local_1f0._s_0,bVar7);
  }
  pFVar6 = local_190;
  if (local_70 != (FArrangedWidget *)0x0) {
    pFVar6 = local_70;
  }
  DestructItems<FArrangedWidget,int>(pFVar6,local_68);
  if (local_70 != (FArrangedWidget *)0x0) {
    FMemory::Free(local_70);
  }
  return param_5;
}

// PrivateRegisterAttributes @ 1425f4620

void __cdecl SCompoundWidget::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8;
  FAttributeEntry local_48;
  EInvalidateWidgetReason local_38;
  ForAnyElementType local_30;
  ulonglong uStack_28;
  undefined1 local_20 [24];
  
  local_38 = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res8,"SlotPadding");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,600,(FInvalidateWidgetReasonAttribute *)local_20)
  ;
  if ((int)uStack_28 == 0) {
LAB_1425f46bc:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_1425f46bc;
  }
  local_38 = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res8,"ContentScale");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,0x270,
             (FInvalidateWidgetReasonAttribute *)local_20);
  if ((int)uStack_28 == 0) {
LAB_1425f474b:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_1425f474b;
  }
  local_38 = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res8,"ColorAndOpacity");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,0x280,
             (FInvalidateWidgetReasonAttribute *)local_20);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_1425f47e4;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_1425f47e4:
  local_38 = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res8,"ForegroundColor");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,0x290,
             (FInvalidateWidgetReasonAttribute *)local_20);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// SetVisibility @ 1425fe680

void __thiscall
SCompoundWidget::SetVisibility(SCompoundWidget *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  undefined1 local_28 [8];
  undefined1 local_20 [24];
  
  local_28[0] = (TEnumAsByte<EVisibility::Private>)(param_1->Value).Value.Value;
  this_00 = &param_1->Getter;
  local_28[1] = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,EVisibility,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 1),(SWidget *)this,(TAttribute<EVisibility> *)local_28,
           None);
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

