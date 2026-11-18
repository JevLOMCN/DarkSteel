// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FDynamicMeshDrawCommandStorage @ 14499eaf0

void __thiscall
FDynamicMeshDrawCommandStorage::~FDynamicMeshDrawCommandStorage
          (FDynamicMeshDrawCommandStorage *this)

{
  int *piVar1;
  void *pvVar2;
  uchar *puVar3;
  FMeshDrawShaderBindings *pFVar4;
  FMeshDrawShaderBindings *this_00;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar7 = (this->MeshDrawCommands).Chunks.Array.AllocatorInstance.Data;
  for (iVar5 = (this->MeshDrawCommands).Chunks.Array.ArrayNum; iVar5 != 0; iVar5 = iVar5 + -1) {
    pvVar2 = *(void **)pFVar7;
    if (pvVar2 != (void *)0x0) {
      lVar6 = 0x28;
      pFVar4 = (FMeshDrawShaderBindings *)((longlong)pvVar2 + 0x3fc0);
      do {
        puVar3 = pFVar4[-1].Data.InlineStorage[1];
        this_00 = (FMeshDrawShaderBindings *)(pFVar4[-4].Data.InlineStorage + 5);
        lVar6 = lVar6 + -1;
        if (puVar3 != (uchar *)0x0) {
          FMemory::Free(puVar3);
        }
        puVar3 = pFVar4[-2].Data.InlineStorage[1];
        if (puVar3 != (uchar *)0x0) {
          FMemory::Free(puVar3);
        }
        FMeshDrawShaderBindings::~FMeshDrawShaderBindings(this_00);
        pFVar4 = this_00;
      } while (lVar6 != 0);
      ::operator_delete(pvVar2,0x3fc0);
    }
    pFVar7 = pFVar7 + 8;
  }
  piVar1 = &(this->MeshDrawCommands).Chunks.Array.ArrayMax;
  (this->MeshDrawCommands).Chunks.Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar7 = (this->MeshDrawCommands).Chunks.Array.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
    return;
  }
  return;
}

