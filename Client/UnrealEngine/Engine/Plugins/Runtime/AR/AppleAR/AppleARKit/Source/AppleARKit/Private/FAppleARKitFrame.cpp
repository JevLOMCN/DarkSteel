// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 3

// StaticStruct @ 14cfcc050

UScriptStruct * __cdecl FAppleARKitFrame::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppleARKitFrame.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AppleARKit();
    Z_Registration_Info_UScriptStruct_FAppleARKitFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitFrame,(UObject *)pUVar1,
                         L"AppleARKitFrame");
  }
  return Z_Registration_Info_UScriptStruct_FAppleARKitFrame.OuterSingleton;
}

// FAppleARKitFrame @ 14cfcf690

/* WARNING: Type propagation algorithm not settling */

FAppleARKitFrame * __thiscall FAppleARKitFrame::FAppleARKitFrame(FAppleARKitFrame *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->Timestamp = 0.0;
  (this->CapturedYImageSize).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->CapturedCbCrImageSize).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->Camera).TrackingQuality = NotTracking;
  (this->Camera).TrackingQualityReason = None;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Camera).Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Camera).Transform.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Camera).Transform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Camera).Transform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Camera).Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Camera).Transform.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Camera).Transform.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Camera).Transform.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Camera).Transform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Camera).Transform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Camera).Transform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Camera).Transform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Camera).Orientation.W = 1.0;
  (this->Camera).Orientation.X = 0.0;
  (this->Camera).Orientation.Y = 0.0;
  (this->Camera).Orientation.Z = 0.0;
  (this->Camera).Translation.field0_0x0._s_0.X = 0.0;
  (this->Camera).Translation.field0_0x0._s_0.Y = 0.0;
  (this->Camera).Translation.field0_0x0._s_0.Z = 0.0;
  (this->Camera).ImageResolution.field0_0x0._s_0.X = 0.0;
  (this->Camera).ImageResolution.field0_0x0._s_0.Y = 0.0;
  (this->Camera).FocalLength.field0_0x0._s_0.X = 0.0;
  (this->Camera).FocalLength.field0_0x0._s_0.Y = 0.0;
  (this->Camera).PrincipalPoint.field0_0x0._s_0.X = 0.0;
  (this->Camera).PrincipalPoint.field0_0x0._s_0.Y = 0.0;
  (this->LightEstimate).bIsValid = false;
  (this->LightEstimate).AmbientIntensity = 0.0;
  (this->LightEstimate).AmbientColorTemperatureKelvin = 0.0;
  this->WorldMappingState = NotAvailable;
  (this->Tracked2DPose).SkeletonDefinition.NumJoints = 0;
  (this->Tracked2DPose).SkeletonDefinition.JointNames.ArrayNum = 0;
  (this->Tracked2DPose).SkeletonDefinition.JointNames.ArrayMax = 0;
  (this->Tracked2DPose).SkeletonDefinition.ParentIndices.ArrayNum = 0;
  (this->Tracked2DPose).SkeletonDefinition.ParentIndices.ArrayMax = 0;
  (this->Tracked2DPose).JointLocations.ArrayNum = 0;
  (this->Tracked2DPose).JointLocations.ArrayMax = 0;
  (this->Tracked2DPose).IsJointTracked.ArrayNum = 0;
  (this->Tracked2DPose).IsJointTracked.ArrayMax = 0;
  (this->Tracked2DPose).SkeletonDefinition.JointNames.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Tracked2DPose).SkeletonDefinition.ParentIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Tracked2DPose).JointLocations.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracked2DPose).IsJointTracked.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return this;
}

// operator= @ 14cfd16b0

/* WARNING: Type propagation algorithm not settling */

FAppleARKitFrame * __thiscall
FAppleARKitFrame::operator=(FAppleARKitFrame *this,FAppleARKitFrame *param_1)

{
  undefined8 uVar1;
  double dVar2;
  EARTrackingQualityReason EVar3;
  undefined6 uVar4;
  undefined3 uVar5;
  float fVar6;
  
  if (param_1 != this) {
    this->Timestamp = param_1->Timestamp;
    (this->CapturedYImageSize).field0_0x0 = (param_1->CapturedYImageSize).field0_0x0;
    (this->CapturedCbCrImageSize).field0_0x0 = (param_1->CapturedCbCrImageSize).field0_0x0;
    EVar3 = (param_1->Camera).TrackingQualityReason;
    uVar4 = *(undefined6 *)&(param_1->Camera).field_0x2;
    uVar1 = *(undefined8 *)&(param_1->Camera).field_0x8;
    (this->Camera).TrackingQuality = (param_1->Camera).TrackingQuality;
    (this->Camera).TrackingQualityReason = EVar3;
    *(undefined6 *)&(this->Camera).field_0x2 = uVar4;
    *(undefined8 *)&(this->Camera).field_0x8 = uVar1;
    dVar2 = (param_1->Camera).Transform.Rotation.XY.m128d_f64[1];
    (this->Camera).Transform.Rotation.XY.m128d_f64[0] =
         (param_1->Camera).Transform.Rotation.XY.m128d_f64[0];
    (this->Camera).Transform.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Camera).Transform.Rotation.ZW.m128d_f64[1];
    (this->Camera).Transform.Rotation.ZW.m128d_f64[0] =
         (param_1->Camera).Transform.Rotation.ZW.m128d_f64[0];
    (this->Camera).Transform.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Camera).Transform.Translation.XY.m128d_f64[1];
    (this->Camera).Transform.Translation.XY.m128d_f64[0] =
         (param_1->Camera).Transform.Translation.XY.m128d_f64[0];
    (this->Camera).Transform.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Camera).Transform.Translation.ZW.m128d_f64[1];
    (this->Camera).Transform.Translation.ZW.m128d_f64[0] =
         (param_1->Camera).Transform.Translation.ZW.m128d_f64[0];
    (this->Camera).Transform.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Camera).Transform.Scale3D.XY.m128d_f64[1];
    (this->Camera).Transform.Scale3D.XY.m128d_f64[0] =
         (param_1->Camera).Transform.Scale3D.XY.m128d_f64[0];
    (this->Camera).Transform.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Camera).Transform.Scale3D.ZW.m128d_f64[1];
    (this->Camera).Transform.Scale3D.ZW.m128d_f64[0] =
         (param_1->Camera).Transform.Scale3D.ZW.m128d_f64[0];
    (this->Camera).Transform.Scale3D.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->Camera).Orientation.Y;
    (this->Camera).Orientation.X = (param_1->Camera).Orientation.X;
    (this->Camera).Orientation.Y = dVar2;
    dVar2 = (param_1->Camera).Orientation.W;
    (this->Camera).Orientation.Z = (param_1->Camera).Orientation.Z;
    (this->Camera).Orientation.W = dVar2;
    dVar2 = (param_1->Camera).Translation.field0_0x0._s_0.Y;
    (this->Camera).Translation.field0_0x0._s_0.X = (param_1->Camera).Translation.field0_0x0._s_0.X;
    (this->Camera).Translation.field0_0x0._s_0.Y = dVar2;
    dVar2 = (param_1->Camera).ImageResolution.field0_0x0._s_0.X;
    (this->Camera).Translation.field0_0x0._s_0.Z = (param_1->Camera).Translation.field0_0x0._s_0.Z;
    (this->Camera).ImageResolution.field0_0x0._s_0.X = dVar2;
    dVar2 = (param_1->Camera).FocalLength.field0_0x0._s_0.X;
    (this->Camera).ImageResolution.field0_0x0._s_0.Y =
         (param_1->Camera).ImageResolution.field0_0x0._s_0.Y;
    (this->Camera).FocalLength.field0_0x0._s_0.X = dVar2;
    dVar2 = (param_1->Camera).PrincipalPoint.field0_0x0._s_0.X;
    (this->Camera).FocalLength.field0_0x0._s_0.Y = (param_1->Camera).FocalLength.field0_0x0._s_0.Y;
    (this->Camera).PrincipalPoint.field0_0x0._s_0.X = dVar2;
    uVar1 = *(undefined8 *)&(param_1->Camera).field_0xd8;
    (this->Camera).PrincipalPoint.field0_0x0._s_0.Y =
         (param_1->Camera).PrincipalPoint.field0_0x0._s_0.Y;
    *(undefined8 *)&(this->Camera).field_0xd8 = uVar1;
    uVar5 = *(undefined3 *)&(param_1->LightEstimate).field_0x1;
    fVar6 = (param_1->LightEstimate).AmbientIntensity;
    (this->LightEstimate).bIsValid = (param_1->LightEstimate).bIsValid;
    *(undefined3 *)&(this->LightEstimate).field_0x1 = uVar5;
    (this->LightEstimate).AmbientIntensity = fVar6;
    (this->LightEstimate).AmbientColorTemperatureKelvin =
         (param_1->LightEstimate).AmbientColorTemperatureKelvin;
    this->WorldMappingState = param_1->WorldMappingState;
    FARPose2D::operator=(&this->Tracked2DPose,&param_1->Tracked2DPose);
  }
  return this;
}

