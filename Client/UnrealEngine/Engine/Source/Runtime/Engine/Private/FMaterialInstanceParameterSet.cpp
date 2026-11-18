// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMaterialInstanceParameterSet @ 147f29e50

FMaterialInstanceParameterSet * __thiscall
FMaterialInstanceParameterSet::FMaterialInstanceParameterSet
          (FMaterialInstanceParameterSet *this,FMaterialInstanceParameterSet *param_1)

{
  (this->StaticSwitchParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchParameters).AllocatorInstance.Data =
       (param_1->StaticSwitchParameters).AllocatorInstance.Data;
  (param_1->StaticSwitchParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticSwitchParameters).ArrayNum = (param_1->StaticSwitchParameters).ArrayNum;
  (this->StaticSwitchParameters).ArrayMax = (param_1->StaticSwitchParameters).ArrayMax;
  (param_1->StaticSwitchParameters).ArrayNum = 0;
  (param_1->StaticSwitchParameters).ArrayMax = 0;
  (this->ScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameters).AllocatorInstance.Data =
       (param_1->ScalarParameters).AllocatorInstance.Data;
  (param_1->ScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameters).ArrayNum = (param_1->ScalarParameters).ArrayNum;
  (this->ScalarParameters).ArrayMax = (param_1->ScalarParameters).ArrayMax;
  (param_1->ScalarParameters).ArrayNum = 0;
  (param_1->ScalarParameters).ArrayMax = 0;
  (this->VectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters).AllocatorInstance.Data =
       (param_1->VectorParameters).AllocatorInstance.Data;
  (param_1->VectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorParameters).ArrayNum = (param_1->VectorParameters).ArrayNum;
  (this->VectorParameters).ArrayMax = (param_1->VectorParameters).ArrayMax;
  (param_1->VectorParameters).ArrayNum = 0;
  (param_1->VectorParameters).ArrayMax = 0;
  (this->DoubleVectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameters).AllocatorInstance.Data =
       (param_1->DoubleVectorParameters).AllocatorInstance.Data;
  (param_1->DoubleVectorParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleVectorParameters).ArrayNum = (param_1->DoubleVectorParameters).ArrayNum;
  (this->DoubleVectorParameters).ArrayMax = (param_1->DoubleVectorParameters).ArrayMax;
  (param_1->DoubleVectorParameters).ArrayNum = 0;
  (param_1->DoubleVectorParameters).ArrayMax = 0;
  (this->TextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameters).AllocatorInstance.Data =
       (param_1->TextureParameters).AllocatorInstance.Data;
  (param_1->TextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureParameters).ArrayNum = (param_1->TextureParameters).ArrayNum;
  (this->TextureParameters).ArrayMax = (param_1->TextureParameters).ArrayMax;
  (param_1->TextureParameters).ArrayNum = 0;
  (param_1->TextureParameters).ArrayMax = 0;
  (this->TextureCollectionParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameters).AllocatorInstance.Data =
       (param_1->TextureCollectionParameters).AllocatorInstance.Data;
  (param_1->TextureCollectionParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureCollectionParameters).ArrayNum = (param_1->TextureCollectionParameters).ArrayNum;
  (this->TextureCollectionParameters).ArrayMax = (param_1->TextureCollectionParameters).ArrayMax;
  (param_1->TextureCollectionParameters).ArrayNum = 0;
  (param_1->TextureCollectionParameters).ArrayMax = 0;
  (this->RuntimeVirtualTextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeVirtualTextureParameters).AllocatorInstance.Data =
       (param_1->RuntimeVirtualTextureParameters).AllocatorInstance.Data;
  (param_1->RuntimeVirtualTextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RuntimeVirtualTextureParameters).ArrayNum =
       (param_1->RuntimeVirtualTextureParameters).ArrayNum;
  (this->RuntimeVirtualTextureParameters).ArrayMax =
       (param_1->RuntimeVirtualTextureParameters).ArrayMax;
  (param_1->RuntimeVirtualTextureParameters).ArrayNum = 0;
  (param_1->RuntimeVirtualTextureParameters).ArrayMax = 0;
  (this->SparseVolumeTextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SparseVolumeTextureParameters).AllocatorInstance.Data =
       (param_1->SparseVolumeTextureParameters).AllocatorInstance.Data;
  (param_1->SparseVolumeTextureParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SparseVolumeTextureParameters).ArrayNum = (param_1->SparseVolumeTextureParameters).ArrayNum
  ;
  (this->SparseVolumeTextureParameters).ArrayMax = (param_1->SparseVolumeTextureParameters).ArrayMax
  ;
  (param_1->SparseVolumeTextureParameters).ArrayNum = 0;
  (param_1->SparseVolumeTextureParameters).ArrayMax = 0;
  (this->ParameterCollectionParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCollectionParameters).AllocatorInstance.Data =
       (param_1->ParameterCollectionParameters).AllocatorInstance.Data;
  (param_1->ParameterCollectionParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterCollectionParameters).ArrayNum = (param_1->ParameterCollectionParameters).ArrayNum
  ;
  (this->ParameterCollectionParameters).ArrayMax = (param_1->ParameterCollectionParameters).ArrayMax
  ;
  (param_1->ParameterCollectionParameters).ArrayNum = 0;
  (param_1->ParameterCollectionParameters).ArrayMax = 0;
  (this->UserSceneTextureOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSceneTextureOverrides).AllocatorInstance.Data =
       (param_1->UserSceneTextureOverrides).AllocatorInstance.Data;
  (param_1->UserSceneTextureOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSceneTextureOverrides).ArrayNum = (param_1->UserSceneTextureOverrides).ArrayNum;
  (this->UserSceneTextureOverrides).ArrayMax = (param_1->UserSceneTextureOverrides).ArrayMax;
  (param_1->UserSceneTextureOverrides).ArrayNum = 0;
  (param_1->UserSceneTextureOverrides).ArrayMax = 0;
  this->PostProcessBlendableOverrides = param_1->PostProcessBlendableOverrides;
  return this;
}

// ~FMaterialInstanceParameterSet @ 147f2ecf0

void __thiscall
FMaterialInstanceParameterSet::~FMaterialInstanceParameterSet(FMaterialInstanceParameterSet *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UserSceneTextureOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterCollectionParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SparseVolumeTextureParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RuntimeVirtualTextureParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureCollectionParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleVectorParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticSwitchParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

