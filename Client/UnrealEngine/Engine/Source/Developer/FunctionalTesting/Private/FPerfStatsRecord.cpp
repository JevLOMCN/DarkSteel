// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 14

// FPerfStatsRecord @ 148c7f680

FPerfStatsRecord * __thiscall
FPerfStatsRecord::FPerfStatsRecord(FPerfStatsRecord *this,FPerfStatsRecord *param_1)

{
  double dVar1;
  float fVar2;
  undefined4 uVar3;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  fVar2 = (param_1->Record).SumTimeSeconds;
  dVar1 = (param_1->Record).FrameTimeTracker.MinValue;
  (this->Record).NumFrames = (param_1->Record).NumFrames;
  (this->Record).SumTimeSeconds = fVar2;
  (this->Record).FrameTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Record).FrameTimeTracker.Accumulator;
  (this->Record).FrameTimeTracker.MaxValue = (param_1->Record).FrameTimeTracker.MaxValue;
  (this->Record).FrameTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Record).FrameTimeTracker.field_0x1c;
  dVar1 = (param_1->Record).GameThreadTimeTracker.MinValue;
  (this->Record).FrameTimeTracker.NumSamples = (param_1->Record).FrameTimeTracker.NumSamples;
  *(undefined4 *)&(this->Record).FrameTimeTracker.field_0x1c = uVar3;
  (this->Record).GameThreadTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Record).GameThreadTimeTracker.Accumulator;
  (this->Record).GameThreadTimeTracker.MaxValue = (param_1->Record).GameThreadTimeTracker.MaxValue;
  (this->Record).GameThreadTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Record).GameThreadTimeTracker.field_0x1c;
  dVar1 = (param_1->Record).RenderThreadTimeTracker.MinValue;
  (this->Record).GameThreadTimeTracker.NumSamples =
       (param_1->Record).GameThreadTimeTracker.NumSamples;
  *(undefined4 *)&(this->Record).GameThreadTimeTracker.field_0x1c = uVar3;
  (this->Record).RenderThreadTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Record).RenderThreadTimeTracker.Accumulator;
  (this->Record).RenderThreadTimeTracker.MaxValue =
       (param_1->Record).RenderThreadTimeTracker.MaxValue;
  (this->Record).RenderThreadTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Record).RenderThreadTimeTracker.field_0x1c;
  dVar1 = (param_1->Record).GPUTimeTracker.MinValue;
  (this->Record).RenderThreadTimeTracker.NumSamples =
       (param_1->Record).RenderThreadTimeTracker.NumSamples;
  *(undefined4 *)&(this->Record).RenderThreadTimeTracker.field_0x1c = uVar3;
  (this->Record).GPUTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Record).GPUTimeTracker.Accumulator;
  (this->Record).GPUTimeTracker.MaxValue = (param_1->Record).GPUTimeTracker.MaxValue;
  (this->Record).GPUTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Record).GPUTimeTracker.field_0x1c;
  (this->Record).GPUTimeTracker.NumSamples = (param_1->Record).GPUTimeTracker.NumSamples;
  *(undefined4 *)&(this->Record).GPUTimeTracker.field_0x1c = uVar3;
  fVar2 = (param_1->Baseline).SumTimeSeconds;
  dVar1 = (param_1->Baseline).FrameTimeTracker.MinValue;
  (this->Baseline).NumFrames = (param_1->Baseline).NumFrames;
  (this->Baseline).SumTimeSeconds = fVar2;
  (this->Baseline).FrameTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Baseline).FrameTimeTracker.Accumulator;
  (this->Baseline).FrameTimeTracker.MaxValue = (param_1->Baseline).FrameTimeTracker.MaxValue;
  (this->Baseline).FrameTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Baseline).FrameTimeTracker.field_0x1c;
  dVar1 = (param_1->Baseline).GameThreadTimeTracker.MinValue;
  (this->Baseline).FrameTimeTracker.NumSamples = (param_1->Baseline).FrameTimeTracker.NumSamples;
  *(undefined4 *)&(this->Baseline).FrameTimeTracker.field_0x1c = uVar3;
  (this->Baseline).GameThreadTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Baseline).GameThreadTimeTracker.Accumulator;
  (this->Baseline).GameThreadTimeTracker.MaxValue =
       (param_1->Baseline).GameThreadTimeTracker.MaxValue;
  (this->Baseline).GameThreadTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Baseline).GameThreadTimeTracker.field_0x1c;
  dVar1 = (param_1->Baseline).RenderThreadTimeTracker.MinValue;
  (this->Baseline).GameThreadTimeTracker.NumSamples =
       (param_1->Baseline).GameThreadTimeTracker.NumSamples;
  *(undefined4 *)&(this->Baseline).GameThreadTimeTracker.field_0x1c = uVar3;
  (this->Baseline).RenderThreadTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Baseline).RenderThreadTimeTracker.Accumulator;
  (this->Baseline).RenderThreadTimeTracker.MaxValue =
       (param_1->Baseline).RenderThreadTimeTracker.MaxValue;
  (this->Baseline).RenderThreadTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Baseline).RenderThreadTimeTracker.field_0x1c;
  dVar1 = (param_1->Baseline).GPUTimeTracker.MinValue;
  (this->Baseline).RenderThreadTimeTracker.NumSamples =
       (param_1->Baseline).RenderThreadTimeTracker.NumSamples;
  *(undefined4 *)&(this->Baseline).RenderThreadTimeTracker.field_0x1c = uVar3;
  (this->Baseline).GPUTimeTracker.MinValue = dVar1;
  dVar1 = (param_1->Baseline).GPUTimeTracker.Accumulator;
  (this->Baseline).GPUTimeTracker.MaxValue = (param_1->Baseline).GPUTimeTracker.MaxValue;
  (this->Baseline).GPUTimeTracker.Accumulator = dVar1;
  uVar3 = *(undefined4 *)&(param_1->Baseline).GPUTimeTracker.field_0x1c;
  (this->Baseline).GPUTimeTracker.NumSamples = (param_1->Baseline).GPUTimeTracker.NumSamples;
  *(undefined4 *)&(this->Baseline).GPUTimeTracker.field_0x1c = uVar3;
  this->GPUBudget = param_1->GPUBudget;
  this->RenderThreadBudget = param_1->RenderThreadBudget;
  this->GameThreadBudget = param_1->GameThreadBudget;
  return this;
}

// FPerfStatsRecord @ 148c7f7b0

FPerfStatsRecord * __thiscall
FPerfStatsRecord::FPerfStatsRecord(FPerfStatsRecord *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  ::FString::FString(&this->Name,param_1);
  (this->Record).NumFrames = 0;
  (this->Record).SumTimeSeconds = 0.0;
  (this->Record).FrameTimeTracker.MinValue = 0.0;
  (this->Record).FrameTimeTracker.MaxValue = 0.0;
  (this->Record).FrameTimeTracker.Accumulator = 0.0;
  (this->Record).FrameTimeTracker.NumSamples = 0;
  (this->Record).GameThreadTimeTracker.MinValue = 0.0;
  (this->Record).GameThreadTimeTracker.MaxValue = 0.0;
  (this->Record).GameThreadTimeTracker.Accumulator = 0.0;
  (this->Record).GameThreadTimeTracker.NumSamples = 0;
  (this->Record).RenderThreadTimeTracker.MinValue = 0.0;
  (this->Record).RenderThreadTimeTracker.MaxValue = 0.0;
  (this->Record).RenderThreadTimeTracker.Accumulator = 0.0;
  (this->Record).RenderThreadTimeTracker.NumSamples = 0;
  (this->Record).GPUTimeTracker.MinValue = 0.0;
  (this->Record).GPUTimeTracker.MaxValue = 0.0;
  (this->Record).GPUTimeTracker.Accumulator = 0.0;
  (this->Record).GPUTimeTracker.NumSamples = 0;
  (this->Baseline).NumFrames = 0;
  (this->Baseline).SumTimeSeconds = 0.0;
  (this->Baseline).FrameTimeTracker.MinValue = 0.0;
  (this->Baseline).FrameTimeTracker.MaxValue = 0.0;
  (this->Baseline).FrameTimeTracker.Accumulator = 0.0;
  (this->Baseline).FrameTimeTracker.NumSamples = 0;
  (this->Baseline).GameThreadTimeTracker.MinValue = 0.0;
  (this->Baseline).GameThreadTimeTracker.MaxValue = 0.0;
  (this->Baseline).GameThreadTimeTracker.Accumulator = 0.0;
  (this->Baseline).GameThreadTimeTracker.NumSamples = 0;
  (this->Baseline).RenderThreadTimeTracker.MinValue = 0.0;
  (this->Baseline).RenderThreadTimeTracker.MaxValue = 0.0;
  (this->Baseline).RenderThreadTimeTracker.Accumulator = 0.0;
  (this->Baseline).RenderThreadTimeTracker.NumSamples = 0;
  (this->Baseline).GPUTimeTracker.MinValue = 0.0;
  (this->Baseline).GPUTimeTracker.MaxValue = 0.0;
  (this->Baseline).GPUTimeTracker.Accumulator = 0.0;
  (this->Baseline).GPUTimeTracker.NumSamples = 0;
  this->GPUBudget = 0.0;
  this->RenderThreadBudget = 0.0;
  this->GameThreadBudget = 0.0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// GetBaselineString @ 148c901a0

FString * __thiscall
FPerfStatsRecord::GetBaselineString(FPerfStatsRecord *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
  return __return_storage_ptr__;
}

// GetGPUTimes @ 148c90b70

void __thiscall
FPerfStatsRecord::GetGPUTimes
          (FPerfStatsRecord *this,double *param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  *param_1 = (this->Record).GPUTimeTracker.MinValue - (this->Baseline).GPUTimeTracker.MinValue;
  *param_2 = (this->Record).GPUTimeTracker.MaxValue - (this->Baseline).GPUTimeTracker.MaxValue;
  iVar1 = (this->Record).GPUTimeTracker.NumSamples;
  if (iVar1 < 1) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (this->Record).GPUTimeTracker.Accumulator / (double)iVar1;
  }
  iVar1 = (this->Baseline).GPUTimeTracker.NumSamples;
  if (0 < iVar1) {
    dVar3 = (this->Baseline).GPUTimeTracker.Accumulator / (double)iVar1;
  }
  *param_3 = dVar2 - dVar3;
  return;
}

// GetGameThreadTimes @ 148c90bf0

void __thiscall
FPerfStatsRecord::GetGameThreadTimes
          (FPerfStatsRecord *this,double *param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  *param_1 = (this->Record).GameThreadTimeTracker.MinValue -
             (this->Baseline).GameThreadTimeTracker.MinValue;
  *param_2 = (this->Record).GameThreadTimeTracker.MaxValue -
             (this->Baseline).GameThreadTimeTracker.MaxValue;
  iVar1 = (this->Record).GameThreadTimeTracker.NumSamples;
  if (iVar1 < 1) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (this->Record).GameThreadTimeTracker.Accumulator / (double)iVar1;
  }
  iVar1 = (this->Baseline).GameThreadTimeTracker.NumSamples;
  if (0 < iVar1) {
    dVar3 = (this->Baseline).GameThreadTimeTracker.Accumulator / (double)iVar1;
  }
  *param_3 = dVar2 - dVar3;
  return;
}

// GetOverBudgetString @ 148c90f40

FString * __thiscall
FPerfStatsRecord::GetOverBudgetString(FPerfStatsRecord *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
  return __return_storage_ptr__;
}

// GetRecordString @ 148c91f30

FString * __thiscall
FPerfStatsRecord::GetRecordString(FPerfStatsRecord *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
  return __return_storage_ptr__;
}

// GetRenderThreadTimes @ 148c920b0

void __thiscall
FPerfStatsRecord::GetRenderThreadTimes
          (FPerfStatsRecord *this,double *param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 0.0;
  *param_1 = (this->Record).RenderThreadTimeTracker.MinValue -
             (this->Baseline).RenderThreadTimeTracker.MinValue;
  *param_2 = (this->Record).RenderThreadTimeTracker.MaxValue -
             (this->Baseline).RenderThreadTimeTracker.MaxValue;
  iVar1 = (this->Record).RenderThreadTimeTracker.NumSamples;
  if (iVar1 < 1) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (this->Record).RenderThreadTimeTracker.Accumulator / (double)iVar1;
  }
  iVar1 = (this->Baseline).RenderThreadTimeTracker.NumSamples;
  if (0 < iVar1) {
    dVar3 = (this->Baseline).RenderThreadTimeTracker.Accumulator / (double)iVar1;
  }
  *param_3 = dVar2 - dVar3;
  return;
}

// GetReportString @ 148c92130

FString * __thiscall
FPerfStatsRecord::GetReportString(FPerfStatsRecord *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"%s,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f");
  return __return_storage_ptr__;
}

// IsWithinGPUBudget @ 148c942d0

bool __thiscall FPerfStatsRecord::IsWithinGPUBudget(FPerfStatsRecord *this)

{
  return (this->Record).GPUTimeTracker.MaxValue - (this->Baseline).GPUTimeTracker.MaxValue <=
         (double)this->GPUBudget;
}

// IsWithinGameThreadBudget @ 148c94300

bool __thiscall FPerfStatsRecord::IsWithinGameThreadBudget(FPerfStatsRecord *this)

{
  return (this->Record).GameThreadTimeTracker.MaxValue -
         (this->Baseline).GameThreadTimeTracker.MaxValue <= (double)this->GameThreadBudget;
}

// IsWithinRenderThreadBudget @ 148c94330

bool __thiscall FPerfStatsRecord::IsWithinRenderThreadBudget(FPerfStatsRecord *this)

{
  return (this->Record).RenderThreadTimeTracker.MaxValue -
         (this->Baseline).RenderThreadTimeTracker.MaxValue <= (double)this->RenderThreadBudget;
}

// Sample @ 148c9af50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPerfStatsRecord::Sample(FPerfStatsRecord *this,UWorld *param_1,float param_2,bool param_3)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UGameViewportClient *pUVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((param_1 == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                         ,0x619,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar6 = UWorld::GetGameViewport(param_1);
  lVar7 = (**(code **)(pUVar6->_padding_ + 0x160))();
  if ((lVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StatUnitData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalTest.cpp"
                         ,0x61c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar8 = (double)*(float *)(lVar7 + 0x230);
  if (!param_3) {
    iVar2 = (this->Record).FrameTimeTracker.NumSamples;
    dVar9 = dVar8;
    dVar11 = dVar8;
    if (iVar2 != 0) {
      dVar9 = (this->Record).FrameTimeTracker.MaxValue;
      dVar11 = (this->Record).FrameTimeTracker.MinValue;
      if (dVar9 <= dVar8) {
        dVar9 = dVar8;
      }
      if (dVar8 <= dVar11) {
        dVar11 = dVar8;
      }
    }
    (this->Record).FrameTimeTracker.MinValue = dVar11;
    (this->Record).FrameTimeTracker.MaxValue = dVar9;
    dVar11 = __real_408f400000000000;
    dVar9 = (this->Record).FrameTimeTracker.Accumulator;
    (this->Record).FrameTimeTracker.NumSamples = iVar2 + 1;
    (this->Record).FrameTimeTracker.Accumulator = dVar8 + dVar9;
    iVar2 = (this->Record).GameThreadTimeTracker.NumSamples;
    dVar10 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * dVar11 *
                            (double)GGameThreadTime);
    dVar8 = dVar10;
    dVar9 = dVar10;
    if (iVar2 != 0) {
      dVar8 = (this->Record).GameThreadTimeTracker.MaxValue;
      dVar9 = (this->Record).GameThreadTimeTracker.MinValue;
      if (dVar8 <= dVar10) {
        dVar8 = dVar10;
      }
      if (dVar10 <= dVar9) {
        dVar9 = dVar10;
      }
    }
    (this->Record).GameThreadTimeTracker.MinValue = dVar9;
    (this->Record).GameThreadTimeTracker.MaxValue = dVar8;
    dVar8 = (this->Record).GameThreadTimeTracker.Accumulator;
    (this->Record).GameThreadTimeTracker.NumSamples = iVar2 + 1;
    (this->Record).GameThreadTimeTracker.Accumulator = dVar10 + dVar8;
    iVar2 = (this->Record).RenderThreadTimeTracker.NumSamples;
    dVar10 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * dVar11 *
                            (double)GRenderThreadTime);
    dVar8 = dVar10;
    dVar9 = dVar10;
    if (iVar2 != 0) {
      dVar8 = (this->Record).RenderThreadTimeTracker.MaxValue;
      dVar1 = (this->Record).RenderThreadTimeTracker.MinValue;
      if (dVar1 <= dVar10) {
        dVar9 = dVar1;
      }
      if (dVar8 <= dVar10) {
        dVar8 = dVar10;
      }
    }
    (this->Record).RenderThreadTimeTracker.MinValue = dVar9;
    (this->Record).RenderThreadTimeTracker.MaxValue = dVar8;
    dVar8 = (this->Record).RenderThreadTimeTracker.Accumulator;
    (this->Record).RenderThreadTimeTracker.NumSamples = iVar2 + 1;
    (this->Record).RenderThreadTimeTracker.Accumulator = dVar10 + dVar8;
    uVar5 = RHIGetGPUFrameCycles(0);
    iVar2 = (this->Record).GPUTimeTracker.NumSamples;
    dVar11 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * dVar11 * (double)uVar5);
    dVar9 = dVar11;
    dVar8 = dVar11;
    if (iVar2 != 0) {
      dVar8 = (this->Record).GPUTimeTracker.MinValue;
      dVar10 = (this->Record).GPUTimeTracker.MaxValue;
      if (dVar11 <= dVar10) {
        dVar9 = dVar10;
      }
      if (dVar11 <= dVar8) {
        dVar8 = dVar11;
      }
    }
    (this->Record).GPUTimeTracker.MinValue = dVar8;
    (this->Record).GPUTimeTracker.MaxValue = dVar9;
    dVar8 = (this->Record).GPUTimeTracker.Accumulator;
    (this->Record).GPUTimeTracker.NumSamples = iVar2 + 1;
    (this->Record).GPUTimeTracker.Accumulator = dVar11 + dVar8;
    (this->Record).NumFrames = (this->Record).NumFrames + 1;
    (this->Record).SumTimeSeconds = param_2 + (this->Record).SumTimeSeconds;
    return;
  }
  iVar2 = (this->Baseline).FrameTimeTracker.NumSamples;
  dVar9 = dVar8;
  dVar11 = dVar8;
  if (iVar2 != 0) {
    dVar9 = (this->Baseline).FrameTimeTracker.MaxValue;
    dVar11 = (this->Baseline).FrameTimeTracker.MinValue;
    if (dVar9 <= dVar8) {
      dVar9 = dVar8;
    }
    if (dVar8 <= dVar11) {
      dVar11 = dVar8;
    }
  }
  (this->Baseline).FrameTimeTracker.MinValue = dVar11;
  (this->Baseline).FrameTimeTracker.MaxValue = dVar9;
  dVar11 = __real_408f400000000000;
  dVar9 = (this->Baseline).FrameTimeTracker.Accumulator;
  (this->Baseline).FrameTimeTracker.NumSamples = iVar2 + 1;
  (this->Baseline).FrameTimeTracker.Accumulator = dVar8 + dVar9;
  iVar2 = (this->Baseline).GameThreadTimeTracker.NumSamples;
  dVar10 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * dVar11 * (double)GGameThreadTime)
  ;
  dVar8 = dVar10;
  dVar9 = dVar10;
  if (iVar2 != 0) {
    dVar8 = (this->Baseline).GameThreadTimeTracker.MaxValue;
    dVar9 = (this->Baseline).GameThreadTimeTracker.MinValue;
    if (dVar8 <= dVar10) {
      dVar8 = dVar10;
    }
    if (dVar10 <= dVar9) {
      dVar9 = dVar10;
    }
  }
  (this->Baseline).GameThreadTimeTracker.MinValue = dVar9;
  (this->Baseline).GameThreadTimeTracker.MaxValue = dVar8;
  dVar8 = (this->Baseline).GameThreadTimeTracker.Accumulator;
  (this->Baseline).GameThreadTimeTracker.NumSamples = iVar2 + 1;
  (this->Baseline).GameThreadTimeTracker.Accumulator = dVar10 + dVar8;
  iVar2 = (this->Baseline).RenderThreadTimeTracker.NumSamples;
  dVar10 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * dVar11 *
                          (double)GRenderThreadTime);
  dVar8 = dVar10;
  dVar9 = dVar10;
  if (iVar2 != 0) {
    dVar8 = (this->Baseline).RenderThreadTimeTracker.MaxValue;
    dVar1 = (this->Baseline).RenderThreadTimeTracker.MinValue;
    if (dVar1 <= dVar10) {
      dVar9 = dVar1;
    }
    if (dVar8 <= dVar10) {
      dVar8 = dVar10;
    }
  }
  (this->Baseline).RenderThreadTimeTracker.MinValue = dVar9;
  (this->Baseline).RenderThreadTimeTracker.MaxValue = dVar8;
  dVar8 = (this->Baseline).RenderThreadTimeTracker.Accumulator;
  (this->Baseline).RenderThreadTimeTracker.NumSamples = iVar2 + 1;
  (this->Baseline).RenderThreadTimeTracker.Accumulator = dVar10 + dVar8;
  uVar5 = RHIGetGPUFrameCycles(0);
  iVar2 = (this->Baseline).GPUTimeTracker.NumSamples;
  dVar11 = (double)(float)(FGenericPlatformTime::SecondsPerCycle * dVar11 * (double)uVar5);
  dVar8 = dVar11;
  dVar9 = dVar11;
  if (iVar2 != 0) {
    dVar8 = (this->Baseline).GPUTimeTracker.MaxValue;
    dVar9 = (this->Baseline).GPUTimeTracker.MinValue;
    if (dVar8 <= dVar11) {
      dVar8 = dVar11;
    }
    if (dVar11 <= dVar9) {
      dVar9 = dVar11;
    }
  }
  (this->Baseline).GPUTimeTracker.MinValue = dVar9;
  (this->Baseline).GPUTimeTracker.MaxValue = dVar8;
  dVar8 = (this->Baseline).GPUTimeTracker.Accumulator;
  (this->Baseline).GPUTimeTracker.NumSamples = iVar2 + 1;
  (this->Baseline).GPUTimeTracker.Accumulator = dVar11 + dVar8;
  (this->Baseline).NumFrames = (this->Baseline).NumFrames + 1;
  (this->Baseline).SumTimeSeconds = param_2 + (this->Baseline).SumTimeSeconds;
  return;
}

// SetBudgets @ 148c9b950

void __thiscall
FPerfStatsRecord::SetBudgets(FPerfStatsRecord *this,float param_1,float param_2,float param_3)

{
  this->GPUBudget = param_1;
  this->RenderThreadBudget = param_2;
  this->GameThreadBudget = param_3;
  return;
}

