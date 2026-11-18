// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// GetPriority @ 14d5a8b00

/* WARNING: Removing unreachable block (ram,0x00014d5a8b27) */
/* WARNING: Removing unreachable block (ram,0x00014d5a8b4c) */
/* WARNING: Removing unreachable block (ram,0x00014d5a8b61) */
/* WARNING: Removing unreachable block (ram,0x00014d5a8b86) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __thiscall UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::GetPriority(FEntry *this)

{
  uchar uVar1;
  int iVar2;
  
  uVar1 = (this->PriorityGiver).TypeIndex;
  if (uVar1 == '\0') {
    return (int)(this->PriorityGiver)._padding_;
  }
  if (uVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014d5a8b59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)(this->PriorityGiver)._padding_ + 8))();
    return iVar2;
  }
  return 0;
}

