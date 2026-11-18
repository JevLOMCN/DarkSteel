// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 2

// ~FWN_AbilitySystemContext @ 148db67e0

void __thiscall FWN_AbilitySystemContext::~FWN_AbilitySystemContext(FWN_AbilitySystemContext *this)

{
  this->_padding_ = (longlong)&___7FWN_AbilitySystemContext__6B_;
  return;
}

// Reset @ 148dbb4d0

void __thiscall FWN_AbilitySystemContext::Reset(FWN_AbilitySystemContext *this)

{
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AvatarActor).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

