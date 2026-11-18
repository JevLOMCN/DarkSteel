// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 1

// ~TTupleBaseElement<FString,0,2> @ 142669ee0

void __thiscall
UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::~TTupleBaseElement<FString,0,2>
          (TTupleBaseElement<FString,0,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Key).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

