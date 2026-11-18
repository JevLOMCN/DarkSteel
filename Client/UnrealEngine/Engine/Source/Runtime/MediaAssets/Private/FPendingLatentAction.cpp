// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 4

// ~FPendingLatentAction @ 146c1e710

void __thiscall FPendingLatentAction::~FPendingLatentAction(FPendingLatentAction *this)

{
  *this = (FPendingLatentAction)&___7FPendingLatentAction__6B_;
  return;
}

// NotifyActionAborted @ 146c2fac0

void __thiscall FPendingLatentAction::NotifyActionAborted(FPendingLatentAction *this)

{
  return;
}

// NotifyObjectDestroyed @ 146c2fad0

void __thiscall FPendingLatentAction::NotifyObjectDestroyed(FPendingLatentAction *this)

{
  return;
}

// UpdateOperation @ 146c39b10

void __thiscall
FPendingLatentAction::UpdateOperation(FPendingLatentAction *this,FLatentResponse *param_1)

{
  param_1->bRemoveAction = true;
  return;
}

