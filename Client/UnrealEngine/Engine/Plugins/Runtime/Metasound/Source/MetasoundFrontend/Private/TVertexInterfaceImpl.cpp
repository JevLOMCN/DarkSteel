// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// At @ 14ada6810

FInputDataVertex * __thiscall
Metasound::TVertexInterfaceImpl<Metasound::FInputDataVertex>::At
          (TVertexInterfaceImpl<Metasound::FInputDataVertex> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FInputDataVertex *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FInputDataVertex *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FInputDataVertex *)((this->Vertices).AllocatorInstance.Data + (longlong)param_1 * 0x38);
}

// At @ 14ada6890

FOutputDataVertex * __thiscall
Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::At
          (TVertexInterfaceImpl<Metasound::FOutputDataVertex> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FOutputDataVertex *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FOutputDataVertex *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FOutputDataVertex *)((this->Vertices).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

