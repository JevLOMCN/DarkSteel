// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// FKDTreeImplementation<> @ 14a89f890

FKDTreeImplementation * __thiscall
UE::PoseSearch::FKDTreeImplementation::FKDTreeImplementation<>
          (FKDTreeImplementation *this,int param_1,FDataSource *param_2,
          KDTreeSingleIndexAdaptorParams *param_3)

{
  int iVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(FDataSource **)&this->field_0x78 = param_2;
  *(ulong64 *)&this->field_0x80 = param_3->leaf_max_size;
  *(FDataSource **)&this->field_0x88 = param_2;
  *(undefined8 *)&this->field_0x18 = 0;
  iVar1 = param_2->PointCount;
  *(longlong *)&this->field_0x28 = (longlong)iVar1;
  *(longlong *)&this->field_0x30 = (longlong)iVar1;
  *(int *)&this->field_0x38 = param_1;
  *(ulong64 *)&this->field_0x20 = param_3->leaf_max_size;
  nanoflann::
  KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,-1,int>
  ::buildIndex((KDTreeSingleIndexAdaptor<nanoflann::L2_Simple_Adaptor<float,UE::PoseSearch::FKDTree::FDataSource,float,unsigned_int>,UE::PoseSearch::FKDTree::FDataSource,_1,int>
                *)this);
  return this;
}

// CompareNodes @ 14a8b1f50

bool __cdecl UE::PoseSearch::FKDTreeImplementation::CompareNodes(Node **param_1,Node **param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *pNVar3;
  bool bVar4;
  
  pNVar1 = *param_1;
  pNVar2 = pNVar1->child2;
  if ((pNVar1->child1 == (Node *)0x0) && (pNVar2 == (Node *)0x0)) {
    if (((pNVar1->node_type).lr.left != ((*param_2)->node_type).lr.left) ||
       ((pNVar1->node_type).lr.right != ((*param_2)->node_type).lr.right)) {
      return false;
    }
  }
  else {
    pNVar3 = *param_2;
    if ((pNVar1->node_type).sub.divfeat != (pNVar3->node_type).sub.divfeat) {
      return false;
    }
    if ((pNVar3->node_type).sub.divhigh != (pNVar1->node_type).sub.divhigh) {
      return false;
    }
    if ((pNVar3->node_type).sub.divlow != (pNVar1->node_type).sub.divlow) {
      return false;
    }
    if ((pNVar1->child1 != (Node *)0x0) &&
       (bVar4 = CompareNodes(&pNVar1->child1,&pNVar3->child1), !bVar4)) {
      return false;
    }
    if (pNVar2 != (Node *)0x0) {
      bVar4 = CompareNodes(&(*param_1)->child2,&(*param_2)->child2);
      return bVar4;
    }
  }
  return true;
}

