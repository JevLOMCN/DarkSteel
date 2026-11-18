// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator[] @ 14c6e2190

FComponent * __thiscall
UE::Geometry::FMeshConnectedComponents::operator[](FMeshConnectedComponents *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FComponent *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Components).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FComponent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FComponent **)((this->Components).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 14c89ad10

FComponent * __thiscall
UE::Geometry::FMeshConnectedComponents::operator[](FMeshConnectedComponents *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FComponent *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Components).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FComponent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FComponent **)((this->Components).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetComponent @ 14c8f27f0

FComponent * __thiscall
UE::Geometry::FMeshConnectedComponents::GetComponent(FMeshConnectedComponents *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FComponent *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Components).Array.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FComponent *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FComponent **)((this->Components).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
}

