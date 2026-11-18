// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// FInterchangeAudioPayloadData @ 14e67c110

FInterchangeAudioPayloadData * __thiscall
UE::Interchange::FInterchangeAudioPayloadData::FInterchangeAudioPayloadData
          (FInterchangeAudioPayloadData *this,FInterchangeAudioPayloadData *param_1)

{
  int *piVar1;
  TArray<FWaveCue,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FWaveSampleLoop,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FWaveCue *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar10;
  
  iVar5 = (param_1->FactoryInfo).SizeOfSample;
  iVar8 = (param_1->FactoryInfo).NumSamples;
  iVar9 = (param_1->FactoryInfo).NumFrames;
  pTVar2 = &(this->WaveModInfo).WaveCues;
  (this->FactoryInfo).ChannelCount = (param_1->FactoryInfo).ChannelCount;
  (this->FactoryInfo).SizeOfSample = iVar5;
  (this->FactoryInfo).NumSamples = iVar8;
  (this->FactoryInfo).NumFrames = iVar9;
  iVar5 = (param_1->FactoryInfo).SampleDataOffset;
  (this->FactoryInfo).SamplesPerSec = (param_1->FactoryInfo).SamplesPerSec;
  (this->FactoryInfo).SampleDataOffset = iVar5;
  (this->WaveModInfo).pSamplesPerSec = (param_1->WaveModInfo).pSamplesPerSec;
  (this->WaveModInfo).pAvgBytesPerSec = (param_1->WaveModInfo).pAvgBytesPerSec;
  (this->WaveModInfo).pBlockAlign = (param_1->WaveModInfo).pBlockAlign;
  (this->WaveModInfo).pBitsPerSample = (param_1->WaveModInfo).pBitsPerSample;
  (this->WaveModInfo).pChannels = (param_1->WaveModInfo).pChannels;
  (this->WaveModInfo).pFormatTag = (param_1->WaveModInfo).pFormatTag;
  (this->WaveModInfo).pWaveDataSize = (param_1->WaveModInfo).pWaveDataSize;
  (this->WaveModInfo).pMasterSize = (param_1->WaveModInfo).pMasterSize;
  (this->WaveModInfo).SampleDataStart = (param_1->WaveModInfo).SampleDataStart;
  (this->WaveModInfo).SampleDataEnd = (param_1->WaveModInfo).SampleDataEnd;
  (this->WaveModInfo).SampleDataSize = (param_1->WaveModInfo).SampleDataSize;
  (this->WaveModInfo).WaveDataEnd = (param_1->WaveModInfo).WaveDataEnd;
  (this->WaveModInfo).NewDataSize = (param_1->WaveModInfo).NewDataSize;
  piVar1 = &(this->WaveModInfo).WaveCues.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->WaveModInfo).WaveCues.ArrayNum;
  pFVar6 = (FWaveCue *)(param_1->WaveModInfo).WaveCues.AllocatorInstance.Data;
  (this->WaveModInfo).WaveCues.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    ConstructItems<FWaveCue,FWaveCue,int>((pTVar2->AllocatorInstance).Data,pFVar6,iVar5);
  }
  pTVar3 = &(this->WaveModInfo).WaveSampleLoops;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->WaveModInfo).WaveSampleLoops.ArrayMax;
  iVar5 = (param_1->WaveModInfo).WaveSampleLoops.ArrayNum;
  pFVar7 = (param_1->WaveModInfo).WaveSampleLoops.AllocatorInstance.Data;
  (this->WaveModInfo).WaveSampleLoops.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar5 * 0xc);
  }
  (this->WaveModInfo).TimecodeInfo = (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0;
  TVar10 = (param_1->WaveModInfo).TimecodeInfo;
  if (TVar10 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
    TVar10 = (TPimplPtr<FSoundWaveTimecodeInfo,1>)(**(code **)((longlong)TVar10 + -8))();
    (this->WaveModInfo).TimecodeInfo = TVar10;
  }
  pTVar4 = &this->Buffer;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Buffer).ArrayMax;
  iVar5 = (param_1->Buffer).ArrayNum;
  pFVar7 = (param_1->Buffer).AllocatorInstance.Data;
  (this->Buffer).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar5);
  }
  return this;
}

// ~FInterchangeAudioPayloadData @ 14e691a50

void __thiscall
UE::Interchange::FInterchangeAudioPayloadData::~FInterchangeAudioPayloadData
          (FInterchangeAudioPayloadData *this)

{
  FScriptContainerElement *pFVar1;
  TPimplPtr<FSoundWaveTimecodeInfo,1> TVar2;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TVar2 = (this->WaveModInfo).TimecodeInfo;
  if (TVar2 != (TPimplPtr<FSoundWaveTimecodeInfo,1>)0x0) {
    (**(code **)((longlong)TVar2 + -0x10))((longlong)TVar2 + -0x10);
  }
  pFVar1 = (this->WaveModInfo).WaveSampleLoops.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWaveCue,int>
            ((FWaveCue *)(this->WaveModInfo).WaveCues.AllocatorInstance.Data,
             (this->WaveModInfo).WaveCues.ArrayNum);
  pFVar1 = (this->WaveModInfo).WaveCues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

