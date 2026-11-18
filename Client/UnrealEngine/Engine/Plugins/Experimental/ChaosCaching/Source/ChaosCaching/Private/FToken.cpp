// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// RestoreState @ 14db03a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPreAnimatedChaosCacheTokenProducer::CacheExistingState'::__l2::FToken::RestoreState
          (void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  AChaosCacheManager *pAVar1;
  
  pAVar1 = CastChecked<AChaosCacheManager,UObject>(param_1);
  pAVar1->StartMode = *(EStartMode *)((longlong)this + 8);
  pAVar1->CacheMode = *(ECacheMode *)((longlong)this + 9);
  return;
}

