// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// addPoint @ 14a8d1880

bool __thiscall
UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::addPoint
          (FKNNMaxHeapResultSet *this,float param_1,int param_2)

{
  int iVar1;
  FResult FVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FResult *pFVar6;
  int iVar7;
  int iVar8;
  
  if ((this->MaxHeap).ArrayNum == this->MaxHeapNum) {
    pFVar6 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::operator[]
                       (&this->MaxHeap,0);
    if (pFVar6->Distance <= param_1) {
      return true;
    }
    pFVar6 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::operator[]
                       (&this->MaxHeap,0);
    pFVar6->Distance = param_1;
    pFVar6 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::operator[]
                       (&this->MaxHeap,0);
    iVar8 = 0;
    pFVar6->Index = param_2;
    iVar1 = this->MaxHeapNum;
    pFVar6 = (this->MaxHeap).DataPtr;
    if (1 < iVar1) {
      do {
        iVar3 = iVar8 * 2;
        iVar7 = iVar3 + 1;
        if (iVar3 + 2 < iVar1) {
          if (pFVar6[(longlong)iVar3 + 2].Distance <= pFVar6[iVar7].Distance &&
              pFVar6[iVar7].Distance != pFVar6[(longlong)iVar3 + 2].Distance) {
            iVar7 = iVar3;
          }
          iVar7 = iVar7 + 1;
        }
        if (pFVar6[iVar7].Distance <= pFVar6[iVar8].Distance) break;
        FVar2 = pFVar6[iVar8];
        pFVar6[iVar8] = pFVar6[iVar7];
        pFVar6[iVar7] = FVar2;
        iVar8 = iVar7;
      } while (iVar7 * 2 + 1 < iVar1);
    }
  }
  else {
    pFVar6 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::operator[]
                       (&this->MaxHeap,this->MaxHeapNum);
    FVar2.Index = param_2;
    FVar2.Distance = param_1;
    *pFVar6 = FVar2;
    pFVar6 = (this->MaxHeap).DataPtr;
    uVar4 = this->MaxHeapNum;
    while (0 < (int)uVar4) {
      uVar5 = (int)(uVar4 - 1) / 2;
      if (pFVar6[uVar4].Distance <= pFVar6[(int)uVar5].Distance) break;
      FVar2 = pFVar6[uVar4];
      pFVar6[uVar4] = pFVar6[(int)uVar5];
      pFVar6[(int)uVar5] = FVar2;
      uVar4 = uVar5;
    }
    this->MaxHeapNum = this->MaxHeapNum + 1;
    if ((this->MaxHeap).ArrayNum != this->MaxHeapNum) {
      return true;
    }
  }
  pFVar6 = TArrayView<UE::PoseSearch::FKDTree::FKNNMaxHeapResultSet::FResult,int>::operator[]
                     (&this->MaxHeap,0);
  this->WorstDist = pFVar6->Distance;
  return true;
}

