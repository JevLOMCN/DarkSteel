// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FDumpFPSChartToEndpoint @ 1476e76d0

FDumpFPSChartToEndpoint * __thiscall
FDumpFPSChartToEndpoint::FDumpFPSChartToEndpoint
          (FDumpFPSChartToEndpoint *this,FPerformanceTrackingChart *param_1)

{
  this->Chart = param_1;
  (this->MapName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FDumpFPSChartToEndpoint__6B_;
  (this->MapName).Data.ArrayNum = 0;
  (this->MapName).Data.ArrayMax = 0;
  (this->DeviceProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProfileName).Data.ArrayNum = 0;
  (this->DeviceProfileName).Data.ArrayMax = 0;
  (this->ScalabilityQuality).CPUBenchmarkResults = -1.0;
  (this->ScalabilityQuality).GPUBenchmarkResults = -1.0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayNum = 0;
  (this->ScalabilityQuality).CPUBenchmarkSteps.ArrayMax = 0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayNum = 0;
  (this->ScalabilityQuality).GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&this->ScalabilityQuality);
  (this->WindowMode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowMode).Data.ArrayNum = 0;
  (this->WindowMode).Data.ArrayMax = 0;
  (this->OSMajor).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OSMajor).Data.ArrayNum = 0;
  (this->OSMajor).Data.ArrayMax = 0;
  (this->OSMinor).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OSMinor).Data.ArrayNum = 0;
  (this->OSMinor).Data.ArrayMax = 0;
  (this->CPUVendor).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUVendor).Data.ArrayNum = 0;
  (this->CPUVendor).Data.ArrayMax = 0;
  (this->CPUBrand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUBrand).Data.ArrayNum = 0;
  (this->CPUBrand).Data.ArrayMax = 0;
  (this->DesktopGPUBrand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DesktopGPUBrand).Data.ArrayNum = 0;
  (this->DesktopGPUBrand).Data.ArrayMax = 0;
  (this->ActualGPUBrand).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActualGPUBrand).Data.ArrayNum = 0;
  (this->ActualGPUBrand).Data.ArrayMax = 0;
  return this;
}

// ~FDumpFPSChartToEndpoint @ 1476e8e40

void __thiscall FDumpFPSChartToEndpoint::~FDumpFPSChartToEndpoint(FDumpFPSChartToEndpoint *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDumpFPSChartToEndpoint__6B_;
  pFVar1 = (this->ActualGPUBrand).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DesktopGPUBrand).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CPUBrand).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CPUVendor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OSMinor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OSMajor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowMode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalabilityQuality).GPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalabilityQuality).CPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceProfileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MapName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DumpChart @ 1476fe8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDumpFPSChartToEndpoint::DumpChart
          (FDumpFPSChartToEndpoint *this,double param_1,FString *param_2,FString *param_3)

{
  FString *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FPerformanceTrackingChart *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  longlong local_res8;
  FString local_98;
  FString local_88 [4];
  
  (**(code **)(this->_padding_ + 0x10))();
  pFVar1 = &this->MapName;
  uVar14 = 0;
  dVar2 = (this->Chart->FrametimeHistogram).SumOfAllMeasures;
  this->WallClockTimeFromStartOfCharting = param_1;
  iVar16 = (int)(this->Chart->FrametimeHistogram).CountOfAllMeasures;
  if (pFVar1 != param_2) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MapName).Data.ArrayNum = (param_2->Data).ArrayNum;
    (this->MapName).Data.ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  pFVar1 = &this->DeviceProfileName;
  if (pFVar1 != param_3) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
    (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DeviceProfileName).Data.ArrayNum = (param_3->Data).ArrayNum;
    (this->DeviceProfileName).Data.ArrayMax = (param_3->Data).ArrayMax;
    (param_3->Data).ArrayNum = 0;
    (param_3->Data).ArrayMax = 0;
  }
  if ((this->WallClockTimeFromStartOfCharting < dVar2) && (4 < (byte)LogChartCreation._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChartCreation);
  }
  dVar2 = __real_408f400000000000;
  pFVar5 = this->Chart;
  dVar18 = __real_3ff0000000000000 / (double)iVar16;
  this->AvgGPUFrameTime = (float)(dVar18 * pFVar5->TotalFrameTime_GPU * __real_408f400000000000);
  this->AvgRenderThreadFrameTime = (float)(dVar18 * pFVar5->TotalFrameTime_RenderThread * dVar2);
  this->AvgGameThreadFrameTime = (float)(dVar18 * pFVar5->TotalFrameTime_GameThread * dVar2);
  dVar18 = pFVar5->TotalFlushAsyncLoadingTime * dVar2;
  this->TotalFlushAsyncLoadingTimeInMS = dVar18;
  iVar3 = pFVar5->TotalFlushAsyncLoadingCalls;
  this->TotalFlushAsyncLoadingCalls = iVar3;
  this->MaxFlushAsyncLoadingTimeInMS = pFVar5->MaxFlushAsyncLoadingTime * dVar2;
  fVar7 = __real_42c80000;
  fVar17 = __real_3f800000;
  if (iVar3 < 1) {
    dVar18 = 0.0;
  }
  else {
    dVar18 = dVar18 / (double)iVar3;
  }
  this->AvgFlushAsyncLoadingTimeInMS = dVar18;
  this->TotalSyncLoadCount = pFVar5->TotalSyncLoadCount;
  fVar17 = fVar17 / (float)iVar16;
  this->BoundGameThreadPct = (float)pFVar5->NumFramesBound_GameThread * fVar17 * fVar7;
  this->BoundRenderThreadPct = (float)pFVar5->NumFramesBound_RenderThread * fVar17 * fVar7;
  this->BoundGPUPct = (float)pFVar5->NumFramesBound_GPU * fVar17 * fVar7;
  (**(code **)(this->_padding_ + 0x38))(this);
  uVar11 = uVar14;
  if (0 < GTargetFrameRatesForSummary.ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < GTargetFrameRatesForSummary.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(this->_padding_ + 0x28))(this);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < GTargetFrameRatesForSummary.ArrayNum);
  }
  pcVar6 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_98,L"--- Begin : Hitch chart dump for level \'%s\'");
  (*pcVar6)(this);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  iVar16 = (this->Chart->HitchTimeHistogram).Bins.ArrayNum;
  uVar11 = uVar14;
  if (0 < iVar16) {
    do {
      (**(code **)(this->_padding_ + 0x18))(this,&this->Chart->HitchTimeHistogram,uVar11);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar16);
  }
  pFVar5 = this->Chart;
  if (0 < (pFVar5->HitchTimeHistogram).Bins.ArrayNum) {
    FEnginePerformanceTargets::GetHitchFrameTimeThresholdMS();
    FHistogram::GetBinLowerBound(&pFVar5->HitchTimeHistogram,0);
  }
  (**(code **)(this->_padding_ + 0x20))
            (this,(int)(this->Chart->HitchTimeHistogram).CountOfAllMeasures);
  pcVar6 = *(code **)(this->_padding_ + 8);
  ::FString::FString(local_88,L"--- End");
  (*pcVar6)(this,local_88);
  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
  }
  lVar10 = (longlong)(this->Chart->DynamicResHistogram).Bins.ArrayNum;
  if (0 < lVar10) {
    lVar15 = 0;
    local_res8 = 0;
    do {
      iVar16 = 0;
      lVar12 = lVar10 - lVar15;
      lVar13 = local_res8;
      uVar11 = uVar14;
      do {
        pFVar5 = this->Chart;
        uVar9 = 0;
        if ((int)uVar11 < (pFVar5->DynamicResHistogram).Bins.ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar11 + 1;
        iVar16 = iVar16 + *(int *)((pFVar5->DynamicResHistogram).Bins.AllocatorInstance.Data +
                                  lVar13 + 0x18);
        lVar13 = lVar13 + 0x20;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      pFVar5 = this->Chart;
      uVar11 = 0;
      if ((int)uVar14 < (pFVar5->DynamicResHistogram).Bins.ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (**(code **)(this->_padding_ + 0x30))
                (this,(int)*(double *)
                            ((pFVar5->DynamicResHistogram).Bins.AllocatorInstance.Data + local_res8)
                 ,((float)iVar16 * fVar7) /
                  (float)(this->Chart->DynamicResHistogram).CountOfAllMeasures);
      local_res8 = local_res8 + 0x20;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < lVar10);
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// FillOutMemberStats @ 147703e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FDumpFPSChartToEndpoint::FillOutMemberStats(FDumpFPSChartToEndpoint *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FString *pFVar5;
  FString *pFVar6;
  UGameUserSettings *this_00;
  TIntPoint<int> TVar7;
  wchar_t *pwVar8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FWindowsPlatformMisc::GetOSVersions(&this->OSMajor,&this->OSMinor);
  ::FString::TrimStartAndEndInline(&this->OSMajor);
  ::FString::TrimStartAndEndInline(&this->OSMinor);
  pFVar5 = FWindowsPlatformMisc::GetCPUVendor(&local_68);
  pFVar6 = ::FString::TrimStartAndEnd(pFVar5,&local_78);
  pFVar5 = &this->CPUVendor;
  if (pFVar5 != pFVar6) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CPUVendor).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->CPUVendor).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar5 = FWindowsPlatformMisc::GetCPUBrand(&local_48);
  pFVar6 = ::FString::TrimStartAndEnd(pFVar5,&local_58);
  pFVar5 = &this->CPUBrand;
  if (pFVar5 != pFVar6) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CPUBrand).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->CPUBrand).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_28);
  pFVar6 = ::FString::TrimStartAndEnd(pFVar5,&local_38);
  pFVar5 = &this->DesktopGPUBrand;
  if (pFVar5 != pFVar6) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DesktopGPUBrand).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->DesktopGPUBrand).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::TrimStartAndEnd(&GRHIGlobals.GpuInfo.AdapterName,&local_18);
  pFVar5 = &this->ActualGPUBrand;
  if (pFVar5 != pFVar6) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ActualGPUBrand).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->ActualGPUBrand).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this_00 = UEngine::GetGameUserSettings(GEngine);
  if (this_00 == (UGameUserSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserSettingsObj",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ChartCreation.cpp"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ScalabilityQuality).ResolutionQuality = (this_00->ScalabilityQuality).ResolutionQuality;
  (this->ScalabilityQuality).ViewDistanceQuality = (this_00->ScalabilityQuality).ViewDistanceQuality
  ;
  (this->ScalabilityQuality).AntiAliasingQuality = (this_00->ScalabilityQuality).AntiAliasingQuality
  ;
  (this->ScalabilityQuality).ShadowQuality = (this_00->ScalabilityQuality).ShadowQuality;
  (this->ScalabilityQuality).GlobalIlluminationQuality =
       (this_00->ScalabilityQuality).GlobalIlluminationQuality;
  (this->ScalabilityQuality).ReflectionQuality = (this_00->ScalabilityQuality).ReflectionQuality;
  (this->ScalabilityQuality).PostProcessQuality = (this_00->ScalabilityQuality).PostProcessQuality;
  (this->ScalabilityQuality).TextureQuality = (this_00->ScalabilityQuality).TextureQuality;
  (this->ScalabilityQuality).EffectsQuality = (this_00->ScalabilityQuality).EffectsQuality;
  (this->ScalabilityQuality).FoliageQuality = (this_00->ScalabilityQuality).FoliageQuality;
  (this->ScalabilityQuality).ShadingQuality = (this_00->ScalabilityQuality).ShadingQuality;
  (this->ScalabilityQuality).LandscapeQuality = (this_00->ScalabilityQuality).LandscapeQuality;
  (this->ScalabilityQuality).CPUBenchmarkResults = (this_00->ScalabilityQuality).CPUBenchmarkResults
  ;
  (this->ScalabilityQuality).GPUBenchmarkResults = (this_00->ScalabilityQuality).GPUBenchmarkResults
  ;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ScalabilityQuality).CPUBenchmarkSteps,
             &(this_00->ScalabilityQuality).CPUBenchmarkSteps);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ScalabilityQuality).GPUBenchmarkSteps,
             &(this_00->ScalabilityQuality).GPUBenchmarkSteps);
  TVar7 = UGameUserSettings::GetScreenResolution(this_00);
                    /* WARNING: Load size is inaccurate */
  (this->GameResolution).field0_0x0 = (TIntPoint<int>_u_0)*TVar7.field0_0x0;
  TVar4 = UGameUserSettings::GetFullscreenMode(this_00);
  if (TVar4 == Fullscreen) {
    pwVar8 = L"Fullscreen";
  }
  else if (TVar4 == WindowedFullscreen) {
    pwVar8 = L"WindowedFullscreen";
  }
  else if (TVar4 == Windowed) {
    pwVar8 = L"Windowed";
  }
  else {
    pwVar8 = L"Unknown";
  }
  ::FString::operator=(&this->WindowMode,pwVar8);
  return;
}

// HandleBasicStats @ 14770e930

void __thiscall FDumpFPSChartToEndpoint::HandleBasicStats(FDumpFPSChartToEndpoint *this)

{
  int iVar1;
  code *pcVar2;
  EBuildConfiguration EVar3;
  FDateTime this_00;
  int iVar4;
  bool bVar5;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_238,L"--- Begin : FPS chart dump for level \'%s\'");
  (*pcVar2)(this,&local_238);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  GetChangeListNumberForPerfTesting();
  EVar3 = FApp::GetBuildConfiguration();
  ::LexToString(EVar3);
  FApp::GetBuildVersion();
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_38);
  ::FString::PrintfImpl
            (&local_228,
             L"Dumping FPS chart at %s using build %s in config %s built from changelist %i");
  (*pcVar2)(this,&local_228);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::FString(&local_218,L"Machine info:");
  (*pcVar2)(this,&local_218);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_208,L"\tOS: %s %s");
  (*pcVar2)(this,&local_208);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_1f8,L"\tCPU: %s %s");
  (*pcVar2)(this,&local_1f8);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_1e8,L"\tDeviceProfile: %s");
  (*pcVar2)(this,&local_1e8);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_248,L"\tGPU: %s");
  iVar4 = (this->ActualGPUBrand).Data.ArrayNum;
  iVar1 = (this->DesktopGPUBrand).Data.ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) goto LAB_14770ec01;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ActualGPUBrand).Data.AllocatorInstance.Data,
                       (wchar_t *)(this->DesktopGPUBrand).Data.AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if (!bVar5) {
    ::FString::PrintfImpl(&local_258,L" (desktop adapter %s)");
    iVar4 = local_258.Data.ArrayNum + -1;
    if (local_258.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_248,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar4);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
LAB_14770ec01:
  (**(code **)(this->_padding_ + 8))(this,&local_248);
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_1d8,L"\tResolution Quality: %.2f");
  (*pcVar2)(this,&local_1d8);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_1c8,L"\tView Distance Quality: %d");
  (*pcVar2)(this,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_1b8,L"\tAnti-Aliasing Quality: %d");
  (*pcVar2)(this,&local_1b8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_1a8,L"\tShadow Quality: %d");
  (*pcVar2)(this,&local_1a8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_198,L"\tGlobal Illumination Quality: %d");
  (*pcVar2)(this,&local_198);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_188,L"\tReflection Quality: %d");
  (*pcVar2)(this,&local_188);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_178,L"\tPost-Process Quality: %d");
  (*pcVar2)(this,&local_178);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_168,L"\tTexture Quality: %d");
  (*pcVar2)(this,&local_168);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_158,L"\tEffects Quality: %d");
  (*pcVar2)(this,&local_158);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_148,L"\tFoliage Quality: %d");
  (*pcVar2)(this,&local_148);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_138,L"\tHair Quality: %d");
  (*pcVar2)(this,&local_138);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_128,L"\tWindow Mode: %s");
  (*pcVar2)(this,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_118,L"\tResolution: %dx%d");
  (*pcVar2)(this,&local_118);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl
            (&local_108,
             L"%lld frames collected over %4.2f seconds, disregarding %4.2f seconds (%d frames) for a %4.2f FPS average"
            );
  (*pcVar2)(this,&local_108);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_f8,L"Average GPU frametime: %4.2f ms");
  (*pcVar2)(this,&local_f8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_e8,L"Average RenderThread frametime: %4.2f ms");
  (*pcVar2)(this,&local_e8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_d8,L"Average GameThread frametime: %4.2f ms");
  (*pcVar2)(this,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_c8,L"Total time spent flushing async loading: %4.2f ms");
  (*pcVar2)(this,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_b8,L"Total flushing async loading calls: %d");
  (*pcVar2)(this,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_a8,L"Max flush async loading time: %4.2f ms");
  (*pcVar2)(this,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_98,L"Average flush async loading time: %4.2f ms");
  (*pcVar2)(this,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_88,L"Total sync loads: %d");
  (*pcVar2)(this,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_78,L"BoundGameThreadPct: %4.2f");
  (*pcVar2)(this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_68,L"BoundRenderThreadPct: %4.2f");
  (*pcVar2)(this,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_58,L"BoundGPUPct: %4.2f");
  (*pcVar2)(this);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pcVar2 = *(code **)(this->_padding_ + 8);
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::PrintfImpl(&local_48,L"ExcludeIdleTime: %d");
  (*pcVar2)(this,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleDynamicResThreshold @ 1477107a0

void __thiscall
FDumpFPSChartToEndpoint::HandleDynamicResThreshold
          (FDumpFPSChartToEndpoint *this,int param_1,float param_2)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_18,L"DynamicRes above %d%% : %.2f%% of frames");
  (*pcVar1)(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleFPSThreshold @ 147710c20

void __thiscall
FDumpFPSChartToEndpoint::HandleFPSThreshold(FDumpFPSChartToEndpoint *this,int param_1,float param_2)

{
  code *pcVar1;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(&local_18,L"  Target %d FPS: %.2f %% syncs missed");
  (*pcVar1)(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleHitchBucket @ 1477112d0

void __thiscall
FDumpFPSChartToEndpoint::HandleHitchBucket
          (FDumpFPSChartToEndpoint *this,FHistogram *param_1,int param_2)

{
  code *pcVar1;
  double dVar2;
  ForAnyElementType FVar3;
  FString local_38 [2];
  
  FHistogram::GetBinLowerBound(param_1,param_2);
  dVar2 = FHistogram::GetBinUpperBound(param_1,param_2);
  if (dVar2 == __real_47efffffe0000000) {
    ::FString::PrintfImpl(local_38,L"%0.2fs - inf");
  }
  else {
    ::FString::PrintfImpl(local_38,L"%0.2fs - %0.2fs");
  }
  FVar3.Data = local_38[0].Data.AllocatorInstance.Data;
  pcVar1 = *(code **)(this->_padding_ + 8);
  FHistogram::GetBinObservationsSum(param_1,param_2);
  FHistogram::GetBinObservationsCount(param_1,param_2);
  ::FString::PrintfImpl(local_38,L"Bucket: %s  Count: %i  Time: %.2f s");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// HandleHitchSummary @ 147712370

void __thiscall
FDumpFPSChartToEndpoint::HandleHitchSummary
          (FDumpFPSChartToEndpoint *this,int param_1,double param_2)

{
  code *pcVar1;
  FString local_38 [3];
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(local_38,L"Total hitch count:  %i");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  FPerformanceTrackingChart::GetPercentHitchTime(this->Chart,true);
  ::FString::PrintfImpl(local_38,L"Total hitch time:  %.2f s (%0.2f %%)");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(local_38,L"Hitch frames bound by game thread:  %i  (%0.1f %%)");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(local_38,L"Hitch frames bound by render thread:  %i  (%0.1f %%)");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(local_38,L"Hitch frames bound by RHI thread:  %i  (%0.1f %%)");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(local_38,L"Hitch frames bound by GPU:  %i  (%0.1f %%)");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)(this->_padding_ + 8);
  ::FString::PrintfImpl(local_38,L"Hitches / min:  %.2f");
  (*pcVar1)(this,local_38);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (0 < param_1) {
    pcVar1 = *(code **)(this->_padding_ + 8);
    ::FString::PrintfImpl(local_38,L"Avg. hitch frame length:  %.2f s");
    (*pcVar1)(this,local_38);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

