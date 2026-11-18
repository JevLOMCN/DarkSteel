// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAsyncAudioDecompressWorker @ 14761b530

FAsyncAudioDecompressWorker * __thiscall
FAsyncAudioDecompressWorker::FAsyncAudioDecompressWorker
          (FAsyncAudioDecompressWorker *this,USoundWave *param_1,int param_2,FAudioDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  FAsyncAudioDecompressWorker *pFVar3;
  IAudioInfoFactoryRegistry *pIVar4;
  FName FVar5;
  longlong *plVar6;
  ICompressedAudioInfo *pIVar7;
  
  this->Wave = param_1;
  this->AudioInfo = (ICompressedAudioInfo *)0x0;
  this->NumPrecacheFrames = param_2;
  if (param_2 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumPrecacheFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                       ,800,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAsyncAudioDecompressWorker *)(*pcVar1)();
      return pFVar3;
    }
  }
  pIVar4 = IAudioInfoFactoryRegistry::Get();
  FVar5 = USoundWave::GetRuntimeFormat(param_1);
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,*(undefined8 *)FVar5);
  if (plVar6 != (longlong *)0x0) {
    pIVar7 = (ICompressedAudioInfo *)(**(code **)(*plVar6 + 8))(plVar6);
    this->AudioInfo = pIVar7;
    return this;
  }
  this->AudioInfo = (ICompressedAudioInfo *)0x0;
  return this;
}

// DoWork @ 147634360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncAudioDecompressWorker::DoWork(FAsyncAudioDecompressWorker *this)

{
  int *piVar1;
  ICompressedAudioInfo *pIVar2;
  code *pcVar3;
  USoundWave *pUVar4;
  FName FVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uchar *puVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AudioMemorySize> FVar11;
  FThreadSafeStaticStat<FStat_STAT_AudioMemory> FVar12;
  FLLMScope *this_00;
  uint uVar13;
  longlong lVar14;
  uint local_res8;
  uint uStackX_c;
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FMemScope local_98;
  FMemScope local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  byte local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50;
  undefined8 uStack_48;
  
  FLLMScope::FLLMScope(local_res18,AudioDecompress,false,None,Default,true);
  FMemScope::FMemScope(&local_90,AudioDecompress,true);
  pIVar2 = this->AudioInfo;
  if (pIVar2 != (ICompressedAudioInfo *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = (void *)0x0;
    uStack_48 = 0;
    pcVar3 = *(code **)(pIVar2->_padding_ + 8);
    iVar8 = USoundWave::GetResourceSize(this->Wave);
    puVar9 = USoundWave::GetResourceData(this->Wave);
    cVar6 = (*pcVar3)(pIVar2,puVar9,iVar8);
    pUVar4 = this->Wave;
    if (cVar6 == '\0') {
      if ((pUVar4->DecompressionType).Value == '\x02') {
        (pUVar4->DecompressionType).Value = '\x01';
        this->Wave->NumChannels = 0;
        USoundWave::RemoveAudioResource(this->Wave);
      }
    }
    else {
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_78,(UObjectBaseUtility *)pUVar4);
      USoundWave::SetSampleRate(this->Wave,(uint)uStack_60,true);
      this->Wave->NumChannels = local_68._4_4_;
      if (0.0 < (float)local_58) {
        *(float *)((longlong)&this->Wave->_padding_ + 4) = (float)local_58;
      }
      if ((this->Wave->DecompressionType).Value == '\x02') {
        FLLMScope::FLLMScope((FLLMScope *)&local_res8,AudioRealtimePrecache,false,None,Default,true)
        ;
        FMemScope::FMemScope(&local_res20,AudioRealtimePrecache,true);
        pUVar4 = this->Wave;
        iVar8 = this->NumPrecacheFrames;
        pUVar4->NumPrecacheFrames = iVar8;
        uVar13 = iVar8 * pUVar4->NumChannels * 4;
        if (this->Wave->CachedRealtimeFirstBuffer == (uchar *)0x0) {
          puVar9 = FMemory::Malloc((ulonglong)uVar13,0);
          this->Wave->CachedRealtimeFirstBuffer = puVar9;
          (**(code **)(this->AudioInfo->_padding_ + 0x10))
                    (this->AudioInfo,this->Wave->CachedRealtimeFirstBuffer,this->Wave->bLooping,
                     uVar13);
          FMemScope::~FMemScope(&local_res20);
          this_00 = (FLLMScope *)&local_res8;
        }
        else {
          if (((this->Wave->PrecacheState).Counter == 2) && (2 < (byte)LogAudio._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          }
          FMemScope::~FMemScope(&local_res20);
          this_00 = (FLLMScope *)&local_res8;
        }
      }
      else {
        FLLMScope::FLLMScope(local_res10,AudioFullDecompress,false,None,Default,true);
        FMemScope::FMemScope(&local_98,AudioFullDecompress,true);
        this->Wave->RawPCMDataSize = uStack_60._4_4_;
        if (this->Wave->RawPCMData != (uchar *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Wave->RawPCMData == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDecompress.cpp"
                             ,0x35e,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar9 = FMemory::Malloc((longlong)this->Wave->RawPCMDataSize,0);
        this->Wave->RawPCMData = puVar9;
        (**(code **)(this->AudioInfo->_padding_ + 0x28))
                  (this->AudioInfo,this->Wave->RawPCMData,&local_68);
        piVar1 = &this->Wave->TrackedMemoryUsage;
        *piVar1 = *piVar1 + this->Wave->RawPCMDataSize;
        lVar14 = (longlong)this->Wave->RawPCMDataSize;
        if (lVar14 != 0) {
          FVar11 = StatPtr_STAT_AudioMemorySize;
          if (StatPtr_STAT_AudioMemorySize == (FThreadSafeStaticStat<FStat_STAT_AudioMemorySize>)0x0
             ) {
            pFVar10 = ::FName::FName(&local_88,"STAT_AudioMemorySize");
            FVar11 = (FThreadSafeStaticStat<FStat_STAT_AudioMemorySize>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMemorySize,*pFVar10,
                                L"Audio Memory Used","STATGROUP_Audio","STATCAT_Advanced",L"Audio",
                                true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar5 = *(FName *)FVar11;
          local_res8 = (uint)FVar5.ComparisonIndex.Value;
          uStackX_c = FVar5.Number;
          FThreadStats::AddMessage<__int64>(FVar5,Add,lVar14,false);
        }
        lVar14 = (longlong)this->Wave->RawPCMDataSize;
        if (lVar14 != 0) {
          FVar12 = StatPtr_STAT_AudioMemory;
          if (StatPtr_STAT_AudioMemory == (FThreadSafeStaticStat<FStat_STAT_AudioMemory>)0x0) {
            pFVar10 = ::FName::FName(&local_80,"STAT_AudioMemory");
            FVar12 = (FThreadSafeStaticStat<FStat_STAT_AudioMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMemory,*pFVar10,
                                L"Audio Memory Used","STATGROUP_Memory","STATCAT_Advanced",L"Memory"
                                ,true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar5 = *(FName *)FVar12;
          local_res8 = (uint)FVar5.ComparisonIndex.Value;
          uStackX_c = FVar5.Number;
          FThreadStats::AddMessage<__int64>(FVar5,Add,lVar14,false);
        }
        FMemScope::~FMemScope(&local_98);
        this_00 = local_res10;
      }
      FLLMScope::~FLLMScope(this_00);
      if ((local_70 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_70 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_70 & 4) != 0) {
        FThreadStats::AddMessage(local_78,CycleScopeEnd);
      }
    }
    pIVar2 = this->AudioInfo;
    if (pIVar2 != (ICompressedAudioInfo *)0x0) {
      (**(code **)pIVar2->_padding_)(pIVar2,1);
    }
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

