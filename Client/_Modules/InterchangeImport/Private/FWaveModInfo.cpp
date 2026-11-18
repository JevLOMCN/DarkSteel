// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// operator= @ 14e6923d0

FWaveModInfo * __thiscall FWaveModInfo::operator=(FWaveModInfo *this,FWaveModInfo *param_1)

{
  TArray<FWaveCue,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FWaveCue,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FWaveSampleLoop,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FWaveSampleLoop,TSizedDefaultAllocator<32>_> *pTVar4;
  TPimplPtr<FSoundWaveTimecodeInfo,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar7;
  TPimplPtr<FSoundWaveTimecodeInfo,1> *pTVar8;
  
  pTVar1 = &param_1->WaveCues;
  this->pSamplesPerSec = param_1->pSamplesPerSec;
  pTVar2 = &this->WaveCues;
  this->pAvgBytesPerSec = param_1->pAvgBytesPerSec;
  this->pBlockAlign = param_1->pBlockAlign;
  this->pBitsPerSample = param_1->pBitsPerSample;
  this->pChannels = param_1->pChannels;
  this->pFormatTag = param_1->pFormatTag;
  this->pWaveDataSize = param_1->pWaveDataSize;
  this->pMasterSize = param_1->pMasterSize;
  this->SampleDataStart = param_1->SampleDataStart;
  this->SampleDataEnd = param_1->SampleDataEnd;
  this->SampleDataSize = param_1->SampleDataSize;
  this->WaveDataEnd = param_1->WaveDataEnd;
  this->NewDataSize = param_1->NewDataSize;
  if (pTVar2 != pTVar1) {
    DestructItems<FWaveCue,int>
              ((FWaveCue *)(pTVar2->AllocatorInstance).Data,(this->WaveCues).ArrayNum);
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WaveCues).ArrayNum = (param_1->WaveCues).ArrayNum;
    (this->WaveCues).ArrayMax = (param_1->WaveCues).ArrayMax;
    (param_1->WaveCues).ArrayNum = 0;
    (param_1->WaveCues).ArrayMax = 0;
  }
  pTVar3 = &param_1->WaveSampleLoops;
  pTVar4 = &this->WaveSampleLoops;
  if (pTVar4 != pTVar3) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WaveSampleLoops).ArrayNum = (param_1->WaveSampleLoops).ArrayNum;
    (this->WaveSampleLoops).ArrayMax = (param_1->WaveSampleLoops).ArrayMax;
    (param_1->WaveSampleLoops).ArrayNum = 0;
    (param_1->WaveSampleLoops).ArrayMax = 0;
  }
  pTVar8 = &param_1->TimecodeInfo;
  pTVar5 = &this->TimecodeInfo;
  if (pTVar8 != pTVar5) {
    TVar7 = *pTVar5;
    *pTVar5 = *pTVar8;
    *pTVar8 = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
    if (TVar7 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
      (**(code **)((longlong)TVar7 + -0x10))((longlong)TVar7 + -0x10);
    }
  }
  return this;
}

