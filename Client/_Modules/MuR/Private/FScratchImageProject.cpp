// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// FScratchImageProject @ 14a976c60

FScratchImageProject * __thiscall
UE::Mutable::Private::FScratchImageProject::FScratchImageProject(FScratchImageProject *this)

{
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->CulledVertex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CulledVertex).ArrayNum = 0;
  (this->CulledVertex).ArrayMax = 0;
  return this;
}

// ~FScratchImageProject @ 14a978620

void __thiscall
UE::Mutable::Private::FScratchImageProject::~FScratchImageProject(FScratchImageProject *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CulledVertex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

