// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// IsFollowingAPathDelegate @ 1473a67c0

TDelegate<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy> * __cdecl
IPathFollowingManagerInterface::IsFollowingAPathDelegate(void)

{
  return &FNavigationSystem::Delegates.IsFollowingAPath;
}

// StopMovementDelegate @ 1473b89f0

TDelegate<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy> * __cdecl
IPathFollowingManagerInterface::StopMovementDelegate(void)

{
  return &FNavigationSystem::Delegates.StopMovement;
}

