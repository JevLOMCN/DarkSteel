// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FCharacterGroundConstraint @ 14388a2d0

FCharacterGroundConstraint * __thiscall
Chaos::FCharacterGroundConstraint::FCharacterGroundConstraint(FCharacterGroundConstraint *this)

{
  undefined8 uVar1;
  
  FConstraintBase::FConstraintBase((FConstraintBase *)this,CharacterGroundConstraintType);
  this->_padding_ = (longlong)&___7FCharacterGroundConstraint_Chaos__6B_;
  *(undefined8 *)&(this->ConstraintSettings).Property.VerticalAxis = 0;
  (this->ConstraintSettings).Property.RadialForceLimit = 1500.0;
  *(undefined8 *)&(this->ConstraintSettings).Property.VerticalAxis.field_0x8 = 0;
  (this->ConstraintSettings).Property.FrictionForceLimit = 100.0;
  (this->ConstraintSettings).Property.TwistTorqueLimit = 1000.0;
  (this->ConstraintSettings).Property.SwingTorqueLimit = 5000.0;
  (this->ConstraintSettings).Property.AssumedOnGroundHeight = 2.0;
  (this->ConstraintSettings).Property.MaxCharacterGroundMassRatio = -1.0;
  *(undefined8 *)&(this->ConstraintSettings).Property.VerticalAxis.field_0x10 = 0x3ff0000000000000;
  (this->ConstraintSettings).Property.TargetHeight = 0.0;
  (this->ConstraintSettings).Property.CosMaxWalkableSlopeAngle = 0.633;
  (this->ConstraintSettings).Property.DampingFactor = 0.0;
  (this->ConstraintSettings).Property.MotionTargetMassBias = 1.0;
  (this->ConstraintSettings).Property.RadialForceMotionTargetScaling = 1.0;
  (this->ConstraintSettings).Property.UserData = (void *)0x0;
  (this->CharacterProxy).Property.ParticleProxy = (FSingleParticlePhysicsProxy *)0x0;
  (this->GroundProxy).Property.ParticleProxy = (FSingleParticlePhysicsProxy *)0x0;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  *(double *)&(this->ConstraintData).Property.GroundNormal =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ConstraintData).Property.GroundNormal.field_0x8 = uVar1;
  *(double *)&(this->ConstraintData).Property.GroundNormal.field_0x10 =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&(this->ConstraintData).Property.TargetDeltaPosition =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ConstraintData).Property.TargetDeltaPosition.field_0x8 = uVar1;
  *(double *)&(this->ConstraintData).Property.TargetDeltaPosition.field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ConstraintData).Property.GroundDistance = 10000000000.0;
  (this->ConstraintData).Property.TargetDeltaFacing = 0.0;
  (this->ConstraintData).Property.CosMaxWalkableSlopeAngle = 0.633;
  (this->SolverAppliedForce).field0_0x0._s_0.X = 0.0;
  (this->SolverAppliedForce).field0_0x0._s_0.Y = 0.0;
  (this->SolverAppliedForce).field0_0x0._s_0.Z = 0.0;
  (this->SolverAppliedTorque).field0_0x0._s_0.X = 0.0;
  (this->SolverAppliedTorque).field0_0x0._s_0.Y = 0.0;
  (this->SolverAppliedTorque).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~FCharacterGroundConstraint @ 14388c870

void __thiscall
Chaos::FCharacterGroundConstraint::~FCharacterGroundConstraint(FCharacterGroundConstraint *this)

{
  this->_padding_ = (longlong)&___7FConstraintBase_Chaos__6B_;
  return;
}

// Init @ 1438c24f0

void __thiscall
Chaos::FCharacterGroundConstraint::Init
          (FCharacterGroundConstraint *this,FSingleParticlePhysicsProxy *param_1)

{
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (FSingleParticlePhysicsProxy *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3478419456693108752>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraint.cpp"
                       ,0x10,"InCharacterProxy");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->CharacterProxy).Property.ParticleProxy = param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10000;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0xc000;
  return;
}

// SyncRemoteDataImp @ 1438d8a10

void __thiscall
Chaos::FCharacterGroundConstraint::SyncRemoteDataImp
          (FCharacterGroundConstraint *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  void *pvVar1;
  double dVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  FParticleProxyProperty *pFVar21;
  FCharacterGroundConstraintSettings *pFVar22;
  FCharacterGroundConstraintDynamicData *pFVar23;
  
  uVar20 = (param_3->Flags).Bits;
  if ((uVar20 >> 0x10 & 1) != 0) {
    pFVar3 = (this->CharacterProxy).Property.ParticleProxy;
    pFVar21 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->CharacterParticleProxyPool,param_2);
    pFVar21->ParticleProxy = pFVar3;
    uVar20 = (param_3->Flags).Bits;
  }
  if ((uVar20 >> 0x11 & 1) != 0) {
    pFVar3 = (this->GroundProxy).Property.ParticleProxy;
    pFVar21 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->GroundParticleProxyPool,param_2);
    pFVar21->ParticleProxy = pFVar3;
    uVar20 = (param_3->Flags).Bits;
  }
  if ((uVar20 >> 0xe & 1) != 0) {
    uVar4 = *(undefined8 *)&(this->ConstraintSettings).Property.VerticalAxis;
    uVar5 = *(undefined8 *)&(this->ConstraintSettings).Property.VerticalAxis.field_0x8;
    uVar6 = *(undefined8 *)&(this->ConstraintSettings).Property.VerticalAxis.field_0x10;
    dVar2 = (this->ConstraintSettings).Property.TargetHeight;
    dVar7 = (this->ConstraintSettings).Property.RadialForceLimit;
    dVar8 = (this->ConstraintSettings).Property.FrictionForceLimit;
    dVar9 = (this->ConstraintSettings).Property.TwistTorqueLimit;
    dVar10 = (this->ConstraintSettings).Property.SwingTorqueLimit;
    dVar11 = (this->ConstraintSettings).Property.CosMaxWalkableSlopeAngle;
    dVar12 = (this->ConstraintSettings).Property.DampingFactor;
    dVar13 = (this->ConstraintSettings).Property.AssumedOnGroundHeight;
    dVar14 = (this->ConstraintSettings).Property.MotionTargetMassBias;
    dVar15 = (this->ConstraintSettings).Property.RadialForceMotionTargetScaling;
    dVar16 = (this->ConstraintSettings).Property.MaxCharacterGroundMassRatio;
    pvVar1 = (this->ConstraintSettings).Property.UserData;
    pFVar22 = TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::GetElement
                        (&param_1->CharacterGroundConstraintSettingsPool,param_2);
    *(undefined8 *)&pFVar22->VerticalAxis = uVar4;
    *(undefined8 *)&(pFVar22->VerticalAxis).field_0x8 = uVar5;
    *(undefined8 *)&(pFVar22->VerticalAxis).field_0x10 = uVar6;
    pFVar22->TargetHeight = dVar2;
    pFVar22->RadialForceLimit = dVar7;
    pFVar22->FrictionForceLimit = dVar8;
    pFVar22->TwistTorqueLimit = dVar9;
    pFVar22->SwingTorqueLimit = dVar10;
    pFVar22->CosMaxWalkableSlopeAngle = dVar11;
    pFVar22->DampingFactor = dVar12;
    pFVar22->AssumedOnGroundHeight = dVar13;
    pFVar22->MotionTargetMassBias = dVar14;
    pFVar22->RadialForceMotionTargetScaling = dVar15;
    pFVar22->MaxCharacterGroundMassRatio = dVar16;
    pFVar22->UserData = pvVar1;
    uVar20 = (param_3->Flags).Bits;
  }
  if ((uVar20 >> 0xf & 1) != 0) {
    uVar4 = *(undefined8 *)&(this->ConstraintData).Property.GroundNormal;
    uVar5 = *(undefined8 *)&(this->ConstraintData).Property.GroundNormal.field_0x8;
    uVar6 = *(undefined8 *)&(this->ConstraintData).Property.GroundNormal.field_0x10;
    uVar17 = *(undefined8 *)&(this->ConstraintData).Property.TargetDeltaPosition;
    uVar18 = *(undefined8 *)&(this->ConstraintData).Property.TargetDeltaPosition.field_0x8;
    uVar19 = *(undefined8 *)&(this->ConstraintData).Property.TargetDeltaPosition.field_0x10;
    dVar7 = (this->ConstraintData).Property.TargetDeltaFacing;
    dVar8 = (this->ConstraintData).Property.GroundDistance;
    dVar2 = (this->ConstraintData).Property.CosMaxWalkableSlopeAngle;
    pFVar23 = TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::GetElement
                        (&param_1->CharacterGroundConstraintDynamicDataPool,param_2);
    *(undefined8 *)&pFVar23->GroundNormal = uVar4;
    *(undefined8 *)&(pFVar23->GroundNormal).field_0x8 = uVar5;
    *(undefined8 *)&(pFVar23->GroundNormal).field_0x10 = uVar6;
    *(undefined8 *)&pFVar23->TargetDeltaPosition = uVar17;
    *(undefined8 *)&(pFVar23->TargetDeltaPosition).field_0x8 = uVar18;
    *(undefined8 *)&(pFVar23->TargetDeltaPosition).field_0x10 = uVar19;
    pFVar23->TargetDeltaFacing = dVar7;
    pFVar23->GroundDistance = dVar8;
    pFVar23->CosMaxWalkableSlopeAngle = dVar2;
  }
  return;
}

