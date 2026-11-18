// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// CheckAttackable @ 14b9e2700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
FDS_AttackableNPC::CheckAttackable(FDS_AttackableNPC *this,FDS_AttackableContext *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  if (param_1->TargetEntityBase->EntityType != NPC) {
    return false;
  }
  UDS_NPCBattleData::GetData((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    param_1->isAttackable = true;
  }
  return true;
}

