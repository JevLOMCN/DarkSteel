// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetCopy @ 1486bcba0

bool __thiscall FStreamedAudioChunk::GetCopy(FStreamedAudioChunk *this,void **param_1)

{
  int iVar1;
  FScriptContainerElement *local_res8;
  ForAnyElementType local_18;
  int local_10 [2];
  
  if ((0 < this->AudioDataSize) && (iVar1 = this->DataSize, 0 < iVar1)) {
    if (this->CachedDataPtr == (uchar *)0x0) {
      if (this->AudioDataSize == iVar1) {
        FBulkData::GetCopy((FBulkData *)&this->BulkData,&this->CachedDataPtr,true);
      }
      else {
        local_18.Data = (FScriptContainerElement *)0x0;
        local_10[0] = 0;
        local_10[1] = 0;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,&local_18,local_10,local_10 + 1);
        local_res8 = local_18.Data;
        FBulkData::GetCopy((FBulkData *)&this->BulkData,&local_res8,true);
        memcpy(*param_1,local_18.Data,(longlong)this->AudioDataSize);
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
      }
    }
    if (this->CachedDataPtr != (uchar *)0x0) {
      memcpy(*param_1,this->CachedDataPtr,(longlong)this->DataSize);
      return true;
    }
  }
  return false;
}

// MoveOutAsBuffer @ 1486d3050

FBulkDataBuffer<unsigned_char> * __thiscall
FStreamedAudioChunk::MoveOutAsBuffer
          (FStreamedAudioChunk *this,FBulkDataBuffer<unsigned_char> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  FBulkDataBuffer<unsigned_char> *pFVar4;
  
  if (this->AudioDataSize < 1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5972747921735549875>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x3b3,"AudioDataSize > 0");
    if (!bVar2) {
      (__return_storage_ptr__->View).DataPtr = (uchar *)0x0;
      (__return_storage_ptr__->View).ArrayNum = 0;
      return __return_storage_ptr__;
    }
  }
  else {
    lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData);
    if (this->AudioDataSize <= lVar3) {
      lVar3 = FBulkData::GetBulkDataSize((FBulkData *)&this->BulkData);
      if (this->AudioDataSize < lVar3) {
        lVar3 = (longlong)this->AudioDataSize;
      }
      TBulkData<unsigned_char>::GetCopyAsBuffer(&this->BulkData,__return_storage_ptr__,lVar3,true);
      return __return_storage_ptr__;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5972747921735549877>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x3b5,"AudioDataSize <= BulkData.GetElementCount()");
    if (!bVar2) {
      (__return_storage_ptr__->View).DataPtr = (uchar *)0x0;
      (__return_storage_ptr__->View).ArrayNum = 0;
      return __return_storage_ptr__;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FBulkDataBuffer<unsigned_char> *)(*pcVar1)();
  return pFVar4;
}

// Serialize @ 1486ec470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamedAudioChunk::Serialize
          (FStreamedAudioChunk *this,FArchive *param_1,UObject *param_2,int param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FStreamedAudioChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedAudioChunk_Serialize>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  uint local_res8 [2];
  FColor_u_0 local_res10 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  uVar15 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StreamedAudioChunk_Serialize ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FStreamedAudioChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedAudioChunk_Serialize>
           )0x0) {
        pFVar10 = ::FName::FName(&local_68,"STAT_StreamedAudioChunk_Serialize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamedAudioChunk_Serialize,*pFVar10,
                   L"FStreamedAudioChunk::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                   L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_StreamedAudioChunk_Serialize;
  if (StatPtr_STAT_StreamedAudioChunk_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FStreamedAudioChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedAudioChunk_Serialize>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_StreamedAudioChunk_Serialize");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FStreamedAudioChunk::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StreamedAudioChunk_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StreamedAudioChunk_Serialize,
                          *pFVar10,L"FStreamedAudioChunk::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar13.Value;
        local_78.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                   ,0x340);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70.s.LowPart = FVar13.Value;
      local_70.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_1486ec5ed;
    }
  }
  bVar7 = false;
  FVar14 = local_58;
LAB_1486ec5ed:
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    if ((*(longlong *)&param_1->field_0x68 == 0) ||
       (uVar12 = 1, *(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
      uVar12 = uVar15;
    }
    local_res8[0] = uVar15;
    if (this->SeekOffsetInAudioFrames != 0xffffffff) {
      local_res8[0] = 2;
    }
    local_res8[0] = local_res8[0] | uVar12;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  puVar1 = &param_1->field_0x2a;
  if ((param_1->field_0x28 & 4) != 0) {
    uVar12 = 0x40;
    if ((local_res8[0] & 4) == 0) {
      uVar12 = 0x400;
    }
    FBulkData::SetBulkDataFlags((FBulkData *)&this->BulkData,uVar12);
  }
  FBulkData::Serialize((FBulkData *)&this->BulkData,param_1,param_2,false,1,None);
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->DataSize = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->AudioDataSize);
    }
  }
  else {
    this->AudioDataSize = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (this->DataSize < 1) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5972747921735549805>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x36d,"DataSize > 0");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this->DataSize = 0;
    }
    uVar12 = this->AudioDataSize;
    if (this->AudioDataSize < 1) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5972747921735549809>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x371,"AudioDataSize > 0");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this->AudioDataSize = 0;
      uVar12 = uVar15;
    }
    if (this->DataSize < (int)uVar12) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5972747921735549813>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x375,"AudioDataSize <= DataSize");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this->AudioDataSize = this->DataSize;
    }
  }
  if ((local_res8[0] & 2) != 0) {
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->SeekOffsetInAudioFrames);
      }
    }
    else {
      this->SeekOffsetInAudioFrames = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar3 = &this_00->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

