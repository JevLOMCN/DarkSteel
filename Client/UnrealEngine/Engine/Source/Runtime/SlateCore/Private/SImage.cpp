// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 15

// SImage @ 1425bee40

SImage * __thiscall SImage::SImage(SImage *this)

{
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  TSlateAttribute<TOptional<UE::Math::TVector2<double>_>,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar3;
  EWidgetUpdateFlags EVar4;
  code *pcVar5;
  bool bVar6;
  SImage *pSVar7;
  FSlateWidgetClassData *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  EWidgetUpdateFlags EVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  SWidget::SWidget((SWidget *)this);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd;
  pTVar1 = &this->ImageAttribute;
  this->_padding_ = (longlong)&___7SImage__6B_;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  if (((pTVar1 < this) || (this + 1 <= pTVar1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,0x15,
                         L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pSVar7 = (SImage *)(*pcVar5)();
    return pSVar7;
  }
  iVar11 = (int)this;
  pcVar5 = *(code **)(this->_padding_ + 8);
  if (pcVar5 == GetWidgetClass) {
    pFVar8 = GetPrivateWidgetClass();
  }
  else {
    pFVar8 = (FSlateWidgetClassData *)(*pcVar5)(this);
  }
  pFVar9 = (pFVar8->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar8->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x58) {
    if ((*(int *)(pFVar9 + 8) == (int)pTVar1 - iVar11) &&
       (pFVar9[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425beefa;
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SImage,void>'::__l2::<lambda_1>::operator()(local_res8);
LAB_1425beefa:
  pTVar2 = &this->ColorAndOpacityAttribute;
  *(undefined8 *)&pTVar2->field_0x0 = 0x3f800000;
  *(undefined4 *)&(this->ColorAndOpacityAttribute).field_0x8 = 0x3f800000;
  *(undefined4 *)&(this->ColorAndOpacityAttribute).field_0xc = 0x3f800000;
  (this->ColorAndOpacityAttribute).field_0x10 = 0;
  if (((pTVar2 < this) || (this + 1 <= pTVar2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,0x15,
                         L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pSVar7 = (SImage *)(*pcVar5)();
    return pSVar7;
  }
  pcVar5 = *(code **)(this->_padding_ + 8);
  if (pcVar5 == GetWidgetClass) {
    pFVar8 = GetPrivateWidgetClass();
  }
  else {
    pFVar8 = (FSlateWidgetClassData *)(*pcVar5)(this);
  }
  pFVar9 = (pFVar8->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar8->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x58) {
    if ((*(int *)(pFVar9 + 8) == (int)pTVar2 - iVar11) &&
       (pFVar9[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425befa3;
  }
  local_res10[0] = 0;
  `SlateAttributePrivate::
  TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SImage,void>'::__l2::<lambda_1>::operator()(local_res10);
LAB_1425befa3:
  pTVar3 = &this->DesiredSizeOverrideAttribute;
  (this->DesiredSizeOverrideAttribute).field_0x10 = 0;
  if (((pTVar3 < this) || (this + 1 <= pTVar3)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,0x15,
                         L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pSVar7 = (SImage *)(*pcVar5)();
    return pSVar7;
  }
  pcVar5 = *(code **)(this->_padding_ + 8);
  if (pcVar5 == GetWidgetClass) {
    pFVar8 = GetPrivateWidgetClass();
  }
  else {
    pFVar8 = (FSlateWidgetClassData *)(*pcVar5)(this);
  }
  pFVar9 = (pFVar8->Descriptor).Attributes.AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)(pFVar8->Descriptor).Attributes.ArrayNum * 0x58;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x58) {
    if ((*(int *)(pFVar9 + 8) == (int)pTVar3 - iVar11) &&
       (pFVar9[0x50] == (FScriptContainerElement)0x0)) goto LAB_1425bf030;
  }
  `SlateAttributePrivate::
  TSlateMemberAttribute<TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  ::VerifyAttributeAddress<SImage,void>'::__l2::<lambda_1>::operator()(local_res18);
LAB_1425bf030:
  EVar4 = (EWidgetUpdateFlags)this->_padding_;
  EVar12 = EVar4 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar12;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar4,EVar12);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ~SImage @ 1425c1c60

void __thiscall SImage::~SImage(SImage *this)

{
  this->_padding_ = (longlong)&___7SLeafWidget__6B_;
  SWidget::~SWidget((SWidget *)this);
  return;
}

// ComputeDesiredSize @ 1425d1fe0

TVector2<double> * __thiscall
SImage::ComputeDesiredSize(SImage *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar2;
  double dVar3;
  
  TVar2 = this->ImageAttribute;
  if (TVar2 == (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                )0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  if ((this->DesiredSizeOverrideAttribute).field_0x10 != '\0') {
    dVar3 = *(double *)&(this->DesiredSizeOverrideAttribute).field_0x8;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->DesiredSizeOverrideAttribute;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    return __return_storage_ptr__;
  }
  fVar1 = *(float *)((longlong)TVar2 + 0x24);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)((longlong)TVar2 + 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// Construct @ 1425d39e0

void __thiscall SImage::Construct(SImage *this,FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TSharedPtr<FSlateMouseEventsMetaData,1> *pTVar5;
  TSharedPtr<FSlateMouseEventsMetaData,1> local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ImageAttribute,(SWidget *)this,&param_1->_Image,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorAndOpacityAttribute,(SWidget *)this,&param_1->_ColorAndOpacity,None);
  this->bFlipForRightToLeftFlowDirection = param_1->_FlipForRightToLeftFlowDirection;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DesiredSizeOverrideAttribute,(SWidget *)this,&param_1->_DesiredSizeOverride,
           None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnMouseButtonDown,
             &local_28);
  if ((*(int *)&(param_1->_OnMouseButtonDown).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->_OnMouseButtonDown).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar4 = true;
      goto LAB_1425d3a83;
    }
  }
  bVar4 = false;
LAB_1425d3a83:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (bVar4) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_58,&param_1->_OnMouseButtonDown);
    pTVar5 = ::Private::FindOrAddMouseEventsMetaData(&local_68,(SWidget *)this);
    if (pTVar5->Object == (FSlateMouseEventsMetaData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&pTVar5->Object->MouseButtonDownHandle,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// CreateAccessibleWidget @ 1425d8c40

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SImage::CreateAccessibleWidget
          (SImage *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  TRawPtrProxy<FSlateAccessibleWidget> TVar7;
  bool bVar8;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar8 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x68);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar7.Object = local_res10.Object;
  }
  else {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar7.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    local_28.Object = pTVar5->Object;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar7.Object;
    if (TVar7.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Image);
      this_00->_padding_ = (longlong)&___7FSlateAccessibleImage__6B_;
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar7.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar7.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar7.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar7.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar7.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar7.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,Image);
      this_00->_padding_ = (longlong)&___7FSlateAccessibleImage__6B_;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar7.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar7.Object)->_padding_ + 8))(TVar7.Object,1);
      }
    }
    bVar8 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar7.Object);
  }
  return __return_storage_ptr__;
}

// FlipForRightToLeftFlowDirection @ 1425dcda0

void __thiscall SImage::FlipForRightToLeftFlowDirection(SImage *this,bool param_1)

{
  if (param_1 != this->bFlipForRightToLeftFlowDirection) {
    this->bFlipForRightToLeftFlowDirection = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// GetPrivateWidgetClass @ 1425e28d0

FSlateWidgetClassData * __cdecl SImage::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SImage");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SImage::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1425e45c0

FSlateWidgetClassData * __thiscall SImage::GetWidgetClass(SImage *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SImage");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SImage::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SImage::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// InvalidateImage @ 1425e8a70

void __thiscall SImage::InvalidateImage(SImage *this)

{
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// OnPaint @ 1425efc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SImage::OnPaint(SImage *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
               FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ESlateColorStylingMode EVar10;
  TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar11;
  bool bVar12;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  FSlateColor *this_01;
  ESlateDrawEffect EVar13;
  undefined1 auStackY_178 [32];
  FDeprecateVector2DParameter local_138;
  FLinearColor_u_0 local_130;
  FSlateLayoutTransform local_120;
  FDeprecateSlateVector2D local_114;
  FSlateLayoutTransform local_10c;
  TTransform2<float> local_100;
  TVector2<float>_u_0 local_e8;
  float local_e0;
  TVector2<float>_u_0 local_dc;
  float local_cc [2];
  float afStack_c4 [2];
  TVector2<float>_u_0 local_bc;
  byte local_b4;
  TVector2<float>_u_0 local_b0;
  float local_a8;
  undefined8 local_a4;
  TVector2<float>_u_0 local_9c;
  float local_94 [2];
  float afStack_8c [2];
  TVector2<float>_u_0 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TVar11 = this->ImageAttribute;
  if ((TVar11 != (TSlateAttribute<FSlateBrush_const_*,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  )0x0) &&
     (((TEnumAsByte<ESlateBrushDrawType::Type> *)((longlong)TVar11 + 0x1c))->Value != '\0')) {
    if ((!param_7) || (bVar12 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
      bVar12 = false;
    }
    this_00 = &this->ColorAndOpacityAttribute;
    EVar13 = DisabledEffect;
    if (bVar12) {
      EVar13 = None;
    }
    cVar9 = (this->ColorAndOpacityAttribute).field_0x10;
    if (cVar9 != '\0') {
      if (cVar9 == '\x01') {
        this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   *)FSlateColor::GetColorFromTable((FSlateColor *)this_00);
      }
      else if ((cVar9 == '\x02') || (cVar9 != '\x03')) {
        this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                   *)&param_6->SubduedForeground;
      }
    }
    fVar1 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).G;
    fVar2 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).B;
    fVar3 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).A;
    fVar4 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    EVar10 = *(ESlateColorStylingMode *)((longlong)TVar11 + 0x18);
    fVar5 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).R;
    this_01 = (FSlateColor *)((longlong)TVar11 + 8);
    fVar6 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    fVar7 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    fVar8 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    if (EVar10 != UseColor_Specified) {
      if (EVar10 == UseColor_ColorTable) {
        this_01 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
      }
      else if ((EVar10 == UseColor_Foreground) || (EVar10 != UseColor_Foreground_Subdued)) {
        this_01 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_01 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_130._s_0.R = (this_01->SpecifiedColor).field0_0x0._s_0.R * fVar4 * fVar5;
    local_130._s_0.G = (this_01->SpecifiedColor).field0_0x0._s_0.G * fVar1 * fVar6;
    local_130._s_0.B = (this_01->SpecifiedColor).field0_0x0._s_0.B * fVar2 * fVar7;
    local_130._s_0.A = (this_01->SpecifiedColor).field0_0x0._s_0.A * fVar3 * fVar8;
    if ((this->bFlipForRightToLeftFlowDirection == false) || (GSlateFlowDirection != RightToLeft)) {
      local_b0 = (param_2->AbsolutePosition).field0_0x0;
      local_a8 = param_2->Scale;
      local_bc = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      local_9c._s_0 = *(TVector2<float>_u_0_s_0 *)&param_2->Size;
      local_cc = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_c4 = (param_2->AccumulatedRenderTransform).M.M[1];
      local_7c = param_2->bHasRenderTransform * '\x02' | local_7c & 0xfc;
    }
    else {
      local_10c.Scale = param_2->Scale;
      local_138 = (FDeprecateVector2DParameter)0x3f0000003f000000;
      local_10c.Translation.field0_0x0 = (param_2->AbsolutePosition).field0_0x0;
      local_114 = param_2->Size;
      local_100.M.M[0][0] = ___xmm_3f8000000000000000000000bf800000;
      local_100.M.M[0][1] = _UNK_15092fd64;
      local_100.M.M[1][0] = _UNK_15092fd68;
      local_100.M.M[1][1] = _UNK_15092fd6c;
      local_100.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
      local_120._0_8_ = 0x3f800000;
      local_120.Translation.field0_0x0._s_0.Y = 0.0;
      FGeometry::FGeometry
                ((FGeometry *)&local_e8._s_0,(FDeprecateVector2DParameter *)&local_114,&local_120,
                 &local_100,&local_138,&local_10c,&param_2->AccumulatedRenderTransform);
      local_b0 = local_dc;
      local_9c = local_e8;
      local_a8 = local_e0;
      local_7c = (local_b4 & 1) * '\x02' | local_7c & 0xfc;
    }
    local_a4 = 0;
    local_94 = local_cc;
    afStack_8c = afStack_c4;
    local_84 = local_bc;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_b0._s_0,(FSlateBrush *)TVar11,EVar13,
               (FLinearColor *)&local_130._s_0);
  }
  return param_5;
}

// PrivateRegisterAttributes @ 1425f48a0

void __cdecl SImage::PrivateRegisterAttributes(FInitializer *param_1)

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
  pFVar1 = ::FName::FName(&local_res8,"Image");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,0x218,
             (FInvalidateWidgetReasonAttribute *)local_20);
  if ((int)uStack_28 == 0) {
LAB_1425f493c:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_1425f493c;
  }
  local_38 = Paint;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res8,"ColorAndOpacity");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,0x220,
             (FInvalidateWidgetReasonAttribute *)local_20);
  if ((int)uStack_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_1425f49d5;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_1425f49d5:
  local_38 = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res8,"DesiredSizeOverride");
  local_20[0] = local_38;
  local_20._8_8_ = local_30.Data;
  local_20._16_4_ = (int)uStack_28;
  FSlateAttributeDescriptor::AddMemberAttribute
            (param_1->Descriptor,&local_48,*pFVar1,0x238,
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

// SetColorAndOpacity @ 1425fbb60

void __thiscall SImage::SetColorAndOpacity(SImage *this,FLinearColor *param_1)

{
  FLinearColor_u_0 local_28;
  undefined1 local_18;
  
  local_28._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_18 = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Set((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
         *)&this->ColorAndOpacityAttribute,(SWidget *)this,(FSlateColor *)&local_28._s_0);
  return;
}

// SetColorAndOpacity @ 1425fbba0

void __thiscall SImage::SetColorAndOpacity(SImage *this,TAttribute<FSlateColor> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorAndOpacityAttribute,(SWidget *)this,param_1,None);
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

// SetDesiredSizeOverride @ 1425fc350

void __thiscall
SImage::SetDesiredSizeOverride
          (SImage *this,TAttribute<TOptional<UE::Math::TVector2<double>_>_> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TOptional<UE::Math::TVector2<double>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->DesiredSizeOverrideAttribute,(SWidget *)this,param_1,None);
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

// SetImage @ 1425fcb80

void __thiscall SImage::SetImage(SImage *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ImageAttribute,(SWidget *)this,param_1,None);
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

