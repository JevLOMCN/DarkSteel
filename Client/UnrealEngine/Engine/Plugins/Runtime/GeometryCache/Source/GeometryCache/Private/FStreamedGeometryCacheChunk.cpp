// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 3

// FStreamedGeometryCacheChunk @ 14ca07070

FStreamedGeometryCacheChunk * __thiscall
FStreamedGeometryCacheChunk::FStreamedGeometryCacheChunk(FStreamedGeometryCacheChunk *this)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  this->DataSize = 0;
  this->FirstFrame = 0.0;
  this->LastFrame = 0.0;
  *(undefined8 *)&this->BulkData = 0;
  *(undefined8 *)&(this->BulkData).field_0x8 = 0;
  *(undefined8 *)&(this->BulkData).field_0x10 = 0;
  *(undefined4 *)&(this->BulkData).field_0xd = 0xffffffff;
  (this->BulkData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->BulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->BulkData).field_0x19 = uVar1;
  (this->BulkData).field_0x1a = uVar2;
  (this->BulkData).field_0x1b = uVar3;
  (this->BulkData).field_0x1c = uVar4;
  (this->BulkData).field_0x1d = uVar5;
  (this->BulkData).field_0x1e = uVar6;
  (this->BulkData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->BulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->BulkData).field_0x21 = uVar1;
  (this->BulkData).field_0x22 = uVar2;
  (this->BulkData).field_0x23 = uVar3;
  return this;
}

// GetResourceSizeEx @ 14ca1f150

void __thiscall
FStreamedGeometryCacheChunk::GetResourceSizeEx
          (FStreamedGeometryCacheChunk *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,4);
  return;
}

// Serialize @ 14ca2a220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamedGeometryCacheChunk::Serialize
          (FStreamedGeometryCacheChunk *this,FArchive *param_1,UObject *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_void___cdecl_FStreamedGeometryCacheChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedGeometryCacheChunk_Serialize>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StreamedGeometryCacheChunk_Serialize ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FStreamedGeometryCacheChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedGeometryCacheChunk_Serialize>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_StreamedGeometryCacheChunk_Serialize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamedGeometryCacheChunk_Serialize,
                   *pFVar7,L"FStreamedGeometryCacheChunk::Serialize","STATGROUP_LoadTime",
                   "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_StreamedGeometryCacheChunk_Serialize;
  if (StatPtr_STAT_StreamedGeometryCacheChunk_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FStreamedGeometryCacheChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedGeometryCacheChunk_Serialize>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_StreamedGeometryCacheChunk_Serialize");
    FVar8 = (FThreadSafeStaticStat<_public:_void___cdecl_FStreamedGeometryCacheChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedGeometryCacheChunk_Serialize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_StreamedGeometryCacheChunk_Serialize,*pFVar7,
                         L"FStreamedGeometryCacheChunk::Serialize","STATGROUP_LoadTime",
                         "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar6 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheCodecBase.cpp"
                   ,0x11);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14ca2a3b5;
    }
  }
  bVar5 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14ca2a3b5:
  FBulkData::SetBulkDataFlags((FBulkData *)&this->BulkData,0x400);
  FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,param_2,false,1,None);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->DataSize = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = &this->FirstFrame;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar3);
    }
  }
  else {
    *pfVar3 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->LastFrame);
    }
  }
  else {
    this->LastFrame = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

