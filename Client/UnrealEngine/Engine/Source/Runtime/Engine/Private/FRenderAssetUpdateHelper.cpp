// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TickRenderAssetUpdateForGarbageCollection @ 1487c9cf0

bool __cdecl
FRenderAssetUpdateHelper::TickRenderAssetUpdateForGarbageCollection
          (TRefCountPtr<FRenderAssetUpdate> param_1)

{
  int iVar1;
  EThreadType EVar2;
  
  iVar1 = (**(code **)(*(longlong *)(param_1.Reference)->_padding_ + 0x38))();
  if (iVar1 == 2) {
    EVar2 = TT_GameRunningAsync;
  }
  else {
    EVar2 = (EThreadType)(GIsThreadedRendering == false);
  }
  FRenderAssetUpdate::Tick((FRenderAssetUpdate *)(param_1.Reference)->_padding_,EVar2);
  iVar1 = *(int *)((param_1.Reference)->_padding_ + 0x60);
  if ((FRenderAssetUpdate *)(param_1.Reference)->_padding_ != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release((FRenderAssetUpdate *)(param_1.Reference)->_padding_);
  }
  return iVar1 == 0;
}

