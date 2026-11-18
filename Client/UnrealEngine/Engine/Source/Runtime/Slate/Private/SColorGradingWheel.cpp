// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 17

// SColorGradingWheel @ 142847820

SColorGradingWheel * __thiscall SColorGradingWheel::SColorGradingWheel(SColorGradingWheel *this)

{
  TSlateAttribute<FLinearColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_02;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  SColorGradingWheel *pSVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SColorGradingWheel__6B_;
  this_00 = &this->SelectedColorAttribute;
  *(undefined8 *)&this->OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->SelectedColorAttribute).field_0x8 = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
               *)this_00);
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
      pSVar4 = (SColorGradingWheel *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar2) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorGradingWheel,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01 = &this->DesiredWheelSizeAttribute;
  *(undefined4 *)&this_01->field_0x0 = 0;
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
      pSVar4 = (SColorGradingWheel *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar2) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorGradingWheel,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_02 = &this->ExponentDisplacementAttribute;
  *(undefined4 *)&this_02->field_0x0 = 0;
  iVar3 = _finite(0.0);
  if (iVar3 == 0) {
    local_res18[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res18);
  }
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
      pSVar4 = (SColorGradingWheel *)(*pcVar1)();
      return pSVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_02,(SWidget *)this);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SColorGradingWheel,void>'::__l2::<lambda_1>::operator()(local_res20);
  }
  (this->field75_0x288).Union_IsAttributeSet = '\0';
  return this;
}

// ~SColorGradingWheel @ 14284a6d0

void __thiscall SColorGradingWheel::~SColorGradingWheel(SColorGradingWheel *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorGradingWheel__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// CalcRelativePositionFromCenter @ 142856e00

FDeprecateSlateVector2D __thiscall
SColorGradingWheel::CalcRelativePositionFromCenter(SColorGradingWheel *this)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  FDeprecateSlateVector2D in_RDX;
  float _X;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  
  _X = *(float *)&(this->SelectedColorAttribute).field_0x4;
  if (((this->field75_0x288).Union_IsAttributeSet & 2) != 0) {
    TVar1 = this->ExponentDisplacementAttribute;
    if (((float)TVar1 != __real_3f800000) &&
       (__real_3727c5ac < (float)((uint)TVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      _X = powf(_X,__real_3f800000 / (float)TVar1);
    }
  }
  __libm_sse2_sincosf_();
  *(ulonglong *)in_RDX = CONCAT44(extraout_XMM0_Da * _X,extraout_XMM0_Db * _X);
  return in_RDX;
}

// ComputeDesiredSize @ 142858060

TVector2<double> * __thiscall
SColorGradingWheel::ComputeDesiredSize
          (SColorGradingWheel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  TSlateAttribute<int,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  
  if (((this->field75_0x288).Union_IsAttributeSet & 1) != 0) {
    TVar2 = this->DesiredWheelSizeAttribute;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)TVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)TVar2;
    return __return_storage_ptr__;
  }
  fVar1 = *(float *)&(this->Image->ImageSize).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)&this->Image->ImageSize;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 142859080

void __thiscall SColorGradingWheel::Construct(SColorGradingWheel *this,FArguments *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [8];
  undefined1 uVar8;
  bool bVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  FSlateBrush *pFVar12;
  FName local_res8;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  undefined1 auStack_48 [8];
  ForAnyElementType local_40;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  int local_28;
  
  pIVar10 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar10 + 0x50);
  pFVar11 = ::FName::FName(&local_res8,"ColorGradingWheel.HueValueCircle");
  pFVar12 = (FSlateBrush *)(*pcVar2)(pIVar10,*pFVar11,0);
  this->Image = pFVar12;
  pIVar10 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar10 + 0x50);
  pFVar11 = ::FName::FName(&local_res8,"ColorGradingWheel.Selector");
  pFVar12 = (FSlateBrush *)(*pcVar2)(pIVar10,*pFVar11,0);
  this->SelectorImage = pFVar12;
  local_50 = *(undefined1 (*) [8])&(param_1->_SelectedColor).Value.field0_0x0;
  auStack_48 = *(undefined1 (*) [8])((longlong)&(param_1->_SelectedColor).Value.field0_0x0 + 8);
  local_40.Data._0_1_ = (param_1->_SelectedColor).bIsSet;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
             &(param_1->_SelectedColor).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SelectedColorAttribute,(SWidget *)this,(TAttribute<FLinearColor> *)local_50,
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
  auVar7 = local_50;
  uVar3 = (param_1->_DesiredWheelSize).Value;
  uVar4 = (param_1->_DesiredWheelSize).bIsSet;
  local_50[4] = uVar4;
  local_50._0_4_ = uVar3;
  local_50._5_3_ = auVar7._5_3_;
  auStack_48 = (undefined1  [8])0x0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_48,
             &(param_1->_DesiredWheelSize).Getter);
  bVar1 = (this->field75_0x288).Union_IsAttributeSet;
  uVar8 = local_50[4];
  (this->field75_0x288).Union_IsAttributeSet = (bVar1 ^ local_50[4]) & 1 ^ bVar1;
  bVar9 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->DesiredWheelSizeAttribute,(SWidget *)this,(TAttribute<int> *)local_50,
                   None);
  if (((bVar1 & 1) != uVar8) && (!bVar9)) {
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_48,
             (FWriteAccessScope *)&local_68);
  if ((local_38._0_4_ != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_48);
  auVar7 = local_50;
  uVar5 = (param_1->_ExponentDisplacement).Value;
  uVar6 = (param_1->_ExponentDisplacement).bIsSet;
  local_50[4] = uVar6;
  local_50._0_4_ = uVar5;
  auStack_48 = (undefined1  [8])0x0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_50._5_3_ = auVar7._5_3_;
  local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_48,
             &(param_1->_ExponentDisplacement).Getter);
  bVar1 = (this->field75_0x288).Union_IsAttributeSet;
  uVar8 = local_50[4];
  local_res8.ComparisonIndex.Value = 0x3f800000;
  (this->field75_0x288).Union_IsAttributeSet = (local_50[4] * '\x02' ^ bVar1) & 2 ^ bVar1;
  bVar9 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->ExponentDisplacementAttribute,(SWidget *)this,
                   (TAttribute<float> *)local_50,(float *)&local_res8,None);
  if (((bVar1 >> 1 & 1) != uVar8) && (!bVar9)) {
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_48,
             (FWriteAccessScope *)&local_68);
  if ((local_38._0_4_ != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
    local_38 = (undefined1  [8])((ulonglong)local_38 & 0xffffffff00000000);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_48);
  TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureBegin,&param_1->_OnMouseCaptureBegin);
  TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnMouseCaptureEnd,&param_1->_OnMouseCaptureEnd);
  TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnValueChanged,&param_1->_OnValueChanged);
  return;
}

// GetPrivateWidgetClass @ 142879b10

FSlateWidgetClassData * __cdecl SColorGradingWheel::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SColorGradingWheel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SColorGradingWheel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14287dfe0

FSlateWidgetClassData * __thiscall SColorGradingWheel::GetWidgetClass(SColorGradingWheel *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SColorGradingWheel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SColorGradingWheel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SColorGradingWheel::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnMouseButtonDoubleClick @ 142887510

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorGradingWheel::OnMouseButtonDoubleClick
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142887f50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorGradingWheel::OnMouseButtonDown
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  char cVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FReply *pFVar6;
  longlong *plVar7;
  bool bVar8;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureBegin,
               &local_e8);
    if (((*(int *)&(this->OnMouseCaptureBegin).field_0x10 == 0) ||
        (plVar7 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8, plVar7 == (longlong *)0x0))
       || (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnMouseCaptureBegin,&local_e8);
      if (*(int *)&(this->OnMouseCaptureBegin).field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(this->OnMouseCaptureBegin).field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,&this->SelectedColorAttribute);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
    bVar8 = ProcessMouseAction(this,param_1,param_2,false);
    if (bVar8) {
      FReply::FReply(&local_d0,true);
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_e8);
      pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar5->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_e8.DestructionSentinel.Accessor);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_e8.DestructionSentinel.Accessor);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.DestructionSentinel._0_8_ = pSVar3;
      local_e8.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
      pFVar6 = FReply::CaptureMouse(&local_d0,(TSharedRef<SWidget,1> *)&local_e8);
      FReply::FReply(__return_storage_ptr__,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FReply::~FReply(&local_d0);
      return __return_storage_ptr__;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_e8);
    if (((*(int *)&(this->OnMouseCaptureEnd).field_0x10 == 0) ||
        (plVar7 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar7 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar7 + 0x38))(), cVar4 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
      TDelegate<void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>::Execute
                (&this->OnMouseCaptureEnd,(FLinearColor *)&this->SelectedColorAttribute);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142888d60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorGradingWheel::OnMouseButtonUp
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) &&
     (bVar6 = SWidget::HasMouseCapture((SWidget *)this), bVar6)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
               &local_d8);
    if ((*(int *)&(this->OnMouseCaptureEnd).field_0x10 == 0) ||
       ((plVar8 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8, plVar8 == (longlong *)0x0 ||
        (cVar7 = (**(code **)(*plVar8 + 0x38))(), cVar7 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
                ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnMouseCaptureEnd,
                 &local_d8);
      if (*(int *)&(this->OnMouseCaptureEnd).field_0x10 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)&(this->OnMouseCaptureEnd).field_0x8;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,&this->SelectedColorAttribute);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
    }
    FReply::FReply(&local_c0,true);
    FVar5.ReferenceController = local_c0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c0.MouseCaptor.Object = (SWidget *)0x0;
    local_c0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_c0.bUseHighPrecisionMouse = 0;
    local_c0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 142889bb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SColorGradingWheel::OnMouseMove
          (SColorGradingWheel *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    ProcessMouseAction(this,param_1,param_2,true);
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// OnPaint @ 14288da70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SColorGradingWheel::OnPaint
          (SColorGradingWheel *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  float fVar2;
  ESlateColorStylingMode EVar3;
  undefined1 uVar4;
  FSlateBrush *pFVar5;
  TVector2<float>_u_0_s_0 TVar6;
  FSlateBrush *pFVar7;
  FDeprecateSlateVector2D FVar8;
  bool bVar9;
  float fVar10;
  FSlateColor *pFVar11;
  undefined8 uVar12;
  ESlateDrawEffect EVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar17;
  float fVar18;
  undefined1 auStackY_198 [32];
  undefined8 local_168;
  undefined8 local_160;
  FLinearColor_u_0 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  float fStack_130;
  FSlateWindowElementList *local_128;
  TTransform2<float> local_120;
  TTransform2<float> local_108;
  TVector2<float>_u_0 local_f0;
  float local_e8;
  undefined8 local_e4;
  FDeprecateSlateVector2D local_dc;
  float local_d4 [2];
  float afStack_cc [2];
  TVector2<float>_u_0 local_c4;
  byte local_bc;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_128 = param_4;
  if ((!param_7) || (bVar9 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar9 = false;
  }
  pFVar5 = this->SelectorImage;
  EVar13 = DisabledEffect;
  if (bVar9) {
    EVar13 = None;
  }
  local_160._0_4_ = SUB84(param_2->Size,0);
  fVar16 = *(float *)&(pFVar5->ImageSize).field_0x4;
  fVar14 = (float)(undefined4)local_160 - *(float *)&pFVar5->ImageSize;
  local_160._4_4_ = SUB84(param_2->Size,4);
  fVar15 = (float)local_160._4_4_ - fVar16;
  local_168 = (TVector2<float>_u_0)CONCAT44(fVar15,fVar14);
  uVar12 = local_168;
  fVar17 = (float)local_160._4_4_;
  fVar18 = (float)(undefined4)local_160;
  if (((this->field75_0x288).Union_IsAttributeSet & 1) != 0) {
    fVar17 = (float)(int)this->DesiredWheelSizeAttribute;
    fVar14 = fVar17 - *(float *)&pFVar5->ImageSize;
    fVar15 = fVar17 - fVar16;
    local_160 = (TVector2<float>_u_0)CONCAT44(fVar15,fVar14);
    uVar12 = local_160;
    fVar18 = fVar17;
  }
  EVar3 = (this->Image->TintColor).ColorUseRule;
  pFVar11 = &this->Image->TintColor;
  if (EVar3 != UseColor_Specified) {
    if (EVar3 == UseColor_ColorTable) {
      pFVar11 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar11);
    }
    else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
      pFVar11 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar11 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar10 = __real_3f000000;
  TVar6 = (param_2->AbsolutePosition).field0_0x0._s_0;
  fVar16 = param_2->Scale;
  local_150._s_0.R =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  pFVar7 = this->Image;
  uStack_138._4_4_ = TVar6.X;
  fStack_130 = TVar6.Y;
  local_150._s_0.G =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_150._s_0.B =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_150._s_0.A =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_168._0_4_ = *(float *)&pFVar5->ImageSize * __real_3f000000;
  local_168._4_4_ = *(float *)&(pFVar5->ImageSize).field_0x4 * __real_3f000000;
  local_120.Trans.field0_0x0 = local_168;
  local_120.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_120.M.M[0][1] = _UNK_15076b184;
  local_120.M.M[1][0] = _UNK_15076b188;
  local_120.M.M[1][1] = _UNK_15076b18c;
  local_160._4_4_ = (float)local_168._4_4_ * fVar16 + fStack_130;
  local_160._0_4_ = (float)(undefined4)local_168 * fVar16 + uStack_138._4_4_;
  uStack_138 = &param_2->AccumulatedRenderTransform;
  Concatenate<TTransform2<float>_>(&local_108,&local_120,&param_2->AccumulatedRenderTransform);
  local_f0 = local_160;
  local_bc = param_2->bHasRenderTransform * '\x02' | local_bc & 0xfc;
  local_e4 = 0;
  local_d4[0] = local_108.M.M[0][0];
  local_d4[1] = local_108.M.M[0][1];
  afStack_cc[0] = local_108.M.M[1][0];
  afStack_cc[1] = local_108.M.M[1][1];
  local_c4 = local_108.Trans.field0_0x0;
  local_e8 = fVar16;
  local_dc = (FDeprecateSlateVector2D)uVar12;
  FSlateDrawElement::MakeBox
            (local_128,param_5,(FPaintGeometry *)&local_f0._s_0,pFVar7,EVar13,
             (FLinearColor *)&local_150._s_0);
  EVar3 = (this->SelectorImage->TintColor).ColorUseRule;
  pFVar11 = &this->SelectorImage->TintColor;
  if (EVar3 != UseColor_Specified) {
    if (EVar3 == UseColor_ColorTable) {
      pFVar11 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar11);
    }
    else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
      pFVar11 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar11 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  pFVar7 = this->SelectorImage;
  fVar16 = *(float *)&(this->SelectedColorAttribute).field_0x4;
  local_120.M.M[0][1] =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_120.M.M[0][0] =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_120.M.M[1][1] =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_120.M.M[1][0] =
       (pFVar11->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  if (((((this->field75_0x288).Union_IsAttributeSet & 2) != 0) &&
      (TVar1 = this->ExponentDisplacementAttribute, (float)TVar1 != __real_3f800000)) &&
     (__real_3727c5ac < (float)((uint)TVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar16 = powf(fVar16,__real_3f800000 / (float)TVar1);
  }
  __libm_sse2_sincosf_();
  FVar8 = pFVar5->ImageSize;
  fVar2 = param_2->Scale;
  TVar6 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_160._0_4_ =
       ((extraout_XMM0_Db * fVar16 * fVar14 + fVar18) - *(float *)&pFVar5->ImageSize) * fVar10;
  local_150._s_0.G = TVar6.X;
  local_150._s_0.B = TVar6.Y;
  local_160._4_4_ =
       ((extraout_XMM0_Da * fVar16 * fVar15 + fVar17) - *(float *)&(pFVar5->ImageSize).field_0x4) *
       fVar10;
  local_108.Trans.field0_0x0 = local_160;
  local_108.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_108.M.M[0][1] = _UNK_15076b184;
  local_108.M.M[1][0] = _UNK_15076b188;
  local_108.M.M[1][1] = _UNK_15076b18c;
  local_168._4_4_ = (float)local_160._4_4_ * fVar2 + local_150._s_0.B;
  local_168._0_4_ = (float)(undefined4)local_160 * fVar2 + local_150._s_0.G;
  Concatenate<TTransform2<float>_>((TTransform2<float> *)&local_150._s_0,&local_108,uStack_138);
  local_d4 = (float  [2])CONCAT44(local_150._s_0.G,local_150._s_0.R);
  afStack_cc = (float  [2])CONCAT44(local_150._s_0.A,local_150._s_0.B);
  local_f0 = local_168;
  local_bc = param_2->bHasRenderTransform * '\x02' | local_bc & 0xfc;
  local_e4 = 0;
  local_c4 = (TVector2<float>_u_0)local_140;
  local_e8 = fVar2;
  local_dc = FVar8;
  FSlateDrawElement::MakeBox
            (local_128,param_5 + 1,(FPaintGeometry *)&local_f0._s_0,pFVar7,EVar13,
             (FLinearColor *)&local_120);
  return param_5 + 1;
}

// PrivateRegisterAttributes @ 142892700

void __cdecl SColorGradingWheel::PrivateRegisterAttributes(FInitializer *param_1)

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
  pFVar1 = ::FName::FName(&local_res10,"SelectedColor");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x270,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 == 0) {
LAB_142892787:
    if (local_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data);
    }
  }
  else if (local_20.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
    goto LAB_142892787;
  }
  local_28[0] = Layout;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"DesiredWheelSize");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x280,(FInvalidateWidgetReasonAttribute *)local_28);
  if ((int)uStack_18 != 0) {
    if (local_20.Data == (FScriptContainerElement *)0x0) goto LAB_14289280b;
    (*(code *)**(undefined8 **)local_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
LAB_14289280b:
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ExponentDisplacement");
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x284,(FInvalidateWidgetReasonAttribute *)local_28);
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

// ProcessMouseAction @ 1428929a0

bool __thiscall
SColorGradingWheel::ProcessMouseAction
          (SColorGradingWheel *this,FGeometry *param_1,FPointerEvent *param_2,bool param_3)

{
  longlong *plVar1;
  float fVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  TTransform2<float> local_68 [3];
  
  local_78 = param_1->Size;
  if (((this->field75_0x288).Union_IsAttributeSet & 1) == 0) {
    fVar5 = local_78._4_4_;
    fVar9 = (float)local_78;
  }
  else {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&this->DesiredWheelSizeAttribute,(SWidget *)this,Member);
    fVar5 = (float)(int)this->DesiredWheelSizeAttribute;
    fVar9 = (float)(int)this->DesiredWheelSizeAttribute;
  }
  pTVar3 = Inverse<TTransform2<float>_>(local_68,&param_1->AccumulatedRenderTransform);
  fVar2 = __real_3f800000;
  local_78._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  local_78._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  fVar8 = local_78._4_4_ * (pTVar3->M).M[1][0] + (float)local_78 * (pTVar3->M).M[0][0] +
          (pTVar3->Trans).field0_0x0._s_0.X;
  fVar7 = (float)local_78 * (pTVar3->M).M[0][1] + local_78._4_4_ * (pTVar3->M).M[1][1] +
          (pTVar3->Trans).field0_0x0._s_0.Y;
  fVar4 = fVar9 - *(float *)&this->SelectorImage->ImageSize;
  fVar6 = fVar5 - *(float *)&(this->SelectorImage->ImageSize).field_0x4;
  local_78 = (FDeprecateSlateVector2D)CONCAT44(fVar6,fVar4);
  fVar4 = ((fVar8 + fVar8) - fVar9) / fVar4;
  fVar6 = ((fVar7 + fVar7) - fVar5) / fVar6;
  fVar9 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
  if ((fVar9 <= __real_3f800000) || (param_3)) {
    fVar5 = FGenericPlatformMath::Atan2(fVar6,fVar4);
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + __real_40c90fdb;
    }
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)&this->SelectedColorAttribute,(SWidget *)this,Member);
    uStack_70 = *(undefined8 *)&(this->SelectedColorAttribute).field_0x8;
    local_78._4_4_ = (float)((ulonglong)*(undefined8 *)&this->SelectedColorAttribute >> 0x20);
    local_78 = (FDeprecateSlateVector2D)CONCAT44(local_78._4_4_,fVar5 * __real_42652ee0);
    fVar5 = fVar9;
    if (fVar2 <= fVar9) {
      fVar5 = fVar2;
    }
    if ((((this->field75_0x288).Union_IsAttributeSet & 2) != 0) &&
       ((float)this->ExponentDisplacementAttribute != fVar2)) {
      fVar5 = powf(fVar5,(float)this->ExponentDisplacementAttribute);
    }
    local_78 = (FDeprecateSlateVector2D)CONCAT44(fVar5,(float)local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
               (FReadAccessScope *)local_68);
    if ((*(int *)&(this->OnValueChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnValueChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_68);
  }
  return fVar9 <= fVar2;
}

// SetDesiredWheelSizeAttribute @ 142895fc0

void __thiscall
SColorGradingWheel::SetDesiredWheelSizeAttribute(SColorGradingWheel *this,TAttribute<int> *param_1)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  bool bVar4;
  
  bVar1 = (this->field75_0x288).Union_IsAttributeSet;
  bVar2 = param_1->bIsSet;
  (this->field75_0x288).Union_IsAttributeSet = (bVar1 ^ bVar2) & 1 ^ bVar1;
  bVar4 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->DesiredWheelSizeAttribute,(SWidget *)this,param_1,None);
  if (((bool)(bVar1 & 1) != bVar2) && (!bVar4)) {
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetExponentDisplacementAttribute @ 1428967a0

void __thiscall
SColorGradingWheel::SetExponentDisplacementAttribute
          (SColorGradingWheel *this,TAttribute<float> *param_1)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  bool bVar4;
  float local_res8 [2];
  
  bVar1 = (this->field75_0x288).Union_IsAttributeSet;
  bVar2 = param_1->bIsSet;
  local_res8[0] = 1.0;
  (this->field75_0x288).Union_IsAttributeSet = (bVar2 * '\x02' ^ bVar1) & 2 ^ bVar1;
  bVar4 = SlateAttributePrivate::
          TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
          ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                    *)&this->ExponentDisplacementAttribute,(SWidget *)this,param_1,local_res8,None);
  if (((bool)(bVar1 >> 1 & 1) != bVar2) && (!bVar4)) {
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetSelectedColorAttribute @ 142898de0

void __thiscall
SColorGradingWheel::SetSelectedColorAttribute
          (SColorGradingWheel *this,TAttribute<FLinearColor> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SelectedColorAttribute,(SWidget *)this,param_1,None);
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

