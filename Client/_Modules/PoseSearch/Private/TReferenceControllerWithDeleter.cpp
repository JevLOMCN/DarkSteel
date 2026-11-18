// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// DestroyObject @ 14a8b27b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory,SharedPointerInternals::DefaultDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory>,1>
::DestroyObject(TReferenceControllerWithDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory,SharedPointerInternals::DefaultDeleter<UE::PoseSearch::FGenerateTrajectoryPoseHistory>,1>
                *this)

{
  FGenerateTrajectoryPoseHistory *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenerateTrajectoryPoseHistory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a8b27c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

