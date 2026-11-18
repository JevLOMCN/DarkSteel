// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_> @ 143afbb60

void __thiscall
TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::
~TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
          (TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x16000);
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
  }
  return;
}

// Empty @ 143c655f0

void __thiscall
TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
::Empty(TIndirectArray<TChunkedArray<Chaos::FSolverBody,90112,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    ::operator_delete(*(void **)pFVar2,0x16000);
    pFVar2 = pFVar2 + 8;
  }
  if (-1 < param_1) {
    piVar1 = &(this->Array).ArrayMax;
    (this->Array).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_> @ 144012b90

void __thiscall
TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
          (TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
           *this)

{
  int *piVar1;
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->Array).AllocatorInstance.Data;
  for (iVar3 = (this->Array).ArrayNum; iVar3 != 0; iVar3 = iVar3 + -1) {
    this_00 = *(FDynamicMesh3 **)pFVar4;
    if (this_00 != (FDynamicMesh3 *)0x0) {
      pFVar2 = this_00[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = this_00[1].Vertices.Blocks.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((void *)this_00[1]._padding_ != (void *)0x0) {
        FMemory::Free((void *)this_00[1]._padding_);
      }
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
      ::operator_delete(this_00,0x2e0);
    }
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar4 = (this->Array).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

