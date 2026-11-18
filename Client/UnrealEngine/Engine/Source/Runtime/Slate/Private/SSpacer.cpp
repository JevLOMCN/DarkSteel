// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// SSpacer @ 1428bad30

SSpacer * __thiscall SSpacer::SSpacer(SSpacer *this)

{
  TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *this_00;
  EWidgetUpdateFlags EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  SSpacer *pSVar5;
  EWidgetUpdateFlags EVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SSpacer__6B_;
  this_00 = &this->SpacerSize;
  *this_00 = (TSlateAttribute<UE::Math::TVector2<double>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              )UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  iVar4 = _finite(*(double *)&this_00->field_0x0);
  if (iVar4 != 0) {
    iVar4 = _finite(*(double *)&(this->SpacerSize).field_0x8);
    if (iVar4 != 0) goto LAB_1428bad89;
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res8);
LAB_1428bad89:
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SSpacer *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SSpacer,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  this->bIsSpacerSizeBound = false;
  EVar6 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar6);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ComputeDesiredSize @ 1428e1af0

TVector2<double> * __thiscall
SSpacer::ComputeDesiredSize(SSpacer *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->SpacerSize).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->SpacerSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Construct @ 1429066e0

void __thiscall SSpacer::Construct(SSpacer *this,FArguments *param_1)

{
  char cVar1;
  bool bVar2;
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  local_40._s_0.X = (param_1->_Size).Value.field0_0x0._s_0.X;
  local_40._s_0.Y = (param_1->_Size).Value.field0_0x0._s_0.Y;
  local_30 = (param_1->_Size).bIsSet;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_28,&(param_1->_Size).Getter);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FReadAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)FStack_20.Data + 0x38))();
    if (cVar1 != '\0') {
      bVar2 = true;
      goto LAB_142906755;
    }
  }
  bVar2 = false;
LAB_142906755:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_58);
  this->bIsSpacerSizeBound = bVar2;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SpacerSize,(SWidget *)this,
           (TAttribute<UE::Math::TVector2<double>_> *)&local_40._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// GetPrivateWidgetClass @ 142947470

FSlateWidgetClassData * __cdecl SSpacer::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10;
  FName local_res18;
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SSpacer");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      local_28[0] = Layout;
      local_20.Data = (FScriptContainerElement *)0x0;
      uStack_18 = 0;
      pFVar1 = ::FName::FName(&local_res18,10,L"SpacerSize",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                (&local_res8,&local_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_28);
      if (((int)uStack_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
        uStack_18 = uStack_18 & 0xffffffff00000000;
      }
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SSpacer::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14294c610

FSlateWidgetClassData * __thiscall SSpacer::GetWidgetClass(SSpacer *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FAttributeEntry FStack_38;
  undefined1 auStack_28 [8];
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SSpacer");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      auStack_28[0] = Layout;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      uStack_18 = 0;
      pFVar1 = ::FName::FName(&FStackX_18,10,L"SpacerSize",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                (&FStackX_8,&FStack_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)auStack_28)
      ;
      if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
        uStack_18 = uStack_18 & 0xffffffff00000000;
      }
      if (FStack_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_20.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SSpacer::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SSpacer::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnPaint @ 142980750

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSpacer::OnPaint(SSpacer *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  return param_5;
}

// PrivateRegisterAttributes @ 142985ed0

void __cdecl SSpacer::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(local_res10,10,L"SpacerSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x218,(FInvalidateWidgetReasonAttribute *)local_28);
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

