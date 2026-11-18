// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// IsConnectedToVertices @ 14c7509c0

bool __thiscall
UE::Geometry::FGroupTopology::FGroupEdge::IsConnectedToVertices
          (FGroupEdge *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Span).Vertices.AllocatorInstance.Data;
  iVar2 = (this->Span).Vertices.ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Span).Vertices.ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar3 = (param_1->Hash).SecondaryData;
      FVar5 = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar5 = FVar3;
      }
      iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(param_1->HashSize - 1U & *(uint *)pFVar6) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar4 * 0xc) == *(uint *)pFVar6)
          {
            return true;
          }
          iVar4 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    pFVar6 = pFVar6 + 4;
  }
  return false;
}

