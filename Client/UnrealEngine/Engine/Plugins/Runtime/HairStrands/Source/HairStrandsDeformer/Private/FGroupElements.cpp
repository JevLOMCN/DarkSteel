// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 1

// FGroupElements @ 14e264220

FGroupElements * __thiscall
UE::Groom::Private::FGroupElements::FGroupElements(FGroupElements *this,FGroupElements *param_1)

{
  (this->GroupIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupIndices).AllocatorInstance.Data = (param_1->GroupIndices).AllocatorInstance.Data;
  (param_1->GroupIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupIndices).ArrayNum = (param_1->GroupIndices).ArrayNum;
  (this->GroupIndices).ArrayMax = (param_1->GroupIndices).ArrayMax;
  (param_1->GroupIndices).ArrayNum = 0;
  (param_1->GroupIndices).ArrayMax = 0;
  (this->GroupOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupOffsets).AllocatorInstance.Data = (param_1->GroupOffsets).AllocatorInstance.Data;
  (param_1->GroupOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupOffsets).ArrayNum = (param_1->GroupOffsets).ArrayNum;
  (this->GroupOffsets).ArrayMax = (param_1->GroupOffsets).ArrayMax;
  (param_1->GroupOffsets).ArrayNum = 0;
  (param_1->GroupOffsets).ArrayMax = 0;
  (this->GroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).AllocatorInstance.Data = (param_1->GroupInstances).AllocatorInstance.Data;
  (param_1->GroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = (param_1->GroupInstances).ArrayNum;
  (this->GroupInstances).ArrayMax = (param_1->GroupInstances).ArrayMax;
  (param_1->GroupInstances).ArrayNum = 0;
  (param_1->GroupInstances).ArrayMax = 0;
  return this;
}

