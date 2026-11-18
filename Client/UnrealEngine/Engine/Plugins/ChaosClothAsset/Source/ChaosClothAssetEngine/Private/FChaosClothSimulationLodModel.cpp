// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 6

// StaticStruct @ 14dc274c0

UScriptStruct * __cdecl FChaosClothSimulationLodModel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel,(UObject *)pUVar1,
                         L"ChaosClothSimulationLodModel");
  }
  return Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton;
}

// FChaosClothSimulationLodModel @ 14dc318e0

FChaosClothSimulationLodModel * __thiscall
FChaosClothSimulationLodModel::FChaosClothSimulationLodModel
          (FChaosClothSimulationLodModel *this,FChaosClothSimulationLodModel *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 *puVar8;
  TMap<FName,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FClothTetherData *pFVar9;
  TMap<FName,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  int iVar10;
  FScriptContainerElement *pFVar11;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar12;
  
  piVar1 = &(this->Positions).ArrayMax;
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar10 = (param_1->Positions).ArrayNum;
  pFVar11 = (param_1->Positions).AllocatorInstance.Data;
  (this->Positions).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar10,0,(ForAnyElementType *)this,iVar10,piVar1);
    memcpy((this->Positions).AllocatorInstance.Data,pFVar11,(longlong)iVar10 * 0xc);
  }
  pTVar2 = &this->Normals;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Normals).ArrayMax;
  iVar10 = (param_1->Normals).ArrayNum;
  pFVar11 = (param_1->Normals).AllocatorInstance.Data;
  (this->Normals).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar10,0,&pTVar2->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar11,(longlong)iVar10 * 0xc);
  }
  pTVar3 = &this->Indices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indices).ArrayMax;
  iVar10 = (param_1->Indices).ArrayNum;
  pFVar11 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar3->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 2);
  }
  pTVar4 = &this->BoneData;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BoneData).ArrayMax;
  iVar10 = (param_1->BoneData).ArrayNum;
  pFVar11 = (param_1->BoneData).AllocatorInstance.Data;
  (this->BoneData).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,iVar10,0,&pTVar4->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar11,(longlong)iVar10 * 0x4c);
  }
  pTVar5 = &this->RequiredExtraBoneIndices;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RequiredExtraBoneIndices).ArrayMax;
  iVar10 = (param_1->RequiredExtraBoneIndices).ArrayNum;
  pFVar11 = (param_1->RequiredExtraBoneIndices).AllocatorInstance.Data;
  (this->RequiredExtraBoneIndices).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar10,0,&pTVar5->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar11,(longlong)iVar10 * 2);
  }
  pTVar6 = &this->LODTransitionUpData;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LODTransitionUpData).ArrayMax;
  iVar10 = (param_1->LODTransitionUpData).ArrayNum;
  pFVar11 = (param_1->LODTransitionUpData).AllocatorInstance.Data;
  (this->LODTransitionUpData).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 6);
  }
  pTVar6 = &this->LODTransitionDownData;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LODTransitionDownData).ArrayMax;
  iVar10 = (param_1->LODTransitionDownData).ArrayNum;
  pFVar11 = (param_1->LODTransitionDownData).AllocatorInstance.Data;
  (this->LODTransitionDownData).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 6);
  }
  pTVar7 = &this->PatternPositions;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PatternPositions).ArrayMax;
  iVar10 = (param_1->PatternPositions).ArrayNum;
  pFVar11 = (param_1->PatternPositions).AllocatorInstance.Data;
  (this->PatternPositions).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar10,0,&pTVar7->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 3);
  }
  pTVar3 = &this->PatternIndices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PatternIndices).ArrayMax;
  iVar10 = (param_1->PatternIndices).ArrayNum;
  pFVar11 = (param_1->PatternIndices).AllocatorInstance.Data;
  (this->PatternIndices).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar3->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 2);
  }
  pTVar3 = &this->PatternToWeldedIndices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PatternToWeldedIndices).ArrayMax;
  iVar10 = (param_1->PatternToWeldedIndices).ArrayNum;
  pFVar11 = (param_1->PatternToWeldedIndices).AllocatorInstance.Data;
  (this->PatternToWeldedIndices).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar3->AllocatorInstance,iVar10,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar11,(longlong)iVar10 << 2);
  }
  this_00 = &this->WeightMaps;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x8 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x20 = 0;
  puVar8 = &(this->WeightMaps).field_0x48;
  *(undefined4 *)&(this->WeightMaps).field_0x28 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeightMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WeightMaps).field_0x34 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x40 = 0;
  *(undefined4 *)puVar8 = 0;
  if (this_00 != &param_1->WeightMaps) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->WeightMaps).field_0x38,(int *)puVar8,
               (ForElementType<FSetElementId> *)&(param_1->WeightMaps).field_0x38,
               *(int *)&(param_1->WeightMaps).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->WeightMaps);
  }
  pFVar9 = &this->TetherData;
  (pFVar9->Tethers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TetherData).Tethers.ArrayMax;
  iVar10 = (param_1->TetherData).Tethers.ArrayNum;
  pTVar12 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
            (param_1->TetherData).Tethers.AllocatorInstance.Data;
  (this->TetherData).Tethers.ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar10,0,(ForAnyElementType *)pFVar9,iVar10,piVar1);
    ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((pFVar9->Tethers).AllocatorInstance.Data,pTVar12,iVar10);
  }
  TMap<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  ::
  TMap<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
            (&this->VertexSets,&param_1->VertexSets);
  this_01 = &this->FaceIntMaps;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->FaceIntMaps).field_0x8 = 0;
  *(undefined8 *)&(this->FaceIntMaps).field_0x20 = 0;
  puVar8 = &(this->FaceIntMaps).field_0x48;
  *(undefined4 *)&(this->FaceIntMaps).field_0x28 = 0;
  *(undefined4 *)&(this->FaceIntMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->FaceIntMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FaceIntMaps).field_0x34 = 0;
  *(undefined8 *)&(this->FaceIntMaps).field_0x40 = 0;
  *(undefined4 *)puVar8 = 0;
  if (this_01 != &param_1->FaceIntMaps) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->FaceIntMaps).field_0x38,(int *)puVar8,
               (ForElementType<FSetElementId> *)&(param_1->FaceIntMaps).field_0x38,
               *(int *)&(param_1->FaceIntMaps).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->FaceIntMaps);
  }
  TMap<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  ::
  TMap<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
            (&this->FaceSets,&param_1->FaceSets);
  return this;
}

// FChaosClothSimulationLodModel @ 14dc31db0

FChaosClothSimulationLodModel * __thiscall
FChaosClothSimulationLodModel::FChaosClothSimulationLodModel(FChaosClothSimulationLodModel *this)

{
  (this->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Positions).ArrayNum = 0;
  (this->Positions).ArrayMax = 0;
  (this->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Normals).ArrayNum = 0;
  (this->Normals).ArrayMax = 0;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = 0;
  (this->BoneData).ArrayMax = 0;
  (this->RequiredExtraBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredExtraBoneIndices).ArrayNum = 0;
  (this->RequiredExtraBoneIndices).ArrayMax = 0;
  (this->LODTransitionUpData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODTransitionUpData).ArrayNum = 0;
  (this->LODTransitionUpData).ArrayMax = 0;
  (this->LODTransitionDownData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODTransitionDownData).ArrayNum = 0;
  (this->LODTransitionDownData).ArrayMax = 0;
  (this->PatternPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatternPositions).ArrayNum = 0;
  (this->PatternPositions).ArrayMax = 0;
  (this->PatternIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatternIndices).ArrayNum = 0;
  (this->PatternIndices).ArrayMax = 0;
  (this->PatternToWeldedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatternToWeldedIndices).ArrayNum = 0;
  (this->PatternToWeldedIndices).ArrayMax = 0;
  *(undefined8 *)&this->WeightMaps = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x8 = 0;
  *(undefined8 *)&(this->WeightMaps).field_0x20 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x28 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeightMaps).field_0x34 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeightMaps).field_0x40 = 0;
  *(undefined4 *)&(this->WeightMaps).field_0x48 = 0;
  (this->TetherData).Tethers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TetherData).Tethers.ArrayNum = 0;
  (this->TetherData).Tethers.ArrayMax = 0;
  *(undefined8 *)&this->VertexSets = 0;
  *(undefined8 *)&(this->VertexSets).field_0x8 = 0;
  *(undefined8 *)&(this->VertexSets).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSets).field_0x28 = 0;
  *(undefined4 *)&(this->VertexSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexSets).field_0x34 = 0;
  *(undefined4 *)&(this->VertexSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VertexSets).field_0x40 = 0;
  *(undefined4 *)&(this->VertexSets).field_0x48 = 0;
  *(undefined8 *)&this->FaceIntMaps = 0;
  *(undefined8 *)&(this->FaceIntMaps).field_0x8 = 0;
  *(undefined8 *)&(this->FaceIntMaps).field_0x20 = 0;
  *(undefined4 *)&(this->FaceIntMaps).field_0x28 = 0;
  *(undefined4 *)&(this->FaceIntMaps).field_0x2c = 0x80;
  *(undefined4 *)&(this->FaceIntMaps).field_0x34 = 0;
  *(undefined4 *)&(this->FaceIntMaps).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FaceIntMaps).field_0x40 = 0;
  *(undefined4 *)&(this->FaceIntMaps).field_0x48 = 0;
  *(undefined8 *)&this->FaceSets = 0;
  *(undefined8 *)&(this->FaceSets).field_0x8 = 0;
  *(undefined8 *)&(this->FaceSets).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSets).field_0x28 = 0;
  *(undefined4 *)&(this->FaceSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->FaceSets).field_0x34 = 0;
  *(undefined4 *)&(this->FaceSets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FaceSets).field_0x40 = 0;
  *(undefined4 *)&(this->FaceSets).field_0x48 = 0;
  return this;
}

// ~FChaosClothSimulationLodModel @ 14dc35af0

void __thiscall
FChaosClothSimulationLodModel::~FChaosClothSimulationLodModel(FChaosClothSimulationLodModel *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FaceSets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FaceSets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FaceSets);
  *(undefined4 *)&(this->FaceIntMaps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FaceIntMaps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FaceIntMaps);
  *(undefined4 *)&(this->VertexSets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VertexSets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VertexSets);
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
             (this->TetherData).Tethers.AllocatorInstance.Data,(this->TetherData).Tethers.ArrayNum);
  pFVar2 = (this->TetherData).Tethers.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->WeightMaps).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WeightMaps).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WeightMaps);
  pFVar2 = (this->PatternToWeldedIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PatternIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PatternPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LODTransitionDownData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LODTransitionUpData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RequiredExtraBoneIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BoneData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Indices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Normals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Positions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetResourceSizeEx @ 14dc4edb0

void __thiscall
FChaosClothSimulationLodModel::GetResourceSizeEx
          (FChaosClothSimulationLodModel *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx *pFVar1;
  undefined7 uVar2;
  FArchiveState local_a8;
  ulong64 local_18;
  
  pFVar1 = param_1;
  FArchiveState::FArchiveState(&local_a8);
  local_18 = 0;
  uVar2 = (undefined7)((ulonglong)pFVar1 >> 8);
  local_a8._padding_ = (longlong)&___7FMemoryCounterArchive_Private_ClothAsset_Chaos_UE__6B_;
  FArchiveState::SetIsSaving(&local_a8,true);
  (**(code **)(local_a8._padding_ + 0x108))(&local_a8,CONCAT71(uVar2,1));
  local_a8.ArIsCountingMemory = '\x01';
  Serialize(this,(FArchive *)&local_a8);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,local_18);
  FArchive::~FArchive((FArchive *)&local_a8);
  return;
}

// Serialize @ 14dc56240

bool __thiscall
FChaosClothSimulationLodModel::Serialize(FChaosClothSimulationLodModel *this,FArchive *param_1)

{
  ulonglong *puVar1;
  UPackage *pUVar2;
  uint uVar3;
  uint local_res8 [2];
  
  if (((param_1->field_0x28 & 5) != 0) || ((param_1->field_0x2b & 4) != 0)) {
    if (Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
      Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothSimulationLodModel,(UObject *)pUVar2
                           ,L"ChaosClothSimulationLodModel");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)
               Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton,
               param_1,(uchar *)this,
               (UStruct *)
               Z_Registration_Info_UScriptStruct_FChaosClothSimulationLodModel.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  puVar1 = *(ulonglong **)&param_1->field_0x8;
  if (puVar1[1] < *puVar1 + 4) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = uVar3;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  TSetPrivateFriend::
  Serialize<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->WeightMaps);
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (param_1,&this->LODTransitionUpData);
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (param_1,&this->LODTransitionDownData);
  TSetPrivateFriend::
  Serialize<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->VertexSets);
  TSetPrivateFriend::
  Serialize<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->FaceIntMaps);
  TSetPrivateFriend::
  Serialize<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->FaceSets);
  return true;
}

