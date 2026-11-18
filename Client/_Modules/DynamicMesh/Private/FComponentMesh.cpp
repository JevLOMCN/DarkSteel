// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// IsTriangle @ 14c818b10

bool __thiscall UE::MeshAutoRepair::FComponentMesh::IsTriangle(FComponentMesh *this,int param_1)

{
  uint uVar1;
  FComponent *pFVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  if (-1 < param_1) {
    pFVar2 = this->Component;
    if (param_1 < (pFVar2->Indices).ArrayNum) {
      pFVar3 = this->Mesh;
      if (param_1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      uVar1 = *(uint *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)param_1 * 4);
      if (((-1 < (int)uVar1) &&
          ((int)uVar1 <
           (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        return true;
      }
    }
  }
  return false;
}

