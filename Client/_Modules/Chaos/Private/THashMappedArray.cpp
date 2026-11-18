// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Find @ 1439cc210

FVertexContactIndex * __thiscall
Chaos::Private::
THashMappedArray<int,Chaos::Private::FMeshContactGenerator::FVertexContactIndex,Chaos::Private::FMeshContactGenerator::VertexContactIndicesMapTraits>
::Find(THashMappedArray<int,Chaos::Private::FMeshContactGenerator::FVertexContactIndex,Chaos::Private::FMeshContactGenerator::VertexContactIndicesMapTraits>
       *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexContactIndex *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = (this->HashTable).Hash[(uVar5 >> 0x10 ^ uVar5) & (this->HashTable).HashMask];
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return (FVertexContactIndex *)0x0;
    }
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(int *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xc) == param_1) {
      uVar3 = 0;
      if ((int)uVar5 < (this->Elements).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexContactIndex *)(*pcVar1)();
        return pFVar4;
      }
      return (FVertexContactIndex *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xc);
    }
    uVar5 = (this->HashTable).NextIndex[uVar5];
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FVertexContactIndex *)(*pcVar1)();
  return pFVar4;
}

// Find @ 1439cc350

FEdgeTriangleIndices * __thiscall
Chaos::Private::
THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
::Find(THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
       *this,FContactEdgeID param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FEdgeTriangleIndices *pFVar5;
  ulonglong uVar6;
  
  uVar6 = ((ulonglong)param_1.field0_0x0 >> 0x21 ^ (ulonglong)param_1.field0_0x0) *
          -0xae502812aa7333;
  uVar6 = (uVar6 >> 0x21 ^ uVar6) * -0x3b314601e57a13ad;
  uVar1 = (this->HashTable).Hash
          [(uVar6 >> 0x21 ^ uVar6 & 0xffffffff) & (ulonglong)(this->HashTable).HashMask];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return (FEdgeTriangleIndices *)0x0;
    }
    uVar4 = 0;
    if ((int)uVar1 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if ((FContactEdgeID_u_0)
        ((FContactEdgeID_u_0 *)
        ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10))->EdgeID ==
        param_1.field0_0x0) {
      uVar4 = 0;
      if ((int)uVar1 < (this->Elements).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FEdgeTriangleIndices *)(*pcVar2)();
        return pFVar5;
      }
      return (FEdgeTriangleIndices *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    }
    uVar1 = (this->HashTable).NextIndex[uVar1];
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FEdgeTriangleIndices *)(*pcVar2)();
  return pFVar5;
}

