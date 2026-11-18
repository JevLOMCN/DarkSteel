// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// ArrangeWindowToFront @ 142433990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateWindowHelper::ArrangeWindowToFront
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWindow,1> *param_2)

{
  TSharedRef<SWindow,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_>::Remove(param_1,param_2);
  if ((param_1->ArrayNum == 0) || (bVar3 = SWindow::IsTopmostWindow(param_2->Object), bVar3)) {
    pTVar1 = (TSharedRef<SWindow,1> *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= param_2) && (param_2 < pTVar1 + param_1->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar9 = &param_1->ArrayNum;
    iVar5 = *piVar9;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      *piVar9 = iVar5;
    }
    *piVar9 = iVar5 + 1;
    pFVar7 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(SWindow **)pFVar7 = param_2->Object;
    pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar6;
  }
  else {
    uVar10 = param_1->ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar8 = (longlong)(int)uVar10 << 4;
      do {
        uVar4 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = SWindow::IsTopmostWindow(*(SWindow **)((param_1->AllocatorInstance).Data + lVar8));
        if (!bVar3) {
          bVar3 = SWindow::IsRegularWindow(param_2->Object);
          if (!bVar3) break;
          uVar4 = 0;
          if ((int)uVar10 < param_1->ArrayNum) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar3 = SWindow::IsRegularWindow(*(SWindow **)((param_1->AllocatorInstance).Data + lVar8))
          ;
          if (bVar3) break;
        }
        lVar8 = lVar8 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    pTVar1 = (TSharedRef<SWindow,1> *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= param_2) && (param_2 < pTVar1 + param_1->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = iVar5 + 1;
    lVar8 = ((longlong)(int)uVar10 + 1) * 0x10;
    pFVar7 = pFVar7 + lVar8;
    memmove(pFVar7 + 0x10,pFVar7,(longlong)(int)((iVar5 - uVar10) + -1) << 4);
    pFVar7 = (param_1->AllocatorInstance).Data;
    *(SWindow **)(pFVar7 + lVar8) = param_2->Object;
    pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar7 + lVar8 + 8) = pTVar6;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// BringToFrontInParent @ 142433d60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
FSlateWindowHelper::BringToFrontInParent
          (TSharedRef<SWindow,1> *__return_storage_ptr__,TSharedRef<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWindow,1> *pTVar4;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedPtr<SWindow,1> local_28;
  TSharedRef<SWindow,1> local_18;
  
  SWindow::GetParentWindow(param_1->Object,&local_28);
  if (local_28.Object == (SWindow *)0x0) {
    __return_storage_ptr__->Object = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    if ((local_28.Object == (SWindow *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
    pTVar5 = SWindow::GetChildWindows(local_28.Object);
    ArrangeWindowToFront(pTVar5,param_1);
    if ((local_28.Object == (SWindow *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_28.Object == (SWindow *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
    BringToFrontInParent(__return_storage_ptr__,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// BringWindowToFront @ 142433ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateWindowHelper::BringWindowToFront
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWindow,1> *param_2)

{
  TSharedRef<SWindow,1> local_18;
  
  BringToFrontInParent(&local_18,param_2);
  ArrangeWindowToFront(param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// CheckWorkAreaForWindows @ 142435d90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FSlateWindowHelper::CheckWorkAreaForWindows
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,FSlateRect *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FDeprecateSlateVector2D FVar6;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  longlong lVar9;
  float local_res8;
  float fStackX_c;
  float local_res18;
  float fStackX_1c;
  
  iVar8 = 0;
  while( true ) {
    if ((iVar8 < 0) || (param_1->ArrayNum <= iVar8)) {
      return false;
    }
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar1 = (param_1->AllocatorInstance).Data;
    lVar9 = (longlong)iVar8;
    FVar6 = SWindow::GetPositionInScreen(*(SWindow **)(pFVar1 + lVar9 * 0x10));
    uVar2 = *(undefined8 *)FVar6;
    FVar6 = SWindow::GetSizeInScreen(*(SWindow **)(pFVar1 + lVar9 * 0x10));
    local_res8 = (float)*(undefined8 *)FVar6;
    if ((((param_2->Left <= local_res8) &&
         (local_res18 = (float)uVar2, local_res18 < param_2->Right || local_res18 == param_2->Right)
         ) && (fStackX_c = (float)((ulonglong)*(undefined8 *)FVar6 >> 0x20),
              param_2->Top <= fStackX_c)) &&
       (fStackX_1c = (float)((ulonglong)uVar2 >> 0x20),
       fStackX_1c < param_2->Bottom || fStackX_1c == param_2->Bottom)) {
      return true;
    }
    pTVar7 = SWindow::GetChildWindows(*(SWindow **)(pFVar1 + lVar9 * 0x10));
    bVar4 = CheckWorkAreaForWindows(pTVar7,param_2);
    if (bVar4) {
      return true;
    }
    iVar8 = iVar8 + 1;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// ContainsWindow @ 142436860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FSlateWindowHelper::ContainsWindow
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWindow,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar5 + (longlong)param_1->ArrayNum * 0x10;
  if (pFVar5 != pFVar9) {
    do {
      if (*(SWindow **)pFVar5 == param_2->Object) {
        return true;
      }
      pFVar5 = pFVar5 + 0x10;
    } while (pFVar5 != pFVar9);
  }
  uVar7 = 0;
  if (0 < param_1->ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pTVar6 = SWindow::GetChildWindows(*(SWindow **)((param_1->AllocatorInstance).Data + lVar8));
      bVar2 = ContainsWindow(pTVar6,param_2);
      if (bVar2) {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < param_1->ArrayNum);
  }
  return false;
}

// FindPathToWidget @ 14243d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FSlateWindowHelper::FindPathToWidget
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWidget_const_,1> *param_2,FWidgetPath *param_3,EVisibility param_4)

{
  int *piVar1;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar2;
  FDeprecateSlateVector2D *pFVar3;
  byte bVar4;
  SWindow *pSVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  atomic<int> aVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  char cVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  atomic<int> aVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_FindPathToWidget> FVar26;
  FGeometry *pFVar27;
  ForElementType<FArrangedWidget> FVar28;
  longlong lVar29;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar30;
  ForElementType<FArrangedWidget> FVar31;
  TReferenceControllerBase<1> *pTVar32;
  atomic<int> *paVar33;
  FName FVar34;
  ForElementType<FArrangedWidget> FVar35;
  int iVar36;
  SWindow *pSVar37;
  TReferenceControllerBase<1> *pTVar38;
  undefined1 auStackY_508 [32];
  longlong local_498;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  FColor_u_0 local_478 [2];
  FName local_470;
  FName local_468;
  FWidgetMatcher local_460;
  FName local_450;
  undefined8 local_438;
  FSharedReferencer<1> FStack_430;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *local_428;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  TSharedPtr<SWindow,1> local_408;
  TSharedRef<SWidget_const_,1> local_3f8;
  FName local_3e8;
  SWindow *local_3e0;
  TReferenceControllerBase<1> *pTStack_3d8;
  FDeprecateSlateVector2D local_3c8;
  FDeprecateSlateVector2D FStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  SWindow *local_390;
  TReferenceControllerBase<1> *local_388;
  FArrangedWidget local_378;
  FWidgetPath local_328;
  FArrangedChildren local_1c8;
  FGeometry local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_508;
  bVar18 = false;
  FVar26 = StatPtr_STAT_FindPathToWidget;
  local_428 = param_1;
  if (StatPtr_STAT_FindPathToWidget == (FThreadSafeStaticStat<FStat_STAT_FindPathToWidget>)0x0) {
    pFVar25 = ::FName::FName(&local_3e8,"STAT_FindPathToWidget");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_FindPathToWidget>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindPathToWidget,*pFVar25,
                        L"FindPathToWidget","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_450.ComparisonIndex.Value = 0;
  local_450.Number = 0;
  FVar34 = *(FName *)FVar26;
  bVar17 = false;
  bVar22 = false;
  if ((FVar34.ComparisonIndex.Value.Value != 0) || (FVar34.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_478[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_478[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar17 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_470.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_470.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_470,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Application\\SlateWindowHelper.cpp"
                   ,0x5f);
        bVar10 = true;
        bVar11 = true;
        bVar17 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_468 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar17 = true;
      goto LAB_14243d695;
    }
  }
  bVar11 = bVar22;
  bVar10 = bVar17;
  bVar17 = false;
  local_468 = local_450;
  FVar34 = local_450;
LAB_14243d695:
  if (GSlateFastWidgetPath == false) {
    bVar22 = false;
    iVar23 = 0;
    local_498 = 0;
    do {
      if (param_1->ArrayNum <= iVar23) break;
      if ((iVar23 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        uVar19 = (*pcVar7)();
        return (bool)uVar19;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      pTVar32 = *(TReferenceControllerBase<1> **)(pFVar6 + local_498 + 8);
      pSVar37 = *(SWindow **)(pFVar6 + local_498);
      if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
        paVar33 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar33 = &pTVar32->SharedReferenceCount;
        LOCK();
        *paVar33 = (atomic<int>)((int)*paVar33 + 1);
        UNLOCK();
      }
      local_1c8.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
      local_1c8.Array.ArrayNum = 0;
      local_1c8.Array.ArrayMax = 4;
      local_1c8.bAllow3DWidgets = false;
      local_1c8.VisibilityFilter.Value.Value = param_4.Value.Value;
      pFVar27 = SWindow::GetWindowGeometryInScreen(pSVar37,&local_88);
      if (pTVar32 == (TReferenceControllerBase<1> *)0x0) {
        local_378.Geometry.Size = pFVar27->Size;
        local_378.Geometry._8_8_ = *(undefined8 *)&pFVar27->Scale;
        local_378.Geometry._16_8_ =
             *(undefined8 *)((longlong)&(pFVar27->AbsolutePosition).field0_0x0 + 4);
        local_378.Geometry._24_8_ = *(undefined8 *)((longlong)&(pFVar27->Position).field0_0x0 + 4);
        local_378.Geometry.AccumulatedRenderTransform.M.M._4_8_ =
             *(undefined8 *)((pFVar27->AccumulatedRenderTransform).M.M[0] + 1);
        local_378.Geometry.AccumulatedRenderTransform._12_8_ =
             *(undefined8 *)((pFVar27->AccumulatedRenderTransform).M.M[1] + 1);
        local_378.Geometry._48_8_ =
             *(undefined8 *)((longlong)&(pFVar27->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      }
      else {
        LOCK();
        *paVar33 = (atomic<int>)((int)*paVar33 + 1);
        UNLOCK();
        local_378.Geometry.Size = pFVar27->Size;
        local_378.Geometry._8_8_ = *(undefined8 *)&pFVar27->Scale;
        local_378.Geometry._16_8_ =
             *(undefined8 *)((longlong)&(pFVar27->AbsolutePosition).field0_0x0 + 4);
        local_378.Geometry._24_8_ = *(undefined8 *)((longlong)&(pFVar27->Position).field0_0x0 + 4);
        local_378.Geometry.AccumulatedRenderTransform.M.M._4_8_ =
             *(undefined8 *)((pFVar27->AccumulatedRenderTransform).M.M[0] + 1);
        local_378.Geometry.AccumulatedRenderTransform._12_8_ =
             *(undefined8 *)((pFVar27->AccumulatedRenderTransform).M.M[1] + 1);
        local_378.Geometry._48_8_ =
             *(undefined8 *)((longlong)&(pFVar27->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
        LOCK();
        *paVar33 = (atomic<int>)((int)*paVar33 + 1);
        UNLOCK();
      }
      local_378.Widget.Object = (SWidget *)pSVar37;
      local_378.Widget.SharedReferenceCount.ReferenceController = pTVar32;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
      FArrangedChildren::AddWidget(&local_1c8,&local_378);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378.Widget.SharedReferenceCount.ReferenceController);
      if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar33 = (atomic<int>)((int)*paVar33 + 1);
        UNLOCK();
      }
      local_408.Object = pSVar37;
      local_408.SharedReferenceCount.ReferenceController = pTVar32;
      FWidgetPath::FWidgetPath(&local_328,&local_408,&local_1c8);
      pSVar5 = (SWindow *)param_2->Object;
      if (pSVar37 == pSVar5) {
LAB_14243dcc3:
        bVar21 = true;
      }
      else {
        bVar18 = true;
        local_460.WidgetToFind.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_460.WidgetToFind.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_460.WidgetToFind.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_460.WidgetToFind.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          (local_460.WidgetToFind.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_460.WidgetToFind.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_460.WidgetToFind.Object = (SWidget *)pSVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_460.WidgetToFind.SharedReferenceCount.ReferenceController);
        bVar21 = FWidgetPath::ExtendPathTo<FWidgetMatcher>(&local_328,&local_460,param_4,Standard);
        if (bVar21) goto LAB_14243dcc3;
        bVar21 = false;
      }
      if (bVar18) {
        bVar18 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_460.WidgetToFind.SharedReferenceCount.ReferenceController);
      }
      if (bVar21) {
        FVar31 = (ForElementType<FArrangedWidget>)&(param_3->Widgets).Array;
        (param_3->Widgets).VisibilityFilter.Value.Value =
             (uchar)local_328.Widgets.VisibilityFilter.Value.Value;
        if (FVar31 != (ForElementType<FArrangedWidget>)&local_328.Widgets.Array) {
          FVar35 = (param_3->Widgets).Array.AllocatorInstance.SecondaryData;
          FVar28 = FVar31;
          if (FVar35 != (ForElementType<FArrangedWidget>)0x0) {
            FVar28 = FVar35;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar28,(param_3->Widgets).Array.ArrayNum);
          iVar15 = local_328.Widgets.Array.ArrayNum;
          piVar1 = &(param_3->Widgets).Array.ArrayMax;
          iVar36 = *piVar1;
          (param_3->Widgets).Array.ArrayNum = local_328.Widgets.Array.ArrayNum;
          FVar35 = (ForElementType<FArrangedWidget>)&local_328.Widgets.Array;
          if (local_328.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar35 = local_328.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          if ((local_328.Widgets.Array.ArrayNum == 0) && (iVar36 == 0)) {
            *piVar1 = 4;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                      (0x48,8,local_328.Widgets.Array.ArrayNum,iVar36,
                       (ForElementType<FArrangedWidget> *)FVar31,local_328.Widgets.Array.ArrayNum,
                       piVar1);
            FVar28 = (param_3->Widgets).Array.AllocatorInstance.SecondaryData;
            if (FVar28 != (ForElementType<FArrangedWidget>)0x0) {
              FVar31 = FVar28;
            }
            ConstructItems<FArrangedWidget,FArrangedWidget,int>
                      ((void *)FVar31,(FArrangedWidget *)FVar35,iVar15);
          }
        }
        (param_3->Widgets).bAllow3DWidgets = local_328.Widgets.bAllow3DWidgets;
        if (local_328.TopLevelWindow.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_328.TopLevelWindow.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_328.TopLevelWindow.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3e0 = (param_3->TopLevelWindow).Object;
        pTStack_3d8 = (param_3->TopLevelWindow).SharedReferenceCount.ReferenceController;
        (param_3->TopLevelWindow).Object = local_328.TopLevelWindow.Object;
        (param_3->TopLevelWindow).SharedReferenceCount.ReferenceController =
             local_328.TopLevelWindow.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_3d8);
        FVar16.Data = local_328.VirtualPointerPositions.AllocatorInstance.Data;
        pTVar2 = &param_3->VirtualPointerPositions;
        if (pTVar2 != &local_328.VirtualPointerPositions) {
          piVar1 = &(param_3->VirtualPointerPositions).ArrayMax;
          iVar36 = local_328.VirtualPointerPositions.ArrayNum;
          (param_3->VirtualPointerPositions).ArrayNum = iVar36;
          if ((iVar36 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
            bVar22 = true;
            goto LAB_14243de99;
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar36,*piVar1,&pTVar2->AllocatorInstance,iVar36,piVar1);
          ConstructItems<TOptional<FVirtualPointerPosition>,TOptional<FVirtualPointerPosition>,int>
                    ((pTVar2->AllocatorInstance).Data,
                     (TOptional<FVirtualPointerPosition> *)FVar16.Data,iVar36);
        }
        bVar22 = true;
      }
      else if (bVar22 == false) {
        local_3f8.Object = param_2->Object;
        local_3f8.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_3f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar30 = SWindow::GetChildWindows(pSVar37);
        bVar22 = FindPathToWidget(pTVar30,&local_3f8,param_3,param_4);
      }
LAB_14243de99:
      if ((TOptional<FVirtualPointerPosition> *)
          local_328.VirtualPointerPositions.AllocatorInstance.Data !=
          (TOptional<FVirtualPointerPosition> *)0x0) {
        FMemory::Free(local_328.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_328.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar31 = (ForElementType<FArrangedWidget>)&local_328.Widgets.Array;
      if (local_328.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar31 = local_328.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar31,local_328.Widgets.Array.ArrayNum)
      ;
      if (local_328.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_328.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      FVar31 = (ForElementType<FArrangedWidget>)&local_1c8.Array;
      if (local_1c8.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar31 = local_1c8.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar31,local_1c8.Array.ArrayNum);
      if (local_1c8.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1c8.Array.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
      iVar23 = iVar23 + 1;
      local_498 = local_498 + 0x10;
      param_1 = local_428;
    } while (bVar22 == false);
    FVar34 = local_468;
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar17) {
      FThreadStats::AddMessage(FVar34,CycleScopeEnd);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  else {
    pTVar32 = (param_2->SharedReferenceCount).ReferenceController;
    pSVar37 = (SWindow *)param_2->Object;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
    local_488 = SUB84(pSVar37,0);
    uStack_484 = (undefined4)((ulonglong)pSVar37 >> 0x20);
    uStack_480 = SUB84(pTVar32,0);
    uStack_47c = (undefined4)((ulonglong)pTVar32 >> 0x20);
    (param_3->Widgets).VisibilityFilter.Value.Value = (uchar)param_4.Value.Value;
    while( true ) {
      FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes((SWidget *)pSVar37,DelayInvalidation);
      if ((pSVar37 == (SWindow *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        uVar19 = (*pcVar7)();
        return (bool)uVar19;
      }
      bVar4 = *(undefined1 *)((longlong)&pSVar37->_padding_ + 1);
      if (((param_3->Widgets).VisibilityFilter.Value.Value & bVar4) == 0) {
        FArrangedChildren::Empty(&param_3->Widgets);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32)
        ;
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        goto LAB_14243dac4;
      }
      pFVar27 = SWidget::GetCachedGeometry((SWidget *)pSVar37);
      if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3c8 = pFVar27->Size;
      FStack_3c0 = *(FDeprecateSlateVector2D *)&pFVar27->Scale;
      local_3b8 = *(undefined8 *)((longlong)&(pFVar27->AbsolutePosition).field0_0x0 + 4);
      uStack_3b0 = *(undefined8 *)((longlong)&(pFVar27->Position).field0_0x0 + 4);
      local_3a8 = *(undefined8 *)((pFVar27->AccumulatedRenderTransform).M.M[0] + 1);
      uStack_3a0 = *(undefined8 *)((pFVar27->AccumulatedRenderTransform).M.M[1] + 1);
      local_398 = *(undefined8 *)
                   ((longlong)&(pFVar27->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
      if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_390 = pSVar37;
      local_388 = pTVar32;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
      if (((param_3->Widgets).VisibilityFilter.Value.Value & bVar4) != 0) {
        FVar31 = (ForElementType<FArrangedWidget>)&(param_3->Widgets).Array;
        FVar35 = (param_3->Widgets).Array.AllocatorInstance.SecondaryData;
        FVar28 = FVar31;
        if (FVar35 != (ForElementType<FArrangedWidget>)0x0) {
          FVar28 = FVar35;
        }
        if ((ulonglong)FVar28 <= &local_3c8) {
          FVar28 = FVar31;
          if (FVar35 != (ForElementType<FArrangedWidget>)0x0) {
            FVar28 = FVar35;
          }
          if ((&local_3c8 <
               (FDeprecateSlateVector2D *)
               ((longlong)FVar28 + (longlong)(param_3->Widgets).Array.ArrayMax * 0x48)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar7 = (code *)swi(3);
            uVar19 = (*pcVar7)();
            return (bool)uVar19;
          }
        }
        iVar23 = (param_3->Widgets).Array.ArrayNum;
        piVar1 = &(param_3->Widgets).Array.ArrayMax;
        if (iVar23 == *piVar1) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                             (0x848,(ForElementType<FArrangedWidget> *)FVar31,piVar1);
        }
        (param_3->Widgets).Array.ArrayNum = iVar23 + 1;
        FVar35 = (param_3->Widgets).Array.AllocatorInstance.SecondaryData;
        lVar29 = (longlong)iVar23;
        if (FVar35 != (ForElementType<FArrangedWidget>)0x0) {
          FVar31 = FVar35;
        }
        pFVar3 = (FDeprecateSlateVector2D *)((longlong)FVar31 + lVar29 * 0x48);
        *pFVar3 = local_3c8;
        pFVar3[1] = FStack_3c0;
        *(undefined8 *)((uchar *)((longlong)FVar31 + 0x10) + lVar29 * 0x48) = local_3b8;
        *(undefined8 *)((uchar *)((longlong)FVar31 + 0x10) + lVar29 * 0x48 + 8) = uStack_3b0;
        *(undefined8 *)((uchar *)((longlong)FVar31 + 0x20) + lVar29 * 0x48) = local_3a8;
        *(undefined8 *)((uchar *)((longlong)FVar31 + 0x20) + lVar29 * 0x48 + 8) = uStack_3a0;
        *(undefined8 *)((uchar *)((longlong)FVar31 + 0x30) + lVar29 * 0x48) = local_398;
        *(SWindow **)((uchar *)((longlong)FVar31 + 0x38) + lVar29 * 0x48) = local_390;
        *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar31 + 0x40) + lVar29 * 0x48) =
             local_388;
        if (local_388 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_388->SharedReferenceCount = (atomic<int>)((int)local_388->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      pTVar38 = (TReferenceControllerBase<1> *)pSVar37->_padding_;
      if (pTVar38 == (TReferenceControllerBase<1> *)0x0) break;
      aVar12 = pTVar38->SharedReferenceCount;
      do {
        if (aVar12 == (atomic<int>)0x0) {
          pTVar38 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14243d8e6;
        }
        LOCK();
        aVar24 = pTVar38->SharedReferenceCount;
        bVar18 = aVar12 == aVar24;
        if (bVar18) {
          pTVar38->SharedReferenceCount = (atomic<int>)((int)aVar12 + 1);
          aVar24 = aVar12;
        }
        UNLOCK();
        aVar12 = aVar24;
      } while (!bVar18);
      if ((pTVar38 == (TReferenceControllerBase<1> *)0x0) ||
         (pSVar5 = (SWindow *)pSVar37->_padding_, pSVar5 == (SWindow *)0x0)) break;
      cVar20 = (**(code **)(pSVar5->_padding_ + 0x158))(pSVar5,pSVar37);
      if (cVar20 == '\0') goto LAB_14243da52;
      uStack_410 = SUB84(pTVar38,0);
      uVar13 = uStack_410;
      uStack_40c = (undefined4)((ulonglong)pTVar38 >> 0x20);
      uVar14 = uStack_40c;
      LOCK();
      pTVar38->SharedReferenceCount = (atomic<int>)((int)pTVar38->SharedReferenceCount + 1);
      UNLOCK();
      auVar9._8_4_ = uStack_410;
      auVar9._0_8_ = pSVar5;
      auVar9._12_4_ = uStack_40c;
      auVar8._4_4_ = uStack_484;
      auVar8._0_4_ = local_488;
      auVar8._8_4_ = uStack_480;
      auVar8._12_4_ = uStack_47c;
      local_418 = local_488;
      uStack_414 = uStack_484;
      uStack_410 = uStack_480;
      uStack_40c = uStack_47c;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (auVar8._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_388)
      ;
      pTVar32 = auVar9._8_8_;
      pSVar37 = pSVar5;
      local_488 = (int)pSVar5;
      uStack_484 = (int)((ulonglong)pSVar5 >> 0x20);
      uStack_480 = uVar13;
      uStack_47c = uVar14;
    }
LAB_14243d8e6:
    cVar20 = (**(code **)(pSVar37->_padding_ + 0x208))(pSVar37);
    if (cVar20 != '\0') {
      local_438 = CONCAT44(uStack_484,local_488);
      if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
        UNLOCK();
      }
      FStack_430.ReferenceController._0_4_ = uStack_480;
      FStack_430.ReferenceController._4_4_ = uStack_47c;
      if (&param_3->TopLevelWindow != (TSharedPtr<SWindow,1> *)&local_438) {
        (param_3->TopLevelWindow).Object = pSVar37;
        local_438 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_3->TopLevelWindow).SharedReferenceCount,&FStack_430);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(FStack_430.ReferenceController._4_4_,FStack_430.ReferenceController._0_4_)
                );
      FArrangedChildren::Reverse(&param_3->Widgets);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_388)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar17) {
        FThreadStats::AddMessage(FVar34,CycleScopeEnd);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return true;
    }
LAB_14243da52:
    FArrangedChildren::Empty(&param_3->Widgets);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_388);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
LAB_14243dac4:
    if (bVar17) {
      FThreadStats::AddMessage(FVar34,CycleScopeEnd);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar22 = false;
  }
  return bVar22;
}

// FindWindowByPlatformWindow @ 14243df90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWindow,1> * __cdecl
FSlateWindowHelper::FindWindowByPlatformWindow
          (TSharedPtr<SWindow,1> *__return_storage_ptr__,
          TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<FGenericWindow,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWindow *this;
  FGenericWindow *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TSharedPtr<SWindow,1> *pTVar8;
  TSharedPtr<FGenericWindow,1> *pTVar9;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  TSharedPtr<SWindow,1> local_58;
  TSharedPtr<FGenericWindow,1> local_48;
  
  iVar12 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar12) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar12) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SWindow,1> *)(*pcVar5)();
        return pTVar8;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar13 + 8);
      this = *(SWindow **)(pFVar1 + lVar13);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = SWindow::GetNativeWindow(this,&local_48);
      if ((pTVar9->Object == (FGenericWindow *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SWindow,1> *)(*pcVar5)();
        return pTVar8;
      }
      pFVar3 = pTVar9->Object;
      pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
      (pTVar9->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar9->Object = (FGenericWindow *)0x0;
      if ((pFVar3 == (FGenericWindow *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SWindow,1> *)(*pcVar5)();
        return pTVar8;
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if (pFVar3 == param_2->Object) {
        __return_storage_ptr__->Object = this;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
LAB_14243e171:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return __return_storage_ptr__;
      }
      pTVar10 = SWindow::GetChildWindows(this);
      FindWindowByPlatformWindow(&local_58,pTVar10,param_2);
      if (local_58.Object != (SWindow *)0x0) {
        __return_storage_ptr__->Object = local_58.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_58.SharedReferenceCount.ReferenceController;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_58.Object = (SWindow *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14243e171;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x10;
      iVar12 = param_1->ArrayNum;
    } while ((int)uVar11 < iVar12);
  }
  __return_storage_ptr__->Object = (SWindow *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// RemoveWindowFromList @ 14244fdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FSlateWindowHelper::RemoveWindowFromList
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWindow,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar3 = TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_>::Remove(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = param_1->ArrayNum;
    uVar6 = 0;
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar3) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar5 = SWindow::GetChildWindows(*(SWindow **)((param_1->AllocatorInstance).Data + lVar7));
        RemoveWindowFromList(pTVar5,param_2);
        iVar3 = param_1->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < iVar3);
    }
  }
  return;
}

