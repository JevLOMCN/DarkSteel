// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FSlotProxy @ 1424eb550

FSlotProxy * __thiscall FSlotProxy::FSlotProxy(FSlotProxy *this,TSharedRef<SWidget,1> *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  float afVar2 [2];
  TVector2<float>_u_0 TVar3;
  FAuto *pFVar4;
  FDeprecateSlateVector2D FVar5;
  TOptional<TTransform2<float>_> *pTVar6;
  float local_res8;
  SWidget *local_98;
  FSharedReferencer<1> local_90;
  TOptional<TTransform2<float>_> local_88;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  this->SlotIndex = -1;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->DesiredSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->ArrangedSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar4 = FAuto::FAuto((FAuto *)local_68);
  (this->SizeParam).SizeRule = *(ESizeRule *)pFVar4;
  (this->SizeParam).Value.Value = *(float *)&pFVar4->field_0x8;
  (this->SizeParam).Value.bIsSet = (bool)pFVar4->field_0xc;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).Value.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->field_0x10);
  (this->SizeParam).ShrinkValue.Value = *(float *)&pFVar4->field_0x28;
  (this->SizeParam).ShrinkValue.bIsSet = (bool)pFVar4->field_0x2c;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SizeParam).ShrinkValue.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->field_0x30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  this->MinSize = 0.0;
  this->MaxSize = 0.0;
  pTVar1 = &this->Widget;
  (this->Visibility).Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->RenderTransform).bIsSet = false;
  this->HorizontalAlignment = HAlign_Fill;
  this->VerticalAlignment = VAlign_Fill;
  (this->RenderTransformPivot).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pTVar1->Object = (SWidget *)0x0;
  (this->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar5 = SWidget::GetDesiredSize(param_1->Object);
  (this->DesiredSize).field0_0x0 = *(TVector2<float>_u_0 *)FVar5;
  (this->Visibility).Value.Value = (param_1->Object->VisibilityAttribute).field_0x0;
  local_90.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_98 = param_1->Object;
  if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<SWidget,1> *)&local_98) {
    pTVar1->Object = local_98;
    local_98 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Widget).SharedReferenceCount,&local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.ReferenceController);
  pTVar6 = SWidget::GetRenderTransformWithRespectToFlowDirection(param_1->Object,&local_88);
  if (pTVar6 != &this->RenderTransform) {
    if (pTVar6->bIsSet == false) {
      if ((this->RenderTransform).bIsSet != false) {
        (this->RenderTransform).bIsSet = false;
      }
    }
    else {
      afVar2 = (pTVar6->TypedValue).M.M[1];
      (this->RenderTransform).TypedValue.M.M[0] = (pTVar6->TypedValue).M.M[0];
      (this->RenderTransform).TypedValue.M.M[1] = afVar2;
      (this->RenderTransform).TypedValue.Trans.field0_0x0 = (pTVar6->TypedValue).Trans.field0_0x0;
      (this->RenderTransform).bIsSet = true;
    }
  }
  if ((this->RenderTransform).bIsSet != false) {
    local_res8 = (float)*(double *)&param_1->Object->RenderTransformPivotAttribute;
    if (GSlateFlowDirection != LeftToRight) {
      local_res8 = (__real_3f000000 - local_res8) + __real_3f000000;
    }
    TVar3._s_0.Y = (float)*(double *)&(param_1->Object->RenderTransformPivotAttribute).field_0x8;
    TVar3._s_0.X = local_res8;
    (this->RenderTransformPivot).field0_0x0 = TVar3;
  }
  return this;
}

// MakeGeometry @ 142513820

FGeometry * __thiscall
FSlotProxy::MakeGeometry
          (FSlotProxy *this,FGeometry *__return_storage_ptr__,FGeometry *param_1,
          TVector2<float> *param_2,TVector2<float> *param_3)

{
  TVector2<float>_u_0 local_res8 [3];
  TVector2<float>_u_0 local_res20;
  FSlateLayoutTransform local_28;
  FSlateLayoutTransform local_18;
  
  local_28.Translation.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28.Translation.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28.Scale = 1.0;
  if ((this->RenderTransform).bIsSet != false) {
    local_res8[0] = (this->RenderTransformPivot).field0_0x0;
    local_res20._s_0 = *(TVector2<float>_u_0_s_0 *)&param_3->field0_0x0;
    FGeometry::MakeChild
              (param_1,__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_res20._s_0,
               &local_28,&(this->RenderTransform).TypedValue,
               (FDeprecateVector2DParameter *)&local_res8[0]._s_0);
    return __return_storage_ptr__;
  }
  local_18.Scale = param_1->Scale;
  local_res8[0]._s_0 = *(TVector2<float>_u_0_s_0 *)&param_3->field0_0x0;
  local_18.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_res8[0]._s_0,&local_28,
             &local_18,&param_1->AccumulatedRenderTransform,param_1->bHasRenderTransform);
  return __return_storage_ptr__;
}

// UpdateFromSlot @ 142523fb0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FSlotProxy::UpdateFromSlot(FSlotProxy *this,TSharedRef<SWidget,1> *param_1)

{
  uchar uVar1;
  uchar uVar2;
  float afVar3 [2];
  float afVar4 [2];
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  undefined8 local_res8;
  SWidget *local_38;
  FSharedReferencer<1> local_30;
  TOptional<TTransform2<float>_> local_28;
  
  uVar1 = (this->Visibility).Value.Value;
  uVar2 = (param_1->Object->VisibilityAttribute).field_0x0;
  (this->Visibility).Value.Value = uVar2;
  pTVar10 = &this->Widget;
  if (((uVar1 == uVar2) && (pTVar10->Object != (SWidget *)0x0)) &&
     (pTVar10->Object == param_1->Object)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  local_30.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_38 = param_1->Object;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = false;
  if (pTVar10 != (TSharedPtr<SWidget,1> *)&local_38) {
    pTVar10->Object = local_38;
    local_38 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Widget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SWidget::GetRenderTransformWithRespectToFlowDirection(param_1->Object,&local_28);
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_38d1b717;
  if (!bVar9) {
    bVar9 = (this->RenderTransform).bIsSet;
    if ((bVar9 != local_28.bIsSet) ||
       ((bVar9 != false &&
        ((((__real_38d1b717 <
            (float)((uint)((this->RenderTransform).TypedValue.M.M[0][0] -
                          local_28.TypedValue.M.M[0][0]) & __xmm_7fffffff7fffffff7fffffff7fffffff)
           || (__real_38d1b717 <
               (float)((uint)((this->RenderTransform).TypedValue.M.M[0][1] -
                             local_28.TypedValue.M.M[0][1]) & __xmm_7fffffff7fffffff7fffffff7fffffff
                      ))) ||
          ((__real_38d1b717 <
            (float)((uint)((this->RenderTransform).TypedValue.M.M[1][0] -
                          local_28.TypedValue.M.M[1][0]) & __xmm_7fffffff7fffffff7fffffff7fffffff)
           || ((__real_38d1b717 <
                (float)((uint)((this->RenderTransform).TypedValue.M.M[1][1] -
                              local_28.TypedValue.M.M[1][1]) &
                       __xmm_7fffffff7fffffff7fffffff7fffffff) ||
               (local_28.TypedValue.Trans.field0_0x0._s_0.X !=
                (this->RenderTransform).TypedValue.Trans.field0_0x0._s_0.X)))))) ||
         (local_28.TypedValue.Trans.field0_0x0._s_0.Y !=
          (this->RenderTransform).TypedValue.Trans.field0_0x0._s_0.Y)))))) {
      bVar6 = true;
    }
    if (!bVar6) {
      bVar9 = false;
      goto LAB_142524118;
    }
  }
  bVar9 = true;
LAB_142524118:
  if (&local_28 != &this->RenderTransform) {
    if (local_28.bIsSet == false) {
      if ((this->RenderTransform).bIsSet != false) {
        (this->RenderTransform).bIsSet = false;
      }
    }
    else {
      afVar3[1] = local_28.TypedValue.M.M[0][1];
      afVar3[0] = local_28.TypedValue.M.M[0][0];
      afVar4[1] = local_28.TypedValue.M.M[1][1];
      afVar4[0] = local_28.TypedValue.M.M[1][0];
      TVar5._s_0.Y = local_28.TypedValue.Trans.field0_0x0._s_0.Y;
      TVar5._s_0.X = local_28.TypedValue.Trans.field0_0x0._s_0.X;
      (this->RenderTransform).TypedValue.M.M[0] = afVar3;
      (this->RenderTransform).TypedValue.M.M[1] = afVar4;
      (this->RenderTransform).TypedValue.Trans.field0_0x0 = TVar5;
      (this->RenderTransform).bIsSet = true;
    }
  }
  if ((this->RenderTransform).bIsSet != false) {
    local_res8._0_4_ = (undefined4)*(double *)&param_1->Object->RenderTransformPivotAttribute;
    local_res8._4_4_ =
         (undefined4)*(double *)&(param_1->Object->RenderTransformPivotAttribute).field_0x8;
    if (GSlateFlowDirection != LeftToRight) {
      local_res8._0_4_ = (__real_3f000000 - (float)(undefined4)local_res8) + __real_3f000000;
    }
    if (((bVar9 != false) ||
        (fVar7 < (float)((uint)((this->RenderTransformPivot).field0_0x0._s_0.X -
                               (float)(undefined4)local_res8) & uVar8))) ||
       (fVar7 < (float)((uint)((this->RenderTransformPivot).field0_0x0._s_0.Y -
                              (float)local_res8._4_4_) & uVar8))) {
      bVar9 = true;
    }
    (this->RenderTransformPivot).field0_0x0 = local_res8;
  }
  return bVar9;
}

