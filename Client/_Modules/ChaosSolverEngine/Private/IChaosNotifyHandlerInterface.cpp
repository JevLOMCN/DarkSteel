// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// HandlePhysicsCollision @ 146316af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
IChaosNotifyHandlerInterface::HandlePhysicsCollision
          (IChaosNotifyHandlerInterface *this,FChaosPhysicsCollisionInfo *param_1)

{
  (**(code **)((longlong)*this + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000146316b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))(this,param_1);
  return;
}

