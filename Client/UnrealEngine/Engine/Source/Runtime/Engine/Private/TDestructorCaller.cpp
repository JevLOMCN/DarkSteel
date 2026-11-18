// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// Destruct @ 14802bbd0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Net::FNetIDVariant::FEmptyID>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14802bbe0

void __cdecl UE::Core::Private::TDestructorCaller<UE::Net::FNetRefHandle>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14802bbf0

void __cdecl UE::Core::Private::TDestructorCaller<FNetworkGUID>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148a8d720

void __cdecl
UE::Core::Private::
TDestructorCaller<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148a8d730

void __cdecl
UE::Core::Private::
TDestructorCaller<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
::Destruct(void *param_1)

{
  return;
}

// Destruct @ 148a8d740

void __cdecl
UE::Core::Private::
TDestructorCaller<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>_>
::Destruct(void *param_1)

{
  DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int>
            (*(FNode **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 148a8d780

void __cdecl
UE::Core::Private::
TDestructorCaller<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>_>
::Destruct(void *param_1)

{
  DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int>
            (*(FNode **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

