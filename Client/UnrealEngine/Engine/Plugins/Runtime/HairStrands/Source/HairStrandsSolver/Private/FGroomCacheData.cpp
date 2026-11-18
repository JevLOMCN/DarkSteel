// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 2

// FGroomCacheData @ 14e251610

FGroomCacheData * __thiscall
UE::Groom::FGroomCacheAdapter::FGroomCacheData::FGroomCacheData
          (FGroomCacheData *this,FGroomCacheData *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  EGroomCacheAttributes EVar6;
  undefined3 uVar7;
  
  (this->CacheProcessor).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheProcessor).Chunks.AllocatorInstance.Data =
       (param_1->CacheProcessor).Chunks.AllocatorInstance.Data;
  (param_1->CacheProcessor).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheProcessor).Chunks.ArrayNum = (param_1->CacheProcessor).Chunks.ArrayNum;
  (this->CacheProcessor).Chunks.ArrayMax = (param_1->CacheProcessor).Chunks.ArrayMax;
  (param_1->CacheProcessor).Chunks.ArrayNum = 0;
  (param_1->CacheProcessor).Chunks.ArrayMax = 0;
  (this->CacheProcessor).Attributes = (param_1->CacheProcessor).Attributes;
  (this->CacheProcessor).Type = (param_1->CacheProcessor).Type;
  (this->CacheName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheName).Data.AllocatorInstance.Data = (param_1->CacheName).Data.AllocatorInstance.Data;
  (param_1->CacheName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheName).Data.ArrayNum = (param_1->CacheName).Data.ArrayNum;
  (this->CacheName).Data.ArrayMax = (param_1->CacheName).Data.ArrayMax;
  (param_1->CacheName).Data.ArrayNum = 0;
  (param_1->CacheName).Data.ArrayMax = 0;
  fVar1 = (param_1->AnimInfo).SecondsPerFrame;
  fVar2 = (param_1->AnimInfo).Duration;
  fVar3 = (param_1->AnimInfo).StartTime;
  (this->AnimInfo).NumFrames = (param_1->AnimInfo).NumFrames;
  (this->AnimInfo).SecondsPerFrame = fVar1;
  (this->AnimInfo).Duration = fVar2;
  (this->AnimInfo).StartTime = fVar3;
  iVar4 = (param_1->AnimInfo).StartFrame;
  iVar5 = (param_1->AnimInfo).EndFrame;
  EVar6 = (param_1->AnimInfo).Attributes;
  uVar7 = *(undefined3 *)&(param_1->AnimInfo).field_0x1d;
  (this->AnimInfo).EndTime = (param_1->AnimInfo).EndTime;
  (this->AnimInfo).StartFrame = iVar4;
  (this->AnimInfo).EndFrame = iVar5;
  (this->AnimInfo).Attributes = EVar6;
  *(undefined3 *)&(this->AnimInfo).field_0x1d = uVar7;
  (this->PositionsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionsBuffer).AllocatorInstance.Data = (param_1->PositionsBuffer).AllocatorInstance.Data
  ;
  (param_1->PositionsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionsBuffer).ArrayNum = (param_1->PositionsBuffer).ArrayNum;
  (this->PositionsBuffer).ArrayMax = (param_1->PositionsBuffer).ArrayMax;
  (param_1->PositionsBuffer).ArrayNum = 0;
  (param_1->PositionsBuffer).ArrayMax = 0;
  this->CacheAsset = param_1->CacheAsset;
  (this->CacheTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheTimes).AllocatorInstance.Data = (param_1->CacheTimes).AllocatorInstance.Data;
  (param_1->CacheTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheTimes).ArrayNum = (param_1->CacheTimes).ArrayNum;
  (this->CacheTimes).ArrayMax = (param_1->CacheTimes).ArrayMax;
  (param_1->CacheTimes).ArrayNum = 0;
  (param_1->CacheTimes).ArrayMax = 0;
  return this;
}

// ~FGroomCacheData @ 14e252100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Groom::FGroomCacheAdapter::FGroomCacheData::~FGroomCacheData(FGroomCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CacheTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FStrandsPositionOutput,1>,int>
            ((TSharedPtr<FStrandsPositionOutput,1> *)(this->PositionsBuffer).AllocatorInstance.Data,
             (this->PositionsBuffer).ArrayNum);
  pFVar1 = (this->PositionsBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGroomCacheChunk,int>
            ((FGroomCacheChunk *)(this->CacheProcessor).Chunks.AllocatorInstance.Data,
             (this->CacheProcessor).Chunks.ArrayNum);
  pFVar1 = (this->CacheProcessor).Chunks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

