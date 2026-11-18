// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 2

// ~TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_> @ 14c9a8ed0

void __thiscall
TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_>::
~TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::PlanarCut::FCellMeshes::FCellInfo,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(FDynamicMesh3 **)pFVar2;
    if (this_00 != (FDynamicMesh3 *)0x0) {
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
      ::operator_delete(this_00,0x230);
    }
    pFVar2 = pFVar2 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// DestructAndFreeItems @ 14c9c9cf0

void __thiscall
TIndirectArray<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TSizedDefaultAllocator<32>_>::
DestructAndFreeItems
          (TIndirectArray<UE::PlanarCut::FDynamicMeshCollection::FMeshData,TSizedDefaultAllocator<32>_>
           *this)

{
  FDynamicMesh3 *this_00;
  void *pvVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->Array).AllocatorInstance.Data;
  for (iVar2 = (this->Array).ArrayNum; iVar2 != 0; iVar2 = iVar2 + -1) {
    this_00 = *(FDynamicMesh3 **)pFVar3;
    if (this_00 != (FDynamicMesh3 *)0x0) {
      *(undefined4 *)&this_00[1].VertexEdgeLists.FreeBlocks.Blocks.AllocatorInstance.Data = 0;
      pvVar1 = *(void **)&this_00[1].VertexEdgeLists.FreeBlocks;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00[1].VertexUVs.TypedValue.Blocks.ArrayNum);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
      ::operator_delete(this_00,0x330);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

