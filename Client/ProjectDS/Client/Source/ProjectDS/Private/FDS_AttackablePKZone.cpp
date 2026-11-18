// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// CheckAttackable @ 14b9e27c0

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
FDS_AttackablePKZone::CheckAttackable(FDS_AttackablePKZone *this,FDS_AttackableContext *param_1)

{
  UDS_ZoneManager *pUVar1;
  
  if (param_1->TargetEntityBase->EntityType != NetCharacter) {
    param_1->isAttackable = false;
    return true;
  }
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 != (UDS_ZoneManager *)0x0) {
    FDS_ZoneBaseTableRow::Get((ulonglong)pUVar1->ZoneID,true);
  }
  return false;
}

