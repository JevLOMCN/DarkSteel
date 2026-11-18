// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// FVertexConnectedComponents @ 14c9a8a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FVertexConnectedComponents * __thiscall
UE::Geometry::FVertexConnectedComponents::FVertexConnectedComponents
          (FVertexConnectedComponents *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexConnectedComponents *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  (this->DisjointSet).Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisjointSet).Parents.ArrayNum = 0;
  (this->DisjointSet).Parents.ArrayMax = 0;
  (this->DisjointSet).Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisjointSet).Sizes.ArrayNum = 0;
  (this->DisjointSet).Sizes.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this,param_1,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&(this->DisjointSet).Sizes,param_1,Default);
  uVar7 = uVar6;
  if (0 < param_1) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (this->DisjointSet).Parents.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexConnectedComponents *)(*pcVar1)();
        return pFVar4;
      }
      *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + uVar7) = uVar5;
      uVar3 = 0;
      if ((int)uVar5 < (this->DisjointSet).Sizes.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexConnectedComponents *)(*pcVar1)();
        return pFVar4;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      *(undefined4 *)((this->DisjointSet).Sizes.AllocatorInstance.Data + uVar7) = 1;
      uVar7 = uVar7 + 4;
    } while ((int)(uVar5 + 1) < param_1);
  }
  return this;
}

