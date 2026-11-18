// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ReleaseRHI @ 144ae2a90

void __thiscall IESAtlas::FIESTextureManager::ReleaseRHI(FIESTextureManager *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->AtlasTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->AtlasTexture).Reference = (IPooledRenderTarget *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000144ae2aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

// ~FIESTextureManager @ 144afc520

void __thiscall IESAtlas::FIESTextureManager::~FIESTextureManager(FIESTextureManager *this)

{
  TNode *pTVar1;
  FScriptContainerElement *pFVar2;
  IPooledRenderTarget *pIVar3;
  
  pTVar1 = (this->FreeSlices).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->FreeSlices).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->FreeSlices).Tail;
  }
  pTVar1 = (this->FreeSlots).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->FreeSlots).Tail = pTVar1->NextNode;
    ::operator_delete(pTVar1,0x10);
    pTVar1 = (this->FreeSlots).Tail;
  }
  DestructItems<IESAtlas::FAtlasSlot,int>
            ((FAtlasSlot *)(this->Slots).AllocatorInstance.Data,(this->Slots).ArrayNum);
  pFVar2 = (this->Slots).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->AtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

