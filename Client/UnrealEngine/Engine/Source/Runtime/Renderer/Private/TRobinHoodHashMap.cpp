// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_> @ 1453f8330

TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
* __thiscall
Experimental::
TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::
TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
           *this)

{
  RobinHoodHashTable_Private::
  TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
              *)this);
  return this;
}

// ~TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_> @ 145403570

void __thiscall
Experimental::
TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
::
~TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
          (TRobinHoodHashMap<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
           *this)

{
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  RobinHoodHashTable_Private::
  TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)this);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  DestructItems<Experimental::RobinHoodHashTable_Private::TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount>,int>
            (*(TKeyValue<FMeshDrawCommand,FMeshDrawCommandCount> **)this,*(int *)&this->field_0x8);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

// FindOrAddId @ 1454a5e00

FHashElementId __thiscall
Experimental::
TRobinHoodHashMap<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
::FindOrAddId(TRobinHoodHashMap<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
              *this,FBlockLocAligned *param_1,FCellBlock *param_2,bool *param_3)

{
  RobinHoodHashTable_Private::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  ::
  FindOrUpdateIdByHashInternal<0,FSceneCulling::FBlockLocAligned_const_&,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
            ((TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
              *)this,(FHashType)(uint)param_1,
             (FBlockLocAligned *)
             (ulonglong)
             (*(int *)((longlong)&param_2->CoarseCellMask + 4) * -0x3662f0df +
              param_2->NumItemChunks * -0x34a05b27 + param_2->GridOffset * -0x338d5bbd +
              (int)param_2->CoarseCellMask * -0x3b71d0b5 & 0x7fffffff),param_2,param_3);
  return (FHashElementId)(uint)param_1;
}

