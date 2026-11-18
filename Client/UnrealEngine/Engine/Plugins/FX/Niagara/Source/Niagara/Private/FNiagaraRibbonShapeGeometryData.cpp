// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FNiagaraRibbonShapeGeometryData @ 149336b60

void __thiscall
FNiagaraRibbonShapeGeometryData::~FNiagaraRibbonShapeGeometryData
          (FNiagaraRibbonShapeGeometryData *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  
  pFVar1 = (this->SliceVertexDataBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SliceVertexDataBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->SliceVertexData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar1 = (this->SliceTriangleToVertexIdsBuffer).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SliceTriangleToVertexIdsBuffer).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  FVar4 = (this->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
    return;
  }
  return;
}

