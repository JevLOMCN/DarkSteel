// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// ~FMeshBoundaryLoops @ 14c6e16d0

void __thiscall UE::Geometry::FMeshBoundaryLoops::~FMeshBoundaryLoops(FMeshBoundaryLoops *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->VerticesTemp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FailureBowties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->EdgeFilterFunc != 0) {
    plVar2 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
    plVar3 = (longlong *)&(this->EdgeFilterFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>
            ((FEdgeSpan *)(this->Spans).AllocatorInstance.Data,(this->Spans).ArrayNum);
  pFVar1 = (this->Spans).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>
            ((FEdgeLoop *)(this->Loops).AllocatorInstance.Data,(this->Loops).ArrayNum);
  pFVar1 = (this->Loops).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator[] @ 14c7b80a0

FEdgeLoop * __thiscall
UE::Geometry::FMeshBoundaryLoops::operator[](FMeshBoundaryLoops *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FEdgeLoop *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Loops).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEdgeLoop *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FEdgeLoop *)((this->Loops).AllocatorInstance.Data + (longlong)param_1 * 0x40);
}

