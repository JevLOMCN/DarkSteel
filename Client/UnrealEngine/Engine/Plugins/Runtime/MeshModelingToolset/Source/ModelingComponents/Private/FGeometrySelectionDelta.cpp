// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// operator= @ 14cb655e0

FGeometrySelectionDelta * __thiscall
UE::Geometry::FGeometrySelectionDelta::operator=
          (FGeometrySelectionDelta *this,FGeometrySelectionDelta *param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    pFVar2 = (this->Removed).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->Removed).AllocatorInstance.Data = (param_1->Removed).AllocatorInstance.Data;
    (param_1->Removed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Removed).ArrayNum = (param_1->Removed).ArrayNum;
    (this->Removed).ArrayMax = (param_1->Removed).ArrayMax;
    (param_1->Removed).ArrayNum = 0;
    (param_1->Removed).ArrayMax = 0;
  }
  pTVar3 = &param_1->Added;
  pTVar1 = &this->Added;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Added).ArrayNum = (param_1->Added).ArrayNum;
    (this->Added).ArrayMax = (param_1->Added).ArrayMax;
    (param_1->Added).ArrayNum = 0;
    (param_1->Added).ArrayMax = 0;
  }
  return this;
}

