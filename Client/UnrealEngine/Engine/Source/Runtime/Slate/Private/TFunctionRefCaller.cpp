// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 51

// Call @ 1426b2fb0

TSharedPtr<IAsyncTaskNotificationImpl,1> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TSharedPtr<IAsyncTaskNotificationImpl,1>_(__cdecl*)(void),TSharedPtr<IAsyncTaskNotificationImpl,1>_>
::Call(TSharedPtr<IAsyncTaskNotificationImpl,1> *__return_storage_ptr__,void *param_1)

{
  (**(code **)param_1)();
  return __return_storage_ptr__;
}

// Call @ 1426b2fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::CloseAllWindowsImmediately'::__l2::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::ResetDragDropContent(param_2);
  FSlateUser::ResetTooltipWindow(param_2);
  return;
}

// Call @ 1426b3000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::FinishedInputThisFrame'::__l2::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTVar7;
  bool bVar8;
  atomic<int> aVar9;
  longlong lVar10;
  int iVar11;
  ForAnyElementType FVar12;
  TReferenceControllerBase<1> *pTVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  TSharedRef<SWidget,1> *pTVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTVar21;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 auStack_c8 [8];
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> TStack_c0;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTStack_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTStack_78;
  TMap<unsigned_int,FWeakWidgetPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FWeakWidgetPath,0>_>
  *pTStack_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  bVar8 = FSlateUser::HasAnyCapture(param_2);
  if (bVar8) {
    FSlateUser::GetCaptorWidgets(param_2,&TStack_c0);
    iVar3 = TStack_c0.ArrayNum;
    pTVar17 = (TSharedRef<SWidget,1> *)
              (TStack_c0.AllocatorInstance.Data + (longlong)TStack_c0.ArrayNum * 0x10);
    FVar12.Data = TStack_c0.AllocatorInstance.Data;
    while( true ) {
      if (TStack_c0.ArrayNum != iVar3) {
        `TCheckedPointerIterator<TSharedRef<SWidget,1>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStackX_18);
      }
      if ((TSharedRef<SWidget,1> *)FVar12.Data == pTVar17) break;
      (**(code **)(((TSharedRef<SWidget,1> *)FVar12.Data)->Object->_padding_ + 0x130))();
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<TSharedRef<SWidget,1>,int>
              ((TSharedRef<SWidget,1> *)TStack_c0.AllocatorInstance.Data,TStack_c0.ArrayNum);
    if ((TSharedRef<SWidget,1> *)TStack_c0.AllocatorInstance.Data != (TSharedRef<SWidget,1> *)0x0) {
      FMemory::Free(TStack_c0.AllocatorInstance.Data);
      return;
    }
  }
  else {
    iStack_a8 = 0;
    puVar1 = &(param_2->WidgetsUnderPointerLastEventByIndex).field_0x10;
    iVar3 = *(int *)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x28;
    pTVar21 = &param_2->WidgetsUnderPointerLastEventByIndex;
    iStack_90 = 0;
    uStack_a4 = 1;
    iStack_94 = 0;
    if (iVar3 != 0) {
      puVar20 = *(uint **)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        lVar10 = (longlong)iStack_a8;
        iStack_90 = iStack_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1426acbfe;
        uVar16 = puVar20[lVar10 + 1];
      }
      uStack_a4 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_a4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iStack_80 = (int)lVar10;
      iStack_94 = iStack_90 + -1 + iStack_80;
      if (iVar3 < iStack_94) {
        iStack_94 = iVar3;
      }
    }
LAB_1426acbfe:
    uVar16 = *(uint *)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x28;
    uVar14 = uVar16 & 0xffffffe0;
    iStack_88 = *(int *)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x8 -
                *(int *)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x34;
    uStack_98 = 0xffffffff;
    TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
    TStack_68.CurrentBitIndex = iStack_94;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar16 >> 5;
    TStack_68._28_4_ = iStack_94;
    TStack_68.BaseBitIndex = iStack_90;
    uStack_48 = CONCAT44(uStack_84,iStack_88);
    pTStack_b0 = pTVar21;
    puStack_a0 = puVar1;
    iStack_8c = iStack_94;
    pTStack_78 = pTVar21;
    pTStack_70 = pTVar21;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x28;
    if (uVar16 != uVar4) {
      puVar19 = *(undefined1 **)&(param_2->WidgetsUnderPointerLastEventByIndex).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar11 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar11;
        uVar14 = uVar14 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1426acd00;
        uVar16 = *(uint *)(puVar19 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (int)lVar10 + -1 + uVar14;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_1426acd00:
    while( true ) {
      pTVar7 = pTStack_70;
      if (*(int *)&pTStack_70->field_0x8 - *(int *)&pTStack_70->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FWeakWidgetPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      if (((TStack_68.CurrentBitIndex == uVar16) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == pTVar21)) break;
      lVar10 = (longlong)TStack_68.CurrentBitIndex * 0x30 + *(longlong *)pTVar7;
      iVar3 = *(int *)(lVar10 + 0x10);
      plVar18 = *(longlong **)(lVar10 + 8);
      plVar15 = plVar18 + (longlong)iVar3 * 2;
      while( true ) {
        if (*(int *)(lVar10 + 0x10) != iVar3) {
          `TCheckedPointerIterator<TWeakPtr<SWidget,1>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStack_c8);
        }
        if (plVar18 == plVar15) goto LAB_1426acd8c;
        pTVar13 = (TReferenceControllerBase<1> *)plVar18[1];
        if (pTVar13 == (TReferenceControllerBase<1> *)0x0) break;
        aVar6 = pTVar13->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1426acd84;
          }
          LOCK();
          aVar9 = pTVar13->SharedReferenceCount;
          bVar8 = aVar6 == aVar9;
          if (bVar8) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar8);
        if ((longlong *)*plVar18 == (longlong *)0x0) break;
        (**(code **)(*(longlong *)*plVar18 + 0x130))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        plVar18 = plVar18 + 2;
      }
LAB_1426acd84:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_1426acd8c:
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      pTVar21 = pTStack_78;
    }
  }
  return;
}

// Call @ 1426b3010

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::ForEachUser'::__l2::<lambda_1>,void,FSlateUser_&>::Call
          (void *param_1,FSlateUser *param_2)

{
  FSlateUser *local_res8 [4];
  
  local_res8[0] = param_2;
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],local_res8);
  return;
}

// Call @ 1426b3040

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleAnalogInputEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b3050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x20))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b3060

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleKeyDownEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b3070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x10))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b3080

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleKeyUpEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x18))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b30a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleMotionDetectedEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x50))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b30c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleMouseButtonDoubleClickEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b30d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x40))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b30e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleMouseButtonDownEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x30))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b3100

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleMouseButtonUpEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b3110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x38))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b3120

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleMouseMoveEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b3130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x28))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8));
  return (bool)uVar1;
}

// Call @ 1426b3140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::InputPreProcessorsHelper::HandleMouseWheelOrGestureEvent'::__l2::<lambda_1>,bool,IInputProcessor_&>
::Call(void *param_1,IInputProcessor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001426b3157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_2 + 0x48))
                    (param_2,*(undefined8 *)param_1,*(undefined8 *)((longlong)param_1 + 8),
                     **(undefined8 **)((longlong)param_1 + 0x10));
  return (bool)uVar1;
}

// Call @ 1426b3170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::ReleaseAllPointerCapture'::__l2::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::ReleaseAllCapture(param_2);
  return;
}

// Call @ 1426b3180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::RequestDestroyWindow'::__l2::<lambda_1>,void,FSlateUser_&>::
Call(void *param_1,FSlateUser *param_2)

{
  TSharedRef<SWindow,1> local_18;
  
  local_18.Object = (SWindow *)**(undefined8 **)param_1;
  local_18.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)param_1)[1];
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateUser::NotifyWindowDestroyed(param_2,&local_18);
  return;
}

// Call @ 1426b31c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::ResetToDefaultPointerInputSettings'::__l2::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSlateApplication *this;
  TReferenceControllerBase<1> *pTVar3;
  ICursor *pIVar4;
  code *pcVar5;
  int iVar6;
  FWeakReferencer<1> FVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  FWidgetPath *pFVar10;
  undefined1 auStackX_10 [8];
  TArray<FWidgetPath,TSizedDefaultAllocator<32>_> TStack_f8;
  FReply FStack_e8;
  
  FSlateUser::GetCaptorPaths(param_2,&TStack_f8);
  iVar6 = TStack_f8.ArrayNum;
  pFVar10 = (FWidgetPath *)(TStack_f8.AllocatorInstance.Data + (longlong)TStack_f8.ArrayNum * 0x160)
  ;
  FVar9.Data = TStack_f8.AllocatorInstance.Data;
  while( true ) {
    if (TStack_f8.ArrayNum != iVar6) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<FWidgetPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if ((FWidgetPath *)FVar9.Data == pFVar10) break;
    this = *(FSlateApplication **)param_1;
    FReply::FReply(&FStack_e8,true);
    FVar7.ReferenceController = FStack_e8.MouseCaptor.WeakReferenceCount.ReferenceController;
    FStack_e8.MouseCaptor.Object = (SWidget *)0x0;
    FStack_e8.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar7.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar7.ReferenceController)->_padding_ + 8))(FVar7.ReferenceController,1);
      }
    }
    FStack_e8.bUseHighPrecisionMouse = 0;
    FStack_e8.bReleaseMouseCapture = 1;
    FSlateApplication::ProcessReply
              (this,(FWidgetPath *)FVar9.Data,&FStack_e8,(FWidgetPath *)0x0,(FPointerEvent *)0x0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_e8.DragDropContent.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_e8.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController);
    if (FStack_e8.NavigationDestination.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_e8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FStack_e8.NavigationDestination.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (FStack_e8.NavigationDestination.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (FStack_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FStack_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (FStack_e8.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (FStack_e8.MouseLockWidget.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_e8.MouseLockWidget.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FStack_e8.MouseLockWidget.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(FStack_e8.MouseLockWidget.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (FStack_e8.FocusRecipient.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_e8.FocusRecipient.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FStack_e8.FocusRecipient.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(FStack_e8.FocusRecipient.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (FStack_e8.MouseCaptor.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_e8.MouseCaptor.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FStack_e8.MouseCaptor.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (FStack_e8.MouseCaptor.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (FStack_e8.EventHandler.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FStack_e8.EventHandler.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FStack_e8.EventHandler.WeakReferenceCount.ReferenceController)->_padding_ + 8)
        )(FStack_e8.EventHandler.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_e8._padding_);
    FVar9.Data = FVar9.Data + 0x160;
  }
  DestructItems<FWidgetPath,int>((FWidgetPath *)TStack_f8.AllocatorInstance.Data,TStack_f8.ArrayNum)
  ;
  if ((FWidgetPath *)TStack_f8.AllocatorInstance.Data != (FWidgetPath *)0x0) {
    FMemory::Free(TStack_f8.AllocatorInstance.Data);
  }
  pTVar3 = (param_2->Cursor).SharedReferenceCount.ReferenceController;
  pIVar4 = (param_2->Cursor).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar4 == (ICursor *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 1426b31d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::SetAllUserFocus'::__l2::<lambda_1>,void,FSlateUser_&>::Call
          (void *param_1,FSlateUser *param_2)

{
  FSlateApplication::SetUserFocus
            (*(FSlateApplication **)param_1,param_2,*(FWidgetPath **)((longlong)param_1 + 8),
             **(EFocusCause **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1426b31f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::SetAllUserFocusAllowingDescendantFocus'::__l2::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  bool bVar1;
  
  bVar1 = FWeakWidgetPath::ContainsWidget
                    (&param_2->WeakFocusPath,(SWidget *)**(undefined8 **)param_1);
  if (!bVar1) {
    FSlateApplication::SetUserFocus
              (*(FSlateApplication **)((longlong)param_1 + 8),param_2,
               *(FWidgetPath **)((longlong)param_1 + 0x10),
               **(EFocusCause **)((longlong)param_1 + 0x18));
  }
  return;
}

// Call @ 1426b3240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::ExternalModalStart'::__l5::<lambda_1>,void,FSlateUser_&>::
Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::CloseTooltip(param_2);
  return;
}

// Call @ 1426b3250

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::ProcessApplicationActivationEvent'::__l8::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::CloseTooltip(param_2);
  return;
}

// Call @ 1426b3260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::TickAndDrawWidgets'::__l17::<lambda_1>,void,FSlateUser_&>::
Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::QueueSyntheticCursorMove(param_2);
  return;
}

// Call @ 1426b3270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::TickPlatform'::__l14::<lambda_1>,void,FSlateUser_&>::Call
          (void *param_1,FSlateUser *param_2)

{
  FSlateUser::UpdateCursor(param_2);
  FSlateUser::UpdateTooltip
            (param_2,(FMenuStack *)(*(longlong *)param_1 + 0x250),*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 1426b32b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::DrawWindowAndChildren'::__l15::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::DrawWindowlessDragDropContent
            (param_2,*(TSharedRef<SWindow,1> **)param_1,
             *(FSlateWindowElementList **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1426b32d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::AddModalWindow'::__l2::<lambda_2>,void,FSlateUser_&>::Call
          (void *param_1,FSlateUser *param_2)

{
  FSlateUser::CloseTooltip(param_2);
  return;
}

// Call @ 1426b32e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::FinishedInputThisFrame'::__l2::<lambda_2>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 auStackX_10 [8];
  
  iVar1 = (param_2->WeakFocusPath).Widgets.ArrayNum;
  pFVar6 = (param_2->WeakFocusPath).Widgets.AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_2->WeakFocusPath).Widgets.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TWeakPtr<SWidget,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_10);
    }
    if (pFVar6 == pFVar5) {
      return;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) break;
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1426ad830;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    if (*(longlong **)pFVar6 == (longlong *)0x0) break;
    (**(code **)(**(longlong **)pFVar6 + 0x138))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar6 = pFVar6 + 0x10;
  }
LAB_1426ad830:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 1426b32f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::ProcessApplicationActivationEvent'::__l8::<lambda_2>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uStackX_1c;
  
  bVar5 = false;
  bVar3 = FSlateUser::IsDragDropping(param_2);
  if (bVar3) {
    pTVar6 = (param_2->DragDropContent).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->DragDropContent).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FDragDropOperation *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar5 = true;
    cVar4 = (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_1426ad905;
    }
  }
  else {
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_1c << 0x20);
  }
  bVar3 = false;
LAB_1426ad905:
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    FSlateUser::CancelDragDrop(param_2);
    return;
  }
  return;
}

// Call @ 1426b3300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::TickPlatform'::__l14::<lambda_2>,void,FSlateUser_&>::Call
          (void *param_1,FSlateUser *param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = **(byte **)param_1;
  bVar2 = FSlateUser::SynthesizeCursorMoveIfNeeded(param_2);
  **(byte **)param_1 = bVar2 | bVar1;
  return;
}

// Call @ 1426b3340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::DrawWindowAndChildren'::__l15::<lambda_2>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::DrawCursor
            (param_2,*(TSharedRef<SWindow,1> **)param_1,
             *(FSlateWindowElementList **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1426b3360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::FinishedInputThisFrame'::__l2::<lambda_3>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  FSlateUser::FinishFrame(param_2);
  return;
}

// Call @ 1426b3370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSlateApplication::TickPlatform'::__l14::<lambda_3>,void,FSlateUser_&>::Call
          (void *param_1,FSlateUser *param_2)

{
  char *pcVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  byte *pbVar6;
  bool *pbVar7;
  longlong lVar8;
  LARGE_INTEGER LStackX_8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)param_1;
  if ((*(int *)(lVar2 + 0x5f8) < 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pbVar6 = *(byte **)(lVar2 + 0x5f0);
  if (*(byte **)(lVar2 + 0x5f0) == (byte *)0x0) {
    pbVar6 = (byte *)(lVar2 + 0x5e0);
  }
  if ((*pbVar6 & 0x20) != 0) {
    QueryPerformanceCounter(&LStackX_8);
    pbVar7 = &(param_2->GestureDetector).LongPressTrack[0].Time.bIsSet;
    lVar8 = 0xb;
    dVar4 = (double)LStackX_8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    do {
      if ((*pbVar7 != false) &&
         (FGestureDetector::LongPressSeconds <=
          dVar4 - ((TOptional<double> *)(pbVar7 + -8))->TypedValue)) {
        uStack_38 = 0;
        uStack_30 = 0;
        (**(code **)(*(longlong *)(lVar2 + 0x198) + 0xb0))
                  ((longlong *)(lVar2 + 0x198),5,&uStack_38,0,0);
        if (*pbVar7 != false) {
          *pbVar7 = false;
        }
        pcVar1 = pbVar7 + 8;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1 = pbVar7 + 0x10;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
      }
      pbVar7 = pbVar7 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// Call @ 14270f4a0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SDockingArea::Construct'::__l2::<lambda_1>,EVisibility>::Call(void *param_1)

{
  int iVar1;
  undefined8 *in_RDX;
  EVisibility EVar2;
  
  iVar1 = (**(code **)(*(longlong *)*in_RDX + 0x270))();
  EVar2 = EVisibility::Collapsed;
  if (iVar1 == 0) {
    EVar2 = EVisibility::Visible;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar2.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 14270f4e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTabManager::HasAnyTabWithTabId'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
::Call(void *param_1,FTab *param_2)

{
  FTabManager *this;
  bool bVar1;
  TSharedRef<FTabSpawnerEntry,1> *pTVar2;
  
  this = *(FTabManager **)param_1;
  bVar1 = FTabManager::IsAllowedTab(this,&param_2->TabId);
  if (bVar1) {
    pTVar2 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this->NomadTabSpawner).Object,(param_2->TabId).TabType);
    if (((pTVar2 != (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
        (bVar1 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar2->Object), bVar1)) &&
       (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &pTVar2->Object->OnFindTabToReuse), !bVar1)) {
      return false;
    }
    if ((param_2->TabId).TabType == *(FName *)((longlong)param_1 + 8)) {
      return true;
    }
  }
  return false;
}

// Call @ 14270f4f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTabManager::HasValidOpenTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>
::Call(void *param_1,FTab *param_2)

{
  FTabManager *this;
  bool bVar1;
  TSharedRef<FTabSpawnerEntry,1> *pTVar2;
  
  this = *(FTabManager **)param_1;
  bVar1 = FTabManager::IsAllowedTab(this,&param_2->TabId);
  if (bVar1) {
    pTVar2 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
             ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                     *)(this->NomadTabSpawner).Object,(param_2->TabId).TabType);
    if (((pTVar2 != (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
        (bVar1 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar2->Object), bVar1)) &&
       (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &pTVar2->Object->OnFindTabToReuse), !bVar1)) {
      return false;
    }
    if (param_2->TabState == OpenedTab) {
      return true;
    }
  }
  return false;
}

// Call @ 14270f570

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTabManager::HasValidTabs'::__l2::<lambda_1>,bool,FTabManager::FTab_const_&>::
Call(void *param_1,FTab *param_2)

{
  FTabManager *this;
  bool bVar1;
  TSharedRef<FTabSpawnerEntry,1> *pTVar2;
  
  this = *(FTabManager **)param_1;
  bVar1 = FTabManager::IsAllowedTab(this,&param_2->TabId);
  if (!bVar1) {
    return false;
  }
  pTVar2 = TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
           ::Find((TMapBase<FName,TSharedRef<FTabSpawnerEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FTabSpawnerEntry,1>,0>_>
                   *)(this->NomadTabSpawner).Object,(param_2->TabId).TabType);
  if (((pTVar2 != (TSharedRef<FTabSpawnerEntry,1> *)0x0) &&
      (bVar1 = FTabSpawnerEntry::IsSoleTabInstanceSpawned(pTVar2->Object), bVar1)) &&
     (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &pTVar2->Object->OnFindTabToReuse), !bVar1)) {
    return false;
  }
  return true;
}

// Call @ 1427ec7d0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  EVisibility EVar1;
  bool *pbVar2;
  undefined1 *in_RDX;
  
  pbVar2 = TAttribute<bool>::Get(&FMultiBoxSettings::UseSmallToolBarIcons);
  EVar1.Value.Value = SUB81(param_1,0);
  if (*pbVar2 != false) {
    *(TEnumAsByte<EVisibility::Private> *)param_1 = EVisibility::Collapsed.Value.Value;
    return (EVisibility)EVar1.Value.Value;
  }
  if (in_RDX[1] != '\0') {
    *(undefined1 *)param_1 = *in_RDX;
    return (EVisibility)EVar1.Value.Value;
  }
  *(undefined1 *)param_1 = *(undefined1 *)(*(longlong *)(in_RDX + 8) + 0x39);
  return (EVisibility)EVar1.Value.Value;
}

// Call @ 1427ec840

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  void *in_RDX;
  
  `SToolBarButtonBlock::BuildMultiBlockWidget'::__l2::<lambda_1>::operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 1427ec870

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  void *in_RDX;
  
  `SClippingVerticalBox::InitializeWrapButton'::__l2::<lambda_1>::operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 1427ec8a0

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  void *in_RDX;
  
  `SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>::operator()(in_RDX);
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 1427ec8d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,bool>::Call(void *param_1)

{
  return (bool)*(undefined1 *)(*(longlong *)param_1 + 0x3a);
}

// Call @ 1427ec8e0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SMultiBoxWidget::BuildMultiBoxWidget'::__l25::<lambda_2>,int>::Call
          (void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x2b8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*(longlong *)(lVar1 + 0x2b8) + 0x94);
}

// Call @ 1428da730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SConstraintCanvas::AddSlot'::__l2::<lambda_1>,void,SConstraintCanvas::FSlot_const_*,int>
::Call(void *param_1,FSlot **param_2,int *param_3)

{
  `SConstraintCanvas::AddSlot'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1428da750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SGridPanel::AddSlot'::__l2::<lambda_1>,void,SGridPanel::FSlot_const_*,int>::Call
          (void *param_1,FSlot **param_2,int *param_3)

{
  `SGridPanel::AddSlot'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1428da770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SRadialBox::ComputeDesiredSize'::__l2::<lambda_1>,void,SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&>
::Call(void *param_1,FSlot *param_2,FArrangementData *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_3->SlotSize).field0_0x0._s_0.X + (param_3->SlotOffset).field0_0x0._s_0.X;
  dVar1 = **(double **)param_1;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  **(double **)param_1 = dVar2;
  dVar2 = (param_3->SlotSize).field0_0x0._s_0.Y + (param_3->SlotOffset).field0_0x0._s_0.Y;
  dVar1 = *(double *)(*(longlong *)param_1 + 8);
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)(*(longlong *)param_1 + 8) = dVar2;
  return;
}

// Call @ 1428da7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SRadialBox::OnArrangeChildren'::__l2::<lambda_1>,void,SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&>
::Call(void *param_1,FSlot *param_2,FArrangementData *param_3)

{
  FArrangedChildren *this;
  undefined1 auStackY_b8 [32];
  float fStack_88;
  float fStack_84;
  FSlateLayoutTransform aFStack_80 [2];
  FArrangedWidget FStack_68;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  this = *(FArrangedChildren **)param_1;
  aFStack_80[0].Scale = 1.0;
  fStack_84 = (float)(param_3->SlotSize).field0_0x0._s_0.Y;
  fStack_88 = (float)(param_3->SlotSize).field0_0x0._s_0.X;
  aFStack_80[0].Translation.field0_0x0._0_4_ = (undefined4)(param_3->SlotOffset).field0_0x0._s_0.X;
  aFStack_80[0].Translation.field0_0x0._4_4_ = (undefined4)(param_3->SlotOffset).field0_0x0._s_0.Y;
  FGeometry::MakeChild
            (*(FGeometry **)((longlong)param_1 + 8),&FStack_68,
             (TSharedRef<SWidget,1> *)&param_2->field_0x10,(FDeprecateVector2DParameter *)&fStack_88
             ,aFStack_80);
  FArrangedChildren::AddWidget(this,&FStack_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_68.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 1428da7c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SScrollBox::ScrollDescendantIntoView'::__l2::<lambda_1>,void,FGeometry>::Call
          (void *param_1,FGeometry *param_2)

{
  FGeometry local_48;
  
  local_48.Size = param_2->Size;
  local_48._8_8_ = *(undefined8 *)&param_2->Scale;
  local_48._16_8_ = *(undefined8 *)((longlong)&(param_2->AbsolutePosition).field0_0x0 + 4);
  local_48._24_8_ = *(undefined8 *)((longlong)&(param_2->Position).field0_0x0 + 4);
  local_48.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
  local_48.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
  local_48._48_8_ =
       *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  SScrollBox::InternalScrollDescendantIntoView
            (*(SScrollBox **)param_1,&local_48,(TSharedPtr<SWidget,1> *)((longlong)param_1 + 8),
             *(bool *)((longlong)param_1 + 0x18),
             *(EDescendantScrollDestination *)((longlong)param_1 + 0x19),
             *(float *)((longlong)param_1 + 0x1c));
  return;
}

// Call @ 1428da820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SComboBox<TSharedPtr<FString,1>_>::OnMenuOpenChanged'::__l5::<lambda_1>,void,FSlateUser_&>
::Call(void *param_1,FSlateUser *param_2)

{
  bool bVar1;
  TSharedPtr<SWidget_const_,1> TStack_28;
  TSharedRef<SWidget,1> TStack_18;
  
  TSharedFromThis<SWidget,1>::AsShared
            ((TSharedFromThis<SWidget,1> *)(*(longlong *)param_1 + 8),&TStack_18);
  TStack_28.Object = *(SWidget **)(*(longlong *)param_1 + 0x468);
  TStack_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x470);
  if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = FSlateUser::IsWidgetInFocusPath(param_2,&TStack_28);
  if (bVar1) {
    FSlateUser::SetFocus(param_2,&TStack_18,SetDirectly);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 1429cca20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SWrapBox::ComputeDesiredSize'::__l2::<lambda_1>,void,SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&>
::Call(void *param_1,FSlot *param_2,FArrangementData *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_3->SlotSize).field0_0x0._s_0.X + (param_3->SlotOffset).field0_0x0._s_0.X;
  dVar1 = **(double **)param_1;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  **(double **)param_1 = dVar2;
  dVar2 = (param_3->SlotSize).field0_0x0._s_0.Y + (param_3->SlotOffset).field0_0x0._s_0.Y;
  dVar1 = *(double *)(*(longlong *)param_1 + 8);
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)(*(longlong *)param_1 + 8) = dVar2;
  return;
}

// Call @ 1429cca60

EVisibility __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SNotificationItemImpl::ConstructInternals'::__l2::<lambda_1>,EVisibility>::Call
          (void *param_1)

{
  bool bVar1;
  FText *this;
  longlong *in_RDX;
  EVisibility EVar2;
  
  this = TAttribute<FText>::Get((TAttribute<FText> *)(*in_RDX + 0x2e8));
  bVar1 = FText::IsEmpty(this);
  EVar2 = EVisibility::SelfHitTestInvisible;
  if (bVar1) {
    EVar2 = EVisibility::Collapsed;
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar2.Value.Value;
  return (EVisibility)SUB81(param_1,0);
}

// Call @ 1429ccab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SWrapBox::OnArrangeChildren'::__l2::<lambda_1>,void,SWrapBox::FSlot_const_&,SWrapBox::FChildArranger::FArrangementData_const_&>
::Call(void *param_1,FSlot *param_2,FArrangementData *param_3)

{
  int iVar1;
  FArrangedChildren *this;
  undefined1 auVar2 [8];
  TVector2<double>_u_0_s_0 TVar3;
  FDeprecateSlateVector2D FVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStackY_148 [32];
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  double dStack_108;
  FArrangedWidget FStack_f8;
  ulonglong uStack_a8;
  
  uStack_a8 = __security_cookie.value ^ (ulonglong)auStackY_148;
  _auStack_110 = (param_3->SlotSize).field0_0x0._s_0;
  fVar12 = 0.0;
  if (*(int *)(*(longlong *)param_1 + 0x264) == 0) {
    if (param_3->ChildIndexRelativeToLine == 0) {
      **(undefined4 **)((longlong)param_1 + 8) = 0;
    }
    iVar1 = **(int **)((longlong)param_1 + 0x10);
    if (iVar1 == 0) {
      fVar7 = 0.0;
      auVar2 = auStack_110;
      fVar12 = param_3->WidthOfCurrentLine - param_3->TotalLinePadding;
      if (__real_322bcc77 < (float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        uStack_118 = **(FDeprecateVector2DParameter **)((longlong)param_1 + 0x18);
        fVar7 = (float)((double)((float)uStack_118 - param_3->TotalLinePadding) *
                       ((double)auStack_110 / (double)fVar12));
      }
      auStack_110 = (undefined1  [8])(double)fVar7;
      fVar12 = (float)((double)fVar7 - (double)auVar2);
    }
    else if (iVar1 == 2) {
      uStack_118 = **(FDeprecateVector2DParameter **)((longlong)param_1 + 0x18);
      auVar5 = roundps((undefined1  [16])_auStack_110,
                       ZEXT416((uint)(((float)uStack_118 - param_3->WidthOfCurrentLine) *
                                     __real_3f000000)),1);
      **(undefined4 **)((longlong)param_1 + 8) = auVar5._0_4_;
    }
    else if (iVar1 == 3) {
      uStack_118 = **(FDeprecateVector2DParameter **)((longlong)param_1 + 0x18);
      auVar5 = ZEXT416((uint)((float)uStack_118 - param_3->WidthOfCurrentLine));
      auVar5 = roundps(auVar5,auVar5,1);
      **(undefined4 **)((longlong)param_1 + 8) = auVar5._0_4_;
    }
  }
  fVar7 = *(float *)&param_2->_padding_;
  fVar8 = *(float *)&param_2->_padding_;
  iVar1 = (int)param_2->_padding_;
  fVar6 = (float)(double)auStack_110;
  fVar10 = fVar6 - (fVar8 + fVar7);
  if (iVar1 == 0) {
LAB_1429c1225:
    fVar11 = fVar10;
    if (fVar10 <= 0.0) {
      fVar11 = 0.0;
    }
  }
  else {
    FVar4 = SWidget::GetDesiredSize((SWidget *)param_2->_padding_);
    fVar11 = fVar10;
    if (*(float *)FVar4 <= fVar10) {
      fVar11 = *(float *)FVar4;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar7 = ((fVar6 - fVar11) * __real_3f000000 + fVar7) - fVar8;
      }
      else {
        if (iVar1 != 3) goto LAB_1429c1225;
        fVar7 = (fVar6 - fVar11) - fVar8;
      }
    }
  }
  fVar8 = *(float *)((longlong)&param_2->_padding_ + 4);
  fVar6 = *(float *)((longlong)&param_2->_padding_ + 4);
  iVar1 = *(int *)((longlong)&param_2->_padding_ + 4);
  fVar10 = (float)dStack_108;
  fVar9 = fVar10 - (fVar6 + fVar8);
  if (iVar1 != 0) {
    FVar4 = SWidget::GetDesiredSize((SWidget *)param_2->_padding_);
    uStack_118._4_4_ = *(float *)((longlong)FVar4 + 4);
    if (fVar9 <= *(float *)((longlong)FVar4 + 4)) {
      uStack_118._4_4_ = fVar9;
    }
    if (uStack_118._4_4_ <= 0.0) {
      uStack_118._4_4_ = 0.0;
    }
    if (iVar1 == 1) goto LAB_1429c12bf;
    if (iVar1 == 2) {
      fVar8 = ((fVar10 - uStack_118._4_4_) * __real_3f000000 + fVar8) - fVar6;
      goto LAB_1429c12bf;
    }
    if (iVar1 == 3) {
      fVar8 = (fVar10 - uStack_118._4_4_) - fVar6;
      goto LAB_1429c12bf;
    }
  }
  uStack_118._4_4_ = fVar9;
  if (fVar9 <= 0.0) {
    uStack_118._4_4_ = 0.0;
  }
LAB_1429c12bf:
  TVar3 = _auStack_110;
  this = *(FArrangedChildren **)((longlong)param_1 + 0x20);
  uStack_118._0_4_ = fVar11;
  auStack_110._4_4_ =
       (float)((double)fVar7 + (param_3->SlotOffset).field0_0x0._s_0.X +
              (double)**(float **)((longlong)param_1 + 8));
  auStack_110._0_4_ = 1.0;
  dStack_108._4_4_ = TVar3.Y._4_4_;
  dStack_108._0_4_ = (float)((double)fVar8 + (param_3->SlotOffset).field0_0x0._s_0.Y);
  FGeometry::MakeChild
            (*(FGeometry **)((longlong)param_1 + 0x18),&FStack_f8,
             (TSharedRef<SWidget,1> *)&param_2->_padding_,(FDeprecateVector2DParameter *)&uStack_118
             ,(FSlateLayoutTransform *)auStack_110);
  FArrangedChildren::AddWidget(this,&FStack_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_f8.Widget.SharedReferenceCount.ReferenceController);
  **(float **)((longlong)param_1 + 8) = fVar12 + **(float **)((longlong)param_1 + 8);
  return;
}

// Call @ 1429ccac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,void,FBasicLayoutWidgetSlot_const_*,int>
::Call(void *param_1,FBasicLayoutWidgetSlot **param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  iVar1 = *param_3;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429ccaf0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    plVar2 = *(longlong **)param_1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x248))(plVar2,iVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return;
    }
  }
LAB_1429ccaf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Call @ 1429ccb30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,void,FBasicLayoutWidgetSlot_const_*,int>
::Call(void *param_1,FBasicLayoutWidgetSlot **param_2,int *param_3)

{
  `SWidgetSwitcher::AddSlot'::__l7::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

