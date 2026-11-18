// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddCommand @ 14529f7c0

FRayTracingMeshCommand * __thiscall
FCachedRayTracingMeshCommandContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>::
AddCommand(FCachedRayTracingMeshCommandContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
           *this,FRayTracingMeshCommand *param_1)

{
  TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FRayTracingMeshCommand *pFVar6;
  
  pTVar1 = this->DrawListStorage;
  pFVar6 = (FRayTracingMeshCommand *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar6 <= param_1) && (param_1 < pFVar6 + pTVar1->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRayTracingMeshCommand *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = pTVar1->ArrayNum;
  if (uVar4 == pTVar1->ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = uVar4 + 1;
  FRayTracingMeshCommand::FRayTracingMeshCommand
            ((FRayTracingMeshCommand *)
             ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x98),param_1);
  pTVar1 = this->DrawListStorage;
  this->CommandIndex = uVar4;
  uVar5 = 0;
  if ((int)uVar4 < pTVar1->ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRayTracingMeshCommand *)(*pcVar2)();
      return pFVar6;
    }
  }
  return (FRayTracingMeshCommand *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x98);
}

// FinalizeCommand @ 1452c2d50

void __thiscall
FCachedRayTracingMeshCommandContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>::
FinalizeCommand(FCachedRayTracingMeshCommandContext<TArray<FRayTracingMeshCommand,TSizedDefaultAllocator<32>_>_>
                *this,FRayTracingMeshCommand *param_1)

{
  return;
}

