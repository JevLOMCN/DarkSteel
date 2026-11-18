// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ~FFieldExecutionDatas @ 14406b040

void __thiscall FFieldExecutionDatas::~FFieldExecutionDatas(FFieldExecutionDatas *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FFieldExecutionDatas *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  
  lVar7 = 2;
  pFVar4 = this + 1;
  lVar2 = 2;
  do {
    pFVar1 = pFVar4[-1].IndexResults[1].AllocatorInstance.Data;
    pFVar4 = (FFieldExecutionDatas *)(pFVar4[-1].IndexResults + 1);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)this->IndexResults;
  lVar2 = 2;
  do {
    pFVar1 = pTVar5[-1].AllocatorInstance.Data;
    pTVar5 = pTVar5 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)this->IntegerResults;
  lVar2 = 2;
  do {
    pFVar1 = pTVar6[-1].AllocatorInstance.Data;
    pTVar6 = pTVar6 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)this->ScalarResults;
  lVar2 = 2;
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pTVar3 = this->VectorResults;
  lVar2 = 4;
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pTVar3 = this->FieldOutputs;
  do {
    pFVar1 = (((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)(pTVar3 + -1))->AllocatorInstance).Data;
    pTVar3 = pTVar3 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pFVar1 = (this->SampleIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SamplePositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

