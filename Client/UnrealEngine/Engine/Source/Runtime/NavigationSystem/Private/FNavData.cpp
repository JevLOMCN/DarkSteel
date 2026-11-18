// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// ~FNavData @ 146dd94d0

void __thiscall FNavMeshTileData::FNavData::~FNavData(FNavData *this)

{
  dtFree(this->RawNavData,DT_ALLOC_PERM_TILE_DATA);
  return;
}

// TestPtr @ 146e2b4d0

void __thiscall FNavMeshTileData::FNavData::TestPtr(FNavData *this)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  puVar1 = this->RawNavData;
  if (puVar1 != (uchar *)0x0) {
    Temp = *puVar1;
    uVar4 = FMemory::GetAllocSize(puVar1);
    if ((uVar4 != 0) && (uVar4 != this->AllocatedSize)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == 0 || Size == AllocatedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

