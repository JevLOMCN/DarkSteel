// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FBreadthFirstSearch @ 146117ec0

FBreadthFirstSearch * __thiscall
UE::MovieScene::FDirectedGraph::FBreadthFirstSearch::FBreadthFirstSearch
          (FBreadthFirstSearch *this,FDirectedGraph *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FBreadthFirstSearch *pFVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  
  this_00 = &this->Visited;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Nodes).ArrayMax;
  (this->Nodes).ArrayNum = 0;
  *piVar1 = 0;
  iVar6 = (param_1->Nodes).NumBits;
  (this->Visited).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Visited).MaxBits = 0x80;
  (this->Visited).NumBits = iVar6;
  uVar5 = iVar6 + 0x1f;
  uVar9 = uVar5 >> 5;
  if (uVar5 >> 5 != 0) {
    if (4 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar9,4);
      (this->Visited).MaxBits = uVar9 << 5;
    }
    FVar8 = (this->Visited).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar8,0,(ulonglong)uVar9 << 2);
    iVar6 = (this->Visited).NumBits;
    uVar9 = iVar6 >> 0x1f & 0x1f;
    uVar5 = iVar6 + uVar9;
    iVar6 = (uVar5 & 0x1f) - uVar9;
    if (iVar6 != 0) {
      FVar8 = (this->Visited).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)this_00;
      }
      puVar2 = (uint *)((longlong)FVar8 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
    }
  }
  this->StackIndex = 0;
  this->Graph = param_1;
  uVar5 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&param_1->Nodes,0,-1);
  if (-1 < (int)uVar5) {
    if (*piVar1 < (int)uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar5,(ForAnyElementType *)this,(this->Nodes).ArrayNum,piVar1);
    }
    if ((param_1->bHasDanglingEdges != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InGraph->bHasDanglingEdges",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                           ,0x31,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FBreadthFirstSearch *)(*pcVar3)();
      return pFVar7;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// Search @ 146153450

void __thiscall
UE::MovieScene::FDirectedGraph::FBreadthFirstSearch::Search
          (FBreadthFirstSearch *this,ushort param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  uint *puVar3;
  FDirectionalEdge *pFVar4;
  FDirectionalEdge FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ushort uVar8;
  FDirectionalEdge FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> FVar16;
  FDirectionalEdge *pFVar17;
  ushort local_res10 [4];
  FDirectionalEdge local_48;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_40;
  
  pTVar1 = &this->Visited;
  local_res10[0] = param_1;
  if (((this->Visited).NumBits <= (int)(uint)param_1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar15 = (this->Visited).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)pTVar1;
  }
  if ((*(uint *)((longlong)FVar15 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    piVar2 = &(this->Nodes).ArrayMax;
    (this->Nodes).ArrayNum = 0;
    if ((this->Nodes).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,(ForAnyElementType *)this,0,piVar2);
    }
    uVar8 = local_res10[0];
    this->StackIndex = 0;
    if (((this->Visited).NumBits <= (int)(uint)local_res10[0]) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar15 = (this->Visited).AllocatorInstance.SecondaryData;
    if (FVar15 == (ForElementType<unsigned_int>)0x0) {
      FVar15 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar3 = (uint *)((longlong)FVar15 + (ulonglong)(uVar8 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar8 & 0x1f);
    pFVar6 = (this->Nodes).AllocatorInstance.Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 < pFVar6 + (longlong)*piVar2 * 2)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = (this->Nodes).ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x202,(ForAnyElementType *)this,piVar2);
    }
    (this->Nodes).ArrayNum = iVar11 + 1;
    *(ushort *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar11 * 2) = local_res10[0];
    uVar14 = this->StackIndex;
    iVar11 = (this->Nodes).ArrayNum;
    if ((int)uVar14 < iVar11) {
      do {
        while ((int)uVar14 < iVar11) {
          uVar12 = 0;
          if ((int)uVar14 < (this->Nodes).ArrayNum) {
            uVar12 = ~uVar14 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          GetEdgesFrom(this->Graph,&local_40,
                       *(ushort *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar14 * 2)
                      );
          pFVar4 = local_40.DataPtr + local_40.ArrayNum;
          for (pFVar17 = local_40.DataPtr; pFVar17 != pFVar4; pFVar17 = pFVar17 + 1) {
            FVar5 = *pFVar17;
            local_48 = FVar5;
            if (((this->Visited).NumBits <= (int)((uint)FVar5 >> 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar9 = local_48;
            FVar15 = (this->Visited).AllocatorInstance.SecondaryData;
            FVar16 = (ForElementType<unsigned_int>)pTVar1;
            if (FVar15 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar15;
            }
            if ((*(uint *)((longlong)FVar16 + (ulonglong)((uint)FVar5 >> 0x15) * 4) >>
                 ((uint)FVar5 >> 0x10 & 0x1f) & 1) == 0) {
              uVar8 = local_48.ToNode;
              if (((this->Visited).NumBits <= (int)(uint)local_48.ToNode) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar15 = (this->Visited).AllocatorInstance.SecondaryData;
              FVar16 = (ForElementType<unsigned_int>)pTVar1;
              if (FVar15 != (ForElementType<unsigned_int>)0x0) {
                FVar16 = FVar15;
              }
              puVar3 = (uint *)((longlong)FVar16 + (ulonglong)(uVar8 >> 5) * 4);
              *puVar3 = *puVar3 | 1 << ((byte)FVar9.ToNode & 0x1f);
              pFVar6 = (this->Nodes).AllocatorInstance.Data;
              if (((pFVar6 <= &local_48.ToNode) &&
                  (&local_48.ToNode < pFVar6 + (longlong)*piVar2 * 2)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar13 = (this->Nodes).ArrayNum;
              if (iVar13 == *piVar2) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x202,(ForAnyElementType *)this,piVar2);
              }
              (this->Nodes).ArrayNum = iVar13 + 1;
              *(ushort *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar13 * 2) =
                   local_48.ToNode;
            }
          }
          uVar14 = this->StackIndex + 1;
          this->StackIndex = uVar14;
        }
        iVar11 = (this->Nodes).ArrayNum;
      } while ((int)uVar14 < iVar11);
    }
  }
  return;
}

