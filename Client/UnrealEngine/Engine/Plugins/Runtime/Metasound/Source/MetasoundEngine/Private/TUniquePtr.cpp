// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 5

// operator= @ 14b352d80

TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
* __thiscall
TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
::operator=(TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
            *this,TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
                  *param_1)

{
  FResampledPatchInput *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<float_*> FVar3;
  ForElementType<float_const_*> FVar4;
  ForElementType<float> FVar5;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FResampledPatchInput *)0x0;
    if (pFVar1 != (FResampledPatchInput *)0x0) {
      Audio::FPatchInput::~FPatchInput(&pFVar1->PatchInput);
      pFVar2 = (pFVar1->ScratchBuffer).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      FVar3 = (pFVar1->Resampler).TempOutputPointers.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      FVar4 = (pFVar1->Resampler).TempInputPointers.AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<float_const_*>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      FVar5 = (pFVar1->Resampler).PreviousFrame.AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<float>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      ::operator_delete(pFVar1,0xa0);
    }
    return this;
  }
  return this;
}

// operator= @ 14b352e20

TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
* __thiscall
TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
::operator=(TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
            *this,TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
                  *param_1)

{
  FResampledPatchOutput *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<float_*> FVar3;
  ForElementType<float_const_*> FVar4;
  ForElementType<float> FVar5;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FResampledPatchOutput *)0x0;
    if (pFVar1 != (FResampledPatchOutput *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar1->PatchOutput).SharedReferenceCount.ReferenceController);
      pFVar2 = (pFVar1->ScratchBuffer).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      FVar3 = (pFVar1->Resampler).TempOutputPointers.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<float_*>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      FVar4 = (pFVar1->Resampler).TempInputPointers.AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<float_const_*>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      FVar5 = (pFVar1->Resampler).PreviousFrame.AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<float>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      ::operator_delete(pFVar1,0x98);
    }
    return this;
  }
  return this;
}

// Reset @ 14b3da8d0

void __thiscall
TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
::Reset(TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchInput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchInput>_>
        *this,FResampledPatchInput *param_1)

{
  FResampledPatchInput *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<float_*> FVar3;
  ForElementType<float_const_*> FVar4;
  ForElementType<float> FVar5;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FResampledPatchInput *)0x0)) {
    Audio::FPatchInput::~FPatchInput(&pFVar1->PatchInput);
    pFVar2 = (pFVar1->ScratchBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FVar3 = (pFVar1->Resampler).TempOutputPointers.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<float_*>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (pFVar1->Resampler).TempInputPointers.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<float_const_*>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    FVar5 = (pFVar1->Resampler).PreviousFrame.AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<float>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    ::operator_delete(pFVar1,0xa0);
    return;
  }
  return;
}

// Reset @ 14b3da950

void __thiscall
TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
::Reset(TUniquePtr<Metasound::AudioBusPrivate::FResampledPatchOutput,TDefaultDelete<Metasound::AudioBusPrivate::FResampledPatchOutput>_>
        *this,FResampledPatchOutput *param_1)

{
  FResampledPatchOutput *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<float_*> FVar3;
  ForElementType<float_const_*> FVar4;
  ForElementType<float> FVar5;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FResampledPatchOutput *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->PatchOutput).SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->ScratchBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    FVar3 = (pFVar1->Resampler).TempOutputPointers.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<float_*>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (pFVar1->Resampler).TempInputPointers.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<float_const_*>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    FVar5 = (pFVar1->Resampler).PreviousFrame.AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<float>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    ::operator_delete(pFVar1,0x98);
    return;
  }
  return;
}

// Reset @ 14b3da9d0

void __thiscall
TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_>::Reset
          (TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_> *this,
          FSoundWaveProxyReader *param_1)

{
  FSoundWaveProxyReader *pFVar1;
  FScriptContainerElement *pFVar2;
  ICompressedAudioInfo *pIVar3;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FSoundWaveProxyReader *)0x0)) {
    pFVar2 = (pFVar1->SampleConversionBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->ResidualBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pIVar3 = (pFVar1->CompressedAudioInfo).Ptr;
    if (pIVar3 != (ICompressedAudioInfo *)0x0) {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->WaveProxy).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0xa8);
    return;
  }
  return;
}

