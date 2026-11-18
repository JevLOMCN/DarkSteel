// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c8af0

UScriptStruct * __cdecl FChaosVDParticleDynamicMisc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleDynamicMisc,(UObject *)pUVar1,
                         L"ChaosVDParticleDynamicMisc");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleDynamicMisc.OuterSingleton;
}

// operator= @ 1436d74a0

FChaosVDParticleDynamicMisc * __thiscall
FChaosVDParticleDynamicMisc::operator=
          (FChaosVDParticleDynamicMisc *this,FChaosVDParticleDynamicMisc *param_1)

{
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->MLinearEtherDrag = param_1->MLinearEtherDrag;
  this->MAngularEtherDrag = param_1->MAngularEtherDrag;
  this->MMaxLinearSpeedSq = param_1->MMaxLinearSpeedSq;
  this->MMaxAngularSpeedSq = param_1->MMaxAngularSpeedSq;
  this->MInitialOverlapDepenetrationVelocity = param_1->MInitialOverlapDepenetrationVelocity;
  this->MSleepThresholdMultiplier = param_1->MSleepThresholdMultiplier;
  this->MCollisionGroup = param_1->MCollisionGroup;
  this->MObjectState = param_1->MObjectState;
  this->MSleepType = param_1->MSleepType;
  this->MCollisionConstraintFlag = param_1->MCollisionConstraintFlag;
  *(char *)&(this->MControlFlags)._padding_ = (char)(param_1->MControlFlags)._padding_;
  (this->MControlFlags).bGravityEnabled = (param_1->MControlFlags).bGravityEnabled;
  (this->MControlFlags).bCCDEnabled = (param_1->MControlFlags).bCCDEnabled;
  (this->MControlFlags).bOneWayInteractionEnabled =
       (param_1->MControlFlags).bOneWayInteractionEnabled;
  (this->MControlFlags).bInertiaConditioningEnabled =
       (param_1->MControlFlags).bInertiaConditioningEnabled;
  (this->MControlFlags).GravityGroupIndex = (param_1->MControlFlags).GravityGroupIndex;
  (this->MControlFlags).bMACDEnabled = (param_1->MControlFlags).bMACDEnabled;
  (this->MControlFlags).bPartialIslandSleepAllowed =
       (param_1->MControlFlags).bPartialIslandSleepAllowed;
  (this->MControlFlags).bGyroscopicTorqueEnabled = (param_1->MControlFlags).bGyroscopicTorqueEnabled
  ;
  this->bDisabled = param_1->bDisabled;
  this->PositionSolverIterationCount = param_1->PositionSolverIterationCount;
  this->VelocitySolverIterationCount = param_1->VelocitySolverIterationCount;
  this->ProjectionSolverIterationCount = param_1->ProjectionSolverIterationCount;
  return this;
}

// Serialize @ 1436df730

bool __thiscall
FChaosVDParticleDynamicMisc::Serialize(FChaosVDParticleDynamicMisc *this,FArchive *param_1)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  EChaosVDObjectStateType *pEVar5;
  EChaosVDSleepType *pEVar6;
  schar *psVar7;
  int iVar8;
  
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ == '\0') {
    return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
  }
  ::operator<<(param_1,&this->MAngularEtherDrag);
  ::operator<<(param_1,&this->MMaxLinearSpeedSq);
  ::operator<<(param_1,&this->MMaxAngularSpeedSq);
  pfVar1 = &this->MInitialOverlapDepenetrationVelocity;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &this->MCollisionGroup;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar5 = (EChaosVDObjectStateType *)**(undefined8 **)&param_1->field_0x8;
  if ((EChaosVDObjectStateType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->MObjectState,1);
  }
  else {
    this->MObjectState = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar6 = (EChaosVDSleepType *)**(undefined8 **)&param_1->field_0x8;
  if ((EChaosVDSleepType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->MSleepType,1);
  }
  else {
    this->MSleepType = *pEVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bDisabled);
  FChaosVDFRigidParticleControlFlags::Serialize(&this->MControlFlags,param_1);
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xd6 < iVar8) {
    psVar7 = (schar *)**(undefined8 **)&param_1->field_0x8;
    if ((schar *)(*(undefined8 **)&param_1->field_0x8)[1] < psVar7 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PositionSolverIterationCount,1);
    }
    else {
      this->PositionSolverIterationCount = *psVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    psVar7 = (schar *)**(undefined8 **)&param_1->field_0x8;
    if ((schar *)(*(undefined8 **)&param_1->field_0x8)[1] < psVar7 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->VelocitySolverIterationCount,1);
    }
    else {
      this->VelocitySolverIterationCount = *psVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    psVar7 = (schar *)**(undefined8 **)&param_1->field_0x8;
    if ((schar *)(*(undefined8 **)&param_1->field_0x8)[1] < psVar7 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ProjectionSolverIterationCount,1);
    }
    else {
      this->ProjectionSolverIterationCount = *psVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  iVar8 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (0xd7 < iVar8) {
    ::operator<<(param_1,&this->MLinearEtherDrag);
    ::operator<<(param_1,&this->MSleepThresholdMultiplier);
    ::operator<<(param_1,&this->MCollisionConstraintFlag);
  }
  return true;
}

