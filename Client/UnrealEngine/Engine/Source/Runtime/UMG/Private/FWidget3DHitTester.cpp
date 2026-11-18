// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// ArrangeCustomHitTestChildren @ 146a5e000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FWidget3DHitTester::ArrangeCustomHitTestChildren
          (FWidget3DHitTester *this,FArrangedChildren *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  uint local_144;
  float local_140;
  float local_13c;
  TReferenceControllerBase<1> *local_138;
  FSlateLayoutTransform local_130;
  FWeakObjectPtr local_120;
  FArrangedChildren *local_118;
  FWidget3DHitTester *local_110;
  FSlateLayoutTransform local_108;
  FArrangedWidget local_f8;
  FGeometry local_a8;
  FGeometry local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pTVar8 = (TReferenceControllerBase<1> *)(this->RegisteredComponents).AllocatorInstance.Data;
  bVar10 = false;
  local_144 = (this->RegisteredComponents).ArrayNum;
  uVar7 = (ulonglong)(int)local_144;
  pTVar9 = (TReferenceControllerBase<1> *)(&pTVar8->_padding_ + uVar7);
  local_138 = pTVar9;
  local_118 = param_1;
  local_110 = this;
  do {
    pTVar2 = local_138;
    if ((local_110->RegisteredComponents).ArrayNum != (int)uVar7) {
      local_148[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (pTVar8 == pTVar2) {
      return;
    }
    local_120 = (FWeakObjectPtr)pTVar8->_padding_;
    pUVar6 = FWeakObjectPtr::Get(&local_120);
    if (pUVar6 == (UObject *)0x0) {
LAB_146a5e0c1:
      bVar5 = false;
    }
    else {
      pTVar9 = *(TReferenceControllerBase<1> **)&pUVar6[0x2a].field_0x18;
      bVar10 = true;
      lVar1 = *(longlong *)&pUVar6[0x2a].field_0x10;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar1 == 0) goto LAB_146a5e0c1;
      bVar5 = true;
    }
    if (bVar10) {
      bVar10 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    if (bVar5) {
      FGeometry::FGeometry(&local_70);
      local_108.Scale = local_70.Scale;
      local_130._0_8_ = 0x3f800000;
      local_140 = (float)(int)*(undefined8 *)&pUVar6[0x25].field_0x10;
      local_130.Translation.field0_0x0._s_0.Y = 0.0;
      local_108.Translation.field0_0x0 = local_70.AbsolutePosition.field0_0x0;
      local_13c = (float)(int)((ulonglong)*(undefined8 *)&pUVar6[0x25].field_0x10 >> 0x20);
      FGeometry::FGeometry
                (&local_a8,(FDeprecateVector2DParameter *)&local_140,&local_130,&local_108,
                 &local_70.AccumulatedRenderTransform,local_70.bHasRenderTransform);
      pTVar2 = *(TReferenceControllerBase<1> **)&pUVar6[0x2a].field_0x18;
      pSVar3 = *(SWidget **)&pUVar6[0x2a].field_0x10;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pSVar3 == (SWidget *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.Widget.Object = pSVar3;
      local_f8.Widget.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FArrangedChildren::AddWidget(local_118,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    pTVar8 = (TReferenceControllerBase<1> *)&pTVar8->SharedReferenceCount;
    uVar7 = (ulonglong)local_144;
  } while( true );
}

// GetBubblePathAndVirtualCursors @ 146a73550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> * __thiscall
FWidget3DHitTester::GetBubblePathAndVirtualCursors
          (FWidget3DHitTester *this,
          TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometry *param_1,TVector2<double> *param_2,bool param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FName FVar4;
  APlayerController *this_00;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Slate3DHitTesting> FVar13;
  UWorld *pUVar14;
  ULocalPlayer *pUVar15;
  TTransform2<float> *pTVar16;
  ulonglong uVar17;
  UWidgetComponent *this_01;
  UClass *pUVar18;
  TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *pTVar19;
  FThreadStats *this_02;
  FThreadStatsPool *pFVar20;
  FStatMessage *pFVar21;
  float fVar22;
  FNameEntryId FVar23;
  double dVar24;
  double dVar25;
  FName local_140;
  FColor_u_0 local_130 [2];
  float local_128;
  float fStack_124;
  LARGE_INTEGER local_120;
  FName local_118;
  LARGE_INTEGER local_110;
  FStatMessage local_108;
  FStatMessage local_f8;
  TVector<double>_u_0 local_e8;
  FName local_d0;
  TVector2<double>_u_0 local_c8;
  double local_b8;
  double dStack_b0;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TTransform2<float> local_78 [2];
  
  FVar13 = StatPtr_STAT_Slate3DHitTesting;
  if (StatPtr_STAT_Slate3DHitTesting == (FThreadSafeStaticStat<FStat_STAT_Slate3DHitTesting>)0x0) {
    pFVar12 = ::FName::FName(&local_d0,"STAT_Slate3DHitTesting");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Slate3DHitTesting>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Slate3DHitTesting,*pFVar12,
                        L"3DHitTesting","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar4 = *(FName *)FVar13;
  FVar23 = FVar4.ComparisonIndex.Value;
  fVar22 = (float)FVar4.Number;
  if ((FVar23.Value != 0) || (fVar22 != 0.0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar23.Value;
        local_118.Number = (uint)fVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                   ,0xa4);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_128 = (float)FVar23.Value;
      fStack_124 = fVar22;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar10 = true;
      local_140 = FVar4;
    }
  }
  bVar11 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if ((((bVar11) &&
       (pUVar14 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr), pUVar14 != (UWorld *)0x0))
      && (pUVar15 = UEngine::GetLocalPlayerFromControllerId(GEngine,pUVar14,0),
         pUVar15 != (ULocalPlayer *)0x0)) &&
     (this_00 = (APlayerController *)pUVar15->_padding_, this_00 != (APlayerController *)0x0)) {
    local_128 = (float)(param_2->field0_0x0)._s_0.X;
    fStack_124 = (float)(param_2->field0_0x0)._s_0.Y;
    pTVar16 = Inverse<TTransform2<float>_>(local_78,&param_1->AccumulatedRenderTransform);
    local_120._4_4_ = fStack_124;
    local_120._0_4_ = local_128;
    uVar17 = (ulonglong)GFrameNumber;
    dVar25 = (double)((local_128 * (pTVar16->M).M[0][1] + fStack_124 * (pTVar16->M).M[1][1] +
                      (pTVar16->Trans).field0_0x0._s_0.Y) * param_1->Scale);
    dVar24 = (double)((fStack_124 * (pTVar16->M).M[1][0] + local_128 * (pTVar16->M).M[0][0] +
                      (pTVar16->Trans).field0_0x0._s_0.X) * param_1->Scale);
    if (((uVar17 != this->CachedFrame) || (dVar24 != (this->CachedScreenPosition).field0_0x0._s_0.X)
        ) || (dVar25 != (this->CachedScreenPosition).field0_0x0._s_0.Y)) {
      (this->CachedScreenPosition).field0_0x0._s_0.X = dVar24;
      (this->CachedScreenPosition).field0_0x0._s_0.Y = dVar25;
      this->CachedFrame = uVar17;
      local_c8._s_0.X = dVar24;
      local_c8._s_0.Y = dVar25;
      bVar11 = APlayerController::GetHitResultAtScreenPosition
                         (this_00,(TVector2<double> *)&local_c8._s_0,ECC_Visibility,true,
                          &this->CachedHitResult);
      if (!bVar11) goto LAB_146a739ea;
    }
    this_01 = (UWidgetComponent *)FWeakObjectPtr::Get(&(this->CachedHitResult).Component.WeakPtr);
    if (this_01 != (UWidgetComponent *)0x0) {
      pUVar18 = UWidgetComponent::StaticClass();
      iVar3 = (int)pUVar18->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar18->_padding_)) &&
         ((this_01->bReceiveHardwareInput != false &&
          ((((double)(this_01->CurrentDrawSize).field0_0x0._s_0.X != 0.0 &&
            ((double)(this_01->CurrentDrawSize).field0_0x0._s_0.Y != 0.0)) &&
           (USceneComponent::GetForwardVector
                      ((USceneComponent *)this_01,(TVector<double> *)&local_e8._s_0),
           (*(double *)&(this->CachedHitResult).ImpactPoint.field_0x8 -
           *(double *)&(this->CachedHitResult).TraceStart.field_0x8) * local_e8._s_0.Y +
           (*(double *)&(this->CachedHitResult).ImpactPoint -
           *(double *)&(this->CachedHitResult).TraceStart) * local_e8._s_0.X +
           (*(double *)&(this->CachedHitResult).ImpactPoint.field_0x10 -
           *(double *)&(this->CachedHitResult).TraceStart.field_0x10) * local_e8._s_0.Z < 0.0))))))
      {
        uVar6 = *(undefined8 *)&(this->CachedHitResult).Location;
        uVar7 = *(undefined8 *)&(this->CachedHitResult).Location.field_0x8;
        uVar2 = *(undefined8 *)&(this->CachedHitResult).Location.field_0x10;
        if ((this_01->GeometryMode != Plane) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4348376515700852877>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                                ,0x88d,"GeometryMode == EWidgetGeometryMode::Plane"), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar19 = (TArray<FWidgetAndPointer,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar19;
        }
        local_98 = uVar6;
        uStack_90 = uVar7;
        local_88 = uVar2;
        (**(code **)(*(longlong *)this_01 + 0xb48))(this_01,&local_98,&local_b8);
        local_a8._s_0.X = local_b8;
        local_a8._s_0.Y = dStack_b0;
        UWidgetComponent::GetHitWidgetPath
                  (this_01,__return_storage_ptr__,(TVector2<double> *)&local_a8._s_0,param_3,0.0);
        if (bVar8) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar9) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (!bVar10) {
          return __return_storage_ptr__;
        }
        if (local_140 == (FName)0x0) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::bPrimaryDisableForever != false) {
          return __return_storage_ptr__;
        }
        if (FThreadStats::TlsSlot == 0xffffffff) {
          return __return_storage_ptr__;
        }
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        if (this_02->ScopeCount <= this_02->bWaitForExplicitFlush) {
          return __return_storage_ptr__;
        }
        local_108.NameAndInfo.Number = local_140.Number & 0xffff6fff | 0x6000;
        local_108.NameAndInfo.Index.Value = local_140.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_120);
        local_108.StatData.Pad = (uchar  [8])(local_120.QuadPart & 0xffffffff);
        pFVar21 = &local_108;
        goto LAB_146a73a97;
      }
    }
  }
LAB_146a739ea:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar10) {
    return __return_storage_ptr__;
  }
  if (local_140 == (FName)0x0) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return __return_storage_ptr__;
  }
  this_02 = TlsGetValue(FThreadStats::TlsSlot);
  if (this_02 == (FThreadStats *)0x0) {
    pFVar20 = FThreadStatsPool::Get();
    this_02 = FThreadStatsPool::GetFromPool(pFVar20);
  }
  if (this_02->ScopeCount <= this_02->bWaitForExplicitFlush) {
    return __return_storage_ptr__;
  }
  local_f8.NameAndInfo.Number = local_140.Number & 0xffff6fff | 0x6000;
  local_f8.NameAndInfo.Index.Value = local_140.ComparisonIndex.Value.Value;
  QueryPerformanceCounter(&local_110);
  local_f8.StatData.Pad[4] = '\0';
  local_f8.StatData.Pad[5] = '\0';
  local_f8.StatData.Pad[6] = '\0';
  local_f8.StatData.Pad[7] = '\0';
  local_f8.StatData.Pad[0] = local_110.s.LowPart._0_1_;
  local_f8.StatData.Pad[1] = local_110.s.LowPart._1_1_;
  local_f8.StatData.Pad[2] = local_110.s.LowPart._2_1_;
  local_f8.StatData.Pad[3] = local_110.s.LowPart._3_1_;
  pFVar21 = &local_f8;
LAB_146a73a97:
  FThreadStats::AddStatMessage(this_02,pFVar21);
  piVar1 = &this_02->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(this_02,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_02,false,false);
  }
  return __return_storage_ptr__;
}

// TranslateMouseCoordinateForCustomHitTestChild @ 146a998b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<FVirtualPointerPosition> * __thiscall
FWidget3DHitTester::TranslateMouseCoordinateForCustomHitTestChild
          (FWidget3DHitTester *this,TOptional<FVirtualPointerPosition> *__return_storage_ptr__,
          SWidget *param_1,FGeometry *param_2,TVector2<double> *param_3,TVector2<double> *param_4)

{
  uint uVar1;
  SWidget *pSVar2;
  APlayerController *this_00;
  code *pcVar3;
  TVector2<double>_u_0 TVar4;
  double dVar5;
  double dVar6;
  FWeakObjectPtr *pFVar7;
  bool bVar8;
  UWorld *pUVar9;
  TOptional<FVirtualPointerPosition> *pTVar10;
  ULocalPlayer *pUVar11;
  TTransform2<float> *pTVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  ulonglong uVar15;
  bool bVar16;
  FWeakObjectPtr FVar17;
  FWeakObjectPtr *pFVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  FWeakObjectPtr local_e8;
  double local_e0;
  double local_d8;
  TVector2<double>_u_0 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  TTransform2<float> local_98 [4];
  
  bVar16 = false;
  local_100 = (FDeprecateSlateVector2D)param_1;
  bVar8 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (bVar8) {
    pUVar9 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    bVar8 = UWorld::IsGameWorld(pUVar9);
    if (bVar8) {
      pUVar9 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
      pUVar11 = UEngine::GetLocalPlayerFromControllerId(GEngine,pUVar9,0);
      if ((pUVar11 != (ULocalPlayer *)0x0) && (pUVar11->_padding_ != 0)) {
        fVar20 = param_2->Scale;
        fVar19 = (float)(param_3->field0_0x0)._s_0.X;
        fVar21 = (float)(param_3->field0_0x0)._s_0.Y;
        pTVar12 = Inverse<TTransform2<float>_>(local_98,&param_2->AccumulatedRenderTransform);
        pFVar18 = (FWeakObjectPtr *)(this->RegisteredComponents).AllocatorInstance.Data;
        uVar1 = (this->RegisteredComponents).ArrayNum;
        uVar15 = (ulonglong)(int)uVar1;
        local_108 = (FDeprecateSlateVector2D)(pFVar18 + uVar15);
        fVar22 = fVar21 * (pTVar12->M).M[1][0] + fVar19 * (pTVar12->M).M[0][0] +
                 (pTVar12->Trans).field0_0x0._s_0.X;
        fVar19 = fVar19 * (pTVar12->M).M[0][1] + fVar21 * (pTVar12->M).M[1][1] +
                 (pTVar12->Trans).field0_0x0._s_0.Y;
        local_118 = CONCAT44(fVar19,fVar22);
        local_f8 = local_118;
        fVar19 = fVar20 * fVar19;
        fVar20 = fVar20 * fVar22;
        local_118 = CONCAT44(fVar19,fVar20);
        local_f0 = local_118;
        dVar5 = (double)fVar20;
        dVar6 = (double)fVar19;
        uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
        FVar17 = local_e8;
        while( true ) {
          pFVar7 = (FWeakObjectPtr *)local_108;
          if ((this->RegisteredComponents).ArrayNum != (int)uVar15) {
            `TCheckedPointerIterator<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_110);
          }
          if (pFVar18 == pFVar7) break;
          local_e8 = *pFVar18;
          pUVar13 = FWeakObjectPtr::Get(&local_e8);
          if (pUVar13 == (UObject *)0x0) {
LAB_146a99aeb:
            bVar8 = false;
          }
          else {
            FVar17 = *(FWeakObjectPtr *)&pUVar13[0x2a].field_0x18;
            bVar16 = true;
            pSVar2 = *(SWidget **)&pUVar13[0x2a].field_0x10;
            if (FVar17 != (FWeakObjectPtr)0x0) {
              LOCK();
              *(atomic<int> *)((longlong)FVar17 + 8) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar17 + 8) + 1);
              UNLOCK();
            }
            if ((FDeprecateSlateVector2D)pSVar2 != local_100) goto LAB_146a99aeb;
            bVar8 = true;
          }
          if (bVar16) {
            bVar16 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar17);
          }
          if (bVar8) {
            this_00 = (APlayerController *)pUVar11->_padding_;
            if ((((ulonglong)GFrameNumber == this->CachedFrame) &&
                (dVar5 == (this->CachedScreenPosition).field0_0x0._s_0.X)) &&
               (dVar6 == (this->CachedScreenPosition).field0_0x0._s_0.Y)) {
LAB_146a99b61:
              pUVar14 = FWeakObjectPtr::Get(&(this->CachedHitResult).Component.WeakPtr);
              if (((pUVar14 != (UObject *)0x0) && (pUVar13[0x26].field_0x8 != '\0')) &&
                 (((double)(int)*(undefined8 *)&pUVar13[0x25].field_0x10 != 0.0 &&
                  (((double)(int)((ulonglong)*(undefined8 *)&pUVar13[0x25].field_0x10 >> 0x20) !=
                    0.0 && (pUVar13 == pUVar14)))))) {
                local_b8 = *(undefined8 *)&(this->CachedHitResult).Location;
                uStack_b0 = *(undefined8 *)&(this->CachedHitResult).Location.field_0x8;
                local_a8 = *(undefined8 *)&(this->CachedHitResult).Location.field_0x10;
                (**(code **)(*(longlong *)pUVar13 + 0xb48))(pUVar13,&local_b8,&local_e0);
                local_108._4_4_ = (float)local_d8;
                local_108._0_4_ = (float)local_e0;
                (__return_storage_ptr__->TypedValue).CurrentCursorPosition = local_108;
                local_100._4_4_ = (float)local_d8;
                local_100._0_4_ = (float)local_e0;
                (__return_storage_ptr__->TypedValue).LastCursorPosition = local_100;
                __return_storage_ptr__->bIsSet = true;
                return __return_storage_ptr__;
              }
            }
            else {
              this->CachedFrame = (ulonglong)GFrameNumber;
              TVar4._8_4_ = SUB84(dVar6,0);
              TVar4._s_0.X = dVar5;
              TVar4._12_4_ = uVar23;
              (this->CachedScreenPosition).field0_0x0 = TVar4;
              if (this_00 != (APlayerController *)0x0) {
                local_c8._8_4_ = SUB84(dVar6,0);
                local_c8._s_0.X = dVar5;
                local_c8._12_4_ = uVar23;
                bVar8 = APlayerController::GetHitResultAtScreenPosition
                                  (this_00,(TVector2<double> *)&local_c8._s_0,ECC_Visibility,true,
                                   &this->CachedHitResult);
                if (bVar8) goto LAB_146a99b61;
              }
            }
          }
          uVar15 = (ulonglong)uVar1;
          pFVar18 = pFVar18 + 1;
        }
      }
    }
    else {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4348376515700850909>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetComponent.cpp"
                         ,0xdd,"World->IsGameWorld()");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TOptional<FVirtualPointerPosition> *)(*pcVar3)();
        return pTVar10;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// UnregisterWidgetComponent @ 146a9a070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
FWidget3DHitTester::UnregisterWidgetComponent(FWidget3DHitTester *this,UWidgetComponent *param_1)

{
  TArray<TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *this_00;
  uint uVar9;
  FWeakObjectPtr local_res8;
  UWidgetComponent *local_res10;
  
  pTVar1 = &this->RegisteredComponents;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidgetComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidgetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar7 = (this->RegisteredComponents).ArrayNum;
  this_00 = pFVar4;
  while( true ) {
    if (this_00 == pFVar4 + (longlong)iVar7 * 8) {
      return;
    }
    bVar6 = TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr>::UEOpEquals<UWidgetComponent,bool>
                      ((TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)this_00,
                       (TWeakObjectPtr<UWidgetComponent,FWeakObjectPtr> *)&local_res8);
    if (bVar6) break;
    this_00 = this_00 + 8;
  }
  uVar8 = (uint)((longlong)this_00 - (longlong)pFVar4 >> 3);
  if (uVar8 == 0xffffffff) {
    return;
  }
  uVar9 = 0;
  if ((int)(uVar8 + 1) <= (this->RegisteredComponents).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (this->RegisteredComponents).ArrayNum;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar7 = iVar3 + ~uVar8;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar4 + (longlong)(int)uVar8 * 8,pFVar4 + (longlong)(iVar3 - iVar7) * 8,
            (longlong)iVar7 << 3);
  }
  piVar2 = &(this->RegisteredComponents).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,&pTVar1->AllocatorInstance,(this->RegisteredComponents).ArrayNum,
             &(this->RegisteredComponents).ArrayMax);
  return;
}

