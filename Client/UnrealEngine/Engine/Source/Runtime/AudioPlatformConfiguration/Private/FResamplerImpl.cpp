// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 5

// FResamplerImpl @ 14453a0f0

FResamplerImpl * __thiscall Audio::FResamplerImpl::FResamplerImpl(FResamplerImpl *this)

{
  this->CurrentSampleRateRatio = -1.0;
  this->LibSRCState = (SRC_STATE_tag *)0x0;
  return this;
}

// ~FResamplerImpl @ 14453a180

void __thiscall Audio::FResamplerImpl::~FResamplerImpl(FResamplerImpl *this)

{
  code *pcVar1;
  bool bVar2;
  SRC_STATE_tag *pSVar3;
  
  if (this->LibSRCState != (SRC_STATE_tag *)0x0) {
    pSVar3 = src_delete(this->LibSRCState);
    this->LibSRCState = pSVar3;
    if (pSVar3 != (SRC_STATE_tag *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LibSRCState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformConfiguration\\Private\\AudioResampler.cpp"
                         ,0x82,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Init @ 14453a820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FResamplerImpl::Init
          (FResamplerImpl *this,EResamplingMethod param_1,float param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  SRC_STATE_tag *pSVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (this->LibSRCState != (SRC_STATE_tag *)0x0) {
    iVar3 = src_get_channels(this->LibSRCState);
    if (param_3 == iVar3) {
      local_res8[0] = src_reset(this->LibSRCState);
      if (local_res8[0] != 0) {
        src_strerror(local_res8[0]);
        if ((byte)LogAudioResampler._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
        return;
      }
    }
    else {
      pSVar4 = src_delete(this->LibSRCState);
      this->LibSRCState = pSVar4;
      if ((pSVar4 != (SRC_STATE_tag *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("nullptr == LibSRCState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformConfiguration\\Private\\AudioResampler.cpp"
                             ,0x9a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (this->LibSRCState == (SRC_STATE_tag *)0x0) {
    pSVar4 = src_new((uint)param_1,param_3,local_res8);
    this->LibSRCState = pSVar4;
    if ((pSVar4 == (SRC_STATE_tag *)0x0) &&
       (src_strerror(local_res8[0]), 1 < (byte)LogAudioResampler._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
    }
  }
  if (((this->LibSRCState != (SRC_STATE_tag *)0x0) &&
      (local_res8[0] = src_set_ratio(this->LibSRCState,(double)param_2), local_res8[0] != 0)) &&
     (src_strerror(local_res8[0]), 1 < (byte)LogAudioResampler._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
  }
  this->CurrentSampleRateRatio = param_2;
  return;
}

// ProcessAudio @ 14453aa70

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Audio::FResamplerImpl::ProcessAudio
          (FResamplerImpl *this,float *param_1,int param_2,bool param_3,float *param_4,int param_5,
          int *param_6)

{
  float fVar1;
  SRC_STATE_tag *pSVar2;
  int iVar3;
  
  pSVar2 = this->LibSRCState;
  if (pSVar2 != (SRC_STATE_tag *)0x0) {
    fVar1 = this->CurrentSampleRateRatio;
    (this->Data).data_in = param_1;
    (this->Data).data_out = param_4;
    (this->Data).output_frames = param_5;
    (this->Data).end_of_input = (uint)param_3;
    (this->Data).input_frames = param_2;
    (this->Data).src_ratio = (double)fVar1;
    iVar3 = src_process(pSVar2,&this->Data);
    if (iVar3 != 0) {
      src_strerror(iVar3);
      if (1 < (byte)LogAudioResampler._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
      }
      return iVar3;
    }
    *param_6 = (this->Data).output_frames_gen;
  }
  return 0;
}

// SetSampleRateRatio @ 14453ad40

void __thiscall Audio::FResamplerImpl::SetSampleRateRatio(FResamplerImpl *this,float param_1)

{
  if (param_1 <= __real_3727c5ac) {
    param_1 = __real_3727c5ac;
  }
  this->CurrentSampleRateRatio = param_1;
  return;
}

