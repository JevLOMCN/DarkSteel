// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FGlobalDistanceFieldClipmapState @ 1453f9a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGlobalDistanceFieldClipmapState * __thiscall
FGlobalDistanceFieldClipmapState::FGlobalDistanceFieldClipmapState
          (FGlobalDistanceFieldClipmapState *this)

{
  undefined8 uVar1;
  
  this->Cache[0].PrimitiveModifiedBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Cache[0].PrimitiveModifiedBounds.ArrayNum = 0;
  this->Cache[0].PrimitiveModifiedBounds.ArrayMax = 0;
  this->Cache[1].PrimitiveModifiedBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Cache[1].PrimitiveModifiedBounds.ArrayNum = 0;
  uVar1 = UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Y;
  this->Cache[1].PrimitiveModifiedBounds.ArrayMax = 0;
  (this->FullUpdateOriginInPages).field0_0x0._s_0.X =
       UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.X;
  (this->FullUpdateOriginInPages).field0_0x0._s_0.Y = uVar1;
  (this->FullUpdateOriginInPages).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Y;
  (this->LastPartialUpdateOriginInPages).field0_0x0._s_0.X =
       UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.X;
  (this->LastPartialUpdateOriginInPages).field0_0x0._s_0.Y = uVar1;
  (this->LastPartialUpdateOriginInPages).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<__int64>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->CachedClipmapCenter).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->CachedClipmapCenter).field0_0x0 + 8) = 0;
  this->CacheClipmapInfluenceRadius = 0.0;
  this->LastUsedSceneDataForFullUpdate = (FDistanceFieldSceneData *)0x0;
  this->CacheMostlyStaticSeparately = 1;
  return this;
}

// ~FGlobalDistanceFieldClipmapState @ 145405180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGlobalDistanceFieldClipmapState::~FGlobalDistanceFieldClipmapState
          (FGlobalDistanceFieldClipmapState *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FGlobalDistanceFieldCacheTypeState *pFVar3;
  
  pFVar3 = (FGlobalDistanceFieldCacheTypeState *)&this->LastUsedSceneDataForFullUpdate;
  lVar2 = 2;
  do {
    pFVar1 = pFVar3[-1].PrimitiveModifiedBounds.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

