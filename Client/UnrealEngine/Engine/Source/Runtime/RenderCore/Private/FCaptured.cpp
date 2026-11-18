// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator= @ 145ec4c10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FCaptured * __thiscall FVisualizeTexture::FCaptured::operator=(FCaptured *this,FCaptured *param_1)

{
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  IPooledRenderTarget *pIVar2;
  FScriptContainerElement *pFVar3;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (this != param_1) {
    pIVar2 = (this->PooledRenderTarget).Reference;
    (this->PooledRenderTarget).Reference = (param_1->PooledRenderTarget).Reference;
    (param_1->PooledRenderTarget).Reference = (IPooledRenderTarget *)0x0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  this->Texture = param_1->Texture;
  FPooledRenderTargetDesc::operator=(&this->Desc,&param_1->Desc);
  pTVar1 = &this->ViewRects;
  this->InputValueMapping = param_1->InputValueMapping;
  this->ViewUniqueId = param_1->ViewUniqueId;
  pTVar4 = &param_1->ViewRects;
  (this->OutputExtent).field0_0x0 = (param_1->OutputExtent).field0_0x0;
  if (pTVar1 != pTVar4) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ViewRects).ArrayNum = (param_1->ViewRects).ArrayNum;
    (this->ViewRects).ArrayMax = (param_1->ViewRects).ArrayMax;
    (param_1->ViewRects).ArrayNum = 0;
    (param_1->ViewRects).ArrayMax = 0;
  }
  return this;
}

