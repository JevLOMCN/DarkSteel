// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 3

// FResampledPatchInput @ 14b34ab00

FResampledPatchInput * __thiscall
Metasound::AudioBusPrivate::FResampledPatchInput::FResampledPatchInput
          (FResampledPatchInput *this,int param_1,float param_2,float param_3,int param_4,
          FPatchInput *param_5)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FResampledPatchInput *pFVar6;
  float fVar7;
  
  this->NumChannels = param_1;
  Audio::FRuntimeResampler::FRuntimeResampler(&this->Resampler,param_1);
  piVar1 = &(this->ScratchBuffer).ArrayNum;
  piVar2 = &(this->ScratchBuffer).ArrayMax;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  Audio::FPatchInput::FPatchInput(&this->PatchInput,param_5);
  if (param_1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FResampledPatchInput *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_2 <= 0.0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAudioBusSampleRate > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x54,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FResampledPatchInput *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_3 <= 0.0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMetaSoundSampleRate> 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FResampledPatchInput *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (param_4 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMetaSoundBlockSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FResampledPatchInput *)(*pcVar3)();
      return pFVar6;
    }
  }
  fVar7 = param_3 / param_2;
  Audio::FRuntimeResampler::SetFrameRatio(&this->Resampler,fVar7,0);
  fVar7 = __real_bf000000 - (fVar7 + fVar7);
  iVar5 = Audio::FRuntimeResampler::GetNumOutputFramesProducedByInputFrames
                    (&this->Resampler,param_4 + 1);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,(iVar5 - ((int)ROUND(fVar7) >> 1)) * this->NumChannels,
             &(this->ScratchBuffer).AllocatorInstance,piVar1,piVar2);
  Audio::FPatchInput::~FPatchInput(param_5);
  return this;
}

// PushAudio @ 14b3ce5c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Metasound::AudioBusPrivate::FResampledPatchInput::PushAudio
          (FResampledPatchInput *this,float *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  FResampledPatchInput *local_88;
  int *local_80;
  float *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  undefined4 local_3c;
  
  local_res18[0] =
       Audio::FRuntimeResampler::GetNumOutputFramesProducedByInputFrames
                 (&this->Resampler,param_2 / this->NumChannels);
  local_res18[0] = local_res18[0] * this->NumChannels;
  piVar1 = &(this->ScratchBuffer).ArrayNum;
  if (*piVar1 < local_res18[0]) {
    local_80 = local_res18;
    local_88 = this;
    bVar5 = `Metasound::AudioBusPrivate::FResampledPatchInput::PushAudio'::__l3::<lambda_1>::
            operator()(&local_88);
    if (!bVar5) {
      piVar2 = &(this->ScratchBuffer).ArrayMax;
      *piVar1 = 0;
      if (*piVar2 < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->ScratchBuffer).AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,local_res18[0],&(this->ScratchBuffer).AllocatorInstance,piVar1,piVar2);
    }
  }
  iVar6 = local_res18[0];
  pFVar3 = (this->ScratchBuffer).AllocatorInstance.Data;
  local_res8[0] = -1;
  local_res10[0] = -1;
  if (local_res18[0] < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  local_78 = param_1;
  iStack_70 = param_2;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  local_68._12_4_ = local_3c;
  local_68.ArrayNum = iVar6;
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iStack_70;
  local_58.DataPtr = local_78;
  local_68.DataPtr = (float *)pFVar3;
  Audio::FRuntimeResampler::ProcessInterleaved
            (&this->Resampler,&local_58,&local_68,local_res8,local_res10);
  if ((local_res8[0] * this->NumChannels < param_2) && (2 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FPatchInput::PushAudio
            (&this->PatchInput,(float *)(this->ScratchBuffer).AllocatorInstance.Data,
             local_res10[0] * this->NumChannels);
  return local_res8[0] * this->NumChannels;
}

// operator() @ 150565100

bool __thiscall
`Metasound::AudioBusPrivate::FResampledPatchInput::PushAudio'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2101430758089424789>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2101430758089424789>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

