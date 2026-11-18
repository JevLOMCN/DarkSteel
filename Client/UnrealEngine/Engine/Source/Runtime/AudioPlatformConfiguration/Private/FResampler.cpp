// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 6

// FResampler @ 144539ff0

FResampler * __thiscall Audio::FResampler::FResampler(FResampler *this)

{
  code *pcVar1;
  bool bVar2;
  FResamplerImpl *pFVar3;
  SRC_STATE_tag *pSVar4;
  FResampler *pFVar5;
  FResamplerImpl *pFVar6;
  FResampler local_18 [2];
  
  pFVar6 = (FResamplerImpl *)0x0;
  (this->Impl).Ptr = (FResamplerImpl *)0x0;
  pFVar3 = ::operator_new(0x40);
  if (pFVar3 != (FResamplerImpl *)0x0) {
    pFVar3->CurrentSampleRateRatio = -1.0;
    pFVar3->LibSRCState = (SRC_STATE_tag *)0x0;
    pFVar6 = pFVar3;
  }
  if (this == local_18) {
    if (pFVar6 == (FResamplerImpl *)0x0) {
      return this;
    }
    pFVar3 = pFVar6;
    if (pFVar6->LibSRCState != (SRC_STATE_tag *)0x0) {
      pSVar4 = src_delete(pFVar6->LibSRCState);
      pFVar6->LibSRCState = pSVar4;
      if ((pSVar4 != (SRC_STATE_tag *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LibSRCState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformConfiguration\\Private\\AudioResampler.cpp"
                             ,0x82,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FResampler *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  else {
    pFVar3 = (this->Impl).Ptr;
    (this->Impl).Ptr = pFVar6;
    if (pFVar3 == (FResamplerImpl *)0x0) {
      return this;
    }
    if (pFVar3->LibSRCState != (SRC_STATE_tag *)0x0) {
      pSVar4 = src_delete(pFVar3->LibSRCState);
      pFVar3->LibSRCState = pSVar4;
      if ((pSVar4 != (SRC_STATE_tag *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LibSRCState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformConfiguration\\Private\\AudioResampler.cpp"
                             ,0x82,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FResampler *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  ::operator_delete(pFVar3,0x40);
  return this;
}

// ~FResampler @ 14453a110

void __thiscall Audio::FResampler::~FResampler(FResampler *this)

{
  FResamplerImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  SRC_STATE_tag *pSVar4;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 == (FResamplerImpl *)0x0) {
    return;
  }
  if (pFVar1->LibSRCState != (SRC_STATE_tag *)0x0) {
    pSVar4 = src_delete(pFVar1->LibSRCState);
    pFVar1->LibSRCState = pSVar4;
    if (pSVar4 != (SRC_STATE_tag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LibSRCState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformConfiguration\\Private\\AudioResampler.cpp"
                         ,0x82,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  ::operator_delete(pFVar1,0x40);
  return;
}

// CreateImpl @ 14453a2d0

TUniquePtr<Audio::FResamplerImpl,TDefaultDelete<Audio::FResamplerImpl>_> __thiscall
Audio::FResampler::CreateImpl(FResampler *this)

{
  undefined4 *puVar1;
  FResamplerImpl *in_RDX;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xbf800000;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined4 **)in_RDX = puVar1;
    return (TUniquePtr<Audio::FResamplerImpl,TDefaultDelete<Audio::FResamplerImpl>_>)in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return (TUniquePtr<Audio::FResamplerImpl,TDefaultDelete<Audio::FResamplerImpl>_>)in_RDX;
}

// Init @ 14453a6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FResampler::Init(FResampler *this,EResamplingMethod param_1,float param_2,int param_3)

{
  FResamplerImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  SRC_STATE_tag *pSVar5;
  int local_res8 [2];
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FResamplerImpl *)0x0) {
    local_res8[0] = 0;
    if (pFVar1->LibSRCState != (SRC_STATE_tag *)0x0) {
      iVar4 = src_get_channels(pFVar1->LibSRCState);
      if (param_3 == iVar4) {
        local_res8[0] = src_reset(pFVar1->LibSRCState);
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
        pSVar5 = src_delete(pFVar1->LibSRCState);
        pFVar1->LibSRCState = pSVar5;
        if ((pSVar5 != (SRC_STATE_tag *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("nullptr == LibSRCState",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioPlatformConfiguration\\Private\\AudioResampler.cpp"
                               ,0x9a,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (pFVar1->LibSRCState == (SRC_STATE_tag *)0x0) {
      pSVar5 = src_new((uint)param_1,param_3,local_res8);
      pFVar1->LibSRCState = pSVar5;
      if ((pSVar5 == (SRC_STATE_tag *)0x0) &&
         (src_strerror(local_res8[0]), 1 < (byte)LogAudioResampler._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
      }
    }
    if (((pFVar1->LibSRCState != (SRC_STATE_tag *)0x0) &&
        (local_res8[0] = src_set_ratio(pFVar1->LibSRCState,(double)param_2), local_res8[0] != 0)) &&
       (src_strerror(local_res8[0]), 1 < (byte)LogAudioResampler._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
    }
    pFVar1->CurrentSampleRateRatio = param_2;
  }
  return;
}

// ProcessAudio @ 14453a9b0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Audio::FResampler::ProcessAudio
          (FResampler *this,float *param_1,int param_2,bool param_3,float *param_4,int param_5,
          int *param_6)

{
  float fVar1;
  FResamplerImpl *pFVar2;
  SRC_STATE_tag *pSVar3;
  int iVar4;
  
  pFVar2 = (this->Impl).Ptr;
  if (pFVar2 == (FResamplerImpl *)0x0) {
    return 0;
  }
  pSVar3 = pFVar2->LibSRCState;
  if (pSVar3 != (SRC_STATE_tag *)0x0) {
    fVar1 = pFVar2->CurrentSampleRateRatio;
    (pFVar2->Data).data_in = param_1;
    (pFVar2->Data).data_out = param_4;
    (pFVar2->Data).output_frames = param_5;
    (pFVar2->Data).end_of_input = (uint)param_3;
    (pFVar2->Data).input_frames = param_2;
    (pFVar2->Data).src_ratio = (double)fVar1;
    iVar4 = src_process(pSVar3,&pFVar2->Data);
    if (iVar4 != 0) {
      src_strerror(iVar4);
      if ((byte)LogAudioResampler._0_1_ < 2) {
        return iVar4;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioResampler);
      return iVar4;
    }
    *param_6 = (pFVar2->Data).output_frames_gen;
  }
  return 0;
}

// SetSampleRateRatio @ 14453ad20

void __thiscall Audio::FResampler::SetSampleRateRatio(FResampler *this,float param_1)

{
  FResamplerImpl *pFVar1;
  
  pFVar1 = (this->Impl).Ptr;
  if (pFVar1 != (FResamplerImpl *)0x0) {
    if (param_1 <= __real_3727c5ac) {
      param_1 = __real_3727c5ac;
    }
    pFVar1->CurrentSampleRateRatio = param_1;
  }
  return;
}

