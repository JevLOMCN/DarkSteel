// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 103

// CleanupCachedRunningPlatformData @ 14762d400

void __thiscall USoundWave::CleanupCachedRunningPlatformData(USoundWave *this)

{
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FSoundWaveData *pFVar3;
  undefined4 *puVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  ulonglong uVar8;
  bool bVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined4 *local_78;
  FName local_70;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> local_68;
  FScriptContainerElement *local_58;
  int *piStack_50;
  undefined8 local_48;
  FScriptContainerElement *local_40;
  int *piStack_38;
  int local_30;
  undefined4 uStack_2c;
  
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                         ,0x908,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Array.ArrayNum = 0;
  local_68.Array.ArrayMax = 0;
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (this->SoundWaveDataPtr).Object;
  (pFVar3->RunningPlatformData).AudioFormat = local_70;
  this_00 = &(pFVar3->RunningPlatformData).Chunks;
  if (&local_68 != this_00) {
    TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_>::Empty
              (this_00,local_68.Array.ArrayNum);
    piStack_50 = &local_68.Array.ArrayNum;
    local_40 = local_68.Array.AllocatorInstance.Data;
    local_30 = local_68.Array.ArrayNum;
    local_48 = CONCAT44(uStack_2c,local_68.Array.ArrayNum);
    pFVar2 = local_68.Array.AllocatorInstance.Data + (longlong)local_68.Array.ArrayNum * 8;
    FVar13.Data = local_68.Array.AllocatorInstance.Data;
    piStack_38 = piStack_50;
    while( true ) {
      local_58 = FVar13.Data;
      if (*piStack_50 != (int)local_48) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar13.Data == pFVar2) break;
      puVar4 = *(undefined4 **)FVar13.Data;
      puVar11 = ::operator_new(0x40);
      puVar12 = (undefined4 *)0x0;
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = *puVar4;
        puVar11[1] = puVar4[1];
        puVar11[2] = puVar4[2];
        FBulkData::FBulkData((FBulkData *)(puVar11 + 4),(FBulkData *)(puVar4 + 4));
        *(undefined8 *)(puVar11 + 0xe) = *(undefined8 *)(puVar4 + 0xe);
        puVar12 = puVar11;
      }
      pFVar5 = (this_00->Array).AllocatorInstance.Data;
      local_78 = puVar12;
      if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar5 + (longlong)(pFVar3->RunningPlatformData).Chunks.Array.ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (pFVar3->RunningPlatformData).Chunks.Array.ArrayNum;
      piVar1 = &(pFVar3->RunningPlatformData).Chunks.Array.ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this_00,piVar1);
      }
      FVar13.Data = FVar13.Data + 8;
      (pFVar3->RunningPlatformData).Chunks.Array.ArrayNum = iVar10 + 1;
      *(undefined4 **)((this_00->Array).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_78;
    }
  }
  FVar13.Data = local_68.Array.AllocatorInstance.Data;
  for (iVar10 = local_68.Array.ArrayNum; iVar10 != 0; iVar10 = iVar10 + -1) {
    pvVar6 = *(void **)FVar13.Data;
    if (pvVar6 != (void *)0x0) {
      FBulkData::~FBulkData((FBulkData *)((longlong)pvVar6 + 0x10));
      ::operator_delete(pvVar6,0x40);
    }
    FVar13.Data = FVar13.Data + 8;
  }
  uVar8 = (ulonglong)local_68.Array._8_8_ >> 0x20;
  local_68.Array._8_8_ = local_68.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_68,0,&local_68.Array.ArrayMax);
  }
  if (local_68.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Array.AllocatorInstance.Data);
  }
  return;
}

// SerializeCookedPlatformData @ 14765dad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundWave::SerializeCookedPlatformData(USoundWave *this,FArchive *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::SerializeCookedPlatformData(FArchive_&)_::_2_::FStat_STAT_SoundWave_SerializeCookedPlatformData>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar5) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SoundWave_SerializeCookedPlatformData ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::SerializeCookedPlatformData(FArchive_&)_::_2_::FStat_STAT_SoundWave_SerializeCookedPlatformData>
         )0x0) {
      pFVar7 = ::FName::FName(&local_60,"STAT_SoundWave_SerializeCookedPlatformData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SoundWave_SerializeCookedPlatformData,
                 *pFVar7,L"USoundWave::SerializeCookedPlatformData","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_SoundWave_SerializeCookedPlatformData;
  if (StatPtr_STAT_SoundWave_SerializeCookedPlatformData ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::SerializeCookedPlatformData(FArchive_&)_::_2_::FStat_STAT_SoundWave_SerializeCookedPlatformData>
       )0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_SoundWave_SerializeCookedPlatformData");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::SerializeCookedPlatformData(FArchive_&)_::_2_::FStat_STAT_SoundWave_SerializeCookedPlatformData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_SoundWave_SerializeCookedPlatformData,*pFVar7,
                         L"USoundWave::SerializeCookedPlatformData","STATGROUP_LoadTime",
                         "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar10.Value;
        local_res20.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                   ,0x914);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68.s.LowPart = FVar10.Value;
      local_68.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_14765dc6f;
    }
  }
  bVar3 = false;
  FVar11 = local_50;
LAB_14765dc6f:
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDerivedData.cpp"
                         ,0x932,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CleanupCachedRunningPlatformData(this);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStreamedAudioPlatformData::Serialize
            (&((this->SoundWaveDataPtr).Object)->RunningPlatformData,param_1,this);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
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

// <lambda_invoker_cdecl> @ 14867d1c0

void __cdecl
`USoundWave::GetZerothChunk'::__l21::<lambda_1>::<lambda_invoker_cdecl>
          (EAudioChunkLoadResult param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14867d1e0

void __cdecl
`USoundWave::OverrideLoadingBehavior'::__l27::<lambda_1>::<lambda_invoker_cdecl>
          (EAudioChunkLoadResult param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14867d1f0

void __cdecl
`USoundWave::PostLoad'::__l53::<lambda_1>::<lambda_invoker_cdecl>(EAudioChunkLoadResult param_1)

{
  return;
}

// USoundWave @ 148698440

USoundWave * __thiscall USoundWave::USoundWave(USoundWave *this,FVTableHelper *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FSoundWaveData,1> *pTVar2;
  TSharedRef<FSoundWaveData,1> local_18;
  
  USoundBase::USoundBase((USoundBase *)this,param_1);
  this->SoundAssetCompressionType = PlatformSpecific;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->Proxy).Object = (FSoundWaveProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSoundModulationDefaultSettings::FSoundModulationDefaultSettings
            ((FSoundModulationDefaultSettings *)&this->ModulationSettings);
  (this->ModulationSettings).VolumeRouting = Inherit;
  (this->ModulationSettings).PitchRouting = Inherit;
  (this->ModulationSettings).HighpassRouting = Inherit;
  (this->ModulationSettings).LowpassRouting = Inherit;
  (this->FrequenciesToAnalyze).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequenciesToAnalyze).ArrayNum = 0;
  (this->FrequenciesToAnalyze).ArrayMax = 0;
  (this->CookedSpectralTimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedSpectralTimeData).ArrayNum = 0;
  (this->CookedSpectralTimeData).ArrayMax = 0;
  (this->CookedEnvelopeTimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedEnvelopeTimeData).ArrayNum = 0;
  (this->CookedEnvelopeTimeData).ArrayMax = 0;
  (this->PrecacheState).Counter = 0;
  (this->NumSourcesPlaying).Counter = 0;
  (this->SourcesPlaying).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcesPlaying).ArrayNum = 0;
  (this->SourcesPlaying).ArrayMax = 0;
  (this->SourcesPlayingCs).State = (atomic<unsigned_char>)0x0;
  (this->SpokenText_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpokenText_DEPRECATED).Data.ArrayNum = 0;
  (this->SpokenText_DEPRECATED).Data.ArrayMax = 0;
  (this->Subtitles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subtitles).ArrayNum = 0;
  (this->Subtitles).ArrayMax = 0;
  (this->Curves).field0_0x0.DebugPtr = (UCurveTable *)0x0;
  (this->InternalCurves).field0_0x0.DebugPtr = (UCurveTable *)0x0;
  (this->CompressedDataGuid).A = 0;
  (this->CompressedDataGuid).B = 0;
  (this->CompressedDataGuid).C = 0;
  (this->CompressedDataGuid).D = 0;
  (this->CookedPlatformData).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedPlatformData).Pairs.ArrayNum = 0;
  (this->CookedPlatformData).Pairs.ArrayMax = 0;
  pTVar2 = MakeShared<FSoundWaveData,1>(&local_18);
  (this->SoundWaveDataPtr).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// USoundWave @ 1486985a0

USoundWave * __thiscall USoundWave::USoundWave(USoundWave *this,FObjectInitializer *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSharedRef<FSoundWaveData,1> *pTVar8;
  USoundWave *pUVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  TSharedRef<FSoundWaveData,1> local_18;
  
  USoundBase::USoundBase((USoundBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->SoundAssetCompressionType = PlatformSpecific;
  (this->Proxy).Object = (FSoundWaveProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSoundModulationDefaultSettings::FSoundModulationDefaultSettings
            ((FSoundModulationDefaultSettings *)&this->ModulationSettings);
  (this->ModulationSettings).VolumeRouting = Inherit;
  (this->ModulationSettings).PitchRouting = Inherit;
  (this->ModulationSettings).HighpassRouting = Inherit;
  (this->ModulationSettings).LowpassRouting = Inherit;
  pTVar1 = &this->FrequenciesToAnalyze;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FrequenciesToAnalyze).ArrayNum = 0;
  (this->FrequenciesToAnalyze).ArrayMax = 0;
  (this->CookedSpectralTimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedSpectralTimeData).ArrayNum = 0;
  (this->CookedSpectralTimeData).ArrayMax = 0;
  (this->CookedEnvelopeTimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedEnvelopeTimeData).ArrayNum = 0;
  (this->CookedEnvelopeTimeData).ArrayMax = 0;
  (this->PrecacheState).Counter = 0;
  (this->NumSourcesPlaying).Counter = 0;
  (this->SourcesPlaying).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourcesPlaying).ArrayNum = 0;
  (this->SourcesPlaying).ArrayMax = 0;
  (this->SourcesPlayingCs).State = (atomic<unsigned_char>)0x0;
  (this->SpokenText_DEPRECATED).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpokenText_DEPRECATED).Data.ArrayNum = 0;
  (this->SpokenText_DEPRECATED).Data.ArrayMax = 0;
  (this->Subtitles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subtitles).ArrayNum = 0;
  (this->Subtitles).ArrayMax = 0;
  (this->Curves).field0_0x0.DebugPtr = (UCurveTable *)0x0;
  (this->InternalCurves).field0_0x0.DebugPtr = (UCurveTable *)0x0;
  (this->CompressedDataGuid).A = 0;
  (this->CompressedDataGuid).B = 0;
  (this->CompressedDataGuid).C = 0;
  (this->CompressedDataGuid).D = 0;
  (this->CookedPlatformData).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedPlatformData).Pairs.ArrayNum = 0;
  (this->CookedPlatformData).Pairs.ArrayMax = 0;
  pTVar8 = MakeShared<FSoundWaveData,1>(&local_18);
  (this->SoundWaveDataPtr).Object = pTVar8->Object;
  pTVar3 = (pTVar8->SharedReferenceCount).ReferenceController;
  (this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  this->ResourceState = NeedsFree;
  this->Volume = 1.0;
  this->Pitch = 1.0;
  this->SubtitlePriority = 10000.0;
  this->RawPCMDataSize = 0;
  LOCK();
  (this->PrecacheState).Counter = 0;
  UNLOCK();
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  local_28 = 0x42c80000;
  if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar4 + (longlong)(this->FrequenciesToAnalyze).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (USoundWave *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = (this->FrequenciesToAnalyze).ArrayNum;
  if (iVar7 == (this->FrequenciesToAnalyze).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->FrequenciesToAnalyze).ArrayMax);
  }
  (this->FrequenciesToAnalyze).ArrayNum = iVar7 + 1;
  local_24 = 0x43fa0000;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 <
      pFVar4 + (longlong)(this->FrequenciesToAnalyze).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (USoundWave *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = (this->FrequenciesToAnalyze).ArrayNum;
  if (iVar7 == (this->FrequenciesToAnalyze).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->FrequenciesToAnalyze).ArrayMax);
  }
  (this->FrequenciesToAnalyze).ArrayNum = iVar7 + 1;
  local_20 = 0x447a0000;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_24;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 <
      pFVar4 + (longlong)(this->FrequenciesToAnalyze).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (USoundWave *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = (this->FrequenciesToAnalyze).ArrayNum;
  if (iVar7 == (this->FrequenciesToAnalyze).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->FrequenciesToAnalyze).ArrayMax);
  }
  (this->FrequenciesToAnalyze).ArrayNum = iVar7 + 1;
  local_1c = 0x459c4000;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_20;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_1c) &&
     ((FScriptContainerElement *)&local_1c <
      pFVar4 + (longlong)(this->FrequenciesToAnalyze).ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pUVar9 = (USoundWave *)(*pcVar5)();
      return pUVar9;
    }
  }
  iVar7 = (this->FrequenciesToAnalyze).ArrayNum;
  if (iVar7 == (this->FrequenciesToAnalyze).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->FrequenciesToAnalyze).ArrayMax);
  }
  (this->FrequenciesToAnalyze).ArrayNum = iVar7 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_1c;
  this->bCachedSampleRateFromPlatformSettings = '\0';
  this->bSampleRateManuallyReset = '\0';
  this->bProcedural = '\0';
  this->bRequiresStopFade = '\0';
  this->CachedSampleRateOverride = 0.0;
  this->SoundAssetCompressionType = ProjectDefined;
  this->CompressionQuality = 0x50;
  return this;
}

// ~USoundWave @ 14869c100

void __thiscall USoundWave::~USoundWave(USoundWave *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundWaveDataPtr).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FString,FStreamedAudioPlatformData_*>,int>
            ((TTuple<FString,FStreamedAudioPlatformData_*> *)
             (this->CookedPlatformData).Pairs.AllocatorInstance.Data,
             (this->CookedPlatformData).Pairs.ArrayNum);
  pFVar1 = (this->CookedPlatformData).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSubtitleCue,int>
            ((FSubtitleCue *)(this->Subtitles).AllocatorInstance.Data,(this->Subtitles).ArrayNum);
  pFVar1 = (this->Subtitles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpokenText_DEPRECATED).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourcesPlaying).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CookedEnvelopeTimeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FSoundWaveSpectralTimeData,int>
            ((FSoundWaveSpectralTimeData *)(this->CookedSpectralTimeData).AllocatorInstance.Data,
             (this->CookedSpectralTimeData).ArrayNum);
  pFVar1 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrequenciesToAnalyze).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings
            ((FSoundModulationDefaultSettings *)&this->ModulationSettings);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Proxy).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  USoundBase::~USoundBase((USoundBase *)this);
  return;
}

// operator() @ 14869f520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USoundWave::RetainCompressedAudio'::__l68::<lambda_1>::operator()
          (void *this,FAudioChunkHandle *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  FAudioChunkHandle local_60;
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar3 = FAudioChunkHandle::IsValid(param_1);
  if (bVar3) {
    uVar2 = *(undefined8 *)this;
    FAudioChunkHandle::FAudioChunkHandle(&local_60,param_1);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x38,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``USoundWave::RetainCompressedAudio'::`68'::<lambda_1>::operator()'::`5'::<lambda_1>,1,1>
                 ::_vftable_;
    puVar1 = local_10 + 1;
    *puVar1 = uVar2;
    FAudioChunkHandle::FAudioChunkHandle((FAudioChunkHandle *)(local_10 + 2),&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``USoundWave::RetainCompressedAudio'::__l68::<lambda_1>::operator()'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    FAudioChunkHandle::~FAudioChunkHandle(&local_60);
  }
  return;
}

// operator() @ 14869f800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()
          (void *this,EAudioChunkLoadResult param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  FName local_a8;
  FString local_a0;
  FAudioChunkHandle local_90;
  undefined4 local_68 [4];
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68[0] = *(undefined4 *)this;
  local_58 = *(longlong *)((longlong)this + 0x10);
  local_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)(puVar4,local_48);
  }
  local_28 = *(undefined4 *)((longlong)this + 0x44);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 4));
  if ((bVar1) && (param_1 < Interrupted)) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 4));
    this_00 = IStreamingManager::Get();
    pIVar3 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
    local_b8 = BlockOnChunkLoadCompletionCVar != 0;
    local_b0 = 0;
    (**(code **)(*(longlong *)pIVar3 + 0xb0))
              (pIVar3,&local_90,&pUVar2[10].field_0x10,*(undefined4 *)((longlong)this + 0x40));
    bVar1 = FAudioChunkHandle::IsValid(&local_90);
    if ((!bVar1) && (3 < (byte)LogAudio._0_1_)) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 4));
      local_a8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_a8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_a8,&local_a0);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FAudioChunkHandle::FAudioChunkHandle(&local_90);
  }
  ``USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()(local_68,&local_90);
  FAudioChunkHandle::~FAudioChunkHandle(&local_90);
  if (local_58 != 0) {
    plVar5 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// operator() @ 14869f9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `USoundWave::Parse'::__l252::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  UAudioComponent *pUVar2;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar2 = UAudioComponent::GetAudioComponentFromID(*(ulong64 *)this);
  if (pUVar2 == (UAudioComponent *)0x0) {
    if (5 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      return;
    }
  }
  else {
    lVar1 = *(longlong *)&pUVar2->field_0xa8;
    if (5 < (byte)LogAudio._0_1_) {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
      if (lVar1 != 0) {
        local_res8 = *(FName *)(lVar1 + 0x18);
        ::FName::ToString(&local_res8,&local_38);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if ((lVar1 != 0) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddPlayingSource @ 1486a5af0

void __thiscall USoundWave::AddPlayingSource(USoundWave *this,ISoundWaveClient **param_1)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<ISoundWaveClient_*,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if ((*param_1 == (ISoundWaveClient *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x10b5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = IsInAudioThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread() || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x10b6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*param_1 != (ISoundWaveClient *)0x0) {
    this_00 = &this->SourcesPlayingCs;
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(this_00);
    }
    pTVar8 = &this->SourcesPlaying;
    pFVar7 = (pTVar8->AllocatorInstance).Data;
    pFVar3 = pFVar7 + (longlong)(this->SourcesPlaying).ArrayNum * 8;
    if (pFVar7 != pFVar3) {
      do {
        if (*(ISoundWaveClient **)pFVar7 == *param_1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SourcesPlaying.Contains(Source)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                             ,0x10ba,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          break;
        }
        pFVar7 = pFVar7 + 8;
      } while (pFVar7 != pFVar3);
    }
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->SourcesPlaying).ArrayMax * 8))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->SourcesPlaying).ArrayNum;
    piVar1 = &(this->SourcesPlaying).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,piVar1);
    }
    (this->SourcesPlaying).ArrayNum = iVar6 + 1;
    *(ISoundWaveClient **)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) = *param_1;
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// BeginDestroy @ 1486a6ac0

void __thiscall USoundWave::BeginDestroy(USoundWave *this)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  UObject::BeginDestroy((UObject *)this);
  this_00 = &this->SourcesPlayingCs;
  LOCK();
  bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar14) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar14) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar11 = (this->SourcesPlaying).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11;
    lVar13 = lVar10 * 8;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->SourcesPlaying).ArrayNum) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)((this->SourcesPlaying).AllocatorInstance.Data + lVar13);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar4 + 8))(plVar4,this), cVar7 != '\0')) {
        uVar8 = 0;
        if ((int)uVar11 < (this->SourcesPlaying).ArrayNum) {
          uVar8 = uVar12;
        }
        if ((uVar8 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->SourcesPlaying).ArrayNum;
        pFVar5 = (this->SourcesPlaying).AllocatorInstance.Data;
        iVar9 = iVar3 + ~uVar11;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar5 + lVar10 * 8,pFVar5 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->SourcesPlaying).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar10 = lVar10 + -1;
      lVar13 = lVar13 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) == 0) {
    return;
  }
  UE::FMutex::WakeWaitingThread(this_00);
  return;
}

// BeginGetCompressedData @ 1486a6c80

void __thiscall
USoundWave::BeginGetCompressedData
          (USoundWave *this,FName param_1,FPlatformAudioCookOverrides *param_2,
          ITargetPlatform *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1972,"USoundWave::BeginGetCompressedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
               ,0x7b4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1972);
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x7b5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CacheInheritedLoadingBehavior @ 1486a7330

void __thiscall USoundWave::CacheInheritedLoadingBehavior(USoundWave *this)

{
  TSharedPtr<FSoundWaveData,1> *this_00;
  code *pcVar1;
  bool bVar2;
  ESoundWaveLoadingBehavior EVar3;
  longlong lVar4;
  FSoundWaveData *pFVar5;
  USoundWave *local_res8;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x13c7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = &this->SoundWaveDataPtr;
  if ((this_00->Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x13c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->LoadingBehavior == Inherited) {
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = this_00->Object;
    if (pFVar5->bLoadingBehaviorOverridden != '\0') {
      if ((pFVar5 == (FSoundWaveData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this_00->Object->LoadingBehavior != Inherited) {
        return;
      }
      local_res8 = this;
      `USoundWave::CacheInheritedLoadingBehavior'::__l26::<lambda_1>::operator()(&local_res8);
      return;
    }
    if ((pFVar5 == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->Object->bLoadingBehaviorOverridden != '\0') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SoundWaveDataPtr->bLoadingBehaviorOverridden",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                           ,0x13dd,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar4 = (**(code **)(this->_padding_ + 0x330))(this);
    do {
      if (lVar4 == 0) {
        EVar3 = SoundWave_Private::GetDefaultLoadingBehaviorCVar();
        pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
        pFVar5->bLoadingBehaviorOverridden = '\x01';
        break;
      }
      EVar3 = *(ESoundWaveLoadingBehavior *)(lVar4 + 0x1b9);
      lVar4 = *(longlong *)(lVar4 + 0x1e8);
    } while (EVar3 == Inherited);
    pFVar5 = this_00->Object;
  }
  else {
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = this_00->Object;
    if (pFVar5->LoadingBehavior != Uninitialized) {
      return;
    }
    EVar3 = this->LoadingBehavior;
  }
  if ((pFVar5 == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00->Object->LoadingBehavior = EVar3;
  return;
}

// CleanupDecompressor @ 1486a87c0

bool __thiscall USoundWave::CleanupDecompressor(USoundWave *this,bool param_1)

{
  FAsyncTask<FAsyncAudioDecompressWorker> *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0xd9e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = this->AudioDecompressor;
  if (pFVar1 == (FAsyncTask<FAsyncAudioDecompressWorker> *)0x0) {
    if ((this->PrecacheState).Counter != 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetPrecacheState() == ESoundWavePrecacheState::Done",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0xda2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return true;
  }
  if (((FThreadSafeCounter *)&pFVar1->_padding_)->Counter == 0) {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar1,false);
  }
  else {
    if (!param_1) {
      return false;
    }
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AudioDecompressor,true,false);
  }
  pFVar1 = this->AudioDecompressor;
  if (pFVar1 != (FAsyncTask<FAsyncAudioDecompressWorker> *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
  }
  this->AudioDecompressor = (FAsyncTask<FAsyncAudioDecompressWorker> *)0x0;
  LOCK();
  (this->PrecacheState).Counter = 2;
  UNLOCK();
  return true;
}

// CreateProxyData @ 1486aebc0

TSharedPtr<Audio::IProxyData,1> * __thiscall
USoundWave::CreateProxyData
          (USoundWave *this,TSharedPtr<Audio::IProxyData,1> *__return_storage_ptr__,
          FProxyDataInitParams *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<Audio::IProxyData,1> *pTVar5;
  TSharedPtr<FSoundWaveProxy,1> *pTVar6;
  wchar_t *pwVar7;
  int *piVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TSharedPtr<FSoundWaveProxy,1> local_28;
  
  if ((this->ModulationSettings)._padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x10a9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<Audio::IProxyData,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FLLMScope::FLLMScope(local_res8,AudioSoundWaveProxies,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,AudioSoundWaveProxies,true);
  plVar1 = &this->_padding_;
  if (this->_padding_ != 0) goto LAB_1486aeccf;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pwVar7 = FCommandLine::Get();
      bVar4 = FParse::Param(pwVar7,L"nosound");
      if (bVar4) {
        pwVar7 = FCommandLine::Get();
        bVar4 = FParse::Param(pwVar7,L"enablesound");
        if (bVar4) goto LAB_1486aed71;
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = true;
      }
      else {
LAB_1486aed71:
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = false;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (*piVar8 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                _thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
    if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_1__ == -1) {
      if ((FApp::bIsBenchmarking == false) &&
         ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = false;
      }
      else {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = true;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
    }
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    pTVar6 = CreateSoundWaveProxy((USoundWave *)&this[-1].ModulationSettings._padding_,&local_28);
    if ((TSharedPtr<FSoundWaveProxy,1> *)plVar1 != pTVar6) {
      *plVar1 = (longlong)pTVar6->Object;
      pTVar6->Object = (FSoundWaveProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
LAB_1486aeccf:
  __return_storage_ptr__->Object = (IProxyData *)*plVar1;
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// CreateSoundWaveProxy @ 1486af180

TSharedPtr<FSoundWaveProxy,1> * __thiscall
USoundWave::CreateSoundWaveProxy
          (USoundWave *this,TSharedPtr<FSoundWaveProxy,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSoundWaveProxy,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  wchar_t *pwVar5;
  int *piVar6;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      _thread_safe_static_guard_0__ <= *piVar6) goto LAB_1486af1b8;
  _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
  if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      _thread_safe_static_guard_0__ != -1) goto LAB_1486af1b8;
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"nosound");
  if (bVar2) {
    pwVar5 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar5,L"enablesound");
    if (bVar2) goto LAB_1486af37b;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_1486af37b:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_1486af1b8:
  if (*piVar6 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                _thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
    if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_1__ == -1) {
      if ((FApp::bIsBenchmarking == false) &&
         ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = false;
      }
      else {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = true;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
    }
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    FLLMScope::FLLMScope(local_res18,AudioSoundWaveProxies,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,AudioSoundWaveProxies,true);
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x10a2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FSoundWaveProxy,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar4 = ::operator_new(0x38);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = (FSoundWaveProxy *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFSoundWaveProxy___00_SharedPointerInternals__6B_;
      FSoundWaveProxy::FSoundWaveProxy((FSoundWaveProxy *)(pTVar4 + 1),this);
      if ((FSoundWaveProxy *)(pTVar4 + 1) == (FSoundWaveProxy *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar3 = (TSharedPtr<FSoundWaveProxy,1> *)(*pcVar1)();
          return pTVar3;
        }
      }
      __return_storage_ptr__->Object = (FSoundWaveProxy *)(pTVar4 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res18);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (this->Proxy).Object;
  pTVar4 = (this->Proxy).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FinishDestroy @ 1486b7ca0

void __thiscall USoundWave::FinishDestroy(USoundWave *this)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  UObject::FinishDestroy((UObject *)this);
  this_00 = &this->SourcesPlayingCs;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar9 = (this->SourcesPlaying).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9;
    lVar11 = lVar10 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->SourcesPlaying).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)((this->SourcesPlaying).AllocatorInstance.Data + lVar11);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4,this);
        uVar7 = 0;
        if ((int)uVar9 < (this->SourcesPlaying).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->SourcesPlaying).ArrayNum;
        pFVar5 = (this->SourcesPlaying).AllocatorInstance.Data;
        iVar8 = ~uVar9 + iVar3;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar5 + lVar10 * 8,pFVar5 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->SourcesPlaying).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  if (((this->PrecacheState).Counter == 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetPrecacheState() != ESoundWavePrecacheState::InProgress",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                          ,0xe13,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->AudioDecompressor != (FAsyncTask<FAsyncAudioDecompressWorker> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioDecompressor == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                          ,0xe14,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// FreeResources @ 1486b8410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundWave::FreeResources(USoundWave *this,bool param_1)

{
  undefined1 uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AudioBufferTime> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels> FVar9;
  FAudioDeviceManager *this_00;
  FThreadSafeStaticStat<FStat_STAT_AudioMemorySize> FVar10;
  FThreadSafeStaticStat<FStat_STAT_AudioMemory> FVar11;
  uchar auVar12 [8];
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_c8;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68 [6];
  
  bVar4 = IsInAudioThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0xd6b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  auVar12 = (uchar  [8])(double)*(float *)((longlong)&this->_padding_ + 4);
  if ((double)auVar12 != 0.0) {
    FVar6 = StatPtr_STAT_AudioBufferTime;
    if (StatPtr_STAT_AudioBufferTime == (FThreadSafeStaticStat<FStat_STAT_AudioBufferTime>)0x0) {
      pFVar5 = ::FName::FName(&local_80,"STAT_AudioBufferTime");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_AudioBufferTime>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioBufferTime,*pFVar5,
                         L"Audio Buffer Time","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,
                         false,NumBits,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar6;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_c0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_c0.StatData.Pad = auVar12;
      local_c0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_c0);
      FStatsTrace::Add(&local_res8,
                       (double)CONCAT44(auVar12._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_
                                        ,auVar12._0_4_ ^
                                         (uint)__xmm_80000000000000008000000000000000));
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  auVar12 = (uchar  [8])
            (double)((float)this->NumChannels * *(float *)((longlong)&this->_padding_ + 4));
  if ((double)auVar12 != 0.0) {
    FVar9 = StatPtr_STAT_AudioBufferTimeChannels;
    if (StatPtr_STAT_AudioBufferTimeChannels ==
        (FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels>)0x0) {
      pFVar5 = ::FName::FName(&local_78,"STAT_AudioBufferTimeChannels");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioBufferTimeChannels,*pFVar5,
                         L"Audio Buffer Time (w/ Channels)","STATGROUP_Audio","STATCAT_Advanced",
                         L"Audio",true,false,NumBits,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_b0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res18 = FVar2;
      local_b0.StatData.Pad = auVar12;
      local_b0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_b0);
      FStatsTrace::Add(&local_res18,
                       (double)CONCAT44(auVar12._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_
                                        ,auVar12._0_4_ ^
                                         (uint)__xmm_80000000000000008000000000000000));
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  if (((GEngine != (UEngine *)0x0) && (GExitPurge == false)) &&
     ((this_00 = UEngine::GetAudioDeviceManager(GEngine), param_1 &&
      (this_00 != (FAudioDeviceManager *)0x0)))) {
    FAudioDeviceManager::StopSoundsUsingResource
              (this_00,this,(TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)0x0);
    FAudioDeviceManager::FreeResource(this_00,this);
  }
  if (this->CachedRealtimeFirstBuffer != (uchar *)0x0) {
    FMemory::Free(this->CachedRealtimeFirstBuffer);
    this->CachedRealtimeFirstBuffer = (uchar *)0x0;
  }
  if (this->RawPCMData != (uchar *)0x0) {
    FMemory::Free(this->RawPCMData);
    this->RawPCMData = (uchar *)0x0;
  }
  auVar12 = (uchar  [8])(longlong)this->TrackedMemoryUsage;
  if (auVar12 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_AudioMemorySize;
    if (StatPtr_STAT_AudioMemorySize == (FThreadSafeStaticStat<FStat_STAT_AudioMemorySize>)0x0) {
      pFVar5 = ::FName::FName(&local_70,"STAT_AudioMemorySize");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_AudioMemorySize>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMemorySize,*pFVar5,
                          L"Audio Memory Used","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_a0.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res20 = FVar2;
      local_a0.StatData.Pad = auVar12;
      local_a0.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_a0);
      FStatsTrace::Add(&local_res20,-(longlong)auVar12);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  auVar12 = (uchar  [8])(longlong)this->TrackedMemoryUsage;
  if (auVar12 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_AudioMemory;
    if (StatPtr_STAT_AudioMemory == (FThreadSafeStaticStat<FStat_STAT_AudioMemory>)0x0) {
      pFVar5 = ::FName::FName(local_68,"STAT_AudioMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_AudioMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMemory,*pFVar5,
                          L"Audio Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar11;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar2;
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_90.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_c8 = FVar2;
      local_90.StatData.Pad = auVar12;
      local_90.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_90);
      FStatsTrace::Add(&local_c8,-(longlong)auVar12);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  this->bDynamicResource = '\0';
  this->ResourceID = 0;
  this->TrackedMemoryUsage = 0;
  (this->DecompressionType).Value = '\0';
  LOCK();
  (this->PrecacheState).Counter = 0;
  UNLOCK();
  uVar1 = this->field_0x365;
  this->bDecompressedFromOgg = '\0';
  if (this->ResourceState == Freeing) {
    this->field_0x365 = uVar1 & 0xed | 0x20;
  }
  return;
}

// GetAssetRegistryTags @ 1486baf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USoundWave::GetAssetRegistryTags
          (USoundWave *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  USoundWave *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(USoundWave **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(USoundWave **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(USoundWave **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 1486baf10

void __thiscall USoundWave::GetAssetRegistryTags(USoundWave *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar1);
  return;
}

// GetChunkData @ 1486bba90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USoundWave::GetChunkData(USoundWave *this,int param_1,uchar **param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString local_18;
  
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x113b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = FStreamedAudioPlatformData::GetChunkFromDDC
                    (&((this->SoundWaveDataPtr).Object)->RunningPlatformData,param_1,param_2,param_3
                    );
  if (iVar4 == 0) {
    if (2 < (byte)LogAudio._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// GetChunkSizeStats @ 1486bbd10

void __thiscall USoundWave::GetChunkSizeStats(USoundWave *this,uint *param_1,uint *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FSoundWaveData *pFVar3;
  longlong lVar4;
  uint uVar5;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  *param_2 = 0;
  pFVar3 = (this->SoundWaveDataPtr).Object;
  if (pFVar3 != (FSoundWaveData *)0x0) {
    pTVar6 = FStreamedAudioPlatformData::GetChunks(&pFVar3->RunningPlatformData);
    iVar2 = (pTVar6->Array).ArrayNum;
    pFVar7 = (pTVar6->Array).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pTVar6->Array).ArrayNum != iVar2) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar1) break;
      lVar4 = *(longlong *)pFVar7;
      *param_1 = *param_1 + *(int *)(lVar4 + 4);
      uVar5 = *param_2;
      if (*param_2 < *(uint *)(lVar4 + 4)) {
        uVar5 = *(uint *)(lVar4 + 4);
      }
      pFVar7 = pFVar7 + 8;
      *param_2 = uVar5;
    }
  }
  return;
}

// GetCompressedData @ 1486bc320

/* WARNING: Enum "Type": Some values do not have unique names */

TBulkData<unsigned_char> * __thiscall
USoundWave::GetCompressedData
          (USoundWave *this,FName param_1,FPlatformAudioCookOverrides *param_2,
          ITargetPlatform *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  TBulkData<unsigned_char> *pTVar4;
  TBulkData<unsigned_char> **ppTVar5;
  FBulkData *this_00;
  long64 lVar6;
  FBulkData *pFVar7;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x7f0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TBulkData<unsigned_char> *)(*pcVar1)();
    return pTVar4;
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return (TBulkData<unsigned_char> *)0x0;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2039,"USoundWave::GetCompressedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
               ,0x7f7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2039);
  }
  GetPlatformSpecificFormat((FName)&local_res8,(FPlatformAudioCookOverrides *)param_1);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TBulkData<unsigned_char> *)(*pcVar1)();
    return pTVar4;
  }
  ppTVar5 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
            Find(&(((this->SoundWaveDataPtr).Object)->CompressedFormatData).Formats,local_res8);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TBulkData<unsigned_char> *)(*pcVar1)();
    return pTVar4;
  }
  this_00 = (FBulkData *)
            FFormatContainer::GetFormat
                      (&((this->SoundWaveDataPtr).Object)->CompressedFormatData,local_res8);
  if (ppTVar5 == (TBulkData<unsigned_char> **)0x0) {
    if ((byte)LogAudio._0_1_ < 2) goto LAB_1486bc584;
    ::FName::ToString(&local_res8,&local_38);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      local_18.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  else {
    lVar6 = FBulkData::GetBulkDataSize(this_00);
    if ((lVar6 != 0) || ((byte)LogAudio._0_1_ < 3)) goto LAB_1486bc584;
    ::FName::ToString(&local_res8,&local_18);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_1486bc584:
  if ((this_00 == (FBulkData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x837,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TBulkData<unsigned_char> *)(*pcVar1)();
    return pTVar4;
  }
  lVar6 = FBulkData::GetBulkDataSize(this_00);
  pFVar7 = (FBulkData *)0x0;
  if (0 < lVar6) {
    pFVar7 = this_00;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TBulkData<unsigned_char> *)pFVar7;
}

// GetCompressedDataSize @ 1486bc600

ulong64 __thiscall
USoundWave::GetCompressedDataSize
          (USoundWave *this,FName param_1,FPlatformAudioCookOverrides *param_2)

{
  code *pcVar1;
  ITargetPlatformManagerModule *pIVar2;
  undefined8 uVar3;
  FBulkData *this_00;
  ulong64 uVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x408);
  pIVar2 = GetTargetPlatformManager(true);
  uVar3 = 0;
  if (pIVar2 != (ITargetPlatformManagerModule *)0x0) {
    uVar3 = (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  }
  this_00 = (FBulkData *)(*pcVar1)(this,param_1,param_2,uVar3);
  uVar4 = 0;
  if (this_00 != (FBulkData *)0x0) {
    uVar4 = FBulkData::GetBulkDataSize(this_00);
  }
  return uVar4;
}

// GetCompressionQuality @ 1486bc680

int __thiscall USoundWave::GetCompressionQuality(USoundWave *this)

{
  int iVar1;
  
  iVar1 = 100;
  if (this->SoundAssetCompressionType != PCM) {
    iVar1 = this->CompressionQuality;
  }
  return iVar1;
}

// GetCuePoints @ 1486bcdf0

TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> * __thiscall
USoundWave::GetCuePoints
          (USoundWave *this,
          TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FSoundWaveData *pFVar2;
  FSoundWaveCuePoint *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar2 = (this->SoundWaveDataPtr).Object;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar2->CuePoints).ArrayNum;
  pFVar3 = (FSoundWaveCuePoint *)(pFVar2->CuePoints).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  return __return_storage_ptr__;
}

// GetDefaultLoadingBehavior @ 1486bd4a0

ESoundWaveLoadingBehavior __cdecl USoundWave::GetDefaultLoadingBehavior(void)

{
  ESoundWaveLoadingBehavior EVar1;
  int iVar2;
  undefined1 local_res8 [32];
  
  if (2 < SoundWaveDefaultLoadingBehaviorCVar - 1U) {
    `SoundWave_Private::GetDefaultLoadingBehaviorCVar'::__l2::<lambda_1>::operator()(local_res8);
  }
  iVar2 = 3;
  if (SoundWaveDefaultLoadingBehaviorCVar < 3) {
    iVar2 = SoundWaveDefaultLoadingBehaviorCVar;
  }
  EVar1 = RetainOnLoad;
  if (1 < iVar2) {
    EVar1 = (ESoundWaveLoadingBehavior)iVar2;
  }
  return EVar1;
}

// GetDefaultLoadingBehaviorCVarName @ 1486bd540

wchar_t * __cdecl USoundWave::GetDefaultLoadingBehaviorCVarName(void)

{
  return SoundWaveDefaultLoadingBehaviorCVarName;
}

// GetDesc @ 1486bd7b0

FString * __thiscall USoundWave::GetDesc(USoundWave *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (this->NumChannels == 0) {
    ::FString::operator=(&local_28,L"Unconverted");
  }
  else {
    ::FString::PrintfImpl(&local_18,L"%d Channels");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_28.Data.ArrayMax = local_18.Data.ArrayMax;
    local_28.Data.ArrayNum = local_18.Data.ArrayNum;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%3.2fs %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDuration @ 1486be0d0

float __thiscall USoundWave::GetDuration(USoundWave *this)

{
  if (this->bLooping != 0) {
    return __real_461c4000;
  }
  return *(float *)((longlong)&this->_padding_ + 4);
}

// GetExporterName @ 1486be7a0

FName __thiscall USoundWave::GetExporterName(USoundWave *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"SoundExporterWAV");
  return in_RDX;
}

// GetHandleForChunkOfAudio @ 1486bebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USoundWave::GetHandleForChunkOfAudio
          (USoundWave *this,TFunction<void___cdecl(FAudioChunkHandle_&&)> *param_1,bool param_2,
          int param_3,Type param_4)

{
  TSharedPtr<FSoundWaveProxy,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FSoundWaveProxy,1> *pTVar5;
  FStreamingManagerCollection *pFVar6;
  IAudioStreamingManager *pIVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int *piVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  char local_e8;
  FWeakObjectPtr local_e0;
  TSharedPtr<FSoundWaveProxy,1> local_d8;
  FAudioChunkHandle local_c8;
  undefined8 *local_a0;
  undefined4 local_98;
  FWeakObjectPtr local_94;
  longlong local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  Type local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  pTVar1 = &this->Proxy;
  uVar14 = (ulonglong)_tls_index;
  uVar13 = 0xff;
  if (DispatchToGameThreadOnChunkRequestCVar != 0) {
    uVar13 = 1;
  }
  local_e8 = param_2;
  if (pTVar1->Object == (FSoundWaveProxy *)0x0) {
    piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c);
    if (*piVar12 <
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar9 = FCommandLine::Get();
        bVar3 = FParse::Param(pwVar9,L"nosound");
        if (bVar3) {
          pwVar9 = FCommandLine::Get();
          bVar3 = FParse::Param(pwVar9,L"enablesound");
          if (bVar3) goto LAB_1486bef86;
          `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          bHasNoAudioOnCommandline = true;
        }
        else {
LAB_1486bef86:
          `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          bHasNoAudioOnCommandline = false;
        }
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (*piVar12 <
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_1__) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
      if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          _thread_safe_static_guard_1__ == -1) {
        if ((FApp::bIsBenchmarking == false) &&
           ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
          `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          bApplicationTypeDoesNotRenderAudio = false;
        }
        else {
          `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
          bApplicationTypeDoesNotRenderAudio = true;
        }
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                             _thread_safe_static_guard_1__);
      }
    }
    if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
         bApplicationTypeDoesNotRenderAudio == false) &&
       (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
        == false)) {
      pTVar5 = CreateSoundWaveProxy(this,&local_d8);
      if (pTVar1 != pTVar5) {
        pTVar1->Object = pTVar5->Object;
        pTVar5->Object = (FSoundWaveProxy *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Proxy).SharedReferenceCount,&pTVar5->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
  }
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c);
  if (*piVar12 <
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      pwVar9 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar9,L"nosound");
      if (bVar3) {
        pwVar9 = FCommandLine::Get();
        bVar3 = FParse::Param(pwVar9,L"enablesound");
        if (bVar3) goto LAB_1486bf03d;
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = true;
      }
      else {
LAB_1486bf03d:
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
             = false;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (*piVar12 <
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      _thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
    if (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        _thread_safe_static_guard_1__ == -1) {
      if ((FApp::bIsBenchmarking == false) &&
         ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = false;
      }
      else {
        `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio = true;
      }
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__);
    }
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    uVar4 = GetNumChunks(this);
    if ((int)uVar4 <= param_3) goto LAB_1486beea5;
    if (local_e8 == '\0') {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (USoundWave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_e0.ObjectIndex = 0;
      local_e0.ObjectSerialNumber = 0;
      local_d8.Object = (FSoundWaveProxy *)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (USoundWave *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_d8);
      pFVar6 = IStreamingManager::Get();
      pIVar7 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar6);
      local_60 = (longlong *)0x0;
      pcVar2 = *(code **)(*(longlong *)pIVar7 + 0xa8);
      local_94 = local_e0;
      local_88 = *(longlong *)param_1;
      local_98 = uVar13;
      if (local_88 != 0) {
        puVar10 = (undefined8 *)&param_1->field_0x10;
        if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
          puVar10 = *(undefined8 **)&param_1->field_0x28;
        }
        (**(code **)*puVar10)(puVar10,&local_78);
      }
      local_54 = param_4;
      local_c8.CachedData = (uchar *)0x0;
      local_58 = param_3;
      local_a0 = FMemory::Malloc(0x60,0x10);
      *local_a0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`USoundWave::GetHandleForChunkOfAudio'::`14'::<lambda_1>,0,1>
                   ::_vftable_;
      *(undefined4 *)(local_a0 + 2) = local_98;
      *(FWeakObjectPtr *)((longlong)local_a0 + 0x14) = local_94;
      local_a0[4] = local_88;
      local_a0[9] = local_60;
      local_60 = (longlong *)0x0;
      *(undefined4 *)(local_a0 + 6) = (undefined4)local_78;
      *(undefined4 *)((longlong)local_a0 + 0x34) = local_78._4_4_;
      *(undefined4 *)(local_a0 + 7) = uStack_70;
      *(undefined4 *)((longlong)local_a0 + 0x3c) = uStack_6c;
      local_a0[8] = local_68;
      if (local_a0[4] != 0) {
        local_88 = 0;
      }
      *(int *)(local_a0 + 10) = local_58;
      *(Type *)((longlong)local_a0 + 0x54) = local_54;
      if (local_a0 + 2 != (undefined8 *)0x0) {
        local_c8.CachedData =
             (uchar *)UE::Core::Private::Function::
                      TFunctionRefCaller<`USoundWave::GetHandleForChunkOfAudio'::__l14::<lambda_1>,void,enum_EAudioChunkLoadResult>
                      ::Call;
      }
      local_f0 = 0;
      local_f8 = uVar13;
      (*pcVar2)(pIVar7,pTVar1,param_3,&local_c8);
      if (local_88 != 0) {
        plVar11 = &local_78;
        if (local_60 != (longlong *)0x0) {
          plVar11 = local_60;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      goto LAB_1486beee0;
    }
    pFVar6 = IStreamingManager::Get();
    pIVar7 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar6);
    local_f0 = 0;
    local_f8 = CONCAT31(local_f8._1_3_,1);
    (**(code **)(*(longlong *)pIVar7 + 0xb0))(pIVar7,&local_c8,pTVar1,param_3);
  }
  else {
LAB_1486beea5:
    FAudioChunkHandle::FAudioChunkHandle(&local_c8);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar11 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar11 = *(longlong **)&param_1->field_0x28;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  (*pcVar2)(uVar8,&local_c8);
  FAudioChunkHandle::~FAudioChunkHandle(&local_c8);
LAB_1486beee0:
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// GetInterpolatedCookedEnvelopeDataForTime @ 1486bf630

bool __thiscall
USoundWave::GetInterpolatedCookedEnvelopeDataForTime
          (USoundWave *this,float param_1,uint *param_2,float *param_3,bool param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  
  *param_2 = 0xffffffff;
  iVar1 = (this->CookedEnvelopeTimeData).ArrayNum;
  uVar7 = 0xffffffff;
  if ((0 < iVar1) && (0.0 <= param_1)) {
    uVar7 = 0;
    if (!param_4) {
      uVar9 = uVar7;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar9 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar1 = (this->CookedEnvelopeTimeData).ArrayNum;
      if (*(float *)((this->CookedEnvelopeTimeData).AllocatorInstance.Data +
                    (longlong)iVar1 * 8 + -4) <= param_1) {
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar7 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        *param_3 = *(float *)((this->CookedEnvelopeTimeData).AllocatorInstance.Data +
                             (longlong)(this->CookedEnvelopeTimeData).ArrayNum * 8 + -8);
        *param_2 = (this->CookedEnvelopeTimeData).ArrayNum - 1;
        return true;
      }
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (param_1 < *(float *)((this->CookedEnvelopeTimeData).AllocatorInstance.Data + 4)) {
        if (((this->CookedEnvelopeTimeData).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        *param_3 = *(float *)(this->CookedEnvelopeTimeData).AllocatorInstance.Data;
        *param_2 = 0;
        return true;
      }
    }
    if (((this->CookedEnvelopeTimeData).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (param_1 < *(float *)((this->CookedEnvelopeTimeData).AllocatorInstance.Data + 4)) {
      iVar1 = (this->CookedEnvelopeTimeData).ArrayNum;
      uVar9 = iVar1 - 1;
      if ((int)uVar9 < iVar1) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar1 = (this->CookedEnvelopeTimeData).ArrayNum;
      lVar8 = (longlong)iVar1;
      pFVar2 = (this->CookedEnvelopeTimeData).AllocatorInstance.Data;
      if ((iVar1 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      fVar10 = *(float *)((longlong)&this->_padding_ + 4) - *(float *)(pFVar2 + lVar8 * 8 + -4);
      pFVar3 = (this->CookedEnvelopeTimeData).AllocatorInstance.Data;
      *param_3 = ((fVar10 + param_1) / (fVar10 + *(float *)(pFVar3 + 4))) *
                 (*(float *)pFVar3 - *(float *)(pFVar2 + lVar8 * 8 + -8)) +
                 *(float *)(pFVar2 + lVar8 * 8 + -8);
      *param_2 = 0;
      return true;
    }
    uVar9 = 0;
    if (*param_2 != 0xffffffff) {
      uVar9 = *param_2;
    }
    uVar7 = GetInterpolatedCookedEnvelopeDataForTimeInternal(this,param_1,uVar9,param_3,param_4);
    *param_2 = uVar7;
    bVar5 = false;
    if (uVar7 != 0xffffffff) goto LAB_1486bf961;
    uVar7 = 0xffffffff;
    if (uVar9 != 0) {
      uVar7 = GetInterpolatedCookedEnvelopeDataForTimeInternal(this,param_1,0,param_3,param_4);
      *param_2 = uVar7;
    }
  }
  bVar5 = uVar7 == 0xffffffff;
LAB_1486bf961:
  return !bVar5;
}

// GetInterpolatedCookedEnvelopeDataForTimeInternal @ 1486bf990

uint __thiscall
USoundWave::GetInterpolatedCookedEnvelopeDataForTimeInternal
          (USoundWave *this,float param_1,uint param_2,float *param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((param_2 == 0xffffffff) || (param_2 == (this->CookedEnvelopeTimeData).ArrayNum)) {
    param_2 = 0;
  }
  iVar3 = (this->CookedEnvelopeTimeData).ArrayNum;
  if ((int)param_2 < iVar3) {
    lVar10 = (longlong)(int)param_2 * 8;
    do {
      uVar8 = 0;
      if ((int)param_2 < (this->CookedEnvelopeTimeData).ArrayNum) {
        uVar8 = ~param_2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      pFVar4 = (this->CookedEnvelopeTimeData).AllocatorInstance.Data;
      uVar11 = param_2 + 1;
      uVar9 = (int)uVar11 % iVar3;
      uVar8 = 0;
      if ((int)uVar9 < (this->CookedEnvelopeTimeData).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      fVar1 = *(float *)(pFVar4 + lVar10 + 4);
      pFVar5 = (this->CookedEnvelopeTimeData).AllocatorInstance.Data;
      if ((fVar1 <= param_1) &&
         (fVar2 = *(float *)(pFVar5 + (longlong)(int)uVar9 * 8 + 4), param_1 < fVar2)) {
        *param_3 = ((param_1 - fVar1) / (fVar2 - fVar1)) *
                   (*(float *)(pFVar5 + (longlong)(int)uVar9 * 8) - *(float *)(pFVar4 + lVar10)) +
                   *(float *)(pFVar4 + lVar10);
        return param_2;
      }
      lVar10 = lVar10 + 8;
      param_2 = uVar11;
    } while ((int)uVar11 < iVar3);
  }
  return 0xffffffff;
}

// GetInterpolatedCookedFFTDataForTime @ 1486bfb30

bool __thiscall
USoundWave::GetInterpolatedCookedFFTDataForTime
          (USoundWave *this,float param_1,uint *param_2,
          TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  float fVar17;
  longlong local_res8;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  float local_68;
  
  iVar7 = (this->CookedSpectralTimeData).ArrayNum;
  if (iVar7 < 1) {
    return false;
  }
  uVar12 = 0;
  uVar13 = 0;
  uVar8 = 0;
  if (param_4) {
    if (param_1 < 0.0) {
      fVar17 = *(float *)((longlong)&this->_padding_ + 4);
      param_1 = fVar17 + param_1;
      if (fVar17 <= param_1) {
        param_1 = fVar17;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else if (param_1 < *(float *)((this->CookedSpectralTimeData).AllocatorInstance.Data + 0x10)) {
      iVar7 = (this->CookedSpectralTimeData).ArrayNum;
      uVar11 = iVar7 - 1;
      uVar10 = uVar13;
      if ((int)uVar11 < iVar7) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (this->CookedSpectralTimeData).ArrayNum;
      lVar9 = (longlong)iVar7;
      pFVar16 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      fVar17 = *(float *)((longlong)&this->_padding_ + 4) - *(float *)(pFVar16 + lVar9 * 0x18 + -8);
      pFVar1 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
      fVar17 = (fVar17 + param_1) / (fVar17 + *(float *)(pFVar1 + 0x10));
      uVar15 = uVar12;
      if ((this->FrequenciesToAnalyze).ArrayNum < 1) {
        return true;
      }
      while( true ) {
        uVar14 = (uint)uVar12;
        local_70 = 0;
        uVar11 = ~uVar14 >> 0x1f;
        local_68 = 0.0;
        uVar10 = uVar8;
        if ((int)uVar14 < (this->FrequenciesToAnalyze).ArrayNum) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar10 = uVar8;
        if ((int)uVar14 < *(int *)(pFVar1 + 8)) {
          uVar10 = uVar11;
        }
        local_70 = CONCAT44(local_70._4_4_,
                            *(undefined4 *)
                             ((this->FrequenciesToAnalyze).AllocatorInstance.Data + uVar15 * 4));
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar2 = *(longlong *)pFVar1;
        uVar10 = uVar8;
        if ((int)uVar14 < *(int *)(pFVar16 + lVar9 * 0x18 + -0x10)) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        uVar10 = uVar8;
        if ((int)uVar14 < *(int *)(pFVar1 + 8)) {
          uVar10 = uVar11;
        }
        local_70 = CONCAT44((*(float *)(lVar2 + uVar15 * 8) -
                            *(float *)(*(longlong *)(pFVar16 + lVar9 * 0x18 + -0x18) + uVar15 * 8))
                            * fVar17 +
                            *(float *)(*(longlong *)(pFVar16 + lVar9 * 0x18 + -0x18) + uVar15 * 8),
                            (undefined4)local_70);
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar2 = *(longlong *)pFVar1;
        uVar10 = uVar13;
        if ((int)uVar14 < *(int *)(pFVar16 + lVar9 * 0x18 + -0x10)) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        local_68 = (*(float *)(lVar2 + 4 + uVar15 * 8) -
                   *(float *)(*(longlong *)(pFVar16 + lVar9 * 0x18 + -0x18) + 4 + uVar15 * 8)) *
                   fVar17 + *(float *)(*(longlong *)(pFVar16 + lVar9 * 0x18 + -0x18) + 4 +
                                      uVar15 * 8);
        if (((pFVar3 <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 < pFVar3 + (longlong)param_3->ArrayMax * 0xc)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == param_3->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar7 + 1;
        uVar12 = (ulonglong)(uVar14 + 1);
        pFVar3 = (param_3->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0xc) = local_70;
        *(float *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = local_68;
        *param_2 = 0;
        uVar15 = uVar15 + 1;
        if ((this->FrequenciesToAnalyze).ArrayNum <= (int)(uVar14 + 1)) {
          return true;
        }
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  else {
    uVar10 = uVar8;
    if ((int)(iVar7 - 1U) < iVar7) {
      uVar10 = ~(iVar7 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = (this->CookedSpectralTimeData).ArrayNum;
    if (param_1 < *(float *)((this->CookedSpectralTimeData).AllocatorInstance.Data +
                            (longlong)iVar7 * 0x18 + -8)) {
      if ((iVar7 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(float *)((this->CookedSpectralTimeData).AllocatorInstance.Data + 0x10) <= param_1)
      goto LAB_1486c0317;
      if (((this->CookedSpectralTimeData).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar16 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
      uVar10 = 0;
    }
    else {
      uVar10 = uVar8;
      if ((int)(iVar7 - 1U) < iVar7) {
        uVar10 = ~(iVar7 - 1U) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar16 = (this->CookedSpectralTimeData).AllocatorInstance.Data +
                (longlong)((this->CookedSpectralTimeData).ArrayNum + -1) * 0x18;
      uVar10 = (this->CookedPlatformData).Pairs.ArrayNum - 1;
    }
    *param_2 = uVar10;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      if (0 < (this->FrequenciesToAnalyze).ArrayNum) {
        local_res8 = 0;
        uVar15 = uVar12;
        do {
          uVar11 = (uint)uVar12;
          local_80 = 0;
          uVar14 = ~uVar11 >> 0x1f;
          local_78 = 0;
          uVar10 = uVar8;
          if ((int)uVar11 < (this->FrequenciesToAnalyze).ArrayNum) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_80 = CONCAT44(local_80._4_4_,
                              *(undefined4 *)
                               ((this->FrequenciesToAnalyze).AllocatorInstance.Data + local_res8));
          uVar10 = uVar8;
          if ((int)uVar11 < *(int *)(pFVar16 + 8)) {
            uVar10 = uVar14;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar10 = uVar13;
          if ((int)uVar11 < *(int *)(pFVar16 + 8)) {
            uVar10 = uVar14;
          }
          local_80 = CONCAT44(*(undefined4 *)(uVar15 + *(longlong *)pFVar16),(undefined4)local_80);
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = (param_3->AllocatorInstance).Data;
          local_78 = *(undefined4 *)(*(longlong *)pFVar16 + 4 + uVar15);
          if (((pFVar1 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < pFVar1 + (longlong)param_3->ArrayMax * 0xc))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar7 = param_3->ArrayNum;
          if (iVar7 == param_3->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          local_res8 = local_res8 + 4;
          uVar12 = (ulonglong)(uVar11 + 1);
          param_3->ArrayNum = iVar7 + 1;
          uVar15 = uVar15 + 8;
          pFVar1 = (param_3->AllocatorInstance).Data;
          *(undefined8 *)(pFVar1 + (longlong)iVar7 * 0xc) = local_80;
          *(undefined4 *)(pFVar1 + (longlong)iVar7 * 0xc + 8) = local_78;
        } while ((int)(uVar11 + 1) < (this->FrequenciesToAnalyze).ArrayNum);
      }
      return true;
    }
  }
LAB_1486c0317:
  uVar13 = 0;
  if (*param_2 != 0xffffffff) {
    uVar13 = *param_2;
  }
  uVar8 = GetInterpolatedCookedFFTDataForTimeInternal(this,param_1,uVar13,param_3,param_4);
  *param_2 = uVar8;
  bVar5 = false;
  if (uVar8 == 0xffffffff) {
    uVar8 = 0xffffffff;
    if (uVar13 != 0) {
      uVar8 = GetInterpolatedCookedFFTDataForTimeInternal(this,param_1,0,param_3,param_4);
      *param_2 = uVar8;
    }
    bVar5 = uVar8 == 0xffffffff;
  }
  return !bVar5;
}

// GetInterpolatedCookedFFTDataForTimeInternal @ 1486c0370

uint __thiscall
USoundWave::GetInterpolatedCookedFFTDataForTimeInternal
          (USoundWave *this,float param_1,uint param_2,
          TArray<FSoundWaveSpectralData,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined8 local_58;
  float local_50;
  
  iVar8 = (this->CookedSpectralTimeData).ArrayNum;
  uVar14 = (ulonglong)(int)param_2;
  if ((int)param_2 < iVar8) {
    lVar15 = uVar14 * 0x18;
    local_res18 = param_2;
    do {
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < (this->CookedSpectralTimeData).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      pFVar1 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
      uVar12 = uVar13 + 1;
      uVar9 = (int)uVar12 % iVar8;
      lVar10 = (longlong)(int)uVar9;
      uVar7 = 0;
      if ((int)uVar9 < (this->CookedSpectralTimeData).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
      pFVar2 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
      fVar16 = *(float *)(pFVar1 + lVar15 + 0x10);
      if ((fVar16 <= param_1) && (param_1 < *(float *)(pFVar2 + lVar10 * 0x18 + 0x10))) {
        uVar7 = 0;
        fVar16 = (param_1 - fVar16) / (*(float *)(pFVar2 + lVar10 * 0x18 + 0x10) - fVar16);
        if (0 < (this->FrequenciesToAnalyze).ArrayNum) {
          lVar11 = 0;
          do {
            local_58 = 0;
            local_50 = 0.0;
            uVar9 = ~uVar7 >> 0x1f;
            uVar13 = 0;
            if ((int)uVar7 < (this->FrequenciesToAnalyze).ArrayNum) {
              uVar13 = uVar9;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return uVar7;
            }
            local_58 = CONCAT44(local_58._4_4_,
                                *(undefined4 *)
                                 ((this->FrequenciesToAnalyze).AllocatorInstance.Data + lVar11 * 4))
            ;
            uVar13 = 0;
            if ((int)uVar7 < *(int *)(pFVar2 + lVar10 * 0x18 + 8)) {
              uVar13 = uVar9;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return uVar7;
            }
            lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x18);
            uVar13 = 0;
            if ((int)uVar7 < *(int *)(pFVar1 + lVar15 + 8)) {
              uVar13 = uVar9;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return uVar7;
            }
            uVar13 = 0;
            if ((int)uVar7 < *(int *)(pFVar2 + lVar10 * 0x18 + 8)) {
              uVar13 = uVar9;
            }
            local_58 = CONCAT44((*(float *)(lVar3 + lVar11 * 8) -
                                *(float *)(*(longlong *)(pFVar1 + lVar15) + lVar11 * 8)) * fVar16 +
                                *(float *)(*(longlong *)(pFVar1 + lVar15) + lVar11 * 8),
                                (undefined4)local_58);
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return uVar7;
            }
            lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x18);
            uVar13 = 0;
            if ((int)uVar7 < *(int *)(pFVar1 + lVar15 + 8)) {
              uVar13 = uVar9;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return uVar7;
            }
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_50 = (*(float *)(lVar3 + 4 + lVar11 * 8) -
                       *(float *)(*(longlong *)(pFVar1 + lVar15) + 4 + lVar11 * 8)) * fVar16 +
                       *(float *)(*(longlong *)(pFVar1 + lVar15) + 4 + lVar11 * 8);
            if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)param_3->ArrayMax * 0xc))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return uVar7;
            }
            iVar8 = param_3->ArrayNum;
            if (iVar8 == param_3->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            uVar7 = uVar7 + 1;
            param_3->ArrayNum = iVar8 + 1;
            lVar11 = lVar11 + 1;
            pFVar4 = (param_3->AllocatorInstance).Data;
            *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0xc) = local_58;
            *(float *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_50;
            uVar13 = local_res18;
          } while ((int)uVar7 < (this->FrequenciesToAnalyze).ArrayNum);
        }
        AlgoImpl::
        IntroSortInternal<FSoundWaveSpectralData,int,FIdentityFunctor,TDereferenceWrapper<FSoundWaveSpectralData,FCompareSpectralDataByFrequencyHz>_>
                  ((FSoundWaveSpectralData *)(param_3->AllocatorInstance).Data,param_3->ArrayNum,
                   local_res18._0_1_,(FCompareSpectralDataByFrequencyHz *)local_res8);
        return uVar13;
      }
      lVar15 = lVar15 + 0x18;
      uVar14 = (ulonglong)uVar12;
      local_res18 = uVar12;
    } while ((int)uVar12 < iVar8);
  }
  return 0xffffffff;
}

// GetLoadingBehavior @ 1486c0a70

ESoundWaveLoadingBehavior __thiscall USoundWave::GetLoadingBehavior(USoundWave *this,bool param_1)

{
  TSharedPtr<FSoundWaveData,1> *pTVar1;
  FSoundWaveData *pFVar2;
  code *pcVar3;
  bool bVar4;
  ESoundWaveLoadingBehavior EVar5;
  int iVar6;
  undefined1 local_res10 [8];
  FString local_18;
  
  if (param_1) {
    if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    if (((this->SoundWaveDataPtr).Object)->LoadingBehavior == Uninitialized) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bCheckSoundClasses || SoundWaveDataPtr->LoadingBehavior != ESoundWaveLoadingBehavior::Uninitialized"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x1449,
                         L"Calling GetLoadingBehavior() is only valid if bCheckSoundClasses is false (which it %s) or CacheInheritedLoadingBehavior has already been called on the game thread. (SoundWave: %s)"
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
  }
  pTVar1 = &this->SoundWaveDataPtr;
  if ((pTVar1->Object == (FSoundWaveData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x144b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  if (param_1) {
    if ((pTVar1->Object == (FSoundWaveData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    if (pTVar1->Object->LoadingBehavior == Uninitialized) {
      CacheInheritedLoadingBehavior(this);
    }
    if ((pTVar1->Object == (FSoundWaveData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    if ((pTVar1->Object->LoadingBehavior == Inherited) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5972747921735554150>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                           ,0x1466,
                           "SoundWaveDataPtr->LoadingBehavior != ESoundWaveLoadingBehavior::Inherited"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    pFVar2 = (this->SoundWaveDataPtr).Object;
  }
  else {
    if (this->LoadingBehavior != Inherited) {
      if ((pTVar1->Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      if (pTVar1->Object->bLoadingBehaviorOverridden == '\0') {
        return this->LoadingBehavior;
      }
    }
    if ((pTVar1->Object == (FSoundWaveData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    pFVar2 = pTVar1->Object;
    if (pFVar2->bLoadingBehaviorOverridden == '\0') {
      if (2 < SoundWaveDefaultLoadingBehaviorCVar - 1U) {
        `SoundWave_Private::GetDefaultLoadingBehaviorCVar'::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      iVar6 = 3;
      if (SoundWaveDefaultLoadingBehaviorCVar < 3) {
        iVar6 = SoundWaveDefaultLoadingBehaviorCVar;
      }
      if (iVar6 < 2) {
        return RetainOnLoad;
      }
      return (ESoundWaveLoadingBehavior)iVar6;
    }
  }
  if ((pFVar2 == (FSoundWaveData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  return ((this->SoundWaveDataPtr).Object)->LoadingBehavior;
}

// GetLoopRegions @ 1486c0dc0

TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> * __thiscall
USoundWave::GetLoopRegions
          (USoundWave *this,
          TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FSoundWaveData *pFVar2;
  FSoundWaveCuePoint *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar2 = (this->SoundWaveDataPtr).Object;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar2->LoopRegions).ArrayNum;
  pFVar3 = (FSoundWaveCuePoint *)(pFVar2->LoopRegions).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar1);
  return __return_storage_ptr__;
}

// GetNumChunks @ 1486c2990

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall USoundWave::GetNumChunks(USoundWave *this)

{
  FSoundWaveData *pFVar1;
  bool bVar2;
  uint uVar3;
  UPackage *pUVar4;
  wchar_t *pwVar5;
  int *piVar6;
  USoundWave *local_res8;
  
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1 != (FSoundWaveData *)0x0) {
    uVar3 = FStreamedAudioPlatformData::GetNumChunks(&pFVar1->RunningPlatformData);
    return uVar3;
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return 0;
  }
  pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  if (((uint)pUVar4->PackageFlagsPrivate >> 0x1e & 1) != 0) goto LAB_1486c2a3f;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar5 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar5,L"nosound");
    if (bVar2) {
      pwVar5 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar5,L"enablesound");
      if (bVar2) goto LAB_1486c2aac;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486c2aac:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*piVar6 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    local_res8 = this;
    `USoundWave::GetNumChunks'::__l33::<lambda_1>::operator()(&local_res8);
    return 0;
  }
LAB_1486c2a3f:
  if (5 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  return 0;
}

// GetNumFrames @ 1486c2ba0

uint __thiscall USoundWave::GetNumFrames(USoundWave *this)

{
  FSoundWaveData *pFVar1;
  
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1 != (FSoundWaveData *)0x0) {
    return pFVar1->NumFrames;
  }
  return 0;
}

// GetPlatformCompressionOverridesForCurrentPlatform @ 1486c3750

FPlatformAudioCookOverrides * __cdecl
USoundWave::GetPlatformCompressionOverridesForCurrentPlatform(void)

{
  FPlatformAudioCookOverrides *pFVar1;
  
  pFVar1 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
  return pFVar1;
}

// GetPlatformSpecificFormat @ 1486c3790

FName __cdecl
USoundWave::GetPlatformSpecificFormat(FName param_1,FPlatformAudioCookOverrides *param_2)

{
  FName FVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FPlatformAudioCookOverrides *in_R8;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = (FName)param_2;
  if (in_R8 == (FPlatformAudioCookOverrides *)0x0) {
    in_R8 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
  }
  if (local_res10.ComparisonIndex.Value.Value == CachedFormat.ComparisonIndex.Value) {
    if (local_res10.Number == CachedFormat.Number) {
      *(FName *)param_1 = PlatformSpecificFormat;
      return param_1;
    }
  }
  FVar1 = local_res10;
  if (in_R8 != (FPlatformAudioCookOverrides *)0x0) {
    pFVar2 = ::FName::ToString(&local_res10,&local_18);
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,pwVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FPlatformAudioCookOverrides::GetHashSuffix(in_R8,&local_28);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar4.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar4.Data);
    PlatformSpecificFormat = local_res8;
    FVar1 = PlatformSpecificFormat;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar1 = PlatformSpecificFormat;
    }
  }
  PlatformSpecificFormat = FVar1;
  *(FName *)param_1 = PlatformSpecificFormat;
  CachedFormat = local_res10;
  return param_1;
}

// GetPrivateStaticClass @ 1486c5b20

UClass * __cdecl USoundWave::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundWave.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWave",&Z_Registration_Info_UClass_USoundWave.InnerSingleton,
               StaticRegisterNativesUSoundWave,0x408,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundWave>,InternalVTableHelperCtorCaller<USoundWave>,
               local_res8,USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWave.InnerSingleton;
}

// GetResourceData @ 1486c6480

uchar * __thiscall USoundWave::GetResourceData(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x30a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return (((this->SoundWaveDataPtr).Object)->ResourceData).View.DataPtr;
}

// GetResourceSize @ 1486c65b0

int __thiscall USoundWave::GetResourceSize(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x304,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->ResourceSize;
}

// GetResourceSizeEx @ 1486c6880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundWave::GetResourceSizeEx(USoundWave *this,FResourceSizeEx *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FAudioDevice *pFVar5;
  FPlatformAudioCookOverrides *pFVar6;
  ulong64 uVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x40b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (GEngine == (UEngine *)0x0) {
    return;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x408);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->FrequenciesToAnalyze).ArrayNum << 2);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->CookedSpectralTimeData).ArrayNum * 0x18);
  iVar2 = (this->CookedSpectralTimeData).ArrayNum;
  pFVar9 = (this->CookedSpectralTimeData).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->CookedSpectralTimeData).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoundWaveSpectralTimeData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)*(int *)(pFVar9 + 8) << 3);
    pFVar9 = pFVar9 + 0x18;
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->CookedEnvelopeTimeData).ArrayNum << 3);
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ <= *piVar10) ||
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_1486c69a8;
  pwVar8 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar8,L"nosound");
  if (bVar4) {
    pwVar8 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar8,L"enablesound");
    if (bVar4) goto LAB_1486c6b0c;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_1486c6b0c:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_1486c69a8:
  if ((*piVar10 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(((this->SoundWaveDataPtr).Object)->ZerothChunkData).View.ArrayNum);
  }
  pFVar5 = UEngine::GetMainAudioDeviceRaw(GEngine);
  if (pFVar5 != (FAudioDevice *)0x0) {
    if (((this->DecompressionType).Value == '\x02') &&
       (this->CachedRealtimeFirstBuffer != (uchar *)0x0)) {
      FResourceSizeEx::AddDedicatedSystemMemoryBytes
                (param_1,(ulonglong)(uint)(this->NumChannels * 0x2580));
    }
    bVar4 = IsStreaming(this,(wchar_t *)0x0);
    if (!bVar4) {
      pFVar6 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
      if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = GetCompressedDataSize(this,((this->SoundWaveDataPtr).Object)->RuntimeFormat,pFVar6);
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar7);
    }
  }
  return;
}

// GetResourceSizeForFormat @ 1486c6d60

int __thiscall USoundWave::GetResourceSizeForFormat(USoundWave *this,FName param_1)

{
  FPlatformAudioCookOverrides *pFVar1;
  ulong64 uVar2;
  
  pFVar1 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
  uVar2 = GetCompressedDataSize(this,param_1,pFVar1);
  return (int)uVar2;
}

// GetRunningPlatform @ 1486c6ff0

ITargetPlatform * __cdecl USoundWave::GetRunningPlatform(void)

{
  ITargetPlatformManagerModule *pIVar1;
  ITargetPlatform *pIVar2;
  
  pIVar1 = GetTargetPlatformManager(true);
  if (pIVar1 != (ITargetPlatformManagerModule *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486c7011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar2 = (ITargetPlatform *)
             (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,*(code **)((longlong)*pIVar1 + 0xa8));
    return pIVar2;
  }
  return (ITargetPlatform *)0x0;
}

// GetRuntimeFormat @ 1486c70a0

FName __thiscall USoundWave::GetRuntimeFormat(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(FName *)in_RDX = ((this->SoundWaveDataPtr).Object)->RuntimeFormat;
  return in_RDX;
}

// GetSampleRateForCompressionOverrides @ 1486c7190

float __thiscall
USoundWave::GetSampleRateForCompressionOverrides
          (USoundWave *this,FPlatformAudioCookOverrides *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  pfVar3 = TMapBase<enum_ESoundwaveSampleRateSettings,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ESoundwaveSampleRateSettings,float,0>_>
           ::Find(&param_1->PlatformSampleRates,this->SampleRateQuality);
  if ((pfVar3 != (float *)0x0) && (fVar1 = *pfVar3, 0.0 < fVar1)) {
    fVar2 = (float)this->SampleRate;
    if (fVar1 <= (float)this->SampleRate) {
      fVar2 = fVar1;
    }
    return fVar2;
  }
  return __real_bf800000;
}

// GetSampleRateForCurrentPlatform @ 1486c71f0

float __thiscall USoundWave::GetSampleRateForCurrentPlatform(USoundWave *this)

{
  undefined1 uVar1;
  float fVar2;
  
  if (this->bProcedural != 0) {
    if (0 < this->SampleRate) {
      return (float)this->SampleRate;
    }
    return __real_473b8000;
  }
  uVar1 = this->field_0x365;
  if (this->bCachedSampleRateFromPlatformSettings != '\0') {
    return this->CachedSampleRateOverride;
  }
  if (this->bSampleRateManuallyReset != '\0') {
    this->field_0x365 = uVar1 | 4;
    this->CachedSampleRateOverride = (float)this->SampleRate;
    return (float)this->SampleRate;
  }
  fVar2 = FPlatformCompressionUtilities::GetTargetSampleRateForPlatform(this->SampleRateQuality);
  this->CachedSampleRateOverride = fVar2;
  if ((fVar2 < 0.0) || ((float)this->SampleRate < fVar2)) {
    fVar2 = (float)this->SampleRate;
    this->CachedSampleRateOverride = fVar2;
  }
  this->bCachedSampleRateFromPlatformSettings = '\x01';
  return fVar2;
}

// GetSizeOfChunk @ 1486c76e0

uint __thiscall USoundWave::GetSizeOfChunk(USoundWave *this,uint param_1)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TIndirectArray<FStreamedAudioChunk,TSizedDefaultAllocator<32>_> *pTVar5;
  
  uVar4 = GetNumChunks(this);
  if (uVar4 <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChunkIndex < GetNumChunks()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x9b4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1 != (FSoundWaveData *)0x0) {
    pTVar5 = FStreamedAudioPlatformData::GetChunks(&pFVar1->RunningPlatformData);
    uVar4 = 0;
    if ((int)param_1 < (pTVar5->Array).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    return *(uint *)(*(longlong *)
                      ((pTVar5->Array).AllocatorInstance.Data + (longlong)(int)param_1 * 8) + 4);
  }
  return 0;
}

// GetSoundAssetCompressionType @ 1486c7bf0

ESoundAssetCompressionType __thiscall USoundWave::GetSoundAssetCompressionType(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  ESoundAssetCompressionType EVar3;
  UClass *this_00;
  
  EVar3 = this->SoundAssetCompressionType;
  if ((this->SoundAssetCompressionType == ProjectDefined) &&
     (EVar3 = DefaultAudioCompressionType, !bDefaultCompressionTypeCached)) {
    this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    switch((this_00->ClassDefaultObject).field0_0x0.DebugPtr[8].field_0x1c) {
    case 0:
      bDefaultCompressionTypeCached = true;
      DefaultAudioCompressionType = BinkAudio;
      return BinkAudio;
    case 1:
      DefaultAudioCompressionType = ADPCM;
      bDefaultCompressionTypeCached = true;
      return ADPCM;
    case 2:
      bDefaultCompressionTypeCached = true;
      DefaultAudioCompressionType = PCM;
      return PCM;
    case 3:
      bDefaultCompressionTypeCached = true;
      DefaultAudioCompressionType = Opus;
      return Opus;
    case 4:
      goto switchD_1486c7c58_caseD_4;
    case 5:
      bDefaultCompressionTypeCached = true;
      DefaultAudioCompressionType = RADAudio;
      return RADAudio;
    default:
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7061353171553091185>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundWave.h"
                         ,399,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
switchD_1486c7c58_caseD_4:
      bDefaultCompressionTypeCached = true;
      DefaultAudioCompressionType = PlatformSpecific;
      return PlatformSpecific;
    }
  }
  return EVar3;
}

// GetSoundAssetCompressionTypeEnum @ 1486c7d30

ESoundAssetCompressionType __thiscall USoundWave::GetSoundAssetCompressionTypeEnum(USoundWave *this)

{
  return this->SoundAssetCompressionType;
}

// GetSoundWavesWithCookedAnalysisData @ 1486c8280

bool __thiscall
USoundWave::GetSoundWavesWithCookedAnalysisData
          (USoundWave *this,TArray<USoundWave_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  USoundWave *local_18 [2];
  
  if (((this->CookedSpectralTimeData).ArrayNum < 1) && ((this->CookedEnvelopeTimeData).ArrayNum < 1)
     ) {
    return false;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(USoundWave **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return true;
}

// GetSubtitlePriority @ 1486c8b70

float __thiscall USoundWave::GetSubtitlePriority(USoundWave *this)

{
  return this->SubtitlePriority;
}

// GetZerothChunk @ 1486c9fb0

TArrayView<unsigned_char_const_,int> * __thiscall
USoundWave::GetZerothChunk
          (USoundWave *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSoundWaveData *pFVar5;
  TArrayView<unsigned_char_const_,int> *pTVar6;
  TSharedPtr<FSoundWaveProxy,1> *pTVar7;
  FStreamingManagerCollection *pFVar8;
  IAudioStreamingManager *pIVar9;
  uchar *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  int *piVar13;
  uint in_stack_ffffffffffffff58;
  TSharedPtr<FSoundWaveProxy,1> local_88;
  TSharedPtr<FSoundWaveProxy,1> local_78;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  FAudioChunkHandle local_38;
  
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar3) goto LAB_1486ca267;
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar11 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar11,L"nosound");
    if (bVar3) {
      pwVar11 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar11,L"enablesound");
      if (bVar3) goto LAB_1486ca2f0;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486ca2f0:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*piVar13 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    bVar3 = ShouldUseStreamCaching(this);
    if (!bVar3) {
      if ((this->Proxy).Object == (FSoundWaveProxy *)0x0) {
        pTVar7 = CreateSoundWaveProxy(this,&local_78);
        TSharedPtr<FSoundWaveProxy,1>::operator=(&this->Proxy,pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      pFVar8 = IStreamingManager::Get();
      pIVar9 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar8);
      (**(code **)(*(longlong *)pIVar9 + 0xb0))
                (pIVar9,&local_38,&this->Proxy,0,in_stack_ffffffffffffff58 & 0xffffff00,0);
      uVar4 = FAudioChunkHandle::Num(&local_38);
      puVar10 = FAudioChunkHandle::GetData(&local_38);
      TArrayView<unsigned_char_const_,int>::
      TArrayView<unsigned_char_const_,int><unsigned_char_const_>
                (__return_storage_ptr__,puVar10,uVar4);
      FAudioChunkHandle::~FAudioChunkHandle(&local_38);
      return __return_storage_ptr__;
    }
    pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
    if (((pFVar5->ZerothChunkData).View.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SoundWaveDataPtr->GetZerothChunkData().GetView().Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                           ,0x104c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
    uVar4 = GetNumChunks(this);
    if (1 < uVar4) {
      if ((this->Proxy).Object == (FSoundWaveProxy *)0x0) {
        pTVar7 = CreateSoundWaveProxy(this,&local_88);
        TSharedPtr<FSoundWaveProxy,1>::operator=(&this->Proxy,pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
      }
      pFVar8 = IStreamingManager::Get();
      pIVar9 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar8);
      local_40 = 0;
      local_58 = &
                 ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_50 = `USoundWave::GetZerothChunk'::__l21::<lambda_1>::<lambda_invoker_cdecl>;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                    ::Call;
      (**(code **)(*(longlong *)pIVar9 + 0xa8))(pIVar9,&this->Proxy,1,local_68,0xff,param_1);
    }
    pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
    puVar10 = (pFVar5->ZerothChunkData).View.DataPtr;
    lVar1 = (pFVar5->ZerothChunkData).View.ArrayNum;
    if ((0x7fffffff < lVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("View.Num() <= ((int32) 0x7fffffff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                           ,0x1059,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
    iVar12 = (int)lVar1;
    if ((iVar12 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<unsigned_char_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
    __return_storage_ptr__->DataPtr = puVar10;
    __return_storage_ptr__->ArrayNum = iVar12;
    return __return_storage_ptr__;
  }
LAB_1486ca267:
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// HandleStart @ 1486ca770

FWaveInstance * __thiscall
USoundWave::HandleStart(USoundWave *this,FActiveSound *param_1,ulong64 param_2)

{
  FWaveInstance *pFVar1;
  FQueueSubtitleParams local_48;
  
  pFVar1 = FActiveSound::AddWaveInstance(param_1,param_2);
  if ((param_1->bHandleSubtitles != '\0') &&
     (local_48.Subtitles = &this->Subtitles, 0 < (this->Subtitles).ArrayNum)) {
    local_48.AudioComponentID = param_1->AudioComponentID;
    local_48.SubtitlePriority = param_1->SubtitlePriority;
    local_48.Duration = *(float *)((longlong)&this->_padding_ + 4);
    local_48.WorldPtr.WeakPtr = (param_1->World).WeakPtr;
    local_48._32_1_ = (byte)this->field_0x364 >> 6 | local_48._32_1_ & 0xfc;
    local_48.RequestedStartTime = param_1->RequestedStartTime;
    local_48.WaveInstance = (long64)pFVar1;
    FSubtitleManager::QueueSubtitles(&local_48);
  }
  return pFVar1;
}

// HasCompressedData @ 1486cac20

bool __thiscall
USoundWave::HasCompressedData(USoundWave *this,FName param_1,ITargetPlatform *param_2)

{
  bool bVar1;
  FPlatformAudioCookOverrides *pFVar2;
  FString *pFVar3;
  FSoundWaveData *pFVar4;
  TBulkData<unsigned_char> **ppTVar5;
  wchar_t *pwVar6;
  FName FVar7;
  ForAnyElementType FVar8;
  FName local_res10;
  FName local_res20;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    pFVar2 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
    if (pFVar2 == (FPlatformAudioCookOverrides *)0x0) {
      pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
      FVar7 = local_res10;
    }
    else {
      if ((local_res10.ComparisonIndex.Value != CachedFormat.ComparisonIndex.Value) ||
         (local_res10.Number != CachedFormat.Number)) {
        pFVar3 = ::FName::ToString(&local_res10,&local_18);
        if ((pFVar3->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_28,pwVar6);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        FPlatformAudioCookOverrides::GetHashSuffix(pFVar2,&local_28);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar8.Data = local_28.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res20,(wchar_t *)FVar8.Data);
        PlatformSpecificFormat = local_res20;
        CachedFormat = local_res10;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
      FVar7 = PlatformSpecificFormat;
    }
    ppTVar5 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(pFVar4->CompressedFormatData).Formats,FVar7);
    return ppTVar5 != (TBulkData<unsigned_char> **)0x0;
  }
  return false;
}

// HasCookedAmplitudeEnvelopeData @ 1486cafa0

bool __thiscall USoundWave::HasCookedAmplitudeEnvelopeData(USoundWave *this)

{
  return 0 < (this->CookedEnvelopeTimeData).ArrayNum;
}

// HasCookedFFTData @ 1486cb160

bool __thiscall USoundWave::HasCookedFFTData(USoundWave *this)

{
  return 0 < (this->CookedSpectralTimeData).ArrayNum;
}

// HasError @ 1486cb240

bool __thiscall USoundWave::HasError(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x159e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bHasError;
}

// HasStreamingChunks @ 1486cb640

bool __thiscall USoundWave::HasStreamingChunks(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ESoundWaveLoadingBehavior EVar4;
  int iVar5;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x8a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  EVar4 = GetLoadingBehavior(this,false);
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar5 = FStreamedAudioPlatformData::GetNumChunks
                    (&((this->SoundWaveDataPtr).Object)->RunningPlatformData);
  if ((EVar4 != ForceInline) && (0 < iVar5)) {
    return true;
  }
  return false;
}

// InitAudioResource @ 1486cbd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundWave::InitAudioResource(USoundWave *this,TBulkData<unsigned_char> *param_1)

{
  TSharedPtr<FSoundWaveData,1> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  FSoundWaveData *pFVar5;
  FSoundWaveData *pFVar6;
  FOwnedBulkDataPtr *pFVar7;
  FLLMScope local_res8 [5];
  uchar *local_res18;
  FMemScope local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FLLMScope::FLLMScope(local_res8,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AudioSoundWaves,true);
  this_00 = &this->SoundWaveDataPtr;
  if (this_00->Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x9ec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this_00->Object->ResourceSize == 0) {
    lVar4 = FBulkData::GetBulkDataSize((FBulkData *)param_1);
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00->Object->ResourceSize = (int)lVar4;
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (0 < this_00->Object->ResourceSize) {
      if ((this_00->Object == (FSoundWaveData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this_00->Object->ResourceData).View.DataPtr == (uchar *)0x0) {
        local_res18 = (uchar *)0x0;
        uVar3 = FBulkData::GetBulkDataFlags((FBulkData *)param_1);
        if ((uVar3 >> 0x1e & 1) == 0) {
          pFVar7 = FBulkData::FAllocatedPtr::StealFileMapping
                             ((FAllocatedPtr *)param_1,(FBulkData *)param_1);
          local_res18 = FOwnedBulkDataPtr::GetPointer(pFVar7);
        }
        else {
          FBulkData::GetCopy((FBulkData *)param_1,&local_res18,false);
        }
        pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
        pFVar6 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
        FBulkDataBuffer<unsigned_char>::Reset
                  (&pFVar5->ResourceData,local_res18,(longlong)pFVar6->ResourceSize);
        if (local_res18 != (uchar *)0x0) goto LAB_1486cc0af;
        if (1 < (byte)LogAudio._0_1_) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        FBulkData::ForceBulkDataResident((FBulkData *)param_1);
        uVar3 = FBulkData::GetBulkDataFlags((FBulkData *)param_1);
        if ((uVar3 >> 0x1e & 1) == 0) {
          pFVar7 = FBulkData::FAllocatedPtr::StealFileMapping
                             ((FAllocatedPtr *)param_1,(FBulkData *)param_1);
          local_res18 = FOwnedBulkDataPtr::GetPointer(pFVar7);
        }
        else {
          FBulkData::GetCopy((FBulkData *)param_1,&local_res18,false);
        }
        pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
        pFVar6 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
        FBulkDataBuffer<unsigned_char>::Reset
                  (&pFVar5->ResourceData,local_res18,(longlong)pFVar6->ResourceSize);
        if (local_res18 != (uchar *)0x0) goto LAB_1486cc0af;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
      else {
        if ((byte)LogAudio._0_1_ < 4) goto LAB_1486cc0af;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_1486cc0af:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// InitAudioResource @ 1486cc0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USoundWave::InitAudioResource(USoundWave *this,FName param_1)

{
  TSharedPtr<FSoundWaveData,1> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ITargetPlatformManagerModule *pIVar5;
  undefined8 uVar6;
  FPlatformAudioCookOverrides *pFVar7;
  longlong lVar8;
  FSoundWaveData *pFVar9;
  FName local_res10;
  undefined1 auStackY_138 [32];
  FLLMScope local_108;
  FName local_104;
  FMemScope local_f8;
  FString local_f0;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_res10 = param_1;
  FLLMScope::FLLMScope(&local_108,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&local_f8,AudioSoundWaves,true);
  this_00 = &this->SoundWaveDataPtr;
  if (this_00->Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0xa2b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this_00->Object->ResourceSize == 0) && (bVar3 = IsStreaming(this,(wchar_t *)0x0), !bVar3)) {
    pcVar2 = *(code **)(this->_padding_ + 0x408);
    pIVar5 = GetTargetPlatformManager(true);
    uVar6 = 0;
    if (pIVar5 != (ITargetPlatformManagerModule *)0x0) {
      uVar6 = (**(code **)((longlong)*pIVar5 + 0xa8))();
    }
    pFVar7 = FPlatformCompressionUtilities::GetCookOverrides((wchar_t *)0x0,false);
    lVar8 = (*pcVar2)(this,local_res10,pFVar7,uVar6);
    if (lVar8 == 0) {
      if (2 < (byte)LogAudio._0_1_) {
        local_d8.Base = local_b8;
        local_d8.bIsDynamic = false;
        local_d8.bIsExternal = false;
        local_d8.CurPos = local_b8;
        local_d8.End = (wchar_t *)local_38;
        ::FName::AppendString(&local_res10,&local_d8);
        if (local_d8.End < local_d8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
        }
        *local_d8.CurPos = L'\0';
        local_104 = (FName)this->_padding_;
        ::FName::ToString(&local_104,&local_f0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x3e0))(this,lVar8);
      pFVar9 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
      if ((pFVar9->ResourceSize < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SoundWaveDataPtr->ResourceSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                             ,0xa3c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if ((this_00->Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar1 = this_00->Object->ResourceSize;
  FMemScope::~FMemScope(&local_f8);
  FLLMScope::~FLLMScope(&local_108);
  return 0 < iVar1;
}

// InvalidateCompressedData @ 1486d0be0

void __thiscall USoundWave::InvalidateCompressedData(USoundWave *this,bool param_1,bool param_2)

{
  FSoundWaveData *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  FGuid *pFVar8;
  bool bVar9;
  FGuid local_18;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2109,"USoundWave::InvalidateCompressedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
               ,0x83d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2109);
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x83f,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = FGuid::NewGuid(&local_18);
  uVar4 = pFVar8->B;
  uVar5 = pFVar8->C;
  uVar6 = pFVar8->D;
  (this->CompressedDataGuid).A = pFVar8->A;
  (this->CompressedDataGuid).B = uVar4;
  (this->CompressedDataGuid).C = uVar5;
  (this->CompressedDataGuid).D = uVar6;
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  puVar2 = (pFVar1->ZerothChunkData).View.DataPtr;
  if (puVar2 != (uchar *)0x0) {
    FMemory::Free(puVar2);
  }
  (pFVar1->ZerothChunkData).View.DataPtr = (uchar *)0x0;
  (pFVar1->ZerothChunkData).View.ArrayNum = 0;
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FFormatContainer::FlushData(&((this->SoundWaveDataPtr).Object)->CompressedFormatData);
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0xa4a,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((this->SoundWaveDataPtr).Object)->ResourceSize = 0;
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  puVar2 = (pFVar1->ResourceData).View.DataPtr;
  if (puVar2 != (uchar *)0x0) {
    FMemory::Free(puVar2);
  }
  (pFVar1->ResourceData).View.DataPtr = (uchar *)0x0;
  (pFVar1->ResourceData).View.ArrayNum = 0;
  if (param_1) {
    FreeResources(this,false);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsPlayable @ 1486d1620

bool __thiscall USoundWave::IsPlayable(USoundWave *this)

{
  return true;
}

// IsReadyForFinishDestroy @ 1486d1640

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USoundWave::IsReadyForFinishDestroy(USoundWave *this)

{
  FMutex *this_00;
  FScriptContainerElement *pFVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  FName *pFVar7;
  TStatId TVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  FName local_res20;
  FName local_88 [2];
  code *local_78 [2];
  undefined **local_68;
  USoundWave *local_60;
  undefined8 local_50;
  
  this_00 = &this->SourcesPlayingCs;
  LOCK();
  bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar9 = (this->SourcesPlaying).AllocatorInstance.Data;
  iVar3 = (this->SourcesPlaying).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->SourcesPlaying).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ISoundWaveClient_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    plVar4 = *(longlong **)pFVar9;
    if ((plVar4 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoundWaveClientPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                            ,0xddc,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,this);
    pFVar9 = pFVar9 + 8;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  LOCK();
  bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar9 = (this->SourcesPlaying).AllocatorInstance.Data;
  iVar3 = (this->SourcesPlaying).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->SourcesPlaying).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<ISoundWaveClient_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar1) break;
    plVar4 = *(longlong **)pFVar9;
    if ((plVar4 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoundWaveClientPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                            ,0xde7,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,this);
    pFVar9 = pFVar9 + 8;
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  if (((this->PrecacheState).Counter == 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetPrecacheState() != ESoundWavePrecacheState::InProgress",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                          ,0xdec,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return (bool)uVar6;
  }
  if (this->ResourceState == NeedsFree) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      if (StatPtr_STAT_AudioFreeResources ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_USoundWave::IsReadyForFinishDestroy(void)_::_36_::FStat_STAT_AudioFreeResources>
           )0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_AudioFreeResources");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFreeResources,*pFVar7,
                   L"FAudioThreadTask.FreeResources","STATGROUP_AudioThreadCommands",
                   "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                   MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS2);
    }
    this->field_0x365 = this->field_0x365 & 0xdf;
    this->field_0x365 = this->field_0x365 | 0x10;
    TVar8.StatIdPtr = (TStatIdData *)StatPtr_STAT_AudioFreeResources;
    if (StatPtr_STAT_AudioFreeResources ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_USoundWave::IsReadyForFinishDestroy(void)_::_36_::FStat_STAT_AudioFreeResources>
         )0x0) {
      pFVar7 = ::FName::FName(local_88,"STAT_AudioFreeResources");
      TVar8.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFreeResources,*pFVar7,
                      L"FAudioThreadTask.FreeResources","STATGROUP_AudioThreadCommands",
                      "STATCAT_Advanced",L"Audio Thread Commands",true,true,ST_int64,true,false,
                      MCR_Invalid);
    }
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USoundWave::IsReadyForFinishDestroy'::`36'::<lambda_1>,1,0>::
                _vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundWave::IsReadyForFinishDestroy'::__l36::<lambda_1>,void>
                  ::Call;
    local_60 = this;
    FAudioThread::RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_78,TVar8);
  }
  return this->ResourceState == Freed;
}

// IsRetainingAudio @ 1486d1a40

bool __thiscall USoundWave::IsRetainingAudio(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x12b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FAudioChunkHandle::IsValid(&((this->SoundWaveDataPtr).Object)->FirstChunk);
  return bVar2;
}

// IsSeekable @ 1486d1c70

bool __thiscall USoundWave::IsSeekable(USoundWave *this)

{
  FSoundWaveData *pFVar1;
  
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1 != (FSoundWaveData *)0x0) {
    return pFVar1->bIsSeekable;
  }
  return false;
}

// IsStreaming @ 1486d2160

bool __thiscall USoundWave::IsStreaming(USoundWave *this,FPlatformAudioCookOverrides *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->bProcedural == 0) && (this->LoadingBehavior != ForceInline)) {
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    ((this->SoundWaveDataPtr).Object)->bIsStreaming = '\x01';
  }
  else {
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    ((this->SoundWaveDataPtr).Object)->bIsStreaming = '\0';
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bIsStreaming;
}

// IsStreaming @ 1486d2250

bool __thiscall USoundWave::IsStreaming(USoundWave *this,wchar_t *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  FSoundWaveData *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  
  if ((this->bProcedural == 0) && (this->LoadingBehavior != ForceInline)) {
    FPlatformCompressionUtilities::GetCookOverrides(param_1,false);
    if ((this->bProcedural == 0) && (this->LoadingBehavior != ForceInline)) {
      if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      ((this->SoundWaveDataPtr).Object)->bIsStreaming = '\x01';
    }
    else {
      if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      ((this->SoundWaveDataPtr).Object)->bIsStreaming = '\0';
    }
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar4 = (this->SoundWaveDataPtr).Object;
    bVar2 = pFVar4->field_0xe4;
    if (pFVar4 == (FSoundWaveData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    pFVar4 = (this->SoundWaveDataPtr).Object;
    bVar3 = pFVar4->field_0xe4;
    pFVar4->field_0xe4 = (bVar2 & 0xfc ^ bVar3) & 4 ^ bVar3;
  }
  else {
    if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    ((this->SoundWaveDataPtr).Object)->bIsStreaming = '\0';
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  return ((this->SoundWaveDataPtr).Object)->bIsStreaming;
}

// LoadZerothChunk @ 1486d2cb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USoundWave::LoadZerothChunk(USoundWave *this)

{
  TSharedPtr<FSoundWaveData,1> *this_00;
  int iVar1;
  int *piVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long64 lVar7;
  FSoundWaveData *pFVar8;
  FSoundWaveData *pFVar9;
  FString local_38;
  FBulkDataBuffer<unsigned_char> local_28;
  
  this_00 = &this->SoundWaveDataPtr;
  if ((this_00->Object == (FSoundWaveData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x972,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = ShouldUseStreamCaching(this);
  if (bVar5) {
    if ((this_00->Object == (FSoundWaveData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if ((this_00->Object->ZerothChunkData).View.ArrayNum < 1) {
      if ((this_00->Object == (FSoundWaveData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((this_00->Object->RunningPlatformData).Chunks.Array.ArrayNum < 1) {
        return false;
      }
      if ((this_00->Object == (FSoundWaveData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar8 = this_00->Object;
      if (((pFVar8->RunningPlatformData).Chunks.Array.ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      piVar2 = *(int **)(pFVar8->RunningPlatformData).Chunks.Array.AllocatorInstance.Data;
      if ((2 < (byte)LogAudio._0_1_) &&
         (iVar1 = *piVar2, lVar7 = FBulkData::GetBulkDataSize((FBulkData *)(piVar2 + 4)),
         lVar7 != iVar1)) {
        FBulkData::GetBulkDataSize((FBulkData *)(piVar2 + 4));
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pFVar8 = (FSoundWaveData *)
               TBulkData<unsigned_char>::GetCopyAsBuffer
                         ((TBulkData<unsigned_char> *)(piVar2 + 4),&local_28,(longlong)piVar2[1],
                          true);
      pFVar9 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
      if (pFVar9 != pFVar8) {
        puVar3 = (pFVar9->ZerothChunkData).View.DataPtr;
        if (puVar3 != (uchar *)0x0) {
          FMemory::Free(puVar3);
        }
        lVar7 = (pFVar8->ZerothChunkData).View.ArrayNum;
        (pFVar9->ZerothChunkData).View.DataPtr = (pFVar8->ZerothChunkData).View.DataPtr;
        (pFVar9->ZerothChunkData).View.ArrayNum = lVar7;
        (pFVar8->ZerothChunkData).View.DataPtr = (uchar *)0x0;
        (pFVar8->ZerothChunkData).View.ArrayNum = 0;
      }
      if (local_28.View.DataPtr != (uchar *)0x0) {
        FMemory::Free(local_28.View.DataPtr);
      }
    }
  }
  return true;
}

// OverrideLoadingBehavior @ 1486d7e40

void __thiscall
USoundWave::OverrideLoadingBehavior(USoundWave *this,ESoundWaveLoadingBehavior param_1)

{
  longlong lVar1;
  ESoundWaveLoadingBehavior EVar2;
  bool bVar3;
  uint uVar4;
  FSoundWaveData *pFVar5;
  UPackage *pUVar6;
  TSharedPtr<FSoundWaveProxy,1> *pTVar7;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar8;
  wchar_t *pwVar9;
  int *piVar10;
  bool bVar11;
  TSharedPtr<FSoundWaveProxy,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4791,"USoundWave::OverrideLoadingBehavior",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
               ,0x12b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4791);
  }
  if (this->LoadingBehavior == ForceInline) goto LAB_1486d808e;
  EVar2 = GetLoadingBehavior(this,false);
  lVar1 = this->_padding_;
  if (EVar2 < param_1) goto LAB_1486d808e;
  pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
  pFVar5->LoadingBehavior = param_1;
  pFVar5 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
  pFVar5->bLoadingBehaviorOverridden = '\x01';
  pUVar6 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  if (((uint)pUVar6->PackageFlagsPrivate >> 0x1e & 1) != 0) goto LAB_1486d808e;
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar9 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar9,L"nosound");
    if (bVar3) {
      pwVar9 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar9,L"enablesound");
      if (bVar3) goto LAB_1486d811c;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486d811c:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*piVar10 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
         bApplicationTypeDoesNotRenderAudio != false) ||
       (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
        != false)) || ((lVar1 & 0x400) != 0)) || (bVar3 = IsStreaming(this,(wchar_t *)0x0), !bVar3))
  goto LAB_1486d808e;
  if (param_1 == RetainOnLoad) {
    UObject::ConditionalPostLoad((UObject *)this);
    RetainCompressedAudio(this,false);
    goto LAB_1486d808e;
  }
  if ((param_1 != PrimeOnLoad) || (uVar4 = GetNumChunks(this), uVar4 < 2)) goto LAB_1486d808e;
  if ((*piVar10 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar9 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar9,L"nosound");
    if (bVar3) {
      pwVar9 = FCommandLine::Get();
      bVar3 = FParse::Param(pwVar9,L"enablesound");
      if (bVar3) goto LAB_1486d81d3;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486d81d3:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*piVar10 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    if ((this->Proxy).Object == (FSoundWaveProxy *)0x0) {
      pTVar7 = CreateSoundWaveProxy(this,&local_48);
      TSharedPtr<FSoundWaveProxy,1>::operator=(&this->Proxy,pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    this_00 = IStreamingManager::Get();
    pIVar8 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `USoundWave::OverrideLoadingBehavior'::__l27::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                  ::Call;
    (**(code **)(*(longlong *)pIVar8 + 0xa8))(pIVar8,&this->Proxy,1,local_38,0xff,0);
  }
LAB_1486d808e:
  if (!bVar11) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Parse @ 1486d88e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USoundWave::Parse(USoundWave *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
                 FSoundParseParameters *param_4,
                 TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  short sVar2;
  wchar_t wVar3;
  undefined4 uVar4;
  USoundEffectSourcePresetChain *pUVar5;
  USoundBase *pUVar6;
  USoundClass *pUVar7;
  USoundSubmix *pUVar8;
  FNotifyBufferDetails *pFVar9;
  FSoundSourceBusSendInfo *pFVar10;
  USoundWave *pUVar11;
  ulong64 uVar12;
  code *pcVar13;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  ELoopingMode EVar18;
  int iVar19;
  FWaveInstance *pFVar20;
  float *pfVar21;
  FSoundClassProperties *pFVar22;
  UAudioSettings *pUVar23;
  UClass *pUVar24;
  USoundSubmixBase *pUVar25;
  FRichCurve *this_00;
  FString *pFVar26;
  UObject *pUVar27;
  byte bVar28;
  ELoopingMode EVar29;
  uint uVar30;
  uint uVar31;
  wchar_t *pwVar32;
  ForElementType<FSetElementId> FVar33;
  ForAnyElementType FVar34;
  int iVar35;
  int iVar36;
  FScriptContainerElement *pFVar37;
  FNotifyBufferFinishedHooks *pFVar38;
  TArray<FSoundSourceBusSendInfo,TSizedDefaultAllocator<32>_> *pTVar39;
  FScriptContainerElement *pFVar40;
  FAudioDevice *pFVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  undefined1 in_XMM2 [16];
  undefined1 auVar46 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar47 [16];
  undefined1 auStackY_428 [32];
  FWaveInstance *local_3d8;
  undefined1 local_3d0 [8];
  float local_3c8;
  FAudioDevice *local_3c0;
  ulong64 local_3b8;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  int local_3a0;
  FWaveInstance *local_398;
  FString local_390;
  FSoftObjectPath local_380;
  FSoftObjectPath local_360;
  USoundEffectSourcePresetChain *local_340;
  FActiveSound *local_338;
  FName local_330;
  FName local_328;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_320;
  ulong64 local_318;
  UObject *local_310;
  LARGE_INTEGER local_308;
  UObject *local_300;
  LARGE_INTEGER local_2f8;
  LARGE_INTEGER local_2f0;
  LARGE_INTEGER local_2e8;
  FName local_2e0;
  FName local_2d8;
  USoundWave *local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  undefined1 local_238 [4];
  FName local_234;
  FScriptContainerElement *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FQueueSubtitleParams local_208;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  TPersistentObjectPtr<FSoftObjectPath> local_158;
  TStringView<wchar_t> local_128;
  double local_118;
  double dStack_110;
  double local_108;
  code *local_f8 [5];
  undefined8 *local_d0;
  FLogScope local_c8;
  FLogScope local_b8;
  uint *local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_320 = param_5;
  local_3c8 = 0.0;
  local_3c0 = param_1;
  local_338 = param_3;
  local_318 = param_2;
  if ((param_1 == (FAudioDevice *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioDevice",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                          ,0xe20,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_3d8 = FActiveSound::FindWaveInstance(param_3,param_2);
  local_398 = local_3d8;
  if (local_3d8 == (FWaveInstance *)0x0) {
    if (param_3->bRadioFilterSelected == '\0') {
      FActiveSound::ApplyRadioFilter(param_3,param_4);
    }
    pFVar20 = FActiveSound::AddWaveInstance(param_3,param_2);
    if ((param_3->bHandleSubtitles != '\0') && (0 < (this->Subtitles).ArrayNum)) {
      local_208.SubtitlePriority = param_3->SubtitlePriority;
      local_208.Subtitles = &this->Subtitles;
      local_208.Duration = *(float *)((longlong)&this->_padding_ + 4);
      local_208.AudioComponentID = param_3->AudioComponentID;
      local_208.WorldPtr.WeakPtr = (param_3->World).WeakPtr;
      local_208._32_1_ = (byte)this->field_0x364 >> 6 | local_208._32_1_ & 0xfc;
      local_208.RequestedStartTime = param_3->RequestedStartTime;
      local_208.WaveInstance = (long64)pFVar20;
      FSubtitleManager::QueueSubtitles(&local_208);
    }
  }
  else {
    pFVar20 = local_3d8;
    if ((((local_3d8->bIsFinished != 0) && ((char)(local_3d8->bAlreadyNotifiedHook << 7) < '\0')) &&
        (this->bProcedural != 0)) && (*(char *)((longlong)&this->_padding_ + 1) == '\0')) {
      return;
    }
  }
  local_3d8 = pFVar20;
  cVar16 = (**(code **)(this->_padding_ + 0x318))(this);
  if ((cVar16 == '\0') || (param_4->bLooping != '\0')) {
    local_3d8->bIsFinished = 0;
    cVar16 = (**(code **)(((param_3->Sound).field0_0x0.DebugPtr)->_padding_ + 0x318))();
    if ((cVar16 == '\0') &&
       (((!(bool)param_3->bWarnedAboutOrphanedLooping && (param_3->AudioComponentID == 0)) &&
        (param_3->FadeOut == None)))) {
      if (2 < (byte)LogAudio._0_1_) {
        local_234 = (FName)((param_3->Sound).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_234,&local_2c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
      }
      param_3->bWarnedAboutOrphanedLooping = '\x01';
    }
  }
  if (local_3d8->bIsFinished != 0) {
    return;
  }
  local_3d8->Volume = param_4->Volume * this->Volume;
  local_3d8->VolumeMultiplier = param_4->VolumeMultiplier;
  local_3d8->DistanceAttenuation = param_4->DistanceAttenuation;
  local_3d8->OcclusionAttenuation = param_4->OcclusionAttenuation;
  local_3d8->Pitch = param_4->Pitch * this->Pitch;
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)param_4->field_0x23c << 8 ^ *(uint *)&local_3d8->field_0xcc) & 0x400 ^
       *(uint *)&local_3d8->field_0xcc;
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)param_4->field_0x23c << 8 ^ *(uint *)&local_3d8->field_0xcc) & 0x800 ^
       *(uint *)&local_3d8->field_0xcc;
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)param_4->field_0x23c << 8 ^ *(uint *)&local_3d8->field_0xcc) & 0x1000 ^
       *(uint *)&local_3d8->field_0xcc;
  local_3d8->LowPassFilterFrequency = param_4->LowPassFilterFrequency;
  local_3d8->HighPassFilterFrequency = param_4->HighPassFilterFrequency;
  local_3d8->OcclusionFilterFrequency = param_4->OcclusionFilterFrequency;
  local_3d8->AttenuationLowpassFilterFrequency = param_4->AttenuationLowpassFilterFrequency;
  local_3d8->AttenuationHighpassFilterFrequency = param_4->AttenuationHighpassFilterFrequency;
  local_3d8->AmbientZoneFilterFrequency = param_4->AmbientZoneFilterFrequency;
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)param_3->field_0x1a2 << 2 ^ *(uint *)&local_3d8->field_0xcc) & 0x10 ^
       *(uint *)&local_3d8->field_0xcc;
  local_3d8->StartTime = param_4->StartTime;
  pfVar21 = TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
            ::Find(&param_3->SeekRestartTimes,local_3d8->WaveInstanceHash);
  if (pfVar21 != (float *)0x0) {
    pfVar21 = TSortedMap<unsigned___int64,float,TSizedDefaultAllocator<32>,TLess<unsigned___int64_const_>_>
              ::Find(&param_3->SeekRestartTimes,local_3d8->WaveInstanceHash);
    if ((pfVar21 == (float *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                            ,0x141,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    fVar42 = *pfVar21;
    if ((this->bProcedural == 0) &&
       ((param_4->bLooping != '\0' ||
        (cVar16 = (**(code **)(this->_padding_ + 0x310))(this), cVar16 != '\0')))) {
      fVar42 = FGenericPlatformMath::Fmod(fVar42,*(float *)((longlong)&this->_padding_ + 4));
      local_3d8->StartTime = fVar42;
    }
    else {
      local_3d8->StartTime = fVar42;
    }
  }
  local_3d8->UserIndex = param_3->UserIndex;
  local_3d8->NonSpatializedRadiusStart = param_4->NonSpatializedRadiusStart;
  local_3d8->NonSpatializedRadiusEnd = param_4->NonSpatializedRadiusEnd;
  local_3d8->NonSpatializedRadiusMode = param_4->NonSpatializedRadiusMode;
  local_3d8->StereoSpread = param_4->StereoSpread;
  local_3d8->AttenuationDistance = param_4->AttenuationDistance;
  local_3d8->ListenerToSoundDistance = param_4->ListenerToSoundDistance;
  local_3d8->ListenerToSoundDistanceForPanning = param_4->ListenerToSoundDistanceForPanning;
  local_3d8->AbsoluteAzimuth = param_4->AbsoluteAzimuth;
  pUVar5 = param_4->SourceEffectChain;
  local_340 = pUVar5;
  if (pUVar5 != (USoundEffectSourcePresetChain *)0x0) {
    iVar36 = 9;
    local_3a0 = this->NumChannels;
    iVar19 = (pUVar5->Chain).ArrayNum;
    pFVar40 = (pUVar5->Chain).AllocatorInstance.Data;
    pFVar37 = pFVar40 + (longlong)iVar19 * 0x10;
    while( true ) {
      if ((pUVar5->Chain).ArrayNum != iVar19) {
        local_3d0[0] = 0;
        `TCheckedPointerIterator<FSourceEffectChainEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_3d0);
      }
      param_3 = local_338;
      if (pFVar40 == pFVar37) break;
      if ((*(longlong **)pFVar40 != (longlong *)0x0) &&
         (iVar17 = (**(code **)(**(longlong **)pFVar40 + 0x2f8))(), iVar17 < iVar36)) {
        iVar36 = iVar17;
      }
      pFVar40 = pFVar40 + 0x10;
    }
    iVar19 = 2;
    if (iVar36 < 9) {
      iVar19 = iVar36;
    }
    param_1 = local_3c0;
    if (iVar19 < local_3a0) {
      local_3d8->SourceEffectChain = (USoundEffectSourcePresetChain *)0x0;
      if (5 < (byte)LogAudio._0_1_) {
        FActiveSound::GetAudioComponentName(local_338,&local_1c0);
        pUVar6 = (param_3->Sound).field0_0x0.DebugPtr;
        fVar42 = local_3c8;
        if (pUVar6 != (USoundBase *)0x0) {
          local_330 = (FName)pUVar6->_padding_;
          fVar42 = 1.4013e-45;
          ::FName::ToString(&local_330,&local_1d0);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if ((((uint)fVar42 & 1) != 0) &&
           (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        param_1 = local_3c0;
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          param_1 = local_3c0;
        }
      }
    }
    else {
      local_3d8->SourceEffectChain = param_4->SourceEffectChain;
    }
  }
  pFVar20 = local_3d8;
  pUVar7 = param_4->SoundClass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (USoundClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (pFVar20->SoundClass).field0_0x0.DebugPtr = pUVar7;
  if (param_4->SoundClass == (USoundClass *)0x0) {
LAB_1486d9003:
    local_3d8->VoiceCenterChannelVolume = 0.0;
    local_3d8->RadioFilterVolume = 0.0;
    local_3d8->RadioFilterVolumeThreshold = 0.0;
    local_3d8->LFEBleed = 0.0;
    *(uint *)&local_3d8->field_0xcc =
         ((uint)(byte)param_3->field_0x1a3 << 0xd ^ *(uint *)&local_3d8->field_0xcc) & 0x2000 ^
         *(uint *)&local_3d8->field_0xcc;
    *(uint *)&local_3d8->field_0xcc =
         ((uint)(byte)param_3->field_0x1a3 << 0xd ^ *(uint *)&local_3d8->field_0xcc) & 0x4000 ^
         *(uint *)&local_3d8->field_0xcc;
    *(uint *)&local_3d8->field_0xcc =
         ((uint)(byte)param_3->field_0x1a3 << 0xd ^ *(uint *)&local_3d8->field_0xcc) & 0x8000 ^
         *(uint *)&local_3d8->field_0xcc;
    *(uint *)&local_3d8->field_0xcc =
         ((uint)(byte)param_3->field_0x1a3 << 0xd ^ *(uint *)&local_3d8->field_0xcc) & 0x10000 ^
         *(uint *)&local_3d8->field_0xcc;
    bVar28 = param_3->bAlwaysPlay;
  }
  else {
    pFVar22 = FAudioDevice::GetSoundClassCurrentProperties(param_1,param_4->SoundClass);
    if (pFVar22 == (FSoundClassProperties *)0x0) {
      if (2 < (byte)LogAudio._0_1_) {
        local_328 = (FName)param_4->SoundClass->_padding_;
        ::FName::ToString(&local_328,&local_2b8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1486d9003;
    }
    local_3d8->VolumeMultiplier = pFVar22->Volume * local_3d8->VolumeMultiplier;
    local_3d8->Pitch = pFVar22->Pitch * local_3d8->Pitch;
    local_3d8->SoundClassFilterFrequency = pFVar22->LowPassFilterFrequency;
    local_3d8->VoiceCenterChannelVolume = pFVar22->VoiceCenterChannelVolume;
    local_3d8->RadioFilterVolume = param_4->VolumeMultiplier * pFVar22->RadioFilterVolume;
    local_3d8->RadioFilterVolumeThreshold =
         param_4->VolumeMultiplier * pFVar22->RadioFilterVolumeThreshold;
    local_3d8->LFEBleed = pFVar22->LFEBleed;
    if ((param_3->bIsUISound == 0) && (pFVar22->bIsUISound == '\0')) {
      uVar31 = 0;
    }
    else {
      uVar31 = 0x2000;
    }
    local_3d8->bIsUISound = uVar31 >> 0xd;
    uVar31 = 0;
    if ((param_3->bIsMusic != '\0') || (uVar30 = uVar31, pFVar22->bIsMusic != '\0')) {
      uVar30 = 0x4000;
    }
    local_3d8->bIsMusic = uVar30 >> 0xe;
    if ((param_3->bCenterChannelOnly != '\0') ||
       (uVar30 = uVar31, pFVar22->bCenterChannelOnly != '\0')) {
      uVar30 = 0x10000;
    }
    local_3d8->bCenterChannelOnly = uVar30 >> 0x10;
    if ((param_3->bReverb != '\0') || (pFVar22->bReverb != '\0')) {
      uVar31 = 0x8000;
    }
    local_3d8->bReverb = uVar31 >> 0xf;
    local_3d8->OutputTarget = (uint)(pFVar22->OutputTarget).Value;
    if (pFVar22->bApplyEffects == 0) {
      pUVar8 = (pFVar22->DefaultSubmix).field0_0x0.DebugPtr;
      if (pUVar8 != (USoundSubmix *)0x0) {
        local_3d8->SoundSubmix = (USoundSubmixBase *)pUVar8;
      }
    }
    else {
      pUVar23 = GetDefault<UAudioSettings>();
      if ((pUVar23 != (UAudioSettings *)0x0) && (((uint)pUVar23->_padding_ >> 0x1e & 1) == 0)) {
        local_158.WeakPtr.ObjectIndex = 0;
        local_158.WeakPtr.ObjectSerialNumber = 0;
        FSoftObjectPath::FSoftObjectPath(&local_158.ObjectID,&pUVar23->EQSubmix);
        pUVar25 = (USoundSubmixBase *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_158);
        if (pUVar25 == (USoundSubmixBase *)0x0) {
LAB_1486d9311:
          pUVar25 = (USoundSubmixBase *)0x0;
        }
        else {
          pUVar24 = USoundSubmix::StaticClass();
          iVar19 = (int)pUVar24->_padding_;
          if ((*(int *)(pUVar25->_padding_ + 0x38) < iVar19) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar25->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
              &pUVar24->_padding_)) goto LAB_1486d9311;
        }
        local_3d8->SoundSubmix = pUVar25;
        if (local_158.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    if (pFVar22->bApplyAmbientVolumes != '\0') {
      local_3d8->VolumeMultiplier = param_4->InteriorVolumeMultiplier * local_3d8->VolumeMultiplier;
      local_3d8->RadioFilterVolume =
           param_4->InteriorVolumeMultiplier * local_3d8->RadioFilterVolume;
      local_3d8->RadioFilterVolumeThreshold =
           param_4->InteriorVolumeMultiplier * local_3d8->RadioFilterVolumeThreshold;
    }
    if (((bool)param_3->bAlwaysPlay) || (pFVar22->bAlwaysPlay != '\0')) {
      bVar28 = 1;
    }
    else {
      bVar28 = 0;
    }
  }
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)this->field_0x365 << 0x13 ^ *(uint *)&local_3d8->field_0xcc) & 0x80000 ^
       *(uint *)&local_3d8->field_0xcc;
  if (param_4->SoundSubmix == (USoundSubmixBase *)0x0) {
    pUVar25 = (USoundSubmixBase *)(**(code **)(this->_padding_ + 0x338))(this);
    if (pUVar25 != (USoundSubmixBase *)0x0) {
      local_3d8->SoundSubmix = pUVar25;
    }
  }
  else {
    local_3d8->SoundSubmix = param_4->SoundSubmix;
  }
  pFVar20 = local_3d8;
  if (bVar28 == 0) {
    fVar42 = param_4->Priority;
    if (__real_42c80000 <= param_4->Priority) {
      fVar42 = __real_42c80000;
    }
    if (fVar42 <= 0.0) {
      fVar42 = 0.0;
    }
    local_3d8->Priority = fVar42;
  }
  else {
    local_3d8->Priority = 8.5070587e+37;
  }
  local_118 = (param_4->Transform).Translation.XY.m128d_f64[0];
  dStack_110 = (param_4->Transform).Translation.XY.m128d_f64[1];
  local_108 = (param_4->Transform).Translation.ZW.m128d_f64[0];
  (local_3d8->Location).field0_0x0._s_0.X = local_118;
  (local_3d8->Location).field0_0x0._s_0.Y = dStack_110;
  (local_3d8->Location).field0_0x0._s_0.Z = local_108;
  local_3d8->bIsStarted = 1;
  local_3d8->bAlreadyNotifiedHook = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pFVar20->WaveData).field0_0x0.DebugPtr = this;
  pFVar38 = &local_3d8->NotifyBufferFinishedHooks;
  if ((FSoundParseParameters *)pFVar38 != param_4) {
    iVar19 = (param_4->NotifyBufferFinishedHooks).Notifies.ArrayNum;
    piVar1 = &(local_3d8->NotifyBufferFinishedHooks).Notifies.ArrayMax;
    pFVar9 = (FNotifyBufferDetails *)
             (param_4->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data;
    iVar36 = *piVar1;
    (local_3d8->NotifyBufferFinishedHooks).Notifies.ArrayNum = iVar19;
    if ((iVar19 == 0) && (iVar36 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar19,iVar36,(ForAnyElementType *)pFVar38,iVar19,piVar1);
      ConstructItems<FNotifyBufferFinishedHooks::FNotifyBufferDetails,FNotifyBufferFinishedHooks::FNotifyBufferDetails,int>
                ((pFVar38->Notifies).AllocatorInstance.Data,pFVar9,iVar19);
    }
  }
  cVar16 = (**(code **)(this->_padding_ + 0x318))(this);
  EVar18 = LOOP_Never;
  if ((cVar16 == '\0') || (EVar29 = EVar18, param_4->bLooping != '\0')) {
    EVar29 = LOOP_Forever;
  }
  local_3d8->LoopingMode = EVar29;
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)param_4->field_0x23c << 0xc ^ *(uint *)&local_3d8->field_0xcc) & 0x20000 ^
       *(uint *)&local_3d8->field_0xcc;
  *(uint *)&local_3d8->field_0xcc =
       ((uint)(byte)param_4->field_0x23c << 9 ^ *(uint *)&local_3d8->field_0xcc) & 0x200 ^
       *(uint *)&local_3d8->field_0xcc;
  bVar15 = FWaveInstance::GetUseSpatialization(local_3d8);
  if (bVar15) {
    local_3d8->SpatializationMethod = param_4->SpatializationMethod;
    bVar15 = FAudioDevice::IsHRTFEnabledForAll(local_3c0);
    if ((bVar15) && (param_4->SpatializationMethod == SPATIALIZATION_Default)) {
      local_3d8->SpatializationMethod = SPATIALIZATION_HRTF;
    }
    else {
      local_3d8->SpatializationMethod = param_4->SpatializationMethod;
    }
    if (local_3d8->SpatializationMethod == SPATIALIZATION_HRTF) {
      *(uint *)&local_3d8->field_0xcc =
           ((uint)param_4->bSpatializationIsExternalSend << 8 ^ *(uint *)&local_3d8->field_0xcc) &
           0x100 ^ *(uint *)&local_3d8->field_0xcc;
    }
    if (((bool)param_4->bApplyNormalizationToStereoSounds) && (this->NumChannels == 2)) {
      fVar42 = FWaveInstance::GetVolume(local_3d8);
      local_3d8->Volume = fVar42 * __real_3f000000;
    }
  }
  uVar4 = *(undefined4 *)&local_3d8->field_0xcc;
  if (((ZPULL(uVar4,0xf,1) != 0) && (local_3d8->bIsMusic == 0)) &&
     ((AllowReverbForMultichannelSources != 0 ||
      (((local_3d8->WaveData).field0_0x0.DebugPtr)->NumChannels < 3)))) {
    EVar18 = 0x8000;
  }
  *(ELoopingMode *)&local_3d8->field_0xcc = uVar4 & 0xffff7fff | EVar18;
  if (local_3d8->bReverb != 0) {
    if (param_4->ReverbSendMethod == Manual) {
      fVar42 = param_4->ManualReverbSendLevel;
      if (__real_3f800000 <= param_4->ManualReverbSendLevel) {
        fVar42 = __real_3f800000;
      }
      if (fVar42 <= 0.0) {
        fVar42 = 0.0;
      }
      local_3d8->ReverbSendLevel = fVar42;
    }
    else {
      dVar44 = (param_4->ReverbSendLevelDistanceRange).field0_0x0._s_0.X;
      dVar45 = (param_4->ReverbSendLevelDistanceRange).field0_0x0._s_0.Y - dVar44;
      if (dVar45 <= __real_3ff0000000000000) {
        dVar45 = __real_3ff0000000000000;
      }
      dVar44 = ((double)local_3d8->ListenerToSoundDistance - dVar44) / (double)(float)dVar45;
      if (__real_3ff0000000000000 <= dVar44) {
        dVar44 = __real_3ff0000000000000;
      }
      if (dVar44 <= 0.0) {
        dVar44 = 0.0;
      }
      if (param_4->ReverbSendMethod == Linear) {
        dVar45 = (param_4->ReverbSendLevelRange).field0_0x0._s_0.X;
        dVar45 = ((param_4->ReverbSendLevelRange).field0_0x0._s_0.Y - dVar45) *
                 (double)(float)dVar44 + dVar45;
        if (__real_3ff0000000000000 <= dVar45) {
          dVar45 = __real_3ff0000000000000;
        }
        if (dVar45 <= 0.0) {
          dVar45 = 0.0;
        }
        in_XMM2._8_8_ = 0;
        in_XMM2._0_8_ = dVar45;
        local_3d8->ReverbSendLevel = (float)dVar45;
      }
      else {
        this_00 = FRuntimeFloatCurve::GetRichCurveConst(&param_4->CustomReverbSendCurve);
        in_XMM2 = ZEXT816(0);
        fVar42 = FRichCurve::Eval(this_00,(float)dVar44,0.0);
        if (__real_3f800000 <= fVar42) {
          fVar42 = __real_3f800000;
        }
        if (fVar42 <= 0.0) {
          fVar42 = 0.0;
        }
        local_3d8->ReverbSendLevel = fVar42;
      }
    }
  }
  TArray<FAttenuationSubmixSendSettings,TSizedDefaultAllocator<32>_>::operator=
            (&local_3d8->AttenuationSubmixSends,&param_4->AttenuationSubmixSends);
  TArray<FSoundSubmixSendInfo,TSizedDefaultAllocator<32>_>::operator=
            (&local_3d8->SoundSubmixSends,&param_4->SoundSubmixSends);
  pFVar20 = local_3d8;
  local_3d8->EnvelopeFollowerAttackTime = param_4->EnvelopeFollowerAttackTime;
  local_3d8->EnvelopeFollowerReleaseTime = param_4->EnvelopeFollowerReleaseTime;
  uVar4 = *(undefined4 *)&local_3d8->field_0xcc;
  if (local_3d8->ActiveSound->bIsPreviewSound == '\0') {
    *(uint *)&local_3d8->field_0xcc =
         (ZPULL(uVar4,0,1) ^ ZPULL(*(undefined4 *)&param_4->field_0x238,0,1)) & 1 ^ uVar4;
    if ((local_3d8->SpatializationMethod == SPATIALIZATION_HRTF) &&
       (ZPULL(*(undefined4 *)&local_3d8->field_0xcc,8,1) != 0)) {
      *(uint *)&local_3d8->field_0xcc = *(undefined4 *)&local_3d8->field_0xcc & 0xfffffffd;
    }
    else {
      if (param_3->bHasActiveMainSubmixOutputOverride == '\0') {
        uVar31 = *(uint *)&param_4->field_0x238;
      }
      else {
        uVar31 = (uint)((byte)param_3->field_0x1a5 >> 3);
      }
      *(uint *)&local_3d8->field_0xcc =
           (uVar31 ^ *(uint *)&local_3d8->field_0xcc) & 2 ^ *(uint *)&local_3d8->field_0xcc;
    }
    *(uint *)&local_3d8->field_0xcc =
         (*(uint *)&local_3d8->field_0xcc ^ *(uint *)&param_4->field_0x238) & 4 ^
         *(uint *)&local_3d8->field_0xcc;
    if (param_3->bHasActiveBusSendRoutingOverride != 0) {
      *(uint *)&local_3d8->field_0xcc =
           (param_3->bEnableBusSendRoutingOverride ^
           ZPULL(*(undefined4 *)&local_3d8->field_0xcc,0,1)) & 1 ^
           *(undefined4 *)&local_3d8->field_0xcc;
    }
    if (param_3->bHasActiveSubmixSendRoutingOverride != '\0') {
      uVar31 = *(uint *)&local_3d8->field_0xcc;
      uVar30 = ((byte)param_3->field_0x1a5 >> 3 ^ uVar31) & 4;
      goto LAB_1486d98be;
    }
  }
  else {
    *(uint *)&local_3d8->field_0xcc = (uVar4 ^ *(undefined4 *)&param_4->field_0x238) & 4 ^ uVar4;
    *(uint *)&local_3d8->field_0xcc =
         (*(uint *)&local_3d8->field_0xcc ^ *(uint *)&param_4->field_0x238) & 2 ^
         *(uint *)&local_3d8->field_0xcc;
    uVar31 = *(uint *)&local_3d8->field_0xcc;
    uVar30 = (ZPULL(uVar31,0,1) ^ param_4->bEnableBusSends) & 1;
LAB_1486d98be:
    *(uint *)&local_3d8->field_0xcc = uVar30 ^ uVar31;
  }
  pTVar39 = local_3d8->BusSends;
  if (pTVar39 != param_4->BusSends) {
    DestructItems<FSoundSourceBusSendInfo,int>
              ((FSoundSourceBusSendInfo *)(pTVar39->AllocatorInstance).Data,
               local_3d8->BusSends[0].ArrayNum);
    iVar19 = param_4->BusSends[0].ArrayNum;
    piVar1 = &pFVar20->BusSends[0].ArrayMax;
    pFVar10 = (FSoundSourceBusSendInfo *)param_4->BusSends[0].AllocatorInstance.Data;
    pFVar20->BusSends[0].ArrayNum = iVar19;
    if ((iVar19 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar19,*piVar1,&pTVar39->AllocatorInstance,iVar19,piVar1);
      ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
                ((pTVar39->AllocatorInstance).Data,pFVar10,iVar19);
    }
  }
  pFVar20 = local_3d8;
  pTVar39 = local_3d8->BusSends + 1;
  if (pTVar39 != param_4->BusSends + 1) {
    DestructItems<FSoundSourceBusSendInfo,int>
              ((FSoundSourceBusSendInfo *)(pTVar39->AllocatorInstance).Data,
               local_3d8->BusSends[1].ArrayNum);
    iVar19 = param_4->BusSends[1].ArrayNum;
    piVar1 = &pFVar20->BusSends[1].ArrayMax;
    iVar36 = *piVar1;
    pFVar10 = (FSoundSourceBusSendInfo *)param_4->BusSends[1].AllocatorInstance.Data;
    pFVar20->BusSends[1].ArrayNum = iVar19;
    if ((iVar19 == 0) && (iVar36 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,iVar19,iVar36,&pTVar39->AllocatorInstance,iVar19,piVar1);
      ConstructItems<FSoundSourceBusSendInfo,FSoundSourceBusSendInfo,int>
                ((pTVar39->AllocatorInstance).Data,pFVar10,iVar19);
    }
  }
  local_3d8->SpatializationPluginSettings = param_4->SpatializationPluginSettings;
  local_3d8->OcclusionPluginSettings = param_4->OcclusionPluginSettings;
  local_3d8->ReverbPluginSettings = param_4->ReverbPluginSettings;
  local_3d8->SourceDataOverridePluginSettings = param_4->SourceDataOverridePluginSettings;
  *(uint *)&local_3d8->field_0xcc =
       (*(uint *)&local_3d8->field_0xcc ^ *(uint *)&param_4->field_0x238) & 8 ^
       *(uint *)&local_3d8->field_0xcc;
  local_3d8->bShouldUseAudioLink = param_4->bEnableSendToAudioLink;
  local_3d8->AudioLinkSettingsOverride = param_4->AudioLinkSettingsOverride;
  bVar15 = FWaveInstance::IsPlaying(local_3d8);
  pTVar14 = local_320;
  if (bVar15) {
    pFVar40 = (local_320->AllocatorInstance).Data;
    if (((pFVar40 <= (FScriptContainerElement *)&local_3d8) &&
        ((FScriptContainerElement *)&local_3d8 < pFVar40 + (longlong)local_320->ArrayMax * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar19 = pTVar14->ArrayNum;
    if (iVar19 == pTVar14->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
    }
    pTVar14->ArrayNum = iVar19 + 1;
    *(FWaveInstance **)((pTVar14->AllocatorInstance).Data + (longlong)iVar19 * 8) = local_3d8;
    param_3->bFinished = '\0';
    bVar28 = (byte)((uint)AudioMixerChannel->Enabled >> 0x1f) ^ 1;
  }
  else {
    if (local_3d8->LoopingMode == LOOP_Forever) {
      param_3->bFinished = '\0';
      bVar28 = (byte)((uint)AudioMixerChannel->Enabled >> 0x18);
    }
    else {
      if (local_398 == (FWaveInstance *)0x0) {
        FActiveSound::RemoveWaveInstance(param_3,local_318);
        return;
      }
      bVar28 = (byte)((uint)AudioMixerChannel->Enabled >> 0x18);
    }
    bVar28 = bVar28 >> 7 ^ 1;
    if (param_3->bFinished != '\0') {
      bVar15 = false;
      goto LAB_1486d9b17;
    }
  }
  bVar15 = true;
LAB_1486d9b17:
  pFVar41 = local_3c0;
  iVar19 = 0;
  if (((bVar28 != 0) && (bVar15)) &&
     ((local_3d8->SoundClass).field0_0x0.DebugPtr != (USoundClass *)0x0)) {
    iVar17 = 0;
    iVar36 = 0;
    if (local_398 == (FWaveInstance *)0x0) {
      pFVar26 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)(local_3d8->WaveData).field0_0x0.DebugPtr,
                           &local_1b0,(UObject *)0x0);
      local_380.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_380.AssetPath.PackageName.Number = 0;
      local_380.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_380.AssetPath.AssetName.Number = 0;
      local_380.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.SubPathString.Data.ArrayNum = 0;
      local_380.SubPathString.Data.ArrayMax = 0;
      local_218 = (pFVar26->Data).AllocatorInstance.Data;
      iVar35 = (pFVar26->Data).ArrayNum;
      iStack_210 = iVar35 + -1;
      if (iVar35 == 0) {
        iStack_210 = iVar19;
      }
      local_128._12_4_ = uStack_20c;
      local_128.Size = iStack_210;
      local_128.DataPtr = (wchar_t *)local_218;
      FSoftObjectPath::SetPath(&local_380,&local_128);
      pUVar27 = FSoftObjectPath::ResolveObject(&local_380);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar27);
      }
      if (local_380.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      pFVar41 = local_3c0;
      if (pUVar27 != (UObject *)0x0) {
        local_310 = *(UObject **)&pUVar27->field_0x10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_310 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_310);
        }
        Audio::Trace::Util::GetSoundBaseAssetName(&local_298,(TObjectPtr<UClass>)&local_310);
        Audio::Trace::Util::GetOwnerActorLabel(&local_2a8,param_3);
        if (-1 < AudioMixerChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FAudioSoundWaveStartFields>
                    ((TLogScope<1> *)&local_c8);
          *(uint *)local_c8.Ptr = local_3c0->DeviceID;
          QueryPerformanceCounter(&local_308);
          *(LARGE_INTEGER *)((longlong)local_c8.Ptr + 4) = local_308;
          *(uint *)((longlong)local_c8.Ptr + 0xc) = local_3d8->PlayOrder;
          *(uint *)((longlong)local_c8.Ptr + 0x10) = param_3->PlayOrder;
          pFVar26 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar27,&local_1a0,(UObject *)0x0);
          if ((pFVar26->Data).ArrayNum == 0) {
            pwVar32 = L"";
          }
          else {
            pwVar32 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
          }
          sVar2 = *pwVar32;
          pFVar40 = (FScriptContainerElement *)pwVar32;
          iVar35 = iVar36;
          while (sVar2 != 0) {
            pFVar40 = pFVar40 + 2;
            iVar35 = iVar35 + 1;
            sVar2 = *(short *)pFVar40;
          }
          UE::Trace::Private::Field_WriteStringWide(4,pwVar32,iVar35);
          FVar34.Data = (FScriptContainerElement *)L"";
          if (local_298.Data.ArrayNum != 0) {
            FVar34.Data = local_298.Data.AllocatorInstance.Data;
          }
          wVar3 = *(wchar_t *)FVar34.Data;
          pFVar40 = FVar34.Data;
          while (wVar3 != L'\0') {
            pFVar40 = pFVar40 + 2;
            iVar36 = iVar36 + 1;
            wVar3 = *(wchar_t *)pFVar40;
          }
          UE::Trace::Private::Field_WriteStringWide(5,(wchar_t *)FVar34.Data,iVar36);
          FVar34.Data = (FScriptContainerElement *)L"";
          if (local_2a8.Data.ArrayNum != 0) {
            FVar34.Data = local_2a8.Data.AllocatorInstance.Data;
          }
          wVar3 = *(wchar_t *)FVar34.Data;
          pFVar40 = FVar34.Data;
          while (wVar3 != L'\0') {
            pFVar40 = pFVar40 + 2;
            iVar17 = iVar17 + 1;
            wVar3 = *(wchar_t *)pFVar40;
          }
          UE::Trace::Private::Field_WriteStringWide(6,(wchar_t *)FVar34.Data,iVar17);
          UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_c8,&local_c8);
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
        }
        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
        }
        pFVar41 = local_3c0;
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
          pFVar41 = local_3c0;
        }
      }
    }
    else {
      fVar42 = param_3->PlaybackTimeUnscaled;
      auVar47 = roundps(unaff_XMM7,ZEXT416((uint)fVar42),1);
      fVar43 = FAudioDevice::GetDeviceDeltaTime(local_3c0);
      auVar46 = roundps(in_XMM2,ZEXT416((uint)(fVar43 + fVar42)),1);
      if (0.0 < auVar46._0_4_ - auVar47._0_4_) {
        pFVar26 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)(local_3d8->WaveData).field0_0x0.DebugPtr,
                             &local_178,(UObject *)0x0);
        local_360.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_360.AssetPath.PackageName.Number = 0;
        local_360.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_360.AssetPath.AssetName.Number = 0;
        local_360.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_360.SubPathString.Data.ArrayNum = 0;
        local_360.SubPathString.Data.ArrayMax = 0;
        local_228 = (pFVar26->Data).AllocatorInstance.Data;
        iVar35 = (pFVar26->Data).ArrayNum;
        iStack_220 = iVar35 + -1;
        if (iVar35 == 0) {
          iStack_220 = iVar17;
        }
        local_188._12_4_ = uStack_21c;
        local_188.Size = iStack_220;
        local_188.DataPtr = (wchar_t *)local_228;
        FSoftObjectPath::SetPath(&local_360,&local_188);
        pUVar27 = FSoftObjectPath::ResolveObject(&local_360);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar27);
        }
        if (local_360.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (pUVar27 != (UObject *)0x0) {
          local_300 = *(UObject **)&pUVar27->field_0x10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_300 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_300);
          }
          Audio::Trace::Util::GetSoundBaseAssetName(&local_278,(TObjectPtr<UClass>)&local_300);
          Audio::Trace::Util::GetOwnerActorLabel(&local_288,param_3);
          if (-1 < AudioMixerChannel->Enabled) {
            UE::Trace::Private::FLogScope::Enter<FAudioSoundWaveIsAlivePingFields>
                      ((TLogScope<1> *)&local_b8);
            *(uint *)local_b8.Ptr = pFVar41->DeviceID;
            QueryPerformanceCounter(&local_2f8);
            *(LARGE_INTEGER *)((longlong)local_b8.Ptr + 4) = local_2f8;
            *(uint *)((longlong)local_b8.Ptr + 0xc) = local_3d8->PlayOrder;
            *(uint *)((longlong)local_b8.Ptr + 0x10) = param_3->PlayOrder;
            pFVar26 = UObjectBaseUtility::GetPathName
                                ((UObjectBaseUtility *)pUVar27,&local_168,(UObject *)0x0);
            if ((pFVar26->Data).ArrayNum == 0) {
              pwVar32 = L"";
            }
            else {
              pwVar32 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
            }
            sVar2 = *pwVar32;
            pFVar40 = (FScriptContainerElement *)pwVar32;
            iVar35 = iVar36;
            while (sVar2 != 0) {
              pFVar40 = pFVar40 + 2;
              iVar35 = iVar35 + 1;
              sVar2 = *(short *)pFVar40;
            }
            UE::Trace::Private::Field_WriteStringWide(4,pwVar32,iVar35);
            FVar34.Data = (FScriptContainerElement *)L"";
            if (local_278.Data.ArrayNum != 0) {
              FVar34.Data = local_278.Data.AllocatorInstance.Data;
            }
            wVar3 = *(wchar_t *)FVar34.Data;
            pFVar40 = FVar34.Data;
            while (wVar3 != L'\0') {
              pFVar40 = pFVar40 + 2;
              iVar36 = iVar36 + 1;
              wVar3 = *(wchar_t *)pFVar40;
            }
            UE::Trace::Private::Field_WriteStringWide(5,(wchar_t *)FVar34.Data,iVar36);
            FVar34.Data = (FScriptContainerElement *)L"";
            if (local_288.Data.ArrayNum != 0) {
              FVar34.Data = local_288.Data.AllocatorInstance.Data;
            }
            wVar3 = *(wchar_t *)FVar34.Data;
            pFVar40 = FVar34.Data;
            while (wVar3 != L'\0') {
              pFVar40 = pFVar40 + 2;
              iVar17 = iVar17 + 1;
              wVar3 = *(wchar_t *)pFVar40;
            }
            UE::Trace::Private::Field_WriteStringWide(6,(wchar_t *)FVar34.Data,iVar17);
            UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_b8,&local_b8);
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
          }
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    if (-1 < AudioMixerChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAudioSoundPriorityFields>((TLogScope<0> *)&local_a8);
      *local_a8 = pFVar41->DeviceID;
      QueryPerformanceCounter(&local_2f0);
      *(LARGE_INTEGER *)(local_a8 + 1) = local_2f0;
      local_a8[3] = local_3d8->PlayOrder;
      local_a8[4] = param_3->PlayOrder;
      local_3c8 = local_3d8->Priority;
      local_a8[5] = (uint)local_3c8;
      *(undefined8 *)(local_a0 + 0x28) = *(undefined8 *)(local_a0 + 0x20);
    }
    if (-1 < AudioMixerChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FAudioSoundDistanceFields>((TLogScope<0> *)&local_98);
      *local_98 = pFVar41->DeviceID;
      QueryPerformanceCounter(&local_2e8);
      *(LARGE_INTEGER *)(local_98 + 1) = local_2e8;
      local_98[3] = local_3d8->PlayOrder;
      local_98[4] = param_3->PlayOrder;
      local_3c8 = local_3d8->ListenerToSoundDistance;
      local_98[5] = (uint)local_3c8;
      *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
    }
  }
  if ((((2 < this->NumChannels) && (local_3d8->bIsAmbisonics == 0)) &&
      (bVar15 = FWaveInstance::GetUseSpatialization(local_3d8), bVar15)) &&
     (local_3d8->bReportedSpatializationWarning == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`USoundWave::Parse'::__l243::_dynamic_atexit_destructor_for__ReportedSounds__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar31 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595
    ;
    uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
    if (ReportedSounds.Elements._8_4_ != ReportedSounds.Elements._52_4_) {
      FVar33 = (ForElementType<FSetElementId>)0x154c69658;
      if (ReportedSounds.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar33 = ReportedSounds.Hash.SecondaryData;
      }
      for (iVar36 = *(int *)((longlong)FVar33 +
                            (ulonglong)(ReportedSounds.HashSize - 1U & (uVar31 >> 0x10 ^ uVar31)) *
                            4); iVar36 != -1;
          iVar36 = *(int *)(ReportedSounds.Elements._0_8_ + 8 + (longlong)iVar36 * 0x10)) {
        if (*(USoundWave **)(ReportedSounds.Elements._0_8_ + (longlong)iVar36 * 0x10) == this)
        goto LAB_1486da4c7;
      }
    }
    local_2e0 = (FName)this->_padding_;
    ::FName::ToString(&local_2e0,&local_268);
    ::FString::PrintfImpl
              (&local_390,
               L"Spatialization on sounds with channels greater than 2 is not supported. SoundWave: %s"
              );
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    pUVar11 = (USoundWave *)(param_3->Sound).field0_0x0.DebugPtr;
    if (pUVar11 != this) {
      local_2d8 = (FName)pUVar11->_padding_;
      ::FName::ToString(&local_2d8,&local_248);
      ::FString::PrintfImpl(&local_258,L" SoundCue: %s");
      if (local_258.Data.ArrayNum != 0) {
        iVar19 = local_258.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_390,(wchar_t *)local_258.Data.AllocatorInstance.Data,iVar19);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
    }
    FVar34.Data = local_390.Data.AllocatorInstance.Data;
    uVar12 = param_3->AudioComponentID;
    if (uVar12 == 0) {
      if (5 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
    }
    else {
      local_3b0.Data = (FScriptContainerElement *)0x0;
      local_3a8 = CONCAT44(local_3a8._4_4_,local_390.Data.ArrayNum);
      local_3b8 = uVar12;
      if (local_390.Data.ArrayNum == 0) {
        local_3a8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_390.Data.ArrayNum,0,&local_3b0,local_390.Data.ArrayNum,
                   (int *)((longlong)&local_3a8 + 4));
        memcpy(local_3b0.Data,FVar34.Data,(longlong)local_390.Data.ArrayNum * 2);
      }
      local_f8[0] = (code *)0x0;
      local_d0 = FMemory::Malloc(0x20,8);
      *local_d0 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`USoundWave::Parse'::`252'::<lambda_1>,1,1>::_vftable_;
      local_d0[1] = local_3b8;
      local_d0[2] = 0;
      local_d0[2] = local_3b0.Data;
      local_3b0.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_d0 + 3) = (undefined4)local_3a8;
      *(undefined4 *)((longlong)local_d0 + 0x1c) = local_3a8._4_4_;
      local_3a8 = 0;
      if (local_d0 + 1 != (ulong64 *)0x0) {
        local_f8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USoundWave::Parse'::__l252::<lambda_1>,void>::Call;
      }
      FAudioThread::RunCommandOnGameThread
                ((TUniqueFunction<void___cdecl(void)> *)local_f8,(TStatId)0x154f11430);
      if (local_3b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data);
      }
    }
    local_2d0 = this;
    TSet<USoundWave_*,DefaultKeyFuncs<USoundWave_*,0>,FDefaultSetAllocator>::Emplace<USoundWave_*>
              (&ReportedSounds,(USoundWave **)local_238,(bool *)&local_2d0);
    if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
LAB_1486da4c7:
    local_3d8->bReportedSpatializationWarning = 1;
  }
  return;
}

// PostInitProperties @ 1486dffd0

void __thiscall USoundWave::PostInitProperties(USoundWave *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  UObject::PostInitProperties((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    InvalidateCompressedData(this,false,false);
  }
  uVar2 = (**(code **)(this->_padding_ + 0x3a8))(this);
  *(undefined4 *)&this->_padding_ = uVar2;
  return;
}

// PostLoad @ 1486e0f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundWave::PostLoad(USoundWave *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  ESoundAssetCompressionType EVar12;
  ESoundWaveLoadingBehavior EVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  UPackage *pUVar17;
  UClass *pUVar18;
  FSoundWaveData *pFVar19;
  TSharedPtr<FSoundWaveProxy,1> *pTVar20;
  wchar_t *pwVar21;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar22;
  ITargetPlatformManagerModule *pIVar23;
  FObjectKey *pFVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  FAudioDevice *pFVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_AudioBufferTime> FVar29;
  FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels> FVar30;
  wchar_t *pwVar31;
  FObjectKey FVar32;
  FObjectKey FVar33;
  undefined4 uVar34;
  float fVar35;
  uint local_res10;
  uint uStackX_14;
  uint local_res18 [2];
  FLLMScope local_res20 [2];
  undefined8 in_stack_fffffffffffffe48;
  FScriptContainerElement *pFVar36;
  undefined8 in_stack_fffffffffffffe50;
  FScriptContainerElement *pFVar37;
  FWeakObjectPtr local_178;
  int local_170;
  USoundWave *local_168;
  undefined1 local_160 [72];
  int local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  undefined1 local_e0 [8];
  FName local_d8;
  FName local_d0;
  TSharedPtr<FSoundWaveProxy,1> local_c8;
  FString local_b8;
  FString local_a8;
  void *local_98;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  longlong local_60;
  
  pFVar37 = (FScriptContainerElement *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe50 >> 8),1)
  ;
  pFVar36 = (FScriptContainerElement *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe48 >> 8),1)
  ;
  FLLMScope::FLLMScope(local_res20,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_160 + 0x38),AudioSoundWaves,true);
  UObject::PostLoad((UObject *)this);
  pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  if (((uint)pUVar17->PackageFlagsPrivate >> 0x1e & 1) != 0) goto LAB_1486e194c;
  uVar34 = (**(code **)(this->_padding_ + 0x3a8))(this);
  *(undefined4 *)&this->_padding_ = uVar34;
  pUVar18 = USoundSourceBus::StaticClass();
  iVar2 = (int)pUVar18->_padding_;
  if (((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar18->_padding_)) || (this->bProcedural != 0)) goto LAB_1486e194c;
  CacheInheritedLoadingBehavior(this);
  uVar25 = (ulonglong)_tls_index;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar21 = FCommandLine::Get();
    bVar10 = FParse::Param(pwVar21,L"nosound");
    if (bVar10) {
      pwVar21 = FCommandLine::Get();
      bVar10 = FParse::Param(pwVar21,L"enablesound");
      if (bVar10) goto LAB_1486e19cf;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486e19cf:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       bApplicationTypeDoesNotRenderAudio == false) &&
     (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
      == false)) {
    if (((uint)this->_padding_ >> 4 & 1) == 0) {
      pFVar19 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
      pFVar37 = (FScriptContainerElement *)CONCAT71((int7)((ulonglong)pFVar37 >> 8),1);
      pFVar36 = (FScriptContainerElement *)CONCAT71((int7)((ulonglong)pFVar36 >> 8),1);
      FLLMScope::FLLMScope((FLLMScope *)local_res18,AudioSoundWaves,false,None,Default,true);
      FMemScope::FMemScope((FMemScope *)(local_160 + 8),AudioSoundWaves,true);
      uVar34 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      (pFVar19->NameCached).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
      (pFVar19->NameCached).Number = uVar34;
      pUVar17 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      if (pUVar17 != (UPackage *)0x0) {
        uVar34 = *(undefined4 *)((longlong)&pUVar17->_padding_ + 4);
        (pFVar19->PackageNameCached).ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&pUVar17->_padding_;
        (pFVar19->PackageNameCached).Number = uVar34;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_178.ObjectIndex = 0;
      local_178.ObjectSerialNumber = 0;
      local_168 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_168);
      (pFVar19->SoundWaveKeyCached).ObjectIndex = local_178.ObjectIndex;
      (pFVar19->SoundWaveKeyCached).ObjectSerialNumber = local_178.ObjectSerialNumber;
      fVar35 = GetSampleRateForCurrentPlatform(this);
      pFVar19->SampleRate = fVar35;
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      pFVar19->Duration = fVar1;
      pFVar19->NumChannels = this->NumChannels;
      pFVar19->NumFrames = (int)(fVar1 * fVar35);
      uVar16 = (this->CompressedDataGuid).B;
      uVar8 = (this->CompressedDataGuid).C;
      uVar9 = (this->CompressedDataGuid).D;
      (pFVar19->WaveGuid).A = (this->CompressedDataGuid).A;
      (pFVar19->WaveGuid).B = uVar16;
      (pFVar19->WaveGuid).C = uVar8;
      (pFVar19->WaveGuid).D = uVar9;
      bVar10 = IsStreaming(this,(wchar_t *)0x0);
      pFVar19->bIsStreaming = '\0';
      pFVar19->field_0xe4 = pFVar19->field_0xe4 | bVar10 << 2;
      bVar11 = (**(code **)(this->_padding_ + 0x310))(this);
      pFVar19->field_0xe4 = (pFVar19->bIsLooping ^ bVar11) & 1 ^ pFVar19->field_0xe4;
      bVar10 = UObjectBaseUtility::IsTemplate
                         ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      pFVar19->bIsTemplate = bVar10;
      pFVar19->bIsSeekable = '\0';
      EVar12 = GetSoundAssetCompressionType(this);
      pFVar19->SoundAssetCompressionType = EVar12;
      bVar10 = ShouldUseStreamCaching(this);
      pFVar19->bShouldUseStreamCaching = '\0';
      pFVar19->field_0xe4 = pFVar19->field_0xe4 | bVar10 << 4;
      FSoundWaveData::FindRuntimeFormat(pFVar19,(USoundWave *)local_160);
      FSoundWaveData::CacheRuntimeFormatDependentState(pFVar19,(FName)local_160._0_8_);
      FMemScope::~FMemScope((FMemScope *)(local_160 + 8));
      FLLMScope::~FLLMScope((FLLMScope *)local_res18);
    }
    EVar13 = GetLoadingBehavior(this,true);
    if (((this->Proxy).Object == (FSoundWaveProxy *)0x0) && (EVar13 != ForceInline)) {
      pTVar20 = CreateSoundWaveProxy(this,&local_c8);
      TSharedPtr<FSoundWaveProxy,1>::operator=(&this->Proxy,pTVar20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    bVar10 = ShouldUseStreamCaching(this);
    if (bVar10) {
      pFVar19 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
      if ((pFVar19->RunningPlatformData).Chunks.Array.ArrayNum < 2) {
        bVar11 = 0;
      }
      else {
        uVar16 = FBulkData::GetBulkDataFlags
                           ((FBulkData *)
                            (*(longlong *)
                              ((pFVar19->RunningPlatformData).Chunks.Array.AllocatorInstance.Data +
                              8) + 0x10));
        bVar11 = ~(byte)uVar16 & 1;
      }
      if ((bVar11 == 0) || (bRetainInlinedFirstChunkCVar == 0)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((DisableRetainingCVar == 0) && ((EVar13 == RetainOnLoad || (bVar10)))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (5 < (byte)LogAudioTiming._0_1_) {
        local_160._16_8_ = this->_padding_;
        ::FName::ToString((FName *)(local_160 + 0x10),(FString *)(local_160 + 0x40));
        pwVar21 = L"";
        if (local_118 != 0) {
          pwVar21 = (wchar_t *)local_160._64_8_;
        }
        bVar14 = Audio::MatchesLogFilter(pwVar21);
        if ((wchar_t *)local_160._64_8_ != (wchar_t *)0x0) {
          FMemory::Free((void *)local_160._64_8_);
        }
        if (bVar14) {
          local_170 = (pFVar19->RunningPlatformData).Chunks.Array.ArrayNum;
          pwVar21 = EnumToString(EVar13);
          wcsstr(pwVar21,L"::");
          if (1 < (pFVar19->RunningPlatformData).Chunks.Array.ArrayNum) {
            FBulkData::GetBulkDataSize
                      ((FBulkData *)
                       (*(longlong *)
                         ((pFVar19->RunningPlatformData).Chunks.Array.AllocatorInstance.Data + 8) +
                       0x10));
          }
          pwVar31 = L"true";
          pwVar21 = L"true";
          if (bVar11 == 0) {
            pwVar21 = L"false";
          }
          ::FString::FString(&local_f0,pwVar21);
          if (!bVar10) {
            pwVar31 = L"false";
          }
          ::FString::FString(&local_100,pwVar31);
          local_160._40_8_ = L"";
          if (local_100.Data.ArrayNum != 0) {
            local_160._40_8_ = local_100.Data.AllocatorInstance.Data;
          }
          ::FString::PrintfImpl(&local_110,L"%u");
          local_160._48_8_ = L"";
          if (local_110.Data.ArrayNum != 0) {
            local_160._48_8_ = local_110.Data.AllocatorInstance.Data;
          }
          if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_160._24_8_ = ((this->SoundWaveDataPtr).Object)->RuntimeFormat;
          ::FName::ToString((FName *)(local_160 + 0x18),&local_a8);
          local_160._32_8_ = this->_padding_;
          ::FName::ToString((FName *)(local_160 + 0x20),&local_b8);
          pFVar36 = (FScriptContainerElement *)local_160._48_8_;
          pFVar37 = (FScriptContainerElement *)local_160._40_8_;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
      }
      if (bVar10) {
        RetainCompressedAudio(this,false);
      }
      else {
        ReleaseCompressedAudio(this);
        if ((EVar13 == PrimeOnLoad) && (uVar16 = GetNumChunks(this), 1 < uVar16)) {
          this_00 = IStreamingManager::Get();
          uVar34 = (undefined4)((ulonglong)pFVar36 >> 0x20);
          pIVar22 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
          pFVar36 = (FScriptContainerElement *)CONCAT44(uVar34,0xff);
          local_60 = 0;
          local_78 = &
                     ___7__TFunction_OwnedObject_P6AXW4EAudioChunkLoadResult___Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_70 = `USoundWave::PostLoad'::__l53::<lambda_1>::<lambda_invoker_cdecl>;
          local_88[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<void_(__cdecl*)(enum_EAudioChunkLoadResult),void,enum_EAudioChunkLoadResult>
                        ::Call;
          (**(code **)(*(longlong *)pIVar22 + 0xa8))
                    (pIVar22,&this->Proxy,1,local_88,pFVar36,(ulonglong)pFVar37 & 0xffffffffffffff00
                    );
        }
      }
      if (DisableRetainingCVar != 0) {
        ReleaseCompressedAudio(this);
      }
      bVar10 = IsStreaming(this,(wchar_t *)0x0);
      this->bStreaming = '\0';
      this->field_0x19b = this->field_0x19b | bVar10 * '\x02';
    }
    uVar25 = (ulonglong)_tls_index;
  }
  pIVar23 = GetTargetPlatformManager(true);
  if ((pIVar23 != (ITargetPlatformManagerModule *)0x0) &&
     (bVar10 = IsStreaming(this,(wchar_t *)0x0), !bVar10)) {
    pFVar24 = (FObjectKey *)(**(code **)((longlong)*pIVar23 + 0x90))(pIVar23);
    FVar33 = *pFVar24;
    local_res18[0] = pFVar24[1].ObjectIndex;
    uVar25 = (ulonglong)(int)local_res18[0];
    FVar32 = (FObjectKey)((longlong)FVar33 + uVar25 * 8);
    local_178 = (FWeakObjectPtr)FVar32;
    while( true ) {
      if (pFVar24[1].ObjectIndex != (int)uVar25) {
        `TCheckedPointerIterator<ITargetPlatform_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (FVar33 == FVar32) break;
      plVar4 = *(longlong **)FVar33;
      cVar15 = (**(code **)(plVar4[1] + 0x170))(plVar4 + 1);
      if (cVar15 != '\0') {
        pcVar6 = *(code **)(this->_padding_ + 0x400);
        puVar26 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4);
        if (*(int *)(puVar26 + 1) == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)*puVar26;
        }
        FPlatformCompressionUtilities::GetCookOverrides(pwVar21,false);
        puVar26 = (undefined8 *)(**(code **)(plVar4[1] + 0x158))(plVar4 + 1,local_e0,this);
        (*pcVar6)(this,*puVar26);
        FVar32 = (FObjectKey)local_178;
        if (local_98 != (void *)0x0) {
          FMemory::Free(local_98);
          FVar32 = (FObjectKey)local_178;
        }
      }
      uVar25 = (ulonglong)local_res18[0];
      FVar33 = (FObjectKey)((longlong)FVar33 + 8);
    }
    uVar25 = (ulonglong)_tls_index;
  }
  bVar10 = UObjectBaseUtility::IsTemplate((UObjectBaseUtility *)this,RF_ClassDefaultObject);
  if (((!bVar10) && (GEngine != (UEngine *)0x0)) &&
     (pFVar27 = UEngine::GetMainAudioDeviceRaw(GEngine), pFVar27 != (FAudioDevice *)0x0)) {
    (**(code **)(pFVar27->_padding_ + 0x60))
              (pFVar27,this,0,1,(ulonglong)pFVar36 & 0xffffffffffffff00);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    pwVar21 = FCommandLine::Get();
    bVar10 = FParse::Param(pwVar21,L"nosound");
    if (bVar10) {
      pwVar21 = FCommandLine::Get();
      bVar10 = FParse::Param(pwVar21,L"enablesound");
      if (bVar10) goto LAB_1486e1a86;
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           true;
    }
    else {
LAB_1486e1a86:
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
           false;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if (((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio == false) &&
      (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
       == false)) && (bVar10 = IsStreaming(this,(wchar_t *)0x0), bVar10)) {
    LoadZerothChunk(this);
  }
  dVar7 = (double)*(float *)((longlong)&this->_padding_ + 4);
  if (dVar7 != 0.0) {
    FVar29 = StatPtr_STAT_AudioBufferTime;
    if (StatPtr_STAT_AudioBufferTime == (FThreadSafeStaticStat<FStat_STAT_AudioBufferTime>)0x0) {
      pFVar28 = ::FName::FName(&local_d8,"STAT_AudioBufferTime");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_AudioBufferTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioBufferTime,*pFVar28,
                          L"Audio Buffer Time","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,
                          false,NumBits,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar29;
    local_res10 = (uint)FVar5.ComparisonIndex.Value;
    uStackX_14 = FVar5.Number;
    FThreadStats::AddMessage<double>(FVar5,Add,dVar7,false);
  }
  dVar7 = (double)((float)this->NumChannels * *(float *)((longlong)&this->_padding_ + 4));
  if (dVar7 != 0.0) {
    FVar30 = StatPtr_STAT_AudioBufferTimeChannels;
    if (StatPtr_STAT_AudioBufferTimeChannels ==
        (FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels>)0x0) {
      pFVar28 = ::FName::FName(&local_d0,"STAT_AudioBufferTimeChannels");
      FVar30 = (FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioBufferTimeChannels,
                          *pFVar28,L"Audio Buffer Time (w/ Channels)","STATGROUP_Audio",
                          "STATCAT_Advanced",L"Audio",true,false,NumBits,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar30;
    local_res10 = (uint)FVar5.ComparisonIndex.Value;
    uStackX_14 = FVar5.Number;
    FThreadStats::AddMessage<double>(FVar5,Add,dVar7,false);
  }
LAB_1486e194c:
  FMemScope::~FMemScope((FMemScope *)(local_160 + 0x38));
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// ReleaseCompressedAudio @ 1486e6140

void __thiscall USoundWave::ReleaseCompressedAudio(USoundWave *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioChunkHandle *pFVar3;
  FAudioChunkHandle local_38;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x12ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FAudioChunkHandle::FAudioChunkHandle(&local_38);
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FAudioChunkHandle::operator=(&((this->SoundWaveDataPtr).Object)->FirstChunk,pFVar3);
  FAudioChunkHandle::~FAudioChunkHandle(&local_38);
  return;
}

// RemoveAudioResource @ 1486e7f50

void __thiscall USoundWave::RemoveAudioResource(USoundWave *this)

{
  FSoundWaveData *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0xa4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((this->SoundWaveDataPtr).Object)->ResourceSize = 0;
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  puVar2 = (pFVar1->ResourceData).View.DataPtr;
  if (puVar2 != (uchar *)0x0) {
    FMemory::Free(puVar2);
  }
  (pFVar1->ResourceData).View.DataPtr = (uchar *)0x0;
  (pFVar1->ResourceData).View.ArrayNum = 0;
  return;
}

// RemovePlayingSource @ 1486e8c90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundWave::RemovePlayingSource(USoundWave *this,ISoundWaveClient **param_1)

{
  FMutex *this_00;
  FScriptContainerElement *pFVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  if (*param_1 != (ISoundWaveClient *)0x0) {
    this_00 = &this->SourcesPlayingCs;
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(this_00);
    }
    pFVar4 = (this->SourcesPlaying).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)(this->SourcesPlaying).ArrayNum * 8;
    if (pFVar4 != pFVar1) {
      do {
        if (*(ISoundWaveClient **)pFVar4 == *param_1) goto LAB_1486e8d19;
        pFVar4 = pFVar4 + 8;
      } while (pFVar4 != pFVar1);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourcesPlaying.Contains(Source)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x10c4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_1486e8d19:
    TArray<ISoundWaveClient_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->SourcesPlaying,param_1,Default);
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// ResetError @ 1486ea2a0

void __thiscall USoundWave::ResetError(USoundWave *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1598,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ((this->SoundWaveDataPtr).Object)->bHasError = '\0';
  return;
}

// ResetInvalidTemplateArguments @ 1486ea4c0

void __thiscall USoundWave::ResetInvalidTemplateArguments(USoundWave *this)

{
  this->NumChannels = 0;
  return;
}

// RetainCompressedAudio @ 1486eb940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundWave::RetainCompressedAudio(USoundWave *this,bool param_1)

{
  TSharedPtr<FSoundWaveData,1> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSoundWaveData *pFVar4;
  TSharedPtr<FSoundWaveProxy,1> *pTVar5;
  FStreamingManagerCollection *this_01;
  IAudioStreamingManager *pIVar6;
  FAudioChunkHandle *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  int *piVar10;
  FWeakObjectPtr local_res8 [2];
  FName local_res18;
  USoundWave *local_res20;
  uint in_stack_ffffffffffffff00;
  FString local_f8;
  FString local_e8;
  TSharedPtr<FSoundWaveProxy,1> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  code *local_98 [2];
  undefined **local_88;
  FWeakObjectPtr local_80;
  undefined8 local_70;
  FAudioChunkHandle local_68;
  
  this_00 = &this->SoundWaveDataPtr;
  if ((this_00->Object == (FSoundWaveData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x126d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return;
  }
  bVar2 = IsStreaming(this,(wchar_t *)0x0);
  if (!bVar2) {
    return;
  }
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ <= *piVar10) ||
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_1486eb9e9;
  pwVar9 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar9,L"nosound");
  if (bVar2) {
    pwVar9 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar9,L"enablesound");
    if (bVar2) goto LAB_1486ebd9e;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_1486ebd9e:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_1486eb9e9:
  if ((*piVar10 <
       `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if ((((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
         bApplicationTypeDoesNotRenderAudio == false) &&
       (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
        == false)) && (DisableRetainingCVar == 0)) && (uVar3 = GetNumChunks(this), 1 < uVar3)) {
    pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
    bVar2 = FAudioChunkHandle::IsValid(&pFVar4->FirstChunk);
    if (!bVar2) {
      if (param_1) {
        if ((this->Proxy).Object == (FSoundWaveProxy *)0x0) {
          pTVar5 = CreateSoundWaveProxy(this,&local_d8);
          TSharedPtr<FSoundWaveProxy,1>::operator=(&this->Proxy,pTVar5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
        }
        this_01 = IStreamingManager::Get();
        pIVar6 = FStreamingManagerCollection::GetAudioStreamingManager(this_01);
        pFVar7 = (FAudioChunkHandle *)
                 (**(code **)(*(longlong *)pIVar6 + 0xb0))
                           (pIVar6,&local_68,&this->Proxy,1,1,in_stack_ffffffffffffff00 & 0xffffff00
                           );
        pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
        FAudioChunkHandle::operator=(&pFVar4->FirstChunk,pFVar7);
        FAudioChunkHandle::~FAudioChunkHandle(&local_68);
        if (5 < (byte)LogAudioTiming._0_1_) {
          local_res18 = (FName)this->_padding_;
          ::FName::ToString(&local_res18,&local_f8);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_f8.Data.ArrayNum != 0) {
            FVar8.Data = local_f8.Data.AllocatorInstance.Data;
          }
          bVar2 = Audio::MatchesLogFilter((wchar_t *)FVar8.Data);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
            bVar2 = FAudioChunkHandle::IsValid(&pFVar4->FirstChunk);
            if (bVar2) {
              pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
              FAudioChunkHandle::Num(&pFVar4->FirstChunk);
            }
            pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
            pwVar9 = L"true";
            if (pFVar4->bIsLooping == 0) {
              pwVar9 = L"false";
            }
            ::FString::FString(&local_e8,pwVar9);
            pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
            ::FName::ToString(&pFVar4->RuntimeFormat,&local_b8);
            pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
            ::FName::ToString(&pFVar4->NameCached,&local_c8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudioTiming);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
        }
        if (3 < (byte)LogAudio._0_1_) {
          pFVar4 = TSharedPtr<FSoundWaveData,1>::operator->(this_00);
          bVar2 = FAudioChunkHandle::IsValid(&pFVar4->FirstChunk);
          if (!bVar2) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_a8,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (USoundWave *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_res8[0].ObjectIndex = 0;
        local_res8[0].ObjectSerialNumber = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (USoundWave *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
        local_70 = 0;
        local_88 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`USoundWave::RetainCompressedAudio'::`68'::<lambda_1>,0,0>
                    ::_vftable_;
        local_80 = local_res8[0];
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USoundWave::RetainCompressedAudio'::__l68::<lambda_1>,void,FAudioChunkHandle_&&>
                      ::Call;
        GetHandleForChunkOfAudio
                  (this,(TFunction<void___cdecl(FAudioChunkHandle_&&)> *)local_98,false,1,GameThread
                  );
      }
    }
  }
  return;
}

// Serialize @ 1486ed3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundWave::Serialize(USoundWave *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
  FVar16;
  undefined8 *puVar17;
  FPlatformAudioCookOverrides *pFVar18;
  ITargetPlatformManagerModule *pIVar19;
  undefined8 uVar20;
  FString *pFVar21;
  FSoundWaveData *pFVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  wchar_t *pwVar23;
  FName FVar24;
  ForAnyElementType FVar25;
  float fVar26;
  bool local_res10;
  FLLMScope local_res20 [2];
  uint local_118 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_110;
  FName local_100;
  FName local_f8;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  undefined8 local_e0;
  FName local_d8;
  FString local_c8;
  LARGE_INTEGER local_b8;
  FMemScope local_b0;
  FStatMessage local_a8;
  FName local_98;
  FName local_90;
  FString local_88;
  void *local_78 [2];
  void *local_68;
  FString local_58;
  
  FLLMScope::FLLMScope(local_res20,AudioSoundWaves,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,AudioSoundWaves,true);
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoundWaveDataPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                          ,0x4b2,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar11 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SoundWave_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
         )0x0) {
      pFVar15 = ::FName::FName(&local_98,"STAT_SoundWave_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SoundWave_Serialize,*pFVar15,
                 L"USoundWave::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_SoundWave_Serialize;
  if (StatPtr_STAT_SoundWave_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
       )0x0) {
    pFVar15 = ::FName::FName(&local_90,"STAT_SoundWave_Serialize");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USoundWave::Serialize(FArchive_&)_::_2_::FStat_STAT_SoundWave_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SoundWave_Serialize,*pFVar15,
                          L"USoundWave::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar16;
  bVar9 = false;
  bVar8 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar13 = false;
  bVar10 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_1486ed5b1:
    bVar9 = bVar13;
    bVar8 = bVar10;
    bVar10 = false;
    FVar24 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar13 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_e8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                   ,0x4b4);
        bVar9 = true;
        bVar8 = true;
        bVar13 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1486ed5b1;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar10 = true;
  }
  UObject::Serialize((UObject *)this,param_1);
  local_118[0] = 0;
  if ((((param_1->field_0x28 & 4) != 0) && (*(longlong *)&param_1->field_0x68 != 0)) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    local_118[0] = 1;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_118);
    }
  }
  else {
    local_118[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar5 = local_118[0] & 1;
  uVar6 = local_118[0] & 1;
  uVar7 = local_118[0] & 1;
  if (((local_118[0] & 1) == 0) && ((param_1->field_0x28 & 1) != 0)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_88,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1);
  if ((((param_1->field_0x28 & 1) != 0) && (0x187 < *(int *)&param_1->field_0x40)) &&
     (iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID),
     iVar14 < 0xc)) {
    local_e0 = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1);
  }
  local_res10 = false;
  if (((param_1->field_0x28 & 4) == 0) &&
     ((*(longlong *)&param_1->field_0x68 == 0 ||
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) {
    local_res10 = IsStreaming(this,(wchar_t *)0x0);
  }
  else if ((*(longlong *)&param_1->field_0x68 != 0) &&
          (plVar2 = *(longlong **)(*(longlong *)&param_1->field_0x68 + 8), plVar2 != (longlong *)0x0
          )) {
    puVar17 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2,local_78);
    if (*(int *)(puVar17 + 1) == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)*puVar17;
    }
    local_res10 = IsStreaming(this,pwVar23);
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    lVar3 = *(longlong *)&param_1->field_0x68;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
      cVar12 = (**(code **)(**(longlong **)(lVar3 + 8) + 200))(*(longlong **)(lVar3 + 8),0);
      bVar11 = false;
      if (cVar12 != '\0') {
        bVar11 = true;
      }
    }
  }
  else {
    bVar11 = true;
  }
  pcVar4 = *(code **)(this->_padding_ + 0x3b0);
  if ((uVar5 == 0) || ((param_1->field_0x28 & 1) == 0)) {
    (*pcVar4)(this,param_1);
    if (uVar6 == 0) goto LAB_1486edae6;
  }
  else {
    (*pcVar4)(this,param_1);
  }
  if ((local_res10 == false) || (!bVar11)) {
    lVar3 = *(longlong *)&param_1->field_0x68;
    if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) {
      pFVar22 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
      FFormatContainer::Serialize
                (&pFVar22->CompressedFormatData,param_1,(UObject *)this,
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0,true,0,true,false);
    }
    else {
      local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.ArrayNum = 0;
      local_110.ArrayMax = 0;
      plVar2 = *(longlong **)(lVar3 + 8);
      cVar12 = (**(code **)(plVar2[1] + 0x170))(plVar2 + 1);
      if (cVar12 != '\0') {
        (**(code **)(plVar2[1] + 0x158))(plVar2 + 1,&local_100,this);
        puVar17 = (undefined8 *)(**(code **)(*plVar2 + 8))(plVar2);
        if (*(int *)(puVar17 + 1) == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)*puVar17;
        }
        pFVar18 = FPlatformCompressionUtilities::GetCookOverrides(pwVar23,false);
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        pcVar4 = *(code **)(this->_padding_ + 0x408);
        pIVar19 = GetTargetPlatformManager(true);
        uVar20 = 0;
        if (pIVar19 != (ITargetPlatformManagerModule *)0x0) {
          uVar20 = (**(code **)((longlong)*pIVar19 + 0xa8))(pIVar19);
        }
        (*pcVar4)(this,local_100,pFVar18,uVar20);
        if (pFVar18 == (FPlatformAudioCookOverrides *)0x0) {
          if (((local_110.AllocatorInstance.Data <= &local_100) &&
              (&local_100 <
               (FName *)(local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 8))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar14 = local_110.ArrayNum;
          if (local_110.ArrayNum == local_110.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_110.AllocatorInstance,&local_110.ArrayMax);
          }
          local_110.ArrayNum = iVar14 + 1;
          *(FName *)(local_110.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_100;
        }
        else {
          pFVar21 = ::FName::ToString(&local_100,&local_58);
          if ((pFVar21->Data).ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
          }
          ::FString::FString(&local_c8,pwVar23);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          FPlatformAudioCookOverrides::GetHashSuffix(pFVar18,&local_c8);
          FVar25.Data = (FScriptContainerElement *)L"";
          if (local_c8.Data.ArrayNum != 0) {
            FVar25.Data = local_c8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_f8,(wchar_t *)FVar25.Data);
          if (((local_110.AllocatorInstance.Data <= &local_f8) &&
              (&local_f8 <
               (FName *)(local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 8))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar14 = local_110.ArrayNum;
          if (local_110.ArrayNum == local_110.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_110.AllocatorInstance,&local_110.ArrayMax);
          }
          local_110.ArrayNum = iVar14 + 1;
          *(FName *)(local_110.AllocatorInstance.Data + (longlong)iVar14 * 8) = local_f8;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
      cVar12 = (**(code **)(*plVar2 + 200))(plVar2,0x12);
      if ((cVar12 == '\0') || (cVar12 = (**(code **)(*plVar2 + 200))(plVar2,0x13), cVar12 == '\0'))
      {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      pFVar22 = TSharedPtr<FSoundWaveData,1>::operator->(&this->SoundWaveDataPtr);
      FFormatContainer::Serialize
                (&pFVar22->CompressedFormatData,param_1,(UObject *)this,&local_110,true,0,
                 (bool)(bVar13 ^ 1),bVar13);
      if ((FName *)local_110.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
    }
  }
LAB_1486edae6:
  ::operator<<(param_1,&this->CompressedDataGuid);
  if ((((param_1->field_0x28 & 1) != 0) && (((byte)local_118[0] & 3) == 3)) &&
     (this->LoadingBehavior != ForceInline)) {
    this->LoadingBehavior =
         (ESoundWaveLoadingBehavior)(local_118[0] >> 2) & (ForceInline|LoadOnDemand);
  }
  if (((local_res10 != false) && (uVar7 != 0)) && (bVar11)) {
    (**(code **)(this->_padding_ + 0x418))(this,param_1);
  }
  bVar11 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar11) && ((param_1->field_0x28 & 1) != 0)) {
    fVar26 = GetSampleRateForCurrentPlatform(this);
    this->SampleRate = (int)fVar26;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
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
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Serialize @ 1486edd40

void __thiscall USoundWave::Serialize(USoundWave *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeCuePoints @ 1486edd90

void __thiscall USoundWave::SerializeCuePoints(USoundWave *this,FArchive *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) || (param_2)) {
    TArrayPrivateFriend::Serialize<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_>
              (param_1,&local_18);
    if (param_2) {
      if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FSoundWaveData::SetAllCuePoints((this->SoundWaveDataPtr).Object,&local_18);
    }
  }
  DestructItems<FSoundWaveCuePoint,int>
            ((FSoundWaveCuePoint *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FSoundWaveCuePoint *)local_18.AllocatorInstance.Data != (FSoundWaveCuePoint *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetAllCuePoints @ 1486ee0e0

void __thiscall
USoundWave::SetAllCuePoints
          (USoundWave *this,TArray<FSoundWaveCuePoint,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSoundWaveData::SetAllCuePoints((this->SoundWaveDataPtr).Object,param_1);
  DestructItems<FSoundWaveCuePoint,int>
            ((FSoundWaveCuePoint *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetError @ 1486ee390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundWave::SetError(USoundWave *this,wchar_t *param_1)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundWaveDataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                         ,0x1592,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if ((2 < (byte)LogAudio._0_1_) && (pFVar1->bHasError == '\0')) {
    ::FName::ToString(&pFVar1->PackageNameCached,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1->bHasError = '\x01';
  return;
}

// SetNumFrames @ 1486eee00

void __thiscall USoundWave::SetNumFrames(USoundWave *this,uint param_1)

{
  FSoundWaveData *pFVar1;
  
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1 != (FSoundWaveData *)0x0) {
    pFVar1->NumFrames = param_1;
  }
  return;
}

// SetSampleRate @ 1486ef540

void __thiscall USoundWave::SetSampleRate(USoundWave *this,uint param_1,bool param_2)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->SoundWaveDataPtr).Object;
  if (pFVar1 != (FSoundWaveData *)0x0) {
    if ((int)param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1->SampleRate = (float)(int)param_1;
  }
  this->SampleRate = param_1;
  if (param_2) {
    this->bCachedSampleRateFromPlatformSettings = '\0';
    this->bSampleRateManuallyReset = '\x01';
  }
  return;
}

// SetSoundAssetCompressionType @ 1486efa70

void __thiscall
USoundWave::SetSoundAssetCompressionType
          (USoundWave *this,ESoundAssetCompressionType param_1,bool param_2)

{
  return;
}

// ShouldUseStreamCaching @ 1486f0f90

bool __thiscall USoundWave::ShouldUseStreamCaching(USoundWave *this)

{
  FSoundWaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SoundWaveDataPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundWave.cpp"
                       ,0x1035,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = IsStreaming(this,(wchar_t *)0x0);
  if ((this->SoundWaveDataPtr).Object == (FSoundWaveData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->SoundWaveDataPtr).Object;
  pFVar1->bShouldUseStreamCaching = bVar3;
  return bVar3;
}

// StaticRegisterNativesUSoundWave @ 1486f1ad0

void __cdecl USoundWave::StaticRegisterNativesUSoundWave(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_USoundWave_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsSubtitles @ 1486f23b0

bool __thiscall USoundWave::SupportsSubtitles(USoundWave *this)

{
  if ((*(char *)((longlong)&this->_padding_ + 1) != '\x01') && ((this->Subtitles).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// UpdatePlatformData @ 1486f5f60

void __thiscall USoundWave::UpdatePlatformData(USoundWave *this)

{
  TSharedPtr<FSoundWaveProxy,1> *pTVar1;
  bool bVar2;
  TSharedPtr<FSoundWaveProxy,1> *pTVar3;
  wchar_t *pwVar4;
  int *piVar5;
  TSharedPtr<FSoundWaveProxy,1> local_18;
  
  bVar2 = IsStreaming(this,(wchar_t *)0x0);
  if (!bVar2) {
    return;
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
       _thread_safe_static_guard_0__ <= *piVar5) ||
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_0__ != -1)) goto LAB_1486f5fa6;
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar4,L"nosound");
  if (bVar2) {
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"enablesound");
    if (bVar2) goto LAB_1486f6075;
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         true;
  }
  else {
LAB_1486f6075:
    `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline =
         false;
  }
  _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                       _thread_safe_static_guard_0__);
LAB_1486f5fa6:
  if ((*piVar5 < `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                 _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                           _thread_safe_static_guard_1__),
     `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
     _thread_safe_static_guard_1__ == -1)) {
    if ((FApp::bIsBenchmarking == false) &&
       ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletAudio != false)))) {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = false;
    }
    else {
      `public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
      bApplicationTypeDoesNotRenderAudio = true;
    }
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
                         _thread_safe_static_guard_1__);
  }
  if (((`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::
        bApplicationTypeDoesNotRenderAudio == false) &&
      (`public:_static_bool___cdecl_FApp::CanEverRenderAudio(void)'::__l2::bHasNoAudioOnCommandline
       == false)) && (pTVar1 = &this->Proxy, pTVar1->Object == (FSoundWaveProxy *)0x0)) {
    pTVar3 = CreateSoundWaveProxy(this,&local_18);
    if (pTVar1 != pTVar3) {
      pTVar1->Object = pTVar3->Object;
      pTVar3->Object = (FSoundWaveProxy *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Proxy).SharedReferenceCount,&pTVar3->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// execGetCuePoints @ 1486fac70

void __cdecl USoundWave::execGetCuePoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSoundWaveCuePoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x19].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar4 = *(int *)(*(longlong *)&param_1[0x19].field_0x10 + 0xa8);
  pFVar1 = *(FSoundWaveCuePoint **)(*(longlong *)&param_1[0x19].field_0x10 + 0xa0);
  local_10 = CONCAT44(local_10._4_4_,iVar4);
  if (iVar4 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,&local_18,iVar4,(int *)((longlong)&local_10 + 4));
    ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int>(local_18.Data,pFVar1,iVar4);
  }
  iVar4 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FSoundWaveCuePoint,int>
              (*(FSoundWaveCuePoint **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar4 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FSoundWaveCuePoint,int>((FSoundWaveCuePoint *)local_18.Data,iVar4);
  if ((FSoundWaveCuePoint *)local_18.Data != (FSoundWaveCuePoint *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetLoopRegions @ 1486fadb0

void __cdecl USoundWave::execGetLoopRegions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSoundWaveCuePoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x19].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar4 = *(int *)(*(longlong *)&param_1[0x19].field_0x10 + 0xb8);
  pFVar1 = *(FSoundWaveCuePoint **)(*(longlong *)&param_1[0x19].field_0x10 + 0xb0);
  local_10 = CONCAT44(local_10._4_4_,iVar4);
  if (iVar4 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar4,0,&local_18,iVar4,(int *)((longlong)&local_10 + 4));
    ConstructItems<FSoundWaveCuePoint,FSoundWaveCuePoint,int>(local_18.Data,pFVar1,iVar4);
  }
  iVar4 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FSoundWaveCuePoint,int>
              (*(FSoundWaveCuePoint **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar4 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FSoundWaveCuePoint,int>((FSoundWaveCuePoint *)local_18.Data,iVar4);
  if ((FSoundWaveCuePoint *)local_18.Data != (FSoundWaveCuePoint *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetSoundAssetCompressionType @ 1486faef0

void __cdecl
USoundWave::execGetSoundAssetCompressionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESoundAssetCompressionType EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetSoundAssetCompressionType((USoundWave *)param_1);
  *(ESoundAssetCompressionType *)param_3 = EVar1;
  return;
}

// execSetSoundAssetCompressionType @ 1486fb620

void __cdecl
USoundWave::execSetSoundAssetCompressionType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// operator() @ 15052f800

bool __thiscall
`USoundWave::CacheInheritedLoadingBehavior'::__l26::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5972747921735554008>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735554008>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f86d;
    }
  }
  bVar2 = false;
LAB_15052f86d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15052f8a0

bool __thiscall `USoundWave::GetNumChunks'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5972747921735551405>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5972747921735551405>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052f915;
    }
  }
  bVar2 = false;
LAB_15052f915:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

