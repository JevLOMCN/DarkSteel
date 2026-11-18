// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 14

// ~SDrawerOverlay @ 142d67380

void __thiscall SDrawerOverlay::~SDrawerOverlay(SDrawerOverlay *this)

{
  void *pvVar1;
  FSlateThrottleManager *this_00;
  
  this->_padding_ = (longlong)&___7SDrawerOverlay__6B_;
  this_00 = FSlateThrottleManager::Get();
  FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->AnimationThrottle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDismissComplete);
  pvVar1 = *(void **)&(this->OnDismissComplete).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDismissComplete);
  FCurveSequence::~FCurveSequence(&this->DrawerEasingCurve);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTargetHeightChanged);
  pvVar1 = *(void **)&(this->OnTargetHeightChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetHeightChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DrawerOpenCloseTimer).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ComputeDesiredSize @ 142d76640

TVector2<double> * __thiscall
SDrawerOverlay::ComputeDesiredSize
          (SDrawerOverlay *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->TargetHeight;
  fVar2 = (this->ShadowOffset).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar1 + fVar2);
  return __return_storage_ptr__;
}

// Construct @ 142d7fbf0

void __thiscall SDrawerOverlay::Construct(SDrawerOverlay *this,FArguments *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  FSplitterStyle *pFVar9;
  FSlateBrush *pFVar10;
  FCurveSequence *pFVar11;
  float fVar12;
  FName local_res8;
  FCurveSequence local_78;
  
  this->CurrentHeight = 0.0;
  (this->ShadowOffset).field0_0x0 = *(TVector2<float>_u_0 *)&param_1->_ShadowOffset;
  this->ExpanderSize = 5.0;
  pIVar7 = FAppStyle::Get();
  pFVar8 = ::FName::FName(&local_res8,"Splitter");
  pFVar9 = (FSplitterStyle *)
           (**(code **)((longlong)*pIVar7 + 0xa0))(pIVar7,FSplitterStyle::TypeName,*pFVar8,0,1);
  if (pFVar9 == (FSplitterStyle *)0x0) {
    pFVar9 = FSplitterStyle::GetDefault();
  }
  this->SplitterStyle = pFVar9;
  fVar1 = param_1->_MinDrawerHeight;
  this->MinHeight = fVar1;
  fVar2 = param_1->_MaxDrawerHeight;
  this->MaxHeight = fVar2;
  fVar12 = param_1->_TargetDrawerHeight;
  if (fVar2 <= param_1->_TargetDrawerHeight) {
    fVar12 = fVar2;
  }
  if (fVar12 <= fVar1) {
    fVar12 = fVar1;
  }
  this->TargetHeight = fVar12;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnTargetHeightChanged,&param_1->_OnTargetHeightChanged);
  pIVar7 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x50);
  pFVar8 = ::FName::FName(&local_res8,"StatusBar.DrawerBackground");
  pFVar10 = (FSlateBrush *)(*pcVar3)(pIVar7,*pFVar8,0,0);
  this->BackgroundBrush = pFVar10;
  pIVar7 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x50);
  pFVar8 = ::FName::FName(&local_res8,"StatusBar.DrawerShadow");
  pFVar10 = (FSlateBrush *)(*pcVar3)(pIVar7,*pFVar8,0,0);
  this->ShadowBrush = pFVar10;
  pIVar7 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar7 + 0x50);
  pFVar8 = ::FName::FName(&local_res8,"Docking.Sidebar.Border");
  pFVar10 = (FSlateBrush *)(*pcVar3)(pIVar7,*pFVar8,0,0);
  this->BorderBrush = pFVar10;
  this->bIsResizing = false;
  this->bIsResizeHandleHovered = false;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnDismissComplete,&param_1->_OnDismissComplete);
  pFVar11 = FCurveSequence::FCurveSequence(&local_78,0.0,__real_3e19999a,QuadOut);
  FCurveSequence::operator=(&this->DrawerEasingCurve,pFVar11);
  FCurveSequence::~FCurveSequence(&local_78);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  pTVar4 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar5 = (param_1->_Content).Widget.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  return;
}

// GetRenderTransformedGeometry @ 142db0080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometry * __thiscall
SDrawerOverlay::GetRenderTransformedGeometry
          (SDrawerOverlay *this,FGeometry *__return_storage_ptr__,FGeometry *param_1)

{
  FDeprecateVector2DParameter local_res8;
  FDeprecateSlateVector2D local_res10 [3];
  FSlateLayoutTransform local_38;
  FSlateLayoutTransform local_2c;
  TTransform2<float> local_20;
  
  local_20.Trans.field0_0x0._s_0.Y = this->TargetHeight - this->CurrentHeight;
  local_res8 = (FDeprecateVector2DParameter)0x3f0000003f000000;
  local_2c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
  local_20.M.M[0] = ___xmm_3f80000000000000000000003f800000;
  local_20.M.M[1] = _UNK_15076b188;
  local_38._0_8_ = 0x3f800000;
  local_2c.Scale = param_1->Scale;
  local_res10[0] = param_1->Size;
  local_20.Trans.field0_0x0._s_0.X = 0.0;
  local_38.Translation.field0_0x0._s_0.Y = 0.0;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)local_res10,&local_38,&local_20,
             &local_res8,&local_2c,&param_1->AccumulatedRenderTransform);
  return __return_storage_ptr__;
}

// GetResizeHandleGeometry @ 142db02a0

FGeometry * __thiscall
SDrawerOverlay::GetResizeHandleGeometry
          (SDrawerOverlay *this,FGeometry *__return_storage_ptr__,FGeometry *param_1)

{
  FGeometry *pFVar1;
  float local_78;
  float fStack_74;
  FSlateLayoutTransform local_70;
  FSlateLayoutTransform local_64;
  FGeometry local_58;
  
  pFVar1 = GetRenderTransformedGeometry(this,&local_58,param_1);
  local_70.Translation.field0_0x0._s_0.X = (this->ShadowOffset).field0_0x0._s_0.X;
  local_70.Translation.field0_0x0._s_0.Y =
       (this->ShadowOffset).field0_0x0._s_0.Y - this->ExpanderSize;
  local_78 = SUB84(param_1->Size,0);
  local_64.Translation.field0_0x0 = (pFVar1->AbsolutePosition).field0_0x0;
  local_70.Scale = 1.0;
  fStack_74 = this->ExpanderSize;
  local_78 = local_78 -
             (local_70.Translation.field0_0x0._s_0.X + local_70.Translation.field0_0x0._s_0.X);
  local_64.Scale = pFVar1->Scale;
  FGeometry::FGeometry
            (__return_storage_ptr__,(FDeprecateVector2DParameter *)&local_78,&local_70,&local_64,
             &pFVar1->AccumulatedRenderTransform,pFVar1->bHasRenderTransform);
  return __return_storage_ptr__;
}

// OnArrangeChildren @ 142dbbcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SDrawerOverlay::OnArrangeChildren
          (SDrawerOverlay *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  float fVar1;
  undefined1 auStackY_b8 [32];
  float local_88;
  float fStack_84;
  TVector2<float>_u_0_s_0 local_80;
  FSlateLayoutTransform local_78;
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((param_2->VisibilityFilter).Value.Value & *(byte *)(this->_padding_ + 0x39)) != 0) {
    fVar1 = (this->ShadowOffset).field0_0x0._s_0.X;
    local_88 = SUB84(param_1->Size,0);
    local_80 = (this->ShadowOffset).field0_0x0._s_0;
    local_78.Scale = 1.0;
    local_78.Translation.field0_0x0._s_0.X = local_80.X;
    fStack_84 = this->TargetHeight;
    local_88 = local_88 - (fVar1 + fVar1);
    local_78.Translation.field0_0x0._s_0.Y = local_80.Y;
    FGeometry::MakeChild
              (param_1,&local_68,(TSharedRef<SWidget,1> *)&this->_padding_,
               (FDeprecateVector2DParameter *)&local_88,&local_78);
    FArrangedChildren::AddWidget(param_2,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.Widget.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnCursorQuery @ 142dbc710

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SDrawerOverlay::OnCursorQuery
          (SDrawerOverlay *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Type *pTVar5;
  int iVar6;
  int iVar7;
  undefined8 local_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  Type local_60 [2];
  undefined1 local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *pTStack_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  Type local_20 [2];
  
  iVar7 = 0;
  if ((this->bIsResizing == false) && (this->bIsResizeHandleHovered == false)) {
    local_58 = 0;
    puVar2 = &local_50;
    puVar3 = &local_40;
    local_50 = 0;
    pTStack_48 = (TReferenceControllerBase<1> *)0x0;
    local_20[0] = Default;
    uVar1 = 0;
    local_40 = 0;
    pTStack_38 = (TReferenceControllerBase<1> *)0x0;
    puVar4 = &local_30;
    local_30 = 0;
    pTStack_28 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = local_20;
    iVar6 = iVar7;
    iVar7 = 1;
  }
  else {
    local_60[0] = ResizeUpDown;
    local_90 = 0;
    pTStack_88 = (TReferenceControllerBase<1> *)0x0;
    uVar1 = 1;
    puVar2 = &local_90;
    local_80 = 0;
    pTStack_78 = (TReferenceControllerBase<1> *)0x0;
    puVar3 = &local_80;
    local_70 = 0;
    pTStack_68 = (TReferenceControllerBase<1> *)0x0;
    puVar4 = &local_70;
    iVar6 = 2;
    pTVar5 = local_60;
  }
  *(undefined1 *)&__return_storage_ptr__->_padding_ = uVar1;
  __return_storage_ptr__->_padding_ = puVar2[1];
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar3[1];
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)puVar4[1];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  __return_storage_ptr__->MouseCursor = *pTVar5;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  if (iVar6 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_88);
  }
  if (iVar7 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142dc27f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDrawerOverlay::OnMouseButtonDown
          (SDrawerOverlay *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  SWidget *pSVar3;
  FThrottleRequest FVar4;
  FSlateThrottleManager *this_00;
  undefined4 extraout_var;
  TSharedRef<SWidget,1> *pTVar5;
  FReply *pFVar6;
  bool bVar7;
  undefined1 auStack_188 [32];
  TSharedRef<SWidget,1> local_168;
  FGeometry local_158;
  FReply local_120;
  FGeometry local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_188;
  FReply::FReply(__return_storage_ptr__,false);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar7) {
    GetRenderTransformedGeometry(this,&local_158,param_1);
    GetResizeHandleGeometry(this,&local_68,param_1);
    local_168.Object = *(SWidget **)&param_2->ScreenSpacePosition;
    bVar7 = FGeometry::IsUnderLocation(&local_68,(FDeprecateVector2DParameter *)&local_168);
    if (bVar7) {
      this->bIsResizing = true;
      FGeometry::operator=(&this->InitialResizeGeometry,&local_68);
      this->InitialHeightAtResize = this->CurrentHeight;
      this_00 = FSlateThrottleManager::Get();
      FVar4 = FSlateThrottleManager::EnterResponsiveMode(this_00);
      (this->ResizeThrottleHandle).Index = *(int *)CONCAT44(extraout_var,FVar4.Index);
      FReply::FReply(&local_120,true);
      pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_168);
      pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar5->Object;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168.Object = pSVar3;
      local_168.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar6 = FReply::CaptureMouse(&local_120,&local_168);
      FReply::operator=(__return_storage_ptr__,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_120);
    }
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142dc3f20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDrawerOverlay::OnMouseButtonUp
          (SDrawerOverlay *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  FWeakReferencer<1> FVar7;
  FSlateThrottleManager *this_00;
  FReadAccessScope local_e8;
  FReply local_d0;
  
  FVar4 = (param_2->EffectingButton).KeyName;
  pTVar5 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == EKeys::LeftMouseButton.KeyName) && (this->bIsResizing == true)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    this->bIsResizing = false;
    this_00 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->ResizeThrottleHandle);
    fVar2 = this->TargetHeight;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnTargetHeightChanged,&local_e8);
    if ((*(int *)&(this->OnTargetHeightChanged).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(this->OnTargetHeightChanged).field_0x8, plVar6 != (longlong *)0x0))
    {
      (**(code **)(*plVar6 + 0x68))(plVar6,fVar2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    FReply::FReply(&local_d0,true);
    FVar7.ReferenceController = local_d0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_d0.MouseCaptor.Object = (SWidget *)0x0;
    local_d0.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
      }
    }
    local_d0.bUseHighPrecisionMouse = 0;
    local_d0.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_d0);
    FReply::~FReply(&local_d0);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseLeave @ 142dc4550

void __thiscall SDrawerOverlay::OnMouseLeave(SDrawerOverlay *this,FPointerEvent *param_1)

{
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  this->bIsResizeHandleHovered = false;
  return;
}

// OnMouseMove @ 142dc45b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDrawerOverlay::OnMouseMove
          (SDrawerOverlay *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  FDeprecateSlateVector2D FVar2;
  TVector2<float>_u_0 TVar3;
  bool bVar4;
  TTransform2<float> *pTVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  FDeprecateSlateVector2D local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  TTransform2<float> local_78;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  GetResizeHandleGeometry(this,&local_60,param_1);
  local_98 = param_2->ScreenSpacePosition;
  bVar4 = FGeometry::IsUnderLocation(&local_60,(FDeprecateVector2DParameter *)&local_98);
  this->bIsResizeHandleHovered = bVar4;
  if (this->bIsResizing != false) {
    bVar4 = SWidget::HasMouseCapture((SWidget *)this);
    if ((bVar4) &&
       ((*(float *)&param_2->CursorDelta != 0.0 ||
        (*(float *)&(param_2->CursorDelta).field_0x4 != 0.0)))) {
      pTVar5 = Inverse<TTransform2<float>_>
                         (&local_78,&(this->InitialResizeGeometry).AccumulatedRenderTransform);
      bVar4 = true;
      local_90._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
      local_90._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
      fVar1 = this->MinHeight;
      fVar7 = (float)local_90 * (pTVar5->M).M[0][1] + local_90._4_4_ * (pTVar5->M).M[1][1] +
              (pTVar5->Trans).field0_0x0._s_0.Y;
      local_90 = (TVector2<float>_u_0)
                 CONCAT44(fVar7,local_90._4_4_ * (pTVar5->M).M[1][0] +
                                (float)local_90 * (pTVar5->M).M[0][0] +
                                (pTVar5->Trans).field0_0x0._s_0.X);
      local_80 = local_90;
      FVar2 = (this->InitialResizeGeometry).Size;
      local_90 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      TVar3._s_0 = local_90;
      local_90._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
      local_88._0_4_ = FVar2._0_4_;
      local_90._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
      local_88._4_4_ = FVar2._4_4_;
      local_88._4_4_ =
           local_90._4_4_ * local_88._4_4_ +
           (this->InitialResizeGeometry).Position.field0_0x0._s_0.Y;
      local_88._0_4_ =
           (float)local_90 * (float)local_88 +
           (this->InitialResizeGeometry).Position.field0_0x0._s_0.X;
      local_98 = local_88;
      fVar6 = (local_88._4_4_ - fVar7) + this->InitialHeightAtResize;
      fVar7 = this->MaxHeight;
      if (fVar6 <= this->MaxHeight) {
        fVar7 = fVar6;
      }
      if (fVar7 <= fVar1) {
        fVar7 = fVar1;
      }
      this->TargetHeight = fVar7;
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      if (fVar7 <= fVar1) {
        fVar7 = fVar1;
      }
      this->CurrentHeight = fVar7;
      local_90 = TVar3._s_0;
      goto LAB_142dc4757;
    }
  }
  bVar4 = false;
LAB_142dc4757:
  FReply::FReply(__return_storage_ptr__,bVar4);
  return __return_storage_ptr__;
}

// OnPaint @ 142dc64f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDrawerOverlay::OnPaint
          (SDrawerOverlay *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  FSplitterStyle *pFVar4;
  FSlateBrush *pFVar5;
  TVector2<float>_u_0_s_0 TVar6;
  code *pcVar7;
  undefined8 uVar8;
  float afVar9 [2];
  float afVar10 [2];
  uint uVar11;
  FSlateColor *pFVar12;
  ISlateStyle *pIVar13;
  FName *pFVar14;
  byte bVar15;
  float fVar16;
  undefined1 auStackY_1c8 [32];
  undefined8 local_188;
  TVector2<float>_u_0_s_0 local_180;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  FLinearColor_u_0 local_168;
  TVector2<float>_u_0_s_0 local_158;
  FLinearColor_u_0 local_150;
  TTransform2<float> local_140;
  FSlateRect *local_128;
  TVector2<float>_u_0 local_120;
  float local_118;
  undefined8 local_114;
  TVector2<float>_u_0 local_10c;
  float local_104 [2];
  float afStack_fc [2];
  TVector2<float>_u_0 local_f4;
  byte local_ec;
  TVector2<float>_u_0 local_e8;
  float local_e0;
  TVector2<float>_u_0_s_0 local_dc;
  TTransform2<float> local_cc;
  byte local_b4;
  TVector2<float>_u_0 local_b0;
  undefined4 local_a8;
  TVector2<float>_u_0 local_a4;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  byte local_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170 = (FDeprecateSlateVector2D)param_1;
  local_128 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_int___cdecl_SDrawerOverlay::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_int___cdecl_SDrawerOverlay::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_int___cdecl_SDrawerOverlay::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pIVar13 = FAppStyle::Get();
      pcVar7 = *(code **)((longlong)*pIVar13 + 0x40);
      pFVar14 = ::FName::FName((FName *)&local_188,"Colors.Foldout");
      (*pcVar7)(pIVar13,&`public:_virtual_int___cdecl_SDrawerOverlay::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                         ::__l2::ShadowColor,*pFVar14,0);
      _Init_thread_footer(&`public:_virtual_int___cdecl_SDrawerOverlay::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  GetRenderTransformedGeometry(this,(FGeometry *)&local_e8._s_0,param_2);
  GetResizeHandleGeometry(this,(FGeometry *)&local_b0._s_0,param_2);
  if ((this->bIsResizing != false) || (this->bIsResizeHandleHovered != false)) {
    pFVar4 = this->SplitterStyle;
    EVar2 = (pFVar4->HandleHighlightBrush).TintColor.ColorUseRule;
    pFVar12 = &(pFVar4->HandleHighlightBrush).TintColor;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        pFVar12 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar12);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        pFVar12 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar12 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    uVar8 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
    local_120 = local_a4;
    local_10c = local_b0;
    local_168._s_0.R = (float)*(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
    local_168._s_0.G =
         (float)((ulonglong)*(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0 >> 0x20);
    local_168._s_0.B = (float)uVar8;
    local_168._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
    local_114 = 0;
    local_ec = (local_7c & 1) * '\x02' | local_ec & 0xfc;
    local_118 = (float)local_a8;
    local_104[0] = (float)(undefined4)local_94;
    local_104[1] = (float)local_94._4_4_;
    afStack_fc[0] = (float)(undefined4)uStack_8c;
    afStack_fc[1] = (float)uStack_8c._4_4_;
    local_f4 = (TVector2<float>_u_0)local_84;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_120._s_0,&pFVar4->HandleHighlightBrush,None,
               (FLinearColor *)&local_168._s_0);
  }
  EVar2 = (this->ShadowBrush->TintColor).ColorUseRule;
  pFVar12 = &this->ShadowBrush->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar12 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar12);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar12 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar12 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  uVar8 = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
  local_120._s_0 = local_dc;
  local_10c = local_e8;
  local_168._s_0.R = (float)*(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
  local_168._s_0.G =
       (float)((ulonglong)*(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0 >> 0x20);
  local_168._s_0.B = (float)uVar8;
  local_168._s_0.A = (float)((ulonglong)uVar8 >> 0x20);
  local_114 = 0;
  local_ec = (local_b4 & 1) * '\x02' | local_ec & 0xfc;
  local_118 = local_e0;
  local_104[0] = local_cc.M.M[0][0];
  local_104[1] = local_cc.M.M[0][1];
  afStack_fc[0] = local_cc.M.M[1][0];
  afStack_fc[1] = local_cc.M.M[1][1];
  local_f4 = local_cc.Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_120._s_0,this->ShadowBrush,None,
             (FLinearColor *)&local_168._s_0);
  EVar2 = (this->BackgroundBrush->TintColor).ColorUseRule;
  pFVar12 = &this->BackgroundBrush->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar12 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar12);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar12 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar12 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  fVar16 = local_e0;
  afVar10 = _UNK_15076b188;
  afVar9 = ___xmm_3f80000000000000000000003f800000;
  local_150._0_8_ = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
  local_150._8_8_ = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
  local_180 = (this->ShadowOffset).field0_0x0._s_0;
  fVar1 = (this->ShadowOffset).field0_0x0._s_0.X;
  bVar15 = local_b4 & 1;
  pFVar5 = this->BackgroundBrush;
  local_188._0_4_ = SUB84(param_2->Size,0);
  local_168._s_0.G = local_dc.X;
  local_168._s_0.B = local_dc.Y;
  local_188._4_4_ = (uint)this->TargetHeight;
  local_188._0_4_ = (uint)(local_188._0_4_ - (fVar1 + fVar1));
  local_178 = local_180.X * local_e0 + local_168._s_0.G;
  fStack_174 = local_180.Y * local_e0 + local_168._s_0.B;
  local_168._s_0.R = __xmm_3f80000000000000000000003f800000._0_4_;
  local_168._s_0.G = __xmm_3f80000000000000000000003f800000._4_4_;
  local_168._s_0.B = UNK_15076b188._0_4_;
  local_168._s_0.A = UNK_15076b188._4_4_;
  local_158 = local_180;
  Concatenate<TTransform2<float>_>(&local_140,(TTransform2<float> *)&local_168._s_0,&local_cc);
  local_120._s_0.Y = fStack_174;
  local_120._s_0.X = local_178;
  local_10c = local_188;
  local_118 = fVar16;
  local_ec = local_ec & 0xfc | bVar15 * '\x02';
  local_114 = 0;
  local_104[0] = local_140.M.M[0][0];
  local_104[1] = local_140.M.M[0][1];
  afStack_fc[0] = local_140.M.M[1][0];
  afStack_fc[1] = local_140.M.M[1][1];
  local_f4 = local_140.Trans.field0_0x0;
  FSlateDrawElement::MakeBox
            (param_4,param_5,(FPaintGeometry *)&local_120._s_0,pFVar5,None,
             (FLinearColor *)&local_150._s_0);
  uVar11 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,(FPaintArgs *)local_170,(FGeometry *)&local_e8._s_0,
                      local_128,param_4,param_5,param_6,param_7);
  EVar2 = (this->ShadowBrush->TintColor).ColorUseRule;
  pFVar12 = &this->ShadowBrush->TintColor;
  local_140.M.M[0] = afVar9;
  local_140.M.M[1] = afVar10;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar12 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar12);
      local_140.M.M[0] = ___xmm_3f80000000000000000000003f800000;
      local_140.M.M[1] = _UNK_15076b188;
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar12 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar12 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_150._0_8_ = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
  local_150._8_8_ = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
  local_170 = param_2->Size;
  local_180.Y = (this->ShadowOffset).field0_0x0._s_0.Y;
  fVar1 = param_2->Scale;
  pFVar5 = this->ShadowBrush;
  fVar16 = local_170._4_4_ - local_180.Y;
  TVar6 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_168._s_0.G = TVar6.X;
  local_168._s_0.B = TVar6.Y;
  local_188 = (TVector2<float>_u_0)((ulonglong)(uint)fVar16 << 0x20);
  local_180.X = (float)local_170;
  local_140.Trans.field0_0x0 = local_188;
  local_178 = fVar1 * 0.0 + local_168._s_0.G;
  fStack_174 = fVar16 * fVar1 + local_168._s_0.B;
  Concatenate<TTransform2<float>_>
            ((TTransform2<float> *)&local_168._s_0,&local_140,&param_2->AccumulatedRenderTransform);
  local_120._s_0.Y = fStack_174;
  local_120._s_0.X = local_178;
  local_104 = (float  [2])CONCAT44(local_168._s_0.G,local_168._s_0.R);
  afStack_fc = (float  [2])CONCAT44(local_168._s_0.A,local_168._s_0.B);
  local_10c._s_0 = local_180;
  local_ec = param_2->bHasRenderTransform * '\x02' | local_ec & 0xfc;
  local_114 = 0;
  local_f4._s_0 = local_158;
  local_118 = fVar1;
  FSlateDrawElement::MakeBox
            (param_4,uVar11,(FPaintGeometry *)&local_120._s_0,pFVar5,None,
             (FLinearColor *)&local_150._s_0);
  EVar2 = (this->BorderBrush->TintColor).ColorUseRule;
  pFVar12 = &this->BorderBrush->TintColor;
  if (EVar2 != UseColor_Specified) {
    if (EVar2 == UseColor_ColorTable) {
      pFVar12 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar12);
    }
    else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
      pFVar12 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar12 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_150._0_8_ = *(undefined8 *)&(pFVar12->SpecifiedColor).field0_0x0;
  local_150._8_8_ = *(undefined8 *)((longlong)&(pFVar12->SpecifiedColor).field0_0x0 + 8);
  local_188._0_4_ = (uint)*(float *)&(this->ShadowOffset).field0_0x0;
  local_188._4_4_ = *(uint *)((longlong)&(this->ShadowOffset).field0_0x0 + 4);
  local_170 = param_2->Size;
  fVar1 = (this->ShadowOffset).field0_0x0._s_0.X;
  pFVar5 = this->BorderBrush;
  local_168._s_0.G = local_dc.X;
  local_168._s_0.B = local_dc.Y;
  local_180.Y = this->TargetHeight;
  local_180.X = (float)local_170 - (fVar1 + fVar1);
  local_178 = (float)local_188._0_4_ * local_e0 + local_168._s_0.G;
  fStack_174 = (float)local_188._4_4_ * local_e0 + local_168._s_0.B;
  local_140.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_140.M.M[0][1] = _UNK_15076b184;
  local_140.M.M[1][0] = _UNK_15076b188;
  local_140.M.M[1][1] = _UNK_15076b18c;
  local_140.Trans.field0_0x0 = local_188;
  Concatenate<TTransform2<float>_>((TTransform2<float> *)&local_168._s_0,&local_140,&local_cc);
  local_120._s_0.Y = fStack_174;
  local_120._s_0.X = local_178;
  local_104 = (float  [2])CONCAT44(local_168._s_0.G,local_168._s_0.R);
  afStack_fc = (float  [2])CONCAT44(local_168._s_0.A,local_168._s_0.B);
  local_10c._s_0 = local_180;
  local_118 = local_e0;
  local_ec = local_ec & 0xfc | (local_b4 & 1) * '\x02';
  local_114 = 0;
  local_f4._s_0 = local_158;
  FSlateDrawElement::MakeBox
            (param_4,uVar11 + 1,(FPaintGeometry *)&local_120._s_0,pFVar5,None,
             (FLinearColor *)&local_150._s_0);
  return uVar11 + 1;
}

// SupportsKeyboardFocus @ 142dda5f0

bool __thiscall SDrawerOverlay::SupportsKeyboardFocus(SDrawerOverlay *this)

{
  return true;
}

// UpdateDrawerAnimation @ 142ddcbb0

EActiveTimerReturnType __thiscall
SDrawerOverlay::UpdateDrawerAnimation(SDrawerOverlay *this,double param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  FSlateThrottleManager *this_00;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  fVar3 = FCurveSequence::GetLerp(&this->DrawerEasingCurve);
  fVar1 = this->TargetHeight;
  fVar4 = fVar1 * fVar3;
  if (fVar1 <= fVar1 * fVar3) {
    fVar4 = fVar1;
  }
  if (fVar4 <= this->MinHeight) {
    fVar4 = this->MinHeight;
  }
  this->CurrentHeight = fVar4;
  bVar2 = FCurveSequence::IsPlaying(&this->DrawerEasingCurve);
  if (!bVar2) {
    bVar2 = FCurveSequence::IsAtStart(&this->DrawerEasingCurve);
    if (bVar2) {
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnDismissComplete);
    }
    this_00 = FSlateThrottleManager::Get();
    FSlateThrottleManager::LeaveResponsiveMode(this_00,&this->AnimationThrottle);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->DrawerOpenCloseTimer != (TSharedPtr<FActiveTimerHandle,1> *)&local_18) {
      (this->DrawerOpenCloseTimer).Object = (FActiveTimerHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DrawerOpenCloseTimer).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return Stop;
  }
  return Continue;
}

