// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// ComputeDesiredSize @ 1428e1dc0

TVector2<double> * __thiscall
STooltipPresenter::ComputeDesiredSize
          (STooltipPresenter *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FDeprecateSlateVector2D FVar4;
  TSharedRef<SWidget,1> local_18;
  
  if ((((this->ChildSlot).WidgetPtr.Object != (SWidget *)0x0) &&
      (pTVar2 = (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController,
      pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) {
    pTVar3 = TWeakChild<SWidget>::GetWidget(&this->ChildSlot,&local_18);
    FVar4 = SWidget::GetDesiredSize(pTVar3->Object);
    uVar1 = *(undefined8 *)FVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar1 >> 0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1428e2a10

bool __thiscall STooltipPresenter::ComputeVolatility(STooltipPresenter *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->ChildSlot).WidgetPtr.Object != (SWidget *)0x0) &&
      (pTVar1 = (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// Construct @ 14290c060

void __thiscall STooltipPresenter::Construct(STooltipPresenter *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  TReferenceControllerBase<1> *pTVar2;
  EWidgetUpdateFlags EVar3;
  TSharedPtr<SWidget,1> local_18;
  
  pTVar2 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  local_18.Object = (param_1->_Content).Widget.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  TWeakChild<SWidget>::AttachWidget(&this->ChildSlot,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar3 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar3;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar3);
  return;
}

// GetChildren @ 14293e590

FChildren * __thiscall STooltipPresenter::GetChildren(STooltipPresenter *this)

{
  return (FChildren *)&this->ChildSlot;
}

// OnArrangeChildren @ 142960e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STooltipPresenter::OnArrangeChildren
          (STooltipPresenter *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TWeakChild<SWidget> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FGeometry *pFVar2;
  FSlateApplication *pFVar3;
  undefined8 *puVar4;
  TTransform2<float> *pTVar5;
  FDeprecateSlateVector2D FVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FArrangedWidget *pFVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auStackY_158 [32];
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [8];
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  FSlateRect local_f0;
  undefined1 local_e0 [8];
  TSharedRef<SWidget,1> local_d8;
  TTransform2<float> local_c8;
  FArrangedWidget local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this_00 = &this->ChildSlot;
  if ((((this->ChildSlot).WidgetPtr.Object != (SWidget *)0x0) &&
      (pTVar1 = (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    TWeakChild<SWidget>::GetWidget(this_00,&local_d8);
    pFVar2 = SWidget::GetCachedGeometry((SWidget *)this);
    pFVar3 = FSlateApplication::Get();
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)pFVar3 + 0x68))(pFVar3,&local_128);
    pTVar5 = Inverse<TTransform2<float>_>(&local_c8,&pFVar2->AccumulatedRenderTransform);
    local_120._4_4_ = (undefined4)((ulonglong)*puVar4 >> 0x20);
    local_120._0_4_ = (undefined4)*puVar4;
    local_f0.Left =
         (float)local_120._4_4_ * (pTVar5->M).M[1][0] + (float)local_120._0_4_ * (pTVar5->M).M[0][0]
         + (pTVar5->Trans).field0_0x0._s_0.X;
    local_f0.Top = (float)local_120._4_4_ * (pTVar5->M).M[1][1] +
                   (float)local_120._0_4_ * (pTVar5->M).M[0][1] + (pTVar5->Trans).field0_0x0._s_0.Y;
    local_120._4_4_ = local_f0.Top;
    local_120._0_4_ = local_f0.Left;
    dVar9 = (double)local_f0.Left;
    dVar11 = (double)local_f0.Top;
    local_f0.Right = (float)(dVar9 + CursorSize.field0_0x0._s_0.X);
    local_f0.Bottom = (float)(dVar11 + CursorSize.field0_0x0._s_0.Y);
    FVar6 = SWidget::GetDesiredSize(local_d8.Object);
    auVar12._0_8_ = dVar11 + CursorSize.field0_0x0._s_0.Y;
    auVar12._8_8_ = 0;
    auVar10._0_8_ = dVar9 + CursorSize.field0_0x0._s_0.X;
    auVar10._8_8_ = 0;
    local_fc = (float)auVar12._0_8_;
    local_100 = (float)auVar10._0_8_;
    local_f4 = local_fc + *(float *)((longlong)FVar6 + 4);
    local_f8 = local_100 + *(float *)FVar6;
    local_110._0_4_ = (undefined4)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    local_110._4_4_ = (undefined4)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    local_120._0_4_ = SUB84(param_1->Size,0);
    local_120._4_4_ = SUB84(param_1->Size,4);
    local_108 = (float)local_120._0_4_;
    fStack_104 = (float)local_120._4_4_;
    local_120._0_4_ = 1.4013e-45;
    FVar6 = ComputePopupFitInRect
                      ((FSlateRect *)local_e0,&local_f0,(EOrientation *)&local_100,
                       (FSlateRect *)local_120,SUB81(local_110,0));
    local_128 = *(FDeprecateVector2DParameter *)FVar6;
    auVar12 = roundps(auVar12,ZEXT416((uint)(*(float *)FVar6 *
                                             (param_1->AccumulatedRenderTransform).M.M[0][1] +
                                             (param_1->AccumulatedRenderTransform).Trans.field0_0x0.
                                             _s_0.Y + *(float *)((longlong)FVar6 + 4) *
                                                      (param_1->AccumulatedRenderTransform).M.M[1]
                                                      [1] + __real_3f000000)),1);
    auVar10 = roundps(auVar10,ZEXT416((uint)(*(float *)((longlong)FVar6 + 4) *
                                             (param_1->AccumulatedRenderTransform).M.M[1][0] +
                                             *(float *)FVar6 *
                                             (param_1->AccumulatedRenderTransform).M.M[0][0] +
                                            (param_1->AccumulatedRenderTransform).Trans.field0_0x0.
                                            _s_0.X + __real_3f000000)),1);
    pTVar5 = Inverse<TTransform2<float>_>(&local_c8,&param_1->AccumulatedRenderTransform);
    local_128._0_4_ =
         auVar12._0_4_ * (pTVar5->M).M[1][0] + auVar10._0_4_ * (pTVar5->M).M[0][0] +
         (pTVar5->Trans).field0_0x0._s_0.X;
    local_120._8_4_ =
         auVar10._0_4_ * (pTVar5->M).M[0][1] + auVar12._0_4_ * (pTVar5->M).M[1][1] +
         (pTVar5->Trans).field0_0x0._s_0.Y;
    local_128._4_4_ = local_120._8_4_;
    local_120._4_4_ = (float)local_128;
    local_120._0_4_ = 1.0;
    pTVar7 = TWeakChild<SWidget>::GetWidget(this_00,(TSharedRef<SWidget,1> *)&local_c8);
    FVar6 = SWidget::GetDesiredSize(pTVar7->Object);
    local_128 = *(FDeprecateVector2DParameter *)FVar6;
    pTVar7 = TWeakChild<SWidget>::GetWidget(this_00,(TSharedRef<SWidget,1> *)local_110);
    pFVar8 = FGeometry::MakeChild
                       (param_1,&local_a8,pTVar7,(FDeprecateVector2DParameter *)&local_128,
                        (FSlateLayoutTransform *)local_120);
    FArrangedChildren::AddWidget(param_2,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(fStack_104,local_108));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_c8.M.M[1]);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetContent @ 14298f300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STooltipPresenter::SetContent(STooltipPresenter *this,TSharedPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  TWeakPtr<SWidget,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  bool bVar8;
  TSharedPtr<SWidget,1> local_28;
  undefined8 local_18 [2];
  
  pSVar7 = param_1->Object;
  if (pSVar7 == (SWidget *)0x0) {
    pTVar6 = (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController;
    pSVar7 = (SWidget *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar6->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14298f413;
        }
        LOCK();
        aVar5 = pTVar6->SharedReferenceCount;
        bVar8 = aVar3 == aVar5;
        if (bVar8) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar8);
      pSVar7 = (this->ChildSlot).WidgetPtr.Object;
    }
    if (pSVar7 != (SWidget *)0x0) {
      if (pSVar7 != SNullWidget::NullWidget.Object) {
        if (*(char *)((longlong)&(this->ChildSlot)._padding_ + 1) != -0x24) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                      __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        SWidget::ConditionallyDetatchParentWidget(pSVar7,(SWidget *)(this->ChildSlot)._padding_);
      }
      pTVar2 = &(this->ChildSlot).WidgetPtr;
      if (pTVar2 != (TWeakPtr<SWidget,1> *)local_18) {
        pTVar4 = (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController;
        pTVar2->Object = (SWidget *)0x0;
        (this->ChildSlot).WidgetPtr.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
  }
  else {
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = pSVar7;
    local_28.SharedReferenceCount.ReferenceController = pTVar6;
    TWeakChild<SWidget>::AttachWidget(&this->ChildSlot,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14298f413:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SWidget::Invalidate((SWidget *)this,Volatility);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

