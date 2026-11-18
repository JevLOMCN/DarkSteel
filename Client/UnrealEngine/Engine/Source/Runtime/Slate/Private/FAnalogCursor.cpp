// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 23

// FAnalogCursor @ 1426a6f40

FAnalogCursor * __thiscall FAnalogCursor::FAnalogCursor(FAnalogCursor *this,FAnalogCursor *param_1)

{
  double dVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnalogCursor__6B_;
  dVar1 = (param_1->CurrentSpeed).field0_0x0._s_0.Y;
  (this->CurrentSpeed).field0_0x0._s_0.X = (param_1->CurrentSpeed).field0_0x0._s_0.X;
  (this->CurrentSpeed).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->CurrentOffset).field0_0x0._s_0.Y;
  (this->CurrentOffset).field0_0x0._s_0.X = (param_1->CurrentOffset).field0_0x0._s_0.X;
  (this->CurrentOffset).field0_0x0._s_0.Y = dVar1;
  this->Acceleration = param_1->Acceleration;
  this->MaxSpeed = param_1->MaxSpeed;
  this->StickySlowdown = param_1->StickySlowdown;
  this->DeadZone = param_1->DeadZone;
  this->Mode = param_1->Mode;
  dVar1 = param_1->AnalogValues[0].field0_0x0._s_0.Y;
  this->AnalogValues[0].field0_0x0._s_0.X = param_1->AnalogValues[0].field0_0x0._s_0.X;
  this->AnalogValues[0].field0_0x0._s_0.Y = dVar1;
  dVar1 = param_1->AnalogValues[1].field0_0x0._s_0.Y;
  this->AnalogValues[1].field0_0x0._s_0.X = param_1->AnalogValues[1].field0_0x0._s_0.X;
  this->AnalogValues[1].field0_0x0._s_0.Y = dVar1;
  return this;
}

// FAnalogCursor @ 1426a6fa0

FAnalogCursor * __thiscall FAnalogCursor::FAnalogCursor(FAnalogCursor *this)

{
  TVector2<double> TVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnalogCursor__6B_;
  (this->CurrentSpeed).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Acceleration = 1000.0;
  this->MaxSpeed = 1500.0;
  (this->CurrentOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->StickySlowdown = 0.5;
  this->DeadZone = 0.1;
  this->Mode = Accelerated;
  this->AnalogValues[0].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->AnalogValues[1].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// ~FAnalogCursor @ 1426aa2f0

void __thiscall FAnalogCursor::~FAnalogCursor(FAnalogCursor *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FAnalogCursor__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  return;
}

// CalculateTickedCursorPosition @ 1426b27f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
FAnalogCursor::CalculateTickedCursorPosition
          (FAnalogCursor *this,TVector2<double> *__return_storage_ptr__,float param_1,
          FSlateApplication *param_2,TSharedPtr<FSlateUser,1> *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  TVector2<double> *pTVar13;
  FDeprecateSlateVector2D FVar14;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined7 extraout_var;
  longlong extraout_RAX;
  longlong lVar16;
  ForElementType<FArrangedWidget> FVar17;
  longlong lVar18;
  TSharedRef<SWidget,1> *pTVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  int local_250;
  undefined1 local_248 [8];
  float local_240;
  float fStack_23c;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_238;
  FWidgetPath local_220;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStack_278;
  if ((param_3->Object == (FSlateUser *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TVector2<double> *)(*pcVar6)();
    return pTVar13;
  }
  FVar14 = FSlateUser::GetCursorPosition(param_3->Object);
  fVar27 = __real_3f800000;
  dVar20 = this->AnalogValues[0].field0_0x0._s_0.X;
  dVar24 = this->AnalogValues[0].field0_0x0._s_0.Y;
  fVar26 = 0.0;
  fVar1 = *(float *)FVar14;
  fVar2 = *(float *)((longlong)FVar14 + 4);
  uVar9 = *(undefined8 *)FVar14;
  fVar21 = (float)SQRT(dVar24 * dVar24 + dVar20 * dVar20);
  if (0.0 < fVar21) {
    fVar22 = fVar21 - this->DeadZone;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    dVar23 = (double)(fVar22 / (__real_3f800000 - this->DeadZone));
    dVar20 = dVar20 * (__real_3ff0000000000000 / (double)fVar21) * dVar23;
    dVar24 = dVar24 * (__real_3ff0000000000000 / (double)fVar21) * dVar23;
  }
  pcVar6 = *(code **)(*(longlong *)param_2 + 0x108);
  if ((param_3->Object == (FSlateUser *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TVector2<double> *)(*pcVar6)();
    return pTVar13;
  }
  iVar3 = param_3->Object->UserIndex;
  pTVar15 = FSlateApplication::GetInteractiveTopLevelWindows(param_2,&local_238);
  local_258 = 0;
  local_250 = iVar3;
  local_240 = fVar1;
  fStack_23c = fVar2;
  (*pcVar6)(param_2,&local_220,uVar9,pTVar15);
  DestructItems<TSharedRef<SWindow,1>,int>
            ((TSharedRef<SWindow,1> *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
  if ((TSharedRef<SWindow,1> *)local_238.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  bVar10 = FWidgetPath::IsValid(&local_220);
  iVar3 = local_220.Widgets.Array.ArrayNum;
  uVar12 = (uint)CONCAT71(extraout_var,bVar10);
  if (bVar10) {
    lVar18 = (longlong)local_220.Widgets.Array.ArrayNum;
    FVar17 = (ForElementType<FArrangedWidget>)&local_220.Widgets.Array;
    if (local_220.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar17 = local_220.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    pTVar19 = (TSharedRef<SWidget,1> *)((longlong)FVar17 + 0x38);
    while( true ) {
      if (local_220.Widgets.Array.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FArrangedWidget_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_248);
      }
      lVar16 = (longlong)(pTVar19 + -4) + 8;
      if ((FArrangedWidget *)lVar16 == (FArrangedWidget *)((longlong)FVar17 + lVar18 * 0x48))
      goto LAB_1426b2a6c;
      pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar19->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar11 = (**(code **)(pSVar5->_padding_ + 0x1b0))();
      if (cVar11 != '\0') break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar19 = (TSharedRef<SWidget,1> *)((longlong)(pTVar19 + 4) + 8);
    }
    fVar27 = this->StickySlowdown;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    lVar16 = extraout_RAX;
LAB_1426b2a6c:
    uVar12 = (uint)lVar16;
  }
  if (this->Mode == Accelerated) {
    fVar21 = 0.0;
    fVar22 = 0.0;
    dVar23 = (double)this->MaxSpeed * dVar20;
    if (dVar20 <= 0.0) {
      fVar21 = (float)dVar23;
    }
    else {
      fVar22 = (float)dVar23;
    }
    fVar25 = 0.0;
    dVar23 = dVar24 * (double)this->MaxSpeed;
    if (dVar24 <= 0.0) {
      fVar26 = (float)dVar23;
    }
    else {
      fVar25 = (float)dVar23;
    }
    dVar23 = dVar20 * dVar20 * dVar20 * (double)this->Acceleration * (double)param_1 +
             (this->CurrentSpeed).field0_0x0._s_0.X;
    (this->CurrentSpeed).field0_0x0._s_0.Y =
         dVar24 * dVar24 * dVar24 * (double)this->Acceleration * (double)param_1 +
         (this->CurrentSpeed).field0_0x0._s_0.Y;
    dVar20 = (this->CurrentSpeed).field0_0x0._s_0.Y;
    dVar24 = (double)fVar25;
    if (dVar20 <= (double)fVar25) {
      dVar24 = dVar20;
    }
    dVar20 = (double)fVar22;
    if (dVar23 <= (double)fVar22) {
      dVar20 = dVar23;
    }
    if (dVar20 <= (double)fVar21) {
      dVar20 = (double)fVar21;
    }
    (this->CurrentSpeed).field0_0x0._s_0.X = dVar20;
    if (dVar24 <= (double)fVar26) {
      dVar24 = (double)fVar26;
    }
    (this->CurrentSpeed).field0_0x0._s_0.Y = dVar24;
  }
  else if (this->Mode == Direct) {
    fVar21 = this->MaxSpeed;
    (this->CurrentSpeed).field0_0x0._s_0.X = (double)fVar21 * dVar20;
    (this->CurrentSpeed).field0_0x0._s_0.Y = (double)fVar21 * dVar24;
  }
  dVar20 = (double)param_1 * (this->CurrentSpeed).field0_0x0._s_0.X * (double)fVar27 +
           (this->CurrentOffset).field0_0x0._s_0.X;
  dVar23 = (double)param_1 * (this->CurrentSpeed).field0_0x0._s_0.Y * (double)fVar27 +
           (this->CurrentOffset).field0_0x0._s_0.Y;
  dVar24 = (double)fVar1 + dVar20;
  (this->CurrentOffset).field0_0x0._s_0.X = dVar20;
  (this->CurrentOffset).field0_0x0._s_0.Y = dVar23;
  lVar18 = (longlong)dVar24;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar24;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar2 + dVar23;
  dVar20 = dVar24;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar24)) {
    auVar7._8_4_ = SUB84(dVar24,0);
    auVar7._0_8_ = dVar24;
    auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    uVar12 = movmskpd(uVar12,auVar7);
    uVar12 = uVar12 & 1;
    dVar20 = (double)(longlong)(lVar18 - (ulonglong)uVar12);
  }
  (this->CurrentOffset).field0_0x0._s_0.X = dVar24 - dVar20;
  dVar20 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  lVar18 = (longlong)dVar20;
  dVar24 = dVar20;
  if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar20)) {
    auVar8._8_4_ = SUB84(dVar20,0);
    auVar8._0_8_ = dVar20;
    auVar8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    uVar12 = movmskpd(uVar12,auVar8);
    dVar24 = (double)(longlong)(lVar18 - (ulonglong)(uVar12 & 1));
  }
  (this->CurrentOffset).field0_0x0._s_0.Y = dVar20 - dVar24;
  if (local_220.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar17 = (ForElementType<FArrangedWidget>)&local_220.Widgets.Array;
  if (local_220.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar17 = local_220.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar17,local_220.Widgets.Array.ArrayNum);
  if (local_220.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_220.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ClearAnalogValues @ 1426b3540

void __thiscall FAnalogCursor::ClearAnalogValues(FAnalogCursor *this)

{
  this->AnalogValues[0].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this->AnalogValues[1].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// GetDebugName @ 1426bcd30

wchar_t * __thiscall FAnalogCursor::GetDebugName(FAnalogCursor *this)

{
  return L"AnalogCursor";
}

// GetOwnerUserIndex @ 1426be970

int __thiscall FAnalogCursor::GetOwnerUserIndex(FAnalogCursor *this)

{
  return 0;
}

// HandleAnalogInputEvent @ 1426c0620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnalogCursor::HandleAnalogInputEvent
          (FAnalogCursor *this,FSlateApplication *param_1,FAnalogInputEvent *param_2)

{
  float fVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  char cVar4;
  
  cVar4 = (**(code **)(this->_padding_ + 0x70))(this,param_2);
  if (cVar4 != '\0') {
    pTVar2 = (TReferenceControllerBase<1> *)param_2->_padding_;
    FVar3 = (FName)param_2->_padding_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    fVar1 = param_2->AnalogValue;
    if (FVar3 == EKeys::Gamepad_LeftX.KeyName) {
      this->AnalogValues[0].field0_0x0._s_0.X = (double)fVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    if (FVar3 == EKeys::Gamepad_LeftY.KeyName) {
      this->AnalogValues[0].field0_0x0._s_0.Y =
           (double)(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    if (FVar3 == EKeys::Gamepad_RightX.KeyName) {
      this->AnalogValues[1].field0_0x0._s_0.X = (double)fVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
    if (FVar3 != EKeys::Gamepad_RightY.KeyName) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return false;
    }
    this->AnalogValues[1].field0_0x0._s_0.Y =
         (double)(float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return true;
}

// HandleKeyDownEvent @ 1426c0790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnalogCursor::HandleKeyDownEvent(FAnalogCursor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  FKey *pFVar10;
  FDeprecateSlateVector2D FVar11;
  FModifierKeysState *pFVar12;
  FTouchKeySet *pFVar13;
  FModifierKeysState local_res8 [4];
  FModifierKeysState local_res20 [4];
  TSharedPtr<FSlateUser,1> local_118;
  FDeprecateVector2DParameter local_108;
  FDeprecateVector2DParameter local_100;
  TSharedPtr<FGenericWindow,1> local_f8;
  FKey local_e8;
  FKey local_c0;
  FPointerEvent local_a8;
  
  cVar6 = (**(code **)(this->_padding_ + 0x78))(this,param_2);
  if (cVar6 == '\0') {
LAB_1426c0aa4:
    bVar7 = false;
  }
  else {
    pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((FVar2 != EKeys::Gamepad_LeftStick_Right.KeyName) &&
         (FVar2 != EKeys::Gamepad_LeftStick_Left.KeyName)) &&
        (FVar2 != EKeys::Gamepad_LeftStick_Up.KeyName)) &&
       (FVar2 != EKeys::Gamepad_LeftStick_Down.KeyName)) {
      pFVar10 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_c0);
      FVar3 = pFVar10->KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.KeyDetails.SharedReferenceCount.ReferenceController);
      if (FVar2 != FVar3) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        goto LAB_1426c0aa4;
      }
      if (*(char *)((longlong)&param_2->_padding_ + 2) == '\0') {
        FSlateApplication::GetUser(param_1,&local_118,*(int *)((longlong)&param_2->_padding_ + 4));
        if (local_118.Object != (FSlateUser *)0x0) {
          if ((local_118.Object == (FSlateUser *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          bVar7 = FSlateApplicationBase::CursorUserIndex != (local_118.Object)->UserIndex;
          if (bVar7) {
            pFVar12 = local_res8;
            local_res8[0] = (FModifierKeysState)((ushort)local_res8[0] & 0xfe00);
          }
          else {
            if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x58))
                      (FSlateApplicationBase::PlatformApplication.Object,local_res20);
            pFVar12 = local_res20;
          }
          local_e8.KeyName = EKeys::LeftMouseButton.KeyName;
          local_e8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
          local_e8.KeyDetails.SharedReferenceCount.ReferenceController =
               EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
          if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)
                       ->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar13 = (FTouchKeySet *)&param_1->PressedMouseButtons;
          if (bVar7) {
            pFVar13 = &FTouchKeySet::EmptySet;
          }
          if ((local_118.Object == (FSlateUser *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar11 = FSlateUser::GetPreviousCursorPosition(local_118.Object);
          local_108 = *(FDeprecateVector2DParameter *)FVar11;
          if ((local_118.Object == (FSlateUser *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar11 = FSlateUser::GetCursorPosition(local_118.Object);
          uVar5 = FSlateApplicationBase::CursorPointerIndex;
          local_100 = *(FDeprecateVector2DParameter *)FVar11;
          if ((local_118.Object == (FSlateUser *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FPointerEvent::FPointerEvent
                    (&local_a8,(local_118.Object)->UserIndex,uVar5,&local_100,&local_108,
                     (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)pFVar13,&local_e8,
                     0.0,pFVar12);
          local_f8.Object = (FGenericWindow *)0x0;
          local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          bVar7 = FSlateApplication::ProcessMouseButtonDownEvent(param_1,&local_f8,&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
          FPointerEvent::~FPointerEvent(&local_a8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          return bVar7;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar7 = true;
  }
  return bVar7;
}

// HandleKeyUpEvent @ 1426c0b20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnalogCursor::HandleKeyUpEvent(FAnalogCursor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  FKey *pFVar9;
  FDeprecateSlateVector2D FVar10;
  FTouchKeySet *pFVar11;
  FModifierKeysState *pFVar12;
  FModifierKeysState local_res8 [4];
  FModifierKeysState local_res20 [4];
  TSharedPtr<FSlateUser,1> local_108;
  FDeprecateVector2DParameter local_f8;
  FDeprecateVector2DParameter local_f0;
  FKey local_e8;
  FKey local_c0;
  FPointerEvent local_a8;
  
  cVar5 = (**(code **)(this->_padding_ + 0x78))(this,param_2);
  if (cVar5 != '\0') {
    pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((FVar2 == EKeys::Gamepad_LeftStick_Right.KeyName) ||
         (FVar2 == EKeys::Gamepad_LeftStick_Left.KeyName)) ||
        (FVar2 == EKeys::Gamepad_LeftStick_Up.KeyName)) ||
       (FVar2 == EKeys::Gamepad_LeftStick_Down.KeyName)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return true;
    }
    pFVar9 = FKey::GetVirtualKey(&EKeys::Virtual_Gamepad_Accept,&local_c0);
    if ((FVar2 == pFVar9->KeyName) && (*(char *)((longlong)&param_2->_padding_ + 2) == '\0')) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.KeyDetails.SharedReferenceCount.ReferenceController);
      FSlateApplication::GetUser(param_1,&local_108,*(int *)((longlong)&param_2->_padding_ + 4));
      local_c0.KeyDetails.SharedReferenceCount.ReferenceController =
           local_108.SharedReferenceCount.ReferenceController;
      if (local_108.Object != (FSlateUser *)0x0) {
        if ((local_108.Object == (FSlateUser *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        bVar6 = FSlateApplicationBase::CursorUserIndex != (local_108.Object)->UserIndex;
        if (bVar6) {
          pFVar12 = local_res8;
          local_res8[0] = (FModifierKeysState)((ushort)local_res8[0] & 0xfe00);
        }
        else {
          if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x58))
                    (FSlateApplicationBase::PlatformApplication.Object,local_res20);
          pFVar12 = local_res20;
        }
        local_e8.KeyName = EKeys::LeftMouseButton.KeyName;
        local_e8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
        local_e8.KeyDetails.SharedReferenceCount.ReferenceController =
             EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
        if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar11 = (FTouchKeySet *)&param_1->PressedMouseButtons;
        if (bVar6) {
          pFVar11 = &FTouchKeySet::EmptySet;
        }
        if ((local_108.Object == (FSlateUser *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FVar10 = FSlateUser::GetPreviousCursorPosition(local_108.Object);
        local_f8 = *(FDeprecateVector2DParameter *)FVar10;
        if ((local_108.Object == (FSlateUser *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FVar10 = FSlateUser::GetCursorPosition(local_108.Object);
        uVar4 = FSlateApplicationBase::CursorPointerIndex;
        local_f0 = *(FDeprecateVector2DParameter *)FVar10;
        if ((local_108.Object == (FSlateUser *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        FPointerEvent::FPointerEvent
                  (&local_a8,(local_108.Object)->UserIndex,uVar4,&local_f0,&local_f8,
                   (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)pFVar11,&local_e8,0.0,
                   pFVar12);
        bVar6 = FSlateApplication::ProcessMouseButtonUpEvent(param_1,&local_a8);
        FPointerEvent::~FPointerEvent(&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return bVar6;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.KeyDetails.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return false;
}

// HandleMouseMoveEvent @ 1426c0ff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAnalogCursor::HandleMouseMoveEvent
          (FAnalogCursor *this,FSlateApplication *param_1,FPointerEvent *param_2)

{
  return false;
}

// IsRelevantInput @ 1426c2740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalogCursor::IsRelevantInput(FAnalogCursor *this,FAnalogInputEvent *param_1)

{
  undefined1 uVar1;
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_1->_padding_;
  local_38.EventPath = (FWidgetPath *)param_1->_padding_;
  local_38.EventTimestamp = param_1->_padding_;
  uVar1 = (**(code **)(this->_padding_ + 0x80))(this,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  return (bool)uVar1;
}

// IsRelevantInput @ 1426c27b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalogCursor::IsRelevantInput(FAnalogCursor *this,FInputEvent *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x60))();
  return uVar1 == param_1->UserIndex;
}

// IsRelevantInput @ 1426c27e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalogCursor::IsRelevantInput(FAnalogCursor *this,FKeyEvent *param_1)

{
  undefined1 uVar1;
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_1->_padding_;
  local_38.EventPath = (FWidgetPath *)param_1->_padding_;
  local_38.EventTimestamp = param_1->_padding_;
  uVar1 = (**(code **)(this->_padding_ + 0x80))(this,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  return (bool)uVar1;
}

// IsRelevantInput @ 1426c2850

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAnalogCursor::IsRelevantInput(FAnalogCursor *this,FPointerEvent *param_1)

{
  undefined1 uVar1;
  FInputEvent local_38;
  
  local_38._padding_ = (longlong)&___7FInputEvent__6B_;
  local_38.ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  local_38.bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  local_38.UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_38.InputDeviceId.InternalId = (int)param_1->_padding_;
  local_38.EventPath = (FWidgetPath *)param_1->_padding_;
  local_38.EventTimestamp = param_1->_padding_;
  uVar1 = (**(code **)(this->_padding_ + 0x80))(this,&local_38);
  FInputEvent::~FInputEvent(&local_38);
  return (bool)uVar1;
}

// SetAcceleration @ 1426db6e0

void __thiscall FAnalogCursor::SetAcceleration(FAnalogCursor *this,float param_1)

{
  this->Acceleration = param_1;
  return;
}

// SetDeadZone @ 1426dbe50

void __thiscall FAnalogCursor::SetDeadZone(FAnalogCursor *this,float param_1)

{
  this->DeadZone = param_1;
  return;
}

// SetMaxSpeed @ 1426dc6f0

void __thiscall FAnalogCursor::SetMaxSpeed(FAnalogCursor *this,float param_1)

{
  this->MaxSpeed = param_1;
  return;
}

// SetMode @ 1426dc780

void __thiscall FAnalogCursor::SetMode(FAnalogCursor *this,Type param_1)

{
  this->Mode = param_1;
  (this->CurrentSpeed).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// SetStickySlowdown @ 1426dcc70

void __thiscall FAnalogCursor::SetStickySlowdown(FAnalogCursor *this,float param_1)

{
  this->StickySlowdown = param_1;
  return;
}

// Tick @ 1426e0600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalogCursor::Tick(FAnalogCursor *this,float param_1,FSlateApplication *param_2,
                   TSharedRef<ICursor,1> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSlateUser **ppFVar5;
  TSharedPtr<FSlateUser,1> local_78;
  FSlateUser *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FSlateUser *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 local_48 [48];
  
  iVar4 = (**(code **)(this->_padding_ + 0x60))();
  FSlateApplication::GetUser(param_2,&local_78,iVar4);
  if (local_78.Object != (FSlateUser *)0x0) {
    lVar1 = this->_padding_;
    local_58 = local_78.Object;
    pTStack_50 = local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppFVar5 = &local_58;
    (**(code **)(lVar1 + 0x98))(this,local_48,param_1,param_2,ppFVar5);
    pcVar2 = *(code **)(this->_padding_ + 0x88);
    if ((local_78.Object == (FSlateUser *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68 = local_78.Object;
    pTStack_60 = local_78.SharedReferenceCount.ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_78.Object == (FSlateUser *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*pcVar2)(this,param_2,&local_68,local_48,(ulonglong)ppFVar5 & 0xffffffffffffff00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateCursorPosition @ 1426e46d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalogCursor::UpdateCursorPosition
          (FAnalogCursor *this,FSlateApplication *param_1,TSharedRef<FSlateUser,1> *param_2,
          TVector2<double> *param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  uint uVar4;
  FName FVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FDeprecateSlateVector2D FVar8;
  FDeprecateSlateVector2D FVar9;
  bool *pbVar10;
  int iVar11;
  FSlateUser *pFVar12;
  atomic<int> *paVar13;
  int iVar14;
  FTouchKeySet *pFVar15;
  bool bVar16;
  bool local_res18 [8];
  undefined8 local_res20;
  undefined1 in_stack_00000029;
  LARGE_INTEGER local_110;
  FKeyDetails *local_108;
  FPointerEvent local_f8;
  
  FVar8 = FSlateUser::GetCursorPosition(param_2->Object);
  iVar11 = (int)(param_3->field0_0x0)._s_0.X;
  fVar1 = *(float *)FVar8;
  fVar2 = *(float *)((longlong)FVar8 + 4);
  FVar8 = *(FDeprecateSlateVector2D *)FVar8;
  iVar14 = (int)(param_3->field0_0x0)._s_0.Y;
  if (((param_4 != false) || ((int)fVar1 != iVar11)) || ((int)fVar2 != iVar14)) {
    FSlateUser::SetCursorPosition(param_2->Object,iVar11,iVar14);
    FVar9 = FSlateUser::GetCursorPosition(param_2->Object);
    pFVar12 = param_2->Object;
    bVar16 = FSlateApplicationBase::CursorUserIndex != pFVar12->UserIndex;
    FVar9 = *(FDeprecateSlateVector2D *)FVar9;
    if (bVar16) {
      _param_4 = _param_4 & 0xfe00;
      pbVar10 = &param_4;
    }
    else {
      if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x58))
                (FSlateApplicationBase::PlatformApplication.Object,local_res18);
      pFVar12 = param_2->Object;
      pbVar10 = local_res18;
    }
    FVar6.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
    FVar5 = EKeys::Invalid.KeyName;
    local_108 = EKeys::Invalid.KeyDetails.Object;
    if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
      pFVar12 = param_2->Object;
    }
    uVar4 = FSlateApplicationBase::CursorPointerIndex;
    pFVar15 = (FTouchKeySet *)&param_1->PressedMouseButtons;
    if (bVar16) {
      pFVar15 = &FTouchKeySet::EmptySet;
    }
    local_f8._padding_._4_4_ = pFVar12->UserIndex;
    local_f8._padding_._0_2_ = *(undefined2 *)pbVar10;
    local_f8._padding_._2_1_ = 0;
    local_f8._padding_ = 0;
    local_res20 = FVar9;
    local_f8._padding_._0_4_ = local_f8._padding_._4_4_;
    QueryPerformanceCounter(&local_110);
    local_f8._padding_ = (longlong)&___7FPointerEvent__6B_;
    local_f8.EffectingButton.KeyName = FVar5;
    local_f8.ScreenSpacePosition = local_res20;
    local_f8.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
         FVar6.ReferenceController;
    local_110.s.LowPart = (DWORD)((float)local_res20 - fVar1);
    local_110.s.HighPart = (LONG)(local_res20._4_4_ - fVar2);
    local_f8.CursorDelta._4_4_ = local_110.s.HighPart;
    local_f8.CursorDelta._0_4_ = local_110.s.LowPart;
    local_f8.EffectingButton.KeyDetails.Object = local_108;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    local_f8.PointerIndex = uVar4;
    local_f8.TouchpadIndex = 0;
    local_f8.Force = 1.0;
    local_f8.bIsTouchEvent = false;
    local_f8.GestureType = None;
    local_f8.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
    local_f8.bIsDirectionInvertedFromDevice = false;
    local_f8.bIsTouchForceChanged = false;
    local_f8.bIsTouchFirstMove = false;
    local_f8.LastScreenSpacePosition = FVar8;
    local_f8.PressedButtons = (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)pFVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    FSlateApplication::ProcessMouseMoveEvent(param_1,&local_f8,false);
    FPointerEvent::~FPointerEvent(&local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateCursorPosition @ 1426e49c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnalogCursor::UpdateCursorPosition
          (FAnalogCursor *this,FSlateApplication *param_1,TSharedRef<ICursor,1> *param_2,
          TVector2<double> *param_3,bool param_4)

{
  code *pcVar1;
  uint uVar2;
  FName FVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool *pbVar8;
  atomic<int> *paVar9;
  FTouchKeySet *pFVar10;
  bool local_res18 [8];
  undefined8 local_res20;
  undefined1 in_stack_00000029;
  undefined8 local_108;
  LARGE_INTEGER local_100;
  double local_f8;
  double local_f0;
  FKeyDetails *local_e8;
  TSharedPtr<FSlateUser,1> local_e0;
  FPointerEvent local_c8;
  double local_48;
  double local_40;
  
  (**(code **)((longlong)*param_2->Object + 0x20))(param_2->Object,&local_f8);
  if (((param_4 != false) || ((int)local_f8 != (int)(param_3->field0_0x0)._s_0.X)) ||
     ((int)local_f0 != (int)(param_3->field0_0x0)._s_0.Y)) {
    (**(code **)((longlong)*param_2->Object + 0x28))();
    (**(code **)((longlong)*param_2->Object + 0x20))(param_2->Object,&local_48);
    iVar7 = (**(code **)(this->_padding_ + 0x60))(this);
    FSlateApplication::GetUser(param_1,&local_e0,iVar7);
    if (local_e0.Object != (FSlateUser *)0x0) {
      if (local_e0.Object == (FSlateUser *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      bVar5 = FSlateApplicationBase::CursorUserIndex != (local_e0.Object)->UserIndex;
      if (bVar5) {
        _param_4 = _param_4 & 0xfe00;
        pbVar8 = &param_4;
      }
      else {
        if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x58))
                  (FSlateApplicationBase::PlatformApplication.Object,local_res18);
        pbVar8 = local_res18;
      }
      FVar4.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController
      ;
      FVar3 = EKeys::Invalid.KeyName;
      local_e8 = EKeys::Invalid.KeyDetails.Object;
      if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        paVar9 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar9 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      uVar2 = FSlateApplicationBase::CursorPointerIndex;
      pFVar10 = (FTouchKeySet *)&param_1->PressedMouseButtons;
      if (bVar5) {
        pFVar10 = &FTouchKeySet::EmptySet;
      }
      local_c8._padding_._0_2_ = *(undefined2 *)pbVar8;
      local_c8._padding_._2_1_ = 0;
      local_c8._12_8_ = 0;
      local_c8._padding_ = 0;
      local_108._4_4_ = (float)local_f0;
      local_108._0_4_ = (float)local_f8;
      local_res20._4_4_ = (float)local_40;
      local_res20._0_4_ = (float)local_48;
      QueryPerformanceCounter(&local_100);
      local_c8._padding_ = (longlong)&___7FPointerEvent__6B_;
      local_c8.LastScreenSpacePosition = local_108;
      local_c8.EffectingButton.KeyName = FVar3;
      local_c8.ScreenSpacePosition = local_res20;
      local_c8.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
           FVar4.ReferenceController;
      local_100.s.LowPart = (DWORD)((float)local_res20 - (float)local_f8);
      local_100.s.HighPart = (LONG)(local_res20._4_4_ - (float)local_f0);
      local_c8.CursorDelta._4_4_ = local_100.s.HighPart;
      local_c8.CursorDelta._0_4_ = local_100.s.LowPart;
      local_c8.EffectingButton.KeyDetails.Object = local_e8;
      if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      local_c8.PointerIndex = uVar2;
      local_c8.TouchpadIndex = 0;
      local_c8.Force = 1.0;
      local_c8.bIsTouchEvent = false;
      local_c8.GestureType = None;
      local_c8.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
      local_c8.bIsDirectionInvertedFromDevice = false;
      local_c8.bIsTouchForceChanged = false;
      local_c8.bIsTouchFirstMove = false;
      local_c8.PressedButtons = (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)pFVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      FSlateApplication::ProcessMouseMoveEvent(param_1,&local_c8,false);
      FPointerEvent::~FPointerEvent(&local_c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

