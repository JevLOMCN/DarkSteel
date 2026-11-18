// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 77

// StaticClass @ 14b78a1d0

UClass * __cdecl UDS_W_WindowFrame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_WindowFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_WindowFrame",
               &Z_Registration_Info_UClass_UDS_W_WindowFrame.InnerSingleton,
               StaticRegisterNativesUDS_W_WindowFrame,0xa80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_WindowFrame>,
               InternalVTableHelperCtorCaller<UDS_W_WindowFrame>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_WindowFrame.InnerSingleton;
}

// UDS_W_WindowFrame @ 14b78d9b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_WindowFrame * __thiscall
UDS_W_WindowFrame::UDS_W_WindowFrame(UDS_W_WindowFrame *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->OutsideButtonSize = 30.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->TitleBarHeight = 94.0;
  (this->ContentsPanelPadding).Left = 0.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ContentsPanelPadding).Top = 0.0;
  (this->ContentsPanelPadding).Right = 0.0;
  (this->ContentsPanelPadding).Bottom = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FVar1 = FLinearColor::Red;
  this->GuideLineThickness = 1.0;
  this->GuideLinePossibleDistance = 10.0;
  (this->GuideLineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FDS_GuideLineInfo::FDS_GuideLineInfo(&this->GuideLine_Vrt);
  FDS_GuideLineInfo::FDS_GuideLineInfo(&this->GuideLine_Hrz);
  (this->ContentsSlotPosOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ContentsSlotSizeOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ContentsWidgetPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WindowInfo).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FrameBtnEventInfo).FrameBtnType = LeftTop;
  (this->FrameBtnEventInfo).bIsPressed = false;
  (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->UIScale = 1.0;
  (this->CurAnchor).Minimum.field0_0x0._s_0.X = 0.0;
  (this->CurAnchor).Minimum.field0_0x0._s_0.Y = 0.0;
  (this->CurAnchor).Maximum.field0_0x0._s_0.X = 0.0;
  (this->CurAnchor).Maximum.field0_0x0._s_0.Y = 0.0;
  this->bIsAutoSize = false;
  this->ZOrder = 0;
  this->SavedWindowFrameVisibility = SelfHitTestInvisible;
  (this->WindowFramePos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowFramePos).ArrayNum = 0;
  (this->WindowFramePos).ArrayMax = 0;
  (this->ViewportPos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewportPos).ArrayNum = 0;
  (this->ViewportPos).ArrayMax = 0;
  *(undefined8 *)&this->DelegateSizeUpdated = 0;
  *(undefined8 *)&(this->DelegateSizeUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->DelegateSizeUpdated).field_0x10 = 0;
  return this;
}

// UDS_W_WindowFrame @ 14b78db30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_WindowFrame * __thiscall
UDS_W_WindowFrame::UDS_W_WindowFrame(UDS_W_WindowFrame *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->OutsideButtonSize = 30.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->TitleBarHeight = 94.0;
  (this->ContentsPanelPadding).Left = 0.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->ContentsPanelPadding).Top = 0.0;
  (this->ContentsPanelPadding).Right = 0.0;
  (this->ContentsPanelPadding).Bottom = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FVar1 = FLinearColor::Red;
  this->GuideLineThickness = 1.0;
  this->GuideLinePossibleDistance = 10.0;
  (this->GuideLineColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FDS_GuideLineInfo::FDS_GuideLineInfo(&this->GuideLine_Vrt);
  FDS_GuideLineInfo::FDS_GuideLineInfo(&this->GuideLine_Hrz);
  (this->ContentsSlotPosOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ContentsSlotSizeOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ContentsWidgetPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WindowInfo).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FrameBtnEventInfo).FrameBtnType = LeftTop;
  (this->FrameBtnEventInfo).bIsPressed = false;
  (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->UIScale = 1.0;
  (this->CurAnchor).Minimum.field0_0x0._s_0.X = 0.0;
  (this->CurAnchor).Minimum.field0_0x0._s_0.Y = 0.0;
  (this->CurAnchor).Maximum.field0_0x0._s_0.X = 0.0;
  (this->CurAnchor).Maximum.field0_0x0._s_0.Y = 0.0;
  this->bIsAutoSize = false;
  this->ZOrder = 0;
  this->SavedWindowFrameVisibility = SelfHitTestInvisible;
  (this->WindowFramePos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowFramePos).ArrayNum = 0;
  (this->WindowFramePos).ArrayMax = 0;
  (this->ViewportPos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewportPos).ArrayNum = 0;
  (this->ViewportPos).ArrayMax = 0;
  *(undefined8 *)&this->DelegateSizeUpdated = 0;
  *(undefined8 *)&(this->DelegateSizeUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->DelegateSizeUpdated).field_0x10 = 0;
  return this;
}

// ~UDS_W_WindowFrame @ 14b78e4b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::~UDS_W_WindowFrame(UDS_W_WindowFrame *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DelegateSizeUpdated);
  pvVar1 = *(void **)&(this->DelegateSizeUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DelegateSizeUpdated);
  pFVar2 = (this->ViewportPos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->WindowFramePos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GuideLine_Hrz).GuideLine.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GuideLine_Vrt).GuideLine.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// AdjustWindowTitleType @ 14b78f5d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::AdjustWindowTitleType(UDS_W_WindowFrame *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UDS_W_WindowFrame_AdjustWindowTitleType);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014b78f5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// GetPrivateStaticClass @ 14b7908b0

UClass * __cdecl UDS_W_WindowFrame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_WindowFrame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_WindowFrame",
               &Z_Registration_Info_UClass_UDS_W_WindowFrame.InnerSingleton,
               StaticRegisterNativesUDS_W_WindowFrame,0xa80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_WindowFrame>,
               InternalVTableHelperCtorCaller<UDS_W_WindowFrame>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_WindowFrame.InnerSingleton;
}

// StaticRegisterNativesUDS_W_WindowFrame @ 14b790c80

void __cdecl UDS_W_WindowFrame::StaticRegisterNativesUDS_W_WindowFrame(void)

{
  return;
}

// AddContentsWidget @ 14bc872d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_WindowFrame::AddContentsWidget
          (UDS_W_WindowFrame *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> param_2)

{
  TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *this_00;
  int iVar1;
  UPanelWidget *this_01;
  double dVar2;
  bool bVar3;
  EDS_WindowLayerGroupType EVar4;
  UDS_HudManager *pUVar5;
  UObject *pUVar6;
  UDS_WindowInfoBase *pUVar7;
  TVector2<double> *pTVar8;
  UWidget *pUVar9;
  UPanelWidget *pUVar10;
  UOverlaySlot *this_02;
  UClass *pUVar11;
  FAnchors *pFVar12;
  FLinearColor_u_0_s_0 *pFVar13;
  UCanvasPanelSlot *pUVar14;
  float fVar15;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  ESlateVisibility local_res20 [8];
  FLinearColor_u_0 local_78;
  FAnchors local_68;
  
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return false;
  }
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
    return false;
  }
  this_00 = &this->WindowInfo;
  this_00->WeakPtr = local_res18;
  pUVar5 = UDS_HudManager::GetInst();
  if (pUVar5 == (UDS_HudManager *)0x0) {
LAB_14bc873b8:
    local_res20[0] = SelfHitTestInvisible;
LAB_14bc873bc:
    SetOnlyHudVisibility(this,local_res20);
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar3 = UDS_HudManager::IsHudWindow(pUVar5,(EDS_WindowLayerGroupType *)(pUVar6 + 2));
    if ((!bVar3) || (pUVar5->bIsOpenHud == false)) goto LAB_14bc873b8;
    local_78._s_0.B = 0.0;
    local_78._0_8_ = OnHudShowEvent;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_W_WindowFrame>
              (&pUVar5->OnHudShowDelegate,(UDS_W_WindowFrame *)local_res20,(pmf_bfbe671c *)this);
    EVar4 = UDS_HudManager::GetTopHudHideWindowLayerGroupType(pUVar5);
    bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar3) {
      pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (EVar4 < *(EDS_WindowLayerGroupType *)(pUVar6 + 2)) goto LAB_14bc873b8;
      local_res20[0] = Collapsed;
      goto LAB_14bc873bc;
    }
  }
  pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pTVar8 = UDS_WindowInfoBase::GetWindowDefaultSize(pUVar7,(TVector2<double> *)&local_78._s_0);
  if ((pTVar8->field0_0x0)._s_0.X == 0.0) {
LAB_14bc873f9:
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (6 < (byte)pUVar6[2].field_0x3 - 10) {
      local_78 = FLinearColor::Transparent.field0_0x0;
      UUserWidget::SetColorAndOpacity((UUserWidget *)this,(FLinearColor *)&local_78._s_0);
      bVar3 = true;
      goto LAB_14bc8742a;
    }
  }
  else {
    pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pTVar8 = UDS_WindowInfoBase::GetWindowDefaultSize(pUVar7,(TVector2<double> *)&local_78._s_0);
    if ((pTVar8->field0_0x0)._s_0.Y == 0.0) goto LAB_14bc873f9;
  }
  bVar3 = false;
LAB_14bc8742a:
  this->bIsAutoSize = bVar3;
  if ((this->Panel_FrameBtn != (UWidget *)0x0) &&
     (bVar3 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0),
     !bVar3)) {
    (**(code **)(this->Panel_FrameBtn->_padding_ + 0x2c0))();
  }
  TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  bVar3 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (((!bVar3) && (pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr), pUVar6[2].field_0x2 != '\0'))
     && (pUVar5 = UDS_HudManager::GetInst(), pUVar5 != (UDS_HudManager *)0x0)) {
    local_78._s_0.B = 0.0;
    local_78._0_8_ = OnChangedUIScale;
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &pUVar5->UIScaleDelegate,(UDS_W_WindowFrame *)local_res20,(pmf_a8f1a1cf *)this);
    fVar15 = UDS_HudManager::GetUIScale(pUVar5);
    if ((0.0 < fVar15) && ((UScaleBox *)this->Scl_Main != (UScaleBox *)0x0)) {
      this->UIScale = fVar15;
      UScaleBox::SetUserSpecifiedScale((UScaleBox *)this->Scl_Main,fVar15);
      UpdateWindowFramePos(this);
    }
  }
  if (this->Panel_Contents == (UPanelWidget *)0x0) {
    return false;
  }
  pUVar9 = (UWidget *)FWeakObjectPtr::Get(&local_res10);
  pUVar10 = UWidget::GetParent(pUVar9);
  this_01 = this->Panel_Contents;
  if (this_01 != pUVar10) {
    pUVar9 = (UWidget *)FWeakObjectPtr::Get(&local_res10);
    this_02 = (UOverlaySlot *)UPanelWidget::AddChild(this_01,pUVar9);
    if (this_02 == (UOverlaySlot *)0x0) {
      return false;
    }
    pUVar11 = Z_Construct_UClass_UOverlaySlot_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if (*(int *)(this_02->_padding_ + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar11->_padding_) {
      return false;
    }
    UOverlaySlot::SetHorizontalAlignment(this_02,HAlign_Fill);
    UOverlaySlot::SetVerticalAlignment(this_02,VAlign_Fill);
  }
  (this->ContentsWidgetPtr).WeakPtr = local_res10;
  if (this->WindowFrameSlot == (UCanvasPanelSlot *)0x0) {
    return false;
  }
  pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar12 = UDS_WindowInfoBase::GetWindowAnchor(pUVar7,&local_68);
  SetAnchors(this,pFVar12);
  UCanvasPanelSlot::SetAutoSize(this->WindowFrameSlot,this->bIsAutoSize);
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if (pUVar6[2].field_0x3 == '\x10') {
    (this->ContentsSlotPosOffset).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (this->ContentsSlotSizeOffset).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pTVar8 = UDS_WindowInfoBase::GetWindowPosition(pUVar7,(TVector2<double> *)&local_78._s_0);
  pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  if ((*(double *)&pUVar6[2].field_0x8 == (pTVar8->field0_0x0)._s_0.X) &&
     (*(double *)&pUVar6[2].field_0x10 == (pTVar8->field0_0x0)._s_0.Y)) {
    pUVar14 = this->WindowFrameSlot;
    pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    dVar2 = *(double *)&pUVar6[2].field_0x10 - (this->ContentsSlotPosOffset).field0_0x0._s_0.Y;
    local_78._s_0.B = (float)SUB84(dVar2,0);
    local_78._0_8_ =
         *(double *)&pUVar6[2].field_0x8 - (this->ContentsSlotPosOffset).field0_0x0._s_0.X;
    local_78._s_0.A = (float)(int)((ulonglong)dVar2 >> 0x20);
    UCanvasPanelSlot::SetPosition(pUVar14,(TVector2<double> *)&local_78._s_0);
  }
  else {
    pUVar14 = this->WindowFrameSlot;
    pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
    pFVar13 = (FLinearColor_u_0_s_0 *)
              UDS_WindowInfoBase::GetWindowPosition(pUVar7,&local_68.Minimum);
    local_78._s_0 = *pFVar13;
    UCanvasPanelSlot::SetPosition(pUVar14,(TVector2<double> *)&local_78._s_0);
  }
  if (this->bIsAutoSize == true) {
    SetSize(this,&UE::Math::TVector2<double>::ZeroVector);
    return true;
  }
  pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  pTVar8 = UDS_WindowInfoBase::GetWindowSize(pUVar7,&local_68.Minimum);
  pUVar6 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  if ((*(double *)&pUVar6[2].field_0x18 == (pTVar8->field0_0x0)._s_0.X) &&
     (*(double *)&pUVar6[2].field_0x20 == (pTVar8->field0_0x0)._s_0.Y)) {
    pUVar14 = this->WindowFrameSlot;
    pUVar6 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
    dVar2 = *(double *)&pUVar6[2].field_0x20 + (this->ContentsSlotSizeOffset).field0_0x0._s_0.Y;
    local_78._s_0.B = (float)SUB84(dVar2,0);
    local_78._0_8_ =
         *(double *)&pUVar6[2].field_0x18 + (this->ContentsSlotSizeOffset).field0_0x0._s_0.X;
    local_78._s_0.A = (float)(int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    pUVar14 = this->WindowFrameSlot;
    pUVar7 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
    pFVar13 = (FLinearColor_u_0_s_0 *)UDS_WindowInfoBase::GetWindowSize(pUVar7,&local_68.Minimum);
    local_78._s_0 = *pFVar13;
  }
  UCanvasPanelSlot::SetSize(pUVar14,(TVector2<double> *)&local_78._s_0);
  FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  return true;
}

// CheckWindowFramePos @ 14bc8beb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::CheckWindowFramePos
          (UDS_W_WindowFrame *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  UDS_WindowManager *this_00;
  FGeometry *pFVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float local_res20;
  float fStackX_24;
  double dVar10;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    pFVar3 = UDS_WindowManager::GetRootWidgetGeometry(this_00);
    fVar4 = __real_3f800000 / this->UIScale;
    dVar1 = (this->CurAnchor).Minimum.field0_0x0._s_0.Y;
    fStackX_24 = SUB84(pFVar3->Size,4);
    local_res20 = SUB84(pFVar3->Size,0);
    dVar2 = (this->CurAnchor).Minimum.field0_0x0._s_0.X;
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (double)(fVar4 * local_res20);
    dVar7 = (double)(fVar4 * fStackX_24);
    dVar10 = dVar2 * dVar6;
    dVar9 = dVar1 * dVar7;
    uVar12 = SUB84(dVar10,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)dVar10 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar8 = SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)dVar9 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar10 = (double)CONCAT44(uVar11,uVar8);
    dVar2 = (__real_3ff0000000000000 - dVar2) * dVar6 - (param_2->field0_0x0)._s_0.X;
    dVar1 = (__real_3ff0000000000000 - dVar1) * dVar7 - (param_2->field0_0x0)._s_0.Y;
    if (dVar5 < (double)CONCAT44(uVar13,uVar12)) {
      (param_1->field0_0x0)._s_0.X = (double)CONCAT44(uVar13,uVar12);
      dVar5 = (double)CONCAT44(uVar13,uVar12);
    }
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    if (dVar6 < dVar10) {
      (param_1->field0_0x0)._s_0.Y = dVar10;
      dVar6 = (double)CONCAT44(uVar11,uVar8);
    }
    if (dVar2 < dVar5) {
      (param_1->field0_0x0)._s_0.X = dVar2;
    }
    if (dVar1 < dVar6) {
      (param_1->field0_0x0)._s_0.Y = dVar1;
    }
  }
  return;
}

// CheckWindowFrameSize @ 14bc8c010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::CheckWindowFrameSize
          (UDS_W_WindowFrame *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowInfo,(void *)0x0);
  if (!bVar3) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.Y;
    (param_2->field0_0x0)._s_0.X =
         (param_1->field0_0x0)._s_0.X -
         (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1 - dVar2;
  }
  return;
}

// CloseBtn_OnClicked @ 14bc8c5d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::CloseBtn_OnClicked(UDS_W_WindowFrame *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc8c5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))();
  return;
}

// CloseMyself @ 14bc8c630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::CloseMyself(UDS_W_WindowFrame *this)

{
  int iVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr *pFVar5;
  undefined8 local_res8;
  FWeakObjectPtr local_res10;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->WindowInfo).WeakPtr);
  if (!bVar2) {
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  if (pUVar3[2].field_0x1 == '\x01') {
    local_res8 = (UObject *)((ulonglong)local_res8._4_4_ << 0x20);
    pFVar5 = &local_res10;
    local_res10 = (FWeakObjectPtr)((ulonglong)(uint)local_res10.ObjectSerialNumber << 0x20);
    goto LAB_14bc8c758;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  if (pUVar3[2].field_0x1 != '\x02') {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
LAB_14bc8c6e0:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_MultipleWindowInfo_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14bc8c6e0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
  bVar2 = TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MultipleWindowInfo,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (bVar2) {
    return;
  }
  local_res8 = (UObject *)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pFVar5 = (FWeakObjectPtr *)&pUVar3[9].field_0x20;
LAB_14bc8c758:
  UDS_WindowManager::CloseWindow
            (this_00,(EDS_WindowWidget)this->_padding_,(uint *)pFVar5,(float *)&local_res8);
  return;
}

// ComputeAnchor @ 14bc8ce70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::ComputeAnchor(UDS_W_WindowFrame *this)

{
  return;
}

// FrameBtn_OnHovered_CB @ 14bc9e7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_CB(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeUpDown);
  return;
}

// FrameBtn_OnHovered_CC @ 14bc9e7f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_CC(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,Default);
  return;
}

// FrameBtn_OnHovered_CT @ 14bc9e800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_CT(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeUpDown);
  return;
}

// FrameBtn_OnHovered_LB @ 14bc9e810

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_LB(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeSouthWest);
  return;
}

// FrameBtn_OnHovered_LC @ 14bc9e820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_LC(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeLeftRight);
  return;
}

// FrameBtn_OnHovered_LT @ 14bc9e830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_LT(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeSouthEast);
  return;
}

// FrameBtn_OnHovered_RB @ 14bc9e840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_RB(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeSouthEast);
  return;
}

// FrameBtn_OnHovered_RC @ 14bc9e850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_RC(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeLeftRight);
  return;
}

// FrameBtn_OnHovered_RT @ 14bc9e860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnHovered_RT(UDS_W_WindowFrame *this)

{
  SetMouseCursor(this,ResizeSouthWest);
  return;
}

// FrameBtn_OnPressed_CB @ 14bc9e870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_CB(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,CenterBottom);
  return;
}

// FrameBtn_OnPressed_CC @ 14bc9e880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_CC(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,Center);
  return;
}

// FrameBtn_OnPressed_CT @ 14bc9e890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_CT(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,CenterTop);
  return;
}

// FrameBtn_OnPressed_LB @ 14bc9e8a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_LB(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,LeftBottom);
  return;
}

// FrameBtn_OnPressed_LC @ 14bc9e8b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_LC(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,LeftCenter);
  return;
}

// FrameBtn_OnPressed_LT @ 14bc9e8c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_LT(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,LeftTop);
  return;
}

// FrameBtn_OnPressed_RB @ 14bc9e8d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_RB(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,RightBottom);
  return;
}

// FrameBtn_OnPressed_RC @ 14bc9e8e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_RC(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,RightCenter);
  return;
}

// FrameBtn_OnPressed_RT @ 14bc9e8f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnPressed_RT(UDS_W_WindowFrame *this)

{
  SetFrameBtnEventInfo(this,RightTop);
  return;
}

// FrameBtn_OnReleased_CB @ 14bc9e900

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_CB(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,CenterBottom);
  return;
}

// FrameBtn_OnReleased_CC @ 14bc9e910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_CC(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,Center);
  return;
}

// FrameBtn_OnReleased_CT @ 14bc9e920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_CT(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,CenterTop);
  return;
}

// FrameBtn_OnReleased_LB @ 14bc9e930

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_LB(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,LeftBottom);
  return;
}

// FrameBtn_OnReleased_LC @ 14bc9e940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_LC(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,LeftCenter);
  return;
}

// FrameBtn_OnReleased_LT @ 14bc9e950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_LT(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,LeftTop);
  return;
}

// FrameBtn_OnReleased_RB @ 14bc9e960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_RB(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,RightBottom);
  return;
}

// FrameBtn_OnReleased_RC @ 14bc9e970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_RC(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,RightCenter);
  return;
}

// FrameBtn_OnReleased_RT @ 14bc9e980

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::FrameBtn_OnReleased_RT(UDS_W_WindowFrame *this)

{
  ResetFrameBtnEventInfo(this,RightTop);
  return;
}

// GetAnchor @ 14bc9e9a0

FAnchors * __cdecl
UDS_W_WindowFrame::GetAnchor(FAnchors *__return_storage_ptr__,EDS_WindowAnchorType param_1)

{
  switch(param_1) {
  case LeftTop:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.0;
    return __return_storage_ptr__;
  case LeftCenter:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.5;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.5;
    return __return_storage_ptr__;
  case LeftBottom:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case CenterTop:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.5;
    return __return_storage_ptr__;
  default:
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.5;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.5;
    return __return_storage_ptr__;
  case CenterBottom:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case RightTop:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    return __return_storage_ptr__;
  case RightCenter:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.5;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.5;
    return __return_storage_ptr__;
  case RightBottom:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case VerticalLeft:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case VerticalCenter:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 0.5;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case VerticalRight:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case HorizontalTop:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    return __return_storage_ptr__;
  case HorizontalCenter:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 0.5;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.5;
    return __return_storage_ptr__;
  case HorizontalBottom:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  case Full:
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = 1.0;
    return __return_storage_ptr__;
  }
}

// GetIsHudGroup @ 14bca05d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_W_WindowFrame::GetIsHudGroup(UDS_W_WindowFrame *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowInfo,(void *)0x0);
  if (bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
  return (bool)pUVar2[8].field_0x22;
}

// GetMouseViewportPos @ 14bca06a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_W_WindowFrame::GetMouseViewportPos
          (UDS_W_WindowFrame *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  UDS_WindowManager *this_00;
  FSlateApplication *pFVar5;
  float *pfVar6;
  FGeometry *pFVar7;
  TTransform2<float> *pTVar8;
  double dVar9;
  float fVar10;
  float local_50;
  float fStack_4c;
  TTransform2<float> local_48 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  }
  else {
    pFVar5 = FSlateApplication::Get();
    pfVar6 = (float *)(**(code **)(*(longlong *)pFVar5 + 0x68))(pFVar5,&local_50);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    pFVar7 = UDS_WindowManager::GetRootWidgetGeometry(this_00);
    pTVar8 = Inverse<TTransform2<float>_>(local_48,&pFVar7->AccumulatedRenderTransform);
    fVar10 = __real_3f800000 / this->UIScale;
    dVar4 = (double)(fVar10 * (fVar2 * (pTVar8->M).M[1][0] + fVar1 * (pTVar8->M).M[0][0] +
                              (pTVar8->Trans).field0_0x0._s_0.X));
    dVar9 = (double)(fVar10 * (fVar1 * (pTVar8->M).M[0][1] + fVar2 * (pTVar8->M).M[1][1] +
                              (pTVar8->Trans).field0_0x0._s_0.Y));
    if (dVar4 < 0.0) {
      dVar4 = 0.0;
    }
    if (dVar9 < 0.0) {
      dVar9 = 0.0;
    }
    local_50 = SUB84(pFVar7->Size,0);
    fStack_4c = SUB84(pFVar7->Size,4);
    if ((double)(local_50 * fVar10) < dVar4) {
      dVar4 = (double)(local_50 * fVar10);
    }
    if ((double)(fStack_4c * fVar10) < dVar9) {
      dVar9 = (double)(fStack_4c * fVar10);
    }
    TVar3._8_4_ = SUB84(dVar9,0);
    TVar3._s_0.X = dVar4;
    TVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar3;
  }
  return __return_storage_ptr__;
}

// GetWindowFramePos @ 14bca2af0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_W_WindowFrame::GetWindowFramePos(UDS_W_WindowFrame *this)

{
  return &this->WindowFramePos;
}

// GetZOrder @ 14bca2b80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_W_WindowFrame::GetZOrder(UDS_W_WindowFrame *this)

{
  return this->ZOrder;
}

// InitFrameButtonVisiblity @ 14bca46d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::InitFrameButtonVisiblity(UDS_W_WindowFrame *this)

{
  bool bVar1;
  
  if (this->Panel_FrameBtn != (UWidget *)0x0) {
    bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014bca4706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->Panel_FrameBtn->_padding_ + 0x2c0))(this->Panel_FrameBtn,1);
      return;
    }
  }
  return;
}

// InitTitleBarButtonVisiblity @ 14bca50e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::InitTitleBarButtonVisiblity(UDS_W_WindowFrame *this)

{
  TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(&this->WindowInfo,(void *)0x0);
  return;
}

// InitTitleBarString @ 14bca5100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::InitTitleBarString(UDS_W_WindowFrame *this)

{
  TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(&this->WindowInfo,(void *)0x0);
  return;
}

// InitUIScale @ 14bca5710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::InitUIScale(UDS_W_WindowFrame *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_HudManager *this_00;
  float fVar3;
  
  bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowInfo,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
    if (pUVar2[2].field_0x2 != '\0') {
      this_00 = UDS_HudManager::GetInst();
      if (this_00 != (UDS_HudManager *)0x0) {
        TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_WindowFrame>
                  ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *
                   )&this_00->UIScaleDelegate,(UDS_W_WindowFrame *)&stack0x00000008,
                   (pmf_a8f1a1cf *)this);
        fVar3 = UDS_HudManager::GetUIScale(this_00);
        if ((0.0 < fVar3) && ((UScaleBox *)this->Scl_Main != (UScaleBox *)0x0)) {
          this->UIScale = fVar3;
          UScaleBox::SetUserSpecifiedScale((UScaleBox *)this->Scl_Main,fVar3);
          UpdateWindowFramePos(this);
        }
      }
    }
  }
  return;
}

// IsMyChildSWidget @ 14bca8170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_WindowFrame::IsMyChildSWidget(UDS_W_WindowFrame *this,TSharedPtr<SWidget,1> *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  bool bVar7;
  SWidget *pSVar8;
  FSharedReferencer<1> local_30;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedPtr<SWidget,1> local_18;
  
  bVar7 = false;
  UWidget::GetCachedWidget((UWidget *)this,&local_18);
  local_30.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  pSVar8 = param_1->Object;
  if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar8 != (SWidget *)0x0) {
    do {
      if (pSVar8 == local_18.Object) {
        bVar7 = true;
        break;
      }
      if ((pSVar8 == (SWidget *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      local_20.ReferenceController =
           (pSVar8->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
      pSVar3 = (SWidget *)0x0;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = (local_20.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14bca8223;
          }
          LOCK();
          aVar6 = (local_20.ReferenceController)->SharedReferenceCount;
          bVar4 = aVar2 == aVar6;
          if (bVar4) {
            (local_20.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar6 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar6;
        } while (!bVar4);
        pSVar3 = (pSVar8->ParentWidgetPtr).Object;
      }
LAB_14bca8223:
      pSVar8 = pSVar3;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
    } while (pSVar8 != (SWidget *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar7;
}

// IsStretchedAnchor @ 14bca8ec0

bool __cdecl UDS_W_WindowFrame::IsStretchedAnchor(EDS_WindowAnchorType param_1)

{
  return (byte)(param_1 - VerticalLeft) < 7;
}

// MoveWindowPosForced @ 14bcaa790

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::MoveWindowPosForced(UDS_W_WindowFrame *this,TVector2<double> *param_1)

{
  bool bVar1;
  FAnchors *pFVar2;
  UDS_WindowInfoBase *this_00;
  TVector2<double>_u_0 local_28 [2];
  
  pFVar2 = GetAnchor((FAnchors *)&local_28[0]._s_0,LeftTop);
  SetAnchors(this,pFVar2);
  if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
    local_28[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
    local_28[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
    UCanvasPanelSlot::SetPosition(this->WindowFrameSlot,(TVector2<double> *)&local_28[0]._s_0);
    bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      UDS_WindowInfoBase::SetWindowPosition(this_00,param_1);
    }
  }
  return;
}

// MoveWindowPosForcedByAbsolutePos @ 14bcaa810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::MoveWindowPosForcedByAbsolutePos
          (UDS_W_WindowFrame *this,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnchors *pFVar3;
  FGeometry *pFVar4;
  UObject *pUVar5;
  TTransform2<float> *pTVar6;
  UDS_WindowInfoBase *this_00;
  float fVar7;
  float fVar8;
  undefined1 auStackY_108 [32];
  float local_c8;
  float fStack_c4;
  TVector2<double>_u_0 local_a8;
  TVector2<double>_u_0 local_98;
  TTransform2<float> local_88;
  FAnchors local_70;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (this->ImgPosition == (UDS_Image *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3608701263778152005>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Builtin\\DS_W_WindowFrame.cpp"
                       ,0x1bb,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = GetAnchor(&local_70,LeftTop);
    SetAnchors(this,pFVar3);
    pFVar4 = UWidget::GetCachedGeometry((UWidget *)this->ImgPosition);
    local_c8 = SUB84(pFVar4->Size,0);
    if ((local_c8 == (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) &&
       (fStack_c4 = SUB84(pFVar4->Size,4),
       fStack_c4 == (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y)) {
      SetPosition(this,param_1);
    }
    else {
      pUVar5 = (UObject *)(**(code **)(this->ImgPosition->_padding_ + 0x180))();
      UWidgetLayoutLibrary::GetViewportWidgetGeometry(&local_50,pUVar5);
      local_a8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      fVar7 = local_50.AccumulatedRenderTransform.M.M[0][0] * (float)local_a8._s_0.X +
              local_50.AccumulatedRenderTransform.M.M[1][0] * (float)local_a8._s_0.Y +
              local_50.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
      fVar8 = local_50.AccumulatedRenderTransform.M.M[0][1] * (float)local_a8._s_0.X +
              local_50.AccumulatedRenderTransform.M.M[1][1] * (float)local_a8._s_0.Y +
              local_50.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
      pTVar6 = Inverse<TTransform2<float>_>(&local_88,&pFVar4->AccumulatedRenderTransform);
      local_a8._s_0.X =
           (double)(fVar8 * (pTVar6->M).M[1][0] + fVar7 * (pTVar6->M).M[0][0] +
                   (pTVar6->Trans).field0_0x0._s_0.X);
      local_a8._s_0.Y =
           (double)(fVar7 * (pTVar6->M).M[0][1] + fVar8 * (pTVar6->M).M[1][1] +
                   (pTVar6->Trans).field0_0x0._s_0.Y);
      if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
        local_98._s_0.X = local_a8._s_0.X;
        local_98._s_0.Y = local_a8._s_0.Y;
        UCanvasPanelSlot::SetPosition(this->WindowFrameSlot,(TVector2<double> *)&local_98._s_0);
        bVar2 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                          (&this->WindowInfo,(void *)0x0);
        if (!bVar2) {
          this_00 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
          UDS_WindowInfoBase::SetWindowPosition(this_00,(TVector2<double> *)&local_a8._s_0);
        }
      }
    }
  }
  return;
}

// NativeConstruct @ 14bcab630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::NativeConstruct(UDS_W_WindowFrame *this)

{
  UPanelWidget *pUVar1;
  UDS_ScaleBox *pUVar2;
  UWidget *pUVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UCanvasPanelSlot *pUVar7;
  FName local_res8;
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar5 = ::FName::FName(&local_res8,"C_Scl_Main");
  UDS_UserWidget::BindWidget<UDS_ScaleBox>((UDS_UserWidget *)this,&this->Scl_Main,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"Panel_Screen");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>((UDS_UserWidget *)this,&this->Panel_Screen,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Panel_Main");
  UDS_UserWidget::BindWidget<UPanelWidget>((UDS_UserWidget *)this,&this->Panel_Main,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"Position");
  UDS_UserWidget::BindWidget<UDS_Image>((UDS_UserWidget *)this,&this->ImgPosition,*pFVar5);
  pUVar1 = this->Panel_Main;
  if (pUVar1 == (UPanelWidget *)0x0) goto LAB_14bcab716;
  if (pUVar1->_padding_ == 0) {
LAB_14bcab70d:
    pUVar7 = (UCanvasPanelSlot *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&pUVar1->_padding_,pUVar6);
    if (!bVar4) goto LAB_14bcab70d;
    pUVar7 = (UCanvasPanelSlot *)pUVar1->_padding_;
  }
  this->WindowFrameSlot = pUVar7;
LAB_14bcab716:
  pFVar5 = ::FName::FName(&local_res8,"C_Panel_Contents");
  UDS_UserWidget::BindWidget<UPanelWidget>((UDS_UserWidget *)this,&this->Panel_Contents,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Panel_FrameBtn");
  UDS_UserWidget::BindWidget<UWidget>((UDS_UserWidget *)this,&this->Panel_FrameBtn,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_LT");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_LT,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_LC");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_LC,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_LB");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_LB,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_CT");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_CT,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_CC");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_CC,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_CB");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_CB,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_RT");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_RT,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_RC");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_RC,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Btn_Frame_RB");
  UDS_UserWidget::BindWidget<UCommonButtonBase>((UDS_UserWidget *)this,&this->Btn_Frame_RB,*pFVar5);
  if (this->Btn_Frame_LT != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LT->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LT->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LT->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LT->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_LC != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LC->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LC->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LC->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LC->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_LB != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LB->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LB->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LB->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_LB->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_CT != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CT->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CT->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CT->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CT->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_CC != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CC->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CC->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CC->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CC->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_CB != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CB->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CB->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CB->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_CB->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_RT != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RT->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RT->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RT->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RT->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_RC != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RC->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RC->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RC->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RC->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  if (this->Btn_Frame_RB != (UCommonButtonBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RB->OnHoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RB->OnUnhoveredEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RB->OnPressedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->Btn_Frame_RB->OnReleasedEvent,(UDS_W_WindowFrame *)&local_res8,
               (pmf_d2dcfb46 *)this);
  }
  pFVar5 = ::FName::FName(&local_res8,"C_Panel_HUDEditMode");
  UDS_UserWidget::BindWidget<UWidget>((UDS_UserWidget *)this,&this->Panel_HUDEditMode,*pFVar5);
  pUVar2 = this->Scl_Main;
  if (pUVar2 != (UDS_ScaleBox *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,4);
  }
  pUVar1 = this->Panel_Contents;
  if (pUVar1 != (UPanelWidget *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,4);
  }
  pUVar3 = this->Panel_HUDEditMode;
  if (pUVar3 != (UWidget *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,1);
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->WindowFramePos,10,Default);
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->ViewportPos,10,Default);
  pFVar5 = ::FName::FName(&local_res8,"C_Panel_Debug");
  UDS_UserWidget::BindWidget<UPanelWidget>((UDS_UserWidget *)this,&this->Panel_Debug,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Txt_Position");
  UDS_UserWidget::BindWidget<UTextBlock>((UDS_UserWidget *)this,&this->Txt_Position,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Txt_Size");
  UDS_UserWidget::BindWidget<UTextBlock>((UDS_UserWidget *)this,&this->Txt_Size,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Txt_Anchor");
  UDS_UserWidget::BindWidget<UTextBlock>((UDS_UserWidget *)this,&this->Txt_Anchor,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Txt_ZOrder");
  UDS_UserWidget::BindWidget<UTextBlock>((UDS_UserWidget *)this,&this->Txt_ZOrder,*pFVar5);
  pFVar5 = ::FName::FName(&local_res8,"C_Txt_WindowID");
  UDS_UserWidget::BindWidget<UTextBlock>((UDS_UserWidget *)this,&this->Txt_WindowID,*pFVar5);
  pUVar1 = this->Panel_Debug;
  if (pUVar1 != (UPanelWidget *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,1);
  }
  return;
}

// NativeTick @ 14bcaed50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::NativeTick(UDS_W_WindowFrame *this,FGeometry *param_1,float param_2)

{
  UUserWidget::NativeTick((UUserWidget *)this,param_1,param_2);
  if (this->bIsAutoSize == true) {
    UpdateWindowFrameOnAutoSize(this);
  }
  if ((this->FrameBtnEventInfo).bIsPressed == true) {
    UpdateWindowFrameByDrag(this);
    return;
  }
  return;
}

// OnChangedUIScale @ 14bcb1b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::OnChangedUIScale(UDS_W_WindowFrame *this,float param_1)

{
  if ((0.0 < param_1) && ((UScaleBox *)this->Scl_Main != (UScaleBox *)0x0)) {
    this->UIScale = param_1;
    UScaleBox::SetUserSpecifiedScale((UScaleBox *)this->Scl_Main,param_1);
    UpdateWindowFramePos(this);
    return;
  }
  return;
}

// OnCloseInit @ 14bcb2680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::OnCloseInit(UDS_W_WindowFrame *this)

{
  bool bVar1;
  UObject *pUVar2;
  FSlateApplication *pFVar3;
  UDS_WindowManager *pUVar4;
  UDS_HudManager *pUVar5;
  
  UDS_UserWidget::OnCloseInit((UDS_UserWidget *)this);
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                    (&this->ContentsWidgetPtr,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ContentsWidgetPtr).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4e8))(pUVar2);
  }
  pFVar3 = FSlateApplication::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->FocusChangingDelegate,
             this);
  pUVar4 = UDS_WindowManager::GetInst();
  if (pUVar4 != (UDS_WindowManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->GameViewportResizedDelegate,this);
  }
  bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowInfo,(void *)0x0);
  if (!bVar1) {
    pUVar5 = UDS_HudManager::GetInst();
    if (pUVar5 != (UDS_HudManager *)0x0) {
      bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                        (&this->WindowInfo,(void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
        if (pUVar2[8].field_0x22 == '\x01') {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar5->IsHudEditModeDelegate,this);
        }
      }
      pUVar2 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      if (pUVar2[2].field_0x2 == '\x01') {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->UIScaleDelegate,
                   this);
      }
    }
  }
  pUVar5 = UDS_HudManager::GetInst();
  if (pUVar5 != (UDS_HudManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnHudShowDelegate,this
              );
  }
  return;
}

// OnFocusChanging @ 14bcb5010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::OnFocusChanging
          (UDS_W_WindowFrame *this,FFocusEvent *param_1,FWeakWidgetPath *param_2,
          TSharedPtr<SWidget,1> *param_3,FWidgetPath *param_4,TSharedPtr<SWidget,1> *param_5)

{
  code *pcVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  bool bVar4;
  atomic<int> aVar5;
  UDS_LogManager *pUVar6;
  UDS_WindowManager *this_00;
  UObject *pUVar7;
  FDS_WindowLayerGroupInfo *this_01;
  undefined1 auStackY_3f8 [32];
  FWeakObjectPtr local_3c8;
  SWidget *local_3c0;
  FSharedReferencer<1> local_3b8;
  undefined8 local_3b0;
  FSharedReferencer<1> local_3a8;
  TSharedPtr<SWidget,1> local_3a0;
  UDS_W_WindowFrame *local_390;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  bVar4 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowInfo,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_W_WindowFrame::OnFocusChanging",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_388.Ptr,0x367,L"WindowInfo is nullptr.");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
  }
  else {
    UWidget::GetCachedWidget((UWidget *)this,&local_3a0);
    local_3b8.ReferenceController = (param_5->SharedReferenceCount).ReferenceController;
    local_3c0 = param_5->Object;
    if (local_3b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_3c0 != (SWidget *)0x0) {
      do {
        pSVar3 = local_3c0;
        if (local_3c0 == local_3a0.Object) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3b8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3a0.SharedReferenceCount.ReferenceController);
          this_00 = UDS_WindowManager::GetInst();
          if (this_00 != (UDS_WindowManager *)0x0) {
            pUVar7 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
            this_01 = UDS_WindowManager::GetWindowLayerGroupInfo
                                (this_00,*(EDS_WindowLayerGroupType *)(pUVar7 + 2));
            if (this_01 != (FDS_WindowLayerGroupInfo *)0x0) {
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this != (UDS_W_WindowFrame *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              local_3c8.ObjectIndex = 0;
              local_3c8.ObjectSerialNumber = 0;
              local_390 = this;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this != (UDS_W_WindowFrame *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=(&local_3c8,(FObjectPtr)&local_390);
              FDS_WindowLayerGroupInfo::FocusWindow
                        (this_01,(TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>)local_3c8);
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_W_WindowFrame::OnFocusChanging",0x22,Yes);
            UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x386,L"layerGroup is nullptr.")
            ;
            if ((void *)local_148._padding_ == (void *)0x0) {
              return;
            }
            FMemory::Free((void *)local_148._padding_);
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_W_WindowFrame::OnFocusChanging",0x22,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_268.Ptr,0x37f,L"windowMng is nullptr.");
          if ((void *)local_268._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_268._padding_);
          return;
        }
        if ((local_3c0 == (SWidget *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_3a8.ReferenceController =
             (pSVar3->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        local_3c0 = (SWidget *)0x0;
        if (local_3a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = (local_3a8.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_3a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14bcb5179;
            }
            LOCK();
            aVar5 = (local_3a8.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar2 == aVar5;
            if (bVar4) {
              (local_3a8.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar4);
          local_3c0 = (pSVar3->ParentWidgetPtr).Object;
        }
LAB_14bcb5179:
        local_3b0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3b8,&local_3a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a8.ReferenceController);
      } while (local_3c0 != (SWidget *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a0.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnGameViewportResized @ 14bcb5d30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::OnGameViewportResized(UDS_W_WindowFrame *this,TIntPoint<int> *param_1)

{
  return;
}

// OnHudShowEvent @ 14bcb61d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::OnHudShowEvent(UDS_W_WindowFrame *this,EDS_WindowLayerGroupType *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  ESlateVisibility local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WindowInfo).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
    local_res8[0] = SelfHitTestInvisible;
    if (*(EDS_WindowLayerGroupType *)(pUVar2 + 2) <= *param_1) {
      local_res8[0] = Collapsed;
    }
    SetOnlyHudVisibility(this,local_res8);
  }
  return;
}

// OnOpenInit @ 14bcb8260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::OnOpenInit(UDS_W_WindowFrame *this)

{
  bool bVar1;
  UObject *pUVar2;
  FSlateApplication *pFVar3;
  UDS_WindowManager *pUVar4;
  
  UDS_UserWidget::OnOpenInit((UDS_UserWidget *)this);
  bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                    (&this->ContentsWidgetPtr,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ContentsWidgetPtr).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x4e0))(pUVar2);
  }
  pFVar3 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_W_WindowFrame>
            ((TMulticastDelegateRegistration<void___cdecl(FFocusEvent_const_&,FWeakWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&,FWidgetPath_const_&,TSharedPtr<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar3->FocusChangingDelegate,(UDS_W_WindowFrame *)&stack0x00000008,
             (pmf_00daa784 *)this);
  pUVar4 = UDS_WindowManager::GetInst();
  if (pUVar4 != (UDS_WindowManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_W_WindowFrame>
              ((TMulticastDelegateRegistration<void___cdecl(UE::Math::TIntPoint<int>_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar4->GameViewportResizedDelegate,(UDS_W_WindowFrame *)&stack0x00000008,
               (pmf_a2bc271a *)this);
  }
  return;
}

// ResetFrameBtnEventInfo @ 14bcc4430

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::ResetFrameBtnEventInfo(UDS_W_WindowFrame *this,EDS_WindowAnchorType param_1)

{
  if ((this->FrameBtnEventInfo).FrameBtnType == param_1) {
    (this->FrameBtnEventInfo).FrameBtnType = LeftTop;
    (this->FrameBtnEventInfo).bIsPressed = false;
    (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    ResetMouseCursor(this);
    (this->GuideLine_Vrt).bIsSet = false;
    (this->GuideLine_Vrt).MinDist = 0.0;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(this->GuideLine_Vrt).GuideLine,2,Default);
    (this->GuideLine_Vrt).SnappingPos = 0.0;
    (this->GuideLine_Hrz).bIsSet = false;
    (this->GuideLine_Hrz).MinDist = 0.0;
    TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&(this->GuideLine_Hrz).GuideLine,2,Default);
    (this->GuideLine_Hrz).SnappingPos = 0.0;
  }
  return;
}

// ResetMouseCursor @ 14bcc44f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::ResetMouseCursor(UDS_W_WindowFrame *this)

{
  UGameViewportClient *pUVar1;
  UEngine *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  pUVar2 = GEngine;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->FrameBtnEventInfo).bIsPressed != true) {
    if ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&pUVar2->GameViewport,pUVar4);
      if ((bVar3) &&
         (pUVar1 = (pUVar2->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0)
         ) {
        *(undefined4 *)&pUVar1[1].DebugProperties.AllocatorInstance.Data = 0;
        return;
      }
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_WindowFrame::ResetMouseCursor",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x338,L"gameViewportClient is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// SetAnchors @ 14bcc47e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::SetAnchors(UDS_W_WindowFrame *this,FAnchors *param_1)

{
  UCanvasPanelSlot *this_00;
  double dVar1;
  bool bVar2;
  UDS_WindowInfoBase *this_01;
  TVector2<double>_u_0 local_28;
  double local_18;
  double dStack_10;
  
  this_00 = this->WindowFrameSlot;
  if (this_00 != (UCanvasPanelSlot *)0x0) {
    dVar1 = (param_1->Minimum).field0_0x0._s_0.Y;
    (this->CurAnchor).Minimum.field0_0x0._s_0.X = (param_1->Minimum).field0_0x0._s_0.X;
    (this->CurAnchor).Minimum.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->Maximum).field0_0x0._s_0.Y;
    (this->CurAnchor).Maximum.field0_0x0._s_0.X = (param_1->Maximum).field0_0x0._s_0.X;
    (this->CurAnchor).Maximum.field0_0x0._s_0.Y = dVar1;
    local_28._s_0.X = (param_1->Minimum).field0_0x0._s_0.X;
    local_28._s_0.Y = (param_1->Minimum).field0_0x0._s_0.Y;
    local_18 = (param_1->Maximum).field0_0x0._s_0.X;
    dStack_10 = (param_1->Maximum).field0_0x0._s_0.Y;
    UCanvasPanelSlot::SetAnchors(this_00,(FAnchors *)&local_28._s_0);
    bVar2 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar2) {
      this_01 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      UDS_WindowInfoBase::SetWindowAnchor(this_01,param_1);
    }
  }
  return;
}

// SetFrameBtnEventInfo @ 14bcc6360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::SetFrameBtnEventInfo(UDS_W_WindowFrame *this,EDS_WindowAnchorType param_1)

{
  UCanvasPanelSlot *pUVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  TVector2<double> local_18;
  
  if ((this->FrameBtnEventInfo).bIsPressed != true) {
    (this->FrameBtnEventInfo).FrameBtnType = param_1;
    (this->FrameBtnEventInfo).bIsPressed = true;
    pTVar3 = GetMouseViewportPos(this,&local_18);
    pUVar1 = this->WindowFrameSlot;
    dVar2 = (pTVar3->field0_0x0)._s_0.Y;
    (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0.Y = dVar2;
    if (pUVar1 != (UCanvasPanelSlot *)0x0) {
      pTVar3 = UCanvasPanelSlot::GetPosition(pUVar1,&local_18);
      pUVar1 = this->WindowFrameSlot;
      dVar2 = (pTVar3->field0_0x0)._s_0.Y;
      (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
      (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0.Y = dVar2;
      pTVar3 = UCanvasPanelSlot::GetSize(pUVar1,&local_18);
      dVar2 = (pTVar3->field0_0x0)._s_0.Y;
      (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
      (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.Y = dVar2;
    }
  }
  return;
}

// SetGuideLinePoint_Hrz @ 14bcc63e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::SetGuideLinePoint_Hrz
          (UDS_W_WindowFrame *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,TVector2<double> *param_4,
          TVector2<double> *param_5)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  if (param_1->ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(double *)((param_1->AllocatorInstance).Data + 0x18) = dVar1;
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(double *)((param_1->AllocatorInstance).Data + 8) = dVar1;
  dVar1 = *(double *)&param_2->field0_0x0;
  uVar4 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((param_4->field0_0x0)._s_0.X <= dVar1) {
    uVar4 = (undefined4)*(undefined8 *)&param_3->field0_0x0;
    uVar5 = (undefined4)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  }
  if (param_1->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulonglong *)(param_1->AllocatorInstance).Data = CONCAT44(uVar5,uVar4);
  dVar1 = (param_4->field0_0x0)._s_0.X;
  uVar4 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((param_2->field0_0x0)._s_0.X <= dVar1 && dVar1 != (param_2->field0_0x0)._s_0.X) {
    uVar4 = (undefined4)*(undefined8 *)&param_5->field0_0x0;
    uVar5 = (undefined4)((ulonglong)*(undefined8 *)&param_5->field0_0x0 >> 0x20);
  }
  if (param_1->ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(ulonglong *)((param_1->AllocatorInstance).Data + 0x10) = CONCAT44(uVar5,uVar4);
  return;
}

// SetGuideLinePoint_Vrt @ 14bcc6560

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::SetGuideLinePoint_Vrt
          (UDS_W_WindowFrame *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,TVector2<double> *param_4,
          TVector2<double> *param_5)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  dVar2 = (param_4->field0_0x0)._s_0.X;
  if (param_1->ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)((param_1->AllocatorInstance).Data + 0x10) = dVar2;
  if (param_1->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(param_1->AllocatorInstance).Data = dVar2;
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  uVar6 = SUB84(dVar2,0);
  uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if ((param_4->field0_0x0)._s_0.Y <= dVar2) {
    uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    uVar6 = (undefined4)uVar3;
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if (param_1->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(ulonglong *)((param_1->AllocatorInstance).Data + 8) = CONCAT44(uVar7,uVar6);
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  uVar6 = SUB84(dVar2,0);
  uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
  pdVar1 = &(param_2->field0_0x0)._s_0.Y;
  if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
    uVar3 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    uVar6 = (undefined4)uVar3;
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if (param_1->ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(ulonglong *)((param_1->AllocatorInstance).Data + 0x18) = CONCAT44(uVar7,uVar6);
  return;
}

// SetMouseCursor @ 14bcc7ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::SetMouseCursor(UDS_W_WindowFrame *this,Type param_1)

{
  UGameViewportClient *pUVar1;
  UEngine *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  pUVar2 = GEngine;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CommonGameViewportClient_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&pUVar2->GameViewport,pUVar4);
    if ((bVar3) &&
       (pUVar1 = (pUVar2->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0))
    {
      *(Type *)&pUVar1[1].DebugProperties.AllocatorInstance.Data = param_1;
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_W_WindowFrame::SetMouseCursor",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x326,L"gameViewportClient is nullptr.")
    ;
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// SetOnlyHudVisibility @ 14bcc7d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::SetOnlyHudVisibility(UDS_W_WindowFrame *this,ESlateVisibility *param_1)

{
  UDS_CanvasPanel *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = this->Panel_Screen;
  if (pUVar1 == (UDS_CanvasPanel *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_WindowFrame::SetOnlyHudVisibility",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x200,L"Panel_Screen is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,*param_1);
  }
  return;
}

// SetPosition @ 14bcc8620

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::SetPosition(UDS_W_WindowFrame *this,TVector2<double> *param_1)

{
  bool bVar1;
  UDS_WindowInfoBase *this_00;
  TVector2<double>_u_0 local_18;
  
  if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
    local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    UCanvasPanelSlot::SetPosition(this->WindowFrameSlot,(TVector2<double> *)&local_18._s_0);
    bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      UDS_WindowInfoBase::SetWindowPosition(this_00,param_1);
    }
  }
  return;
}

// SetSize @ 14bcc88a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::SetSize(UDS_W_WindowFrame *this,TVector2<double> *param_1)

{
  bool bVar1;
  UDS_WindowInfoBase *this_00;
  TVector2<double>_u_0 local_18;
  
  if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
    local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    UCanvasPanelSlot::SetSize(this->WindowFrameSlot,(TVector2<double> *)&local_18._s_0);
    bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      UDS_WindowInfoBase::SetWindowSize(this_00,param_1);
    }
  }
  return;
}

// SetWindowFrameVisibility @ 14bcc9b70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_WindowFrame::SetWindowFrameVisibility(UDS_W_WindowFrame *this,ESlateVisibility param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcc9b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// SetZOrder @ 14bcc9b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::SetZOrder(UDS_W_WindowFrame *this,int param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  this->ZOrder = param_1;
  if (this->_padding_ != 0) {
    pUVar2 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if ((bVar1) && ((UCanvasPanelSlot *)this->_padding_ != (UCanvasPanelSlot *)0x0)) {
      UCanvasPanelSlot::SetZOrder((UCanvasPanelSlot *)this->_padding_,this->ZOrder);
    }
  }
  return;
}

// UpdateDebugInfo @ 14bcce640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::UpdateDebugInfo(UDS_W_WindowFrame *this)

{
  UPanelWidget *pUVar1;
  UTextBlock *pUVar2;
  code *pcVar3;
  FText *pFVar4;
  TVector2<double> local_88;
  TVector2<double> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FText local_18;
  
  pUVar1 = this->Panel_Debug;
  if ((((pUVar1 != (UPanelWidget *)0x0) && (this->Txt_Position != (UTextBlock *)0x0)) &&
      (this->Txt_Size != (UTextBlock *)0x0)) &&
     (((this->Txt_Anchor != (UTextBlock *)0x0 && (this->Txt_ZOrder != (UTextBlock *)0x0)) &&
      ((this->Txt_WindowID != (UTextBlock *)0x0 &&
       (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0)))))) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,4);
    UCanvasPanelSlot::GetPosition(this->WindowFrameSlot,&local_88);
    ::FString::PrintfImpl(&local_28,L"[Pos] X=%.1f Y=%.1f");
    pUVar2 = this->Txt_Position;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
    pFVar4 = FText::FromString(&local_18,&local_28);
    (*pcVar3)(pUVar2,pFVar4);
    UCanvasPanelSlot::GetSize(this->WindowFrameSlot,&local_78);
    ::FString::PrintfImpl(&local_38,L"[Size] X=%.1f Y=%.1f");
    pUVar2 = this->Txt_Size;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
    pFVar4 = FText::FromString(&local_18,&local_38);
    (*pcVar3)(pUVar2,pFVar4);
    ::FString::PrintfImpl(&local_48,L"[Anchor] %.1f %.1f %.1f %.1f");
    pUVar2 = this->Txt_Anchor;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
    pFVar4 = FText::FromString(&local_18,&local_48);
    (*pcVar3)(pUVar2,pFVar4);
    ::FString::PrintfImpl(&local_58,L"[ZOrder] %d");
    pUVar2 = this->Txt_ZOrder;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
    pFVar4 = FText::FromString(&local_18,&local_58);
    (*pcVar3)(pUVar2,pFVar4);
    UDS_WindowManager::GetWindowIDToString((FString *)&local_18,(EDS_WindowWidget)this->_padding_);
    ::FString::PrintfImpl(&local_68,L"[WindowID] %s(%d)");
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_18.TextData.Reference);
    }
    pUVar2 = this->Txt_WindowID;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
    pFVar4 = FText::FromString(&local_18,&local_68);
    (*pcVar3)(pUVar2,pFVar4);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateWindowFrameByDrag @ 14bccf740

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::UpdateWindowFrameByDrag(UDS_W_WindowFrame *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UDS_WindowInfoBase *pUVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  TVector2<double>_u_0 local_78;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58 [5];
  
  if (this->WindowFrameSlot == (UCanvasPanelSlot *)0x0) {
    return;
  }
  GetMouseViewportPos(this,(TVector2<double> *)&local_58[0]._s_0);
  uVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  local_78._s_0.X = (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.X;
  local_78._s_0.Y = (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.Y;
  local_68._s_0.X = (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0.X;
  local_68._s_0.Y = (this->FrameBtnEventInfo).PressedWindowPos.field0_0x0._s_0.Y;
  local_58[0]._0_8_ =
       (double)local_58[0]._0_8_ - (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0.X;
  uVar8 = (uint)local_58[0]._0_8_;
  uVar9 = (uint)((ulonglong)local_58[0]._0_8_ >> 0x20);
  local_58[0]._8_8_ =
       (double)local_58[0]._8_8_ - (this->FrameBtnEventInfo).PressedPos.field0_0x0._s_0.Y;
  uVar7 = (uint)((ulonglong)local_58[0]._8_8_ >> 0x20);
  switch((this->FrameBtnEventInfo).FrameBtnType) {
  case LeftTop:
    dVar2 = (double)CONCAT44(uVar9 ^ __xmm_80000000000000008000000000000000._4_4_,
                             uVar8 ^ (uint)__xmm_80000000000000008000000000000000);
    local_78._s_0.X = local_78._s_0.X + dVar2;
    dVar1 = (double)CONCAT44(uVar7 ^ __xmm_80000000000000008000000000000000._4_4_,
                             (uint)local_58[0]._8_8_ ^ (uint)__xmm_80000000000000008000000000000000)
    ;
    local_78._s_0.Y = local_78._s_0.Y + dVar1;
    bVar5 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar5) {
      dVar2 = local_78._s_0.X - (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.X;
      dVar1 = local_78._s_0.Y - (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.Y;
    }
    local_68._s_0.X = local_68._s_0.X - dVar2;
    goto LAB_14bccf847;
  case LeftCenter:
    local_78._s_0.Y = local_78._s_0.Y + UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar1 = (double)CONCAT44(uVar9 ^ __xmm_80000000000000008000000000000000._4_4_,
                             uVar8 ^ (uint)__xmm_80000000000000008000000000000000);
    local_78._s_0.X = local_78._s_0.X + dVar1;
    bVar5 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar5) {
      dVar1 = local_78._s_0.X - (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.X;
    }
LAB_14bccf8b2:
    local_68._s_0.X = local_68._s_0.X - dVar1;
    local_68._s_0.Y = local_68._s_0.Y + (double)uVar4;
    break;
  case LeftBottom:
    local_78._s_0.Y = local_78._s_0.Y + (double)local_58[0]._8_8_;
    dVar1 = (double)CONCAT44(uVar9 ^ __xmm_80000000000000008000000000000000._4_4_,
                             uVar8 ^ (uint)__xmm_80000000000000008000000000000000);
    local_78._s_0.X = local_78._s_0.X + dVar1;
    bVar5 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (bVar5) goto LAB_14bccf8b2;
    local_68._s_0.Y = local_68._s_0.Y + (double)uVar4;
    local_68._s_0.X =
         local_68._s_0.X -
         (local_78._s_0.X - (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.X);
    break;
  case CenterTop:
    local_58[0]._s_0.X = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    goto LAB_14bccf92b;
  case Center:
    local_68._s_0.X = local_68._s_0.X + (double)local_58[0]._0_8_;
    local_68._s_0.Y = local_68._s_0.Y + (double)local_58[0]._8_8_;
    break;
  case CenterBottom:
    local_58[0]._s_0.X = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    goto LAB_14bccf9c8;
  case RightTop:
LAB_14bccf92b:
    local_78._s_0.X = local_78._s_0.X + (double)local_58[0]._0_8_;
    dVar1 = (double)CONCAT44(uVar7 ^ __xmm_80000000000000008000000000000000._4_4_,
                             (uint)local_58[0]._8_8_ ^ (uint)__xmm_80000000000000008000000000000000)
    ;
    local_78._s_0.Y = local_78._s_0.Y + dVar1;
    bVar5 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar5) {
      dVar1 = local_78._s_0.Y - (this->FrameBtnEventInfo).PressedWindowSize.field0_0x0._s_0.Y;
    }
    local_68._s_0.X = local_68._s_0.X + (double)uVar3;
LAB_14bccf847:
    local_68._s_0.Y = local_68._s_0.Y - dVar1;
    break;
  case RightCenter:
    local_58[0]._s_0.Y = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    goto LAB_14bccf9c8;
  case RightBottom:
LAB_14bccf9c8:
    local_78._s_0.Y = local_78._s_0.Y + (double)local_58[0]._8_8_;
    local_78._s_0.X = local_78._s_0.X + (double)local_58[0]._0_8_;
    TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(&this->WindowInfo,(void *)0x0);
  default:
    goto switchD_14bccf7e6_default;
  }
  CheckWindowFramePos(this,(TVector2<double> *)&local_68._s_0,(TVector2<double> *)&local_78._s_0);
switchD_14bccf7e6_default:
  if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
    local_58[0]._s_0.X = local_78._s_0.X;
    local_58[0]._s_0.Y = local_78._s_0.Y;
    UCanvasPanelSlot::SetSize(this->WindowFrameSlot,(TVector2<double> *)&local_58[0]._s_0);
    bVar5 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar5) {
      pUVar6 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      UDS_WindowInfoBase::SetWindowSize(pUVar6,(TVector2<double> *)&local_78._s_0);
    }
  }
  if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
    local_58[0]._s_0.X = local_68._s_0.X;
    local_58[0]._s_0.Y = local_68._s_0.Y;
    UCanvasPanelSlot::SetPosition(this->WindowFrameSlot,(TVector2<double> *)&local_58[0]._s_0);
    bVar5 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                      (&this->WindowInfo,(void *)0x0);
    if (!bVar5) {
      pUVar6 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
      UDS_WindowInfoBase::SetWindowPosition(pUVar6,(TVector2<double> *)&local_68._s_0);
    }
  }
  return;
}

// UpdateWindowFrameOnAutoSize @ 14bccfae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::UpdateWindowFrameOnAutoSize(UDS_W_WindowFrame *this)

{
  TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr> *this_00;
  bool bVar1;
  UWidget *this_01;
  UObject *pUVar2;
  UDS_WindowInfoBase *this_02;
  TVector2<double>_u_0 local_78;
  undefined1 local_68 [16];
  bool local_58;
  TVector2<double>_u_0 local_48;
  undefined1 local_38 [16];
  int local_28;
  
  if ((this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) &&
     (bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        (&this->ContentsWidgetPtr,(void *)0x0), !bVar1)) {
    this_00 = &this->WindowInfo;
    bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      UCanvasPanelSlot::GetSize(this->WindowFrameSlot,(TVector2<double> *)&local_48._s_0);
      this_01 = (UWidget *)FWeakObjectPtr::Get(&(this->ContentsWidgetPtr).WeakPtr);
      UWidget::GetDesiredSize(this_01,(TVector2<double> *)&local_78._s_0);
      if ((local_48._s_0.X == local_78._s_0.X) && (local_48._s_0.Y == local_78._s_0.Y)) {
        this->bIsAutoSize = false;
        local_68 = (undefined1  [16])FLinearColor::White.field0_0x0;
        UUserWidget::SetColorAndOpacity((UUserWidget *)this,(FLinearColor *)local_68);
        UCanvasPanelSlot::SetAutoSize(this->WindowFrameSlot,this->bIsAutoSize);
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&this->DelegateSizeUpdated);
        local_38._0_8_ = (atomic<unsigned___int64>)0x0;
        local_38._8_8_ = (undefined8 *)0x0;
        local_28 = 0;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DelegateSizeUpdated,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                   (FWriteAccessScope *)local_68);
        if ((local_28 != 0) && ((undefined8 *)local_38._8_8_ != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)local_38._8_8_)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(local_38 + 8),0,0,0x10);
          local_28 = 0;
        }
        if (local_58 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_68._8_8_,(FDestructionSentinel *)local_68
                    );
        }
        if ((undefined8 *)local_38._8_8_ != (undefined8 *)0x0) {
          FMemory::Free((void *)local_38._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_38);
      }
      else {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if (*(double *)&pUVar2[2].field_0x18 != 0.0) {
          pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_78._s_0.X = (double)*(undefined8 *)&pUVar2[2].field_0x18;
        }
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if (*(double *)&pUVar2[2].field_0x20 != 0.0) {
          pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_78._s_0.Y = (double)*(undefined8 *)&pUVar2[2].field_0x20;
        }
        local_68._0_8_ = local_78._s_0.X + (this->ContentsSlotSizeOffset).field0_0x0._s_0.X;
        local_68._8_8_ = local_78._s_0.Y + (this->ContentsSlotSizeOffset).field0_0x0._s_0.Y;
        if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
          local_38._0_8_ = local_68._0_8_;
          local_38._8_8_ = local_68._8_8_;
          UCanvasPanelSlot::SetSize(this->WindowFrameSlot,(TVector2<double> *)local_38);
          bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
          ;
          if (!bVar1) {
            this_02 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            UDS_WindowInfoBase::SetWindowSize(this_02,(TVector2<double> *)local_68);
          }
        }
        FWeakObjectPtr::Get(&this_00->WeakPtr);
      }
    }
  }
  return;
}

// UpdateWindowFramePos @ 14bccfd40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WindowFrame::UpdateWindowFramePos(UDS_W_WindowFrame *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UDS_WindowManager *this_00;
  FGeometry *pFVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float local_res10;
  float fStackX_14;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8 [10];
  
  this_00 = UDS_WindowManager::GetInst();
  if ((this_00 != (UDS_WindowManager *)0x0) && (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0)) {
    UCanvasPanelSlot::GetPosition(this->WindowFrameSlot,(TVector2<double> *)&local_a8[0]._s_0);
    UCanvasPanelSlot::GetSize(this->WindowFrameSlot,(TVector2<double> *)&local_b8._s_0);
    dVar8 = __real_3fe0000000000000;
    dVar11 = local_b8._s_0.X * __real_3fe0000000000000;
    dVar12 = local_b8._s_0.Y * __real_3fe0000000000000;
    pFVar10 = UDS_WindowManager::GetRootWidgetGeometry(this_00);
    fVar13 = __real_3f800000 / this->UIScale;
    local_res10 = SUB84(pFVar10->Size,0);
    fStackX_14 = SUB84(pFVar10->Size,4);
    dVar6 = (double)(local_res10 * fVar13);
    dVar7 = (double)(fStackX_14 * fVar13);
    dVar4 = dVar6 * (this->CurAnchor).Minimum.field0_0x0._s_0.X + (double)local_a8[0]._0_8_;
    dVar3 = dVar7 * (this->CurAnchor).Minimum.field0_0x0._s_0.Y + (double)local_a8[0]._8_8_;
    if ((this->WindowFramePos).ArrayNum < 2) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x10) = dVar4;
    *(double *)(pFVar1 + 0x18) = dVar3;
    dVar12 = (double)(float)dVar12 + dVar3;
    if ((this->WindowFramePos).ArrayNum < 3) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x20) = dVar4;
    *(double *)(pFVar1 + 0x28) = dVar12;
    dVar5 = dVar3 + local_b8._s_0.Y;
    if ((this->WindowFramePos).ArrayNum < 4) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x30) = dVar4;
    *(double *)(pFVar1 + 0x38) = dVar5;
    dVar11 = (double)(float)dVar11 + dVar4;
    if ((this->WindowFramePos).ArrayNum < 5) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x40) = dVar11;
    *(double *)(pFVar1 + 0x48) = dVar3;
    if ((this->WindowFramePos).ArrayNum < 6) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x50) = dVar11;
    *(double *)(pFVar1 + 0x58) = dVar12;
    dVar5 = dVar3 + local_b8._s_0.Y;
    if ((this->WindowFramePos).ArrayNum < 7) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x60) = dVar11;
    *(double *)(pFVar1 + 0x68) = dVar5;
    dVar11 = dVar4 + local_b8._s_0.X;
    if ((this->WindowFramePos).ArrayNum < 8) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x70) = dVar11;
    *(double *)(pFVar1 + 0x78) = dVar3;
    dVar11 = dVar4 + local_b8._s_0.X;
    if ((this->WindowFramePos).ArrayNum < 9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x80) = dVar11;
    *(double *)(pFVar1 + 0x88) = dVar12;
    if ((this->WindowFramePos).ArrayNum < 10) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->WindowFramePos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x90) = dVar4 + local_b8._s_0.X;
    *(double *)(pFVar1 + 0x98) = dVar3 + local_b8._s_0.Y;
    if ((this->ViewportPos).ArrayNum < 2) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(undefined8 *)(pFVar1 + 0x10) = 0;
    *(undefined8 *)(pFVar1 + 0x18) = 0;
    dVar3 = (double)(float)(dVar7 * dVar8);
    if ((this->ViewportPos).ArrayNum < 3) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(undefined8 *)(pFVar1 + 0x20) = 0;
    *(double *)(pFVar1 + 0x28) = dVar3;
    if ((this->ViewportPos).ArrayNum < 4) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(undefined8 *)(pFVar1 + 0x30) = 0;
    *(double *)(pFVar1 + 0x38) = dVar7;
    dVar4 = (double)(float)(dVar6 * dVar8);
    if ((this->ViewportPos).ArrayNum < 5) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x40) = dVar4;
    *(undefined8 *)(pFVar1 + 0x48) = 0;
    if ((this->ViewportPos).ArrayNum < 6) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x50) = dVar4;
    *(double *)(pFVar1 + 0x58) = dVar3;
    if ((this->ViewportPos).ArrayNum < 7) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x60) = dVar4;
    *(double *)(pFVar1 + 0x68) = dVar7;
    if ((this->ViewportPos).ArrayNum < 8) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x70) = dVar6;
    *(undefined8 *)(pFVar1 + 0x78) = 0;
    if ((this->ViewportPos).ArrayNum < 9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x80) = dVar6;
    *(double *)(pFVar1 + 0x88) = dVar3;
    if ((this->ViewportPos).ArrayNum < 10) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ViewportPos).AllocatorInstance.Data;
    *(double *)(pFVar1 + 0x90) = dVar6;
    *(double *)(pFVar1 + 0x98) = dVar7;
  }
  return;
}

