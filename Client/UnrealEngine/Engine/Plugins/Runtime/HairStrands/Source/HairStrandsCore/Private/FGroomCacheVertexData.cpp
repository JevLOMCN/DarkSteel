// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// FGroomCacheVertexData @ 14dfedfa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGroomCacheVertexData * __thiscall
FGroomCacheVertexData::FGroomCacheVertexData
          (FGroomCacheVertexData *this,FHairStrandsPoints *param_1)

{
  (this->PointsPosition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsPosition).AllocatorInstance.Data = (param_1->PointsPosition).AllocatorInstance.Data;
  (param_1->PointsPosition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsPosition).ArrayNum = (param_1->PointsPosition).ArrayNum;
  (this->PointsPosition).ArrayMax = (param_1->PointsPosition).ArrayMax;
  (param_1->PointsPosition).ArrayNum = 0;
  (param_1->PointsPosition).ArrayMax = 0;
  (this->PointsRadius).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsRadius).AllocatorInstance.Data = (param_1->PointsRadius).AllocatorInstance.Data;
  (param_1->PointsRadius).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsRadius).ArrayNum = (param_1->PointsRadius).ArrayNum;
  (this->PointsRadius).ArrayMax = (param_1->PointsRadius).ArrayMax;
  (param_1->PointsRadius).ArrayNum = 0;
  (param_1->PointsRadius).ArrayMax = 0;
  (this->PointsCoordU).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsCoordU).AllocatorInstance.Data = (param_1->PointsCoordU).AllocatorInstance.Data;
  (param_1->PointsCoordU).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsCoordU).ArrayNum = (param_1->PointsCoordU).ArrayNum;
  (this->PointsCoordU).ArrayMax = (param_1->PointsCoordU).ArrayMax;
  (param_1->PointsCoordU).ArrayNum = 0;
  (param_1->PointsCoordU).ArrayMax = 0;
  (this->PointsBaseColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsBaseColor).AllocatorInstance.Data = (param_1->PointsBaseColor).AllocatorInstance.Data
  ;
  (param_1->PointsBaseColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsBaseColor).ArrayNum = (param_1->PointsBaseColor).ArrayNum;
  (this->PointsBaseColor).ArrayMax = (param_1->PointsBaseColor).ArrayMax;
  (param_1->PointsBaseColor).ArrayNum = 0;
  (param_1->PointsBaseColor).ArrayMax = 0;
  (this->PositionBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->RadiusBuffer).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// ~FGroomCacheVertexData @ 14dff1d00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FGroomCacheVertexData::~FGroomCacheVertexData(FGroomCacheVertexData *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->RadiusBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->PositionBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->PointsBaseColor).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PointsCoordU).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PointsRadius).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PointsPosition).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Serialize @ 14e027ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FGroomCacheVertexData::Serialize
          (FGroomCacheVertexData *this,FArchive *param_1,int param_2,EGroomCacheAttributes param_3)

{
  if ((param_3 & Position) != None) {
    TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
              (param_1,&this->PointsPosition);
  }
  if ((param_3 & Width) != None) {
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&this->PointsRadius);
  }
  if ((param_3 & Color) != None) {
    TArrayPrivateFriend::Serialize<FLinearColor,TSizedDefaultAllocator<32>_>
              (param_1,&this->PointsBaseColor);
  }
  return;
}

