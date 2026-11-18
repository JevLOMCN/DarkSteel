// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// CheckAttackable @ 14b9e2860

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
FDS_AttackableTeamMode::CheckAttackable(FDS_AttackableTeamMode *this,FDS_AttackableContext *param_1)

{
  bool bVar1;
  UDS_PKDataSet *this_00;
  FDS_PkModeTableRow *this_01;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res10);
    this_01 = UDS_PKDataSet::GetPKModeTableRow(this_00);
    if (this_01 != (FDS_PkModeTableRow *)0x0) {
      bVar1 = FDS_PkModeTableRow::IsEnemy(this_01,EnemyTeamTarget);
      if (bVar1) {
        FDS_EntityBase::GetCharInfoData(param_1->SrcEntityBase);
        bVar1 = FWeakObjectPtr::IsValid(&local_res18);
        if (bVar1) {
          FDS_EntityBase::GetCharInfoData(param_1->TargetEntityBase);
          FWeakObjectPtr::IsValid(&local_res20);
        }
      }
    }
  }
  return false;
}

