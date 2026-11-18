// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 8

// FSourceEffectConvolutionReverb @ 14f0b7dc0

FSourceEffectConvolutionReverb * __thiscall
FSourceEffectConvolutionReverb::FSourceEffectConvolutionReverb
          (FSourceEffectConvolutionReverb *this,USourceEffectConvolutionReverbPreset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSourceEffectConvolutionReverbSettings local_18;
  
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined8 *)&this->field_0x80 = 0xffffffffffffffff;
  *(undefined ***)this = &___7FSourceEffectConvolutionReverb__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  MakeShared<Audio::FEffectConvolutionReverb,1>(&this->Reverb);
  this->WetVolume = 1.0;
  this->DryVolume = 1.0;
  this->NumChannels = 0;
  UpdateConvolutionReverb(this,(USourceEffectConvolutionReverbPreset *)&stack0x00000008);
  if (param_1 != (USourceEffectConvolutionReverbPreset *)0x0) {
    lpCriticalSection = &param_1->SettingsCritSect;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.NormalizationVolumeDb = (param_1->SettingsCopy).NormalizationVolumeDb;
    local_18.WetVolumeDb = (param_1->SettingsCopy).WetVolumeDb;
    local_18.DryVolumeDb = (param_1->SettingsCopy).DryVolumeDb;
    local_18.bBypass = (param_1->SettingsCopy).bBypass;
    local_18._13_3_ = *(undefined3 *)&(param_1->SettingsCopy).field_0xd;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetConvolutionReverbParameters(this,&local_18);
  }
  return this;
}

// ~FSourceEffectConvolutionReverb @ 14f0bf1e0

void __thiscall
FSourceEffectConvolutionReverb::~FSourceEffectConvolutionReverb
          (FSourceEffectConvolutionReverb *this)

{
  *(undefined ***)this = &___7FSourceEffectConvolutionReverb__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Reverb).SharedReferenceCount.ReferenceController);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e3f00

void __thiscall
FSourceEffectConvolutionReverb::Init
          (FSourceEffectConvolutionReverb *this,FSoundEffectSourceInitData *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  FVersionData *pFVar2;
  float fVar3;
  FEffectConvolutionReverb *pFVar4;
  
  pFVar4 = (this->Reverb).Object;
  this->NumChannels = param_1->NumSourceChannels;
  fVar3 = param_1->SampleRate;
  pFVar1 = &pFVar4->ConvReverbInitDataCriticalSection;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar4->SampleRate = fVar3;
    (pFVar4->ConvReverbInitData).TargetSampleRate = fVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar4 = (this->Reverb).Object;
    pFVar1 = &pFVar4->VersionDataCriticalSection;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar2 = &pFVar4->VersionData;
      pFVar2->ConvolutionID = pFVar2->ConvolutionID + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      Audio::FEffectConvolutionReverb::Init((this->Reverb).Object);
      Audio::FEffectConvolutionReverb::UpdateChannelCount
                ((this->Reverb).Object,this->NumChannels,this->NumChannels);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnPresetChanged @ 14f0ec910

void __thiscall
FSourceEffectConvolutionReverb::OnPresetChanged(FSourceEffectConvolutionReverb *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  USoundEffectPreset *pUVar1;
  USourceEffectConvolutionReverbPreset *pUVar2;
  FSourceEffectConvolutionReverbSettings local_18;
  
  pUVar1 = (USoundEffectPreset *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4c);
  pUVar2 = CastChecked<USourceEffectConvolutionReverbPreset,USoundEffectPreset>(pUVar1);
  lpCriticalSection = &pUVar2->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.NormalizationVolumeDb = (pUVar2->SettingsCopy).NormalizationVolumeDb;
    local_18.WetVolumeDb = (pUVar2->SettingsCopy).WetVolumeDb;
    local_18.DryVolumeDb = (pUVar2->SettingsCopy).DryVolumeDb;
    local_18.bBypass = (pUVar2->SettingsCopy).bBypass;
    local_18._13_3_ = *(undefined3 *)&(pUVar2->SettingsCopy).field_0xd;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SetConvolutionReverbParameters(this,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessAudio @ 14f0f2750

void __thiscall
FSourceEffectConvolutionReverb::ProcessAudio
          (FSourceEffectConvolutionReverb *this,FSoundEffectSourceInputData *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  if (param_1->InputSourceEffectBufferPtr == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InData.InputSourceEffectBufferPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectConvolutionReverb.cpp"
                       ,0x4d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != OutAudioBufferData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectConvolutionReverb.cpp"
                       ,0x4e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->NumChannels == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumChannels != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SourceEffectConvolutionReverb.cpp"
                       ,0x4f,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = this->NumChannels;
  iVar2 = param_1->NumSamples;
  Audio::FEffectConvolutionReverb::UpdateChannelCount((this->Reverb).Object,iVar1,iVar1);
  Audio::FEffectConvolutionReverb::ProcessAudio
            ((this->Reverb).Object,this->NumChannels,param_1->InputSourceEffectBufferPtr,
             this->NumChannels,param_2,iVar2 / iVar1);
  iVar1 = param_1->NumSamples;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pfVar3 = param_1->InputSourceEffectBufferPtr;
  iVar2 = param_1->NumSamples;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar5._4_4_ = uStack_5c;
  uVar5._0_4_ = iVar1;
  if (__real_322bcc77 <
      (float)((uint)(this->WetVolume - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_48.DataPtr = param_2;
    local_48._8_8_ = uVar5;
    Audio::ArrayMultiplyByConstantInPlace(&local_48,this->WetVolume);
  }
  if (__real_38d1b717 < this->DryVolume) {
    local_28[0]._12_4_ = uStack_4c;
    local_28[0].ArrayNum = iVar2;
    local_38.DataPtr = param_2;
    local_38._8_8_ = uVar5;
    local_28[0].DataPtr = pfVar3;
    Audio::ArrayMixIn(local_28,&local_38,this->DryVolume);
  }
  return;
}

// RebuildConvolutionReverb @ 14f0f47f0

void __thiscall
FSourceEffectConvolutionReverb::RebuildConvolutionReverb(FSourceEffectConvolutionReverb *this)

{
  Audio::FEffectConvolutionReverb::BuildReverb((this->Reverb).Object);
  return;
}

// SetConvolutionReverbParameters @ 14f0f9400

void __thiscall
FSourceEffectConvolutionReverb::SetConvolutionReverbParameters
          (FSourceEffectConvolutionReverb *this,FSourceEffectConvolutionReverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FEffectConvolutionReverb *pFVar1;
  FConvolutionReverb *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  uint local_40;
  
  fVar4 = __real_41200000;
  local_40 = local_40 & 0xffffff00;
  fVar2 = powf(__real_41200000,param_1->NormalizationVolumeDb * __real_3d4ccccd);
  fVar3 = powf(fVar4,param_1->WetVolumeDb * __real_3d4ccccd);
  this->WetVolume = fVar3;
  fVar4 = powf(fVar4,param_1->DryVolumeDb * __real_3d4ccccd);
  pFVar1 = (this->Reverb).Object;
  this->DryVolume = fVar4;
  lpCriticalSection = &(pFVar1->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (pFVar1->Params).CurrentParams.NormalizationVolume = (float)(int)(ulonglong)(uint)fVar2;
    (pFVar1->Params).CurrentParams.RearChannelBleed = (float)(int)((ulonglong)(uint)fVar2 >> 0x20);
    *(uint *)&(pFVar1->Params).CurrentParams.bRearChannelFlip = local_40;
    (pFVar1->Params).bChanged = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (pFVar1->Reverb).Ptr;
    if (this_00 != (FConvolutionReverb *)0x0) {
      (this_00->Settings).NormalizationVolume = (float)(int)(ulonglong)(uint)fVar2;
      (this_00->Settings).RearChannelBleed = (float)(int)((ulonglong)(uint)fVar2 >> 0x20);
      *(uint *)&(this_00->Settings).bRearChannelFlip = local_40;
      Audio::FConvolutionReverb::Update(this_00,true);
    }
    ((this->Reverb).Object)->bBypass = param_1->bBypass;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateConvolutionReverb @ 14f106ca0

FVersionData __thiscall
FSourceEffectConvolutionReverb::UpdateConvolutionReverb
          (FSourceEffectConvolutionReverb *this,USourceEffectConvolutionReverbPreset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  void *_Src;
  FEffectConvolutionReverb *pFVar2;
  longlong lVar3;
  longlong in_R8;
  float fVar4;
  FConvolutionReverbInitData local_78;
  
  local_78.AlgorithmSettings._1_2_ = 0;
  local_78.AlgorithmSettings._3_1_ = 0;
  local_78.Samples.ArrayMax = 0;
  local_78.NormalizationVolume = 0.0;
  local_78.bMixInputChannelFormatToImpulseResponseFormat = true;
  local_78.bMixReverbOutputToOutputChannelFormat = true;
  local_78.bIsImpulseTrueStereo = false;
  local_78._63_1_ = 0;
  local_78.InputAudioFormat.NumChannels = 0;
  local_78.OutputAudioFormat.NumChannels = 0;
  local_78.AlgorithmSettings.bEnableHardwareAcceleration = true;
  local_78.AlgorithmSettings.BlockNumSamples = 0x100;
  local_78.AlgorithmSettings.NumInputChannels = 0;
  local_78.AlgorithmSettings.NumOutputChannels = 0;
  local_78.AlgorithmSettings.NumImpulseResponses = 0;
  local_78.AlgorithmSettings.MaxNumImpulseResponseSamples = 0;
  local_78.ImpulseSampleRate = 0.0;
  local_78.TargetSampleRate = 0.0;
  local_78.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Samples.ArrayNum = 0;
  local_78.GainMatrix.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.GainMatrix.ArrayNum = 0;
  local_78.GainMatrix.ArrayMax = 0;
  if (in_R8 == 0) goto LAB_14f106e03;
  lVar1 = *(longlong *)(in_R8 + 0x68);
  if (lVar1 != 0) {
    if (&local_78.Samples != (TArray<float,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x28)) {
      local_78.Samples.ArrayNum = *(int *)(lVar1 + 0x30);
      lVar3 = (longlong)local_78.Samples.ArrayNum;
      _Src = *(void **)(lVar1 + 0x28);
      if (local_78.Samples.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_78.Samples.ArrayNum,0,&local_78.Samples.AllocatorInstance,
                   local_78.Samples.ArrayNum,&local_78.Samples.ArrayMax);
        memcpy(local_78.Samples.AllocatorInstance.Data,_Src,lVar3 << 2);
      }
    }
    local_78.AlgorithmSettings.NumImpulseResponses = *(int *)(lVar1 + 0x38);
    local_78.ImpulseSampleRate = (float)*(int *)(lVar1 + 0x3c);
    if (*(char *)(lVar1 + 0x44) == '\0') {
LAB_14f106dad:
      local_78.bIsImpulseTrueStereo = false;
    }
    else {
      local_78.bIsImpulseTrueStereo = true;
      if ((*(byte *)(lVar1 + 0x38) & 1) != 0) goto LAB_14f106dad;
    }
    fVar4 = powf(__real_41200000,*(float *)(lVar1 + 0x40) * __real_3d4ccccd);
    local_78.NormalizationVolume = fVar4;
  }
  if (*(char *)(in_R8 + 0x80) == '\0') {
    local_78.AlgorithmSettings.BlockNumSamples = 0x100;
  }
  else if (*(char *)(in_R8 + 0x80) == '\x01') {
    local_78.AlgorithmSettings.BlockNumSamples = 0x200;
  }
  else {
    local_78.AlgorithmSettings.BlockNumSamples = 0x400;
  }
  local_78.AlgorithmSettings.bEnableHardwareAcceleration = *(bool *)(in_R8 + 0x81);
LAB_14f106e03:
  Audio::FEffectConvolutionReverb::SetInitData((this->Reverb).Object,&local_78);
  pFVar2 = (this->Reverb).Object;
  *(undefined4 *)&param_1->_padding_ = 0;
  lpCriticalSection = &pFVar2->VersionDataCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (pFVar2->VersionData).ConvolutionID = (pFVar2->VersionData).ConvolutionID + 1;
  *(int *)&param_1->_padding_ = (pFVar2->VersionData).ConvolutionID;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_78.GainMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.GainMatrix.AllocatorInstance.Data);
  }
  if (local_78.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Samples.AllocatorInstance.Data);
  }
  return (FVersionData)(int)param_1;
}

