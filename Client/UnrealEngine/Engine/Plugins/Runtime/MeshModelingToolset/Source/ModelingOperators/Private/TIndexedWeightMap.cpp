// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// GetValue @ 14c980e40

float __thiscall
UE::Geometry::TIndexedWeightMap<float>::GetValue(TIndexedWeightMap<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((-1 < param_1) && (param_1 < (this->Values).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    return *(float *)((this->Values).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return this->DefaultValue;
}

