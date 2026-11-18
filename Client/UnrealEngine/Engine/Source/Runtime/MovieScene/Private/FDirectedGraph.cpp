// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 19

// AllocateNode @ 146124990

void __thiscall UE::MovieScene::FDirectedGraph::AllocateNode(FDirectedGraph *this,ushort param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  CleanUpDanglingEdges(this);
  iVar6 = ((uint)param_1 - (this->Nodes).NumBits) + 1;
  if (0 < iVar6) {
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->Nodes,iVar6);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->Nodes,iVar5,iVar6,false);
  }
  if ((this->Nodes).NumBits <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (this->Nodes).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (FDirectedGraph *)FVar2;
  }
  puVar1 = (uint *)((longlong)this + (ulonglong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}

// CleanUpDanglingEdges @ 146126b10

void __thiscall UE::MovieScene::FDirectedGraph::CleanUpDanglingEdges(FDirectedGraph *this)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  if (this->bHasDanglingEdges != false) {
    uVar8 = 0;
    this->bHasDanglingEdges = false;
    if (0 < (this->SortedEdges).ArrayNum) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->SortedEdges).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)((this->SortedEdges).AllocatorInstance.Data + lVar7);
        if ((int)(uVar5 >> 0x10) < (this->Nodes).NumBits) {
          FVar2 = (this->Nodes).AllocatorInstance.SecondaryData;
          FVar6 = (ForElementType<unsigned_int>)this;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar6 = FVar2;
          }
          if (((*(uint *)((longlong)FVar6 + (ulonglong)(uVar5 >> 0x15) * 4) >>
                (uVar5 >> 0x10 & 0x1f) & 1) == 0) ||
             ((this->Nodes).NumBits <= (int)(uVar5 & 0xffff))) goto LAB_146126bf6;
          FVar2 = (this->Nodes).AllocatorInstance.SecondaryData;
          FVar6 = (ForElementType<unsigned_int>)this;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar6 = FVar2;
          }
          if ((*(uint *)((longlong)FVar6 + (ulonglong)((uVar5 & 0xffff) >> 5) * 4) >> (uVar5 & 0x1f)
              & 1) == 0) goto LAB_146126bf6;
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 4;
        }
        else {
LAB_146126bf6:
          uVar5 = 0;
          if ((int)uVar8 < (this->SortedEdges).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = (this->SortedEdges).AllocatorInstance.Data + (longlong)(int)uVar8 * 4;
          iVar9 = ~uVar8 + (this->SortedEdges).ArrayNum;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + 4,(longlong)iVar9 << 2);
          }
          piVar1 = &(this->SortedEdges).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
      } while ((int)uVar8 < (this->SortedEdges).ArrayNum);
    }
  }
  return;
}

// DestroyAllEdges @ 14612b2c0

void __thiscall UE::MovieScene::FDirectedGraph::DestroyAllEdges(FDirectedGraph *this)

{
  (this->SortedEdges).ArrayNum = 0;
  if ((this->SortedEdges).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,0,&(this->SortedEdges).AllocatorInstance,0,&(this->SortedEdges).ArrayMax);
    this->bHasDanglingEdges = false;
    return;
  }
  this->bHasDanglingEdges = false;
  return;
}

// DestroyEdge @ 14612b400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MovieScene::FDirectedGraph::DestroyEdge(FDirectedGraph *this,ushort param_1,ushort param_2)

{
  TLess<void> TVar1;
  int iVar2;
  FDirectionalEdge local_res10 [6];
  
  local_res10[0].FromNode._0_1_ = SUB21(param_1,0);
  TVar1 = local_res10[0].FromNode._0_1_;
  local_res10[0].FromNode = param_1;
  local_res10[0].ToNode = param_2;
  iVar2 = Algo::
          BinarySearch<TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>,UE::MovieScene::FDirectedGraph::FDirectionalEdge,TLess<void>_>
                    (&this->SortedEdges,local_res10,TVar1);
  if (iVar2 != -1) {
    TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->SortedEdges,iVar2,No);
    return;
  }
  return;
}

// EdgeExists @ 14612f4a0

bool __thiscall
UE::MovieScene::FDirectedGraph::EdgeExists(FDirectedGraph *this,FDirectionalEdge *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (this->bHasDanglingEdges != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasDanglingEdges",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                       ,0x158,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FindEdgeIndex(this,param_1);
  if (iVar5 < (this->SortedEdges).ArrayNum) {
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->SortedEdges).AllocatorInstance.Data + (longlong)iVar5 * 4;
    if ((*(ushort *)pFVar1 == param_1->FromNode) && (*(ushort *)(pFVar1 + 2) == param_1->ToNode)) {
      return true;
    }
  }
  return false;
}

// FindEdgeIndex @ 146131170

int __thiscall
UE::MovieScene::FDirectedGraph::FindEdgeIndex(FDirectedGraph *this,FDirectionalEdge *param_1)

{
  int iVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  if (this->bHasDanglingEdges != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasDanglingEdges",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                       ,0x152,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  uVar8 = (this->SortedEdges).ArrayNum;
  iVar7 = 0;
  pFVar3 = (this->SortedEdges).AllocatorInstance.Data;
  if (0 < (int)uVar8) {
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      uVar2 = *(ushort *)(pFVar3 + (longlong)iVar1 * 4);
      bVar6 = uVar2 < param_1->FromNode;
      if (uVar2 == param_1->FromNode) {
        bVar6 = *(ushort *)(pFVar3 + (longlong)iVar1 * 4 + 2) < param_1->ToNode;
      }
      if (bVar6) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar5 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar5 != 0);
  }
  return iVar7;
}

// FindEdgeStart @ 146131230

int __thiscall UE::MovieScene::FDirectedGraph::FindEdgeStart(FDirectedGraph *this,ushort param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = (this->SortedEdges).ArrayNum;
  if (0 < (int)uVar4) {
    do {
      iVar1 = (uVar4 >> 1) + iVar3;
      if (*(ushort *)((this->SortedEdges).AllocatorInstance.Data + (longlong)iVar1 * 4) < param_1) {
        iVar3 = iVar1 + (uVar4 & 1);
      }
      uVar2 = uVar4 >> 1;
      uVar4 = uVar4 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// FindEdgeUpstreamNodes @ 146131280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBitArray<FDefaultBitArrayAllocator> * __thiscall
UE::MovieScene::FDirectedGraph::FindEdgeUpstreamNodes
          (FDirectedGraph *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  int _Val;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  undefined1 auStackY_78 [32];
  <lambda_1> local_48 [8];
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((this->bHasDanglingEdges != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x141,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
    return pTVar5;
  }
  local_40.NumBits = (this->Nodes).NumBits;
  uVar6 = 0;
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.MaxBits = 0x80;
  uVar10 = local_40.NumBits + 0x1f;
  uVar8 = uVar10 >> 5;
  if (uVar10 >> 5 != 0) {
    if (4 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_40.AllocatorInstance,0,uVar8,4);
      local_40.MaxBits = uVar8 << 5;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_40;
    if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_40.AllocatorInstance.SecondaryData;
    }
    if (uVar8 < 9) {
      _Val = -1;
    }
    else {
      _Val = 0xff;
    }
    memset((void *)FVar7,_Val,(ulonglong)uVar8 << 2);
    uVar10 = local_40.NumBits & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    if (uVar10 != 0) {
      FVar7 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_40.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(local_40.NumBits + (local_40.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
    }
  }
  uVar9 = 0;
  if (0 < (this->SortedEdges).ArrayNum) {
    do {
      if (((this->SortedEdges).ArrayNum <= (int)uVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
        return pTVar5;
      }
      uVar2 = *(ushort *)((this->SortedEdges).AllocatorInstance.Data + (ulonglong)uVar9 * 4 + 2);
      if ((local_40.NumBits <= (int)(uint)uVar2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
        return pTVar5;
      }
      FVar7 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_40.AllocatorInstance.SecondaryData;
      }
      uVar9 = uVar9 + 1;
      puVar1 = (uint *)((longlong)FVar7 + (ulonglong)(uVar2 >> 5) * 4);
      uVar6 = (uint)uVar9;
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
    } while ((int)(uint)uVar9 < (this->SortedEdges).ArrayNum);
  }
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0x80;
  Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&local_40,&this->Nodes,__return_storage_ptr__,MaxSize,local_48);
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// GetEdges @ 14613a6a0

TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> * __thiscall
UE::MovieScene::FDirectedGraph::GetEdges
          (FDirectedGraph *this,
          TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> *pTVar4;
  
  if (this->bHasDanglingEdges != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasDanglingEdges",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                       ,0x11c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  iVar1 = (this->SortedEdges).ArrayNum;
  __return_storage_ptr__->DataPtr = (FDirectionalEdge *)(this->SortedEdges).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetEdgesFrom @ 14613a730

TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> * __thiscall
UE::MovieScene::FDirectedGraph::GetEdgesFrom
          (FDirectedGraph *this,
          TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int>
          *__return_storage_ptr__,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> *pTVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  if ((this->bHasDanglingEdges != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x12e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  uVar6 = (this->SortedEdges).ArrayNum;
  uVar8 = 0;
  if (0 < (int)uVar6) {
    do {
      iVar9 = (uVar6 >> 1) + uVar8;
      if (*(ushort *)((this->SortedEdges).AllocatorInstance.Data + (longlong)iVar9 * 4) < param_1) {
        uVar8 = iVar9 + (uVar6 & 1);
      }
      uVar4 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar4 != 0);
  }
  iVar9 = 0;
  if ((int)uVar8 < (this->SortedEdges).ArrayNum) {
    lVar7 = (longlong)(int)uVar8 * 4;
    uVar6 = uVar8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->SortedEdges).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> *)
                 (*pcVar2)();
        return pTVar5;
      }
      if (*(ushort *)((this->SortedEdges).AllocatorInstance.Data + lVar7) != param_1) break;
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < (this->SortedEdges).ArrayNum);
  }
  if (iVar9 < 1) {
    __return_storage_ptr__->DataPtr = (FDirectionalEdge *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = (this->SortedEdges).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar9;
  __return_storage_ptr__->DataPtr = (FDirectionalEdge *)(pFVar1 + (longlong)(int)uVar8 * 4);
  return __return_storage_ptr__;
}

// HasEdgeFrom @ 14613daf0

bool __thiscall UE::MovieScene::FDirectedGraph::HasEdgeFrom(FDirectedGraph *this,ushort param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = (this->SortedEdges).ArrayNum;
  uVar6 = 0;
  uVar7 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar8 = uVar7 >> 1;
      iVar5 = uVar8 + (int)uVar6;
      if (*(ushort *)((this->SortedEdges).AllocatorInstance.Data + (longlong)iVar5 * 4) < param_1) {
        uVar6 = (ulonglong)(iVar5 + (uVar7 & 1));
      }
      uVar7 = uVar8;
    } while (uVar8 != 0);
    if ((int)uVar6 < 0) {
      return false;
    }
  }
  if ((int)uVar6 < (int)uVar1) {
    if (((int)uVar6 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(ushort *)((this->SortedEdges).AllocatorInstance.Data + uVar6 * 4) == param_1) {
      return true;
    }
  }
  return false;
}

// HasEdgeTo @ 14613dbc0

bool __thiscall UE::MovieScene::FDirectedGraph::HasEdgeTo(FDirectedGraph *this,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if (param_1 == 0xffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNode != TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                       ,0x128,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar6 = (this->SortedEdges).AllocatorInstance.Data;
  iVar2 = (this->SortedEdges).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->SortedEdges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    if (*(ushort *)(pFVar6 + 2) == param_1) goto LAB_14613dc36;
    pFVar6 = pFVar6 + 4;
  }
  pFVar6 = (FScriptContainerElement *)0x0;
LAB_14613dc36:
  return pFVar6 != (FScriptContainerElement *)0x0;
}

// IsCyclic @ 146140cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::MovieScene::FDirectedGraph::IsCyclic(FDirectedGraph *this)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  <lambda_1> local_67 [3];
  undefined4 local_64;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_60.NumBits = (this->Nodes).NumBits;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.MaxBits = 0x80;
  uVar10 = local_60.NumBits + 0x1f;
  uVar8 = uVar10 >> 5;
  if (uVar10 >> 5 != 0) {
    if (4 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_60.AllocatorInstance,0,uVar8,4);
      local_60.MaxBits = uVar8 << 5;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_60.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar7,0,(ulonglong)uVar8 << 2);
    uVar10 = local_60.NumBits & 0x8000001f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
    }
    if (uVar10 != 0) {
      FVar7 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar7 = local_60.AllocatorInstance.SecondaryData;
      }
      puVar1 = (uint *)((longlong)FVar7 +
                       (longlong)((int)(local_60.NumBits + (local_60.NumBits >> 0x1f & 0x1fU)) >> 5)
                       * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
    }
  }
  pFVar9 = (this->SortedEdges).AllocatorInstance.Data;
  iVar3 = (this->SortedEdges).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar3 * 4;
  do {
    if ((this->SortedEdges).ArrayNum != iVar3) {
      local_68 = 0;
      `TCheckedPointerIterator<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_68);
    }
    if (pFVar9 == pFVar2) {
      bVar5 = false;
      goto LAB_146140f35;
    }
    uVar10 = *(uint *)pFVar9;
    local_64 = uVar10;
    if ((local_60.NumBits <= (int)(uVar10 >> 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FVar7 = (ForElementType<unsigned_int>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar7 = local_60.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar7 + (ulonglong)(uVar10 >> 0x15) * 4) >> (uVar10 >> 0x10 & 0x1f) & 1
        ) == 0) {
      local_40.NumBits = (this->Nodes).NumBits;
      local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_40.MaxBits = 0x80;
      uVar10 = local_40.NumBits + 0x1fU >> 5;
      if (local_40.NumBits + 0x1fU >> 5 != 0) {
        if (4 < uVar10) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_40.AllocatorInstance,0,uVar10,4);
          local_40.MaxBits = uVar10 << 5;
        }
        FVar7 = (ForElementType<unsigned_int>)&local_40;
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_40.AllocatorInstance.SecondaryData;
        }
        memset((void *)FVar7,0,(ulonglong)uVar10 << 2);
        uVar10 = local_40.NumBits & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        if (uVar10 != 0) {
          FVar7 = (ForElementType<unsigned_int>)&local_40;
          if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar7 = local_40.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar7 +
                           (longlong)
                           ((int)(local_40.NumBits + (local_40.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar10 & 0x1f);
        }
      }
      bVar5 = IsCyclicImpl(this,local_64._2_2_,&local_40);
      if (bVar5) {
        if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
        }
        bVar5 = true;
LAB_146140f35:
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
        }
        return bVar5;
      }
      Core::Private::
      BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                (&local_40,&local_60,MaxSize,local_67);
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
      }
    }
    pFVar9 = pFVar9 + 4;
  } while( true );
}

// IsCyclicImpl @ 146140f80

bool __thiscall
UE::MovieScene::FDirectedGraph::IsCyclicImpl
          (FDirectedGraph *this,ushort param_1,TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  FDirectionalEdge *pFVar9;
  uint uVar10;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_28;
  
  uVar8 = (uint)param_1;
  if ((param_2->NumBits <= (int)uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<unsigned_int>)param_2;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FVar7 = FVar3;
  }
  uVar10 = 1 << ((byte)param_1 & 0x1f);
  lVar2 = (ulonglong)(param_1 >> 5) * 4;
  if ((*(uint *)(lVar2 + (longlong)FVar7) & uVar10) == 0) {
    if ((param_2->NumBits <= (int)uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)param_2;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar3;
    }
    puVar1 = (uint *)(lVar2 + (longlong)FVar7);
    *puVar1 = *puVar1 | uVar10;
    GetEdgesFrom(this,&local_28,param_1);
    for (pFVar9 = local_28.DataPtr; pFVar9 != local_28.DataPtr + local_28.ArrayNum;
        pFVar9 = pFVar9 + 1) {
      bVar5 = IsCyclicImpl(this,pFVar9->ToNode,param_2);
      if (bVar5) goto LAB_1461410d4;
    }
    if ((param_2->NumBits <= (int)uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      param_2 = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
    }
    puVar1 = (uint *)((longlong)param_2 + (ulonglong)(param_1 >> 5) * 4);
    *puVar1 = *puVar1 & ~uVar10;
    bVar5 = false;
  }
  else {
LAB_1461410d4:
    bVar5 = true;
  }
  return bVar5;
}

// IsNodeAllocated @ 146141280

bool __thiscall UE::MovieScene::FDirectedGraph::IsNodeAllocated(FDirectedGraph *this,ushort param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  if ((int)(uint)param_1 < (this->Nodes).NumBits) {
    FVar1 = (this->Nodes).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      this = (FDirectedGraph *)FVar1;
    }
    if ((*(uint *)((longlong)this + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// MakeEdge @ 146142af0

void __thiscall
UE::MovieScene::FDirectedGraph::MakeEdge(FDirectedGraph *this,ushort param_1,ushort param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDirectionalEdge *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  FDirectionalEdge local_18 [4];
  
  local_18[0].ToNode = param_2;
  local_18[0].FromNode = param_1;
  uVar6 = FindEdgeIndex(this,local_18);
  lVar10 = (longlong)(int)uVar6;
  if ((-1 < (int)uVar6) && ((int)uVar6 < (this->SortedEdges).ArrayNum)) {
    uVar7 = 0;
    if ((int)uVar6 < (this->SortedEdges).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->SortedEdges).AllocatorInstance.Data + lVar10 * 4;
    if ((*(ushort *)pFVar2 == local_18[0].FromNode) &&
       (*(ushort *)(pFVar2 + 2) == local_18[0].ToNode)) {
      return;
    }
  }
  pTVar9 = &this->SortedEdges;
  pFVar3 = (FDirectionalEdge *)(pTVar9->AllocatorInstance).Data;
  if (((pFVar3 <= local_18) && (local_18 < pFVar3 + (this->SortedEdges).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (this->SortedEdges).ArrayNum;
  piVar1 = &(this->SortedEdges).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x204,&pTVar9->AllocatorInstance,piVar1);
    (this->SortedEdges).ArrayNum = iVar8;
  }
  (this->SortedEdges).ArrayNum = iVar8 + 1;
  pFVar2 = (pTVar9->AllocatorInstance).Data + lVar10 * 4;
  memmove(pFVar2 + 4,pFVar2,(longlong)(int)(iVar8 - uVar6) << 2);
  *(FDirectionalEdge *)((pTVar9->AllocatorInstance).Data + lVar10 * 4) = local_18[0];
  return;
}

// RemoveNode @ 146150620

void __thiscall UE::MovieScene::FDirectedGraph::RemoveNode(FDirectedGraph *this,ushort param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((param_1 != 0xffff) && ((int)(uint)param_1 < (this->Nodes).NumBits)) {
    FVar2 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar5 = FVar2;
    }
    if ((*(uint *)((longlong)FVar5 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0)
    goto LAB_146150689;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("NodeID != TNumericLimits<uint16>::Max() && IsNodeAllocated(NodeID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                     ,0xaf,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146150689:
  if ((this->Nodes).NumBits <= (int)(uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (this->Nodes).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar2;
  }
  puVar1 = (uint *)((longlong)FVar5 + (ulonglong)(param_1 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  this->bHasDanglingEdges = true;
  return;
}

// ToString @ 146156270

FString * __thiscall
UE::MovieScene::FDirectedGraph::ToString
          (FDirectedGraph *this,FString *__return_storage_ptr__,
          FDirectedGraphStringParameters *param_1)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::MovieScene::FDirectedGraph::ToString'::__l2::<lambda_1>,void,unsigned_short,TStringBuilderBase<wchar_t>_&>
             ::Call;
  ToString(this,__return_storage_ptr__,param_1,
           (TFunctionRef<void___cdecl(unsigned_short,TStringBuilderBase<wchar_t>_&)> *)&local_18);
  return __return_storage_ptr__;
}

// ToString @ 1461562b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::MovieScene::FDirectedGraph::ToString
          (FDirectedGraph *this,FString *__return_storage_ptr__,
          FDirectedGraphStringParameters *param_1,
          TFunctionRef<void___cdecl(unsigned_short,TStringBuilderBase<wchar_t>_&)> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  FString *pFVar7;
  longlong lVar8;
  uint uVar9;
  ulong64 uVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<unsigned_int> FVar18;
  undefined1 auStack_378 [32];
  wchar_t *local_358;
  longlong local_350;
  undefined2 local_348 [4];
  undefined4 local_340;
  FString local_338;
  int local_328;
  int local_324;
  FString *local_320;
  FString local_318;
  undefined4 local_308;
  undefined4 uStack_304;
  int iStack_300;
  int iStack_2fc;
  TStringBuilderBase<wchar_t> local_2f8;
  wchar_t local_2d8 [256];
  FDiscoverCyclicEdges local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_2f8.Base = local_2d8;
  local_2f8.CurPos = local_2d8;
  local_2f8.bIsDynamic = false;
  local_2f8.bIsExternal = false;
  local_2f8.End = (wchar_t *)&local_d8;
  local_320 = __return_storage_ptr__;
  pvVar6 = FGenericPlatformString::Memcpy(local_2d8,L"\ndigraph FDirectedGraph {\n",0x34);
  local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x34);
  if (local_2f8.End < (FDiscoverCyclicEdges *)((longlong)pvVar6 + 0x74U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,0x20);
  }
  pvVar6 = FGenericPlatformString::Memcpy
                     (local_2f8.CurPos,L"\tnode [shape=record,height=.1];\n",0x40);
  local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x40);
  if (local_2f8.End < (FDiscoverCyclicEdges *)((longlong)pvVar6 + 0x78U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,0x1c);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\tsubgraph cluster_flow_0\n\t{\n",0x38)
  ;
  local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x38);
  if ((param_1->ClusterName).Size != 0) {
    if (local_2f8.End < (FDiscoverCyclicEdges *)((longlong)pvVar6 + 0x48U)) {
      TStringBuilderBase<wchar_t>::Extend(&local_2f8,8);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\tlabel=\"",0x10);
    local_338.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&(param_1->ClusterName).DataPtr;
    local_338.Data.AllocatorInstance.Data._4_4_ =
         *(undefined4 *)((longlong)&(param_1->ClusterName).DataPtr + 4);
    local_338.Data.ArrayNum = (param_1->ClusterName).Size;
    local_338.Data.ArrayMax = *(int *)&(param_1->ClusterName).field_0xc;
    iVar13 = (int)*(undefined8 *)&(param_1->ClusterName).Size;
    uVar10 = (ulong64)iVar13;
    local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x10);
    local_308 = local_338.Data.AllocatorInstance.Data._0_4_;
    uStack_304 = local_338.Data.AllocatorInstance.Data._4_4_;
    iStack_300 = local_338.Data.ArrayNum;
    iStack_2fc = local_338.Data.ArrayMax;
    if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + uVar10)) {
      TStringBuilderBase<wchar_t>::Extend(&local_2f8,uVar10);
    }
    if (iVar13 != 0) {
      pvVar6 = FGenericPlatformString::Memcpy
                         (local_2f8.CurPos,
                          (void *)CONCAT44(local_338.Data.AllocatorInstance.Data._4_4_,
                                           local_338.Data.AllocatorInstance.Data._0_4_),uVar10 * 2);
      local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar10 * 2);
    }
    if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + 3)) {
      TStringBuilderBase<wchar_t>::Extend(&local_2f8,3);
    }
    pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\";\n",6);
    local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 6);
  }
  if ((FColor_u_0)(param_1->Color).field0_0x0.Bits != FColor::White.field0_0x0) {
    FColor::ToHex(&param_1->Color,&local_318);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_2f8,L"\tcolor=\"%s\";\n");
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + 3)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,3);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\t}\n",6);
  iVar12 = 0;
  iVar16 = 0;
  uVar4 = 1;
  local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 6);
  iVar13 = (this->Nodes).NumBits;
  iVar5 = 0;
  if (iVar13 != 0) {
    FVar18 = (this->Nodes).AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<unsigned_int>)this;
    if (FVar18 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar18;
    }
    uVar14 = *(uint *)FVar17;
    while (uVar14 == 0) {
      lVar8 = (longlong)iVar12;
      iVar16 = iVar16 + 0x20;
      iVar12 = iVar12 + 1;
      iVar5 = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14615655d;
      uVar14 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar8 * 4);
    }
    uVar4 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_328 = (int)lVar8;
    iVar5 = iVar16 + -1 + local_328;
    if (iVar13 < iVar5) {
      iVar5 = iVar13;
    }
  }
LAB_14615655d:
  if (iVar5 < iVar13) {
    uVar14 = 0xffffffff;
    do {
      if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + 0x10)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2f8,0x10);
      }
      pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\t\tnode%d[label=\"",0x20);
      local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 0x20);
      local_348[0] = (undefined2)iVar5;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_348,&local_2f8);
      if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + 4)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2f8,4);
      }
      pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\"];\n",8);
      local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 8);
      iVar13 = (this->Nodes).NumBits;
      uVar14 = uVar14 & ~uVar4;
      FVar18 = (this->Nodes).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)this;
      if (FVar18 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar18;
      }
      uVar9 = uVar14 & *(uint *)((longlong)FVar17 + (longlong)iVar12 * 4);
      while (uVar9 == 0) {
        lVar8 = (longlong)iVar12;
        iVar16 = iVar16 + 0x20;
        iVar12 = iVar12 + 1;
        iVar5 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146156674;
        uVar14 = 0xffffffff;
        uVar9 = *(uint *)((uchar *)((longlong)FVar17 + 4) + lVar8 * 4);
      }
      uVar4 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uVar4 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_324 = (int)lVar8;
      iVar5 = iVar16 + -1 + local_324;
      if (iVar13 < iVar5) {
        iVar5 = iVar13;
      }
LAB_146156674:
    } while (iVar5 < iVar13);
  }
  if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + 4)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,4);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"\t}\n\n",8);
  local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 8);
  FDiscoverCyclicEdges::FDiscoverCyclicEdges(&local_d8,this);
  FDiscoverCyclicEdges::Search(&local_d8);
  if ((this->bHasDanglingEdges != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x11c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  pFVar15 = (this->SortedEdges).AllocatorInstance.Data;
  iVar13 = (this->SortedEdges).ArrayNum;
  if ((iVar13 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  uVar4 = 0;
  if (0 < iVar13) {
    lVar8 = 0;
    do {
      if (((int)uVar4 < 0) &&
         (local_358 = (wchar_t *)lVar8, local_350 = (longlong)iVar13,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      local_340 = *(undefined4 *)pFVar15;
      if ((int)(uVar4 & 0xffff) < local_d8.CyclicEdges.NumBits) {
        FVar18 = (ForElementType<unsigned_int>)&local_d8;
        if (local_d8.CyclicEdges.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_d8.CyclicEdges.AllocatorInstance.SecondaryData;
        }
        bVar3 = true;
        if ((*(uint *)((longlong)FVar18 + (ulonglong)((uVar4 & 0xffff) >> 5) * 4) >> (uVar4 & 0x1f)
            & 1) == 0) goto LAB_1461567d7;
      }
      else {
LAB_1461567d7:
        bVar3 = false;
      }
      local_358 = L"#3992ad";
      if (bVar3) {
        local_358 = L"#FF0000";
      }
      ::FString::PrintfImpl(&local_338,L"\tnode%d -> node%d [color=\"%s\"];\n");
      pvVar6 = (void *)CONCAT44(local_338.Data.AllocatorInstance.Data._4_4_,
                                local_338.Data.AllocatorInstance.Data._0_4_);
      iVar12 = local_338.Data.ArrayNum + -1;
      if (local_338.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      uVar10 = (ulong64)iVar12;
      pvVar11 = pvVar6;
      if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + uVar10)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2f8,uVar10);
        pvVar11 = (void *)CONCAT44(local_338.Data.AllocatorInstance.Data._4_4_,
                                   local_338.Data.AllocatorInstance.Data._0_4_);
      }
      if (iVar12 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,pvVar6,uVar10 * 2);
        pvVar11 = (void *)CONCAT44(local_338.Data.AllocatorInstance.Data._4_4_,
                                   local_338.Data.AllocatorInstance.Data._0_4_);
        local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + uVar10 * 2);
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 1;
      pFVar15 = pFVar15 + 4;
    } while ((int)uVar4 < iVar13);
  }
  if (local_d8.EdgeChain.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_d8.EdgeChain.AllocatorInstance.SecondaryData);
  }
  if (local_d8.VisitedEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.VisitedEdges.AllocatorInstance.SecondaryData);
  }
  if (local_d8.CyclicEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.CyclicEdges.AllocatorInstance.SecondaryData);
  }
  if (local_2f8.End < (FDiscoverCyclicEdges *)(local_2f8.CurPos + 3)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,3);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_2f8.CurPos,L"}\n\n",6);
  local_2f8.CurPos = (wchar_t *)((longlong)pvVar6 + 6);
  if (local_2f8.End < (FDiscoverCyclicEdges *)((longlong)pvVar6 + 8U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_2f8,1);
  }
  *local_2f8.CurPos = L'\0';
  ::FString::FString(local_320,local_2f8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2f8);
  return local_320;
}

