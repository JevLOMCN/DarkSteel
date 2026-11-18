// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 3

// FResampledPatchOutput @ 14b34acd0

FResampledPatchOutput * __thiscall
Metasound::AudioBusPrivate::FResampledPatchOutput::FResampledPatchOutput
          (FResampledPatchOutput *this,int param_1,float param_2,float param_3,int param_4,
          TSharedRef<Audio::FPatchOutput,1> *param_5)

{
  int *piVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FResampledPatchOutput *pFVar7;
  float fVar8;
  
  this->NumChannels = param_1;
  Audio::FRuntimeResampler::FRuntimeResampler(&this->Resampler,param_1);
  piVar1 = &(this->ScratchBuffer).ArrayNum;
  piVar2 = &(this->ScratchBuffer).ArrayMax;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->PatchOutput).Object = param_5->Object;
  pTVar3 = (param_5->SharedReferenceCount).ReferenceController;
  (this->PatchOutput).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x1a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FResampledPatchOutput *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_2 <= 0.0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAudioBusSampleRate > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FResampledPatchOutput *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_3 <= 0.0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMetaSoundSampleRate> 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x1c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FResampledPatchOutput *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_4 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMetaSoundBlockSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAudioBusPrivate.cpp"
                       ,0x1d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FResampledPatchOutput *)(*pcVar4)();
      return pFVar7;
    }
  }
  fVar8 = param_2 / param_3;
  Audio::FRuntimeResampler::SetFrameRatio(&this->Resampler,fVar8,0);
  fVar8 = __real_bf000000 - (fVar8 + fVar8);
  iVar6 = Audio::FRuntimeResampler::GetNumInputFramesNeededToProduceOutputFrames
                    (&this->Resampler,param_4);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,(iVar6 - ((int)ROUND(fVar8) >> 1)) * this->NumChannels,
             &(this->ScratchBuffer).AllocatorInstance,piVar1,piVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return this;
}

// PopAudio @ 14b3cc080

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Metasound::AudioBusPrivate::FResampledPatchOutput::PopAudio
          (FResampledPatchOutput *this,float *param_1,int param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  FResampledPatchOutput *local_88;
  int *local_80;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  undefined4 local_3c;
  
  local_res18[0] =
       Audio::FRuntimeResampler::GetNumInputFramesNeededToProduceOutputFrames
                 (&this->Resampler,param_2 / this->NumChannels);
  local_res18[0] = local_res18[0] * this->NumChannels;
  piVar1 = &(this->ScratchBuffer).ArrayNum;
  if (*piVar1 < local_res18[0]) {
    local_80 = local_res18;
    local_88 = this;
    bVar4 = `Metasound::AudioBusPrivate::FResampledPatchOutput::PopAudio'::__l3::<lambda_1>::
            operator()(&local_88);
    if (!bVar4) {
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
  iVar5 = Audio::FPatchOutput::PopAudio
                    ((this->PatchOutput).Object,
                     (float *)(this->ScratchBuffer).AllocatorInstance.Data,local_res18[0],param_3);
  local_res8[0] = -1;
  local_res10[0] = -1;
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  local_78 = (this->ScratchBuffer).AllocatorInstance.Data;
  iStack_70 = iVar5;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  local_68._12_4_ = local_3c;
  local_68.ArrayNum = param_2;
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iStack_70;
  local_58.DataPtr = (float *)local_78;
  local_68.DataPtr = param_1;
  Audio::FRuntimeResampler::ProcessInterleaved
            (&this->Resampler,&local_58,&local_68,local_res8,local_res10);
  if ((local_res8[0] * this->NumChannels < iVar5) && (2 < (byte)LogMetaSound._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  return local_res10[0] * this->NumChannels;
}

// operator() @ 1505650a0

bool __thiscall
`Metasound::AudioBusPrivate::FResampledPatchOutput::PopAudio'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2101430758089424841>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2101430758089424841>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

