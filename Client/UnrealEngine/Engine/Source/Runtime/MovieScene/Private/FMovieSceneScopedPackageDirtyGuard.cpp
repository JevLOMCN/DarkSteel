// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FMovieSceneScopedPackageDirtyGuard @ 1461fc940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieSceneScopedPackageDirtyGuard * __thiscall
MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::FMovieSceneScopedPackageDirtyGuard
          (FMovieSceneScopedPackageDirtyGuard *this,USceneComponent *param_1)

{
  UPackage *pUVar1;
  
  this->Component = param_1;
  this->_padding_ = (longlong)&___7FMovieSceneScopedPackageDirtyGuard_MovieSceneHelpers__6B_;
  if (param_1 != (USceneComponent *)0x0) {
    pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    if (pUVar1 != (UPackage *)0x0) {
      pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Component);
      this->bPackageWasDirty = pUVar1->bDirty;
    }
  }
  return this;
}

// ~FMovieSceneScopedPackageDirtyGuard @ 1461ff5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
MovieSceneHelpers::FMovieSceneScopedPackageDirtyGuard::~FMovieSceneScopedPackageDirtyGuard
          (FMovieSceneScopedPackageDirtyGuard *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FMovieSceneScopedPackageDirtyGuard_MovieSceneHelpers__6B_;
  if (this->Component != (USceneComponent *)0x0) {
    pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Component);
    if (pUVar1 != (UPackage *)0x0) {
      pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this->Component);
      UPackage::SetDirtyFlag(pUVar1,this->bPackageWasDirty);
      return;
    }
  }
  return;
}

