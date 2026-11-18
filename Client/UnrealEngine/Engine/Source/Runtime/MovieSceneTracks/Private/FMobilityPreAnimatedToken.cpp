// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestoreState @ 1466e3500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FMobilityPreAnimatedToken::RestoreState
          (FMobilityPreAnimatedToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  USceneComponent *pUVar1;
  
  pUVar1 = CastChecked<USceneComponent,UObject>(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x5f8);
                    /* WARNING: Could not recover jumptable at 0x0001466e3526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,this->Mobility,UNRECOVERED_JUMPTABLE);
  return;
}

