// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// IStreamedCompressedInfo @ 14761e180

IStreamedCompressedInfo * __thiscall
IStreamedCompressedInfo::IStreamedCompressedInfo(IStreamedCompressedInfo *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IStreamedCompressedInfo__6B_;
  this->bIsStreaming = false;
  this->SrcBufferData = (uchar *)0x0;
  this->SrcBufferDataSize = 0;
  this->SrcBufferOffset = 0;
  this->AudioDataOffset = 0;
  this->AudioDataChunkIndex = 0;
  this->TrueSampleCount = 0;
  this->CurrentSampleCount = 0;
  this->NumChannels = '\0';
  this->MaxFrameSizeSamples = 0;
  this->SampleStride = 0;
  (this->LastDecodedPCM).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastDecodedPCM).ArrayNum = 0;
  (this->LastDecodedPCM).ArrayMax = 0;
  this->LastPCMByteSize = 0;
  this->LastPCMOffset = 0;
  this->bStoringEndOfFile = false;
  this->CurrentChunkIndex = 0;
  this->SrcBufferPadding = 0;
  FAudioChunkHandle::FAudioChunkHandle(&this->CurCompressedChunkHandle);
  FAudioChunkHandle::FAudioChunkHandle(&this->NextPlayingChunkHandle);
  (this->CurrentChunkSeekTable).Ptr = (FStreamedAudioChunkSeekTable *)0x0;
  this->StreamSeekBlockIndex = (atomic<int>)0xffffffff;
  this->StreamSeekBlockOffset = 0;
  this->StreamSeekToAudioFrames = 0xffffffff;
  return this;
}

// ~IStreamedCompressedInfo @ 147621660

void __thiscall IStreamedCompressedInfo::~IStreamedCompressedInfo(IStreamedCompressedInfo *this)

{
  FStreamedAudioChunkSeekTable *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7IStreamedCompressedInfo__6B_;
  pFVar1 = (this->CurrentChunkSeekTable).Ptr;
  if (pFVar1 != (FStreamedAudioChunkSeekTable *)0x0) {
    (*(code *)pFVar1[-1].Impl.Ptr)(pFVar1 + -1);
  }
  FAudioChunkHandle::~FAudioChunkHandle(&this->NextPlayingChunkHandle);
  FAudioChunkHandle::~FAudioChunkHandle(&this->CurCompressedChunkHandle);
  pFVar2 = (this->LastDecodedPCM).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ICompressedAudioInfo__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// DecompressToPCMBuffer @ 147632690

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
IStreamedCompressedInfo::DecompressToPCMBuffer(IStreamedCompressedInfo *this,ushort param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  TSharedPtr<FSoundWaveProxy,1> *pTVar4;
  FSoundWaveProxy *pFVar5;
  TSharedPtr<FSoundWaveData,1> *pTVar6;
  FSoundWaveData *pFVar7;
  undefined6 in_register_00000012;
  int local_38 [2];
  int local_30;
  TSharedPtr<FSoundWaveData,1> local_28;
  TSharedPtr<FSoundWaveData,1> local_18;
  
  if (this->SrcBufferDataSize - this->SrcBufferPadding <= this->SrcBufferOffset) {
    return 0;
  }
  iVar2 = (**(code **)(this->_padding_ + 0xb8))(this,CONCAT62(in_register_00000012,param_1));
  if (iVar2 < 1) {
    if ((byte)LogAudio._0_1_ < 3) {
      return -1;
    }
    pTVar4 = (TSharedPtr<FSoundWaveProxy,1> *)(**(code **)(this->_padding_ + 0x90))(this);
    pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(pTVar4);
    pTVar6 = FSoundWaveProxy::GetSoundWaveData(pFVar5,&local_18);
    pFVar7 = TSharedPtr<FSoundWaveData,1>::operator->(pTVar6);
    ::FName::ToString(&pFVar7->NameCached,(FString *)&local_28);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    local_28.SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_28.Object != (FSoundWaveData *)0x0) {
      FMemory::Free(local_28.Object);
      local_28.SharedReferenceCount.ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    uVar1 = this->SrcBufferOffset;
    uVar3 = iVar2 + uVar1;
    if (this->SrcBufferDataSize < uVar3) {
      if ((byte)LogAudio._0_1_ < 3) {
        return -1;
      }
      pTVar4 = (TSharedPtr<FSoundWaveProxy,1> *)(**(code **)(this->_padding_ + 0x90))(this);
      pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(pTVar4);
      pTVar6 = FSoundWaveProxy::GetSoundWaveData(pFVar5,&local_28);
      pFVar7 = TSharedPtr<FSoundWaveData,1>::operator->(pTVar6);
      ::FName::ToString(&pFVar7->NameCached,(FString *)&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    else {
      this->SrcBufferOffset = uVar3;
      this->LastPCMOffset = 0;
      (**(code **)(this->_padding_ + 0xa8))
                (this,local_38,this->SrcBufferData + uVar1,iVar2,
                 (this->LastDecodedPCM).AllocatorInstance.Data,(this->LastDecodedPCM).ArrayNum);
      if (local_38[0] != -1) {
        this->SrcBufferOffset = this->SrcBufferOffset + (local_38[0] - iVar2);
        return local_30;
      }
      if ((byte)LogAudio._0_1_ < 3) {
        return -1;
      }
      pTVar4 = (TSharedPtr<FSoundWaveProxy,1> *)(**(code **)(this->_padding_ + 0x90))(this);
      pFVar5 = TSharedPtr<FSoundWaveProxy,1>::operator->(pTVar4);
      pTVar6 = FSoundWaveProxy::GetSoundWaveData(pFVar5,&local_28);
      pFVar7 = TSharedPtr<FSoundWaveData,1>::operator->(pTVar6);
      ::FName::ToString(&pFVar7->NameCached,(FString *)&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    if (local_18.Object != (FSoundWaveData *)0x0) {
      FMemory::Free(local_18.Object);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return -1;
}

// ExpandFile @ 1476381e0

void __thiscall
IStreamedCompressedInfo::ExpandFile
          (IStreamedCompressedInfo *this,uchar *param_1,FSoundQualityInfo *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 == (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DstBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0xdb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == (FSoundQualityInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("QualityInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0xdc,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = 0;
  this->SrcBufferOffset = this->AudioDataOffset;
  if (param_2->SampleDataSize != 0) {
    do {
      iVar6 = DecompressToPCMBuffer(this,0);
      if (iVar6 < 0) {
        uVar8 = param_2->SampleDataSize - uVar9;
        if ((param_1 + uVar9 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Destination",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                               ,0x2d1,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          memset(param_1 + uVar9,0,(ulonglong)uVar8);
        }
      }
      else {
        iVar6 = (uint)this->NumChannels * iVar6;
        if ((this->TrueSampleCount < this->CurrentSampleCount) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentSampleCount <= TrueSampleCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                               ,0x27a,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = this->TrueSampleCount;
        uVar2 = this->CurrentSampleCount;
        uVar8 = uVar2 + iVar6;
        uVar7 = uVar1;
        if (uVar8 <= uVar1) {
          uVar7 = uVar8;
        }
        this->CurrentSampleCount = uVar7;
        iVar4 = uVar1 - uVar2;
        if (uVar8 <= uVar1) {
          iVar4 = iVar6;
        }
        this->LastPCMByteSize = iVar4 * 2;
        uVar8 = WriteFromDecodedPCM(this,param_1 + uVar9,param_2->SampleDataSize - uVar9);
      }
      uVar9 = uVar9 + uVar8;
    } while (uVar9 < param_2->SampleDataSize);
  }
  return;
}

// GetCurrentSeekTable @ 14763bc80

FStreamedAudioChunkSeekTable * __thiscall
IStreamedCompressedInfo::GetCurrentSeekTable(IStreamedCompressedInfo *this)

{
  FStreamedAudioChunkSeekTable *pFVar1;
  TPimplPtr<FStreamedAudioChunkSeekTable,0> *pTVar2;
  FStreamedAudioChunkSeekTable *pFVar3;
  undefined8 *puVar4;
  longlong local_18 [2];
  
  pTVar2 = &this->CurrentChunkSeekTable;
  if (pTVar2->Ptr != (FStreamedAudioChunkSeekTable *)0x0) {
    return pTVar2->Ptr;
  }
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = UE::Core::Private::PimplPtr::DeleterFunc<FStreamedAudioChunkSeekTable>;
    FStreamedAudioChunkSeekTable::FStreamedAudioChunkSeekTable
              ((FStreamedAudioChunkSeekTable *)(puVar4 + 2),ConstantSamplesPerEntry);
  }
  pFVar1 = (FStreamedAudioChunkSeekTable *)(puVar4 + 2);
  if ((TPimplPtr<FStreamedAudioChunkSeekTable,0> *)local_18 == pTVar2) {
    if (pFVar1 != (FStreamedAudioChunkSeekTable *)0x0) {
      (*(code *)*puVar4)(puVar4);
      return pTVar2->Ptr;
    }
  }
  else {
    pFVar3 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar1;
    if (pFVar3 == (FStreamedAudioChunkSeekTable *)0x0) {
      return pFVar1;
    }
    (*(code *)pFVar3[-1].Impl.Ptr)(pFVar3 + -1);
  }
  return pTVar2->Ptr;
}

// GetCurrentSeekTable @ 14763bd30

FStreamedAudioChunkSeekTable * __thiscall
IStreamedCompressedInfo::GetCurrentSeekTable(IStreamedCompressedInfo *this)

{
  FStreamedAudioChunkSeekTable *pFVar1;
  TPimplPtr<FStreamedAudioChunkSeekTable,0> *pTVar2;
  FStreamedAudioChunkSeekTable *pFVar3;
  undefined8 *puVar4;
  longlong alStack_18 [2];
  
  pTVar2 = &this->CurrentChunkSeekTable;
  if (pTVar2->Ptr != (FStreamedAudioChunkSeekTable *)0x0) {
    return pTVar2->Ptr;
  }
  puVar4 = ::operator_new(0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = UE::Core::Private::PimplPtr::DeleterFunc<FStreamedAudioChunkSeekTable>;
    FStreamedAudioChunkSeekTable::FStreamedAudioChunkSeekTable
              ((FStreamedAudioChunkSeekTable *)(puVar4 + 2),ConstantSamplesPerEntry);
  }
  pFVar1 = (FStreamedAudioChunkSeekTable *)(puVar4 + 2);
  if ((TPimplPtr<FStreamedAudioChunkSeekTable,0> *)alStack_18 == pTVar2) {
    if (pFVar1 != (FStreamedAudioChunkSeekTable *)0x0) {
      (*(code *)*puVar4)(puVar4);
      return pTVar2->Ptr;
    }
  }
  else {
    pFVar3 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar1;
    if (pFVar3 == (FStreamedAudioChunkSeekTable *)0x0) {
      return pFVar1;
    }
    (*(code *)pFVar3[-1].Impl.Ptr)(pFVar3 + -1);
  }
  return pTVar2->Ptr;
}

// GetLoadedChunk @ 14763e0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
IStreamedCompressedInfo::GetLoadedChunk
          (IStreamedCompressedInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2,
          uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  FSoundWaveProxy *pFVar6;
  FName *pFVar7;
  FStreamingManagerCollection *pFVar8;
  IAudioStreamingManager *pIVar9;
  FAudioChunkHandle *pFVar10;
  undefined1 auStackY_348 [32];
  TArrayView<unsigned_char_const_,int> local_318;
  FAudioChunkHandle local_308;
  FAudioChunkHandle local_2e0;
  FAudioChunkHandle local_2b8;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [128];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_348;
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8148675690732977425>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                       ,0x2ef,"InSoundWave.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar1)();
      return puVar5;
    }
  }
  else {
    uVar3 = FSoundWaveProxy::GetNumChunks(param_1->Object);
    if (param_2 < uVar3) {
      if (param_2 != 0) {
        pFVar8 = IStreamingManager::Get();
        pIVar9 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar8);
        pFVar10 = (FAudioChunkHandle *)
                  (**(code **)(*(longlong *)pIVar9 + 0xb0))(pIVar9,&local_2e0,param_1,param_2);
        FAudioChunkHandle::operator=(&this->CurCompressedChunkHandle,pFVar10);
        FAudioChunkHandle::~FAudioChunkHandle(&local_2e0);
        if ((AudioDecompressPrivate::bEnableRetainingNextPlayingChunkCVar == 0) ||
           (iVar4 = FCachedAudioStreamingManager::GetNextChunkIndex(param_1,param_2), iVar4 == -1))
        {
          FAudioChunkHandle::FAudioChunkHandle(&local_308);
          FAudioChunkHandle::operator=(&this->NextPlayingChunkHandle,&local_308);
          pFVar10 = &local_308;
        }
        else {
          pFVar8 = IStreamingManager::Get();
          pIVar9 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar8);
          pFVar10 = (FAudioChunkHandle *)
                    (**(code **)(*(longlong *)pIVar9 + 0xb0))(pIVar9,&local_2b8,param_1,iVar4);
          FAudioChunkHandle::operator=(&this->NextPlayingChunkHandle,pFVar10);
          pFVar10 = &local_2b8;
        }
        FAudioChunkHandle::~FAudioChunkHandle(pFVar10);
        uVar3 = FAudioChunkHandle::Num(&this->CurCompressedChunkHandle);
        *param_3 = uVar3;
        if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
           (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
          pFVar6 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
          pFVar7 = FSoundWaveProxy::GetFName(pFVar6);
          local_168.Base = local_148;
          local_168.bIsDynamic = false;
          local_168.bIsExternal = false;
          local_168.CurPos = local_148;
          local_168.End = (wchar_t *)local_48;
          ::FName::AppendString(pFVar7,&local_168);
          if (local_168.End < local_168.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_168,1);
          }
          *local_168.CurPos = L'\0';
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        }
        puVar5 = FAudioChunkHandle::GetData(&this->CurCompressedChunkHandle);
        return puVar5;
      }
      if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
         (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
        pFVar6 = TSharedPtr<FSoundWaveProxy,1>::operator->(param_1);
        pFVar7 = FSoundWaveProxy::GetFName(pFVar6);
        local_288.Base = local_268;
        local_288.bIsDynamic = false;
        local_288.bIsExternal = false;
        local_288.CurPos = local_268;
        local_288.End = (wchar_t *)&local_168;
        ::FName::AppendString(pFVar7,&local_288);
        if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_288,1);
        }
        *local_288.CurPos = L'\0';
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
      }
      FSoundWaveProxy::GetZerothChunk(&local_318,param_1,true);
      *param_3 = local_318.ArrayNum;
      return local_318.DataPtr;
    }
  }
  *param_3 = 0;
  return (uchar *)0x0;
}

// IncrementCurrentSampleCount @ 1476456c0

uint __thiscall
IStreamedCompressedInfo::IncrementCurrentSampleCount(IStreamedCompressedInfo *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->TrueSampleCount < this->CurrentSampleCount) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentSampleCount <= TrueSampleCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0x27a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar1 = this->TrueSampleCount;
  uVar4 = this->CurrentSampleCount + param_1;
  if (uVar1 < uVar4) {
    param_1 = uVar1 - this->CurrentSampleCount;
    uVar4 = uVar1;
  }
  this->CurrentSampleCount = uVar4;
  return param_1;
}

// Read @ 14764e130

uint __thiscall
IStreamedCompressedInfo::Read(IStreamedCompressedInfo *this,void *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = this->SrcBufferDataSize - this->SrcBufferOffset;
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    memcpy(param_1,this->SrcBufferData + this->SrcBufferOffset,(ulonglong)uVar1);
    this->SrcBufferOffset = this->SrcBufferOffset + uVar1;
  }
  return uVar1;
}

// ReadCompressedData @ 14764e180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IStreamedCompressedInfo::ReadCompressedData
          (IStreamedCompressedInfo *this,uchar *param_1,bool param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar9;
  FName FVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  FName local_res10;
  char local_res18;
  FColor_u_0 local_res20 [2];
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  int local_58;
  int local_54;
  FStatMessage local_48;
  
  local_res18 = param_2;
  if ((param_1 == (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Destination",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0x79,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar11 = 0;
  FVar8 = StatPtr_STAT_AudioStreamedDecompressTime;
  if (StatPtr_STAT_AudioStreamedDecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)0x0) {
    pFVar7 = ::FName::FName(&local_70,"STAT_AudioStreamedDecompressTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStreamedDecompressTime,
                       *pFVar7,L"Decompress Streamed","STATGROUP_Audio","STATCAT_Advanced",L"Audio",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar13 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar9.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                   ,0x7b);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.ComparisonIndex.Value = FVar9.Value;
      local_res10.Number = uVar13;
      local_68 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      goto LAB_14764e314;
    }
  }
  bVar3 = false;
  FVar10 = local_68;
LAB_14764e314:
  bVar12 = false;
  if (param_3 != 0) {
    do {
      uVar13 = param_3 - uVar11;
      (**(code **)(this->_padding_ + 0xa8))
                (this,&local_58,this->SrcBufferData + this->SrcBufferOffset,
                 this->SrcBufferDataSize - this->SrcBufferOffset,param_1,uVar13);
      if (local_54 == 0) {
        bVar12 = true;
        if (local_res18 == '\0') {
          memset(param_1,0,(ulonglong)uVar13);
          break;
        }
        this->SrcBufferOffset = this->AudioDataOffset;
        this->CurrentSampleCount = 0;
        (**(code **)(this->_padding_ + 0xb0))(this);
      }
      else if (local_54 < 0) {
        memset(param_1,0,(ulonglong)uVar13);
        bVar12 = true;
        break;
      }
      uVar11 = uVar11 + local_54;
      this->SrcBufferOffset = this->SrcBufferOffset + local_58;
      param_1 = param_1 + local_54;
    } while (uVar11 < param_3);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
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
      local_48.NameAndInfo.Index.Value = local_68.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar12;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar12;
}

// ReadCompressedInfo @ 14764e510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IStreamedCompressedInfo::ReadCompressedInfo
          (IStreamedCompressedInfo *this,uchar *param_1,uint param_2,FSoundQualityInfo *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res8 [2];
  FName local_68;
  uint local_60;
  uint uStack_5c;
  LARGE_INTEGER local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (this->SrcBufferData != (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SrcBufferData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                       ,0x5d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  FVar11 = StatPtr_STAT_AudioStreamedDecompressTime;
  if (StatPtr_STAT_AudioStreamedDecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)0x0) {
    pFVar10 = ::FName::FName(&local_50,"STAT_AudioStreamedDecompressTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStreamedDecompressTime,
                        *pFVar10,L"Decompress Streamed","STATGROUP_Audio","STATCAT_Advanced",
                        L"Audio",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar12.Value;
        local_68.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                   ,0x5f);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60 = FVar12.Value;
      uStack_5c = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar3 = true;
      goto LAB_14764e69a;
    }
  }
  bVar3 = false;
  FVar13 = local_48;
LAB_14764e69a:
  cVar7 = (**(code **)(this->_padding_ + 0x98))(this,param_1,param_2,param_3);
  if (cVar7 == '\0') {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    *(undefined1 *)&this->_padding_ = 1;
    uVar6 = 0;
  }
  else {
    if (this->SrcBufferData == (uchar *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcBufferData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0x6a,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    this->SampleStride = (uint)this->NumChannels * 2;
    uVar9 = (**(code **)(this->_padding_ + 0xc0))(this);
    this->MaxFrameSizeSamples = uVar9;
    uVar9 = uVar9 * this->SampleStride;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    piVar1 = &(this->LastDecodedPCM).ArrayMax;
    (this->LastDecodedPCM).ArrayNum = 0;
    if (*piVar1 != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar9,&(this->LastDecodedPCM).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,this->MaxFrameSizeSamples * this->SampleStride,
               &(this->LastDecodedPCM).AllocatorInstance,&(this->LastDecodedPCM).ArrayNum,piVar1);
    uVar6 = (**(code **)(this->_padding_ + 0xa0))(this);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_58.s.LowPart._3_1_;
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
  return (bool)uVar6;
}

// RetainNextChunkInSequence @ 14765aef0

void __thiscall
IStreamedCompressedInfo::RetainNextChunkInSequence
          (IStreamedCompressedInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,uint param_2)

{
  int iVar1;
  FStreamingManagerCollection *this_00;
  IAudioStreamingManager *pIVar2;
  FAudioChunkHandle *pFVar3;
  FAudioChunkHandle local_38;
  
  if (AudioDecompressPrivate::bEnableRetainingNextPlayingChunkCVar != 0) {
    iVar1 = FCachedAudioStreamingManager::GetNextChunkIndex(param_1,param_2);
    if (iVar1 != -1) {
      this_00 = IStreamingManager::Get();
      pIVar2 = FStreamingManagerCollection::GetAudioStreamingManager(this_00);
      pFVar3 = (FAudioChunkHandle *)
               (**(code **)(*(longlong *)pIVar2 + 0xb0))(pIVar2,&local_38,param_1,iVar1,0,1);
      goto LAB_14765af66;
    }
  }
  FAudioChunkHandle::FAudioChunkHandle(&local_38);
  pFVar3 = &local_38;
LAB_14765af66:
  FAudioChunkHandle::operator=(&this->NextPlayingChunkHandle,pFVar3);
  FAudioChunkHandle::~FAudioChunkHandle(&local_38);
  return;
}

// SeekToDecodedPCMFrame @ 14765b040

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IStreamedCompressedInfo::SeekToDecodedPCMFrame(IStreamedCompressedInfo *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FName *this_00;
  uint uVar5;
  FString local_28;
  
  uVar5 = this->CurrentSampleCount * 2;
  if ((uVar5 < this->LastPCMByteSize) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastPCMByteSize <= MaxAvailablePCMBytePos",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0x2a5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar5 = uVar5 - this->LastPCMByteSize;
  uVar4 = this->NumChannels * param_1 * 2;
  if (uVar4 < uVar5) {
    if (2 < (byte)LogAudio._0_1_) {
      if ((this->_padding_ == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      this_00 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
      ::FName::ToString(this_00,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    uVar4 = uVar4 - uVar5;
    this->LastPCMOffset = uVar4;
    if (this->LastPCMByteSize <= uVar4) {
      this->LastPCMByteSize = 0;
      this->LastPCMOffset = 0;
      return false;
    }
  }
  return true;
}

// SeekToFrame @ 14765b1d0

void __thiscall IStreamedCompressedInfo::SeekToFrame(IStreamedCompressedInfo *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  atomic<int> aVar3;
  TSharedPtr<FSoundWaveData,1> local_18;
  
  if ((FSoundWaveProxy *)this->_padding_ != (FSoundWaveProxy *)0x0) {
    FSoundWaveProxy::GetSoundWaveData((FSoundWaveProxy *)this->_padding_,&local_18);
    if (local_18.Object != (FSoundWaveData *)0x0) {
      if ((local_18.Object == (FSoundWaveData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      aVar3 = (atomic<int>)FSoundWaveData::FindChunkIndexForSeeking(local_18.Object,param_1);
      if (-1 < (int)aVar3) {
        LOCK();
        this->StreamSeekBlockIndex = aVar3;
        UNLOCK();
        this->StreamSeekBlockOffset = 0;
        this->StreamSeekToAudioFrames = param_1;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SeekToTime @ 14765b270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IStreamedCompressedInfo::SeekToTime(IStreamedCompressedInfo *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  atomic<int> aVar3;
  longlong lVar4;
  ulonglong uVar5;
  FSoundWaveData *this_00;
  TSharedPtr<FSoundWaveData,1> local_28 [2];
  
  if ((FSoundWaveProxy *)this->_padding_ == (FSoundWaveProxy *)0x0) {
    return;
  }
  FSoundWaveProxy::GetSoundWaveData((FSoundWaveProxy *)this->_padding_,local_28);
  if (local_28[0].Object != (FSoundWaveData *)0x0) {
    uVar5 = 0;
    this_00 = local_28[0].Object;
    if (0.0 < param_1) {
      if ((local_28[0].Object == (FSoundWaveData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar4 = (longlong)
              ROUND((param_1 + param_1) * (local_28[0].Object)->SampleRate - __real_3f000000);
      uVar5 = lVar4 >> 1;
      if ((uVar5 != (uVar5 & 0xffffffff)) || (this_00 = local_28[0].Object, lVar4 < 0)) {
        if (2 < (byte)LogAudio._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        }
        goto LAB_14765b3bc;
      }
    }
    if (((uVar5 != (uVar5 & 0xffffffff)) || ((longlong)uVar5 < 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aVar3 = (atomic<int>)FSoundWaveData::FindChunkIndexForSeeking(this_00,(uint)uVar5);
    if (-1 < (int)aVar3) {
      LOCK();
      this->StreamSeekBlockIndex = aVar3;
      UNLOCK();
      this->StreamSeekBlockOffset = 0;
      this->StreamSeekToAudioFrames = (uint)uVar5;
    }
  }
LAB_14765b3bc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

// StreamCompressedData @ 147665d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IStreamedCompressedInfo::StreamCompressedData
          (IStreamedCompressedInfo *this,uchar *param_1,bool param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ISeekTableImpl *pIVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  char cVar11;
  ESoundWaveLoadingBehavior EVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime> FVar17;
  FSoundWaveProxy *pFVar18;
  uchar *puVar19;
  TSharedPtr<FSoundWaveData,1> *pTVar20;
  FSoundWaveData *pFVar21;
  FStreamedAudioChunkSeekTable *pFVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FStreamingManagerCollection *pFVar23;
  IAudioStreamingManager *pIVar24;
  FNameEntryId FVar25;
  uint uVar26;
  uchar *_Dst;
  FName FVar27;
  undefined1 auStackY_8c8 [32];
  bool local_868;
  uint local_860;
  uint local_85c;
  uint local_858;
  uint uStack_854;
  uchar *local_850;
  atomic<int> local_848;
  uint local_844;
  uint local_840 [2];
  uint *local_838;
  FColor_u_0 local_830;
  uint local_82c;
  uint local_828;
  FName local_820;
  FName local_818;
  IStreamedCompressedInfo *local_808;
  IStreamedCompressedInfo *local_800;
  LARGE_INTEGER local_7f8;
  IStreamedCompressedInfo *local_7f0;
  FStatMessage local_7e8;
  FName local_7d8;
  FString local_7d0;
  FString local_7c0;
  TSharedPtr<FSoundWaveData,1> local_7b0;
  FString local_7a0;
  FString local_790;
  TSharedPtr<FSoundWaveData,1> local_780;
  FString local_770;
  TSharedPtr<FSoundWaveData,1> local_760;
  FString local_750;
  FString local_740;
  TStringBuilderBase<wchar_t> local_728;
  wchar_t local_708 [128];
  TStringBuilderBase<wchar_t> local_608;
  wchar_t local_5e8 [128];
  TStringBuilderBase<wchar_t> local_4e8;
  wchar_t local_4c8 [128];
  TStringBuilderBase<wchar_t> local_3c8;
  wchar_t local_3a8 [128];
  TStringBuilderBase<wchar_t> local_2a8;
  wchar_t local_288 [128];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [128];
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_838 = (uint *)param_4;
  local_850 = param_1;
  if ((param_1 == (uchar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Destination",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0x12f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Blue,"IStreamedCompressedInfo_StreamCompressedData");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId304,"IStreamedCompressedInfo_StreamCompressedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
               ,0x130);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId304);
  }
  FVar17 = StatPtr_STAT_AudioStreamedDecompressTime;
  if (StatPtr_STAT_AudioStreamedDecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)0x0) {
    pFVar16 = ::FName::FName(&local_7d8,"STAT_AudioStreamedDecompressTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStreamedDecompressTime,
                        *pFVar16,L"Decompress Streamed","STATGROUP_Audio","STATCAT_Advanced",
                        L"Audio",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar17;
  bVar5 = false;
  bVar6 = false;
  local_818.ComparisonIndex.Value = 0;
  local_818.Number = 0;
  bVar7 = false;
  bVar10 = false;
  FVar25 = FVar27.ComparisonIndex.Value;
  uVar15 = FVar27.Number;
  if ((FVar25.Value == 0) && (uVar15 == 0)) {
LAB_147665f96:
    bVar6 = bVar10;
    bVar5 = bVar7;
    bVar7 = false;
    FVar27 = local_818;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_830.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_830._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_820.ComparisonIndex.Value = FVar25.Value;
        local_820.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_820,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                   ,0x132);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147665f96;
    local_858 = FVar25.Value;
    uStack_854 = uVar15;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar7 = true;
  }
  if (6 < (byte)LogAudioStreamCaching._0_1_) {
    local_82c = this->SrcBufferDataSize;
    local_828 = this->SrcBufferOffset;
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
    local_848 = (atomic<int>)this->CurrentSampleCount;
    local_858 = this->CurrentChunkIndex;
    if ((this->_padding_ == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
    ::FName::ToString(pFVar16,&local_7d0);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
    if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
    }
  }
  if (this->StreamSeekBlockIndex == (atomic<int>)0xffffffff) {
LAB_147666660:
    uVar15 = 0;
    if (this->SrcBufferData == (uchar *)0x0) {
      if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
         (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
        pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                            ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
        pFVar16 = FSoundWaveProxy::GetFName(pFVar18);
        local_188.Base = local_168;
        local_188.bIsDynamic = false;
        local_188.bIsExternal = false;
        local_188.CurPos = local_168;
        local_188.End = (wchar_t *)local_68;
        ::FName::AppendString(pFVar16,&local_188);
        TStringBuilderBase<wchar_t>::operator*(&local_188);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
      }
      local_840[0] = 0;
      puVar19 = GetLoadedChunk(this,(TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_,
                               this->CurrentChunkIndex,local_840);
      this->SrcBufferData = puVar19;
      if (puVar19 == (uchar *)0x0) {
        pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                            ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
        EVar12 = FSoundWaveProxy::GetLoadingBehavior(pFVar18);
        if ((EVar12 != LoadOnDemand) || (this->CurrentChunkIndex != 1)) {
          pFVar23 = IStreamingManager::Get();
          pIVar24 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar23);
          (**(code **)(*(longlong *)pIVar24 + 0xd8))
                    (pIVar24,&this->_padding_,this->CurrentChunkIndex,*local_838);
        }
        _Dst = local_850;
        if ((local_850 == (uchar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Destination",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                ,0x2d1,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (param_3 != 0) goto LAB_147666a8b;
        goto LAB_147666a98;
      }
      this->SrcBufferDataSize = local_840[0];
      if (this->CurrentChunkIndex == 0) {
        uVar15 = this->AudioDataOffset;
      }
      this->SrcBufferOffset = uVar15;
      pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                          ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
      pTVar20 = FSoundWaveProxy::GetSoundWaveData(pFVar18,&local_780);
      pFVar21 = TSharedPtr<FSoundWaveData,1>::operator->(pTVar20);
      bVar10 = FSoundWaveData::HasChunkSeekTable(pFVar21,this->CurrentChunkIndex);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_780.SharedReferenceCount.ReferenceController);
      if (bVar10) {
        pFVar22 = GetCurrentSeekTable(this);
        bVar10 = FStreamedAudioChunkSeekTable::Parse
                           (this->SrcBufferData,this->SrcBufferDataSize,&this->SrcBufferOffset,
                            pFVar22);
        if (!bVar10) {
          local_808 = this;
          `IStreamedCompressedInfo::StreamCompressedData'::__l184::<lambda_2>::operator()
                    (&local_808);
        }
      }
    }
    local_868 = false;
    local_860 = WriteFromDecodedPCM(this,local_850,param_3);
    *local_838 = local_860;
    if ((this->bStoringEndOfFile != false) && (this->LastPCMByteSize == 0)) {
      this->bStoringEndOfFile = false;
      local_868 = true;
    }
joined_r0x0001476667fc:
    if (local_860 < param_3) {
      cVar11 = (**(code **)(this->_padding_ + 0x68))(this);
      if (cVar11 != '\0') {
        this->LastPCMByteSize = 0;
        puVar19 = local_850 + local_860;
        if ((puVar19 == (uchar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Destination",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                ,0x2d1,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (param_3 - local_860 != 0) {
          memset(puVar19,0,(ulonglong)(param_3 - local_860));
        }
        local_868 = true;
        goto LAB_147667031;
      }
      iVar14 = DecompressToPCMBuffer(this,0);
      if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
         (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
        if ((this->_padding_ == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
        local_608.Base = local_5e8;
        local_608.bIsDynamic = false;
        local_608.bIsExternal = false;
        local_608.CurPos = local_5e8;
        local_608.End = (wchar_t *)&local_4e8;
        ::FName::AppendString(pFVar16,&local_608);
        if (local_608.End < (TStringBuilderBase<wchar_t> *)(local_608.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_608,1);
        }
        *local_608.CurPos = L'\0';
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_608);
      }
      if (iVar14 < 0) {
        FXxHash64::HashBuffer(this->SrcBufferData,(ulonglong)this->SrcBufferDataSize);
        if (2 < (byte)LogAudioStreamCaching._0_1_) {
          pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                              ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
          pFVar16 = FSoundWaveProxy::GetFName(pFVar18);
          ::FName::ToString(pFVar16,&local_740);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
          if (local_740.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_740.Data.AllocatorInstance.Data);
          }
        }
        this->LastPCMByteSize = 0;
        *(undefined1 *)&this->_padding_ = 1;
        puVar19 = local_850 + local_860;
        if ((puVar19 == (uchar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Destination",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                ,0x2d1,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if (param_3 - local_860 == 0) goto LAB_147666a98;
        memset(puVar19,0,(ulonglong)(param_3 - local_860));
        local_868 = false;
        goto LAB_147667031;
      }
      if (0 < iVar14) {
        iVar14 = (uint)this->NumChannels * iVar14;
        if ((this->TrueSampleCount < this->CurrentSampleCount) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentSampleCount <= TrueSampleCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                ,0x27a,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        uVar13 = this->TrueSampleCount;
        uVar15 = this->CurrentSampleCount + iVar14;
        if (uVar13 < uVar15) {
          iVar14 = uVar13 - this->CurrentSampleCount;
          uVar15 = uVar13;
        }
        this->CurrentSampleCount = uVar15;
        uVar13 = this->StreamSeekToAudioFrames;
        this->LastPCMByteSize = iVar14 * 2;
        if (uVar13 != 0xffffffff) {
          if ((uVar15 * 2 < (uint)(iVar14 * 2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LastPCMByteSize <= MaxAvailablePCMBytePos",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                  ,0x2a5,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          uVar26 = uVar15 * 2 - this->LastPCMByteSize;
          uVar15 = this->NumChannels * uVar13 * 2;
          if (uVar15 < uVar26) {
            uVar15 = (uint)this->NumChannels * 2;
            uVar13 = 1;
            if (1 < uVar15) {
              uVar13 = uVar15;
            }
            local_858 = uVar26 / uVar13;
            if (2 < (byte)LogAudio._0_1_) {
              if ((this->_padding_ == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
              ::FName::ToString(pFVar16,&local_770);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_770.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            uVar15 = uVar15 - uVar26;
            this->LastPCMOffset = uVar15;
            if (this->LastPCMByteSize <= uVar15) {
              this->LastPCMByteSize = 0;
              this->LastPCMOffset = 0;
              goto LAB_147666b8c;
            }
          }
          this->StreamSeekToAudioFrames = 0xffffffff;
        }
LAB_147666b8c:
        uVar15 = WriteFromDecodedPCM(this,local_850 + local_860,param_3 - local_860);
        local_860 = local_860 + uVar15;
        *local_838 = local_860;
      }
      iVar14 = this->CurrentChunkIndex;
      if (this->SrcBufferDataSize - this->SrcBufferPadding <= this->SrcBufferOffset) {
        if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
           (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
          if ((this->_padding_ == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
          local_4e8.Base = local_4c8;
          local_4e8.bIsDynamic = false;
          local_4e8.bIsExternal = false;
          local_4e8.CurPos = local_4c8;
          local_4e8.End = (wchar_t *)&local_3c8;
          ::FName::AppendString(pFVar16,&local_4e8);
          if (local_4e8.End < (TStringBuilderBase<wchar_t> *)(local_4e8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_4e8,1);
          }
          *local_4e8.CurPos = L'\0';
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4e8);
        }
        if ((this->_padding_ == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar2 = this->CurrentChunkIndex;
        uVar15 = FSoundWaveProxy::GetNumChunks((FSoundWaveProxy *)this->_padding_);
        if (iVar2 == uVar15 - 1) {
          if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
             (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
            if ((this->_padding_ == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
            local_3c8.Base = local_3a8;
            local_3c8.bIsDynamic = false;
            local_3c8.bIsExternal = false;
            local_3c8.CurPos = local_3a8;
            local_3c8.End = (wchar_t *)&local_2a8;
            ::FName::AppendString(pFVar16,&local_3c8);
            if (local_3c8.End < (TStringBuilderBase<wchar_t> *)(local_3c8.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_3c8,1);
            }
            *local_3c8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3c8);
          }
          if (this->LastPCMByteSize == 0) {
            local_868 = true;
          }
          else {
            this->bStoringEndOfFile = true;
          }
          if (param_2) {
            this->CurrentChunkIndex = this->AudioDataChunkIndex;
            this->SrcBufferOffset = this->AudioDataOffset;
            this->CurrentSampleCount = 0;
            (**(code **)(this->_padding_ + 0xb0))(this);
            goto LAB_147666e57;
          }
          puVar19 = local_850 + local_860;
          if ((puVar19 == (uchar *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Destination",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                  ,0x2d1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        else {
          this->CurrentChunkIndex = iVar2 + 1;
          this->SrcBufferOffset = 0;
LAB_147666e57:
          puVar19 = GetLoadedChunk(this,(TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_,
                                   this->CurrentChunkIndex,&this->SrcBufferDataSize);
          this->SrcBufferData = puVar19;
          if (puVar19 != (uchar *)0x0) {
            if ((this->_padding_ == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            pTVar20 = FSoundWaveProxy::GetSoundWaveData
                                ((FSoundWaveProxy *)this->_padding_,&local_760);
            if ((pTVar20->Object == (FSoundWaveData *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
            bVar10 = FSoundWaveData::HasChunkSeekTable(pTVar20->Object,this->CurrentChunkIndex);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_760.SharedReferenceCount.ReferenceController);
            if (bVar10) {
              pFVar22 = GetCurrentSeekTable(this);
              bVar10 = FStreamedAudioChunkSeekTable::Parse
                                 (this->SrcBufferData,this->SrcBufferDataSize,&this->SrcBufferOffset
                                  ,pFVar22);
              if (!bVar10) {
                local_800 = this;
                `IStreamedCompressedInfo::StreamCompressedData'::__l319::<lambda_3>::operator()
                          (&local_800);
              }
            }
            if ((4 < (byte)LogAudio._0_1_) && (iVar14 != this->CurrentChunkIndex)) {
              if ((this->_padding_ == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return (bool)uVar9;
              }
              pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
              ::FName::ToString(pFVar16,&local_750);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
              if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_750.Data.AllocatorInstance.Data);
              }
            }
            goto joined_r0x0001476667fc;
          }
          pFVar23 = IStreamingManager::Get();
          pIVar24 = FStreamingManagerCollection::GetAudioStreamingManager(pFVar23);
          (**(code **)(*(longlong *)pIVar24 + 0xd8))
                    (pIVar24,&this->_padding_,this->CurrentChunkIndex,*local_838);
          this->SrcBufferDataSize = 0;
          puVar19 = local_850 + local_860;
          if ((puVar19 == (uchar *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Destination",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                                  ,0x2d1,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
        }
        if (param_3 - local_860 != 0) {
          memset(puVar19,0,(ulonglong)(param_3 - local_860));
        }
        goto LAB_147667031;
      }
      goto joined_r0x0001476667fc;
    }
  }
  else {
    if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
       (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
      pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                          ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
      pFVar16 = FSoundWaveProxy::GetFName(pFVar18);
      local_728.Base = local_708;
      local_728.bIsDynamic = false;
      local_728.bIsExternal = false;
      local_728.CurPos = local_708;
      local_728.End = (wchar_t *)&local_608;
      ::FName::AppendString(pFVar16,&local_728);
      if (local_728.End < (TStringBuilderBase<wchar_t> *)(local_728.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_728,1);
      }
      *local_728.CurPos = L'\0';
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_728);
    }
    local_85c = 0;
    puVar19 = GetLoadedChunk(this,(TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_,
                             (uint)this->StreamSeekBlockIndex,&local_85c);
    if (4 < (byte)LogAudio._0_1_) {
      local_858 = this->StreamSeekBlockOffset;
      local_848 = this->StreamSeekBlockIndex;
      if ((this->_padding_ == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar16 = FSoundWaveProxy::GetFName((FSoundWaveProxy *)this->_padding_);
      ::FName::ToString(pFVar16,&local_7c0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
      }
    }
    _Dst = local_850;
    if (puVar19 != (uchar *)0x0) {
      if (this->StreamSeekToAudioFrames == 0xffffffff) {
        this->SrcBufferData = puVar19;
        this->CurrentChunkIndex = (int)this->StreamSeekBlockIndex;
        this->SrcBufferDataSize = local_85c;
        this->SrcBufferOffset = this->StreamSeekBlockOffset;
        this->LastPCMByteSize = 0;
        this->LastPCMOffset = 0;
        this->bStoringEndOfFile = false;
      }
      else {
        pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                            ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
        pTVar20 = FSoundWaveProxy::GetSoundWaveData(pFVar18,&local_7b0);
        pFVar21 = TSharedPtr<FSoundWaveData,1>::operator->(pTVar20);
        bVar10 = FSoundWaveData::HasChunkSeekTable(pFVar21,(int)this->StreamSeekBlockIndex);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7b0.SharedReferenceCount.ReferenceController);
        if (bVar10) {
          local_844 = 0;
          pFVar22 = GetCurrentSeekTable(this);
          bVar10 = FStreamedAudioChunkSeekTable::Parse(puVar19,local_85c,&local_844,pFVar22);
          if (((bVar10) ||
              (local_7f0 = this,
              bVar10 = `IStreamedCompressedInfo::StreamCompressedData'::__l82::<lambda_1>::
                       operator()(&local_7f0), bVar10)) &&
             (uVar15 = this->StreamSeekToAudioFrames, uVar15 != 0xffffffff)) {
            uVar13 = 1;
            if (1 < this->NumChannels) {
              uVar13 = (uint)this->NumChannels;
            }
            uVar13 = this->TrueSampleCount / uVar13 - 1;
            if (uVar15 < uVar13) {
              uVar13 = uVar15;
            }
            this->StreamSeekToAudioFrames = uVar13;
            pFVar22 = GetCurrentSeekTable(this);
            pIVar3 = (pFVar22->Impl).Ptr;
            local_858 = (**(code **)((longlong)*pIVar3 + 0x10))
                                  (pIVar3,this->StreamSeekToAudioFrames);
            if (local_858 == 0xffffffff) {
              pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                  ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
              FSoundWaveProxy::GetSampleRate(pFVar18);
              if (4 < (byte)LogAudio._0_1_) {
                pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                    ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
                pFVar16 = FSoundWaveProxy::GetFName(pFVar18);
                ::FName::ToString(pFVar16,&local_790);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u_Failed_seeking__151720158,
                           (FLogCategoryBase *)&LogAudio);
                if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_790.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              pIVar3 = (pFVar22->Impl).Ptr;
              uVar15 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,local_858);
              if ((uVar15 == 0xffffffff) &&
                 (uVar15 = this->StreamSeekToAudioFrames, 2 < (byte)LogAudioStreamCaching._0_1_)) {
                pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                    ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
                pFVar16 = FSoundWaveProxy::GetFName(pFVar18);
                ::FName::ToString(pFVar16,&local_7a0);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
                if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
                }
              }
              this->CurrentChunkIndex = (int)this->StreamSeekBlockIndex;
              this->SrcBufferDataSize = local_85c;
              this->SrcBufferData = puVar19;
              if (this->StreamSeekBlockIndex == (atomic<int>)0x0) {
                uVar13 = this->AudioDataOffset;
              }
              else {
                uVar13 = 0;
              }
              this->SrcBufferOffset = uVar13 + local_858 + local_844;
              uVar15 = this->NumChannels * uVar15;
              uVar13 = this->TrueSampleCount;
              if (uVar15 < this->TrueSampleCount) {
                uVar13 = uVar15;
              }
              this->LastPCMByteSize = 0;
              this->LastPCMOffset = 0;
              this->bStoringEndOfFile = false;
              this->CurrentSampleCount = uVar13;
              if ((3 < (byte)LogAudioStreamCaching._0_1_) &&
                 (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
                pFVar18 = TSharedPtr<FSoundWaveProxy,1>::operator->
                                    ((TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_);
                pFVar16 = FSoundWaveProxy::GetFName(pFVar18);
                local_2a8.Base = local_288;
                local_2a8.bIsDynamic = false;
                local_2a8.bIsExternal = false;
                local_2a8.CurPos = local_288;
                local_2a8.End = (wchar_t *)&local_188;
                ::FName::AppendString(pFVar16,&local_2a8);
                TStringBuilderBase<wchar_t>::operator*(&local_2a8);
                UE::Logging::Private::BasicLog<4>
                          (&::LOG_Static,(FLogCategoryBase *)&LogAudioStreamCaching);
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2a8);
              }
            }
          }
        }
      }
      LOCK();
      this->StreamSeekBlockIndex = (atomic<int>)0xffffffff;
      UNLOCK();
      this->StreamSeekBlockOffset = -1;
      goto LAB_147666660;
    }
    if ((local_850 == (uchar *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Destination",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                            ,0x2d1,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    if (param_3 == 0) {
      local_868 = false;
      goto LAB_147667031;
    }
LAB_147666a8b:
    memset(_Dst,0,(ulonglong)param_3);
LAB_147666a98:
    local_868 = false;
  }
LAB_147667031:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_7e8.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_7e8.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_7f8);
      local_7e8.StatData.Pad[4] = '\0';
      local_7e8.StatData.Pad[5] = '\0';
      local_7e8.StatData.Pad[6] = '\0';
      local_7e8.StatData.Pad[7] = '\0';
      local_7e8.StatData.Pad[0] = local_7f8.s.LowPart._0_1_;
      local_7e8.StatData.Pad[1] = local_7f8.s.LowPart._1_1_;
      local_7e8.StatData.Pad[2] = local_7f8.s.LowPart._2_1_;
      local_7e8.StatData.Pad[3] = local_7f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_7e8);
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
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return local_868;
}

// StreamCompressedInfoInternal @ 1476675a0

bool __thiscall
IStreamedCompressedInfo::StreamCompressedInfoInternal
          (IStreamedCompressedInfo *this,TSharedPtr<FSoundWaveProxy,1> *param_1,
          FSoundQualityInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  TSharedPtr<FSoundWaveData,1> *pTVar5;
  FStreamedAudioChunkSeekTable *pFVar6;
  uint uVar7;
  uint local_res8 [2];
  uint local_res20 [2];
  IStreamedCompressedInfo *local_38;
  TSharedPtr<FSoundWaveData,1> local_30;
  
  if (((FSoundWaveProxy *)this->_padding_ == (FSoundWaveProxy *)0x0) ||
     ((FSoundWaveProxy *)this->_padding_ != param_1->Object)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8148675690732977930>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                       ,0xf6,"StreamingSoundWave.IsValid() && (StreamingSoundWave == InWaveProxy)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    this->CurrentChunkIndex = 0;
    local_res8[0] = 0;
    puVar4 = GetLoadedChunk(this,(TSharedPtr<FSoundWaveProxy,1> *)&this->_padding_,0,local_res8);
    if ((param_1->Object == (FSoundWaveProxy *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pTVar5 = FSoundWaveProxy::GetSoundWaveData(param_1->Object,&local_30);
    if ((pTVar5->Object == (FSoundWaveData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = FSoundWaveData::HasChunkSeekTable(pTVar5->Object,this->CurrentChunkIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.SharedReferenceCount.ReferenceController);
    uVar7 = local_res8[0];
    if (bVar2) {
      local_res20[0] = 0;
      pFVar6 = GetCurrentSeekTable(this);
      uVar7 = local_res8[0];
      bVar2 = FStreamedAudioChunkSeekTable::Parse(puVar4,local_res8[0],local_res20,pFVar6);
      if ((bVar2) ||
         (local_38 = this,
         bVar2 = `IStreamedCompressedInfo::StreamCompressedInfoInternal'::__l9::<lambda_1>::
                 operator()(&local_38), bVar2)) {
        puVar4 = puVar4 + local_res20[0];
        uVar7 = uVar7 - local_res20[0];
      }
    }
    this->bIsStreaming = true;
    if (puVar4 != (uchar *)0x0) {
      uVar3 = (**(code **)(this->_padding_ + 8))(this,puVar4,uVar7,param_2);
      if (this->SrcBufferOffset < uVar7) {
        return (bool)uVar3;
      }
      this->CurrentChunkIndex = this->CurrentChunkIndex + 1;
      this->AudioDataOffset = this->AudioDataOffset - uVar7;
      this->AudioDataChunkIndex = this->CurrentChunkIndex;
      this->SrcBufferData = (uchar *)0x0;
      this->SrcBufferDataSize = 0;
      return (bool)uVar3;
    }
  }
  return false;
}

// WriteFromDecodedPCM @ 147670a30

uint __thiscall
IStreamedCompressedInfo::WriteFromDecodedPCM
          (IStreamedCompressedInfo *this,uchar *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = this->LastPCMByteSize - this->LastPCMOffset;
  if (param_2 < uVar5) {
    uVar5 = param_2;
  }
  uVar3 = (this->LastDecodedPCM).ArrayNum - this->LastPCMOffset;
  uVar4 = uVar3;
  if (uVar5 < uVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    if (uVar3 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesToCopy <= LastDecodedPCM.Num() - LastPCMOffset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                         ,0x291,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
    }
    memcpy(param_1,(this->LastDecodedPCM).AllocatorInstance.Data + this->LastPCMOffset,
           (ulonglong)uVar4);
    this->LastPCMOffset = this->LastPCMOffset + uVar4;
    if (this->LastPCMByteSize <= this->LastPCMOffset) {
      this->LastPCMByteSize = 0;
      this->LastPCMOffset = 0;
    }
  }
  return uVar4;
}

// ZeroBuffer @ 147670ca0

uint __thiscall
IStreamedCompressedInfo::ZeroBuffer(IStreamedCompressedInfo *this,uchar *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Destination",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                       ,0x2d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2);
    return param_2;
  }
  return 0;
}

// operator() @ 15050df90

bool __thiscall
`IStreamedCompressedInfo::StreamCompressedInfoInternal'::__l9::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8148675690732977915>);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x10) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = FSoundWaveProxy::GetFName(*(FSoundWaveProxy **)(lVar1 + 0x10));
    ::FName::ToString(this_00,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8148675690732977915>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050e046;
    }
  }
  bVar3 = false;
LAB_15050e046:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15050e200

bool __thiscall
`IStreamedCompressedInfo::StreamCompressedData'::__l82::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8148675690732977813>);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x10) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = FSoundWaveProxy::GetFName(*(FSoundWaveProxy **)(lVar1 + 0x10));
    ::FName::ToString(this_00,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8148675690732977813>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050e2bc;
    }
  }
  bVar3 = false;
LAB_15050e2bc:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15050e450

bool __thiscall
`IStreamedCompressedInfo::StreamCompressedData'::__l184::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8148675690732977747>);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x10) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = FSoundWaveProxy::GetFName(*(FSoundWaveProxy **)(lVar1 + 0x10));
    ::FName::ToString(this_00,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8148675690732977747>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050e506;
    }
  }
  bVar3 = false;
LAB_15050e506:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 15050e5e0

bool __thiscall
`IStreamedCompressedInfo::StreamCompressedData'::__l319::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FName *this_00;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8148675690732977613>);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    if ((*(longlong *)(lVar1 + 0x10) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = FSoundWaveProxy::GetFName(*(FSoundWaveProxy **)(lVar1 + 0x10));
    ::FName::ToString(this_00,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8148675690732977613>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_15050e696;
    }
  }
  bVar3 = false;
LAB_15050e696:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

