// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FCachedPassMeshDrawList @ 1453f9360

FCachedPassMeshDrawList * __thiscall
FCachedPassMeshDrawList::FCachedPassMeshDrawList(FCachedPassMeshDrawList *this)

{
  *(undefined8 *)&this->MeshDrawCommands = 0;
  *(undefined8 *)&(this->MeshDrawCommands).field_0x8 = 0;
  *(undefined8 *)&(this->MeshDrawCommands).field_0x20 = 0;
  *(undefined4 *)&(this->MeshDrawCommands).field_0x28 = 0;
  *(undefined4 *)&(this->MeshDrawCommands).field_0x2c = 0x80;
  *(undefined8 *)&(this->MeshDrawCommands).field_0x34 = 0;
  *(undefined4 *)&(this->MeshDrawCommands).field_0x30 = 0xffffffff;
  return this;
}

// ~FCachedPassMeshDrawList @ 145404e90

void __thiscall FCachedPassMeshDrawList::~FCachedPassMeshDrawList(FCachedPassMeshDrawList *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  
  TSparseArray<FMeshDrawCommand,FDefaultSparseArrayAllocator>::DestroyElements
            (&this->MeshDrawCommands,0,*(int *)&(this->MeshDrawCommands).field_0x8);
  puVar1 = &(this->MeshDrawCommands).field_0xc;
  *(undefined4 *)&(this->MeshDrawCommands).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x198,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MeshDrawCommands).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshDrawCommands).field_0x34 = 0;
  iVar2 = *(int *)&(this->MeshDrawCommands).field_0x2c;
  *(undefined4 *)&(this->MeshDrawCommands).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MeshDrawCommands).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MeshDrawCommands).field_0x10,0);
  }
  pvVar3 = *(void **)&(this->MeshDrawCommands).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (*(void **)&this->MeshDrawCommands != (void *)0x0) {
    FMemory::Free(*(void **)&this->MeshDrawCommands);
  }
  return;
}

