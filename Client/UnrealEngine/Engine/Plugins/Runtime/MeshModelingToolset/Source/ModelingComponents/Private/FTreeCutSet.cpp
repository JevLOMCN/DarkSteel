// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// operator= @ 14ca6c090

FTreeCutSet * __thiscall
UE::Geometry::FDynamicMeshOctree3::FTreeCutSet::operator=(FTreeCutSet *this,FTreeCutSet *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->CutCells).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->CutCells).AllocatorInstance.Data = (param_1->CutCells).AllocatorInstance.Data;
    (param_1->CutCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CutCells).ArrayNum = (param_1->CutCells).ArrayNum;
    (this->CutCells).ArrayMax = (param_1->CutCells).ArrayMax;
    (param_1->CutCells).ArrayNum = 0;
    (param_1->CutCells).ArrayMax = 0;
  }
  if (&this->CutCellIDs != &param_1->CutCellIDs) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
              (&this->CutCellIDs,&param_1->CutCellIDs);
  }
  this->FixedCutLevel = param_1->FixedCutLevel;
  return this;
}

