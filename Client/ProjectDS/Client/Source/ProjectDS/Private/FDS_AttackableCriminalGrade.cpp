// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// CheckAttackable @ 14b99c7b0

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
FDS_AttackableCriminalGrade::CheckAttackable
          (FDS_AttackableCriminalGrade *this,FDS_AttackableContext *param_1)

{
  EDS_PkCriminalGradeType EVar1;
  bool bVar2;
  UDS_TableManager *pUVar3;
  UDS_PKDataSet *pUVar4;
  FDS_PkModeTableRow *this_00;
  FDS_PkCriminalGradeTableRow *pFVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      pUVar3 = UDS_TableManager::GetInst();
      if (pUVar3 != (UDS_TableManager *)0x0) {
        pUVar4 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_res10);
        this_00 = UDS_PKDataSet::GetPKModeTableRow(pUVar4);
        if (this_00 != (FDS_PkModeTableRow *)0x0) {
          pUVar4 = (UDS_PKDataSet *)FWeakObjectPtr::Get(local_res18);
          pFVar5 = UDS_PKDataSet::GetLoadedCriminalGradeTableRow(pUVar4);
          if (pFVar5 != (FDS_PkCriminalGradeTableRow *)0x0) {
            EVar1 = pFVar5->ID;
            if (EVar1 == PKCriminalGrade1) {
              bVar2 = FDS_PkModeTableRow::IsEnemy(this_00,TargetPKCriminalGrade1);
              param_1->isAttackable = bVar2;
              return true;
            }
            if (EVar1 == PKCriminalGrade2) {
              bVar2 = FDS_PkModeTableRow::IsEnemy(this_00,TargetPKCriminalGrade2);
              param_1->isAttackable = bVar2;
              return true;
            }
            if (EVar1 == PKCriminalGrade3) {
              bVar2 = FDS_PkModeTableRow::IsEnemy(this_00,TargetPKCriminalGrade3);
              param_1->isAttackable = bVar2;
              return true;
            }
            if (EVar1 == PKCriminalGrade4) {
              bVar2 = FDS_PkModeTableRow::IsEnemy(this_00,TargetPKCriminalGrade4);
              param_1->isAttackable = bVar2;
            }
            return true;
          }
        }
      }
    }
  }
  return false;
}

