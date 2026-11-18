// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCachedSystemScalabilityCVars @ 148b1d1b0

FCachedSystemScalabilityCVars * __thiscall
FCachedSystemScalabilityCVars::FCachedSystemScalabilityCVars(FCachedSystemScalabilityCVars *this)

{
  this->bInitialized = false;
  this->DetailMode = -1;
  this->CookOutUnusedDetailModeComponents = 0;
  this->MaterialQualityLevel = Num;
  this->MaxShadowResolution = -1;
  this->MaxCSMShadowResolution = -1;
  this->ViewDistanceScale = -1.0;
  this->ViewDistanceScaleSquared = -1.0;
  this->StaticMeshLODDistanceScale = 1.0;
  this->SkeletalMeshOverlayDistanceScale = 1.0;
  this->MaxAnisotropy = -1;
  return this;
}

// operator== @ 148b1f750

bool __thiscall
FCachedSystemScalabilityCVars::operator==
          (FCachedSystemScalabilityCVars *this,FCachedSystemScalabilityCVars *param_1)

{
  if (((((this->DetailMode == param_1->DetailMode) &&
        (this->MaterialQualityLevel == param_1->MaterialQualityLevel)) &&
       (this->MaxShadowResolution == param_1->MaxShadowResolution)) &&
      ((this->MaxCSMShadowResolution == param_1->MaxCSMShadowResolution &&
       (param_1->ViewDistanceScale == this->ViewDistanceScale)))) &&
     ((param_1->ViewDistanceScaleSquared == this->ViewDistanceScaleSquared &&
      ((param_1->StaticMeshLODDistanceScale == this->StaticMeshLODDistanceScale &&
       (param_1->SkeletalMeshOverlayDistanceScale == this->SkeletalMeshOverlayDistanceScale)))))) {
    return true;
  }
  return false;
}

