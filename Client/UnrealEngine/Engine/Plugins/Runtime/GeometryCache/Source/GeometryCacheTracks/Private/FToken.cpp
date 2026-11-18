// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 1

// RestoreState @ 14cd8ac40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPreAnimatedGeometryCacheTokenProducer::CacheExistingState'::__l2::FToken::RestoreState
          (void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  UGeometryCacheComponent *this_00;
  
  this_00 = CastChecked<UGeometryCacheComponent,UObject>(param_1);
  UGeometryCacheComponent::SetManualTick(this_00,*(bool *)((longlong)this + 8));
  UGeometryCacheComponent::ResetAnimationTime(this_00);
  return;
}

