// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FClothPhysicalMeshData @ 14ab9efe0

FClothPhysicalMeshData * __thiscall
FClothPhysicalMeshData::FClothPhysicalMeshData
          (FClothPhysicalMeshData *this,FClothPhysicalMeshData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<unsigned_int,FPointWeightMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPointWeightMap,0>_>
  *this_00;
  undefined1 *puVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->Vertices).ArrayNum;
  pFVar8 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,(ForAnyElementType *)this,iVar7,piVar1);
    memcpy((this->Vertices).AllocatorInstance.Data,pFVar8,(longlong)iVar7 * 0xc);
  }
  pTVar2 = &this->Normals;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Normals).ArrayMax;
  iVar7 = (param_1->Normals).ArrayNum;
  pFVar8 = (param_1->Normals).AllocatorInstance.Data;
  (this->Normals).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0xc);
  }
  pTVar3 = &this->Indices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indices).ArrayMax;
  iVar7 = (param_1->Indices).ArrayNum;
  pFVar8 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  this_00 = &this->WeightMaps;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x8 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x20 = 0;
  puVar4 = &(this->WeightMaps).field_0x48;
  *(undefined4 *)&(this->WeightMaps).field_0x28 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeightMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WeightMaps).field_0x34 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x40 = 0;
  *(undefined4 *)puVar4 = 0;
  if (this_00 != &param_1->WeightMaps) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->WeightMaps).field_0x38,(int *)puVar4,
               (ForElementType<FSetElementId> *)&(param_1->WeightMaps).field_0x38,
               *(int *)&(param_1->WeightMaps).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPointWeightMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->WeightMaps);
  }
  pTVar5 = &this->InverseMasses;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InverseMasses).ArrayMax;
  iVar7 = (param_1->InverseMasses).ArrayNum;
  pFVar8 = (param_1->InverseMasses).AllocatorInstance.Data;
  (this->InverseMasses).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar6 = &this->BoneData;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BoneData).ArrayMax;
  iVar7 = (param_1->BoneData).ArrayNum;
  pFVar8 = (param_1->BoneData).AllocatorInstance.Data;
  (this->BoneData).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x4c);
  }
  *(undefined8 *)&(this->SelfCollisionVertexSet).Elements = 0;
  *(undefined8 *)&(this->SelfCollisionVertexSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelfCollisionVertexSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelfCollisionVertexSet).Elements.field_0x34 = 0;
  (this->SelfCollisionVertexSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelfCollisionVertexSet).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->SelfCollisionVertexSet,&param_1->SelfCollisionVertexSet);
  FClothTetherData::FClothTetherData(&this->EuclideanTethers,&param_1->EuclideanTethers);
  FClothTetherData::FClothTetherData(&this->GeodesicTethers,&param_1->GeodesicTethers);
  pTVar3 = &this->SelfCollisionIndices;
  this->MaxBoneWeights = param_1->MaxBoneWeights;
  this->NumFixedVerts = param_1->NumFixedVerts;
  piVar1 = &(this->SelfCollisionIndices).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->SelfCollisionIndices).ArrayNum;
  pFVar8 = (param_1->SelfCollisionIndices).AllocatorInstance.Data;
  (this->SelfCollisionIndices).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  return this;
}

