// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 20

// Find<FEdgeID> @ 1436435e0

TArrayView<FEdgeID_const_,int> * __thiscall
FMeshElementIndexer::Find<FEdgeID>
          (FMeshElementIndexer *this,TArrayView<FEdgeID_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArrayView<FEdgeID_const_,int> *pTVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  
  if (this->bSuspended != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSuspended",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (param_1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x79,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  ConditionalBuild(this,param_1,param_2);
  uVar9 = param_1 & this->ChunkMask;
  uVar12 = param_1 >> ((byte)this->ChunkBits & 0x1f);
  uVar5 = 0;
  if (param_2 < (this->PerChannelIndices).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  lVar11 = (longlong)param_2 * 0xb0;
  if ((int)uVar12 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar11 + 8)) {
    uVar6 = 0;
    uVar5 = uVar6;
    if (param_2 < (this->PerChannelIndices).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar2 = (this->PerChannelIndices).AllocatorInstance.Data;
    uVar5 = uVar6;
    if ((int)uVar12 < *(int *)(pFVar2 + lVar11 + 8)) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar10 = (longlong *)(*(longlong *)(pFVar2 + lVar11) + (longlong)(int)uVar12 * 0x58);
    uVar5 = uVar6;
    if ((int)uVar9 < (int)plVar10[4]) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[3];
    if ((longlong *)plVar10[3] == (longlong *)0x0) {
      plVar8 = plVar10 + 2;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    lVar11 = *plVar10;
    if ((int)uVar9 < (int)plVar10[7]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[6];
    __return_storage_ptr__->DataPtr = (FEdgeID *)(lVar11 + (longlong)iVar1 * 4);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = plVar10 + 5;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FEdgeID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (FEdgeID *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// Find<FPolygonID> @ 1436438a0

TArrayView<FPolygonID_const_,int> * __thiscall
FMeshElementIndexer::Find<FPolygonID>
          (FMeshElementIndexer *this,TArrayView<FPolygonID_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArrayView<FPolygonID_const_,int> *pTVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  
  if (this->bSuspended != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSuspended",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (param_1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x79,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  ConditionalBuild(this,param_1,param_2);
  uVar9 = param_1 & this->ChunkMask;
  uVar12 = param_1 >> ((byte)this->ChunkBits & 0x1f);
  uVar5 = 0;
  if (param_2 < (this->PerChannelIndices).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  lVar11 = (longlong)param_2 * 0xb0;
  if ((int)uVar12 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar11 + 8)) {
    uVar6 = 0;
    uVar5 = uVar6;
    if (param_2 < (this->PerChannelIndices).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar2 = (this->PerChannelIndices).AllocatorInstance.Data;
    uVar5 = uVar6;
    if ((int)uVar12 < *(int *)(pFVar2 + lVar11 + 8)) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar10 = (longlong *)(*(longlong *)(pFVar2 + lVar11) + (longlong)(int)uVar12 * 0x58);
    uVar5 = uVar6;
    if ((int)uVar9 < (int)plVar10[4]) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[3];
    if ((longlong *)plVar10[3] == (longlong *)0x0) {
      plVar8 = plVar10 + 2;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    lVar11 = *plVar10;
    if ((int)uVar9 < (int)plVar10[7]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[6];
    __return_storage_ptr__->DataPtr = (FPolygonID *)(lVar11 + (longlong)iVar1 * 4);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = plVar10 + 5;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FPolygonID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (FPolygonID *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// Find<FTriangleID> @ 143643b60

TArrayView<FTriangleID_const_,int> * __thiscall
FMeshElementIndexer::Find<FTriangleID>
          (FMeshElementIndexer *this,TArrayView<FTriangleID_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArrayView<FTriangleID_const_,int> *pTVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  
  if (this->bSuspended != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSuspended",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (param_1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x79,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  ConditionalBuild(this,param_1,param_2);
  uVar9 = param_1 & this->ChunkMask;
  uVar12 = param_1 >> ((byte)this->ChunkBits & 0x1f);
  uVar5 = 0;
  if (param_2 < (this->PerChannelIndices).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  lVar11 = (longlong)param_2 * 0xb0;
  if ((int)uVar12 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar11 + 8)) {
    uVar6 = 0;
    uVar5 = uVar6;
    if (param_2 < (this->PerChannelIndices).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar2 = (this->PerChannelIndices).AllocatorInstance.Data;
    uVar5 = uVar6;
    if ((int)uVar12 < *(int *)(pFVar2 + lVar11 + 8)) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar10 = (longlong *)(*(longlong *)(pFVar2 + lVar11) + (longlong)(int)uVar12 * 0x58);
    uVar5 = uVar6;
    if ((int)uVar9 < (int)plVar10[4]) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[3];
    if ((longlong *)plVar10[3] == (longlong *)0x0) {
      plVar8 = plVar10 + 2;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    lVar11 = *plVar10;
    if ((int)uVar9 < (int)plVar10[7]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[6];
    __return_storage_ptr__->DataPtr = (FTriangleID *)(lVar11 + (longlong)iVar1 * 4);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = plVar10 + 5;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FTriangleID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (FTriangleID *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// Find<FVertexInstanceID> @ 143643e20

TArrayView<FVertexInstanceID_const_,int> * __thiscall
FMeshElementIndexer::Find<FVertexInstanceID>
          (FMeshElementIndexer *this,
          TArrayView<FVertexInstanceID_const_,int> *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArrayView<FVertexInstanceID_const_,int> *pTVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  
  if (this->bSuspended != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSuspended",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (param_1 == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x79,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  ConditionalBuild(this,param_1,param_2);
  uVar9 = param_1 & this->ChunkMask;
  uVar12 = param_1 >> ((byte)this->ChunkBits & 0x1f);
  uVar5 = 0;
  if (param_2 < (this->PerChannelIndices).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  lVar11 = (longlong)param_2 * 0xb0;
  if ((int)uVar12 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar11 + 8)) {
    uVar6 = 0;
    uVar5 = uVar6;
    if (param_2 < (this->PerChannelIndices).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    pFVar2 = (this->PerChannelIndices).AllocatorInstance.Data;
    uVar5 = uVar6;
    if ((int)uVar12 < *(int *)(pFVar2 + lVar11 + 8)) {
      uVar5 = ~uVar12 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar10 = (longlong *)(*(longlong *)(pFVar2 + lVar11) + (longlong)(int)uVar12 * 0x58);
    uVar5 = uVar6;
    if ((int)uVar9 < (int)plVar10[4]) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[3];
    if ((longlong *)plVar10[3] == (longlong *)0x0) {
      plVar8 = plVar10 + 2;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    lVar11 = *plVar10;
    if ((int)uVar9 < (int)plVar10[7]) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
    plVar8 = (longlong *)plVar10[6];
    __return_storage_ptr__->DataPtr = (FVertexInstanceID *)(lVar11 + (longlong)iVar1 * 4);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = plVar10 + 5;
    }
    iVar1 = *(int *)((longlong)plVar8 + (longlong)(int)uVar9 * 4);
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<FVertexInstanceID_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  else {
    __return_storage_ptr__->DataPtr = (FVertexInstanceID *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  return __return_storage_ptr__;
}

// FMeshElementIndexer @ 1436575d0

FMeshElementIndexer * __thiscall
FMeshElementIndexer::FMeshElementIndexer
          (FMeshElementIndexer *this,FMeshElementChannels *param_1,FMeshElementChannels *param_2,
          FName param_3,int param_4)

{
  (this->ReferencingAttributeRef).Extent = 1;
  (this->PerChannelIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerChannelIndices).ArrayNum = 0;
  (this->PerChannelIndices).ArrayMax = 0;
  (this->ReferencingAttributeRef).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  this->InitialSize = 1;
  this->ChunkBits = 8;
  this->ChunkMask = 0xff;
  this->bSuspended = false;
  this->bEverythingStale = true;
  Set(this,param_1,param_2,param_3,param_4);
  return this;
}

// operator= @ 143658c00

FMeshElementIndexer * __thiscall
FMeshElementIndexer::operator=(FMeshElementIndexer *this,FMeshElementIndexer *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (this != param_1) {
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>
              ((FIndexPerChannel *)(this->PerChannelIndices).AllocatorInstance.Data,
               (this->PerChannelIndices).ArrayNum);
    pFVar1 = (this->PerChannelIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->PerChannelIndices).AllocatorInstance.Data =
         (param_1->PerChannelIndices).AllocatorInstance.Data;
    (param_1->PerChannelIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PerChannelIndices).ArrayNum = (param_1->PerChannelIndices).ArrayNum;
    (this->PerChannelIndices).ArrayMax = (param_1->PerChannelIndices).ArrayMax;
    (param_1->PerChannelIndices).ArrayNum = 0;
    (param_1->PerChannelIndices).ArrayMax = 0;
  }
  this->ReferencedElementType = param_1->ReferencedElementType;
  uVar2 = (param_1->ReferencingAttributeRef).Extent;
  uVar3 = *(undefined4 *)&(param_1->ReferencingAttributeRef).field_0xc;
  (this->ReferencingAttributeRef).ArrayPtr = (param_1->ReferencingAttributeRef).ArrayPtr;
  (this->ReferencingAttributeRef).Extent = uVar2;
  *(undefined4 *)&(this->ReferencingAttributeRef).field_0xc = uVar3;
  this->InitialSize = param_1->InitialSize;
  this->ChunkBits = param_1->ChunkBits;
  this->ChunkMask = param_1->ChunkMask;
  this->bSuspended = param_1->bSuspended;
  this->bEverythingStale = param_1->bEverythingStale;
  return this;
}

// AddReferenceToKey @ 14365f530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshElementIndexer::AddReferenceToKey
          (FMeshElementIndexer *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int local_res10 [2];
  int local_res18 [2];
  int local_48;
  int local_44 [3];
  
  if ((this->bSuspended == false) && (this->bEverythingStale == false)) {
    local_res10[0] = param_1;
    local_res18[0] = param_2;
    if ((this->PerChannelIndices).ArrayNum <= param_3) {
      TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
                (&this->PerChannelIndices,param_3 + 1,Default);
    }
    if ((param_1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x83,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_res18[0] == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferenceIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x84,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->ChunkBits == 0) {
      AddUnchunked(this,param_1,local_res18[0],param_3);
      return;
    }
    uVar5 = this->ChunkMask;
    uVar7 = param_1 >> ((byte)this->ChunkBits & 0x1f);
    uVar6 = 0;
    uVar9 = (uint)~param_3 >> 0x1f;
    uVar4 = uVar6;
    if (param_3 < (this->PerChannelIndices).ArrayNum) {
      uVar4 = uVar9;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar8 = (longlong)param_3 * 0xb0;
    if ((int)uVar7 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar8 + 8)) {
      uVar4 = uVar6;
      if (param_3 < (this->PerChannelIndices).ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->PerChannelIndices).AllocatorInstance.Data;
      uVar4 = uVar6;
      if ((int)uVar7 < *(int *)(pFVar1 + lVar8 + 8)) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FChunk::Add((FChunk *)((longlong)(int)uVar7 * 0x58 + *(longlong *)(pFVar1 + lVar8)),
                          uVar5 & param_1,local_res18[0]);
      if (bVar3) {
        return;
      }
    }
    uVar5 = uVar6;
    if (param_3 < (this->PerChannelIndices).ArrayNum) {
      uVar5 = uVar9;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               ((this->PerChannelIndices).AllocatorInstance.Data + lVar8 + 0x10),&local_48,
               (bool *)local_res10);
    if (param_3 < (this->PerChannelIndices).ArrayNum) {
      uVar6 = uVar9;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               ((this->PerChannelIndices).AllocatorInstance.Data + lVar8 + 0x60),local_44,
               (bool *)local_res18);
  }
  return;
}

// AddUnchunked @ 14365f830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshElementIndexer::AddUnchunked(FMeshElementIndexer *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMeshElementContainer *pFVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  ForElementType<int> FVar9;
  FChunk *this_00;
  TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *this_01;
  
  if ((this->ChunkBits != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkBits == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0x212,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = 0;
  if (param_3 < (this->PerChannelIndices).ArrayNum) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
            ((this->PerChannelIndices).AllocatorInstance.Data + (longlong)param_3 * 0xb0);
  pFVar6 = FMeshElementChannels::Get(this->ReferencedElementType,param_3);
  uVar8 = (pFVar6->BitArray).NumBits;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &this_01->ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar8,(ForAnyElementType *)this_01,this_01->ArrayNum,piVar1);
  }
  uVar5 = this_01->ArrayNum;
  iVar2 = uVar5 - uVar8;
  while ((int)uVar5 < (int)uVar8) {
    if (uVar5 == *piVar1) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,(ForAnyElementType *)this_01,piVar1);
      this_01->ArrayNum = uVar5;
    }
    this_01->ArrayNum = uVar5 + 1;
    FChunk::FChunk((FChunk *)((this_01->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x58),
                   this->InitialSize,1);
    uVar5 = this_01->ArrayNum;
    iVar2 = uVar5 - uVar8;
  }
  if (uVar5 != uVar8 && SBORROW4(uVar5,uVar8) == iVar2 < 0) {
    uVar5 = uVar5 - uVar8;
    if (((int)(uVar8 | uVar5) < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar5 != 0) {
      TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (this_01,uVar8,uVar5);
    }
  }
  uVar8 = 0;
  if (param_1 < this_01->ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FChunk *)((this_01->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  if (((this_00->StartIndex).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = (this_00->StartIndex).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this_00->StartIndex;
  }
  if ((*(int *)FVar7 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chunk.StartIndex[0] == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0x229,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this_00->MaxCount).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar7 = (this_00->MaxCount).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<int>)0x0) {
    FVar7 = (ForElementType<int>)&this_00->MaxCount;
  }
  if (((this_00->Count).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar9 = (this_00->Count).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<int>)0x0) {
    FVar9 = (ForElementType<int>)&this_00->Count;
  }
  if (*(int *)FVar9 == *(int *)FVar7) {
    if (((this_00->MaxCount).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar7 = (this_00->MaxCount).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<int>)0x0) {
      FVar7 = (ForElementType<int>)&this_00->MaxCount;
    }
    if (((this_00->Data).ArrayNum != *(int *)FVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunk.Data.Num() == Chunk.MaxCount[0]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x22d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this_00->MaxCount).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar7 = (this_00->MaxCount).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<int>)0x0) {
      FVar7 = (ForElementType<int>)&this_00->MaxCount;
    }
    iVar2 = *(int *)FVar7;
    if (((this_00->MaxCount).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar7 = (this_00->MaxCount).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<int>)0x0) {
      FVar7 = (ForElementType<int>)&this_00->MaxCount;
    }
    *(int *)FVar7 = *(int *)FVar7 + iVar2 / 2;
    if (((this_00->MaxCount).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar7 = (this_00->MaxCount).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<int>)0x0) {
      FVar7 = (ForElementType<int>)&this_00->MaxCount;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<int,TSizedDefaultAllocator<32>_> *)this_00,*(int *)FVar7,Default);
  }
  FChunk::Add(this_00,0,param_2);
  return;
}

// Build @ 143660a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMeshElementIndexer::Build(FMeshElementIndexer *this)

{
  int *piVar1;
  FMeshAttributeArraySetBase *pFVar2;
  FScriptContainerElement *pFVar3;
  FIndexPerChannel *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((this->bSuspended != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bSuspended",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xc5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->ReferencedElementType != (FMeshElementChannels *)0x0) &&
     (pFVar2 = (this->ReferencingAttributeRef).ArrayPtr, pFVar2 != (FMeshAttributeArraySetBase *)0x0
     )) {
    iVar7 = (**(code **)(pFVar2->_padding_ + 0x68))();
    iVar9 = (this->ReferencedElementType->Channels).ArrayNum;
    if (iVar7 < iVar9) {
      iVar9 = iVar7;
    }
    TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
              (&this->PerChannelIndices,iVar9,Default);
    iVar9 = (this->PerChannelIndices).ArrayNum;
    uVar11 = 0;
    if (0 < iVar9) {
      lVar10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar9) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->PerChannelIndices).AllocatorInstance.Data;
        if (this->bEverythingStale == false) {
          if (0 < *(int *)(pFVar3 + lVar10 + 0x18) - *(int *)(pFVar3 + lVar10 + 0x44)) {
            BuildIndex(this,uVar11);
          }
        }
        else {
          RebuildIndex(this,uVar11);
        }
        iVar9 = (this->PerChannelIndices).ArrayNum;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0xb0;
      } while ((int)uVar11 < iVar9);
    }
    this->bEverythingStale = false;
    return;
  }
  piVar1 = &(this->PerChannelIndices).ArrayMax;
  pFVar4 = (FIndexPerChannel *)(this->PerChannelIndices).AllocatorInstance.Data;
  iVar9 = (this->PerChannelIndices).ArrayNum;
  if ((this->PerChannelIndices).ArrayMax < 0) {
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(pFVar4,iVar9);
    (this->PerChannelIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,(ForAnyElementType *)this,0,piVar1);
    }
    return;
  }
  DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(pFVar4,iVar9);
  (this->PerChannelIndices).ArrayNum = 0;
  return;
}

// BuildIndex @ 143660bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMeshElementIndexer::BuildIndex(FMeshElementIndexer *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  TMeshAttributeArraySet<int> *pTVar4;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar5;
  code *pcVar6;
  byte bVar7;
  FMeshElementIndexer *pFVar8;
  TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  uint uVar12;
  FMeshElementContainer *pFVar13;
  TMeshAttributeArrayBase<int> *pTVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<int> FVar16;
  ForElementType<int> FVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  longlong lVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint *puVar26;
  uint uVar27;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar28;
  int iVar29;
  longlong *plVar30;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  undefined8 uVar33;
  int iVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined1 auStackY_628 [32];
  FIdentityFunctor local_5d8 [4];
  uint local_5d4;
  FMeshElementIndexer *local_5d0;
  undefined1 local_5c8 [4];
  uint local_5c4;
  TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *local_5c0;
  uint local_5b8;
  uint local_5b4;
  int local_5b0;
  TBitArray<FDefaultBitArrayAllocator> *local_5a8;
  undefined8 local_5a0;
  TBitArray<FDefaultBitArrayAllocator> *local_598;
  TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *local_590;
  uint local_588;
  int local_584;
  int local_580;
  uint local_57c;
  int local_578;
  uint local_574;
  longlong local_570;
  TBitArray<FDefaultBitArrayAllocator> *local_568;
  int local_560;
  FScriptContainerElement *local_558;
  longlong local_550;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_548;
  int iStack_540;
  uint uStack_53c;
  TBitArray<FDefaultBitArrayAllocator> *local_538;
  undefined4 uStack_530;
  int iStack_52c;
  int local_528;
  undefined4 uStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_518;
  int local_510;
  int local_50c;
  int local_508;
  int local_504;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_500;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4f8;
  undefined8 uStack_4d8;
  TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c8;
  undefined8 uStack_4a8;
  undefined4 local_484;
  undefined4 local_464;
  ForElementType<int> local_458;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_628;
  local_5d0 = this;
  local_5b0 = param_1;
  if ((this->bSuspended != false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bSuspended",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                          ,0x15e,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_574 = (uint)~param_1 >> 0x1f;
  uVar21 = 0;
  if (param_1 < (this->PerChannelIndices).ArrayNum) {
    uVar21 = local_574;
  }
  if ((uVar21 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar37 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
            ((this->PerChannelIndices).AllocatorInstance.Data + (longlong)param_1 * 0xb0);
  local_458.SecondaryData = (ForElementType<int>)0x0;
  local_50 = 0;
  local_4c = 0x100;
  local_590 = pTVar37;
  local_570 = (longlong)param_1;
  pFVar13 = FMeshElementChannels::Get(this->ReferencedElementType,param_1);
  uVar21 = this->ChunkMask + (pFVar13->BitArray).NumBits;
  bVar7 = (byte)this->ChunkBits & 0x1f;
  uVar22 = uVar21 >> bVar7;
  if ((int)(uVar21 >> bVar7) < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar1 = &pTVar37->ArrayMax;
  if (pTVar37->ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar22,(ForAnyElementType *)pTVar37,pTVar37->ArrayNum,piVar1);
  }
  uVar21 = pTVar37->ArrayNum;
  local_5a0 = 1;
  iVar34 = uVar21 - uVar22;
  if ((int)uVar21 < (int)uVar22) {
    do {
      uVar24 = this->ChunkBits;
      if (uVar21 == *piVar1) {
        uVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)pTVar37,piVar1);
        pTVar37->ArrayNum = uVar21;
      }
      pTVar37->ArrayNum = uVar21 + 1;
      FChunk::FChunk((FChunk *)((pTVar37->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x58),
                     this->InitialSize,1 << ((byte)uVar24 & 0x1f));
      uVar21 = pTVar37->ArrayNum;
    } while ((int)uVar21 < (int)uVar22);
    iVar34 = uVar21 - uVar22;
  }
  iVar29 = 0;
  if (uVar21 != uVar22 && SBORROW4(uVar21,uVar22) == iVar34 < 0) {
    uVar21 = uVar21 - uVar22;
    if (((int)(uVar22 | uVar21) < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar21 != 0) {
      TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (pTVar37,uVar22,uVar21);
    }
  }
  local_518 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pTVar37 + 6);
  pTVar31 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pTVar37 + 6);
  local_528 = 0;
  iVar34 = pTVar37[8].ArrayNum;
  local_538 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar37 + 7);
  iStack_52c = 0;
  uStack_53c = 1;
  if (iVar34 != 0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar37[8].AllocatorInstance.Data;
    if (pTVar20 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = local_538;
    }
    uStack_53c = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    iVar29 = 0;
    while (uStack_53c == 0) {
      lVar19 = (longlong)iVar29;
      local_528 = local_528 + 0x20;
      iVar29 = iVar29 + 1;
      iStack_52c = iVar34;
      uStack_53c = 1;
      if ((int)(iVar34 + -1 + (iVar34 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_143660e5e;
      uStack_53c = *(uint *)((longlong)(pTVar20->AllocatorInstance).InlineData + lVar19 * 4 + 4);
    }
    uStack_53c = -uStack_53c & uStack_53c;
    uVar3 = (ulonglong)uStack_53c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_510 = (int)lVar19;
    iStack_52c = local_510 + -1 + local_528;
    if (iVar34 < iStack_52c) {
      iStack_52c = iVar34;
    }
  }
LAB_143660e5e:
  uVar21 = pTVar37[8].ArrayNum;
  uStack_524 = local_464;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar37 + 7);
  iStack_520 = pTVar37[6].ArrayNum - *(int *)((longlong)&pTVar37[9].AllocatorInstance.Data + 4);
  uVar22 = uVar21 & 0xffffffe0;
  TStack_4f8._padding_ = CONCAT44(uStack_53c,iVar29);
  uStack_530 = 0xffffffff;
  TStack_4f8.CurrentBitIndex = iStack_52c;
  TStack_4f8.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar21 >> 5;
  TStack_4f8._28_4_ = local_464;
  TStack_4f8.BaseBitIndex = local_528;
  uStack_4d8 = CONCAT44(uStack_51c,iStack_520);
  local_5d4 = uVar21;
  local_5a8 = pTVar20;
  local_548 = pTVar31;
  iStack_540 = iVar29;
  local_500 = pTVar31;
  TStack_4f8.Array = local_538;
  if ((((int)uVar21 < 0) || (iVar34 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar24 = pTVar37[8].ArrayNum;
  if (uVar21 != uVar24) {
    pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar37[8].AllocatorInstance.Data;
    if (pTVar32 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar32 = pTVar20;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) &
             *(uint *)((longlong)(pTVar32->AllocatorInstance).InlineData + (longlong)iVar23 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar23;
      uVar22 = uVar22 + 0x20;
      iVar23 = iVar23 + 1;
      uVar21 = uVar24;
      local_5d4 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_143660f71;
      uVar21 = *(uint *)((longlong)(pTVar32->AllocatorInstance).InlineData + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_50c = (int)lVar19;
    uVar21 = local_50c + -1 + uVar22;
    local_5d4 = uVar21;
    if ((int)uVar24 < (int)uVar21) {
      uVar21 = uVar24;
      local_5d4 = uVar24;
    }
  }
LAB_143660f71:
  while( true ) {
    pTVar10 = local_500;
    if (*(int *)&(local_500->Elements).field_0x8 - *(int *)&(local_500->Elements).field_0x34 !=
        (int)uStack_4d8) {
      local_5c8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5c8);
    }
    if (((TStack_4f8.CurrentBitIndex == uVar21) && (TStack_4f8.Array == pTVar20)) &&
       (pTVar10 == pTVar31)) break;
    pTVar4 = (TMeshAttributeArraySet<int> *)(this->ReferencingAttributeRef).ArrayPtr;
    uVar22 = *(uint *)(*(FScriptContainerElement **)&pTVar10->Elements +
                      (longlong)TStack_4f8.CurrentBitIndex * 0xc);
    if ((this->ReferencingAttributeRef).Extent == 0) {
      uVar24 = 0;
      if (local_5b0 < (pTVar4->ArrayForChannels).ArrayNum) {
        uVar24 = local_574;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar28 = (ForElementType<TMeshAttributeArrayBase<int>_>)&pTVar4->ArrayForChannels;
      if (FVar5 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
        FVar28 = FVar5;
      }
      uVar27 = (int)uVar22 >> 8;
      lVar19 = local_570 * 0x18;
      uVar24 = 0;
      if ((int)uVar27 < *(int *)((uchar *)((longlong)FVar28 + 8) + local_570 * 0x18)) {
        uVar24 = ~uVar27 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar30 = (longlong *)
                ((longlong)(int)uVar27 * 0xc18 + *(longlong *)((longlong)FVar28 + lVar19));
      uVar24 = *(uint *)((longlong)plVar30 + (ulonglong)(uVar22 & 0xff) * 4 + 0x410);
      pFVar15 = (FScriptContainerElement *)
                (*plVar30 +
                (longlong)*(int *)((longlong)plVar30 + (ulonglong)(uVar22 & 0xff) * 4 + 0x10) * 4);
    }
    else {
      pTVar14 = TMeshAttributeArraySet<int>::GetArrayForChannel(pTVar4,local_5b0);
      pFVar15 = (FScriptContainerElement *)
                TMeshAttributeArrayBase<int>::GetElementBase(pTVar14,uVar22);
      uVar24 = (local_5d0->ReferencingAttributeRef).Extent;
    }
    if (((int)uVar24 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar37 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
              (pFVar15 + (longlong)(int)uVar24 * 4);
    local_5c0 = pTVar37;
    if ((TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)pFVar15 != pTVar37) {
      do {
        pTVar9 = local_590;
        local_5b4 = *(uint *)pFVar15;
        if (local_5b4 != 0xffffffff) {
          uVar27 = local_5b4 & local_5d0->ChunkMask;
          uVar24 = (int)local_5b4 >> ((byte)local_5d0->ChunkBits & 0x1f);
          uVar21 = 0;
          if ((int)uVar24 < local_590->ArrayNum) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar35 = (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar24 * 0x58;
          uVar21 = 0;
          if ((int)uVar27 < *(int *)(pFVar35 + 0x20)) {
            uVar21 = ~uVar27 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = pFVar35 + 0x10;
          if (*(FScriptContainerElement **)(pFVar35 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar25 = *(FScriptContainerElement **)(pFVar35 + 0x18);
          }
          puVar26 = (uint *)(*(longlong *)pFVar35 +
                            (longlong)*(int *)(pFVar25 + (longlong)(int)uVar27 * 4) * 4);
          uVar21 = 0;
          if ((int)uVar27 < *(int *)(pFVar35 + 0x38)) {
            uVar21 = ~uVar27 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = pFVar35 + 0x28;
          if (*(FScriptContainerElement **)(pFVar35 + 0x30) != (FScriptContainerElement *)0x0) {
            pFVar25 = *(FScriptContainerElement **)(pFVar35 + 0x30);
          }
          iVar34 = *(int *)(pFVar25 + (longlong)(int)uVar27 * 4);
          if ((iVar34 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar2 = puVar26 + iVar34;
          for (; puVar26 != puVar2; puVar26 = puVar26 + 1) {
            pTVar37 = local_5c0;
            if (*puVar26 == uVar22) goto LAB_14366138f;
          }
          FVar16 = (ForElementType<int>)&local_458;
          if (local_458.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_458.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_5b4) {
            FVar16 = (ForElementType<int>)&local_458;
            if (local_458.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_458.SecondaryData;
            }
            if ((&local_5b4 < (uint *)((longlong)FVar16 + (longlong)local_4c * 4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&local_458,&local_4c);
          }
          lVar19 = (longlong)local_50;
          FVar16 = (ForElementType<int>)&local_458;
          if (local_458.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_458.SecondaryData;
          }
          local_50 = local_50 + 1;
          *(uint *)((longlong)FVar16 + lVar19 * 4) = local_5b4;
          pTVar37 = local_5c0;
        }
LAB_14366138f:
        pFVar15 = pFVar15 + 4;
        pTVar20 = local_5a8;
        uVar21 = local_5d4;
      } while ((TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)pFVar15 != pTVar37
              );
    }
    TStack_4f8.UnvisitedBitMask = TStack_4f8.UnvisitedBitMask & ~TStack_4f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4f8);
    this = local_5d0;
    pTVar31 = local_518;
  }
  FVar16 = (ForElementType<int>)&local_458;
  if (local_458.SecondaryData != (ForElementType<int>)0x0) {
    FVar16 = local_458.SecondaryData;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)FVar16,local_50,local_5d8[0],(TLess<void>)local_5d8[0]);
  uVar21 = (uint)local_5a0;
  if (0 < local_50) {
    uVar33 = local_5a0;
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    uVar22 = 0;
    do {
      lVar19 = (longlong)(int)uVar22;
      uVar21 = 0;
      if ((int)uVar22 < local_50) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      local_5b8 = uVar22;
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar8 = local_5d0;
      uVar21 = 0;
      local_5d4 = 0;
      FVar16 = (ForElementType<int>)&local_458;
      if (local_458.SecondaryData != (ForElementType<int>)0x0) {
        FVar16 = local_458.SecondaryData;
      }
      uVar24 = uVar22 + 1;
      pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                ((longlong)(pTVar20->AllocatorInstance).InlineData + 1);
      uVar27 = *(int *)((longlong)FVar16 + (longlong)pTVar20 * 4) >>
               ((byte)local_5d0->ChunkBits & 0x1f);
      local_5c4 = uVar24;
      local_598 = pTVar32;
      if ((int)uVar24 < local_50) {
        do {
          uVar12 = 0;
          if ((int)uVar24 < local_50) {
            uVar12 = ~uVar24 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar16 = (ForElementType<int>)&local_458;
          if (local_458.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_458.SecondaryData;
          }
          if (*(int *)((longlong)FVar16 + (longlong)pTVar32 * 4) >> ((byte)pFVar8->ChunkBits & 0x1f)
              != uVar27) break;
          uVar24 = uVar24 + 1;
          pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((longlong)(pTVar32->AllocatorInstance).InlineData + 1);
        } while ((int)uVar24 < local_50);
      }
      local_5c4 = uVar24;
      pTVar37 = local_590;
      uVar24 = 0;
      if ((int)uVar27 < local_590->ArrayNum) {
        uVar24 = ~uVar27 >> 0x1f;
      }
      local_598 = pTVar32;
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_5c0 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
                  ((pTVar37->AllocatorInstance).Data + (longlong)(int)uVar27 * 0x58);
      if (lVar19 < (longlong)pTVar32) {
        local_5a8 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_5c0 + 0x40);
        do {
          pTVar20 = local_5a8;
          uVar21 = 0;
          if ((int)uVar22 < local_50) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar16 = (ForElementType<int>)&local_458;
          if (local_458.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_458.SecondaryData;
          }
          uVar21 = *(uint *)((longlong)FVar16 + lVar19 * 4);
          iVar34 = (int)local_5a0;
          while( true ) {
            lVar19 = lVar19 + 1;
            uVar22 = uVar22 + 1;
            if ((longlong)pTVar32 <= lVar19) break;
            uVar24 = 0;
            if ((int)uVar22 < local_50) {
              uVar24 = ~uVar22 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar16 = (ForElementType<int>)&local_458;
            if (local_458.SecondaryData != (ForElementType<int>)0x0) {
              FVar16 = local_458.SecondaryData;
            }
            if (*(uint *)((longlong)FVar16 + lVar19 * 4) != uVar21) break;
            iVar34 = iVar34 + 1;
          }
          uVar21 = uVar21 & local_5d0->ChunkMask;
          uVar24 = 0;
          if ((int)uVar21 < *(int *)&(pTVar20->AllocatorInstance).SecondaryData.field_0x0) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar32 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     ((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
          if (pTVar32 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar20 = pTVar32;
          }
          iVar29 = *(int *)((longlong)(pTVar20->AllocatorInstance).InlineData +
                           (longlong)(int)uVar21 * 4);
          uVar24 = 0;
          if ((int)uVar21 < *(int *)((longlong)local_5c0 + 0x38)) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = (FScriptContainerElement *)((longlong)local_5c0 + 0x28);
          if (*(FScriptContainerElement **)((longlong)local_5c0 + 0x30) !=
              (FScriptContainerElement *)0x0) {
            pFVar15 = *(FScriptContainerElement **)((longlong)local_5c0 + 0x30);
          }
          iVar34 = (*(int *)(pFVar15 + (longlong)(int)uVar21 * 4) - iVar29) + iVar34;
          if (iVar34 < 0) {
            iVar34 = 0;
          }
          uVar21 = local_5d4 + iVar34;
          uVar33 = local_5a0;
          pTVar32 = local_598;
          local_5d4 = uVar21;
        } while (lVar19 < (longlong)local_598);
      }
      pTVar37 = local_5c0;
      pFVar15 = (FScriptContainerElement *)((longlong)local_5c0 + 8);
      iVar34 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar21,&local_5c0->AllocatorInstance,(int *)pFVar15,
                          (int *)((longlong)local_5c0 + 0xc));
      memset((void *)(*(longlong *)pTVar37 + (longlong)iVar34 * 4),0,(longlong)(int)uVar21 << 2);
      local_580 = *(int *)pFVar15;
      local_578 = (int)uVar33 << ((byte)local_5d0->ChunkBits & 0x1f);
      uVar21 = local_5c4 - 1;
      local_550 = *(longlong *)pTVar37;
      if ((int)local_5b8 <= (int)uVar21) {
        local_558 = (FScriptContainerElement *)((longlong)pTVar37 + 0x28);
        pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)(longlong)(int)uVar21;
        pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar37 + 0x10);
        local_5c0 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
                    ((longlong)pTVar37 + 0x40);
        local_5a8 = pTVar20;
        do {
          uVar22 = local_5b8;
          uVar24 = 0;
          if ((int)uVar21 < local_50) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar16 = (ForElementType<int>)&local_458;
          if (local_458.SecondaryData != (ForElementType<int>)0x0) {
            FVar16 = local_458.SecondaryData;
          }
          uVar24 = *(uint *)((longlong)FVar16 + (longlong)pTVar32 * 4);
          pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar32 + -1);
          uVar21 = uVar21 - 1;
          local_588 = uVar21;
          local_57c = uVar24;
          local_568 = pTVar32;
          iVar34 = (int)local_5a0;
          FVar16 = local_458.SecondaryData;
          for (; (int)uVar22 <= (int)uVar21; uVar21 = uVar21 - 1) {
            uVar27 = 0;
            if ((int)uVar21 < local_50) {
              uVar27 = ~uVar21 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               FVar16 = local_458.SecondaryData, bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar17 = (ForElementType<int>)&local_458;
            if (FVar16 != (ForElementType<int>)0x0) {
              FVar17 = FVar16;
            }
            if (*(uint *)((longlong)FVar17 + (longlong)pTVar32 * 4) != uVar24) break;
            iVar34 = iVar34 + 1;
            pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar32 + -1);
          }
          uVar24 = uVar24 & local_5d0->ChunkMask;
          uVar27 = ~uVar24 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar24 < *(int *)&(pTVar20->AllocatorInstance).SecondaryData.field_0x0) {
            uVar22 = uVar27;
          }
          local_588 = uVar21;
          local_568 = pTVar32;
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     ((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
          lVar19 = (longlong)(int)uVar24;
          if (pTVar18 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar20 = pTVar18;
          }
          uVar22 = 0;
          if ((int)uVar24 < (int)*(uint *)((longlong)local_5c0 + 0x10)) {
            uVar22 = uVar27;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = local_558;
          pTVar37 = local_5c0;
          if (*(FScriptContainerElement **)((longlong)local_5c0 + 8) !=
              (FScriptContainerElement *)0x0) {
            pTVar37 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
                      *(FScriptContainerElement **)((longlong)local_5c0 + 8);
          }
          local_584 = *(int *)((longlong)pTVar37 + lVar19 * 4) +
                      *(int *)((longlong)(pTVar20->AllocatorInstance).InlineData + lVar19 * 4);
          uVar22 = 0;
          if ((int)uVar24 < *(int *)(local_558 + 0x10)) {
            uVar22 = uVar27;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar35 = *(FScriptContainerElement **)(pFVar15 + 8);
          if (pFVar35 != (FScriptContainerElement *)0x0) {
            pFVar15 = pFVar35;
          }
          uVar22 = 0;
          if ((int)uVar24 < (int)*(uint *)((longlong)local_5c0 + 0x10)) {
            uVar22 = uVar27;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar37 = local_5c0;
          if (*(FScriptContainerElement **)((longlong)local_5c0 + 8) !=
              (FScriptContainerElement *)0x0) {
            pTVar37 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)
                      *(FScriptContainerElement **)((longlong)local_5c0 + 8);
          }
          iVar34 = iVar34 + (*(int *)(pFVar15 + lVar19 * 4) -
                            *(int *)((longlong)pTVar37 + lVar19 * 4));
          if (iVar34 < 0) {
            iVar34 = 0;
          }
          local_560 = iVar34;
          memmove((void *)(local_550 + ((longlong)(int)local_5d4 + (longlong)local_584) * 4),
                  (void *)(local_550 + (longlong)local_584 * 4),
                  (longlong)(int)((local_580 - local_584) - local_5d4) << 2);
          pTVar37 = local_5c0;
          uVar22 = 0;
          if ((int)uVar24 < (int)*(uint *)((longlong)local_5c0 + 0x10)) {
            uVar22 = uVar27;
          }
          if ((uVar22 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar33 = local_5a0;
          pTVar20 = local_5a8;
          pFVar8 = local_5d0;
          uVar22 = local_5d4;
          pFVar15 = *(FScriptContainerElement **)((longlong)pTVar37 + 8);
          if (pFVar15 != (FScriptContainerElement *)0x0) {
            pTVar37 = (TArray<FMeshElementIndexer::FChunk,TSizedDefaultAllocator<32>_> *)pFVar15;
          }
          *(int *)((longlong)pTVar37 + lVar19 * 4) =
               *(int *)((longlong)pTVar37 + lVar19 * 4) + iVar34;
          lVar36 = (longlong)local_578;
          uVar24 = (local_5d0->ChunkMask & local_57c) + 1;
          for (lVar19 = (longlong)(int)uVar24; lVar19 < lVar36; lVar19 = lVar19 + 1) {
            if (((int)uVar33 << ((byte)pFVar8->ChunkBits & 0x1f) <= (int)uVar24) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("N < GetChunkSize()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                                    ,0x1e8,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar21 = 0;
            if ((int)uVar24 < *(int *)&(pTVar20->AllocatorInstance).SecondaryData.field_0x0) {
              uVar21 = ~uVar24 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar32 = *(TBitArray<FDefaultBitArrayAllocator> **)
                       ((longlong)(pTVar20->AllocatorInstance).InlineData + 8);
            pTVar18 = pTVar20;
            if (pTVar32 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar18 = pTVar32;
            }
            uVar24 = uVar24 + 1;
            piVar1 = (int *)((longlong)(pTVar18->AllocatorInstance).InlineData + lVar19 * 4);
            *piVar1 = *piVar1 + uVar22;
            pTVar32 = local_568;
            uVar21 = local_588;
            iVar34 = local_560;
          }
          local_580 = local_584 + local_5d4;
          local_578 = (local_5d0->ChunkMask & local_57c) + 1;
          local_5d4 = local_5d4 - iVar34;
          if (((int)local_5d4 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExtraChunkElements >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                                  ,499,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar33 = local_5a0;
        } while ((int)local_5b8 <= (int)uVar21);
      }
      uVar21 = (uint)uVar33;
      this = local_5d0;
      pTVar20 = local_598;
      uVar22 = local_5c4;
    } while ((int)local_5c4 < local_50);
  }
  pTVar9 = local_590;
  local_528 = 0;
  iStack_540 = 0;
  local_538 = (TBitArray<FDefaultBitArrayAllocator> *)(local_590 + 7);
  iVar34 = local_590[8].ArrayNum;
  pTVar37 = local_590 + 6;
  iStack_52c = 0;
  if (iVar34 != 0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)local_590[8].AllocatorInstance.Data;
    if (pTVar20 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = local_538;
    }
    uVar22 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    iStack_540 = 0;
    while (uVar22 == 0) {
      lVar19 = (longlong)iStack_540;
      local_528 = local_528 + 0x20;
      iStack_540 = iStack_540 + 1;
      iStack_52c = iVar34;
      if ((int)(iVar34 + -1 + (iVar34 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_540) goto LAB_143661d1f;
      uVar22 = *(uint *)((longlong)(pTVar20->AllocatorInstance).InlineData + lVar19 * 4 + 4);
    }
    uVar21 = -uVar22 & uVar22;
    uVar3 = (ulonglong)uVar21 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_508 = (int)lVar19;
    iStack_52c = local_508 + -1 + local_528;
    if (iVar34 < iStack_52c) {
      iStack_52c = iVar34;
    }
  }
LAB_143661d1f:
  uVar22 = local_590[8].ArrayNum;
  uStack_524 = local_484;
  iStack_520 = local_590[6].ArrayNum - *(int *)((longlong)&local_590[9].AllocatorInstance.Data + 4);
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(local_590 + 7);
  uStack_530 = 0xffffffff;
  uVar24 = uVar22 & 0xffffffe0;
  TStack_4c8.CurrentBitIndex = iStack_52c;
  TStack_4c8.UnvisitedBitMask = 0xffffffff;
  local_5b8 = -1 << ((byte)uVar22 & 0x1f);
  TStack_4c8._padding_ = CONCAT44(uVar21,iStack_540);
  iVar29 = (int)uVar22 >> 5;
  TStack_4c8._28_4_ = local_484;
  TStack_4c8.BaseBitIndex = local_528;
  uStack_4a8 = CONCAT44(uStack_51c,iStack_520);
  uStack_53c = uVar21;
  local_5c4 = uVar22;
  local_5c0 = pTVar37;
  local_568 = pTVar20;
  local_548 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)pTVar37;
  local_4d0 = pTVar37;
  TStack_4c8.Array = local_538;
  if ((((int)uVar22 < 0) || (iVar34 < (int)uVar22)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar21 = pTVar9[8].ArrayNum;
  if (uVar22 != uVar21) {
    pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9[8].AllocatorInstance.Data;
    if (pTVar32 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar32 = pTVar20;
    }
    uVar22 = local_5b8 &
             *(uint *)((longlong)(pTVar32->AllocatorInstance).InlineData + (longlong)iVar29 * 4);
    while (uVar22 == 0) {
      lVar19 = (longlong)iVar29;
      uVar24 = uVar24 + 0x20;
      iVar29 = iVar29 + 1;
      uVar22 = uVar21;
      local_5c4 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_143661e50;
      uVar22 = *(uint *)((longlong)(pTVar32->AllocatorInstance).InlineData + lVar19 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_504 = (int)lVar19;
    uVar22 = (uVar24 - 1) + local_504;
    local_5c4 = uVar22;
    if ((int)uVar21 < (int)uVar22) {
      uVar22 = uVar21;
      local_5c4 = uVar21;
    }
  }
LAB_143661e50:
  do {
    pTVar9 = local_4d0;
    if (local_4d0->ArrayNum - *(int *)((longlong)&local_4d0[3].AllocatorInstance.Data + 4) !=
        (int)uStack_4a8) {
      local_5d8[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5d8);
    }
    if (((TStack_4c8.CurrentBitIndex == uVar22) && (TStack_4c8.Array == pTVar20)) &&
       (pTVar9 == pTVar37)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_590 + 1));
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(local_518);
      if (local_458.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_458.SecondaryData);
      }
      return;
    }
    pTVar4 = (TMeshAttributeArraySet<int> *)(this->ReferencingAttributeRef).ArrayPtr;
    uVar21 = *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)TStack_4c8.CurrentBitIndex * 0xc
                      );
    if ((this->ReferencingAttributeRef).Extent == 0) {
      uVar22 = 0;
      if (local_5b0 < (pTVar4->ArrayForChannels).ArrayNum) {
        uVar22 = local_574;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (pTVar4->ArrayForChannels).AllocatorInstance.SecondaryData;
      FVar28 = (ForElementType<TMeshAttributeArrayBase<int>_>)&pTVar4->ArrayForChannels;
      if (FVar5 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
        FVar28 = FVar5;
      }
      uVar24 = (int)uVar21 >> 8;
      lVar19 = local_570 * 0x18;
      uVar22 = 0;
      if ((int)uVar24 < *(int *)((uchar *)((longlong)FVar28 + 8) + local_570 * 0x18)) {
        uVar22 = ~uVar24 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar30 = (longlong *)
                ((longlong)(int)uVar24 * 0xc18 + *(longlong *)((longlong)FVar28 + lVar19));
      uVar22 = *(uint *)((longlong)plVar30 + (ulonglong)(uVar21 & 0xff) * 4 + 0x410);
      pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                (*plVar30 +
                (longlong)*(int *)((longlong)plVar30 + (ulonglong)(uVar21 & 0xff) * 4 + 0x10) * 4);
    }
    else {
      pTVar14 = TMeshAttributeArraySet<int>::GetArrayForChannel(pTVar4,local_5b0);
      pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                TMeshAttributeArrayBase<int>::GetElementBase(pTVar14,uVar21);
      uVar22 = (this->ReferencingAttributeRef).Extent;
    }
    local_598 = pTVar32;
    if (((int)uVar22 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)
              ((longlong)(pTVar32->AllocatorInstance).InlineData + (longlong)(int)uVar22 * 4);
    local_5a8 = pTVar18;
    if (pTVar32 != pTVar18) {
      do {
        pTVar37 = local_590;
        uVar22 = *(uint *)(pTVar32->AllocatorInstance).InlineData;
        if (uVar22 != 0xffffffff) {
          uVar27 = uVar22 & this->ChunkMask;
          uVar22 = (int)uVar22 >> ((byte)this->ChunkBits & 0x1f);
          uVar24 = 0;
          if ((int)uVar22 < local_590->ArrayNum) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_558 = (FScriptContainerElement *)((longlong)(int)uVar22 * 0x58);
          pFVar15 = local_558 + (longlong)(pTVar37->AllocatorInstance).Data;
          uVar24 = 0;
          if ((int)uVar27 < *(int *)(pFVar15 + 0x20)) {
            uVar24 = ~uVar27 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar35 = pFVar15 + 0x10;
          if (*(FScriptContainerElement **)(pFVar15 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar35 = *(FScriptContainerElement **)(pFVar15 + 0x18);
          }
          local_550 = (longlong)(int)uVar27 * 4;
          puVar26 = (uint *)(*(longlong *)pFVar15 + (longlong)*(int *)(pFVar35 + local_550) * 4);
          uVar24 = 0;
          if ((int)uVar27 < *(int *)(pFVar15 + 0x38)) {
            uVar24 = ~uVar27 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar35 = pFVar15 + 0x28;
          if (*(FScriptContainerElement **)(pFVar15 + 0x30) != (FScriptContainerElement *)0x0) {
            pFVar35 = *(FScriptContainerElement **)(pFVar15 + 0x30);
          }
          iVar34 = *(int *)(pFVar35 + local_550);
          if ((iVar34 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar37 = local_590;
          puVar2 = puVar26 + iVar34;
          for (; puVar26 != puVar2; puVar26 = puVar26 + 1) {
            pTVar18 = local_5a8;
            this = local_5d0;
            if (*puVar26 == uVar21) goto LAB_1436621d0;
          }
          uVar24 = 0;
          if ((int)uVar22 < local_590->ArrayNum) {
            uVar24 = ~uVar22 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FChunk::Add((FChunk *)(local_558 + (longlong)(pTVar37->AllocatorInstance).Data),uVar27,
                      uVar21);
          pTVar18 = local_5a8;
          this = local_5d0;
        }
LAB_1436621d0:
        pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)
                  ((longlong)(local_598->AllocatorInstance).InlineData + 4);
        pTVar20 = local_568;
        pTVar37 = local_5c0;
        local_598 = pTVar32;
      } while (pTVar32 != pTVar18);
    }
    TStack_4c8.UnvisitedBitMask = TStack_4c8.UnvisitedBitMask & ~TStack_4c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c8);
    uVar22 = local_5c4;
  } while( true );
}

// ConditionalBuild @ 1436648c0

void __thiscall
FMeshElementIndexer::ConditionalBuild(FMeshElementIndexer *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if ((param_2 < (this->PerChannelIndices).ArrayNum) && (this->bEverythingStale == false)) {
    if (param_2 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->PerChannelIndices).AllocatorInstance.Data;
    if (*(int *)(pFVar1 + (longlong)param_2 * 0xb0 + 0x18) !=
        *(int *)(pFVar1 + (longlong)param_2 * 0xb0 + 0x44)) {
      pFVar5 = *(FScriptContainerElement **)(pFVar1 + (longlong)param_2 * 0xb0 + 0x50);
      if (*(FScriptContainerElement **)(pFVar1 + (longlong)param_2 * 0xb0 + 0x50) ==
          (FScriptContainerElement *)0x0) {
        pFVar5 = pFVar1 + (longlong)param_2 * 0xb0 + 0x48;
      }
      iVar4 = *(int *)(pFVar5 + (ulonglong)
                                (*(int *)(pFVar1 + (longlong)param_2 * 0xb0 + 0x58) - 1U & param_1)
                                * 4);
      if (iVar4 != -1) {
        do {
          if (*(int *)(*(longlong *)(pFVar1 + (longlong)param_2 * 0xb0 + 0x10) +
                      (longlong)iVar4 * 0xc) == param_1) {
            BuildIndex(this,param_2);
            return;
          }
          iVar4 = *(int *)(*(longlong *)(pFVar1 + (longlong)param_2 * 0xb0 + 0x10) + 4 +
                          (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
        return;
      }
    }
  }
  else {
    Build(this);
  }
  return;
}

// Find @ 14366c430

TArrayView<int_const_,int> * __thiscall
FMeshElementIndexer::Find
          (FMeshElementIndexer *this,TArrayView<int_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArrayView<int_const_,int> *pTVar6;
  longlong lVar7;
  uint uVar8;
  
  if (this->bSuspended != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bSuspended",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  ConditionalBuild(this,param_1,param_2);
  uVar1 = this->ChunkMask;
  uVar8 = param_1 >> ((byte)this->ChunkBits & 0x1f);
  if ((this->PerChannelIndices).ArrayNum <= param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyChannelIndex < PerChannelIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                       ,0x6c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  uVar5 = 0;
  if (param_2 < (this->PerChannelIndices).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar7 = (longlong)param_2 * 0xb0;
  if (*(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar7 + 8) == 0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    uVar5 = 0;
    if (param_2 < (this->PerChannelIndices).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pFVar2 = (this->PerChannelIndices).AllocatorInstance.Data;
    uVar5 = 0;
    if ((int)uVar8 < *(int *)(pFVar2 + lVar7 + 8)) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar3)();
        return pTVar6;
      }
    }
    FChunk::Get((FChunk *)((longlong)(int)uVar8 * 0x58 + *(longlong *)(pFVar2 + lVar7)),
                __return_storage_ptr__,uVar1 & param_1);
  }
  return __return_storage_ptr__;
}

// ForceRebuild @ 1436709b0

void __thiscall FMeshElementIndexer::ForceRebuild(FMeshElementIndexer *this)

{
  this->bSuspended = false;
  this->bEverythingStale = true;
  Build(this);
  return;
}

// RebuildIndex @ 14367e5d0

void __thiscall FMeshElementIndexer::RebuildIndex(FMeshElementIndexer *this,int param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  TMeshAttributeArraySet<int> *this_00;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FMeshElementContainer *pFVar9;
  TMeshAttributeArrayBase<int> *this_01;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  ForAnyElementType *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  longlong *plVar24;
  uint *puVar25;
  ForAnyElementType *pFVar26;
  ulonglong uVar27;
  longlong *plVar28;
  uint local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_88;
  uint *local_78;
  
  if ((this->bSuspended != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bSuspended",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xe3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xe6,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ReferencedElementType == (FMeshElementChannels *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferencedElementType != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xe7,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->ReferencedElementType->Channels).ArrayNum <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < ReferencedElementType->GetNumChannels()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xe8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->ReferencingAttributeRef).ArrayPtr == (FMeshAttributeArraySetBase *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferencingAttributeRef.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xe9,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (**(code **)(((this->ReferencingAttributeRef).ArrayPtr)->_padding_ + 0x68))();
  if ((iVar7 <= param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < ReferencingAttributeRef.GetNumChannels()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0xea,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = FMeshElementChannels::Get(this->ReferencedElementType,param_1);
  iVar7 = (pFVar9->BitArray).NumBits;
  uVar16 = this->ChunkMask + iVar7;
  bVar5 = (byte)this->ChunkBits & 0x1f;
  uVar17 = uVar16 >> bVar5;
  uVar18 = 0;
  if (param_1 < (this->PerChannelIndices).ArrayNum) {
    uVar18 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar22 = (this->PerChannelIndices).AllocatorInstance.Data + (longlong)param_1 * 0xb0;
  pFVar10 = pFVar22 + 0xc;
  if (*(int *)pFVar10 < 0) {
    DestructItems<FMeshElementIndexer::FChunk,int>
              (*(FChunk **)&pFVar22->field_0x0,*(int *)&pFVar22[8].field_0x0);
    *(undefined4 *)&pFVar22[8].field_0x0 = 0;
    if (*(int *)pFVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)pFVar22,0,(int *)pFVar10);
    }
  }
  else {
    DestructItems<FMeshElementIndexer::FChunk,int>
              (*(FChunk **)&pFVar22->field_0x0,*(int *)&pFVar22[8].field_0x0);
    *(undefined4 *)&pFVar22[8].field_0x0 = 0;
  }
  if (-1 < (int)(uVar16 >> bVar5)) {
    if (*(int *)pFVar10 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar17,(ForAnyElementType *)pFVar22,*(int *)&pFVar22[8].field_0x0,
                 (int *)pFVar10);
    }
    iVar8 = *(int *)&pFVar22[8].field_0x0;
    while (iVar8 < (int)uVar17) {
      uVar18 = this->ChunkBits;
      if (iVar8 == *(int *)pFVar10) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)pFVar22,(int *)pFVar10);
      }
      *(int *)&pFVar22[8].field_0x0 = iVar8 + 1;
      FChunk::FChunk((FChunk *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar8 * 0x58),0,
                     1 << ((byte)uVar18 & 0x1f));
      iVar8 = *(int *)&pFVar22[8].field_0x0;
    }
    iVar8 = ((this->ReferencingAttributeRef).ArrayPtr)->NumElements;
    if ((0 < iVar8) && (0 < iVar7)) {
      if (((this->ReferencingAttributeRef).Extent == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extent > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x484,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (TMeshAttributeArraySet<int> *)(this->ReferencingAttributeRef).ArrayPtr;
      if ((this_00 == (TMeshAttributeArraySet<int> *)0x0) || ((int)this_00->_padding_ == 0)) {
        local_res10 = (this->ReferencingAttributeRef).Extent;
        local_88 = 0;
        local_78 = (uint *)0x0;
      }
      else {
        this_01 = TMeshAttributeArraySet<int>::GetArrayForChannel(this_00,param_1);
        local_78 = (uint *)TMeshAttributeArrayBase<int>::GetElementBase(this_01,0);
        local_88 = ((this->ReferencingAttributeRef).ArrayPtr)->NumElements *
                   (this->ReferencingAttributeRef).Extent;
        if ((local_88 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res10 = (this->ReferencingAttributeRef).Extent;
        uVar18 = 0;
        puVar25 = local_78;
        if (0 < local_88) {
          do {
            uVar16 = 0;
            if ((int)uVar18 < local_88) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar16 = *puVar25;
            if (uVar16 != 0xffffffff) {
              uVar13 = uVar16 & this->ChunkMask;
              uVar16 = (int)uVar16 >> ((byte)this->ChunkBits & 0x1f);
              uVar17 = 0;
              if ((int)uVar16 < *(int *)&pFVar22[8].field_0x0) {
                uVar17 = ~uVar16 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar20 = *(longlong *)&pFVar22->field_0x0 + (longlong)(int)uVar16 * 0x58 + 0x40;
              uVar16 = 0;
              if ((int)uVar13 < *(int *)(lVar20 + 0x10)) {
                uVar16 = ~uVar13 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(longlong *)(lVar20 + 8) != 0) {
                lVar20 = *(longlong *)(lVar20 + 8);
              }
              piVar2 = (int *)(lVar20 + (longlong)(int)uVar13 * 4);
              *piVar2 = *piVar2 + 1;
            }
            uVar18 = uVar18 + 1;
            puVar25 = puVar25 + 1;
          } while ((int)uVar18 < local_88);
        }
      }
      uVar18 = *(uint *)&pFVar22[8].field_0x0;
      uVar12 = (ulonglong)(int)uVar18;
      pFVar26 = *(ForAnyElementType **)&pFVar22->field_0x0;
      pFVar15 = pFVar26 + 3;
      pFVar21 = pFVar26 + uVar12 * 0xb;
      while( true ) {
        if (*(int *)&pFVar22[8].field_0x0 != (int)uVar12) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FMeshElementIndexer::FChunk,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        uVar12 = 0;
        if (pFVar26 == pFVar21) break;
        uVar16 = 0;
        lVar20 = (longlong)(1 << ((byte)this->ChunkBits & 0x1f));
        lVar23 = 0;
        if (0 < lVar20) {
          do {
            uVar13 = ~uVar16 >> 0x1f;
            uVar17 = 0;
            if ((int)uVar16 < *(int *)&pFVar15[1].Data) {
              uVar17 = uVar13;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = pFVar15->Data;
            if (pFVar10 == (FScriptContainerElement *)0x0) {
              pFVar10 = (FScriptContainerElement *)(pFVar15 + -1);
            }
            *(int *)(pFVar10 + lVar23 * 4) = (int)uVar12;
            uVar17 = 0;
            if ((int)uVar16 < *(int *)&pFVar15[7].Data) {
              uVar17 = uVar13;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = pFVar15[6].Data;
            if (pFVar10 == (FScriptContainerElement *)0x0) {
              pFVar10 = (FScriptContainerElement *)(pFVar15 + 5);
            }
            iVar7 = *(int *)(pFVar10 + lVar23 * 4);
            if (*(int *)(pFVar10 + lVar23 * 4) < this->InitialSize) {
              iVar7 = this->InitialSize;
            }
            uVar17 = 0;
            if ((int)uVar16 < *(int *)&pFVar15[7].Data) {
              uVar17 = uVar13;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = (FScriptContainerElement *)(pFVar15 + 5);
            if (pFVar15[6].Data != (FScriptContainerElement *)0x0) {
              pFVar10 = pFVar15[6].Data;
            }
            *(int *)(pFVar10 + lVar23 * 4) = iVar7;
            uVar17 = 0;
            if ((int)uVar16 < *(int *)&pFVar15[7].Data) {
              uVar17 = uVar13;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar10 = (FScriptContainerElement *)(pFVar15 + 5);
            if (pFVar15[6].Data != (FScriptContainerElement *)0x0) {
              pFVar10 = pFVar15[6].Data;
            }
            uVar16 = uVar16 + 1;
            uVar12 = (ulonglong)(uint)((int)uVar12 + *(int *)(pFVar10 + lVar23 * 4));
            lVar23 = lVar23 + 1;
          } while (lVar23 < lVar20);
        }
        iVar7 = *(int *)&pFVar15[-2].Data;
        pFVar1 = pFVar15 + -2;
        uVar16 = (uint)uVar12;
        if (iVar7 < (int)uVar16) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar16 - iVar7,pFVar26,(int *)pFVar1,
                     (int *)((longlong)&pFVar15[-2].Data + 4));
        }
        else {
          if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar12);
          }
          if ((int)uVar16 < iVar7) {
            uVar17 = iVar7 - uVar16;
            if (((int)(uVar17 | uVar16) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar17 != 0) {
              iVar7 = (*(int *)&pFVar1->Data - uVar17) - uVar16;
              if (iVar7 != 0) {
                memmove(pFVar26->Data + (longlong)(int)uVar16 * 4,
                        pFVar26->Data + (longlong)(int)uVar16 * 4 + (longlong)(int)uVar17 * 4,
                        (longlong)iVar7 << 2);
              }
              *(uint *)&pFVar1->Data = *(int *)&pFVar1->Data - uVar17;
            }
          }
        }
        pFVar26 = pFVar26 + 0xb;
        pFVar15 = pFVar15 + 0xb;
        uVar12 = (ulonglong)uVar18;
      }
      uVar18 = 0;
      lVar20 = 0;
      do {
        uVar27 = (ulonglong)local_res10;
        if (local_res10 != 0) {
          do {
            uVar16 = 0;
            if ((int)uVar18 < local_88) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar16 = local_78[lVar20];
            if (uVar16 != 0xffffffff) {
              uVar17 = this->ChunkMask;
              uVar14 = (int)uVar16 >> ((byte)this->ChunkBits & 0x1f);
              uVar13 = 0;
              if ((int)uVar14 < *(int *)&pFVar22[8].field_0x0) {
                uVar13 = ~uVar14 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FChunk::AddUnsorted((FChunk *)
                                  (*(longlong *)&pFVar22->field_0x0 + (longlong)(int)uVar14 * 0x58),
                                  uVar17 & uVar16,(int)uVar12);
            }
            uVar18 = uVar18 + 1;
            lVar20 = lVar20 + 1;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        }
        uVar16 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar16;
      } while ((int)uVar16 < iVar8);
      uVar18 = *(uint *)&pFVar22[8].field_0x0;
      uVar12 = (ulonglong)(int)uVar18;
      plVar24 = *(longlong **)&pFVar22->field_0x0;
      local_res10._0_1_ = SUB41(uVar18,0);
      plVar28 = plVar24 + 3;
      plVar19 = plVar24 + uVar12 * 0xb;
      while( true ) {
        if (*(int *)&pFVar22[8].field_0x0 != (int)uVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FMeshElementIndexer::FChunk,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (plVar24 == plVar19) break;
        uVar16 = 0;
        lVar23 = 0;
        lVar20 = (longlong)(1 << ((byte)this->ChunkBits & 0x1f));
        if (0 < lVar20) {
          do {
            uVar17 = 0;
            if ((int)uVar16 < (int)plVar28[1]) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar11 = (longlong *)*plVar28;
            if (plVar11 == (longlong *)0x0) {
              plVar11 = plVar28 + -1;
            }
            iVar7 = *(int *)((longlong)plVar11 + lVar23 * 4);
            lVar3 = *plVar24;
            uVar17 = 0;
            if ((int)uVar16 < (int)plVar28[4]) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar11 = (longlong *)plVar28[3];
            if (plVar11 == (longlong *)0x0) {
              plVar11 = plVar28 + 2;
            }
            iVar8 = *(int *)((longlong)plVar11 + lVar23 * 4);
            if ((iVar8 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
                      ((int *)(lVar3 + (longlong)iVar7 * 4),iVar8,local_res10._0_1_,
                       (TLess<void>)local_res10._0_1_);
            uVar16 = uVar16 + 1;
            lVar23 = lVar23 + 1;
          } while (lVar23 < lVar20);
        }
        uVar12 = (ulonglong)uVar18;
        plVar24 = plVar24 + 0xb;
        plVar28 = plVar28 + 0xb;
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar22 + 0x10));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar22 + 0x60));
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
}

// RemoveKey @ 143688ba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMeshElementIndexer::RemoveKey(FMeshElementIndexer *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  if ((this->bSuspended == false) && (this->bEverythingStale == false)) {
    if ((this->PerChannelIndices).ArrayNum <= param_2) {
      TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
                (&this->PerChannelIndices,param_2 + 1,Default);
    }
    if ((param_1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x46,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar10 = param_1 >> ((byte)this->ChunkBits & 0x1f);
    uVar11 = param_1 & this->ChunkMask;
    uVar8 = (uint)~param_2 >> 0x1f;
    uVar4 = 0;
    if (param_2 < (this->PerChannelIndices).ArrayNum) {
      uVar4 = uVar8;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->PerChannelIndices).ArrayNum;
    lVar9 = (longlong)param_2 * 0xb0;
    if ((int)uVar10 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar9 + 8)) {
      uVar4 = 0;
      if (param_2 < iVar5) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->PerChannelIndices).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar10 < *(int *)(pFVar1 + lVar9 + 8)) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar9 = *(longlong *)(pFVar1 + lVar9) + (longlong)(int)uVar10 * 0x58;
      uVar4 = 0;
      if ((int)uVar11 < *(int *)(lVar9 + 0x38)) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = *(longlong *)(lVar9 + 0x30);
      if (*(longlong *)(lVar9 + 0x30) == 0) {
        lVar6 = lVar9 + 0x28;
      }
      *(undefined4 *)(lVar6 + (longlong)(int)uVar11 * 4) = 0;
    }
    else {
      uVar4 = 0;
      if (param_2 < iVar5) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->PerChannelIndices).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar9 + 0x18) != *(int *)(pFVar1 + lVar9 + 0x44)) {
        pFVar7 = *(FScriptContainerElement **)(pFVar1 + lVar9 + 0x50);
        if (*(FScriptContainerElement **)(pFVar1 + lVar9 + 0x50) == (FScriptContainerElement *)0x0)
        {
          pFVar7 = pFVar1 + lVar9 + 0x48;
        }
        iVar5 = *(int *)(pFVar7 + (ulonglong)(*(int *)(pFVar1 + lVar9 + 0x58) - 1U & param_1) * 4);
        if (iVar5 != -1) {
          do {
            if (*(int *)(*(longlong *)(pFVar1 + lVar9 + 0x10) + (longlong)iVar5 * 0xc) == param_1) {
              return;
            }
            iVar5 = *(int *)(*(longlong *)(pFVar1 + lVar9 + 0x10) + 4 + (longlong)iVar5 * 0xc);
          } while (iVar5 != -1);
        }
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerChannelIndices[KeyChannelIndex].StaleKeyIndices.Contains(KeyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// RemoveReferenceFromKey @ 143689620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshElementIndexer::RemoveReferenceFromKey
          (FMeshElementIndexer *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((this->bSuspended == false) && (this->bEverythingStale == false)) {
    if ((this->PerChannelIndices).ArrayNum <= param_3) {
      TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
                (&this->PerChannelIndices,param_3 + 1,Default);
    }
    if ((param_1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x61,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferenceIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x62,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = 0;
    uVar1 = this->ChunkMask;
    uVar9 = param_1 >> ((byte)this->ChunkBits & 0x1f);
    uVar10 = (uint)~param_3 >> 0x1f;
    uVar4 = uVar8;
    if (param_3 < (this->PerChannelIndices).ArrayNum) {
      uVar4 = uVar10;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->PerChannelIndices).ArrayNum;
    lVar11 = (longlong)param_3 * 0xb0;
    if ((int)uVar9 < *(int *)((this->PerChannelIndices).AllocatorInstance.Data + lVar11 + 8)) {
      uVar4 = uVar8;
      if (param_3 < iVar5) {
        uVar4 = uVar10;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->PerChannelIndices).AllocatorInstance.Data + lVar11;
      uVar4 = uVar8;
      if ((int)uVar9 < *(int *)(pFVar6 + 8)) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FChunk::Remove((FChunk *)((longlong)(int)uVar9 * 0x58 + *(longlong *)pFVar6),
                             uVar1 & param_1,param_2);
      if (!bVar3) {
        if (param_3 < (this->PerChannelIndices).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = (this->PerChannelIndices).AllocatorInstance.Data;
        if (*(int *)(pFVar6 + lVar11 + 0x18) != *(int *)(pFVar6 + lVar11 + 0x44)) {
          pFVar7 = *(FScriptContainerElement **)(pFVar6 + lVar11 + 0x50);
          if (*(FScriptContainerElement **)(pFVar6 + lVar11 + 0x50) ==
              (FScriptContainerElement *)0x0) {
            pFVar7 = pFVar6 + lVar11 + 0x48;
          }
          iVar5 = *(int *)(pFVar7 + (ulonglong)(*(int *)(pFVar6 + lVar11 + 0x58) - 1U & param_1) * 4
                          );
          if (iVar5 != -1) {
            do {
              if (*(int *)(*(longlong *)(pFVar6 + lVar11 + 0x10) + (longlong)iVar5 * 0xc) == param_1
                 ) {
                return;
              }
              iVar5 = *(int *)(*(longlong *)(pFVar6 + lVar11 + 0x10) + 4 + (longlong)iVar5 * 0xc);
            } while (iVar5 != -1);
          }
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PerChannelIndices[KeyChannelIndex].StaleKeyIndices.Contains(KeyIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                           ,0x6d,L"");
        if (bVar3) goto code_r0x00014368995e;
      }
    }
    else {
      if (param_3 < iVar5) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->PerChannelIndices).AllocatorInstance.Data;
      if (*(int *)(pFVar6 + lVar11 + 0x18) != *(int *)(pFVar6 + lVar11 + 0x44)) {
        pFVar7 = *(FScriptContainerElement **)(pFVar6 + lVar11 + 0x50);
        if (*(FScriptContainerElement **)(pFVar6 + lVar11 + 0x50) == (FScriptContainerElement *)0x0)
        {
          pFVar7 = pFVar6 + lVar11 + 0x48;
        }
        iVar5 = *(int *)(pFVar7 + (ulonglong)(*(int *)(pFVar6 + lVar11 + 0x58) - 1U & param_1) * 4);
        if (iVar5 != -1) {
          do {
            if (*(int *)(*(longlong *)(pFVar6 + lVar11 + 0x10) + (longlong)iVar5 * 0xc) == param_1)
            {
              return;
            }
            iVar5 = *(int *)(*(longlong *)(pFVar6 + lVar11 + 0x10) + 4 + (longlong)iVar5 * 0xc);
          } while (iVar5 != -1);
        }
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PerChannelIndices[KeyChannelIndex].StaleKeyIndices.Contains(KeyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                         ,0x72,L"");
      if (bVar3) {
code_r0x00014368995e:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// Reset @ 143689bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMeshElementIndexer::Reset(FMeshElementIndexer *this)

{
  int *piVar1;
  FIndexPerChannel *pFVar2;
  FMeshAttributeArraySetBase *pFVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = &(this->PerChannelIndices).ArrayMax;
  pFVar2 = (FIndexPerChannel *)(this->PerChannelIndices).AllocatorInstance.Data;
  iVar5 = (this->PerChannelIndices).ArrayNum;
  if ((this->PerChannelIndices).ArrayMax < 0) {
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(pFVar2,iVar5);
    (this->PerChannelIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(pFVar2,iVar5);
    (this->PerChannelIndices).ArrayNum = 0;
  }
  this->bSuspended = false;
  if ((this->ReferencedElementType != (FMeshElementChannels *)0x0) &&
     (pFVar3 = (this->ReferencingAttributeRef).ArrayPtr, pFVar3 != (FMeshAttributeArraySetBase *)0x0
     )) {
    iVar4 = (**(code **)(pFVar3->_padding_ + 0x68))();
    iVar5 = (this->ReferencedElementType->Channels).ArrayNum;
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
              (&this->PerChannelIndices,iVar5,Default);
    this->bEverythingStale = true;
  }
  return;
}

// Set @ 14368e5f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshElementIndexer::Set
          (FMeshElementIndexer *this,FMeshElementChannels *param_1,FMeshElementChannels *param_2,
          FName param_3,int param_4)

{
  int *piVar1;
  FIndexPerChannel *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMeshElementContainer *pFVar6;
  TTuple<FName,FAttributesSetEntry> *pTVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = &(this->PerChannelIndices).ArrayMax;
  pFVar2 = (FIndexPerChannel *)(this->PerChannelIndices).AllocatorInstance.Data;
  iVar9 = (this->PerChannelIndices).ArrayNum;
  if ((this->PerChannelIndices).ArrayMax < 0) {
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(pFVar2,iVar9);
    (this->PerChannelIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FMeshElementIndexer::FIndexPerChannel,int>(pFVar2,iVar9);
    (this->PerChannelIndices).ArrayNum = 0;
  }
  this->bSuspended = false;
  this->ReferencedElementType = param_1;
  if ((param_4 < 0) || ((param_2->Channels).ArrayNum <= param_4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReferencerChannelIndex >= 0 && ReferencerChannelIndex < Referencer->GetNumChannels()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementIndexer.cpp"
                       ,0x19,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = FMeshElementChannels::Get(param_2,param_4);
  pTVar7 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar6->Attributes,param_3);
  plVar8 = (longlong *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if ((plVar8 == (longlong *)0x0) || (local_28 = *plVar8, *(int *)(local_28 + 8) != 4)) {
    local_28 = 0;
    uStack_20 = 1;
  }
  else {
    uStack_20 = *(uint *)(local_28 + 0xc);
  }
  *(undefined4 *)&(this->ReferencingAttributeRef).ArrayPtr = (undefined4)local_28;
  *(undefined4 *)((longlong)&(this->ReferencingAttributeRef).ArrayPtr + 4) = local_28._4_4_;
  (this->ReferencingAttributeRef).Extent = uStack_20;
  *(undefined4 *)&(this->ReferencingAttributeRef).field_0xc = uStack_1c;
  iVar5 = (**(code **)(((this->ReferencingAttributeRef).ArrayPtr)->_padding_ + 0x68))();
  iVar9 = (this->ReferencedElementType->Channels).ArrayNum;
  if (iVar5 < iVar9) {
    iVar9 = iVar5;
  }
  TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PerChannelIndices,iVar9,Default);
  this->bEverythingStale = true;
  return;
}

// SetUnchunked @ 1436966b0

void __thiscall FMeshElementIndexer::SetUnchunked(FMeshElementIndexer *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  for (lVar1 = 0x3f; 1UL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  this->ChunkBits = (uint)lVar1;
  this->ChunkMask = (1 << ((byte)lVar1 & 0x1f)) - 1;
  if (((uint)lVar1 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkBits == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                         ,0x58,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->ChunkMask != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChunkMask == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementIndexer.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// UpdatePerChannelIndices @ 143697820

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FMeshElementIndexer::UpdatePerChannelIndices(FMeshElementIndexer *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(((this->ReferencingAttributeRef).ArrayPtr)->_padding_ + 0x68))();
  iVar1 = (this->ReferencedElementType->Channels).ArrayNum;
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  TArray<FMeshElementIndexer::FIndexPerChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PerChannelIndices,iVar1,Default);
  return;
}

