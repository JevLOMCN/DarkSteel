// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// GetWorstDistance @ 14a8c0120

float __thiscall UE::PoseSearch::FVPTreeResultSet::GetWorstDistance(FVPTreeResultSet *this)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<UE::PoseSearch::FIndexDistance> FVar3;
  float fVar4;
  
  if ((this->Heap).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  FVar3 = (this->Heap).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<UE::PoseSearch::FIndexDistance>)0x0) {
    FVar3 = (ForElementType<UE::PoseSearch::FIndexDistance>)&this->Heap;
  }
  return *(float *)((longlong)FVar3 + 4);
}

