// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FPointerEvent @ 1426a88b0

FPointerEvent * __thiscall FPointerEvent::FPointerEvent(FPointerEvent *this,FPointerEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = (longlong)&___7FPointerEvent__6B_;
  this->ScreenSpacePosition = param_1->ScreenSpacePosition;
  this->LastScreenSpacePosition = param_1->LastScreenSpacePosition;
  this->CursorDelta = param_1->CursorDelta;
  this->PressedButtons = param_1->PressedButtons;
  (this->EffectingButton).KeyName = (param_1->EffectingButton).KeyName;
  (this->EffectingButton).KeyDetails.Object = (param_1->EffectingButton).KeyDetails.Object;
  pTVar1 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->PointerIndex = param_1->PointerIndex;
  this->TouchpadIndex = param_1->TouchpadIndex;
  this->Force = param_1->Force;
  this->bIsTouchEvent = param_1->bIsTouchEvent;
  this->GestureType = param_1->GestureType;
  this->WheelOrGestureDelta = param_1->WheelOrGestureDelta;
  this->bIsDirectionInvertedFromDevice = param_1->bIsDirectionInvertedFromDevice;
  this->bIsTouchForceChanged = param_1->bIsTouchForceChanged;
  this->bIsTouchFirstMove = param_1->bIsTouchFirstMove;
  return this;
}

// FPointerEvent @ 1426a8980

FPointerEvent * __thiscall
FPointerEvent::FPointerEvent
          (FPointerEvent *this,uint param_1,uint param_2,FDeprecateVector2DParameter *param_3,
          FDeprecateVector2DParameter *param_4,
          TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *param_5,FKey *param_6,
          float param_7,FModifierKeysState *param_8)

{
  FDeprecateVector2DParameter FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(FModifierKeysState *)&this->_padding_ = *param_8;
  *(uint *)&this->_padding_ = param_1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = param_1;
  this->_padding_ = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&param_8);
  this->_padding_ = (longlong)param_8;
  this->_padding_ = (longlong)&___7FPointerEvent__6B_;
  this->ScreenSpacePosition = *(FDeprecateSlateVector2D *)param_3;
  this->LastScreenSpacePosition = *(FDeprecateSlateVector2D *)param_4;
  param_8 = *(FModifierKeysState **)param_3;
  FVar1 = *param_4;
  param_4._0_4_ = FVar1._0_4_;
  param_4._4_4_ = FVar1._4_4_;
  FVar3._4_4_ = param_8._4_4_ - param_4._4_4_;
  FVar3._0_4_ = param_8._0_4_ - param_4._0_4_;
  this->CursorDelta = FVar3;
  this->PressedButtons = param_5;
  (this->EffectingButton).KeyName = param_6->KeyName;
  (this->EffectingButton).KeyDetails.Object = (param_6->KeyDetails).Object;
  pTVar2 = (param_6->KeyDetails).SharedReferenceCount.ReferenceController;
  (this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(float *)&(this->WheelOrGestureDelta).field_0x4 = param_7;
  this->PointerIndex = param_2;
  this->TouchpadIndex = 0;
  this->Force = 1.0;
  this->bIsTouchEvent = false;
  this->GestureType = None;
  *(undefined4 *)&this->WheelOrGestureDelta = 0;
  this->bIsDirectionInvertedFromDevice = false;
  this->bIsTouchForceChanged = false;
  this->bIsTouchFirstMove = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 1426ac300

FPointerEvent * __thiscall FPointerEvent::operator=(FPointerEvent *this,FPointerEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  *(short *)&this->_padding_ = (short)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->ScreenSpacePosition = param_1->ScreenSpacePosition;
  this->LastScreenSpacePosition = param_1->LastScreenSpacePosition;
  this->CursorDelta = param_1->CursorDelta;
  this->PressedButtons = param_1->PressedButtons;
  (this->EffectingButton).KeyName = (param_1->EffectingButton).KeyName;
  pTVar1 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->EffectingButton).KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->EffectingButton).KeyDetails.Object = pFVar2;
  (this->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->PointerIndex = param_1->PointerIndex;
  this->TouchpadIndex = param_1->TouchpadIndex;
  this->Force = param_1->Force;
  this->bIsTouchEvent = param_1->bIsTouchEvent;
  this->GestureType = param_1->GestureType;
  this->WheelOrGestureDelta = param_1->WheelOrGestureDelta;
  this->bIsDirectionInvertedFromDevice = param_1->bIsDirectionInvertedFromDevice;
  this->bIsTouchForceChanged = param_1->bIsTouchForceChanged;
  this->bIsTouchFirstMove = param_1->bIsTouchFirstMove;
  return this;
}

// IsMouseButtonDown @ 142955120

bool __thiscall FPointerEvent::IsMouseButtonDown(FPointerEvent *this,FKey *param_1)

{
  FName FVar1;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *pTVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  
  FVar1 = param_1->KeyName;
  pTVar2 = this->PressedButtons;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
    FVar4 = (pTVar2->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&pTVar2->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)(pTVar2->HashSize - 1U & FVar1.Number + uVar3) * 4
                    );
    if (iVar5 != -1) {
      do {
        if (*(FName *)((longlong)iVar5 * 0x20 + *(longlong *)&pTVar2->Elements) == param_1->KeyName)
        goto LAB_14295519b;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&pTVar2->Elements);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14295519b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return iVar5 != -1;
}

