// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedActorRoleSwap @ 147a26be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FScopedActorRoleSwap * __thiscall
FScopedActorRoleSwap::FScopedActorRoleSwap(FScopedActorRoleSwap *this,AActor *param_1)

{
  this->Actor = param_1;
  if ((param_1 != (AActor *)0x0) && ((param_1->RemoteRole).Value == '\x03')) {
    AActor::SwapRoles(param_1);
    return this;
  }
  this->Actor = (AActor *)0x0;
  return this;
}

// ~FScopedActorRoleSwap @ 147a29e30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FScopedActorRoleSwap::~FScopedActorRoleSwap(FScopedActorRoleSwap *this)

{
  uchar uVar1;
  AActor *this_00;
  
  this_00 = this->Actor;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  uVar1 = (this_00->Role).Value;
  (this_00->Role).Value = (this_00->RemoteRole).Value;
  (this_00->RemoteRole).Value = uVar1;
  AActor::ForcePropertyCompare(this_00);
  return;
}

