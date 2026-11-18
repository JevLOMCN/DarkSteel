// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// FHairStrandsCurves @ 14dfee5c0

FHairStrandsCurves * __thiscall
FHairStrandsCurves::FHairStrandsCurves(FHairStrandsCurves *this,FHairStrandsCurves *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  piVar1 = &(this->CurvesCount).ArrayMax;
  (this->CurvesCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->CurvesCount).ArrayNum;
  pFVar9 = (param_1->CurvesCount).AllocatorInstance.Data;
  (this->CurvesCount).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar8,0,(ForAnyElementType *)this,iVar8,piVar1);
    memcpy((this->CurvesCount).AllocatorInstance.Data,pFVar9,(longlong)iVar8 * 2);
  }
  pTVar2 = &this->CurvesOffset;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurvesOffset).ArrayMax;
  iVar8 = (param_1->CurvesOffset).ArrayNum;
  pFVar9 = (param_1->CurvesOffset).AllocatorInstance.Data;
  (this->CurvesOffset).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar3 = &this->CurvesLength;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurvesLength).ArrayMax;
  iVar8 = (param_1->CurvesLength).ArrayNum;
  pFVar9 = (param_1->CurvesLength).AllocatorInstance.Data;
  (this->CurvesLength).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar3->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar4 = &this->CurvesRootUV;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurvesRootUV).ArrayMax;
  iVar8 = (param_1->CurvesRootUV).ArrayNum;
  pFVar9 = (param_1->CurvesRootUV).AllocatorInstance.Data;
  (this->CurvesRootUV).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 3);
  }
  pTVar5 = &this->StrandIDs;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StrandIDs).ArrayMax;
  iVar8 = (param_1->StrandIDs).ArrayNum;
  pFVar9 = (param_1->StrandIDs).AllocatorInstance.Data;
  (this->StrandIDs).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  pTVar6 = &this->ClumpIDs;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ClumpIDs).ArrayMax;
  iVar8 = (param_1->ClumpIDs).ArrayNum;
  pFVar9 = (param_1->ClumpIDs).AllocatorInstance.Data;
  (this->ClumpIDs).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar8 * 0xc);
  }
  *(undefined8 *)&(this->GroomIDToIndex).field_0x0 = 0;
  *(undefined8 *)&(this->GroomIDToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->GroomIDToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->GroomIDToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->GroomIDToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomIDToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroomIDToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->GroomIDToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->GroomIDToIndex).field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->GroomIDToIndex,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->GroomIDToIndex);
  pTVar6 = &this->CurvesClosestGuideIDs;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurvesClosestGuideIDs).ArrayMax;
  iVar8 = (param_1->CurvesClosestGuideIDs).ArrayNum;
  pFVar9 = (param_1->CurvesClosestGuideIDs).AllocatorInstance.Data;
  (this->CurvesClosestGuideIDs).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar8 * 0xc);
  }
  pTVar7 = &this->CurvesClosestGuideWeights;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CurvesClosestGuideWeights).ArrayMax;
  iVar8 = (param_1->CurvesClosestGuideWeights).ArrayNum;
  pFVar9 = (param_1->CurvesClosestGuideWeights).AllocatorInstance.Data;
  (this->CurvesClosestGuideWeights).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,&pTVar7->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar9,(longlong)iVar8 * 0xc);
  }
  pTVar2 = &this->CurvesMapping;
  this->AttributeFlags = param_1->AttributeFlags;
  piVar1 = &(this->CurvesMapping).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->CurvesMapping).ArrayNum;
  pFVar9 = (param_1->CurvesMapping).AllocatorInstance.Data;
  (this->CurvesMapping).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar8 << 2);
  }
  this->SourceCurveCount = param_1->SourceCurveCount;
  return this;
}

// ~FHairStrandsCurves @ 14dff2600

void __thiscall FHairStrandsCurves::~FHairStrandsCurves(FHairStrandsCurves *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CurvesMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvesClosestGuideWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvesClosestGuideIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GroomIDToIndex).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GroomIDToIndex).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroomIDToIndex);
  pFVar1 = (this->ClumpIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StrandIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvesRootUV).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvesLength).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvesOffset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurvesCount).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14dff3070

FHairStrandsCurves * __thiscall
FHairStrandsCurves::operator=(FHairStrandsCurves *this,FHairStrandsCurves *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  
  if (this != param_1) {
    pFVar13 = (this->CurvesCount).AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (this->CurvesCount).AllocatorInstance.Data = (param_1->CurvesCount).AllocatorInstance.Data;
    (param_1->CurvesCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CurvesCount).ArrayNum = (param_1->CurvesCount).ArrayNum;
    (this->CurvesCount).ArrayMax = (param_1->CurvesCount).ArrayMax;
    (param_1->CurvesCount).ArrayNum = 0;
    (param_1->CurvesCount).ArrayMax = 0;
  }
  pTVar1 = &param_1->CurvesOffset;
  pTVar2 = &this->CurvesOffset;
  if (pTVar2 != pTVar1) {
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurvesOffset).ArrayNum = (param_1->CurvesOffset).ArrayNum;
    (this->CurvesOffset).ArrayMax = (param_1->CurvesOffset).ArrayMax;
    (param_1->CurvesOffset).ArrayNum = 0;
    (param_1->CurvesOffset).ArrayMax = 0;
  }
  pTVar3 = &param_1->CurvesLength;
  pTVar4 = &this->CurvesLength;
  if (pTVar4 != pTVar3) {
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurvesLength).ArrayNum = (param_1->CurvesLength).ArrayNum;
    (this->CurvesLength).ArrayMax = (param_1->CurvesLength).ArrayMax;
    (param_1->CurvesLength).ArrayNum = 0;
    (param_1->CurvesLength).ArrayMax = 0;
  }
  pTVar5 = &param_1->CurvesRootUV;
  pTVar6 = &this->CurvesRootUV;
  if (pTVar6 != pTVar5) {
    pFVar13 = (pTVar6->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurvesRootUV).ArrayNum = (param_1->CurvesRootUV).ArrayNum;
    (this->CurvesRootUV).ArrayMax = (param_1->CurvesRootUV).ArrayMax;
    (param_1->CurvesRootUV).ArrayNum = 0;
    (param_1->CurvesRootUV).ArrayMax = 0;
  }
  pTVar7 = &param_1->StrandIDs;
  pTVar8 = &this->StrandIDs;
  if (pTVar8 != pTVar7) {
    pFVar13 = (pTVar8->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->StrandIDs).ArrayNum = (param_1->StrandIDs).ArrayNum;
    (this->StrandIDs).ArrayMax = (param_1->StrandIDs).ArrayMax;
    (param_1->StrandIDs).ArrayNum = 0;
    (param_1->StrandIDs).ArrayMax = 0;
  }
  pTVar9 = &param_1->ClumpIDs;
  pTVar10 = &this->ClumpIDs;
  if (pTVar10 != pTVar9) {
    pFVar13 = (pTVar10->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ClumpIDs).ArrayNum = (param_1->ClumpIDs).ArrayNum;
    (this->ClumpIDs).ArrayMax = (param_1->ClumpIDs).ArrayMax;
    (param_1->ClumpIDs).ArrayNum = 0;
    (param_1->ClumpIDs).ArrayMax = 0;
  }
  if (&this->GroomIDToIndex != &param_1->GroomIDToIndex) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->GroomIDToIndex,
               (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &param_1->GroomIDToIndex);
  }
  pTVar9 = &param_1->CurvesClosestGuideIDs;
  pTVar10 = &this->CurvesClosestGuideIDs;
  if (pTVar10 != pTVar9) {
    pFVar13 = (pTVar10->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurvesClosestGuideIDs).ArrayNum = (param_1->CurvesClosestGuideIDs).ArrayNum;
    (this->CurvesClosestGuideIDs).ArrayMax = (param_1->CurvesClosestGuideIDs).ArrayMax;
    (param_1->CurvesClosestGuideIDs).ArrayNum = 0;
    (param_1->CurvesClosestGuideIDs).ArrayMax = 0;
  }
  pTVar11 = &param_1->CurvesClosestGuideWeights;
  pTVar12 = &this->CurvesClosestGuideWeights;
  if (pTVar12 != pTVar11) {
    pFVar13 = (pTVar12->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurvesClosestGuideWeights).ArrayNum = (param_1->CurvesClosestGuideWeights).ArrayNum;
    (this->CurvesClosestGuideWeights).ArrayMax = (param_1->CurvesClosestGuideWeights).ArrayMax;
    (param_1->CurvesClosestGuideWeights).ArrayNum = 0;
    (param_1->CurvesClosestGuideWeights).ArrayMax = 0;
  }
  pTVar1 = &param_1->CurvesMapping;
  pTVar2 = &this->CurvesMapping;
  this->AttributeFlags = param_1->AttributeFlags;
  if (pTVar2 != pTVar1) {
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CurvesMapping).ArrayNum = (param_1->CurvesMapping).ArrayNum;
    (this->CurvesMapping).ArrayMax = (param_1->CurvesMapping).ArrayMax;
    (param_1->CurvesMapping).ArrayNum = 0;
    (param_1->CurvesMapping).ArrayMax = 0;
  }
  this->SourceCurveCount = param_1->SourceCurveCount;
  return this;
}

// HasAttribute @ 14e0a4120

bool __thiscall FHairStrandsCurves::HasAttribute(FHairStrandsCurves *this,EHairAttribute param_1)

{
  if (param_1 == RootUV) {
    return 0 < (this->CurvesRootUV).ArrayNum;
  }
  if (param_1 == PrecomputedGuideWeights) {
    if ((0 < (this->CurvesClosestGuideIDs).ArrayNum) &&
       (0 < (this->CurvesClosestGuideWeights).ArrayNum)) {
      return true;
    }
  }
  else {
    if (param_1 == ClumpID) {
      return 0 < (this->ClumpIDs).ArrayNum;
    }
    if (param_1 == StrandID) {
      return 0 < (this->StrandIDs).ArrayNum;
    }
  }
  return false;
}

// HasPrecomputedWeights @ 14e0a4260

bool __thiscall FHairStrandsCurves::HasPrecomputedWeights(FHairStrandsCurves *this)

{
  if ((0 < (this->CurvesClosestGuideIDs).ArrayNum) &&
     (0 < (this->CurvesClosestGuideWeights).ArrayNum)) {
    return true;
  }
  return false;
}

// Reset @ 14e0aa6f0

void __thiscall FHairStrandsCurves::Reset(FHairStrandsCurves *this)

{
  (this->CurvesOffset).ArrayNum = 0;
  if ((this->CurvesOffset).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurvesOffset).AllocatorInstance,0,&(this->CurvesOffset).ArrayMax);
  }
  (this->CurvesCount).ArrayNum = 0;
  if ((this->CurvesCount).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,&(this->CurvesCount).ArrayMax);
  }
  (this->CurvesLength).ArrayNum = 0;
  if ((this->CurvesLength).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurvesLength).AllocatorInstance,0,&(this->CurvesLength).ArrayMax);
  }
  (this->CurvesRootUV).ArrayNum = 0;
  if ((this->CurvesRootUV).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CurvesRootUV).AllocatorInstance,0,&(this->CurvesRootUV).ArrayMax);
  }
  (this->ClumpIDs).ArrayNum = 0;
  if ((this->ClumpIDs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->ClumpIDs).AllocatorInstance,0,&(this->ClumpIDs).ArrayMax);
  }
  (this->CurvesClosestGuideIDs).ArrayNum = 0;
  if ((this->CurvesClosestGuideIDs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->CurvesClosestGuideIDs).AllocatorInstance,0,
               &(this->CurvesClosestGuideIDs).ArrayMax);
  }
  (this->CurvesClosestGuideWeights).ArrayNum = 0;
  if ((this->CurvesClosestGuideWeights).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->CurvesClosestGuideWeights).AllocatorInstance,0,
               &(this->CurvesClosestGuideWeights).ArrayMax);
  }
  (this->CurvesMapping).ArrayNum = 0;
  if ((this->CurvesMapping).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurvesMapping).AllocatorInstance,0,&(this->CurvesMapping).ArrayMax);
  }
  this->SourceCurveCount = 0;
  return;
}

// SetNum @ 14e0adc00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FHairStrandsCurves::SetNum(FHairStrandsCurves *this,uint param_1,uint param_2,bool param_3)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&this->CurvesOffset,param_1 + 1,Default);
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum(&this->CurvesCount,param_1,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->CurvesLength,param_1,Default);
  if ((param_2 & 1) != 0) {
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->CurvesRootUV,param_1,Default);
  }
  if ((param_2 & 4) != 0) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->StrandIDs,param_1,Default);
  }
  if ((param_2 & 2) != 0) {
    TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ClumpIDs,param_1,Default);
  }
  if ((param_2 & 8) != 0) {
    TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->CurvesClosestGuideIDs,param_1,Default);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->CurvesClosestGuideWeights,param_1,Default);
  }
  if (param_3) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(&this->CurvesMapping,param_1,Default);
  }
  return;
}

