// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// FHitResult @ 14a71bfe0

FHitResult * __thiscall FHitResult::FHitResult(FHitResult *this)

{
  memset(this,0,0x100);
  (this->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  this->Time = 1.0;
  this->MyItem = -1;
  (this->HitObjectHandle).ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0
  ;
  (this->HitObjectHandle).InstanceIndex = -1;
  (this->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(this->HitObjectHandle).field_0x1d = 0;
  return this;
}

