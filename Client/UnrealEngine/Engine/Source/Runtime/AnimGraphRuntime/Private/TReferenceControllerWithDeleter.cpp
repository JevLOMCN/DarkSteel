// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// DestroyObject @ 146423070

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRBFSolverData,SharedPointerInternals::DefaultDeleter<FRBFSolverData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRBFSolverData,SharedPointerInternals::DefaultDeleter<FRBFSolverData>,1>
                *this)

{
  FRBFSolverData *pFVar1;
  longlong *plVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRBFSolverData *)0x0) {
    if (*(longlong *)&(pFVar1->Rbf).WeightFunc != 0) {
      plVar2 = *(longlong **)&(pFVar1->Rbf).WeightFunc.field_0x28;
      plVar5 = (longlong *)&(pFVar1->Rbf).WeightFunc.field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    pvVar3 = (void *)(pFVar1->Rbf)._padding_;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    DestructItems<FRBFEntry,int>
              ((FRBFEntry *)(pFVar1->EntryTargets).AllocatorInstance.Data,
               (pFVar1->EntryTargets).ArrayNum);
    pFVar4 = (pFVar1->EntryTargets).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar1,0xb0);
    return;
  }
  return;
}

