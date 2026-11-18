// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// ~FEdgePath @ 14c6e12e0

void __thiscall UE::Geometry::FEdgePath::~FEdgePath(FEdgePath *this)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<int,512>::Empty(&(this->DirectedSegmentRefCounts).FreeIndices,0);
  pFVar1 = (this->DirectedSegmentRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->DirectedSegmentRefCounts).RefCounts,0);
  pFVar1 = (this->DirectedSegmentRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
  ::
  ~TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
            (&this->SIDtoNode);
  TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::
  ~TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>(&this->PathLinkList);
  return;
}

// AppendSegment @ 14c707650

int __thiscall UE::Geometry::FEdgePath::AppendSegment(FEdgePath *this,FDirectedSegment *param_1)

{
  int iVar1;
  int iVar2;
  TDoubleLinkedListNode *pTVar3;
  uint uVar4;
  TDoubleLinkedListNode *pTVar5;
  TDoubleLinkedListNode *local_res8;
  
  uVar4 = FRefCountVector::Allocate(&this->DirectedSegmentRefCounts);
  iVar1 = param_1->EID;
  iVar2 = param_1->HeadIndex;
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 != (TDoubleLinkedListNode *)0x0) {
    *(int *)&pTVar5->Value = iVar1;
    *(int *)&(pTVar5->Value).field_0x4 = iVar2;
    (pTVar5->Value).SID = uVar4;
    pTVar5->NextNode = (TDoubleLinkedListNode *)0x0;
    pTVar5->PrevNode = (TDoubleLinkedListNode *)0x0;
    pTVar3 = (this->PathLinkList).TailNode;
    if (pTVar3 == (TDoubleLinkedListNode *)0x0) {
      (this->PathLinkList).HeadNode = pTVar5;
    }
    else {
      pTVar3->NextNode = pTVar5;
      pTVar5->PrevNode = (this->PathLinkList).TailNode;
    }
    (this->PathLinkList).TailNode = pTVar5;
    (**(code **)((this->PathLinkList)._padding_ + 8))(this,(this->PathLinkList).ListSize + 1);
  }
  local_res8 = (this->PathLinkList).TailNode;
  TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
  ::InsertAt(&this->SIDtoNode,&local_res8,uVar4);
  return uVar4;
}

// GetHeadSegmentID @ 14c73c980

int __thiscall UE::Geometry::FEdgePath::GetHeadSegmentID(FEdgePath *this)

{
  TDoubleLinkedListNode *pTVar1;
  
  pTVar1 = (this->PathLinkList).HeadNode;
  if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
    return -1;
  }
  return (pTVar1->Value).SID;
}

// GetNextSegmentID @ 14c73e370

int __thiscall UE::Geometry::FEdgePath::GetNextSegmentID(FEdgePath *this,int param_1)

{
  longlong lVar1;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->DirectedSegmentRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->DirectedSegmentRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)
                              ((this->DirectedSegmentRefCounts).RefCounts.Blocks.AllocatorInstance.
                               Data + lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)((this->SIDtoNode).Blocks.AllocatorInstance.Data + lVar1) +
                   (ulonglong)(param_1 & 0x1ff) * 8) + 0x10), lVar1 != 0)) {
      return *(int *)(lVar1 + 8);
    }
  }
  return -1;
}

// GetPrevSegmentID @ 14c740730

int __thiscall UE::Geometry::FEdgePath::GetPrevSegmentID(FEdgePath *this,int param_1)

{
  longlong lVar1;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->DirectedSegmentRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->DirectedSegmentRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if (((ushort)(*(short *)(*(longlong *)
                              ((this->DirectedSegmentRefCounts).RefCounts.Blocks.AllocatorInstance.
                               Data + lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)((this->SIDtoNode).Blocks.AllocatorInstance.Data + lVar1) +
                   (ulonglong)(param_1 & 0x1ff) * 8) + 0x18), lVar1 != 0)) {
      return *(int *)(lVar1 + 8);
    }
  }
  return -1;
}

// GetSegment @ 14c7410f0

FDirectedSegment __thiscall UE::Geometry::FEdgePath::GetSegment(FEdgePath *this,int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int in_register_00000014;
  FDirectedSegment FVar3;
  uint in_R8D;
  
  FVar3.HeadIndex = in_register_00000014;
  FVar3.EID = param_1;
  *(undefined8 *)FVar3 = 0xffffffffffffffff;
  if ((-1 < (int)in_R8D) &&
     ((int)in_R8D <
      (int)((this->DirectedSegmentRefCounts).RefCounts.CurBlock * 0x200 +
           (this->DirectedSegmentRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)(in_R8D >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->DirectedSegmentRefCounts).RefCounts.Blocks.AllocatorInstance.
                              Data + lVar1) + (ulonglong)(in_R8D & 0x1ff) * 2) - 1U) < 0xfffe) {
      puVar2 = *(undefined4 **)
                (*(longlong *)((this->SIDtoNode).Blocks.AllocatorInstance.Data + lVar1) +
                (ulonglong)(in_R8D & 0x1ff) * 8);
      *(undefined4 *)FVar3 = *puVar2;
      *(undefined4 *)((longlong)FVar3 + 4) = puVar2[1];
    }
  }
  return FVar3;
}

// GetTailSegmentID @ 14c7438f0

int __thiscall UE::Geometry::FEdgePath::GetTailSegmentID(FEdgePath *this)

{
  TDoubleLinkedListNode *pTVar1;
  
  pTVar1 = (this->PathLinkList).TailNode;
  if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
    return -1;
  }
  return (pTVar1->Value).SID;
}

// InsertSegmentBefore @ 14c74e6c0

int __thiscall
UE::Geometry::FEdgePath::InsertSegmentBefore(FEdgePath *this,FDirectedSegment *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  TDoubleLinkedListNode *pTVar3;
  uint uVar4;
  TDoubleLinkedListNode *pTVar5;
  TDoubleLinkedListNode *pTVar6;
  TDoubleLinkedListNode *local_res8;
  
  if (param_2 < 0) {
    pTVar6 = (TDoubleLinkedListNode *)0x0;
  }
  else {
    pTVar6 = *(TDoubleLinkedListNode **)
              (*(longlong *)
                ((this->SIDtoNode).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 8);
  }
  uVar4 = FRefCountVector::Allocate(&this->DirectedSegmentRefCounts);
  iVar1 = param_1->EID;
  iVar2 = param_1->HeadIndex;
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 != (TDoubleLinkedListNode *)0x0) {
    *(int *)&pTVar5->Value = iVar1;
    *(int *)&(pTVar5->Value).field_0x4 = iVar2;
    (pTVar5->Value).SID = uVar4;
    pTVar5->NextNode = (TDoubleLinkedListNode *)0x0;
    pTVar5->PrevNode = (TDoubleLinkedListNode *)0x0;
    if ((pTVar6 != (TDoubleLinkedListNode *)0x0) && (pTVar6 != (this->PathLinkList).HeadNode)) {
      pTVar5->PrevNode = pTVar6->PrevNode;
      pTVar5->NextNode = pTVar6;
      pTVar6->PrevNode->NextNode = pTVar5;
      pTVar6->PrevNode = pTVar5;
      (**(code **)((this->PathLinkList)._padding_ + 8))(this,(this->PathLinkList).ListSize + 1);
      local_res8 = pTVar6->PrevNode;
      goto LAB_14c74e7ac;
    }
    pTVar3 = (this->PathLinkList).HeadNode;
    if (pTVar3 == (TDoubleLinkedListNode *)0x0) {
      (this->PathLinkList).TailNode = pTVar5;
    }
    else {
      pTVar5->NextNode = pTVar3;
      ((this->PathLinkList).HeadNode)->PrevNode = pTVar5;
    }
    (this->PathLinkList).HeadNode = pTVar5;
    (**(code **)((this->PathLinkList)._padding_ + 8))(this,(this->PathLinkList).ListSize + 1);
  }
  if (pTVar6 == (TDoubleLinkedListNode *)0x0) {
    local_res8 = (this->PathLinkList).TailNode;
  }
  else {
    local_res8 = pTVar6->PrevNode;
  }
LAB_14c74e7ac:
  TDynamicVector<TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::TDoubleLinkedListNode_*,512>
  ::InsertAt(&this->SIDtoNode,&local_res8,uVar4);
  return uVar4;
}

// RemoveSegment @ 14c75d810

void __thiscall UE::Geometry::FEdgePath::RemoveSegment(FEdgePath *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  TDoubleLinkedListNode *pTVar3;
  TDoubleLinkedListNode *pTVar4;
  
  if ((-1 < param_1) &&
     (param_1 < (int)((this->DirectedSegmentRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->DirectedSegmentRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((this->DirectedSegmentRefCounts).RefCounts.Blocks.AllocatorInstance.
                              Data + lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar2 = (ulonglong)(param_1 & 0x1ff) * 8;
      pTVar3 = *(TDoubleLinkedListNode **)
                (lVar2 + *(longlong *)((this->SIDtoNode).Blocks.AllocatorInstance.Data + lVar1));
      if (pTVar3 != (TDoubleLinkedListNode *)0x0) {
        if ((this->PathLinkList).ListSize == 1) {
          TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::Empty(&this->PathLinkList);
        }
        else {
          pTVar4 = (this->PathLinkList).HeadNode;
          if (pTVar3 == pTVar4) {
            pTVar4 = pTVar4->NextNode;
            (this->PathLinkList).HeadNode = pTVar4;
            pTVar4->PrevNode = (TDoubleLinkedListNode *)0x0;
          }
          else {
            pTVar4 = (this->PathLinkList).TailNode;
            if (pTVar3 == pTVar4) {
              pTVar4 = pTVar4->PrevNode;
              (this->PathLinkList).TailNode = pTVar4;
              pTVar4->NextNode = (TDoubleLinkedListNode *)0x0;
            }
            else {
              pTVar3->NextNode->PrevNode = pTVar3->PrevNode;
              pTVar3->PrevNode->NextNode = pTVar3->NextNode;
            }
          }
          ::operator_delete(pTVar3,0x20);
          (**(code **)((this->PathLinkList)._padding_ + 8))(this,(this->PathLinkList).ListSize + -1)
          ;
        }
      }
      *(undefined8 *)
       (lVar2 + *(longlong *)((this->SIDtoNode).Blocks.AllocatorInstance.Data + lVar1)) = 0;
      FRefCountVector::Decrement(&this->DirectedSegmentRefCounts,param_1,1);
    }
  }
  return;
}

