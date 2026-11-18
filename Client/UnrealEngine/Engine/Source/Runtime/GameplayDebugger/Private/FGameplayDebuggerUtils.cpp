// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 1

// IsAuthority @ 146d4f180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FGameplayDebuggerUtils::IsAuthority(UWorld *param_1)

{
  bool bVar1;
  ENetMode EVar2;
  
  if (param_1 != (UWorld *)0x0) {
    EVar2 = UWorld::InternalGetNetMode(param_1);
    if (EVar2 == NM_Client) {
      bVar1 = UWorld::IsPlayingReplay(param_1);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

