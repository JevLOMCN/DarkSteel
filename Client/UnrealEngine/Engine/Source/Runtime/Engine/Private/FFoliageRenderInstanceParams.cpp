// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FFoliageRenderInstanceParams @ 147cc3310

FFoliageRenderInstanceParams * __thiscall
FFoliageRenderInstanceParams::FFoliageRenderInstanceParams
          (FFoliageRenderInstanceParams *this,bool param_1,bool param_2,bool param_3)

{
  this->bNeedsSingleLODRuns = param_1;
  this->_padding_ = (longlong)&___7FFoliageRenderInstanceParams__6B_;
  this->bNeedsMultipleLODRuns = param_2;
  this->bOverestimate = param_3;
  this->MultipleLODRuns[0].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[0].ArrayNum = 0;
  this->MultipleLODRuns[0].ArrayMax = 0;
  this->MultipleLODRuns[1].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[1].ArrayNum = 0;
  this->MultipleLODRuns[1].ArrayMax = 0;
  this->MultipleLODRuns[2].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[2].ArrayNum = 0;
  this->MultipleLODRuns[2].ArrayMax = 0;
  this->MultipleLODRuns[3].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[3].ArrayNum = 0;
  this->MultipleLODRuns[3].ArrayMax = 0;
  this->MultipleLODRuns[4].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[4].ArrayNum = 0;
  this->MultipleLODRuns[4].ArrayMax = 0;
  this->MultipleLODRuns[5].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[5].ArrayNum = 0;
  this->MultipleLODRuns[5].ArrayMax = 0;
  this->MultipleLODRuns[6].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[6].ArrayNum = 0;
  this->MultipleLODRuns[6].ArrayMax = 0;
  this->MultipleLODRuns[7].AllocatorInstance.Data = (uint *)0x0;
  this->MultipleLODRuns[7].ArrayNum = 0;
  this->MultipleLODRuns[7].ArrayMax = 0;
  this->SingleLODRuns[0].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[0].ArrayNum = 0;
  this->SingleLODRuns[0].ArrayMax = 0;
  this->SingleLODRuns[1].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[1].ArrayNum = 0;
  this->SingleLODRuns[1].ArrayMax = 0;
  this->SingleLODRuns[2].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[2].ArrayNum = 0;
  this->SingleLODRuns[2].ArrayMax = 0;
  this->SingleLODRuns[3].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[3].ArrayNum = 0;
  this->SingleLODRuns[3].ArrayMax = 0;
  this->SingleLODRuns[4].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[4].ArrayNum = 0;
  this->SingleLODRuns[4].ArrayMax = 0;
  this->SingleLODRuns[5].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[5].ArrayNum = 0;
  this->SingleLODRuns[5].ArrayMax = 0;
  this->SingleLODRuns[6].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[6].ArrayNum = 0;
  this->SingleLODRuns[6].ArrayMax = 0;
  this->SingleLODRuns[7].AllocatorInstance.Data = (uint *)0x0;
  this->SingleLODRuns[7].ArrayNum = 0;
  this->SingleLODRuns[7].ArrayMax = 0;
  this->TotalSingleLODInstances[0] = 0;
  this->TotalSingleLODInstances[1] = 0;
  this->TotalMultipleLODInstances[0] = 0;
  this->TotalMultipleLODInstances[1] = 0;
  this->TotalSingleLODInstances[2] = 0;
  this->TotalSingleLODInstances[3] = 0;
  this->TotalMultipleLODInstances[2] = 0;
  this->TotalMultipleLODInstances[3] = 0;
  this->TotalSingleLODInstances[4] = 0;
  this->TotalSingleLODInstances[5] = 0;
  this->TotalMultipleLODInstances[4] = 0;
  this->TotalMultipleLODInstances[5] = 0;
  this->TotalSingleLODInstances[6] = 0;
  this->TotalSingleLODInstances[7] = 0;
  this->TotalMultipleLODInstances[6] = 0;
  this->TotalMultipleLODInstances[7] = 0;
  return this;
}

// ~FFoliageRenderInstanceParams @ 147cc8520

void __thiscall
FFoliageRenderInstanceParams::~FFoliageRenderInstanceParams(FFoliageRenderInstanceParams *this)

{
  uint *puVar1;
  longlong lVar2;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar3;
  longlong lVar4;
  
  lVar2 = 8;
  pTVar3 = (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
           this->TotalSingleLODInstances;
  lVar4 = 8;
  do {
    puVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    if (puVar1 != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
    }
  } while (lVar4 != 0);
  pTVar3 = this->SingleLODRuns;
  do {
    puVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (puVar1 != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar1);
    }
  } while (lVar2 != 0);
  this->_padding_ = (longlong)&___7FOneFrameResource__6B_;
  return;
}

