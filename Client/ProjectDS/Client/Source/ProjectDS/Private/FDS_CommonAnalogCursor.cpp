// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// FDS_CommonAnalogCursor @ 14b8b15c0

FDS_CommonAnalogCursor * __thiscall
FDS_CommonAnalogCursor::FDS_CommonAnalogCursor
          (FDS_CommonAnalogCursor *this,UCommonUIActionRouterBase *param_1)

{
  FCommonAnalogCursor::FCommonAnalogCursor((FCommonAnalogCursor *)this,param_1);
  this->bIsCursorLock = false;
  this->_padding_ = (longlong)&___7FDS_CommonAnalogCursor__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return this;
}

// CalculateTickedCursorPosition @ 14b8b73f0

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

TVector2<double> * __thiscall
FDS_CommonAnalogCursor::CalculateTickedCursorPosition
          (FDS_CommonAnalogCursor *this,TVector2<double> *__return_storage_ptr__,float param_1,
          FSlateApplication *param_2,TSharedPtr<FSlateUser,1> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  code *pcVar7;
  FArrangedWidget *pFVar8;
  bool bVar9;
  uint uVar10;
  FSceneViewport *pFVar11;
  TIntPoint<int> TVar12;
  FSlateApplication *pFVar13;
  TVector2<double> *pTVar14;
  FDeprecateSlateVector2D FVar15;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined7 extraout_var;
  FName *pFVar17;
  FName *pFVar18;
  longlong extraout_RAX;
  longlong lVar19;
  ForElementType<FArrangedWidget> FVar20;
  TSharedRef<SWidget,1> *pTVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  int local_2a0;
  undefined1 local_298 [8];
  FArrangedWidget *local_290;
  undefined8 local_288;
  TSharedPtr<FSlateUser,1> *local_280;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_278;
  TVector2<double>_u_0 local_268 [2];
  FName local_248;
  undefined1 local_240 [8];
  FName local_238;
  undefined1 local_230 [8];
  FWidgetPath local_228;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_280 = param_3;
  if (this->bIsCursorLock == true) {
    pFVar11 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
    local_288 = (pFVar11->CachedGeometry).Size;
    local_268[0]._0_8_ = (double)(float)local_288 * __real_3fe0000000000000;
    local_268[0]._8_8_ = (double)local_288._4_4_ * __real_3fe0000000000000;
    TVar12 = UE::Math::TVector2<double>::IntPoint((TVector2<double> *)&local_268[0]._s_0);
    uVar4 = *(undefined8 *)TVar12.field0_0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(int)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)((ulonglong)uVar4 >> 0x20);
    pFVar13 = FSlateApplication::Get();
    (**(code **)(*(longlong *)&pFVar13->field_0x198 + 0x1d0))
              (&pFVar13->field_0x198,__return_storage_ptr__);
  }
  else {
    if ((param_3->Object == (FSlateUser *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TVector2<double> *)(*pcVar7)();
      return pTVar14;
    }
    FVar15 = FSlateUser::GetCursorPosition(param_3->Object);
    fVar31 = __real_3f800000;
    dVar24 = (double)this->_padding_;
    dVar28 = (double)this->_padding_;
    fVar30 = 0.0;
    fVar1 = *(float *)FVar15;
    fVar2 = *(float *)((longlong)FVar15 + 4);
    pFVar8 = *(FArrangedWidget **)FVar15;
    fVar25 = (float)SQRT(dVar28 * dVar28 + dVar24 * dVar24);
    if (0.0 < fVar25) {
      fVar26 = fVar25 - *(float *)((longlong)&this->_padding_ + 4);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      dVar27 = (double)(fVar26 / (__real_3f800000 - *(float *)((longlong)&this->_padding_ + 4)));
      dVar24 = dVar24 * (__real_3ff0000000000000 / (double)fVar25) * dVar27;
      dVar28 = dVar28 * (__real_3ff0000000000000 / (double)fVar25) * dVar27;
    }
    pcVar7 = *(code **)(*(longlong *)param_2 + 0x108);
    if ((param_3->Object == (FSlateUser *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar14 = (TVector2<double> *)(*pcVar7)();
      return pTVar14;
    }
    iVar3 = param_3->Object->UserIndex;
    pTVar16 = FSlateApplication::GetInteractiveTopLevelWindows(param_2,&local_278);
    local_2a8 = 0;
    local_2a0 = iVar3;
    local_290 = pFVar8;
    (*pcVar7)(param_2,&local_228,pFVar8,pTVar16);
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
    if ((TSharedRef<SWindow,1> *)local_278.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    bVar9 = FWidgetPath::IsValid(&local_228);
    iVar3 = local_228.Widgets.Array.ArrayNum;
    uVar10 = (uint)CONCAT71(extraout_var,bVar9);
    if (bVar9) {
      FVar20 = (ForElementType<FArrangedWidget>)&local_228.Widgets.Array;
      if (local_228.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar20 = local_228.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      pTVar21 = (TSharedRef<SWidget,1> *)((longlong)FVar20 + 0x38);
      local_290 = (FArrangedWidget *)
                  ((longlong)FVar20 + (longlong)local_228.Widgets.Array.ArrayNum * 0x48);
      while( true ) {
        pFVar8 = local_290;
        if (local_228.Widgets.Array.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FArrangedWidget_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_298);
        }
        lVar19 = (longlong)(pTVar21 + -4) + 8;
        if ((FArrangedWidget *)lVar19 == pFVar8) goto LAB_14b8b7798;
        pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
        pSVar6 = pTVar21->Object;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar17 = ::FName::FName(&local_248,"CommonButton");
        pFVar18 = (FName *)(**(code **)(pSVar6->_padding_ + 0x1f0))(pSVar6,local_240);
        if (*pFVar18 == *pFVar17) break;
        pFVar17 = ::FName::FName(&local_238,"Slot");
        pFVar18 = (FName *)(**(code **)(pSVar6->_padding_ + 0x1f0))(pSVar6,local_230);
        if (*pFVar18 == *pFVar17) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        pTVar21 = (TSharedRef<SWidget,1> *)((longlong)(pTVar21 + 4) + 8);
      }
      fVar31 = this->CursorStickySlowdown;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      lVar19 = extraout_RAX;
LAB_14b8b7798:
      uVar10 = (uint)lVar19;
      param_3 = local_280;
    }
    iVar3 = (int)this->_padding_;
    if (iVar3 == 0) {
      fVar25 = 0.0;
      fVar26 = 0.0;
      dVar27 = (double)this->CursorMaxSpeed * dVar24;
      if (dVar24 <= 0.0) {
        fVar25 = (float)dVar27;
      }
      else {
        fVar26 = (float)dVar27;
      }
      fVar29 = 0.0;
      dVar27 = (double)this->CursorMaxSpeed * dVar28;
      if (dVar28 <= 0.0) {
        fVar30 = (float)dVar27;
      }
      else {
        fVar29 = (float)dVar27;
      }
      dVar27 = dVar24 * dVar24 * dVar24 * (double)this->CursorAcceleration * (double)param_1 +
               (double)this->_padding_;
      this->_padding_ =
           (longlong)
           (dVar28 * dVar28 * dVar28 * (double)this->CursorAcceleration * (double)param_1 +
           (double)this->_padding_);
      dVar24 = (double)fVar29;
      if ((double)this->_padding_ <= (double)fVar29) {
        dVar24 = (double)this->_padding_;
      }
      dVar28 = (double)fVar26;
      if (dVar27 <= (double)fVar26) {
        dVar28 = dVar27;
      }
      if (dVar28 <= (double)fVar25) {
        dVar28 = (double)fVar25;
      }
      this->_padding_ = (longlong)dVar28;
      if (dVar24 <= (double)fVar30) {
        dVar24 = (double)fVar30;
      }
      this->_padding_ = (longlong)dVar24;
    }
    else if (iVar3 == 1) {
      this->_padding_ = (longlong)((double)this->CursorMaxSpeed * dVar24);
      this->_padding_ = (longlong)((double)this->CursorMaxSpeed * dVar28);
    }
    dVar28 = (double)param_1 * (double)this->_padding_ * (double)fVar31 + (double)this->_padding_;
    dVar24 = (double)param_1 * (double)this->_padding_ * (double)fVar31 + (double)this->_padding_;
    this->_padding_ = (longlong)dVar28;
    dVar28 = dVar28 + (double)fVar1;
    this->_padding_ = (longlong)dVar24;
    lVar19 = (longlong)dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar28;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar24 + (double)fVar2;
    dVar24 = dVar28;
    if ((lVar19 != -0x8000000000000000) && ((double)lVar19 != dVar28)) {
      auVar22._8_8_ = dVar28;
      auVar22._0_8_ = dVar28;
      uVar10 = movmskpd(uVar10,auVar22);
      uVar10 = uVar10 & 1;
      dVar24 = (double)(longlong)(lVar19 - (ulonglong)uVar10);
    }
    this->_padding_ = (longlong)(dVar28 - dVar24);
    dVar24 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
    lVar19 = (longlong)dVar24;
    dVar28 = dVar24;
    if ((lVar19 != -0x8000000000000000) && ((double)lVar19 != dVar24)) {
      auVar23._8_8_ = dVar24;
      auVar23._0_8_ = dVar24;
      uVar10 = movmskpd(uVar10,auVar23);
      dVar28 = (double)(longlong)(lVar19 - (ulonglong)(uVar10 & 1));
    }
    this->_padding_ = (longlong)(dVar24 - dVar28);
    if (local_228.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_228.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar20 = (ForElementType<FArrangedWidget>)&local_228.Widgets.Array;
    if (local_228.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar20 = local_228.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar20,local_228.Widgets.Array.ArrayNum);
    if (local_228.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_228.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleAnalogInputEvent @ 14b8c9310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_CommonAnalogCursor::HandleAnalogInputEvent
          (FDS_CommonAnalogCursor *this,FSlateApplication *param_1,FAnalogInputEvent *param_2)

{
  FCommonAnalogCursor::HandleAnalogInputEvent((FCommonAnalogCursor *)this,param_1,param_2);
  return false;
}

// IsAnalogMovementEnabled @ 14b8cfbb0

bool __thiscall FDS_CommonAnalogCursor::IsAnalogMovementEnabled(FDS_CommonAnalogCursor *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 1);
}

// SetAnalogMovementEnabled @ 14b8e6ba0

void __thiscall
FDS_CommonAnalogCursor::SetAnalogMovementEnabled(FDS_CommonAnalogCursor *this,bool param_1)

{
  UCommonInputSubsystem *this_00;
  FName *pFVar1;
  FName local_res8 [4];
  
  *(bool *)((longlong)&this->_padding_ + 1) = param_1;
  this_00 = UCommonUIActionRouterBase::GetInputSubsystem
                      ((UCommonUIActionRouterBase *)this->_padding_);
  pFVar1 = ::FName::FName(local_res8,"AnalogCursor");
  UCommonInputSubsystem::SetInputTypeFilter(this_00,MouseAndKeyboard,*pFVar1,false);
  return;
}

// SetCursorLock @ 14b8e7570

void __thiscall FDS_CommonAnalogCursor::SetCursorLock(FDS_CommonAnalogCursor *this,bool param_1)

{
  this->bIsCursorLock = param_1;
  return;
}

// SetCursorSpeed @ 14b8e76d0

void __thiscall FDS_CommonAnalogCursor::SetCursorSpeed(FDS_CommonAnalogCursor *this,float param_1)

{
  this->CursorAcceleration = param_1;
  this->CursorMaxSpeed = param_1;
  return;
}

// SetHoverSlowdownFactor @ 14b8e7d40

void __thiscall
FDS_CommonAnalogCursor::SetHoverSlowdownFactor(FDS_CommonAnalogCursor *this,float param_1)

{
  this->CursorStickySlowdown = param_1;
  return;
}

// ShouldVirtualAcceptSimulateMouseButton @ 14b8eb090

bool __thiscall
FDS_CommonAnalogCursor::ShouldVirtualAcceptSimulateMouseButton
          (FDS_CommonAnalogCursor *this,FKeyEvent *param_1,EInputEvent param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res20;
  
  ADS_PlayerController::GetPlayerController();
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar2[0x36].field_0x9 != '\x01') {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    return pUVar2[0x36].field_0x9 == '\x04';
  }
  return true;
}

// Tick @ 14b8eda60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_CommonAnalogCursor::Tick
          (FDS_CommonAnalogCursor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  FDeprecateSlateVector2D FVar9;
  UCommonInputSubsystem *this_00;
  FName *pFVar10;
  FSlateUser *pFVar11;
  FSlateUser *this_01;
  double dVar12;
  FName local_a0;
  FName local_98;
  TSharedRef<ICursor,1> local_90;
  TSharedRef<ICursor,1> local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  pFVar11 = (FSlateUser *)0x0;
  bVar5 = FCommonAnalogCursor::IsUsingGamepad((FCommonAnalogCursor *)this);
  if ((!bVar5) || (cVar6 = (**(code **)(this->_padding_ + 0xb0))(this), cVar6 != '\x01')) {
    local_80.Object = param_3->Object;
    local_80.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FCommonAnalogCursor::Tick((FCommonAnalogCursor *)this,param_1,param_2,&local_80);
    goto LAB_14b8edd14;
  }
  uVar7 = (**(code **)(this->_padding_ + 0x60))(this);
  if (((int)uVar7 < 0) || ((param_2->Users).ArrayNum <= (int)uVar7)) {
    local_58 = 0;
    local_60 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this_01 = pFVar11;
LAB_14b8edb87:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar8 = 0;
    if ((int)uVar7 < (param_2->Users).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_2->Users).AllocatorInstance.Data;
    pFVar11 = *(FSlateUser **)(pFVar3 + (longlong)(int)uVar7 * 0x10 + 8);
    this_01 = *(FSlateUser **)(pFVar3 + (longlong)(int)uVar7 * 0x10);
    if (pFVar11 != (FSlateUser *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar11->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar11->_padding_ + 1);
      UNLOCK();
    }
    local_68 = 0;
    local_70 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_01 == (FSlateUser *)0x0) goto LAB_14b8edb87;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar9 = FSlateUser::GetCursorPosition(this_01);
  fVar1 = *(float *)FVar9;
  fVar2 = *(float *)((longlong)FVar9 + 4);
  local_90.Object = param_3->Object;
  local_90.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FCommonAnalogCursor::Tick((FCommonAnalogCursor *)this,param_1,param_2,&local_90);
  FVar9 = FSlateUser::GetCursorPosition(this_01);
  dVar12 = (double)*(float *)((longlong)FVar9 + 4) - (double)fVar2;
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)((double)*(float *)FVar9 - (double)fVar1) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84((double)*(float *)FVar9 - (double)fVar1,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    this_00 = UCommonUIActionRouterBase::GetInputSubsystem
                        ((UCommonUIActionRouterBase *)this->_padding_);
    pFVar10 = ::FName::FName(&local_98,"AnalogCursor");
    bVar5 = true;
  }
  else {
    this_00 = UCommonUIActionRouterBase::GetInputSubsystem
                        ((UCommonUIActionRouterBase *)this->_padding_);
    pFVar10 = ::FName::FName(&local_a0,"AnalogCursor");
    bVar5 = false;
  }
  UCommonInputSubsystem::SetInputTypeFilter(this_00,MouseAndKeyboard,*pFVar10,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar11);
LAB_14b8edd14:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

