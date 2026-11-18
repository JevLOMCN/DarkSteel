// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// operator[] @ 14cda6e50

TVector4<float> * __thiscall
UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
          (TDenseGrid2<UE::Math::TVector4<float>_> *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<float> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Buffer).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector4<float> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector4<float> *)((this->Buffer).AllocatorInstance.Data + param_1 * 0x10);
}

