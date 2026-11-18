// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// GetEdgeConnectedPolygons<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 14e6d9990

void __thiscall
FMeshDescription::GetEdgeConnectedPolygons<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (FMeshDescription *this,FEdgeID param_1,
          TArray<FPolygonID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  FTriangleID FVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<int_const_,int> *pTVar6;
  FTriangleID *pFVar7;
  uint uVar8;
  FMeshAttributeArraySetBase *pFVar9;
  TArrayView<FTriangleID_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  pTVar6 = FMeshElementIndexer::Find(&this->EdgeToTriangles,&local_28,(int)param_1,0);
  uVar5 = pTVar6->ArrayNum;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar5) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
              (4,4,uVar5,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  FMeshElementIndexer::Find<FTriangleID>(&this->EdgeToTriangles,&local_38,(int)param_1,0);
  pFVar7 = local_38.DataPtr;
  while( true ) {
    if (pFVar7 == local_38.DataPtr + local_38.ArrayNum) {
      return;
    }
    pFVar2 = (this->TrianglePolygons).ArrayPtr;
    FVar1 = *pFVar7;
    if (((int)pFVar2[2].Type < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar9 = pFVar2 + 1;
    if ((FMeshAttributeArraySetBase *)pFVar2[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
      pFVar9 = (FMeshAttributeArraySetBase *)pFVar2[2]._padding_;
    }
    uVar8 = (int)FVar1 * pFVar9->NumElements;
    uVar5 = 0;
    if ((int)uVar8 < (int)pFVar9->Type) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<FPolygonID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
    AddUniqueImpl<FPolygonID_const_&>
              (param_2,(FPolygonID *)(pFVar9->_padding_ + (longlong)(int)uVar8 * 4));
    pFVar7 = pFVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

