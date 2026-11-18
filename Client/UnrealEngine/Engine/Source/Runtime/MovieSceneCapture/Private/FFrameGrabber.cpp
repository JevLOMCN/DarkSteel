// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 12

// FFrameGrabber @ 146bd7510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FFrameGrabber * __thiscall
FFrameGrabber::FFrameGrabber
          (FFrameGrabber *this,TSharedRef<FSceneViewport,1> *param_1,TIntPoint<int> param_2,
          EPixelFormat param_3,uint param_4)

{
  atomic<int> *paVar1;
  TArray<FFrameGrabber::FResolveSurface,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  undefined4 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  SViewport *pSVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  EVisibility EVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  atomic<int> aVar14;
  int iVar15;
  uint uVar16;
  FFrameGrabber *pFVar17;
  longlong lVar18;
  undefined4 *puVar19;
  FSlateApplication *pFVar20;
  TOptional<FArrangedWidget> *pTVar21;
  TOptional<FArrangedWidget> *pTVar22;
  longlong *plVar23;
  ForElementType<FArrangedWidget> FVar24;
  uint uVar25;
  TReferenceControllerBase<1> *pTVar26;
  ulonglong uVar27;
  SViewport *pSVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_558 [32];
  undefined8 local_528;
  SWindow *local_510;
  TReferenceControllerBase<1> *local_508;
  TReferenceControllerBase<1> *local_500;
  SViewport *local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  TReferenceControllerBase<1> *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  int local_4b8;
  int iStack_4b4;
  FWidgetMatcher local_4b0;
  SViewport *local_4a0;
  TReferenceControllerBase<1> *local_498;
  TSharedRef<SWidget_const_,1> local_490;
  int local_478;
  int iStack_474;
  int iStack_470;
  int iStack_46c;
  FFrameGrabber *local_468;
  TSharedRef<FSceneViewport,1> *local_460;
  TSharedPtr<SWindow,1> local_458;
  undefined1 local_448 [8];
  undefined1 local_440 [8];
  FDeprecateSlateVector2D local_438;
  undefined8 uStack_430;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  undefined8 local_408;
  TReferenceControllerBase<1> *local_3f8;
  TOptional<FArrangedWidget> local_3e8;
  FGeometry local_398;
  FArrangedWidget local_358;
  FArrangedChildren local_308;
  FWidgetPath local_1c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_558;
  (this->OnBackBufferReadyToPresent).ID = 0;
  (this->CapturedFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapturedFrames).ArrayNum = 0;
  (this->CapturedFrames).ArrayMax = 0;
  local_468 = this;
  local_460 = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CapturedFramesMutex,4000);
  uVar27 = (ulonglong)param_4;
  (this->Surfaces).ArrayMax = 0;
  (this->Surfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Surfaces).ArrayNum = 0;
  (this->OutstandingFrameCount).Counter = 0;
  (this->RenderThread_PendingFramePayloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderThread_PendingFramePayloads).ArrayNum = 0;
  (this->RenderThread_PendingFramePayloads).ArrayMax = 0;
  (this->TargetSize).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_2.field0_0x0;
  this->CurrentFrameIndex = 0;
  this->TargetWindowPtr = (void *)0x0;
  this->State = Inactive;
  if ((param_4 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSurfaces != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                          ,200,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pFVar17 = (FFrameGrabber *)(*pcVar8)();
    return pFVar17;
  }
  plVar23 = &param_1->Object->_padding_;
  lVar18 = (**(code **)(*plVar23 + 0x10))(plVar23,local_448);
  plVar23 = &param_1->Object->_padding_;
  local_4e8 = 0;
  uVar4 = *(undefined4 *)(lVar18 + 4);
  puVar19 = (undefined4 *)(**(code **)(*plVar23 + 0x10))(plVar23,local_440);
  local_4f0 = 0;
  uStack_4e0 = CONCAT44(uVar4,*puVar19);
  pTVar5 = (param_1->Object->ViewportWidget).WeakReferenceCount.ReferenceController;
  pSVar6 = (param_1->Object->ViewportWidget).Object;
  pTVar26 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar26 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar14 = pTVar5->SharedReferenceCount;
      bVar13 = aVar3 == aVar14;
      if (bVar13) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar14 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar14;
    } while (!bVar13);
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
    pSVar28 = (SViewport *)0x0;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      pSVar28 = pSVar6;
    }
    if (pSVar28 != (SViewport *)0x0) {
      pFVar20 = FSlateApplication::Get();
      pcVar8 = *(code **)(*(longlong *)pFVar20 + 0x28);
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_500 = pTVar26;
      local_4f8 = pSVar28;
      local_4d8 = pTVar26;
      local_4a0 = pSVar28;
      local_498 = pTVar26;
      (*pcVar8)(pFVar20,&local_510,&local_4a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      if (local_510 != (SWindow *)0x0) {
        this->TargetWindowPtr = local_510;
        if ((local_510 == (SWindow *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FFrameGrabber *)(*pcVar8)();
          return pFVar17;
        }
        SWindow::GetWindowGeometryInWindow(local_510,&local_398);
        local_308.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
        local_308.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
        local_308.Array.ArrayNum = 0;
        local_308.Array.ArrayMax = 4;
        local_308.bAllow3DWidgets = false;
        if ((local_510 == (SWindow *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FFrameGrabber *)(*pcVar8)();
          return pFVar17;
        }
        pTVar5 = local_508;
        if (local_508 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_508->SharedReferenceCount = (atomic<int>)((int)local_508->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_510 == (SWindow *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FFrameGrabber *)(*pcVar8)();
          return pFVar17;
        }
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_358.Widget.SharedReferenceCount.ReferenceController = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        FArrangedChildren::AddWidget(&local_308,&local_358);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_358.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        if ((local_510 == (SWindow *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FFrameGrabber *)(*pcVar8)();
          return pFVar17;
        }
        pTVar5 = local_508;
        if (local_508 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_508->SharedReferenceCount = (atomic<int>)((int)local_508->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_510 == (SWindow *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          pFVar17 = (FFrameGrabber *)(*pcVar8)();
          return pFVar17;
        }
        local_458.SharedReferenceCount.ReferenceController = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        FWidgetPath::FWidgetPath(&local_1c8,&local_458,&local_308);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        EVar10 = EVisibility::Visible;
        local_4b0.WidgetToFind.SharedReferenceCount.ReferenceController = pTVar26;
        if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
          UNLOCK();
          local_4b0.WidgetToFind.SharedReferenceCount.ReferenceController = local_4d8;
          LOCK();
          pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_4b0.WidgetToFind.Object = (SWidget *)pSVar28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26)
        ;
        bVar13 = FWidgetPath::ExtendPathTo<FWidgetMatcher>(&local_1c8,&local_4b0,EVar10,Standard);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b0.WidgetToFind.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26)
        ;
        if (bVar13) {
          if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
            local_490.Object = (SWidget *)local_4f8;
            local_490.SharedReferenceCount.ReferenceController = pTVar26;
          }
          else {
            LOCK();
            pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
            UNLOCK();
            local_490.SharedReferenceCount.ReferenceController = local_500;
            LOCK();
            pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
            UNLOCK();
            local_490.Object = (SWidget *)pSVar28;
          }
          pTVar21 = FWidgetPath::FindArrangedWidget(&local_1c8,&local_3e8,&local_490);
          pTVar22 = (TOptional<FArrangedWidget> *)FArrangedWidget::GetNullWidget();
          if (pTVar21->bIsSet != false) {
            pTVar22 = pTVar21;
          }
          local_438 = (pTVar22->TypedValue).Geometry.Size;
          uStack_430 = *(undefined8 *)&(pTVar22->TypedValue).Geometry.Scale;
          pTVar5 = (pTVar22->TypedValue).Widget.SharedReferenceCount.ReferenceController;
          local_408 = *(undefined8 *)
                       ((longlong)
                        &(pTVar22->TypedValue).Geometry.AccumulatedRenderTransform.Trans.field0_0x0
                       + 4);
          local_428 = (pTVar22->TypedValue).Geometry.AbsolutePosition.field0_0x0._s_0.Y;
          fStack_424 = (pTVar22->TypedValue).Geometry.Position.field0_0x0._s_0.X;
          fStack_420 = (pTVar22->TypedValue).Geometry.Position.field0_0x0._s_0.Y;
          fVar32 = (pTVar22->TypedValue).Geometry.AccumulatedRenderTransform.M.M[0][0];
          fVar31 = (pTVar22->TypedValue).Geometry.AccumulatedRenderTransform.M.M[0][1];
          fVar33 = (pTVar22->TypedValue).Geometry.AccumulatedRenderTransform.M.M[1][0];
          fVar9 = (pTVar22->TypedValue).Geometry.AccumulatedRenderTransform.M.M[1][1];
          fVar29 = (pTVar22->TypedValue).Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X
          ;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          fStack_41c = fVar32;
          local_418 = fVar31;
          fStack_414 = fVar33;
          fStack_410 = fVar9;
          fStack_40c = fVar29;
          local_3f8 = pTVar5;
          if (local_3e8.bIsSet != false) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3e8.TypedValue.Widget.SharedReferenceCount.ReferenceController);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar26);
          local_528._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
          local_528._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
          fVar29 = fVar32 * (float)local_528 + fVar33 * local_528._4_4_ + fVar29;
          fVar30 = fVar31 * (float)local_528 + fVar9 * local_528._4_4_ + (float)local_408;
          local_528 = CONCAT44(fVar30,fVar29);
          local_4d0 = local_528;
          local_528._0_4_ = local_438._0_4_;
          local_528._4_4_ = local_438._4_4_;
          fVar33 = fVar32 * (float)local_528 + fVar33 * local_528._4_4_;
          fVar32 = fVar31 * (float)local_528 + fVar9 * local_528._4_4_;
          local_528 = CONCAT44(fVar32,fVar33);
          local_4c8 = local_528;
          local_478 = (int)fVar29;
          iStack_474 = (int)fVar30;
          iStack_470 = (int)(fVar33 + fVar29);
          iStack_46c = (int)(fVar32 + fVar30);
          local_4e8 = CONCAT44(iStack_474,local_478);
          uStack_4e0 = CONCAT44(iStack_46c,iStack_470);
          local_528._0_4_ = local_398.Size._0_4_;
          local_528._4_4_ = local_398.Size._4_4_;
          fVar32 = local_398.AccumulatedRenderTransform.M.M[0][0] * (float)local_528 +
                   local_398.AccumulatedRenderTransform.M.M[1][0] * local_528._4_4_;
          fVar31 = local_398.AccumulatedRenderTransform.M.M[0][1] * (float)local_528 +
                   local_398.AccumulatedRenderTransform.M.M[1][1] * local_528._4_4_;
          local_528 = CONCAT44(fVar31,fVar32);
          local_4c0 = local_528;
          local_4b8 = (int)fVar32;
          iStack_4b4 = (int)fVar31;
          local_4f0 = CONCAT44(iStack_4b4,local_4b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
        }
        if (local_1c8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar24 = (ForElementType<FArrangedWidget>)&local_1c8.Widgets.Array;
        if (local_1c8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar24 = local_1c8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar24,local_1c8.Widgets.Array.ArrayNum);
        if (local_1c8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_1c8.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        FVar24 = (ForElementType<FArrangedWidget>)&local_308.Array;
        if (local_308.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar24 = local_308.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar24,local_308.Array.ArrayNum);
        if (local_308.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FMemory::Free((void *)local_308.Array.AllocatorInstance.SecondaryData);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_508)
      ;
    }
  }
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar27);
  }
  if ((this->Surfaces).ArrayMax < (int)param_4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,param_4,&(this->Surfaces).AllocatorInstance,(this->Surfaces).ArrayNum,
               &(this->Surfaces).ArrayMax);
  }
  uVar12 = uStack_4e0;
  uVar11 = local_4e8;
  pFVar17 = this;
  if (param_4 != 0) {
    pTVar2 = &this->Surfaces;
    do {
      iVar15 = (this->Surfaces).ArrayNum;
      if (iVar15 == (this->Surfaces).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,&pTVar2->AllocatorInstance,&(this->Surfaces).ArrayMax);
      }
      (this->Surfaces).ArrayNum = iVar15 + 1;
      FResolveSurface::FResolveSurface
                ((FResolveSurface *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 0x48),
                 param_3,param_2);
      iVar15 = (this->Surfaces).ArrayNum;
      uVar25 = iVar15 - 1;
      uVar16 = 0;
      if ((int)uVar25 < iVar15) {
        uVar16 = ~uVar25 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FFrameGrabber *)(*pcVar8)();
        return pFVar17;
      }
      lVar18 = (longlong)(this->Surfaces).ArrayNum;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar18 * 0x48 + -0x20) = uVar11;
      *(undefined8 *)(pFVar7 + lVar18 * 0x48 + -0x18) = uVar12;
      iVar15 = (this->Surfaces).ArrayNum;
      uVar25 = iVar15 - 1;
      uVar16 = 0;
      if ((int)uVar25 < iVar15) {
        uVar16 = ~uVar25 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FFrameGrabber *)(*pcVar8)();
        return pFVar17;
      }
      *(undefined8 *)
       ((pTVar2->AllocatorInstance).Data + (longlong)(this->Surfaces).ArrayNum * 0x48 + -0x10) =
           local_4f0;
      uVar27 = uVar27 - 1;
      pFVar17 = local_468;
    } while (uVar27 != 0);
  }
  pFVar17->FrameGrabLatency = GFrameGrabberFrameLatency;
  FlushRenderingCommands();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_460->SharedReferenceCount).ReferenceController);
  return pFVar17;
}

// ~FFrameGrabber @ 146bd9240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFrameGrabber::~FFrameGrabber(FFrameGrabber *this)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  FSlateApplication *pFVar3;
  
  if (((this->OnBackBufferReadyToPresent).ID != 0) &&
     (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0)) {
    pFVar3 = FSlateApplication::Get();
    FVar1.ID = (this->OnBackBufferReadyToPresent).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                 (*(longlong *)&pFVar3->field_0x60 + 0x98),FVar1);
    }
  }
  if (0 < (this->OutstandingFrameCount).Counter) {
    FlushRenderingCommands();
  }
  DestructItems<TSharedPtr<IFramePayload,1>,int>
            ((TSharedPtr<IFramePayload,1> *)
             (this->RenderThread_PendingFramePayloads).AllocatorInstance.Data,
             (this->RenderThread_PendingFramePayloads).ArrayNum);
  pFVar2 = (this->RenderThread_PendingFramePayloads).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FFrameGrabber::FResolveSurface,int>
            ((FResolveSurface *)(this->Surfaces).AllocatorInstance.Data,(this->Surfaces).ArrayNum);
  pFVar2 = (this->Surfaces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CapturedFramesMutex);
  DestructItems<FCapturedFrameData,int>
            ((FCapturedFrameData *)(this->CapturedFrames).AllocatorInstance.Data,
             (this->CapturedFrames).ArrayNum);
  pFVar2 = (this->CapturedFrames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 146bd9c90

void __thiscall
`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)this;
  puVar1 = (undefined8 *)((longlong)this + 8);
  if ((*(undefined8 **)(lVar2 + 0x68) <= puVar1) &&
     (puVar1 < *(undefined8 **)(lVar2 + 0x68) + (longlong)*(int *)(lVar2 + 0x74) * 2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x70);
  if (iVar5 == *(int *)(lVar2 + 0x74)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar2 + 0x68),(int *)(lVar2 + 0x74));
  }
  *(int *)(lVar2 + 0x70) = iVar5 + 1;
  puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0x68));
  *puVar6 = *puVar1;
  lVar2 = *(longlong *)((longlong)this + 0x10);
  puVar6[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}

// CaptureThisFrame @ 146bdc100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFrameGrabber::CaptureThisFrame(FFrameGrabber *this,TSharedPtr<IFramePayload,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IFramePayload *pIVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStackY_c8 [32];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (this->State == Active) {
    LOCK();
    (this->OutstandingFrameCount).Counter = (this->OutstandingFrameCount).Counter + 1;
    UNLOCK();
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pIVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x20,8);
    local_70[1] = (code *)this;
    local_70[2] = (code *)pIVar2;
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[3] = (code *)pTVar1;
    if (local_70 != (code **)&DAT_fffffffffffffff8) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFrameGrabber::CaptureThisFrame_::__l2::TSTR_FrameGrabber_AppendFramePayload294>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68[0] = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_58[0] = local_88[0];
      local_58[1] = local_88[1];
      local_58[2] = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FFrameGrabber::CaptureThisFrame'::__l2::TSTR_FrameGrabber_AppendFramePayload294>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if (2 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_68[0] != (code *)0x0) {
          ppcVar6 = local_68 + 2;
          if (local_40 != (code **)0x0) {
            ppcVar6 = local_40;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])();
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar6 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar6 = local_70;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7379574295015456481>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                       ,0x11f,"State == EFrameGrabberState::Active");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetCapturedFrames @ 146bdfec0

TArray<FCapturedFrameData,TSizedDefaultAllocator<32>_> * __thiscall
FFrameGrabber::GetCapturedFrames
          (FFrameGrabber *this,
          TArray<FCapturedFrameData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FCapturedFrameData *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lpCriticalSection = &this->CapturedFramesMutex;
  bVar8 = false;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->CapturedFrames).ArrayNum;
    iVar5 = (this->CapturedFrames).ArrayMax;
    piVar1 = &(this->CapturedFrames).ArrayMax;
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    iVar6 = __return_storage_ptr__->ArrayNum;
    iVar7 = __return_storage_ptr__->ArrayMax;
    (__return_storage_ptr__->AllocatorInstance).Data = (this->CapturedFrames).AllocatorInstance.Data
    ;
    __return_storage_ptr__->ArrayNum = iVar2;
    __return_storage_ptr__->ArrayMax = iVar5;
    (this->CapturedFrames).AllocatorInstance.Data = pFVar4;
    (this->CapturedFrames).ArrayNum = iVar6;
    (this->CapturedFrames).ArrayMax = iVar7;
    pFVar3 = (FCapturedFrameData *)(this->CapturedFrames).AllocatorInstance.Data;
    iVar2 = (this->CapturedFrames).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FCapturedFrameData,int>(pFVar3,iVar2);
      (this->CapturedFrames).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->CapturedFrames).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FCapturedFrameData,int>(pFVar3,iVar2);
      (this->CapturedFrames).ArrayNum = 0;
    }
    if (this->State == PendingShutdown) {
      bVar8 = (this->OutstandingFrameCount).Counter == 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar8) {
      Shutdown(this);
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HasOutstandingFrames @ 146be17d0

bool __thiscall FFrameGrabber::HasOutstandingFrames(FFrameGrabber *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->CapturedFramesMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->OutstandingFrameCount).Counter == 0) && ((this->CapturedFrames).ArrayNum == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsCapturingFrames @ 146be3090

bool __thiscall FFrameGrabber::IsCapturingFrames(FFrameGrabber *this)

{
  return this->State == Active;
}

// OnBackBufferReadyToPresentCallback @ 146be33c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFrameGrabber::OnBackBufferReadyToPresentCallback
          (FFrameGrabber *this,SWindow *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  int *piVar1;
  TArray<FFrameGrabber::FResolveSurface,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *pcVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FEvent *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FViewportSurfaceReader *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  int local_res10;
  TRefCountPtr<FRHITexture> *local_res18;
  code *local_78 [2];
  undefined **local_68;
  FFrameGrabber *local_60;
  uint local_58;
  undefined8 local_50;
  
  if (param_1 == this->TargetWindowPtr) {
    local_res18 = param_2;
    bVar11 = IsInRenderingThread();
    if ((!bVar11) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7379574295015456399>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                            ,0x171,"IsInRenderingThread()"), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (this->RenderThread_PendingFramePayloads).ArrayNum;
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
    if (iVar12 != 0) {
      if ((iVar12 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = (this->RenderThread_PendingFramePayloads).AllocatorInstance.Data;
      pTVar18 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
      uVar6 = *(undefined8 *)pFVar19;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((this->RenderThread_PendingFramePayloads).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = (this->RenderThread_PendingFramePayloads).AllocatorInstance.Data;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar19 + 8));
      iVar12 = (this->RenderThread_PendingFramePayloads).ArrayNum + -1;
      if (iVar12 != 0) {
        memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar12 << 4);
      }
      piVar1 = &(this->RenderThread_PendingFramePayloads).ArrayNum;
      *piVar1 = *piVar1 + -1;
      iVar12 = this->FrameGrabLatency;
      if (iVar12 != GFrameGrabberFrameLatency) {
        FlushRenderingCommands();
        iVar12 = (this->Surfaces).ArrayNum;
        pFVar16 = (this->Surfaces).AllocatorInstance.Data;
        pFVar19 = pFVar16 + (longlong)iVar12 * 0x48;
        while( true ) {
          if ((this->Surfaces).ArrayNum != iVar12) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FFrameGrabber::FResolveSurface,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar16 == pFVar19) break;
          if (*(longlong **)(pFVar16 + 0x18) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(pFVar16 + 0x18) + 0x10))();
          }
          plVar7 = *(longlong **)(pFVar16 + 0x18);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
            FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(pFVar16 + 0x18));
            *(undefined8 *)(pFVar16 + 0x18) = 0;
          }
          pFVar16[0x42] = (FScriptContainerElement)0x0;
          this->CurrentFrameIndex = 0;
          pFVar16 = pFVar16 + 0x48;
        }
        this->FrameGrabLatency = GFrameGrabberFrameLatency;
        iVar12 = GFrameGrabberFrameLatency;
      }
      iVar4 = (this->Surfaces).ArrayNum;
      uVar5 = this->CurrentFrameIndex;
      iVar9 = iVar4 + -1;
      if (iVar12 < iVar4 + -1) {
        iVar9 = iVar12;
      }
      local_res10 = 0;
      if (0 < iVar9) {
        local_res10 = iVar9;
      }
      uVar15 = uVar5 - local_res10;
      if ((int)uVar15 < 0) {
        uVar15 = (iVar4 - local_res10) + uVar5;
      }
      pTVar2 = &this->Surfaces;
      uVar13 = 0;
      if ((int)uVar5 < iVar4) {
        uVar13 = ~uVar5 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x48;
      plVar7 = *(longlong **)(pFVar19 + 0x18);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,0xffffffff,0);
        FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(pFVar19 + 0x18));
        *(undefined8 *)(pFVar19 + 0x18) = 0;
      }
      pFVar14 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      *(FEvent **)(pFVar19 + 0x18) = pFVar14;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar10 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
      *(undefined8 *)pFVar19 = uVar6;
      *(TReferenceControllerBase<1> **)(pFVar19 + 8) = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      uVar13 = 0;
      if ((int)uVar15 < (this->Surfaces).ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = (pTVar2->AllocatorInstance).Data;
      lVar3 = (longlong)(int)uVar15 * 9 + 2;
      pFVar17 = (FViewportSurfaceReader *)(pFVar19 + lVar3 * 8);
      if ((pFVar19[lVar3 * 8 + 0x32] == (FScriptContainerElement)0x0) && (0 < local_res10)) {
        pFVar17 = (FViewportSurfaceReader *)0x0;
      }
      uVar15 = 0;
      if ((int)uVar5 < (this->Surfaces).ArrayNum) {
        uVar15 = ~uVar5 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,void,FColor_*,int,int>
                    ::Call;
      local_50 = 0;
      local_60 = this;
      local_58 = uVar5;
      FViewportSurfaceReader::ResolveRenderTarget
                ((FViewportSurfaceReader *)
                 ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x48 + 0x10),pFVar17,
                 local_res18,(TFunction<void___cdecl(FColor_*,int,int)> *)local_78);
      this->CurrentFrameIndex = (this->CurrentFrameIndex + 1) % (this->Surfaces).ArrayNum;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  return;
}

// OnFrameReady @ 146be3980

void __thiscall
FFrameGrabber::OnFrameReady(FFrameGrabber *this,int param_1,FColor *param_2,int param_3,int param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType _Dst;
  int iVar11;
  ForAnyElementType local_58;
  int local_50 [2];
  TIntPoint<int>_u_0 local_48;
  undefined8 local_40;
  TReferenceControllerBase<1> *local_38;
  
  if (param_2 == (FColor *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7379574295015456345>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                       ,0x1a7,"ColorBuffer");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar11 = 0;
    uVar9 = 0;
    if (param_1 < (this->Surfaces).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Surfaces).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)param_1 * 0x48;
    plVar4 = *(longlong **)(pFVar3 + (longlong)param_1 * 0x48);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar4 + 8))
                          (plVar4,param_2,CONCAT44(param_4,param_3),(this->TargetSize).field0_0x0),
       cVar7 != '\0')) {
      local_38 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
      local_40 = *(undefined8 *)pFVar2;
      if (local_38 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(int *)((longlong)local_38 + 8) = *(int *)((longlong)local_38 + 8) + 1;
        UNLOCK();
      }
      local_48 = (this->TargetSize).field0_0x0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50[0] = 0;
      local_50[1] = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      iVar10 = (this->TargetSize).field0_0x0._s_0.Y * (this->TargetSize).field0_0x0._s_0.X;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar10,&local_58,local_50,local_50 + 1);
      memmove(local_58.Data + (longlong)iVar10 * 4,local_58.Data,(longlong)iVar8 << 2);
      if ((local_50[0] < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->TargetSize).field0_0x0._s_0.X;
      iVar10 = param_3;
      if (iVar8 < param_3) {
        iVar10 = iVar8;
      }
      iVar8 = (this->TargetSize).field0_0x0._s_0.Y;
      if (param_4 < iVar8) {
        iVar8 = param_4;
      }
      if (0 < iVar8) {
        _Dst.Data = local_58.Data;
        do {
          memcpy(_Dst.Data,param_2,(longlong)iVar10 * 4);
          iVar8 = (this->TargetSize).field0_0x0._s_0.Y;
          param_2 = param_2 + param_3;
          _Dst.Data = _Dst.Data + (longlong)iVar10 * 4;
          iVar11 = iVar11 + 1;
          if (param_4 < iVar8) {
            iVar8 = param_4;
          }
        } while (iVar11 < iVar8);
      }
      lpCriticalSection = &this->CapturedFramesMutex;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar2 = (this->CapturedFrames).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar2 + (longlong)(this->CapturedFrames).ArrayMax * 0x28)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (this->CapturedFrames).ArrayNum;
      piVar1 = &(this->CapturedFrames).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&(this->CapturedFrames).AllocatorInstance,piVar1);
      }
      (this->CapturedFrames).ArrayNum = iVar11 + 1;
      pFVar2 = (this->CapturedFrames).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + (longlong)iVar11 * 0x28) = 0;
      pFVar2 = pFVar2 + (longlong)iVar11 * 0x28;
      *(FScriptContainerElement **)pFVar2 = local_58.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + 8) = local_50[0];
      *(int *)(pFVar2 + 0xc) = local_50[1];
      local_50[0] = 0;
      local_50[1] = 0;
      *(TIntPoint<int>_u_0 *)(pFVar2 + 0x10) = local_48;
      *(undefined8 *)(pFVar2 + 0x18) = local_40;
      *(TReferenceControllerBase<1> **)(pFVar2 + 0x20) = local_38;
      local_38 = (TReferenceControllerBase<1> *)0x0;
      local_40 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  LOCK();
  (this->OutstandingFrameCount).Counter = (this->OutstandingFrameCount).Counter + -1;
  UNLOCK();
  return;
}

// Shutdown @ 146be8710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFrameGrabber::Shutdown(FFrameGrabber *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FDelegateHandle FVar4;
  FSlateApplication *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  this->State = Inactive;
  iVar2 = (this->Surfaces).ArrayNum;
  pFVar6 = (this->Surfaces).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->Surfaces).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFrameGrabber::FResolveSurface,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)(pFVar6 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(pFVar6 + 0x18));
      *(undefined8 *)(pFVar6 + 0x18) = 0;
    }
    pFVar6 = pFVar6 + 0x48;
  }
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar5 = FSlateApplication::Get();
    FVar4.ID = (this->OnBackBufferReadyToPresent).ID;
    if (FVar4.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                 (*(longlong *)&pFVar5->field_0x60 + 0x98),FVar4);
    }
  }
  (this->OnBackBufferReadyToPresent).ID = 0;
  return;
}

// StartCapturingFrames @ 146be8b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFrameGrabber::StartCapturingFrames(FFrameGrabber *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  FDelegateHandle FVar4;
  
  if (this->State == Inactive) {
    this->State = Active;
    pFVar3 = FSlateApplication::Get();
    FVar4 = TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
            ::AddRaw<FFrameGrabber>
                      ((TMulticastDelegateRegistration<void___cdecl(SWindow_&,TRefCountPtr<FRHITexture>_const_&),FDefaultTSDelegateUserPolicy>
                        *)(*(longlong *)&pFVar3->field_0x60 + 0x98),
                       (FFrameGrabber *)&stack0x00000008,(pmf_0e8e63c4)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnBackBufferReadyToPresent).ID = *FVar4.ID;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7379574295015456498>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                       ,0x10e,"State == EFrameGrabberState::Inactive");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StopCapturingFrames @ 146be8f10

void __thiscall FFrameGrabber::StopCapturingFrames(FFrameGrabber *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->State == Active) {
    this->State = PendingShutdown;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7379574295015456464>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\FrameGrabber.cpp"
                       ,0x130,"State == EFrameGrabberState::Active");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

