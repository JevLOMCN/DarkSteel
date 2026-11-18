// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// CheckAttackable @ 14b99c6f0

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
FDS_AttackableAttackMe::CheckAttackable(FDS_AttackableAttackMe *this,FDS_AttackableContext *param_1)

{
  FDS_EntityBase *pFVar1;
  bool bVar2;
  FDS_EntityBase *pFVar3;
  UDS_PKDataSet *pUVar4;
  FDS_PkModeTableRow *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  pFVar1 = param_1->SrcEntityBase;
  pFVar3 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar1 == pFVar3) {
    TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar4 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res10);
      this_00 = UDS_PKDataSet::GetPKModeTableRow(pUVar4);
      if (this_00 != (FDS_PkModeTableRow *)0x0) {
        bVar2 = FDS_PkModeTableRow::IsEnemy(this_00,FirstAttackMe);
        if (bVar2) {
          TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)local_res18);
          bVar2 = FWeakObjectPtr::IsValid(local_res18);
          if (bVar2) {
            pUVar4 = (UDS_PKDataSet *)FWeakObjectPtr::Get(local_res18);
            bVar2 = UDS_PKDataSet::IsAttackMainPlayer(pUVar4);
            if (bVar2) {
              param_1->isAttackable = true;
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

