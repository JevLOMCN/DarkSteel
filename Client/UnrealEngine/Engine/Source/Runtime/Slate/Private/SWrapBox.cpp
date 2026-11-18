// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 19

// SWrapBox @ 1429bdab0

SWrapBox * __thiscall SWrapBox::SWrapBox(SWrapBox *this)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_01
  ;
  FName FVar1;
  code *pcVar2;
  double _X;
  bool bVar3;
  int iVar4;
  SWrapBox *pSVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  
  SPanel::SPanel((SPanel *)this);
  _X = __real_4059000000000000;
  this->_padding_ = (longlong)&___7SWrapBox__6B_;
  this_00 = &this->PreferredSize;
  *(undefined4 *)&this_00->field_0x0 = 0x42c80000;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
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
      pSVar5 = (SWrapBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar3) {
    local_res10[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SWrapBox,void>'::__l2::<lambda_1>::operator()(local_res10);
  }
  this_01 = &this->HAlign;
  *(undefined4 *)&this_01->field_0x0 = 1;
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
      pSVar5 = (SWrapBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  bVar3 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_01,(SWidget *)this);
  if (!bVar3) {
    local_res18[0] = bVar3;
    `SlateAttributePrivate::
    TSlateMemberAttribute<enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SWrapBox,void>'::__l2::<lambda_1>::operator()(local_res18);
  }
  pFVar6 = ::FName::FName(&local_res20,5,L"Slots",FNAME_Add);
  FVar1 = *pFVar6;
  (this->Slots)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Slots)._padding_ = (longlong)this;
  (this->Slots)._padding_ = (longlong)FVar1;
  *(undefined2 *)&(this->Slots)._padding_ = 0xdc00;
  if (FVar1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\ChildrenBase.h"
                       ,0x28,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SWrapBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  (this->Slots)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SWrapBox____6B_;
  (this->Slots).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Slots).Children.ArrayNum = 0;
  (this->Slots).Children.ArrayMax = 0;
  return this;
}

// ~SWrapBox @ 1429c0630

void __thiscall SWrapBox::~SWrapBox(SWrapBox *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7SWrapBox__6B_;
  DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
            ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)
             (this->Slots).Children.AllocatorInstance.Data,(this->Slots).Children.ArrayNum);
  pFVar1 = (this->Slots).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FChildren::~FChildren((FChildren *)&this->Slots);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// operator() @ 1429c1030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`SWrapBox::OnArrangeChildren'::__l2::<lambda_1>::operator()
          (void *this,FSlot *param_1,FArrangementData *param_2)

{
  int iVar1;
  FArrangedChildren *this_00;
  undefined1 auVar2 [8];
  TVector2<double>_u_0_s_0 TVar3;
  FDeprecateSlateVector2D FVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_148 [32];
  undefined8 local_118;
  undefined1 local_110 [8];
  double dStack_108;
  FArrangedWidget local_f8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_148;
  _local_110 = (param_2->SlotSize).field0_0x0._s_0;
  fVar12 = 0.0;
  if (*(int *)(*(longlong *)this + 0x264) == 0) {
    if (param_2->ChildIndexRelativeToLine == 0) {
      **(undefined4 **)((longlong)this + 8) = 0;
    }
    iVar1 = **(int **)((longlong)this + 0x10);
    if (iVar1 == 0) {
      fVar7 = 0.0;
      auVar2 = local_110;
      fVar12 = param_2->WidthOfCurrentLine - param_2->TotalLinePadding;
      if (__real_322bcc77 < (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        local_118 = **(FDeprecateVector2DParameter **)((longlong)this + 0x18);
        fVar7 = (float)((double)((float)local_118 - param_2->TotalLinePadding) *
                       ((double)local_110 / (double)fVar12));
      }
      local_110 = (undefined1  [8])(double)fVar7;
      fVar12 = (float)((double)fVar7 - (double)auVar2);
    }
    else if (iVar1 == 2) {
      local_118 = **(FDeprecateVector2DParameter **)((longlong)this + 0x18);
      auVar5 = roundps((undefined1  [16])_local_110,
                       ZEXT416((uint)(((float)local_118 - param_2->WidthOfCurrentLine) *
                                     __real_3f000000)),1);
      **(undefined4 **)((longlong)this + 8) = auVar5._0_4_;
    }
    else if (iVar1 == 3) {
      local_118 = **(FDeprecateVector2DParameter **)((longlong)this + 0x18);
      auVar5 = ZEXT416((uint)((float)local_118 - param_2->WidthOfCurrentLine));
      auVar5 = roundps(auVar5,auVar5,1);
      **(undefined4 **)((longlong)this + 8) = auVar5._0_4_;
    }
  }
  fVar7 = *(float *)&param_1->_padding_;
  fVar8 = *(float *)&param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  fVar6 = (float)(double)local_110;
  fVar10 = fVar6 - (fVar8 + fVar7);
  if (iVar1 == 0) {
LAB_1429c1225:
    fVar11 = fVar10;
    if (fVar10 <= 0.0) {
      fVar11 = 0.0;
    }
  }
  else {
    FVar4 = SWidget::GetDesiredSize((SWidget *)param_1->_padding_);
    fVar11 = fVar10;
    if (*(float *)FVar4 <= fVar10) {
      fVar11 = *(float *)FVar4;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar7 = ((fVar6 - fVar11) * __real_3f000000 + fVar7) - fVar8;
      }
      else {
        if (iVar1 != 3) goto LAB_1429c1225;
        fVar7 = (fVar6 - fVar11) - fVar8;
      }
    }
  }
  fVar8 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar6 = *(float *)((longlong)&param_1->_padding_ + 4);
  iVar1 = *(int *)((longlong)&param_1->_padding_ + 4);
  fVar10 = (float)dStack_108;
  fVar9 = fVar10 - (fVar6 + fVar8);
  if (iVar1 != 0) {
    FVar4 = SWidget::GetDesiredSize((SWidget *)param_1->_padding_);
    local_118._4_4_ = *(float *)((longlong)FVar4 + 4);
    if (fVar9 <= *(float *)((longlong)FVar4 + 4)) {
      local_118._4_4_ = fVar9;
    }
    if (local_118._4_4_ <= 0.0) {
      local_118._4_4_ = 0.0;
    }
    if (iVar1 == 1) goto LAB_1429c12bf;
    if (iVar1 == 2) {
      fVar8 = ((fVar10 - local_118._4_4_) * __real_3f000000 + fVar8) - fVar6;
      goto LAB_1429c12bf;
    }
    if (iVar1 == 3) {
      fVar8 = (fVar10 - local_118._4_4_) - fVar6;
      goto LAB_1429c12bf;
    }
  }
  local_118._4_4_ = fVar9;
  if (fVar9 <= 0.0) {
    local_118._4_4_ = 0.0;
  }
LAB_1429c12bf:
  TVar3 = _local_110;
  this_00 = *(FArrangedChildren **)((longlong)this + 0x20);
  local_118._0_4_ = fVar11;
  local_110._4_4_ =
       (float)((double)fVar7 + (param_2->SlotOffset).field0_0x0._s_0.X +
              (double)**(float **)((longlong)this + 8));
  local_110._0_4_ = 1.0;
  dStack_108._4_4_ = TVar3.Y._4_4_;
  dStack_108._0_4_ = (float)((double)fVar8 + (param_2->SlotOffset).field0_0x0._s_0.Y);
  FGeometry::MakeChild
            (*(FGeometry **)((longlong)this + 0x18),&local_f8,
             (TSharedRef<SWidget,1> *)&param_1->_padding_,(FDeprecateVector2DParameter *)&local_118,
             (FSlateLayoutTransform *)local_110);
  FArrangedChildren::AddWidget(this_00,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.Widget.SharedReferenceCount.ReferenceController);
  **(float **)((longlong)this + 8) = fVar12 + **(float **)((longlong)this + 8);
  return;
}

// AddSlot @ 1429c5e60

FScopedWidgetSlotArguments * __thiscall
SWrapBox::AddSlot(SWrapBox *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FScopedWidgetSlotArguments *pFVar4;
  
  pFVar3 = ::operator_new(0x50);
  if (pFVar3 == (FSlot *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
  }
  else {
    pFVar3 = FSlot::FSlot(pFVar3);
    __return_storage_ptr__->_padding_ = (longlong)pFVar3;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    if (pFVar3 != (FSlot *)0x0) goto LAB_1429c5ed3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FScopedWidgetSlotArguments *)(*pcVar1)();
    return pFVar4;
  }
LAB_1429c5ed3:
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 3) = 0;
  __return_storage_ptr__->Children = &this->Slots;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ClearChildren @ 1429cd450

void __thiscall SWrapBox::ClearChildren(SWrapBox *this)

{
  int *piVar1;
  TArray<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Slots).Children;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->Slots).Children.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Slots).Children.ArrayNum;
  local_10._4_4_ = (this->Slots).Children.ArrayMax;
  *piVar1 = 0;
  (this->Slots).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
            ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Slots).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
            ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
              ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Slots).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Slots).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_>,int>
            ((TUniquePtr<SWrapBox::FSlot,TDefaultDelete<SWrapBox::FSlot>_> *)local_18.Data,iVar5);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1429cf960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector2<double> * __thiscall
SWrapBox::ComputeDesiredSize(SWrapBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FChildArranger *this_00;
  undefined1 auStack_d8 [32];
  TVector2<double> *local_b8;
  code *local_b0;
  TVector2<double> **local_a8;
  undefined1 local_98 [112];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8 = &local_b8;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`SWrapBox::ComputeDesiredSize'::__l2::<lambda_1>,void,SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&>
             ::Call;
  local_b8 = __return_storage_ptr__;
  this_00 = FChildArranger::FChildArranger
                      ((FChildArranger *)local_98,this,
                       (TFunctionRef<void___cdecl(SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&)>
                        *)&local_b0);
  FChildArranger::Arrange(this_00);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_98 + 0x30));
  return __return_storage_ptr__;
}

// Construct @ 1429db890

void __thiscall SWrapBox::Construct(SWrapBox *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  double dVar2;
  EWidgetUpdateFlags EVar3;
  TArray<SWrapBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->PreferredSize,(SWidget *)this,&param_1->_PreferredSize,None);
  dVar2 = (param_1->_InnerSlotPadding).field0_0x0._s_0.Y;
  (this->InnerSlotPadding).field0_0x0._s_0.X = (param_1->_InnerSlotPadding).field0_0x0._s_0.X;
  (this->InnerSlotPadding).field0_0x0._s_0.Y = dVar2;
  this->bUseAllottedSize = param_1->_UseAllottedSize;
  this->Orientation = param_1->_Orientation;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EHorizontalAlignment,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->HAlign,(SWidget *)this,&param_1->_HAlign,None);
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SWrapBox::FSlot>::AddSlots(&this->Slots,&local_18);
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar3 = EVar1 | NeedsTick;
  if (this->bUseAllottedSize == false) {
    EVar3 = EVar1 & ~NeedsTick;
  }
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar3;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar3);
  return;
}

// GetChildren @ 1429ea780

FChildren * __thiscall SWrapBox::GetChildren(SWrapBox *this)

{
  return (FChildren *)&this->Slots;
}

// GetPrivateWidgetClass @ 1429ed440

FSlateWidgetClassData * __cdecl SWrapBox::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SWrapBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&local_res8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SWrapBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 1429efed0

FSlateWidgetClassData * __thiscall SWrapBox::GetWidgetClass(SWrapBox *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SWrapBox");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SWrapBox::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SWrapBox::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnArrangeChildren @ 1429f96f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SWrapBox::OnArrangeChildren(SWrapBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FChildArranger *this_00;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> local_d4
  ;
  code *local_d0;
  SWrapBox **local_c8;
  SWrapBox *local_c0;
  undefined4 *local_b8;
  TSlateAttribute<EHorizontalAlignment,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *local_b0;
  FGeometry *local_a8;
  FArrangedChildren *local_a0;
  undefined1 local_98 [112];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d4 = this->HAlign;
  local_b8 = &local_d8;
  local_b0 = &local_d4;
  local_c8 = &local_c0;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`SWrapBox::OnArrangeChildren'::__l2::<lambda_1>,void,SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&>
             ::Call;
  local_d8 = 0;
  local_c0 = this;
  local_a8 = param_1;
  local_a0 = param_2;
  this_00 = FChildArranger::FChildArranger
                      ((FChildArranger *)local_98,this,
                       (TFunctionRef<void___cdecl(SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&)>
                        *)&local_d0);
  FChildArranger::Arrange(this_00);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_98 + 0x30));
  return;
}

// PrivateRegisterAttributes @ 142a04100

void __cdecl SWrapBox::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10;
  FContainerInitializer local_48;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  ulonglong uStack_28;
  FAttributeEntry local_20;
  
  pFVar1 = ::FName::FName(&local_res10,5,L"Slots",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddContainer(param_1,&local_48,*pFVar1,0x220);
  local_38[0] = Layout;
  local_30.Data = (FScriptContainerElement *)0x0;
  uStack_28 = 0;
  pFVar1 = ::FName::FName(&local_res10,"Slot.Padding");
  FSlateAttributeDescriptor::FContainerInitializer::AddContainedAttribute
            (&local_48,&local_20,*pFVar1,8,(FInvalidateWidgetReasonAttribute *)local_38);
  if ((int)uStack_28 == 0) {
LAB_142a041b8:
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  else if (local_30.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    goto LAB_142a041b8;
  }
  local_20.Descriptor._0_1_ = 1;
  local_20.ContainerName.ComparisonIndex.Value = 0;
  local_20.ContainerName.Number = 0;
  local_20._16_8_ = 0;
  pFVar1 = ::FName::FName(&local_res10,0xd,L"PreferredSize",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,(FAttributeEntry *)local_38,*pFVar1,0x218,
             (FInvalidateWidgetReasonAttribute *)&local_20);
  if (local_20.AttributeIndex != 0) {
    if (local_20.ContainerName == (FName)0x0) goto LAB_142a04247;
    (*(code *)**(undefined8 **)local_20.ContainerName)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_20.ContainerName,0,0,0x10);
    local_20._16_8_ = local_20._16_8_ & 0xffffffff00000000;
  }
  if (local_20.ContainerName != (FName)0x0) {
    FMemory::Free((void *)local_20.ContainerName);
  }
LAB_142a04247:
  local_20.Descriptor._0_1_ = 1;
  local_20.ContainerName.ComparisonIndex.Value = 0;
  local_20.ContainerName.Number = 0;
  local_20._16_8_ = 0;
  pFVar1 = ::FName::FName(&local_res10,6,L"HAlign",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,(FAttributeEntry *)local_38,*pFVar1,0x21c,
             (FInvalidateWidgetReasonAttribute *)&local_20);
  if (local_20.AttributeIndex != 0) {
    if (local_20.ContainerName == (FName)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_20.ContainerName)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_20.ContainerName,0,0,0x10);
    local_20._16_8_ = local_20._16_8_ & 0xffffffff00000000;
  }
  if (local_20.ContainerName != (FName)0x0) {
    FMemory::Free((void *)local_20.ContainerName);
  }
  return;
}

// RemoveSlot @ 142a05fa0

int __thiscall SWrapBox::RemoveSlot(SWrapBox *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SWrapBox::FSlot>::Remove(&this->Slots,param_1);
  return iVar1;
}

// SetHorizontalAlignment @ 142a0a5d0

void __thiscall
SWrapBox::SetHorizontalAlignment(SWrapBox *this,TAttribute<EHorizontalAlignment> *param_1)

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

// SetInnerSlotPadding @ 142a0a770

void __thiscall SWrapBox::SetInnerSlotPadding(SWrapBox *this,TVector2<double> *param_1)

{
  double dVar1;
  
  if (((param_1->field0_0x0)._s_0.X == (this->InnerSlotPadding).field0_0x0._s_0.X) &&
     ((param_1->field0_0x0)._s_0.Y == (this->InnerSlotPadding).field0_0x0._s_0.Y)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->InnerSlotPadding).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->InnerSlotPadding).field0_0x0._s_0.Y = dVar1;
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetOrientation @ 142a0b0e0

void __thiscall SWrapBox::SetOrientation(SWrapBox *this,EOrientation param_1)

{
  if (this->Orientation != param_1) {
    this->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetUseAllottedSize @ 142a0d870

void __thiscall SWrapBox::SetUseAllottedSize(SWrapBox *this,bool param_1)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  if (this->bUseAllottedSize != param_1) {
    EVar1 = (EWidgetUpdateFlags)this->_padding_;
    this->bUseAllottedSize = param_1;
    EVar2 = EVar1 | NeedsTick;
    if (!param_1) {
      EVar2 = EVar1 & ~NeedsTick;
    }
    *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
    FWidgetProxyHandle::UpdateWidgetFlags
              ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetWrapSize @ 142a0dad0

void __thiscall SWrapBox::SetWrapSize(SWrapBox *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->PreferredSize,(SWidget *)this,param_1,None);
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

// Tick @ 142a0ff70

void __thiscall SWrapBox::Tick(SWrapBox *this,FGeometry *param_1,double param_2,float param_3)

{
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> local_res8;
  TSlateAttribute<float,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TStackX_c;
  
  if (this->bUseAllottedSize != false) {
    if (this->Orientation == Orient_Vertical) {
      TStackX_c = SUB84(param_1->Size,4);
    }
    else {
      local_res8 = SUB84(param_1->Size,0);
      TStackX_c = local_res8;
    }
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)&this->PreferredSize,(SWidget *)this,Member);
    if ((float)TStackX_c != (float)this->PreferredSize) {
      this->PreferredSize = TStackX_c;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)&this->PreferredSize,(SWidget *)this,Member,None);
    }
  }
  return;
}

