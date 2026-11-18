// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// CheckAttackable @ 14b9e2670

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
FDS_AttackableForceAttack::CheckAttackable
          (FDS_AttackableForceAttack *this,FDS_AttackableContext *param_1)

{
  bool bVar1;
  UDS_PKDataSet *pUVar2;
  FDS_PkModeTableRow *this_00;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = (UDS_PKDataSet *)FWeakObjectPtr::Get(local_res10);
    this_00 = UDS_PKDataSet::GetPKModeTableRow(pUVar2);
    if (this_00 != (FDS_PkModeTableRow *)0x0) {
      bVar1 = FDS_PkModeTableRow::IsEnemy(this_00,MyForceAttackTarget);
      if (bVar1) {
        pUVar2 = (UDS_PKDataSet *)FWeakObjectPtr::Get(local_res10);
        bVar1 = UDS_PKDataSet::IsForceAttackedEntityID(pUVar2,param_1->TargetEntityBase->EntityID);
        if (bVar1) {
          param_1->isAttackable = true;
          return true;
        }
      }
    }
  }
  return false;
}

// Init @ 14b9f3690

bool __thiscall FDS_AttackableForceAttack::Init(FDS_AttackableForceAttack *this)

{
  return true;
}

