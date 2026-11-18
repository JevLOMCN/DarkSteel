// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 1

// RestoreState @ 14ea24b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
`FPreAnimatedNiagaraCacheTokenProducer::CacheExistingState'::__l2::FToken::RestoreState
          (void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  UNiagaraComponent *this_00;
  
  this_00 = CastChecked<UNiagaraComponent,UObject>(param_1);
  UNiagaraComponent::SetAgeUpdateMode(this_00,*(ENiagaraAgeUpdateMode *)((longlong)this + 8));
  UNiagaraComponent::SetSimCache(this_00,(UNiagaraSimCache *)0x0,false);
  return;
}

