// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FHealthSnapshot @ 1483e18d0

FHealthSnapshot * __thiscall
FHealthSnapshot::FHealthSnapshot(FHealthSnapshot *this,wchar_t *param_1)

{
  this->_padding_ = (longlong)&___7FHealthSnapshot__6B_;
  (this->CPUMemoryMB).Size = 0.0;
  (this->CPUMemoryMB).Used = 0.0;
  *(undefined8 *)&(this->CPUMemoryMB).Peak = 0;
  (this->StreamingMemoryMB).Used = 0.0;
  (this->StreamingMemoryMB).Peak = 0.0;
  (this->PhysicalMemoryMB).Size = 0.0;
  (this->PhysicalMemoryMB).Used = 0.0;
  *(undefined8 *)&(this->PhysicalMemoryMB).Peak = 0;
  (this->PhysicalMemory).Min = 0;
  (this->PhysicalMemory).Max = 0;
  (this->PhysicalMemory).Avg = 0;
  (this->VirtualMemory).Min = 0;
  (this->VirtualMemory).Max = 0;
  (this->VirtualMemory).Avg = 0;
  (this->PlatformMemoryStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformMemoryStats).ArrayNum = 0;
  (this->PlatformMemoryStats).ArrayMax = 0;
  this->MeasuredPerfTime = 0.0;
  (this->GameThread).PercentFramesBound = 0.0;
  (this->GameThread).HitchesPerMinute = 0.0;
  *(undefined8 *)&(this->GameThread).AvgTime = 0;
  (this->RenderThread).HitchesPerMinute = 0.0;
  (this->RenderThread).AvgTime = 0.0;
  (this->RHIThread).PercentFramesBound = 0.0;
  (this->RHIThread).HitchesPerMinute = 0.0;
  *(undefined8 *)&(this->RHIThread).AvgTime = 0;
  (this->GPU).HitchesPerMinute = 0.0;
  (this->GPU).AvgTime = 0.0;
  this->HitchesPerMinute = 0.0;
  this->AvgHitchTime = 0.0;
  this->MVP = 0.0;
  this->AvgFPS = 0.0;
  (this->DrawCalls).Min = 0;
  (this->DrawCalls).Max = 0;
  *(undefined8 *)&(this->DrawCalls).Avg = 0;
  (this->PrimitivesDrawn).Max = 0;
  (this->PrimitivesDrawn).Avg = 0;
  (this->FrameTime).Min = 0.0;
  (this->FrameTime).Max = 0.0;
  (this->FrameTime).Avg = 0.0;
  (this->DynamicResolution).Min = 0.0;
  (this->DynamicResolution).Max = 0.0;
  (this->DynamicResolution).Avg = 0.0;
  (this->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).Data.ArrayNum = 0;
  (this->Title).Data.ArrayMax = 0;
  ::FString::operator=(&this->Title,param_1);
  CaptureMemoryStats(this);
  return this;
}

// FHealthSnapshot @ 1483e19d0

FHealthSnapshot * __thiscall
FHealthSnapshot::FHealthSnapshot
          (FHealthSnapshot *this,wchar_t *param_1,FPerformanceTrackingChart *param_2)

{
  FHealthSnapshot(this,param_1);
  this->_padding_ = (longlong)&___7FHealthSnapshot__6B_;
  CapturePerformanceStats(this,param_2);
  return this;
}

// ~FHealthSnapshot @ 1483e8920

void __thiscall FHealthSnapshot::~FHealthSnapshot(FHealthSnapshot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FHealthSnapshot__6B_;
  pFVar1 = (this->Title).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformMemoryStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1483e92b0

FHealthSnapshot * __thiscall
FHealthSnapshot::operator=(FHealthSnapshot *this,FHealthSnapshot *param_1)

{
  TArray<FGenericPlatformMemoryStats::FPlatformSpecificStat,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ulong64 uVar5;
  double dVar6;
  float fVar7;
  
  fVar7 = (param_1->CPUMemoryMB).Used;
  (this->CPUMemoryMB).Size = (param_1->CPUMemoryMB).Size;
  (this->CPUMemoryMB).Used = fVar7;
  (this->CPUMemoryMB).Peak = (param_1->CPUMemoryMB).Peak;
  fVar7 = (param_1->StreamingMemoryMB).Used;
  pTVar1 = &this->PlatformMemoryStats;
  (this->StreamingMemoryMB).Size = (param_1->StreamingMemoryMB).Size;
  (this->StreamingMemoryMB).Used = fVar7;
  (this->StreamingMemoryMB).Peak = (param_1->StreamingMemoryMB).Peak;
  fVar7 = (param_1->PhysicalMemoryMB).Used;
  (this->PhysicalMemoryMB).Size = (param_1->PhysicalMemoryMB).Size;
  (this->PhysicalMemoryMB).Used = fVar7;
  (this->PhysicalMemoryMB).Peak = (param_1->PhysicalMemoryMB).Peak;
  this->LLMTotalMemoryMB = param_1->LLMTotalMemoryMB;
  uVar5 = (param_1->PhysicalMemory).Max;
  (this->PhysicalMemory).Min = (param_1->PhysicalMemory).Min;
  (this->PhysicalMemory).Max = uVar5;
  (this->PhysicalMemory).Avg = (param_1->PhysicalMemory).Avg;
  uVar5 = (param_1->VirtualMemory).Max;
  (this->VirtualMemory).Min = (param_1->VirtualMemory).Min;
  (this->VirtualMemory).Max = uVar5;
  (this->VirtualMemory).Avg = (param_1->VirtualMemory).Avg;
  if (pTVar1 != &param_1->PlatformMemoryStats) {
    iVar3 = (this->PlatformMemoryStats).ArrayMax;
    piVar2 = &(this->PlatformMemoryStats).ArrayMax;
    _Src = (param_1->PlatformMemoryStats).AllocatorInstance.Data;
    iVar4 = (param_1->PlatformMemoryStats).ArrayNum;
    (this->PlatformMemoryStats).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  this->MeasuredPerfTime = param_1->MeasuredPerfTime;
  fVar7 = (param_1->GameThread).HitchesPerMinute;
  (this->GameThread).PercentFramesBound = (param_1->GameThread).PercentFramesBound;
  (this->GameThread).HitchesPerMinute = fVar7;
  (this->GameThread).AvgTime = (param_1->GameThread).AvgTime;
  fVar7 = (param_1->RenderThread).HitchesPerMinute;
  (this->RenderThread).PercentFramesBound = (param_1->RenderThread).PercentFramesBound;
  (this->RenderThread).HitchesPerMinute = fVar7;
  (this->RenderThread).AvgTime = (param_1->RenderThread).AvgTime;
  fVar7 = (param_1->RHIThread).HitchesPerMinute;
  (this->RHIThread).PercentFramesBound = (param_1->RHIThread).PercentFramesBound;
  (this->RHIThread).HitchesPerMinute = fVar7;
  (this->RHIThread).AvgTime = (param_1->RHIThread).AvgTime;
  fVar7 = (param_1->GPU).HitchesPerMinute;
  (this->GPU).PercentFramesBound = (param_1->GPU).PercentFramesBound;
  (this->GPU).HitchesPerMinute = fVar7;
  (this->GPU).AvgTime = (param_1->GPU).AvgTime;
  this->HitchesPerMinute = param_1->HitchesPerMinute;
  this->AvgHitchTime = param_1->AvgHitchTime;
  this->MVP = param_1->MVP;
  this->AvgFPS = param_1->AvgFPS;
  iVar3 = (param_1->DrawCalls).Max;
  (this->DrawCalls).Min = (param_1->DrawCalls).Min;
  (this->DrawCalls).Max = iVar3;
  (this->DrawCalls).Avg = (param_1->DrawCalls).Avg;
  iVar3 = (param_1->PrimitivesDrawn).Max;
  (this->PrimitivesDrawn).Min = (param_1->PrimitivesDrawn).Min;
  (this->PrimitivesDrawn).Max = iVar3;
  (this->PrimitivesDrawn).Avg = (param_1->PrimitivesDrawn).Avg;
  dVar6 = (param_1->FrameTime).Max;
  (this->FrameTime).Min = (param_1->FrameTime).Min;
  (this->FrameTime).Max = dVar6;
  (this->FrameTime).Avg = (param_1->FrameTime).Avg;
  dVar6 = (param_1->DynamicResolution).Max;
  (this->DynamicResolution).Min = (param_1->DynamicResolution).Min;
  (this->DynamicResolution).Max = dVar6;
  (this->DynamicResolution).Avg = (param_1->DynamicResolution).Avg;
  ::FString::operator=(&this->Title,&param_1->Title);
  return this;
}

// CaptureMemoryStats @ 1483f2d00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall FHealthSnapshot::CaptureMemoryStats(FHealthSnapshot *this)

{
  TArray<FGenericPlatformMemoryStats::FPlatformSpecificStat,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FLowLevelMemTracker *this_00;
  long64 lVar8;
  TArray<FGenericPlatformMemoryStats::FPlatformSpecificStat,TSizedDefaultAllocator<32>_> *pTVar9;
  FStreamingManagerCollection *pFVar10;
  IRenderAssetStreamingManager *pIVar11;
  longlong lVar12;
  ulonglong uVar13;
  TStringBuilderWithBuffer<wchar_t,64> *pTVar14;
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> FVar15;
  undefined1 *puVar16;
  ulonglong *puVar17;
  undefined1 auStackY_1998 [32];
  TArray<FGenericPlatformMemoryStats::FPlatformSpecificStat,TSizedDefaultAllocator<32>_> local_1968;
  FPlatformMemoryStats local_1958;
  TStringBuilderWithBuffer<wchar_t,64> local_18c8 [32];
  TStringBuilderWithBuffer<wchar_t,64> *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b8 [1024];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> local_b8;
  undefined4 local_b0;
  int local_ac;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_a8;
  undefined8 uStack_90;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1998;
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    FLowLevelMemTracker::Construct();
  }
  fVar4 = __real_35800000;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this_00 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this_00 = FLowLevelMemTracker::Construct();
    }
    lVar8 = FLowLevelMemTracker::GetTagAmountForTracker(this_00,Default,TrackedTotal,Default);
    this->LLMTotalMemoryMB = (float)lVar8 * fVar4;
  }
  FWindowsPlatformMemory::GetStats(&local_1958);
  (this->PhysicalMemoryMB).Size = (float)(ulonglong)local_1958._padding_ * fVar4;
  (this->PhysicalMemoryMB).Used = (float)(ulonglong)local_1958._padding_ * fVar4;
  local_4c8 = (TStringBuilderWithBuffer<wchar_t,64> *)0x0;
  local_4c0 = 0;
  local_4bc = 0x20;
  (this->PhysicalMemoryMB).Peak = (float)(ulonglong)local_1958._padding_ * fVar4;
  local_b8 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0;
  local_b0 = 0;
  local_ac = 0x20;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_a8.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_a8.MaxBits = _UNK_150631d74;
  uStack_90 = _UNK_150631d78;
  if (UE::Private::GMalloc != (FMalloc *)0x0) {
    (**(code **)((longlong)*UE::Private::GMalloc + 0xa8))(UE::Private::GMalloc,local_18c8);
    local_1968.ArrayNum = 0xe;
    local_1968.AllocatorInstance.Data = (FScriptContainerElement *)0x15065fa98;
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"TotalAllocated");
    iVar7 = TSet<TTuple<TStringView<wchar_t>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned___int64,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::FindIndexByHash<TStringView<wchar_t>_>
                      ((TSet<TTuple<TStringView<wchar_t>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,unsigned___int64,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)local_4b8,uVar6,(TStringView<wchar_t> *)&local_1968);
    if (iVar7 != -1) {
      FVar15 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)local_4b8;
      if (local_b8 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0)
      {
        FVar15 = local_b8;
      }
      puVar16 = (undefined1 *)((longlong)FVar15 + (longlong)iVar7 * 0x20);
      puVar17 = (ulonglong *)(puVar16 + 0x10);
      if (puVar16 == (undefined1 *)0x0) {
        puVar17 = (ulonglong *)0x0;
      }
      if ((puVar17 != (ulonglong *)0x0) && (uVar2 = *puVar17, uVar2 != 0)) {
        uVar13 = uVar2;
        if (uVar2 < MaxAllocated) {
          uVar13 = MaxAllocated;
        }
        MaxAllocated = uVar13;
        (this->CPUMemoryMB).Used = (float)uVar2 * fVar4;
        (this->CPUMemoryMB).Peak = (float)uVar13 * fVar4;
      }
    }
  }
  pTVar9 = FGenericPlatformMemoryStats::GetPlatformSpecificStats
                     ((FGenericPlatformMemoryStats *)&local_1958,&local_1968);
  pTVar1 = &this->PlatformMemoryStats;
  if (pTVar1 != pTVar9) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PlatformMemoryStats).ArrayNum = pTVar9->ArrayNum;
    (this->PlatformMemoryStats).ArrayMax = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  if (local_1968.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1968.AllocatorInstance.Data);
  }
  pFVar10 = IStreamingManager::Get();
  bVar5 = FStreamingManagerCollection::IsTextureStreamingEnabled(pFVar10);
  if (bVar5) {
    pFVar10 = IStreamingManager::Get();
    pIVar11 = FStreamingManagerCollection::GetTextureStreamingManager(pFVar10);
    lVar12 = (**(code **)(*(longlong *)pIVar11 + 0xe0))(pIVar11);
    (this->StreamingMemoryMB).Used = (float)lVar12 * fVar4;
    pFVar10 = IStreamingManager::Get();
    pIVar11 = FStreamingManagerCollection::GetTextureStreamingManager(pFVar10);
    lVar12 = (**(code **)(*(longlong *)pIVar11 + 0xe8))(pIVar11);
    (this->StreamingMemoryMB).Peak = (float)lVar12 * fVar4;
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  local_b0 = 0;
  if (local_ac != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>_>
              (0x20,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_> *)
                        local_4b8,0,&local_ac);
  }
  iVar7 = local_a8.MaxBits;
  uStack_90 = 0xffffffff;
  local_a8._16_8_ = (ulonglong)(uint)local_a8.MaxBits << 0x20;
  if (0x20 < (uint)iVar7) {
    local_a8.NumBits = 0;
    local_a8.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_a8,0);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_b8 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  pTVar14 = local_18c8;
  if (local_4c8 != (TStringBuilderWithBuffer<wchar_t,64> *)0x0) {
    pTVar14 = local_4c8;
  }
  DestructItems<TStringBuilderWithBuffer<wchar_t,64>,int>(pTVar14,local_4c0);
  if (local_4c8 != (TStringBuilderWithBuffer<wchar_t,64> *)0x0) {
    FMemory::Free(local_4c8);
  }
  return;
}

// CapturePerformanceStats @ 1483f3150

void __thiscall
FHealthSnapshot::CapturePerformanceStats(FHealthSnapshot *this,FPerformanceTrackingChart *param_1)

{
  ulonglong uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_1 != (FPerformanceTrackingChart *)0x0) {
    uVar1 = (param_1->FrametimeHistogram).CountOfAllMeasures;
    dVar8 = (param_1->FrametimeHistogram).SumOfAllMeasures;
    fVar7 = FEnginePerformanceTargets::GetTargetFrameTimeThresholdMS();
    dVar12 = __real_404e000000000000;
    dVar2 = __real_4059000000000000;
    dVar10 = __real_408f400000000000;
    iVar4 = 0;
    this->MeasuredPerfTime = param_1->AccumulatedChartTime;
    dVar11 = (double)(longlong)uVar1;
    lVar6 = (longlong)((dVar10 / (double)fVar7) * dVar8);
    dVar10 = 0.0;
    iVar5 = (int)lVar6 - (int)uVar1;
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    this->AvgFPS = dVar11 / dVar8;
    this->MVP = (double)(float)(((double)iVar3 * dVar2) / (double)lVar6);
    dVar8 = (param_1->FrametimeHistogram).SumOfAllMeasures;
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (dVar12 / dVar8) * (double)(int)(param_1->HitchTimeHistogram).CountOfAllMeasures;
    }
    this->HitchesPerMinute = dVar8;
    lVar6 = (param_1->HitchTimeHistogram).CountOfAllMeasures;
    if (lVar6 < 1) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (param_1->HitchTimeHistogram).SumOfAllMeasures / (double)lVar6;
    }
    this->AvgHitchTime = dVar8;
    (this->DrawCalls).Max = param_1->MaxDrawCalls;
    (this->DrawCalls).Min = param_1->MinDrawCalls;
    iVar3 = iVar4;
    if (0 < (longlong)uVar1) {
      iVar3 = (int)((longlong)param_1->TotalDrawCalls / (longlong)uVar1);
    }
    (this->DrawCalls).Avg = iVar3;
    (this->PrimitivesDrawn).Max = param_1->MaxDrawnPrimitives;
    (this->PrimitivesDrawn).Min = param_1->MinDrawnPrimitives;
    if (0 < (longlong)uVar1) {
      iVar4 = (int)(param_1->TotalDrawnPrimitives / (longlong)uVar1);
    }
    (this->PrimitivesDrawn).Avg = iVar4;
    (this->FrameTime).Min = (param_1->FrametimeHistogram).MinimalMeasurement;
    (this->FrameTime).Max = (param_1->FrametimeHistogram).MaximalMeasurement;
    lVar6 = (param_1->FrametimeHistogram).CountOfAllMeasures;
    if (lVar6 < 1) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (param_1->FrametimeHistogram).SumOfAllMeasures / (double)lVar6;
    }
    (this->FrameTime).Avg = dVar8;
    (this->DynamicResolution).Min = (param_1->DynamicResHistogram).MinimalMeasurement;
    (this->DynamicResolution).Max = (param_1->DynamicResHistogram).MaximalMeasurement;
    lVar6 = (param_1->DynamicResHistogram).CountOfAllMeasures;
    if (lVar6 < 1) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (param_1->DynamicResHistogram).SumOfAllMeasures / (double)lVar6;
    }
    (this->DynamicResolution).Avg = dVar8;
    dVar8 = 0.0;
    (this->PhysicalMemory).Max = param_1->MaxPhysicalMemory;
    (this->PhysicalMemory).Min = param_1->MinPhysicalMemory;
    (this->VirtualMemory).Max = param_1->MaxVirtualMemory;
    (this->VirtualMemory).Min = param_1->MinVirtualMemory;
    if (0 < (longlong)uVar1) {
      (this->PhysicalMemory).Avg = param_1->TotalPhysicalMemoryUsed / uVar1;
      (this->VirtualMemory).Avg = param_1->TotalVirtualMemoryUsed / uVar1;
      dVar8 = ((double)param_1->NumFramesBound_GameThread * dVar2) / dVar11;
    }
    dVar9 = 0.0;
    dVar12 = dVar12 / this->MeasuredPerfTime;
    (this->GameThread).PercentFramesBound = (float)dVar8;
    (this->GameThread).HitchesPerMinute =
         (float)((double)param_1->TotalGameThreadBoundHitchCount * dVar12);
    if ((longlong)uVar1 < 1) {
      (this->GameThread).AvgTime = 0.0;
    }
    else {
      (this->GameThread).AvgTime = (float)(param_1->TotalFrameTime_GameThread / dVar11);
      dVar9 = ((double)param_1->NumFramesBound_RenderThread * dVar2) / dVar11;
    }
    (this->RenderThread).PercentFramesBound = (float)dVar9;
    dVar8 = 0.0;
    (this->RenderThread).HitchesPerMinute =
         (float)((double)param_1->TotalRenderThreadBoundHitchCount * dVar12);
    if ((longlong)uVar1 < 1) {
      (this->RenderThread).AvgTime = 0.0;
    }
    else {
      (this->RenderThread).AvgTime = (float)(param_1->TotalFrameTime_RenderThread / dVar11);
      dVar8 = ((double)param_1->NumFramesBound_RHIThread * dVar2) / dVar11;
    }
    (this->RHIThread).PercentFramesBound = (float)dVar8;
    dVar8 = 0.0;
    (this->RHIThread).HitchesPerMinute =
         (float)((double)param_1->TotalRHIThreadBoundHitchCount * dVar12);
    if ((longlong)uVar1 < 1) {
      (this->RHIThread).AvgTime = 0.0;
    }
    else {
      (this->RHIThread).AvgTime = (float)(param_1->TotalFrameTime_RHIThread / dVar11);
      dVar8 = ((double)param_1->NumFramesBound_GPU * dVar2) / dVar11;
    }
    (this->GPU).PercentFramesBound = (float)dVar8;
    (this->GPU).HitchesPerMinute = (float)((double)param_1->TotalGPUBoundHitchCount * dVar12);
    if (0 < (longlong)uVar1) {
      dVar10 = param_1->TotalFrameTime_GPU / dVar11;
    }
    (this->GPU).AvgTime = (float)dVar10;
  }
  return;
}

// Dump @ 1483fd5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHealthSnapshot::Dump(FHealthSnapshot *this,FOutputDevice *param_1)

{
  FName local_res18 [2];
  
  if (HealthSnapshot::GLogHealthSnapshot != 0) {
    local_res18[0] = (FName)LogHealthSnapshot._4_8_;
    FOutputDevice::CategorizedLogfImpl(param_1,local_res18,Log,L"======= Snapshot: %s =======");
    (**(code **)(this->_padding_ + 0x18))(this,param_1,local_res18[0]);
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"=========================================================")
    ;
  }
  return;
}

// DumpStats @ 1483fd670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHealthSnapshot::DumpStats(FHealthSnapshot *this,FOutputDevice *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  if (0.0 < this->MeasuredPerfTime) {
    FOutputDevice::CategorizedLogfImpl(param_1,local_res18,Log,L"MeasuredPerfTime: %.02f secs");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,
               L"MVP: %.02f%%, AvgFPS:%.2f, HitchesPerMinute: %.2f, Avg Hitch %.02fms");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"DynRes: Avg: %.02f%%, Max: %.02f%%, Min: %.02f%%");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"FT: Avg: %.02fms, Max: %.02fms, Min: %.02fms");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,
               L"GT:  Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,
               L"RT:  Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,
               L"RHIT: Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,
               L"GPU: Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"DrawCalls: Avg: %d, Max: %d, Min: %d");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"DrawnPrims: Avg: %d, Max: %d, Min: %d");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"PhysicalMemoryMB: Avg: %llu, Max: %llu, Min: %llu");
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"VirtualMemoryMB: Avg: %llu, Max: %llu, Min: %llu");
  }
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_res18,Log,L"CPU Memory: Used %.2fMB, Peak %.2fMB");
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_res18,Log,L"Physical Memory: Used %.2fMB, Peak %.2fMB");
  FOutputDevice::CategorizedLogfImpl
            (param_1,local_res18,Log,L"Streaming Memory: Used %.2fMB, Peak %.2fMB");
  if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
    FLowLevelMemTracker::Construct();
  }
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    FOutputDevice::CategorizedLogfImpl
              (param_1,local_res18,Log,L"Low Level Memory : TrackedTotal %.2fMB");
  }
  uVar4 = 0;
  if (0 < (this->PlatformMemoryStats).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->PlatformMemoryStats).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)uVar4 < (this->PlatformMemoryStats).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FOutputDevice::CategorizedLogfImpl(param_1,local_res18,Log,L"%s: Used %.2f MB");
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->PlatformMemoryStats).ArrayNum);
  }
  return;
}

