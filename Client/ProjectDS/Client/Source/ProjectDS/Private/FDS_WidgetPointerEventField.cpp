// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// FDS_WidgetPointerEventField @ 14b4b17a0

FDS_WidgetPointerEventField * __thiscall
FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(FDS_WidgetPointerEventField *this)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8;
  
  this->TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&this->Geometry);
  *(undefined1 *)((longlong)&(this->PointerEvent)._padding_ + 2) = 0;
  (this->PointerEvent)._padding_ = (longlong)&___7FInputEvent__6B_;
  *(undefined4 *)((longlong)&(this->PointerEvent)._padding_ + 4) = 0;
  plVar1 = &(this->PointerEvent)._padding_;
  *(ushort *)plVar1 = (ushort)*plVar1 & 0xfe00;
  *(undefined4 *)&(this->PointerEvent)._padding_ = 0xffffffff;
  (this->PointerEvent)._padding_ = 0;
  QueryPerformanceCounter(&local_res8);
  (this->PointerEvent)._padding_ = (longlong)local_res8;
  (this->PointerEvent)._padding_ = (longlong)&___7FPointerEvent__6B_;
  (this->PointerEvent).ScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).LastScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).CursorDelta = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).PressedButtons =
       (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
  local_res8.QuadPart = 0;
  (this->PointerEvent).EffectingButton.KeyName.ComparisonIndex = 0;
  (this->PointerEvent).EffectingButton.KeyName.Number = 0;
  (this->PointerEvent).EffectingButton.KeyDetails.Object = (FKeyDetails *)0x0;
  (this->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PointerEvent).PointerIndex = 0;
  (this->PointerEvent).TouchpadIndex = 0;
  (this->PointerEvent).Force = 1.0;
  (this->PointerEvent).bIsTouchEvent = false;
  (this->PointerEvent).GestureType = None;
  (this->PointerEvent).WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).bIsDirectionInvertedFromDevice = false;
  (this->PointerEvent).bIsTouchForceChanged = false;
  (this->PointerEvent).bIsTouchFirstMove = false;
  FKeyEvent::FKeyEvent(&this->KeyEvent);
  return this;
}

// StaticStruct @ 14b644890

UScriptStruct * __cdecl FDS_WidgetPointerEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_WidgetPointerEventField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_WidgetPointerEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_WidgetPointerEventField,(UObject *)pUVar1,
                         L"DS_WidgetPointerEventField");
  }
  return Z_Registration_Info_UScriptStruct_FDS_WidgetPointerEventField.OuterSingleton;
}

// operator= @ 14bd44210

FDS_WidgetPointerEventField * __thiscall
FDS_WidgetPointerEventField::operator=
          (FDS_WidgetPointerEventField *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->TargetWidget = param_1->TargetWidget;
  FGeometry::operator=(&this->Geometry,&param_1->Geometry);
  *(short *)&(this->PointerEvent)._padding_ = (short)(param_1->PointerEvent)._padding_;
  *(undefined1 *)((longlong)&(this->PointerEvent)._padding_ + 2) =
       *(undefined1 *)((longlong)&(param_1->PointerEvent)._padding_ + 2);
  *(undefined4 *)((longlong)&(this->PointerEvent)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->PointerEvent)._padding_ + 4);
  *(int *)&(this->PointerEvent)._padding_ = (int)(param_1->PointerEvent)._padding_;
  (this->PointerEvent)._padding_ = (param_1->PointerEvent)._padding_;
  (this->PointerEvent)._padding_ = (param_1->PointerEvent)._padding_;
  (this->PointerEvent).ScreenSpacePosition = (param_1->PointerEvent).ScreenSpacePosition;
  (this->PointerEvent).LastScreenSpacePosition = (param_1->PointerEvent).LastScreenSpacePosition;
  (this->PointerEvent).CursorDelta = (param_1->PointerEvent).CursorDelta;
  (this->PointerEvent).PressedButtons = (param_1->PointerEvent).PressedButtons;
  (this->PointerEvent).EffectingButton.KeyName = (param_1->PointerEvent).EffectingButton.KeyName;
  pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  pFVar2 = (param_1->PointerEvent).EffectingButton.KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController;
  (this->PointerEvent).EffectingButton.KeyDetails.Object = pFVar2;
  (this->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  (this->PointerEvent).PointerIndex = (param_1->PointerEvent).PointerIndex;
  (this->PointerEvent).TouchpadIndex = (param_1->PointerEvent).TouchpadIndex;
  (this->PointerEvent).Force = (param_1->PointerEvent).Force;
  (this->PointerEvent).bIsTouchEvent = (param_1->PointerEvent).bIsTouchEvent;
  (this->PointerEvent).GestureType = (param_1->PointerEvent).GestureType;
  (this->PointerEvent).WheelOrGestureDelta = (param_1->PointerEvent).WheelOrGestureDelta;
  (this->PointerEvent).bIsDirectionInvertedFromDevice =
       (param_1->PointerEvent).bIsDirectionInvertedFromDevice;
  (this->PointerEvent).bIsTouchForceChanged = (param_1->PointerEvent).bIsTouchForceChanged;
  (this->PointerEvent).bIsTouchFirstMove = (param_1->PointerEvent).bIsTouchFirstMove;
  *(short *)&(this->KeyEvent)._padding_ = (short)(param_1->KeyEvent)._padding_;
  *(undefined1 *)((longlong)&(this->KeyEvent)._padding_ + 2) =
       *(undefined1 *)((longlong)&(param_1->KeyEvent)._padding_ + 2);
  *(undefined4 *)((longlong)&(this->KeyEvent)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->KeyEvent)._padding_ + 4);
  *(int *)&(this->KeyEvent)._padding_ = (int)(param_1->KeyEvent)._padding_;
  (this->KeyEvent)._padding_ = (param_1->KeyEvent)._padding_;
  (this->KeyEvent)._padding_ = (param_1->KeyEvent)._padding_;
  (this->KeyEvent).Key.KeyName = (param_1->KeyEvent).Key.KeyName;
  pTVar1 = (param_1->KeyEvent).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->KeyEvent).Key.KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->KeyEvent).Key.KeyDetails.SharedReferenceCount.ReferenceController;
  (this->KeyEvent).Key.KeyDetails.Object = pFVar2;
  (this->KeyEvent).Key.KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  (this->KeyEvent).CharacterCode = (param_1->KeyEvent).CharacterCode;
  (this->KeyEvent).KeyCode = (param_1->KeyEvent).KeyCode;
  return this;
}

