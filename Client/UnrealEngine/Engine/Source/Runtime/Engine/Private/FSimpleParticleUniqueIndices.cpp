// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GenerateUniqueIdx @ 148283980

FUniqueIdx __thiscall
ImmediatePhysics_Chaos::FSimpleParticleUniqueIndices::GenerateUniqueIdx
          (FSimpleParticleUniqueIndices *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *in_RDX;
  int iVar4;
  
  iVar3 = (this->FreeIndices).ArrayNum;
  if (iVar3 == 0) {
    iVar3 = this->NextUniqueIndex;
    *in_RDX = iVar3;
    this->NextUniqueIndex = iVar3 + 1;
    return (FUniqueIdx)(int)in_RDX;
  }
  if (iVar3 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return (FUniqueIdx)iVar3;
    }
  }
  iVar3 = (this->FreeIndices).ArrayNum;
  iVar4 = iVar3 + -1;
  iVar3 = *(int *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
  (this->FreeIndices).ArrayNum = iVar4;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->FreeIndices).AllocatorInstance,iVar4,&(this->FreeIndices).ArrayMax);
  *in_RDX = iVar3;
  return (FUniqueIdx)(int)in_RDX;
}

// ReleaseIdx @ 1482a0db0

void __thiscall
ImmediatePhysics_Chaos::FSimpleParticleUniqueIndices::ReleaseIdx
          (FSimpleParticleUniqueIndices *this,FUniqueIdx param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  local_res10[0] = param_1.Idx;
  if (param_1.Idx == -1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7799046798579859728>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsSimulation_Chaos.cpp"
                       ,0x110,"Unique.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->FreeIndices).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->FreeIndices).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FreeIndices).ArrayNum;
  piVar1 = &(this->FreeIndices).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FreeIndices).AllocatorInstance,piVar1);
  }
  (this->FreeIndices).ArrayNum = iVar5 + 1;
  *(int *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

