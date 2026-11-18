// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FOptimisedDeltaConfiguration @ 1432825d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FOptimisedDeltaConfiguration * __thiscall
BuildPatchServices::FOptimisedDeltaConfiguration::FOptimisedDeltaConfiguration
          (FOptimisedDeltaConfiguration *this,TSharedRef<FBuildPatchAppManifest,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->SourceManifest).Object = (FBuildPatchAppManifest *)0x0;
  (this->SourceManifest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DestinationManifest).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->DestinationManifest).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CloudDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirectories).ArrayNum = 0;
  (this->CloudDirectories).ArrayMax = 0;
  this->DeltaPolicy = TryFetchContinueWithout;
  this->InstallMode = NonDestructiveInstall;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

