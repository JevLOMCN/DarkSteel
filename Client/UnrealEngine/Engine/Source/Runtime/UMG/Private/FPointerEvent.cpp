// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// FPointerEvent @ 146a55910

FPointerEvent * __thiscall
FPointerEvent::FPointerEvent
          (FPointerEvent *this,FInputDeviceId param_1,uint param_2,
          FDeprecateVector2DParameter *param_3,FDeprecateVector2DParameter *param_4,
          TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *param_5,FKey *param_6,
          float param_7,FModifierKeysState *param_8,TOptional<int> param_9)

{
  FDeprecateVector2DParameter FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  IPlatformInputDeviceMapper *pIVar4;
  undefined4 local_res10 [2];
  
  this->_padding_ = (longlong)&___7FInputEvent__6B_;
  *(FModifierKeysState *)&this->_padding_ = *param_8;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(int *)&this->_padding_ = param_1.InternalId;
  this->_padding_ = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&param_8);
  this->_padding_ = (longlong)param_8;
  pIVar4 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,local_res10,(int)this->_padding_);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_res10[0];
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
  if (*(char *)((longlong)param_9 + 4) != '\0') {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = *(undefined4 *)param_9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->KeyDetails).SharedReferenceCount.ReferenceController);
  return this;
}

