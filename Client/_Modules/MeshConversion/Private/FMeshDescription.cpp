// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 1

// GetTrianglePolygon @ 1443d61b0

FPolygonID __thiscall
FMeshDescription::GetTrianglePolygon(FMeshDescription *this,FTriangleID param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPolygonID FVar4;
  undefined4 in_register_00000014;
  uint uVar5;
  uint uVar6;
  FMeshAttributeArraySetBase *pFVar7;
  int in_R8D;
  
  pFVar1 = (this->TrianglePolygons).ArrayPtr;
  if ((int)pFVar1[2].Type < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FPolygonID)(*pcVar2)();
      return FVar4;
    }
  }
  pFVar7 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    pFVar7 = pFVar1 + 1;
  }
  uVar5 = in_R8D * pFVar7->NumElements;
  uVar6 = 0;
  if ((int)uVar5 < (int)pFVar7->Type) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FPolygonID)(*pcVar2)();
      return FVar4;
    }
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) =
       *(undefined4 *)(pFVar7->_padding_ + (longlong)(int)uVar5 * 4);
  return (FPolygonID)param_1;
}

