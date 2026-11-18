// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// RegisterNewID @ 14d5c9be0

uint __cdecl UE::Cameras::FCameraObjectTypeID::RegisterNewID(void)

{
  uint uVar1;
  
  uVar1 = ID;
  ID = ID + 1;
  return uVar1;
}

