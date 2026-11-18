// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// FScrollyZoomy @ 1427b4080

FScrollyZoomy * __thiscall FScrollyZoomy::FScrollyZoomy(FScrollyZoomy *this,bool param_1)

{
  this->AmountScrolledWhileRightMouseDown = 0.0;
  this->bShowSoftwareCursor = false;
  (this->SoftwareCursorPosition).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->HorizontalIntertia).SampleTimeout = 0.10000000149011612;
  (this->VerticalIntertia).SampleTimeout = 0.10000000149011612;
  this->UseInertialScrolling = param_1;
  (this->HorizontalIntertia).ScrollSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HorizontalIntertia).ScrollSamples.ArrayNum = 0;
  (this->HorizontalIntertia).ScrollSamples.ArrayMax = 0;
  (this->HorizontalIntertia).ScrollVelocity = 0.0;
  (this->HorizontalIntertia).bShouldStopScrollNow = false;
  (this->VerticalIntertia).ScrollSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VerticalIntertia).ScrollSamples.ArrayNum = 0;
  (this->VerticalIntertia).ScrollSamples.ArrayMax = 0;
  (this->VerticalIntertia).ScrollVelocity = 0.0;
  (this->VerticalIntertia).bShouldStopScrollNow = false;
  return this;
}

// GetSoftwareCursorPosition @ 1428158b0

FDeprecateSlateVector2D __thiscall FScrollyZoomy::GetSoftwareCursorPosition(FScrollyZoomy *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(TVector2<float>_u_0 *)in_RDX = (this->SoftwareCursorPosition).field0_0x0;
  return in_RDX;
}

// IsRightClickScrolling @ 14281e800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FScrollyZoomy::IsRightClickScrolling(FScrollyZoomy *this)

{
  FSlateApplication *this_00;
  float fVar1;
  
  this_00 = FSlateApplication::Get();
  fVar1 = FSlateApplication::GetDragTriggerDistance(this_00);
  return fVar1 < this->AmountScrolledWhileRightMouseDown ||
         fVar1 == this->AmountScrolledWhileRightMouseDown;
}

// NeedsSoftwareCursor @ 142822100

bool __thiscall FScrollyZoomy::NeedsSoftwareCursor(FScrollyZoomy *this)

{
  return this->bShowSoftwareCursor;
}

// OnCursorQuery @ 142825660

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
FScrollyZoomy::OnCursorQuery(FScrollyZoomy *this,FCursorReply *__return_storage_ptr__)

{
  FSlateApplication *this_00;
  float fVar1;
  
  this_00 = FSlateApplication::Get();
  fVar1 = FSlateApplication::GetDragTriggerDistance(this_00);
  if (fVar1 < this->AmountScrolledWhileRightMouseDown ||
      fVar1 == this->AmountScrolledWhileRightMouseDown) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = None;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142829010

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FScrollyZoomy::OnMouseButtonDown
          (FScrollyZoomy *this,FReply *__return_storage_ptr__,FPointerEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  
  (this->HorizontalIntertia).bShouldStopScrollNow = false;
  (this->HorizontalIntertia).ScrollVelocity = 0.0;
  (this->VerticalIntertia).bShouldStopScrollNow = false;
  (this->VerticalIntertia).ScrollVelocity = 0.0;
  pTVar1 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_1->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar2 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    this->AmountScrolledWhileRightMouseDown = 0.0;
  }
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142829a80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FScrollyZoomy::OnMouseButtonUp
          (FScrollyZoomy *this,FReply *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1,
          FGeometry *param_2,FPointerEvent *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FDeprecateSlateVector2D FVar5;
  TVector2<float>_u_0_s_0 TVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  TIntPoint<int>_u_0 local_1c8;
  float local_1c0;
  float fStack_1bc;
  TVector2<float>_u_0 local_1b8;
  TVector2<float>_u_0 TStack_1b0;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float local_19c;
  ulonglong local_198;
  FReply local_190;
  FReply local_d8;
  
  pTVar3 = (param_3->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_3->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar4 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar8) {
    this->AmountScrolledWhileRightMouseDown = 0.0;
    FReply::FReply(&local_190,true);
    FVar7.ReferenceController = local_190.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_190.MouseCaptor.Object = (SWidget *)0x0;
    local_190.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
      }
    }
    local_190.bUseHighPrecisionMouse = 0;
    local_190.bReleaseMouseCapture = 1;
    FReply::FReply(&local_d8,&local_190);
    FReply::~FReply(&local_190);
    this->bShowSoftwareCursor = false;
    bVar8 = SWidget::HasMouseCapture(param_1->Object);
    if (bVar8) {
      fVar9 = param_2->Scale;
      FVar5 = param_2->Size;
      param_3._4_4_ = FVar5._4_4_;
      param_3._0_4_ = FVar5._0_4_;
      unique0x00023d00 = (param_2->AbsolutePosition).field0_0x0._s_0;
      local_1c8 = (TIntPoint<int>_u_0)((ulonglong)(uint)param_3._4_4_ << 0x20);
      local_198 = (ulonglong)FVar5 & 0xffffffff;
      local_1b8._s_0.X = fVar9 * param_3._0_4_;
      fStack_1bc = fVar9 * 0.0 + fStack_1a0;
      local_1c0 = fVar9 * 0.0 + (float)local_1a8._4_4_;
      local_1b8._s_0.Y = fVar9 * 0.0;
      TStack_1b0._s_0.X = fVar9 * 0.0;
      TStack_1b0._s_0.Y = fVar9 * param_3._4_4_;
      FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_1c0,(FSlateRect *)local_1a8);
      TVar6 = (this->SoftwareCursorPosition).field0_0x0._s_0;
      param_3._4_4_ = TVar6.Y;
      param_3._0_4_ = TVar6.X;
      fVar9 = param_3._4_4_ * (param_2->AccumulatedRenderTransform).M.M[1][0] +
              param_3._0_4_ * (param_2->AccumulatedRenderTransform).M.M[0][0] +
              (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      fVar10 = param_3._0_4_ * (param_2->AccumulatedRenderTransform).M.M[0][1] +
               param_3._4_4_ * (param_2->AccumulatedRenderTransform).M.M[1][1] +
               (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      if (fStack_1a0 <= fVar9) {
        fVar9 = fStack_1a0;
      }
      if (local_19c <= fVar10) {
        fVar10 = local_19c;
      }
      if (fVar9 <= (float)local_1a8._0_4_) {
        fVar9 = (float)local_1a8._0_4_;
      }
      if (fVar10 <= (float)local_1a8._4_4_) {
        fVar10 = (float)local_1a8._4_4_;
      }
      local_1c8._s_0.Y = (int)ROUND(fVar10 + fVar10 + __real_3f000000) >> 1;
      local_1c8._s_0.X = (int)ROUND(fVar9 + fVar9 + __real_3f000000) >> 1;
      FReply::SetMousePos(&local_d8,(TIntPoint<int> *)&local_1c8._s_0);
    }
    if (this->UseInertialScrolling == false) {
      (this->HorizontalIntertia).bShouldStopScrollNow = false;
      (this->HorizontalIntertia).ScrollVelocity = 0.0;
      (this->VerticalIntertia).bShouldStopScrollNow = false;
      (this->VerticalIntertia).ScrollVelocity = 0.0;
    }
    FReply::FReply(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 14282a4e0

void __thiscall
FScrollyZoomy::OnMouseLeave
          (FScrollyZoomy *this,TSharedRef<SWidget,1> *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture(param_1->Object);
  if (!bVar1) {
    this->AmountScrolledWhileRightMouseDown = 0.0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnMouseMove @ 14282a5c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FScrollyZoomy::OnMouseMove
          (FScrollyZoomy *this,FReply *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1,
          IScrollableZoomable *param_2,FGeometry *param_3,FPointerEvent *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FName FVar9;
  FSharedReferencer<1> FVar10;
  FWeakReferencer<1> FVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  FSlateApplication *this_00;
  TTransform2<float> *pTVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined8 local_148;
  double local_140;
  IScrollableZoomable *local_138;
  FGeometry *local_130;
  FReply local_128;
  TTransform2<float> local_68;
  
  FVar10.ReferenceController =
       EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  FVar9 = EKeys::RightMouseButton.KeyName;
  local_130 = param_3;
  if (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::RightMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = param_4->PressedButtons;
  local_138 = param_2;
  uVar14 = ::GetTypeHash(FVar9.ComparisonIndex.Value);
  if (*(int *)&(pTVar7->Elements).field_0x8 != *(int *)&(pTVar7->Elements).field_0x34) {
    FVar16 = (pTVar7->Hash).SecondaryData;
    if (FVar16 == (ForElementType<FSetElementId>)0x0) {
      FVar16 = (ForElementType<FSetElementId>)&pTVar7->Hash;
    }
    iVar17 = *(int *)((longlong)FVar16 +
                     (ulonglong)(pTVar7->HashSize - 1U & uVar14 + FVar9.Number) * 4);
    if (iVar17 != -1) {
      do {
        if (*(FName *)((longlong)iVar17 * 0x20 + *(longlong *)&pTVar7->Elements) == FVar9) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar10.ReferenceController);
          if (iVar17 == -1) goto LAB_14282a67e;
          this->AmountScrolledWhileRightMouseDown =
               (float)(*(uint *)&(param_4->CursorDelta).field_0x4 &
                      __xmm_7fffffff7fffffff7fffffff7fffffff) +
               (float)(*(uint *)&param_4->CursorDelta & __xmm_7fffffff7fffffff7fffffff7fffffff) +
               this->AmountScrolledWhileRightMouseDown;
          this_00 = FSlateApplication::Get();
          fVar18 = FSlateApplication::GetDragTriggerDistance(this_00);
          if (this->AmountScrolledWhileRightMouseDown <= fVar18 &&
              fVar18 != this->AmountScrolledWhileRightMouseDown) goto LAB_14282a67e;
          QueryPerformanceCounter((LARGE_INTEGER *)&local_148);
          FInertialScrollManager::AddScrollSample
                    (&this->HorizontalIntertia,*(float *)&param_4->CursorDelta,
                     (double)local_148 * FGenericPlatformTime::SecondsPerCycle +
                     __real_4170000000000000);
          QueryPerformanceCounter((LARGE_INTEGER *)&local_148);
          FInertialScrollManager::AddScrollSample
                    (&this->VerticalIntertia,*(float *)&(param_4->CursorDelta).field_0x4,
                     (double)local_148 * FGenericPlatformTime::SecondsPerCycle +
                     __real_4170000000000000);
          local_148 = (LARGE_INTEGER)(double)*(float *)&param_4->CursorDelta;
          local_140 = (double)*(float *)&(param_4->CursorDelta).field_0x4;
          cVar12 = (**(code **)*local_138)(local_138,&local_148);
          FReply::FReply(&local_128,true);
          bVar13 = SWidget::HasMouseCapture(param_1->Object);
          if (!bVar13) {
            pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
            local_128.MouseCaptor.Object = param_1->Object;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            FVar11.ReferenceController =
                 local_128.MouseCaptor.WeakReferenceCount.ReferenceController;
            if (pTVar8 != local_128.MouseCaptor.WeakReferenceCount.ReferenceController) {
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
                UNLOCK();
              }
              FVar11.ReferenceController = pTVar8;
              if (local_128.MouseCaptor.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_128.MouseCaptor.WeakReferenceCount.ReferenceController)->
                          WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)((local_128.MouseCaptor.WeakReferenceCount.ReferenceController)->
                               _padding_ + 8))
                            (local_128.MouseCaptor.WeakReferenceCount.ReferenceController,1);
                }
              }
            }
            local_128.MouseCaptor.WeakReferenceCount.ReferenceController =
                 FVar11.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
            pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
            local_128.MouseCaptor.Object = param_1->Object;
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            FVar11.ReferenceController =
                 local_128.MouseCaptor.WeakReferenceCount.ReferenceController;
            if (pTVar8 != local_128.MouseCaptor.WeakReferenceCount.ReferenceController) {
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
                UNLOCK();
              }
              FVar11.ReferenceController = pTVar8;
              if (local_128.MouseCaptor.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_128.MouseCaptor.WeakReferenceCount.ReferenceController)->
                          WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)((local_128.MouseCaptor.WeakReferenceCount.ReferenceController)->
                               _padding_ + 8))
                            (local_128.MouseCaptor.WeakReferenceCount.ReferenceController,1);
                }
              }
            }
            local_128.MouseCaptor.WeakReferenceCount.ReferenceController =
                 FVar11.ReferenceController;
            local_128.bUseHighPrecisionMouse = 1;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
            pTVar15 = Inverse<TTransform2<float>_>(&local_68,&local_130->AccumulatedRenderTransform)
            ;
            local_148._4_4_ = SUB84(param_4->ScreenSpacePosition,4);
            local_148._0_4_ = SUB84(param_4->ScreenSpacePosition,0);
            fVar19 = (float)local_148._4_4_ * (pTVar15->M).M[1][0];
            fVar18 = (pTVar15->M).M[0][1];
            fVar3 = (pTVar15->M).M[0][0];
            fVar4 = (pTVar15->M).M[1][1];
            fVar5 = (pTVar15->Trans).field0_0x0._s_0.X;
            fVar6 = (pTVar15->Trans).field0_0x0._s_0.Y;
            this->bShowSoftwareCursor = true;
            local_148._4_4_ =
                 (float)(undefined4)local_148 * fVar18 + (float)local_148._4_4_ * fVar4 + fVar6;
            local_148._0_4_ = fVar19 + (float)(undefined4)local_148 * fVar3 + fVar5;
            (this->SoftwareCursorPosition).field0_0x0 = (TVector2<float>_u_0)local_148;
          }
          if (cVar12 != '\0') {
            local_148._4_4_ =
                 *(float *)&(param_4->CursorDelta).field_0x4 +
                 (this->SoftwareCursorPosition).field0_0x0._s_0.Y;
            local_148._0_4_ =
                 (this->SoftwareCursorPosition).field0_0x0._s_0.X + *(float *)&param_4->CursorDelta;
            (this->SoftwareCursorPosition).field0_0x0 = (TVector2<float>_u_0)local_148;
          }
          FReply::FReply(__return_storage_ptr__,&local_128);
          FReply::~FReply(&local_128);
          goto LAB_14282a688;
        }
        iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 + *(longlong *)&pTVar7->Elements);
      } while (iVar17 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
LAB_14282a67e:
  FReply::FReply(__return_storage_ptr__,false);
LAB_14282a688:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 14282a940

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
FScrollyZoomy::OnMouseWheel
          (FScrollyZoomy *this,FReply *__return_storage_ptr__,FPointerEvent *param_1,
          IScrollableZoomable *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)((longlong)*param_2 + 8))
                    (param_2,*(undefined4 *)&(param_1->WheelOrGestureDelta).field_0x4);
  if (cVar1 != '\0') {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// PaintSoftwareCursorIfNeeded @ 14282ccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FScrollyZoomy::PaintSoftwareCursorIfNeeded
          (FScrollyZoomy *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4)

{
  float fVar1;
  undefined1 uVar2;
  code *pcVar3;
  FDeprecateSlateVector2D FVar4;
  TVector2<float>_u_0_s_0 TVar5;
  ISlateStyle *pIVar6;
  FName *pFVar7;
  FSlateBrush *pFVar8;
  undefined1 auStackY_f8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  TTransform2<float> local_b8;
  FName local_a0;
  TTransform2<float> local_98;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  FDeprecateSlateVector2D local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->bShowSoftwareCursor != false) {
    pIVar6 = FAppStyle::Get();
    pcVar3 = *(code **)((longlong)*pIVar6 + 0x50);
    pFVar7 = ::FName::FName(&local_a0,L"SoftwareCursor_Grab");
    pFVar8 = (FSlateBrush *)(*pcVar3)(pIVar6,*pFVar7,0,0);
    fVar1 = param_1->Scale;
    FVar4 = pFVar8->ImageSize;
    TVar5 = (param_1->AbsolutePosition).field0_0x0._s_0;
    local_b8.M.M[0][1] = TVar5.X;
    local_b8.M.M[1][0] = TVar5.Y;
    local_c0._0_4_ =
         (this->SoftwareCursorPosition).field0_0x0._s_0.X -
         *(float *)&pFVar8->ImageSize * __real_3f000000;
    local_c0._4_4_ =
         (this->SoftwareCursorPosition).field0_0x0._s_0.Y -
         *(float *)&(pFVar8->ImageSize).field_0x4 * __real_3f000000;
    local_b8.Trans.field0_0x0 = local_c0;
    local_c8._0_4_ = fVar1 * (float)(undefined4)local_c0 + local_b8.M.M[0][1];
    local_c8._4_4_ = fVar1 * (float)local_c0._4_4_ + local_b8.M.M[1][0];
    local_b8.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_b8.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_b8.M.M[1][0] = (float)_UNK_15076b188;
    local_b8.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_98,&local_b8,&param_1->AccumulatedRenderTransform);
    local_80 = local_c8;
    local_4c = param_1->bHasRenderTransform * '\x02' | local_4c & 0xfc;
    local_74 = 0;
    local_64[0] = local_98.M.M[0][0];
    local_64[1] = local_98.M.M[0][1];
    afStack_5c[0] = local_98.M.M[1][0];
    afStack_5c[1] = local_98.M.M[1][1];
    local_54 = local_98.Trans.field0_0x0;
    local_78 = fVar1;
    local_6c = FVar4;
    FSlateDrawElement::MakeBox
              (param_3,param_4 + 1,(FPaintGeometry *)&local_80._s_0,pFVar8,None,&FLinearColor::White
              );
    param_4 = param_4 + 1;
  }
  return param_4;
}

// Tick @ 142836950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FScrollyZoomy::Tick(FScrollyZoomy *this,float param_1,IScrollableZoomable *param_2)

{
  FSlateApplication *this_00;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double local_58;
  double local_50;
  
  this_00 = FSlateApplication::Get();
  fVar1 = FSlateApplication::GetDragTriggerDistance(this_00);
  uVar2 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
  if (fVar1 < this->AmountScrolledWhileRightMouseDown ||
      fVar1 == this->AmountScrolledWhileRightMouseDown) {
    return;
  }
  fVar1 = (this->HorizontalIntertia).ScrollVelocity;
  if (fVar1 <= 0.0) {
    if (fVar1 < 0.0) {
      fVar1 = fVar1 - (fVar1 * FrictionCoefficient - StaticVelocityDrag) * param_1;
      if (0.0 <= fVar1) {
        fVar1 = 0.0;
      }
      goto LAB_1428369fd;
    }
  }
  else {
    fVar1 = fVar1 - (fVar1 * FrictionCoefficient + StaticVelocityDrag) * param_1;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
LAB_1428369fd:
    (this->HorizontalIntertia).ScrollVelocity = fVar1;
  }
  if (fVar1 != 0.0) {
    uVar3 = fVar1 * param_1;
  }
  fVar1 = (this->VerticalIntertia).ScrollVelocity;
  if (fVar1 <= 0.0) {
    if (0.0 <= fVar1) goto LAB_142836a7d;
    fVar1 = fVar1 - (fVar1 * FrictionCoefficient - StaticVelocityDrag) * param_1;
    if (0.0 <= fVar1) {
      fVar1 = 0.0;
    }
  }
  else {
    fVar1 = fVar1 - (fVar1 * FrictionCoefficient + StaticVelocityDrag) * param_1;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
  }
  (this->VerticalIntertia).ScrollVelocity = fVar1;
LAB_142836a7d:
  if (fVar1 != 0.0) {
    uVar2 = fVar1 * param_1;
  }
  if (((float)uVar3 != UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X) ||
     ((float)uVar2 != UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y)) {
    local_58 = (double)(float)uVar3;
    local_50 = (double)(float)uVar2;
    (**(code **)*param_2)(param_2,&local_58);
  }
  return;
}

