// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSceneViewOwner @ 14850da20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSceneViewOwner * __thiscall FSceneViewOwner::FSceneViewOwner(FSceneViewOwner *this,AActor *param_1)

{
  if (param_1 != (AActor *)0x0) {
    this->ActorUniqueId = *(uint *)((longlong)&param_1->_padding_ + 4);
    this->Actor = param_1;
    return this;
  }
  this->Actor = (AActor *)0x0;
  this->ActorUniqueId = 0;
  return this;
}

// operator= @ 148513970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FSceneViewOwner::operator=(FSceneViewOwner *this,AActor *param_1)

{
  this->Actor = param_1;
  if (param_1 != (AActor *)0x0) {
    this->ActorUniqueId = *(uint *)((longlong)&param_1->_padding_ + 4);
    return;
  }
  this->ActorUniqueId = 0;
  return;
}

