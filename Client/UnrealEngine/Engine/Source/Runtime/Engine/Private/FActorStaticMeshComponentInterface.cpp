// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetPrimitiveComponentInterface @ 1479cd450

IPrimitiveComponent * __thiscall
FActorStaticMeshComponentInterface::GetPrimitiveComponentInterface
          (FActorStaticMeshComponentInterface *this)

{
  return (IPrimitiveComponent *)(this + -0x61);
}

// GetStaticMesh @ 1479d1ba0

UStaticMesh * __thiscall
FActorStaticMeshComponentInterface::GetStaticMesh(FActorStaticMeshComponentInterface *this)

{
  FActorStaticMeshComponentInterface FVar1;
  
  FVar1 = this[-0x12];
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (FVar1 != (FActorStaticMeshComponentInterface)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  return (UStaticMesh *)FVar1;
}

