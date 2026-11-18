// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 15

// SCircularThrobber @ 1428473b0

SCircularThrobber * __thiscall SCircularThrobber::SCircularThrobber(SCircularThrobber *this)

{
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  code *pcVar1;
  bool bVar2;
  SCircularThrobber *pSVar3;
  undefined1 local_res8 [8];
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7SCircularThrobber__6B_;
  FCurveSequence::FCurveSequence(&this->Sequence);
  FCurveHandle::FCurveHandle(&this->Curve,(FCurveSequence *)0x0,0);
  this_00 = &this->ColorAndOpacity;
  *(undefined8 *)&this_00->field_0x0 = 0x3f800000;
  *(undefined4 *)&(this->ColorAndOpacity).field_0x8 = 0x3f800000;
  *(undefined4 *)&(this->ColorAndOpacity).field_0xc = 0x3f800000;
  (this->ColorAndOpacity).field_0x10 = 0;
  if ((this_00 < this) || (this + 1 <= this_00)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar3 = (SCircularThrobber *)(*pcVar1)();
      return pSVar3;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)this_00,(SWidget *)this);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SCircularThrobber,void>'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this;
}

// ~SCircularThrobber @ 14284a630

void __thiscall SCircularThrobber::~SCircularThrobber(SCircularThrobber *this)

{
  this->_padding_ = (longlong)&___7SCircularThrobber__6B_;
  FCurveSequence::~FCurveSequence(&this->Sequence);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 142858020

TVector2<double> * __thiscall
SCircularThrobber::ComputeDesiredSize
          (SCircularThrobber *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (double)this->Radius + (double)this->Radius;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = dVar2;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1428581b0

bool __thiscall SCircularThrobber::ComputeVolatility(SCircularThrobber *this)

{
  bool bVar1;
  
  bVar1 = FCurveSequence::IsPlaying(&this->Sequence);
  return bVar1;
}

// Construct @ 142858ee0

void __thiscall SCircularThrobber::Construct(SCircularThrobber *this,FArguments *param_1)

{
  this->PieceImage = param_1->_PieceImage;
  this->NumPieces = param_1->_NumPieces;
  this->Period = param_1->_Period;
  this->Radius = param_1->_Radius;
  this->bColorAndOpacitySet = (param_1->_ColorAndOpacity).bIsSet;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->ColorAndOpacity,(SWidget *)this,&param_1->_ColorAndOpacity,None);
  ConstructSequence(this);
  return;
}

// ConstructSequence @ 142863040

void __thiscall SCircularThrobber::ConstructSequence(SCircularThrobber *this)

{
  int iVar1;
  undefined4 uVar2;
  FCurveSequence *pFVar3;
  FCurveHandle *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  float fVar6;
  TSharedRef<SWidget,1> local_88;
  FCurveSequence local_78;
  
  pFVar3 = FCurveSequence::FCurveSequence(&local_78);
  FCurveSequence::operator=(&this->Sequence,pFVar3);
  FCurveSequence::~FCurveSequence(&local_78);
  fVar6 = this->Period;
  if (this->Period <= __real_322bcc77) {
    fVar6 = __real_322bcc77;
  }
  pFVar4 = FCurveSequence::AddCurve(&this->Sequence,(FCurveHandle *)&local_88,0.0,fVar6,Linear);
  iVar1 = pFVar4->CurveIndex;
  uVar2 = *(undefined4 *)&pFVar4->field_0xc;
  (this->Curve).OwnerSequence = pFVar4->OwnerSequence;
  (this->Curve).CurveIndex = iVar1;
  *(undefined4 *)&(this->Curve).field_0xc = uVar2;
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
  FCurveSequence::Play(&this->Sequence,pTVar5,true,0.0,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateWidgetClass @ 142879890

FSlateWidgetClassData * __cdecl SCircularThrobber::GetPrivateWidgetClass(void)

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
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&local_res10,"SCircularThrobber");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      local_28[0] = Paint;
      local_20.Data = (FScriptContainerElement *)0x0;
      uStack_18 = 0;
      pFVar1 = ::FName::FName(&local_res18,0xf,L"ColorAndOpacity",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                (&local_res8,&local_38,*pFVar1,0x2ac,(FInvalidateWidgetReasonAttribute *)local_28);
      if (((int)uStack_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
        uStack_18 = uStack_18 & 0xffffffff00000000;
      }
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SCircularThrobber::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 14287dfc0

FSlateWidgetClassData * __thiscall SCircularThrobber::GetWidgetClass(SCircularThrobber *this)

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
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(&FStackX_10,"SCircularThrobber");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      auStack_28[0] = Paint;
      FStack_20.Data = (FScriptContainerElement *)0x0;
      uStack_18 = 0;
      pFVar1 = ::FName::FName(&FStackX_18,0xf,L"ColorAndOpacity",FNAME_Add);
      FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
                (&FStackX_8,&FStack_38,*pFVar1,0x2ac,(FInvalidateWidgetReasonAttribute *)auStack_28)
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
      atexit(`SCircularThrobber::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SCircularThrobber::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// InvalidatePieceImage @ 142881a40

void __thiscall SCircularThrobber::InvalidatePieceImage(SCircularThrobber *this)

{
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// OnPaint @ 14288d0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SCircularThrobber::OnPaint
          (SCircularThrobber *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  char cVar2;
  ESlateColorStylingMode EVar3;
  undefined1 uVar4;
  FDeprecateSlateVector2D FVar5;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  FSlateColor *this_01;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float extraout_XMM0_Db;
  float fVar11;
  float fVar12;
  undefined1 auStackY_178 [32];
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  FSlateWindowElementList *local_120;
  TVector2<float>_u_0_s_0 local_114;
  TTransform2<float> local_108;
  TTransform2<float> local_f0;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  FDeprecateSlateVector2D local_c4;
  float local_bc [2];
  float afStack_b4 [2];
  TVector2<float>_u_0 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_120 = param_4;
  if (this->bColorAndOpacitySet == false) {
    EVar3 = (this->PieceImage->TintColor).ColorUseRule;
    this_01 = &this->PieceImage->TintColor;
    if (EVar3 != UseColor_Specified) {
      if (EVar3 == UseColor_ColorTable) {
        this_01 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
      }
      else if ((EVar3 == UseColor_Foreground) || (EVar3 != UseColor_Foreground_Subdued)) {
        this_01 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_01 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    fStack_12c = (this_01->SpecifiedColor).field0_0x0._s_0.G *
                 (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_130 = (this_01->SpecifiedColor).field0_0x0._s_0.R *
                (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    fStack_124 = (this_01->SpecifiedColor).field0_0x0._s_0.A *
                 (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    fStack_128 = (this_01->SpecifiedColor).field0_0x0._s_0.B *
                 (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  }
  else {
    this_00 = &this->ColorAndOpacity;
    cVar2 = (this->ColorAndOpacity).field_0x10;
    if (cVar2 != '\0') {
      if (cVar2 != '\x01') {
        if ((cVar2 == '\x02') || (cVar2 != '\x03')) {
          _local_130 = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
          _fStack_128 = *(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
        }
        else {
          _local_130 = *(undefined8 *)&(param_6->SubduedForeground).field0_0x0;
          _fStack_128 = *(undefined8 *)((longlong)&(param_6->SubduedForeground).field0_0x0 + 8);
        }
        goto LAB_14288d209;
      }
      this_00 = (TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *)
                FSlateColor::GetColorFromTable((FSlateColor *)this_00);
    }
    _local_130 = *(undefined8 *)&this_00->field_0x0;
    _fStack_128 = *(undefined8 *)((longlong)&this_00->field_0x0 + 8);
  }
LAB_14288d209:
  local_140 = SUB84(param_2->Size,0);
  fStack_13c = SUB84(param_2->Size,4);
  fVar8 = (local_140 - *(float *)&this->PieceImage->ImageSize) * __real_3f000000;
  fVar9 = (fStack_13c - *(float *)&(this->PieceImage->ImageSize).field_0x4) * __real_3f000000;
  FCurveHandle::GetLerp(&this->Curve);
  iVar6 = this->NumPieces;
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      __libm_sse2_sincosf_();
      local_114 = (param_2->AbsolutePosition).field0_0x0._s_0;
      fVar1 = param_2->Scale;
      iVar7 = iVar7 + 1;
      local_108.M.M[0][1] = 0.0;
      local_108.M.M[1][0] = 0.0;
      local_148._0_4_ = extraout_XMM0_Da * fVar8 + fVar8;
      local_148._4_4_ = extraout_XMM0_Db * fVar9 + fVar9;
      FVar5 = this->PieceImage->ImageSize;
      local_108.Trans.field0_0x0 = local_148;
      fVar12 = (float)iVar7 / (float)iVar6;
      fVar11 = fVar1 * (float)local_148._4_4_ + local_114.Y;
      fVar10 = fVar1 * (float)(undefined4)local_148 + local_114.X;
      local_108.M.M[0][0] = fVar12;
      local_108.M.M[1][1] = fVar12;
      Concatenate<TTransform2<float>_>(&local_f0,&local_108,&param_2->AccumulatedRenderTransform);
      local_d8._s_0.Y = fVar11;
      local_d8._s_0.X = fVar10;
      local_d0 = fVar1 * fVar12;
      local_a4 = param_2->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
      local_cc = 0;
      local_bc[0] = local_f0.M.M[0][0];
      local_bc[1] = local_f0.M.M[0][1];
      afStack_b4[0] = local_f0.M.M[1][0];
      afStack_b4[1] = local_f0.M.M[1][1];
      local_ac = local_f0.Trans.field0_0x0;
      local_c4 = FVar5;
      FSlateDrawElement::MakeBox
                (local_120,param_5,(FPaintGeometry *)&local_d8._s_0,this->PieceImage,None,
                 (FLinearColor *)&local_130);
      iVar6 = this->NumPieces;
    } while (iVar7 < iVar6);
  }
  return param_5;
}

// PrivateRegisterAttributes @ 1428921e0

void __cdecl SCircularThrobber::PrivateRegisterAttributes(FInitializer *param_1)

{
  FName *pFVar1;
  FName local_res10 [3];
  FAttributeEntry local_38;
  undefined1 local_28 [8];
  ForAnyElementType local_20;
  ulonglong uStack_18;
  
  local_28[0] = Paint;
  local_20.Data = (FScriptContainerElement *)0x0;
  uStack_18 = 0;
  pFVar1 = ::FName::FName(local_res10,0xf,L"ColorAndOpacity",FNAME_Add);
  FSlateAttributeDescriptor::FInitializer::AddMemberAttribute
            (param_1,&local_38,*pFVar1,0x2ac,(FInvalidateWidgetReasonAttribute *)local_28);
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

// SetNumPieces @ 142897c80

void __thiscall SCircularThrobber::SetNumPieces(SCircularThrobber *this,int param_1)

{
  if (this->NumPieces != param_1) {
    this->NumPieces = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetPeriod @ 1428985f0

void __thiscall SCircularThrobber::SetPeriod(SCircularThrobber *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(this->Period - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Period = param_1;
    ConstructSequence(this);
    return;
  }
  return;
}

// SetPieceImage @ 142898620

void __thiscall SCircularThrobber::SetPieceImage(SCircularThrobber *this,FSlateBrush *param_1)

{
  if (this->PieceImage != param_1) {
    this->PieceImage = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

// SetRadius @ 1428986b0

void __thiscall SCircularThrobber::SetRadius(SCircularThrobber *this,float param_1)

{
  if (__real_322bcc77 <
      (float)((uint)(this->Radius - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->Radius = param_1;
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

