// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 29

// FCommonAnalogCursor @ 14a7a9f60

FCommonAnalogCursor * __thiscall
FCommonAnalogCursor::FCommonAnalogCursor
          (FCommonAnalogCursor *this,UCommonUIActionRouterBase *param_1)

{
  FAnalogCursor::FAnalogCursor((FAnalogCursor *)this);
  this->ActionRouter = param_1;
  this->_padding_ = (longlong)&___7FCommonAnalogCursor__6B_;
  *(undefined8 *)&(this->PointerButtonDownKeys).Elements.field_0x8 = 0;
  this->ActiveInputMethod = MouseAndKeyboard;
  this->bIsAnalogMovementEnabled = false;
  this->bShouldHandleRightAnalog = true;
  *(undefined8 *)&(this->PointerButtonDownKeys).Elements = 0;
  *(undefined8 *)&(this->PointerButtonDownKeys).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PointerButtonDownKeys).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PointerButtonDownKeys).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PointerButtonDownKeys).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointerButtonDownKeys).Elements.field_0x34 = 0;
  (this->PointerButtonDownKeys).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PointerButtonDownKeys).HashSize = 0;
  (this->LastCursorTarget).Object = (SWidget *)0x0;
  (this->LastCursorTarget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LastCursorTargetTransform).M.M[0] = (float  [2])0x3f800000;
  (this->LastCursorTargetTransform).M.M[1][0] = 0.0;
  (this->LastCursorTargetTransform).M.M[1][1] = 1.0;
  (this->LastCursorTargetTransform).Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->ActiveKeyUpEvent).bIsSet = false;
  this->TimeUntilScrollUpdate = 0.0;
  this->ShoulderButtonStatus = 0;
  return this;
}

// CanReleaseMouseCapture @ 14a7c3c10

bool __thiscall FCommonAnalogCursor::CanReleaseMouseCapture(FCommonAnalogCursor *this)

{
  if (((this->ActionRouter->ActiveInputConfig).bIsSet != false) &&
     ((byte)((this->ActionRouter->ActiveInputConfig).TypedValue.MouseCaptureMode -
            CapturePermanently_IncludingInitialMouseDown) < 2)) {
    return true;
  }
  return false;
}

// ClampPositionToViewport @ 14a7c3f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector2<double> * __thiscall
FCommonAnalogCursor::ClampPositionToViewport
          (FCommonAnalogCursor *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  float fVar1;
  UGameViewportClient *this_00;
  SViewport *this_01;
  double dVar2;
  ULocalPlayer *pUVar3;
  TSharedPtr<SViewport,1> *pTVar4;
  FGeometry *pFVar5;
  TTransform2<float> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float local_48;
  TTransform2<float> local_38;
  
  pUVar3 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  this_00 = (pUVar3->ViewportClient).field0_0x0.DebugPtr;
  if (this_00 == (UGameViewportClient *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4 = UGameViewportClient::GetGameViewportWidget
                       (this_00,(TSharedPtr<SViewport,1> *)&local_38);
    this_01 = pTVar4->Object;
    pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
    (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->Object = (SViewport *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_38.M.M[1]);
    if (this_01 != (SViewport *)0x0) {
      pFVar5 = SWidget::GetCachedGeometry((SWidget *)this_01);
      fVar8 = (float)(param_1->field0_0x0)._s_0.X;
      fVar9 = (float)(param_1->field0_0x0)._s_0.Y;
      pTVar6 = Inverse<TTransform2<float>_>(&local_38,&pFVar5->AccumulatedRenderTransform);
      local_38.M.M[0] = *(float (*) [2])&pFVar5->Size;
      local_48 = local_38.M.M[0][0];
      dVar2 = (double)(fVar9 * (pTVar6->M).M[1][0] + fVar8 * (pTVar6->M).M[0][0] +
                      (pTVar6->Trans).field0_0x0._s_0.X);
      dVar10 = (double)(local_48 - __real_3f800000);
      if (dVar2 <= (double)(local_48 - __real_3f800000)) {
        dVar10 = dVar2;
      }
      if (dVar10 <= __real_3ff0000000000000) {
        dVar10 = __real_3ff0000000000000;
      }
      dVar2 = (double)(fVar9 * (pTVar6->M).M[1][1] + fVar8 * (pTVar6->M).M[0][1] +
                      (pTVar6->Trans).field0_0x0._s_0.Y);
      dVar11 = (double)(local_38.M.M[0][1] - __real_3f800000);
      if (dVar2 <= (double)(local_38.M.M[0][1] - __real_3f800000)) {
        dVar11 = dVar2;
      }
      if (dVar11 <= __real_3ff0000000000000) {
        dVar11 = __real_3ff0000000000000;
      }
      fVar8 = (pFVar5->AccumulatedRenderTransform).M.M[0][1];
      fVar9 = (pFVar5->AccumulatedRenderTransform).M.M[1][1];
      fVar1 = (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (double)((float)dVar11 * (pFVar5->AccumulatedRenderTransform).M.M[1][0] +
                    (float)dVar10 * (pFVar5->AccumulatedRenderTransform).M.M[0][0] +
                   (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (double)((float)dVar10 * fVar8 + (float)dVar11 * fVar9 + fVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// DetermineScrollOrientation @ 14a7d3b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EOrientation __thiscall
FCommonAnalogCursor::DetermineScrollOrientation(FCommonAnalogCursor *this,UWidget *param_1)

{
  int iVar1;
  longlong lVar2;
  EOrientation EVar3;
  UClass *pUVar4;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar4 = Z_Construct_UClass_UListView_NoRegister();
    lVar2 = param_1->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return (EOrientation)(byte)param_1[9]._padding_;
    }
  }
  if (param_1 != (UWidget *)0x0) {
    pUVar4 = Z_Construct_UClass_UScrollBar_NoRegister();
    lVar2 = param_1->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      EVar3 = UScrollBar::GetOrientation((UScrollBar *)param_1);
      return EVar3;
    }
    if (param_1 != (UWidget *)0x0) {
      pUVar4 = Z_Construct_UClass_UScrollBox_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        EVar3 = UScrollBox::GetOrientation((UScrollBox *)param_1);
        return EVar3;
      }
    }
  }
  return Orient_Vertical;
}

// GetOwnerUserIndex @ 14a7e4550

int __thiscall FCommonAnalogCursor::GetOwnerUserIndex(FCommonAnalogCursor *this)

{
  int iVar1;
  
  iVar1 = UCommonUIActionRouterBase::GetLocalPlayerIndex(this->ActionRouter);
  return iVar1;
}

// GetViewportClient @ 14a7e9820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameViewportClient * __thiscall FCommonAnalogCursor::GetViewportClient(FCommonAnalogCursor *this)

{
  ULocalPlayer *pUVar1;
  
  pUVar1 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  return (pUVar1->ViewportClient).field0_0x0.DebugPtr;
}

// HandleAnalogInputEvent @ 14a7ea680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::HandleAnalogInputEvent
          (FCommonAnalogCursor *this,FSlateApplication *param_1,FAnalogInputEvent *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x70))(this,param_2);
  if (cVar1 != '\0') {
    bVar2 = FAnalogCursor::HandleAnalogInputEvent((FAnalogCursor *)this,param_1,param_2);
    bVar3 = false;
    if (this->bIsAnalogMovementEnabled != false) {
      bVar3 = bVar2;
    }
    return bVar3;
  }
  return false;
}

// HandleInputMethodChanged @ 14a7ecee0

void __thiscall
FCommonAnalogCursor::HandleInputMethodChanged(FCommonAnalogCursor *this,ECommonInputType param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [3];
  
  this->ActiveInputMethod = param_1;
  if ((param_1 == Gamepad) && (&this->LastCursorTarget != (TWeakPtr<SWidget,1> *)local_18)) {
    pTVar3 = (this->LastCursorTarget).WeakReferenceCount.ReferenceController;
    (this->LastCursorTarget).Object = (SWidget *)0x0;
    (this->LastCursorTarget).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014a7ecf2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        return;
      }
    }
  }
  return;
}

// HandleKeyDownEvent @ 14a7ed110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::HandleKeyDownEvent
          (FCommonAnalogCursor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  UGameViewportClient *pUVar1;
  UConsole *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  UCommonUIActionRouterBase *pUVar7;
  code *pcVar8;
  TConsoleVariableData<bool> *pTVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  ULocalPlayer *pUVar13;
  FKey *pFVar14;
  UCommonInputSubsystem *pUVar15;
  FReply *pFVar16;
  uint uVar17;
  ForElementType<FArrangedWidget> FVar18;
  undefined1 auStackY_348 [32];
  FName local_318;
  FKeyDetails *local_310;
  TReferenceControllerBase<1> *local_308;
  FKey local_300;
  TOptional<FPointerEvent> local_2e8;
  FReply local_258;
  FWidgetPath local_1a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_348;
  cVar10 = (**(code **)(this->_padding_ + 0x78))(this,param_2);
  if (cVar10 == '\0') {
    return false;
  }
  pUVar13 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  pUVar1 = (pUVar13->ViewportClient).field0_0x0.DebugPtr;
  if (((pUVar1 != (UGameViewportClient *)0x0) &&
      (pUVar2 = (pUVar1->ViewportConsole).field0_0x0.DebugPtr, pUVar2 != (UConsole *)0x0)) &&
     (cVar10 = (**(code **)(pUVar2->_padding_ + 0x3a0))(), cVar10 != '\0')) {
    return false;
  }
  pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->Key).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar17 = this->ShoulderButtonStatus;
  if (FVar4 == EKeys::Gamepad_LeftShoulder.KeyName) {
    uVar17 = uVar17 | 1;
    this->ShoulderButtonStatus = uVar17;
  }
  if (FVar4 == EKeys::Gamepad_RightShoulder.KeyName) {
    uVar17 = uVar17 | 2;
    this->ShoulderButtonStatus = uVar17;
  }
  if (FVar4 == EKeys::Gamepad_LeftTrigger.KeyName) {
    uVar17 = uVar17 | 4;
    this->ShoulderButtonStatus = uVar17;
  }
  if (FVar4 == EKeys::Gamepad_RightTrigger.KeyName) {
    uVar17 = uVar17 | 8;
    this->ShoulderButtonStatus = uVar17;
  }
  if (uVar17 == 0xf) {
    this->ShoulderButtonStatus = 0;
    this->bIsAnalogMovementEnabled = this->bIsAnalogMovementEnabled == false;
  }
  pFVar14 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_300);
  pTVar5 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->Key).KeyName;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar6 = pFVar14->KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300.KeyDetails.SharedReferenceCount.ReferenceController);
  cVar10 = *(char *)((longlong)&param_2->_padding_ + 2);
  if (FVar4 == FVar6) {
    pUVar7 = this->ActionRouter;
    pcVar8 = *(code **)(pUVar7->_padding_ + 0x2e0);
    local_318 = (param_2->Key).KeyName;
    local_310 = (param_2->Key).KeyDetails.Object;
    local_308 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_308 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_308->SharedReferenceCount = (atomic<int>)((int)local_308->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar10 = (*pcVar8)(pUVar7,&local_318,-(cVar10 != '\0') & 2);
    if (cVar10 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return true;
    }
    cVar10 = (**(code **)(this->_padding_ + 0xb8))(this,param_2,0);
    pTVar9 = CVarShouldRouteOffscreenMouseButton.Ref;
    if (cVar10 == '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return false;
    }
    bVar11 = IsInParallelGameThread();
    if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    if (pTVar9->ShadowedValue[0] != false) {
      FWidgetPath::FWidgetPath(&local_1a0);
      GetSimulatedMouseEventForOffscreenFocusedWidget(&local_2e8,param_2,param_1,&local_1a0);
      if (local_2e8.bIsSet != false) {
        pUVar15 = UCommonUIActionRouterBase::GetInputSubsystem(this->ActionRouter);
        UCommonInputSubsystem::SetIsGamepadSimulatedClick(pUVar15,FVar4 == FVar6);
        if ((local_2e8.bIsSet == false) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar16 = FSlateApplication::RoutePointerDownEvent
                            (param_1,&local_258,&local_1a0,&local_2e8.TypedValue);
        uVar12 = (undefined1)pFVar16->_padding_;
        FReply::~FReply(&local_258);
        UCommonInputSubsystem::SetIsGamepadSimulatedClick(pUVar15,false);
        if (local_2e8.bIsSet != false) {
          FPointerEvent::~FPointerEvent(&local_2e8.TypedValue);
        }
        if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar18 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
        if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar18 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar18,local_1a0.Widgets.Array.ArrayNum);
        if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          return (bool)uVar12;
        }
        goto LAB_14a7ed4d0;
      }
      if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar18 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
      if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar18 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar18,local_1a0.Widgets.Array.ArrayNum)
      ;
      if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
  }
  pUVar15 = UCommonUIActionRouterBase::GetInputSubsystem(this->ActionRouter);
  UCommonInputSubsystem::SetIsGamepadSimulatedClick(pUVar15,FVar4 == FVar6);
  uVar12 = FAnalogCursor::HandleKeyDownEvent((FAnalogCursor *)this,param_1,param_2);
  UCommonInputSubsystem::SetIsGamepadSimulatedClick(pUVar15,false);
LAB_14a7ed4d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (bool)uVar12;
}

// HandleKeyUpEvent @ 14a7ed4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::HandleKeyUpEvent
          (FCommonAnalogCursor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  TOptional<FKeyEvent> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  UCommonUIActionRouterBase *pUVar5;
  code *pcVar6;
  TConsoleVariableData<bool> *pTVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  FKey *pFVar11;
  FReply *pFVar12;
  ForElementType<FArrangedWidget> FVar13;
  undefined1 auStackY_3f8 [32];
  FKeyEvent local_3c0;
  char local_378;
  FName local_368;
  FKeyDetails *local_360;
  TReferenceControllerBase<1> *local_358;
  FKeyEvent local_350;
  char local_308;
  FKey local_300;
  TOptional<FPointerEvent> local_2e8;
  FReply local_258;
  FWidgetPath local_1a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  cVar8 = (**(code **)(this->_padding_ + 0x78))(this,param_2);
  if (cVar8 == '\0') {
    return false;
  }
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::Gamepad_LeftShoulder.KeyName) {
    this->ShoulderButtonStatus = this->ShoulderButtonStatus ^ 1;
  }
  if (FVar2 == EKeys::Gamepad_RightShoulder.KeyName) {
    this->ShoulderButtonStatus = this->ShoulderButtonStatus ^ 2;
  }
  if (FVar2 == EKeys::Gamepad_LeftTrigger.KeyName) {
    this->ShoulderButtonStatus = this->ShoulderButtonStatus ^ 4;
  }
  if (FVar2 == EKeys::Gamepad_RightTrigger.KeyName) {
    this->ShoulderButtonStatus = this->ShoulderButtonStatus ^ 8;
  }
  FKeyEvent::FKeyEvent(&local_350,param_2);
  this_00 = &this->ActiveKeyUpEvent;
  local_308 = '\x01';
  local_378 = (this->ActiveKeyUpEvent).bIsSet;
  if ((bool)local_378 != false) {
    FKeyEvent::FKeyEvent(&local_3c0,&this_00->TypedValue);
  }
  if ((TOptional<FKeyEvent> *)&local_350 == this_00) {
LAB_14a7ed601:
    if (local_308 != '\0') {
      FKeyEvent::~FKeyEvent(&local_350);
    }
  }
  else {
    bVar9 = (this->ActiveKeyUpEvent).bIsSet;
    if (local_308 != '\0') {
      if (bVar9 != false) {
        FKeyEvent::~FKeyEvent(&this_00->TypedValue);
      }
      FKeyEvent::FKeyEvent(&this_00->TypedValue,&local_350);
      (this->ActiveKeyUpEvent).bIsSet = true;
      goto LAB_14a7ed601;
    }
    if (bVar9 != false) {
      FKeyEvent::~FKeyEvent(&this_00->TypedValue);
      (this->ActiveKeyUpEvent).bIsSet = false;
      goto LAB_14a7ed601;
    }
  }
  pFVar11 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_300);
  pTVar3 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar4 = pFVar11->KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300.KeyDetails.SharedReferenceCount.ReferenceController);
  if (FVar2 == FVar4) {
    pUVar5 = this->ActionRouter;
    pcVar6 = *(code **)(pUVar5->_padding_ + 0x2e0);
    local_368 = (param_2->Key).KeyName;
    local_360 = (param_2->Key).KeyDetails.Object;
    local_358 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_358 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_358->SharedReferenceCount = (atomic<int>)((int)local_358->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar8 = (*pcVar6)(pUVar5,&local_368,1);
    if (cVar8 != '\0') {
      cVar8 = (**(code **)(this->_padding_ + 0xb8))(this,param_2,1);
      pTVar7 = CVarShouldRouteOffscreenMouseButton.Ref;
      if (cVar8 == '\0') {
        if ((TOptional<FKeyEvent> *)&local_3c0 != this_00) {
          bVar9 = (this->ActiveKeyUpEvent).bIsSet;
          if (local_378 == '\0') {
            if (bVar9 == false) goto LAB_14a7ed708;
            FKeyEvent::~FKeyEvent(&this_00->TypedValue);
            (this->ActiveKeyUpEvent).bIsSet = false;
          }
          else {
            if (bVar9 != false) {
              FKeyEvent::~FKeyEvent(&this_00->TypedValue);
            }
            FKeyEvent::FKeyEvent(&this_00->TypedValue,&local_3c0);
            (this->ActiveKeyUpEvent).bIsSet = true;
          }
        }
        if (local_378 != '\0') {
          FKeyEvent::~FKeyEvent(&local_3c0);
        }
LAB_14a7ed708:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return false;
      }
      bVar9 = IsInParallelGameThread();
      if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (pTVar7->ShadowedValue[0] != false) {
        FWidgetPath::FWidgetPath(&local_1a0);
        GetSimulatedMouseEventForOffscreenFocusedWidget(&local_2e8,param_2,param_1,&local_1a0);
        if (local_2e8.bIsSet != false) {
          pFVar12 = FSlateApplication::RoutePointerUpEvent
                              (param_1,&local_258,&local_1a0,&local_2e8.TypedValue);
          uVar10 = (undefined1)pFVar12->_padding_;
          FReply::~FReply(&local_258);
          if (local_2e8.bIsSet != false) {
            FPointerEvent::~FPointerEvent(&local_2e8.TypedValue);
          }
          if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
          FVar13 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
          if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar13 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar13,local_1a0.Widgets.Array.ArrayNum);
          if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
          }
          goto LAB_14a7ed89b;
        }
        if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar13 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
        if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar13 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar13,local_1a0.Widgets.Array.ArrayNum);
        if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
        }
      }
      goto LAB_14a7ed88a;
    }
    uVar10 = 1;
  }
  else {
LAB_14a7ed88a:
    uVar10 = FAnalogCursor::HandleKeyUpEvent((FAnalogCursor *)this,param_1,param_2);
  }
LAB_14a7ed89b:
  if ((TOptional<FKeyEvent> *)&local_3c0 != this_00) {
    bVar9 = (this->ActiveKeyUpEvent).bIsSet;
    if (local_378 == '\0') {
      if (bVar9 == false) goto LAB_14a7ed8f3;
      FKeyEvent::~FKeyEvent(&this_00->TypedValue);
      (this->ActiveKeyUpEvent).bIsSet = false;
    }
    else {
      if (bVar9 != false) {
        FKeyEvent::~FKeyEvent(&this_00->TypedValue);
      }
      FKeyEvent::FKeyEvent(&this_00->TypedValue,&local_3c0);
      (this->ActiveKeyUpEvent).bIsSet = true;
    }
  }
  if (local_378 != '\0') {
    FKeyEvent::~FKeyEvent(&local_3c0);
  }
LAB_14a7ed8f3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return (bool)uVar10;
}

// HandleMouseButtonDownEvent @ 14a7edc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::HandleMouseButtonDownEvent
          (FCommonAnalogCursor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  uint uVar1;
  UGameViewportClient *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  ULocalPlayer *pUVar5;
  TSharedPtr<SViewport,1> *pTVar6;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  ForElementType<FArrangedWidget> FVar8;
  SViewport *pSVar9;
  undefined1 auStackY_288 [32];
  undefined1 local_248 [8];
  FKey local_240;
  undefined1 local_228 [8];
  FSharedReferencer<1> FStack_220;
  FKey local_218;
  FKeyEvent local_1f8;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar4 = FAnalogCursor::IsRelevantInput((FAnalogCursor *)this,param_2);
  if (bVar4) {
    local_240.KeyName = (param_2->EffectingButton).KeyName;
    local_240.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
    local_240.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_240.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_240.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_240.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = FKey::IsMouseButton((FKey *)(local_248 + 8));
    if ((((bVar4) && (local_240.KeyName != EKeys::LeftMouseButton.KeyName)) &&
        (local_240.KeyName != EKeys::RightMouseButton.KeyName)) &&
       (local_240.KeyName != EKeys::MiddleMouseButton.KeyName)) {
      pUVar5 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
      this_00 = (pUVar5->ViewportClient).field0_0x0.DebugPtr;
      if (this_00 == (UGameViewportClient *)0x0) {
        pTVar6 = (TSharedPtr<SViewport,1> *)local_228;
        pSVar9 = (SViewport *)0x0;
        local_228 = (undefined1  [8])0x0;
        FStack_220.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar6 = UGameViewportClient::GetGameViewportWidget
                           (this_00,(TSharedPtr<SViewport,1> *)&local_218);
        pSVar9 = pTVar6->Object;
      }
      pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 == (UGameViewportClient *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_220.ReferenceController);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_218.KeyDetails.Object);
      }
      if (pSVar9 != (SViewport *)0x0) {
        pcVar3 = *(code **)(*(longlong *)param_1 + 0x108);
        pTVar7 = FSlateApplication::GetInteractiveTopLevelWindows
                           (param_1,(TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *)
                                    local_228);
        (*pcVar3)(param_1,&local_1a8,param_2->ScreenSpacePosition,pTVar7);
        DestructItems<TSharedRef<SWindow,1>,int>
                  ((TSharedRef<SWindow,1> *)local_228,(int)FStack_220.ReferenceController);
        if (local_228 != (undefined1  [8])0x0) {
          FMemory::Free((void *)local_228);
        }
        bVar4 = FWidgetPath::ContainsWidget(&local_1a8,(SWidget *)pSVar9);
        if (bVar4) {
          uVar1 = *(uint *)((longlong)&param_2->_padding_ + 4);
          local_218.KeyName = local_240.KeyName;
          local_218.KeyDetails.Object = local_240.KeyDetails.Object;
          local_218.KeyDetails.SharedReferenceCount.ReferenceController =
               local_240.KeyDetails.SharedReferenceCount.ReferenceController;
          if (local_240.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_240.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_240.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FKeyEvent::FKeyEvent
                    (&local_1f8,&local_218,(FModifierKeysState *)&param_2->_padding_,uVar1,false,0,0
                    );
          bVar4 = FSlateApplication::ProcessKeyDownEvent(param_1,&local_1f8);
          if (bVar4) {
            TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Emplace<FKey_const_&>
                      (&this->PointerButtonDownKeys,(FKey *)local_248,(bool *)(local_248 + 8));
            FKeyEvent::~FKeyEvent(&local_1f8);
            if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
            FVar8 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
            if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar8 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>
                      ((FArrangedWidget *)FVar8,local_1a8.Widgets.Array.ArrayNum);
            if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_1a8.Widgets.Array.AllocatorInstance.SecondaryData);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_240.KeyDetails.SharedReferenceCount.ReferenceController);
            return true;
          }
          FKeyEvent::~FKeyEvent(&local_1f8);
        }
        if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar8 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
        if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar8 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar8,local_1a8.Widgets.Array.ArrayNum);
        if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1a8.Widgets.Array.AllocatorInstance.SecondaryData);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_240.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// HandleMouseButtonUpEvent @ 14a7edf80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::HandleMouseButtonUpEvent
          (FCommonAnalogCursor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  FKey local_78;
  FKeyEvent local_58;
  
  bVar3 = FAnalogCursor::IsRelevantInput((FAnalogCursor *)this,param_2);
  if (!bVar3) {
    return false;
  }
  FVar1 = (param_2->EffectingButton).KeyName;
  local_78.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.KeyName = FVar1;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  if (*(int *)&(this->PointerButtonDownKeys).Elements.field_0x8 ==
      *(int *)&(this->PointerButtonDownKeys).Elements.field_0x34) {
    iVar6 = 0;
  }
  else {
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar6 = TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::RemoveImpl<FKey>
                      (&this->PointerButtonDownKeys,FVar1.Number + uVar5,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (iVar6 < 1) {
    local_78.KeyName = (param_2->EffectingButton).KeyName;
    local_78.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
    local_78.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FKey::IsMouseButton(&local_78);
    if ((((!bVar3) || (local_78.KeyName == EKeys::LeftMouseButton.KeyName)) ||
        (local_78.KeyName == EKeys::RightMouseButton.KeyName)) ||
       (local_78.KeyName == EKeys::MiddleMouseButton.KeyName)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
      return false;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.KeyDetails.SharedReferenceCount.ReferenceController);
    cVar4 = (**(code **)(*(longlong *)param_1 + 0xd8))
                      (param_1,*(undefined4 *)((longlong)&param_2->_padding_ + 4));
    if (cVar4 != '\0') {
      return false;
    }
  }
  local_78.KeyName = (param_2->EffectingButton).KeyName;
  uVar5 = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_78.KeyDetails.Object = (param_2->EffectingButton).KeyDetails.Object;
  local_78.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_78.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  FKeyEvent::FKeyEvent
            (&local_58,&local_78,(FModifierKeysState *)&param_2->_padding_,uVar5,false,0,0);
  bVar3 = FSlateApplication::ProcessKeyUpEvent(param_1,&local_58);
  FKeyEvent::~FKeyEvent(&local_58);
  if (iVar6 < 1) {
    return false;
  }
  return bVar3;
}

// HandleMouseMoveEvent @ 14a7ee140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::HandleMouseMoveEvent
          (FCommonAnalogCursor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  return false;
}

// HideCursor @ 14a7f20a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCommonAnalogCursor::HideCursor(FCommonAnalogCursor *this)

{
  undefined8 uVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  atomic<int> aVar6;
  FSlateApplication *this_00;
  UWorld *this_01;
  UGameViewportClient *pUVar7;
  SWindow *pSVar8;
  undefined8 *puVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  float local_res8;
  float fStackX_c;
  undefined1 local_res10 [8];
  TSharedPtr<FSlateUser,1> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pSVar8 = (SWindow *)0x0;
  local_res8 = 0.0;
  this_00 = FSlateApplication::Get();
  iVar5 = (**(code **)(this->_padding_ + 0x60))(this);
  FSlateApplication::GetUser(this_00,&local_58,iVar5);
  this_01 = (UWorld *)(**(code **)(this->ActionRouter->_padding_ + 0x180))();
  if (((local_58.Object == (FSlateUser *)0x0) || (this_01 == (UWorld *)0x0)) ||
     (bVar4 = UWorld::IsGameWorld(this_01), !bVar4)) goto LAB_14a7f2291;
  pUVar7 = UWorld::GetGameViewport(this_01);
  if (pUVar7 == (UGameViewportClient *)0x0) {
    pSVar10 = (SWindow *)CONCAT44(fStackX_c,local_res8);
LAB_14a7f2186:
    bVar4 = false;
    pSVar11 = pSVar8;
  }
  else {
    pSVar10 = (SWindow *)(pUVar7->Window).WeakReferenceCount.ReferenceController;
    if (pSVar10 != (SWindow *)0x0) {
      aVar3 = *(atomic<int> *)&pSVar10->_padding_;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pSVar10 = pSVar8;
          pSVar8 = (SWindow *)&DAT_00000001;
          goto LAB_14a7f2186;
        }
        LOCK();
        aVar6 = *(atomic<int> *)&pSVar10->_padding_;
        bVar4 = aVar3 == aVar6;
        if (bVar4) {
          *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar4);
      pSVar8 = (pUVar7->Window).Object;
    }
    pSVar11 = (SWindow *)&DAT_00000001;
    bVar4 = pSVar8 == (SWindow *)0x0;
    pSVar8 = pSVar11;
    if ((bVar4) || (pUVar7->Viewport == (FViewport *)0x0)) goto LAB_14a7f2186;
    bVar4 = true;
  }
  if (pSVar11 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
  }
  if (bVar4) {
    local_48 = ___xmm_3f999999a00000003f999999a0000000;
    uStack_40 = _UNK_15223a118;
    puVar9 = (undefined8 *)
             (**(code **)(pUVar7->Viewport->_padding_ + 0x158))
                       (pUVar7->Viewport,local_res10,&local_48);
    uVar1 = *puVar9;
    fStackX_c = (float)(int)((ulonglong)uVar1 >> 0x20);
    if ((local_58.Object == (FSlateUser *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res8 = (float)(int)uVar1;
    FSlateUser::SetCursorPosition(local_58.Object,(FDeprecateVector2DParameter *)&local_res8);
    if ((local_58.Object == (FSlateUser *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FSlateUser::SetCursorVisibility(local_58.Object,false);
  }
LAB_14a7f2291:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// Initialize @ 14a7f2660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCommonAnalogCursor::Initialize(FCommonAnalogCursor *this)

{
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *this_00;
  code *UNRECOVERED_JUMPTABLE;
  FName FVar1;
  bool bVar2;
  ECommonInputType EVar3;
  uint uVar4;
  FSlateApplication *this_01;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar5;
  ULocalPlayer *this_02;
  UCommonInputSubsystem *this_03;
  code *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  (**(code **)(this->_padding_ + 0xd0))();
  this_01 = FSlateApplication::Get();
  pTVar5 = FSlateApplication::GetPressedMouseButtons(this_01);
  this_00 = &this->PointerButtonDownKeys;
  if (this_00 != pTVar5) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->PointerButtonDownKeys).Hash,&(this->PointerButtonDownKeys).HashSize,
               &pTVar5->Hash,pTVar5->HashSize);
    TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&this_00->Elements,&pTVar5->Elements);
  }
  FVar1 = EKeys::LeftMouseButton.KeyName;
  if (*(int *)&(this->PointerButtonDownKeys).Elements.field_0x8 !=
      *(int *)&(this->PointerButtonDownKeys).Elements.field_0x34) {
    uVar4 = ::GetTypeHash(EKeys::LeftMouseButton.KeyName.ComparisonIndex.Value);
    TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::RemoveImpl<FKey>
              (this_00,uVar4 + FVar1.Number,&EKeys::LeftMouseButton);
  }
  FVar1 = EKeys::RightMouseButton.KeyName;
  if (*(int *)&(this->PointerButtonDownKeys).Elements.field_0x8 !=
      *(int *)&(this->PointerButtonDownKeys).Elements.field_0x34) {
    uVar4 = ::GetTypeHash(EKeys::RightMouseButton.KeyName.ComparisonIndex.Value);
    TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::RemoveImpl<FKey>
              (this_00,uVar4 + FVar1.Number,&EKeys::RightMouseButton);
  }
  FVar1 = EKeys::MiddleMouseButton.KeyName;
  if (*(int *)&(this->PointerButtonDownKeys).Elements.field_0x8 !=
      *(int *)&(this->PointerButtonDownKeys).Elements.field_0x34) {
    uVar4 = ::GetTypeHash(EKeys::MiddleMouseButton.KeyName.ComparisonIndex.Value);
    TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::RemoveImpl<FKey>
              (this_00,uVar4 + FVar1.Number,&EKeys::MiddleMouseButton);
  }
  this_02 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  this_03 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_02);
  if (this_03 == (UCommonInputSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputSubsytem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                       ,0x28d,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = _vcall__224__flat______;
  TDelegate<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>::
  CreateSP<FCommonAnalogCursor>
            ((TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *)local_38,this,
             (pmf_dd1d858c *)&local_48);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(enum_ECommonInputType),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this_03->OnInputMethodChangedNative,
             (TDelegate<void___cdecl(ECommonInputType),FDefaultDelegateUserPolicy> *)
             &stack0x00000008);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0xe0);
  EVar3 = UCommonInputSubsystem::GetCurrentInputType(this_03);
                    /* WARNING: Could not recover jumptable at 0x00014a7f2860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,EVar3);
  return;
}

// IsAnalogMovementEnabled @ 14a7f4b00

bool __thiscall FCommonAnalogCursor::IsAnalogMovementEnabled(FCommonAnalogCursor *this)

{
  return this->bIsAnalogMovementEnabled;
}

// IsGameViewportInFocusPathWithoutCapture @ 14a7f57f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::IsGameViewportInFocusPathWithoutCapture(FCommonAnalogCursor *this)

{
  UGameViewportClient *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ULocalPlayer *pUVar5;
  FSlateApplication *this_01;
  TSharedPtr<FSlateUser,1> local_48;
  TSharedPtr<SViewport,1> local_38;
  TSharedPtr<SWidget_const_,1> local_28;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pUVar5 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  this_00 = (pUVar5->ViewportClient).field0_0x0.DebugPtr;
  if (this_00 != (UGameViewportClient *)0x0) {
    UGameViewportClient::GetGameViewportWidget(this_00,&local_38);
    if (local_38.Object != (SViewport *)0x0) {
      this_01 = FSlateApplication::Get();
      iVar4 = (**(code **)(this->_padding_ + 0x60))(this);
      FSlateApplication::GetUser(this_01,&local_48,iVar4);
      if (local_48.Object != (FSlateUser *)0x0) {
        if (local_48.Object == (FSlateUser *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        local_28.Object = (SWidget *)local_38.Object;
        local_28.SharedReferenceCount.ReferenceController =
             local_38.SharedReferenceCount.ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar2 = FSlateUser::DoesWidgetHaveCursorCapture(local_48.Object,&local_28);
        if (!bVar2) {
          if (local_48.Object == (FSlateUser *)0x0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_18.Object = (SWidget *)local_38.Object;
          local_18.SharedReferenceCount.ReferenceController =
               local_38.SharedReferenceCount.ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          bVar2 = FSlateUser::IsWidgetInFocusPath(local_48.Object,&local_18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          return bVar2;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// IsInViewport @ 14a7f5c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FCommonAnalogCursor::IsInViewport(FCommonAnalogCursor *this,TVector2<double> *param_1)

{
  UGameViewportClient *this_00;
  TVector2<float>_u_0_s_0 TVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ULocalPlayer *pUVar5;
  FGeometry *pFVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float fStackX_c;
  float local_64;
  float fStack_60;
  FSlateRect local_5c;
  TSharedPtr<SViewport,1> local_48;
  undefined8 local_38;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  TVector2<float>_u_0 local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pUVar5 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  this_00 = (pUVar5->ViewportClient).field0_0x0.DebugPtr;
  if (this_00 == (UGameViewportClient *)0x0) {
    return false;
  }
  UGameViewportClient::GetGameViewportWidget(this_00,&local_48);
  if (local_48.Object != (SViewport *)0x0) {
    if ((local_48.Object == (SViewport *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pFVar6 = SWidget::GetCachedGeometry((SWidget *)local_48.Object);
    uStack_2c = 0;
    uStack_28 = 0;
    local_38 = 0;
    local_c = pFVar6->Scale;
    TVar1 = (pFVar6->AbsolutePosition).field0_0x0._s_0;
    fStackX_c = SUB84(pFVar6->Size,4);
    local_res8 = SUB84(pFVar6->Size,0);
    fStack_24 = fStackX_c;
    local_30 = local_res8;
    local_64 = TVar1.X;
    local_20._s_0.X = local_c * 0.0 + local_64;
    fStack_60 = TVar1.Y;
    local_20._s_0.Y = local_c * 0.0 + fStack_60;
    local_18 = local_c * local_res8;
    local_14 = local_c * 0.0;
    local_10 = local_c * 0.0;
    local_c = local_c * fStackX_c;
    FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_20._s_0,&local_5c);
    fVar8 = (float)(param_1->field0_0x0)._s_0.X;
    fVar7 = (float)(param_1->field0_0x0)._s_0.Y;
    if ((((local_5c.Left <= fVar8) && (fVar8 <= local_5c.Right)) && (local_5c.Top <= fVar7)) &&
       (fVar7 <= local_5c.Bottom)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return false;
}

// IsRelevantInput @ 14a7f66d0

bool __thiscall
FCommonAnalogCursor::IsRelevantInput(FCommonAnalogCursor *this,FAnalogInputEvent *param_1)

{
  bool bVar1;
  
  if (this->ActiveInputMethod == Gamepad) {
    bVar1 = FAnalogCursor::IsRelevantInput((FAnalogCursor *)this,param_1);
    if (bVar1) {
      bVar1 = IsGameViewportInFocusPathWithoutCapture(this);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// IsRelevantInput @ 14a7f6710

bool __thiscall FCommonAnalogCursor::IsRelevantInput(FCommonAnalogCursor *this,FKeyEvent *param_1)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FKey *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uStackX_c;
  FKey local_28;
  
  bVar3 = false;
  bVar2 = false;
  if (this->ActiveInputMethod == Gamepad) {
    bVar4 = FAnalogCursor::IsRelevantInput((FAnalogCursor *)this,param_1);
    if (!bVar4) goto LAB_14a7f6791;
    bVar4 = IsGameViewportInFocusPathWithoutCapture(this);
    if (bVar4) {
      pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
      bVar4 = true;
      goto LAB_14a7f6799;
    }
    pFVar6 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_28);
    FVar1 = (param_1->Key).KeyName;
    pTVar7 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar2 = true;
    if (FVar1 == pFVar6->KeyName) {
      cVar5 = (**(code **)(this->_padding_ + 0xa0))(this);
      if (cVar5 != '\0') {
        bVar4 = true;
        goto LAB_14a7f6799;
      }
    }
  }
  else {
LAB_14a7f6791:
    pTVar7 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  bVar4 = false;
LAB_14a7f6799:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  return bVar4;
}

// IsUsingGamepad @ 14a7f72d0

bool __thiscall FCommonAnalogCursor::IsUsingGamepad(FCommonAnalogCursor *this)

{
  return this->ActiveInputMethod == Gamepad;
}

// OnVirtualAcceptHoldCanceled @ 14a7ffd10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FCommonAnalogCursor::OnVirtualAcceptHoldCanceled(FCommonAnalogCursor *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FKey *pFVar7;
  ULocalPlayer *this_00;
  UCommonInputSubsystem *this_01;
  FSlateApplication *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  FKey local_38;
  
  bVar3 = false;
  bVar4 = false;
  if ((this->ActiveKeyUpEvent).bIsSet == false) {
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pFVar7 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_38);
    if ((this->ActiveKeyUpEvent).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar9 = (this->ActiveKeyUpEvent).TypedValue.Key.KeyDetails.SharedReferenceCount.
             ReferenceController;
    FVar1 = (this->ActiveKeyUpEvent).TypedValue.Key.KeyName;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = true;
    bVar4 = true;
    if (FVar1 == pFVar7->KeyName) {
      pcVar2 = *(code **)(this->_padding_ + 0xb8);
      if ((this->ActiveKeyUpEvent).bIsSet == false) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      cVar6 = (*pcVar2)(this,&this->ActiveKeyUpEvent,0);
      if (cVar6 != '\0') {
        bVar5 = true;
        goto LAB_14a7ffdfa;
      }
    }
  }
  bVar5 = false;
LAB_14a7ffdfa:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
    this_01 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(this_00);
    if (this_01 == (UCommonInputSubsystem *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputSubsytem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                         ,0x28d,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UCommonInputSubsystem::SetIsGamepadSimulatedClick(this_01,true);
    if ((this->ActiveKeyUpEvent).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = FSlateApplication::Get();
    FAnalogCursor::HandleKeyDownEvent
              ((FAnalogCursor *)this,pFVar8,&(this->ActiveKeyUpEvent).TypedValue);
    UCommonInputSubsystem::SetIsGamepadSimulatedClick(this_01,false);
  }
  return;
}

// RefreshCursorSettings @ 14a80d220

void __thiscall FCommonAnalogCursor::RefreshCursorSettings(FCommonAnalogCursor *this)

{
  UObject *pUVar1;
  UClass *this_00;
  
  this_00 = UCommonUIInputSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&pUVar1[2].field_0x10;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)&pUVar1[2].field_0x14;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)&pUVar1[2].field_0x18;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&pUVar1[2].field_0x1c;
  *(uint *)&this->_padding_ = (uint)(pUVar1[2].field_0xc == '\0');
  return;
}

// RefreshCursorVisibility @ 14a80d290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCommonAnalogCursor::RefreshCursorVisibility(FCommonAnalogCursor *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FSlateApplication *this_00;
  TSharedPtr<FSlateUser,1> local_18;
  
  this_00 = FSlateApplication::Get();
  iVar4 = (**(code **)(this->_padding_ + 0x60))(this);
  FSlateApplication::GetUser(this_00,&local_18,iVar4);
  if (local_18.Object == (FSlateUser *)0x0) goto LAB_14a80d33c;
  if (this->bIsAnalogMovementEnabled == false) {
    bVar2 = UCommonUIActionRouterBase::ShouldAlwaysShowCursor(this->ActionRouter);
    if ((bVar2) || (this->ActiveInputMethod == MouseAndKeyboard)) goto LAB_14a80d2ff;
    bVar2 = false;
    FSlateApplication::SetPlatformCursorVisibility(this_00,false);
  }
  else {
LAB_14a80d2ff:
    bVar2 = true;
  }
  if (local_18.Object == (FSlateUser *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateUser::SetCursorVisibility(local_18.Object,bVar2);
LAB_14a80d33c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetNormalizedCursorPosition @ 14a81a520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FCommonAnalogCursor::SetNormalizedCursorPosition
          (FCommonAnalogCursor *this,TVector2<double> *param_1)

{
  double dVar1;
  UGameViewportClient *this_00;
  SViewport *this_01;
  int iVar2;
  FSlateApplication *this_02;
  ULocalPlayer *pUVar3;
  TSharedPtr<SViewport,1> *pTVar4;
  FGeometry *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_res8;
  float fStackX_c;
  float local_res18;
  float local_res1c;
  TSharedPtr<FSlateUser,1> local_48;
  TSharedPtr<SViewport,1> local_38 [3];
  
  this_02 = FSlateApplication::Get();
  iVar2 = (**(code **)(this->_padding_ + 0x60))(this);
  FSlateApplication::GetUser(this_02,&local_48,iVar2);
  if (local_48.Object != (FSlateUser *)0x0) {
    pUVar3 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
    this_00 = (pUVar3->ViewportClient).field0_0x0.DebugPtr;
    if (this_00 == (UGameViewportClient *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar4 = UGameViewportClient::GetGameViewportWidget(this_00,local_38);
      this_01 = pTVar4->Object;
      pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
      (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar4->Object = (SViewport *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38[0].SharedReferenceCount.ReferenceController);
      if (this_01 != (SViewport *)0x0) {
        dVar1 = *(double *)&param_1->field0_0x0;
        uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        uVar7 = SUB84(dVar1,0);
        uVar9 = (int)((ulonglong)dVar1 >> 0x20);
        if (__real_3ff0000000000000 <= dVar1) {
          uVar7 = SUB84(__real_3ff0000000000000,0);
          uVar9 = uVar8;
        }
        dVar1 = *(double *)((longlong)&param_1->field0_0x0 + 8);
        uVar10 = SUB84(dVar1,0);
        uVar11 = (int)((ulonglong)dVar1 >> 0x20);
        if (__real_3ff0000000000000 <= dVar1) {
          uVar10 = SUB84(__real_3ff0000000000000,0);
          uVar11 = uVar8;
        }
        if ((double)CONCAT44(uVar9,uVar7) <= 0.0) {
          uVar7 = 0;
          uVar9 = 0;
        }
        if ((double)CONCAT44(uVar11,uVar10) <= 0.0) {
          uVar10 = 0;
          uVar11 = 0;
        }
        pFVar5 = SWidget::GetCachedGeometry((SWidget *)this_01);
        local_res8 = SUB84(pFVar5->Size,0);
        local_res8 = (float)(double)CONCAT44(uVar9,uVar7) * local_res8;
        fStackX_c = SUB84(pFVar5->Size,4);
        fStackX_c = (float)(double)CONCAT44(uVar11,uVar10) * fStackX_c;
        local_res18 = fStackX_c * (pFVar5->AccumulatedRenderTransform).M.M[1][0] +
                      local_res8 * (pFVar5->AccumulatedRenderTransform).M.M[0][0] +
                      (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
        local_res1c = fStackX_c * (pFVar5->AccumulatedRenderTransform).M.M[1][1] +
                      local_res8 * (pFVar5->AccumulatedRenderTransform).M.M[0][1] +
                      (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
        FSlateUser::SetCursorPosition(local_48.Object,(FDeprecateVector2DParameter *)&local_res18);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// ShouldHandleRightAnalog @ 14a81d910

void __thiscall FCommonAnalogCursor::ShouldHandleRightAnalog(FCommonAnalogCursor *this,bool param_1)

{
  this->bShouldHandleRightAnalog = param_1;
  return;
}

// ShouldHideCursor @ 14a81d920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FCommonAnalogCursor::ShouldHideCursor(FCommonAnalogCursor *this)

{
  UGameViewportClient *this_00;
  bool bVar1;
  bool bVar2;
  FSlateApplication *this_01;
  ULocalPlayer *pUVar3;
  
  this_01 = FSlateApplication::Get();
  bVar1 = FSlateApplication::IsFakingTouchEvents(this_01);
  pUVar3 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
  this_00 = (pUVar3->ViewportClient).field0_0x0.DebugPtr;
  if (this_00 != (UGameViewportClient *)0x0) {
    bVar2 = UGameViewportClient::GetUseMouseForTouch(this_00);
    bVar1 = bVar1 || bVar2;
  }
  return (bool)(bVar1 ^ 1);
}

// ShouldVirtualAcceptSimulateMouseButton @ 14a81daa0

bool __thiscall
FCommonAnalogCursor::ShouldVirtualAcceptSimulateMouseButton
          (FCommonAnalogCursor *this,FKeyEvent *param_1,EInputEvent param_2)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarShouldVirtualAcceptSimulateMouseButton.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return pTVar2->ShadowedValue[0];
}

// Tick @ 14a8210f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FCommonAnalogCursor::Tick
          (FCommonAnalogCursor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  atomic<int> aVar1;
  FSlateUser *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  SViewport *pSVar5;
  ITableViewMetadata *pIVar6;
  IGameLayerManager *pIVar7;
  FActivatableTreeRoot *this_00;
  UWidget *this_01;
  SWidget *pSVar8;
  UGameViewportClient *pUVar9;
  code *pcVar10;
  TVector2<float>_u_0 TVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  FName FVar16;
  FName FVar17;
  FSharedReferencer<1> FVar18;
  float fVar19;
  FDeprecateSlateVector2D FVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  atomic<int> aVar25;
  TSharedPtr<FSlateUser,1> *pTVar26;
  UCommonInputSubsystem *pUVar27;
  TSharedPtr<ITableViewMetadata,1> *pTVar28;
  ITableRow *pIVar29;
  undefined8 *puVar30;
  TSharedPtr<SViewport,1> *pTVar31;
  FSlateApplication *this_02;
  UCommonUIInputSettings *pUVar32;
  TSharedPtr<SWidget,1> *pTVar33;
  FGeometry *pFVar34;
  ULocalPlayer *pUVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ushort uVar38;
  TReferenceControllerBase<1> *pTVar39;
  SViewport *pSVar40;
  SViewport *pSVar41;
  atomic<int> *paVar42;
  ForAnyElementType FVar43;
  SViewport *pSVar44;
  SViewport *pSVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  undefined1 auStackY_4b8 [32];
  undefined1 local_488 [4];
  undefined8 local_484;
  TSharedPtr<SWidget,1> local_478;
  undefined8 local_468;
  TArray<UWidget_const_*,TSizedDefaultAllocator<32>_> local_460;
  undefined8 local_450;
  FDeprecateSlateVector2D local_448;
  undefined8 local_440;
  FDeprecateSlateVector2D local_438;
  TSharedPtr<ITableRow,1> *local_430;
  int local_428;
  ushort local_420;
  FSlateUser *local_418;
  ulonglong local_410;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float fStack_3f4;
  ulonglong local_3f0;
  float local_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  TReferenceControllerBase<1> *local_3d0;
  undefined8 local_3c8;
  float local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  float fStack_3b4;
  FSlateRect local_3b0;
  TSharedPtr<SViewport,1> local_3a0;
  TSharedPtr<FActivatableTreeRoot,1> local_390;
  TVector2<float>_u_0 local_380;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  FDeprecateSlateVector2D local_368;
  LARGE_INTEGER local_360;
  FSlateApplication *local_358;
  undefined8 local_350;
  FSharedReferencer<1> local_348;
  TSharedRef<ICursor,1> *local_340;
  TVector2<float>_u_0_s_0 local_334;
  undefined1 local_328 [120];
  undefined2 local_2b0;
  bool local_2ae;
  FSlateUser *local_2a8;
  TReferenceControllerBase<1> *local_2a0;
  TSharedPtr<FSlateUser,1> local_298;
  TSharedPtr<FSlateUser,1> local_288;
  double local_278;
  double dStack_270;
  TVector2<double>_u_0 local_268;
  TSharedPtr<ITableViewMetadata,1> local_258;
  undefined1 local_248 [8];
  TReferenceControllerBase<1> *local_240;
  undefined8 local_238;
  undefined8 local_230;
  TSharedPtr<SViewport,1> local_228;
  FString local_218;
  FString local_208;
  TSharedPtr<SViewport,1> local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  TSharedPtr<SWidget,1> local_1d8;
  TSharedPtr<SWidget_const_,1> local_1c8;
  undefined8 local_1b8 [2];
  undefined8 local_1a8 [2];
  undefined1 local_198 [32];
  void *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  void *local_158;
  ulonglong local_150;
  FGeometry local_148;
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  pSVar40 = (SViewport *)0x0;
  local_358 = param_2;
  local_340 = param_3;
  (**(code **)(this->_padding_ + 0xd8))();
  if ((this->ActiveInputMethod != Gamepad) ||
     (bVar21 = IsGameViewportInFocusPathWithoutCapture(this), !bVar21)) {
    if (&this->LastCursorTarget != (TWeakPtr<SWidget,1> *)local_1a8) {
      pTVar39 = (this->LastCursorTarget).WeakReferenceCount.ReferenceController;
      (this->LastCursorTarget).Object = (SWidget *)0x0;
      (this->LastCursorTarget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar42 = &pTVar39->WeakReferenceCount;
        aVar1 = *paVar42;
        *paVar42 = (atomic<int>)((int)*paVar42 + -1);
        UNLOCK();
        if (aVar1 == (atomic<int>)0x1) {
          (**(code **)(pTVar39->_padding_ + 8))(pTVar39,1);
        }
      }
    }
    goto LAB_14a82226f;
  }
  iVar23 = (**(code **)(this->_padding_ + 0x60))(this);
  pTVar26 = FSlateApplication::GetUser(param_2,&local_288,iVar23);
  if ((pTVar26->Object == (FSlateUser *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = pTVar26->Object;
  pTVar39 = (pTVar26->SharedReferenceCount).ReferenceController;
  (pTVar26->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar26->Object = (FSlateUser *)0x0;
  local_418 = pFVar2;
  local_3d0 = pTVar39;
  if ((pFVar2 == (FSlateUser *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  fVar14 = __real_3f000000;
  fVar12 = __real_322bcc77;
  if (this->bIsAnalogMovementEnabled == false) {
    pUVar32 = UCommonUIInputSettings::Get();
    if (pUVar32->bLinkCursorToGamepadFocus != false) {
      pSVar5 = (SViewport *)(this->LastCursorTarget).WeakReferenceCount.ReferenceController;
      pSVar44 = pSVar40;
      pSVar45 = pSVar5;
      if (pSVar5 != (SViewport *)0x0) {
        iVar23 = (int)pSVar5->_padding_;
        do {
          pSVar45 = pSVar40;
          if (iVar23 == 0) goto LAB_14a821336;
          LOCK();
          iVar24 = (int)pSVar5->_padding_;
          bVar21 = iVar23 == iVar24;
          if (bVar21) {
            *(int *)&pSVar5->_padding_ = iVar23 + 1;
            iVar24 = iVar23;
          }
          UNLOCK();
          iVar23 = iVar24;
        } while (!bVar21);
        pSVar44 = (SViewport *)(this->LastCursorTarget).Object;
        pSVar45 = pSVar5;
      }
LAB_14a821336:
      FSlateUser::GetFocusedWidget(pFVar2,&local_478);
      if ((SViewport *)local_478.Object == (SViewport *)0x0) {
        pTVar39 = (TReferenceControllerBase<1> *)0x0;
        local_238 = 0;
        local_230 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        if (((SViewport *)local_478.Object == (SViewport *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar28 = SWidget::GetMetaData<ITableViewMetadata>(local_478.Object,&local_258);
        pIVar6 = pTVar28->Object;
        pTVar39 = (pTVar28->SharedReferenceCount).ReferenceController;
        (pTVar28->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar28->Object = (ITableViewMetadata *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_258.SharedReferenceCount.ReferenceController);
        if (pIVar6 != (ITableViewMetadata *)0x0) {
          (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,&local_430);
          if (0 < local_428) {
            if (local_430->Object == (ITableRow *)0x0) {
              bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4521900508788555594>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonAnalogCursor.cpp"
                                  ,0xb6,"SelectedRows[0].IsValid()");
              if (bVar21) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            else {
              if ((local_428 < 1) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pIVar29 = TSharedPtr<ITableRow,1>::operator->(local_430);
              puVar30 = (undefined8 *)(**(code **)((longlong)*pIVar29 + 0x58))(pIVar29,local_248);
              local_348.ReferenceController = (TReferenceControllerBase<1> *)puVar30[1];
              local_478.Object = (SWidget *)*puVar30;
              if (local_348.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_348.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_348.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_350 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_478.SharedReferenceCount,&local_348);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_348.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_240);
            }
          }
          DestructItems<TSharedPtr<ITableRow,1>,int>(local_430,local_428);
          if (local_430 != (TSharedPtr<ITableRow,1> *)0x0) {
            FMemory::Free(local_430);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
      FGeometry::FGeometry(&local_148);
      if ((SViewport *)local_478.Object != (SViewport *)0x0) {
        pUVar35 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
        pTVar31 = UGameViewportClient::GetGameViewportWidget
                            ((pUVar35->ViewportClient).field0_0x0.DebugPtr,&local_228);
        bVar21 = (SViewport *)local_478.Object == pTVar31->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.SharedReferenceCount.ReferenceController);
        if (bVar21) {
          pUVar35 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
          pUVar9 = (pUVar35->ViewportClient).field0_0x0.DebugPtr;
          pSVar5 = (SViewport *)(pUVar9->GameLayerManagerPtr).WeakReferenceCount.ReferenceController
          ;
          pSVar41 = pSVar5;
          if (pSVar5 != (SViewport *)0x0) {
            aVar1 = *(atomic<int> *)&pSVar5->_padding_;
            do {
              pSVar41 = pSVar40;
              if (aVar1 == (atomic<int>)0x0) goto LAB_14a821574;
              LOCK();
              aVar25 = *(atomic<int> *)&pSVar5->_padding_;
              bVar21 = aVar1 == aVar25;
              if (bVar21) {
                *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar1 + 1);
                aVar25 = aVar1;
              }
              UNLOCK();
              aVar1 = aVar25;
            } while (!bVar21);
            pIVar7 = (pUVar9->GameLayerManagerPtr).Object;
            pSVar41 = pSVar5;
            if (pIVar7 != (IGameLayerManager *)0x0) {
              pcVar10 = *(code **)((longlong)*pIVar7 + 0x18);
              CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
              pFVar34 = (FGeometry *)(*pcVar10)(pIVar7,local_110);
              FGeometry::operator=(&local_148,pFVar34);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)pSVar5);
              goto LAB_14a82164a;
            }
          }
LAB_14a821574:
          bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4521900508788555580>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonAnalogCursor.cpp"
                              ,0xc4,"GameLayerManager");
          if (bVar21) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar41);
        }
        else {
          if (((SViewport *)local_478.Object == (SViewport *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar34 = SWidget::GetTickSpaceGeometry(local_478.Object);
          FGeometry::operator=(&local_148,pFVar34);
        }
      }
LAB_14a82164a:
      bVar21 = (SViewport *)local_478.Object != pSVar44;
      if ((bVar21) ||
         (((SViewport *)local_478.Object != (SViewport *)0x0 &&
          (bVar22 = TTransform2<float>::operator==
                              (&local_148.AccumulatedRenderTransform,
                               &this->LastCursorTargetTransform), !bVar22)))) {
        if ((bVar21) && (5 < (byte)LogCommonUI._0_1_)) {
          FReflectionMetaData::GetWidgetDebugInfo(&local_218,local_478.Object);
          (**(code **)(this->_padding_ + 0x60))(this);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
        }
        pFVar2 = local_418;
        if ((pSVar44 != (SViewport *)local_478.Object) &&
           (bVar21 = FSlateUser::HasCursorCapture(local_418), bVar21)) {
          local_1c8.Object = local_478.Object;
          local_1c8.SharedReferenceCount.ReferenceController =
               local_478.SharedReferenceCount.ReferenceController;
          if (local_478.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          bVar21 = FSlateUser::DoesWidgetHaveAnyCapture(pFVar2,&local_1c8);
          if (!bVar21) {
            if (4 < (byte)LogCommonUI._0_1_) {
              (**(code **)(this->_padding_ + 0x60))(this);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
            }
            FSlateUser::ReleaseCursorCapture(pFVar2);
          }
        }
        FVar18.ReferenceController = local_478.SharedReferenceCount.ReferenceController;
        (this->LastCursorTarget).Object = local_478.Object;
        if (local_478.SharedReferenceCount.ReferenceController !=
            (this->LastCursorTarget).WeakReferenceCount.ReferenceController) {
          if (local_478.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_478.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)(local_478.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1)
            ;
            UNLOCK();
          }
          pTVar39 = (this->LastCursorTarget).WeakReferenceCount.ReferenceController;
          if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar42 = &pTVar39->WeakReferenceCount;
            aVar1 = *paVar42;
            *paVar42 = (atomic<int>)((int)*paVar42 + -1);
            UNLOCK();
            if (aVar1 == (atomic<int>)0x1) {
              (**(code **)(pTVar39->_padding_ + 8))(pTVar39,1);
            }
          }
          (this->LastCursorTarget).WeakReferenceCount.ReferenceController =
               FVar18.ReferenceController;
        }
        FVar20 = local_450;
        if ((SViewport *)local_478.Object != (SViewport *)0x0) {
          local_450 = local_148.Size;
          FVar20 = local_450;
          local_450._0_4_ = local_148.Size._0_4_;
          fVar46 = (float)local_450;
          if (fVar12 < (float)local_450) {
            FVar20 = local_450;
            local_450._4_4_ = local_148.Size._4_4_;
            if (fVar12 < local_450._4_4_) {
              TVar11._s_0.Y = local_148.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
              TVar11._s_0.X = local_148.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
              (this->LastCursorTargetTransform).M.M[0][0] =
                   local_148.AccumulatedRenderTransform.M.M[0][0];
              (this->LastCursorTargetTransform).M.M[0][1] =
                   local_148.AccumulatedRenderTransform.M.M[0][1];
              (this->LastCursorTargetTransform).M.M[1][0] =
                   local_148.AccumulatedRenderTransform.M.M[1][0];
              (this->LastCursorTargetTransform).M.M[1][1] =
                   local_148.AccumulatedRenderTransform.M.M[1][1];
              (this->LastCursorTargetTransform).Trans.field0_0x0 = TVar11;
              local_408 = local_450._4_4_ * fVar14 * local_148.AccumulatedRenderTransform.M.M[1][0]
                          + fVar46 * fVar14 * local_148.AccumulatedRenderTransform.M.M[0][0] +
                          local_148.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X;
              local_404 = local_450._4_4_ * fVar14 * local_148.AccumulatedRenderTransform.M.M[1][1]
                          + fVar46 * fVar14 * local_148.AccumulatedRenderTransform.M.M[0][1] +
                          local_148.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
              local_484 = CONCAT44(local_404,local_408);
              local_410 = local_484;
              local_450 = FVar20;
              FSlateUser::SetCursorPosition(pFVar2,(FDeprecateVector2DParameter *)&local_408);
              if (5 < (byte)LogCommonUI._0_1_) {
                FReflectionMetaData::GetWidgetDebugInfo(&local_208,local_478.Object);
                (**(code **)(this->_padding_ + 0x60))(this);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
                if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_14a821a7a;
            }
          }
        }
        local_450 = FVar20;
        this_02 = FSlateApplication::Get();
        iVar23 = (**(code **)(this->_padding_ + 0x60))(this);
        FSlateApplication::GetUser(this_02,&local_298,iVar23);
        if (local_298.Object != (FSlateUser *)0x0) {
          pUVar35 = CastChecked<ULocalPlayer,UObject>((UObject *)this->ActionRouter->_padding_);
          pUVar9 = (pUVar35->ViewportClient).field0_0x0.DebugPtr;
          if (pUVar9 == (UGameViewportClient *)0x0) {
            pTVar39 = (TReferenceControllerBase<1> *)0x0;
            local_1e8 = 0;
            local_1e0 = 0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
          }
          else {
            pTVar31 = UGameViewportClient::GetGameViewportWidget(pUVar9,&local_1f8);
            pSVar40 = pTVar31->Object;
            pTVar39 = (pTVar31->SharedReferenceCount).ReferenceController;
            (pTVar31->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
            ;
            pTVar31->Object = (SViewport *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1f8.SharedReferenceCount.ReferenceController);
            if (pSVar40 != (SViewport *)0x0) {
              uVar52 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              uVar51 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,0);
              uVar53 = (int)((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_ >>
                            0x20);
              if (__real_3ff0000000000000 <=
                  UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y) {
                uVar51 = SUB84(__real_3ff0000000000000,0);
                uVar53 = uVar52;
              }
              uVar49 = SUB84(UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,0);
              uVar50 = (int)((ulonglong)UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
              if (__real_3ff0000000000000 <=
                  UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) {
                uVar49 = SUB84(__real_3ff0000000000000,0);
                uVar50 = uVar52;
              }
              if ((double)CONCAT44(uVar53,uVar51) <= 0.0) {
                uVar53 = 0;
                uVar51 = 0;
              }
              if ((double)CONCAT44(uVar50,uVar49) <= 0.0) {
                uVar50 = 0;
                uVar49 = 0;
              }
              pFVar34 = SWidget::GetCachedGeometry((SWidget *)pSVar40);
              local_484._0_4_ = SUB84(pFVar34->Size,0);
              local_484._0_4_ = (float)(double)CONCAT44(uVar50,uVar49) * (float)local_484;
              local_484._4_4_ = SUB84(pFVar34->Size,4);
              local_484._4_4_ = (float)(double)CONCAT44(uVar53,uVar51) * local_484._4_4_;
              local_400 = local_484._4_4_ * (pFVar34->AccumulatedRenderTransform).M.M[1][0] +
                          (float)local_484 * (pFVar34->AccumulatedRenderTransform).M.M[0][0] +
                          (pFVar34->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
              local_3fc = local_484._4_4_ * (pFVar34->AccumulatedRenderTransform).M.M[1][1] +
                          (float)local_484 * (pFVar34->AccumulatedRenderTransform).M.M[0][1] +
                          (pFVar34->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
              local_484 = CONCAT44(local_3fc,local_400);
              local_3f0 = local_484;
              FSlateUser::SetCursorPosition
                        (local_298.Object,(FDeprecateVector2DParameter *)&local_400);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar39);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_298.SharedReferenceCount.ReferenceController);
      }
LAB_14a821a7a:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_478.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar45);
      pTVar39 = local_3d0;
    }
  }
  else {
    if (&this->LastCursorTarget != (TWeakPtr<SWidget,1> *)local_1b8) {
      pTVar3 = (this->LastCursorTarget).WeakReferenceCount.ReferenceController;
      (this->LastCursorTarget).Object = (SWidget *)0x0;
      (this->LastCursorTarget).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar42 = &pTVar3->WeakReferenceCount;
        aVar1 = *paVar42;
        *paVar42 = (atomic<int>)((int)*paVar42 + -1);
        UNLOCK();
        if (aVar1 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
    lVar4 = this->_padding_;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2a8 = pFVar2;
    local_2a0 = pTVar39;
    (**(code **)(lVar4 + 0x98))(this,&local_278,param_1,param_2);
    pUVar27 = UCommonUIActionRouterBase::GetInputSubsystem(this->ActionRouter);
    local_268._s_0.X = local_278;
    local_268._s_0.Y = dStack_270;
    UCommonInputSubsystem::SetCursorPosition(pUVar27,(TVector2<double> *)&local_268._s_0,false);
  }
  if (this->bShouldHandleRightAnalog != false) {
    fVar46 = this->TimeUntilScrollUpdate - param_1;
    fVar54 = 0.0;
    this->TimeUntilScrollUpdate = fVar46;
    if ((fVar46 <= 0.0) &&
       (___real_3fa47ae160000000 <
        (double)this->_padding_ * (double)this->_padding_ +
        (double)this->_padding_ * (double)this->_padding_)) {
      this_00 = (this->ActionRouter->ActiveRootNode).Object;
      if (this_00 == (FActivatableTreeRoot *)0x0) {
        UCommonUIActionRouterBase::FindActiveActionDomainRootNode(this->ActionRouter,&local_390);
        if (local_390.Object != (FActivatableTreeRoot *)0x0) {
          if ((local_390.Object == (FActivatableTreeRoot *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_460.ArrayNum = 0;
          local_460.ArrayMax = 0;
          FActivatableTreeNode::AppendValidScrollRecipients
                    ((FActivatableTreeNode *)local_390.Object,&local_460);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_390.SharedReferenceCount.ReferenceController);
          goto LAB_14a821b7e;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_390.SharedReferenceCount.ReferenceController);
        local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_460.ArrayNum = 0;
        local_460.ArrayMax = 0;
      }
      else {
        local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_460.ArrayNum = 0;
        local_460.ArrayMax = 0;
        FActivatableTreeNode::AppendValidScrollRecipients
                  ((FActivatableTreeNode *)this_00,&local_460);
LAB_14a821b7e:
        if (0 < local_460.ArrayNum) {
          pUVar32 = UCommonUIInputSettings::Get();
          uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          fVar46 = (pUVar32->AnalogCursorSettings).ScrollDeadZone;
          fVar47 = (float)(double)this->_padding_;
          fVar55 = (float)((uint)fVar47 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar46;
          if (0.0 < fVar55) {
            fVar48 = __real_3f800000;
            if ((fVar47 <= 0.0) && (fVar48 = __real_bf800000, 0.0 <= fVar47)) {
              fVar48 = 0.0;
            }
            fVar47 = (fVar55 / (fVar46 - __real_3f800000)) * fVar48 *
                     (pUVar32->AnalogCursorSettings).ScrollMultiplier;
          }
          else {
            fVar47 = 0.0;
          }
          fVar48 = (float)(double)this->_padding_;
          fVar55 = (float)((uint)fVar48 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar46;
          if (0.0 < fVar55) {
            fVar54 = __real_3f800000;
            if ((fVar48 <= 0.0) && (fVar54 = __real_bf800000, 0.0 <= fVar48)) {
              fVar54 = 0.0;
            }
            fVar54 = (fVar55 / (fVar46 - __real_3f800000)) * fVar54 *
                     (pUVar32->AnalogCursorSettings).ScrollMultiplier;
          }
          uVar36 = (ulonglong)local_460.ArrayNum;
          local_484 = CONCAT44(local_484._4_4_,local_460.ArrayNum);
          local_368 = (FDeprecateSlateVector2D)
                      ((longlong)local_460.AllocatorInstance.Data + uVar36 * 8);
          uVar37 = uVar36;
          FVar43.Data = local_460.AllocatorInstance.Data;
          uVar38 = local_420;
          while( true ) {
            FVar20 = local_368;
            local_450 = (FDeprecateSlateVector2D)FVar43.Data;
            if ((int)uVar36 != (int)uVar37) {
              local_488[0] = 0;
              `TCheckedPointerIterator<UWidget_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_488);
            }
            pTVar39 = local_3d0;
            if ((FDeprecateSlateVector2D)FVar43.Data == FVar20) break;
            this_01 = *(UWidget **)FVar43.Data;
            if ((this_01 == (UWidget *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ScrollRecipient",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonAnalogCursor.cpp"
                                    ,0x112,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar33 = UWidget::GetCachedWidget(this_01,&local_1d8);
            pSVar8 = pTVar33->Object;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1d8.SharedReferenceCount.ReferenceController);
            if (pSVar8 != (SWidget *)0x0) {
              iVar23 = (**(code **)(this->_padding_ + 200))(this,this_01);
              fVar46 = fVar54;
              if (iVar23 == 1) {
                fVar46 = fVar47;
              }
              if (fVar12 < (float)((uint)fVar46 & uVar13)) {
                pFVar34 = UWidget::GetCachedGeometry(this_01);
                local_440._0_4_ = SUB84(pFVar34->Size,0);
                local_440._4_4_ = SUB84(pFVar34->Size,4);
                fVar55 = local_440._4_4_ * fVar14 * (pFVar34->AccumulatedRenderTransform).M.M[1][0]
                         + (float)local_440 * fVar14 *
                           (pFVar34->AccumulatedRenderTransform).M.M[0][0] +
                         (pFVar34->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
                fVar48 = local_440._4_4_ * fVar14 * (pFVar34->AccumulatedRenderTransform).M.M[1][1]
                         + (float)local_440 * fVar14 *
                           (pFVar34->AccumulatedRenderTransform).M.M[0][1] +
                         (pFVar34->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
                local_440 = CONCAT44(fVar48,fVar55);
                local_3f8 = fVar55;
                fStack_3f4 = fVar48;
                pUVar35 = CastChecked<ULocalPlayer,UObject>
                                    ((UObject *)this->ActionRouter->_padding_);
                pUVar9 = (pUVar35->ViewportClient).field0_0x0.DebugPtr;
                if (pUVar9 != (UGameViewportClient *)0x0) {
                  UGameViewportClient::GetGameViewportWidget(pUVar9,&local_3a0);
                  if (local_3a0.Object == (SViewport *)0x0) {
LAB_14a821ef0:
                    bVar21 = false;
                  }
                  else {
                    if ((local_3a0.Object == (SViewport *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar21)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    pFVar34 = SWidget::GetCachedGeometry((SWidget *)local_3a0.Object);
                    uStack_3bc = 0;
                    uStack_3b8 = 0;
                    local_3c8 = 0;
                    local_36c = pFVar34->Scale;
                    local_438 = pFVar34->Size;
                    local_334 = (pFVar34->AbsolutePosition).field0_0x0._s_0;
                    local_468._0_4_ = local_438._0_4_;
                    local_378 = (float)local_468;
                    local_3c0 = (float)local_468;
                    local_468._4_4_ = local_438._4_4_;
                    fVar19 = local_468._4_4_;
                    fStack_3b4 = local_468._4_4_;
                    local_448 = (FDeprecateSlateVector2D)((ulonglong)(uint)local_468._4_4_ << 0x20);
                    local_438 = (FDeprecateSlateVector2D)((ulonglong)local_438 & 0xffffffff);
                    local_468 = (FKeyDetails *)0x0;
                    local_380._s_0.X = local_36c * 0.0 + local_334.X;
                    local_380._s_0.Y = local_36c * 0.0 + local_334.Y;
                    local_378 = local_36c * local_378;
                    local_374 = local_36c * 0.0;
                    local_370 = local_36c * 0.0;
                    local_36c = local_36c * fVar19;
                    FSlateRotatedRect::ToBoundingRect
                              ((FSlateRotatedRect *)&local_380._s_0,&local_3b0);
                    if ((((fVar55 < local_3b0.Left) || (local_3b0.Right < fVar55)) ||
                        (fVar48 < local_3b0.Top)) || (local_3b0.Bottom < fVar48))
                    goto LAB_14a821ef0;
                    bVar21 = true;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_3a0.SharedReferenceCount.ReferenceController)
                  ;
                  FVar18 = EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount;
                  FVar16 = EKeys::MouseWheelAxis.KeyName;
                  if (bVar21) {
                    uVar38 = uVar38 & 0xfe00;
                    local_468 = EKeys::MouseWheelAxis.KeyDetails.Object;
                    if (EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount.ReferenceController ==
                        (TReferenceControllerBase<1> *)0x0) {
                      paVar42 = (atomic<int> *)&DAT_00000008;
                    }
                    else {
                      paVar42 = &(EKeys::MouseWheelAxis.KeyDetails.SharedReferenceCount.
                                 ReferenceController)->SharedReferenceCount;
                      LOCK();
                      *paVar42 = (atomic<int>)((int)*paVar42 + 1);
                      UNLOCK();
                    }
                    uVar15 = FSlateApplicationBase::CursorPointerIndex;
                    local_168 = 0xffffffff;
                    local_198._16_8_ = 0;
                    local_198._24_8_ = 0;
                    local_160 = 0;
                    local_150 = 0;
                    local_198._0_8_ = (void *)0x0;
                    local_198._8_8_ = 0;
                    local_178 = (void *)0x0;
                    local_170 = 0;
                    local_16c = 0x80;
                    local_164 = 0;
                    local_158 = (void *)0x0;
                    local_328._12_4_ = local_418->UserIndex;
                    local_328._0_8_ = &___7FInputEvent__6B_;
                    local_328[10] = 0;
                    local_328._24_8_ = 0;
                    local_3e8 = fVar55;
                    fStack_3e4 = fVar48;
                    local_3e0 = fVar55;
                    fStack_3dc = fVar48;
                    local_328._8_2_ = uVar38;
                    local_328._16_4_ = local_328._12_4_;
                    QueryPerformanceCounter(&local_360);
                    FVar17 = EKeys::MouseWheelAxis.KeyName;
                    local_448._4_4_ = fStack_3e4;
                    local_448._0_4_ = local_3e8;
                    local_328._32_8_ = local_360;
                    local_328._0_8_ = &___7FPointerEvent__6B_;
                    local_438._4_4_ = fStack_3dc;
                    local_438._0_4_ = local_3e0;
                    EKeys::MouseWheelAxis.KeyName.ComparisonIndex = FVar16.ComparisonIndex.Value;
                    EKeys::MouseWheelAxis.KeyName.Number = FVar16.Number;
                    local_328._72_4_ = EKeys::MouseWheelAxis.KeyName.ComparisonIndex.Value;
                    local_328._76_4_ = EKeys::MouseWheelAxis.KeyName.Number;
                    local_328._88_8_ = FVar18.ReferenceController;
                    local_3d8 = local_3e8 - local_3e0;
                    fStack_3d4 = fStack_3e4 - fStack_3dc;
                    local_328._60_4_ = fStack_3d4;
                    local_328._56_4_ = local_3d8;
                    local_328._64_8_ = local_198;
                    local_328._80_8_ = local_468;
                    EKeys::MouseWheelAxis.KeyName = FVar17;
                    if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      *paVar42 = (atomic<int>)((int)*paVar42 + 1);
                      UNLOCK();
                    }
                    local_328._96_4_ = uVar15;
                    local_328._100_4_ = 0;
                    local_328._104_4_ = 1.0;
                    local_328[0x6c] = false;
                    local_328[0x6d] = None;
                    local_328._112_4_ = 0;
                    local_2b0._0_1_ = false;
                    local_2b0._1_1_ = false;
                    local_2ae = false;
                    local_328._40_8_ = local_448;
                    local_328._48_8_ = local_438;
                    local_328._116_4_ = fVar46;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(FVar18.ReferenceController);
                    local_150 = local_150 & 0xffffffff00000000;
                    if (local_158 != (void *)0x0) {
                      FMemory::Free(local_158);
                    }
                    TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::Empty((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_198,0);
                    if (local_178 != (void *)0x0) {
                      FMemory::Free(local_178);
                    }
                    if ((void *)local_198._0_8_ != (void *)0x0) {
                      FMemory::Free((void *)local_198._0_8_);
                    }
                    pUVar35 = CastChecked<ULocalPlayer,UObject>
                                        ((UObject *)this->ActionRouter->_padding_);
                    pUVar27 = ULocalPlayer::GetSubsystem<UCommonInputSubsystem>(pUVar35);
                    if ((pUVar27 == (UCommonInputSubsystem *)0x0) &&
                       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InputSubsytem",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                                            ,0x28d,L""), bVar21)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    UCommonInputSubsystem::SetIsGamepadSimulatedClick(pUVar27,true);
                    FSlateApplication::ProcessMouseWheelOrGestureEvent
                              (local_358,(FPointerEvent *)local_328,(FPointerEvent *)0x0);
                    UCommonInputSubsystem::SetIsGamepadSimulatedClick(pUVar27,false);
                    FPointerEvent::~FPointerEvent((FPointerEvent *)local_328);
                  }
                }
              }
            }
            uVar36 = local_460._8_8_ & 0xffffffff;
            FVar43.Data = (FScriptContainerElement *)((longlong)local_450 + 8);
            uVar37 = local_484 & 0xffffffff;
          }
        }
      }
      if ((FDeprecateSlateVector2D)local_460.AllocatorInstance.Data != (FDeprecateSlateVector2D)0x0)
      {
        FMemory::Free(local_460.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
LAB_14a82226f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_340->SharedReferenceCount).ReferenceController);
  return;
}

