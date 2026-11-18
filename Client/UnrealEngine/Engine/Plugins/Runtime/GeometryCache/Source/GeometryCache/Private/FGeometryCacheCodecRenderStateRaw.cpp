// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// DecodeSingleFrame @ 14ca13bf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGeometryCacheCodecRenderStateRaw::DecodeSingleFrame
          (FGeometryCacheCodecRenderStateRaw *this,FGeometryCacheCodecDecodeArguments *param_1)

{
  int *piVar1;
  TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  IGeometryCacheStreamingManager *pIVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_DeserializeMesh> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  UGeometryCacheTrackStreamable *pUVar11;
  undefined7 uVar12;
  FColor_u_0 FVar13;
  ulonglong uVar14;
  FName FVar15;
  FColor_u_0 FVar16;
  bool bVar17;
  uint local_res10 [2];
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20;
  uint local_res24;
  LARGE_INTEGER local_108;
  FStatMessage local_100;
  FName local_f0;
  FArchiveState local_e8;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  char local_40;
  
  uVar10 = param_1->FrameIdentifier;
  pTVar2 = param_1->Chunks;
  FVar16.Bits = 0;
  FVar13.Bits = FVar16.Bits;
  if ((int)uVar10 < pTVar2->ArrayNum) {
    FVar13.Bits = ~uVar10 >> 0x1f;
  }
  if (FVar13.Bits == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if ((float)param_1->FrameIdentifier !=
      *(float *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Args.Chunks[Args.FrameIdentifier].FirstFrame == static_cast<float>(Args.FrameIdentifier)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecRaw.cpp"
                       ,0x52,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_res10[0] = 0;
  pIVar7 = IGeometryCacheStreamingManager::Get();
  pUVar11 = param_1->Track->Track;
  local_58 = (void *)(**(code **)(pIVar7->_padding_ + 0xd8))
                               (pIVar7,pUVar11,param_1->FrameIdentifier,local_res10);
  if (local_58 == (void *)0x0) {
    return false;
  }
  uVar14 = (ulonglong)local_res10[0];
  FArchiveState::FArchiveState(&local_e8);
  uVar12 = (undefined7)((ulonglong)pUVar11 >> 8);
  local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  local_50 = 0;
  local_40 = '\0';
  local_48 = uVar14;
  FArchiveState::SetIsLoading(&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,CONCAT71(uVar12,1));
  local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
  FVar9 = StatPtr_STAT_DeserializeMesh;
  if (StatPtr_STAT_DeserializeMesh == (FThreadSafeStaticStat<FStat_STAT_DeserializeMesh>)0x0) {
    pFVar8 = ::FName::FName(&local_f0,"STAT_DeserializeMesh");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_DeserializeMesh>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeMesh,*pFVar8,
                       L"Deserialize Mesh","STATGROUP_GeometryCache","STATCAT_Advanced",
                       L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar9;
  bVar5 = false;
  bVar4 = false;
  FVar13.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar10 = FVar15.Number;
  if ((FVar13.Bits == 0) && (uVar10 == 0)) {
    ::operator<<((FArchive *)&local_e8,param_1->OutMeshData);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar13.Bits;
        local_res24 = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecRaw.cpp"
                   ,0x61);
        bVar5 = true;
        bVar4 = true;
      }
    }
    bVar17 = FThreadStats::bPrimaryEnable == false;
    if (bVar17) {
      FVar15.ComparisonIndex.Value = 0;
      FVar15.Number = 0;
    }
    else {
      local_res18.Bits = FVar13.Bits;
      uStackX_1c = uVar10;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      FVar16.Bits = FVar13.Bits;
    }
    ::operator<<((FArchive *)&local_e8,param_1->OutMeshData);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar17) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_100.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        local_100.NameAndInfo.Index.Value = FVar16.Bits;
        QueryPerformanceCounter(&local_108);
        local_100.StatData.Pad[4] = '\0';
        local_100.StatData.Pad[5] = '\0';
        local_100.StatData.Pad[6] = '\0';
        local_100.StatData.Pad[7] = '\0';
        local_100.StatData.Pad[0] = local_108.s.LowPart._0_1_;
        local_100.StatData.Pad[1] = local_108.s.LowPart._1_1_;
        local_100.StatData.Pad[2] = local_108.s.LowPart._2_1_;
        local_100.StatData.Pad[3] = local_108.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_100);
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
  }
  pIVar7 = IGeometryCacheStreamingManager::Get();
  (**(code **)(pIVar7->_padding_ + 0xe0))(pIVar7,param_1->Track->Track,param_1->FrameIdentifier);
  local_e8._padding_ = (longlong)&___7FBufferReader__6B_;
  if (local_40 != '\0') {
    FMemory::Free(local_58);
    local_58 = (void *)0x0;
  }
  local_e8._padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)&local_e8);
  return true;
}

