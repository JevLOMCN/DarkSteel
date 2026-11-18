// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// GetVertexMapping @ 1433b3a30

int __thiscall UE::Geometry::FCompactMaps::GetVertexMapping(FCompactMaps *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->VertMap).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->VertMap).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetTriangleMapping @ 1434c9150

int __thiscall UE::Geometry::FCompactMaps::GetTriangleMapping(FCompactMaps *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->TriMap).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->TriMap).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// ResetTriangleMap @ 143518e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FCompactMaps::ResetTriangleMap(FCompactMaps *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->TriMap,param_1,Default);
  if ((param_2) && (uVar4 = 0, 0 < param_1)) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->TriMap).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((this->TriMap).AllocatorInstance.Data + lVar5) = 0xffffffff;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < param_1);
  }
  return;
}

