// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 2

// operator() @ 14d7f9e90

void __thiscall
TDefaultDelete<Audio::FBlockCorrelator>::operator()
          (TDefaultDelete<Audio::FBlockCorrelator> *this,FBlockCorrelator *param_1)

{
  FScriptContainerElement *pFVar1;
  IFFTAlgorithm *pIVar2;
  
  if (param_1 != (FBlockCorrelator *)0x0) {
    pFVar1 = (param_1->FullOutputBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ComplexCorrelationBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ComplexBufferB).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ComplexBufferA).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->WindowedBufferB).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->WindowedBufferA).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->NormalizationBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar2 = (param_1->FFTAlgorithm).Ptr;
    if (pIVar2 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    ::operator_delete(param_1,0xb0);
  }
  return;
}

// operator() @ 14d7f9f50

void __thiscall
TDefaultDelete<Audio::FOnsetStrengthAnalyzer>::operator()
          (TDefaultDelete<Audio::FOnsetStrengthAnalyzer> *this,FOnsetStrengthAnalyzer *param_1)

{
  IFFTAlgorithm *pIVar1;
  FContiguousSparse2DKernelTransform *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_1 != (FOnsetStrengthAnalyzer *)0x0) {
    pIVar1 = (param_1->FFT).Ptr;
    if (pIVar1 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    pFVar2 = (param_1->MelTransform).Ptr;
    if (pFVar2 != (FContiguousSparse2DKernelTransform *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    pFVar3 = (param_1->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->MelSpectrumDifference).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->MelSpectrum).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
              ((TArray<float,TAlignedHeapAllocator<16>_> *)
               (param_1->PreviousMelSpectra).AllocatorInstance.Data,
               (param_1->PreviousMelSpectra).ArrayNum);
    pFVar3 = (param_1->PreviousMelSpectra).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->RealSpectrum).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->ComplexSpectrum).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->WindowedSamples).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->WorkingBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (param_1->SlidingBuffer).StorageBuffer.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,0xf8);
  }
  return;
}

