// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// AddRequest @ 14681ac10

void __thiscall
UE::MovieScene::FDataLayerState::AddRequest
          (FDataLayerState *this,short param_1,EDataLayerRuntimeState param_2,bool param_3)

{
  if (this->HierarchicalBias < param_1) {
    this->HierarchicalBias = param_1;
    this->UnloadedCount = 0;
    this->LoadedCount = 0;
    this->ActivatedCount = 0;
    this->bFlushUnloaded = false;
    this->bFlushActivated = false;
  }
  else if (param_1 != this->HierarchicalBias) {
    return;
  }
  if (param_2 == Unloaded) {
    this->UnloadedCount = this->UnloadedCount + 1;
    this->bFlushUnloaded = (bool)(this->bFlushUnloaded | param_3);
  }
  else {
    if (param_2 == Loaded) {
      this->LoadedCount = this->LoadedCount + 1;
      return;
    }
    if (param_2 == Activated) {
      this->ActivatedCount = this->ActivatedCount + 1;
      this->bFlushActivated = (bool)(this->bFlushActivated | param_3);
      return;
    }
  }
  return;
}

// ComputeDesiredState @ 146821a70

TOptional<EDataLayerRuntimeState> __thiscall
UE::MovieScene::FDataLayerState::ComputeDesiredState(FDataLayerState *this)

{
  int iVar1;
  TOptional<EDataLayerRuntimeState> TVar2;
  undefined2 *in_RDX;
  
  TVar2 = SUB82(in_RDX,0);
  if (0 < this->ActivatedCount) {
    *in_RDX = 0x102;
    return TVar2;
  }
  if (0 < this->LoadedCount) {
    *in_RDX = 0x101;
    return TVar2;
  }
  iVar1 = this->UnloadedCount;
  *(undefined1 *)((longlong)in_RDX + 1) = 0;
  if (0 < iVar1) {
    *in_RDX = 0x100;
  }
  return TVar2;
}

// IsEmpty @ 14683efd0

bool __thiscall UE::MovieScene::FDataLayerState::IsEmpty(FDataLayerState *this)

{
  return this->ActivatedCount + this->LoadedCount + this->UnloadedCount == 0;
}

// Reset @ 146860260

void __thiscall UE::MovieScene::FDataLayerState::Reset(FDataLayerState *this)

{
  this->HierarchicalBias = 0;
  this->UnloadedCount = 0;
  this->LoadedCount = 0;
  this->ActivatedCount = 0;
  this->bFlushUnloaded = false;
  this->bFlushActivated = false;
  return;
}

// ShouldFlushStreaming @ 14686c770

bool __thiscall
UE::MovieScene::FDataLayerState::ShouldFlushStreaming
          (FDataLayerState *this,EDataLayerRuntimeState param_1)

{
  if (param_1 == Unloaded) {
    return this->bFlushUnloaded;
  }
  if (param_1 != Activated) {
    return false;
  }
  return this->bFlushActivated;
}

