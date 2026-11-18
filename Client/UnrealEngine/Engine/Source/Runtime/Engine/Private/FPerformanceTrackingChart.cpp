// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FPerformanceTrackingChart @ 1476e7e40

FPerformanceTrackingChart * __thiscall
FPerformanceTrackingChart::FPerformanceTrackingChart
          (FPerformanceTrackingChart *this,FDateTime *param_1,FString *param_2)

{
  this->_padding_ = (longlong)&___7FPerformanceTrackingChart__6B_;
  ::FString::FString(&this->ChartLabel,param_2);
  (this->FrametimeHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrametimeHistogram).Bins.ArrayNum = 0;
  (this->FrametimeHistogram).Bins.ArrayMax = 0;
  (this->HitchTimeHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitchTimeHistogram).Bins.ArrayNum = 0;
  (this->HitchTimeHistogram).Bins.ArrayMax = 0;
  (this->DynamicResHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicResHistogram).Bins.ArrayNum = 0;
  (this->DynamicResHistogram).Bins.ArrayMax = 0;
  (this->AsyncPackageQueueHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncPackageQueueHistogram).Bins.ArrayNum = 0;
  (this->AsyncPackageQueueHistogram).Bins.ArrayMax = 0;
  (this->CaptureStartTime).Ticks = 0;
  (this->DeviceProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProfileName).Data.ArrayNum = 0;
  (this->DeviceProfileName).Data.ArrayMax = 0;
  Reset(this,param_1);
  return this;
}

// FPerformanceTrackingChart @ 1476e7ed0

FPerformanceTrackingChart * __thiscall
FPerformanceTrackingChart::FPerformanceTrackingChart(FPerformanceTrackingChart *this)

{
  FDateTime local_res8 [4];
  
  this->_padding_ = (longlong)&___7FPerformanceTrackingChart__6B_;
  (this->ChartLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChartLabel).Data.ArrayNum = 0;
  (this->ChartLabel).Data.ArrayMax = 0;
  (this->FrametimeHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrametimeHistogram).Bins.ArrayNum = 0;
  (this->FrametimeHistogram).Bins.ArrayMax = 0;
  (this->HitchTimeHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitchTimeHistogram).Bins.ArrayNum = 0;
  (this->HitchTimeHistogram).Bins.ArrayMax = 0;
  (this->DynamicResHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicResHistogram).Bins.ArrayNum = 0;
  (this->DynamicResHistogram).Bins.ArrayMax = 0;
  (this->AsyncPackageQueueHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncPackageQueueHistogram).Bins.ArrayNum = 0;
  (this->AsyncPackageQueueHistogram).Bins.ArrayMax = 0;
  (this->CaptureStartTime).Ticks = 0;
  (this->DeviceProfileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProfileName).Data.ArrayNum = 0;
  (this->DeviceProfileName).Data.ArrayMax = 0;
  local_res8[0].Ticks = 0;
  Reset(this,local_res8);
  return this;
}

// ~FPerformanceTrackingChart @ 1476e8fc0

void __thiscall
FPerformanceTrackingChart::~FPerformanceTrackingChart(FPerformanceTrackingChart *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPerformanceTrackingChart__6B_;
  pFVar1 = (this->DeviceProfileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AsyncPackageQueueHistogram).Bins.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicResHistogram).Bins.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HitchTimeHistogram).Bins.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrametimeHistogram).Bins.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChartLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IPerformanceDataConsumer__6B_;
  return;
}

// AccumulateWith @ 1476eada0

void __thiscall
FPerformanceTrackingChart::AccumulateWith
          (FPerformanceTrackingChart *this,FPerformanceTrackingChart *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  
  FHistogram::operator+=(&this->FrametimeHistogram,&param_1->FrametimeHistogram);
  FHistogram::operator+=(&this->HitchTimeHistogram,&param_1->HitchTimeHistogram);
  FHistogram::operator+=(&this->DynamicResHistogram,&param_1->DynamicResHistogram);
  FHistogram::operator+=(&this->AsyncPackageQueueHistogram,&param_1->AsyncPackageQueueHistogram);
  this->NumFramesBound_GameThread =
       this->NumFramesBound_GameThread + param_1->NumFramesBound_GameThread;
  this->NumFramesBound_RenderThread =
       this->NumFramesBound_RenderThread + param_1->NumFramesBound_RenderThread;
  this->NumFramesBound_RHIThread =
       this->NumFramesBound_RHIThread + param_1->NumFramesBound_RHIThread;
  this->NumFramesBound_GPU = this->NumFramesBound_GPU + param_1->NumFramesBound_GPU;
  this->TotalFramesBoundTime_GameThread =
       param_1->TotalFramesBoundTime_GameThread + this->TotalFramesBoundTime_GameThread;
  this->TotalFramesBoundTime_RenderThread =
       param_1->TotalFramesBoundTime_RenderThread + this->TotalFramesBoundTime_RenderThread;
  this->TotalFramesBoundTime_RHIThread =
       param_1->TotalFramesBoundTime_RHIThread + this->TotalFramesBoundTime_RHIThread;
  this->TotalFramesBoundTime_GPU =
       param_1->TotalFramesBoundTime_GPU + this->TotalFramesBoundTime_GPU;
  this->TotalFrameTime_GameThread =
       param_1->TotalFrameTime_GameThread + this->TotalFrameTime_GameThread;
  this->TotalFrameTime_RenderThread =
       param_1->TotalFrameTime_RenderThread + this->TotalFrameTime_RenderThread;
  this->TotalFrameTime_RHIThread =
       param_1->TotalFrameTime_RHIThread + this->TotalFrameTime_RHIThread;
  this->TotalFrameTime_GPU = param_1->TotalFrameTime_GPU + this->TotalFrameTime_GPU;
  this->TotalFlushAsyncLoadingTime =
       param_1->TotalFlushAsyncLoadingTime + this->TotalFlushAsyncLoadingTime;
  this->TotalFlushAsyncLoadingCalls =
       this->TotalFlushAsyncLoadingCalls + param_1->TotalFlushAsyncLoadingCalls;
  dVar5 = param_1->MaxFlushAsyncLoadingTime;
  if (param_1->MaxFlushAsyncLoadingTime <= this->MaxFlushAsyncLoadingTime) {
    dVar5 = this->MaxFlushAsyncLoadingTime;
  }
  this->MaxFlushAsyncLoadingTime = dVar5;
  this->TotalSyncLoadCount = this->TotalSyncLoadCount + param_1->TotalSyncLoadCount;
  this->TotalGameThreadBoundHitchCount =
       this->TotalGameThreadBoundHitchCount + param_1->TotalGameThreadBoundHitchCount;
  this->TotalRenderThreadBoundHitchCount =
       this->TotalRenderThreadBoundHitchCount + param_1->TotalRenderThreadBoundHitchCount;
  this->TotalRHIThreadBoundHitchCount =
       this->TotalRHIThreadBoundHitchCount + param_1->TotalRHIThreadBoundHitchCount;
  this->TotalGPUBoundHitchCount = this->TotalGPUBoundHitchCount + param_1->TotalGPUBoundHitchCount;
  iVar2 = param_1->MaxDrawCalls;
  if (param_1->MaxDrawCalls < this->MaxDrawCalls) {
    iVar2 = this->MaxDrawCalls;
  }
  this->MaxDrawCalls = iVar2;
  iVar2 = param_1->MinDrawCalls;
  if (this->MinDrawCalls < param_1->MinDrawCalls) {
    iVar2 = this->MinDrawCalls;
  }
  this->MinDrawCalls = iVar2;
  this->TotalDrawCalls = this->TotalDrawCalls + param_1->TotalDrawCalls;
  iVar2 = param_1->MaxPlayerTicks;
  if (param_1->MaxPlayerTicks < this->MaxPlayerTicks) {
    iVar2 = this->MaxPlayerTicks;
  }
  this->MaxPlayerTicks = iVar2;
  iVar2 = param_1->MinPlayerTicks;
  if (this->MinPlayerTicks < param_1->MinPlayerTicks) {
    iVar2 = this->MinPlayerTicks;
  }
  this->MinPlayerTicks = iVar2;
  this->TotalPlayerTicks = this->TotalPlayerTicks + param_1->TotalPlayerTicks;
  iVar2 = param_1->MaxVehicleTicks;
  if (param_1->MaxVehicleTicks < this->MaxVehicleTicks) {
    iVar2 = this->MaxVehicleTicks;
  }
  this->MaxVehicleTicks = iVar2;
  this->TotalVehicleTicks = this->TotalVehicleTicks + param_1->TotalVehicleTicks;
  iVar2 = param_1->MaxDrawnPrimitives;
  if (param_1->MaxDrawnPrimitives < this->MaxDrawnPrimitives) {
    iVar2 = this->MaxDrawnPrimitives;
  }
  this->MaxDrawnPrimitives = iVar2;
  iVar2 = param_1->MinDrawnPrimitives;
  if (this->MinDrawnPrimitives < param_1->MinDrawnPrimitives) {
    iVar2 = this->MinDrawnPrimitives;
  }
  this->MinDrawnPrimitives = iVar2;
  this->TotalDrawnPrimitives = this->TotalDrawnPrimitives + param_1->TotalDrawnPrimitives;
  this->StopTemperatureLevel = param_1->StopTemperatureLevel;
  this->StopBatteryLevel = param_1->StopBatteryLevel;
  this->AccumulatedChartTime = param_1->AccumulatedChartTime + this->AccumulatedChartTime;
  this->TimeDisregarded = param_1->TimeDisregarded + this->TimeDisregarded;
  this->FramesDisregarded = this->FramesDisregarded + param_1->FramesDisregarded;
  lVar3 = (param_1->CaptureStartTime).Ticks;
  lVar1 = (this->CaptureStartTime).Ticks;
  if (lVar1 < lVar3) {
    lVar3 = lVar1;
  }
  (this->CaptureStartTime).Ticks = lVar3;
  this->NumFramesAtCriticalMemoryPressure =
       this->NumFramesAtCriticalMemoryPressure + param_1->NumFramesAtCriticalMemoryPressure;
  uVar4 = param_1->MaxPhysicalMemory;
  if (param_1->MaxPhysicalMemory < this->MaxPhysicalMemory) {
    uVar4 = this->MaxPhysicalMemory;
  }
  this->MaxPhysicalMemory = uVar4;
  uVar4 = param_1->MaxVirtualMemory;
  if (this->MaxVirtualMemory < param_1->MaxVirtualMemory) {
    uVar4 = this->MaxVirtualMemory;
  }
  this->MaxVirtualMemory = uVar4;
  uVar4 = param_1->MinPhysicalMemory;
  if (this->MinPhysicalMemory < param_1->MinPhysicalMemory) {
    uVar4 = this->MinPhysicalMemory;
  }
  this->MinPhysicalMemory = uVar4;
  uVar4 = param_1->MinVirtualMemory;
  if (this->MinVirtualMemory < param_1->MinVirtualMemory) {
    uVar4 = this->MinVirtualMemory;
  }
  this->MinVirtualMemory = uVar4;
  uVar4 = param_1->MinAvailablePhysicalMemory;
  if (this->MinAvailablePhysicalMemory < param_1->MinAvailablePhysicalMemory) {
    uVar4 = this->MinAvailablePhysicalMemory;
  }
  this->MinAvailablePhysicalMemory = uVar4;
  this->TotalPhysicalMemoryUsed = this->TotalPhysicalMemoryUsed + param_1->TotalPhysicalMemoryUsed;
  this->TotalVirtualMemoryUsed = this->TotalVirtualMemoryUsed + param_1->TotalVirtualMemoryUsed;
  return;
}

// DumpChartsToHTML @ 147701b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPerformanceTrackingChart::DumpChartsToHTML
          (FPerformanceTrackingChart *this,double param_1,
          TArray<FPerformanceTrackingChart_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3,FString *param_4)

{
  int iVar1;
  longlong lVar2;
  FPerformanceTrackingChart *pFVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType _Src;
  bool bVar5;
  IFileManager *pIVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  undefined1 local_res18 [16];
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  TStringView<wchar_t> local_1c8;
  FString local_1b8;
  FString local_1a8;
  FDumpFPSChartToEndpoint local_198;
  FString *local_50;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&FPSChartPreamble,GFPSChartPreamble);
    atexit(`FPerformanceTrackingChart::DumpChartsToHTML'::__l2::
           _dynamic_atexit_destructor_for__FPSChartPreamble__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&FPSChartPostamble,GFPSChartPostamble);
    atexit(`FPerformanceTrackingChart::DumpChartsToHTML'::__l2::
           _dynamic_atexit_destructor_for__FPSChartPostamble__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&FPSChartRowStructure,GFPSChartRow);
    atexit(`FPerformanceTrackingChart::DumpChartsToHTML'::__l2::
           _dynamic_atexit_destructor_for__FPSChartRowStructure__);
    _Init_thread_footer(&::_TSS2);
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1a8.Data.AllocatorInstance.Data = pFVar9 + (longlong)iVar1 * 8;
  while( true ) {
    FVar7.Data = local_1a8.Data.AllocatorInstance.Data;
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPerformanceTrackingChart_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    _Src.Data = FPSChartRowStructure.Data.AllocatorInstance.Data;
    if (pFVar9 == FVar7.Data) break;
    pFVar3 = *(FPerformanceTrackingChart **)pFVar9;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = FPSChartRowStructure.Data.ArrayNum;
    local_1e8.Data.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,(ForAnyElementType *)&local_1e8,iVar8,&local_1e8.Data.ArrayMax);
      memcpy(local_1e8.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 * 2);
    }
    FDumpFPSChartToEndpoint::FDumpFPSChartToEndpoint(&local_198,pFVar3);
    local_198._padding_ = (longlong)&___7FDumpFPSChartToHTMLEndpoint__6B_;
    local_50 = &local_1e8;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = (this->DeviceProfileName).Data.ArrayNum;
    pFVar4 = (this->DeviceProfileName).Data.AllocatorInstance.Data;
    local_1d8.Data.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,(ForAnyElementType *)&local_1d8,iVar8,&local_1d8.Data.ArrayMax);
      memcpy(local_1d8.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar8 * 2);
    }
    iVar8 = (param_3->Data).ArrayNum;
    pFVar4 = (param_3->Data).AllocatorInstance.Data;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_208.Data.ArrayNum = 0;
      local_208.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,(ForAnyElementType *)&local_208,iVar8,&local_208.Data.ArrayMax);
      memcpy(local_208.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar8 * 2);
    }
    FDumpFPSChartToEndpoint::DumpChart(&local_198,param_1,&local_208,&local_1d8);
    iVar8 = local_1e8.Data.ArrayNum + -1;
    if (local_1e8.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_1b8,(wchar_t *)local_1e8.Data.AllocatorInstance.Data,iVar8);
    FDumpFPSChartToEndpoint::~FDumpFPSChartToEndpoint(&local_198);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 8;
  }
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  if ((param_4->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  bVar5 = FFileHelper::LoadFileToString(&local_1f8,pwVar10,None,0);
  if (bVar5) {
    ::FString::FString(&local_1a8,L"<UE4></UE4>");
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar7.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    ::FString::FString(&local_208,(wchar_t *)FVar7.Data);
    ::FString::Split(&local_1f8,&local_208,&local_1e8,&local_1d8);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF((FString *)&local_1c8,&FPSChartPreamble,&local_1b8);
    ::FString::ConcatFF(&local_208,(FString *)&local_1c8,&local_1d8);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    local_1f8.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
    local_1f8.Data.ArrayNum = local_208.Data.ArrayNum;
    local_1f8.Data.ArrayMax = local_208.Data.ArrayMax;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.DataPtr);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    local_1c8.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      local_1c8.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FString::ConcatFF((FString *)&local_1c8,&FPSChartPreamble,&local_1b8);
    ::FString::ConcatFF(&local_208,(FString *)&local_1c8,&FPSChartPostamble);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    local_1f8.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
    local_1f8.Data.ArrayNum = local_208.Data.ArrayNum;
    local_1f8.Data.ArrayMax = local_208.Data.ArrayMax;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.DataPtr);
  }
  pIVar6 = IFileManager::Get();
  if ((param_4->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  local_1c8.Size = local_1f8.Data.ArrayNum + -1;
  if (local_1f8.Data.ArrayNum == 0) {
    local_1c8.Size = 0;
  }
  local_1c8.DataPtr = (wchar_t *)local_1f8.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_1c8,pwVar10,AutoDetect,pIVar6,0);
  if (2 < (byte)LogProfilingDebugging._0_1_) {
    pIVar6 = IFileManager::Get();
    if ((param_4->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar6 + 0x100))(pIVar6,&local_1c8,pwVar10);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProfilingDebugging);
    if ((FScriptContainerElement *)local_1c8.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.DataPtr);
    }
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpChartsToLogFile @ 147702190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPerformanceTrackingChart::DumpChartsToLogFile
          (FPerformanceTrackingChart *this,double param_1,
          TArray<FPerformanceTrackingChart_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  IFileManager *pIVar5;
  FArchive *this_00;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  undefined1 local_1c8 [4];
  uint local_1c4;
  FString local_1c0;
  FString local_1b0;
  wchar_t *local_1a0;
  int local_198;
  FScriptContainerElement *local_190;
  FDumpFPSChartToEndpoint local_188;
  FArchive *local_40;
  
  pIVar5 = IFileManager::Get();
  if ((param_4->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  this_00 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,pwVar9,8);
  if (this_00 != (FArchive *)0x0) {
    local_1c4 = param_2->ArrayNum;
    uVar6 = (ulonglong)(int)local_1c4;
    pFVar8 = (param_2->AllocatorInstance).Data;
    local_190 = pFVar8 + uVar6 * 8;
    while( true ) {
      pFVar1 = local_190;
      if (param_2->ArrayNum != (int)uVar6) {
        local_1c8[0] = 0;
        `TCheckedPointerIterator<FPerformanceTrackingChart_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1c8);
      }
      if (pFVar8 == pFVar1) break;
      FDumpFPSChartToEndpoint::FDumpFPSChartToEndpoint
                (&local_188,*(FPerformanceTrackingChart **)pFVar8);
      local_1c0.Data.ArrayNum = (this->DeviceProfileName).Data.ArrayNum;
      lVar7 = (longlong)local_1c0.Data.ArrayNum;
      local_188._padding_ = (longlong)&___7FDumpFPSChartToFileEndpoint__6B_;
      pFVar1 = (this->DeviceProfileName).Data.AllocatorInstance.Data;
      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40 = this_00;
      if (local_1c0.Data.ArrayNum == 0) {
        local_1c0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1c0.Data.ArrayNum,0,(ForAnyElementType *)&local_1c0,
                   local_1c0.Data.ArrayNum,&local_1c0.Data.ArrayMax);
        memcpy(local_1c0.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
      }
      local_1b0.Data.ArrayNum = (param_3->Data).ArrayNum;
      lVar7 = (longlong)local_1b0.Data.ArrayNum;
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1b0.Data.ArrayNum == 0) {
        local_1b0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1b0.Data.ArrayNum,0,(ForAnyElementType *)&local_1b0,
                   local_1b0.Data.ArrayNum,&local_1b0.Data.ArrayMax);
        memcpy(local_1b0.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
      }
      FDumpFPSChartToEndpoint::DumpChart(&local_188,param_1,&local_1b0,&local_1c0);
      FDumpFPSChartToEndpoint::~FDumpFPSChartToEndpoint(&local_188);
      uVar6 = (ulonglong)local_1c4;
      pFVar8 = pFVar8 + 8;
    }
    FArchive::LogfImpl(this_00,L"\r\n\r\n\r\n");
    (*(code *)**(undefined8 **)this_00)(this_00,1);
    pIVar5 = IFileManager::Get();
    if ((param_4->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar5 + 0x100))(pIVar5,&local_1a0,pwVar9);
    if (2 < (byte)LogProfilingDebugging._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProfilingDebugging);
    }
    pTVar3 = GFPSChartOpenFolderOnDump.Ref;
    bVar4 = IsInParallelGameThread();
    if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar3->ShadowedValue[0] != 0) {
      pwVar9 = L"";
      if (local_198 != 0) {
        pwVar9 = local_1a0;
      }
      FWindowsPlatformProcess::ExploreFolder(pwVar9);
    }
    if (local_1a0 != (wchar_t *)0x0) {
      FMemory::Free(local_1a0);
    }
  }
  return;
}

// DumpChartsToOutputLog @ 147702480

void __thiscall
FPerformanceTrackingChart::DumpChartsToOutputLog
          (FPerformanceTrackingChart *this,double param_1,
          TArray<FPerformanceTrackingChart_const_*,TSizedDefaultAllocator<32>_> *param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [8];
  FString local_1a8;
  FString local_198;
  FDumpFPSChartToEndpoint local_188;
  
  pFVar5 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPerformanceTrackingChart_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar1) break;
    FDumpFPSChartToEndpoint::FDumpFPSChartToEndpoint
              (&local_188,*(FPerformanceTrackingChart **)pFVar5);
    pFVar3 = (this->DeviceProfileName).Data.AllocatorInstance.Data;
    local_188._padding_ = (longlong)&___7FDumpFPSChartToLogEndpoint__6B_;
    local_1a8.Data.ArrayNum = (this->DeviceProfileName).Data.ArrayNum;
    lVar4 = (longlong)local_1a8.Data.ArrayNum;
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1a8.Data.ArrayNum == 0) {
      local_1a8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                 local_1a8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
      memcpy(local_1a8.Data.AllocatorInstance.Data,pFVar3,lVar4 * 2);
    }
    local_198.Data.ArrayNum = (param_3->Data).ArrayNum;
    lVar4 = (longlong)local_198.Data.ArrayNum;
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_198.Data.ArrayNum == 0) {
      local_198.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_198.Data.ArrayNum,0,(ForAnyElementType *)&local_198,
                 local_198.Data.ArrayNum,&local_198.Data.ArrayMax);
      memcpy(local_198.Data.AllocatorInstance.Data,pFVar3,lVar4 * 2);
    }
    FDumpFPSChartToEndpoint::DumpChart(&local_188,param_1,&local_198,&local_1a8);
    FDumpFPSChartToEndpoint::~FDumpFPSChartToEndpoint(&local_188);
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// DumpFPSChart @ 147702670

void __thiscall
FPerformanceTrackingChart::DumpFPSChart(FPerformanceTrackingChart *this,FString *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_res8 [2];
  FString local_278;
  FString local_268;
  FString local_258;
  TArray<FPerformanceTrackingChart_const_*,TSizedDefaultAllocator<32>_> local_248;
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
  FDumpFPSChartToEndpoint local_188;
  
  local_res8[0] = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_248.AllocatorInstance,&local_248.ArrayMax);
  dVar1 = this->AccumulatedChartTime;
  iVar10 = iVar6 + 1;
  local_248.ArrayNum = iVar10;
  *(FPerformanceTrackingChart **)(local_248.AllocatorInstance.Data + (longlong)iVar6 * 8) = this;
  uVar9 = (ulonglong)iVar10;
  pFVar13 = local_248.AllocatorInstance.Data + uVar9 * 8;
  FVar12.Data = local_248.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar10) {
      `TCheckedPointerIterator<FPerformanceTrackingChart_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar12.Data == pFVar13) break;
    FDumpFPSChartToEndpoint::FDumpFPSChartToEndpoint
              (&local_188,*(FPerformanceTrackingChart **)FVar12.Data);
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = (this->DeviceProfileName).Data.ArrayNum;
    lVar11 = (longlong)local_258.Data.ArrayNum;
    local_188._padding_ = (longlong)&___7FDumpFPSChartToLogEndpoint__6B_;
    pFVar2 = (this->DeviceProfileName).Data.AllocatorInstance.Data;
    if (local_258.Data.ArrayNum == 0) {
      local_258.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_258.Data.ArrayNum,0,(ForAnyElementType *)&local_258,
                 local_258.Data.ArrayNum,&local_258.Data.ArrayMax);
      memcpy(local_258.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
    }
    local_268.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar11 = (longlong)local_268.Data.ArrayNum;
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_268.Data.ArrayNum == 0) {
      local_268.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_268.Data.ArrayNum,0,(ForAnyElementType *)&local_268,
                 local_268.Data.ArrayNum,&local_268.Data.ArrayMax);
      memcpy(local_268.Data.AllocatorInstance.Data,pFVar2,lVar11 * 2);
    }
    FDumpFPSChartToEndpoint::DumpChart(&local_188,dVar1,&local_268,&local_258);
    FDumpFPSChartToEndpoint::~FDumpFPSChartToEndpoint(&local_188);
    uVar9 = local_248._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  FPerformanceTrackingSystem::CreateOutputDirectory(&local_218,&this->CaptureStartTime);
  ::FString::FString(&local_198,L"FPS");
  ::FString::FString(&local_228,L".log");
  ::FString::FString(&local_208,"Windows");
  ::FString::ConcatFC(&local_268,param_1,L"-FPS-");
  ::FString::ConcatFF(&local_258,&local_268,&local_208);
  ::FString::ConcatFF(&local_238,&local_258,&local_228);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  iVar10 = local_218.Data.ArrayNum;
  FVar12.Data = local_218.Data.AllocatorInstance.Data;
  iVar15 = 1;
  iVar6 = local_238.Data.ArrayNum + -1;
  if (local_238.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if ((iVar10 != 0) || (iVar7 = 2, iVar6 == -1)) {
    iVar7 = 1;
  }
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Data.ArrayNum = local_218.Data.ArrayNum;
  local_218.Data.ArrayNum = iVar10;
  if ((iVar10 == 0) && (iVar6 + iVar7 == 0)) {
    local_278.Data.ArrayMax = 0;
  }
  else {
    uVar14 = iVar10 + iVar6 + iVar7;
    if ((int)uVar14 < iVar10) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar14,0,(ForAnyElementType *)&local_278,iVar10,&local_278.Data.ArrayMax);
    if (iVar10 != 0) {
      memcpy(local_278.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar10 * 2);
    }
  }
  ::FString::PathAppend(&local_278,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar6);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  DumpChartsToLogFile(this,this->AccumulatedChartTime,&local_248,param_1,&local_278);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  bVar5 = true;
  bVar4 = false;
  bVar3 = false;
  if ((this->ChartLabel).Data.ArrayNum < 2) {
    local_278.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar11 = (longlong)local_278.Data.ArrayNum;
    pFVar13 = (param_1->Data).AllocatorInstance.Data;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_278.Data.ArrayNum == 0) {
      local_278.Data.ArrayMax = 0;
      FVar12.Data = (FScriptContainerElement *)0x0;
      iVar10 = local_278.Data.ArrayNum;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_278.Data.ArrayNum,0,(ForAnyElementType *)&local_278,
                 local_278.Data.ArrayNum,&local_278.Data.ArrayMax);
      memcpy(local_278.Data.AllocatorInstance.Data,pFVar13,lVar11 * 2);
      bVar5 = true;
      bVar4 = false;
      bVar3 = false;
      FVar12.Data = local_278.Data.AllocatorInstance.Data;
      iVar10 = local_278.Data.ArrayNum;
    }
  }
  else {
    ::FString::ConcatFC(&local_228,&this->ChartLabel,L"-");
    ::FString::ConcatFF(&local_238,&local_228,param_1);
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    FVar12.Data = local_238.Data.AllocatorInstance.Data;
    iVar10 = local_238.Data.ArrayNum;
  }
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = iVar10;
  if (iVar10 == 0) {
    local_258.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,(ForAnyElementType *)&local_258,iVar10,&local_258.Data.ArrayMax);
    memcpy(local_258.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar10 * 2);
  }
  if ((bVar3) && (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1b8,L".html");
  pFVar8 = FDateTime::ToString(&this->CaptureStartTime,&local_1a8);
  ::FString::FString(&local_1c8,"-");
  ::FString::ConcatFF(&local_1d8,&local_258,&local_1c8);
  ::FString::ConcatFF(&local_278,&local_1d8,pFVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_278.Data.ArrayNum != 0) {
    FVar12.Data = local_278.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_1e8,(wchar_t *)FVar12.Data);
  ::FString::FString(&local_1f8,"Windows");
  ::FString::ConcatFC(&local_208,&local_1e8,L"-FPS-");
  ::FString::ConcatFF(&local_228,&local_208,&local_1f8);
  ::FString::ConcatFF(&local_238,&local_228,&local_1b8);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  FVar12.Data = local_218.Data.AllocatorInstance.Data;
  pFVar13 = (FScriptContainerElement *)(ulonglong)(local_238.Data.ArrayNum - 1);
  if (local_238.Data.ArrayNum == 0) {
    pFVar13 = (FScriptContainerElement *)0x0;
  }
  local_268.Data.ArrayNum = local_218.Data.ArrayNum;
  iVar10 = (int)pFVar13;
  if ((local_218.Data.ArrayNum == 0) && (iVar10 != -1)) {
    iVar15 = 2;
  }
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((local_218.Data.ArrayNum == 0) && (iVar10 + iVar15 == 0)) {
    local_268.Data.ArrayMax = 0;
  }
  else {
    uVar14 = local_218.Data.ArrayNum + iVar10 + iVar15;
    if ((int)uVar14 < local_218.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar14,0,(ForAnyElementType *)&local_268,local_218.Data.ArrayNum,
               &local_268.Data.ArrayMax);
    if (local_218.Data.ArrayNum != 0) {
      memcpy(local_268.Data.AllocatorInstance.Data,FVar12.Data,(longlong)local_218.Data.ArrayNum * 2
            );
    }
  }
  ::FString::PathAppend(&local_268,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar10);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  DumpChartsToHTML(this,this->AccumulatedChartTime,&local_248,&local_258,&local_268);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return;
}

// GetPercentFramesIOBusy @ 1477091e0

double __thiscall
FPerformanceTrackingChart::GetPercentFramesIOBusy(FPerformanceTrackingChart *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  
  lVar1 = (this->FrametimeHistogram).CountOfAllMeasures;
  uVar6 = (ulonglong)param_1;
  if (lVar1 < 1) {
    return 0.0;
  }
  iVar7 = 0;
  if (param_1 == 0) {
    iVar7 = (int)(this->AsyncPackageQueueHistogram).CountOfAllMeasures;
  }
  else if (param_1 < (this->AsyncPackageQueueHistogram).Bins.ArrayNum) {
    lVar8 = uVar6 << 5;
    iVar7 = 0;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->AsyncPackageQueueHistogram).Bins.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        dVar9 = (double)(*pcVar2)();
        return dVar9;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      iVar7 = iVar7 + *(int *)((this->AsyncPackageQueueHistogram).Bins.AllocatorInstance.Data +
                              lVar8 + 0x18);
      lVar8 = lVar8 + 0x20;
    } while ((int)(uVar5 + 1) < (this->AsyncPackageQueueHistogram).Bins.ArrayNum);
  }
  return ((double)iVar7 / (double)lVar1) * __real_4059000000000000;
}

// GetPercentHitchTime @ 147709300

double __thiscall
FPerformanceTrackingChart::GetPercentHitchTime(FPerformanceTrackingChart *this,bool param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->HitchTimeHistogram).SumOfAllMeasures;
  dVar2 = (this->FrametimeHistogram).SumOfAllMeasures;
  if ((param_1) && (0 < (this->HitchTimeHistogram).Bins.ArrayNum)) {
    fVar3 = FEnginePerformanceTargets::GetHitchFrameTimeThresholdMS();
    dVar5 = (double)fVar3 * __real_3f50624dd2f1a9fc;
    dVar4 = FHistogram::GetBinLowerBound(&this->HitchTimeHistogram,0);
    if (dVar4 <= dVar5) {
      dVar4 = dVar5;
    }
    dVar1 = dVar1 - (double)(this->HitchTimeHistogram).CountOfAllMeasures * dVar4;
  }
  dVar5 = 0.0;
  if (0.0 < dVar2) {
    dVar5 = (dVar1 * __real_4059000000000000) / dVar2;
  }
  return dVar5;
}

// GetTotalHitchFrameTime @ 14770af10

double __thiscall
FPerformanceTrackingChart::GetTotalHitchFrameTime(FPerformanceTrackingChart *this,bool param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  dVar1 = (this->HitchTimeHistogram).SumOfAllMeasures;
  if ((param_1) && (0 < (this->HitchTimeHistogram).Bins.ArrayNum)) {
    fVar3 = FEnginePerformanceTargets::GetHitchFrameTimeThresholdMS();
    dVar2 = (double)fVar3 * __real_3f50624dd2f1a9fc;
    dVar4 = FHistogram::GetBinLowerBound(&this->HitchTimeHistogram,0);
    if (dVar4 <= dVar2) {
      dVar4 = dVar2;
    }
    dVar1 = dVar1 - (double)(this->HitchTimeHistogram).CountOfAllMeasures * dVar4;
  }
  return dVar1;
}

// PauseCharting @ 14771dd00

void __thiscall FPerformanceTrackingChart::PauseCharting(FPerformanceTrackingChart *this)

{
  this->bIsChartingPaused = true;
  return;
}

// ProcessFrame @ 147722230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPerformanceTrackingChart::ProcessFrame(FPerformanceTrackingChart *this,FFrameData *param_1)

{
  int *piVar1;
  EFrameHitchType EVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FPerformanceTrackingChart::ProcessFrame(IPerformanceDataConsumer::FFrameData_const_&)_::_2_::FStat_STAT_FPerformanceTrackingChart_ProcessFrame>
  FVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  int iVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  double dVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_c8;
  FPlatformMemoryStats local_b8;
  
  FVar14.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FPerformanceTrackingChart_ProcessFrame ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FPerformanceTrackingChart::ProcessFrame(IPerformanceDataConsumer::FFrameData_const_&)_::_2_::FStat_STAT_FPerformanceTrackingChart_ProcessFrame>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_FPerformanceTrackingChart_ProcessFrame"
                               );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPerformanceTrackingChart_ProcessFrame
                   ,*pFVar6,L"STAT_FPerformanceTrackingChart_ProcessFrame","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_FPerformanceTrackingChart_ProcessFrame;
  if (StatPtr_STAT_FPerformanceTrackingChart_ProcessFrame ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FPerformanceTrackingChart::ProcessFrame(IPerformanceDataConsumer::FFrameData_const_&)_::_2_::FStat_STAT_FPerformanceTrackingChart_ProcessFrame>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_FPerformanceTrackingChart_ProcessFrame");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FPerformanceTrackingChart::ProcessFrame(IPerformanceDataConsumer::FFrameData_const_&)_::_2_::FStat_STAT_FPerformanceTrackingChart_ProcessFrame>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FPerformanceTrackingChart_ProcessFrame,*pFVar6,
                         L"STAT_FPerformanceTrackingChart_ProcessFrame","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ChartCreation.cpp"
                   ,0x2f3);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar14.Value = FVar12.Value;
      goto LAB_1477223c5;
    }
  }
  bVar4 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_1477223c5:
  this->AccumulatedChartTime = param_1->TrueDeltaSeconds + this->AccumulatedChartTime;
  if ((param_1->bBinThisFrame == false) || (this->bIsChartingPaused != false)) {
    dVar15 = param_1->DeltaSeconds;
    this->FramesDisregarded = this->FramesDisregarded + 1;
    this->TimeDisregarded = dVar15 + this->TimeDisregarded;
  }
  else {
    FHistogram::AddMeasurement
              (&this->FrametimeHistogram,param_1->DeltaSeconds,param_1->DeltaSeconds);
    if (param_1->bGameThreadBound != false) {
      this->NumFramesBound_GameThread = this->NumFramesBound_GameThread + 1;
      this->TotalFramesBoundTime_GameThread =
           this->TotalFramesBoundTime_GameThread + param_1->DeltaSeconds;
    }
    if (param_1->bRenderThreadBound != false) {
      this->NumFramesBound_RenderThread = this->NumFramesBound_RenderThread + 1;
      this->TotalFramesBoundTime_RenderThread =
           this->TotalFramesBoundTime_RenderThread + param_1->DeltaSeconds;
    }
    if (param_1->bRHIThreadBound != false) {
      this->NumFramesBound_RHIThread = this->NumFramesBound_RHIThread + 1;
      this->TotalFramesBoundTime_RHIThread =
           this->TotalFramesBoundTime_RHIThread + param_1->DeltaSeconds;
    }
    if (param_1->bGPUBound != false) {
      dVar15 = param_1->DeltaSeconds;
      this->NumFramesBound_GPU = this->NumFramesBound_GPU + 1;
      this->TotalFramesBoundTime_GPU = this->TotalFramesBoundTime_GPU + dVar15;
    }
    this->TotalFrameTime_GameThread =
         param_1->GameThreadTimeSeconds + this->TotalFrameTime_GameThread;
    this->TotalFrameTime_RenderThread =
         param_1->RenderThreadTimeSeconds + this->TotalFrameTime_RenderThread;
    this->TotalFrameTime_RHIThread = param_1->RHIThreadTimeSeconds + this->TotalFrameTime_RHIThread;
    this->TotalFrameTime_GPU = param_1->GPUTimeSeconds + this->TotalFrameTime_GPU;
    this->TotalFlushAsyncLoadingTime =
         this->TotalFlushAsyncLoadingTime + param_1->FlushAsyncLoadingTime;
    this->TotalFlushAsyncLoadingCalls =
         this->TotalFlushAsyncLoadingCalls + param_1->FlushAsyncLoadingCount;
    dVar15 = this->MaxFlushAsyncLoadingTime;
    if (this->MaxFlushAsyncLoadingTime <= param_1->FlushAsyncLoadingTime) {
      dVar15 = param_1->FlushAsyncLoadingTime;
    }
    this->MaxFlushAsyncLoadingTime = dVar15;
    this->TotalSyncLoadCount = this->TotalSyncLoadCount + param_1->SyncLoadCount;
    if (0 < param_1->NumAsyncPackages) {
      dVar15 = (double)param_1->NumAsyncPackages;
      FHistogram::AddMeasurement(&this->AsyncPackageQueueHistogram,dVar15,dVar15);
    }
    iVar11 = GNumDrawCallsRHI[0];
    if (GNumDrawCallsRHI[0] < this->MaxDrawCalls) {
      iVar11 = this->MaxDrawCalls;
    }
    this->MaxDrawCalls = iVar11;
    iVar11 = GNumDrawCallsRHI[0];
    if (this->MinDrawCalls < GNumDrawCallsRHI[0]) {
      iVar11 = this->MinDrawCalls;
    }
    this->MinDrawCalls = iVar11;
    this->TotalDrawCalls = this->TotalDrawCalls + GNumDrawCallsRHI[0];
    iVar11 = GNumPrimitivesDrawnRHI[0];
    if (GNumPrimitivesDrawnRHI[0] < this->MaxDrawnPrimitives) {
      iVar11 = this->MaxDrawnPrimitives;
    }
    this->MaxDrawnPrimitives = iVar11;
    iVar11 = GNumPrimitivesDrawnRHI[0];
    if (this->MinDrawnPrimitives < GNumPrimitivesDrawnRHI[0]) {
      iVar11 = this->MinDrawnPrimitives;
    }
    this->MinDrawnPrimitives = iVar11;
    this->TotalDrawnPrimitives = this->TotalDrawnPrimitives + (longlong)GNumPrimitivesDrawnRHI[0];
    PlatformMemoryHelpers::GetFrameMemoryStats(&local_b8);
    uVar8 = local_b8._padding_;
    if ((ulonglong)local_b8._padding_ < this->MaxPhysicalMemory) {
      uVar8 = this->MaxPhysicalMemory;
    }
    this->MaxPhysicalMemory = uVar8;
    uVar8 = local_b8._padding_;
    if ((ulonglong)local_b8._padding_ < this->MaxVirtualMemory) {
      uVar8 = this->MaxVirtualMemory;
    }
    this->MaxVirtualMemory = uVar8;
    uVar8 = local_b8._padding_;
    if (this->MinPhysicalMemory < (ulonglong)local_b8._padding_) {
      uVar8 = this->MinPhysicalMemory;
    }
    this->MinPhysicalMemory = uVar8;
    uVar8 = local_b8._padding_;
    if (this->MinVirtualMemory < (ulonglong)local_b8._padding_) {
      uVar8 = this->MinVirtualMemory;
    }
    this->MinVirtualMemory = uVar8;
    uVar9 = FGenericPlatformMemoryStats::GetAvailablePhysical
                      ((FGenericPlatformMemoryStats *)&local_b8,true);
    if (this->MinAvailablePhysicalMemory < uVar9) {
      uVar9 = this->MinAvailablePhysicalMemory;
    }
    this->MinAvailablePhysicalMemory = uVar9;
    this->TotalPhysicalMemoryUsed = this->TotalPhysicalMemoryUsed + local_b8._padding_;
    this->TotalVirtualMemoryUsed = this->TotalVirtualMemoryUsed + local_b8._padding_;
    this->NumFramesAtCriticalMemoryPressure =
         this->NumFramesAtCriticalMemoryPressure + (uint)(local_b8.MemoryPressureStatus == Critical)
    ;
    if (param_1->HitchStatus != NoHitch) {
      FHistogram::AddMeasurement
                (&this->HitchTimeHistogram,param_1->DeltaSeconds,param_1->DeltaSeconds);
      EVar2 = param_1->HitchStatus;
      if (EVar2 == GameThread) {
        this->TotalGameThreadBoundHitchCount = this->TotalGameThreadBoundHitchCount + 1;
      }
      else if (EVar2 == RenderThread) {
        this->TotalRenderThreadBoundHitchCount = this->TotalRenderThreadBoundHitchCount + 1;
      }
      else if (EVar2 == RHIThread) {
        this->TotalRHIThreadBoundHitchCount = this->TotalRHIThreadBoundHitchCount + 1;
      }
      else if (EVar2 == GPU) {
        this->TotalGPUBoundHitchCount = this->TotalGPUBoundHitchCount + 1;
      }
    }
    FHistogram::AddMeasurement
              (&this->DynamicResHistogram,param_1->DynamicResolutionScreenPercentage,
               param_1->DynamicResolutionScreenPercentage);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_c8.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Reset @ 147724790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPerformanceTrackingChart::Reset(FPerformanceTrackingChart *this,FDateTime *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  UDeviceProfileManager *this_00;
  FString *pFVar8;
  longlong lVar9;
  double *pdVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_1d8 [32];
  TArrayView<double_const_,int> local_1a8;
  TArrayView<double_const_,int> local_198;
  FString local_188;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [5];
  undefined8 local_f0;
  double local_e8 [13];
  double local_80;
  ulonglong local_78;
  
  uStack_140 = _UNK_1517668c8;
  local_148 = ___xmm_3f9eb851eb851eb83f947ae147ae147b;
  uStack_150 = _UNK_1517668b8;
  local_158 = ___xmm_3f8eb851eb851eb80000000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  (this->CaptureStartTime).Ticks = param_1->Ticks;
  uStack_120 = _UNK_1517668f8;
  local_128 = ___xmm_3ff00000000000003fb999999999999a;
  local_1a8.DataPtr = &local_158;
  local_1a8.ArrayNum = 8;
  local_138 = ___xmm_3faeb851eb851eb83fa1eb851eb851ec;
  uStack_130 = _UNK_1517668d8;
  this->NumFramesBound_GameThread = 0;
  this->NumFramesBound_RenderThread = 0;
  this->NumFramesBound_RHIThread = 0;
  this->NumFramesBound_GPU = 0;
  this->TotalFramesBoundTime_GameThread = 0.0;
  this->TotalFramesBoundTime_RenderThread = 0.0;
  this->TotalFramesBoundTime_RHIThread = 0.0;
  this->TotalFramesBoundTime_GPU = 0.0;
  this->TotalFrameTime_GameThread = 0.0;
  this->TotalFrameTime_RenderThread = 0.0;
  this->TotalFrameTime_RHIThread = 0.0;
  this->TotalFrameTime_GPU = 0.0;
  this->TotalFlushAsyncLoadingTime = 0.0;
  this->TotalFlushAsyncLoadingCalls = 0;
  this->MaxFlushAsyncLoadingTime = 0.0;
  this->TotalSyncLoadCount = 0;
  this->TotalGameThreadBoundHitchCount = 0;
  this->TotalRenderThreadBoundHitchCount = 0;
  this->TotalRHIThreadBoundHitchCount = 0;
  this->TotalGPUBoundHitchCount = 0;
  this->MaxDrawCalls = 0;
  this->MinDrawCalls = 0x7fffffff;
  this->TotalDrawCalls = 0;
  this->MaxPlayerTicks = 0;
  this->MinPlayerTicks = 0x7fffffff;
  this->TotalPlayerTicks = 0;
  this->MaxVehicleTicks = 0;
  this->TotalVehicleTicks = 0;
  this->MaxDrawnPrimitives = 0;
  this->MinDrawnPrimitives = 0x7fffffff;
  this->TotalDrawnPrimitives = 0;
  this->AccumulatedChartTime = 0.0;
  this->TimeDisregarded = 0.0;
  this->FramesDisregarded = 0;
  this->NumFramesAtCriticalMemoryPressure = 0;
  this->MaxPhysicalMemory = 0;
  this->MaxVirtualMemory = 0;
  this->MinPhysicalMemory = 0xffffffffffffffff;
  this->MinVirtualMemory = 0xffffffffffffffff;
  this->MinAvailablePhysicalMemory = 0xffffffffffffffff;
  this->TotalPhysicalMemoryUsed = 0;
  this->TotalVirtualMemoryUsed = 0;
  FHistogram::InitFromArray(&this->FrametimeHistogram,&local_1a8);
  local_e8[0xc] = (double)__real_40b3880000000000;
  local_e8[0xb] = (double)_UNK_1506c9038;
  local_e8[10] = (double)___xmm_40a3880000000000409f400000000000;
  piVar1 = &(this->HitchTimeHistogram).Bins.ArrayMax;
  local_e8[0] = ___xmm_404e000000000000403e000000000000;
  local_e8[1] = (double)_UNK_151766908;
  local_e8[4] = (double)___xmm_4072c000000000004069000000000000;
  local_e8[5] = (double)_UNK_1506c8fd8;
  local_e8[2] = (double)___xmm_4062c000000000004059000000000000;
  local_e8[3] = (double)_UNK_151766938;
  local_e8[8] = (double)___xmm_4097700000000000408f400000000000;
  local_e8[9] = (double)_UNK_1506c9018;
  local_e8[6] = (double)___xmm_4087700000000000407f400000000000;
  local_e8[7] = (double)_UNK_1506c8ff8;
  (this->HitchTimeHistogram).SumOfAllMeasures = 0.0;
  (this->HitchTimeHistogram).CountOfAllMeasures = 0;
  (this->HitchTimeHistogram).MinimalMeasurement = 1.7976931348623157e+308;
  (this->HitchTimeHistogram).MaximalMeasurement = -1.7976931348623157e+308;
  iVar7 = *piVar1;
  (this->HitchTimeHistogram).Bins.ArrayNum = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->HitchTimeHistogram,0,piVar1);
  }
  dVar6 = __real_3f50624dd2f1a9fc;
  pdVar10 = local_e8;
  dVar5 = 0.0;
  do {
    iVar7 = (this->HitchTimeHistogram).Bins.ArrayNum;
    dVar4 = *pdVar10 * dVar6;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)&this->HitchTimeHistogram,piVar1);
    }
    pdVar10 = pdVar10 + 1;
    (this->HitchTimeHistogram).Bins.ArrayNum = iVar7 + 1;
    pFVar3 = (this->HitchTimeHistogram).Bins.AllocatorInstance.Data;
    lVar9 = (longlong)iVar7 * 0x20;
    *(double *)(pFVar3 + lVar9) = dVar5;
    *(double *)(pFVar3 + lVar9 + 8) = dVar4;
    *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
    dVar5 = dVar4;
  } while (pdVar10 != &local_80);
  iVar7 = (this->HitchTimeHistogram).Bins.ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)&this->HitchTimeHistogram,piVar1);
  }
  (this->HitchTimeHistogram).Bins.ArrayNum = iVar7 + 1;
  piVar1 = &(this->DynamicResHistogram).Bins.ArrayMax;
  pFVar3 = (this->HitchTimeHistogram).Bins.AllocatorInstance.Data;
  lVar9 = (longlong)iVar7 * 0x20;
  *(double *)(pFVar3 + lVar9) = dVar4;
  *(undefined8 *)(pFVar3 + lVar9 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
  *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
  (this->DynamicResHistogram).MaximalMeasurement = -1.7976931348623157e+308;
  (this->DynamicResHistogram).SumOfAllMeasures = 0.0;
  (this->DynamicResHistogram).CountOfAllMeasures = 0;
  (this->DynamicResHistogram).MinimalMeasurement = 1.7976931348623157e+308;
  iVar7 = *piVar1;
  (this->DynamicResHistogram).Bins.ArrayNum = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->DynamicResHistogram,0,piVar1);
  }
  puVar11 = local_118;
  local_118[0] = ___xmm_4051800000000000404e000000000000;
  local_118[1] = _UNK_151766918;
  local_118[4] = __real_4059000000000000;
  local_118[2] = ___xmm_40568000000000004054000000000000;
  local_118[3] = _UNK_151766928;
  uVar13 = 0;
  uVar14 = 0;
  do {
    iVar7 = (this->DynamicResHistogram).Bins.ArrayNum;
    uVar2 = *puVar11;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)&this->DynamicResHistogram,piVar1);
    }
    pFVar3 = (this->DynamicResHistogram).Bins.AllocatorInstance.Data;
    puVar11 = puVar11 + 1;
    lVar9 = (longlong)iVar7 * 0x20;
    (this->DynamicResHistogram).Bins.ArrayNum = iVar7 + 1;
    *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uVar14,uVar13);
    *(undefined8 *)(pFVar3 + lVar9 + 8) = uVar2;
    *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
    uVar13 = (int)uVar2;
    uVar14 = (int)((ulonglong)uVar2 >> 0x20);
  } while (puVar11 != &local_f0);
  iVar7 = (this->DynamicResHistogram).Bins.ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)&this->DynamicResHistogram,piVar1);
  }
  uStack_170 = _UNK_151766948;
  local_178 = ___xmm_406f4000000000003ff0000000000000;
  (this->DynamicResHistogram).Bins.ArrayNum = iVar7 + 1;
  local_168 = __real_407f400000000000;
  pFVar3 = (this->DynamicResHistogram).Bins.AllocatorInstance.Data;
  lVar9 = (longlong)iVar7 * 0x20;
  local_1a8.ArrayNum = 3;
  *(undefined8 *)(pFVar3 + lVar9) = uVar2;
  *(undefined8 *)(pFVar3 + lVar9 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(pFVar3 + lVar9 + 0x10) = 0;
  *(undefined4 *)(pFVar3 + lVar9 + 0x18) = 0;
  local_1a8.DataPtr = &local_178;
  local_198.ArrayNum = 3;
  local_198._12_4_ = local_1a8._12_4_;
  local_198.DataPtr = local_1a8.DataPtr;
  FHistogram::InitFromArray(&this->AsyncPackageQueueHistogram,&local_198);
  this->StartTemperatureLevel = -1.0;
  this->StopTemperatureLevel = -1.0;
  this->StartBatteryLevel = -1;
  this->StopBatteryLevel = -1;
  this_00 = UDeviceProfileManager::Get(false);
  pFVar8 = UDeviceProfileManager::GetActiveDeviceProfileName(this_00,&local_188);
  iVar7 = (pFVar8->Data).ArrayNum;
  iVar12 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar12 = 0;
  }
  ::FString::AssignRange
            (&this->DeviceProfileName,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar12);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  this->bIsChartingPaused = false;
  return;
}

// ResumeCharting @ 1477256f0

void __thiscall FPerformanceTrackingChart::ResumeCharting(FPerformanceTrackingChart *this)

{
  this->bIsChartingPaused = false;
  return;
}

// StartCharting @ 14772af90

void __thiscall FPerformanceTrackingChart::StartCharting(FPerformanceTrackingChart *this)

{
  int iVar1;
  int iVar2;
  UDeviceProfileManager *this_00;
  FString *pFVar3;
  float fVar4;
  FString local_18;
  
  fVar4 = FGenericPlatformMisc::GetDeviceTemperatureLevel();
  this->StartTemperatureLevel = fVar4;
  iVar2 = FWindowsPlatformMisc::GetBatteryLevel();
  this->StartBatteryLevel = iVar2;
  this_00 = UDeviceProfileManager::Get(false);
  pFVar3 = UDeviceProfileManager::GetActiveDeviceProfileName(this_00,&local_18);
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange
            (&this->DeviceProfileName,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->bIsChartingPaused = false;
  return;
}

// StopCharting @ 14772cc30

void __thiscall FPerformanceTrackingChart::StopCharting(FPerformanceTrackingChart *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = FGenericPlatformMisc::GetDeviceTemperatureLevel();
  this->StopTemperatureLevel = fVar2;
  iVar1 = FWindowsPlatformMisc::GetBatteryLevel();
  this->StopBatteryLevel = iVar1;
  return;
}

