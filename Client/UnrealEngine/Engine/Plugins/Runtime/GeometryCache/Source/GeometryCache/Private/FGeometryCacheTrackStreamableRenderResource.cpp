// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 7

// FGeometryCacheTrackStreamableRenderResource @ 14ca06dd0

FGeometryCacheTrackStreamableRenderResource * __thiscall
FGeometryCacheTrackStreamableRenderResource::FGeometryCacheTrackStreamableRenderResource
          (FGeometryCacheTrackStreamableRenderResource *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FGeometryCacheTrackStreamableRenderResource__6B_;
  this->Codec = (FGeometryCacheCodecRenderStateBase *)0x0;
  this->Track = (UGeometryCacheTrackStreamable *)0x0;
  return this;
}

// DecodeMeshData @ 14ca12e00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGeometryCacheTrackStreamableRenderResource::DecodeMeshData
          (FGeometryCacheTrackStreamableRenderResource *this,int param_1,
          FGeometryCacheMeshData *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_UpdateMeshData> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_58;
  FGeometryCacheCodecDecodeArguments local_48;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_UpdateMeshData;
  if (StatPtr_STAT_UpdateMeshData == (FThreadSafeStaticStat<FStat_STAT_UpdateMeshData>)0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_UpdateMeshData");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_UpdateMeshData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateMeshData,*pFVar6,
                       L"Decode Mesh Frame","STATGROUP_GeometryCache","STATCAT_Advanced",
                       L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                   ,0x290);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14ca12f68;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14ca12f68:
  if (this->Codec == (FGeometryCacheCodecRenderStateBase *)0x0) {
    uVar5 = 0;
  }
  else {
    FGeometryCacheCodecDecodeArguments::FGeometryCacheCodecDecodeArguments
              (&local_48,this,&this->Track->Chunks,param_1,param_2);
    uVar5 = (**(code **)(this->Codec->_padding_ + 0x10))(this->Codec,&local_48);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
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
  return (bool)uVar5;
}

// InitGame @ 14ca215f0

void __thiscall
FGeometryCacheTrackStreamableRenderResource::InitGame
          (FGeometryCacheTrackStreamableRenderResource *this,UGeometryCacheTrackStreamable *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCacheCodecRenderStateBase *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x26a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((int)this->_padding_ != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                       ,0x26b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = (FGeometryCacheCodecRenderStateBase *)
           (**(code **)(((param_1->Codec).field0_0x0.DebugPtr)->_padding_ + 0x2c0))();
  this->Codec = pFVar3;
  this->Track = param_1;
  return;
}

// InitRHI @ 14ca21bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCacheTrackStreamableRenderResource::InitRHI
          (FGeometryCacheTrackStreamableRenderResource *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ca21bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Codec->_padding_ + 8))();
  return;
}

// IsTopologyCompatible @ 14ca23ce0

bool __thiscall
FGeometryCacheTrackStreamableRenderResource::IsTopologyCompatible
          (FGeometryCacheTrackStreamableRenderResource *this,int param_1,int param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ca23ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->Codec->_padding_ + 0x18))();
  return (bool)uVar1;
}

// ReleaseRHI @ 14ca292f0

void __thiscall
FGeometryCacheTrackStreamableRenderResource::ReleaseRHI
          (FGeometryCacheTrackStreamableRenderResource *this)

{
  FGeometryCacheCodecRenderStateBase *pFVar1;
  
  pFVar1 = this->Codec;
  if (pFVar1 != (FGeometryCacheCodecRenderStateBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->Track = (UGeometryCacheTrackStreamable *)0x0;
  return;
}

// UpdateMeshData @ 14ca2dd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGeometryCacheTrackStreamableRenderResource::UpdateMeshData
          (FGeometryCacheTrackStreamableRenderResource *this,float param_1,bool param_2,int *param_3
          ,FGeometryCacheMeshData *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_UpdateMeshData> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_68;
  FGeometryCacheCodecDecodeArguments local_58;
  
  iVar2 = *param_3;
  uVar6 = UGeometryCacheTrackStreamable::FindSampleIndexFromTime(this->Track,param_1,param_2);
  if (uVar6 == *param_3) {
    return false;
  }
  if (this->Codec == (FGeometryCacheCodecRenderStateBase *)0x0) goto LAB_14ca2e00e;
  FVar12.Value = 0;
  FVar8 = StatPtr_STAT_UpdateMeshData;
  if (StatPtr_STAT_UpdateMeshData == (FThreadSafeStaticStat<FStat_STAT_UpdateMeshData>)0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_UpdateMeshData");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_UpdateMeshData>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateMeshData,*pFVar7,
                       L"Decode Mesh Frame","STATGROUP_GeometryCache","STATCAT_Advanced",
                       L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_14ca2ded7:
    bVar4 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheTrackStreamable.cpp"
                   ,0x286);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca2ded7;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar4 = true;
    FVar12.Value = FVar10.Value;
  }
  FGeometryCacheCodecDecodeArguments::FGeometryCacheCodecDecodeArguments
            (&local_58,this,&this->Track->Chunks,uVar6,param_4);
  (**(code **)(this->Codec->_padding_ + 0x10))(this->Codec,&local_58);
  *param_3 = uVar6;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
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
LAB_14ca2e00e:
  return iVar2 != *param_3;
}

