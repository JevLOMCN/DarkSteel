// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 1

// operator= @ 148bc4590

FCombinedProgress * __thiscall
FInstallBundleCombinedProgressTracker::FCombinedProgress::operator=
          (FCombinedProgress *this,FCombinedProgress *param_1)

{
  this->BackgroundDownloadProgressPercent = param_1->BackgroundDownloadProgressPercent;
  this->InstallOnlyProgressPercent = param_1->InstallOnlyProgressPercent;
  this->ProgressPercent = param_1->ProgressPercent;
  this->InstalledBundlesCount = param_1->InstalledBundlesCount;
  this->TotalBundlesCount = param_1->TotalBundlesCount;
  TArray<FBuildInstallerStat,TSizedDefaultAllocator<32>_>::operator=(&this->Stats,&param_1->Stats);
  this->CombinedStatus = param_1->CombinedStatus;
  this->CombinedPauseFlags = param_1->CombinedPauseFlags;
  this->bIsPaused = param_1->bIsPaused;
  this->bDoesCurrentStateSupportPausing = param_1->bDoesCurrentStateSupportPausing;
  this->bBundleRequiresUpdate = param_1->bBundleRequiresUpdate;
  return this;
}

