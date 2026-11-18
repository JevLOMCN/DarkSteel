// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// SDPIScaler @ 1428b9bf0

SDPIScaler * __thiscall SDPIScaler::SDPIScaler(SDPIScaler *this)

{
  undefined1 *this_00;
  byte *pbVar1;
  FDPIScalerOneChildSlot *pFVar2;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  EWidgetUpdateFlags EVar3;
  code *pcVar4;
  double _X;
  bool bVar5;
  int iVar6;
  SDPIScaler *pSVar7;
  EWidgetUpdateFlags EVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  SPanel::SPanel((SPanel *)this);
  pFVar2 = &this->ChildSlot;
  this->_padding_ = (longlong)&___7SDPIScaler__6B_;
  *(SDPIScaler **)&(this->ChildSlot).field_0x8 = this;
  *(undefined ***)&pFVar2->field_0x0 = &___7FChildren__6B_;
  ::FName::FName((FName *)&(this->ChildSlot).field_0x10,"Children");
  *(undefined2 *)&(this->ChildSlot).field_0x18 = 0xdc00;
  FSlotBase::FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20,(FChildren *)pFVar2);
  this_00 = &(this->ChildSlot).field_0x40;
  *(undefined ***)&pFVar2->field_0x0 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
        _vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ChildSlot).field_0x48 = 0;
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SDPIScaler *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar5) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SDPIScaler,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  _X = __real_3ff0000000000000;
  *(undefined ***)&pFVar2->field_0x0 = &FDPIScalerOneChildSlot::_vftable__for__FChildren__;
  *(undefined ***)&(this->ChildSlot).field_0x20 =
       &FDPIScalerOneChildSlot::
        _vftable__for__TSlotBase<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>__;
  *(undefined8 *)&(this->ChildSlot).field_0x50 = 0;
  this_01 = &this->DPIScaleAttribute;
  *(undefined4 *)&this_01->field_0x0 = 0x3f800000;
  iVar6 = _finite(_X);
  if (iVar6 == 0) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res10);
  }
  if ((this_01 < this) || (this + 1 <= this_01)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar7 = (SDPIScaler *)(*pcVar4)();
      return pSVar7;
    }
  }
  bVar5 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar5) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SDPIScaler,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  EVar3 = (EWidgetUpdateFlags)this->_padding_;
  EVar8 = EVar3 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar8;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar3,EVar8);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 1;
  return this;
}

// ~SDPIScaler @ 1428c1150

void __thiscall SDPIScaler::~SDPIScaler(SDPIScaler *this)

{
  this->_padding_ = (longlong)&___7SDPIScaler__6B_;
  FSlotBase::~FSlotBase((FSlotBase *)&(this->ChildSlot).field_0x20);
  FChildren::~FChildren((FChildren *)&this->ChildSlot);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// ComputeDesiredSize @ 1428e0da0

TVector2<double> * __thiscall
SDPIScaler::ComputeDesiredSize
          (SDPIScaler *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  float fVar2;
  code *pcVar3;
  TVector2<double>_u_0 TVar4;
  double dVar5;
  bool bVar6;
  TVector2<double> *pTVar7;
  FDeprecateSlateVector2D FVar8;
  
  TVar1 = this->DPIScaleAttribute;
  if (0.0 < (float)TVar1) {
    FVar8 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
    fVar2 = *(float *)((longlong)FVar8 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)((float)TVar1 * *(float *)FVar8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)((float)TVar1 * fVar2);
    return __return_storage_ptr__;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5198917127075004469>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SDPIScaler.cpp"
                     ,0x35,"DPIScaleValue > 0.f");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TVector2<double> *)(*pcVar3)();
    return pTVar7;
  }
  FVar8 = SWidget::GetDesiredSize(*(SWidget **)&(this->ChildSlot).field_0x30);
  dVar5 = (double)(float)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
  TVar4._8_4_ = SUB84(dVar5,0);
  TVar4._s_0.X = (double)(float)*(undefined8 *)FVar8;
  TVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar4;
  return __return_storage_ptr__;
}

// Construct @ 1428f9620

void __thiscall SDPIScaler::Construct(SDPIScaler *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  float local_res8 [2];
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30._0_4_ = (param_1->_DPIScale).Value;
  local_30[4] = (param_1->_DPIScale).bIsSet;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,
             &(param_1->_DPIScale).Getter);
  local_res8[0] = 1.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DPIScaleAttribute,(SWidget *)this,(TAttribute<float> *)local_30,local_res8,None
          );
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
            ((FSlateAttributeImpl *)&this->DPIScaleAttribute,(SWidget *)this,Member);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&(this->ChildSlot).field_0x20);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38;
  *(SWidget **)&(this->ChildSlot).field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&(this->ChildSlot).field_0x20);
  return;
}

// GetChildren @ 14293e4f0

FChildren * __thiscall SDPIScaler::GetChildren(SDPIScaler *this)

{
  return (FChildren *)&this->ChildSlot;
}

// GetPrivateWidgetClass @ 142946b00

FSlateWidgetClassData * __cdecl SDPIScaler::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18 [2];
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&local_res10,"SDPIScaler");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&local_res8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res18,"SlotPadding");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&local_res8,&local_48,*pFVar1,600,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_142946c57;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_142946c57:
  local_38[0] = Prepass;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(local_res18,"DPIScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&local_res8,&local_48,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)local_38);
  if (((int)uStack_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
  atexit(`SDPIScaler::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetRelativeLayoutScale @ 142947630

float __thiscall SDPIScaler::GetRelativeLayoutScale(SDPIScaler *this,int param_1,float param_2)

{
  return (float)this->DPIScaleAttribute;
}

// GetWidgetClass @ 14294c5b0

FSlateWidgetClassData * __thiscall SDPIScaler::GetWidgetClass(SDPIScaler *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName aFStackX_18 [2];
  FAttributeEntry FStack_48;
  undefined1 auStack_38 [8];
  ForAnyElementType FStack_30;
  ulonglong uStack_28;
  
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__ != -1) {
    return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
            ::__l2::WidgetClassDataInstance;
  }
  pFVar1 = ::FName::FName(&FStackX_10,"SDPIScaler");
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
       (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
  `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
  ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
  pFVar2 = SWidget::GetPrivateWidgetClass();
  FSlateAttributeDescriptor::FInitializer::FInitializer
            (&FStackX_8,
             &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
  auStack_38[0] = Layout;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(aFStackX_18,"SlotPadding");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,600,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if ((int)uStack_28 != 0) {
    if (FStack_30.Data == (FScriptContainerElement *)0x0) goto LAB_142946c57;
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
LAB_142946c57:
  auStack_38[0] = Prepass;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(aFStackX_18,"DPIScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (&FStackX_8,&FStack_48,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)auStack_38);
  if (((int)uStack_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
  atexit(`SDPIScaler::GetPrivateWidgetClass'::__l2::
         _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
  _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
                       ::__l2::_thread_safe_static_guard_0__);
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SDPIScaler::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 14295e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SDPIScaler::OnArrangeChildren(SDPIScaler *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  undefined1 auStackY_b8 [32];
  float local_88;
  float fStack_84;
  undefined1 local_80 [4];
  TVector2<float>_u_0 aTStack_7c [2];
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)((longlong)&this->_padding_ + 1)) != 0) {
    TVar1 = this->DPIScaleAttribute;
    aTStack_7c[0]._s_0.X = SUB84(param_1->Size,4);
    local_80 = SUB84(param_1->Size,0);
    fStack_84 = (__real_3f800000 / (float)TVar1) * (float)aTStack_7c[0]._0_4_;
    local_88 = (__real_3f800000 / (float)TVar1) * (float)local_80;
    aTStack_7c[0]._4_4_ =
         (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y * (float)TVar1;
    aTStack_7c[0]._0_4_ =
         (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X * (float)TVar1;
    local_80 = (undefined1  [4])TVar1;
    FGeometry::MakeChild
              (param_1,&local_68,(TSharedRef<SWidget,1> *)&(this->ChildSlot).field_0x30,
               (FDeprecateVector2DParameter *)&local_88,(FSlateLayoutTransform *)local_80);
    FArrangedChildren::AddWidget(param_2,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Widget.SharedReferenceCount.ReferenceController);
  }
  return;
}

// PrivateRegisterAttributes @ 1429854f0

void __cdecl SDPIScaler::PrivateRegisterAttributes(FInitializer *param_1)

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
  pFVar1 = ::FName::FName(&local_res10,"SlotPadding");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,600,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_142985581;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_142985581:
  local_28[0] = Prepass;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"DPIScale");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)local_28);
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

// SetContent @ 14298f000

void __thiscall SDPIScaler::SetContent(SDPIScaler *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this_00 = &(this->ChildSlot).field_0x20;
  FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38;
  *(SWidget **)&(this->ChildSlot).field_0x30 = pSVar2;
  *(TReferenceControllerBase<1> **)&(this->ChildSlot).field_0x38 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDPIScale @ 14298f570

void __thiscall SDPIScaler::SetDPIScale(SDPIScaler *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  float local_res8 [2];
  
  local_res8[0] = 1.0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DPIScaleAttribute,(SWidget *)this,param_1,local_res8,None);
  SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
            ((FSlateAttributeImpl *)&this->DPIScaleAttribute,(SWidget *)this,Member);
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

