// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// ~TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID> @ 14c6e04b0

void __thiscall
TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::
~TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>
          (TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID> *this)

{
  TDoubleLinkedListNode *pTVar1;
  code *UNRECOVERED_JUMPTABLE;
  TDoubleLinkedListNode *pTVar2;
  
  this->_padding_ = (longlong)&___7__TDoubleLinkedList_UFSegmentAndSID_FEdgePath_Geometry_UE____6B_;
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x20);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 8);
  if (UNRECOVERED_JUMPTABLE == SetListSize) {
    this->ListSize = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6e0520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,0);
  return;
}

// Empty @ 14c72f4e0

void __thiscall
TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::Empty
          (TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID> *this)

{
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *pTVar2;
  
  pTVar2 = this->HeadNode;
  while (pTVar2 != (TDoubleLinkedListNode *)0x0) {
    pTVar1 = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x20);
    this->HeadNode = pTVar1;
    pTVar2 = pTVar1;
  }
  this->TailNode = (TDoubleLinkedListNode *)0x0;
  this->HeadNode = (TDoubleLinkedListNode *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014c72f536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))(this,0);
  return;
}

// SetListSize @ 14c762470

void __thiscall
TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID>::SetListSize
          (TDoubleLinkedList<UE::Geometry::FEdgePath::FSegmentAndSID> *this,int param_1)

{
  this->ListSize = param_1;
  return;
}

