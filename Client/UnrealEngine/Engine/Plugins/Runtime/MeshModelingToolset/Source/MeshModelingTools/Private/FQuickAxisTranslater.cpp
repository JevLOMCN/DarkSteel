// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FQuickAxisTranslater @ 14cc1bcc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FQuickAxisTranslater * __thiscall
UE::Geometry::FQuickAxisTranslater::FQuickAxisTranslater(FQuickAxisTranslater *this)

{
  undefined8 uVar1;
  
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  this->_padding_ = (longlong)&___7FQuickAxisTranslater_Geometry_UE__6B_;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->AxisFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->AxisFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  FRaySpatialSnapSolver::FRaySpatialSnapSolver(&this->MoveAxisSolver);
  FToolDataVisualizer::FToolDataVisualizer(&this->QuickAxisRenderer);
  *(undefined8 *)&this->AxisColorMap = 0;
  *(undefined8 *)&(this->AxisColorMap).field_0x8 = 0;
  *(undefined8 *)&(this->AxisColorMap).field_0x20 = 0;
  *(undefined4 *)&(this->AxisColorMap).field_0x28 = 0;
  *(undefined4 *)&(this->AxisColorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AxisColorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AxisColorMap).field_0x34 = 0;
  *(undefined8 *)&(this->AxisColorMap).field_0x40 = 0;
  *(undefined4 *)&(this->AxisColorMap).field_0x48 = 0;
  FToolDataVisualizer::FToolDataVisualizer(&this->QuickAxisPreviewRenderer);
  return this;
}

// ~FQuickAxisTranslater @ 14cc22290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Geometry::FQuickAxisTranslater::~FQuickAxisTranslater(FQuickAxisTranslater *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FQuickAxisTranslater_Geometry_UE__6B_;
  FToolDataVisualizer::~FToolDataVisualizer(&this->QuickAxisPreviewRenderer);
  *(undefined4 *)&(this->AxisColorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AxisColorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AxisColorMap);
  FToolDataVisualizer::~FToolDataVisualizer(&this->QuickAxisRenderer);
  pFVar2 = (this->MoveAxisSolver).GeneratedTargetPoints.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&(this->MoveAxisSolver).PointConstraintFunc != 0) {
    plVar3 = *(longlong **)&(this->MoveAxisSolver).PointConstraintFunc.field_0x28;
    plVar4 = (longlong *)&(this->MoveAxisSolver).PointConstraintFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FBasePositionSnapSolver3::~FBasePositionSnapSolver3
            ((FBasePositionSnapSolver3 *)&this->MoveAxisSolver);
  this->_padding_ = (longlong)&___7FQuickTransformer_Geometry_UE__6B_;
  return;
}

