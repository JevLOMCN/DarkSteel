// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 91

// GetFocusPath @ 1426bce40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FWidgetPath,1> * __thiscall
FSlateUser::GetFocusPath(FSlateUser *this,TSharedRef<FWidgetPath,1> *__return_storage_ptr__)

{
  TSharedPtr<FWidgetPath,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FWidgetPath,1> *pTVar5;
  FWidgetPath *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FWidgetPath,1> local_18;
  
  pTVar1 = &this->StrongFocusPath;
  if (pTVar1->Object == (FWidgetPath *)0x0) {
    pTVar5 = FWeakWidgetPath::ToWidgetPathRef
                       (&this->WeakFocusPath,&local_18,Truncate,(FPointerEvent *)0x0,
                        EVisibility::Visible);
    local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_28 = pTVar5->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FWidgetPath,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FWidgetPath *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StrongFocusPath).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (FWidgetPath *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedRef<FWidgetPath,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
  }
  __return_storage_ptr__->Object = pTVar1->Object;
  pTVar2 = (this->StrongFocusPath).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FWidgetPath *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FWidgetPath,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// OverrideCursor @ 1426caa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::OverrideCursor(FSlateUser *this,TSharedPtr<ICursor,1> *param_1)

{
  ICursor *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Cursor).SharedReferenceCount.ReferenceController;
  (this->Cursor).Object = pIVar1;
  (this->Cursor).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// FSlateUser @ 1426fc270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateUser * __thiscall
FSlateUser::FSlateUser(FSlateUser *this,int param_1,TSharedPtr<ICursor,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FPlatformUserId FVar2;
  FWidgetPath *pFVar3;
  TVector2<double> *pTVar4;
  undefined4 extraout_var;
  ForElementType<FArrangedWidget> FVar5;
  longlong lVar6;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  TPairInitializer<unsigned_int_const_&,UE::Math::TVector2<float>_const_&> local_1a8;
  TVector2<float> *local_198;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->UserIndex = param_1;
  (this->PlatformUser).InternalId = -1;
  this->_padding_ = (longlong)&___7FSlateUser__6B_;
  (this->Cursor).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Cursor).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->LastCursorSignificantMoveTime = 0.0;
  (this->UserNavigationConfig).Object = (FNavigationConfig *)0x0;
  (this->UserNavigationConfig).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bCanDrawCursor = true;
  this->bNeedQueryForVisibleCursor = true;
  this->bQueryCursorRequested = false;
  this->NumPendingSyntheticCursorMoves = 0;
  (this->CursorWindowPtr).Object = (SWindow *)0x0;
  (this->CursorWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CursorWidgetPtr).Object = (SWidget *)0x0;
  (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar3 = FWidgetPath::FWidgetPath(&local_190);
  FWeakWidgetPath::FWeakWidgetPath(&this->WeakFocusPath,pFVar3);
  if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar5 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_190.Widgets.Array.ArrayNum);
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  (this->StrongFocusPath).Object = (FWidgetPath *)0x0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x0 = 0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x20 = 0;
  (this->StrongFocusPath).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->FocusCause = Cleared;
  this->bShowFocus = false;
  this->FocusVersion = 0;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x48 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x0 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x48 = 0;
  *(undefined8 *)&this->PointerCaptorPathsByIndex = 0;
  *(undefined8 *)&(this->PointerCaptorPathsByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PointerCaptorPathsByIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PointerCaptorPathsByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x48 = 0;
  *(undefined8 *)&this->DragStatesByPointerIndex = 0;
  *(undefined8 *)&(this->DragStatesByPointerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->DragStatesByPointerIndex).field_0x20 = 0;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x28 = 0;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x34 = 0;
  *(undefined8 *)&(this->DragStatesByPointerIndex).field_0x40 = 0;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x48 = 0;
  (this->DragDropContent).Object = (FDragDropOperation *)0x0;
  (this->DragDropContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DragDropWindowPtr).Object = (SWindow *)0x0;
  (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->WidgetsUnderPointerLastEventByIndex = 0;
  *(undefined8 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 = 0;
  pFVar3 = FWidgetPath::FWidgetPath(&local_190);
  FWeakWidgetPath::FWeakWidgetPath(&this->LockingWidgetPath,pFVar3);
  if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar5 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_190.Widgets.Array.ArrayNum);
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  (this->LastComputedLockBounds).Left = -1.0;
  lVar6 = 0xb;
  (this->LastComputedLockBounds).Top = -1.0;
  (this->LastComputedLockBounds).Right = -1.0;
  (this->LastComputedLockBounds).Bottom = -1.0;
  (this->TooltipWindowPtr).Object = (SWindow *)0x0;
  (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).Tooltip.Object = (IToolTip *)0x0;
  (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).TooltipVisualizer.Object = (SWidget *)0x0;
  (this->ActiveTooltipInfo).TooltipVisualizer.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).SourceWidget.Object = (SWidget *)0x0;
  (this->ActiveTooltipInfo).SourceWidget.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).DesiredLocation.field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->ActiveTooltipInfo).DesiredSize.field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pTVar4 = &(this->GestureDetector).LongPressTrack[0].Location;
  (this->ActiveTooltipInfo).SummonTime = 0.0;
  (this->ActiveTooltipInfo).OffsetDirection = Undetermined;
  (this->ActiveTooltipInfo).WasInteractive = false;
  (this->ActiveTooltipInfo).HasBeenPositioned = false;
  do {
    (((FLongPressData *)(pTVar4 + -1))->Time).bIsSet = false;
    (pTVar4->field0_0x0)._s_0.X = 0.0;
    (pTVar4->field0_0x0)._s_0.Y = 0.0;
    pTVar4 = pTVar4 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FVar2 = FGenericPlatformMisc::GetPlatformUserForUserIndex((int)&local_1a8);
  (this->PlatformUser).InternalId = *(int *)CONCAT44(extraout_var,FVar2.InternalId);
  if (4 < (byte)LogSlate._0_1_) {
    local_1b8 = (uint)((this->Cursor).Object == (ICursor *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  local_1a8.Value = (TVector2<float> *)&FSlateApplicationBase::CursorPointerIndex;
  local_198 = &UE::Math::TVector2<float>::ZeroVector;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector2<float>_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)&this->PointerPositionsByIndex,&local_1a8,(bool *)&local_1a8.Value);
  local_1a8.Value = (TVector2<float> *)&FSlateApplicationBase::CursorPointerIndex;
  local_198 = &UE::Math::TVector2<float>::ZeroVector;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector2<float>_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)&this->PreviousPointerPositionsByIndex,&local_1a8,(bool *)&local_1a8.Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FSlateUser @ 1426fc6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateUser * __thiscall
FSlateUser::FSlateUser(FSlateUser *this,FPlatformUserId param_1,TSharedPtr<ICursor,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetPath *pFVar2;
  TVector2<double> *pTVar3;
  ForElementType<FArrangedWidget> FVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  TPairInitializer<unsigned_int_const_&,UE::Math::TVector2<float>_const_&> local_1a8;
  TVector2<float> *local_198;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->UserIndex = -1;
  (this->PlatformUser).InternalId = param_1.InternalId;
  this->_padding_ = (longlong)&___7FSlateUser__6B_;
  (this->Cursor).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Cursor).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->LastCursorSignificantMoveTime = 0.0;
  (this->UserNavigationConfig).Object = (FNavigationConfig *)0x0;
  (this->UserNavigationConfig).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bCanDrawCursor = true;
  this->bNeedQueryForVisibleCursor = true;
  this->bQueryCursorRequested = false;
  this->NumPendingSyntheticCursorMoves = 0;
  (this->CursorWindowPtr).Object = (SWindow *)0x0;
  (this->CursorWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CursorWidgetPtr).Object = (SWidget *)0x0;
  (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar2 = FWidgetPath::FWidgetPath(&local_190);
  FWeakWidgetPath::FWeakWidgetPath(&this->WeakFocusPath,pFVar2);
  if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar4 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_190.Widgets.Array.ArrayNum);
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  (this->StrongFocusPath).Object = (FWidgetPath *)0x0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x0 = 0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x20 = 0;
  (this->StrongFocusPath).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->FocusCause = Cleared;
  this->bShowFocus = false;
  this->FocusVersion = 0;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PointerPositionsByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x48 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x0 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PreviousPointerPositionsByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x48 = 0;
  *(undefined8 *)&this->PointerCaptorPathsByIndex = 0;
  *(undefined8 *)&(this->PointerCaptorPathsByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PointerCaptorPathsByIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PointerCaptorPathsByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x48 = 0;
  *(undefined8 *)&this->DragStatesByPointerIndex = 0;
  *(undefined8 *)&(this->DragStatesByPointerIndex).field_0x8 = 0;
  *(undefined8 *)&(this->DragStatesByPointerIndex).field_0x20 = 0;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x28 = 0;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x34 = 0;
  *(undefined8 *)&(this->DragStatesByPointerIndex).field_0x40 = 0;
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x48 = 0;
  (this->DragDropContent).Object = (FDragDropOperation *)0x0;
  (this->DragDropContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DragDropWindowPtr).Object = (SWindow *)0x0;
  (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->WidgetsUnderPointerLastEventByIndex = 0;
  *(undefined8 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40 = 0;
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 = 0;
  pFVar2 = FWidgetPath::FWidgetPath(&local_190);
  FWeakWidgetPath::FWeakWidgetPath(&this->LockingWidgetPath,pFVar2);
  if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar4 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_190.Widgets.Array.ArrayNum);
  if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  (this->LastComputedLockBounds).Left = -1.0;
  lVar5 = 0xb;
  (this->LastComputedLockBounds).Top = -1.0;
  (this->LastComputedLockBounds).Right = -1.0;
  (this->LastComputedLockBounds).Bottom = -1.0;
  (this->TooltipWindowPtr).Object = (SWindow *)0x0;
  (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).Tooltip.Object = (IToolTip *)0x0;
  (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).TooltipVisualizer.Object = (SWidget *)0x0;
  (this->ActiveTooltipInfo).TooltipVisualizer.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).SourceWidget.Object = (SWidget *)0x0;
  (this->ActiveTooltipInfo).SourceWidget.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveTooltipInfo).DesiredLocation.field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->ActiveTooltipInfo).DesiredSize.field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pTVar3 = &(this->GestureDetector).LongPressTrack[0].Location;
  (this->ActiveTooltipInfo).SummonTime = 0.0;
  (this->ActiveTooltipInfo).OffsetDirection = Undetermined;
  (this->ActiveTooltipInfo).WasInteractive = false;
  (this->ActiveTooltipInfo).HasBeenPositioned = false;
  do {
    (((FLongPressData *)(pTVar3 + -1))->Time).bIsSet = false;
    (pTVar3->field0_0x0)._s_0.X = 0.0;
    (pTVar3->field0_0x0)._s_0.Y = 0.0;
    pTVar3 = pTVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  this->UserIndex = param_1.InternalId;
  if (4 < (byte)LogSlate._0_1_) {
    local_1b8 = (uint)((this->Cursor).Object == (ICursor *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  local_1a8.Value = (TVector2<float> *)&FSlateApplicationBase::CursorPointerIndex;
  local_198 = &UE::Math::TVector2<float>::ZeroVector;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector2<float>_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)&this->PointerPositionsByIndex,&local_1a8,(bool *)&local_1a8.Value);
  local_1a8.Value = (TVector2<float> *)&FSlateApplicationBase::CursorPointerIndex;
  local_198 = &UE::Math::TVector2<float>::ZeroVector;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,UE::Math::TVector2<float>_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)&this->PreviousPointerPositionsByIndex,&local_1a8,(bool *)&local_1a8.Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSlateUser @ 142701190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::~FSlateUser(FSlateUser *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  longlong *plVar8;
  
  this->_padding_ = (longlong)&___7FSlateUser__6B_;
  if (4 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  FActiveTooltipInfo::~FActiveTooltipInfo(&this->ActiveTooltipInfo);
  pTVar5 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->LockingWidgetPath).Window.WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->LockingWidgetPath).Widgets.AllocatorInstance.Data,
             (this->LockingWidgetPath).Widgets.ArrayNum);
  pFVar6 = (this->LockingWidgetPath).Widgets.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  *(undefined4 *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 = 0;
  pvVar7 = *(void **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetsUnderPointerLastEventByIndex);
  pTVar5 = (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DragDropContent).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->DragStatesByPointerIndex).field_0x48 = 0;
  pvVar7 = *(void **)&(this->DragStatesByPointerIndex).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSlateUser::FDragDetectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSlateUser::FDragDetectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSlateUser::FDragDetectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DragStatesByPointerIndex);
  *(undefined4 *)&(this->PointerCaptorPathsByIndex).field_0x48 = 0;
  pvVar7 = *(void **)&(this->PointerCaptorPathsByIndex).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PointerCaptorPathsByIndex);
  *(undefined4 *)&(this->PreviousPointerPositionsByIndex).field_0x48 = 0;
  pvVar7 = *(void **)&(this->PreviousPointerPositionsByIndex).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousPointerPositionsByIndex);
  *(undefined4 *)&(this->PointerPositionsByIndex).field_0x48 = 0;
  pvVar7 = *(void **)&(this->PointerPositionsByIndex).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::Math::TVector2<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PointerPositionsByIndex);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StrongFocusPath).SharedReferenceCount.ReferenceController);
  pTVar5 = (this->WeakFocusPath).Window.WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)(this->WeakFocusPath).Widgets.AllocatorInstance.Data,
             (this->WeakFocusPath).Widgets.ArrayNum);
  pFVar6 = (this->WeakFocusPath).Widgets.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar5 = (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->CursorWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserNavigationConfig).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Cursor).SharedReferenceCount.ReferenceController);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// CancelDragDrop @ 1427114e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014271167a) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::CancelDragDrop(FSlateUser *this)

{
  TSharedPtr<FDragDropOperation,1> *pTVar1;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *this_00;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<FArrangedWidget> FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  atomic<int> *paVar17;
  uint *puVar18;
  undefined1 auStack_388 [32];
  undefined1 local_358 [16];
  FPointerEvent local_348;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *local_2b0;
  int iStack_2a8;
  uint uStack_2a4;
  undefined1 *local_2a0;
  undefined4 uStack_298;
  int iStack_294;
  int local_290;
  int iStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  int local_280;
  int local_27c;
  LARGE_INTEGER local_278;
  longlong local_270;
  FSharedReferencer<1> FStack_268;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  FPointerEvent local_228;
  FDragDropOperation *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FWidgetPath local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_388;
  pTVar1 = &this->DragDropContent;
  if (pTVar1->Object != (FDragDropOperation *)0x0) {
    local_348._padding_._0_2_ = (ushort)local_348._padding_ & 0xfe00;
    iVar15 = 0;
    local_348._padding_._4_4_ = 0;
    local_348._padding_ = 0;
    local_348._padding_._2_1_ = 0;
    local_348._padding_._0_4_ = 0xffffffff;
    QueryPerformanceCounter(&local_278);
    local_1a0 = (this->DragDropContent).SharedReferenceCount.ReferenceController;
    local_1a8 = pTVar1->Object;
    local_348._padding_ = (longlong)&___7FPointerEvent__6B_;
    local_348.ScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
    local_348._padding_ = (longlong)local_278;
    local_2c8 = 0;
    local_2c0 = 0;
    local_348.LastScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
    local_2b8 = 0;
    local_348.CursorDelta = (FDeprecateSlateVector2D)0x0;
    local_348.PressedButtons =
         (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
    local_348.EffectingButton.KeyName.ComparisonIndex.Value = 0;
    local_348.EffectingButton.KeyName.Number = 0;
    local_348.EffectingButton.KeyDetails.Object = (FKeyDetails *)0x0;
    local_348.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_348.PointerIndex = 0;
    local_348.TouchpadIndex = 0;
    local_348.Force = 1.0;
    local_348.bIsTouchEvent = false;
    local_348.GestureType = None;
    local_348.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
    local_348.bIsDirectionInvertedFromDevice = false;
    local_348.bIsTouchForceChanged = false;
    local_348.bIsTouchFirstMove = false;
    if (local_1a0 == (TReferenceControllerBase<1> *)0x0) {
      paVar17 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar17 = &local_1a0->SharedReferenceCount;
      LOCK();
      *paVar17 = (atomic<int>)((int)*paVar17 + 1);
      UNLOCK();
    }
    local_228._padding_._0_2_ = (ushort)local_348._padding_;
    local_228.ScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
    local_228._padding_._2_1_ = local_348._padding_._2_1_;
    local_228.EffectingButton.KeyName.ComparisonIndex.Value = 0;
    local_228.EffectingButton.KeyName.Number = 0;
    local_228._padding_._4_4_ = local_348._padding_._4_4_;
    local_228.EffectingButton.KeyDetails.Object = (FKeyDetails *)0x0;
    local_228._padding_._0_4_ = (undefined4)local_348._padding_;
    local_228._padding_ = local_348._padding_;
    local_228._padding_ = (longlong)local_278;
    local_228.LastScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
    local_228.CursorDelta = (FDeprecateSlateVector2D)0x0;
    local_228.PressedButtons =
         (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
    local_228.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_228.PointerIndex = 0;
    local_228.TouchpadIndex = 0;
    local_228.bIsTouchEvent = false;
    local_228.GestureType = None;
    local_228.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
    local_228.bIsDirectionInvertedFromDevice = false;
    local_228.bIsTouchForceChanged = false;
    local_228.bIsTouchFirstMove = false;
    local_228._padding_ = (longlong)&___7FDragDropEvent__6B_;
    local_228.Force = 1.0;
    if (local_1a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar17 = (atomic<int>)((int)*paVar17 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
    this_00 = &this->WidgetsUnderPointerLastEventByIndex;
    iVar4 = *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
    local_2a0 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x10;
    local_290 = 0;
    uStack_2a4 = 1;
    iStack_294 = 0;
    if (iVar4 != 0) {
      puVar18 = *(uint **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_2a0;
      }
      uVar14 = *puVar18;
      iVar15 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar15;
        local_290 = local_290 + 0x20;
        iVar15 = iVar15 + 1;
        iStack_294 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_142711790;
        uVar14 = puVar18[lVar10 + 1];
      }
      uStack_2a4 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_2a4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_280 = (int)lVar10;
      iStack_294 = local_290 + -1 + local_280;
      if (iVar4 < iStack_294) {
        iStack_294 = iVar4;
      }
    }
LAB_142711790:
    uVar14 = *(uint *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
    iStack_288 = *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 -
                 *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34;
    puVar2 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x10;
    uStack_298 = 0xffffffff;
    TStack_258.CurrentBitIndex = iStack_294;
    TStack_258.UnvisitedBitMask = 0xffffffff;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_258._padding_ = CONCAT44(uStack_2a4,iVar15);
    iVar12 = (int)uVar14 >> 5;
    TStack_258._28_4_ = iStack_294;
    TStack_258.BaseBitIndex = local_290;
    uStack_238 = CONCAT44(uStack_284,iStack_288);
    local_2b0 = this_00;
    iStack_2a8 = iVar15;
    iStack_28c = iStack_294;
    local_260 = this_00;
    TStack_258.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2a0;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
    if (uVar14 != uVar9) {
      puVar16 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_142711890;
        uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_27c = (int)lVar10;
      uVar14 = local_27c + -1 + uVar13;
      if ((int)uVar9 < (int)uVar14) {
        uVar14 = uVar9;
      }
    }
LAB_142711890:
    while( true ) {
      pTVar7 = local_260;
      if (*(int *)(&local_260->field_0x0 + 8) - *(int *)(&local_260->field_0x0 + 0x34) !=
          (int)uStack_238) {
        local_358[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_358);
      }
      if (((TStack_258.CurrentBitIndex == uVar14) &&
          (TStack_258.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar7 == this_00)) break;
      FWeakWidgetPath::ToWidgetPath
                ((FWeakWidgetPath *)
                 ((longlong)TStack_258.CurrentBitIndex * 0x30 + *(longlong *)&pTVar7->field_0x0 + 8)
                 ,&local_198,Truncate,(FPointerEvent *)0x0,EVisibility::Visible);
      bVar8 = FWidgetPath::IsValid(&local_198);
      if ((bVar8) && (uVar13 = local_198.Widgets.Array.ArrayNum - 1, -1 < (int)uVar13)) {
        lVar10 = (longlong)(int)uVar13 * 0x48;
        do {
          uVar9 = 0;
          if ((int)uVar13 < local_198.Widgets.Array.ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar11 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
          if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar11 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          plVar5 = *(longlong **)
                    ((longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar11 + 0x38))->Object +
                    lVar10);
          (**(code **)(*plVar5 + 200))(plVar5,&local_228);
          lVar10 = lVar10 + -0x48;
          uVar13 = uVar13 - 1;
        } while (-1 < (int)uVar13);
      }
      if (local_198.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_198.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar11 = (ForElementType<FArrangedWidget>)&local_198.Widgets.Array;
      if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar11 = local_198.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar11,local_198.Widgets.Array.ArrayNum)
      ;
      if (local_198.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_198.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
    }
    if ((pTVar1->Object == (FDragDropOperation *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(pTVar1->Object->_padding_ + 0x10))(pTVar1->Object,0,&local_348);
    TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
             *)this_00);
    local_270 = 0;
    FStack_268.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FDragDropOperation,1> *)&local_270) {
      pTVar1->Object = (FDragDropOperation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DragDropContent).SharedReferenceCount,&FStack_268);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_268.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
    FPointerEvent::~FPointerEvent(&local_228);
    FPointerEvent::~FPointerEvent(&local_348);
  }
  return;
}

// ClearFocus @ 142712c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ClearFocus(FSlateUser *this,EFocusCause param_1)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::ClearUserFocus(this_00,this->UserIndex,param_1);
  return;
}

// CloseTooltip @ 142714920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::CloseTooltip(FSlateUser *this)

{
  SWindow *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  FActiveTooltipInfo::Reset(&this->ActiveTooltipInfo);
  pTVar3 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142714960;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->TooltipWindowPtr).Object;
    if ((this_00 != (SWindow *)0x0) && (bVar4 = SWindow::IsVisible(this_00), bVar4)) {
      SWindow::HideWindow(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_142714960:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Create @ 142721ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateUser,1> * __cdecl
FSlateUser::Create(TSharedRef<FSlateUser,1> *__return_storage_ptr__,int param_1,
                  TSharedPtr<ICursor,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSlateUser *this;
  TSharedRef<FSlateUser,1> *pTVar3;
  TRawPtrProxy<FSlateUser> local_res8;
  TSharedPtr<ICursor,1> local_18;
  
  this = ::operator_new(0x448);
  if (this == (FSlateUser *)0x0) {
    local_res8.Object = (FSlateUser *)0x0;
  }
  else {
    local_18.Object = param_2->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.Object = FSlateUser(this,param_1,&local_18);
    if ((((local_res8.Object != (FSlateUser *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateUser,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateUser,1>::TSharedRef<FSlateUser,1><FSlateUser>(__return_storage_ptr__,&local_res8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 142721fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateUser,1> * __cdecl
FSlateUser::Create(TSharedRef<FSlateUser,1> *__return_storage_ptr__,FPlatformUserId param_1,
                  TSharedPtr<ICursor,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FSlateUser *this;
  TSharedRef<FSlateUser,1> *pTVar3;
  TRawPtrProxy<FSlateUser> local_res8;
  TSharedPtr<ICursor,1> local_18;
  
  this = ::operator_new(0x448);
  if (this == (FSlateUser *)0x0) {
    local_res8.Object = (FSlateUser *)0x0;
  }
  else {
    local_18.Object = param_2->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.Object = FSlateUser(this,param_1,&local_18);
    if ((((local_res8.Object != (FSlateUser *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateUser,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateUser,1>::TSharedRef<FSlateUser,1><FSlateUser>(__return_storage_ptr__,&local_res8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// DetectDrag @ 14272bf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FSlateUser::DetectDrag
          (FSlateUser *this,FWidgetPath *__return_storage_ptr__,FPointerEvent *param_1,float param_2
          )

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  FWeakWidgetPath *this_00;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_1a8 [32];
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (*(int *)&(this->DragStatesByPointerIndex).field_0x8 !=
      *(int *)&(this->DragStatesByPointerIndex).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DragStatesByPointerIndex).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DragStatesByPointerIndex).field_0x38;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->DragStatesByPointerIndex).field_0x48 - 1U &
                               param_1->PointerIndex) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar2 * 0x58 +
                         *(longlong *)&(this->DragStatesByPointerIndex).field_0x0);
        if (*puVar3 == param_1->PointerIndex) {
          this_00 = (FWeakWidgetPath *)(puVar3 + 2);
          if (puVar3 == (uint *)0x0) {
            this_00 = (FWeakWidgetPath *)0x0;
          }
          if ((this_00 != (FWeakWidgetPath *)0x0) &&
             (fVar7 = *(float *)((longlong)&this_00[1].Widgets.AllocatorInstance.Data + 4) -
                      *(float *)&(param_1->ScreenSpacePosition).field_0x4,
             fVar6 = *(float *)&this_00[1].Widgets.AllocatorInstance.Data -
                     *(float *)&param_1->ScreenSpacePosition,
             param_2 * param_2 < fVar7 * fVar7 + fVar6 * fVar6)) {
            FWeakWidgetPath::ToWidgetPath
                      (this_00,&local_178,ReturnInvalid,(FPointerEvent *)0x0,EVisibility::Visible);
            bVar1 = FWidgetPath::IsValid(&local_178);
            if (bVar1) {
              TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
              ::Reset((TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
                       *)&this->DragStatesByPointerIndex);
              FWidgetPath::FWidgetPath(__return_storage_ptr__,&local_178);
              if (local_178.VirtualPointerPositions.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
              FVar4 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
              if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
                  (ForElementType<FArrangedWidget>)0x0) {
                FVar4 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
              }
              DestructItems<FArrangedWidget,int>
                        ((FArrangedWidget *)FVar4,local_178.Widgets.Array.ArrayNum);
              if (local_178.Widgets.Array.AllocatorInstance.SecondaryData ==
                  (ForElementType<FArrangedWidget>)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
              return __return_storage_ptr__;
            }
            if (local_178.VirtualPointerPositions.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
            FVar4 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
            if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar4 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>
                      ((FArrangedWidget *)FVar4,local_178.Widgets.Array.ArrayNum);
            if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
            }
          }
          break;
        }
        uVar2 = puVar3[0x14];
      } while (uVar2 != 0xffffffff);
    }
  }
  FWidgetPath::FWidgetPath(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DoesWidgetHaveAnyCapture @ 14272c990

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::DoesWidgetHaveAnyCapture(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  SWidget *pSVar12;
  uint uVar13;
  SWidget *pSVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->PointerCaptorPathsByIndex).field_0x10;
  iVar3 = *(int *)&(this->PointerCaptorPathsByIndex).field_0x28;
  iVar16 = 0;
  uVar9 = 1;
  iVar18 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->PointerCaptorPathsByIndex).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    iVar18 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14272ca3e;
      uVar15 = puVar19[lVar11 + 1];
    }
    uVar9 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar18 + -1 + (int)lVar11;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14272ca3e:
  uVar15 = *(uint *)&(this->PointerCaptorPathsByIndex).field_0x28;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar16);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar18;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PointerCaptorPathsByIndex).field_0x8 -
                       *(int *)&(this->PointerCaptorPathsByIndex).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(this->PointerCaptorPathsByIndex).field_0x28;
  if (uVar15 != uVar9) {
    puVar17 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar16;
      uVar13 = uVar13 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14272cb40;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_14272cb40:
  do {
    if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 -
        *(int *)&(this->PointerCaptorPathsByIndex).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x30 +
             *(longlong *)&this->PointerCaptorPathsByIndex;
    if ((*(int *)(lVar11 + 0x10) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                           ,0x11a,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    uVar13 = *(int *)(lVar11 + 0x10) - 1;
    uVar9 = 0;
    if ((int)uVar13 < *(int *)(lVar11 + 0x10)) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pSVar4 = *(SWidget **)(*(longlong *)(lVar11 + 8) + (longlong)(int)uVar13 * 0x10);
    pSVar5 = *(SWidget **)(*(longlong *)(lVar11 + 8) + 8 + (longlong)(int)uVar13 * 0x10);
    pSVar12 = pSVar5;
    pSVar14 = (SWidget *)0x0;
    if (pSVar5 != (SWidget *)0x0) {
      LOCK();
      puVar17 = (undefined1 *)((longlong)&pSVar5->_padding_ + 4);
      *(int *)puVar17 = *(int *)puVar17 + 1;
      UNLOCK();
      iVar3 = (int)pSVar5->_padding_;
      do {
        pSVar12 = (SWidget *)0x0;
        if (iVar3 == 0) break;
        LOCK();
        iVar18 = (int)pSVar5->_padding_;
        bVar7 = iVar3 == iVar18;
        if (bVar7) {
          *(int *)&pSVar5->_padding_ = iVar3 + 1;
          iVar18 = iVar3;
        }
        UNLOCK();
        pSVar12 = pSVar5;
        iVar3 = iVar18;
      } while (!bVar7);
      LOCK();
      puVar17 = (undefined1 *)((longlong)&pSVar5->_padding_ + 4);
      iVar3 = *(int *)puVar17;
      *(int *)puVar17 = *(int *)puVar17 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(pSVar5->_padding_ + 8))(pSVar5,1);
      }
      pSVar14 = pSVar4;
      if (pSVar12 == (SWidget *)0x0) {
        pSVar14 = (SWidget *)0x0;
      }
    }
    pSVar4 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar12);
    if (pSVar14 == pSVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// DoesWidgetHaveCapture @ 14272ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::DoesWidgetHaveCapture
          (FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1,uint param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  atomic<int> aVar5;
  uint *puVar6;
  TWeakPtr<SWidget,1> *pTVar7;
  SWidget *pSVar8;
  undefined1 *puVar9;
  SWidget *pSVar10;
  bool bVar11;
  SWidget *local_res8;
  TWeakPtr<SWidget,1> local_38;
  
  pSVar10 = (SWidget *)0x0;
  if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
      *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PointerCaptorPathsByIndex).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & param_2
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x30 +
                         *(longlong *)&this->PointerCaptorPathsByIndex);
        if (*puVar6 == param_2) {
          pSVar8 = (SWidget *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pSVar8 = pSVar10;
          }
          if (pSVar8 != (SWidget *)0x0) {
            pTVar7 = FWeakWidgetPath::GetLastWidget((FWeakWidgetPath *)pSVar8,&local_38);
            pSVar8 = (SWidget *)(pTVar7->WeakReferenceCount).ReferenceController;
            local_res8 = pSVar8;
            if (pSVar8 == (SWidget *)0x0) goto LAB_14272ce31;
            aVar2 = *(atomic<int> *)&pSVar8->_padding_;
            goto joined_r0x00014272cded;
          }
          break;
        }
        uVar4 = puVar6[10];
      } while (uVar4 != 0xffffffff);
    }
  }
  goto LAB_14272cd5f;
  while( true ) {
    LOCK();
    aVar5 = *(atomic<int> *)&pSVar8->_padding_;
    bVar11 = aVar2 == aVar5;
    if (bVar11) {
      *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar2 + 1);
      aVar5 = aVar2;
    }
    UNLOCK();
    local_res8 = pSVar8;
    aVar2 = aVar5;
    if (bVar11) break;
joined_r0x00014272cded:
    local_res8 = pSVar10;
    if (aVar2 == (atomic<int>)0x0) break;
  }
  pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
  LOCK();
  paVar1 = &pTVar3->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
  }
  (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_res8 != (SWidget *)0x0) {
    pSVar10 = pTVar7->Object;
    pTVar7->Object = (SWidget *)0x0;
  }
LAB_14272ce31:
  bVar11 = pSVar10 == param_1->Object;
  pSVar10 = (SWidget *)&DAT_00000003;
  if (bVar11) {
    bVar11 = true;
    goto LAB_14272cd62;
  }
LAB_14272cd5f:
  bVar11 = false;
LAB_14272cd62:
  if (((ulonglong)pSVar10 & 2) != 0) {
    pSVar10 = (SWidget *)(ulonglong)((uint)pSVar10 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_res8);
  }
  if ((((ulonglong)pSVar10 & 1) != 0) &&
     (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar11;
}

// DoesWidgetHaveCursorCapture @ 14272ce60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::DoesWidgetHaveCursorCapture(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  uint uVar1;
  bool bVar2;
  TSharedPtr<SWidget_const_,1> local_18;
  
  uVar1 = FSlateApplicationBase::CursorPointerIndex;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = DoesWidgetHaveCapture(this,&local_18,uVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// DrawCursor @ 14272d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::DrawCursor
          (FSlateUser *this,TSharedRef<SWindow,1> *param_1,FSlateWindowElementList *param_2,
          int *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  SWidget *this_00;
  FDeprecateVector2DParameter FVar4;
  double dVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  FSlateApplication *pFVar8;
  FSlateApplication *pFVar9;
  TSharedPtr<FGenericWindow,1> *this_01;
  FGenericWindow *pFVar10;
  FGeometry *pFVar11;
  TTransform2<float> *pTVar12;
  FDeprecateSlateVector2D FVar13;
  FSlateRect *pFVar14;
  FHittestGrid *pFVar15;
  FPaintArgs *pFVar16;
  SWindow *this_02;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_198 [32];
  undefined8 local_158;
  float local_150 [2];
  undefined8 local_140;
  FSharedReferencer<1> FStack_138;
  TVector2<float>_u_0 local_130;
  FLinearColor_u_0 local_128;
  FLinearColor_u_0 FStack_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int *local_f8;
  FSlateWindowElementList *local_f0;
  SWidget *local_e8;
  FGeometry local_e0;
  FGeometry local_a8;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar17 = (this->CursorWindowPtr).WeakReferenceCount.ReferenceController;
  this_02 = (SWindow *)0x0;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar17->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14272d55a;
      }
      LOCK();
      aVar7 = pTVar17->SharedReferenceCount;
      bVar19 = aVar6 == aVar7;
      if (bVar19) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar19);
    this_02 = (this->CursorWindowPtr).Object;
  }
LAB_14272d55a:
  local_f8 = param_3;
  local_f0 = param_2;
  if (((this->bCanDrawCursor != false) && (this_02 != (SWindow *)0x0)) &&
     (this_02 == param_1->Object)) {
    pTVar18 = (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar18->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar18 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14272d5a2;
        }
        LOCK();
        aVar7 = pTVar18->SharedReferenceCount;
        bVar19 = aVar6 == aVar7;
        if (bVar19) {
          pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar7 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar7;
      } while (!bVar19);
      this_00 = (this->CursorWidgetPtr).Object;
      local_e8 = this_00;
      if (this_00 != (SWidget *)0x0) {
        pFVar8 = FSlateApplication::Get();
        pFVar9 = FSlateApplication::Get();
        this_01 = SWindow::GetNativeWindow(this_02,(TSharedPtr<FGenericWindow,1> *)&local_140);
        pFVar10 = TSharedPtr<FGenericWindow,1>::operator->(this_01);
        fVar20 = (float)(**(code **)(pFVar10->_padding_ + 0xf8))(pFVar10);
        fVar21 = (float)(**(code **)(*(longlong *)pFVar9 + 0x58))(pFVar9);
        fVar21 = fVar21 * fVar20;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_138.ReferenceController);
        local_128._0_2_ = 0x100;
        local_128._8_8_ = 0;
        FStack_118._0_8_ = 0;
        local_128._0_1_ = EVisibility::HitTestInvisible.Value.Value;
        FStack_118._8_8_ = 0;
        (**(code **)(this_00->_padding_ + 0x1c8))(this_00,&local_128);
        SWidget::SlatePrepass(this_00,fVar21);
        GetPointerPosition(this,(uint)&local_140);
        pFVar11 = SWindow::GetWindowGeometryInScreen(param_1->Object,&local_a8);
        pTVar12 = Inverse<TTransform2<float>_>
                            ((TTransform2<float> *)&local_128._s_0,
                             &pFVar11->AccumulatedRenderTransform);
        fVar20 = SoftwareCursorScale;
        local_158._4_4_ = local_140._4_4_;
        local_158._0_4_ = (undefined4)local_140;
        local_140._0_4_ =
             ((float)local_158._4_4_ * (pTVar12->M).M[1][0] +
              (float)(undefined4)local_158 * (pTVar12->M).M[0][0] +
             (pTVar12->Trans).field0_0x0._s_0.X) * fVar21;
        local_140._4_4_ =
             ((float)local_158._4_4_ * (pTVar12->M).M[1][1] +
              (float)(undefined4)local_158 * (pTVar12->M).M[0][1] +
             (pTVar12->Trans).field0_0x0._s_0.Y) * fVar21;
        FVar13 = SWidget::GetDesiredSize(this_00);
        fVar21 = SoftwareCursorScale;
        local_158._0_4_ = (float)local_140 + fVar20 * *(float *)FVar13 * __real_bf000000;
        local_158._4_4_ =
             local_140._4_4_ + fVar20 * *(float *)((longlong)FVar13 + 4) * __real_bf000000;
        FVar13 = SWidget::GetDesiredSize(this_00);
        FStack_118._0_8_ = 0;
        local_130 = local_158;
        local_e0.Scale = 1.0;
        local_e0.AbsolutePosition.field0_0x0._s_0.X = 0.0;
        local_128._s_0.R = ___xmm_3f80000000000000000000003f800000;
        local_128._s_0.G = _UNK_15076b184;
        local_128._8_8_ = _UNK_15076b188;
        local_e0.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
        local_140._4_4_ = fVar21 * *(float *)((longlong)FVar13 + 4);
        local_140._0_4_ = fVar21 * *(float *)FVar13;
        local_e0.Size = (FDeprecateSlateVector2D)local_140;
        local_e0.Position.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_140._0_4_ = ___xmm_3f80000000000000000000003f800000;
        local_140._4_4_ = _UNK_15076b184;
        FStack_138.ReferenceController = _UNK_15076b188;
        Concatenate<TTransform2<float>_>
                  (&local_e0.AccumulatedRenderTransform,(TTransform2<float> *)&local_140,
                   (TTransform2<float> *)&local_128._s_0);
        local_e0.bHasRenderTransform = '\0';
        local_140 = local_158;
        local_108 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
        local_e0.Position.field0_0x0 = local_158;
        local_e0.Scale = 1.0;
        bVar19 = *(bool *)((longlong)&param_1->Object->_padding_ + 2);
        local_104 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.G;
        local_128._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
        local_128._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
        local_128._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
        local_128._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
        FStack_118._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
        FStack_118._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
        FStack_118._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
        FStack_118._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
        local_100 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.B;
        local_fc = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.A;
        *local_f8 = *local_f8 + 1;
        iVar3 = *local_f8;
        local_e0.AbsolutePosition.field0_0x0._s_0.X = (float)(undefined4)local_158;
        local_e0.AbsolutePosition.field0_0x0._s_0.Y = (float)local_158._4_4_;
        pFVar14 = SWindow::GetClippingRectangleInWindow(param_1->Object,(FSlateRect *)&local_140);
        dVar1 = pFVar8->CurrentTime;
        dVar2 = pFVar8->LastTickTime;
        dVar5 = (double)(**(code **)(*(longlong *)pFVar8 + 0x60))(pFVar8);
        FVar13 = SWindow::GetPositionInScreen(param_1->Object);
        FVar4 = *(FDeprecateVector2DParameter *)FVar13;
        pFVar15 = SWindow::GetHittestGrid(param_1->Object);
        pFVar16 = FPaintArgs::FPaintArgs
                            ((FPaintArgs *)&local_a8,(SWidget *)param_1->Object,pFVar15,FVar4,dVar5,
                             (float)(dVar1 - dVar2));
        SWidget::Paint(local_e8,pFVar16,&local_e0,pFVar14,local_f0,iVar3,
                       (FWidgetStyle *)&local_128._s_0,bVar19);
      }
    }
LAB_14272d5a2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return;
}

// DrawWindowlessDragDropContent @ 14272da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::DrawWindowlessDragDropContent
          (FSlateUser *this,TSharedRef<SWindow,1> *param_1,FSlateWindowElementList *param_2,
          int *param_3)

{
  TSharedPtr<FDragDropOperation,1> *this_00;
  double dVar1;
  double dVar2;
  int iVar3;
  SWindow *this_01;
  FDeprecateVector2DParameter FVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TVector2<float>_u_0_s_0 TVar7;
  TSharedRef<SWindow,1> *pTVar8;
  char cVar9;
  atomic<int> aVar10;
  FDragDropOperation *pFVar11;
  FSlateApplication *pFVar12;
  TSharedPtr<FGenericWindow,1> *this_02;
  FGenericWindow *pFVar13;
  FGeometry *pFVar14;
  double *pdVar15;
  TTransform2<float> *pTVar16;
  FSlateRect *pFVar17;
  FDeprecateSlateVector2D FVar18;
  FHittestGrid *pFVar19;
  FPaintArgs *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  undefined1 auStackY_278 [32];
  SWidget *local_230;
  TReferenceControllerBase<1> *local_228;
  TVector2<float>_u_0_s_0 local_220;
  float local_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  TSharedRef<SWindow,1> *local_208;
  FLinearColor_u_0 local_200;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  int *local_1d0;
  FSlateWindowElementList *local_1c8;
  uchar local_1c0 [8];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  TTransform2<float> local_1a0;
  TSharedPtr<FGenericWindow,1> local_178;
  TTransform2<float> local_168;
  undefined1 local_150 [16];
  FSlateRect local_140;
  TTransform2<float> local_130;
  FPaintArgs local_118;
  FGeometry local_e8;
  FGeometry local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = &this->DragDropContent;
  if ((this_00->Object != (FDragDropOperation *)0x0) &&
     (local_208 = param_1, local_1d0 = param_3, local_1c8 = param_2,
     cVar9 = (**(code **)(this_00->Object->_padding_ + 0x48))(), cVar9 != '\0')) {
    pTVar21 = (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = pTVar21->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          pTVar21 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14272da92;
        }
        LOCK();
        aVar10 = pTVar21->SharedReferenceCount;
        bVar22 = aVar6 == aVar10;
        if (bVar22) {
          pTVar21->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar10 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar10;
      } while (!bVar22);
      this_01 = (this->DragDropWindowPtr).Object;
      if ((this_01 != (SWindow *)0x0) && (this_01 == param_1->Object)) {
        pFVar11 = TSharedPtr<FDragDropOperation,1>::operator->(this_00);
        (**(code **)(pFVar11->_padding_ + 0x28))(pFVar11,&local_230);
        if (local_230 != (SWidget *)0x0) {
          if ((local_230 == (SWidget *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((byte)local_230->VisibilityAttribute & 0x19) != 0) {
            pFVar12 = FSlateApplication::Get();
            this_02 = SWindow::GetNativeWindow(this_01,&local_178);
            pFVar13 = TSharedPtr<FGenericWindow,1>::operator->(this_02);
            pcVar5 = *(code **)(*(longlong *)pFVar12 + 0x58);
            fVar23 = (float)(**(code **)(pFVar13->_padding_ + 0xf8))(pFVar13);
            fVar24 = (float)(*pcVar5)(pFVar12);
            fVar24 = fVar24 * fVar23;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_178.SharedReferenceCount.ReferenceController);
            if ((local_230 == (SWidget *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_1c0[1] = 1;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1c0[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
            local_1a8 = 0;
            (**(code **)(local_230->_padding_ + 0x1c8))(local_230,local_1c0);
            if ((local_230 == (SWidget *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            SWidget::SlatePrepass(local_230,fVar24);
            pFVar14 = SWindow::GetWindowGeometryInScreen(param_1->Object,&local_b0);
            pFVar11 = TSharedPtr<FDragDropOperation,1>::operator->(this_00);
            pdVar15 = (double *)(**(code **)(pFVar11->_padding_ + 0x30))(pFVar11,local_150);
            local_218 = (float)*pdVar15;
            fStack_214 = (float)pdVar15[1];
            pTVar16 = Inverse<TTransform2<float>_>(&local_130,&pFVar14->AccumulatedRenderTransform);
            local_220.Y = (local_218 * (pTVar16->M).M[0][1] + fStack_214 * (pTVar16->M).M[1][1] +
                          (pTVar16->Trans).field0_0x0._s_0.Y) * fVar24;
            local_220.X = (fStack_214 * (pTVar16->M).M[1][0] + local_218 * (pTVar16->M).M[0][0] +
                          (pTVar16->Trans).field0_0x0._s_0.X) * fVar24;
            if ((local_230 == (SWidget *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_e8.Size = SWidget::GetDesiredSize(local_230);
            TVar7 = local_220;
            local_1a0.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
            local_e8.Size = *(FDeprecateSlateVector2D *)local_e8.Size;
            local_e8.Position.field0_0x0._s_0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_1a0.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_1a0.M.M[0][1] = _UNK_15076b184;
            local_1a0.M.M[1][0] = _UNK_15076b188;
            local_1a0.M.M[1][1] = _UNK_15076b18c;
            local_e8.Scale = 1.0;
            local_e8.AbsolutePosition.field0_0x0._s_0.X = 0.0;
            local_e8.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
            local_168.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
            local_168.M.M[0][1] = _UNK_15076b184;
            local_168.M.M[1][0] = _UNK_15076b188;
            local_168.M.M[1][1] = _UNK_15076b18c;
            local_168.Trans.field0_0x0._s_0 = (TVector2<float>_u_0)local_220;
            Concatenate<TTransform2<float>_>
                      (&local_e8.AccumulatedRenderTransform,&local_168,&local_1a0);
            local_e8.bHasRenderTransform = '\0';
            local_220.X = TVar7.X;
            local_220.Y = TVar7.Y;
            local_210 = local_220.X;
            fStack_20c = local_220.Y;
            local_e8.AbsolutePosition.field0_0x0._s_0.X = local_220.X;
            local_e8.AbsolutePosition.field0_0x0._s_0.Y = local_220.Y;
            local_e8.Scale = 1.0;
            local_e8.Position.field0_0x0 = (TVector2<float>_u_0)TVar7;
            local_220 = TVar7;
            if ((local_230 == (SWidget *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar22)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_1d4 = FWidgetStyle::SubdueAmount;
            local_200._s_0.A = FLinearColor::White.field0_0x0._s_0.A;
            local_200._s_0.B = FLinearColor::White.field0_0x0._s_0.B;
            local_200._s_0.G = FLinearColor::White.field0_0x0._s_0.G;
            local_200._s_0.R = FLinearColor::White.field0_0x0._s_0.R;
            bVar22 = *(bool *)((longlong)&param_1->Object->_padding_ + 2);
            local_1e0 = FWidgetStyle::SubdueAmount * FLinearColor::White.field0_0x0._s_0.R;
            *local_1d0 = *local_1d0 + 1;
            iVar3 = *local_1d0;
            local_1f0 = local_200._s_0.R;
            local_1d8 = local_1d4 * local_200._s_0.B;
            local_1dc = local_1d4 * local_200._s_0.G;
            local_1d4 = local_1d4 * local_200._s_0.A;
            local_1ec = local_200._s_0.G;
            local_1e8 = local_200._s_0.B;
            local_1e4 = local_200._s_0.A;
            pFVar17 = SWindow::GetClippingRectangleInWindow(local_208->Object,&local_140);
            dVar1 = pFVar12->CurrentTime;
            dVar2 = pFVar12->LastTickTime;
            dVar25 = (double)(**(code **)(*(longlong *)pFVar12 + 0x60))(pFVar12);
            pTVar8 = local_208;
            FVar18 = SWindow::GetPositionInScreen(local_208->Object);
            FVar4 = *(FDeprecateVector2DParameter *)FVar18;
            pFVar19 = SWindow::GetHittestGrid(pTVar8->Object);
            pFVar20 = FPaintArgs::FPaintArgs
                                (&local_118,(SWidget *)pTVar8->Object,pFVar19,FVar4,dVar25,
                                 (float)(dVar1 - dVar2));
            SWidget::Paint(local_230,pFVar20,&local_e8,pFVar17,local_1c8,iVar3,
                           (FWidgetStyle *)&local_200._s_0,bVar22);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228);
      }
    }
LAB_14272da92:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  }
  return;
}

// FinishFrame @ 142736c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::FinishFrame(FSlateUser *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->StrongFocusPath != (TSharedPtr<FWidgetPath,1> *)&local_18) {
    (this->StrongFocusPath).Object = (FWidgetPath *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StrongFocusPath).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// GetCaptorPath @ 14273af10

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FSlateUser::GetCaptorPath
          (FSlateUser *this,FWidgetPath *__return_storage_ptr__,uint param_1,Type param_2,
          FPointerEvent *param_3)

{
  uint uVar1;
  Result RVar2;
  uint *puVar3;
  FWeakWidgetPath *this_00;
  undefined1 *puVar4;
  
  FWidgetPath::FWidgetPath(__return_storage_ptr__);
  if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
      *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PointerCaptorPathsByIndex).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x30 +
                         *(longlong *)&this->PointerCaptorPathsByIndex);
        if (*puVar3 == param_1) {
          this_00 = (FWeakWidgetPath *)(puVar3 + 2);
          if (puVar3 == (uint *)0x0) {
            this_00 = (FWeakWidgetPath *)0x0;
          }
          if (this_00 == (FWeakWidgetPath *)0x0) {
            return __return_storage_ptr__;
          }
          RVar2 = FWeakWidgetPath::ToWidgetPath
                            (this_00,__return_storage_ptr__,param_2,param_3,EVisibility::Visible);
          if (RVar2 != Truncated) {
            return __return_storage_ptr__;
          }
          ReleaseCapture(this,param_1);
          return __return_storage_ptr__;
        }
        uVar1 = puVar3[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  return __return_storage_ptr__;
}

// GetCaptorPaths @ 14273b000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FWidgetPath,TSizedDefaultAllocator<32>_> * __thiscall
FSlateUser::GetCaptorPaths
          (FSlateUser *this,TArray<FWidgetPath,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined1 *puVar3;
  FWidgetPath *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  Result RVar9;
  int iVar10;
  uint *puVar11;
  TArray<FWidgetPath,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  FWeakWidgetPath *this_00;
  ForElementType<FArrangedWidget> FVar14;
  undefined1 *puVar15;
  ForAnyElementType FVar16;
  undefined1 auStack_208 [32];
  undefined1 local_1b8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_1b0;
  FWidgetPath local_1a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
              *)&this->PointerCaptorPathsByIndex,&local_1b0);
  iVar6 = local_1b0.ArrayNum;
  uVar13 = (ulonglong)local_1b0.ArrayNum;
  pFVar1 = local_1b0.AllocatorInstance.Data + uVar13 * 4;
  FVar16.Data = local_1b0.AllocatorInstance.Data;
  do {
    if ((int)uVar13 != iVar6) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (FVar16.Data == pFVar1) {
      if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    uVar2 = *(uint *)FVar16.Data;
    FWidgetPath::FWidgetPath(&local_1a0);
    if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
        *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
      puVar3 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
      puVar15 = &(this->PointerCaptorPathsByIndex).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar15 = puVar3;
      }
      uVar8 = *(uint *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & uVar2) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar11 = (uint *)((longlong)(int)uVar8 * 0x30 +
                            *(longlong *)&this->PointerCaptorPathsByIndex);
          if (*puVar11 == uVar2) {
            this_00 = (FWeakWidgetPath *)(puVar11 + 2);
            if (puVar11 == (uint *)0x0) {
              this_00 = (FWeakWidgetPath *)0x0;
            }
            if ((this_00 != (FWeakWidgetPath *)0x0) &&
               (RVar9 = FWeakWidgetPath::ToWidgetPath
                                  (this_00,&local_1a0,Truncate,(FPointerEvent *)0x0,
                                   EVisibility::Visible), RVar9 == Truncated)) {
              ReleaseCapture(this,uVar2);
            }
            break;
          }
          uVar8 = puVar11[10];
        } while (uVar8 != 0xffffffff);
      }
    }
    bVar7 = FWidgetPath::IsValid(&local_1a0);
    if (bVar7) {
      pFVar4 = (FWidgetPath *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= &local_1a0) && (&local_1a0 < pFVar4 + __return_storage_ptr__->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FWidgetPath,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x160,8,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      FWidgetPath::FWidgetPath
                ((FWidgetPath *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x160),
                 &local_1a0);
    }
    if (local_1a0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1a0.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar14 = (ForElementType<FArrangedWidget>)&local_1a0.Widgets.Array;
    if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar14 = local_1a0.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar14,local_1a0.Widgets.Array.ArrayNum);
    if (local_1a0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_1a0.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    uVar13 = local_1b0._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 4;
  } while( true );
}

// GetCaptorWidgets @ 14273b290

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateUser::GetCaptorWidgets
          (FSlateUser *this,
          TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  atomic<int> aVar5;
  code *pcVar6;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTVar7;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTVar8;
  bool bVar9;
  atomic<int> aVar10;
  int iVar11;
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *local_res20;
  longlong local_b8;
  TReferenceControllerBase<1> *local_b0;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar20 = *(int *)&(this->PointerCaptorPathsByIndex).field_0x8 -
           *(int *)&(this->PointerCaptorPathsByIndex).field_0x34;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (0 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iStack_a0 = 0;
  puVar3 = &(this->PointerCaptorPathsByIndex).field_0x10;
  iVar11 = *(int *)&(this->PointerCaptorPathsByIndex).field_0x28;
  local_res20 = &this->PointerCaptorPathsByIndex;
  uStack_9c = 1;
  iStack_8c = iStack_a0;
  local_88 = iStack_a0;
  if (iVar11 != 0) {
    puVar22 = *(uint **)&(this->PointerCaptorPathsByIndex).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar3;
    }
    uVar20 = *puVar22;
    iStack_a0 = 0;
    local_88 = 0;
    while (uVar20 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14273b38e;
      uVar20 = puVar22[lVar13 + 1];
    }
    uStack_9c = -uVar20 & uVar20;
    uVar4 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar11 < iStack_8c) {
      iStack_8c = iVar11;
    }
  }
LAB_14273b38e:
  iStack_80 = *(int *)&(this->PointerCaptorPathsByIndex).field_0x8 -
              *(int *)&(this->PointerCaptorPathsByIndex).field_0x34;
  uVar20 = *(uint *)&(this->PointerCaptorPathsByIndex).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar19 = uVar20 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar20 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar3;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar20 < 0) || (iVar11 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar12;
  }
  pTVar7 = local_res20;
  uVar16 = *(uint *)&(this->PointerCaptorPathsByIndex).field_0x28;
  if (uVar20 != uVar16) {
    puVar21 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar3;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar15 * 4);
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar20 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14273b491;
      uVar20 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    uVar20 = local_res18 + -1 + uVar19;
    if ((int)uVar16 < (int)uVar20) {
      uVar20 = uVar16;
    }
  }
LAB_14273b491:
  do {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar20) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar8 == pTVar7))
    {
      return __return_storage_ptr__;
    }
    lVar13 = (longlong)TStack_70.CurrentBitIndex * 0x30 + *(longlong *)pTVar8;
    if ((*(int *)(lVar13 + 0x10) < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                           ,0x11a,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar12;
    }
    uVar16 = *(int *)(lVar13 + 0x10) - 1;
    uVar19 = 0;
    if ((int)uVar16 < *(int *)(lVar13 + 0x10)) {
      uVar19 = ~uVar16 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar12;
    }
    pTVar18 = *(TReferenceControllerBase<1> **)
               (*(longlong *)(lVar13 + 8) + 8 + (longlong)(int)uVar16 * 0x10);
    lVar13 = *(longlong *)(*(longlong *)(lVar13 + 8) + (longlong)(int)uVar16 * 0x10);
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
      UNLOCK();
      aVar5 = pTVar18->SharedReferenceCount;
      do {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        if (aVar5 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = pTVar18->SharedReferenceCount;
        bVar9 = aVar5 == aVar10;
        if (bVar9) {
          pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar10 = aVar5;
        }
        UNLOCK();
        pTVar17 = pTVar18;
        aVar5 = aVar10;
      } while (!bVar9);
      LOCK();
      paVar2 = &pTVar18->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar18->_padding_ + 8))(pTVar18,1);
      }
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        lVar13 = 0;
      }
      pTVar18 = pTVar17;
      if (lVar13 != 0) {
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8 = lVar13;
        local_b0 = pTVar17;
        if ((lVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar14 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar11 + 1;
        pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
        *(longlong *)pFVar14 = local_b8;
        *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_b0;
        if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetCursorCaptor @ 14273d180

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FSlateUser::GetCursorCaptor(FSlateUser *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  GetPointerCaptor(this,__return_storage_ptr__,FSlateApplicationBase::CursorPointerIndex);
  return __return_storage_ptr__;
}

// GetCursorCaptorPath @ 14273d1b0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FSlateUser::GetCursorCaptorPath
          (FSlateUser *this,FWidgetPath *__return_storage_ptr__,Type param_1,FPointerEvent *param_2)

{
  GetCaptorPath(this,__return_storage_ptr__,FSlateApplicationBase::CursorPointerIndex,param_1,
                param_2);
  return __return_storage_ptr__;
}

// GetCursorPosition @ 14273d1e0

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall FSlateUser::GetCursorPosition(FSlateUser *this)

{
  FDeprecateSlateVector2D FVar1;
  uint in_EDX;
  undefined4 in_register_00000014;
  
  FVar1._4_4_ = in_register_00000014;
  FVar1._0_4_ = in_EDX;
  GetPointerPosition(this,in_EDX);
  return FVar1;
}

// GetFocusedWidget @ 14273e580

/* WARNING: Removing unreachable block (ram,0x00014273e67b) */
/* WARNING: Removing unreachable block (ram,0x00014273e685) */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FSlateUser::GetFocusedWidget(FSlateUser *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  SWidget *pSVar14;
  
  if ((this->WeakFocusPath).Widgets.ArrayNum < 1) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  iVar3 = (this->WeakFocusPath).Widgets.ArrayNum;
  uVar12 = iVar3 - 1;
  uVar9 = 0;
  if ((int)uVar12 < iVar3) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar7)();
    return pTVar11;
  }
  pFVar4 = (this->WeakFocusPath).Widgets.AllocatorInstance.Data;
  pTVar5 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar12 * 0x10 + 8);
  pSVar6 = *(SWidget **)(pFVar4 + (longlong)(int)uVar12 * 0x10);
  pTVar13 = pTVar5;
  pSVar14 = (SWidget *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar10 = pTVar5->SharedReferenceCount;
      bVar8 = aVar2 == aVar10;
      if (bVar8) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar10;
    } while (!bVar8);
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      pSVar14 = pSVar6;
    }
  }
  __return_storage_ptr__->Object = pSVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetLastWidgetsUnderCursor @ 14273f4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FSlateUser::GetLastWidgetsUnderCursor(FSlateUser *this,FWeakWidgetPath *__return_storage_ptr__)

{
  uint uVar1;
  FWidgetPath *pFVar2;
  ForElementType<FArrangedWidget> FVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 auStack_198 [32];
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
      *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 - 1U
                               & FSlateApplicationBase::CursorPointerIndex) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar1 * 0x30 +
                         *(longlong *)&this->WidgetsUnderPointerLastEventByIndex);
        if (*puVar5 == FSlateApplicationBase::CursorPointerIndex) {
          if (puVar5 != (uint *)0x0) {
            FWeakWidgetPath::FWeakWidgetPath(__return_storage_ptr__,(FWeakWidgetPath *)(puVar5 + 2))
            ;
            return __return_storage_ptr__;
          }
          break;
        }
        uVar1 = puVar5[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar2 = FWidgetPath::FWidgetPath(&local_178);
  FWeakWidgetPath::FWeakWidgetPath(__return_storage_ptr__,pFVar2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar3 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar3,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// GetLastWidgetsUnderPointer @ 14273f600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FSlateUser::GetLastWidgetsUnderPointer
          (FSlateUser *this,FWeakWidgetPath *__return_storage_ptr__,uint param_1)

{
  uint uVar1;
  FWidgetPath *pFVar2;
  ForElementType<FArrangedWidget> FVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 auStack_198 [32];
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
      *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 - 1U
                               & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar1 * 0x30 +
                         *(longlong *)&this->WidgetsUnderPointerLastEventByIndex);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            FWeakWidgetPath::FWeakWidgetPath(__return_storage_ptr__,(FWeakWidgetPath *)(puVar5 + 2))
            ;
            return __return_storage_ptr__;
          }
          break;
        }
        uVar1 = puVar5[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar2 = FWidgetPath::FWidgetPath(&local_178);
  FWeakWidgetPath::FWeakWidgetPath(__return_storage_ptr__,pFVar2);
  if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar3 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar3,local_178.Widgets.Array.ArrayNum);
  if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// GetOrCreateTooltipWindow @ 142741ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
FSlateUser::GetOrCreateTooltipWindow(FSlateUser *this,TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  atomic<int> aVar6;
  TSharedRef<SWindow,1> *pTVar7;
  FSlateApplication *pFVar8;
  SWindow *pSVar9;
  SWindow *pSVar10;
  SWindow *pSVar11;
  bool bVar12;
  TSharedRef<SWindow,1> local_38;
  SWindow *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((((this->TooltipWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar3 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    SWindow::MakeToolTipWindow(&local_38);
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    (this->TooltipWindowPtr).Object = local_38.Object;
    if (local_38.SharedReferenceCount.ReferenceController !=
        (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController) {
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController = FVar5.ReferenceController;
    }
    pFVar8 = FSlateApplication::Get();
    local_28 = local_38.Object;
    pTStack_20 = local_38.SharedReferenceCount.ReferenceController;
    pcVar4 = *(code **)(*(longlong *)pFVar8 + 0x10);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar4)(pFVar8,local_18,&local_28,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    __return_storage_ptr__->Object = local_38.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_14274207e;
  }
  pSVar10 = (SWindow *)(this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar11 = (SWindow *)0x0;
  pSVar9 = pSVar10;
  if (pSVar10 == (SWindow *)0x0) {
LAB_142741f51:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    pSVar10 = pSVar9;
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar10->_padding_;
    do {
      pSVar9 = pSVar11;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142741f51;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar10->_padding_;
      bVar12 = aVar2 == aVar6;
      if (bVar12) {
        *(atomic<int> *)&pSVar10->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar12);
    pSVar11 = (this->TooltipWindowPtr).Object;
    pSVar9 = pSVar10;
    if (pSVar11 == (SWindow *)0x0) goto LAB_142741f51;
  }
  __return_storage_ptr__->Object = pSVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar10;
  if ((pSVar11 == (SWindow *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedRef<SWindow,1> *)(*pcVar4)();
    return pTVar7;
  }
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14274207e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPointerCaptor @ 142742fa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
FSlateUser::GetPointerCaptor
          (FSlateUser *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  atomic<int> aVar5;
  uint *puVar6;
  TWeakPtr<SWidget,1> *pTVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  undefined1 *puVar10;
  SWidget *pSVar11;
  bool bVar12;
  TWeakPtr<SWidget,1> local_28;
  
  pSVar11 = (SWidget *)0x0;
  if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
      *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
    puVar10 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PointerCaptorPathsByIndex).field_0x38;
    }
    uVar4 = *(uint *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & param_1) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x30 +
                         *(longlong *)&this->PointerCaptorPathsByIndex);
        if (*puVar6 == param_1) {
          pSVar8 = (SWidget *)(puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pSVar8 = pSVar11;
          }
          if (pSVar8 != (SWidget *)0x0) {
            pTVar7 = FWeakWidgetPath::GetLastWidget((FWeakWidgetPath *)pSVar8,&local_28);
            pSVar8 = (SWidget *)(pTVar7->WeakReferenceCount).ReferenceController;
            pSVar9 = pSVar8;
            if (pSVar8 == (SWidget *)0x0) goto LAB_1427430c0;
            aVar2 = *(atomic<int> *)&pSVar8->_padding_;
            goto joined_r0x00014274307b;
          }
          break;
        }
        uVar4 = puVar6[10];
      } while (uVar4 != 0xffffffff);
    }
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
  while( true ) {
    LOCK();
    aVar5 = *(atomic<int> *)&pSVar8->_padding_;
    bVar12 = aVar2 == aVar5;
    if (bVar12) {
      *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar2 + 1);
      aVar5 = aVar2;
    }
    UNLOCK();
    pSVar9 = pSVar8;
    aVar2 = aVar5;
    if (bVar12) break;
joined_r0x00014274307b:
    pSVar9 = pSVar11;
    if (aVar2 == (atomic<int>)0x0) break;
  }
  pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
  LOCK();
  paVar1 = &pTVar3->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
  }
  (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pSVar9 != (SWidget *)0x0) {
    pSVar11 = pTVar7->Object;
    pTVar7->Object = (SWidget *)0x0;
  }
LAB_1427430c0:
  __return_storage_ptr__->Object = pSVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// GetPointerPosition @ 142743110

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall FSlateUser::GetPointerPosition(FSlateUser *this,uint param_1)

{
  longlong lVar1;
  ICursor *pIVar2;
  TVector2<float>_u_0 TVar3;
  int iVar4;
  double *pdVar5;
  TVector2<float>_u_0 *pTVar6;
  undefined4 in_register_00000014;
  FDeprecateSlateVector2D FVar7;
  undefined1 *puVar8;
  uint in_R8D;
  undefined1 local_18 [16];
  
  FVar7._4_4_ = in_register_00000014;
  FVar7._0_4_ = param_1;
  pIVar2 = (this->Cursor).Object;
  if ((pIVar2 != (ICursor *)0x0) && (in_R8D == FSlateApplicationBase::CursorPointerIndex)) {
    pdVar5 = (double *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,local_18);
    TVar3._s_0.Y = (float)pdVar5[1];
    TVar3._s_0.X = (float)*pdVar5;
    *(TVector2<float>_u_0 *)FVar7 = TVar3;
    return FVar7;
  }
  if (*(int *)&(this->PointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PointerPositionsByIndex).field_0x34) {
    puVar8 = *(undefined1 **)&(this->PointerPositionsByIndex).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->PointerPositionsByIndex).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->PointerPositionsByIndex).field_0x48 - 1U & in_R8D) *
                              4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->PointerPositionsByIndex + (longlong)iVar4 * 0x14;
        if (*(uint *)(*(longlong *)&this->PointerPositionsByIndex + (longlong)iVar4 * 0x14) ==
            in_R8D) {
          pTVar6 = (TVector2<float>_u_0 *)(lVar1 + 4);
          if (lVar1 == 0) {
            pTVar6 = (TVector2<float>_u_0 *)0x0;
          }
          if (pTVar6 != (TVector2<float>_u_0 *)0x0) {
            *(TVector2<float>_u_0 *)FVar7 = *pTVar6;
            return FVar7;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  *(TVector2<float>_u_0 *)FVar7 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return FVar7;
}

// GetPreviousCursorPosition @ 1427432e0

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall FSlateUser::GetPreviousCursorPosition(FSlateUser *this)

{
  longlong lVar1;
  int iVar2;
  FDeprecateSlateVector2D FVar3;
  FDeprecateSlateVector2D in_RDX;
  undefined1 *puVar4;
  undefined1 local_res8 [32];
  
  if (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PreviousPointerPositionsByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->PreviousPointerPositionsByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PreviousPointerPositionsByIndex).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x48 - 1U &
                              FSlateApplicationBase::CursorPointerIndex) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->PreviousPointerPositionsByIndex + (longlong)iVar2 * 0x14;
        if (*(uint *)(*(longlong *)&this->PreviousPointerPositionsByIndex + (longlong)iVar2 * 0x14)
            == FSlateApplicationBase::CursorPointerIndex) {
          FVar3 = (FDeprecateSlateVector2D)(lVar1 + 4);
          if (lVar1 == 0) {
            FVar3 = (FDeprecateSlateVector2D)0x0;
          }
          if (FVar3 != (FDeprecateSlateVector2D)0x0) goto LAB_14274337f;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  FVar3 = GetPointerPosition(this,(uint)local_res8);
LAB_14274337f:
  *(undefined8 *)in_RDX = *(undefined8 *)FVar3;
  return in_RDX;
}

// GetPreviousPointerPosition @ 1427433a0

/* WARNING: Enum "Type": Some values do not have unique names */

FDeprecateSlateVector2D __thiscall
FSlateUser::GetPreviousPointerPosition(FSlateUser *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  FDeprecateSlateVector2D FVar3;
  undefined4 in_register_00000014;
  FDeprecateSlateVector2D FVar4;
  uint in_R8D;
  undefined1 *puVar5;
  undefined1 local_res8 [32];
  
  FVar4._4_4_ = in_register_00000014;
  FVar4._0_4_ = param_1;
  if (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PreviousPointerPositionsByIndex).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PreviousPointerPositionsByIndex).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PreviousPointerPositionsByIndex).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x48 - 1U &
                              in_R8D) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->PreviousPointerPositionsByIndex + (longlong)iVar2 * 0x14;
        if (*(uint *)(*(longlong *)&this->PreviousPointerPositionsByIndex + (longlong)iVar2 * 0x14)
            == in_R8D) {
          FVar3 = (FDeprecateSlateVector2D)(lVar1 + 4);
          if (lVar1 == 0) {
            FVar3 = (FDeprecateSlateVector2D)0x0;
          }
          if (FVar3 != (FDeprecateSlateVector2D)0x0) goto LAB_14274342c;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  FVar3 = GetPointerPosition(this,(uint)local_res8);
LAB_14274342c:
  *(undefined8 *)FVar4 = *(undefined8 *)FVar3;
  return FVar4;
}

// GetTooltipPosition @ 142744e10

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<float> __thiscall FSlateUser::GetTooltipPosition(FSlateUser *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TVector2<float> TVar5;
  FDeprecateSlateVector2D FVar6;
  TVector2<float>_u_0 in_RDX;
  SWindow *pSVar7;
  SWindow *pSVar8;
  SWindow *this_00;
  bool bVar9;
  
  if ((((this->TooltipWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar1 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    *(TVector2<float>_u_0 *)in_RDX =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    return (TVector2<float>)in_RDX;
  }
  pSVar8 = (SWindow *)(this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  this_00 = (SWindow *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 != (SWindow *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142744e75;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    this_00 = (this->TooltipWindowPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 != (SWindow *)0x0) goto LAB_142744e9b;
  }
LAB_142744e75:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar8 = pSVar7;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
    return (TVector2<float>)TVar5.field0_0x0;
  }
LAB_142744e9b:
  FVar6 = SWindow::GetPositionInScreen(this_00);
  *(TVector2<float>_u_0 *)in_RDX = *(TVector2<float>_u_0 *)FVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return (TVector2<float>)in_RDX;
}

// GetWeakCapturePath @ 142745f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FSlateUser::GetWeakCapturePath
          (FSlateUser *this,FWeakWidgetPath *__return_storage_ptr__,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<SWidget,1> *pTVar3;
  uint uVar4;
  uint *puVar5;
  FWidgetPath *pFVar6;
  FWeakWidgetPath *pFVar7;
  ForElementType<FArrangedWidget> FVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 auStackY_218 [32];
  FWeakWidgetPath local_1d8;
  undefined4 local_1b8;
  FWeakWidgetPath local_1b0;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_218;
  puVar11 = (uint *)0x0;
  local_1b8 = 0;
  puVar5 = puVar11;
  if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
      *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PointerCaptorPathsByIndex).field_0x38;
    }
    uVar4 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x30 +
                         *(longlong *)&this->PointerCaptorPathsByIndex);
        if (*puVar5 == param_1) break;
        uVar4 = puVar5[10];
        puVar5 = puVar11;
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar10 = puVar5 + 2;
  if (puVar5 == (uint *)0x0) {
    puVar10 = puVar11;
  }
  if (puVar10 == (uint *)0x0) {
    pFVar6 = FWidgetPath::FWidgetPath(&local_190);
    pFVar7 = FWeakWidgetPath::FWeakWidgetPath(&local_1b0,pFVar6);
    FWeakWidgetPath::FWeakWidgetPath(__return_storage_ptr__,pFVar7);
    if (local_1b0.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1b0.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1b0.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1b0.Window.WeakReferenceCount.ReferenceController,1);
      }
    }
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)local_1b0.Widgets.AllocatorInstance.Data,
               local_1b0.Widgets.ArrayNum);
    if ((TWeakPtr<SWidget,1> *)local_1b0.Widgets.AllocatorInstance.Data !=
        (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_1b0.Widgets.AllocatorInstance.Data);
    }
    if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar8 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar8 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_190.Widgets.Array.ArrayNum);
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  else {
    uVar4 = puVar10[2];
    pTVar3 = *(TWeakPtr<SWidget,1> **)puVar10;
    local_1d8.Widgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Widgets.ArrayNum = uVar4;
    if (uVar4 == 0) {
      local_1d8.Widgets.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar4,0,(ForAnyElementType *)&local_1d8,uVar4,&local_1d8.Widgets.ArrayMax);
      ConstructItems<TWeakPtr<SWidget,1>,TWeakPtr<SWidget,1>,int>
                (local_1d8.Widgets.AllocatorInstance.Data,pTVar3,uVar4);
    }
    local_1d8.Window.Object = *(SWindow **)(puVar10 + 4);
    local_1d8.Window.WeakReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(puVar10 + 6);
    if (local_1d8.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1d8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1d8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FWeakWidgetPath::FWeakWidgetPath(__return_storage_ptr__,&local_1d8);
    if (local_1d8.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_1d8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_1d8.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_1d8.Window.WeakReferenceCount.ReferenceController,1);
      }
    }
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)local_1d8.Widgets.AllocatorInstance.Data,
               local_1d8.Widgets.ArrayNum);
    if ((TWeakPtr<SWidget,1> *)local_1d8.Widgets.AllocatorInstance.Data !=
        (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_1d8.Widgets.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetWeakCursorCapturePath @ 1427461a0

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FSlateUser::GetWeakCursorCapturePath(FSlateUser *this,FWeakWidgetPath *__return_storage_ptr__)

{
  GetWeakCapturePath(this,__return_storage_ptr__,FSlateApplicationBase::CursorPointerIndex);
  return __return_storage_ptr__;
}

// HasAnyCapture @ 142746c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::HasAnyCapture(FSlateUser *this)

{
  return 0 < *(int *)&(this->PointerCaptorPathsByIndex).field_0x8 -
             *(int *)&(this->PointerCaptorPathsByIndex).field_0x34;
}

// HasCapture @ 142746e80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::HasCapture(FSlateUser *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
      *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PointerCaptorPathsByIndex).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x30 +
                         *(longlong *)&this->PointerCaptorPathsByIndex);
        if (*puVar2 == param_1) {
          puVar3 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return false;
          }
          if ((int)puVar3[2] < 1) {
            return false;
          }
          return true;
        }
        uVar1 = puVar2[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  return false;
}

// HasCursorCapture @ 1427470f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::HasCursorCapture(FSlateUser *this)

{
  bool bVar1;
  
  bVar1 = HasCapture(this,FSlateApplicationBase::CursorPointerIndex);
  return bVar1;
}

// HasFocus @ 142747110

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EFocusCause> __thiscall
FSlateUser::HasFocus(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  TSharedPtr<SWidget,1> *pTVar1;
  longlong *in_R8;
  char cVar2;
  bool bVar3;
  EFocusCause local_res10;
  TSharedPtr<SWidget,1> local_18;
  
  bVar3 = false;
  if (*in_R8 != 0) {
    pTVar1 = GetFocusedWidget(this,&local_18);
    bVar3 = true;
    if (pTVar1->Object == (SWidget *)*in_R8) {
      local_res10 = this->FocusCause;
      cVar2 = '\x01';
      goto LAB_142747161;
    }
  }
  local_res10 = Mouse;
  cVar2 = '\0';
LAB_142747161:
  *(char *)((longlong)&param_1->Object + 1) = cVar2;
  if (cVar2 != '\0') {
    *(EFocusCause *)&param_1->Object = local_res10;
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_R8[1]);
  return SUB82(param_1,0);
}

// HasFocusedDescendants @ 1427471a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::HasFocusedDescendants(FSlateUser *this,TSharedRef<SWidget_const_,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  atomic<int> aVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  uint uStackX_c;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if ((this->WeakFocusPath).Widgets.ArrayNum < 1) {
    pTVar13 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    iVar3 = (this->WeakFocusPath).Widgets.ArrayNum;
    uVar11 = iVar3 - 1;
    uVar9 = 0;
    if ((int)uVar11 < iVar3) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = (this->WeakFocusPath).Widgets.AllocatorInstance.Data;
    pTVar13 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)(int)uVar11 * 0x10 + 8);
    pSVar5 = *(SWidget **)(pFVar4 + (longlong)(int)uVar11 * 0x10);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
      aVar2 = pTVar13->SharedReferenceCount;
      do {
        pTVar12 = pTVar14;
        if (aVar2 == (atomic<int>)0x0) break;
        LOCK();
        aVar10 = pTVar13->SharedReferenceCount;
        bVar7 = aVar2 == aVar10;
        if (bVar7) {
          pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar10 = aVar2;
        }
        UNLOCK();
        pTVar12 = pTVar13;
        aVar2 = aVar10;
      } while (!bVar7);
      LOCK();
      paVar1 = &pTVar13->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
      }
      pTVar13 = pTVar12;
      if (((pTVar12 != (TReferenceControllerBase<1> *)0x0) && (pSVar5 != (SWidget *)0x0)) &&
         (pSVar5 == param_1->Object)) {
        pTVar12 = pTVar14;
        pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000003;
        goto LAB_1427472c4;
      }
    }
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000003;
    bVar7 = FWeakWidgetPath::ContainsWidget(&this->WeakFocusPath,param_1->Object);
    if (bVar7) {
      bVar7 = true;
      goto LAB_1427472c7;
    }
  }
LAB_1427472c4:
  bVar7 = false;
LAB_1427472c7:
  if (((ulonglong)pTVar14 & 2) != 0) {
    pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar14 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if ((((ulonglong)pTVar14 & 1) != 0) && (pTVar12 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &pTVar12->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar7;
}

// IsCursorVisible @ 14274cef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::IsCursorVisible(FSlateUser *this)

{
  ICursor *pIVar1;
  int iVar2;
  
  if ((this->bCanDrawCursor != false) && (pIVar1 = (this->Cursor).Object, pIVar1 != (ICursor *)0x0))
  {
    iVar2 = (**(code **)((longlong)*pIVar1 + 0x38))();
    if (iVar2 != 0) {
      return true;
    }
  }
  return false;
}

// IsDetectingDrag @ 14274cf30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::IsDetectingDrag(FSlateUser *this,uint param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->DragStatesByPointerIndex).field_0x8 !=
      *(int *)&(this->DragStatesByPointerIndex).field_0x34) {
    puVar2 = *(undefined1 **)&(this->DragStatesByPointerIndex).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->DragStatesByPointerIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->DragStatesByPointerIndex).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)((longlong)iVar1 * 0x58 + *(longlong *)&this->DragStatesByPointerIndex) ==
            param_1) goto LAB_14274cf8f;
        iVar1 = *(int *)((longlong)iVar1 * 0x58 + 0x50 +
                        *(longlong *)&this->DragStatesByPointerIndex);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14274cf8f:
  return iVar1 != -1;
}

// IsDragDropping @ 14274cfa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::IsDragDropping(FSlateUser *this)

{
  return (this->DragDropContent).Object != (FDragDropOperation *)0x0;
}

// IsDragDroppingAffected @ 14274cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::IsDragDroppingAffected(FSlateUser *this,FPointerEvent *param_1)

{
  FDragDropOperation *pFVar1;
  char cVar2;
  
  pFVar1 = (this->DragDropContent).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 8))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// IsTouchPointerActive @ 14274e860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::IsTouchPointerActive(FSlateUser *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((param_1 < 10) &&
     (*(int *)&(this->PointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PointerPositionsByIndex).field_0x34)) {
    puVar2 = *(undefined1 **)&(this->PointerPositionsByIndex).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->PointerPositionsByIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->PointerPositionsByIndex).field_0x48 - 1U & param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->PointerPositionsByIndex + (longlong)iVar1 * 0x14) ==
            param_1) {
          return true;
        }
        iVar1 = *(int *)(*(longlong *)&this->PointerPositionsByIndex + 0xc + (longlong)iVar1 * 0x14)
        ;
      } while (iVar1 != -1);
    }
  }
  return false;
}

// IsWidgetDirectlyUnderAnyPointer @ 14274ea80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetDirectlyUnderAnyPointer(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  atomic<int> aVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  atomic<int> aVar15;
  longlong lVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  SWidget *pSVar25;
  uint local_res8;
  undefined4 uStackX_c;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  bVar9 = false;
  bVar12 = false;
  puVar3 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x10;
  local_res8 = 0;
  iVar6 = *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
  iVar21 = 0;
  iVar23 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar6 != 0) {
    puVar24 = *(uint **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar3;
    }
    uVar19 = *puVar24;
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar21;
      iVar23 = iVar23 + 0x20;
      iVar21 = iVar21 + 1;
      iVar14 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14274eb3f;
      uVar19 = puVar24[lVar16 + 1];
    }
    uVar13 = -uVar19 & uVar19;
    uVar4 = (ulonglong)uVar13 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar14 = (int)lVar16 + -1 + iVar23;
    if (iVar6 < iVar14) {
      iVar14 = iVar6;
    }
  }
LAB_14274eb3f:
  uVar19 = *(uint *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
  TStack_68._padding_ = CONCAT44(uVar13,iVar21);
  uVar13 = uVar19 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar14;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar19 >> 5;
  TStack_68._28_4_ = iVar14;
  TStack_68.BaseBitIndex = iVar23;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 -
                       *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar6 < (int)uVar19)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  uVar17 = *(uint *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
  if (uVar19 != uVar17) {
    puVar22 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar3;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar21 * 4);
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar21;
      uVar13 = uVar13 + 0x20;
      iVar21 = iVar21 + 1;
      uVar19 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14274ec40;
      uVar19 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar19 = (int)lVar16 + -1 + uVar13;
    if ((int)uVar17 < (int)uVar19) {
      uVar19 = uVar17;
    }
  }
LAB_14274ec40:
  pTVar18 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  plVar20 = (longlong *)CONCAT44(uStackX_c,local_res8);
  do {
    if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 -
        *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34 != (int)uStack_48) {
      local_res8 = local_res8 & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar19) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    lVar16 = *(longlong *)&this->WidgetsUnderPointerLastEventByIndex +
             (longlong)TStack_68.CurrentBitIndex * 0x30;
    if (*(int *)(lVar16 + 0x10) < 1) {
LAB_14274ed66:
      bVar10 = false;
    }
    else {
      uVar17 = *(int *)(lVar16 + 0x10) - 1;
      uVar13 = 0;
      if ((int)uVar17 < *(int *)(lVar16 + 0x10)) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      bVar9 = true;
      bVar12 = true;
      pTVar7 = *(TReferenceControllerBase<1> **)
                (*(longlong *)(lVar16 + 8) + 8 + (longlong)(int)uVar17 * 0x10);
      pSVar25 = *(SWidget **)(*(longlong *)(lVar16 + 8) + (longlong)(int)uVar17 * 0x10);
      bVar10 = pTVar7 == (TReferenceControllerBase<1> *)0x0;
      pTVar18 = pTVar7;
      if (!bVar10) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
        aVar5 = pTVar7->SharedReferenceCount;
        do {
          pTVar18 = (TReferenceControllerBase<1> *)0x0;
          if (aVar5 == (atomic<int>)0x0) break;
          LOCK();
          aVar15 = pTVar7->SharedReferenceCount;
          bVar10 = aVar5 == aVar15;
          if (bVar10) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar15 = aVar5;
          }
          UNLOCK();
          pTVar18 = pTVar7;
          aVar5 = aVar15;
        } while (!bVar10);
        LOCK();
        paVar1 = &pTVar7->WeakReferenceCount;
        aVar5 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
        bVar10 = pTVar18 == (TReferenceControllerBase<1> *)0x0;
      }
      plVar20 = (longlong *)0x0;
      if (bVar10) {
        pSVar25 = (SWidget *)0x0;
      }
      if (pSVar25 != param_1->Object) goto LAB_14274ed66;
      bVar10 = true;
    }
    if (bVar12) {
      bVar12 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if ((bVar9) && (bVar9 = false, plVar20 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)plVar20 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// IsWidgetDirectlyUnderCursor @ 14274ee00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetDirectlyUnderCursor(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  uint uVar1;
  bool bVar2;
  TSharedPtr<SWidget_const_,1> local_18;
  
  uVar1 = FSlateApplicationBase::CursorPointerIndex;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = IsWidgetDirectlyUnderPointer(this,&local_18,uVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar2;
}

// IsWidgetDirectlyUnderPointer @ 14274ee60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetDirectlyUnderPointer
          (FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  SWidget *pSVar9;
  SWidget *pSVar10;
  uint uVar11;
  SWidget *pSVar12;
  SWidget *pSVar13;
  SWidget *local_res8;
  
  pSVar12 = (SWidget *)0x0;
  pSVar10 = local_res8;
  if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
      *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
    puVar8 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x38;
    }
    uVar5 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 - 1U
                               & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar5 * 0x30 +
                         *(longlong *)&this->WidgetsUnderPointerLastEventByIndex);
        if (*puVar7 == param_2) {
          pSVar9 = (SWidget *)(puVar7 + 2);
          if (puVar7 == (uint *)0x0) {
            pSVar9 = pSVar12;
          }
          if ((pSVar9 != (SWidget *)0x0) && (iVar1 = (int)pSVar9->_padding_, 0 < iVar1)) {
            uVar11 = iVar1 - 1;
            uVar5 = 0;
            if ((int)uVar11 < iVar1) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pSVar13 = *(SWidget **)(pSVar9->_padding_ + 8 + (longlong)(int)uVar11 * 0x10);
            pSVar9 = *(SWidget **)(pSVar9->_padding_ + (longlong)(int)uVar11 * 0x10);
            pSVar10 = pSVar13;
            if (pSVar13 == (SWidget *)0x0) goto LAB_14274f01f;
            LOCK();
            puVar8 = (undefined1 *)((longlong)&pSVar13->_padding_ + 4);
            *(int *)puVar8 = *(int *)puVar8 + 1;
            UNLOCK();
            iVar1 = (int)pSVar13->_padding_;
            goto joined_r0x00014274efee;
          }
          break;
        }
        uVar5 = puVar7[10];
      } while (uVar5 != 0xffffffff);
    }
  }
  goto LAB_14274ef04;
  while( true ) {
    LOCK();
    iVar6 = (int)pSVar13->_padding_;
    bVar3 = iVar1 == iVar6;
    if (bVar3) {
      *(int *)&pSVar13->_padding_ = iVar1 + 1;
      iVar6 = iVar1;
    }
    UNLOCK();
    pSVar10 = pSVar13;
    iVar1 = iVar6;
    if (bVar3) break;
joined_r0x00014274efee:
    pSVar10 = pSVar12;
    if (iVar1 == 0) break;
  }
  LOCK();
  puVar8 = (undefined1 *)((longlong)&pSVar13->_padding_ + 4);
  iVar1 = *(int *)puVar8;
  *(int *)puVar8 = *(int *)puVar8 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    (**(code **)(pSVar13->_padding_ + 8))(pSVar13,1);
  }
LAB_14274f01f:
  local_res8 = (SWidget *)0x0;
  pSVar13 = (SWidget *)&DAT_00000003;
  if (pSVar10 == (SWidget *)0x0) {
    pSVar9 = pSVar12;
  }
  pSVar12 = pSVar13;
  if (pSVar9 == param_1->Object) {
    bVar3 = true;
    goto LAB_14274ef07;
  }
LAB_14274ef04:
  bVar3 = false;
  pSVar13 = pSVar12;
LAB_14274ef07:
  if (((ulonglong)pSVar13 & 2) != 0) {
    pSVar13 = (SWidget *)(ulonglong)((uint)pSVar13 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar10);
  }
  if ((((ulonglong)pSVar13 & 1) != 0) && (local_res8 != (SWidget *)0x0)) {
    LOCK();
    puVar8 = (undefined1 *)((longlong)&local_res8->_padding_ + 4);
    iVar1 = *(int *)puVar8;
    *(int *)puVar8 = *(int *)puVar8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)(local_res8->_padding_ + 8))(local_res8,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// IsWidgetInFocusPath @ 14274f050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetInFocusPath(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  bool bVar1;
  
  if ((param_1->Object != (SWidget *)0x0) && (0 < (this->WeakFocusPath).Widgets.ArrayNum)) {
    bVar1 = FWeakWidgetPath::ContainsWidget(&this->WeakFocusPath,param_1->Object);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14274f07e;
    }
  }
  bVar1 = false;
LAB_14274f07e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// IsWidgetUnderAnyPointer @ 14274f0a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetUnderAnyPointer(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1->Object != (SWidget *)0x0) {
    iVar12 = 0;
    puVar1 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x10;
    iVar3 = *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
    uVar7 = 1;
    iVar14 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14274f15d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = iVar14 + -1 + local_res18;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14274f15d:
    uVar11 = *(uint *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar12);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 -
                         *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar7 = *(uint *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14274f270;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14274f270:
    while( true ) {
      if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 -
          *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      bVar5 = FWeakWidgetPath::ContainsWidget
                        ((FWeakWidgetPath *)
                         ((longlong)TStack_60.CurrentBitIndex * 0x30 +
                         *(longlong *)&this->WidgetsUnderPointerLastEventByIndex + 8),
                         param_1->Object);
      if (bVar5) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// IsWidgetUnderCursor @ 14274f310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetUnderCursor(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FWeakWidgetPath *pFVar6;
  FWeakWidgetPath *this_00;
  undefined1 *puVar7;
  FWeakWidgetPath *pFVar8;
  
  uVar3 = FSlateApplicationBase::CursorPointerIndex;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8 = (FWeakWidgetPath *)0x0;
  pFVar6 = pFVar8;
  if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
      *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 - 1U
                              & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        pFVar6 = (FWeakWidgetPath *)
                 ((longlong)iVar5 * 0x30 + *(longlong *)&this->WidgetsUnderPointerLastEventByIndex);
        if (*(uint *)&(pFVar6->Widgets).AllocatorInstance.Data == uVar3) break;
        iVar5 = pFVar6[1].Widgets.ArrayNum;
        pFVar6 = pFVar8;
      } while (iVar5 != -1);
    }
  }
  this_00 = (FWeakWidgetPath *)&(pFVar6->Widgets).ArrayNum;
  if (pFVar6 == (FWeakWidgetPath *)0x0) {
    this_00 = pFVar8;
  }
  if (((pSVar2 == (SWidget *)0x0) || (this_00 == (FWeakWidgetPath *)0x0)) ||
     (bVar4 = FWeakWidgetPath::ContainsWidget(this_00,pSVar2), !bVar4)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar4;
}

// IsWidgetUnderPointer @ 14274f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWidgetUnderPointer
          (FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  FWeakWidgetPath *pFVar3;
  FWeakWidgetPath *this_00;
  undefined1 *puVar4;
  FWeakWidgetPath *pFVar5;
  
  pFVar5 = (FWeakWidgetPath *)0x0;
  pFVar3 = pFVar5;
  if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
      *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->WidgetsUnderPointerLastEventByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->WidgetsUnderPointerLastEventByIndex).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x48 - 1U
                              & param_2) * 4);
    if (iVar2 != -1) {
      do {
        pFVar3 = (FWeakWidgetPath *)
                 ((longlong)iVar2 * 0x30 + *(longlong *)&this->WidgetsUnderPointerLastEventByIndex);
        if (*(uint *)&(pFVar3->Widgets).AllocatorInstance.Data == param_2) break;
        iVar2 = pFVar3[1].Widgets.ArrayNum;
        pFVar3 = pFVar5;
      } while (iVar2 != -1);
    }
  }
  this_00 = (FWeakWidgetPath *)&(pFVar3->Widgets).ArrayNum;
  if (pFVar3 == (FWeakWidgetPath *)0x0) {
    this_00 = pFVar5;
  }
  if (((param_1->Object == (SWidget *)0x0) || (this_00 == (FWeakWidgetPath *)0x0)) ||
     (bVar1 = FWeakWidgetPath::ContainsWidget(this_00,param_1->Object), !bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// IsWindowHousingInteractiveTooltip @ 14274f4c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::IsWindowHousingInteractiveTooltip
          (FSlateUser *this,TSharedRef<SWindow_const_,1> *param_1)

{
  IToolTip *pIVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  SWindow *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  pSVar5 = (SWindow *)0x0;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14274f4f2;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    pSVar5 = (this->TooltipWindowPtr).Object;
  }
  if ((pSVar5 == (SWindow *)0x0) || (pSVar5 != param_1->Object)) {
LAB_14274f4f2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    return false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar6 = (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14274f543;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    pIVar1 = (this->ActiveTooltipInfo).Tooltip.Object;
    if ((pIVar1 != (IToolTip *)0x0) &&
       (cVar3 = (**(code **)((longlong)*pIVar1 + 0x28))(), cVar3 != '\0')) {
      bVar7 = true;
      goto LAB_14274f546;
    }
  }
LAB_14274f543:
  bVar7 = false;
LAB_14274f546:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar7;
}

// LockCursor @ 142752110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::LockCursor(FSlateUser *this,TSharedRef<SWidget,1> *param_1)

{
  EVisibility EVar1;
  bool bVar2;
  FSlateApplication *this_00;
  ForElementType<FArrangedWidget> FVar3;
  undefined1 auStack_1a8 [32];
  TSharedRef<SWidget_const_,1> local_188;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((this->Cursor).Object != (ICursor *)0x0) {
    FWidgetPath::FWidgetPath(&local_178);
    this_00 = FSlateApplication::Get();
    EVar1 = EVisibility::Visible;
    local_188.Object = param_1->Object;
    local_188.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = FSlateApplication::GeneratePathToWidgetUnchecked(this_00,&local_188,&local_178,EVar1);
    if ((bVar2) ||
       (local_188.Object = (SWidget *)param_1,
       bVar2 = `FSlateUser::LockCursor'::__l6::<lambda_1>::operator()(&local_188), bVar2)) {
      LockCursorInternal(this,&local_178);
    }
    if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar3 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
    if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar3 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar3,local_178.Widgets.Array.ArrayNum);
    if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    return;
  }
  return;
}

// LockCursorInternal @ 142752220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateUser::LockCursorInternal(FSlateUser *this,FWidgetPath *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGenericWindow *pFVar4;
  FDeprecateSlateVector2D FVar5;
  ICursor *pIVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  TSharedRef<SWindow,1> *pTVar11;
  TSharedPtr<FGenericWindow,1> *pTVar12;
  FArrangedWidget *pFVar13;
  int *piVar14;
  longlong lVar15;
  FSlateApplication *pFVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1b8 [32];
  FSlateRect local_198;
  undefined8 local_188;
  undefined8 local_180;
  ulonglong local_178;
  longlong local_170;
  undefined8 local_168;
  float local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  float local_154;
  TVector2<float>_u_0 local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  TVector2<float>_u_0_s_0 local_134;
  FWeakWidgetPath local_128;
  TSharedPtr<FGenericWindow,1> local_108;
  TSharedRef<SWindow,1> local_f8;
  FDisplayMetrics local_e8;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if ((this->Cursor).Object == (ICursor *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cursor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
                       ,0x3d1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = FWidgetPath::IsValid(param_1);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetPath.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
                       ,0x3d2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar11 = FWidgetPath::GetWindow(param_1,&local_f8);
  pTVar12 = SWindow::GetNativeWindow(pTVar11->Object,&local_108);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar12->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (pFVar4 == (FGenericWindow *)0x0) goto LAB_14275266b;
  cVar9 = (**(code **)(pFVar4->_padding_ + 200))(pFVar4);
  if (cVar9 == '\0') goto LAB_14275266b;
  pFVar13 = FArrangedChildren::Last(&param_1->Widgets);
  uStack_15c = 0;
  uStack_158 = 0;
  local_168 = 0;
  fVar18 = (pFVar13->Geometry).Scale;
  FVar5 = (pFVar13->Geometry).Size;
  local_134 = (pFVar13->Geometry).AbsolutePosition.field0_0x0._s_0;
  local_188._0_4_ = FVar5._0_4_;
  local_148 = (float)local_188;
  local_160 = (float)local_188;
  local_188._4_4_ = FVar5._4_4_;
  local_13c = local_188._4_4_;
  local_154 = local_188._4_4_;
  local_180 = (ulonglong)(uint)local_188._4_4_ << 0x20;
  local_178 = (ulonglong)FVar5 & 0xffffffff;
  local_188 = 0;
  local_150._s_0.X = fVar18 * 0.0 + local_134.X;
  local_150._s_0.Y = fVar18 * 0.0 + local_134.Y;
  local_148 = local_148 * fVar18;
  local_144 = fVar18 * 0.0;
  local_140 = fVar18 * 0.0;
  local_13c = local_13c * fVar18;
  FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_150._s_0,&local_198);
  (this->LastComputedLockBounds).Left = local_198.Left;
  (this->LastComputedLockBounds).Top = local_198.Top;
  (this->LastComputedLockBounds).Right = local_198.Right;
  (this->LastComputedLockBounds).Bottom = local_198.Bottom;
  FWeakWidgetPath::FWeakWidgetPath(&local_128,param_1);
  FWeakWidgetPath::operator=(&this->LockingWidgetPath,&local_128);
  if (local_128.Window.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_128.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_128.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_128.Window.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)local_128.Widgets.AllocatorInstance.Data,
             local_128.Widgets.ArrayNum);
  if ((TWeakPtr<SWidget,1> *)local_128.Widgets.AllocatorInstance.Data != (TWeakPtr<SWidget,1> *)0x0)
  {
    FMemory::Free(local_128.Widgets.AllocatorInstance.Data);
  }
  cVar9 = (**(code **)(pFVar4->_padding_ + 0xe8))(pFVar4);
  fVar18 = __real_3f800000;
  if (cVar9 == '\0') {
LAB_14275249b:
    fVar19 = fVar18;
  }
  else {
    piVar14 = (int *)(**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4);
    if (*piVar14 != 5) goto LAB_14275249b;
    lVar15 = (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4);
    fVar19 = 0.0;
    if (*(char *)(lVar15 + 0x18) != '\0') goto LAB_14275249b;
  }
  pFVar16 = FSlateApplication::Get();
  bVar8 = FSlateApplication::GetTransformFullscreenMouseInput(pFVar16);
  if (bVar8) {
    iVar10 = (**(code **)(pFVar4->_padding_ + 0x68))(pFVar4);
    if (iVar10 == 0) {
      local_e8.MonitorInfo.ArrayNum = 0;
      local_e8.MonitorInfo.ArrayMax = 0;
      local_e8.PrimaryDisplayWorkAreaRect.Left = 0;
      local_e8.PrimaryDisplayWorkAreaRect.Top = 0;
      local_e8.PrimaryDisplayWorkAreaRect.Right = 0;
      local_e8.PrimaryDisplayWorkAreaRect.Bottom = 0;
      local_e8.VirtualDisplayRect.Left = 0;
      local_e8.VirtualDisplayRect.Top = 0;
      local_e8.MonitorInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.VirtualDisplayRect.Right = 0;
      local_e8.VirtualDisplayRect.Bottom = 0;
      local_e8.TitleSafePaddingSize.field0_0x0._s_0.X = 0.0;
      local_e8.TitleSafePaddingSize.field0_0x0._s_0.Y = 0.0;
      local_e8.TitleSafePaddingSize.field0_0x0._s_0.Z = 0.0;
      local_e8.TitleSafePaddingSize.field0_0x0._s_0.W = 0.0;
      local_e8.ActionSafePaddingSize.field0_0x0._s_0.X = 0.0;
      local_e8.ActionSafePaddingSize.field0_0x0._s_0.Y = 0.0;
      local_e8.ActionSafePaddingSize.field0_0x0._s_0.Z = 0.0;
      local_e8.ActionSafePaddingSize.field0_0x0._s_0.W = 0.0;
      pFVar16 = FSlateApplication::Get();
      FSlateApplicationBase::GetCachedDisplayMetrics((FSlateApplicationBase *)pFVar16,&local_e8);
      local_180 = CONCAT44(local_198.Bottom - local_198.Top,local_198.Right - local_198.Left);
      local_170 = local_180;
      fVar17 = fVar18 / ((local_198.Right - local_198.Left) / (float)local_e8.PrimaryDisplayWidth);
      local_198.Left = local_198.Left * fVar17;
      local_198.Right = local_198.Right * fVar17;
      fVar18 = fVar18 / ((local_198.Bottom - local_198.Top) / (float)local_e8.PrimaryDisplayHeight);
      local_198.Top = local_198.Top * fVar18;
      local_198.Bottom = local_198.Bottom * fVar18;
      DestructItems<FMonitorInfo,int>
                ((FMonitorInfo *)local_e8.MonitorInfo.AllocatorInstance.Data,
                 local_e8.MonitorInfo.ArrayNum);
      if ((FMonitorInfo *)local_e8.MonitorInfo.AllocatorInstance.Data != (FMonitorInfo *)0x0) {
        FMemory::Free(local_e8.MonitorInfo.AllocatorInstance.Data);
      }
    }
  }
  local_68 = (int)ROUND(fVar19 + local_198.Left + fVar19 + local_198.Left + __real_3f000000) >> 1;
  local_64 = (int)ROUND(fVar19 + local_198.Top + fVar19 + local_198.Top + __real_3f000000) >> 1;
  local_60 = (int)(local_198.Right - fVar19);
  local_5c = (int)(local_198.Bottom - fVar19);
  if ((this->Cursor).Object == (ICursor *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar6 = (this->Cursor).Object;
  (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,&local_68);
LAB_14275266b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// NotifyPointerMoveBegin @ 1427600a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::NotifyPointerMoveBegin(FSlateUser *this,FPointerEvent *param_1)

{
  longlong lVar1;
  FDeprecateSlateVector2D FVar2;
  int iVar3;
  undefined1 *puVar4;
  TMap<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
  *this_00;
  uint local_res8 [2];
  int local_res10 [2];
  uint *local_res18 [2];
  TVector2<double>_u_0 local_28;
  
  if (param_1->bIsTouchEvent != false) {
    local_28._s_0.X = (double)*(float *)&param_1->ScreenSpacePosition;
    local_28._s_0.Y = (double)*(float *)&(param_1->ScreenSpacePosition).field_0x4;
    FGestureDetector::OnTouchMoved
              (&this->GestureDetector,param_1->PointerIndex,(TVector2<double> *)&local_28._s_0);
  }
  local_res8[0] = param_1->PointerIndex;
  this_00 = &this->PointerPositionsByIndex;
  FVar2 = param_1->ScreenSpacePosition;
  if (*(int *)&(this->PointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PointerPositionsByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->PointerPositionsByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PointerPositionsByIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->PointerPositionsByIndex).field_0x48 - 1U &
                              local_res8[0]) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x14;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x14) == local_res8[0]) {
          if (lVar1 != 0) {
            *(FDeprecateSlateVector2D *)(lVar1 + 4) = FVar2;
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = local_res8;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,
             (TKeyInitializer<unsigned_int_&&> *)(ulonglong)local_res8[0],(bool *)local_res18);
  *(FDeprecateSlateVector2D *)
   (*(longlong *)&this_00->field_0x0 + 4 + (longlong)local_res10[0] * 0x14) = FVar2;
  return;
}

// NotifyPointerMoveComplete @ 1427601a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::NotifyPointerMoveComplete(FSlateUser *this,FPointerEvent *param_1,FWidgetPath *param_2)

{
  atomic<int> *paVar1;
  TWeakPtr<SWindow,1> *this_00;
  atomic<int> aVar2;
  FDragDropOperation *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  TSharedRef<SWindow,1> *pTVar8;
  FWeakWidgetPath *pFVar9;
  uint local_res8 [2];
  uint local_res10 [6];
  FSharedReferencer<1> local_198;
  SWindow *pSStack_190;
  FSharedReferencer<1> local_188;
  SWidget *pSStack_180;
  FSharedReferencer<1> local_178;
  Type local_170;
  FCursorReply local_168;
  uint *local_128;
  FDeprecateSlateVector2D *local_120;
  FWeakWidgetPath local_118;
  TSharedRef<SWindow,1> local_f8;
  FPointerEvent local_e8;
  FDragDropOperation *local_68;
  TReferenceControllerBase<1> *local_60;
  TWeakPtr<SWindow,1> local_58;
  undefined8 local_48 [2];
  
  pFVar3 = (this->DragDropContent).Object;
  if (pFVar3 != (FDragDropOperation *)0x0) {
    cVar6 = (**(code **)(pFVar3->_padding_ + 8))();
    if (cVar6 != '\0') {
      pTVar4 = (this->DragDropContent).SharedReferenceCount.ReferenceController;
      pFVar3 = (this->DragDropContent).Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        FPointerEvent::FPointerEvent(&local_e8,param_1);
      }
      else {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        FPointerEvent::FPointerEvent(&local_e8,param_1);
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8._padding_ = (longlong)&___7FDragDropEvent__6B_;
      local_68 = pFVar3;
      local_60 = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if ((this->DragDropContent).Object == (FDragDropOperation *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)(((this->DragDropContent).Object)->_padding_ + 0x18))();
      this_00 = &this->DragDropWindowPtr;
      bVar7 = FWidgetPath::IsValid(param_2);
      if (bVar7) {
        pTVar8 = FWidgetPath::GetWindow(param_2,&local_f8);
        TWeakPtr<SWindow,1>::operator=<SWindow>(this_00,pTVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
      }
      else if (this_00 != &local_58) {
        pTVar4 = (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController;
        this_00->Object = (SWindow *)0x0;
        (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))();
          }
        }
      }
      if ((this->Cursor).Object == (ICursor *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<378628854933095485>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
                           ,0x43d,"Cursor");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        if ((this->DragDropContent).Object == (FDragDropOperation *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar3 = (this->DragDropContent).Object;
        (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,&local_168);
        if ((char)local_168._padding_ == '\0') {
          local_178.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_170 = Default;
          local_168._padding_._0_1_ = '\x01';
          local_198.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pSStack_190 = (SWindow *)0x0;
          local_168._padding_ = 0;
          local_188.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pSStack_180 = (SWidget *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&local_168._padding_,&local_198);
          local_168.CursorWindow.Object = pSStack_190;
          pSStack_190 = (SWindow *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_168.CursorWindow.SharedReferenceCount,&local_188);
          local_168.CursorWidget.Object = pSStack_180;
          pSStack_180 = (SWidget *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_168.CursorWidget.SharedReferenceCount,&local_178);
          local_168.MouseCursor = local_170;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_178.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_198.ReferenceController);
        }
        ProcessCursorReply(this,&local_168);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.CursorWidget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.CursorWindow.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168._padding_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      FPointerEvent::~FPointerEvent(&local_e8);
      goto LAB_1427604b4;
    }
  }
  if (((this->DragDropContent).Object == (FDragDropOperation *)0x0) &&
     (&this->DragDropWindowPtr != (TWeakPtr<SWindow,1> *)local_48)) {
    pTVar4 = (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController;
    (this->DragDropWindowPtr).Object = (SWindow *)0x0;
    (this->DragDropWindowPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
LAB_1427604b4:
  local_res8[0] = param_1->PointerIndex;
  local_128 = local_res8;
  local_120 = &param_1->ScreenSpacePosition;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,UE::Math::TVector2<float>_const_&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)&this->PreviousPointerPositionsByIndex,
             (TPairInitializer<unsigned_int_&&,UE::Math::TVector2<float>_const_&> *)
             (local_res10 + 4),(bool *)&local_128);
  pFVar9 = FWeakWidgetPath::FWeakWidgetPath(&local_118,param_2);
  local_res10[0] = param_1->PointerIndex;
  TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  ::Emplace<unsigned_int,FWeakWidgetPath>
            ((TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
              *)&this->WidgetsUnderPointerLastEventByIndex,local_res10,pFVar9);
  if (local_118.Window.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_118.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_118.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_118.Window.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)local_118.Widgets.AllocatorInstance.Data,
             local_118.Widgets.ArrayNum);
  if ((TWeakPtr<SWidget,1> *)local_118.Widgets.AllocatorInstance.Data != (TWeakPtr<SWidget,1> *)0x0)
  {
    FMemory::Free(local_118.Widgets.AllocatorInstance.Data);
  }
  return;
}

// NotifyPointerReleased @ 142760590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::NotifyPointerReleased
          (FSlateUser *this,FPointerEvent *param_1,FWidgetPath *param_2,
          TSharedPtr<FDragDropOperation,1> *param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  SWidget *pSVar3;
  FDragDropOperation *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  FSlateApplication *this_00;
  FArrangedWidget *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint local_res8;
  uint uStackX_c;
  uint local_res10 [4];
  uint local_res20 [2];
  uint local_e8 [2];
  uint local_e0 [2];
  uint local_d8 [2];
  TVector2<double>_u_0 local_d0;
  FPointerEvent local_b8;
  
  puVar15 = (uint *)0x0;
  local_res8 = 0;
  uVar1 = param_1->PointerIndex;
  if (*(int *)&(this->DragStatesByPointerIndex).field_0x8 !=
      *(int *)&(this->DragStatesByPointerIndex).field_0x34) {
    puVar13 = *(undefined1 **)&(this->DragStatesByPointerIndex).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->DragStatesByPointerIndex).field_0x38;
    }
    uVar9 = *(uint *)(puVar13 +
                     (ulonglong)(*(int *)&(this->DragStatesByPointerIndex).field_0x48 - 1U & uVar1)
                     * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar9 * 0x58 +
                          *(longlong *)&(this->DragStatesByPointerIndex).field_0x0);
        if (*puVar10 == uVar1) {
          puVar14 = puVar10 + 2;
          if (puVar10 == (uint *)0x0) {
            puVar14 = puVar15;
          }
          if (puVar14 != (uint *)0x0) {
            pTVar12 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController
            ;
            FVar5 = (param_1->EffectingButton).KeyName;
            if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
              UNLOCK();
            }
            puVar15 = (uint *)&DAT_00000001;
            if (*(FName *)(puVar14 + 10) != FVar5) goto LAB_142760611;
            bVar7 = true;
            goto LAB_142760614;
          }
          break;
        }
        uVar9 = puVar10[0x14];
      } while (uVar9 != 0xffffffff);
    }
  }
  pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_142760611:
  bVar7 = false;
LAB_142760614:
  if (puVar15 != (uint *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if ((bVar7) &&
     (local_res10[0] = uVar1,
     *(int *)&(this->DragStatesByPointerIndex).field_0x8 !=
     *(int *)&(this->DragStatesByPointerIndex).field_0x34)) {
    TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
                *)&this->DragStatesByPointerIndex,uVar1,local_res10);
  }
  bVar7 = HasCapture(this,uVar1);
  if (!bVar7) {
    if (param_1->bIsTouchEvent != false) {
      this_00 = FSlateApplication::Get();
      bVar7 = FSlateApplication::IsFakingTouchEvents(this_00);
      if (!bVar7) {
        iVar2 = (param_2->Widgets).Array.ArrayNum;
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          pFVar11 = FArrangedChildren::operator[](&param_2->Widgets,iVar2);
          pSVar3 = (pFVar11->Widget).Object;
          (**(code **)(pSVar3->_padding_ + 0x80))(pSVar3,param_1);
        }
      }
      if ((param_1->bIsTouchEvent != false) &&
         (bVar7 = HasCapture(this,param_1->PointerIndex), bVar7)) {
        local_res8 = local_res8 & 0xffffff00;
        `FSlateUser::NotifyPointerReleased'::__l8::<lambda_1>::operator()(&local_res8);
      }
    }
    pFVar4 = param_3->Object;
    if ((pFVar4 != (FDragDropOperation *)0x0) &&
       (cVar8 = (**(code **)(pFVar4->_padding_ + 8))(pFVar4,param_1), cVar8 != '\0')) {
      FPointerEvent::FPointerEvent(&local_b8,param_1);
      local_b8._padding_ = (longlong)param_2;
      if ((param_3->Object == (FDragDropOperation *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(param_3->Object->_padding_ + 0x10))(param_3->Object,param_4,&local_b8);
      local_res20[0] = uVar1;
      if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
          *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
        TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>
                  ((TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
                    *)&this->WidgetsUnderPointerLastEventByIndex,uVar1,local_res20);
      }
      FPointerEvent::~FPointerEvent(&local_b8);
    }
  }
  if (param_1->bIsTouchEvent != false) {
    local_d0._s_0.X = (double)*(float *)&param_1->ScreenSpacePosition;
    local_d0._s_0.Y = (double)*(float *)&(param_1->ScreenSpacePosition).field_0x4;
    FGestureDetector::OnTouchEnded(&this->GestureDetector,uVar1,(TVector2<double> *)&local_d0._s_0);
    ReleaseCapture(this,uVar1);
    local_e8[0] = uVar1;
    if (*(int *)&(this->PointerPositionsByIndex).field_0x8 !=
        *(int *)&(this->PointerPositionsByIndex).field_0x34) {
      TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
                  *)&this->PointerPositionsByIndex,uVar1,local_e8);
    }
    local_e0[0] = uVar1;
    if (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x8 !=
        *(int *)&(this->PreviousPointerPositionsByIndex).field_0x34) {
      TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
                  *)&this->PreviousPointerPositionsByIndex,uVar1,local_e0);
    }
    local_d8[0] = uVar1;
    if (*(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x8 !=
        *(int *)&(this->WidgetsUnderPointerLastEventByIndex).field_0x34) {
      TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
                  *)&this->WidgetsUnderPointerLastEventByIndex,uVar1,local_d8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// NotifyTouchStarted @ 142760870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::NotifyTouchStarted(FSlateUser *this,FPointerEvent *param_1)

{
  longlong lVar1;
  FDeprecateSlateVector2D FVar2;
  int iVar3;
  undefined1 *puVar4;
  TMap<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
  *this_00;
  uint local_res8 [2];
  int local_res10 [2];
  uint *local_res18 [2];
  TVector2<double>_u_0 local_28;
  
  if ((1 < (byte)LogSlate._0_1_) &&
     (*(int *)&(this->PointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PointerPositionsByIndex).field_0x34)) {
    puVar4 = *(undefined1 **)&(this->PointerPositionsByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PointerPositionsByIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->PointerPositionsByIndex).field_0x48 - 1U &
                              param_1->PointerIndex) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->PointerPositionsByIndex + (longlong)iVar3 * 0x14) ==
            param_1->PointerIndex) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          break;
        }
        iVar3 = *(int *)(*(longlong *)&this->PointerPositionsByIndex + 0xc + (longlong)iVar3 * 0x14)
        ;
      } while (iVar3 != -1);
    }
  }
  local_28._s_0.X = (double)*(float *)&param_1->ScreenSpacePosition;
  local_28._s_0.Y = (double)*(float *)&(param_1->ScreenSpacePosition).field_0x4;
  FGestureDetector::OnTouchStarted
            (&this->GestureDetector,param_1->PointerIndex,(TVector2<double> *)&local_28._s_0);
  local_res8[0] = param_1->PointerIndex;
  this_00 = &this->PointerPositionsByIndex;
  FVar2 = param_1->ScreenSpacePosition;
  if (*(int *)&(this->PointerPositionsByIndex).field_0x8 !=
      *(int *)&(this->PointerPositionsByIndex).field_0x34) {
    puVar4 = *(undefined1 **)&(this->PointerPositionsByIndex).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->PointerPositionsByIndex).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->PointerPositionsByIndex).field_0x48 - 1U &
                              local_res8[0]) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x14;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x14) == local_res8[0]) {
          if (lVar1 != 0) {
            *(FDeprecateSlateVector2D *)(lVar1 + 4) = FVar2;
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = local_res8;
  TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
            ((TSet<TTuple<unsigned_int,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res10,
             (TKeyInitializer<unsigned_int_&&> *)(ulonglong)local_res8[0],(bool *)local_res18);
  *(FDeprecateSlateVector2D *)
   (*(longlong *)&this_00->field_0x0 + 4 + (longlong)local_res10[0] * 0x14) = FVar2;
  return;
}

// NotifyWindowDestroyed @ 1427609e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::NotifyWindowDestroyed(FSlateUser *this,TSharedRef<SWindow,1> *param_1)

{
  TSharedPtr<FWidgetPath,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TSharedRef<SWindow,1> *pTVar5;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<SWindow,1> local_18;
  
  bVar4 = false;
  pTVar1 = &this->StrongFocusPath;
  if (pTVar1->Object != (FWidgetPath *)0x0) {
    bVar3 = FWidgetPath::IsValid(pTVar1->Object);
    if (bVar3) {
      if (pTVar1->Object == (FWidgetPath *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar5 = FWidgetPath::GetWindow(pTVar1->Object,&local_18);
      bVar4 = true;
      if (param_1->Object == pTVar5->Object) {
        bVar3 = true;
        goto LAB_142760a64;
      }
    }
  }
  bVar3 = false;
LAB_142760a64:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FWidgetPath,1> *)&local_28) {
      pTVar1->Object = (FWidgetPath *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StrongFocusPath).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessCursorReply @ 142774310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ProcessCursorReply(FSlateUser *this,FCursorReply *param_1)

{
  TSharedPtr<ICursor,1> *this_00;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWindow *pSVar6;
  code *pcVar7;
  bool bVar8;
  FSlateApplication *this_01;
  ICursor *pIVar9;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  uchar local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  this_00 = &this->Cursor;
  if (((this->Cursor).Object == (ICursor *)0x0) || ((char)param_1->_padding_ == '\0')) {
    if (&this->CursorWindowPtr != (TWeakPtr<SWindow,1> *)local_58) {
      pTVar3 = (this->CursorWindowPtr).WeakReferenceCount.ReferenceController;
      (this->CursorWindowPtr).Object = (SWindow *)0x0;
      (this->CursorWindowPtr).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
    if (&this->CursorWidgetPtr != (TWeakPtr<SWidget,1> *)local_48) {
      pTVar3 = (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController;
      (this->CursorWidgetPtr).Object = (SWidget *)0x0;
      (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
    }
  }
  else if (this->bCanDrawCursor == false) {
    pIVar9 = TSharedPtr<ICursor,1>::operator->(this_00);
    (**(code **)((longlong)*pIVar9 + 0x30))(pIVar9,0);
  }
  else {
    pTVar3 = (param_1->CursorWidget).SharedReferenceCount.ReferenceController;
    pSVar4 = (param_1->CursorWidget).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->CursorWidgetPtr).Object = pSVar4;
    if (pTVar3 != (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      (this->CursorWidgetPtr).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->CursorWidget).SharedReferenceCount.ReferenceController;
    pSVar4 = (param_1->CursorWidget).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pSVar4 == (SWidget *)0x0) {
      if (&this->CursorWindowPtr != (TWeakPtr<SWindow,1> *)local_68) {
        pTVar3 = (this->CursorWindowPtr).WeakReferenceCount.ReferenceController;
        (this->CursorWindowPtr).Object = (SWindow *)0x0;
        (this->CursorWindowPtr).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
      }
      pIVar9 = TSharedPtr<ICursor,1>::operator->(this_00);
      (**(code **)((longlong)*pIVar9 + 0x30))(pIVar9,param_1->MouseCursor);
    }
    else {
      pSVar4 = (param_1->CursorWidget).Object;
      pTVar3 = (param_1->CursorWidget).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pSVar4 == (SWidget *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_38[1] = 1;
      local_30 = 0;
      uStack_28 = 0;
      local_38[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
      local_20 = 0;
      (**(code **)(pSVar4->_padding_ + 0x1c8))(pSVar4,local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pTVar3 = (param_1->CursorWindow).SharedReferenceCount.ReferenceController;
      pSVar6 = (param_1->CursorWindow).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      (this->CursorWindowPtr).Object = pSVar6;
      if (pTVar3 != (this->CursorWindowPtr).WeakReferenceCount.ReferenceController) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar5 = (this->CursorWindowPtr).WeakReferenceCount.ReferenceController;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
        (this->CursorWindowPtr).WeakReferenceCount.ReferenceController = pTVar3;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      this_01 = FSlateApplication::Get();
      bVar8 = FSlateApplication::IsFakingTouchEvents(this_01);
      if (!bVar8) {
        pIVar9 = TSharedPtr<ICursor,1>::operator->(this_00);
        (**(code **)((longlong)*pIVar9 + 0x30))(pIVar9,0xe);
      }
    }
  }
  return;
}

// QueryCursor @ 142775cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014277653e) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::QueryCursor(FSlateUser *this)

{
  longlong *plVar1;
  char *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  ICursor *pIVar4;
  ICursor *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  SWidget *pSVar9;
  bool bVar10;
  FModifierKeysState FVar11;
  uint uVar12;
  Result RVar13;
  FName *pFVar14;
  TStatId TVar15;
  FSlateApplication *this_00;
  FDragDropOperation *pFVar16;
  FCursorReply *pFVar17;
  FDeprecateSlateVector2D FVar18;
  undefined6 extraout_var;
  uint *puVar20;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar21;
  FWidgetPath *pFVar22;
  char *pcVar23;
  TSharedRef<SWindow,1> *pTVar24;
  wchar_t *pwVar25;
  FWeakWidgetPath *this_01;
  FArrangedWidget *pFVar26;
  ForElementType<FArrangedWidget> FVar27;
  TSharedPtr<SWidget_const_,1> *pTVar28;
  undefined1 *puVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 auStackY_7c8 [32];
  ushort local_768 [8];
  FCursorReply local_758;
  FName local_710;
  byte local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  float local_6f0;
  float fStack_6ec;
  SWidget *local_6e8;
  TReferenceControllerBase<1> *local_6e0;
  FDeprecateSlateVector2D local_6d8;
  LARGE_INTEGER local_6d0;
  TSharedPtr<SWindow,1> local_6c8;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_6b8;
  FPointerEvent local_6a8;
  FSourceLocation local_628;
  TSharedRef<SWindow,1> local_608;
  TSharedPtr<SWidget_const_,1> local_5f8;
  FCursorReply local_5e8;
  FCursorReply local_5a8;
  FName local_568 [2];
  TSharedRef<SWindow,1> local_558;
  TSharedPtr<SWidget_const_,1> local_548;
  TSharedPtr<SWidget_const_,1> local_538;
  undefined1 local_528 [16];
  TReferenceControllerBase<1> *local_518;
  TReferenceControllerBase<1> *local_508;
  TReferenceControllerBase<1> *local_4f8;
  undefined1 local_4e8 [16];
  TReferenceControllerBase<1> *local_4d8;
  TReferenceControllerBase<1> *local_4c8;
  TReferenceControllerBase<1> *local_4b8;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> local_4a8;
  FWidgetPath local_458;
  FWidgetPath local_2f8;
  undefined1 local_198 [8];
  FArrangedWidget local_190 [4];
  FArrangedWidget *local_70;
  int local_68;
  TReferenceControllerBase<1> *local_50;
  void *local_48;
  ulonglong local_38;
  ushort *puVar19;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  this->bQueryCursorRequested = false;
  if (this->bCanDrawCursor == false) {
    return;
  }
  if ((this->Cursor).Object == (ICursor *)0x0) {
    return;
  }
  bVar10 = IsInGameThread();
  if (!bVar10) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar25 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar25,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return;
  }
  TVar15.StatIdPtr = (TStatIdData *)StatPtr_STAT_SlateQueryCursor;
  if (StatPtr_STAT_SlateQueryCursor == (FThreadSafeStaticStat<FStat_STAT_SlateQueryCursor>)0x0) {
    pFVar14 = ::FName::FName(local_568,"STAT_SlateQueryCursor");
    TVar15.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateQueryCursor,*pFVar14,
                    L"QueryCursor","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
                    true,false,MCR_Invalid);
  }
  local_628.Impl._Line = 0x306;
  local_628.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
  ;
  local_628.Impl._Column = 3;
  local_628.Impl._Function = "void __cdecl FSlateUser::QueryCursor(void)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_710,TVar15,CycleStat|ClearEveryFrame,false,&local_628);
  this_00 = FSlateApplication::Get();
  local_758._padding_._0_1_ = '\0';
  local_758._padding_ = 0;
  local_758._padding_ = 0;
  local_758.CursorWindow.Object = (SWindow *)0x0;
  local_758.CursorWindow.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_758.CursorWidget.Object = (SWidget *)0x0;
  local_758.CursorWidget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_758.MouseCursor = Default;
  if ((this->DragDropContent).Object != (FDragDropOperation *)0x0) {
    pFVar16 = TSharedPtr<FDragDropOperation,1>::operator->(&this->DragDropContent);
    pFVar17 = (FCursorReply *)(**(code **)(pFVar16->_padding_ + 0x20))(pFVar16,local_528);
    FCursorReply::operator=(&local_758,pFVar17);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_508);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_518);
    if ((char)local_758._padding_ != '\0') goto LAB_1427767b0;
  }
  if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar3 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).SharedReferenceCount.
           ReferenceController;
  pIVar4 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar5 = (this->Cursor).Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  GetPointerPosition(this,(uint)&local_6d8);
  local_700 = local_6d8;
  FVar18 = GetPreviousCursorPosition(this);
  FVar18 = *(FDeprecateSlateVector2D *)FVar18;
  local_4a8.Elements._0_8_ = 0;
  local_4a8.Elements._8_8_ = 0;
  local_4a8.Elements._32_8_ = 0;
  local_4a8.Elements._40_4_ = 0;
  local_4a8.Elements._44_4_ = 0x80;
  local_4a8.Elements._48_4_ = 0xffffffff;
  local_4a8.Elements._52_4_ = 0;
  local_4a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4a8.HashSize = 0;
  local_6f8 = FVar18;
  if (pIVar4 == pIVar5) {
    FVar11 = FSlateApplication::GetModifierKeys(this_00);
    puVar19 = (ushort *)CONCAT62(extraout_var,FVar11);
    local_6a8.PressedButtons = FSlateApplication::GetPressedMouseButtons(this_00);
  }
  else {
    puVar19 = local_768;
    local_768[0] = local_768[0] & 0xfe00;
    local_6a8.PressedButtons = &local_4a8;
  }
  uVar30 = FSlateApplicationBase::CursorPointerIndex;
  local_6f0 = (float)local_700 - (float)local_6f8;
  fStack_6ec = local_700._4_4_ - local_6f8._4_4_;
  local_6a8._padding_._4_4_ = FSlateApplication::GetUserIndexForMouse(this_00);
  local_6a8._padding_._0_2_ = *puVar19;
  local_6a8._padding_._2_1_ = 0;
  local_6a8._padding_ = 0;
  local_6a8._padding_._0_4_ = local_6a8._padding_._4_4_;
  QueryPerformanceCounter(&local_6d0);
  local_6a8._padding_ = (longlong)local_6d0;
  local_6a8.ScreenSpacePosition = local_6d8;
  local_6a8._padding_ = (longlong)&___7FPointerEvent__6B_;
  local_6a8.CursorDelta._4_4_ = fStack_6ec;
  local_6a8.CursorDelta._0_4_ = local_6f0;
  local_6a8.EffectingButton.KeyName.ComparisonIndex.Value = 0;
  local_6a8.EffectingButton.KeyName.Number = 0;
  local_6a8.EffectingButton.KeyDetails.Object = (FKeyDetails *)0x0;
  local_6a8.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_6a8.PointerIndex = uVar30;
  local_6a8.TouchpadIndex = 0;
  local_6a8.Force = 1.0;
  local_6a8.bIsTouchEvent = false;
  local_6a8.GestureType = None;
  local_6a8.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
  local_6a8.bIsDirectionInvertedFromDevice = false;
  local_6a8.bIsTouchForceChanged = false;
  local_6a8.bIsTouchFirstMove = false;
  local_6a8.LastScreenSpacePosition = FVar18;
  FWidgetPath::FWidgetPath(&local_458);
  uVar30 = FSlateApplicationBase::CursorPointerIndex;
  bVar10 = HasCapture(this,FSlateApplicationBase::CursorPointerIndex);
  if (bVar10) {
    FWidgetPath::FWidgetPath(&local_2f8);
    if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
        *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
      puVar29 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
      if (puVar29 == (undefined1 *)0x0) {
        puVar29 = &(this->PointerCaptorPathsByIndex).field_0x38;
      }
      uVar12 = *(uint *)(puVar29 +
                        (ulonglong)
                        (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & uVar30) * 4);
      if (uVar12 != 0xffffffff) {
        do {
          puVar20 = (uint *)((longlong)(int)uVar12 * 0x30 +
                            *(longlong *)&this->PointerCaptorPathsByIndex);
          if (*puVar20 == uVar30) {
            this_01 = (FWeakWidgetPath *)(puVar20 + 2);
            if (puVar20 == (uint *)0x0) {
              this_01 = (FWeakWidgetPath *)0x0;
            }
            if ((this_01 != (FWeakWidgetPath *)0x0) &&
               (RVar13 = FWeakWidgetPath::ToWidgetPath
                                   (this_01,&local_2f8,Truncate,&local_6a8,EVisibility::Visible),
               RVar13 == Truncated)) {
              ReleaseCapture(this,uVar30);
            }
            break;
          }
          uVar12 = puVar20[10];
        } while (uVar12 != 0xffffffff);
      }
    }
    bVar10 = FWidgetPath::IsValid(&local_2f8);
    if (bVar10) {
      FWidgetPath::GetWindow(&local_2f8,&local_608);
      FSlateApplication::GetActiveModalWindow(this_00,&local_6c8);
      if (((local_6c8.Object == (SWindow *)0x0) || (local_6c8.Object == local_608.Object)) ||
         (bVar10 = SWindow::IsDescendantOf(local_608.Object,&local_6c8), bVar10)) {
        FWidgetPath::operator=(&local_458,&local_2f8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_608.SharedReferenceCount.ReferenceController);
    }
    if (local_2f8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_2f8.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar27 = (ForElementType<FArrangedWidget>)&local_2f8.Widgets.Array;
    if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar27 = local_2f8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar27,local_2f8.Widgets.Array.ArrayNum);
  }
  else {
    pcVar7 = *(code **)(*(longlong *)this_00 + 0x108);
    pTVar21 = FSlateApplication::GetInteractiveTopLevelWindows(this_00,&local_6b8);
    pFVar22 = (FWidgetPath *)(*pcVar7)(this_00,local_198,local_6d8,pTVar21);
    FWidgetPath::operator=(&local_458,pFVar22);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    pFVar26 = local_190;
    if (local_70 != (FArrangedWidget *)0x0) {
      pFVar26 = local_70;
    }
    DestructItems<FArrangedWidget,int>(pFVar26,local_68);
    if (local_70 != (FArrangedWidget *)0x0) {
      FMemory::Free(local_70);
    }
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_6b8.AllocatorInstance.Data,local_6b8.ArrayNum);
    local_2f8.Widgets.Array.AllocatorInstance.SecondaryData =
         (ForElementType<FArrangedWidget>)local_6b8.AllocatorInstance.Data;
  }
  if (local_2f8.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_2f8.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  bVar10 = FWidgetPath::IsValid(&local_458);
  if (bVar10) {
    uVar30 = local_458.Widgets.Array.ArrayNum - 1;
    if ((int)uVar30 < 0) goto LAB_1427765f7;
    lVar31 = (longlong)(int)uVar30;
    lVar33 = lVar31 * 0x48;
    do {
      uVar12 = 0;
      if ((int)uVar30 < local_458.Widgets.Array.ArrayNum) {
        uVar12 = ~uVar30 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar27 = (ForElementType<FArrangedWidget>)&local_458.Widgets.Array;
      if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar27 = local_458.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      lVar32 = (longlong)FVar27 + lVar33;
      pcVar23 = (char *)(**(code **)(**(longlong **)(lVar32 + 0x38) + 0x90))
                                  (*(longlong **)(lVar32 + 0x38),local_4e8,lVar32,&local_6a8);
      local_758._padding_._0_1_ = *pcVar23;
      plVar1 = (longlong *)(pcVar23 + 8);
      if (&local_758._padding_ != plVar1) {
        local_758._padding_ = *plVar1;
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&local_758._padding_,
                   (FSharedReferencer<1> *)(pcVar23 + 0x10));
      }
      pcVar2 = pcVar23 + 0x18;
      if (&local_758.CursorWindow != (TSharedPtr<SWindow,1> *)pcVar2) {
        local_758.CursorWindow.Object = *(SWindow **)pcVar2;
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_758.CursorWindow.SharedReferenceCount,
                   (FSharedReferencer<1> *)(pcVar23 + 0x20));
      }
      plVar1 = (longlong *)(pcVar23 + 0x28);
      if (&local_758.CursorWidget != (TSharedPtr<SWidget,1> *)plVar1) {
        local_758.CursorWidget.Object = (SWidget *)*plVar1;
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_758.CursorWidget.SharedReferenceCount,
                   (FSharedReferencer<1> *)(pcVar23 + 0x30));
      }
      local_758.MouseCursor = *(Type *)(pcVar23 + 0x38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4b8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4c8)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4d8)
      ;
      if ((char)local_758._padding_ != '\0') {
        local_5f8.Object = *(SWidget **)(lVar32 + 0x38);
        local_5f8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar32 + 0x40);
        if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FSlateDebugging::BroadcastCursorQuery(&local_5f8,&local_758);
        pSVar9 = local_758.CursorWidget.Object;
        if (local_758.CursorWidget.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_758.CursorWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_758.CursorWidget.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_758.CursorWidget.SharedReferenceCount.ReferenceController);
        if (pSVar9 != (SWidget *)0x0) goto LAB_1427765f7;
        lVar31 = lVar31 * 0x48;
        goto LAB_1427764b0;
      }
      lVar31 = lVar31 + -1;
      lVar33 = lVar33 + -0x48;
      uVar30 = uVar30 - 1;
    } while (-1 < (int)uVar30);
    goto LAB_142776602;
  }
  local_5a8._padding_._0_1_ = 1;
  local_5a8.MouseCursor = Default;
  local_5a8._padding_ = 0;
  local_5a8._padding_ = 0;
  local_5a8.CursorWindow.Object = (SWindow *)0x0;
  local_5a8.CursorWindow.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_5a8.CursorWidget.Object = (SWidget *)0x0;
  local_5a8.CursorWidget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FCursorReply::operator=(&local_758,&local_5a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8.CursorWidget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8.CursorWindow.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5a8._padding_);
  pTVar28 = &local_538;
  local_538.Object = (SWidget *)0x0;
  local_538.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_142776704:
  FSlateDebugging::BroadcastCursorQuery(pTVar28,&local_758);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  goto LAB_142776715;
  while( true ) {
    lVar31 = lVar31 + -0x48;
    uVar30 = uVar30 - 1;
    if ((int)uVar30 < 0) break;
LAB_1427764b0:
    uVar12 = 0;
    if ((int)uVar30 < local_458.Widgets.Array.ArrayNum) {
      uVar12 = ~uVar30 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar27 = (ForElementType<FArrangedWidget>)&local_458.Widgets.Array;
    if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar27 = local_458.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    plVar1 = *(longlong **)(lVar31 + 0x38 + (longlong)FVar27);
    (**(code **)(*plVar1 + 0x98))(plVar1,&local_6e8,&local_758);
    pTVar3 = local_6e0;
    pSVar9 = local_6e8;
    if (local_6e8 != (SWidget *)0x0) {
      if (local_6e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_6e0->SharedReferenceCount = (atomic<int>)((int)local_6e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar24 = FWidgetPath::GetWindow(&local_458,&local_558);
      FVar8.ReferenceController = local_758.CursorWindow.SharedReferenceCount.ReferenceController;
      pTVar6 = (pTVar24->SharedReferenceCount).ReferenceController;
      local_758.CursorWindow.Object = pTVar24->Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_758.CursorWindow.SharedReferenceCount.ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      FVar8.ReferenceController = local_758.CursorWidget.SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_758.CursorWidget.Object = pSVar9;
      local_758.CursorWidget.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_558.SharedReferenceCount.ReferenceController);
      if (local_6e8 != (SWidget *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6e0);
      }
      break;
    }
  }
LAB_1427765f7:
  if ((char)local_758._padding_ == '\0') {
LAB_142776602:
    bVar10 = FWidgetPath::IsValid(&local_458);
    if (bVar10) {
      local_5e8._padding_._0_1_ = 1;
      local_5e8.MouseCursor = Default;
      local_5e8._padding_ = 0;
      local_5e8._padding_ = 0;
      local_5e8.CursorWindow.Object = (SWindow *)0x0;
      local_5e8.CursorWindow.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_5e8.CursorWidget.Object = (SWidget *)0x0;
      local_5e8.CursorWidget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      FCursorReply::operator=(&local_758,&local_5e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5e8.CursorWidget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5e8.CursorWindow.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_5e8._padding_);
      pTVar28 = &local_548;
      local_548.Object = (SWidget *)0x0;
      local_548.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      goto LAB_142776704;
    }
  }
LAB_142776715:
  if (local_458.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar27 = (ForElementType<FArrangedWidget>)&local_458.Widgets.Array;
  if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar27 = local_458.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar27,local_458.Widgets.Array.ArrayNum);
  if (local_458.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_458.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  FPointerEvent::~FPointerEvent(&local_6a8);
  local_4a8.HashSize = 0;
  if (local_4a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_4a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_4a8.Elements);
LAB_1427767b0:
  ProcessCursorReply(this,&local_758);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.CursorWidget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_758.CursorWindow.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_758._padding_);
  if ((local_708 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_708 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_708 & 4) != 0) {
    FThreadStats::AddMessage(local_710,CycleScopeEnd);
  }
  return;
}

// QueueSyntheticCursorMove @ 142776880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::QueueSyntheticCursorMove(FSlateUser *this)

{
  this->NumPendingSyntheticCursorMoves = 2;
  return;
}

// ReleaseAllCapture @ 14277a660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ReleaseAllCapture(FSlateUser *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
              *)&this->PointerCaptorPathsByIndex,&local_18);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 4;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    ReleaseCapture(this,*(uint *)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 4;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ReleaseCapture @ 14277a700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ReleaseCapture(FSlateUser *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  atomic<int> aVar5;
  uint *puVar6;
  TWeakPtr<SWidget,1> *pTVar7;
  undefined1 *puVar8;
  SWidget *pSVar9;
  SWidget *pSVar10;
  SWidget *pSVar11;
  bool bVar12;
  uint local_res8;
  uint local_resc;
  uint local_res10 [2];
  TSharedPtr<SWidget_const_,1> local_38;
  
  if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
      *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
    puVar8 = *(undefined1 **)&(this->PointerCaptorPathsByIndex).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->PointerCaptorPathsByIndex).field_0x38;
    }
    uVar4 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this->PointerCaptorPathsByIndex).field_0x48 - 1U & param_1
                               ) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar6 = (uint *)((longlong)(int)uVar4 * 0x30 +
                              *(longlong *)&(this->PointerCaptorPathsByIndex).field_0x0),
            *puVar6 != param_1) {
        uVar4 = puVar6[10];
        if (uVar4 == 0xffffffff) {
          return;
        }
      }
      pSVar11 = (SWidget *)0x0;
      pSVar9 = (SWidget *)(puVar6 + 2);
      if (puVar6 == (uint *)0x0) {
        pSVar9 = pSVar11;
      }
      if (pSVar9 != (SWidget *)0x0) {
        local_res10[0] = param_1;
        TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
        ::Emplace<unsigned_int_const_&,FWeakWidgetPath_const_&>
                  ((TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
                    *)&this->WidgetsUnderPointerLastEventByIndex,local_res10,
                   (FWeakWidgetPath *)pSVar9);
        pTVar7 = FWeakWidgetPath::GetLastWidget
                           ((FWeakWidgetPath *)pSVar9,(TWeakPtr<SWidget,1> *)&local_38);
        pSVar9 = (SWidget *)(pTVar7->WeakReferenceCount).ReferenceController;
        pSVar10 = pSVar9;
        if (pSVar9 != (SWidget *)0x0) {
          aVar2 = *(atomic<int> *)&pSVar9->_padding_;
          do {
            pSVar10 = pSVar11;
            if (aVar2 == (atomic<int>)0x0) break;
            LOCK();
            aVar5 = *(atomic<int> *)&pSVar9->_padding_;
            bVar12 = aVar2 == aVar5;
            if (bVar12) {
              *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            pSVar10 = pSVar9;
            aVar2 = aVar5;
          } while (!bVar12);
          pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
          (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pSVar11 = (SWidget *)0x0;
          if (pSVar10 != (SWidget *)0x0) {
            pSVar11 = pTVar7->Object;
            pTVar7->Object = (SWidget *)0x0;
          }
        }
        if ((SWidget *)local_38.SharedReferenceCount.ReferenceController != (SWidget *)0x0) {
          LOCK();
          paVar1 = &(local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_38.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_38.SharedReferenceCount.ReferenceController,1);
          }
        }
        if (pSVar11 != (SWidget *)0x0) {
          local_res8 = this->UserIndex;
          local_resc = local_res10[0];
          (**(code **)(pSVar11->_padding_ + 0x1a8))(pSVar11,&local_res8);
          if (pSVar10 != (SWidget *)0x0) {
            LOCK();
            *(int *)&pSVar10->_padding_ = (int)pSVar10->_padding_ + 1;
            UNLOCK();
          }
          local_38.Object = pSVar11;
          local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar10
          ;
          FSlateDebugging::BroadcastMouseCaptureLost(this->UserIndex,local_res10[0],&local_38);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar10);
        local_res8 = local_res10[0];
        if (*(int *)&(this->PointerCaptorPathsByIndex).field_0x8 !=
            *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) {
          TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,FWeakWidgetPath>,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>,FDefaultSetAllocator>
                      *)&this->PointerCaptorPathsByIndex,local_res10[0],&local_res8);
        }
        if (local_res10[0] == FSlateApplicationBase::CursorPointerIndex) {
          this->bQueryCursorRequested = true;
        }
      }
    }
  }
  return;
}

// ReleaseCursorCapture @ 14277a8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ReleaseCursorCapture(FSlateUser *this)

{
  ReleaseCapture(this,FSlateApplicationBase::CursorPointerIndex);
  return;
}

// ResetDragDetection @ 14277e4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ResetDragDetection(FSlateUser *this)

{
  TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
           *)&this->DragStatesByPointerIndex);
  return;
}

// ResetDragDropContent @ 14277e510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ResetDragDropContent(FSlateUser *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->DragDropContent != (TSharedPtr<FDragDropOperation,1> *)&local_18) {
    (this->DragDropContent).Object = (FDragDropOperation *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DragDropContent).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// ResetTooltipWindow @ 14277e560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::ResetTooltipWindow(FSlateUser *this)

{
  atomic<int> *paVar1;
  TWeakPtr<SWindow,1> *pTVar2;
  atomic<int> aVar3;
  code *pcVar4;
  atomic<int> aVar5;
  SWindow *this_00;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  longlong local_18 [2];
  
  pTVar2 = &this->TooltipWindowPtr;
  if (pTVar2->Object == (SWindow *)0x0) {
    return;
  }
  pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar6->SharedReferenceCount < 1) {
    return;
  }
  this_00 = (SWindow *)0x0;
  pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14277e5c4;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar7);
    this_00 = pTVar2->Object;
    if (this_00 != (SWindow *)0x0) goto LAB_14277e5ea;
  }
LAB_14277e5c4:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14277e5ea:
  SWindow::RequestDestroyWindow(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pTVar2 != (TWeakPtr<SWindow,1> *)local_18) {
    pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
    pTVar2->Object = (SWindow *)0x0;
    (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014277e642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        return;
      }
    }
  }
  return;
}

// SetCursorCaptor @ 142784560

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::SetCursorCaptor
          (FSlateUser *this,TSharedRef<SWidget_const_,1> *param_1,FWidgetPath *param_2)

{
  bool bVar1;
  TSharedRef<SWidget_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = SetPointerCaptor(this,FSlateApplicationBase::CursorPointerIndex,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// SetCursorPosition @ 1427845c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::SetCursorPosition(FSlateUser *this,FDeprecateVector2DParameter *param_1)

{
  SetPointerPosition(this,FSlateApplicationBase::CursorPointerIndex,(int)*(float *)param_1,
                     (int)*(float *)&param_1->field_0x4);
  return;
}

// SetCursorPosition @ 1427845e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::SetCursorPosition(FSlateUser *this,int param_1,int param_2)

{
  SetPointerPosition(this,FSlateApplicationBase::CursorPointerIndex,param_1,param_2);
  return;
}

// SetCursorVisibility @ 142784600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::SetCursorVisibility(FSlateUser *this,bool param_1)

{
  FCursorReply local_48;
  
  this->bCanDrawCursor = param_1;
  if (!param_1) {
    this->bNeedQueryForVisibleCursor = true;
    local_48._padding_._0_1_ = 1;
    local_48.MouseCursor = None;
    local_48._padding_ = 0;
    local_48._padding_ = 0;
    local_48.CursorWindow.Object = (SWindow *)0x0;
    local_48.CursorWindow.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_48.CursorWidget.Object = (SWidget *)0x0;
    local_48.CursorWidget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    ProcessCursorReply(this,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.CursorWidget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.CursorWindow.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._padding_);
    return;
  }
  if (this->bNeedQueryForVisibleCursor != false) {
    this->bNeedQueryForVisibleCursor = false;
    this->bQueryCursorRequested = true;
    return;
  }
  return;
}

// SetDragDropContent @ 142784680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::SetDragDropContent(FSlateUser *this,TSharedRef<FDragDropOperation,1> *param_1)

{
  TSharedPtr<FDragDropOperation,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FDragDropOperation *local_18;
  FSharedReferencer<1> local_10;
  
  pTVar1 = &this->DragDropContent;
  if (pTVar1->Object != (FDragDropOperation *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsDragDropping()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
                       ,0x4b9,L"Drag and Drop already in progress!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FDragDropOperation,1> *)&local_18) {
    pTVar1->Object = local_18;
    local_18 = (FDragDropOperation *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DragDropContent).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetFocus @ 142784730

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::SetFocus(FSlateUser *this,TSharedRef<SWidget,1> *param_1,EFocusCause param_2)

{
  bool bVar1;
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  this_00 = FSlateApplication::Get();
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateApplication::SetUserFocus(this_00,this->UserIndex,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// SetFocusPath @ 1427847b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::SetFocusPath(FSlateUser *this,FWidgetPath *param_1,EFocusCause param_2,bool param_3)

{
  FWeakWidgetPath *pFVar1;
  TWeakPtr<SWindow,1> *pTVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FWeakWidgetPath local_28;
  
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->StrongFocusPath != (TSharedPtr<FWidgetPath,1> *)&local_38) {
    (this->StrongFocusPath).Object = (FWidgetPath *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StrongFocusPath).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  FWeakWidgetPath::FWeakWidgetPath(&local_28,param_1);
  pFVar1 = &this->WeakFocusPath;
  if (pFVar1 != &local_28) {
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)(pFVar1->Widgets).AllocatorInstance.Data,
               (this->WeakFocusPath).Widgets.ArrayNum);
    pFVar5 = (pFVar1->Widgets).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Widgets).AllocatorInstance.Data = local_28.Widgets.AllocatorInstance.Data;
    (this->WeakFocusPath).Widgets.ArrayNum = local_28.Widgets.ArrayNum;
    (this->WeakFocusPath).Widgets.ArrayMax = local_28.Widgets.ArrayMax;
    local_28.Widgets.ArrayNum = 0;
    local_28.Widgets.ArrayMax = 0;
    local_28.Widgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &(this->WeakFocusPath).Window;
  if (pTVar2 != &local_28.Window) {
    pTVar6 = (this->WeakFocusPath).Window.WeakReferenceCount.ReferenceController;
    pTVar2->Object = local_28.Window.Object;
    (this->WeakFocusPath).Window.WeakReferenceCount.ReferenceController =
         local_28.Window.WeakReferenceCount.ReferenceController;
    local_28.Window.Object = (SWindow *)0x0;
    local_28.Window.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  if (local_28.Window.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar3 = &(local_28.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar4 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)((local_28.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.Window.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)local_28.Widgets.AllocatorInstance.Data,
             local_28.Widgets.ArrayNum);
  if ((TWeakPtr<SWidget,1> *)local_28.Widgets.AllocatorInstance.Data != (TWeakPtr<SWidget,1> *)0x0)
  {
    FMemory::Free(local_28.Widgets.AllocatorInstance.Data);
  }
  this->bShowFocus = param_3;
  this->FocusCause = param_2;
  return;
}

// SetPointerCaptor @ 142786500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateUser::SetPointerCaptor
          (FSlateUser *this,uint param_1,TSharedRef<SWidget_const_,1> *param_2,FWidgetPath *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  code *pcVar4;
  EVisibility EVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  FArrangedWidget *pFVar9;
  TSharedRef<SWindow,1> *pTVar10;
  FWidgetPath *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  ForElementType<FArrangedWidget> FVar13;
  undefined1 auStack_3a8 [32];
  uint local_388 [2];
  TReferenceControllerBase<1> *local_380;
  FWidgetMatcher local_378;
  TSharedRef<SWidget_const_,1> local_368;
  TSharedRef<SWidget_const_,1> local_358;
  TSharedPtr<SWidget_const_,1> local_348;
  FWeakWidgetPath local_338;
  TSharedRef<SWindow,1> local_318;
  FWidgetPath local_308;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  bVar7 = false;
  local_380 = (TReferenceControllerBase<1> *)((ulonglong)local_380 & 0xffffffff00000000);
  local_388[0] = param_1;
  ReleaseCapture(this,param_1);
  bVar6 = FWidgetPath::IsValid(param_3);
  if ((!bVar6) &&
     (local_380 = (TReferenceControllerBase<1> *)param_2,
     bVar6 = `FSlateUser::SetPointerCaptor'::__l3::<lambda_1>::operator()(&local_380), !bVar6))
  goto LAB_1427868d8;
  local_368.Object = param_2->Object;
  local_368.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_368.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetPath::GetPathDownTo(param_3,&local_308,&local_368);
  bVar6 = FWidgetPath::IsValid(&local_308);
  pTVar12 = local_380;
  if (bVar6) {
    bVar7 = FWidgetPath::IsValid(&local_308);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                           ,0xac,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pFVar9 = FArrangedChildren::operator[](&local_308.Widgets,local_308.Widgets.Array.ArrayNum + -1)
    ;
    pTVar12 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
    pSVar3 = (pFVar9->Widget).Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    if (pSVar3 != param_2->Object) goto LAB_14278660b;
    bVar6 = false;
  }
  else {
LAB_14278660b:
    bVar6 = true;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  bVar7 = false;
  if (bVar6) {
    pTVar10 = FWidgetPath::GetWindow(param_3,&local_318);
    local_358.Object = (SWidget *)pTVar10->Object;
    local_358.SharedReferenceCount.ReferenceController =
         (pTVar10->SharedReferenceCount).ReferenceController;
    if (local_358.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11 = FWidgetPath::GetPathDownTo(param_3,&local_1a8,&local_358);
    FWidgetPath::operator=(&local_308,pFVar11);
    if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar13 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
    if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar13 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar13,local_1a8.Widgets.Array.ArrayNum);
    if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_1a8.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_318.SharedReferenceCount.ReferenceController);
    EVar5 = EVisibility::Visible;
    local_378.WidgetToFind.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    local_378.WidgetToFind.Object = param_2->Object;
    if (local_378.WidgetToFind.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_378.WidgetToFind.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_378.WidgetToFind.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_378.WidgetToFind.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_378.WidgetToFind.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378.WidgetToFind.SharedReferenceCount.ReferenceController);
    FWidgetPath::ExtendPathTo<FWidgetMatcher>(&local_308,&local_378,EVar5,Standard);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378.WidgetToFind.SharedReferenceCount.ReferenceController);
  }
  bVar6 = FWidgetPath::IsValid(&local_308);
  pTVar12 = local_380;
  if (bVar6) {
    bVar7 = true;
    bVar6 = FWidgetPath::IsValid(&local_308);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                           ,0xac,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pFVar9 = FArrangedChildren::operator[](&local_308.Widgets,local_308.Widgets.Array.ArrayNum + -1)
    ;
    pTVar12 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
    pSVar3 = (pFVar9->Widget).Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar3 != param_2->Object) goto LAB_142786788;
    bVar6 = true;
  }
  else {
LAB_142786788:
    bVar6 = false;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar6) {
    FWeakWidgetPath::FWeakWidgetPath(&local_338,&local_308);
    TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
    ::Emplace<unsigned_int_const_&,FWeakWidgetPath>
              ((TMapBase<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
                *)&this->PointerCaptorPathsByIndex,local_388,&local_338);
    if (local_338.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_338.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_338.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_338.Window.WeakReferenceCount.ReferenceController,1);
      }
    }
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)local_338.Widgets.AllocatorInstance.Data,
               local_338.Widgets.ArrayNum);
    if ((TWeakPtr<SWidget,1> *)local_338.Widgets.AllocatorInstance.Data !=
        (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_338.Widgets.AllocatorInstance.Data);
    }
    local_348.Object = param_2->Object;
    local_348.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateDebugging::BroadcastMouseCapture(this->UserIndex,local_388[0],&local_348);
    if (local_308.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar13 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
    if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar13 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar13,local_308.Widgets.Array.ArrayNum);
    if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return true;
  }
  if (local_308.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar13 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
  if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar13 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar13,local_308.Widgets.Array.ArrayNum);
  if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
  }
LAB_1427868d8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// SetPointerPosition @ 142786910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::SetPointerPosition(FSlateUser *this,uint param_1,FDeprecateVector2DParameter *param_2)

{
  SetPointerPosition(this,param_1,(int)*(float *)param_2,(int)*(float *)&param_2->field_0x4);
  return;
}

// SetPointerPosition @ 142786930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::SetPointerPosition(FSlateUser *this,uint param_1,int param_2,int param_3)

{
  ICursor *pIVar1;
  code *pcVar2;
  TVector2<float>_u_0 TVar3;
  bool bVar4;
  TVector2<float>_u_0 *pTVar5;
  uint local_res10 [2];
  
  if (((this->Cursor).Object != (ICursor *)0x0) &&
     (param_1 == FSlateApplicationBase::CursorPointerIndex)) {
    if (5 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    if ((this->Cursor).Object == (ICursor *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->Cursor).Object;
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_2,param_3);
  }
  local_res10[0] = param_1;
  pTVar5 = &TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
                        *)&this->PointerPositionsByIndex,param_1,local_res10)->field0_0x0;
  TVar3._s_0.Y = (float)param_3;
  TVar3._s_0.X = (float)param_2;
  *pTVar5 = TVar3;
  pTVar5 = &TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
                        *)&this->PreviousPointerPositionsByIndex,local_res10[0],local_res10)->
            field0_0x0;
  *pTVar5 = TVar3;
  return;
}

// SetUserNavigationConfig @ 142787ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::SetUserNavigationConfig(FSlateUser *this,TSharedPtr<FNavigationConfig,1> *param_1)

{
  FNavigationConfig *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateApplication *this_00;
  TSharedPtr<FNavigationConfig,1> local_28;
  FNavigationConfig *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar1 = (this->UserNavigationConfig).Object;
  if (pFVar1 != (FNavigationConfig *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))();
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar1 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (this->UserNavigationConfig).Object;
  pTStack_10 = (this->UserNavigationConfig).SharedReferenceCount.ReferenceController;
  (this->UserNavigationConfig).Object = pFVar1;
  (this->UserNavigationConfig).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  if (param_1->Object != (FNavigationConfig *)0x0) {
    (**(code **)(param_1->Object->_padding_ + 0x18))();
  }
  this_00 = FSlateApplication::Get();
  local_28.Object = (this->UserNavigationConfig).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->UserNavigationConfig).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::TryDumpNavigationConfig(this_00,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ShouldShowFocus @ 14278a110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::ShouldShowFocus(FSlateUser *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> *pTVar4;
  bool bVar5;
  TSharedPtr<SWidget,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  bVar5 = false;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 != (SWidget *)0x0) {
    pTVar4 = GetFocusedWidget(this,&local_18);
    bVar5 = true;
    if (pTVar4->Object == pSVar2) {
      bVar3 = true;
      goto LAB_14278a165;
    }
  }
  bVar3 = false;
LAB_14278a165:
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((bVar3) && (this->bShowFocus != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar5;
}

// ShowTooltip @ 14278a490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::ShowTooltip
          (FSlateUser *this,TSharedRef<IToolTip,1> *param_1,FDeprecateVector2DParameter *param_2)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  TVector2<float>_u_0_s_0 TVar7;
  code *pcVar8;
  SWeakWidget *pSVar9;
  FSharedReferencer<1> FVar10;
  SWindow *this_00;
  bool bVar11;
  char cVar12;
  byte bVar13;
  FArguments *pFVar14;
  undefined8 *puVar15;
  FSlateApplication *pFVar16;
  TSharedPtr<FGenericWindow,1> *pTVar17;
  FDeprecateSlateVector2D FVar18;
  TVector2<float>_u_0_s_0 *pTVar19;
  float fVar20;
  float fVar21;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  T0RequiredArgs *pTVar22;
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs> local_2f8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  TSharedRef<SWindow,1> local_2d0;
  undefined8 local_2c0;
  LARGE_INTEGER local_2b8;
  TSharedRef<SWidget,1> local_2b0;
  undefined1 local_298 [8];
  SWidget *local_290;
  TReferenceControllerBase<1> *pTStack_288;
  undefined1 local_280 [8];
  TReferenceControllerBase<1> *local_278;
  TSharedPtr<FGenericWindow,1> local_270;
  FArguments local_260;
  
  CloseTooltip(this);
  (this->ActiveTooltipInfo).Tooltip.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController = pTVar4;
  }
  GetOrCreateTooltipWindow(this,&local_2d0);
  this_00 = local_2d0.Object;
  pFVar14 = SWeakWidget::FArguments::FArguments(&local_260);
  puVar15 = (undefined8 *)(**(code **)*param_1->Object)(param_1->Object,local_280);
  pTVar4 = (TReferenceControllerBase<1> *)puVar15[1];
  pSVar6 = (SWidget *)*puVar15;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_290 = (pFVar14->_PossiblyNullContent).Object;
  pTStack_288 = (pFVar14->_PossiblyNullContent).SharedReferenceCount.ReferenceController;
  (pFVar14->_PossiblyNullContent).Object = pSVar6;
  (pFVar14->_PossiblyNullContent).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pTVar22 = local_res8;
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>
            (&local_2f8,"SWeakWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
             ,0x236,pTVar22);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar9 = local_2f8._Widget.Object;
  if (local_2f8._Widget.Object == (SWeakWidget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2f8._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SWeakWidget::Construct(local_2f8._Widget.Object,pFVar14);
  if (local_2f8._Widget.Object == (SWeakWidget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (((local_2f8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_2f8._Widget.Object)->_padding_ + 0x228))(local_2f8._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14278a697;
  }
  bVar13 = 0x20;
LAB_14278a697:
  *(byte *)&(local_2f8._Widget.Object)->_padding_ =
       (byte)(local_2f8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2f8._Widget.Object)->_padding_ =
       (byte)(local_2f8._Widget.Object)->_padding_ | bVar13;
  if (local_2f8._Widget.Object == (SWeakWidget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pbVar2 = (byte *)((longlong)&(local_2f8._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (local_2f8._Widget.Object == (SWeakWidget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar10.ReferenceController = local_2f8._Widget.SharedReferenceCount.ReferenceController;
  local_2f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2f8._Widget.Object = (SWeakWidget *)0x0;
  if (pSVar9 == (SWeakWidget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_2b0.Object = (SWidget *)pSVar9;
  local_2b0.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(this_00,&local_2b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_278);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260._PossiblyNullContent.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_260);
  pFVar16 = FSlateApplication::Get();
  pTVar17 = SWindow::GetNativeWindow(local_2d0.Object,&local_270);
  if (pTVar17->Object == (FGenericWindow *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar20 = (float)(**(code **)(pTVar17->Object->_padding_ + 0xf8))();
  fVar21 = (float)(**(code **)(*(longlong *)pFVar16 + 0x58))(pFVar16);
  SWidget::SlatePrepass((SWidget *)local_2d0.Object,fVar21 * fVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.SharedReferenceCount.ReferenceController);
  local_2e0 = *(undefined4 *)param_2;
  local_2dc = *(undefined4 *)&param_2->field_0x4;
  pcVar8 = *(code **)(*(longlong *)pFVar16 + 0x110);
  local_2d8 = local_2e0;
  local_2d4 = local_2dc;
  cVar12 = (**(code **)((longlong)*param_1->Object + 0x28))();
  FVar18 = SWindow::GetDesiredSizeDesktopPixels(local_2d0.Object);
  local_2c0 = *(undefined8 *)FVar18;
  pTVar19 = (TVector2<float>_u_0_s_0 *)
            (*pcVar8)(pFVar16,local_298,&local_2e0,&local_2c0,
                      (ulonglong)pTVar22 & 0xffffffffffffff00,cVar12 != '\0');
  TVar7 = *pTVar19;
  (this->ActiveTooltipInfo).DesiredLocation.field0_0x0._s_0 = TVar7;
  SWindow::MoveWindowTo(local_2d0.Object,(FDeprecateVector2DParameter)TVar7);
  SWindow::SetOpacity(local_2d0.Object,0.0);
  SWindow::ShowWindow(local_2d0.Object);
  QueryPerformanceCounter(&local_2b8);
  (this->ActiveTooltipInfo).SummonTime =
       (double)local_2b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d0.SharedReferenceCount.ReferenceController);
  return;
}

// StartDragDetection @ 14278b8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::StartDragDetection
          (FSlateUser *this,FWidgetPath *param_1,int param_2,FKey *param_3,
          FDeprecateVector2DParameter param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  FDeprecateVector2DParameter FVar6;
  int local_res18 [4];
  int *local_88;
  FWeakWidgetPath *local_80;
  FWeakWidgetPath local_78;
  FDeprecateVector2DParameter local_58;
  FName local_50;
  FKeyDetails *local_48;
  TReferenceControllerBase<1> *local_40;
  int local_38;
  
  FVar6 = param_4;
  pTVar3 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  FVar4 = param_3->KeyName;
  pFVar5 = (param_3->KeyDetails).Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FWeakWidgetPath::FWeakWidgetPath(&local_78,param_1);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FWeakWidgetPath::FWeakWidgetPath(&local_78,param_1);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = FVar6;
  local_50 = FVar4;
  local_48 = pFVar5;
  local_40 = pTVar3;
  local_38 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_88 = local_res18;
  local_80 = &local_78;
  local_res18[0] = param_2;
  TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,FSlateUser::FDragDetectionState_&&>_>
            ((TSet<TTuple<unsigned_int,FSlateUser::FDragDetectionState>,TDefaultMapHashableKeyFuncs<unsigned_int,FSlateUser::FDragDetectionState,0>,FDefaultSetAllocator>
              *)&this->DragStatesByPointerIndex,
             (TPairInitializer<unsigned_int_&&,FSlateUser::FDragDetectionState_&&> *)&param_4,
             (bool *)&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (local_78.Window.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_78.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_78.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_78.Window.WeakReferenceCount.ReferenceController,1);
    }
  }
  DestructItems<TWeakPtr<SWidget,1>,int>
            ((TWeakPtr<SWidget,1> *)local_78.Widgets.AllocatorInstance.Data,
             local_78.Widgets.ArrayNum);
  if ((TWeakPtr<SWidget,1> *)local_78.Widgets.AllocatorInstance.Data != (TWeakPtr<SWidget,1> *)0x0)
  {
    FMemory::Free(local_78.Widgets.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return;
}

// SynthesizeCursorMoveIfNeeded @ 14278c4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateUser::SynthesizeCursorMoveIfNeeded(FSlateUser *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  ICursor *pIVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  FSharedReferencer<1> FVar7;
  GenericApplication *pGVar8;
  FDeprecateSlateVector2D FVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  IPlatformInputDeviceMapper *pIVar13;
  FDeprecateSlateVector2D FVar14;
  ICursor *pIVar15;
  atomic<int> *paVar16;
  FSharedReferencer<1> FVar17;
  undefined1 auStackY_1a8 [32];
  ushort local_178 [2];
  int local_174;
  int local_170 [2];
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  undefined8 local_154;
  FSlateApplication *local_148;
  FKeyDetails *local_140;
  LARGE_INTEGER local_138;
  FDeprecateSlateVector2D local_130;
  FName local_128;
  FPointerEvent local_118;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar11 = false;
  local_174 = 0;
  if ((bEnableSyntheticCursorMoves) && (bVar10 = IsInGameThread(), bVar10)) {
    if ((this->Cursor).Object == (ICursor *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<378628854933095107>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
                          ,0x2c3,"Cursor");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
    }
    else {
      piVar1 = &this->NumPendingSyntheticCursorMoves;
      *piVar1 = *piVar1 + -1;
      if (-1 < *piVar1) {
        local_148 = FSlateApplication::Get();
        pIVar13 = IPlatformInputDeviceMapper::Get();
        (**(code **)(pIVar13->_padding_ + 0x70))(pIVar13,local_170,(this->PlatformUser).InternalId);
        if (-1 < local_170[0]) {
          if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          pTVar2 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).
                   SharedReferenceCount.ReferenceController;
          pIVar3 = ((FSlateApplicationBase::PlatformApplication.Object)->Cursor).Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          pIVar15 = (this->Cursor).Object;
          local_160 = (FDeprecateSlateVector2D)pIVar15;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          FVar17 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
          pGVar8 = FSlateApplicationBase::PlatformApplication.Object;
          local_174 = this->UserIndex;
          local_88._0_8_ = (FScriptContainerElement *)0x0;
          local_88._8_8_ = 0;
          local_68 = (void *)0x0;
          local_60 = 0;
          local_5c = 0x80;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = (ForElementType<FSetElementId>)0x0;
          local_40 = 0;
          if (pIVar3 == pIVar15) {
            if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController
                != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)
              ->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.
                         ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pGVar8 == (GenericApplication *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              uVar12 = (*pcVar4)();
              return (bool)uVar12;
            }
            local_168 = (FDeprecateSlateVector2D)
                        (**(code **)(pGVar8->_padding_ + 0x58))(pGVar8,local_158);
            bVar11 = true;
            pIVar15 = (ICursor *)local_160;
          }
          else {
            local_178[0] = local_178[0] & 0xfe00;
            local_168 = (FDeprecateSlateVector2D)local_178;
            FVar17.ReferenceController = (TReferenceControllerBase<1> *)local_140;
          }
          FVar7.ReferenceController =
               EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
          local_128 = EKeys::Invalid.KeyName;
          local_140 = EKeys::Invalid.KeyDetails.Object;
          if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar16 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar16 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount;
            LOCK();
            *paVar16 = (atomic<int>)((int)*paVar16 + 1);
            UNLOCK();
          }
          if (pIVar3 == pIVar15) {
            local_118.PressedButtons = FSlateApplication::GetPressedMouseButtons(local_148);
          }
          else {
            local_118.PressedButtons =
                 (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)local_88;
          }
          FVar14 = GetPreviousCursorPosition(this);
          FVar14 = *(FDeprecateSlateVector2D *)FVar14;
          GetPointerPosition(this,(uint)&local_130);
          uVar6 = FSlateApplicationBase::CursorPointerIndex;
          local_118._padding_._0_2_ = *(ushort *)local_168;
          local_118._padding_._0_4_ = local_170[0];
          local_118._padding_._2_1_ = 0;
          local_118._padding_ = 0;
          QueryPerformanceCounter(&local_138);
          local_118._padding_ = (longlong)local_138;
          pIVar13 = IPlatformInputDeviceMapper::Get();
          (**(code **)(pIVar13->_padding_ + 0x68))(pIVar13,&local_154,(int)local_118._padding_);
          local_118._padding_ = (longlong)&___7FPointerEvent__6B_;
          local_168 = local_130;
          FVar9 = local_168;
          local_168._0_4_ = local_130._0_4_;
          local_168._4_4_ = local_130._4_4_;
          local_118.ScreenSpacePosition = local_130;
          local_118.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
               FVar7.ReferenceController;
          local_154._0_4_ = FVar14._0_4_;
          local_154._4_4_ = FVar14._4_4_;
          local_160._4_4_ = local_168._4_4_ - local_154._4_4_;
          local_160._0_4_ = (float)local_168 - (float)local_154;
          local_118.CursorDelta = local_160;
          local_118.EffectingButton.KeyName = local_128;
          local_118.EffectingButton.KeyDetails.Object = local_140;
          if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar16 = (atomic<int>)((int)*paVar16 + 1);
            UNLOCK();
          }
          local_118.TouchpadIndex = 0;
          local_118.bIsTouchEvent = false;
          local_118.GestureType = None;
          local_118.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
          local_118.bIsDirectionInvertedFromDevice = false;
          local_118.bIsTouchForceChanged = false;
          local_118.bIsTouchFirstMove = false;
          local_118.PointerIndex = uVar6;
          local_118.Force = 1.0;
          local_118._padding_._4_4_ = local_174;
          local_168 = FVar9;
          local_154 = FVar14;
          local_118.LastScreenSpacePosition = FVar14;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
          if (bVar11) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar17.ReferenceController);
          }
          FSlateApplication::ProcessMouseMoveEvent(local_148,&local_118,true);
          FPointerEvent::~FPointerEvent(&local_118);
          local_40 = 0;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_48);
          }
          TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<FKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_88,0,local_88._8_4_);
          iVar5 = SUB84(local_88._8_8_,4);
          local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
          if (iVar5 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
          }
          local_54 = 0;
          local_60 = 0;
          local_58 = 0xffffffff;
          if (0x80 < local_5c) {
            local_5c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_88._0_8_);
          }
          return true;
        }
      }
    }
  }
  return false;
}

// UnlockCursor @ 14278ff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::UnlockCursor(FSlateUser *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ICursor *pIVar3;
  FWidgetPath *pFVar4;
  FWeakWidgetPath *pFVar5;
  ForElementType<FArrangedWidget> FVar6;
  undefined1 auStack_1b8 [32];
  FWeakWidgetPath local_198;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pIVar3 = (this->Cursor).Object;
  if (pIVar3 != (ICursor *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3,0);
    pFVar4 = FWidgetPath::FWidgetPath(&local_178);
    pFVar5 = FWeakWidgetPath::FWeakWidgetPath(&local_198,pFVar4);
    FWeakWidgetPath::operator=(&this->LockingWidgetPath,pFVar5);
    if (local_198.Window.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_198.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_198.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_198.Window.WeakReferenceCount.ReferenceController,1);
      }
    }
    DestructItems<TWeakPtr<SWidget,1>,int>
              ((TWeakPtr<SWidget,1> *)local_198.Widgets.AllocatorInstance.Data,
               local_198.Widgets.ArrayNum);
    if ((TWeakPtr<SWidget,1> *)local_198.Widgets.AllocatorInstance.Data !=
        (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_198.Widgets.AllocatorInstance.Data);
    }
    if (local_178.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_178.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar6 = (ForElementType<FArrangedWidget>)&local_178.Widgets.Array;
    if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar6 = local_178.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar6,local_178.Widgets.Array.ArrayNum);
    if (local_178.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_178.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// UpdateCursor @ 1427912d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::UpdateCursor(FSlateUser *this)

{
  atomic<int> *paVar1;
  float fVar2;
  atomic<int> aVar3;
  ICursor *pIVar4;
  float fVar5;
  bool bVar6;
  FArrangedWidget *pFVar7;
  FWidgetPath *pFVar8;
  FWeakWidgetPath *pFVar9;
  FDeprecateSlateVector2D FVar10;
  ForElementType<FArrangedWidget> FVar11;
  float fVar12;
  undefined1 auStack_368 [32];
  LARGE_INTEGER local_338;
  undefined8 local_330;
  undefined8 local_328;
  TVector2<float>_u_0 local_320;
  TVector2<float>_u_0 TStack_318;
  FWeakReferencer<1> local_310;
  ulonglong local_308;
  FSlateRect local_300;
  TVector2<float>_u_0_s_0 local_2ec;
  FWidgetPath local_2e0;
  FWidgetPath local_180;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_368;
  if ((this->Cursor).Object != (ICursor *)0x0) {
    if (0 < (this->LockingWidgetPath).Widgets.ArrayNum) {
      FWeakWidgetPath::ToWidgetPath
                (&this->LockingWidgetPath,&local_2e0,ReturnInvalid,(FPointerEvent *)0x0,
                 EVisibility::Visible);
      bVar6 = FWidgetPath::IsValid(&local_2e0);
      if (bVar6) {
        pFVar7 = FArrangedChildren::Last(&local_2e0.Widgets);
        fVar2 = (pFVar7->Geometry).Scale;
        FVar10 = (pFVar7->Geometry).Size;
        local_2ec = (pFVar7->Geometry).AbsolutePosition.field0_0x0._s_0;
        local_330._4_4_ = FVar10._4_4_;
        fVar5 = local_330._4_4_;
        local_330._0_4_ = FVar10._0_4_;
        fVar12 = (float)local_330;
        local_338.QuadPart = (ulonglong)(uint)local_330._4_4_ << 0x20;
        local_308 = (ulonglong)FVar10 & 0xffffffff;
        local_330 = 0;
        local_320._s_0.X = fVar2 * fVar12;
        local_328._4_4_ = fVar2 * 0.0 + local_2ec.Y;
        local_328._0_4_ = fVar2 * 0.0 + local_2ec.X;
        local_320._s_0.Y = fVar2 * 0.0;
        TStack_318._s_0.X = fVar2 * 0.0;
        TStack_318._s_0.Y = fVar2 * fVar5;
        FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_328,&local_300);
        if ((((local_300.Left != (this->LastComputedLockBounds).Left) ||
             (local_300.Top != (this->LastComputedLockBounds).Top)) ||
            (local_300.Right != (this->LastComputedLockBounds).Right)) ||
           (local_300.Bottom != (this->LastComputedLockBounds).Bottom)) {
          LockCursorInternal(this,&local_2e0);
        }
      }
      else {
        pIVar4 = (this->Cursor).Object;
        if (pIVar4 != (ICursor *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,0);
          pFVar8 = FWidgetPath::FWidgetPath(&local_180);
          pFVar9 = FWeakWidgetPath::FWeakWidgetPath((FWeakWidgetPath *)&local_328,pFVar8);
          FWeakWidgetPath::operator=(&this->LockingWidgetPath,pFVar9);
          if (local_310.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(local_310.ReferenceController)->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_310.ReferenceController)->_padding_ + 8))
                        (local_310.ReferenceController,1);
            }
          }
          DestructItems<TWeakPtr<SWidget,1>,int>
                    ((TWeakPtr<SWidget,1> *)local_328,(int)local_320._s_0.X);
          if (local_328 != (TVector2<float>_u_0)0x0) {
            FMemory::Free((void *)local_328);
          }
          if (local_180.VirtualPointerPositions.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.VirtualPointerPositions.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.TopLevelWindow.SharedReferenceCount.ReferenceController);
          FVar11 = (ForElementType<FArrangedWidget>)&local_180.Widgets.Array;
          if (local_180.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar11 = local_180.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar11,local_180.Widgets.Array.ArrayNum);
          if (local_180.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FMemory::Free((void *)local_180.Widgets.Array.AllocatorInstance.SecondaryData);
          }
        }
      }
      if (local_2e0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2e0.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar11 = (ForElementType<FArrangedWidget>)&local_2e0.Widgets.Array;
      if (local_2e0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar11 = local_2e0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar11,local_2e0.Widgets.Array.ArrayNum)
      ;
      if (local_2e0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_2e0.Widgets.Array.AllocatorInstance.SecondaryData);
      }
    }
    if ((0 < *(int *)&(this->PointerCaptorPathsByIndex).field_0x8 -
             *(int *)&(this->PointerCaptorPathsByIndex).field_0x34) ||
       (this->bQueryCursorRequested != false)) {
      QueryCursor(this);
    }
    fVar12 = CursorSignificantMoveDetectionThreshold * CursorSignificantMoveDetectionThreshold;
    GetPointerPosition(this,(uint)&local_338);
    FVar10 = GetPreviousCursorPosition(this);
    fVar2 = (float)local_338.s.HighPart - *(float *)((longlong)FVar10 + 4);
    if (fVar12 < fVar2 * fVar2 +
                 ((float)local_338.s.LowPart - *(float *)FVar10) *
                 ((float)local_338.s.LowPart - *(float *)FVar10)) {
      QueryPerformanceCounter(&local_338);
      this->LastCursorSignificantMoveTime =
           (double)local_338.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
  }
  return;
}

// UpdatePointerPosition @ 142791e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateUser::UpdatePointerPosition(FSlateUser *this,uint param_1,TVector2<float> *param_2)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 *pTVar2;
  uint local_res10 [2];
  
  TVar1 = param_2->field0_0x0;
  local_res10[0] = param_1;
  pTVar2 = &TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
                        *)&this->PointerPositionsByIndex,param_1,local_res10)->field0_0x0;
  *pTVar2 = TVar1;
  TVar1 = param_2->field0_0x0;
  pTVar2 = &TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
                        *)&this->PreviousPointerPositionsByIndex,local_res10[0],local_res10)->
            field0_0x0;
  *pTVar2 = TVar1;
  return;
}

// UpdatePointerPosition @ 142791e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::UpdatePointerPosition(FSlateUser *this,FPointerEvent *param_1)

{
  TVector2<float> TVar1;
  TVector2<float>_u_0 *pTVar2;
  uint local_res8 [2];
  
  local_res8[0] = param_1->PointerIndex;
  TVar1.field0_0x0 = *(TVector2<float>_u_0 *)&param_1->ScreenSpacePosition;
  pTVar2 = &TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
                        *)&this->PointerPositionsByIndex,local_res8[0],local_res8)->field0_0x0;
  *pTVar2 = TVar1.field0_0x0;
  TVar1.field0_0x0 = *(TVector2<float>_u_0 *)&param_1->ScreenSpacePosition;
  pTVar2 = &TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Math::TVector2<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector2<float>,0>_>
                        *)&this->PreviousPointerPositionsByIndex,local_res8[0],local_res8)->
            field0_0x0;
  *pTVar2 = TVar1.field0_0x0;
  return;
}

// UpdateTooltip @ 142792150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateUser::UpdateTooltip(FSlateUser *this,FMenuStack *param_1,bool param_2)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDeprecateVector2DParameter FVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  TWeakPtr<SWidget,1> *pTVar11;
  FName FVar12;
  FMenuStack *this_00;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  atomic<int> aVar22;
  FSlateApplication *pFVar23;
  TStatId TVar24;
  TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *this_01;
  GenericApplication *pGVar25;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar26;
  TSharedRef<SWindow,1> *pTVar27;
  undefined8 *puVar28;
  SWindow *pSVar29;
  FDeprecateSlateVector2D FVar30;
  TVector2<float>_u_0 *pTVar31;
  FDeprecateVector2DParameter *pFVar32;
  ForElementType<FArrangedWidget> FVar33;
  undefined1 *puVar34;
  FSharedReferencer<1> *pFVar35;
  ETooltipOffsetDirection EVar36;
  SWidget *pSVar37;
  SWidget *pSVar38;
  IToolTip *pIVar39;
  longlong lVar40;
  SWidget *pSVar41;
  FSharedReferencer<1> FVar42;
  undefined8 uVar43;
  SWindow *pSVar44;
  SWindow *pSVar45;
  IToolTip *pIVar46;
  SWidget *pSVar47;
  bool bVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStackY_768 [32];
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  IToolTip *local_708;
  FSharedReferencer<1> FStack_700;
  TReferenceControllerBase<1> *local_6f8;
  FSlateApplication *local_6f0;
  SWidget *local_6e8;
  FSharedReferencer<1> FStack_6e0;
  undefined1 local_6d8 [8];
  float fStack_6d0;
  float fStack_6cc;
  IToolTip *local_6c8;
  TReferenceControllerBase<1> *local_6c0;
  FName local_6b8;
  byte local_6b0;
  float local_6a8;
  float local_6a4;
  float local_6a0;
  float local_69c;
  undefined8 local_690;
  undefined1 local_688 [8];
  FSharedReferencer<1> FStack_680;
  TSharedPtr<SWindow,1> local_678;
  FSlateRect local_668;
  undefined8 local_658;
  float local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  float local_644;
  undefined8 local_640;
  float local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  float local_62c;
  float local_628;
  float local_624;
  float local_620;
  float local_61c;
  float local_618;
  float local_614;
  float local_610;
  float local_60c;
  float local_608;
  float local_604;
  float local_600;
  float local_5fc;
  double local_5f8;
  double local_5f0;
  FSlateRect local_5e8;
  IToolTip *local_5d8;
  TReferenceControllerBase<1> *pTStack_5d0;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  TVector2<float>_u_0 local_5b8;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  TVector2<float>_u_0 local_5a0;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  undefined8 local_588;
  TVector2<float>_u_0 local_580;
  LARGE_INTEGER local_578;
  undefined8 local_570;
  SWindow *local_568;
  undefined8 local_55c;
  undefined8 local_550;
  undefined8 local_548;
  FSlateUser *local_540;
  FMenuStack *local_538;
  TSharedPtr<GenericApplication,1> local_530;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_520;
  undefined8 local_510;
  FSharedReferencer<1> local_508;
  undefined8 local_500;
  FSharedReferencer<1> local_4f8;
  SWidget *local_4f0;
  TReferenceControllerBase<1> *local_4e8;
  TSharedRef<IMenu,1> local_4d8;
  TSharedPtr<IMenu,1> local_4c8;
  TVector2<float>_u_0 local_4b8;
  undefined8 local_4b0;
  TVector2<float>_u_0 local_4a8;
  undefined8 local_4a0;
  TVector2<float>_u_0 local_498;
  FSourceLocation local_488;
  TSharedRef<SWindow,1> local_468;
  undefined8 local_458;
  TReferenceControllerBase<1> *pTStack_450;
  undefined8 local_448;
  TReferenceControllerBase<1> *local_440;
  undefined8 local_438;
  TReferenceControllerBase<1> *local_430;
  TSharedRef<IToolTip,1> local_428 [2];
  undefined1 local_408 [8];
  undefined1 local_400 [16];
  undefined1 local_3f0 [8];
  FSlateRect local_3e8;
  undefined1 local_3d8 [8];
  TReferenceControllerBase<1> *local_3d0;
  undefined1 local_3c8 [24];
  undefined1 local_3b0 [16];
  FWidgetPath local_3a0;
  FWidgetPath local_240;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pSVar29 = (SWindow *)0x0;
  pSVar44 = (SWindow *)0x0;
  local_540 = this;
  local_538 = param_1;
  pFVar23 = FSlateApplication::Get();
  local_6f0 = pFVar23;
  bVar13 = FSlateApplication::GetAllowTooltips(pFVar23);
  if (!bVar13) {
    CloseTooltip(this);
    return;
  }
  TVar24 = FThreadSafeStaticStatInner<FStat_STAT_SlateUpdateTooltip,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_SlateUpdateTooltip,1> *)
                      &StatPtr_STAT_SlateUpdateTooltip);
  local_488.Impl._Line = 0x4cb;
  local_488.Impl._Column = 2;
  local_488.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
  ;
  local_488.Impl._Function = "void __cdecl FSlateUser::UpdateTooltip(const class FMenuStack &,bool)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_6b8,*(TStatIdData **)&(TVar24.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_488);
  if ((param_2) && ((this->bCanDrawCursor != false || (bAllowTooltipsWithHiddenCursor != false)))) {
    dVar2 = this->LastCursorSignificantMoveTime;
    dVar49 = FWindowsPlatformTime::Seconds();
    bVar13 = true;
    if (dVar49 - dVar2 <= __real_3fa999999999999a) goto LAB_14279227f;
  }
  else {
LAB_14279227f:
    bVar13 = false;
  }
  FWidgetPath::FWidgetPath(&local_3a0);
  bVar14 = IsInGameThread();
  pSVar45 = pSVar29;
  if (bVar14) {
    pSVar45 = pSVar44;
    if (FSlateApplicationBase::PlatformApplication.Object != (GenericApplication *)0x0) {
      if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      cVar15 = (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0x80))
                         ();
      if (cVar15 != '\0') goto LAB_1427923a2;
    }
    if ((this->DragDropContent).Object != (FDragDropOperation *)0x0) goto LAB_1427923a2;
    this_01 = FSlateApplication::GetPressedMouseButtons(pFVar23);
    FVar12 = EKeys::LeftMouseButton.KeyName;
    uVar18 = ::GetTypeHash(EKeys::LeftMouseButton.KeyName.ComparisonIndex.Value);
    iVar19 = TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::FindIndexByHash<FKey>
                       (this_01,FVar12.Number + uVar18,&EKeys::LeftMouseButton);
    if ((iVar19 != -1) && (bAllowTooltipsWhileMouseDown == false)) goto LAB_1427923a2;
    cVar15 = (**(code **)(*(longlong *)pFVar23 + 8))(pFVar23);
    pSVar45 = pSVar29;
    if (cVar15 == '\0') {
      local_530.Object = FSlateApplicationBase::PlatformApplication.Object;
      local_530.SharedReferenceCount.ReferenceController =
           FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController;
      if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.
                   ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pGVar25 = TSharedPtr<GenericApplication,1>::operator->(&local_530);
      pSVar45 = (SWindow *)&DAT_00000001;
      cVar15 = (**(code **)(pGVar25->_padding_ + 0x60))(pGVar25);
      if (cVar15 == '\0') goto LAB_1427923a2;
    }
    bVar14 = true;
  }
  else {
LAB_1427923a2:
    bVar14 = false;
  }
  if (pSVar45 != (SWindow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_530.SharedReferenceCount.ReferenceController);
  }
  bVar48 = false;
  bVar16 = false;
  if (bVar14) {
    pcVar8 = *(code **)(*(longlong *)pFVar23 + 0x108);
    pTVar26 = FSlateApplication::GetInteractiveTopLevelWindows(pFVar23,&local_520);
    GetPointerPosition(this,(uint)&local_548);
    (*pcVar8)(pFVar23,&local_240,local_548,pTVar26);
    DestructItems<TSharedRef<SWindow,1>,int>
              ((TSharedRef<SWindow,1> *)local_520.AllocatorInstance.Data,local_520.ArrayNum);
    if ((TSharedRef<SWindow,1> *)local_520.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0) {
      FMemory::Free(local_520.AllocatorInstance.Data);
    }
    bVar14 = FWidgetPath::IsValid(&local_240);
    pSVar44 = local_568;
    if (bVar14) {
      pSVar44 = (SWindow *)(this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
      if (pSVar44 != (SWindow *)0x0) {
        iVar19 = (int)pSVar44->_padding_;
        do {
          if (iVar19 == 0) {
            FWidgetPath::GetWindow(&local_240,&local_468);
            bVar48 = true;
            bVar16 = true;
            bVar14 = true;
            pSVar44 = pSVar29;
            goto LAB_1427924de;
          }
          LOCK();
          iVar20 = (int)pSVar44->_padding_;
          bVar14 = iVar19 == iVar20;
          if (bVar14) {
            *(int *)&pSVar44->_padding_ = iVar19 + 1;
            iVar20 = iVar19;
          }
          UNLOCK();
          iVar19 = iVar20;
        } while (!bVar14);
        pSVar29 = (this->TooltipWindowPtr).Object;
      }
      bVar48 = true;
      bVar16 = true;
      pTVar27 = FWidgetPath::GetWindow(&local_240,&local_468);
      if ((pSVar29 != (SWindow *)0x0) && (pSVar29 == pTVar27->Object)) goto LAB_1427924db;
      bVar14 = true;
    }
    else {
LAB_1427924db:
      bVar14 = false;
    }
LAB_1427924de:
    if (bVar16) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_468.SharedReferenceCount.ReferenceController);
    }
    if (bVar48) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar44);
    }
    if (bVar14) {
      FWidgetPath::operator=(&local_3a0,&local_240);
    }
    FWidgetPath::~FWidgetPath(&local_240);
  }
  fVar51 = 0.0;
  fVar52 = 0.0;
  fVar53 = 0.0;
  _local_688 = ZEXT816(0);
  fVar54 = 0.0;
  bVar14 = false;
  uVar18 = local_3a0.Widgets.Array.ArrayNum - 1;
  local_708 = (IToolTip *)0x0;
  FStack_700.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  _local_6d8 = ZEXT416((uint)local_6a4);
  fVar50 = local_6a4;
  fVar55 = local_6a8;
  fVar56 = local_6a0;
  fVar57 = local_69c;
  if ((int)uVar18 < 0) {
    pIVar39 = (IToolTip *)0x0;
    FStack_700.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pIVar39 = (IToolTip *)0x0;
    lVar40 = (longlong)(int)uVar18 * 0x48;
    bVar14 = false;
    do {
      uVar21 = 0;
      if ((int)uVar18 < local_3a0.Widgets.Array.ArrayNum) {
        uVar21 = ~uVar18 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar33 = (ForElementType<FArrangedWidget>)&local_3a0.Widgets.Array;
      if (local_3a0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar33 = local_3a0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      if (pIVar39 == (IToolTip *)0x0) {
        plVar3 = *(longlong **)(lVar40 + 0x38 + (longlong)FVar33);
        (**(code **)(*plVar3 + 0x1b8))(plVar3,&local_6c8);
        if (local_6c8 != (IToolTip *)0x0) {
          if ((local_6c8 == (IToolTip *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar15 = (**(code **)((longlong)*local_6c8 + 0x20))();
          if (cVar15 == '\0') {
            local_508.ReferenceController =
                 *(TReferenceControllerBase<1> **)(lVar40 + 0x40 + (longlong)FVar33);
            uVar43 = *(undefined8 *)(lVar40 + 0x38 + (longlong)FVar33);
            if (local_508.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_508.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_508.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_688 = (undefined1  [8])uVar43;
            local_510 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(local_688 + 8),&local_508);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_508.ReferenceController);
            pIVar39 = local_6c8;
            FVar42.ReferenceController = FStack_700.ReferenceController;
            if (local_6c0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_6c0->SharedReferenceCount =
                   (atomic<int>)((int)local_6c0->SharedReferenceCount + 1);
              UNLOCK();
            }
            FStack_700.ReferenceController = local_6c0;
            local_708 = local_6c8;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar42.ReferenceController);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6c0);
      }
      uVar43 = local_55c;
      if ((*(byte *)(*(longlong *)(lVar40 + 0x38 + (longlong)FVar33) + 0x30) & 8) != 0) {
        uVar4 = *(ulonglong *)(lVar40 + (longlong)FVar33);
        fVar1 = *(float *)(lVar40 + 8 + (longlong)FVar33);
        uVar5 = *(undefined8 *)(lVar40 + 0xc + (longlong)FVar33);
        local_710._0_4_ = (float)uVar4;
        local_710._4_4_ = (float)(uVar4 >> 0x20);
        local_55c._0_4_ = (float)uVar5;
        local_55c._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        if (bVar14) {
          local_638 = (float)local_710;
          local_62c = local_710._4_4_;
          uStack_634 = 0;
          uStack_630 = 0;
          local_6f8 = (TReferenceControllerBase<1> *)((ulonglong)(uint)local_710._4_4_ << 0x20);
          local_640 = 0;
          local_5a0._s_0.X = fVar1 * 0.0 + (float)local_55c;
          local_5a0._s_0.Y = fVar1 * 0.0 + local_55c._4_4_;
          local_598 = (float)local_710 * fVar1;
          local_594 = fVar1 * 0.0;
          local_590 = fVar1 * 0.0;
          local_58c = local_710._4_4_ * fVar1;
          local_55c = uVar43;
          local_550 = uVar5;
          FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_5a0._s_0,&local_5e8);
          if (local_5e8.Left <= fVar55) {
            fVar55 = local_5e8.Left;
          }
          if (local_5e8.Top <= fVar50) {
            fVar50 = local_5e8.Top;
          }
          if (fVar56 <= local_5e8.Right) {
            fVar56 = local_5e8.Right;
          }
          if (fVar57 <= local_5e8.Bottom) {
            fVar57 = local_5e8.Bottom;
          }
        }
        else {
          local_650 = (float)local_710;
          local_644 = local_710._4_4_;
          uStack_64c = 0;
          uStack_648 = 0;
          local_6f8 = (TReferenceControllerBase<1> *)(uVar4 & 0xffffffff);
          local_658 = 0;
          local_5b8._s_0.X = fVar1 * 0.0 + (float)local_55c;
          local_5b8._s_0.Y = fVar1 * 0.0 + local_55c._4_4_;
          local_5b0 = (float)local_710 * fVar1;
          local_5ac = fVar1 * 0.0;
          local_5a8 = fVar1 * 0.0;
          local_5a4 = local_710._4_4_ * fVar1;
          local_55c = uVar5;
          FSlateRotatedRect::ToBoundingRect((FSlateRotatedRect *)&local_5b8._s_0,&local_3e8);
          fVar50 = local_3e8.Top;
          fVar51 = local_3e8.Top;
          fVar52 = local_3e8.Top;
          fVar53 = local_3e8.Top;
          fVar55 = local_3e8.Left;
          fVar56 = local_3e8.Right;
          fVar57 = local_3e8.Bottom;
        }
        bVar14 = true;
      }
      lVar40 = lVar40 + -0x48;
      uVar18 = uVar18 - 1;
    } while (-1 < (int)uVar18);
    local_6d8._4_4_ = fVar51;
    local_6d8._0_4_ = fVar50;
    fStack_6d0 = fVar52;
    fStack_6cc = fVar53;
    this = local_540;
  }
  pTStack_5d0 = (this->ActiveTooltipInfo).Tooltip.WeakReferenceCount.ReferenceController;
  pSVar47 = (SWidget *)0x0;
  local_5d8 = (IToolTip *)0x0;
  local_6e8 = (SWidget *)0x0;
  FStack_6e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTStack_5d0 != (TReferenceControllerBase<1> *)0x0) {
    aVar9 = pTStack_5d0->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        pTStack_5d0 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1427929c6;
      }
      LOCK();
      aVar22 = pTStack_5d0->SharedReferenceCount;
      bVar16 = aVar9 == aVar22;
      if (bVar16) {
        pTStack_5d0->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar22 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar22;
    } while (!bVar16);
    if (pTStack_5d0 != (TReferenceControllerBase<1> *)0x0) {
      local_5d8 = (this->ActiveTooltipInfo).Tooltip.Object;
    }
  }
LAB_1427929c6:
  pIVar46 = local_5d8;
  bVar16 = pIVar39 != local_5d8;
  local_6f8 = pTStack_5d0;
  if (bVar16) {
    if ((((this->ActiveTooltipInfo).TooltipVisualizer.Object != (SWidget *)0x0) &&
        (pTVar6 = (this->ActiveTooltipInfo).TooltipVisualizer.WeakReferenceCount.ReferenceController
        , pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount))
    {
      pSVar38 = (SWidget *)
                (this->ActiveTooltipInfo).TooltipVisualizer.WeakReferenceCount.ReferenceController;
      pSVar37 = pSVar38;
      pSVar41 = pSVar47;
      if (pSVar38 == (SWidget *)0x0) {
LAB_142792a27:
        bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        pSVar38 = pSVar37;
        if (bVar48) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        aVar9 = *(atomic<int> *)&pSVar38->_padding_;
        do {
          pSVar37 = pSVar47;
          if (aVar9 == (atomic<int>)0x0) goto LAB_142792a27;
          LOCK();
          aVar22 = *(atomic<int> *)&pSVar38->_padding_;
          bVar48 = aVar9 == aVar22;
          if (bVar48) {
            *(atomic<int> *)&pSVar38->_padding_ = (atomic<int>)((int)aVar9 + 1);
            aVar22 = aVar9;
          }
          UNLOCK();
          aVar9 = aVar22;
        } while (!bVar48);
        pSVar41 = (this->ActiveTooltipInfo).TooltipVisualizer.Object;
        pSVar37 = pSVar38;
        if (pSVar41 == (SWidget *)0x0) goto LAB_142792a27;
      }
      local_458 = 0;
      pTStack_450 = (TReferenceControllerBase<1> *)0x0;
      (**(code **)(pSVar41->_padding_ + 0xa8))(pSVar41,&local_458);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_450);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar38);
    }
    if (pIVar39 == (IToolTip *)0x0) {
      if (!bVar13) goto LAB_142792af3;
    }
    else if (bVar13) {
      if ((pIVar39 == (IToolTip *)0x0) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar48)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)((longlong)*pIVar39 + 0x30))(pIVar39);
      (this->ActiveTooltipInfo).HasBeenPositioned = false;
    }
    else {
LAB_142792af3:
      if (pIVar39 != (IToolTip *)0x0) goto LAB_142792cde;
    }
    if (pIVar39 == (IToolTip *)0x0) {
      bVar10 = false;
      bVar17 = false;
      bVar48 = true;
      local_440 = (TReferenceControllerBase<1> *)0x0;
      puVar28 = &local_448;
      local_4f0 = pSVar47;
    }
    else {
      if ((pIVar39 == (IToolTip *)0x0) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar48)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar10 = true;
      bVar17 = true;
      bVar48 = false;
      puVar28 = (undefined8 *)(**(code **)*pIVar39)(pIVar39,local_3d8);
      local_430 = (TReferenceControllerBase<1> *)puVar28[1];
      local_4f0 = (SWidget *)*puVar28;
      if (local_430 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_430->SharedReferenceCount = (atomic<int>)((int)local_430->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar28 = &local_438;
    }
    local_4e8 = (TReferenceControllerBase<1> *)puVar28[1];
    puVar28[1] = 0;
    *puVar28 = 0;
    if (bVar48) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_440)
      ;
    }
    if (bVar17) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_430)
      ;
    }
    if (bVar10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3d0)
      ;
    }
    uVar18 = local_3a0.Widgets.Array.ArrayNum - 1;
    if (-1 < (int)uVar18) {
      lVar40 = (longlong)(int)uVar18 * 0x48;
      do {
        uVar21 = 0;
        if ((int)uVar18 < local_3a0.Widgets.Array.ArrayNum) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar33 = (ForElementType<FArrangedWidget>)&local_3a0.Widgets.Array;
        if (local_3a0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar33 = local_3a0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        plVar3 = *(longlong **)
                  ((longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar33 + 0x38))->Object + lVar40)
        ;
        cVar15 = (**(code **)(*plVar3 + 0xa8))(plVar3,&local_4f0);
        pIVar39 = local_708;
        if (cVar15 != '\0') {
          local_4f8.ReferenceController =
               *(TReferenceControllerBase<1> **)
                ((longlong)&((FSharedReferencer<1> *)((longlong)FVar33 + 0x40))->ReferenceController
                + lVar40);
          local_6e8 = *(SWidget **)
                       ((longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar33 + 0x38))->Object +
                       lVar40);
          if (local_4f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_4f8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_4f8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_500 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_6e0,&local_4f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_4f8.ReferenceController);
          break;
        }
        lVar40 = lVar40 + -0x48;
        uVar18 = uVar18 - 1;
      } while (-1 < (int)uVar18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4e8);
  }
LAB_142792cde:
  bVar48 = false;
  if ((bVar14) && (bVar17 = FWidgetPath::IsValid(&local_3a0), this_00 = local_538, bVar17)) {
    FMenuStack::FindMenuInWidgetPath(local_538,&local_4c8,&local_3a0);
    if (local_4c8.Object != (IMenu *)0x0) {
      local_668.Left = ___xmm_bf800000bf800000bf800000bf800000;
      local_668.Top = _UNK_15076c664;
      local_668.Right = _UNK_15076c668;
      local_668.Bottom = _UNK_15076c66c;
      if ((local_4c8.Object == (IMenu *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_4d8.Object = local_4c8.Object;
      local_4d8.SharedReferenceCount.ReferenceController =
           local_4c8.SharedReferenceCount.ReferenceController;
      if (local_4c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_4c8.Object == (IMenu *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar17 = FMenuStack::GetToolTipForceFieldRect(this_00,&local_4d8,&local_3a0,&local_668);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d8.SharedReferenceCount.ReferenceController);
      if (bVar17) {
        if (local_668.Top <= fVar50) {
          fVar50 = local_668.Top;
        }
        if (local_668.Left <= fVar55) {
          fVar55 = local_668.Left;
        }
        if (fVar56 <= local_668.Right) {
          fVar56 = local_668.Right;
        }
        if (fVar57 <= local_668.Bottom) {
          fVar57 = local_668.Bottom;
        }
        bVar14 = true;
        local_6d8._4_4_ = fVar51;
        local_6d8._0_4_ = fVar50;
        fStack_6d0 = fVar52;
        fStack_6cc = fVar53;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c8.SharedReferenceCount.ReferenceController);
  }
  local_720 = (TVector2<float>_u_0)
              *(TVector2<float>_u_0 *)&(this->ActiveTooltipInfo).DesiredLocation.field0_0x0._s_0;
  FVar42.ReferenceController = local_678.SharedReferenceCount.ReferenceController;
  if (((((!bVar16) && (pIVar46 != (IToolTip *)0x0)) &&
       ((this->ActiveTooltipInfo).WasInteractive != false)) &&
      (((this->TooltipWindowPtr).Object != (SWindow *)0x0 &&
       (pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController,
       pTVar6 != (TReferenceControllerBase<1> *)0x0)))) && (0 < (int)pTVar6->SharedReferenceCount))
  {
    local_678.SharedReferenceCount.ReferenceController =
         (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
    bVar48 = true;
    local_678.Object = (SWindow *)0x0;
    if (local_678.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar9 = (local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar9 == (atomic<int>)0x0) {
          local_678.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142792eb7;
        }
        LOCK();
        aVar22 = (local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar17 = aVar9 == aVar22;
        if (bVar17) {
          (local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar9 + 1);
          aVar22 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar22;
      } while (!bVar17);
      if (local_678.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        local_678.Object = (this->TooltipWindowPtr).Object;
      }
    }
LAB_142792eb7:
    FVar42.ReferenceController = local_678.SharedReferenceCount.ReferenceController;
    pSVar29 = TSharedPtr<SWindow,1>::operator->(&local_678);
    FVar30 = SWindow::GetDesiredSizeDesktopPixels(pSVar29);
    if ((*(float *)FVar30 == (this->ActiveTooltipInfo).DesiredSize.field0_0x0._s_0.X) &&
       (*(float *)((longlong)FVar30 + 4) == (this->ActiveTooltipInfo).DesiredSize.field0_0x0._s_0.Y)
       ) {
      pSVar47 = (SWidget *)&DAT_00000001;
    }
  }
  if (bVar48) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar42.ReferenceController);
  }
  if ((pIVar46 != (IToolTip *)0x0) &&
     (((cVar15 = (**(code **)((longlong)*pIVar46 + 0x28))(pIVar46), cVar15 == '\0' &&
       ((char)pSVar47 == '\0')) || ((this->ActiveTooltipInfo).HasBeenPositioned == false)))) {
    if (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x8 !=
        *(int *)&(this->PreviousPointerPositionsByIndex).field_0x34) {
      puVar34 = *(undefined1 **)&(this->PreviousPointerPositionsByIndex).field_0x40;
      if (puVar34 == (undefined1 *)0x0) {
        puVar34 = &(this->PreviousPointerPositionsByIndex).field_0x38;
      }
      iVar19 = *(int *)(puVar34 +
                       (ulonglong)
                       (*(int *)&(this->PreviousPointerPositionsByIndex).field_0x48 - 1U &
                       FSlateApplicationBase::CursorPointerIndex) * 4);
      if (iVar19 != -1) {
        do {
          lVar40 = *(longlong *)&this->PreviousPointerPositionsByIndex + (longlong)iVar19 * 0x14;
          if (*(uint *)(*(longlong *)&this->PreviousPointerPositionsByIndex +
                       (longlong)iVar19 * 0x14) == FSlateApplicationBase::CursorPointerIndex) {
            FVar30 = (FDeprecateSlateVector2D)(lVar40 + 4);
            if (lVar40 == 0) {
              FVar30 = (FDeprecateSlateVector2D)0x0;
            }
            if (FVar30 != (FDeprecateSlateVector2D)0x0) goto LAB_142792fc1;
            break;
          }
          iVar19 = *(int *)(lVar40 + 0xc);
        } while (iVar19 != -1);
      }
    }
    FVar30 = GetPointerPosition(this,(uint)local_3c8);
LAB_142792fc1:
    local_718._4_4_ = SlateDefs::TooltipOffsetFromMouse.field0_0x0._s_0.Y;
    local_718._0_4_ = SlateDefs::TooltipOffsetFromMouse.field0_0x0._s_0.X;
    uVar43 = *(undefined8 *)FVar30;
    (this->ActiveTooltipInfo).WasInteractive = false;
    (this->ActiveTooltipInfo).HasBeenPositioned = true;
    local_690._0_4_ = (float)uVar43;
    local_718._0_4_ = (float)(undefined4)local_718 + (float)local_690;
    local_690._4_4_ = (float)((ulonglong)uVar43 >> 0x20);
    local_718._4_4_ = (float)local_718._4_4_ + local_690._4_4_;
    local_720 = local_718;
    local_690 = uVar43;
    if ((pIVar46 == (IToolTip *)0x0) &&
       (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar48)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    cVar15 = (**(code **)((longlong)*pIVar46 + 0x28))(pIVar46);
    if ((cVar15 != '\0') && (local_6e8 == (SWidget *)0x0)) {
      local_5f8 = (double)(float)(undefined4)local_718;
      local_5f0 = (double)(float)local_718._4_4_;
      if ((pIVar46 == (IToolTip *)0x0) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar48)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)((longlong)*pIVar46 + 0x40))(pIVar46,&local_5f8);
      local_718._4_4_ = (float)local_5f0;
      local_718._0_4_ = (float)local_5f8;
      local_720 = local_718;
    }
  }
  local_710._0_4_ = 0.0;
  local_710._4_4_ = 0.0;
  local_710 = 0;
  uVar43 = local_710;
  pFVar23 = local_6f0;
  if ((((this->TooltipWindowPtr).Object != (SWindow *)0x0) &&
      (pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
    pSVar29 = (SWindow *)(this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
    pSVar45 = pSVar29;
    pSVar44 = (SWindow *)0x0;
    if (pSVar29 == (SWindow *)0x0) {
LAB_142793145:
      bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar29 = pSVar45;
      if (bVar48) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      aVar9 = *(atomic<int> *)&pSVar29->_padding_;
      do {
        pSVar45 = (SWindow *)0x0;
        pSVar44 = (SWindow *)0x0;
        if (aVar9 == (atomic<int>)0x0) goto LAB_142793145;
        LOCK();
        aVar22 = *(atomic<int> *)&pSVar29->_padding_;
        bVar48 = aVar9 == aVar22;
        if (bVar48) {
          *(atomic<int> *)&pSVar29->_padding_ = (atomic<int>)((int)aVar9 + 1);
          aVar22 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar22;
      } while (!bVar48);
      pSVar44 = (this->TooltipWindowPtr).Object;
      pSVar45 = pSVar29;
      if (pSVar44 == (SWindow *)0x0) goto LAB_142793145;
    }
    FVar30 = SWindow::GetDesiredSizeDesktopPixels(pSVar44);
    uVar43 = *(undefined8 *)FVar30;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar29);
    pFVar23 = local_6f0;
    local_4b8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_628 = (float)(undefined4)local_720;
    local_624 = (float)local_720._4_4_;
    local_620 = (float)(undefined4)local_720;
    local_61c = (float)local_720._4_4_;
    local_4b0 = uVar43;
    pTVar31 = (TVector2<float>_u_0 *)
              (**(code **)(*(longlong *)local_6f0 + 0x1d8))
                        (local_6f0,local_400,&local_628,&local_4b0);
    local_710._4_4_ = (float)((ulonglong)uVar43 >> 0x20);
    local_710._0_4_ = (float)uVar43;
    local_720 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&pTVar31->_s_0;
  }
  pSVar29 = (SWindow *)0x0;
  fVar50 = (float)(undefined4)local_720;
  fVar51 = (float)local_720._4_4_;
  if ((bVar14) && ((this->ActiveTooltipInfo).WasInteractive == false)) {
    fVar53 = (fVar56 + SlateDefs::TooltipOffsetFromForceField.field0_0x0._s_0.X) -
             (float)(undefined4)local_720;
    fVar52 = (fVar57 + SlateDefs::TooltipOffsetFromForceField.field0_0x0._s_0.Y) -
             (float)local_720._4_4_;
    if ((fVar53 != 0.0) || (fVar52 != 0.0)) {
      if ((this->ActiveTooltipInfo).OffsetDirection == Undetermined) {
        EVar36 = ((float)((uint)fVar53 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 (float)((uint)fVar52 & __xmm_7fffffff7fffffff7fffffff7fffffff)) + Down;
        if (EVar36 == Right) {
          local_4a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_608 = fVar53 + (float)(undefined4)local_720;
          local_604 = (float)local_720._4_4_;
          local_5fc = (float)local_720._4_4_;
          local_600 = local_608;
          local_4a0 = uVar43;
          puVar28 = (undefined8 *)
                    (**(code **)(*(longlong *)pFVar23 + 0x1d8))
                              (pFVar23,local_408,&local_608,&local_4a0);
          local_718._0_4_ = (undefined4)*puVar28;
          local_718._4_4_ = (undefined4)((ulonglong)*puVar28 >> 0x20);
          if (((fVar55 <= (float)(undefined4)local_718 + (float)local_710) &&
              ((float)(undefined4)local_718 <= fVar56)) &&
             (((float)local_6d8._0_4_ <= (float)local_718._4_4_ + local_710._4_4_ &&
              ((float)local_718._4_4_ <= fVar57)))) {
            EVar36 = Down;
LAB_1427933b4:
            local_498 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            local_614 = fVar52 + (float)local_720._4_4_;
            local_618 = (float)(undefined4)local_720;
            local_610 = (float)(undefined4)local_720;
            local_60c = local_614;
            local_588 = uVar43;
            puVar28 = (undefined8 *)
                      (**(code **)(*(longlong *)pFVar23 + 0x1d8))
                                (pFVar23,local_3f0,&local_618,&local_588);
            local_718._0_4_ = (undefined4)*puVar28;
            local_718._4_4_ = (undefined4)((ulonglong)*puVar28 >> 0x20);
            if ((((fVar55 <= (float)(undefined4)local_718 + (float)local_710) &&
                 ((float)(undefined4)local_718 <= fVar56)) &&
                ((float)local_6d8._0_4_ <= (float)local_718._4_4_ + local_710._4_4_)) &&
               ((float)local_718._4_4_ <= fVar57)) {
              EVar36 = Right;
            }
          }
        }
        else if (EVar36 == Down) goto LAB_1427933b4;
        (this->ActiveTooltipInfo).OffsetDirection = EVar36;
        if ((EVar36 == Undetermined) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ActiveTooltipInfo.OffsetDirection != ETooltipOffsetDirection::Undetermined"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\SlateUser.cpp"
                                ,0x593,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if ((this->ActiveTooltipInfo).OffsetDirection == Right) {
        local_720._0_4_ = (float)(undefined4)local_720 + fVar53;
        (this->ActiveTooltipInfo).OffsetDirection = Right;
        fVar50 = (float)(undefined4)local_720;
      }
      else {
        local_720._4_4_ = (float)local_720._4_4_ + fVar52;
        (this->ActiveTooltipInfo).OffsetDirection = Down;
        fVar51 = (float)local_720._4_4_;
      }
    }
  }
  (this->ActiveTooltipInfo).DesiredLocation.field0_0x0._s_0 = (TVector2<float>_u_0_s_0)local_720;
  FVar42.ReferenceController = local_6f8;
  if ((bVar16) &&
     ((pIVar39 != (IToolTip *)0x0 ||
      ((pIVar46 != (IToolTip *)0x0 &&
       (cVar15 = (**(code **)((longlong)*pIVar46 + 0x28))(pIVar46),
       FVar42.ReferenceController = local_6f8, cVar15 == '\0')))))) {
    CloseTooltip(this);
    FVar42.ReferenceController = local_6f8;
    if ((pIVar39 != (IToolTip *)0x0) && (bVar13)) {
      if (local_6e8 == (SWidget *)0x0) {
        local_580 = local_720;
        if ((pIVar39 == (IToolTip *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_428[0].Object = local_708;
        local_428[0].SharedReferenceCount.ReferenceController = FStack_700.ReferenceController;
        if (FStack_700.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_700.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_700.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pIVar39 == (IToolTip *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ShowTooltip(this,local_428,(FDeprecateVector2DParameter *)&local_580._s_0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_428[0].SharedReferenceCount.ReferenceController);
        pTVar11 = &(this->ActiveTooltipInfo).SourceWidget;
        (this->ActiveTooltipInfo).SourceWidget.Object = (SWidget *)local_688;
        pFVar35 = (FSharedReferencer<1> *)(local_688 + 8);
      }
      else {
        (this->ActiveTooltipInfo).TooltipVisualizer.Object = local_6e8;
        SharedPointerInternals::FWeakReferencer<1>::operator=
                  (&(this->ActiveTooltipInfo).TooltipVisualizer.WeakReferenceCount,&FStack_6e0);
        pTVar11 = (TWeakPtr<SWidget,1> *)&(this->ActiveTooltipInfo).Tooltip;
        (this->ActiveTooltipInfo).Tooltip.Object = pIVar39;
        pFVar35 = &FStack_700;
      }
      SharedPointerInternals::FWeakReferencer<1>::operator=(&pTVar11->WeakReferenceCount,pFVar35);
      FVar42.ReferenceController = FStack_700.ReferenceController;
      if (FStack_700.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_700.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_700.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_5d0);
      pIVar46 = pIVar39;
    }
  }
  if ((((this->TooltipWindowPtr).Object == (SWindow *)0x0) ||
      (pTVar6 = (this->TooltipWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar6 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar6->SharedReferenceCount < 1))
  goto LAB_14279393a;
  pFVar23 = FSlateApplication::Get();
  bVar13 = FSlateApplication::IsRunningAtTargetFrameRate(pFVar23);
  QueryPerformanceCounter(&local_578);
  fVar52 = __real_3f800000;
  pSVar44 = (SWindow *)(this->TooltipWindowPtr).WeakReferenceCount.ReferenceController;
  fVar53 = (float)((((double)local_578.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000) - (double)TooltipSummonDelay) -
                  (this->ActiveTooltipInfo).SummonTime) / TooltipIntroDuration;
  if (__real_3f800000 <= fVar53) {
    fVar53 = __real_3f800000;
  }
  if (fVar53 <= 0.0) {
    fVar53 = 0.0;
  }
  pSVar45 = pSVar44;
  if (pSVar44 == (SWindow *)0x0) {
LAB_142793765:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pSVar44 = pSVar45;
    if ((pSVar29 == (SWindow *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    aVar9 = *(atomic<int> *)&pSVar44->_padding_;
    do {
      pSVar45 = pSVar29;
      if (aVar9 == (atomic<int>)0x0) goto LAB_142793765;
      LOCK();
      aVar22 = *(atomic<int> *)&pSVar44->_padding_;
      bVar14 = aVar9 == aVar22;
      if (bVar14) {
        *(atomic<int> *)&pSVar44->_padding_ = (atomic<int>)((int)aVar9 + 1);
        aVar22 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar22;
    } while (!bVar14);
    pSVar29 = (this->TooltipWindowPtr).Object;
    pSVar45 = pSVar44;
    if (pSVar29 == (SWindow *)0x0) goto LAB_142793765;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SWindow::SetOpacity(pSVar29,fVar53);
  if (bVar13) {
    fVar52 = fVar52 - fVar53;
    fVar54 = fVar52 * fVar52 * fVar52;
  }
  fVar50 = fVar54 * __real_41f00000 + fVar50;
  fVar51 = fVar54 * __real_40a00000 + fVar51;
  FVar30 = SWindow::GetPositionInScreen(pSVar29);
  if (((fVar50 != *(float *)FVar30) || (fVar51 != *(float *)((longlong)FVar30 + 4))) ||
     ((FVar30 = SWidget::GetDesiredSize((SWidget *)pSVar29),
      (this->ActiveTooltipInfo).DesiredSize.field0_0x0._s_0.X != *(float *)FVar30 ||
      ((this->ActiveTooltipInfo).DesiredSize.field0_0x0._s_0.Y != *(float *)((longlong)FVar30 + 4)))
     )) {
    pcVar8 = *(code **)(*(longlong *)local_6f0 + 0x110);
    local_5c8 = fVar50;
    local_5c4 = fVar51;
    local_5c0 = fVar50;
    local_5bc = fVar51;
    if (pIVar46 != (IToolTip *)0x0) {
      (**(code **)((longlong)*pIVar46 + 0x28))(pIVar46);
    }
    FVar30 = SWindow::GetDesiredSizeDesktopPixels(pSVar29);
    local_570 = *(undefined8 *)FVar30;
    pFVar32 = (FDeprecateVector2DParameter *)(*pcVar8)(local_6f0,local_3b0,&local_5c8,&local_570);
    FVar7 = *pFVar32;
    FVar30 = SWidget::GetDesiredSize((SWidget *)pSVar29);
    (this->ActiveTooltipInfo).DesiredSize.field0_0x0 = *(TVector2<float>_u_0 *)FVar30;
    SWindow::SetCachedScreenPosition(pSVar29,FVar7);
    SWindow::MoveWindowTo(pSVar29,FVar7);
  }
  if ((pIVar46 != (IToolTip *)0x0) &&
     (cVar15 = (**(code **)((longlong)*pIVar46 + 0x28))(pIVar46), cVar15 != '\0')) {
    (this->ActiveTooltipInfo).WasInteractive = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar44);
LAB_14279393a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar42.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_6e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_680.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_700.ReferenceController);
  if (local_3a0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a0.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar33 = (ForElementType<FArrangedWidget>)&local_3a0.Widgets.Array;
  if (local_3a0.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar33 = local_3a0.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar33,local_3a0.Widgets.Array.ArrayNum);
  if (local_3a0.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_3a0.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  if ((local_6b0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_6b0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_6b0 & 4) != 0) {
    FThreadStats::AddMessage(local_6b8,CycleScopeEnd);
  }
  return;
}

// operator() @ 150493000

bool __thiscall `FSlateUser::SetPointerCaptor'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<378628854933094644>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x1e0))
              ((longlong *)**(undefined8 **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<378628854933094644>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049306e;
    }
  }
  bVar2 = false;
LAB_15049306e:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504930a0

bool __thiscall `FSlateUser::LockCursor'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<378628854933095286>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x1e0))
              ((longlong *)**(undefined8 **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<378628854933095286>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049310e;
    }
  }
  bVar2 = false;
LAB_15049310e:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150493140

bool __thiscall `FSlateUser::NotifyPointerReleased'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<378628854933095571>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<378628854933095571>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

