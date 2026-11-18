// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 8

// FSubmixEffectConvolutionReverb @ 14f0b8800

FSubmixEffectConvolutionReverb * __thiscall
FSubmixEffectConvolutionReverb::FSubmixEffectConvolutionReverb
          (FSubmixEffectConvolutionReverb *this,USubmixEffectConvolutionReverbPreset *param_1)

{
  FSubmixEffectConvolutionReverbSettings *pFVar1;
  FSubmixEffectConvolutionReverbSettings local_38;
  
  FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSubmixEffectConvolutionReverb__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->WetVolume = 1.0;
  this->DryVolume = 1.0;
  MakeShared<Audio::FEffectConvolutionReverb,1>(&this->Reverb);
  UpdateConvolutionReverb(this,(USubmixEffectConvolutionReverbPreset *)&stack0x00000008);
  if (param_1 != (USubmixEffectConvolutionReverbPreset *)0x0) {
    pFVar1 = USubmixEffectConvolutionReverbPreset::GetSettings(param_1,&local_38);
    SetConvolutionReverbParameters(this,pFVar1);
  }
  return this;
}

// ~FSubmixEffectConvolutionReverb @ 14f0bf530

void __thiscall
FSubmixEffectConvolutionReverb::~FSubmixEffectConvolutionReverb
          (FSubmixEffectConvolutionReverb *this)

{
  this->_padding_ = (longlong)&___7FSubmixEffectConvolutionReverb__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Reverb).SharedReferenceCount.ReferenceController);
  FSoundEffectBase::~FSoundEffectBase((FSoundEffectBase *)this);
  return;
}

// Init @ 14f0e50e0

void __thiscall
FSubmixEffectConvolutionReverb::Init
          (FSubmixEffectConvolutionReverb *this,FSoundEffectSubmixInitData *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  FVersionData *pFVar2;
  float fVar3;
  FEffectConvolutionReverb *pFVar4;
  
  pFVar4 = (this->Reverb).Object;
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
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnPresetChanged @ 14f0eecb0

void __thiscall
FSubmixEffectConvolutionReverb::OnPresetChanged(FSubmixEffectConvolutionReverb *this)

{
  USoundEffectPreset *pUVar1;
  USubmixEffectConvolutionReverbPreset *this_00;
  FSubmixEffectConvolutionReverbSettings local_38;
  
  pUVar1 = (USoundEffectPreset *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  this_00 = CastChecked<USubmixEffectConvolutionReverbPreset,USoundEffectPreset>(pUVar1);
  USubmixEffectConvolutionReverbPreset::GetSettings(this_00,&local_38);
  SetConvolutionReverbParameters(this,&local_38);
  return;
}

// OnProcessAudio @ 14f0efe10

void __thiscall
FSubmixEffectConvolutionReverb::OnProcessAudio
          (FSubmixEffectConvolutionReverb *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<float,int> *pTVar5;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38 [3];
  
  if (param_1->AudioBuffer == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != InData.AudioBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixEffectConvolutionReverb.cpp"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->AudioBuffer == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != OutData.AudioBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixEffectConvolutionReverb.cpp"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->NumChannels == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData.NumChannels != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SubmixEffectConvolutionReverb.cpp"
                       ,0x5e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  Audio::FEffectConvolutionReverb::UpdateChannelCount
            ((this->Reverb).Object,param_1->NumChannels,param_2->NumChannels);
  Audio::FEffectConvolutionReverb::ProcessAudio
            ((this->Reverb).Object,param_1->NumChannels,
             (float *)(param_1->AudioBuffer->AllocatorInstance).Data,param_2->NumChannels,
             (float *)(param_2->AudioBuffer->AllocatorInstance).Data,param_1->NumFrames);
  fVar1 = this->WetVolume;
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pTVar5 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_48,param_2->AudioBuffer);
    local_78.DataPtr = pTVar5->DataPtr;
    local_78.ArrayNum = pTVar5->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    Audio::ArrayMultiplyByConstantInPlace(&local_78,fVar1);
  }
  fVar1 = this->DryVolume;
  if (__real_38d1b717 < fVar1) {
    pTVar5 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (local_38,param_2->AudioBuffer);
    local_68.DataPtr = pTVar5->DataPtr;
    local_68.ArrayNum = pTVar5->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    local_58.DataPtr = (float *)(param_1->AudioBuffer->AllocatorInstance).Data;
    iVar2 = param_1->AudioBuffer->ArrayNum;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_58._12_4_ = uStack_7c;
    local_58.ArrayNum = iVar2;
    Audio::ArrayMixIn(&local_58,&local_68,fVar1);
  }
  return;
}

// RebuildConvolutionReverb @ 14f0f4810

void __thiscall
FSubmixEffectConvolutionReverb::RebuildConvolutionReverb(FSubmixEffectConvolutionReverb *this)

{
  Audio::FEffectConvolutionReverb::BuildReverb((this->Reverb).Object);
  return;
}

// SetConvolutionReverbParameters @ 14f0f9540

void __thiscall
FSubmixEffectConvolutionReverb::SetConvolutionReverbParameters
          (FSubmixEffectConvolutionReverb *this,FSubmixEffectConvolutionReverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FEffectConvolutionReverb *pFVar1;
  FConvolutionReverb *this_00;
  float _X;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  
  _X = __real_41200000;
  fVar5 = __real_3d4ccccd;
  fVar2 = powf(__real_41200000,param_1->SurroundRearChannelBleedDb * __real_3d4ccccd);
  if (param_1->bInvertRearChannelBleedPhase != false) {
    fVar2 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  }
  fVar3 = powf(_X,param_1->NormalizationVolumeDb * fVar5);
  local_50 = CONCAT31(local_50._1_3_,param_1->bSurroundRearChannelFlip);
  fVar4 = powf(_X,param_1->WetVolumeDb * fVar5);
  this->WetVolume = fVar4;
  fVar5 = powf(_X,param_1->DryVolumeDb * fVar5);
  pFVar1 = (this->Reverb).Object;
  this->DryVolume = fVar5;
  lpCriticalSection = &(pFVar1->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (pFVar1->Params).bChanged = true;
    (pFVar1->Params).CurrentParams.NormalizationVolume = fVar3;
    (pFVar1->Params).CurrentParams.RearChannelBleed = fVar2;
    *(undefined4 *)&(pFVar1->Params).CurrentParams.bRearChannelFlip = local_50;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (pFVar1->Reverb).Ptr;
    if (this_00 != (FConvolutionReverb *)0x0) {
      (this_00->Settings).NormalizationVolume = fVar3;
      (this_00->Settings).RearChannelBleed = fVar2;
      *(undefined4 *)&(this_00->Settings).bRearChannelFlip = local_50;
      Audio::FConvolutionReverb::Update(this_00,true);
    }
    ((this->Reverb).Object)->bBypass = param_1->bBypass;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateConvolutionReverb @ 14f106e90

FVersionData __thiscall
FSubmixEffectConvolutionReverb::UpdateConvolutionReverb
          (FSubmixEffectConvolutionReverb *this,USubmixEffectConvolutionReverbPreset *param_1)

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
  if (in_R8 == 0) goto LAB_14f107001;
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
LAB_14f106f9d:
      local_78.bIsImpulseTrueStereo = false;
    }
    else {
      local_78.bIsImpulseTrueStereo = true;
      if ((*(byte *)(lVar1 + 0x38) & 1) != 0) goto LAB_14f106f9d;
    }
    fVar4 = powf(__real_41200000,*(float *)(lVar1 + 0x40) * __real_3d4ccccd);
    local_78.NormalizationVolume = fVar4;
  }
  if (*(char *)(in_R8 + 0xa0) == '\0') {
    local_78.AlgorithmSettings.BlockNumSamples = 0x100;
  }
  else if (*(char *)(in_R8 + 0xa0) == '\x01') {
    local_78.AlgorithmSettings.BlockNumSamples = 0x200;
  }
  else {
    local_78.AlgorithmSettings.BlockNumSamples = 0x400;
  }
  local_78.AlgorithmSettings.bEnableHardwareAcceleration = *(bool *)(in_R8 + 0xa1);
  local_78._60_2_ = *(undefined2 *)(in_R8 + 0x7d);
LAB_14f107001:
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

