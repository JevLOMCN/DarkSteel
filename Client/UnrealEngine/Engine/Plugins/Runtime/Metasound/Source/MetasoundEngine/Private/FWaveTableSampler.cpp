// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// operator= @ 14b353050

FWaveTableSampler * __thiscall
WaveTable::FWaveTableSampler::operator=(FWaveTableSampler *this,FWaveTableSampler *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined3 uVar8;
  
  pTVar1 = &param_1->PhaseModScratch;
  this->LastIndex = param_1->LastIndex;
  pTVar2 = &this->PhaseModScratch;
  this->OneShotData = param_1->OneShotData;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PhaseModScratch).ArrayNum = (param_1->PhaseModScratch).ArrayNum;
    (this->PhaseModScratch).ArrayMax = (param_1->PhaseModScratch).ArrayMax;
    (param_1->PhaseModScratch).ArrayNum = 0;
    (param_1->PhaseModScratch).ArrayMax = 0;
  }
  fVar4 = (param_1->Settings).Offset;
  fVar5 = (param_1->Settings).Freq;
  fVar6 = (param_1->Settings).Phase;
  (this->Settings).Amplitude = (param_1->Settings).Amplitude;
  (this->Settings).Offset = fVar4;
  (this->Settings).Freq = fVar5;
  (this->Settings).Phase = fVar6;
  bVar7 = (param_1->Settings).bOneShot;
  uVar8 = *(undefined3 *)&(param_1->Settings).field_0x15;
  (this->Settings).InterpolationMode = (param_1->Settings).InterpolationMode;
  (this->Settings).bOneShot = bVar7;
  *(undefined3 *)&(this->Settings).field_0x15 = uVar8;
  return this;
}

