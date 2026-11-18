// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// operator== @ 14ca6c120

bool __thiscall
UE::Geometry::FSceneCaptureConfig::operator==
          (FSceneCaptureConfig *this,FSceneCaptureConfig *param_1)

{
  bool bVar1;
  
  bVar1 = FRenderCaptureTypeFlags::operator==(&this->Flags,&param_1->Flags);
  if ((((bVar1) && (this->RenderCaptureImageSize == param_1->RenderCaptureImageSize)) &&
      (this->bAntiAliasing == param_1->bAntiAliasing)) &&
     ((param_1->FieldOfViewDegrees == this->FieldOfViewDegrees &&
      (param_1->NearPlaneDist == this->NearPlaneDist)))) {
    return true;
  }
  return false;
}

// operator!= @ 14ca6c1b0

bool __thiscall
UE::Geometry::FSceneCaptureConfig::operator!=
          (FSceneCaptureConfig *this,FSceneCaptureConfig *param_1)

{
  bool bVar1;
  
  bVar1 = FRenderCaptureTypeFlags::operator==(&this->Flags,&param_1->Flags);
  if ((((bVar1) && (this->RenderCaptureImageSize == param_1->RenderCaptureImageSize)) &&
      (this->bAntiAliasing == param_1->bAntiAliasing)) &&
     ((param_1->FieldOfViewDegrees == this->FieldOfViewDegrees &&
      (param_1->NearPlaneDist == this->NearPlaneDist)))) {
    return false;
  }
  return true;
}

