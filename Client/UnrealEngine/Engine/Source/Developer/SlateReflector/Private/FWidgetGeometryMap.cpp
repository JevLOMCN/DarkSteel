// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// GetGeometry @ 142e9e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FPaintGeometry * __thiscall
NavigationSimulationOverlay::FWidgetGeometryMap::GetGeometry
          (FWidgetGeometryMap *this,TSharedRef<SWidget_const_,1> *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  atomic<int> aVar6;
  float fVar7;
  uint uVar8;
  EVisibility EVar9;
  TVector2<float>_u_0 this_00;
  bool bVar10;
  atomic<int> aVar11;
  FPaintGeometry *pFVar12;
  FSlateApplication *pFVar13;
  TOptional<FArrangedWidget> *pTVar14;
  TOptional<FArrangedWidget> *pTVar15;
  FDeprecateSlateVector2D FVar16;
  FPaintGeometry *pFVar17;
  ForElementType<FArrangedWidget> FVar18;
  byte bVar19;
  FPaintGeometry *pFVar20;
  FPaintGeometry *pFVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined8 local_380;
  TReferenceControllerBase<1> *local_378;
  TVector2<float>_u_0 local_368;
  TReferenceControllerBase<1> *pTStack_360;
  SWidget *local_358;
  float local_350;
  float fStack_34c;
  undefined8 local_344;
  undefined8 local_338;
  FDeprecateSlateVector2D local_328;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  undefined4 uStack_314;
  undefined1 auStack_310 [8];
  undefined8 local_308;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  undefined4 uStack_2f4;
  SWidget *local_2f0;
  TReferenceControllerBase<1> *local_2e8;
  SWidget *local_2d8;
  TReferenceControllerBase<1> *local_2d0;
  FPaintGeometry *local_2c8;
  FPaintGeometry *local_2c0;
  TSharedRef<SWidget_const_,1> local_2b8;
  TSharedRef<SWidget_const_,1> local_2a8;
  TTransform2<float> local_298;
  TTransform2<float> local_280;
  TTransform2<float> local_268;
  TTransform2<float> local_250;
  TOptional<FArrangedWidget> local_238;
  TVector2<float>_u_0 local_1e8;
  float local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  float local_1cc [2];
  float afStack_1c4 [2];
  TVector2<float>_u_0 local_1bc;
  byte local_1b4;
  FWidgetPath local_1b0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  local_358 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar12 = TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
            ::Find((TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
                    *)this,(ulong64)local_358);
  if (pFVar12 != (FPaintGeometry *)0x0) {
    return pFVar12;
  }
  pFVar13 = FSlateApplication::Get();
  pcVar3 = *(code **)(*(longlong *)pFVar13 + 0x28);
  local_2d8 = param_1->Object;
  local_2d0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_2d0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2d0->SharedReferenceCount = (atomic<int>)((int)local_2d0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar3)(pFVar13,&local_368,&local_2d8);
  pFVar12 = (FPaintGeometry *)0x0;
  if (local_368 != (TVector2<float>_u_0)0x0) {
    do {
      if ((local_368 == (TVector2<float>_u_0)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FPaintGeometry *)(*pcVar3)();
        return pFVar12;
      }
      pTVar2 = *(TReferenceControllerBase<1> **)((longlong)local_368 + 0x1d0);
      pFVar17 = pFVar12;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar2->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pFVar17 = (FPaintGeometry *)0x0;
            goto LAB_142e9e48c;
          }
          LOCK();
          aVar11 = pTVar2->SharedReferenceCount;
          bVar10 = aVar6 == aVar11;
          if (bVar10) {
            pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar11 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar11;
        } while (!bVar10);
        pFVar17 = *(FPaintGeometry **)((longlong)local_368 + 0x1c8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pFVar17 == (FPaintGeometry *)0x0) goto LAB_142e9e491;
      if ((local_368 == (TVector2<float>_u_0)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FPaintGeometry *)(*pcVar3)();
        return pFVar12;
      }
      pFVar17 = *(FPaintGeometry **)((longlong)local_368 + 0x1d0);
      pFVar20 = pFVar17;
      pFVar21 = pFVar12;
      if (pFVar17 == (FPaintGeometry *)0x0) {
LAB_142e9e2f5:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pFVar12 = (FPaintGeometry *)(*pcVar3)();
          return pFVar12;
        }
        pFVar17 = pFVar20;
        if ((pFVar21 == (FPaintGeometry *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          pFVar12 = (FPaintGeometry *)(*pcVar3)();
          return pFVar12;
        }
      }
      else {
        fVar7 = pFVar17->DrawScale;
        do {
          pFVar20 = pFVar12;
          if (fVar7 == 0.0) goto LAB_142e9e2f5;
          LOCK();
          fVar22 = pFVar17->DrawScale;
          bVar10 = fVar7 == fVar22;
          if (bVar10) {
            pFVar17->DrawScale = (float)((int)fVar7 + 1);
            fVar22 = fVar7;
          }
          UNLOCK();
          fVar7 = fVar22;
        } while (!bVar10);
        pFVar21 = *(FPaintGeometry **)((longlong)local_368 + 0x1c8);
        pFVar20 = pFVar17;
        if (pFVar21 == (FPaintGeometry *)0x0) goto LAB_142e9e2f5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentApplication.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                              ,0x141,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FPaintGeometry *)(*pcVar3)();
        return pFVar12;
      }
      bVar10 = IsInGameThread();
      if ((((!bVar10) && (bVar10 = IsInSlateThread(), !bVar10)) &&
          (bVar10 = (*IsInAsyncLoadingThread)(), !bVar10)) &&
         ((bVar10 = IsInParallelLoadingThread(), !bVar10 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L""), bVar10)))) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FPaintGeometry *)(*pcVar3)();
        return pFVar12;
      }
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FPaintGeometry *)(*pcVar3)();
        return pFVar12;
      }
      pFVar13 = FSlateApplication::CurrentApplication.Object;
      lVar4 = *(longlong *)FSlateApplication::CurrentApplication.Object;
      if (pFVar17 != (FPaintGeometry *)0x0) {
        LOCK();
        pFVar17->DrawScale = (float)((int)pFVar17->DrawScale + 1);
        UNLOCK();
      }
      local_2c8 = pFVar21;
      local_2c0 = pFVar17;
      (**(code **)(lVar4 + 0x28))(pFVar13,&local_380,&local_2c8);
      pTVar2 = pTStack_360;
      if (local_380 == (TVector2<float>_u_0)0x0) goto LAB_142e9e47f;
      if (local_378 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_378->SharedReferenceCount = (atomic<int>)((int)local_378->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_368 = local_380;
      pTStack_360 = local_378;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar17);
    } while( true );
  }
LAB_142e9e891:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_360);
  return pFVar12;
LAB_142e9e47f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_378);
LAB_142e9e48c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar17);
LAB_142e9e491:
  if ((local_368 == (TVector2<float>_u_0)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FPaintGeometry *)(*pcVar3)();
    return pFVar12;
  }
  pTVar2 = pTStack_360;
  this_00 = local_368;
  if (pTStack_360 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_360->SharedReferenceCount = (atomic<int>)((int)pTStack_360->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_368 == (TVector2<float>_u_0)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pFVar12 = (FPaintGeometry *)(*pcVar3)();
    return pFVar12;
  }
  FWidgetPath::FWidgetPath(&local_1b0);
  pFVar13 = FSlateApplication::Get();
  EVar9 = EVisibility::Visible;
  local_2b8.Object = param_1->Object;
  local_2b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar10 = FSlateApplication::GeneratePathToWidgetUnchecked(pFVar13,&local_2b8,&local_1b0,EVar9);
  if (bVar10) {
    local_2a8.Object = param_1->Object;
    local_2a8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar14 = FWidgetPath::FindArrangedWidget(&local_1b0,&local_238,&local_2a8);
    pTVar15 = (TOptional<FArrangedWidget> *)FArrangedWidget::GetNullWidget();
    if (pTVar14->bIsSet != false) {
      pTVar15 = pTVar14;
    }
    local_328 = (pTVar15->TypedValue).Geometry.Size;
    uVar1 = *(undefined8 *)&(pTVar15->TypedValue).Geometry.Scale;
    local_2f0 = (pTVar15->TypedValue).Widget.Object;
    uVar5 = *(undefined8 *)&(pTVar15->TypedValue).Geometry.AbsolutePosition.field0_0x0._s_0.Y;
    auStack_310 = *(undefined1 (*) [8])
                   ((longlong)&(pTVar15->TypedValue).Geometry.Position.field0_0x0 + 4);
    local_2e8 = (pTVar15->TypedValue).Widget.SharedReferenceCount.ReferenceController;
    fStack_320 = (float)uVar1;
    fStack_31c = (float)((ulonglong)uVar1 >> 0x20);
    fStack_318 = (float)uVar5;
    uStack_314 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar1 = *(undefined8 *)
             &(pTVar15->TypedValue).Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y;
    fStack_2f8 = (float)uVar1;
    uStack_2f4 = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_308 = *(undefined8 *)
                 ((pTVar15->TypedValue).Geometry.AccumulatedRenderTransform.M.M[0] + 1);
    uVar1 = *(undefined8 *)((pTVar15->TypedValue).Geometry.AccumulatedRenderTransform.M.M[1] + 1);
    fStack_300 = (float)uVar1;
    fStack_2fc = (float)((ulonglong)uVar1 >> 0x20);
    if (local_2e8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_2e8->SharedReferenceCount = (atomic<int>)((int)local_2e8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_238.bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_238.TypedValue.Widget.SharedReferenceCount.ReferenceController);
    }
    FVar16 = SWindow::GetPositionInScreen((SWindow *)this_00);
    fVar7 = fStack_320;
    uVar8 = __xmm_80000000800000008000000080000000;
    local_298.Trans.field0_0x0._s_0.X =
         (float)(*(uint *)FVar16 ^ __xmm_80000000800000008000000080000000);
    local_298.Trans.field0_0x0._s_0.Y =
         (float)(*(uint *)((longlong)FVar16 + 4) ^ __xmm_80000000800000008000000080000000);
    local_388 = (TVector2<float>_u_0)
                CONCAT44(local_298.Trans.field0_0x0._s_0.Y,local_298.Trans.field0_0x0._s_0.X);
    local_344 = local_388;
    local_298.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_298.M.M[0][1] = _UNK_15076b184;
    local_298.M.M[1][0] = _UNK_15076b188;
    local_298.M.M[1][1] = _UNK_15076b18c;
    local_380 = (TVector2<float>_u_0)
                CONCAT44(local_298.Trans.field0_0x0._s_0.Y + fStack_318,
                         local_298.Trans.field0_0x0._s_0.X + fStack_31c);
    Concatenate<TTransform2<float>_>(&local_280,(TTransform2<float> *)(auStack_310 + 4),&local_298);
    fStack_2fc = local_280.Trans.field0_0x0._0_4_;
    fStack_2f8 = local_280.Trans.field0_0x0._4_4_;
    local_338 = local_380;
    auStack_310._4_4_ = local_280.M.M[0][0];
    fStack_300 = local_280.M.M[1][1];
    fStack_31c = SUB84(local_380,0);
    fStack_318 = (float)((ulonglong)local_380 >> 0x20);
    fVar22 = __real_3f800000 /
             SQRT(local_280.M.M[0][1] * local_280.M.M[0][1] +
                  local_280.M.M[0][0] * local_280.M.M[0][0]);
    fVar24 = __real_3f800000 /
             SQRT(local_280.M.M[1][1] * local_280.M.M[1][1] +
                  local_280.M.M[1][0] * local_280.M.M[1][0]);
    fVar23 = (float)((uint)fVar22 ^ uVar8);
    fVar25 = (float)((uint)fVar24 ^ uVar8);
    local_380._0_4_ = local_328._0_4_;
    local_350 = fVar22 + fVar22 + (float)(undefined4)local_380;
    local_380._4_4_ = local_328._4_4_;
    fStack_34c = fVar24 + fVar24 + (float)local_380._4_4_;
    local_380._4_4_ = fVar25;
    local_380._0_4_ = fVar23;
    local_388._4_4_ = fVar7 * fVar25 + fStack_318;
    local_388._0_4_ = fVar7 * fVar23 + fStack_31c;
    bVar19 = (byte)uStack_2f4 & 1;
    local_268.Trans.field0_0x0 = local_380;
    local_268.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_268.M.M[0][1] = _UNK_15076b184;
    local_268.M.M[1][0] = _UNK_15076b188;
    local_268.M.M[1][1] = _UNK_15076b18c;
    fStack_320 = fVar7;
    Concatenate<TTransform2<float>_>(&local_250,&local_268,(TTransform2<float> *)(auStack_310 + 4));
    local_1e8 = local_388;
    local_1d4 = CONCAT44(fStack_34c,local_350);
    local_1e0 = fVar7;
    local_1b4 = bVar19 * '\x02' | local_1b4 & 0xfc;
    local_1dc = 0;
    local_1cc[0] = local_250.M.M[0][0];
    local_1cc[1] = local_250.M.M[0][1];
    afStack_1c4[0] = local_250.M.M[1][0];
    afStack_1c4[1] = local_250.M.M[1][1];
    local_1bc = local_250.Trans.field0_0x0;
    TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
    ::Emplace<unsigned___int64_const_&,FPaintGeometry_const_&>
              ((TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
                *)this,(ulong64 *)&local_358,(FPaintGeometry *)&local_1e8._s_0);
    pFVar12 = TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
              ::Find((TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
                      *)this,(ulong64)local_358);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e8);
  }
  if (local_1b0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.VirtualPointerPositions.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.TopLevelWindow.SharedReferenceCount.ReferenceController);
  FVar18 = (ForElementType<FArrangedWidget>)&local_1b0.Widgets.Array;
  if (local_1b0.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FVar18 = local_1b0.Widgets.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar18,local_1b0.Widgets.Array.ArrayNum);
  if (local_1b0.Widgets.Array.AllocatorInstance.SecondaryData !=
      (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_1b0.Widgets.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  goto LAB_142e9e891;
}

