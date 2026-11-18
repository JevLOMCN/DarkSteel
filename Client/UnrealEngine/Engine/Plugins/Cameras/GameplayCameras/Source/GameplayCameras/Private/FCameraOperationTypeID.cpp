// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// RegisterNew @ 14d5c9bc0

FCameraOperationTypeID __cdecl UE::Cameras::FCameraOperationTypeID::RegisterNew(void)

{
  uint *in_RCX;
  
  *in_RCX = NextID;
  NextID = NextID + 1;
  return (FCameraOperationTypeID)(uint)in_RCX;
}

