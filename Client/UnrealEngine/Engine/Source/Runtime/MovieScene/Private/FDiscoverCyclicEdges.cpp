// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// FDiscoverCyclicEdges @ 1461182e0

FDiscoverCyclicEdges * __thiscall
UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::FDiscoverCyclicEdges
          (FDiscoverCyclicEdges *this,FDirectedGraph *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FDiscoverCyclicEdges *pFVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  
  iVar5 = (param_1->SortedEdges).ArrayNum;
  (this->CyclicEdges).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->CyclicEdges).MaxBits = 0x80;
  (this->CyclicEdges).NumBits = iVar5;
  uVar4 = iVar5 + 0x1f;
  uVar9 = uVar4 >> 5;
  if (uVar4 >> 5 != 0) {
    if (4 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar9,4);
      (this->CyclicEdges).MaxBits = uVar9 << 5;
    }
    FVar8 = (this->CyclicEdges).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)this;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar8;
    }
    memset((void *)FVar7,0,(ulonglong)uVar9 << 2);
    iVar5 = (this->CyclicEdges).NumBits;
    uVar9 = iVar5 >> 0x1f & 0x1f;
    uVar4 = iVar5 + uVar9;
    iVar5 = (uVar4 & 0x1f) - uVar9;
    if (iVar5 != 0) {
      FVar8 = (this->CyclicEdges).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)this;
      if (FVar8 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar8;
      }
      puVar1 = (uint *)((longlong)FVar7 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (-(char)iVar5 & 0x1fU);
    }
  }
  iVar5 = (param_1->SortedEdges).ArrayNum;
  this_00 = &this->VisitedEdges;
  (this->VisitedEdges).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->VisitedEdges).MaxBits = 0x80;
  (this->VisitedEdges).NumBits = iVar5;
  uVar4 = iVar5 + 0x1f;
  uVar9 = uVar4 >> 5;
  if (uVar4 >> 5 != 0) {
    if (4 < uVar9) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar9,4);
      (this->VisitedEdges).MaxBits = uVar9 << 5;
    }
    FVar8 = (this->VisitedEdges).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar8,0,(ulonglong)uVar9 << 2);
    iVar5 = (this->VisitedEdges).NumBits;
    uVar9 = iVar5 >> 0x1f & 0x1f;
    uVar4 = iVar5 + uVar9;
    iVar5 = (uVar4 & 0x1f) - uVar9;
    if (iVar5 != 0) {
      FVar8 = (this->VisitedEdges).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar8 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  (this->EdgeChain).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->EdgeChain).ArrayNum = 0;
  (this->EdgeChain).ArrayMax = 0x10;
  this->Graph = param_1;
  if ((param_1->bHasDanglingEdges != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Graph->bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x5a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDiscoverCyclicEdges *)(*pcVar2)();
    return pFVar6;
  }
  return this;
}

// DiscoverCycles @ 14612ca90

void __thiscall
UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::DiscoverCycles
          (FDiscoverCyclicEdges *this,ushort param_1,TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  int *piVar1;
  uint *puVar2;
  void *_Dst;
  ushort uVar3;
  FDirectedGraph *pFVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_short> FVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<unsigned_short> FVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<unsigned_short> FVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 local_38 [8];
  
  pFVar4 = this->Graph;
  uVar12 = 0;
  uVar13 = (pFVar4->SortedEdges).ArrayNum;
  if (0 < (int)uVar13) {
    do {
      uVar15 = uVar13 >> 1;
      if (*(ushort *)
           ((pFVar4->SortedEdges).AllocatorInstance.Data + (longlong)(int)(uVar15 + uVar12) * 4) <
          param_1) {
        uVar12 = uVar15 + uVar12 + (uVar13 & 1);
      }
      uVar13 = uVar15;
    } while (uVar15 != 0);
  }
  if ((int)uVar12 < (pFVar4->SortedEdges).ArrayNum) {
    do {
      pFVar4 = this->Graph;
      uVar13 = 0;
      if ((int)uVar12 < (pFVar4->SortedEdges).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(ushort *)((pFVar4->SortedEdges).AllocatorInstance.Data + (longlong)(int)uVar12 * 4) !=
          param_1) {
        return;
      }
      if ((((int)uVar12 < 0) || ((this->VisitedEdges).NumBits <= (int)uVar12)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (this->VisitedEdges).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)&this->VisitedEdges;
      if (FVar5 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar5;
      }
      lVar16 = (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5);
      if ((*(uint *)((longlong)FVar10 + lVar16 * 4) >> (uVar12 & 0x1f) & 1) == 0) {
        if ((((int)uVar12 < 0) || ((this->VisitedEdges).NumBits <= (int)uVar12)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (this->VisitedEdges).AllocatorInstance.SecondaryData;
        local_38[0] = (undefined2)uVar12;
        FVar10 = (ForElementType<unsigned_int>)&this->VisitedEdges;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar5;
        }
        puVar2 = (uint *)((longlong)FVar10 + lVar16 * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar12 & 0x1f);
        FVar11 = (this->EdgeChain).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_short>)&this->EdgeChain;
        FVar9 = FVar14;
        if (FVar11 != (ForElementType<unsigned_short>)0x0) {
          FVar9 = FVar11;
        }
        if ((ulonglong)FVar9 <= local_38) {
          FVar9 = FVar14;
          if (FVar11 != (ForElementType<unsigned_short>)0x0) {
            FVar9 = FVar11;
          }
          if ((local_38 < (undefined2 *)((longlong)FVar9 + (longlong)(this->EdgeChain).ArrayMax * 2)
              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = (this->EdgeChain).ArrayNum;
        piVar1 = &(this->EdgeChain).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                            (0x202,(ForElementType<unsigned_short> *)FVar14,piVar1);
        }
        (this->EdgeChain).ArrayNum = iVar8 + 1;
        FVar11 = (this->EdgeChain).AllocatorInstance.SecondaryData;
        if (FVar11 != (ForElementType<unsigned_short>)0x0) {
          FVar14 = FVar11;
        }
        *(undefined2 *)((longlong)FVar14 + (longlong)iVar8 * 2) = local_38[0];
        pFVar4 = this->Graph;
        uVar13 = 0;
        if ((int)uVar12 < (pFVar4->SortedEdges).ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(ushort *)
                 ((pFVar4->SortedEdges).AllocatorInstance.Data + (longlong)(int)uVar12 * 4 + 2);
        if ((param_2->NumBits <= (int)(uint)uVar3) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)param_2;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar5;
        }
        uVar13 = 1 << ((byte)uVar3 & 0x1f);
        if ((*(uint *)((longlong)FVar10 + (ulonglong)(uVar3 >> 5) * 4) & uVar13) == 0) {
          if ((param_2->NumBits <= (int)(uint)uVar3) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (param_2->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)param_2;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar5;
          }
          puVar2 = (uint *)((ulonglong)(uVar3 >> 5) * 4 + (longlong)FVar10);
          *puVar2 = *puVar2 | uVar13;
          DiscoverCycles(this,uVar3,param_2);
          if ((param_2->NumBits <= (int)(uint)uVar3) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (param_2->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)param_2;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar5;
          }
          puVar2 = (uint *)((longlong)FVar10 + (ulonglong)(uVar3 >> 5) * 4);
          *puVar2 = *puVar2 & ~(1 << ((byte)uVar3 & 0x1f));
        }
        else {
          TagCyclicChain(this,uVar3);
        }
        if (((this->EdgeChain).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar14 = (this->EdgeChain).AllocatorInstance.SecondaryData;
        iVar8 = (this->EdgeChain).ArrayNum;
        FVar11 = (ForElementType<unsigned_short>)&this->EdgeChain;
        if (FVar14 != (ForElementType<unsigned_short>)0x0) {
          FVar11 = FVar14;
        }
        uVar13 = iVar8 - 1;
        _Dst = (void *)((longlong)FVar11 + (longlong)(int)uVar13 * 2);
        iVar8 = ~uVar13 + iVar8;
        if (iVar8 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 2),(longlong)iVar8 * 2);
        }
        iVar8 = (this->EdgeChain).ArrayNum + -1;
        (this->EdgeChain).ArrayNum = iVar8;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                  (2,2,&(this->EdgeChain).AllocatorInstance,iVar8,&(this->EdgeChain).ArrayMax);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->Graph->SortedEdges).ArrayNum);
  }
  return;
}

// Search @ 146153b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::Search(FDiscoverCyclicEdges *this)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ForElementType<unsigned_short> FVar4;
  FDirectedGraph *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_short> FVar9;
  ulonglong uVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  ForElementType<unsigned_short> FVar14;
  uint uVar15;
  undefined1 auStackY_98 [32];
  ushort local_48 [4];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_48[0] = 0;
  if (0 < (this->Graph->SortedEdges).ArrayNum) {
    uVar10 = 0;
    do {
      if (((this->VisitedEdges).NumBits <= (int)(uint)uVar10) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar11 = (this->VisitedEdges).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<unsigned_int>)&this->VisitedEdges;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = FVar11;
      }
      if ((*(uint *)((longlong)FVar12 + (uVar10 >> 5) * 4) >> ((uint)uVar10 & 0x1f) & 1) == 0) {
        FVar14 = (ForElementType<unsigned_short>)&this->EdgeChain;
        iVar8 = (this->EdgeChain).ArrayMax;
        piVar1 = &(this->EdgeChain).ArrayMax;
        (this->EdgeChain).ArrayNum = 0;
        if (iVar8 < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                    (2,2,0,(ForElementType<unsigned_short> *)FVar14,0,piVar1);
          iVar8 = *piVar1;
        }
        FVar4 = (this->EdgeChain).AllocatorInstance.SecondaryData;
        FVar9 = FVar14;
        if (FVar4 != (ForElementType<unsigned_short>)0x0) {
          FVar9 = FVar4;
        }
        if ((ulonglong)FVar9 <= local_48) {
          FVar9 = FVar14;
          if (FVar4 != (ForElementType<unsigned_short>)0x0) {
            FVar9 = FVar4;
          }
          if ((local_48 < (ushort *)((longlong)FVar9 + (longlong)iVar8 * 2)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = (this->EdgeChain).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                            (0x202,(ForElementType<unsigned_short> *)FVar14,piVar1);
        }
        (this->EdgeChain).ArrayNum = iVar8 + 1;
        FVar4 = (this->EdgeChain).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<unsigned_short>)0x0) {
          FVar14 = FVar4;
        }
        *(ushort *)((longlong)FVar14 + (longlong)iVar8 * 2) = local_48[0];
        pFVar5 = this->Graph;
        uVar10 = (ulonglong)local_48[0];
        if (((pFVar5->SortedEdges).ArrayNum <= (int)(uint)local_48[0]) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(ushort *)((pFVar5->SortedEdges).AllocatorInstance.Data + uVar10 * 4);
        local_40.NumBits = (this->Graph->Nodes).NumBits;
        local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_40.MaxBits = 0x80;
        uVar15 = local_40.NumBits + 0x1f;
        uVar13 = uVar15 >> 5;
        if (uVar15 >> 5 != 0) {
          if (4 < uVar13) {
            TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
            ResizeAllocation(&local_40.AllocatorInstance,0,uVar13,4);
            local_40.MaxBits = uVar13 << 5;
          }
          FVar11 = (ForElementType<unsigned_int>)&local_40;
          if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_40.AllocatorInstance.SecondaryData;
          }
          memset((void *)FVar11,0,(ulonglong)uVar13 << 2);
          uVar15 = local_40.NumBits & 0x8000001f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
          }
          if (uVar15 != 0) {
            FVar11 = (ForElementType<unsigned_int>)&local_40;
            if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_40.AllocatorInstance.SecondaryData;
            }
            puVar2 = (uint *)((longlong)FVar11 +
                             (longlong)
                             ((int)(local_40.NumBits + (local_40.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
                             );
            *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar15 & 0x1f);
          }
        }
        if ((local_40.NumBits <= (int)(uint)uVar3) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar11 = (ForElementType<unsigned_int>)&local_40;
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar11 = local_40.AllocatorInstance.SecondaryData;
        }
        puVar2 = (uint *)((longlong)FVar11 + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
        DiscoverCycles(this,uVar3,&local_40);
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
        }
        uVar3 = local_48[0];
        if (((this->VisitedEdges).NumBits <= (int)(uint)local_48[0]) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar11 = (this->VisitedEdges).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)&this->VisitedEdges;
        if (FVar11 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar11;
        }
        puVar2 = (uint *)((longlong)FVar12 + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      }
      local_48[0] = local_48[0] + 1;
      uVar10 = (ulonglong)local_48[0];
    } while ((int)(uint)local_48[0] < (this->Graph->SortedEdges).ArrayNum);
  }
  return;
}

// SearchFrom @ 146153f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::SearchFrom
          (FDiscoverCyclicEdges *this,ushort param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  TBitArray<FDefaultBitArrayAllocator> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.NumBits = (this->Graph->Nodes).NumBits;
  local_38.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_38.MaxBits = 0x80;
  uVar6 = local_38.NumBits + 0x1f;
  uVar5 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar5) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_38.AllocatorInstance,0,uVar5,4);
      local_38.MaxBits = uVar5 << 5;
    }
    FVar4 = (ForElementType<unsigned_int>)&local_38;
    if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar4 = local_38.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar4,0,(ulonglong)uVar5 << 2);
    uVar6 = local_38.NumBits & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    if (uVar6 != 0) {
      FVar4 = (ForElementType<unsigned_int>)&local_38;
      if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar4 = local_38.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar4 +
                       (longlong)((int)(local_38.NumBits + (local_38.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar6 & 0x1f);
    }
  }
  if ((local_38.NumBits <= (int)(uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar4 = (ForElementType<unsigned_int>)&local_38;
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar4 = local_38.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)FVar4 + (ulonglong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  DiscoverCycles(this,param_1,&local_38);
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  return;
}

// TagCyclicChain @ 146155a80

void __thiscall
UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::TagCyclicChain
          (FDiscoverCyclicEdges *this,ushort param_1)

{
  uint *puVar1;
  ushort uVar2;
  ForElementType<unsigned_short> FVar3;
  ForElementType<unsigned_int> FVar4;
  FDirectedGraph *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<unsigned_short> FVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  
  uVar12 = (this->EdgeChain).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 * 2;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->EdgeChain).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar3 = (this->EdgeChain).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<unsigned_short>)&this->EdgeChain;
      if (FVar3 != (ForElementType<unsigned_short>)0x0) {
        FVar10 = FVar3;
      }
      uVar2 = *(ushort *)(lVar14 + (longlong)FVar10);
      iVar13 = ((uint)uVar2 - (this->CyclicEdges).NumBits) + 1;
      if (0 < iVar13) {
        iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->CyclicEdges,iVar13);
        TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->CyclicEdges,iVar9,iVar13,false);
      }
      if (((this->CyclicEdges).NumBits <= (int)(uint)uVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (this->CyclicEdges).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<unsigned_int>)this;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = FVar4;
      }
      puVar1 = (uint *)((longlong)FVar11 + (ulonglong)(uVar2 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
      pFVar5 = this->Graph;
      if (((pFVar5->SortedEdges).ArrayNum <= (int)(uint)uVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(ushort *)((pFVar5->SortedEdges).AllocatorInstance.Data + (ulonglong)uVar2 * 4) ==
          param_1) {
        return;
      }
      lVar14 = lVar14 + -2;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

