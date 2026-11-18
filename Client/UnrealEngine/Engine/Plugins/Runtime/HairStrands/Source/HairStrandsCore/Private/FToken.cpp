// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// RestoreState @ 14e0f6410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FPreAnimatedGroomCacheTokenProducer::CacheExistingState'::__l2::FToken::RestoreState
          (void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  UGroomComponent *this_00;
  
  this_00 = CastChecked<UGroomComponent,UObject>(param_1);
  UGroomComponent::SetManualTick(this_00,*(bool *)((longlong)this + 8));
  UGroomComponent::ResetAnimationTime(this_00);
  return;
}

