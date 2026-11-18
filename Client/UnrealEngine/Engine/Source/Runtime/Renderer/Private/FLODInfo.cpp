// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLODInfo @ 144a5a740

FLODInfo * __thiscall HeterogeneousVolumes::FLODInfo::FLODInfo(FLODInfo *this,FLODInfo *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->WorldSceneBounds).Origin.field0_0x0._s_0.Y;
  (this->WorldSceneBounds).Origin.field0_0x0._s_0.X =
       (param_1->WorldSceneBounds).Origin.field0_0x0._s_0.X;
  (this->WorldSceneBounds).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->WorldSceneBounds).BoxExtent.field0_0x0._s_0.X;
  (this->WorldSceneBounds).Origin.field0_0x0._s_0.Z =
       (param_1->WorldSceneBounds).Origin.field0_0x0._s_0.Z;
  (this->WorldSceneBounds).BoxExtent.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->WorldSceneBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->WorldSceneBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->WorldSceneBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->WorldSceneBounds).BoxExtent.field0_0x0._s_0.Z = dVar1;
  (this->WorldSceneBounds).SphereRadius = (param_1->WorldSceneBounds).SphereRadius;
  dVar1 = (param_1->WorldOrigin).field0_0x0._s_0.Y;
  (this->WorldOrigin).field0_0x0._s_0.X = (param_1->WorldOrigin).field0_0x0._s_0.X;
  (this->WorldOrigin).field0_0x0._s_0.Y = dVar1;
  (this->WorldOrigin).field0_0x0._s_0.Z = (param_1->WorldOrigin).field0_0x0._s_0.Z;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  FConvexVolume::FConvexVolume(&this->WorldShadowFrustum,&param_1->WorldShadowFrustum);
  this->FOV = param_1->FOV;
  this->NearClippingDistance = param_1->NearClippingDistance;
  this->DownsampleFactor = param_1->DownsampleFactor;
  this->bIsPerspective = param_1->bIsPerspective;
  return this;
}

// FLODInfo @ 144a5a7f0

FLODInfo * __thiscall HeterogeneousVolumes::FLODInfo::FLODInfo(FLODInfo *this)

{
  undefined8 uVar1;
  
  (this->WorldSceneBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->WorldSceneBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->WorldSceneBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->WorldSceneBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->WorldSceneBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->WorldSceneBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->WorldSceneBounds).SphereRadius = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldOrigin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldOrigin).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldOrigin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->WorldShadowFrustum).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->WorldShadowFrustum).Planes.ArrayNum = 0;
  (this->WorldShadowFrustum).Planes.ArrayMax = 6;
  (this->WorldShadowFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->WorldShadowFrustum).PermutedPlanes.ArrayNum = 0;
  (this->WorldShadowFrustum).PermutedPlanes.ArrayMax = 8;
  this->bIsPerspective = false;
  this->FOV = 0.7853982;
  this->NearClippingDistance = 1.0;
  this->DownsampleFactor = 1.0;
  return this;
}

