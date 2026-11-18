// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 12

// FSubmixEffectDynamicsProcessor @ 14653e280

FSubmixEffectDynamicsProcessor * __thiscall
FSubmixEffectDynamicsProcessor::FSubmixEffectDynamicsProcessor(FSubmixEffectDynamicsProcessor *this)

{
  FDelegateHandle FVar1;
  
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSubmixEffectDynamicsProcessor__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  (this->AudioExternal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioExternal).ArrayNum = 0;
  (this->AudioExternal).ArrayMax = 0;
  this->DeviceId = 0xffffffff;
  this->bBypass = false;
  (this->KeySource).Type = Default;
  (this->KeySource).NumChannels = 0;
  (this->KeySource).ObjectId = 0xffffffff;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection,4000);
  (this->KeySource).Patch.Object = (FPatchOutput *)0x0;
  (this->KeySource).Patch.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  Audio::FDynamicsProcessor::FDynamicsProcessor(&this->DynamicsProcessor);
  (this->DeviceCreatedHandle).ID = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddRaw<FSubmixEffectDynamicsProcessor>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
                     (FSubmixEffectDynamicsProcessor *)&stack0x00000008,(pmf_2b12ffa3)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceCreatedHandle).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::
          AddRaw<FSubmixEffectDynamicsProcessor>
                    ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                      *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                     (FSubmixEffectDynamicsProcessor *)&stack0x00000008,(pmf_2b12ffa3)this);
                    /* WARNING: Load size is inaccurate */
  (this->DeviceDestroyedHandle).ID = *FVar1.ID;
  return this;
}

// ~FSubmixEffectDynamicsProcessor @ 1465411f0

void __thiscall
FSubmixEffectDynamicsProcessor::~FSubmixEffectDynamicsProcessor
          (FSubmixEffectDynamicsProcessor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSubmixEffectDynamicsProcessor__6B_;
  ResetKey(this);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
             (FDelegateHandle)(this->DeviceCreatedHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
             (FDelegateHandle)(this->DeviceDestroyedHandle).ID);
  Audio::FDynamicsProcessor::~FDynamicsProcessor(&this->DynamicsProcessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->KeySource).Patch.SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection);
  pFVar1 = (this->AudioExternal).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// GetDeviceId @ 146557560

uint __thiscall FSubmixEffectDynamicsProcessor::GetDeviceId(FSubmixEffectDynamicsProcessor *this)

{
  return this->DeviceId;
}

// GetMixerDevice @ 146558f20

/* WARNING: Enum "Type": Some values do not have unique names */

FMixerDevice * __thiscall
FSubmixEffectDynamicsProcessor::GetMixerDevice(FSubmixEffectDynamicsProcessor *this)

{
  FAudioDeviceManager *this_00;
  FMixerDevice *pFVar1;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    pFVar1 = (FMixerDevice *)FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->DeviceId);
    return pFVar1;
  }
  return (FMixerDevice *)0x0;
}

// Init @ 14655da30

void __thiscall
FSubmixEffectDynamicsProcessor::Init
          (FSubmixEffectDynamicsProcessor *this,FSoundEffectSubmixInitData *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ESubmixEffectDynamicsKeySource EVar3;
  longlong lVar4;
  int iVar5;
  
  Audio::FDynamicsProcessor::Init(&this->DynamicsProcessor,param_1->SampleRate,8);
  this->DeviceId = param_1->DeviceID;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar1 != (UObject *)0x0) {
    pUVar2 = USubmixEffectDynamicsProcessorPreset::StaticClass();
    iVar5 = (int)pUVar2->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar2->_padding_)) {
      if (pUVar1[6].field_0x20 == '\x01') {
        lVar4 = *(longlong *)(pUVar1 + 7);
        if (lVar4 == 0) {
          return;
        }
        EVar3 = AudioBus;
        iVar5 = *(byte *)(lVar4 + 0x30) + 1;
      }
      else {
        if (pUVar1[6].field_0x20 != '\x02') {
          return;
        }
        lVar4 = *(longlong *)&pUVar1[7].field_0x8;
        if (lVar4 == 0) {
          return;
        }
        iVar5 = 0;
        EVar3 = Submix;
      }
      FKeySource::Update(&this->KeySource,EVar3,*(uint *)(lVar4 + 0xc),iVar5);
    }
  }
  return;
}

// OnDeviceCreated @ 146562f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSubmixEffectDynamicsProcessor::OnDeviceCreated(FSubmixEffectDynamicsProcessor *this,uint param_1)

{
  int iVar1;
  USubmixEffectDynamicsProcessorPreset *this_00;
  UClass *pUVar2;
  FSubmixEffectDynamicsProcessorSettings *pFVar3;
  int iVar4;
  uint uVar5;
  FSubmixEffectDynamicsProcessorSettings local_128;
  FSubmixEffectDynamicsProcessorSettings local_c8;
  FSubmixEffectDynamicsProcessorSettings local_68;
  
  if (param_1 != this->DeviceId) {
    return;
  }
  this_00 = (USubmixEffectDynamicsProcessorPreset *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  iVar4 = 0;
  if (this_00 == (USubmixEffectDynamicsProcessorPreset *)0x0) {
LAB_146562f90:
    this_00 = (USubmixEffectDynamicsProcessorPreset *)0x0;
  }
  else {
    pUVar2 = USubmixEffectDynamicsProcessorPreset::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_146562f90;
  }
  if (this_00 == (USubmixEffectDynamicsProcessorPreset *)0x0) {
    local_128.KeyHighshelf._0_1_ = local_128.KeyHighshelf._0_1_ & 0xfe;
    local_128._56_1_ = local_128._56_1_ & 0xf3 | 3;
    local_128.KeyLowshelf._0_1_ = local_128.KeyLowshelf._0_1_ & 0xfe;
    pFVar3 = &local_128;
    local_128.DynamicsProcessorType = Compressor;
    local_128.PeakMode = Peak;
    local_128.LinkMode = Average;
    local_128.InputGainDb = ___xmm_412000003fc00000c0c0000000000000;
    local_128.ThresholdDb = _UNK_1512ea0a4;
    local_128.Ratio = _UNK_1512ea0a8;
    local_128.KneeBandwidthDb = _UNK_1512ea0ac;
    local_128.LookAheadMsec = 3.0;
    local_128.AttackTimeMsec = 10.0;
    local_128.ReleaseTimeMsec = 100.0;
    local_128.KeySource = Default;
    local_128.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
    local_128.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
    local_128.KeyGainDb = 0.0;
    local_128.OutputGainDb = 0.0;
    local_128.KeyHighshelf.Cutoff = 20.0;
    local_128.KeyHighshelf.GainDb = 0.0;
    local_128.KeyLowshelf.Cutoff = 20000.0;
    local_128.KeyLowshelf.GainDb = 0.0;
  }
  else {
    pFVar3 = USubmixEffectDynamicsProcessorPreset::GetSettings(this_00,&local_68);
  }
  FSubmixEffectDynamicsProcessorSettings::FSubmixEffectDynamicsProcessorSettings(&local_c8,pFVar3);
  uVar5 = 0xffffffff;
  if (local_c8.KeySource == AudioBus) {
    if (local_c8.ExternalAudioBus.field0_0x0.DebugPtr == (TObjectPtr<UAudioBus>_u_0)0x0)
    goto LAB_146563060;
    iVar1 = *(EAudioBusChannels *)((longlong)local_c8.ExternalAudioBus.field0_0x0 + 0x30) + 1;
  }
  else if ((local_c8.KeySource != Submix) ||
          (local_c8.ExternalAudioBus.field0_0x0 = (TObjectPtr<UAudioBus>_u_0)local_c8.ExternalSubmix
          , iVar1 = 0, local_c8.ExternalSubmix.field0_0x0 == (TObjectPtr<USoundSubmix>_u_0)0x0))
  goto LAB_146563060;
  iVar4 = iVar1;
  uVar5 = *(uint *)((longlong)&((UAudioBus *)local_c8.ExternalAudioBus.field0_0x0)->_padding_ + 4);
LAB_146563060:
  FKeySource::Update(&this->KeySource,local_c8.KeySource,uVar5,iVar4);
  TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
              *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
             (FDelegateHandle)(this->DeviceCreatedHandle).ID);
  return;
}

// OnDeviceDestroyed @ 1465630b0

void __thiscall
FSubmixEffectDynamicsProcessor::OnDeviceDestroyed(FSubmixEffectDynamicsProcessor *this,uint param_1)

{
  if (param_1 == this->DeviceId) {
    ResetKey(this);
    TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
               (FDelegateHandle)(this->DeviceDestroyedHandle).ID);
    return;
  }
  return;
}

// OnPresetChanged @ 146563ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSubmixEffectDynamicsProcessor::OnPresetChanged(FSubmixEffectDynamicsProcessor *this)

{
  FDynamicsProcessor *this_00;
  int iVar1;
  USubmixEffectDynamicsProcessorPreset *this_01;
  UClass *pUVar2;
  FSubmixEffectDynamicsProcessorSettings *pFVar3;
  Type TVar4;
  Type TVar5;
  Type TVar6;
  uint uVar7;
  FSubmixEffectDynamicsProcessorSettings local_138;
  FSubmixEffectDynamicsProcessorSettings local_d8;
  FSubmixEffectDynamicsProcessorSettings local_78;
  
  this_01 = (USubmixEffectDynamicsProcessorPreset *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  TVar4 = MeanSquared;
  if (this_01 == (USubmixEffectDynamicsProcessorPreset *)0x0) {
LAB_146563f49:
    this_01 = (USubmixEffectDynamicsProcessorPreset *)0x0;
  }
  else {
    pUVar2 = USubmixEffectDynamicsProcessorPreset::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_146563f49;
  }
  if (this_01 == (USubmixEffectDynamicsProcessorPreset *)0x0) {
    local_d8.KeyHighshelf._0_1_ = local_d8.KeyHighshelf._0_1_ & 0xfe;
    local_d8._56_1_ = local_d8._56_1_ & 0xf3 | 3;
    local_d8.KeyLowshelf._0_1_ = local_d8.KeyLowshelf._0_1_ & 0xfe;
    pFVar3 = &local_d8;
    local_d8.DynamicsProcessorType = Compressor;
    local_d8.PeakMode = Peak;
    local_d8.LinkMode = Average;
    local_d8.InputGainDb = ___xmm_412000003fc00000c0c0000000000000;
    local_d8.ThresholdDb = _UNK_1512ea0a4;
    local_d8.Ratio = _UNK_1512ea0a8;
    local_d8.KneeBandwidthDb = _UNK_1512ea0ac;
    local_d8.LookAheadMsec = 3.0;
    local_d8.AttackTimeMsec = 10.0;
    local_d8.ReleaseTimeMsec = 100.0;
    local_d8.KeySource = Default;
    local_d8.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
    local_d8.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
    local_d8.KeyGainDb = 0.0;
    local_d8.OutputGainDb = 0.0;
    local_d8.KeyHighshelf.Cutoff = 20.0;
    local_d8.KeyHighshelf.GainDb = 0.0;
    local_d8.KeyLowshelf.Cutoff = 20000.0;
    local_d8.KeyLowshelf.GainDb = 0.0;
  }
  else {
    pFVar3 = USubmixEffectDynamicsProcessorPreset::GetSettings(this_01,&local_78);
  }
  FSubmixEffectDynamicsProcessorSettings::FSubmixEffectDynamicsProcessorSettings(&local_138,pFVar3);
  this->bBypass = local_138.bBypass;
  TVar5 = Compressor;
  if (local_138.DynamicsProcessorType != Compressor) {
    if (local_138.DynamicsProcessorType == Limiter) {
      TVar5 = Limiter;
    }
    else if (local_138.DynamicsProcessorType == Expander) {
      TVar5 = Expander;
    }
    else if (local_138.DynamicsProcessorType == Gate) {
      TVar5 = Gate;
    }
    else if (local_138.DynamicsProcessorType == UpwardsCompressor) {
      TVar5 = UpwardsCompressor;
    }
  }
  this_00 = &this->DynamicsProcessor;
  Audio::FDynamicsProcessor::SetProcessingMode(this_00,TVar5);
  if (local_138.PeakMode == MeanSquared) {
LAB_14656404b:
    TVar6 = TVar4;
  }
  else if (local_138.PeakMode == RootMeanSquared) {
    TVar6 = RootMeanSquared;
  }
  else {
    TVar6 = Peak;
    if (local_138.PeakMode != Peak) goto LAB_14656404b;
  }
  Audio::FDynamicsProcessor::SetPeakMode(this_00,TVar6);
  Audio::FDynamicsProcessor::SetLookaheadMsec(this_00,local_138.LookAheadMsec);
  Audio::FDynamicsProcessor::SetAttackTime(this_00,local_138.AttackTimeMsec);
  Audio::FDynamicsProcessor::SetReleaseTime(this_00,local_138.ReleaseTimeMsec);
  Audio::FDynamicsProcessor::SetThreshold(this_00,local_138.ThresholdDb);
  Audio::FDynamicsProcessor::SetRatio(this_00,local_138.Ratio);
  Audio::FDynamicsProcessor::SetKneeBandwidth(this_00,local_138.KneeBandwidthDb);
  Audio::FDynamicsProcessor::SetInputGain(this_00,local_138.InputGainDb);
  Audio::FDynamicsProcessor::SetOutputGain(this_00,local_138.OutputGainDb);
  Audio::FDynamicsProcessor::SetAnalogMode(this_00,local_138.bAnalogMode);
  Audio::FDynamicsProcessor::SetKeyAudition(this_00,local_138.bKeyAudition);
  Audio::FDynamicsProcessor::SetKeyGain(this_00,local_138.KeyGainDb);
  Audio::FDynamicsProcessor::SetKeyHighshelfCutoffFrequency(this_00,local_138.KeyHighshelf.Cutoff);
  Audio::FDynamicsProcessor::SetKeyHighshelfEnabled(this_00,local_138.KeyHighshelf.bEnabled);
  Audio::FDynamicsProcessor::SetKeyHighshelfGain(this_00,local_138.KeyHighshelf.GainDb);
  Audio::FDynamicsProcessor::SetKeyLowshelfCutoffFrequency(this_00,local_138.KeyLowshelf.Cutoff);
  Audio::FDynamicsProcessor::SetKeyLowshelfEnabled(this_00,local_138.KeyLowshelf.bEnabled);
  Audio::FDynamicsProcessor::SetKeyLowshelfGain(this_00,local_138.KeyLowshelf.GainDb);
  Audio::FDynamicsProcessor::SetChannelLinkMode(this_00,local_138.LinkMode);
  uVar7 = 0xffffffff;
  if (local_138.KeySource == AudioBus) {
    if (local_138.ExternalAudioBus.field0_0x0.DebugPtr == (TObjectPtr<UAudioBus>_u_0)0x0)
    goto LAB_1465641a0;
    TVar6 = *(EAudioBusChannels *)((longlong)local_138.ExternalAudioBus.field0_0x0 + 0x30) +
            RootMeanSquared;
  }
  else if ((local_138.KeySource != Submix) ||
          (local_138.ExternalAudioBus.field0_0x0 =
                (TObjectPtr<UAudioBus>_u_0)local_138.ExternalSubmix, TVar6 = MeanSquared,
          local_138.ExternalSubmix.field0_0x0 == (TObjectPtr<USoundSubmix>_u_0)0x0))
  goto LAB_1465641a0;
  TVar4 = TVar6;
  uVar7 = *(uint *)((longlong)&((UAudioBus *)local_138.ExternalAudioBus.field0_0x0)->_padding_ + 4);
LAB_1465641a0:
  FKeySource::Update(&this->KeySource,local_138.KeySource,uVar7,TVar4);
  return;
}

// OnProcessAudio @ 146564770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubmixEffectDynamicsProcessor::OnProcessAudio
          (FSubmixEffectDynamicsProcessor *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  int *piVar1;
  FDynamicsProcessor *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  ESubmixEffectDynamicsKeySource EVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixDynamics> FVar13;
  FPatchOutput *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar14;
  int iVar15;
  bool bVar16;
  FColor_u_0 local_res20 [2];
  FName local_88;
  TArray<float,TAlignedHeapAllocator<16>_> *local_80;
  TArray<float,TAlignedHeapAllocator<16>_> *local_78;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  if (!__CsvProfilerStat280) {
    FCsvProfilerTrace::OutputInlineStat("SubmixDynamics",_GCsvCategory_Audio.Index);
    __CsvProfilerStat280 = true;
  }
  uVar9 = _GCsvCategory_Audio.Index;
  FCsvProfiler::BeginStat("SubmixDynamics",_GCsvCategory_Audio.Index,"CSV_SubmixDynamics");
  FVar13 = StatPtr_STAT_AudioMixerSubmixDynamics;
  if (StatPtr_STAT_AudioMixerSubmixDynamics ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixDynamics>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_AudioMixerSubmixDynamics");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AudioMixerSubmixDynamics>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMixerSubmixDynamics,*pFVar12
                        ,L"Submix Dynamics","STATGROUP_AudioMixer","STATCAT_Advanced",L"AudioMixer",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_14656490a:
    bVar7 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_88.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectDynamicsProcessor.cpp"
                   ,0x119);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14656490a;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar7 = true;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId282,"FSubmixEffectDynamicsProcessor::OnProcessAudio",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectDynamicsProcessor.cpp"
               ,0x11a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId282);
  }
  if ((param_1->NumChannels != param_2->NumChannels) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5987160960102564124>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectDynamicsProcessor.cpp"
                          ,0x11c,"InData.NumChannels == OutData.NumChannels"), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_78 = param_1->AudioBuffer;
  local_80 = param_2->AudioBuffer;
  if ((bBypassSubmixDynamicsProcessor != 0) || (this->bBypass != false)) {
    memcpy((local_80->AllocatorInstance).Data,(local_78->AllocatorInstance).Data,
           (longlong)local_78->ArrayNum << 2);
    goto LAB_146564bc0;
  }
  piVar1 = &(this->AudioExternal).ArrayMax;
  (this->AudioExternal).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->AudioExternal).AllocatorInstance,0,piVar1);
  }
  iVar15 = param_1->NumChannels;
  this_00 = &this->DynamicsProcessor;
  iVar11 = Audio::FDynamicsProcessor::GetNumChannels(this_00);
  if (iVar15 != iVar11) {
    Audio::FDynamicsProcessor::SetNumChannels(this_00,iVar15);
  }
  lpCriticalSection = &(this->KeySource).MutateSourceCritSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar2 = (this->KeySource).Type;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (EVar2 == Default) {
    iVar15 = param_1->NumChannels;
    iVar11 = Audio::FDynamicsProcessor::GetKeyNumChannels(this_00);
    if (iVar15 != iVar11) {
      Audio::FDynamicsProcessor::SetKeyNumChannels(this_00,iVar15);
    }
  }
  else {
    bVar10 = UpdateKeySourcePatch(this);
    if (!bVar10) {
      iVar15 = param_1->NumChannels;
      iVar11 = Audio::FDynamicsProcessor::GetKeyNumChannels(this_00);
      if (iVar15 != iVar11) {
        Audio::FDynamicsProcessor::SetKeyNumChannels(this_00,iVar15);
        iVar15 = Audio::FDynamicsProcessor::GetKeyNumChannels(this_00);
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                  (&this->AudioExternal,iVar15 * param_1->NumFrames);
        goto LAB_146564b36;
      }
    }
    iVar15 = Audio::FDynamicsProcessor::GetKeyNumChannels(this_00);
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (&this->AudioExternal,iVar15 * param_1->NumFrames);
    if (bVar10) {
      this_01 = TSharedPtr<Audio::FPatchOutput,1>::operator->(&(this->KeySource).Patch);
      iVar15 = Audio::FPatchOutput::PopAudio
                         (this_01,(float *)(this->AudioExternal).AllocatorInstance.Data,
                          (this->AudioExternal).ArrayNum,true);
      if (((this->AudioExternal).ArrayNum < iVar15) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5987160960102564182>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectDynamicsProcessor.cpp"
                              ,0x156,"NumSamplesPopped <= AudioExternal.Num()"), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
LAB_146564b36:
  EnterCriticalSection((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection);
  EVar2 = (this->KeySource).Type;
  LeaveCriticalSection((LPCRITICAL_SECTION)&(this->KeySource).MutateSourceCritSection);
  iVar15 = param_1->NumChannels * param_1->NumFrames;
  pFVar3 = (local_80->AllocatorInstance).Data;
  pFVar4 = (local_78->AllocatorInstance).Data;
  if (EVar2 == Default) {
    Audio::FDynamicsProcessor::ProcessAudio
              (this_00,(float *)pFVar4,iVar15,(float *)pFVar3,(float *)0x0,(float *)0x0);
  }
  else {
    Audio::FDynamicsProcessor::ProcessAudio
              (this_00,(float *)pFVar4,iVar15,(float *)pFVar3,
               (float *)(this->AudioExternal).AllocatorInstance.Data,(float *)0x0);
  }
LAB_146564bc0:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_48);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("SubmixDynamics",uVar9);
  return;
}

// ResetKey @ 14656fc30

void __thiscall FSubmixEffectDynamicsProcessor::ResetKey(FSubmixEffectDynamicsProcessor *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &(this->KeySource).Patch;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<Audio::FPatchOutput,1> *)&local_18) {
    pTVar1->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->KeySource).Patch.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  lpCriticalSection = &(this->KeySource).MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->KeySource).NumChannels = 0;
    (this->KeySource).ObjectId = 0xffffffff;
    (this->KeySource).Type = Default;
                    /* WARNING: Could not recover jumptable at 0x00014656fcb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateKeyFromSettings @ 14657c280

void __thiscall
FSubmixEffectDynamicsProcessor::UpdateKeyFromSettings
          (FSubmixEffectDynamicsProcessor *this,FSubmixEffectDynamicsProcessorSettings *param_1)

{
  ESubmixEffectDynamicsKeySource EVar1;
  USoundSubmix *pUVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  EVar1 = param_1->KeySource;
  iVar3 = 0;
  uVar5 = 0xffffffff;
  if (EVar1 == AudioBus) {
    pUVar2 = (USoundSubmix *)(param_1->ExternalAudioBus).field0_0x0.DebugPtr;
    iVar4 = 0;
    if (pUVar2 == (USoundSubmix *)0x0) goto LAB_14657c2bd;
    iVar3 = (byte)pUVar2->_padding_ + 1;
  }
  else {
    iVar4 = iVar3;
    if ((EVar1 != Submix) ||
       (pUVar2 = (param_1->ExternalSubmix).field0_0x0.DebugPtr, iVar4 = 0,
       pUVar2 == (USoundSubmix *)0x0)) goto LAB_14657c2bd;
  }
  uVar5 = *(uint *)((longlong)&pUVar2->_padding_ + 4);
  iVar4 = iVar3;
LAB_14657c2bd:
  FKeySource::Update(&this->KeySource,EVar1,uVar5,iVar4);
  return;
}

// UpdateKeySourcePatch @ 14657c2e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
FSubmixEffectDynamicsProcessor::UpdateKeySourcePatch(FSubmixEffectDynamicsProcessor *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  FPatchOutput *pFVar3;
  code *pcVar4;
  FAudioBusKey FVar5;
  FAudioBusKey FVar6;
  ESubmixEffectDynamicsKeySource EVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  FAudioDeviceManager *this_00;
  FMixerDevice *this_01;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UAudioBusSubsystem *this_02;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  TSharedPtr<Audio::FMixerSubmix,1> local_88;
  FString local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<Audio::FPatchOutput,1> local_58;
  FStringFormatArg local_48;
  
  lpCriticalSection = &(this->KeySource).MutateSourceCritSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar7 = (this->KeySource).Type;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (EVar7 == Default) {
    return false;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = (this->KeySource).ObjectId;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (uVar1 == 0xffffffff) {
    return false;
  }
  this_00 = FAudioDeviceManager::Get();
  if (this_00 == (FAudioDeviceManager *)0x0) {
    return false;
  }
  this_01 = (FMixerDevice *)FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->DeviceId);
  if (this_01 == (FMixerDevice *)0x0) {
    return false;
  }
  EVar7 = FKeySource::GetType(&this->KeySource);
  if (EVar7 == Default) {
LAB_14657c6b1:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Effects\\AudioMixerSubmixEffectDynamicsProcessor.cpp"
                       ,0x10d,L"");
    if (!bVar8) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if (EVar7 != AudioBus) {
    if (EVar7 == Submix) {
      Audio::FMixerDevice::FindSubmixInstanceByObjectId(this_01,&local_88,uVar1);
      if (local_88.Object == (FMixerSubmix *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        return false;
      }
      if ((local_88.Object == (FMixerSubmix *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      pFVar3 = (this->KeySource).Patch.Object;
      iVar2 = ((local_88.Object)->MixerDevice->PlatformInfo).NumChannels;
      if (((pFVar3 == (FPatchOutput *)0x0) ||
          (bVar8 = Audio::FPatchOutput::IsInputStale(pFVar3), bVar8)) ||
         (iVar10 = FKeySource::GetNumChannels(&this->KeySource), iVar10 != iVar2)) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        (this->KeySource).NumChannels = iVar2;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pTVar11 = (TSharedPtr<Audio::FPatchOutput,1> *)
                  (**(code **)(*(longlong *)this_01 + 0xb0))(this_01,local_68,uVar1,__real_3f800000)
        ;
        TSharedPtr<Audio::FPatchOutput,1>::operator=(&(this->KeySource).Patch,pTVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        Audio::FDynamicsProcessor::SetKeyNumChannels(&this->DynamicsProcessor,iVar2);
        pFVar3 = (this->KeySource).Patch.Object;
        if ((pFVar3 == (FPatchOutput *)0x0) ||
           (bVar8 = Audio::FPatchOutput::IsInputStale(pFVar3), bVar8)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          return false;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      return true;
    }
    goto LAB_14657c6b1;
  }
  pUVar12 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 != (UClass *)0x0) goto LAB_14657c4f4;
  }
  else if (pUVar12 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14657c4f4:
    pUVar13 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
    if (pUVar13 != (UClass *)0x0) {
      iVar2 = (int)pUVar13->_padding_;
      if (((int)pUVar12->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) goto LAB_14657c524;
    }
  }
  pUVar12 = (UClass *)0x0;
LAB_14657c524:
  this_02 = (UAudioBusSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&this_01->field_0x228,pUVar12);
  if (this_02 == (UAudioBusSubsystem *)0x0) {
    return false;
  }
  pFVar3 = (this->KeySource).Patch.Object;
  if ((pFVar3 != (FPatchOutput *)0x0) && (bVar8 = Audio::FPatchOutput::IsInputStale(pFVar3), !bVar8)
     ) {
    return true;
  }
  iVar2 = *(int *)&this_01->field_0x8c;
  iVar10 = FKeySource::GetNumChannels(&this->KeySource);
  FStringFormatArg::FStringFormatArg(&local_48,uVar1);
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_98.AllocatorInstance,1,&local_98.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_98.AllocatorInstance.Data,&local_48,1)
  ;
  ::FString::FormatImpl(&local_78,L"_SubmixEffectDynamicsKeySourceId_{0}",&local_98);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  FVar5.InstanceId = 0xffffffff;
  FVar5.ObjectId = uVar1;
  UAudioBusSubsystem::StartAudioBus(this_02,FVar5,&local_78,iVar10,false);
  FVar6.InstanceId = 0xffffffff;
  FVar6.ObjectId = uVar1;
  pTVar11 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                      (this_02,&local_58,FVar6,iVar2,iVar10,__real_3f800000);
  TSharedPtr<Audio::FPatchOutput,1>::operator=(&(this->KeySource).Patch,pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  Audio::FDynamicsProcessor::SetKeyNumChannels(&this->DynamicsProcessor,iVar10);
  pFVar3 = (this->KeySource).Patch.Object;
  if ((pFVar3 == (FPatchOutput *)0x0) || (bVar8 = Audio::FPatchOutput::IsInputStale(pFVar3), bVar8))
  {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    return bVar8;
  }
  return bVar8;
}

