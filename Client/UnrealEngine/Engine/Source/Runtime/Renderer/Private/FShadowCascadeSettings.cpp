// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 14560b970

FShadowCascadeSettings * __thiscall
FShadowCascadeSettings::operator=(FShadowCascadeSettings *this,FShadowCascadeSettings *param_1)

{
  longlong lVar1;
  double dVar2;
  
  this->SplitNear = param_1->SplitNear;
  this->SplitFar = param_1->SplitFar;
  this->SplitNearFadeRegion = param_1->SplitNearFadeRegion;
  this->SplitFarFadeRegion = param_1->SplitFarFadeRegion;
  this->FadePlaneOffset = param_1->FadePlaneOffset;
  this->FadePlaneLength = param_1->FadePlaneLength;
  FConvexVolume::operator=(&this->ShadowBoundsAccurate,&param_1->ShadowBoundsAccurate);
  lVar1 = (param_1->NearFrustumPlane)._padding_;
  (this->NearFrustumPlane)._padding_ = (param_1->NearFrustumPlane)._padding_;
  (this->NearFrustumPlane)._padding_ = lVar1;
  dVar2 = (param_1->NearFrustumPlane).W;
  (this->NearFrustumPlane)._padding_ = (param_1->NearFrustumPlane)._padding_;
  (this->NearFrustumPlane).W = dVar2;
  lVar1 = (param_1->FarFrustumPlane)._padding_;
  (this->FarFrustumPlane)._padding_ = (param_1->FarFrustumPlane)._padding_;
  (this->FarFrustumPlane)._padding_ = lVar1;
  dVar2 = (param_1->FarFrustumPlane).W;
  (this->FarFrustumPlane)._padding_ = (param_1->FarFrustumPlane)._padding_;
  (this->FarFrustumPlane).W = dVar2;
  this->bFarShadowCascade = param_1->bFarShadowCascade;
  this->ShadowSplitIndex = param_1->ShadowSplitIndex;
  this->CascadeBiasDistribution = param_1->CascadeBiasDistribution;
  return this;
}

