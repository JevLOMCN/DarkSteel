// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// operator() @ 14ccd5970

void __thiscall
TDefaultDelete<UE::Geometry::FMeshBoundaryLoops>::operator()
          (TDefaultDelete<UE::Geometry::FMeshBoundaryLoops> *this,FMeshBoundaryLoops *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (FMeshBoundaryLoops *)0x0) {
    pFVar1 = (param_1->VerticesTemp).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->FailureBowties).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (*(longlong *)&param_1->EdgeFilterFunc != 0) {
      plVar2 = *(longlong **)&(param_1->EdgeFilterFunc).field_0x28;
      plVar3 = (longlong *)&(param_1->EdgeFilterFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    DestructItems<UE::Geometry::FEdgeSpan,int>
              ((FEdgeSpan *)(param_1->Spans).AllocatorInstance.Data,(param_1->Spans).ArrayNum);
    pFVar1 = (param_1->Spans).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::Geometry::FEdgeLoop,int>
              ((FEdgeLoop *)(param_1->Loops).AllocatorInstance.Data,(param_1->Loops).ArrayNum);
    pFVar1 = (param_1->Loops).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xa0);
  }
  return;
}

