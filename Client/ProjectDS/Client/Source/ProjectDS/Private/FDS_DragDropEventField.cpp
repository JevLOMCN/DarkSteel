// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b6448d0

UScriptStruct * __cdecl FDS_DragDropEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_DragDropEventField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_DragDropEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_DragDropEventField,(UObject *)pUVar1,
                         L"DS_DragDropEventField");
  }
  return Z_Registration_Info_UScriptStruct_FDS_DragDropEventField.OuterSingleton;
}

// FDS_DragDropEventField @ 14b68c410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_DragDropEventField * __thiscall
FDS_DragDropEventField::FDS_DragDropEventField(FDS_DragDropEventField *this)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8;
  
  *(undefined1 *)&this->_padding_ = 0;
  (this->DragDropOperation).field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  (this->PointerEvent)._padding_ = (longlong)&___7FInputEvent__6B_;
  *(undefined1 *)((longlong)&(this->PointerEvent)._padding_ + 2) = 0;
  plVar1 = &(this->PointerEvent)._padding_;
  *(ushort *)plVar1 = (ushort)*plVar1 & 0xfe00;
  *(undefined4 *)&(this->PointerEvent)._padding_ = 0xffffffff;
  (this->PointerEvent)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->PointerEvent)._padding_ + 4) = 0;
  QueryPerformanceCounter(&local_res8);
  (this->PointerEvent)._padding_ = (longlong)local_res8;
  (this->PointerEvent)._padding_ = (longlong)&___7FPointerEvent__6B_;
  (this->PointerEvent).ScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).LastScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).CursorDelta = (FDeprecateSlateVector2D)0x0;
  (this->PointerEvent).PressedButtons =
       (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
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
  this->DragCanceled = false;
  return this;
}

