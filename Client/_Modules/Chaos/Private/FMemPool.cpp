// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// AllocConvexFace @ 14389c0a0

FConvexFace * __thiscall
Chaos::FConvexBuilder::FMemPool::AllocConvexFace(FMemPool *this,TCorePlane<float,3> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FConvexFace *pFVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 uStack_c;
  
  iVar2 = (this->FacesFreeIndices).ArrayNum;
  if (iVar2 == 0) {
    uVar5 = *(undefined8 *)&param_1->MX;
    uVar6 = *(undefined8 *)&(param_1->MX).field_0x8;
    iVar2 = (this->Faces).NumElements;
    uVar1 = *(undefined8 *)&(param_1->MNormal).field_0x4;
    puVar9 = operator_new<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>
                       (0x40,&this->Faces);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = local_48;
      puVar9[1] = 0;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      puVar9[4] = uVar1;
      puVar9[5] = uStack_20;
      puVar9[6] = local_18;
      puVar9[7] = CONCAT44(uStack_c,iVar2);
    }
    pFVar8 = TChunkedArray<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>::
             operator[](&this->Faces,(this->Faces).NumElements + -1);
  }
  else {
    if ((iVar2 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FConvexFace *)(*pcVar4)();
      return pFVar8;
    }
    iVar2 = (this->FacesFreeIndices).ArrayNum;
    iVar3 = *(int *)((this->FacesFreeIndices).AllocatorInstance.Data + (longlong)iVar2 * 4 + -4);
    (this->FacesFreeIndices).ArrayNum = iVar2 + -1;
    pFVar8 = TChunkedArray<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>::
             operator[](&this->Faces,iVar3);
    pFVar8->ConflictList = (FHalfEdge *)0x0;
    uVar1 = *(undefined8 *)&(param_1->MX).field_0x8;
    *(undefined8 *)&(pFVar8->Plane).MX = *(undefined8 *)&param_1->MX;
    *(undefined8 *)&(pFVar8->Plane).MX.field_0x8 = uVar1;
    *(undefined8 *)&(pFVar8->Plane).MNormal.field_0x4 = *(undefined8 *)&(param_1->MNormal).field_0x4
    ;
    if ((pFVar8->PoolIdx != iVar3) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1014331345280696553>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                           ,0xe9,"FreeFace->PoolIdx == Idx"), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FConvexFace *)(*pcVar4)();
      return pFVar8;
    }
  }
  return pFVar8;
}

// AllocHalfEdge @ 14389c1f0

FHalfEdge * __thiscall Chaos::FConvexBuilder::FMemPool::AllocHalfEdge(FMemPool *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FHalfEdge *pFVar5;
  undefined8 *puVar6;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 uStack_c;
  
  iVar1 = (this->HalfEdgesFreeIndices).ArrayNum;
  if (iVar1 == 0) {
    iVar1 = (this->HalfEdges).NumElements;
    puVar6 = operator_new<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                       (0x30,&this->HalfEdges);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = CONCAT44(uStack_34,param_1);
      puVar6[1] = uStack_30;
      puVar6[2] = local_28;
      puVar6[3] = uStack_20;
      puVar6[4] = local_18;
      puVar6[5] = CONCAT44(uStack_c,iVar1);
    }
    pFVar5 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>::
             operator[](&this->HalfEdges,(this->HalfEdges).NumElements + -1);
    return pFVar5;
  }
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FHalfEdge *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar1 = (this->HalfEdgesFreeIndices).ArrayNum;
  iVar2 = *(int *)((this->HalfEdgesFreeIndices).AllocatorInstance.Data + (longlong)iVar1 * 4 + -4);
  (this->HalfEdgesFreeIndices).ArrayNum = iVar1 + -1;
  pFVar5 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>::
           operator[](&this->HalfEdges,iVar2);
  pFVar5->Vertex = param_1;
  if (pFVar5->PoolIdx != iVar2) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1014331345280696536>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                       ,0xd8,"FreeHalfEdge->PoolIdx == Idx");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FHalfEdge *)(*pcVar3)();
      return pFVar5;
    }
  }
  return pFVar5;
}

