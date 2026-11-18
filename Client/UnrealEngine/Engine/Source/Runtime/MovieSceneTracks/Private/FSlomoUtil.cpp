// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ApplySlomo @ 14681d740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::MovieScene::FSlomoUtil::ApplySlomo(UObject *param_1,double param_2)

{
  ENetMode EVar1;
  UWorld *this;
  AWorldSettings *pAVar2;
  
  if ((((param_1 != (UObject *)0x0) &&
       (this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(), this != (UWorld *)0x0)) &&
      (EVar1 = UWorld::InternalGetNetMode(this), EVar1 != NM_Client)) &&
     ((0.0 < param_2 &&
      (pAVar2 = UWorld::GetWorldSettings(this,false,true), pAVar2 != (AWorldSettings *)0x0)))) {
    (**(code **)(pAVar2->_padding_ + 0x7b0))(pAVar2,(float)param_2);
    (**(code **)(pAVar2->_padding_ + 0x710))(pAVar2);
  }
  return;
}

