// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 1453640a0

FAtlasLayout * __thiscall
RectLightAtlas::FAtlasLayout::operator=(FAtlasLayout *this,FAtlasLayout *param_1)

{
  TArray<RectLightAtlas::FAtlasHorizon,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<RectLightAtlas::FAtlasHorizon,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<RectLightAtlas::FAtlasRect,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<RectLightAtlas::FAtlasRect,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &param_1->Horizons;
  pTVar2 = &this->Horizons;
  (this->AtlasResolution).field0_0x0 = (param_1->AtlasResolution).field0_0x0;
  this->SourceTextureMIPBias = param_1->SourceTextureMIPBias;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Horizons).ArrayNum = (param_1->Horizons).ArrayNum;
    (this->Horizons).ArrayMax = (param_1->Horizons).ArrayMax;
    (param_1->Horizons).ArrayNum = 0;
    (param_1->Horizons).ArrayMax = 0;
  }
  pTVar3 = &param_1->FreeRects;
  pTVar4 = &this->FreeRects;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FreeRects).ArrayNum = (param_1->FreeRects).ArrayNum;
    (this->FreeRects).ArrayMax = (param_1->FreeRects).ArrayMax;
    (param_1->FreeRects).ArrayNum = 0;
    (param_1->FreeRects).ArrayMax = 0;
  }
  return this;
}

