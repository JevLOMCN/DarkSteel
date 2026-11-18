// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FDepthFirstSearch @ 1461180d0

FDepthFirstSearch * __thiscall
UE::MovieScene::FDirectedGraph::FDepthFirstSearch::FDepthFirstSearch
          (FDepthFirstSearch *this,FDirectedGraph *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FDepthFirstSearch *pFVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  
  pTVar1 = &this->Visited;
  (this->PostNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PostNodes).ArrayMax;
  (this->PostNodes).ArrayNum = 0;
  *piVar2 = 0;
  iVar7 = (param_1->Nodes).NumBits;
  (this->Visited).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->Visited).MaxBits = 0x80;
  (this->Visited).NumBits = iVar7;
  uVar6 = iVar7 + 0x1f;
  uVar10 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar10) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
      (this->Visited).MaxBits = uVar10 << 5;
    }
    FVar9 = (this->Visited).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
    iVar7 = (this->Visited).NumBits;
    uVar10 = iVar7 >> 0x1f & 0x1f;
    uVar6 = iVar7 + uVar10;
    iVar7 = (uVar6 & 0x1f) - uVar10;
    if (iVar7 != 0) {
      FVar9 = (this->Visited).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (-(char)iVar7 & 0x1fU);
    }
  }
  iVar7 = (param_1->Nodes).NumBits;
  pTVar1 = &this->IsVisiting;
  (this->IsVisiting).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IsVisiting).MaxBits = 0x80;
  (this->IsVisiting).NumBits = iVar7;
  uVar6 = iVar7 + 0x1f;
  uVar10 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar10) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
      (this->IsVisiting).MaxBits = uVar10 << 5;
    }
    FVar9 = (this->IsVisiting).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)pTVar1;
    }
    memset((void *)FVar9,0,(ulonglong)uVar10 << 2);
    iVar7 = (this->IsVisiting).NumBits;
    uVar10 = iVar7 >> 0x1f & 0x1f;
    uVar6 = iVar7 + uVar10;
    iVar7 = (uVar6 & 0x1f) - uVar10;
    if (iVar7 != 0) {
      FVar9 = (this->IsVisiting).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
      }
      puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  this->Graph = param_1;
  uVar6 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&param_1->Nodes,0,-1);
  if (-1 < (int)uVar6) {
    if (*piVar2 < (int)uVar6) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6,(ForAnyElementType *)this,(this->PostNodes).ArrayNum,piVar2);
    }
    if ((this->Graph->bHasDanglingEdges != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Graph->bHasDanglingEdges",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                           ,0x12,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDepthFirstSearch *)(*pcVar4)();
      return pFVar8;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// Search @ 146153850

void __thiscall
UE::MovieScene::FDirectedGraph::FDepthFirstSearch::Search(FDepthFirstSearch *this,ushort param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  FDirectionalEdge FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ushort uVar8;
  FDirectionalEdge FVar9;
  bool bVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  FDirectionalEdge *pFVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  FDirectionalEdge local_res18;
  FDirectionalEdge *local_res20;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_58;
  
  pTVar1 = &this->IsVisiting;
  local_res10[0] = param_1;
  if (((this->IsVisiting).NumBits <= (int)(uint)param_1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar13 = (this->IsVisiting).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)pTVar1;
  }
  puVar3 = (uint *)((longlong)FVar13 + (ulonglong)(param_1 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)param_1 & 0x1f);
  GetEdgesFrom(this->Graph,&local_58,local_res10[0]);
  local_res20 = local_58.DataPtr + local_58.ArrayNum;
  pFVar14 = local_58.DataPtr;
  if (local_58.DataPtr != local_res20) {
    do {
      FVar5 = *pFVar14;
      local_res18 = FVar5;
      if (((this->Visited).NumBits <= (int)((uint)FVar5 >> 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar9 = local_res18;
      FVar13 = (this->Visited).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<unsigned_int>)&this->Visited;
      if (FVar13 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = FVar13;
      }
      if ((*(uint *)((longlong)FVar12 + (ulonglong)((uint)FVar5 >> 0x15) * 4) >>
           ((uint)FVar5 >> 0x10 & 0x1f) & 1) == 0) {
        uVar8 = local_res18.ToNode;
        if (((this->IsVisiting).NumBits <= (int)(uint)local_res18.ToNode) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar13 = (this->IsVisiting).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)pTVar1;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar13;
        }
        uVar15 = 1 << ((byte)FVar9.ToNode & 0x1f);
        lVar4 = (ulonglong)(uVar8 >> 5) * 4;
        if ((*(uint *)(lVar4 + (longlong)FVar12) & uVar15) != 0) {
          local_res8[0] = 0;
          bVar10 = `UE::MovieScene::FDirectedGraph::FDepthFirstSearch::Search'::__l10::<lambda_1>::
                   operator()(local_res8);
          if (!bVar10) {
            return;
          }
        }
        if (((this->Visited).NumBits <= (int)(uint)uVar8) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar13 = (this->Visited).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)&this->Visited;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar13;
        }
        puVar3 = (uint *)(lVar4 + (longlong)FVar12);
        *puVar3 = *puVar3 | uVar15;
        Search(this,uVar8);
      }
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != local_res20);
  }
  pFVar6 = (this->PostNodes).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar6 + (longlong)(this->PostNodes).ArrayMax * 2))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar11 = (this->PostNodes).ArrayNum;
  piVar2 = &(this->PostNodes).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,(ForAnyElementType *)this,piVar2);
  }
  uVar8 = local_res10[0];
  (this->PostNodes).ArrayNum = iVar11 + 1;
  *(ushort *)((this->PostNodes).AllocatorInstance.Data + (longlong)iVar11 * 2) = local_res10[0];
  if (((this->IsVisiting).NumBits <= (int)(uint)local_res10[0]) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar13 = (this->IsVisiting).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)pTVar1;
  }
  puVar3 = (uint *)((longlong)FVar13 + (ulonglong)(uVar8 >> 5) * 4);
  *puVar3 = *puVar3 & ~(1 << ((byte)uVar8 & 0x1f));
  return;
}

// operator() @ 1504e41f0

bool __thiscall
`UE::MovieScene::FDirectedGraph::FDepthFirstSearch::Search'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1921290230443278307>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1921290230443278307>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

