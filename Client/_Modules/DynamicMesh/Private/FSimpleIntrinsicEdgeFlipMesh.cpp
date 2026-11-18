// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 22

// Permute<UE::Math::TVector<double>_> @ 14c6d21d0

TVector<double> * __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::Permute<UE::Math::TVector<double>_>
          (FSimpleIntrinsicEdgeFlipMesh *this,TVector<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  
  uVar3 = this->AddTwoModThree[param_1];
  if (2 < uVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  uVar4 = this->AddOneModThree[param_1];
  dVar1 = (param_2->field0_0x0).XYZ[(int)uVar3];
  if (2 < uVar4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  dVar2 = (param_2->field0_0x0).XYZ[(int)uVar4];
  if (2 < (uint)param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar5)();
      return pTVar7;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0).XYZ[param_1];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// FSimpleIntrinsicEdgeFlipMesh @ 14c6dfc00

FSimpleIntrinsicEdgeFlipMesh * __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FSimpleIntrinsicEdgeFlipMesh
          (FSimpleIntrinsicEdgeFlipMesh *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *pTVar1;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar2;
  FRefCountVector *pFVar3;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_00;
  TDynamicVector<double,512> *this_01;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar4;
  
  this->AddOneModThree[0] = 1;
  this->AddOneModThree[1] = 2;
  this->AddOneModThree[2] = 0;
  this->AddTwoModThree[0] = 2;
  this->AddTwoModThree[1] = 0;
  this->AddTwoModThree[2] = 1;
  pTVar4 = &this->Vertices;
  pTVar4->CurBlock = 0;
  pTVar4->CurBlockUsed = 0;
  (this->Vertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).Blocks.ArrayNum = 0;
  (this->Vertices).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar4);
  (this->VertexRefCounts).FreeIndices.CurBlock = 0;
  (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->VertexRefCounts).UsedCount = 0;
  (this->VertexRefCounts).RefCounts.CurBlock = 0;
  (this->VertexRefCounts).RefCounts.CurBlockUsed = 0;
  (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&(this->VertexRefCounts).RefCounts);
  pTVar1 = &(this->VertexRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->VertexRefCounts).UsedCount = 0;
  FSmallListSet::FSmallListSet(&this->VertexEdgeLists);
  pTVar2 = &this->Triangles;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->Triangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).Blocks.ArrayNum = 0;
  (this->Triangles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar2);
  (this->TriangleRefCounts).FreeIndices.CurBlock = 0;
  (this->TriangleRefCounts).FreeIndices.CurBlockUsed = 0;
  pFVar3 = &this->TriangleRefCounts;
  (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->TriangleRefCounts).UsedCount = 0;
  (pFVar3->RefCounts).CurBlock = 0;
  (pFVar3->RefCounts).CurBlockUsed = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar3->RefCounts);
  pTVar1 = &(this->TriangleRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar2 = &this->TriangleEdges;
  (this->TriangleRefCounts).UsedCount = 0;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->TriangleEdges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleEdges).Blocks.ArrayNum = 0;
  (this->TriangleEdges).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar2);
  this_00 = &this->Edges;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->Edges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Blocks.ArrayNum = 0;
  (this->Edges).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_00);
  (this->EdgeRefCounts).FreeIndices.CurBlock = 0;
  (this->EdgeRefCounts).FreeIndices.CurBlockUsed = 0;
  pFVar3 = &this->EdgeRefCounts;
  (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->EdgeRefCounts).UsedCount = 0;
  (pFVar3->RefCounts).CurBlock = 0;
  (pFVar3->RefCounts).CurBlockUsed = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar3->RefCounts);
  pTVar1 = &(this->EdgeRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  this_01 = &this->EdgeLengths;
  (this->EdgeRefCounts).UsedCount = 0;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->EdgeLengths).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeLengths).Blocks.ArrayNum = 0;
  (this->EdgeLengths).Blocks.ArrayMax = 0;
  TDynamicVector<double,512>::AddAllocatedBlock(this_01);
  pTVar4 = &this->InternalAngles;
  pTVar4->CurBlock = 0;
  pTVar4->CurBlockUsed = 0;
  (this->InternalAngles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalAngles).Blocks.ArrayNum = 0;
  (this->InternalAngles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar4);
  Reset(this,param_1);
  return this;
}

// FSimpleIntrinsicEdgeFlipMesh @ 14c6dfdd0

FSimpleIntrinsicEdgeFlipMesh * __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FSimpleIntrinsicEdgeFlipMesh
          (FSimpleIntrinsicEdgeFlipMesh *this)

{
  TDynamicVector<int,512> *pTVar1;
  TDynamicVector<UE::Geometry::FIndex3i,512> *pTVar2;
  FRefCountVector *pFVar3;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *this_00;
  TDynamicVector<double,512> *this_01;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar4;
  
  this->AddOneModThree[0] = 1;
  this->AddOneModThree[1] = 2;
  this->AddOneModThree[2] = 0;
  this->AddTwoModThree[0] = 2;
  this->AddTwoModThree[1] = 0;
  this->AddTwoModThree[2] = 1;
  pTVar4 = &this->Vertices;
  pTVar4->CurBlock = 0;
  pTVar4->CurBlockUsed = 0;
  (this->Vertices).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).Blocks.ArrayNum = 0;
  (this->Vertices).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar4);
  (this->VertexRefCounts).FreeIndices.CurBlock = 0;
  (this->VertexRefCounts).FreeIndices.CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->VertexRefCounts).UsedCount = 0;
  (this->VertexRefCounts).RefCounts.CurBlock = 0;
  (this->VertexRefCounts).RefCounts.CurBlockUsed = 0;
  (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&(this->VertexRefCounts).RefCounts);
  pTVar1 = &(this->VertexRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->VertexRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->VertexRefCounts).UsedCount = 0;
  FSmallListSet::FSmallListSet(&this->VertexEdgeLists);
  pTVar2 = &this->Triangles;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->Triangles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).Blocks.ArrayNum = 0;
  (this->Triangles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar2);
  (this->TriangleRefCounts).FreeIndices.CurBlock = 0;
  (this->TriangleRefCounts).FreeIndices.CurBlockUsed = 0;
  pFVar3 = &this->TriangleRefCounts;
  (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->TriangleRefCounts).UsedCount = 0;
  (pFVar3->RefCounts).CurBlock = 0;
  (pFVar3->RefCounts).CurBlockUsed = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar3->RefCounts);
  pTVar1 = &(this->TriangleRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->TriangleRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar2 = &this->TriangleEdges;
  (this->TriangleRefCounts).UsedCount = 0;
  pTVar2->CurBlock = 0;
  pTVar2->CurBlockUsed = 0;
  (this->TriangleEdges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleEdges).Blocks.ArrayNum = 0;
  (this->TriangleEdges).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(pTVar2);
  this_00 = &this->Edges;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->Edges).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Blocks.ArrayNum = 0;
  (this->Edges).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(this_00);
  (this->EdgeRefCounts).FreeIndices.CurBlock = 0;
  (this->EdgeRefCounts).FreeIndices.CurBlockUsed = 0;
  pFVar3 = &this->EdgeRefCounts;
  (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  *(undefined8 *)&(this->EdgeRefCounts).UsedCount = 0;
  (pFVar3->RefCounts).CurBlock = 0;
  (pFVar3->RefCounts).CurBlockUsed = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&pFVar3->RefCounts);
  pTVar1 = &(this->EdgeRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->EdgeRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  this_01 = &this->EdgeLengths;
  (this->EdgeRefCounts).UsedCount = 0;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->EdgeLengths).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeLengths).Blocks.ArrayNum = 0;
  (this->EdgeLengths).Blocks.ArrayMax = 0;
  TDynamicVector<double,512>::AddAllocatedBlock(this_01);
  pTVar4 = &this->InternalAngles;
  pTVar4->CurBlock = 0;
  pTVar4->CurBlockUsed = 0;
  (this->InternalAngles).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalAngles).Blocks.ArrayNum = 0;
  (this->InternalAngles).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar4);
  return this;
}

// ~FSimpleIntrinsicEdgeFlipMesh @ 14c6e1a40

void __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::~FSimpleIntrinsicEdgeFlipMesh
          (FSimpleIntrinsicEdgeFlipMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->InternalAngles,0);
  pFVar1 = (this->InternalAngles).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<double,512>::Empty(&this->EdgeLengths,0);
  pFVar1 = (this->EdgeLengths).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&(this->EdgeRefCounts).FreeIndices,0);
  pFVar1 = (this->EdgeRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->EdgeRefCounts).RefCounts,0);
  pFVar1 = (this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty(&this->Edges,0);
  pFVar1 = (this->Edges).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(&this->TriangleEdges,0);
  pFVar1 = (this->TriangleEdges).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&(this->TriangleRefCounts).FreeIndices,0);
  pFVar1 = (this->TriangleRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->TriangleRefCounts).RefCounts,0);
  pFVar1 = (this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(&this->Triangles,0);
  pFVar1 = (this->Triangles).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSmallListSet::~FSmallListSet(&this->VertexEdgeLists);
  TDynamicVector<int,512>::Empty(&(this->VertexRefCounts).FreeIndices,0);
  pFVar1 = (this->VertexRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->VertexRefCounts).RefCounts,0);
  pFVar1 = (this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->Vertices,0);
  pFVar1 = (this->Vertices).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14c6e86a0

double __thiscall
`UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double local_50 [9];
  
  lVar6 = *(longlong *)this;
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)((uint)param_2 >> 9) * 8);
  uVar1 = *(ulonglong *)(lVar7 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  uVar4 = *(uint *)(lVar7 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  uVar10 = (uint)(uVar1 >> 0x20);
  if ((uint)uVar1 == param_1) {
    iVar11 = 0;
  }
  else if (uVar10 == param_1) {
    iVar11 = 1;
  }
  else {
    iVar11 = -1;
    if (uVar4 == param_1) {
      iVar11 = 2;
    }
  }
  lVar7 = *(longlong *)(lVar6 + 0x198);
  lVar12 = (longlong)iVar11;
  uVar5 = *(uint *)(lVar6 + 0xc + lVar12 * 4);
  local_50[1] = (double)*(undefined8 *)
                         (*(longlong *)(lVar7 + ((uVar1 & 0xffffffff) >> 9) * 8) +
                         (ulonglong)((uint)uVar1 & 0x1ff) * 8);
  local_50[2] = (double)*(undefined8 *)
                         (*(longlong *)(lVar7 + (uVar1 >> 0x29) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 8);
  local_50[3] = (double)*(undefined8 *)
                         (*(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 8);
  if (2 < uVar5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar13 = local_50[(longlong)(int)uVar5 + 1];
  uVar4 = *(uint *)(*(longlong *)this + lVar12 * 4);
  if (2 < uVar4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar2 = local_50[(longlong)(int)uVar4 + 1];
  if (iVar11 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      dVar13 = (double)(*pcVar8)();
      return dVar13;
    }
  }
  dVar3 = local_50[lVar12 + 1];
  dVar14 = ((dVar3 - dVar2) + dVar13) * ((dVar3 + dVar2) - dVar13) *
           ((dVar2 - dVar3) + dVar13) * (dVar3 + dVar2 + dVar13);
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar14;
  auVar15 = sqrtpd(auVar15,auVar15);
  return ((dVar2 * dVar2 - dVar3 * dVar3) + dVar13 * dVar13) / auVar15._0_8_;
}

// AreSameOrientation @ 14c7148e0

bool __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::AreSameOrientation
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int local_28;
  int iVar14;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    uVar15 = (ulonglong)(param_1 & 0x1ff);
    lVar2 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data + lVar2)
                           + uVar15 * 2) - 1U) < 0xfffe) {
      lVar2 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + lVar2);
      uVar7 = *(ulonglong *)(lVar2 + 8 + uVar15 * 0x10);
      piVar1 = (int *)(lVar2 + uVar15 * 0x10);
      iVar9 = *piVar1;
      iVar10 = piVar1[1];
      uVar17 = (uint)(uVar7 >> 0x20);
      if (uVar17 != 0xffffffff) {
        pFVar8 = (this->Triangles).Blocks.AllocatorInstance.Data;
        uVar18 = (ulonglong)(uVar17 & 0x1ff);
        uVar15 = (ulonglong)((uint)uVar7 & 0x1ff);
        lVar2 = *(longlong *)(pFVar8 + ((uVar7 & 0xffffffff) >> 9) * 8);
        uVar3 = *(undefined8 *)(lVar2 + uVar15 * 0xc);
        iVar5 = *(int *)(lVar2 + 8 + uVar15 * 0xc);
        lVar2 = *(longlong *)(pFVar8 + (uVar7 >> 0x29) * 8);
        uVar4 = *(undefined8 *)(lVar2 + uVar18 * 0xc);
        iVar6 = *(int *)(lVar2 + 8 + uVar18 * 0xc);
        local_28 = (int)uVar4;
        iVar16 = (int)uVar3;
        iVar13 = (int)((ulonglong)uVar3 >> 0x20);
        iVar14 = (int)((ulonglong)uVar4 >> 0x20);
        if (((((iVar16 == iVar9) && (iVar13 == iVar10)) || ((iVar13 == iVar9 && (iVar5 == iVar10))))
            || ((iVar5 == iVar9 && (iVar16 == iVar10)))) &&
           (((local_28 == iVar10 && (iVar14 == iVar9)) ||
            (((iVar14 == iVar10 && (iVar6 == iVar9)) || ((iVar6 == iVar10 && (local_28 == iVar9)))))
            ))) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        if ((((iVar16 == iVar10) && (iVar13 == iVar9)) ||
            (((iVar13 == iVar10 && (iVar5 == iVar9)) || ((iVar5 == iVar10 && (iVar16 == iVar9))))))
           && (((local_28 == iVar9 && (iVar14 == iVar10)) ||
               (((iVar14 == iVar9 && (iVar6 == iVar10)) ||
                ((iVar6 == iVar9 && (local_28 == iVar10)))))))) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((!bVar11) && (!bVar12)) {
          return false;
        }
      }
    }
  }
  return true;
}

// Clear @ 14c71c950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::Clear(FSimpleIntrinsicEdgeFlipMesh *this)

{
  TDynamicVector<UE::Math::TVector<double>,512>::TruncateBlocks(&this->Vertices,1,No);
  (this->Vertices).CurBlock = 0;
  (this->Vertices).CurBlockUsed = 0;
  if ((this->Vertices).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->Vertices);
  }
  FRefCountVector::Clear(&this->VertexRefCounts);
  TDynamicVector<int,512>::TruncateBlocks(&(this->VertexEdgeLists).ListHeads,1,No);
  (this->VertexEdgeLists).ListHeads.CurBlock = 0;
  (this->VertexEdgeLists).ListHeads.CurBlockUsed = 0;
  if ((this->VertexEdgeLists).ListHeads.Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&(this->VertexEdgeLists).ListHeads);
  }
  TDynamicVector<int,512>::TruncateBlocks(&(this->VertexEdgeLists).ListBlocks,1,No);
  (this->VertexEdgeLists).ListBlocks.CurBlock = 0;
  (this->VertexEdgeLists).ListBlocks.CurBlockUsed = 0;
  if ((this->VertexEdgeLists).ListBlocks.Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&(this->VertexEdgeLists).ListBlocks);
  }
  TDynamicVector<int,512>::TruncateBlocks(&(this->VertexEdgeLists).FreeBlocks,1,No);
  (this->VertexEdgeLists).FreeBlocks.CurBlock = 0;
  (this->VertexEdgeLists).FreeBlocks.CurBlockUsed = 0;
  if ((this->VertexEdgeLists).FreeBlocks.Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&(this->VertexEdgeLists).FreeBlocks);
  }
  (this->VertexEdgeLists).AllocatedCount = 0;
  TDynamicVector<int,512>::TruncateBlocks(&(this->VertexEdgeLists).LinkedListElements,1,No);
  (this->VertexEdgeLists).LinkedListElements.CurBlock = 0;
  (this->VertexEdgeLists).LinkedListElements.CurBlockUsed = 0;
  if ((this->VertexEdgeLists).LinkedListElements.Blocks.ArrayNum == 0) {
    TDynamicVector<int,512>::AddAllocatedBlock(&(this->VertexEdgeLists).LinkedListElements);
  }
  (this->VertexEdgeLists).FreeHeadIndex = -1;
  TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks(&this->Triangles,1,No);
  (this->Triangles).CurBlock = 0;
  (this->Triangles).CurBlockUsed = 0;
  if ((this->Triangles).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(&this->Triangles);
  }
  FRefCountVector::Clear(&this->TriangleRefCounts);
  TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks(&this->TriangleEdges,1,No);
  (this->TriangleEdges).CurBlock = 0;
  (this->TriangleEdges).CurBlockUsed = 0;
  if ((this->TriangleEdges).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(&this->TriangleEdges);
  }
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TruncateBlocks(&this->Edges,1,No);
  (this->Edges).CurBlock = 0;
  (this->Edges).CurBlockUsed = 0;
  if ((this->Edges).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(&this->Edges);
  }
  FRefCountVector::Clear(&this->EdgeRefCounts);
  TDynamicVector<double,512>::TruncateBlocks(&this->EdgeLengths,1,No);
  (this->EdgeLengths).CurBlock = 0;
  (this->EdgeLengths).CurBlockUsed = 0;
  if ((this->EdgeLengths).Blocks.ArrayNum == 0) {
    TDynamicVector<double,512>::AddAllocatedBlock(&this->EdgeLengths);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::TruncateBlocks(&this->InternalAngles,1,No);
  (this->InternalAngles).CurBlock = 0;
  (this->InternalAngles).CurBlockUsed = 0;
  if ((this->InternalAngles).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->InternalAngles);
  }
  return;
}

// ComputeTriInternalAnglesR @ 14c7249f0

TVector<double> * __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::ComputeTriInternalAnglesR
          (FSimpleIntrinsicEdgeFlipMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_78;
  double local_68 [12];
  
  uVar2 = this->AddTwoModThree[0];
  lVar4 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  uVar1 = *(ulonglong *)(lVar4 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar3 = *(uint *)(lVar4 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  pFVar5 = (this->EdgeLengths).Blocks.AllocatorInstance.Data;
  local_78 = (uint)uVar1;
  dVar11 = *(double *)
            (*(longlong *)(pFVar5 + (ulonglong)(local_78 >> 9) * 8) +
            (ulonglong)(local_78 & 0x1ff) * 8);
  local_68[0] = dVar11;
  dVar13 = *(double *)
            (*(longlong *)(pFVar5 + (uVar1 >> 0x29) * 8) +
            (ulonglong)((uint)(uVar1 >> 0x20) & 0x1ff) * 8);
  local_68[1] = dVar13;
  local_68[2] = *(double *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar3 >> 9) * 8) +
                 (ulonglong)(uVar3 & 0x1ff) * 8);
  if ((2 < uVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar6)();
    return pTVar10;
  }
  dVar12 = local_68[(int)uVar2];
  uVar2 = this->AddOneModThree[0];
  if ((2 < uVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar6)();
    return pTVar10;
  }
  dVar8 = __real_bff0000000000000;
  dVar7 = __real_3ff0000000000000;
  dVar11 = ((dVar11 * dVar11 + dVar12 * dVar12) - local_68[(int)uVar2] * local_68[(int)uVar2]) /
           ((dVar11 + dVar11) * dVar12);
  uVar14 = SUB84(__real_bff0000000000000,0);
  uVar15 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  if (__real_3ff0000000000000 <= dVar11) {
    dVar11 = __real_3ff0000000000000;
  }
  if (dVar11 <= __real_bff0000000000000) {
    dVar11 = __real_bff0000000000000;
  }
  dVar12 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar11) && (dVar12 = dVar11, __real_3ff0000000000000 <= dVar11)) {
    dVar12 = __real_3ff0000000000000;
  }
  dVar11 = acos(dVar12);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar11;
  uVar2 = this->AddTwoModThree[1];
  if ((2 < uVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar6)();
    return pTVar10;
  }
  dVar11 = local_68[(int)uVar2];
  uVar2 = this->AddOneModThree[1];
  if ((2 < uVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar6)();
    return pTVar10;
  }
  dVar11 = ((dVar13 * dVar13 + dVar11 * dVar11) - local_68[(int)uVar2] * local_68[(int)uVar2]) /
           ((dVar13 + dVar13) * dVar11);
  if (dVar7 <= dVar11) {
    dVar11 = dVar7;
  }
  if (dVar11 <= dVar8) {
    dVar11 = dVar8;
  }
  dVar13 = dVar8;
  if ((dVar8 <= dVar11) && (dVar13 = dVar11, dVar7 <= dVar11)) {
    dVar13 = dVar7;
  }
  dVar11 = acos(dVar13);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
  uVar2 = this->AddTwoModThree[2];
  if ((2 < uVar2) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar6)();
    return pTVar10;
  }
  uVar3 = this->AddOneModThree[2];
  dVar11 = local_68[(int)uVar2];
  if ((2 < uVar3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TVector<double> *)(*pcVar6)();
    return pTVar10;
  }
  dVar11 = ((local_68[2] * local_68[2] + dVar11 * dVar11) -
           local_68[(int)uVar3] * local_68[(int)uVar3]) / ((local_68[2] + local_68[2]) * dVar11);
  if (dVar7 <= dVar11) {
    dVar11 = dVar7;
  }
  if (dVar11 <= dVar8) {
    dVar11 = dVar8;
  }
  if (dVar8 <= dVar11) {
    if (dVar7 <= dVar11) {
      dVar11 = dVar7;
    }
    uVar14 = SUB84(dVar11,0);
    uVar15 = (undefined4)((ulonglong)dVar11 >> 0x20);
  }
  dVar11 = acos((double)CONCAT44(uVar15,uVar14));
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11;
  return __return_storage_ptr__;
}

// EdgeCotanWeight @ 14c72e5f0

double __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  FSimpleIntrinsicEdgeFlipMesh *local_res8 [4];
  
  lVar1 = *(longlong *)
           ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar2 = *(int *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x10 + 0xc);
  local_res8[0] = this;
  dVar3 = `UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight'::__l2::<lambda_1>::
          operator()(local_res8,param_1,*(int *)(lVar1 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10));
  if (iVar2 != -1) {
    dVar4 = `UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeCotanWeight'::__l2::<lambda_1>::
            operator()(local_res8,param_1,iVar2);
    dVar3 = (dVar4 + dVar3) * __real_3fe0000000000000;
  }
  return dVar3;
}

// EdgeOpposingAngles @ 14c72e910

TVector2<double> * __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::EdgeOpposingAngles
          (FSimpleIntrinsicEdgeFlipMesh *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  int local_38;
  int local_2c;
  
  lVar2 = *(longlong *)
           ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  uVar4 = *(uint *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10 + 0xc);
  uVar3 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar7 = (uint)uVar3;
  uVar6 = (ulonglong)(uVar7 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data + ((uVar3 & 0xffffffff) >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar2 + uVar6 * 0xc);
  local_38 = (int)uVar1;
  if (local_38 == param_1) {
    iVar5 = 0;
  }
  else if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
    iVar5 = 1;
  }
  else {
    iVar5 = -1;
    if (*(int *)(lVar2 + 8 + uVar6 * 0xc) == param_1) {
      iVar5 = 2;
    }
  }
  dVar8 = GetTriInternalAngleR(this,uVar7,this->AddTwoModThree[iVar5]);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar8;
  dVar8 = __real_ffefffffffffffff;
  if (uVar4 != 0xffffffff) {
    lVar2 = *(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar2 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
    local_2c = (int)uVar1;
    iVar5 = 0;
    if (local_2c != param_1) {
      if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
        iVar5 = 1;
      }
      else {
        iVar5 = -1;
        if (*(int *)(lVar2 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc) == param_1) {
          iVar5 = 2;
        }
      }
    }
    dVar8 = GetTriInternalAngleR(this,uVar4,this->AddTwoModThree[iVar5]);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  return __return_storage_ptr__;
}

// FlipEdge @ 14c7357d0

EMeshResult __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FlipEdge
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1,FEdgeFlipInfo *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  EMeshResult EVar14;
  longlong lVar15;
  TVector<double> *pTVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int local_b0;
  int local_a4;
  uint uStack_8c;
  TVector<double> local_88 [3];
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->EdgeRefCounts).RefCounts.CurBlockUsed))) {
    uVar19 = (ulonglong)((uint)param_1 >> 9);
    uVar17 = param_1 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             uVar19 * 8) + (ulonglong)uVar17 * 2) - 1U) < 0xfffe) {
      uVar22 = (ulonglong)uVar17;
      if (*(int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar19 * 8) + 0xc +
                  uVar22 * 0x10) == -1) {
        EVar14 = Failed_IsBoundaryEdge;
      }
      else {
        bVar12 = AreSameOrientation(this,param_1);
        param_2->bHadSameOrientations = bVar12;
        lVar15 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar19 * 8);
        iVar18 = 0;
        uVar21 = *(ulonglong *)(lVar15 + 8 + uVar22 * 0x10);
        uVar11 = *(undefined8 *)(lVar15 + uVar22 * 0x10 + 8);
        uVar20 = (ulonglong)((uint)uVar21 & 0x1ff);
        uVar21 = (uVar21 & 0xffffffff) >> 9;
        lVar15 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + uVar21 * 8);
        uVar2 = *(undefined8 *)(lVar15 + uVar20 * 0xc);
        local_b0 = (int)uVar2;
        if (local_b0 == param_1) {
          iVar23 = 0;
          lVar15 = *(longlong *)((this->InternalAngles).Blocks.AllocatorInstance.Data + uVar21 * 8)
                   + uVar20 * 0x18;
        }
        else {
          pFVar8 = (this->InternalAngles).Blocks.AllocatorInstance.Data;
          if ((int)((ulonglong)uVar2 >> 0x20) == param_1) {
            iVar23 = 1;
            lVar15 = *(longlong *)(pFVar8 + uVar21 * 8) + uVar20 * 0x18;
          }
          else {
            iVar23 = -1;
            if (*(int *)(lVar15 + 8 + uVar20 * 0xc) == param_1) {
              iVar23 = 2;
            }
            lVar15 = *(longlong *)(pFVar8 + uVar21 * 8) + uVar20 * 0x18;
            if ((iVar23 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                    ,0x7a2,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              EVar14 = (*pcVar10)();
              return EVar14;
            }
          }
        }
        dVar3 = *(double *)(lVar15 + (longlong)iVar23 * 8);
        uVar7 = this->AddOneModThree[iVar23];
        lVar15 = *(longlong *)((this->InternalAngles).Blocks.AllocatorInstance.Data + uVar21 * 8);
        if ((2 < uVar7) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          EVar14 = (*pcVar10)();
          return EVar14;
        }
        uStack_8c = (uint)((ulonglong)uVar11 >> 0x20);
        dVar4 = *(double *)(uVar20 * 0x18 + lVar15 + (longlong)(int)uVar7 * 8);
        uVar20 = (ulonglong)(uStack_8c & 0x1ff);
        uVar21 = (ulonglong)(uStack_8c >> 9);
        lVar15 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + uVar21 * 8);
        uVar2 = *(undefined8 *)(lVar15 + uVar20 * 0xc);
        local_a4 = (int)uVar2;
        if (local_a4 != param_1) {
          if ((int)((ulonglong)uVar2 >> 0x20) == param_1) {
            iVar18 = 1;
          }
          else {
            iVar18 = -1;
            if (*(int *)(lVar15 + 8 + uVar20 * 0xc) == param_1) {
              iVar18 = 2;
            }
          }
        }
        lVar15 = uVar20 * 0x18;
        lVar24 = *(longlong *)((this->InternalAngles).Blocks.AllocatorInstance.Data + uVar21 * 8) +
                 lVar15;
        if (bVar12) {
          if ((iVar18 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            EVar14 = (*pcVar10)();
            return EVar14;
          }
          lVar9 = *(longlong *)((this->InternalAngles).Blocks.AllocatorInstance.Data + uVar21 * 8);
          uVar7 = this->AddOneModThree[iVar18];
          dVar5 = *(double *)(lVar24 + (longlong)iVar18 * 8);
          if ((2 < uVar7) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            EVar14 = (*pcVar10)();
            return EVar14;
          }
          dVar6 = *(double *)(lVar9 + lVar15 + (longlong)(int)uVar7 * 8);
        }
        else {
          if ((iVar18 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            EVar14 = (*pcVar10)();
            return EVar14;
          }
          lVar9 = *(longlong *)((this->InternalAngles).Blocks.AllocatorInstance.Data + uVar21 * 8);
          uVar7 = this->AddOneModThree[iVar18];
          dVar6 = *(double *)(lVar24 + (longlong)iVar18 * 8);
          if ((2 < uVar7) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            EVar14 = (*pcVar10)();
            return EVar14;
          }
          dVar5 = *(double *)(lVar9 + lVar15 + (longlong)(int)uVar7 * 8);
        }
        if (((__real_400921fb52ec942a < dVar3 + dVar6) || (__real_400921fb52ec942a < dVar4 + dVar5))
           || (uVar2 = *(undefined8 *)
                        (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar19 * 8) + 8
                        + uVar22 * 0x10), (int)uVar2 == (int)((ulonglong)uVar2 >> 0x20))) {
          EVar14 = Failed_Unsupported;
        }
        else {
          dVar3 = GetOpposingVerticesDistance(this,param_1);
          EVar14 = FlipEdgeTopology(this,param_1,param_2);
          if (EVar14 == Ok) {
            *(double *)
             (*(longlong *)((this->EdgeLengths).Blocks.AllocatorInstance.Data + uVar19 * 8) +
             (ulonglong)uVar17 * 8) = dVar3;
            uVar17 = *(uint *)((longlong)&param_2->_padding_ + 4);
            pTVar16 = ComputeTriInternalAnglesR(this,local_88,uVar17);
            dVar4 = (pTVar16->field0_0x0)._s_0.Y;
            dVar3 = (pTVar16->field0_0x0)._s_0.Z;
            lVar15 = *(longlong *)
                      ((this->InternalAngles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar17 >> 9) * 8);
            pdVar1 = (double *)(lVar15 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
            *pdVar1 = (pTVar16->field0_0x0)._s_0.X;
            pdVar1[1] = dVar4;
            *(double *)(lVar15 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18) = dVar3;
            uVar17 = param_2->_padding_;
            pTVar16 = ComputeTriInternalAnglesR(this,local_88,uVar17);
            dVar4 = (pTVar16->field0_0x0)._s_0.Y;
            dVar3 = (pTVar16->field0_0x0)._s_0.Z;
            lVar15 = *(longlong *)
                      ((this->InternalAngles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar17 >> 9) * 8);
            EVar14 = Ok;
            pdVar1 = (double *)(lVar15 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
            *pdVar1 = (pTVar16->field0_0x0)._s_0.X;
            pdVar1[1] = dVar4;
            *(double *)(lVar15 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18) = dVar3;
          }
        }
      }
      return EVar14;
    }
  }
  return Failed_NotAnEdge;
}

// FlipEdgeTopology @ 14c735cc0

EMeshResult __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::FlipEdgeTopology
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1,FEdgeFlipInfo *param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  bool bVar18;
  uint local_res8;
  uint uStackX_c;
  int local_res10;
  FEdgeFlipInfo *local_res18;
  int local_res20;
  uint uStack_ac;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  int local_90;
  undefined4 local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  if ((param_1 < 0) ||
     ((int)((this->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_1)) {
    return Failed_NotAnEdge;
  }
  uVar17 = (ulonglong)(param_1 & 0x1ff);
  local_60 = (ulonglong)((uint)param_1 >> 9) * 8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                    local_60) + uVar17 * 2) - 1U)) {
    return Failed_NotAnEdge;
  }
  lVar11 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_60);
  if (*(int *)(lVar11 + 0xc + uVar17 * 0x10) != -1) {
    uVar5 = *(ulonglong *)(lVar11 + 8 + uVar17 * 0x10);
    local_70 = uVar5 >> 0x20;
    local_res18 = param_2;
    local_78 = uVar5;
    GetEdgeOpposingV(this,(int)&local_res8);
    uVar7 = local_res8;
    pFVar6 = (this->TriangleEdges).Blocks.AllocatorInstance.Data;
    iVar10 = 0;
    local_58 = ((uVar5 & 0xffffffff) >> 9) * 8;
    local_50 = (ulonglong)((uint)uVar5 & 0x1ff) * 0xc;
    puVar15 = (undefined8 *)(*(longlong *)(pFVar6 + local_58) + local_50);
    local_a8._0_4_ = (int)*puVar15;
    iVar12 = iVar10;
    if ((int)local_a8 != param_1) {
      if ((int)((ulonglong)*puVar15 >> 0x20) == param_1) {
        iVar12 = 1;
      }
      else {
        iVar12 = -1;
        if (*(int *)(puVar15 + 1) == param_1) {
          iVar12 = 2;
        }
      }
    }
    puVar16 = (uint *)(local_50 +
                      *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + local_58));
    local_a0 = puVar16[2];
    local_a8 = *(undefined8 *)puVar16;
    uVar2 = *(uint *)((longlong)&local_a8 + (longlong)iVar12 * 4);
    uVar3 = *(uint *)((longlong)&local_a8 + (longlong)this->AddOneModThree[iVar12] * 4);
    if ((local_res8 == 0xffffffff) || (uStackX_c == 0xffffffff)) {
      return Failed_BrokenTopology;
    }
    local_a8 = *puVar15;
    uVar8 = local_a8;
    uVar14 = (uint)local_70;
    local_a0 = *(int *)(puVar15 + 1);
    local_68 = ((local_70 & 0xffffffff) >> 9) * 8;
    local_80 = (ulonglong)(uVar14 & 0x1ff) * 0xc;
    lVar11 = *(longlong *)(pFVar6 + local_68);
    local_98 = *(undefined8 *)(lVar11 + local_80);
    local_90 = *(int *)(lVar11 + 8 + local_80);
    uVar9 = local_98;
    if ((int)local_a8 == param_1) {
      iVar12 = 0;
    }
    else if ((int)((ulonglong)local_a8 >> 0x20) == param_1) {
      iVar12 = 1;
    }
    else {
      iVar12 = -1;
      if (*(int *)(puVar15 + 1) == param_1) {
        iVar12 = 2;
      }
    }
    if ((int)local_98 != param_1) {
      if ((int)((ulonglong)local_98 >> 0x20) == param_1) {
        iVar10 = 1;
      }
      else {
        iVar10 = -1;
        if (local_90 == param_1) {
          iVar10 = 2;
        }
      }
    }
    bVar18 = local_res18->bHadSameOrientations != false;
    uVar4 = *(uint *)((longlong)&local_a8 + (longlong)this->AddOneModThree[iVar12] * 4);
    local_res20 = *(int *)((longlong)&local_a8 + (longlong)this->AddTwoModThree[iVar12] * 4);
    lVar11 = (longlong)this->AddOneModThree[iVar10];
    if (bVar18) {
      lVar11 = (longlong)this->AddTwoModThree[iVar10];
    }
    local_res10 = *(int *)((longlong)&local_98 + lVar11 * 4);
    local_88 = *(undefined4 *)((longlong)&local_98 + (longlong)this->AddTwoModThree[iVar10] * 4);
    if (bVar18) {
      local_88 = *(undefined4 *)((longlong)&local_98 + (longlong)this->AddOneModThree[iVar10] * 4);
    }
    uVar13 = uStackX_c;
    if ((int)local_res8 <= (int)uStackX_c) {
      uVar13 = local_res8;
    }
    *puVar16 = local_res8;
    puVar16[1] = uStackX_c;
    puVar16[2] = uVar3;
    lVar11 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + local_68);
    *(uint *)(lVar11 + local_80) = uStackX_c;
    *(uint *)(lVar11 + 4 + local_80) = local_res8;
    *(uint *)(lVar11 + 8 + local_80) = uVar2;
    *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_60) + uVar17 * 0x10)
         = uVar13;
    if ((int)local_res8 <= (int)uStackX_c) {
      local_res8 = uStackX_c;
    }
    *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_60) + 4 +
             uVar17 * 0x10) = local_res8;
    *(int *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_60) + 8 +
            uVar17 * 0x10) = (int)local_78;
    *(uint *)(*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + local_60) + 0xc +
             uVar17 * 0x10) = uVar14;
    local_res8 = uVar4;
    local_a8 = uVar8;
    local_98 = uVar9;
    iVar10 = ReplaceEdgeTriangle(this,local_res20,(int)local_78,uVar14);
    iVar12 = local_res10;
    if (iVar10 != -1) {
      iVar10 = ReplaceEdgeTriangle(this,local_res10,(int)local_70,(int)local_78);
      if (iVar10 != -1) {
        lVar11 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_58);
        *(int *)(lVar11 + local_50) = param_1;
        *(int *)(lVar11 + 4 + local_50) = iVar12;
        *(uint *)(lVar11 + 8 + local_50) = local_res8;
        lVar11 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + local_68);
        *(int *)(lVar11 + local_80) = param_1;
        *(int *)(lVar11 + 4 + local_80) = local_res20;
        *(undefined4 *)(lVar11 + 8 + local_80) = local_88;
        bVar18 = FSmallListSet::Remove(&this->VertexEdgeLists,uVar2,param_1);
        if (bVar18) {
          FRefCountVector::Decrement(&this->VertexRefCounts,uVar2,1);
          if (uVar2 != uVar3) {
            bVar18 = FSmallListSet::Remove(&this->VertexEdgeLists,uVar3,param_1);
            if (!bVar18) {
              return Failed_UnrecoverableError;
            }
            FRefCountVector::Decrement(&this->VertexRefCounts,uVar3,1);
          }
          bVar18 = IsVertex(this,uVar2);
          if ((bVar18) && (bVar18 = IsVertex(this,uVar3), bVar18)) {
            FSmallListSet::Insert(&this->VertexEdgeLists,uVar7,param_1);
            psVar1 = (short *)(*(longlong *)
                                ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2);
            *psVar1 = *psVar1 + 1;
            if (uVar7 != uStackX_c) {
              FSmallListSet::Insert(&this->VertexEdgeLists,uStackX_c,param_1);
              psVar1 = (short *)(*(longlong *)
                                  ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uStackX_c >> 9) * 8) +
                                (ulonglong)(uStackX_c & 0x1ff) * 2);
              *psVar1 = *psVar1 + 1;
            }
            *(ulonglong *)((longlong)&local_res18->_padding_ + 4) = CONCAT44(uVar3,uVar2);
            *(ulonglong *)((longlong)&local_res18->_padding_ + 4) = CONCAT44(uStackX_c,uVar7);
            *(ulonglong *)((longlong)&local_res18->_padding_ + 4) =
                 CONCAT44((int)local_70,(int)local_78);
            *(int *)&local_res18->_padding_ = param_1;
            return Ok;
          }
        }
      }
    }
    return Failed_UnrecoverableError;
  }
  return Failed_IsBoundaryEdge;
}

// GetEdgeOpposingV @ 14c73ad30

FIndex2i __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::GetEdgeOpposingV
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar7;
  longlong lVar8;
  uint in_R8D;
  uint local_28;
  undefined8 local_18;
  undefined4 local_10;
  
  FVar7._s_0.B = in_register_00000014;
  FVar7._s_0.A = param_1;
  lVar8 = *(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(in_R8D >> 9) * 8)
          + (ulonglong)(in_R8D & 0x1ff) * 0x10;
  *(undefined8 *)FVar7 = 0xffffffffffffffff;
  uVar4 = *(uint *)(lVar8 + 8);
  if (uVar4 != 0xffffffff) {
    lVar1 = (ulonglong)(uVar4 >> 9) * 8;
    lVar2 = (ulonglong)(uVar4 & 0x1ff) * 0xc;
    lVar5 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1);
    uVar3 = *(undefined8 *)(lVar5 + lVar2);
    local_28 = (uint)uVar3;
    if (local_28 == in_R8D) {
      iVar6 = 0;
    }
    else if ((uint)((ulonglong)uVar3 >> 0x20) == in_R8D) {
      iVar6 = 1;
    }
    else {
      iVar6 = -1;
      if (*(uint *)(lVar5 + 8 + lVar2) == in_R8D) {
        iVar6 = 2;
      }
    }
    lVar1 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar1);
    local_10 = *(undefined4 *)(lVar1 + 8 + lVar2);
    local_18 = *(undefined8 *)(lVar1 + lVar2);
    *(undefined4 *)FVar7 =
         *(undefined4 *)((longlong)&local_18 + (longlong)this->AddTwoModThree[iVar6] * 4);
  }
  uVar4 = *(uint *)(lVar8 + 0xc);
  if (uVar4 != 0xffffffff) {
    lVar8 = (ulonglong)(uVar4 >> 9) * 8;
    lVar1 = (ulonglong)(uVar4 & 0x1ff) * 0xc;
    lVar2 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar8);
    uVar3 = *(undefined8 *)(lVar2 + lVar1);
    local_28 = (uint)uVar3;
    iVar6 = 0;
    if (local_28 != in_R8D) {
      if ((uint)((ulonglong)uVar3 >> 0x20) == in_R8D) {
        iVar6 = 1;
      }
      else {
        iVar6 = -1;
        if (*(uint *)(lVar2 + 8 + lVar1) == in_R8D) {
          iVar6 = 2;
        }
      }
    }
    lVar8 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar8);
    local_10 = *(undefined4 *)(lVar8 + 8 + lVar1);
    local_18 = *(undefined8 *)(lVar8 + lVar1);
    *(undefined4 *)((longlong)FVar7 + 4) =
         *(undefined4 *)((longlong)&local_18 + (longlong)this->AddTwoModThree[iVar6] * 4);
  }
  return (FIndex2i)FVar7;
}

// GetOpposingVerticesDistance @ 14c73e550

double __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::GetOpposingVerticesDistance
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  ulonglong uVar14;
  int iVar15;
  double *pdVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar26;
  undefined8 local_res8;
  char local_res10;
  double local_e0 [4];
  double local_c0 [17];
  
  local_res10 = AreSameOrientation(this,param_1);
  dVar12 = __real_3fe0000000000000;
  pdVar16 = local_e0 + 5;
  uVar25 = (uint)__xmm_80000000000000008000000000000000;
  uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar19 = *(double *)
            (*(longlong *)
              ((this->EdgeLengths).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 8);
  lVar18 = 0;
  local_res8 = *(undefined8 *)
                (*(longlong *)
                  ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
                  ) + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
  while( true ) {
    uVar5 = *(uint *)((longlong)&local_res8 + lVar18 * 4);
    uVar14 = (ulonglong)(uVar5 & 0x1ff);
    lVar6 = *(longlong *)
             ((this->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
    pFVar7 = (this->EdgeLengths).Blocks.AllocatorInstance.Data;
    uVar1 = *(ulonglong *)(lVar6 + uVar14 * 0xc);
    uVar5 = *(uint *)(lVar6 + 8 + uVar14 * 0xc);
    uVar17 = (uint)(uVar1 >> 0x20);
    local_e0[1] = (double)*(undefined8 *)
                           (*(longlong *)(pFVar7 + ((uVar1 & 0xffffffff) >> 9) * 8) +
                           (ulonglong)((uint)uVar1 & 0x1ff) * 8);
    local_e0[2] = (double)*(undefined8 *)
                           (*(longlong *)(pFVar7 + (uVar1 >> 0x29) * 8) +
                           (ulonglong)(uVar17 & 0x1ff) * 8);
    local_e0[3] = (double)*(undefined8 *)
                           (*(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 8);
    if ((uint)uVar1 == param_1) {
      iVar15 = 0;
    }
    else if (uVar17 == param_1) {
      iVar15 = 1;
    }
    else {
      iVar15 = -1;
      if (uVar5 == param_1) {
        iVar15 = 2;
      }
    }
    uVar5 = this->AddTwoModThree[iVar15];
    if ((2 < uVar5) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7ab,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      dVar19 = (double)(*pcVar8)();
      return dVar19;
    }
    dVar2 = local_e0[(longlong)(int)uVar5 + 1];
    uVar5 = this->AddOneModThree[iVar15];
    if ((2 < uVar5) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7ab,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      dVar19 = (double)(*pcVar8)();
      return dVar19;
    }
    dVar3 = local_e0[(longlong)(int)uVar5 + 1];
    if ((iVar15 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7ab,L""), bVar13)) break;
    dVar4 = local_e0[(longlong)iVar15 + 1];
    auVar24._0_8_ = (dVar3 + dVar4) - dVar2;
    auVar24._8_8_ = 0;
    dVar20 = ((dVar3 - dVar4) + dVar2) * (dVar2 + dVar3 + dVar4) *
             ((dVar4 - dVar3) + dVar2) * auVar24._0_8_;
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar20;
    auVar24 = sqrtpd(auVar24,auVar11);
    dVar23 = (auVar24._0_8_ * dVar12) / dVar4;
    auVar21._0_8_ = dVar2 + dVar23;
    auVar21._8_8_ = 0;
    dVar20 = (dVar2 - dVar23) * auVar21._0_8_;
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar20;
    auVar24 = sqrtpd(auVar21,auVar9);
    dVar20 = auVar24._0_8_;
    if (dVar2 * dVar2 + dVar4 * dVar4 < dVar3 * dVar3) {
      dVar20 = (double)CONCAT44(auVar24._4_4_ ^ uVar26,auVar24._0_4_ ^ uVar25);
    }
    pdVar16[-1] = dVar20;
    lVar18 = lVar18 + 1;
    *pdVar16 = dVar23;
    pdVar16 = pdVar16 + 2;
    if (1 < lVar18) {
      if (local_res10 != '\0') {
        local_c0[2] = dVar19 - local_c0[2];
      }
      local_c0[1] = local_c0[1] -
                    (double)CONCAT44((uint)((ulonglong)local_c0[3] >> 0x20) ^ uVar26,
                                     SUB84(local_c0[3],0) ^ uVar25);
      auVar22._0_8_ = local_c0[1] * local_c0[1];
      auVar22._8_8_ = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (local_c0[0] - local_c0[2]) * (local_c0[0] - local_c0[2]) + auVar22._0_8_;
      auVar24 = sqrtpd(auVar22,auVar10);
      return auVar24._0_8_;
    }
  }
  pcVar8 = (code *)swi(3);
  dVar19 = (double)(*pcVar8)();
  return dVar19;
}

// GetOrientedEdgeV @ 14c73e890

FIndex2i __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::GetOrientedEdgeV
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar6;
  uint in_R9D;
  int iStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  FVar6._s_0.B = in_register_00000014;
  FVar6._s_0.A = param_1;
  lVar1 = (ulonglong)(in_R9D >> 9) * 8;
  lVar2 = (ulonglong)(in_R9D & 0x1ff) * 0xc;
  lVar4 = *(longlong *)((this->TriangleEdges).Blocks.AllocatorInstance.Data + lVar1);
  uVar3 = *(undefined8 *)(lVar4 + lVar2);
  local_18._0_4_ = (int)uVar3;
  if ((int)local_18 == param_2) {
    iVar5 = 0;
  }
  else if ((int)((ulonglong)uVar3 >> 0x20) == param_2) {
    iVar5 = 1;
  }
  else {
    iVar5 = -1;
    if (*(int *)(lVar4 + 8 + lVar2) == param_2) {
      iVar5 = 2;
    }
  }
  lVar1 = *(longlong *)((this->Triangles).Blocks.AllocatorInstance.Data + lVar1);
  local_10 = *(undefined4 *)(lVar1 + 8 + lVar2);
  local_18 = *(undefined8 *)(lVar1 + lVar2);
  *(undefined4 *)FVar6 = *(undefined4 *)((longlong)&local_18 + (longlong)iVar5 * 4);
  *(undefined4 *)((longlong)FVar6 + 4) =
       *(undefined4 *)((longlong)&local_18 + (longlong)this->AddOneModThree[iVar5] * 4);
  return (FIndex2i)FVar6;
}

// GetTriEdgeLengths @ 14c743910

TVector<double> * __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::GetTriEdgeLengths
          (FSimpleIntrinsicEdgeFlipMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  uint local_18;
  
  lVar3 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  uVar1 = *(ulonglong *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar2 = *(uint *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  pFVar4 = (this->EdgeLengths).Blocks.AllocatorInstance.Data;
  local_18 = (uint)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(double *)
        (*(longlong *)(pFVar4 + (ulonglong)(local_18 >> 9) * 8) + (ulonglong)(local_18 & 0x1ff) * 8)
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       *(double *)
        (*(longlong *)(pFVar4 + (uVar1 >> 0x29) * 8) +
        (ulonglong)((uint)(uVar1 >> 0x20) & 0x1ff) * 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(double *)
        (*(longlong *)(pFVar4 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8);
  return __return_storage_ptr__;
}

// GetTriInternalAngleR @ 14c7439c0

double __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::GetTriInternalAngleR
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  lVar1 = *(longlong *)
           ((this->InternalAngles).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  if (2 < (uint)param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar4 = (double)(*pcVar2)();
      return dVar4;
    }
  }
  return *(double *)(lVar1 + (ulonglong)(param_1 & 0x1ff) * 0x18 + (longlong)param_2 * 8);
}

// IsBoundaryVertex @ 14c74fe70

bool __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::IsBoundaryVertex
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1)

{
  BaseValueIterator local_38;
  
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_38,&this->VertexEdgeLists,param_1,false);
    while (((local_38.ListSet != &this->VertexEdgeLists || (local_38.ListIndex != param_1)) ||
           ((local_38.iCur != -1 || (local_38.cur_ptr != -1))))) {
      if (*(int *)(*(longlong *)
                    ((this->Edges).Blocks.AllocatorInstance.Data +
                    ((local_38._32_8_ & 0xffffffff) >> 9) * 8) + 0xc +
                  (ulonglong)(local_38.cur_value & 0x1ff) * 0x10) == -1) {
        return true;
      }
      FSmallListSet::BaseValueIterator::GotoNext(&local_38);
    }
  }
  return false;
}

// IsVertex @ 14c751350

bool __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::IsVertex(FSimpleIntrinsicEdgeFlipMesh *this,int param_1)

{
  if (((-1 < param_1) &&
      (param_1 < (int)((this->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (this->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// ReplaceEdgeTriangle @ 14c75d950

int __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::ReplaceEdgeTriangle
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           ((this->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
          (ulonglong)(param_1 & 0x1ff) * 0x10;
  if (*(int *)(lVar1 + 8) != param_2) {
    if (*(int *)(lVar1 + 0xc) == param_2) {
      *(int *)(lVar1 + 0xc) = param_3;
      return 1;
    }
    return -1;
  }
  if (param_3 == -1) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 0xc);
    *(undefined4 *)(lVar1 + 0xc) = 0xffffffff;
    return 0;
  }
  *(int *)(lVar1 + 8) = param_3;
  return 0;
}

// ReplaceTriangleEdge @ 14c75dc40

int __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::ReplaceTriangleEdge
          (FSimpleIntrinsicEdgeFlipMesh *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  lVar1 = *(longlong *)
           ((this->TriangleEdges).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0xc;
  uVar4 = uVar2;
  do {
    iVar3 = (int)uVar4;
    if (*(int *)(lVar1 + uVar2 * 4) == param_2) {
      *(int *)(lVar1 + (longlong)iVar3 * 4) = param_3;
      return iVar3;
    }
    uVar4 = (ulonglong)(iVar3 + 1);
    uVar2 = uVar2 + 1;
  } while ((longlong)uVar2 < 3);
  return -1;
}

// Reset @ 14c75e730

void __thiscall
UE::Geometry::FSimpleIntrinsicEdgeFlipMesh::Reset
          (FSimpleIntrinsicEdgeFlipMesh *this,FDynamicMesh3 *param_1)

{
  FRefCountVector *this_00;
  FRefCountVector *this_01;
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  TVector<double> local_58;
  double local_30;
  
  Clear(this);
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(&this->Vertices,&param_1->Vertices);
  TDynamicVector<unsigned_short,512>::operator=
            (&(this->VertexRefCounts).RefCounts,&(param_1->VertexRefCounts).RefCounts);
  TDynamicVector<int,512>::operator=
            (&(this->VertexRefCounts).FreeIndices,&(param_1->VertexRefCounts).FreeIndices);
  (this->VertexRefCounts).UsedCount = (param_1->VertexRefCounts).UsedCount;
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).ListHeads,&(param_1->VertexEdgeLists).ListHeads);
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).ListBlocks,&(param_1->VertexEdgeLists).ListBlocks);
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).FreeBlocks,&(param_1->VertexEdgeLists).FreeBlocks);
  (this->VertexEdgeLists).AllocatedCount = (param_1->VertexEdgeLists).AllocatedCount;
  TDynamicVector<int,512>::operator=
            (&(this->VertexEdgeLists).LinkedListElements,
             &(param_1->VertexEdgeLists).LinkedListElements);
  (this->VertexEdgeLists).FreeHeadIndex = (param_1->VertexEdgeLists).FreeHeadIndex;
  TDynamicVector<UE::Geometry::FIndex3i,512>::operator=(&this->Triangles,&param_1->Triangles);
  this_00 = &this->TriangleRefCounts;
  TDynamicVector<unsigned_short,512>::operator=
            (&this_00->RefCounts,&(param_1->TriangleRefCounts).RefCounts);
  TDynamicVector<int,512>::operator=
            (&(this->TriangleRefCounts).FreeIndices,&(param_1->TriangleRefCounts).FreeIndices);
  (this->TriangleRefCounts).UsedCount = (param_1->TriangleRefCounts).UsedCount;
  TDynamicVector<UE::Geometry::FIndex3i,512>::operator=
            (&this->TriangleEdges,&param_1->TriangleEdges);
  TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::operator=(&this->Edges,&param_1->Edges);
  this_01 = &this->EdgeRefCounts;
  TDynamicVector<unsigned_short,512>::operator=
            (&this_01->RefCounts,&(param_1->EdgeRefCounts).RefCounts);
  TDynamicVector<int,512>::operator=
            (&(this->EdgeRefCounts).FreeIndices,&(param_1->EdgeRefCounts).FreeIndices);
  (this->EdgeRefCounts).UsedCount = (param_1->EdgeRefCounts).UsedCount;
  uVar9 = (this_01->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed;
  TDynamicVector<double,512>::Resize(&this->EdgeLengths,uVar9);
  uVar8 = 0;
  uVar12 = 0;
  if (0 < (int)uVar9) {
    uVar10 = 0;
    do {
      if ((int)uVar12 <
          (int)((this_01->RefCounts).CurBlock * 0x200 + (this->EdgeRefCounts).RefCounts.CurBlockUsed
               )) {
        uVar11 = (ulonglong)(uVar10 & 0x1ff);
        uVar13 = (ulonglong)(uVar12 >> 9);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((this->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 uVar13 * 8) + uVar11 * 2) - 1U) < 0xfffe) {
          pFVar3 = (this->Vertices).Blocks.AllocatorInstance.Data;
          uVar4 = *(ulonglong *)
                   (*(longlong *)((this->Edges).Blocks.AllocatorInstance.Data + uVar13 * 8) +
                   uVar11 * 0x10);
          uVar7 = (ulonglong)((uint)uVar4 & 0x1ff);
          lVar5 = *(longlong *)(pFVar3 + ((uVar4 & 0xffffffff) >> 9) * 8);
          pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
          local_58.field0_0x0._s_0.Z = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
          uVar7 = (ulonglong)((uint)(uVar4 >> 0x20) & 0x1ff);
          lVar5 = *(longlong *)(pFVar3 + (uVar4 >> 0x29) * 8);
          pdVar2 = (double *)(lVar5 + uVar7 * 0x18);
          local_30 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
          dVar14 = *pdVar2 - *pdVar1;
          dVar15 = pdVar2[1] - pdVar1[1];
          *(double *)
           (*(longlong *)((this->EdgeLengths).Blocks.AllocatorInstance.Data + uVar13 * 8) +
           uVar11 * 8) = SQRT(dVar15 * dVar15 + dVar14 * dVar14 +
                              (local_30 - local_58.field0_0x0._s_0.Z) *
                              (local_30 - local_58.field0_0x0._s_0.Z));
        }
      }
      uVar12 = uVar12 + 1;
      uVar10 = uVar10 + 1;
    } while ((int)uVar12 < (int)uVar9);
  }
  uVar12 = (this_00->RefCounts).CurBlock * 0x200 + (this->TriangleRefCounts).RefCounts.CurBlockUsed;
  TDynamicVector<UE::Math::TVector<double>,512>::Resize(&this->InternalAngles,uVar12);
  uVar9 = uVar8;
  if (0 < (int)uVar12) {
    do {
      if ((int)uVar8 <
          (int)((this_00->RefCounts).CurBlock * 0x200 +
               (this->TriangleRefCounts).RefCounts.CurBlockUsed)) {
        uVar11 = (ulonglong)(uVar9 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((this->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                 + (ulonglong)(uVar8 >> 9) * 8) + uVar11 * 2) - 1U) < 0xfffe) {
          pTVar6 = ComputeTriInternalAnglesR(this,&local_58,uVar8);
          dVar15 = (pTVar6->field0_0x0)._s_0.Y;
          dVar14 = (pTVar6->field0_0x0)._s_0.Z;
          lVar5 = *(longlong *)
                   ((this->InternalAngles).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar8 >> 9) * 8);
          pdVar1 = (double *)(lVar5 + uVar11 * 0x18);
          *pdVar1 = (pTVar6->field0_0x0)._s_0.X;
          pdVar1[1] = dVar15;
          *(double *)(lVar5 + 0x10 + uVar11 * 0x18) = dVar14;
        }
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
    } while ((int)uVar8 < (int)uVar12);
  }
  return;
}

