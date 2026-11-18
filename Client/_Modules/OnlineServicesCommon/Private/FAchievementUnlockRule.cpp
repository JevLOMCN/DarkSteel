// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ContainsStat @ 14ee851c0

bool __thiscall
UE::Online::FAchievementUnlockRule::ContainsStat(FAchievementUnlockRule *this,FString *param_1)

{
  FAchievementUnlockCondition *pFVar1;
  
  pFVar1 = TArray<UE::Online::FAchievementUnlockCondition,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Online::FAchievementUnlockRule::ContainsStat_::__l2::<lambda_1>_>
                     (&this->Conditions,(<lambda_1>)param_1);
  return pFVar1 != (FAchievementUnlockCondition *)0x0;
}

