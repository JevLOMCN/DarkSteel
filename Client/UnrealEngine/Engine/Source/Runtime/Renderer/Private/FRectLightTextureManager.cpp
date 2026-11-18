// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ReleaseRHI @ 1453500a0

void __thiscall RectLightAtlas::FRectLightTextureManager::ReleaseRHI(FRectLightTextureManager *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->AtlasTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->AtlasTexture).Reference = (IPooledRenderTarget *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001453500b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

// ~FRectLightTextureManager @ 145363f80

void __thiscall
RectLightAtlas::FRectLightTextureManager::~FRectLightTextureManager(FRectLightTextureManager *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  IPooledRenderTarget *pIVar3;
  
  pFVar1 = (this->AtlasLayout).FreeRects.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AtlasLayout).Horizons.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->FreeSlots).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->FreeSlots).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->FreeSlots).Tail;
  }
  pFVar1 = (this->DeletedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<RectLightAtlas::FAtlasSlot,int>
            ((FAtlasSlot *)(this->AtlasSlots).AllocatorInstance.Data,(this->AtlasSlots).ArrayNum);
  pFVar1 = (this->AtlasSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->AtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

