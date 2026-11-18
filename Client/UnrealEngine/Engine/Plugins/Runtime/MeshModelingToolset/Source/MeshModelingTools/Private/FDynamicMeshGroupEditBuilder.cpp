// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14ccb89d0

void __thiscall
FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FDynamicMeshGroupEditBuilder *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar2) break;
    SaveTriangle(this,*(int *)pFVar3);
    pFVar3 = pFVar3 + 4;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

