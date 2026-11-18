// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// Insert @ 1433b9d00

void __thiscall
UE::Geometry::FIndexPriorityQueue::Insert(FIndexPriorityQueue *this,int param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  
  if ((this->EnableDebugChecks != false) &&
     (iVar11 = (this->id_to_index).ArrayNum, param_1 <= iVar11 + 1)) {
    uVar6 = 0;
    if (param_1 < iVar11) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)((this->id_to_index).AllocatorInstance.Data + (longlong)param_1 * 4);
    if ((((0 < (int)uVar6) && ((int)uVar6 <= this->num_nodes)) &&
        (0 < *(int *)(*(longlong *)
                       ((this->nodes).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
                      8 + (ulonglong)(uVar6 & 0x1ff) * 0xc))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contains(NodeID) == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                           ,0x7d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar11 = this->num_nodes + 1;
  this->num_nodes = iVar11;
  uVar6 = 0;
  if (param_1 < (this->id_to_index).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)((this->id_to_index).AllocatorInstance.Data + (longlong)param_1 * 4) = iVar11;
  uVar6 = this->num_nodes;
  uVar2 = (this->nodes).CurBlock;
  uVar8 = (this->nodes).CurBlockUsed;
  uVar10 = uVar2 * 0x200 + uVar8;
  if (uVar6 == uVar10) {
    if (uVar8 == 0x200) {
      if (uVar2 == (this->nodes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                  (&this->nodes);
      }
      (this->nodes).CurBlock = (this->nodes).CurBlock + 1;
      uVar8 = 0;
      uVar2 = (this->nodes).CurBlock;
      (this->nodes).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar6 <= uVar10) {
      uVar9 = (ulonglong)(uVar6 & 0x1ff);
      lVar3 = *(longlong *)
               ((this->nodes).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8);
      *(int *)(lVar3 + uVar9 * 0xc) = param_1;
      *(float *)(lVar3 + 4 + uVar9 * 0xc) = param_2;
      *(int *)(lVar3 + 8 + uVar9 * 0xc) = iVar11;
      goto LAB_1433b9f09;
    }
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::Resize(&this->nodes,uVar6);
    uVar8 = (this->nodes).CurBlockUsed;
    if (uVar8 == 0x200) {
      if ((this->nodes).CurBlock == (this->nodes).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
                  (&this->nodes);
      }
      (this->nodes).CurBlock = (this->nodes).CurBlock + 1;
      (this->nodes).CurBlockUsed = 0;
      uVar8 = 0;
    }
    uVar2 = (this->nodes).CurBlock;
  }
  lVar7 = (longlong)(int)uVar8;
  lVar3 = *(longlong *)((this->nodes).Blocks.AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
  *(int *)(lVar3 + lVar7 * 0xc) = param_1;
  *(float *)(lVar3 + 4 + lVar7 * 0xc) = param_2;
  *(int *)(lVar3 + 8 + lVar7 * 0xc) = iVar11;
  puVar1 = &(this->nodes).CurBlockUsed;
  *puVar1 = *puVar1 + 1;
LAB_1433b9f09:
  move_up(this,*(int *)(*(longlong *)
                         ((this->nodes).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)this->num_nodes >> 9) * 8) + 8 +
                       (ulonglong)(this->num_nodes & 0x1ff) * 0xc));
  return;
}

// move_down @ 143417ed0

void __thiscall UE::Geometry::FIndexPriorityQueue::move_down(FIndexPriorityQueue *this,int param_1)

{
  float *pfVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  float fVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  FQueueNode local_38;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar2 = *(longlong *)
           ((this->nodes).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar12 = this->num_nodes;
  local_38._0_8_ = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_38.index = *(int *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar5 = param_1 * 2;
  if ((int)uVar5 <= iVar12) {
    fVar6 = local_38.priority;
    uVar10 = param_1;
    do {
      pFVar3 = (this->nodes).Blocks.AllocatorInstance.Data;
      fVar13 = *(float *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 >> 9) * 8) + 4 +
                         (ulonglong)(uVar5 & 0x1ff) * 0xc);
      uVar11 = uVar5;
      if (fVar6 <= fVar13) {
        uVar11 = uVar10;
      }
      uVar8 = (ulonglong)uVar11;
      uVar11 = uVar5 + 1;
      if ((int)uVar11 <= iVar12) {
        if (fVar6 <= fVar13) {
          fVar13 = fVar6;
        }
        pfVar1 = (float *)(*(longlong *)(pFVar3 + (ulonglong)(uVar11 >> 9) * 8) + 4 +
                          (ulonglong)(uVar5 + 1 & 0x1ff) * 0xc);
        if (*pfVar1 <= fVar13 && fVar13 != *pfVar1) {
          uVar8 = (ulonglong)uVar11;
        }
      }
      uVar11 = (uint)uVar8;
      if (uVar11 == uVar10) break;
      local_28 = *(undefined8 *)
                  (*(longlong *)(pFVar3 + (uVar8 >> 9) * 8) + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      local_20 = *(undefined4 *)
                  (*(longlong *)(pFVar3 + (uVar8 >> 9) * 8) + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc)
      ;
      lVar9 = (longlong)(int)local_28;
      lVar2 = *(longlong *)(pFVar3 + (ulonglong)(uVar10 >> 9) * 8);
      *(undefined8 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0xc) = local_28;
      *(uint *)(lVar2 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc) = uVar10;
      if ((int)local_28 < 0 || (this->id_to_index).ArrayNum <= (int)local_28) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar5 = uVar11 * 2;
      *(uint *)((this->id_to_index).AllocatorInstance.Data + lVar9 * 4) = uVar10;
      iVar12 = this->num_nodes;
      uVar10 = uVar11;
    } while ((int)uVar5 <= iVar12);
    if (uVar10 != param_1) {
      set(this,uVar10,&local_38);
    }
  }
  return;
}

// move_up @ 143418090

void __thiscall UE::Geometry::FIndexPriorityQueue::move_up(FIndexPriorityQueue *this,int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint local_68;
  float fStack_64;
  int local_58;
  
  pFVar11 = (this->nodes).Blocks.AllocatorInstance.Data;
  uVar2 = *(undefined8 *)
           (*(longlong *)(pFVar11 + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0xc);
  if (0 < param_1 / 2) {
    fStack_64 = (float)((ulonglong)uVar2 >> 0x20);
    uVar9 = param_1;
    uVar10 = param_1 / 2;
    do {
      uVar8 = (ulonglong)(uVar10 & 0x1ff);
      pfVar1 = (float *)(*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + 4 + uVar8 * 0xc);
      if (*pfVar1 <= fStack_64 && fStack_64 != *pfVar1) break;
      uVar3 = *(undefined8 *)(*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + uVar8 * 0xc);
      local_58 = (int)uVar3;
      lVar4 = *(longlong *)(pFVar11 + (ulonglong)(uVar9 >> 9) * 8);
      *(undefined8 *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0xc) = uVar3;
      *(uint *)(lVar4 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc) = uVar9;
      if ((local_58 < 0 || (this->id_to_index).ArrayNum <= local_58) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)((this->id_to_index).AllocatorInstance.Data + (longlong)local_58 * 4) = uVar9;
      pFVar11 = (this->nodes).Blocks.AllocatorInstance.Data;
      uVar7 = *(int *)(*(longlong *)(pFVar11 + (ulonglong)(uVar10 >> 9) * 8) + 8 + uVar8 * 0xc) / 2;
      uVar9 = uVar10;
      uVar10 = uVar7;
    } while (0 < (int)uVar7);
    if (uVar9 != param_1) {
      local_68 = (uint)uVar2;
      lVar4 = *(longlong *)(pFVar11 + (ulonglong)(uVar9 >> 9) * 8);
      *(undefined8 *)(lVar4 + (ulonglong)(uVar9 & 0x1ff) * 0xc) = uVar2;
      *(uint *)(lVar4 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc) = uVar9;
      uVar10 = 0;
      if ((int)local_68 < (this->id_to_index).ArrayNum) {
        uVar10 = ~local_68 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)((this->id_to_index).AllocatorInstance.Data + (longlong)(int)local_68 * 4) = uVar9;
    }
  }
  return;
}

// remove_at_index @ 14342fb60

void __thiscall
UE::Geometry::FIndexPriorityQueue::remove_at_index(FIndexPriorityQueue *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_38;
  int local_28;
  
  uVar10 = this->num_nodes;
  pFVar5 = (this->nodes).Blocks.AllocatorInstance.Data;
  uVar11 = (ulonglong)(uVar10 & 0x1ff);
  uVar13 = (ulonglong)(uVar10 >> 9);
  if (param_1 != uVar10) {
    uVar12 = (ulonglong)(param_1 & 0x1ff);
    lVar6 = *(longlong *)(pFVar5 + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(undefined8 *)(lVar6 + uVar12 * 0xc);
    uVar4 = *(undefined8 *)(*(longlong *)(pFVar5 + uVar13 * 8) + uVar11 * 0xc);
    *(undefined8 *)(lVar6 + uVar12 * 0xc) = uVar4;
    *(int *)(lVar6 + 8 + uVar12 * 0xc) = param_1;
    local_38 = (int)uVar4;
    lVar6 = *(longlong *)((this->nodes).Blocks.AllocatorInstance.Data + uVar13 * 8);
    *(undefined8 *)(lVar6 + uVar11 * 0xc) = uVar3;
    *(uint *)(lVar6 + 8 + uVar11 * 0xc) = uVar10;
    if (local_38 < 0 || (this->id_to_index).ArrayNum <= local_38) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(int *)((this->id_to_index).AllocatorInstance.Data + (longlong)local_38 * 4) = param_1;
    local_28 = (int)uVar3;
    if (local_28 < 0 || (this->id_to_index).ArrayNum <= local_28) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(uint *)((this->id_to_index).AllocatorInstance.Data + (longlong)local_28 * 4) = uVar10;
    uVar10 = *(uint *)(*(longlong *)
                        ((this->nodes).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)this->num_nodes >> 9) * 8) +
                      (ulonglong)(this->num_nodes & 0x1ff) * 0xc);
    uVar9 = 0;
    if ((int)uVar10 < (this->id_to_index).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(undefined4 *)((this->id_to_index).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
         0xffffffff;
    uVar11 = (ulonglong)(this->num_nodes & 0x1ff);
    lVar6 = *(longlong *)
             ((this->nodes).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)this->num_nodes >> 9) * 8);
    *(undefined8 *)(lVar6 + uVar11 * 0xc) = 0xffffffff;
    *(undefined4 *)(lVar6 + 8 + uVar11 * 0xc) = 0;
    this->num_nodes = this->num_nodes + -1;
    uVar10 = param_1 / 2;
    if (((int)uVar10 < 1) ||
       (pFVar5 = (this->nodes).Blocks.AllocatorInstance.Data,
       fVar2 = *(float *)(*(longlong *)(pFVar5 + (ulonglong)(uVar10 >> 9) * 8) + 4 +
                         (ulonglong)(uVar10 & 0x1ff) * 0xc),
       pfVar1 = (float *)(*(longlong *)(pFVar5 + (ulonglong)((uint)param_1 >> 9) * 8) + 4 +
                         uVar12 * 0xc), fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
      move_down(this,param_1);
    }
    else {
      move_up(this,param_1);
    }
    return;
  }
  uVar10 = *(uint *)(*(longlong *)(pFVar5 + uVar13 * 8) + uVar11 * 0xc);
  uVar9 = 0;
  if ((int)uVar10 < (this->id_to_index).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined4 *)((this->id_to_index).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
       0xffffffff;
  uVar11 = (ulonglong)(this->num_nodes & 0x1ff);
  lVar6 = *(longlong *)
           ((this->nodes).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)this->num_nodes >> 9) * 8);
  *(undefined8 *)(lVar6 + uVar11 * 0xc) = 0xffffffff;
  *(undefined4 *)(lVar6 + 8 + uVar11 * 0xc) = 0;
  this->num_nodes = this->num_nodes + -1;
  return;
}

// set @ 1434307f0

void __thiscall
UE::Geometry::FIndexPriorityQueue::set(FIndexPriorityQueue *this,int param_1,FQueueNode *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  param_2->index = param_1;
  lVar2 = *(longlong *)
           ((this->nodes).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc) = *(undefined8 *)param_2;
  *(int *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc) = param_1;
  uVar1 = param_2->id;
  uVar5 = 0;
  if ((int)uVar1 < (this->id_to_index).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)((this->id_to_index).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) = param_1;
  return;
}

