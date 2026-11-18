// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// FSceneSnapQueryRequest @ 149638d70

/* WARNING: Enum "Type": Some values do not have unique names */

FSceneSnapQueryRequest * __thiscall
FSceneSnapQueryRequest::FSceneSnapQueryRequest(FSceneSnapQueryRequest *this)

{
  undefined8 uVar1;
  
  *(undefined2 *)&(this->ResultCoordinateSpace).bIsSet = 0x100;
  *(undefined8 *)&(this->CustomTargetTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CustomTargetTypes).Elements = 0;
  *(undefined8 *)&(this->CustomTargetTypes).Elements.field_0x20 = 0;
  this->TargetTypes = Grid;
  *(undefined4 *)&(this->CustomTargetTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CustomTargetTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomTargetTypes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CustomTargetTypes).Elements.field_0x30 = 0xffffffff;
  (this->CustomTargetTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CustomTargetTypes).HashSize = 0;
  (this->GridSize).bIsSet = false;
  (this->RotGridSize).bIsSet = false;
  (this->ScaleGridSize).bIsSet = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DeltaRotation).X = 0.0;
  (this->DeltaRotation).Y = 0.0;
  (this->DeltaRotation).Z = 0.0;
  this->VisualAngleThresholdDegrees = 15.0;
  (this->DeltaRotation).W = 0.0;
  this->RotationAngle = 0.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->ComponentsToIgnore = (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->InvisibleComponentsToInclude =
       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0;
  (this->Scale).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// GetResultCoordinateSpace @ 1496de200

/* WARNING: Enum "Type": Some values do not have unique names */

EToolContextCoordinateSystem __thiscall
FSceneSnapQueryRequest::GetResultCoordinateSpace(FSceneSnapQueryRequest *this)

{
  FSceneSnapQueryRequest *pFVar1;
  
  pFVar1 = (FSceneSnapQueryRequest *)&this->ResultCoordinateSpace;
  if ((this->ResultCoordinateSpace).bIsSet == false) {
    pFVar1 = this;
  }
  return pFVar1->RequestCoordinateSpace;
}

