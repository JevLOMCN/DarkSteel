// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 16

// Construct<FTimedDataInputEvaluationData> @ 14603aa90

void __cdecl UE::CoreUObject::Private::Construct<FTimedDataInputEvaluationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTimedDataInputEvaluationData> @ 14603aaa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTimedDataInputEvaluationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTimedDataInputEvaluationData> @ 14603aab0

void __cdecl UE::CoreUObject::Private::Destruct<FTimedDataInputEvaluationData>(void *param_1)

{
  return;
}

// Copy<FTimedDataInputEvaluationData> @ 14603aac0

bool __cdecl
UE::CoreUObject::Private::Copy<FTimedDataInputEvaluationData>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTimedDataChannelSampleTime> @ 14603b0b0

void __cdecl UE::CoreUObject::Private::Construct<FTimedDataChannelSampleTime>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x18;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ConstructForTests<FTimedDataChannelSampleTime> @ 14603b0d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTimedDataChannelSampleTime>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x18;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FTimedDataChannelSampleTime> @ 14603b130

void __cdecl UE::CoreUObject::Private::Destruct<FTimedDataChannelSampleTime>(void *param_1)

{
  return;
}

// Copy<FTimedDataChannelSampleTime> @ 14603b140

bool __cdecl
UE::CoreUObject::Private::Copy<FTimedDataChannelSampleTime>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<SFrameRateEntryBox,SFrameRateEntryBox_*_&> @ 14603cb50

SFrameRateEntryBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SFrameRateEntryBox,SFrameRateEntryBox_*_&>
          (SFrameRateEntryBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SFrameRatePicker,SFrameRatePicker_*_&> @ 14603cb70

SFrameRatePicker * __cdecl
UE::Core::Private::DereferenceIfNecessary<SFrameRatePicker,SFrameRatePicker_*_&>
          (SFrameRatePicker **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UTimecodeRegressionProvider,UTimecodeRegressionProvider_*_&> @ 14603cb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTimecodeRegressionProvider * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UTimecodeRegressionProvider,UTimecodeRegressionProvider_*_&>
          (UTimecodeRegressionProvider **param_1)

{
  return *param_1;
}

// AddSampleAndUpdateSums @ 146041d70

void __cdecl
UE::TimeManagement::AddSampleAndUpdateSums
          (TVector2<double> *param_1,
          TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          FLinearRegressionArgs *param_3)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  if (param_2->bIsBufferFull != false) {
    uVar2 = (uint)param_2->NextIndexToInsert;
    uVar5 = 0;
    if ((int)uVar2 < (param_2->Data).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = (param_2->Data).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      param_3->SumX = param_3->SumX - *(double *)pFVar6;
      param_3->SumY = param_3->SumY - *(double *)(pFVar6 + 8);
      param_3->SumXxY = param_3->SumXxY - *(double *)pFVar6 * *(double *)(pFVar6 + 8);
      param_3->SumOfSquaredXes = param_3->SumOfSquaredXes - *(double *)pFVar6 * *(double *)pFVar6;
      goto LAB_146041e44;
    }
  }
  param_3->Num = param_3->Num + 1;
LAB_146041e44:
  TModuloCircularBuffer<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Add
            (param_2,param_1);
  param_3->SumX = (param_1->field0_0x0)._s_0.X + param_3->SumX;
  param_3->SumY = param_3->SumY + (param_1->field0_0x0)._s_0.Y;
  param_3->SumXxY = (param_1->field0_0x0)._s_0.X * (param_1->field0_0x0)._s_0.Y + param_3->SumXxY;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  param_3->SumOfSquaredXes = dVar1 * dVar1 + param_3->SumOfSquaredXes;
  return;
}

// ComputeLinearRegressionInputArgs @ 146044180

FLinearRegressionArgs * __cdecl
UE::TimeManagement::ComputeLinearRegressionInputArgs
          (FLinearRegressionArgs *__return_storage_ptr__,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_1)

{
  double dVar1;
  double dVar2;
  ulong64 uVar3;
  TVector2<double> *pTVar4;
  TVector2<double> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  __return_storage_ptr__->SumX = 0.0;
  __return_storage_ptr__->SumY = 0.0;
  __return_storage_ptr__->SumXxY = 0.0;
  __return_storage_ptr__->SumOfSquaredXes = 0.0;
  uVar3 = (ulong64)param_1->ArrayNum;
  __return_storage_ptr__->Num = uVar3;
  if (uVar3 != 0) {
    pTVar5 = param_1->DataPtr;
    pTVar4 = pTVar5 + uVar3;
    if (pTVar5 != pTVar4) {
      dVar9 = 0.0;
      dVar8 = 0.0;
      dVar6 = 0.0;
      dVar7 = 0.0;
      do {
        dVar1 = (pTVar5->field0_0x0)._s_0.X;
        dVar2 = (pTVar5->field0_0x0)._s_0.Y;
        dVar9 = dVar9 + dVar1;
        pTVar5 = pTVar5 + 1;
        dVar6 = dVar2 + dVar6;
        dVar7 = dVar2 * dVar1 + dVar7;
        dVar8 = dVar1 * dVar1 + dVar8;
      } while (pTVar5 != pTVar4);
      __return_storage_ptr__->SumX = dVar9;
      __return_storage_ptr__->SumY = dVar6;
      __return_storage_ptr__->SumXxY = dVar7;
      __return_storage_ptr__->SumOfSquaredXes = dVar8;
    }
  }
  return __return_storage_ptr__;
}

// ComputeLinearRegressionSlopeAndOffset @ 146044230

bool __cdecl
UE::TimeManagement::ComputeLinearRegressionSlopeAndOffset
          (FLinearRegressionArgs *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)param_1->Num;
  if (param_1->Num == 0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = param_1->SumOfSquaredXes - (param_1->SumX * param_1->SumX) / dVar4;
  }
  if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    *param_2 = 0.0;
    *param_3 = 0.0;
    return false;
  }
  dVar1 = param_1->SumY;
  dVar2 = param_1->SumX;
  dVar4 = __real_3ff0000000000000 / dVar4;
  dVar3 = (param_1->SumXxY - dVar1 * dVar2 * dVar4) / dVar3;
  *param_2 = dVar3;
  *param_3 = dVar4 * dVar1 - dVar4 * dVar2 * dVar3;
  return true;
}

// ComputeLinearRegressionSlopeAndOffset @ 146044300

bool __cdecl
UE::TimeManagement::ComputeLinearRegressionSlopeAndOffset
          (FLinearRegressionArgs *param_1,FLinearFunction *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_1->Num;
  if (param_1->Num == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = param_1->SumOfSquaredXes - (param_1->SumX * param_1->SumX) / dVar3;
  }
  if ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    param_2->Slope = 0.0;
    param_2->Offset = 0.0;
    return false;
  }
  dVar3 = __real_3ff0000000000000 / dVar3;
  dVar1 = param_1->SumX;
  dVar2 = param_1->SumY;
  dVar4 = (param_1->SumXxY - param_1->SumY * param_1->SumX * dVar3) / dVar4;
  param_2->Slope = dVar4;
  param_2->Offset = dVar3 * dVar2 - dVar3 * dVar1 * dVar4;
  return true;
}

// LogEstimatedTime @ 14604e0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::TimeManagement::TimecodeEstimation::LogEstimatedTime
          (double param_1,IClockedTimeStep *param_2,UTimecodeProvider *param_3,FFrameTime *param_4,
          FFrameTime *param_5,FFrameRate *param_6)

{
  FFrameTime FVar1;
  TConsoleVariableData<bool> *pTVar2;
  undefined1 auVar3 [8];
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  FString *pFVar7;
  FFrameNumber FVar8;
  FFrameNumber FVar9;
  longlong lVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  FFrameTime local_res10;
  UTimecodeProvider *local_res18;
  undefined1 local_108 [8];
  FFrameRate local_100;
  FFrameTime local_f8;
  FFrameRate local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FTimecode local_b8;
  FTimecode local_a0;
  FTimecode local_88;
  FTimecode local_70;
  double local_58;
  char local_50;
  
  bVar5 = false;
  local_res10 = (FFrameTime)((ulonglong)local_res10 & 0xffffffff00000000);
  local_res18 = param_3;
  (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_58);
  pTVar2 = CVarLogEstimation.Ref;
  lVar10 = 1;
  local_108 = (undefined1  [8])FApp::CurrentTime;
  if (4 < (byte)LogTimeManagement._0_1_) {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 1;
    }
    if (pTVar2->ShadowedValue[lVar6] != false) {
      if (local_50 != '\0') {
        pFVar7 = ::FString::SanitizeFloat(&local_c8,local_58,1);
        bVar5 = true;
        if ((pFVar7->Data).ArrayNum == 0) {
          bVar5 = true;
        }
      }
      FVar1 = *param_5;
      local_f0 = *param_6;
      local_f8 = FVar1;
      bVar4 = FTimecode::UseDropFormatTimecode(&local_f0);
      local_res10.FrameNumber.Value = FVar1.FrameNumber.Value.Value;
      FTimecode::FromFrameNumber(&local_88,&local_res10.FrameNumber,&local_f0,bVar4);
      local_88.Subframe = local_f8.SubFrame;
      FTimecode::ToString(&local_88,&local_d8,false,true);
      FVar1 = *param_4;
      local_f0 = *param_6;
      local_f8 = FVar1;
      bVar4 = FTimecode::UseDropFormatTimecode(&local_f0);
      local_res10.FrameNumber.Value = FVar1.FrameNumber.Value.Value;
      FTimecode::FromFrameNumber(&local_b8,&local_res10.FrameNumber,&local_f0,bVar4);
      local_b8.Subframe = local_f8.SubFrame;
      FTimecode::ToString(&local_b8,&local_e8,false,true);
      in_XMM2._8_4_ = in_XMM0_Dc;
      in_XMM2._0_8_ = param_1;
      in_XMM2._12_4_ = in_XMM0_Dd;
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      param_3 = local_res18;
      if ((bVar5) && ((FFrameTime)local_c8.Data.AllocatorInstance.Data != (FFrameTime)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        param_3 = local_res18;
      }
    }
  }
  pTVar2 = CVarLogTimecodeDifference.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar10 = 0;
  }
  if (pTVar2->ShadowedValue[lVar10] != false) {
    (**(code **)(param_3->_padding_ + 0x2b8))(param_3);
    (**(code **)(param_3->_padding_ + 0x2c0))(param_3,&local_f8);
    bVar5 = FTimecode::UseDropFormatTimecode(&local_f0);
    local_res10.FrameNumber.Value = local_f8.FrameNumber.Value;
    FTimecode::FromFrameNumber(&local_b8,&local_res10.FrameNumber,&local_f0,bVar5);
    FVar1 = *param_4;
    local_b8.Subframe = local_f8.SubFrame;
    local_100 = *param_6;
    local_108 = (undefined1  [8])FVar1;
    bVar5 = FTimecode::UseDropFormatTimecode(&local_100);
    local_res10.FrameNumber = FVar1.FrameNumber.Value;
    FTimecode::FromFrameNumber(&local_a0,&local_res10.FrameNumber,&local_100,bVar5);
    local_a0.Subframe = (float)local_108._4_4_;
    FVar1 = *param_5;
    local_100 = *param_6;
    local_108 = (undefined1  [8])FVar1;
    bVar5 = FTimecode::UseDropFormatTimecode(&local_100);
    local_res10.FrameNumber.Value = FVar1.FrameNumber.Value.Value;
    FTimecode::FromFrameNumber(&local_88,&local_res10.FrameNumber,&local_100,bVar5);
    local_88.Subframe = (float)local_108._4_4_;
    if ((((local_a0.Hours != local_b8.Hours) || (local_a0.Minutes != local_b8.Minutes)) ||
        (local_a0.Seconds != local_b8.Seconds)) ||
       ((local_a0.Frames != local_b8.Frames || (local_a0.Subframe != local_b8.Subframe)))) {
      FVar9 = local_f8.FrameNumber.Value;
      FVar8 = (*param_4).FrameNumber;
      local_108._4_4_ = local_f8.SubFrame;
      local_res10.SubFrame = (*param_4).SubFrame;
      if ((FVar9.Value < FVar8.Value) ||
         ((FVar8.Value == FVar9.Value && ((float)local_108._4_4_ < local_res10.SubFrame)))) {
        auVar11 = roundps(in_XMM2,ZEXT416((uint)(local_res10.SubFrame - (float)local_108._4_4_)),1);
        local_res10.SubFrame = (local_res10.SubFrame - (float)local_108._4_4_) - auVar11._0_4_;
        if (::FFrameTime::MaxSubframe <= local_res10.SubFrame) {
          local_res10.SubFrame = ::FFrameTime::MaxSubframe;
        }
        FVar9.Value = (int)auVar11._0_4_ + (FVar8.Value - FVar9.Value);
        if (local_res10.SubFrame <= 0.0) {
          local_res10.SubFrame = 0.0;
        }
        local_100 = *param_6;
        local_res10.FrameNumber.Value = FVar9.Value;
        local_108._0_4_ = FVar9.Value;
        local_108._4_4_ = local_res10.SubFrame;
        bVar5 = FTimecode::UseDropFormatTimecode(&local_100);
        local_res10.FrameNumber.Value = FVar9.Value;
        FTimecode::FromFrameNumber(&local_70,&local_res10.FrameNumber,&local_100,bVar5);
        local_70.Subframe = (float)local_108._4_4_;
        if ((byte)LogTimeManagement._0_1_ < 3) {
          return;
        }
        local_res10 = *param_4;
        local_108._0_4_ = local_f8.FrameNumber.Value;
        local_108._4_4_ = local_f8.SubFrame;
        auVar3 = local_108;
        if (local_res10.FrameNumber.Value.Value <= local_f8.FrameNumber.Value.Value) {
          if (local_res10.FrameNumber.Value.Value != local_f8.FrameNumber.Value.Value) {
            return;
          }
          local_108._4_4_ = local_f8.SubFrame;
          if (local_res10.SubFrame <= (float)local_108._4_4_) {
            return;
          }
        }
        local_108 = auVar3;
        FTimecode::ToString(&local_88,(FString *)local_108,false,true);
        FTimecode::ToString(&local_a0,&local_e8,false,true);
        FTimecode::ToString(&local_b8,&local_d8,false,true);
        FTimecode::ToString(&local_70,&local_c8,false,true);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
        if ((FFrameTime)local_c8.Data.AllocatorInstance.Data != (FFrameTime)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108;
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_108;
        }
      }
      else {
        auVar11 = roundps(in_XMM2,ZEXT416((uint)((float)local_108._4_4_ - local_res10.SubFrame)),1);
        local_res10.SubFrame = ((float)local_108._4_4_ - local_res10.SubFrame) - auVar11._0_4_;
        if (::FFrameTime::MaxSubframe <= local_res10.SubFrame) {
          local_res10.SubFrame = ::FFrameTime::MaxSubframe;
        }
        FVar9.Value = (int)auVar11._0_4_ + (FVar9.Value - FVar8.Value);
        if (local_res10.SubFrame <= 0.0) {
          local_res10.SubFrame = 0.0;
        }
        local_100 = *param_6;
        local_res10.FrameNumber.Value = FVar9.Value;
        local_108._0_4_ = FVar9.Value;
        local_108._4_4_ = local_res10.SubFrame;
        bVar5 = FTimecode::UseDropFormatTimecode(&local_100);
        local_res10.FrameNumber.Value = FVar9.Value;
        FTimecode::FromFrameNumber(&local_70,&local_res10.FrameNumber,&local_100,bVar5);
        local_70.Subframe = (float)local_108._4_4_;
        if ((byte)LogTimeManagement._0_1_ < 3) {
          return;
        }
        local_res10 = *param_4;
        local_108._0_4_ = local_f8.FrameNumber.Value;
        local_108._4_4_ = local_f8.SubFrame;
        auVar3 = local_108;
        if (local_f8.FrameNumber.Value.Value <= local_res10.FrameNumber.Value.Value) {
          if (local_res10.FrameNumber.Value.Value != local_f8.FrameNumber.Value.Value) {
            return;
          }
          local_108._4_4_ = local_f8.SubFrame;
          if ((float)local_108._4_4_ <= local_res10.SubFrame) {
            return;
          }
        }
        local_108 = auVar3;
        FTimecode::ToString(&local_88,&local_c8,false,true);
        FTimecode::ToString(&local_a0,(FString *)local_108,false,true);
        FTimecode::ToString(&local_b8,&local_e8,false,true);
        FTimecode::ToString(&local_70,&local_d8,false,true);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if ((FFrameTime)local_108 != (FFrameTime)0x0) {
          FMemory::Free((void *)local_108);
        }
      }
      if ((FFrameTime)local_c8.Data.AllocatorInstance.Data != (FFrameTime)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

