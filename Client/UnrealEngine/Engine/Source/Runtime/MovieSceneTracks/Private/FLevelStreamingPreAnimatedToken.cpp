// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestoreState @ 146864200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FLevelStreamingPreAnimatedToken::RestoreState
          (FLevelStreamingPreAnimatedToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  bool bVar1;
  ULevelStreaming *this_00;
  
  this_00 = CastChecked<ULevelStreaming,UObject>(param_1);
  bVar1 = this->bVisible;
  ULevelStreaming::SetShouldBeVisible(this_00,bVar1);
  if ((bVar1 != false) && ((this_00->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0)) {
    (**(code **)(this_00->_padding_ + 0x2d0))(this_00,1);
  }
  return;
}

