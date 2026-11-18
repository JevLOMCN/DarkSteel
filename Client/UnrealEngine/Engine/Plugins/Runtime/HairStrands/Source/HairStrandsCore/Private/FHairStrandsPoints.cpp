// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// FHairStrandsPoints @ 14dfee970

FHairStrandsPoints * __thiscall
FHairStrandsPoints::FHairStrandsPoints(FHairStrandsPoints *this,FHairStrandsPoints *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->PointsPosition).ArrayMax;
  (this->PointsPosition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->PointsPosition).ArrayNum;
  pFVar6 = (param_1->PointsPosition).AllocatorInstance.Data;
  (this->PointsPosition).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->PointsPosition).AllocatorInstance.Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar2 = &this->PointsRadius;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointsRadius).ArrayMax;
  iVar5 = (param_1->PointsRadius).ArrayNum;
  pFVar6 = (param_1->PointsRadius).AllocatorInstance.Data;
  (this->PointsRadius).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar2 = &this->PointsCoordU;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointsCoordU).ArrayMax;
  iVar5 = (param_1->PointsCoordU).ArrayNum;
  pFVar6 = (param_1->PointsCoordU).AllocatorInstance.Data;
  (this->PointsCoordU).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->PointsBaseColor;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointsBaseColor).ArrayMax;
  iVar5 = (param_1->PointsBaseColor).ArrayNum;
  pFVar6 = (param_1->PointsBaseColor).AllocatorInstance.Data;
  (this->PointsBaseColor).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
  }
  pTVar2 = &this->PointsRoughness;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointsRoughness).ArrayMax;
  iVar5 = (param_1->PointsRoughness).ArrayNum;
  pFVar6 = (param_1->PointsRoughness).AllocatorInstance.Data;
  (this->PointsRoughness).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar2 = &this->PointsAO;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointsAO).ArrayMax;
  iVar5 = (param_1->PointsAO).ArrayNum;
  pFVar6 = (param_1->PointsAO).AllocatorInstance.Data;
  (this->PointsAO).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &this->PointsMapping;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointsMapping).ArrayMax;
  iVar5 = (param_1->PointsMapping).ArrayNum;
  pFVar6 = (param_1->PointsMapping).AllocatorInstance.Data;
  (this->PointsMapping).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->SourcePointCount = param_1->SourcePointCount;
  return this;
}

// ~FHairStrandsPoints @ 14dff26e0

void __thiscall FHairStrandsPoints::~FHairStrandsPoints(FHairStrandsPoints *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PointsMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointsAO).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointsRoughness).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointsBaseColor).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointsCoordU).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointsRadius).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointsPosition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14dff3350

FHairStrandsPoints * __thiscall
FHairStrandsPoints::operator=(FHairStrandsPoints *this,FHairStrandsPoints *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  if (this != param_1) {
    pFVar7 = (this->PointsPosition).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (this->PointsPosition).AllocatorInstance.Data = (param_1->PointsPosition).AllocatorInstance.Data
    ;
    (param_1->PointsPosition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PointsPosition).ArrayNum = (param_1->PointsPosition).ArrayNum;
    (this->PointsPosition).ArrayMax = (param_1->PointsPosition).ArrayMax;
    (param_1->PointsPosition).ArrayNum = 0;
    (param_1->PointsPosition).ArrayMax = 0;
  }
  pTVar1 = &param_1->PointsRadius;
  pTVar2 = &this->PointsRadius;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointsRadius).ArrayNum = (param_1->PointsRadius).ArrayNum;
    (this->PointsRadius).ArrayMax = (param_1->PointsRadius).ArrayMax;
    (param_1->PointsRadius).ArrayNum = 0;
    (param_1->PointsRadius).ArrayMax = 0;
  }
  pTVar1 = &param_1->PointsCoordU;
  pTVar2 = &this->PointsCoordU;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointsCoordU).ArrayNum = (param_1->PointsCoordU).ArrayNum;
    (this->PointsCoordU).ArrayMax = (param_1->PointsCoordU).ArrayMax;
    (param_1->PointsCoordU).ArrayNum = 0;
    (param_1->PointsCoordU).ArrayMax = 0;
  }
  pTVar3 = &param_1->PointsBaseColor;
  pTVar4 = &this->PointsBaseColor;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointsBaseColor).ArrayNum = (param_1->PointsBaseColor).ArrayNum;
    (this->PointsBaseColor).ArrayMax = (param_1->PointsBaseColor).ArrayMax;
    (param_1->PointsBaseColor).ArrayNum = 0;
    (param_1->PointsBaseColor).ArrayMax = 0;
  }
  pTVar1 = &param_1->PointsRoughness;
  pTVar2 = &this->PointsRoughness;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointsRoughness).ArrayNum = (param_1->PointsRoughness).ArrayNum;
    (this->PointsRoughness).ArrayMax = (param_1->PointsRoughness).ArrayMax;
    (param_1->PointsRoughness).ArrayNum = 0;
    (param_1->PointsRoughness).ArrayMax = 0;
  }
  pTVar1 = &param_1->PointsAO;
  pTVar2 = &this->PointsAO;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointsAO).ArrayNum = (param_1->PointsAO).ArrayNum;
    (this->PointsAO).ArrayMax = (param_1->PointsAO).ArrayMax;
    (param_1->PointsAO).ArrayNum = 0;
    (param_1->PointsAO).ArrayMax = 0;
  }
  pTVar5 = &param_1->PointsMapping;
  pTVar6 = &this->PointsMapping;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PointsMapping).ArrayNum = (param_1->PointsMapping).ArrayNum;
    (this->PointsMapping).ArrayMax = (param_1->PointsMapping).ArrayMax;
    (param_1->PointsMapping).ArrayNum = 0;
    (param_1->PointsMapping).ArrayMax = 0;
  }
  this->SourcePointCount = param_1->SourcePointCount;
  return this;
}

// HasAttribute @ 14e0a4170

bool __thiscall FHairStrandsPoints::HasAttribute(FHairStrandsPoints *this,EHairAttribute param_1)

{
  if (param_1 == Width) {
    return 0 < (this->PointsRadius).ArrayNum;
  }
  if (param_1 == Color) {
    return 0 < (this->PointsBaseColor).ArrayNum;
  }
  if (param_1 == Roughness) {
    return 0 < (this->PointsRoughness).ArrayNum;
  }
  if (param_1 == AO) {
    return 0 < (this->PointsAO).ArrayNum;
  }
  return false;
}

// Reset @ 14e0aab50

void __thiscall FHairStrandsPoints::Reset(FHairStrandsPoints *this)

{
  (this->PointsPosition).ArrayNum = 0;
  if ((this->PointsPosition).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,&(this->PointsPosition).ArrayMax);
  }
  (this->PointsRadius).ArrayNum = 0;
  if ((this->PointsRadius).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsRadius).AllocatorInstance,0,&(this->PointsRadius).ArrayMax);
  }
  (this->PointsCoordU).ArrayNum = 0;
  if ((this->PointsCoordU).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsCoordU).AllocatorInstance,0,&(this->PointsCoordU).ArrayMax);
  }
  (this->PointsBaseColor).ArrayNum = 0;
  if ((this->PointsBaseColor).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->PointsBaseColor).AllocatorInstance,0,
               &(this->PointsBaseColor).ArrayMax);
  }
  (this->PointsRoughness).ArrayNum = 0;
  if ((this->PointsRoughness).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsRoughness).AllocatorInstance,0,&(this->PointsRoughness).ArrayMax)
    ;
  }
  (this->PointsAO).ArrayNum = 0;
  if ((this->PointsAO).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsAO).AllocatorInstance,0,&(this->PointsAO).ArrayMax);
  }
  (this->PointsMapping).ArrayNum = 0;
  if ((this->PointsMapping).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PointsMapping).AllocatorInstance,0,&(this->PointsMapping).ArrayMax);
  }
  this->SourcePointCount = 0;
  return;
}

// SetNum @ 14e0add50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FHairStrandsPoints::SetNum(FHairStrandsPoints *this,uint param_1,uint param_2,bool param_3)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PointsPosition,param_1,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsRadius,param_1,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsCoordU,param_1,Default);
  if ((param_2 & 0x10) != 0) {
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsBaseColor,param_1,Default)
    ;
  }
  if ((param_2 & 0x20) != 0) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsRoughness,param_1,Default);
  }
  if ((param_2 & 0x40) != 0) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsAO,param_1,Default);
  }
  if (param_3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&this->PointsMapping,param_1,Default);
  }
  return;
}

