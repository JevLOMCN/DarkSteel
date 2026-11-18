// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FPBDJointSolverSettings @ 143c44950

FPBDJointSolverSettings * __thiscall
Chaos::FPBDJointSolverSettings::FPBDJointSolverSettings
          (FPBDJointSolverSettings *this,FPBDJointSolverSettings *param_1)

{
  this->SwingTwistAngleTolerance = param_1->SwingTwistAngleTolerance;
  this->PositionTolerance = param_1->PositionTolerance;
  this->AngleTolerance = param_1->AngleTolerance;
  this->MinParentMassRatio = param_1->MinParentMassRatio;
  this->MaxInertiaRatio = param_1->MaxInertiaRatio;
  this->MinSolverStiffness = param_1->MinSolverStiffness;
  this->MaxSolverStiffness = param_1->MaxSolverStiffness;
  this->NumIterationsAtMaxSolverStiffness = param_1->NumIterationsAtMaxSolverStiffness;
  this->NumShockPropagationIterations = param_1->NumShockPropagationIterations;
  this->bUseLinearSolver = param_1->bUseLinearSolver;
  this->bUseSimd = param_1->bUseSimd;
  this->bSortEnabled = param_1->bSortEnabled;
  this->bSolvePositionLast = param_1->bSolvePositionLast;
  this->bUsePositionBasedDrives = param_1->bUsePositionBasedDrives;
  this->bEnableTwistLimits = param_1->bEnableTwistLimits;
  this->bEnableSwingLimits = param_1->bEnableSwingLimits;
  this->bEnableDrives = param_1->bEnableDrives;
  this->LinearStiffnessOverride = param_1->LinearStiffnessOverride;
  this->TwistStiffnessOverride = param_1->TwistStiffnessOverride;
  this->SwingStiffnessOverride = param_1->SwingStiffnessOverride;
  this->LinearProjectionOverride = param_1->LinearProjectionOverride;
  this->AngularProjectionOverride = param_1->AngularProjectionOverride;
  this->ShockPropagationOverride = param_1->ShockPropagationOverride;
  this->LinearDriveStiffnessOverride = param_1->LinearDriveStiffnessOverride;
  this->LinearDriveDampingOverride = param_1->LinearDriveDampingOverride;
  this->AngularDriveStiffnessOverride = param_1->AngularDriveStiffnessOverride;
  this->AngularDriveDampingOverride = param_1->AngularDriveDampingOverride;
  this->SoftLinearStiffnessOverride = param_1->SoftLinearStiffnessOverride;
  this->SoftLinearDampingOverride = param_1->SoftLinearDampingOverride;
  this->SoftTwistStiffnessOverride = param_1->SoftTwistStiffnessOverride;
  this->SoftTwistDampingOverride = param_1->SoftTwistDampingOverride;
  this->SoftSwingStiffnessOverride = param_1->SoftSwingStiffnessOverride;
  this->SoftSwingDampingOverride = param_1->SoftSwingDampingOverride;
  return this;
}

// FPBDJointSolverSettings @ 143c44a90

FPBDJointSolverSettings * __thiscall
Chaos::FPBDJointSolverSettings::FPBDJointSolverSettings(FPBDJointSolverSettings *this)

{
  this->NumIterationsAtMaxSolverStiffness = 1;
  this->NumShockPropagationIterations = 0;
  this->PositionTolerance = 0.0;
  this->SwingTwistAngleTolerance = 9.999999974752427e-07;
  this->MinSolverStiffness = 1.0;
  this->MaxSolverStiffness = 1.0;
  this->LinearStiffnessOverride = -1.0;
  this->TwistStiffnessOverride = -1.0;
  this->SwingStiffnessOverride = -1.0;
  this->LinearProjectionOverride = -1.0;
  this->AngularProjectionOverride = -1.0;
  this->ShockPropagationOverride = -1.0;
  this->LinearDriveStiffnessOverride = -1.0;
  this->LinearDriveDampingOverride = -1.0;
  this->AngularDriveStiffnessOverride = -1.0;
  this->AngularDriveDampingOverride = -1.0;
  this->SoftLinearStiffnessOverride = -1.0;
  this->SoftLinearDampingOverride = -1.0;
  this->SoftTwistStiffnessOverride = -1.0;
  this->SoftTwistDampingOverride = -1.0;
  this->SoftSwingStiffnessOverride = -1.0;
  this->SoftSwingDampingOverride = -1.0;
  this->AngleTolerance = 0.0;
  this->MinParentMassRatio = 0.0;
  this->MaxInertiaRatio = 0.0;
  this->bUseSimd = false;
  this->bSortEnabled = false;
  this->bSolvePositionLast = true;
  this->bUsePositionBasedDrives = true;
  this->bEnableTwistLimits = true;
  this->bEnableSwingLimits = true;
  this->bEnableDrives = true;
  return this;
}

// operator= @ 143c463b0

FPBDJointSolverSettings * __thiscall
Chaos::FPBDJointSolverSettings::operator=
          (FPBDJointSolverSettings *this,FPBDJointSolverSettings *param_1)

{
  this->SwingTwistAngleTolerance = param_1->SwingTwistAngleTolerance;
  this->PositionTolerance = param_1->PositionTolerance;
  this->AngleTolerance = param_1->AngleTolerance;
  this->MinParentMassRatio = param_1->MinParentMassRatio;
  this->MaxInertiaRatio = param_1->MaxInertiaRatio;
  this->MinSolverStiffness = param_1->MinSolverStiffness;
  this->MaxSolverStiffness = param_1->MaxSolverStiffness;
  this->NumIterationsAtMaxSolverStiffness = param_1->NumIterationsAtMaxSolverStiffness;
  this->NumShockPropagationIterations = param_1->NumShockPropagationIterations;
  this->bUseLinearSolver = param_1->bUseLinearSolver;
  this->bUseSimd = param_1->bUseSimd;
  this->bSortEnabled = param_1->bSortEnabled;
  this->bSolvePositionLast = param_1->bSolvePositionLast;
  this->bUsePositionBasedDrives = param_1->bUsePositionBasedDrives;
  this->bEnableTwistLimits = param_1->bEnableTwistLimits;
  this->bEnableSwingLimits = param_1->bEnableSwingLimits;
  this->bEnableDrives = param_1->bEnableDrives;
  this->LinearStiffnessOverride = param_1->LinearStiffnessOverride;
  this->TwistStiffnessOverride = param_1->TwistStiffnessOverride;
  this->SwingStiffnessOverride = param_1->SwingStiffnessOverride;
  this->LinearProjectionOverride = param_1->LinearProjectionOverride;
  this->AngularProjectionOverride = param_1->AngularProjectionOverride;
  this->ShockPropagationOverride = param_1->ShockPropagationOverride;
  this->LinearDriveStiffnessOverride = param_1->LinearDriveStiffnessOverride;
  this->LinearDriveDampingOverride = param_1->LinearDriveDampingOverride;
  this->AngularDriveStiffnessOverride = param_1->AngularDriveStiffnessOverride;
  this->AngularDriveDampingOverride = param_1->AngularDriveDampingOverride;
  this->SoftLinearStiffnessOverride = param_1->SoftLinearStiffnessOverride;
  this->SoftLinearDampingOverride = param_1->SoftLinearDampingOverride;
  this->SoftTwistStiffnessOverride = param_1->SoftTwistStiffnessOverride;
  this->SoftTwistDampingOverride = param_1->SoftTwistDampingOverride;
  this->SoftSwingStiffnessOverride = param_1->SoftSwingStiffnessOverride;
  this->SoftSwingDampingOverride = param_1->SoftSwingDampingOverride;
  return this;
}

