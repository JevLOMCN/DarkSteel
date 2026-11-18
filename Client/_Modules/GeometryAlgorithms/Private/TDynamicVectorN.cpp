// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 2

// TDynamicVectorN<double,2> @ 1494feee0

TDynamicVectorN<double,2> * __thiscall
UE::Geometry::TDynamicVectorN<double,2>::TDynamicVectorN<double,2>(TDynamicVectorN<double,2> *this)

{
  (this->Data).CurBlock = 0;
  (this->Data).CurBlockUsed = 0;
  (this->Data).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).Blocks.ArrayNum = 0;
  (this->Data).Blocks.ArrayMax = 0;
  TDynamicVector<double,512>::AddAllocatedBlock(&this->Data);
  return this;
}

// ~TDynamicVectorN<double,2> @ 149501420

void __thiscall
UE::Geometry::TDynamicVectorN<double,2>::~TDynamicVectorN<double,2>(TDynamicVectorN<double,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  TDynamicVector<double,512>::Empty(&this->Data,0);
  pFVar1 = (this->Data).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

