// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 4

// FTimecodeEstimator @ 14603fc50

FTimecodeEstimator * __thiscall
UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::FTimecodeEstimator
          (FTimecodeEstimator *this,ulong64 param_1,UTimecodeProvider *param_2,
          IClockedTimeStep *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FTimecodeEstimator *pFVar4;
  
  (this->StartClockTime).bIsSet = false;
  this->TimecodeProvider = param_2;
  (this->LinearRegressionFunction).Slope = 1.0;
  this->EngineCustomTimeStep = param_3;
  (this->LinearRegressionFunction).Offset = 0.0;
  FCachedLinearRegressionSums::FCachedLinearRegressionSums(&this->ClockToTimecodeSamples,param_1);
  lVar3 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2);
  this->LastFrameRate = *(FFrameRate *)(lVar3 + 8);
  if (param_1 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4545176096206749600>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Estimation\\TimecodeEstimator.cpp"
                       ,0x60,"InNumSamples > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTimecodeEstimator *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// EstimateFrameTime @ 146047de0

/* WARNING: Enum "Type": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::EstimateFrameTime
          (FTimecodeEstimator *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  float *pfVar1;
  code *pcVar2;
  FFrameTime FVar3;
  atomic<double> aVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  int iVar7;
  FQualifiedFrameTime *pFVar8;
  longlong lVar9;
  double dVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  double dVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined1 local_res8 [8];
  FFrameNumber local_res18 [2];
  FFrameTime local_res20;
  FFrameTime local_88;
  undefined8 local_80;
  FFrameRate local_78;
  FString local_70;
  FTimecode local_60 [3];
  
  if (((this->ClockToTimecodeSamples).Samples.bIsBufferFull == false) &&
     ((this->ClockToTimecodeSamples).Samples.NextIndexToInsert == 0)) {
LAB_146047e1c:
    if (4 < (byte)LogTimeManagement._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
    }
    (**(code **)(this->TimecodeProvider->_padding_ + 0x2c0))
              (this->TimecodeProvider,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if ((this->StartClockTime).bIsSet == false) {
    local_res8[0] = 0;
    bVar6 = `UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::EstimateFrameTime'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar6) goto LAB_146047e1c;
  }
  aVar4 = FApp::CurrentTime;
  if (((this->StartClockTime).bIsSet == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FQualifiedFrameTime *)(*pcVar2)();
    return pFVar8;
  }
  pTVar5 = CVarUnclearEstimationSubframeThreshold.Ref;
  dVar15 = (double)aVar4 - (this->StartClockTime).TypedValue;
  dVar12 = ((dVar15 * (this->LinearRegressionFunction).Slope +
            (this->LinearRegressionFunction).Offset) * (double)(this->LastFrameRate).Numerator) /
           (double)(this->LastFrameRate).Denominator;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar12;
  auVar11 = roundpd(in_XMM2,auVar11,1);
  dVar10 = auVar11._0_8_;
  dVar12 = dVar12 - dVar10;
  if (__real_41dfffffffc00000 <= dVar10) {
    dVar10 = __real_41dfffffffc00000;
  }
  if (dVar10 <= __real_c1e0000000000000) {
    dVar10 = __real_c1e0000000000000;
  }
  iVar7 = (int)dVar12;
  fVar13 = (float)dVar12 - (float)iVar7;
  if ((0.0 < fVar13) && (::FFrameTime::MaxSubframe <= fVar13)) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar13) {
    fVar13 = ::FFrameTime::MaxSubframe;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  iVar7 = (int)dVar10 + iVar7;
  fVar14 = (float)((uint)(fVar13 - __real_3f000000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_res20.FrameNumber.Value = iVar7;
  local_res20.SubFrame = fVar13;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 4;
  }
  if ((2 < (byte)LogTimeManagement._0_1_) &&
     (pfVar1 = (float *)((longlong)pTVar5->ShadowedValue + lVar9),
     fVar14 < *pfVar1 || fVar14 == *pfVar1)) {
    local_80 = CONCAT44(local_res20.SubFrame,local_res20.FrameNumber.Value);
    local_78 = this->LastFrameRate;
    bVar6 = FTimecode::UseDropFormatTimecode(&local_78);
    local_res18[0].Value = iVar7;
    FTimecode::FromFrameNumber(local_60,local_res18,&local_78,bVar6);
    local_60[0].Subframe = local_80._4_4_;
    FTimecode::ToString(local_60,&local_70,false,true);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  if (__real_3f000000 <= fVar13) {
    iVar7 = iVar7 + 1;
  }
  local_88.SubFrame = 0.0;
  local_88.FrameNumber.Value = iVar7;
  LogEstimatedTime(dVar15,this->EngineCustomTimeStep,this->TimecodeProvider,&local_88,&local_res20,
                   &this->LastFrameRate);
  FVar3.SubFrame = local_88.SubFrame;
  FVar3.FrameNumber.Value = local_88.FrameNumber.Value;
  __return_storage_ptr__->Time = FVar3;
  __return_storage_ptr__->Rate = this->LastFrameRate;
  return __return_storage_ptr__;
}

// FetchAndUpdate @ 14604b670

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> * __thiscall
UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::FetchAndUpdate
          (FTimecodeEstimator *this,
          TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats>
          *__return_storage_ptr__)

{
  FCachedLinearRegressionSums *pFVar1;
  ulong64 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TConsoleVariableData<bool> *pTVar10;
  FFrameTime FVar11;
  FFrameRate FVar12;
  bool bVar13;
  uint uVar14;
  TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *pTVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  FFrameNumber local_res8 [2];
  float fStackX_1c;
  undefined1 local_108 [32];
  undefined1 local_e8;
  double local_e0;
  ForAnyElementType local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  TVector2<double>_u_0 local_b0;
  FFrameTime local_a0;
  FFrameRate local_98;
  FFrameTime local_90;
  FFrameRate FStack_88;
  FString local_80;
  FTimecode local_70 [3];
  
  (**(code **)((longlong)*this->EngineCustomTimeStep + 0x10))(this->EngineCustomTimeStep,local_108);
  if (local_108[8] == false) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  if (((this->StartClockTime).bIsSet == false) && ((FTimecodeEstimator *)local_108 != this)) {
    (this->StartClockTime).TypedValue = (double)local_108._0_8_;
    (this->StartClockTime).bIsSet = true;
  }
  (**(code **)(this->TimecodeProvider->_padding_ + 0x2b8))();
  (**(code **)(this->TimecodeProvider->_padding_ + 0x2c0))(this->TimecodeProvider,&local_90);
  FVar12 = FStack_88;
  lVar18 = 0;
  iVar21 = (this->LastFrameRate).Numerator;
  iVar17 = FStack_88.Numerator;
  if ((iVar17 != iVar21) || (FStack_88.Denominator != (this->LastFrameRate).Denominator)) {
    uVar6 = (this->ClockToTimecodeSamples).Samples.Data.ArrayNum;
    local_108._16_8_ = (UTimecodeProvider *)0x0;
    local_108._24_8_ = (IClockedTimeStep *)0x0;
    local_e8 = 0;
    local_e0 = 0.0;
    if ((int)uVar6 < 1) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar6,(ForAnyElementType *)(local_108 + 0x10),(int *)(local_108 + 0x18),
                 (int *)(local_108 + 0x1c));
    }
    pFVar1 = &this->ClockToTimecodeSamples;
    local_b8 = 0.0;
    local_d8.Data._0_4_ = 0;
    local_d8.Data._4_4_ = 0;
    iVar21 = 0;
    iVar22 = 0;
    uVar23._0_1_ = false;
    uVar23._1_3_ = 0;
    uVar24 = 0;
    uStack_c0._0_4_ = 0;
    uStack_c0._4_4_ = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    uStack_d0._0_4_ = 0;
    uStack_d0._4_4_ = 0;
    local_c8._0_1_ = false;
    local_c8._1_7_ = 0;
    uStack_c0 = 0;
    uVar19 = local_d8.Data._0_4_;
    uVar20 = local_d8.Data._4_4_;
    uVar25 = (undefined4)uStack_c0;
    uVar26 = uStack_c0._4_4_;
    if (pFVar1 != (FCachedLinearRegressionSums *)(local_108 + 0x10)) {
      pFVar16 = (pFVar1->Samples).Data.AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
        iVar21 = (int)uStack_d0;
        iVar22 = uStack_d0._4_4_;
        uVar23 = (undefined4)local_c8;
        uVar24 = local_c8._4_4_;
      }
      (pFVar1->Samples).Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108._16_8_;
      (this->ClockToTimecodeSamples).Samples.Data.ArrayNum = local_108._24_4_;
      local_108._16_8_ = (UTimecodeProvider *)0x0;
      (this->ClockToTimecodeSamples).Samples.Data.ArrayMax = local_108._28_4_;
      local_108._24_8_ = (IClockedTimeStep *)0x0;
      uVar19 = local_d8.Data._0_4_;
      uVar20 = local_d8.Data._4_4_;
      uVar25 = (undefined4)uStack_c0;
      uVar26 = uStack_c0._4_4_;
    }
    (this->ClockToTimecodeSamples).Samples.bIsBufferFull = (bool)local_e8;
    (this->ClockToTimecodeSamples).Samples.NextIndexToInsert = (ulong64)local_e0;
    *(undefined4 *)&(this->ClockToTimecodeSamples).CachedSums.SumX = uVar19;
    *(undefined4 *)((longlong)&(this->ClockToTimecodeSamples).CachedSums.SumX + 4) = uVar20;
    *(int *)&(this->ClockToTimecodeSamples).CachedSums.SumY = iVar21;
    *(int *)((longlong)&(this->ClockToTimecodeSamples).CachedSums.SumY + 4) = iVar22;
    *(undefined4 *)&(this->ClockToTimecodeSamples).CachedSums.SumXxY = uVar23;
    *(undefined4 *)((longlong)&(this->ClockToTimecodeSamples).CachedSums.SumXxY + 4) = uVar24;
    *(undefined4 *)&(this->ClockToTimecodeSamples).CachedSums.SumOfSquaredXes = uVar25;
    *(undefined4 *)((longlong)&(this->ClockToTimecodeSamples).CachedSums.SumOfSquaredXes + 4) =
         uVar26;
    (this->ClockToTimecodeSamples).CachedSums.Num = (ulong64)local_b8;
    if ((UTimecodeProvider *)local_108._16_8_ != (UTimecodeProvider *)0x0) {
      FMemory::Free((void *)local_108._16_8_);
    }
    this->LastFrameRate = FVar12;
    iVar21 = iVar17;
  }
  iVar17 = (this->LastFrameRate).Denominator;
  fStackX_1c = local_90.SubFrame;
  dVar8 = ((double)((longlong)local_90.FrameNumber.Value.Value * (longlong)iVar17) +
          (double)fStackX_1c * (double)iVar17) / (double)iVar21;
  if ((local_108[8] == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *)(*pcVar7)()
    ;
    return pTVar15;
  }
  if (((this->StartClockTime).bIsSet == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar13)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *)(*pcVar7)()
    ;
    return pTVar15;
  }
  dVar9 = (double)local_108._0_8_ - (this->StartClockTime).TypedValue;
  local_b0._s_0.X = dVar9;
  local_b0._s_0.Y = dVar8;
  if ((this->ClockToTimecodeSamples).Samples.bIsBufferFull != false) {
    uVar6 = (uint)(this->ClockToTimecodeSamples).Samples.NextIndexToInsert;
    uVar14 = 0;
    if ((int)uVar6 < (this->ClockToTimecodeSamples).Samples.Data.ArrayNum) {
      uVar14 = ~uVar6 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *)
                (*pcVar7)();
      return pTVar15;
    }
    pFVar16 = (this->ClockToTimecodeSamples).Samples.Data.AllocatorInstance.Data +
              (longlong)(int)uVar6 * 0x10;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      (this->ClockToTimecodeSamples).CachedSums.SumX =
           (this->ClockToTimecodeSamples).CachedSums.SumX - *(double *)pFVar16;
      (this->ClockToTimecodeSamples).CachedSums.SumY =
           (this->ClockToTimecodeSamples).CachedSums.SumY - *(double *)(pFVar16 + 8);
      (this->ClockToTimecodeSamples).CachedSums.SumXxY =
           (this->ClockToTimecodeSamples).CachedSums.SumXxY -
           *(double *)pFVar16 * *(double *)(pFVar16 + 8);
      (this->ClockToTimecodeSamples).CachedSums.SumOfSquaredXes =
           (this->ClockToTimecodeSamples).CachedSums.SumOfSquaredXes -
           *(double *)pFVar16 * *(double *)pFVar16;
      goto LAB_14604b99e;
    }
  }
  puVar2 = &(this->ClockToTimecodeSamples).CachedSums.Num;
  *puVar2 = *puVar2 + 1;
LAB_14604b99e:
  TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            (&(this->ClockToTimecodeSamples).Samples,(TVector2<double> *)&local_b0._s_0);
  dVar3 = (this->ClockToTimecodeSamples).CachedSums.SumX;
  dVar4 = (this->ClockToTimecodeSamples).CachedSums.SumXxY;
  (this->ClockToTimecodeSamples).CachedSums.SumY =
       dVar8 + (this->ClockToTimecodeSamples).CachedSums.SumY;
  dVar5 = (this->ClockToTimecodeSamples).CachedSums.SumOfSquaredXes;
  (this->ClockToTimecodeSamples).CachedSums.SumX = dVar9 + dVar3;
  (this->ClockToTimecodeSamples).CachedSums.SumXxY = dVar8 * dVar9 + dVar4;
  (this->ClockToTimecodeSamples).CachedSums.SumOfSquaredXes = dVar9 * dVar9 + dVar5;
  ComputeLinearRegressionSlopeAndOffset
            (&(this->ClockToTimecodeSamples).CachedSums,&this->LinearRegressionFunction);
  pTVar10 = CVarLogSampling.Ref;
  if (4 < (byte)LogTimeManagement._0_1_) {
    bVar13 = IsInParallelGameThread();
    if ((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) {
      lVar18 = 1;
    }
    if (pTVar10->ShadowedValue[lVar18] != false) {
      if ((local_108[8] == false) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *)
                  (*pcVar7)();
        return pTVar15;
      }
      FVar11 = local_90;
      local_98 = this->LastFrameRate;
      local_a0 = local_90;
      bVar13 = FTimecode::UseDropFormatTimecode(&local_98);
      local_res8[0] = FVar11.FrameNumber.Value;
      FTimecode::FromFrameNumber(local_70,local_res8,&local_98,bVar13);
      local_70[0].Subframe = local_a0.SubFrame;
      FTimecode::ToString(local_70,&local_80,false,true);
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->TypedValue).UnderlyingFrameTime.Time = local_90;
  (__return_storage_ptr__->TypedValue).UnderlyingFrameTime.Rate = FStack_88;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// operator() @ 1504e0dd0

bool __thiscall
`UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::EstimateFrameTime'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4545176096206749551>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4545176096206749551>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

