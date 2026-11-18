// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c65d0

UScriptStruct * __cdecl FChaosVDJointSolverSettingsDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper,
                         (UObject *)pUVar1,L"ChaosVDJointSolverSettingsDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDJointSolverSettingsDataWrapper.OuterSingleton;
}

// FChaosVDJointSolverSettingsDataWrapper @ 1436d4bc0

FChaosVDJointSolverSettingsDataWrapper * __thiscall
FChaosVDJointSolverSettingsDataWrapper::FChaosVDJointSolverSettingsDataWrapper
          (FChaosVDJointSolverSettingsDataWrapper *this)

{
  undefined1 *puVar1;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->SwingTwistAngleTolerance = 0.0;
  this->_padding_ = (longlong)&___7FChaosVDJointSolverSettingsDataWrapper__6B_;
  this->bUseLinearSolver = 0;
  this->bEnableDrives = 0;
  this->bEnableSwingLimits = 0;
  this->bEnableTwistLimits = 0;
  this->bUsePositionBasedDrives = 0;
  this->bSolvePositionLast = 0;
  this->bSortEnabled = 0;
  this->PositionTolerance = 0.0;
  this->AngleTolerance = 0.0;
  this->MinParentMassRatio = 0.0;
  this->MaxInertiaRatio = 0.0;
  this->MinSolverStiffness = 0.0;
  this->MaxSolverStiffness = 0.0;
  this->NumIterationsAtMaxSolverStiffness = -1;
  this->NumShockPropagationIterations = -1;
  this->LinearStiffnessOverride = 0.0;
  this->TwistStiffnessOverride = 0.0;
  this->SwingStiffnessOverride = 0.0;
  this->LinearProjectionOverride = 0.0;
  this->AngularProjectionOverride = 0.0;
  this->ShockPropagationOverride = 0.0;
  this->LinearDriveStiffnessOverride = 0.0;
  this->LinearDriveDampingOverride = 0.0;
  this->AngularDriveStiffnessOverride = 0.0;
  this->AngularDriveDampingOverride = 0.0;
  this->SoftLinearStiffnessOverride = 0.0;
  this->SoftLinearDampingOverride = 0.0;
  this->SoftTwistStiffnessOverride = 0.0;
  this->SoftTwistDampingOverride = 0.0;
  this->SoftSwingStiffnessOverride = 0.0;
  this->SoftSwingDampingOverride = 0.0;
  return this;
}

// Serialize @ 1436ddf80

bool __thiscall
FChaosVDJointSolverSettingsDataWrapper::Serialize
          (FChaosVDJointSolverSettingsDataWrapper *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong *plVar4;
  ushort local_res8 [4];
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    ::operator<<(param_1,&this->SwingTwistAngleTolerance);
    ::operator<<(param_1,&this->PositionTolerance);
    ::operator<<(param_1,&this->AngleTolerance);
    ::operator<<(param_1,&this->MinParentMassRatio);
    ::operator<<(param_1,&this->MaxInertiaRatio);
    ::operator<<(param_1,&this->MinSolverStiffness);
    ::operator<<(param_1,&this->MaxSolverStiffness);
    piVar1 = &this->NumIterationsAtMaxSolverStiffness;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar1 = &this->NumShockPropagationIterations;
    piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&this->LinearStiffnessOverride);
    ::operator<<(param_1,&this->TwistStiffnessOverride);
    ::operator<<(param_1,&this->SwingStiffnessOverride);
    ::operator<<(param_1,&this->LinearProjectionOverride);
    ::operator<<(param_1,&this->AngularProjectionOverride);
    ::operator<<(param_1,&this->ShockPropagationOverride);
    ::operator<<(param_1,&this->LinearDriveStiffnessOverride);
    ::operator<<(param_1,&this->LinearDriveDampingOverride);
    ::operator<<(param_1,&this->AngularDriveStiffnessOverride);
    ::operator<<(param_1,&this->AngularDriveDampingOverride);
    ::operator<<(param_1,&this->SoftLinearStiffnessOverride);
    ::operator<<(param_1,&this->SoftLinearDampingOverride);
    ::operator<<(param_1,&this->SoftTwistStiffnessOverride);
    ::operator<<(param_1,&this->SoftTwistDampingOverride);
    ::operator<<(param_1,&this->SoftSwingStiffnessOverride);
    ::operator<<(param_1,&this->SoftSwingDampingOverride);
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      this->bUseLinearSolver = 0;
      this->bEnableDrives = 0;
      this->bEnableSwingLimits = 0;
      this->bEnableTwistLimits = 0;
      this->bUsePositionBasedDrives = 0;
      this->bSolvePositionLast = 0;
      this->bSortEnabled = 0;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((ulonglong)plVar4[1] < *plVar4 + 2U) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      *plVar4 = *plVar4 + 2;
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

