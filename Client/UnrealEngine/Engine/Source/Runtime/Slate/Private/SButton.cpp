// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 63

// GetForegroundColor @ 1428100c0

FSlateColor * __thiscall
SButton::GetForegroundColor(SButton *this,FSlateColor *__return_storage_ptr__)

{
  SCompoundWidget::GetForegroundColor((SCompoundWidget *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWidgetClass @ 1428170d0

FSlateWidgetClassData * __thiscall SButton::GetWidgetClass(SButton *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res10;
  FName local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res18,"SButton");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBorder::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res10,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res10);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res10);
      atexit(`SButton::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// SButton @ 142846fe0

SButton * __thiscall SButton::SButton(SButton *this)

{
  byte *pbVar1;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01;
  code *pcVar2;
  bool bVar3;
  SButton *pSVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  SBorder::SBorder((SBorder *)this);
  this->_padding_ = (longlong)&___7SButton__6B_;
  *(undefined8 *)&this->OnClicked = 0;
  *(undefined8 *)&(this->OnClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnPressed = 0;
  *(undefined8 *)&(this->OnPressed).field_0x8 = 0;
  *(undefined4 *)&(this->OnPressed).field_0x10 = 0;
  *(undefined8 *)&this->OnReleased = 0;
  *(undefined8 *)&(this->OnReleased).field_0x8 = 0;
  *(undefined4 *)&(this->OnReleased).field_0x10 = 0;
  *(undefined8 *)&this->OnHovered = 0;
  *(undefined8 *)&(this->OnHovered).field_0x8 = 0;
  *(undefined4 *)&(this->OnHovered).field_0x10 = 0;
  *(undefined8 *)&this->OnUnhovered = 0;
  *(undefined8 *)&(this->OnUnhovered).field_0x8 = 0;
  *(undefined4 *)&(this->OnUnhovered).field_0x10 = 0;
  *(undefined8 *)&this->OnReceivedFocus = 0;
  *(undefined8 *)&(this->OnReceivedFocus).field_0x8 = 0;
  *(undefined4 *)&(this->OnReceivedFocus).field_0x10 = 0;
  *(undefined8 *)&this->OnLostFocus = 0;
  *(undefined8 *)&(this->OnLostFocus).field_0x8 = 0;
  *(undefined4 *)&(this->OnLostFocus).field_0x10 = 0;
  *(undefined8 *)&this->OnSlateButtonDragDetected = 0;
  *(undefined8 *)&(this->OnSlateButtonDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->OnSlateButtonDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->OnSlateButtonDragEnter = 0;
  *(undefined8 *)&(this->OnSlateButtonDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->OnSlateButtonDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->OnSlateButtonDragLeave = 0;
  *(undefined8 *)&(this->OnSlateButtonDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->OnSlateButtonDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->OnSlateButtonDragOver = 0;
  *(undefined8 *)&(this->OnSlateButtonDragOver).field_0x8 = 0;
  *(undefined4 *)&(this->OnSlateButtonDragOver).field_0x10 = 0;
  *(undefined8 *)&this->OnSlateButtonDrop = 0;
  *(undefined8 *)&(this->OnSlateButtonDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnSlateButtonDrop).field_0x10 = 0;
  FSlateSound::FSlateSound(&this->HoveredSound);
  FSlateSound::FSlateSound(&this->PressedSound);
  FSlateSound::FSlateSound(&this->ClickedSound);
  this_00 = &this->BorderForegroundColorAttribute;
  this->bAllowDragDrop = false;
  (this->BorderForegroundColorAttribute).field_0x10 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0x3f800000;
  *(undefined4 *)&(this->BorderForegroundColorAttribute).field_0x8 = 0x3f800000;
  *(undefined4 *)&(this->BorderForegroundColorAttribute).field_0xc = 0x3f800000;
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
      pSVar4 = (SButton *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res8[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SButton,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  SWidget::TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SButton,void>
            (&this->ContentPaddingAttribute,this);
  SWidget::TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SButton,void>
            (&this->NormalPaddingAttribute,this);
  SWidget::TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>::
  TSlateAttribute<FMargin,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_><SButton,void>
            (&this->PressedPaddingAttribute,this);
  this_01 = &this->AppearPressedAttribute;
  this_01->field_0x0 = 0;
  if ((this_01 < this) || (this + 1 <= this_01)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar4 = (SButton *)(*pcVar2)();
      return pSVar4;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SButton,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~SButton @ 14284a2d0

void __thiscall SButton::~SButton(SButton *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SButton__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDrop);
  pvVar1 = *(void **)&(this->OnSlateButtonDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateButtonDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragOver);
  pvVar1 = *(void **)&(this->OnSlateButtonDragOver).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateButtonDragOver);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragLeave);
  pvVar1 = *(void **)&(this->OnSlateButtonDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateButtonDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragEnter);
  pvVar1 = *(void **)&(this->OnSlateButtonDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateButtonDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragDetected);
  pvVar1 = *(void **)&(this->OnSlateButtonDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSlateButtonDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLostFocus);
  pvVar1 = *(void **)&(this->OnLostFocus).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLostFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReceivedFocus);
  pvVar1 = *(void **)&(this->OnReceivedFocus).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReceivedFocus);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUnhovered);
  pvVar1 = *(void **)&(this->OnUnhovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnhovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHovered);
  pvVar1 = *(void **)&(this->OnHovered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHovered);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReleased);
  pvVar1 = *(void **)&(this->OnReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPressed);
  pvVar1 = *(void **)&(this->OnPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClicked);
  pvVar1 = *(void **)&(this->OnClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClicked);
  SBorder::~SBorder((SBorder *)this);
  return;
}

// operator() @ 14284c510

TSharedRef<SWidget,1> * __thiscall
`SButton::Construct'::__l2::<unnamed-type-DetermineContent>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  FText *this_00;
  FArguments *pFVar3;
  TAttribute<FText> *pTVar4;
  TSharedRef<STextBlock,1> *pTVar5;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  ETextShapingMethod local_608 [2];
  ETextFlowDirection local_606 [6];
  uchar local_600;
  undefined1 local_5ff;
  undefined1 local_5f8 [8];
  void *pvStack_5f0;
  undefined8 local_5e8;
  FName local_5e0;
  FMemScope local_5d8;
  TSharedRef<STextBlock,1> local_5d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5c0;
  TAttribute<FText> local_5a8;
  FArguments local_578;
  
  if ((param_1->_Content).Widget.Object == SNullWidget::NullWidget.Object) {
    bVar2 = TAttribute<FText>::IsBound(&param_1->_Text);
    if (!bVar2) {
      this_00 = TAttribute<FText>::Get(&param_1->_Text);
      bVar2 = FText::IsEmpty(this_00);
      if (bVar2) goto LAB_14284c767;
    }
    pFVar3 = STextBlock::FArguments::FArguments(&local_578);
    local_600 = (uchar)EVisibility::HitTestInvisible.Value.Value;
    local_5ff = 1;
    local_5e8 = 0;
    local_5f8 = (undefined1  [8])0x0;
    pvStack_5f0 = (void *)0x0;
    *(TEnumAsByte<EVisibility::Private> *)&pFVar3->_padding_ =
         EVisibility::HitTestInvisible.Value.Value;
    *(undefined1 *)((longlong)&pFVar3->_padding_ + 1) = 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar3->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f8);
    if (pvStack_5f0 != (void *)0x0) {
      FMemory::Free(pvStack_5f0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5f8);
    pTVar4 = TAttribute<FText>::TAttribute<FText>(&local_5a8,&param_1->_Text);
    pFVar3 = STextBlock::FArguments::Text(pFVar3,pTVar4);
    pFVar3->_TextStyle = param_1->_TextStyle;
    bVar2 = (param_1->_TextShapingMethod).bIsSet;
    if (bVar2 != false) {
      local_608[0] = (param_1->_TextShapingMethod).TypedValue;
    }
    if ((TOptional<ETextShapingMethod> *)local_608 != &pFVar3->_TextShapingMethod) {
      if (bVar2 == false) {
        if ((pFVar3->_TextShapingMethod).bIsSet != false) {
          (pFVar3->_TextShapingMethod).bIsSet = false;
        }
      }
      else {
        (pFVar3->_TextShapingMethod).TypedValue = local_608[0];
        (pFVar3->_TextShapingMethod).bIsSet = true;
      }
    }
    bVar2 = (param_1->_TextFlowDirection).bIsSet;
    if (bVar2 != false) {
      local_606[0] = (param_1->_TextFlowDirection).TypedValue;
    }
    if ((TOptional<ETextFlowDirection> *)local_606 != &pFVar3->_TextFlowDirection) {
      if (bVar2 == false) {
        if ((pFVar3->_TextFlowDirection).bIsSet != false) {
          (pFVar3->_TextFlowDirection).bIsSet = false;
        }
      }
      else {
        (pFVar3->_TextFlowDirection).TypedValue = local_606[0];
        (pFVar3->_TextFlowDirection).bIsSet = true;
      }
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_5e0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_5d8,&local_5e0,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5c0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SButton.cpp"
               ,0x88,local_res18);
    FMemScope::~FMemScope(&local_5d8);
    FLLMScope::~FLLMScope(local_res20);
    pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_5c0,&local_5d0,pFVar3);
    __return_storage_ptr__->Object = (SWidget *)pTVar5->Object;
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5c0._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_578);
  }
  else {
LAB_14284c767:
    __return_storage_ptr__->Object = (param_1->_Content).Widget.Object;
    pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 142857fc0

TVector2<double> * __thiscall
SButton::ComputeDesiredSize(SButton *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  
  if ((SWidget *)this->_padding_ == SNullWidget::NullWidget.Object) {
    fVar1 = *(float *)(this->_padding_ + 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)*(float *)(this->_padding_ + 0x24);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
    return __return_storage_ptr__;
  }
  SBorder::ComputeDesiredSize((SBorder *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Construct @ 1428582f0

void __thiscall SButton::Construct(SButton *this,FArguments *param_1)

{
  bool bVar1;
  EWidgetUpdateFlags EVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  FButtonStyle *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined8 uVar8;
  FArguments *pFVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FName FVar11;
  FSlateSound *pFVar12;
  EWidgetUpdateFlags EVar13;
  undefined1 local_res8 [8];
  undefined1 local_4b8 [8];
  ForAnyElementType local_4b0;
  int local_4a8;
  undefined1 local_4a0 [8];
  FMRSWRecursiveAccessDetector *pFStack_498;
  undefined8 local_490;
  undefined1 local_488 [8];
  void *pvStack_480;
  undefined4 local_478;
  undefined1 local_470 [16];
  bool local_460;
  undefined1 local_458 [8];
  void *pvStack_450;
  undefined4 local_448;
  double local_440;
  double dStack_438;
  bool local_430;
  undefined1 local_428 [24];
  FArguments local_410;
  
  this->bIsPressed = '\0';
  this->field_0x464 = (this->bIsFocusable ^ param_1->_IsFocusable) & 1 ^ this->field_0x464;
  this->bAllowDragDrop = param_1->_AllowDragDrop;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->BorderForegroundColorAttribute,(SWidget *)this,&param_1->_ForegroundColor,None)
  ;
  bVar1 = (param_1->_NormalPaddingOverride).bIsSet;
  this->field_0x464 = (bVar1 << 2 ^ this->field_0x464) & 4U ^ this->field_0x464;
  if ((bVar1 & 1U) != 0) {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->NormalPaddingAttribute,(SWidget *)this,&param_1->_NormalPaddingOverride,None)
    ;
  }
  bVar1 = (param_1->_PressedPaddingOverride).bIsSet;
  this->field_0x464 = (bVar1 << 3 ^ this->field_0x464) & 8U ^ this->field_0x464;
  if ((bVar1 & 1U) != 0) {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->PressedPaddingAttribute,(SWidget *)this,&param_1->_PressedPaddingOverride,
             None);
  }
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnClicked,&param_1->_OnClicked);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnPressed,&param_1->_OnPressed);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnReleased,&param_1->_OnReleased);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnHovered,&param_1->_OnHovered);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnUnhovered,&param_1->_OnUnhovered);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnReceivedFocus,&param_1->_OnReceivedFocus);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnLostFocus,&param_1->_OnLostFocus);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnSlateButtonDragDetected,&param_1->_OnSlateButtonDragDetected);
  if (&param_1->_OnSlateButtonDragEnter != &this->OnSlateButtonDragEnter) {
    local_4b8 = (undefined1  [8])0x0;
    local_4b0.Data = (FScriptContainerElement *)0x0;
    local_4a8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSlateButtonDragEnter,(FReadAccessScope *)local_4a0);
    if ((*(int *)&(param_1->_OnSlateButtonDragEnter).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnSlateButtonDragEnter).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_4b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_4a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragEnter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
               (FWriteAccessScope *)local_4a0);
    if ((local_4a8 != 0) &&
       ((TReferenceControllerBase<1> *)local_4b0.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_4b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4b0,0,0,0x10);
      local_4a8 = 0;
    }
    if ((bool)(undefined1)local_490 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_498,(FDestructionSentinel *)local_4a0);
    }
    if ((TReferenceControllerBase<1> *)local_4b0.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_4b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b8);
  }
  if (&param_1->_OnSlateButtonDragLeave != &this->OnSlateButtonDragLeave) {
    local_4b8 = (undefined1  [8])0x0;
    local_4b0.Data = (FScriptContainerElement *)0x0;
    local_4a8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSlateButtonDragLeave,(FReadAccessScope *)local_4a0);
    if ((*(int *)&(param_1->_OnSlateButtonDragLeave).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnSlateButtonDragLeave).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_4b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_4a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragLeave,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4b8,
               (FWriteAccessScope *)local_4a0);
    if ((local_4a8 != 0) &&
       ((TReferenceControllerBase<1> *)local_4b0.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_4b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4b0,0,0,0x10);
      local_4a8 = 0;
    }
    if ((bool)(undefined1)local_490 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_498,(FDestructionSentinel *)local_4a0);
    }
    if ((TReferenceControllerBase<1> *)local_4b0.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_4b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b8);
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnSlateButtonDragOver,&param_1->_OnSlateButtonDragOver);
  TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnSlateButtonDrop,&param_1->_OnSlateButtonDrop);
  pFVar12 = &(param_1->_HoveredSoundOverride).TypedValue;
  (this->ClickMethod).Value = (char)param_1->_ClickMethod;
  (this->TouchMethod).Value = (char)param_1->_TouchMethod;
  (this->PressMethod).Value = (char)param_1->_PressMethod;
  if ((param_1->_HoveredSoundOverride).bIsSet == false) {
    pFVar12 = &param_1->_ButtonStyle->HoveredSlateSound;
  }
  FSlateSound::operator=(&this->HoveredSound,pFVar12);
  pFVar12 = &(param_1->_PressedSoundOverride).TypedValue;
  if ((param_1->_PressedSoundOverride).bIsSet == false) {
    pFVar12 = &param_1->_ButtonStyle->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,pFVar12);
  pFVar12 = &(param_1->_ClickedSoundOverride).TypedValue;
  if ((param_1->_ClickedSoundOverride).bIsSet == false) {
    pFVar12 = &param_1->_ButtonStyle->ClickedSlateSound;
  }
  FSlateSound::operator=(&this->ClickedSound,pFVar12);
  pFVar9 = SBorder::FArguments::FArguments(&local_410);
  local_430 = (param_1->_ContentScale).bIsSet;
  local_440 = (param_1->_ContentScale).Value.field0_0x0._s_0.X;
  dStack_438 = (param_1->_ContentScale).Value.field0_0x0._s_0.Y;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_428,&(param_1->_ContentScale).Getter);
  (pFVar9->_ContentScale).Value.field0_0x0._s_0.X = local_440;
  (pFVar9->_ContentScale).Value.field0_0x0._s_0.Y = dStack_438;
  (pFVar9->_ContentScale).bIsSet = local_430;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_ContentScale).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
  if ((void *)local_428._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_428._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_428);
  local_470._0_8_ = (param_1->_DesiredSizeScale).Value.field0_0x0._s_0.X;
  local_470._8_8_ = (param_1->_DesiredSizeScale).Value.field0_0x0._s_0.Y;
  local_460 = (param_1->_DesiredSizeScale).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_458,&(param_1->_DesiredSizeScale).Getter);
  (pFVar9->_DesiredSizeScale).Value.field0_0x0._s_0.X = (double)local_470._0_8_;
  (pFVar9->_DesiredSizeScale).Value.field0_0x0._s_0.Y = (double)local_470._8_8_;
  (pFVar9->_DesiredSizeScale).bIsSet = local_460;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_DesiredSizeScale).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
  if (pvStack_450 != (void *)0x0) {
    FMemory::Free(pvStack_450);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_458);
  local_4a0 = *(undefined1 (*) [8])
               &(param_1->_ButtonColorAndOpacity).Value.SpecifiedColor.field0_0x0;
  pFStack_498 = *(FMRSWRecursiveAccessDetector **)
                 ((longlong)&(param_1->_ButtonColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8);
  local_490._0_5_ = *(undefined5 *)&(param_1->_ButtonColorAndOpacity).Value.ColorUseRule;
  local_478 = 0;
  local_488 = (undefined1  [8])0x0;
  pvStack_480 = (void *)0x0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_488,
             &(param_1->_ButtonColorAndOpacity).Getter);
  uVar8 = local_490;
  *(undefined1 (*) [8])&(pFVar9->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 = local_4a0
  ;
  *(FMRSWRecursiveAccessDetector **)
   ((longlong)&(pFVar9->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8) = pFStack_498;
  (pFVar9->_BorderBackgroundColor).Value.ColorUseRule = (undefined1)local_490;
  (pFVar9->_BorderBackgroundColor).Value.ColorTableId = local_490._1_1_;
  *(undefined2 *)&(pFVar9->_BorderBackgroundColor).Value.field_0x12 = local_490._2_2_;
  local_490._4_1_ = SUB81(uVar8,4);
  (pFVar9->_BorderBackgroundColor).bIsSet = local_490._4_1_;
  local_490 = uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_BorderBackgroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
  if (pvStack_480 != (void *)0x0) {
    FMemory::Free(pvStack_480);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_488);
  pFVar9->_HAlign = param_1->_HAlign;
  pFVar9->_VAlign = param_1->_VAlign;
  pTVar10 = `SButton::Construct'::__l2::<unnamed-type-DetermineContent>::operator()
                      (local_res8,(TSharedRef<SWidget,1> *)local_4b8,param_1);
  pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar10->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar9->_Content).Widget.Object = pSVar5;
  (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SBorder::Construct((SBorder *)this,pFVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4b0.Data);
  SBorder::FArguments::~FArguments(&local_410);
  local_470._0_4_ = (param_1->_ContentPadding).Value.Left;
  local_470._4_4_ = (param_1->_ContentPadding).Value.Top;
  local_470._8_4_ = (param_1->_ContentPadding).Value.Right;
  local_470._12_4_ = (param_1->_ContentPadding).Value.Bottom;
  local_460 = (param_1->_ContentPadding).bIsSet;
  local_448 = 0;
  local_458 = (undefined1  [8])0x0;
  pvStack_450 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_458,
             &(param_1->_ContentPadding).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ContentPaddingAttribute,(SWidget *)this,(TAttribute<FMargin> *)local_470,None);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
  if (pvStack_450 != (void *)0x0) {
    FMemory::Free(pvStack_450);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_458);
  pFVar6 = param_1->_ButtonStyle;
  if (pFVar6 == (FButtonStyle *)0x0) {
    `SButton::SetButtonStyle'::__l5::<lambda_1>::operator()(local_res8);
  }
  else {
    this->Style = pFVar6;
    if (this->bIsStyleNormalPaddingOverridden == '\0') {
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Set((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
             *)&this->NormalPaddingAttribute,(SWidget *)this,&pFVar6->NormalPadding);
    }
    if (this->bIsStylePressedPaddingOverridden == '\0') {
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Set((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
             *)&this->PressedPaddingAttribute,(SWidget *)this,&this->Style->PressedPadding);
    }
    FSlateSound::operator=(&this->HoveredSound,&this->Style->HoveredSlateSound);
    FSlateSound::operator=(&this->PressedSound,&this->Style->PressedSlateSound);
    FSlateSound::operator=(&this->ClickedSound,&this->Style->ClickedSlateSound);
    UpdatePadding(this);
    local_4a0._0_2_ = 0x100;
    local_4a0[0] = (this->Style->Disabled).DrawAs.Value == '\0';
    local_488 = (undefined1  [8])0x0;
    pFStack_498 = (FMRSWRecursiveAccessDetector *)0x0;
    local_490 = 0;
    SBorder::SetShowEffectWhenDisabled((SBorder *)this,(TAttribute<bool> *)local_4a0);
    UpdateBorderImage(this);
    UpdateForegroundColor(this);
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  FVar11 = SWidget::GetType((SWidget *)this);
  if (*(FName *)FVar11 == SButtonTypeName) {
    EVar2 = (EWidgetUpdateFlags)this->_padding_;
    EVar13 = EVar2 & ~NeedsTick;
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar13;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar13);
  }
  return;
}

// CreateAccessibleWidget @ 142866360

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SButton::CreateAccessibleWidget
          (SButton *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  SWidget *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateAccessibleButton *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  TRawPtrProxy<FSlateAccessibleWidget> TVar7;
  bool bVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  bVar8 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  pFVar4 = ::operator_new(0x70);
  if (pFVar4 == (FSlateAccessibleButton *)0x0) {
    pFVar4 = (FSlateAccessibleButton *)0x0;
    TVar7.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    TVar7.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar5->Object;
    if (TVar7.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar7.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar7.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar7.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar7.Object)->_padding_)[1] + 1);
      UNLOCK();
    }
    local_38.Object = pSVar1;
    local_38.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar7.Object;
    pFVar4 = FSlateAccessibleButton::FSlateAccessibleButton(pFVar4,&local_38);
    bVar8 = true;
    if ((((pFVar4 != (FSlateAccessibleButton *)0x0) && (*(longlong *)&pFVar4->field_0x8 != 0)) &&
        (*(longlong *)&pFVar4->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar4->field_0x10 + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = (FSlateAccessibleWidget *)pFVar4;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar7.Object);
  }
  return __return_storage_ptr__;
}

// ExecuteHoverStateChanged @ 142870580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::ExecuteHoverStateChanged(SButton *this,bool param_1)

{
  FSlateApplication *this_00;
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUnhovered,
               &local_28);
    if (*(int *)&(this->OnUnhovered).field_0x10 == 0) goto LAB_1428705f9;
    plVar1 = *(longlong **)&(this->OnUnhovered).field_0x8;
  }
  else {
    if (param_1) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::PlaySound(this_00,&this->HoveredSound,0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHovered,&local_28)
    ;
    if (*(int *)&(this->OnHovered).field_0x10 == 0) goto LAB_1428705f9;
    plVar1 = *(longlong **)&(this->OnHovered).field_0x8;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))();
  }
LAB_1428705f9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ExecuteOnClick @ 142871600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FReply * __thiscall SButton::ExecuteOnClick(SButton *this,FReply *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *this_00;
  bool bVar2;
  char cVar3;
  FSlateApplication *this_01;
  FSlateApplicationBase *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  longlong *plVar6;
  FReadAccessScope local_148;
  FSlateWidgetAccessibleEventArgs local_130;
  FReply local_d8;
  
  this_01 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_01,&this->ClickedSound,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClicked,&local_148);
  if (((*(int *)&(this->OnClicked).field_0x10 == 0) ||
      (plVar6 = *(longlong **)&(this->OnClicked).field_0x8, plVar6 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_148);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnClicked,&local_148
              );
    plVar6 = (longlong *)0x0;
    if (*(int *)&(this->OnClicked).field_0x10 != 0) {
      plVar6 = *(longlong **)&(this->OnClicked).field_0x8;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_148);
    pFVar4 = FSlateApplicationBase::Get();
    pTVar1 = (pFVar4->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
    this_00 = (pFVar4->AccessibleMessageHandler).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_148);
    local_130.Widget.Object = pTVar5->Object;
    local_130.Widget.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_130.Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_130.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_130.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    local_130.Event = Activate;
    local_130.OldValue.Type = Empty;
    local_130.OldValue.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.OldValue.Value.ArrayNum = 0;
    local_130.OldValue.Value.ArrayMax = 0;
    local_130.NewValue.Type = Empty;
    local_130.NewValue.Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.NewValue.Value.ArrayNum = 0;
    local_130.NewValue.Value.ArrayMax = 0;
    local_130.SlateUserIndex = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar5->SharedReferenceCount).ReferenceController);
    FSlateAccessibleMessageHandler::OnWidgetEventRaised(this_00,&local_130);
    if (local_130.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.NewValue.Value.AllocatorInstance.Data);
    }
    if (local_130.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.OldValue.Value.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,true);
  }
  return __return_storage_ptr__;
}

// GetClickMethodFromInputType @ 142875a60

TEnumAsByte<EButtonClickMethod::Type> __thiscall
SButton::GetClickMethodFromInputType(SButton *this,FPointerEvent *param_1)

{
  uchar uVar1;
  TEnumAsByte<EButtonClickMethod::Type> TVar2;
  longlong in_R8;
  
  TVar2.Value = (uchar)param_1;
  if (*(char *)(in_R8 + 0x6c) != '\0') {
    uVar1 = (this->TouchMethod).Value;
    if (uVar1 == '\0') {
      *(undefined1 *)&param_1->_padding_ = 0;
      return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
    }
    if (uVar1 == '\x01') {
      *(undefined1 *)&param_1->_padding_ = 1;
      return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
    }
    if (uVar1 == '\x02') {
      *(undefined1 *)&param_1->_padding_ = 3;
      return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
    }
  }
  *(uchar *)&param_1->_padding_ = (this->ClickMethod).Value;
  return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
}

// GetCombinedPadding @ 142875fe0

FMargin * __thiscall SButton::GetCombinedPadding(SButton *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((this->bIsPressed == '\0') &&
     (this->AppearPressedAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    fVar1 = *(float *)&(this->NormalPaddingAttribute).field_0x8;
    fVar2 = *(float *)&(this->ContentPaddingAttribute).field_0x8;
    fVar3 = *(float *)&(this->NormalPaddingAttribute).field_0x4;
    fVar4 = *(float *)&(this->ContentPaddingAttribute).field_0x4;
    fVar5 = *(float *)&(this->NormalPaddingAttribute).field_0xc;
    fVar6 = *(float *)&(this->ContentPaddingAttribute).field_0xc;
    __return_storage_ptr__->Left =
         *(float *)&this->ContentPaddingAttribute + *(float *)&this->NormalPaddingAttribute;
    __return_storage_ptr__->Top = fVar3 + fVar4;
    __return_storage_ptr__->Right = fVar1 + fVar2;
    __return_storage_ptr__->Bottom = fVar5 + fVar6;
    return __return_storage_ptr__;
  }
  fVar1 = *(float *)&(this->PressedPaddingAttribute).field_0x4;
  fVar2 = *(float *)&(this->ContentPaddingAttribute).field_0x4;
  fVar3 = *(float *)&(this->PressedPaddingAttribute).field_0x8;
  fVar4 = *(float *)&(this->ContentPaddingAttribute).field_0x8;
  fVar5 = *(float *)&(this->PressedPaddingAttribute).field_0xc;
  fVar6 = *(float *)&(this->ContentPaddingAttribute).field_0xc;
  __return_storage_ptr__->Left =
       *(float *)&this->PressedPaddingAttribute + *(float *)&this->ContentPaddingAttribute;
  __return_storage_ptr__->Top = fVar1 + fVar2;
  __return_storage_ptr__->Right = fVar3 + fVar4;
  __return_storage_ptr__->Bottom = fVar5 + fVar6;
  return __return_storage_ptr__;
}

// GetDisabledForegroundColor @ 1428764e0

FSlateColor * __thiscall
SButton::GetDisabledForegroundColor(SButton *this,FSlateColor *__return_storage_ptr__)

{
  FButtonStyle *pFVar1;
  undefined8 uVar2;
  ESlateColorStylingMode EVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  
  pFVar1 = this->Style;
  uVar2 = *(undefined8 *)((longlong)&(pFVar1->DisabledForeground).SpecifiedColor.field0_0x0 + 8);
  EVar3 = (pFVar1->DisabledForeground).ColorUseRule;
  EVar4 = (pFVar1->DisabledForeground).ColorTableId;
  uVar5 = *(undefined2 *)&(pFVar1->DisabledForeground).field_0x12;
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(pFVar1->DisabledForeground).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar2;
  __return_storage_ptr__->ColorUseRule = EVar3;
  __return_storage_ptr__->ColorTableId = EVar4;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 1428797a0

FSlateWidgetClassData * __cdecl SButton::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SButton");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SBorder::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SButton::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SButton::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetShowDisabledEffect @ 14287aa00

bool __thiscall SButton::GetShowDisabledEffect(SButton *this)

{
  return (this->Style->Disabled).DrawAs.Value == '\0';
}

// IsInteractable @ 142881f10

bool __thiscall SButton::IsInteractable(SButton *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsPreciseTapOrClick @ 142882160

bool __thiscall SButton::IsPreciseTapOrClick(SButton *this,FPointerEvent *param_1)

{
  uchar uVar1;
  
  if (param_1->bIsTouchEvent != false) {
    uVar1 = (this->TouchMethod).Value;
    if (uVar1 == '\0') {
      return false;
    }
    if (uVar1 == '\x01') {
      return false;
    }
    if (uVar1 == '\x02') {
      return true;
    }
  }
  return (this->ClickMethod).Value == '\x03';
}

// OnDragDetected @ 142885470

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnDragDetected
          (SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSlateButtonDragDetected,&local_28);
  if (((*(int *)&(this->OnSlateButtonDragDetected).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnSlateButtonDragDetected).field_0x8,
      plVar1 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnSlateButtonDragDetected,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnDragDetected((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnDragEnter @ 142885770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::OnDragEnter(SButton *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragEnter
             ,&local_28);
  if ((*(int *)&(this->OnSlateButtonDragEnter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnSlateButtonDragEnter).field_0x8, plVar2 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnSlateButtonDragEnter,&local_28);
      if (*(int *)&(this->OnSlateButtonDragEnter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnSlateButtonDragEnter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnDragEnter((SWidget *)this,param_1,param_2);
  return;
}

// OnDragLeave @ 142885940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::OnDragLeave(SButton *this,FDragDropEvent *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragLeave
             ,&local_28);
  if ((*(int *)&(this->OnSlateButtonDragLeave).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnSlateButtonDragLeave).field_0x8, plVar2 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnSlateButtonDragLeave,&local_28);
      if (*(int *)&(this->OnSlateButtonDragLeave).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnSlateButtonDragLeave).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnDragLeave((SWidget *)this,param_1);
  return;
}

// OnDragOver @ 142885b10

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnDragOver(SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                   FDragDropEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDragOver,
             &local_28);
  if (((*(int *)&(this->OnSlateButtonDragOver).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnSlateButtonDragOver).field_0x8, plVar1 != (longlong *)0x0))
     && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnSlateButtonDragOver,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnDragOver((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnDrop @ 142885c70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnDrop(SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
               FDragDropEvent *param_2)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSlateButtonDrop,
             &local_28);
  if (((*(int *)&(this->OnSlateButtonDrop).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->OnSlateButtonDrop).field_0x8, plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegate<FReply___cdecl(FGeometry_const_&,FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute(&this->OnSlateButtonDrop,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnDrop((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnFocusLost @ 142886300

void __thiscall SButton::OnFocusLost(SButton *this,FFocusEvent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SWidget::OnFocusLost((SWidget *)this,param_1);
  (**(code **)(this->_padding_ + 600))(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnLostFocus,&local_28)
  ;
  if ((*(int *)&(this->OnLostFocus).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnLostFocus).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnFocusReceived @ 142886380

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnFocusReceived
          (SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FFocusEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  SWidget::OnFocusReceived((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReceivedFocus,
             &local_28);
  if ((*(int *)&(this->OnReceivedFocus).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnReceivedFocus).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142886b80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnKeyDown(SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                  FKeyEvent *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  FReply *pFVar5;
  FReply local_238;
  FReply local_180;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pFVar4 = FSlateApplication::Get();
    cVar2 = (**(code **)(*(longlong *)pFVar4 + 0xb0))(pFVar4,param_2);
    if (cVar2 == '\0') {
      (**(code **)(this->_padding_ + 0x250))(this);
      if ((this->PressMethod).Value == '\x01') {
        pFVar5 = ExecuteOnClick(this,&local_180);
        FReply::operator=(__return_storage_ptr__,pFVar5);
        FReply::~FReply(&local_180);
        if ((char)__return_storage_ptr__->_padding_ == '\x01') {
          return __return_storage_ptr__;
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4664880751756443342>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SButton.cpp"
                           ,0x132,"Reply.IsEventHandled() == true");
        if (!bVar3) {
          return __return_storage_ptr__;
        }
        pcVar1 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar1)();
        return pFVar5;
      }
      FReply::FReply(&local_238,true);
      FReply::operator=(__return_storage_ptr__,&local_238);
      pFVar5 = &local_238;
      goto LAB_142886c8e;
    }
  }
  pFVar5 = SWidget::OnKeyDown((SWidget *)this,&local_c8,param_1,param_2);
  FReply::operator=(__return_storage_ptr__,pFVar5);
  pFVar5 = &local_c8;
LAB_142886c8e:
  FReply::~FReply(pFVar5);
  return __return_storage_ptr__;
}

// OnKeyUp @ 142887240

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnKeyUp(SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  undefined1 uVar1;
  uchar uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FSlateApplication *pFVar6;
  FReply *pFVar7;
  FReply local_178;
  FReply local_c0;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    pFVar6 = FSlateApplication::Get();
    cVar4 = (**(code **)(*(longlong *)pFVar6 + 0xb0))(pFVar6,param_2);
    if (cVar4 == '\0') {
      (**(code **)(this->_padding_ + 600))(this);
      uVar2 = (this->PressMethod).Value;
      if ((uVar2 == '\x02') || ((uVar2 == '\0' && (this->bIsPressed != '\0')))) {
        pFVar7 = ExecuteOnClick(this,&local_c0);
        FReply::operator=(__return_storage_ptr__,pFVar7);
        FReply::~FReply(&local_c0);
        if ((char)__return_storage_ptr__->_padding_ != '\x01') {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4664880751756443309>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SButton.cpp"
                             ,0x153,"Reply.IsEventHandled() == true");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FReply *)(*pcVar3)();
            return pFVar7;
          }
        }
      }
      else {
        FReply::FReply(&local_178,true);
        FReply::operator=(__return_storage_ptr__,&local_178);
        FReply::~FReply(&local_178);
      }
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142887460

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnMouseButtonDoubleClick
          (SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FReply local_c8;
  
  SWidget::OnMouseButtonDoubleClick((SWidget *)this,&local_c8,param_1,param_2);
  if ((char)local_c8._padding_ == '\0') {
    (**(code **)(this->_padding_ + 0x58))(this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    FReply::FReply(__return_storage_ptr__,&local_c8);
  }
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142887810

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnMouseButtonDown
          (SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  float fVar1;
  FName FVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  uchar uVar6;
  bool bVar7;
  FReply *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_288;
  TSharedRef<SWidget,1> local_278;
  FKey local_268;
  TSharedRef<SWidget,1> local_250;
  FReply local_240;
  FReply local_188;
  FReply local_d0;
  
  bVar7 = false;
  FReply::FReply(__return_storage_ptr__,false);
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142887889:
    bVar5 = false;
  }
  else {
    pTVar10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if ((FVar2 != EKeys::LeftMouseButton.KeyName) && (param_2->bIsTouchEvent == false))
    goto LAB_142887889;
    bVar5 = true;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (!bVar5) {
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x250))(this);
  fVar1 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
  (this->PressedScreenSpacePosition).field0_0x0._s_0.X =
       (double)*(float *)&param_2->ScreenSpacePosition;
  (this->PressedScreenSpacePosition).field0_0x0._s_0.Y = (double)fVar1;
  if (param_2->bIsTouchEvent != false) {
    uVar6 = (this->TouchMethod).Value;
    if (uVar6 == '\0') {
      uVar6 = '\0';
      goto LAB_14288790a;
    }
    if (uVar6 == '\x01') {
      uVar6 = '\x01';
      goto LAB_14288790a;
    }
    if (uVar6 == '\x02') {
      uVar6 = '\x03';
      goto LAB_14288790a;
    }
  }
  uVar6 = (this->ClickMethod).Value;
LAB_14288790a:
  if (uVar6 == '\x01') {
    pFVar8 = ExecuteOnClick(this,&local_d0);
    FReply::operator=(__return_storage_ptr__,pFVar8);
    FReply::~FReply(&local_d0);
    if (((char)__return_storage_ptr__->_padding_ != '\x01') &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4664880751756443281>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SButton.cpp"
                           ,0x16f,"Reply.IsEventHandled() == true"), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar4)();
      return pFVar8;
    }
  }
  else if (uVar6 == '\x03') {
    FReply::FReply(&local_240,true);
    FReply::operator=(__return_storage_ptr__,&local_240);
    FReply::~FReply(&local_240);
  }
  else {
    FReply::FReply(&local_188,true);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_250);
    pFVar8 = FReply::CaptureMouse(&local_188,pTVar9);
    FReply::operator=(__return_storage_ptr__,pFVar8);
    FReply::~FReply(&local_188);
    if (this->bAllowDragDrop != false) {
      local_268.KeyName = EKeys::LeftMouseButton.KeyName;
      local_268.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_268.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_278);
      pTVar10 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar9->Object;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_278.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_288.Object = pSVar3;
      local_288.SharedReferenceCount.ReferenceController = pTVar10;
      FReply::DetectDrag(__return_storage_ptr__,&local_288,&local_268);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1428888d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnMouseButtonUp
          (SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  atomic<int> aVar2;
  bool bVar3;
  bool bVar4;
  atomic<int> aVar5;
  FReply *pFVar6;
  uchar uVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 local_res10;
  TVector2<float>_u_0 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  FSlateRotatedRect local_100;
  FReply local_e8;
  
  bVar3 = false;
  local_res10 = (TReferenceControllerBase<1> *)((ulonglong)local_res10 & 0xffffffff00000000);
  FReply::FReply(__return_storage_ptr__,false);
  if (param_2->bIsTouchEvent == false) {
LAB_142888935:
    uVar7 = (this->ClickMethod).Value;
    if ((uVar7 == '\0') || (uVar7 == '\x03')) goto LAB_142888947;
LAB_142888950:
    local_res10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar1 = (param_2->EffectingButton).KeyName;
    if (local_res10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res10->SharedReferenceCount = (atomic<int>)((int)local_res10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar1 != EKeys::LeftMouseButton.KeyName) && (bVar3 = true, param_2->bIsTouchEvent == false)
       ) goto LAB_142888983;
    bVar4 = true;
LAB_142888990:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10)
    ;
    if (bVar4) {
      (**(code **)(this->_padding_ + 600))(this);
      if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') && (uVar7 != '\x01')) {
        if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
          if (param_2->bIsTouchEvent != false) {
            local_res10._0_4_ = SUB84(param_1->Size,0);
            local_res10._4_4_ = SUB84(param_1->Size,4);
            local_110 = (undefined4)local_res10;
            local_104 = local_res10._4_4_;
            local_118 = (TVector2<float>_u_0)0x0;
            local_10c = 0;
            TransformRect<TTransform2<float>_>
                      (&local_100,&param_1->AccumulatedRenderTransform,
                       (FSlateRotatedRect *)&local_118._s_0);
            bVar3 = FSlateRotatedRect::IsUnderLocation
                              (&local_100,
                               *(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
            if (bVar3) goto LAB_142888a2f;
          }
        }
        else {
LAB_142888a2f:
          if (uVar7 == '\x02') {
LAB_142888a40:
            bVar3 = true;
          }
          else {
            bVar4 = SWidget::HasMouseCapture((SWidget *)this);
            bVar3 = false;
            if (bVar4) goto LAB_142888a40;
          }
          if ((uVar7 == '\x03') || (bVar3)) {
            pFVar6 = ExecuteOnClick(this,&local_e8);
            FReply::operator=(__return_storage_ptr__,pFVar6);
            FReply::~FReply(&local_e8);
          }
        }
      }
      if ((char)__return_storage_ptr__->_padding_ == '\0') {
        FReply::FReply(&local_e8,true);
        FReply::operator=(__return_storage_ptr__,&local_e8);
        FReply::~FReply(&local_e8);
      }
    }
  }
  else {
    uVar7 = (this->TouchMethod).Value;
    if (uVar7 == '\0') {
      uVar7 = '\0';
    }
    else {
      if (uVar7 == '\x01') {
        uVar7 = '\x01';
        goto LAB_142888950;
      }
      if (uVar7 != '\x02') goto LAB_142888935;
      uVar7 = '\x03';
    }
LAB_142888947:
    if (this->bIsPressed != '\0') goto LAB_142888950;
LAB_142888983:
    bVar4 = false;
    if (bVar3) goto LAB_142888990;
  }
  pTVar8 = (__return_storage_ptr__->MouseCaptor).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142888ad5;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar3 = aVar2 == aVar5;
      if (bVar3) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar3);
    if ((__return_storage_ptr__->MouseCaptor).Object != (SWidget *)0x0) goto LAB_142888b06;
  }
LAB_142888ad5:
  bVar3 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FReply::ReleaseMouseCapture(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
LAB_142888b06:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// OnMouseCaptureLost @ 142889740

void __thiscall SButton::OnMouseCaptureLost(SButton *this,FCaptureLostEvent *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142889743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 600))();
  return;
}

// OnMouseEnter @ 142889750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::OnMouseEnter(SButton *this,FGeometry *param_1,FPointerEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  FSlateApplication *this_00;
  FReadAccessScope local_28;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  if ((cVar1 == '\0') && (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,&this->HoveredSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnHovered,&local_28)
    ;
    if ((*(int *)&(this->OnHovered).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnHovered).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnMouseLeave @ 1428898f0

void __thiscall SButton::OnMouseLeave(SButton *this,FPointerEvent *param_1)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  uVar2 = (this->ClickMethod).Value;
  if (uVar2 != '\x01') {
    if (param_1->bIsTouchEvent != false) {
      uVar3 = (this->TouchMethod).Value;
      if ((uVar3 == '\0') || (uVar3 == '\x01')) goto LAB_142889946;
      if (uVar3 == '\x02') goto LAB_14288993a;
    }
    if (uVar2 != '\x03') goto LAB_142889946;
  }
LAB_14288993a:
  (**(code **)(this->_padding_ + 600))(this);
LAB_142889946:
  if ((cVar1 != '\0') && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUnhovered,
               &local_28);
    if ((*(int *)&(this->OnUnhovered).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(this->OnUnhovered).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// OnMouseMove @ 142889af0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SButton::OnMouseMove
          (SButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  uchar uVar1;
  FDeprecateVector2DParameter FVar2;
  bool bVar3;
  FSlateApplication *this_00;
  
  if ((this->bIsPressed == '\0') &&
     (this->AppearPressedAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0))
  goto LAB_142889b8c;
  if (param_2->bIsTouchEvent == false) {
LAB_142889b3a:
    if ((this->ClickMethod).Value != '\x03') goto LAB_142889b8c;
  }
  else {
    uVar1 = (this->TouchMethod).Value;
    if ((uVar1 == '\0') || (uVar1 == '\x01')) goto LAB_142889b8c;
    if (uVar1 != '\x02') goto LAB_142889b3a;
  }
  this_00 = FSlateApplication::Get();
  FVar2._4_4_ = (float)(this->PressedScreenSpacePosition).field0_0x0._s_0.Y;
  FVar2._0_4_ = (float)(this->PressedScreenSpacePosition).field0_0x0._s_0.X;
  bVar3 = FSlateApplication::HasTraveledFarEnoughToTriggerDrag(this_00,param_2,FVar2);
  if (bVar3) {
    (**(code **)(this->_padding_ + 600))(this);
  }
LAB_142889b8c:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 14288ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SButton::OnPaint(SButton *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uchar uVar5;
  ESlateColorStylingMode EVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  FSlateColor *this_00;
  FLinearColor_u_0 *pFVar12;
  uint uVar13;
  FSlateBrush *pFVar14;
  bool bVar15;
  ESlateDrawEffect EVar16;
  undefined1 auStackY_148 [32];
  FLinearColor_u_0 local_108;
  FSlateRect *local_f8;
  FPaintArgs *local_f0;
  FLinearColor_u_0 local_e8;
  uint local_d8;
  TVector2<float>_u_0 local_d0;
  float local_c8;
  undefined8 local_c4;
  FDeprecateSlateVector2D local_bc;
  float local_b4 [2];
  float afStack_ac [2];
  TVector2<float>_u_0 local_a4;
  byte local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  pFVar14 = &this->Style->Disabled;
  uVar5 = (this->Style->Disabled).DrawAs.Value;
  if ((((uVar5 == '\0') || (bVar15 != false)) &&
      (pFVar14 = (FSlateBrush *)this->_padding_, uVar5 == '\0')) && (bVar15 == false)) {
    EVar16 = DisabledEffect;
  }
  else {
    EVar16 = None;
  }
  local_f8 = param_3;
  local_f0 = param_1;
  if ((pFVar14 != (FSlateBrush *)0x0) && ((pFVar14->DrawAs).Value != '\0')) {
    EVar6 = (pFVar14->TintColor).ColorUseRule;
    this_00 = &pFVar14->TintColor;
    if (EVar6 != UseColor_Specified) {
      if (EVar6 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar6 == UseColor_Foreground) || (EVar6 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    fVar7 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
    fVar8 = (this_00->SpecifiedColor).field0_0x0._s_0.G;
    fVar9 = (this_00->SpecifiedColor).field0_0x0._s_0.B;
    fVar10 = (this_00->SpecifiedColor).field0_0x0._s_0.A;
    local_d8 = (uint)this->_padding_;
    uVar13 = local_d8 & 0xff;
    fVar1 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    fVar2 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    fVar3 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar4 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_e8._0_8_ = this->_padding_;
    local_e8._8_8_ = this->_padding_;
    if ((char)local_d8 == '\0') {
      pFVar12 = &local_e8;
    }
    else if (uVar13 == 1) {
      pFVar12 = &FSlateColor::GetColorFromTable((FSlateColor *)&local_e8._s_0)->field0_0x0;
    }
    else if ((uVar13 == 2) || (uVar13 != 3)) {
      pFVar12 = &(param_6->ForegroundColor).field0_0x0;
    }
    else {
      pFVar12 = &(param_6->SubduedForeground).field0_0x0;
    }
    local_108._s_0.R = fVar7 * fVar2 * (((FLinearColor_u_0 *)&(pFVar12->_s_0).R)->_s_0).R;
    local_d0 = (param_2->AbsolutePosition).field0_0x0;
    local_bc = param_2->Size;
    local_108._s_0.G = (pFVar12->_s_0).G * fVar8 * fVar1;
    local_108._s_0.B = (pFVar12->_s_0).B * fVar9 * fVar3;
    local_9c = param_2->bHasRenderTransform * '\x02' | local_9c & 0xfc;
    local_c8 = param_2->Scale;
    local_b4 = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_ac = (param_2->AccumulatedRenderTransform).M.M[1];
    local_108._s_0.A = (pFVar12->_s_0).A * fVar10 * fVar4;
    local_a4 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_c4 = 0;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_d0._s_0,pFVar14,EVar16,
               (FLinearColor *)&local_108._s_0);
  }
  iVar11 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,local_f0,param_2,local_f8,param_4,param_5,param_6,
                      bVar15);
  return iVar11;
}

// PlayClickedSound @ 142891a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::PlayClickedSound(SButton *this)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->ClickedSound,0);
  return;
}

// PlayHoverSound @ 142891a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::PlayHoverSound(SButton *this)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->HoveredSound,0);
  return;
}

// PlayPressedSound @ 142891af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::PlayPressedSound(SButton *this)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->PressedSound,0);
  return;
}

// Press @ 142891ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::Press(SButton *this)

{
  longlong *plVar1;
  FSlateApplication *this_00;
  FReadAccessScope local_28;
  
  if (this->bIsPressed == '\0') {
    this->field_0x464 = this->field_0x464 | 2;
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,&this->PressedSound,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPressed,&local_28)
    ;
    if ((*(int *)&(this->OnPressed).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnPressed).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    UpdatePadding(this);
    UpdateBorderImage(this);
    UpdateForegroundColor(this);
  }
  return;
}

// PrivateRegisterAttributes @ 142891c40

void __cdecl SButton::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FAttributeEntry *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FName local_res10;
  FDelegateAllocation local_58;
  FAttributeEntry local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"BaseBorderForegroundColor");
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x468,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 == 0) {
LAB_142891d1e:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_142891d1e;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"ContentPadding");
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x47c,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 == 0) {
LAB_142891dde:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_142891dde;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"NormalPadding");
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x48c,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 == 0) {
LAB_142891e9e:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_142891e9e;
  }
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"PressedPadding");
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x49c,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 == 0) {
LAB_142891f5e:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_142891f5e;
  }
  local_38[0] = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"AppearPressed");
  pFVar2 = FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                     (param_1,&local_48,*pFVar1,0x4ac,(FInvalidateWidgetReasonAttribute *)local_38);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  FSlateAttributeDescriptor::FInitializer::FAttributeEntry::OnValueChanged
            (pFVar2,(TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *
                    )&local_58);
  if ((int)uStack_28 == 0) {
LAB_14289201e:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14289201e;
  }
  local_38[0] = Paint|Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"EnabledState");
  FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
            (param_1,*pFVar1,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_14289208c:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_14289208c;
  }
  local_38[0] = Paint|Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Hovered");
  FSlateAttributeDescriptor::FInitializer::OverrideInvalidationReason
            (param_1,*pFVar1,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_142892104;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_142892104:
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  pFVar1 = ::FName::FName(&local_res10,"EnabledState");
  FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
            (param_1,*pFVar1,ExecuteAfterPrevious,
             (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             &local_58);
  local_58.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58.DelegateSize = 0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy,`SButton::PrivateRegisterAttributes'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  pFVar1 = ::FName::FName(&local_res10,"Hovered");
  FSlateAttributeDescriptor::FInitializer::OverrideOnValueChanged
            (param_1,*pFVar1,ExecuteAfterPrevious,
             (TDelegate<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
             &local_58);
  return;
}

// Release @ 142893b10

void __thiscall SButton::Release(SButton *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bIsPressed != '\0') {
    this->field_0x464 = this->field_0x464 & 0xfd;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReleased,&local_28
              );
    if ((*(int *)&(this->OnReleased).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnReleased).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    UpdatePadding(this);
    UpdateBorderImage(this);
    UpdateForegroundColor(this);
  }
  return;
}

// SetAllowDragDrop @ 1428957a0

void __thiscall SButton::SetAllowDragDrop(SButton *this,bool param_1)

{
  this->bAllowDragDrop = param_1;
  return;
}

// SetButtonStyle @ 142895980

void __thiscall SButton::SetButtonStyle(SButton *this,FButtonStyle *param_1)

{
  undefined1 local_res10 [24];
  TAttribute<bool> local_28;
  
  if (param_1 == (FButtonStyle *)0x0) {
    `SButton::SetButtonStyle'::__l5::<lambda_1>::operator()(local_res10);
    return;
  }
  this->Style = param_1;
  if (this->bIsStyleNormalPaddingOverridden == '\0') {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this->NormalPaddingAttribute,(SWidget *)this,&param_1->NormalPadding);
  }
  if (this->bIsStylePressedPaddingOverridden == '\0') {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Set((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
           *)&this->PressedPaddingAttribute,(SWidget *)this,&this->Style->PressedPadding);
  }
  FSlateSound::operator=(&this->HoveredSound,&this->Style->HoveredSlateSound);
  FSlateSound::operator=(&this->PressedSound,&this->Style->PressedSlateSound);
  FSlateSound::operator=(&this->ClickedSound,&this->Style->ClickedSlateSound);
  UpdatePadding(this);
  local_28.Value = (this->Style->Disabled).DrawAs.Value == '\0';
  local_28.bIsSet = true;
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SBorder::SetShowEffectWhenDisabled((SBorder *)this,&local_28);
  UpdateBorderImage(this);
  UpdateForegroundColor(this);
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// SetClickMethod @ 142895ba0

void __thiscall SButton::SetClickMethod(SButton *this,Type param_1)

{
  (this->ClickMethod).Value = (uchar)param_1;
  return;
}

// SetClickedSound @ 142895bc0

void __thiscall SButton::SetClickedSound(SButton *this,TOptional<FSlateSound> *param_1)

{
  if (param_1->bIsSet == false) {
    param_1 = (TOptional<FSlateSound> *)&this->Style->ClickedSlateSound;
  }
  FSlateSound::operator=(&this->ClickedSound,&param_1->TypedValue);
  return;
}

// SetContentPadding @ 142895de0

void __thiscall SButton::SetContentPadding(SButton *this,TAttribute<FMargin> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ContentPaddingAttribute,(SWidget *)this,param_1,None);
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

// SetHoveredSound @ 142896d80

void __thiscall SButton::SetHoveredSound(SButton *this,TOptional<FSlateSound> *param_1)

{
  if (param_1->bIsSet == false) {
    param_1 = (TOptional<FSlateSound> *)&this->Style->HoveredSlateSound;
  }
  FSlateSound::operator=(&this->HoveredSound,&param_1->TypedValue);
  return;
}

// SetOnClicked @ 142897ce0

void __thiscall
SButton::SetOnClicked
          (SButton *this,TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=(&this->OnClicked,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnFocusLost @ 142897d40

void __thiscall
SButton::SetOnFocusLost
          (SButton *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnLostFocus,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnFocusReceived @ 142897d80

void __thiscall
SButton::SetOnFocusReceived
          (SButton *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnReceivedFocus,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnHovered @ 142897e00

void __thiscall
SButton::SetOnHovered
          (SButton *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnHovered,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetOnUnhovered @ 142898200

void __thiscall
SButton::SetOnUnhovered
          (SButton *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnUnhovered,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetPressMethod @ 142898660

void __thiscall SButton::SetPressMethod(SButton *this,Type param_1)

{
  (this->PressMethod).Value = (uchar)param_1;
  return;
}

// SetPressedSound @ 142898680

void __thiscall SButton::SetPressedSound(SButton *this,TOptional<FSlateSound> *param_1)

{
  if (param_1->bIsSet == false) {
    param_1 = (TOptional<FSlateSound> *)&this->Style->PressedSlateSound;
  }
  FSlateSound::operator=(&this->PressedSound,&param_1->TypedValue);
  return;
}

// SetTouchMethod @ 14289b260

void __thiscall SButton::SetTouchMethod(SButton *this,Type param_1)

{
  (this->TouchMethod).Value = (uchar)param_1;
  return;
}

// SimulateClick @ 14289bd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SButton::SimulateClick(SButton *this)

{
  FReply local_c8;
  
  ExecuteOnClick(this,&local_c8);
  FReply::~FReply(&local_c8);
  return;
}

// SupportsKeyboardFocus @ 14289d290

bool __thiscall SButton::SupportsKeyboardFocus(SButton *this)

{
  return this->bIsFocusable;
}

// UpdateBorderImage @ 14289f110

void __thiscall SButton::UpdateBorderImage(SButton *this)

{
  char cVar1;
  TAttribute<FSlateBrush_const_*> local_38;
  
  if (((this->Style->Disabled).DrawAs.Value == '\0') ||
     (cVar1 = (**(code **)(this->_padding_ + 0x1b0))(), cVar1 != '\0')) {
    if ((this->bIsPressed == '\0') &&
       (this->AppearPressedAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
      if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
        local_38.Value = &this->Style->Normal;
      }
      else {
        local_38.Value = &this->Style->Hovered;
      }
    }
    else {
      local_38.Value = &this->Style->Pressed;
    }
  }
  else {
    local_38.Value = &this->Style->Disabled;
  }
  local_38.Getter._8_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  SBorder::SetBorderImage((SBorder *)this,&local_38);
  return;
}

// UpdateDisabledForegroundColor @ 14289f1d0

void __thiscall SButton::UpdateDisabledForegroundColor(SButton *this)

{
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// UpdateForegroundColor @ 14289f1e0

void __thiscall SButton::UpdateForegroundColor(SButton *this)

{
  FButtonStyle *pFVar1;
  bool bVar2;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  if ((((__real_3f800000 == *(float *)&this->BorderForegroundColorAttribute) &&
       (*(float *)&(this->BorderForegroundColorAttribute).field_0x4 == 0.0)) &&
      (__real_3f800000 == *(float *)&(this->BorderForegroundColorAttribute).field_0x8)) &&
     ((__real_3f800000 == *(float *)&(this->BorderForegroundColorAttribute).field_0xc &&
      ((this->BorderForegroundColorAttribute).field_0x10 == '\x04')))) {
    if ((this->bIsPressed == '\0') &&
       (this->AppearPressedAttribute ==
        (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pFVar1 = this->Style;
    if (bVar2) {
      local_40._0_8_ = *(undefined8 *)&(pFVar1->PressedForeground).SpecifiedColor.field0_0x0;
      local_40._8_8_ =
           *(undefined8 *)((longlong)&(pFVar1->PressedForeground).SpecifiedColor.field0_0x0 + 8);
      local_30._0_1_ = (pFVar1->PressedForeground).ColorUseRule;
      local_30._1_1_ = (pFVar1->PressedForeground).ColorTableId;
      local_30._2_2_ = *(undefined2 *)&(pFVar1->PressedForeground).field_0x12;
    }
    else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      local_40._0_8_ = *(undefined8 *)&(pFVar1->NormalForeground).SpecifiedColor.field0_0x0;
      local_40._8_8_ =
           *(undefined8 *)((longlong)&(pFVar1->NormalForeground).SpecifiedColor.field0_0x0 + 8);
      local_30._0_1_ = (pFVar1->NormalForeground).ColorUseRule;
      local_30._1_1_ = (pFVar1->NormalForeground).ColorTableId;
      local_30._2_2_ = *(undefined2 *)&(pFVar1->NormalForeground).field_0x12;
    }
    else {
      local_40._0_8_ = *(undefined8 *)&(pFVar1->HoveredForeground).SpecifiedColor.field0_0x0;
      local_40._8_8_ =
           *(undefined8 *)((longlong)&(pFVar1->HoveredForeground).SpecifiedColor.field0_0x0 + 8);
      local_30._0_1_ = (pFVar1->HoveredForeground).ColorUseRule;
      local_30._1_1_ = (pFVar1->HoveredForeground).ColorTableId;
      local_30._2_2_ = *(undefined2 *)&(pFVar1->HoveredForeground).field_0x12;
    }
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_2c = 1;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateColor> *)&local_40._s_0,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
  }
  else {
    local_30 = *(undefined4 *)&(this->BorderForegroundColorAttribute).field_0x10;
    local_40._0_8_ = *(undefined8 *)&this->BorderForegroundColorAttribute;
    local_40._8_8_ = *(undefined8 *)&(this->BorderForegroundColorAttribute).field_0x8;
    local_2c = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateColor> *)&local_40._s_0,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
  }
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// UpdatePadding @ 14289f970

void __thiscall SButton::UpdatePadding(SButton *this)

{
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  TAttribute<FMargin> local_38;
  
  if ((this->bIsPressed == '\0') &&
     (this->AppearPressedAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    local_48 = *(float *)&this->ContentPaddingAttribute + *(float *)&this->NormalPaddingAttribute;
    fStack_40 = *(float *)&(this->NormalPaddingAttribute).field_0x8 +
                *(float *)&(this->ContentPaddingAttribute).field_0x8;
    fStack_44 = *(float *)&(this->NormalPaddingAttribute).field_0x4 +
                *(float *)&(this->ContentPaddingAttribute).field_0x4;
    fStack_3c = *(float *)&(this->NormalPaddingAttribute).field_0xc +
                *(float *)&(this->ContentPaddingAttribute).field_0xc;
  }
  else {
    local_48 = *(float *)&this->PressedPaddingAttribute + *(float *)&this->ContentPaddingAttribute;
    fStack_44 = *(float *)&(this->PressedPaddingAttribute).field_0x4 +
                *(float *)&(this->ContentPaddingAttribute).field_0x4;
    fStack_40 = *(float *)&(this->PressedPaddingAttribute).field_0x8 +
                *(float *)&(this->ContentPaddingAttribute).field_0x8;
    fStack_3c = *(float *)&(this->PressedPaddingAttribute).field_0xc +
                *(float *)&(this->ContentPaddingAttribute).field_0xc;
  }
  local_38.Value.Top = fStack_44;
  local_38.Value.Left = local_48;
  local_38.Value.Bottom = fStack_3c;
  local_38.Value.Right = fStack_40;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBorder::SetPadding((SBorder *)this,&local_38);
  return;
}

// UpdatePressStateChanged @ 14289fa70

void __thiscall SButton::UpdatePressStateChanged(SButton *this)

{
  UpdatePadding(this);
  UpdateBorderImage(this);
  UpdateForegroundColor(this);
  return;
}

// UpdateShowDisabledEffect @ 14289faa0

void __thiscall SButton::UpdateShowDisabledEffect(SButton *this)

{
  TAttribute<bool> local_28;
  
  local_28.Value = (this->Style->Disabled).DrawAs.Value == '\0';
  local_28.bIsSet = true;
  local_28.Getter._16_8_ = 0;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SBorder::SetShowEffectWhenDisabled((SBorder *)this,&local_28);
  return;
}

// operator() @ 1504940c0

bool __thiscall `SButton::SetButtonStyle'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4664880751756442911>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4664880751756442911>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

