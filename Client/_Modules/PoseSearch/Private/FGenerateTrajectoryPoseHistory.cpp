// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// FGenerateTrajectoryPoseHistory @ 14a8ab4a0

FGenerateTrajectoryPoseHistory * __thiscall
UE::PoseSearch::FGenerateTrajectoryPoseHistory::FGenerateTrajectoryPoseHistory
          (FGenerateTrajectoryPoseHistory *this)

{
  FPoseHistory::FPoseHistory((FPoseHistory *)this);
  this->bGenerateTrajectory = false;
  this->bIsTrajectoryGeneratedBeforePreUpdate = false;
  this->_padding_ = (longlong)&___7FGenerateTrajectoryPoseHistory_PoseSearch_UE__6B_;
  (this->TrajectoryData).RotateTowardsMovementSpeed = 10.0;
  (this->TrajectoryDataSampling).NumHistorySamples = 0;
  (this->TrajectoryDataSampling).SecondsPerHistorySample = 0.0;
  (this->TrajectoryDataSampling).NumPredictionSamples = 0;
  (this->TrajectoryDataSampling).SecondsPerPredictionSample = 0.0;
  (this->TrajectoryData).bUseSpeedRemappingCurve = false;
  (this->TrajectoryData).MaxControllerYawRate = 70.0;
  (this->TrajectoryData).BendVelocityTowardsAcceleration = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->TrajectoryData).SpeedRemappingCurve);
  (this->TrajectoryData).bUseAccelerationRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->TrajectoryData).AccelerationRemappingCurve);
  return this;
}

// GenerateTrajectory @ 14a8f8f30

void __thiscall
UE::PoseSearch::FGenerateTrajectoryPoseHistory::GenerateTrajectory
          (FGenerateTrajectoryPoseHistory *this,UObject *param_1,float param_2)

{
  if ((this->bGenerateTrajectory != false) && (this->bIsTrajectoryGeneratedBeforePreUpdate == false)
     ) {
    FPoseHistory::GenerateTrajectory
              ((FPoseHistory *)this,param_1,param_2,&this->TrajectoryData,
               &this->TrajectoryDataSampling);
    this->bIsTrajectoryGeneratedBeforePreUpdate = true;
  }
  return;
}

