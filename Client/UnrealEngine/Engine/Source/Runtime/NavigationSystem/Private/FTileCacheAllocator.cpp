// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// alloc @ 146e76200

void * __thiscall FTileCacheAllocator::alloc(FTileCacheAllocator *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = dtAlloc(param_1,DT_ALLOC_TEMP);
  return pvVar1;
}

// free @ 146e77090

void __thiscall FTileCacheAllocator::free(FTileCacheAllocator *this,void *param_1)

{
  dtFree(param_1,DT_ALLOC_TEMP);
  return;
}

// reset @ 146e770f0

void __thiscall FTileCacheAllocator::reset(FTileCacheAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0 && \"dtTileCacheAlloc.reset() is not supported!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0x656,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

