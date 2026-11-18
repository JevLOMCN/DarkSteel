// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// FIndexPriorityQueue @ 14c6df270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FIndexPriorityQueue * __thiscall
UE::Geometry::FIndexPriorityQueue::FIndexPriorityQueue(FIndexPriorityQueue *this)

{
  int *piVar1;
  
  this->EnableDebugChecks = false;
  (this->nodes).CurBlock = 0;
  (this->nodes).CurBlockUsed = 0;
  (this->nodes).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->nodes).Blocks.ArrayNum = 0;
  (this->nodes).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock(&this->nodes)
  ;
  piVar1 = &(this->id_to_index).ArrayMax;
  *piVar1 = 0;
  (this->id_to_index).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->id_to_index).ArrayNum = 0;
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
            (&this->nodes,1,No);
  (this->nodes).CurBlock = 0;
  (this->nodes).CurBlockUsed = 0;
  if ((this->nodes).Blocks.ArrayNum == 0) {
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
              (&this->nodes);
  }
  (this->id_to_index).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->id_to_index).AllocatorInstance,0,piVar1);
  }
  this->num_nodes = 0;
  return this;
}

// Contains @ 14c7273a0

bool __thiscall UE::Geometry::FIndexPriorityQueue::Contains(FIndexPriorityQueue *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->id_to_index).ArrayNum;
  if (param_1 <= iVar1 + 1) {
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    uVar5 = *(uint *)((this->id_to_index).AllocatorInstance.Data + (longlong)param_1 * 4);
    if ((0 < (int)uVar5) && ((int)uVar5 <= this->num_nodes)) {
      return 0 < *(int *)(*(longlong *)
                           ((this->nodes).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar5 >> 9) * 8) + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
    }
  }
  return false;
}

// Initialize @ 14c744a10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FIndexPriorityQueue::Initialize(FIndexPriorityQueue *this,int param_1)

{
  int iVar1;
  int local_res8 [2];
  
  TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::TruncateBlocks
            (&this->nodes,1,No);
  iVar1 = (this->nodes).Blocks.ArrayNum;
  (this->nodes).CurBlock = 0;
  (this->nodes).CurBlockUsed = 0;
  if (iVar1 == 0) {
    TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::AddAllocatedBlock
              (&this->nodes);
  }
  local_res8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->id_to_index,local_res8,param_1);
  this->num_nodes = 0;
  return;
}

// on_node_updated @ 14c77f4b0

void __thiscall
UE::Geometry::FIndexPriorityQueue::on_node_updated(FIndexPriorityQueue *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  
  uVar4 = param_1 / 2;
  if ((0 < (int)uVar4) &&
     (pFVar3 = (this->nodes).Blocks.AllocatorInstance.Data,
     fVar2 = *(float *)(*(longlong *)(pFVar3 + (ulonglong)(uVar4 >> 9) * 8) + 4 +
                       (ulonglong)(uVar4 & 0x1ff) * 0xc),
     pfVar1 = (float *)(*(longlong *)(pFVar3 + (ulonglong)((uint)param_1 >> 9) * 8) + 4 +
                       (ulonglong)(param_1 & 0x1ff) * 0xc), *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
    move_up(this,param_1);
    return;
  }
  move_down(this,param_1);
  return;
}

// Update @ 14c84f3e0

void __thiscall
UE::Geometry::FIndexPriorityQueue::Update(FIndexPriorityQueue *this,int param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (this->EnableDebugChecks != false) {
    bVar3 = Contains(this,param_1);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Contains(NodeID) == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\IndexPriorityQueue.h"
                         ,0xb0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  uVar4 = 0;
  if (param_1 < (this->id_to_index).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  uVar4 = *(uint *)((this->id_to_index).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar5 = (ulonglong)(uVar4 & 0x1ff);
  lVar1 = *(longlong *)((this->nodes).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8);
  *(ulonglong *)(lVar1 + uVar5 * 0xc) = CONCAT44(param_2,(int)*(undefined8 *)(lVar1 + uVar5 * 0xc));
  *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc);
  on_node_updated(this,uVar4);
  return;
}

