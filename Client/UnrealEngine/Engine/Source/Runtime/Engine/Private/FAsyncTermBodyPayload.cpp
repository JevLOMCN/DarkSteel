// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FAsyncTermBodyPayload @ 1481c7150

FAsyncTermBodyPayload * __thiscall
FBodyInstance::FAsyncTermBodyPayload::FAsyncTermBodyPayload(FAsyncTermBodyPayload *this)

{
  this->ActorHandle = (FSingleParticlePhysicsProxy *)0x0;
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->bNotifyRigidBodyCollision = false;
  return this;
}

