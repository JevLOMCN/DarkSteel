// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// FNegativeSpaceSampleSettings @ 14c8976e0

FNegativeSpaceSampleSettings * __thiscall
UE::Geometry::FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings
          (FNegativeSpaceSampleSettings *this)

{
  this->SampleMethod = Uniform;
  this->MinSpacing = 3.0;
  this->ReduceRadiusMargin = 3.0;
  this->MinRadius = 10.0;
  this->MarchingCubesGridScale = 0.5;
  *(undefined8 *)&this->OptionalObstacleSDF = 0;
  *(undefined8 *)&(this->OptionalObstacleSDF).field_0x28 = 0;
  *(undefined8 *)&this->CustomRadiusMarginScale = 0;
  *(undefined8 *)&(this->CustomRadiusMarginScale).field_0x28 = 0;
  this->TargetNumSamples = 0x1e;
  this->bAllowSamplesInsideSpheres = false;
  this->bRequireSearchSampleCoverage = false;
  this->bOnlyConnectedToHull = false;
  this->MaxVoxelsPerDim = 0x80;
  this->bDeterministic = true;
  this->bAllowSamplesInsideMesh = false;
  this->VoxelExpandBoundsFactor = 1.0;
  this->MinCustomMarginScale = 1.0;
  this->AppliedScaleFactor = 1.0;
  *&(this->ResultTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ResultTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ResultTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ResultTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ResultTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ResultTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

// ~FNegativeSpaceSampleSettings @ 14c89a4d0

void __thiscall
UE::Geometry::FNegativeSpaceSampleSettings::~FNegativeSpaceSampleSettings
          (FNegativeSpaceSampleSettings *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CustomRadiusMarginScale != 0) {
    plVar1 = *(longlong **)&(this->CustomRadiusMarginScale).field_0x28;
    plVar2 = (longlong *)&(this->CustomRadiusMarginScale).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OptionalObstacleSDF != 0) {
    plVar1 = *(longlong **)&(this->OptionalObstacleSDF).field_0x28;
    plVar2 = (longlong *)&(this->OptionalObstacleSDF).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c89a519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

