// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 3

// FGeometryCacheCodecRenderStateV1 @ 14ca05af0

FGeometryCacheCodecRenderStateV1 * __thiscall
FGeometryCacheCodecRenderStateV1::FGeometryCacheCodecRenderStateV1
          (FGeometryCacheCodecRenderStateV1 *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FGeometryCacheCodecRenderStateBase::FGeometryCacheCodecRenderStateBase
            ((FGeometryCacheCodecRenderStateBase *)this,param_1);
  *(undefined ***)this = &___7FGeometryCacheCodecRenderStateV1__6B_;
  return this;
}

// ~FGeometryCacheCodecRenderStateV1 @ 14ca08ba0

void __thiscall
FGeometryCacheCodecRenderStateV1::~FGeometryCacheCodecRenderStateV1
          (FGeometryCacheCodecRenderStateV1 *this)

{
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)this = &___7FGeometryCacheCodecRenderStateBase__6B_;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Classes\\GeometryCacheCodecBase.h"
                       ,0x56,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
    return;
  }
  return;
}

// DecodeSingleFrame @ 14ca13ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGeometryCacheCodecRenderStateV1::DecodeSingleFrame
          (FGeometryCacheCodecRenderStateV1 *this,FGeometryCacheCodecDecodeArguments *param_1)

{
  int *piVar1;
  TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  IGeometryCacheStreamingManager *pIVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_DeserializeMeshV1> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  UGeometryCacheTrackStreamable *pUVar13;
  undefined7 uVar14;
  FNameEntryId FVar15;
  ulonglong uVar16;
  FName FVar17;
  FNameEntryId FVar18;
  bool bVar19;
  undefined1 auStackY_8198 [32];
  uint local_8138;
  FColor_u_0 local_8134;
  FName local_8130;
  FName local_8128;
  LARGE_INTEGER local_8118;
  FStatMessage local_8110;
  FName local_8100;
  undefined1 local_80f8 [144];
  void *local_8068;
  undefined8 local_8060;
  ulonglong local_8058;
  char local_8050;
  FCodecV1Decoder local_8048;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14ca14009;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8198;
  uVar12 = param_1->FrameIdentifier;
  pTVar2 = param_1->Chunks;
  FVar18.Value = 0;
  uVar8 = FVar18.Value;
  if ((int)uVar12 < pTVar2->ArrayNum) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (((float)param_1->FrameIdentifier !=
       *(float *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x38 + 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Args.Chunks[Args.FrameIdentifier].FirstFrame == static_cast<float>(Args.FrameIdentifier)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecV1.cpp"
                         ,0x90,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_8138 = 0;
  pIVar9 = IGeometryCacheStreamingManager::Get();
  pUVar13 = param_1->Track->Track;
  local_8068 = (void *)(**(code **)(pIVar9->_padding_ + 0xd8))
                                 (pIVar9,pUVar13,param_1->FrameIdentifier,&local_8138);
  bVar6 = false;
  if (local_8068 != (void *)0x0) {
    uVar16 = (ulonglong)local_8138;
    FArchiveState::FArchiveState((FArchiveState *)local_80f8);
    uVar14 = (undefined7)((ulonglong)pUVar13 >> 8);
    local_80f8._0_8_ = &___7FBufferReaderBase__6B_;
    local_8060 = 0;
    local_8050 = '\0';
    local_8058 = uVar16;
    FArchiveState::SetIsLoading((FArchiveState *)local_80f8,true);
    (**(code **)(local_80f8._0_8_ + 0x108))(local_80f8,CONCAT71(uVar14,1));
    local_80f8._0_8_ = &___7FBufferReader__6B_;
    FVar11 = StatPtr_STAT_DeserializeMeshV1;
    if (StatPtr_STAT_DeserializeMeshV1 == (FThreadSafeStaticStat<FStat_STAT_DeserializeMeshV1>)0x0)
    {
      pFVar10 = ::FName::FName(&local_8100,"STAT_DeserializeMeshV1");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_DeserializeMeshV1>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DeserializeMeshV1,*pFVar10,
                          L"Deserialize Mesh","STATGROUP_GeometryCache","STATCAT_Advanced",
                          L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar11;
    bVar6 = false;
    bVar5 = false;
    local_8128.ComparisonIndex.Value = 0;
    local_8128.Number = 0;
    FVar15 = FVar3.ComparisonIndex.Value;
    uVar12 = FVar3.Number;
    if ((FVar15.Value == 0) && (uVar12 == 0)) {
      local_8048._padding_ = (longlong)&___7FCodecV1Decoder__6B_;
      FCodecV1Decoder::DecodeFrameData(&local_8048,(FBufferReader *)local_80f8,param_1->OutMeshData)
      ;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_8134.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_8134._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
        bVar6 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_8130.ComparisonIndex.Value = FVar15.Value;
          local_8130.Number = uVar12;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_8130,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecV1.cpp"
                     ,0x9f);
          bVar6 = true;
          bVar5 = true;
        }
      }
      bVar19 = FThreadStats::bPrimaryEnable != false;
      FVar17 = local_8128;
      if (bVar19) {
        local_8130.ComparisonIndex.Value = FVar15.Value;
        local_8130.Number = uVar12;
        local_8128 = FVar3;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        FVar17 = FVar3;
        FVar18.Value = local_8128.ComparisonIndex.Value;
      }
      local_8048._padding_ = (longlong)&___7FCodecV1Decoder__6B_;
      FCodecV1Decoder::DecodeFrameData(&local_8048,(FBufferReader *)local_80f8,param_1->OutMeshData)
      ;
      local_8048._padding_ = (longlong)&___7ICodecDecoder__6B_;
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar19) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_8110.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
          local_8110.NameAndInfo.Index.Value = FVar18.Value;
          QueryPerformanceCounter(&local_8118);
          local_8110.StatData.Pad[4] = '\0';
          local_8110.StatData.Pad[5] = '\0';
          local_8110.StatData.Pad[6] = '\0';
          local_8110.StatData.Pad[7] = '\0';
          local_8110.StatData.Pad[0] = local_8118.s.LowPart._0_1_;
          local_8110.StatData.Pad[1] = local_8118.s.LowPart._1_1_;
          local_8110.StatData.Pad[2] = local_8118.s.LowPart._2_1_;
          local_8110.StatData.Pad[3] = local_8118.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_8110);
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
    pIVar9 = IGeometryCacheStreamingManager::Get();
    (**(code **)(pIVar9->_padding_ + 0xe0))(pIVar9,param_1->Track->Track,param_1->FrameIdentifier);
    local_80f8._0_8_ = &___7FBufferReader__6B_;
    if (local_8050 != '\0') {
      FMemory::Free(local_8068);
      local_8068 = (void *)0x0;
    }
    local_80f8._0_8_ = &___7FBufferReaderBase__6B_;
    FArchive::~FArchive((FArchive *)local_80f8);
    bVar6 = true;
  }
  return bVar6;
}

