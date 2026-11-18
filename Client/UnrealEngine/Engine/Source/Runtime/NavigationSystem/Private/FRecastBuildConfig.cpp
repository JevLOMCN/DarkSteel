// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// Reset @ 146e70c30

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FRecastBuildConfig::Reset(FRecastBuildConfig *this)

{
  int *piVar1;
  
  memset(this,0,0xf0);
  *(undefined4 *)&this->field_0xb8 = 0x17;
  piVar1 = &(this->JumpConfigs).ArrayMax;
  this->MaxPolysPerTile = -1;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->JumpConfigs).AllocatorInstance,0,piVar1);
  }
  this->AgentIndex = 0;
  this->TileResolution = Default;
  this->LedgeSlopeFilterMode = Recast;
  this->bIsTileSetupConfigCompleted = false;
  this->LinkSpillDistance = 0.0;
  return;
}

