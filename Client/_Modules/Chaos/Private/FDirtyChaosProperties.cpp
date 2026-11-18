// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// Clear @ 1438a8070

void __thiscall
Chaos::FDirtyChaosProperties::Clear
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (this->Flags).Bits;
  if ((uVar1 & 1) != 0) {
    TDirtyElementPool<Chaos::FParticlePositionRotation>::Reset(&param_1->XRPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 & 2) != 0) {
    TDirtyElementPool<Chaos::FParticleVelocities>::Reset(&param_1->VelocitiesPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 & 4) != 0) {
    TDirtyElementPool<Chaos::FParticleDynamics>::Reset(&param_1->DynamicsPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 & 8) != 0) {
    TDirtyElementPool<Chaos::FParticleDynamicMisc>::Reset(&param_1->DynamicMiscPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 & 0x10) != 0) {
    TDirtyElementPool<Chaos::FParticleNonFrequentData>::Reset(&param_1->NonFrequentDataPool,param_2)
    ;
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 & 0x20) != 0) {
    TDirtyElementPool<Chaos::FParticleMassProps>::Reset(&param_1->MassPropsPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 & 0x40) != 0) {
    TDirtyElementPool<Chaos::FKinematicTarget>::Reset(&param_1->KinematicTargetPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((char)uVar1 < '\0') {
    TDirtyElementPool<Chaos::FPBDJointSettings>::Reset(&param_1->JointSettingsPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    TDirtyElementPool<Chaos::FProxyBasePairProperty>::Reset
              (&param_1->JointParticleProxiesPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::Reset
              (&param_1->JointPhysicsObjectsPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    TDirtyElementPool<Chaos::FPBDSuspensionSettings>::Reset
              (&param_1->SuspensionSettingsPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
              (&param_1->SuspensionParticleProxyPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    TDirtyElementPool<Chaos::FSuspensionLocation>::Reset(&param_1->SuspensionLocationPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    TDirtyElementPool<Chaos::FPhysicsObjectProperty>::Reset
              (&param_1->SuspensionPhysicsObjectPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::Reset
              (&param_1->CharacterGroundConstraintSettingsPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::Reset
              (&param_1->CharacterGroundConstraintDynamicDataPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
              (&param_1->CharacterParticleProxyPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
              (&param_1->GroundParticleProxyPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    TDirtyElementPool<Chaos::FParticlePositionRotation>::Reset(&param_1->ClusterXRPool,param_2);
    uVar1 = (this->Flags).Bits;
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    TDirtyElementPool<Chaos::FParticleVelocities>::Reset(&param_1->ClusterVelocitiesPool,param_2);
  }
  (this->Flags).Bits = 0;
  return;
}

// MoveData @ 143fb8580

void __thiscall
Chaos::FDirtyChaosProperties::MoveData
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  double dVar3;
  undefined4 uVar4;
  FSingleParticlePhysicsProxy *pFVar5;
  FPhysicsObject *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  IPhysicsProxyBase *pIVar17;
  IPhysicsProxyBase *pIVar18;
  FPhysicsObject *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  EObjectStateType EVar36;
  EResimType EVar37;
  ESleepType EVar38;
  undefined1 uVar39;
  FRigidParticleControlFlags FVar40;
  schar sVar41;
  schar sVar42;
  EKinematicTargetMode EVar43;
  bool bVar44;
  undefined7 uVar45;
  undefined8 *puVar46;
  uint uVar47;
  FParticlePositionRotation *pFVar48;
  FParticleVelocities *pFVar49;
  FParticleDynamics *pFVar50;
  FParticleDynamicMisc *pFVar51;
  FParticleNonFrequentData *pFVar52;
  FParticleNonFrequentData *this_00;
  FParticleMassProps *pFVar53;
  FKinematicTarget *pFVar54;
  FPBDJointSettings *pFVar55;
  FPBDJointSettings *pFVar56;
  FProxyBasePairProperty *pFVar57;
  FPhysicsObjectPairProperty *pFVar58;
  FPBDSuspensionSettings *pFVar59;
  FParticleProxyProperty *pFVar60;
  FSuspensionLocation *pFVar61;
  FPhysicsObjectProperty *pFVar62;
  FCharacterGroundConstraintSettings *pFVar63;
  FCharacterGroundConstraintDynamicData *pFVar64;
  undefined8 *puVar65;
  longlong lVar66;
  longlong lVar67;
  undefined8 local_338 [100];
  
  uVar47 = (this->Flags).Bits;
  if ((uVar47 & 1) != 0) {
    pFVar48 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_2);
    uVar1 = *(undefined8 *)&pFVar48->MX;
    uVar7 = *(undefined8 *)&(pFVar48->MX).field_0x8;
    uVar8 = *(undefined8 *)&(pFVar48->MX).field_0x10;
    lVar66 = pFVar48->_padding_;
    uVar9 = *(undefined8 *)&pFVar48->MR;
    uVar10 = *(undefined8 *)&(pFVar48->MR).field_0x8;
    pFVar48 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_3);
    *(undefined8 *)&pFVar48->MX = uVar1;
    *(undefined8 *)&(pFVar48->MX).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar48->MX).field_0x10 = uVar8;
    pFVar48->_padding_ = lVar66;
    *(undefined8 *)&pFVar48->MR = uVar9;
    *(undefined8 *)&(pFVar48->MR).field_0x8 = uVar10;
    TDirtyElementPool<Chaos::FParticlePositionRotation>::Reset(&param_1->XRPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 & 2) != 0) {
    pFVar49 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->VelocitiesPool,param_2);
    uVar7 = *(undefined8 *)&pFVar49->MV;
    uVar8 = *(undefined8 *)&(pFVar49->MV).field_0x8;
    uVar1 = *(undefined8 *)&(pFVar49->MW).field_0x4;
    pFVar49 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->VelocitiesPool,param_3);
    *(undefined8 *)&pFVar49->MV = uVar7;
    *(undefined8 *)&(pFVar49->MV).field_0x8 = uVar8;
    *(undefined8 *)&(pFVar49->MW).field_0x4 = uVar1;
    TDirtyElementPool<Chaos::FParticleVelocities>::Reset(&param_1->VelocitiesPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 & 4) != 0) {
    pFVar50 = TDirtyElementPool<Chaos::FParticleDynamics>::GetElement
                        (&param_1->DynamicsPool,param_2);
    uVar1 = *(undefined8 *)&pFVar50->MAcceleration;
    uVar7 = *(undefined8 *)&(pFVar50->MAcceleration).field_0x8;
    uVar8 = *(undefined8 *)&(pFVar50->MAngularAcceleration).field_0x4;
    uVar9 = *(undefined8 *)&pFVar50->MLinearImpulseVelocity;
    uVar10 = *(undefined8 *)&(pFVar50->MLinearImpulseVelocity).field_0x8;
    uVar11 = *(undefined8 *)&(pFVar50->MAngularImpulseVelocity).field_0x4;
    pFVar50 = TDirtyElementPool<Chaos::FParticleDynamics>::GetElement
                        (&param_1->DynamicsPool,param_3);
    *(undefined8 *)&pFVar50->MAcceleration = uVar1;
    *(undefined8 *)&(pFVar50->MAcceleration).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar50->MAngularAcceleration).field_0x4 = uVar8;
    *(undefined8 *)&pFVar50->MLinearImpulseVelocity = uVar9;
    *(undefined8 *)&(pFVar50->MLinearImpulseVelocity).field_0x8 = uVar10;
    *(undefined8 *)&(pFVar50->MAngularImpulseVelocity).field_0x4 = uVar11;
    TDirtyElementPool<Chaos::FParticleDynamics>::Reset(&param_1->DynamicsPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 & 8) != 0) {
    pFVar51 = TDirtyElementPool<Chaos::FParticleDynamicMisc>::GetElement
                        (&param_1->DynamicMiscPool,param_2);
    fVar29 = pFVar51->MLinearEtherDrag;
    fVar30 = pFVar51->MAngularEtherDrag;
    fVar31 = pFVar51->MMaxLinearSpeedSq;
    fVar32 = pFVar51->MMaxAngularSpeedSq;
    uVar4 = *(undefined4 *)&(pFVar51->MIterationSettings).NumProjectionIterations;
    fVar33 = pFVar51->MInitialOverlapDepenetrationVelocity;
    fVar34 = pFVar51->MSleepThresholdMultiplier;
    iVar35 = pFVar51->MCollisionGroup;
    EVar36 = pFVar51->MObjectState;
    EVar37 = pFVar51->MResimType;
    EVar38 = pFVar51->MSleepType;
    uVar39 = pFVar51->field_0x1f;
    uVar47 = pFVar51->MCollisionConstraintFlag;
    FVar40.field0_0x0 = (pFVar51->MControlFlags).field0_0x0;
    sVar41 = (pFVar51->MIterationSettings).NumPositionIterations;
    sVar42 = (pFVar51->MIterationSettings).NumVelocityIterations;
    pFVar51 = TDirtyElementPool<Chaos::FParticleDynamicMisc>::GetElement
                        (&param_1->DynamicMiscPool,param_3);
    pFVar51->MLinearEtherDrag = fVar29;
    pFVar51->MAngularEtherDrag = fVar30;
    pFVar51->MMaxLinearSpeedSq = fVar31;
    pFVar51->MMaxAngularSpeedSq = fVar32;
    pFVar51->MInitialOverlapDepenetrationVelocity = fVar33;
    pFVar51->MSleepThresholdMultiplier = fVar34;
    pFVar51->MCollisionGroup = iVar35;
    pFVar51->MObjectState = EVar36;
    pFVar51->MResimType = EVar37;
    pFVar51->MSleepType = EVar38;
    pFVar51->field_0x1f = uVar39;
    pFVar51->MCollisionConstraintFlag = uVar47;
    pFVar51->MControlFlags = (FRigidParticleControlFlags)FVar40.field0_0x0;
    (pFVar51->MIterationSettings).NumPositionIterations = sVar41;
    (pFVar51->MIterationSettings).NumVelocityIterations = sVar42;
    *(undefined4 *)&(pFVar51->MIterationSettings).NumProjectionIterations = uVar4;
    TDirtyElementPool<Chaos::FParticleDynamicMisc>::Reset(&param_1->DynamicMiscPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 & 0x10) != 0) {
    pFVar52 = TDirtyElementPool<Chaos::FParticleNonFrequentData>::GetElement
                        (&param_1->NonFrequentDataPool,param_2);
    this_00 = TDirtyElementPool<Chaos::FParticleNonFrequentData>::GetElement
                        (&param_1->NonFrequentDataPool,param_3);
    FParticleNonFrequentData::operator=(this_00,pFVar52);
    TDirtyElementPool<Chaos::FParticleNonFrequentData>::Reset(&param_1->NonFrequentDataPool,param_2)
    ;
  }
  uVar47 = (this->Flags).Bits;
  if ((uVar47 & 0x20) != 0) {
    pFVar53 = TDirtyElementPool<Chaos::FParticleMassProps>::GetElement
                        (&param_1->MassPropsPool,param_2);
    uVar1 = *(undefined8 *)&pFVar53->MCenterOfMass;
    uVar7 = *(undefined8 *)&(pFVar53->MCenterOfMass).field_0x8;
    uVar8 = *(undefined8 *)&(pFVar53->MCenterOfMass).field_0x10;
    dVar3 = pFVar53->MM;
    uVar9 = *(undefined8 *)&pFVar53->MRotationOfMass;
    uVar10 = *(undefined8 *)&(pFVar53->MRotationOfMass).field_0x8;
    uVar11 = *(undefined8 *)&(pFVar53->MRotationOfMass).field_0x10;
    uVar12 = *(undefined8 *)&(pFVar53->MRotationOfMass).field_0x18;
    uVar13 = *(undefined8 *)&pFVar53->MI;
    uVar14 = *(undefined8 *)&(pFVar53->MI).field_0x8;
    uVar15 = *(undefined8 *)&(pFVar53->MInvI).field_0x4;
    dVar16 = pFVar53->MInvM;
    pFVar53 = TDirtyElementPool<Chaos::FParticleMassProps>::GetElement
                        (&param_1->MassPropsPool,param_3);
    *(undefined8 *)&pFVar53->MCenterOfMass = uVar1;
    *(undefined8 *)&(pFVar53->MCenterOfMass).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar53->MCenterOfMass).field_0x10 = uVar8;
    pFVar53->MM = dVar3;
    *(undefined8 *)&pFVar53->MRotationOfMass = uVar9;
    *(undefined8 *)&(pFVar53->MRotationOfMass).field_0x8 = uVar10;
    *(undefined8 *)&(pFVar53->MRotationOfMass).field_0x10 = uVar11;
    *(undefined8 *)&(pFVar53->MRotationOfMass).field_0x18 = uVar12;
    *(undefined8 *)&pFVar53->MI = uVar13;
    *(undefined8 *)&(pFVar53->MI).field_0x8 = uVar14;
    *(undefined8 *)&(pFVar53->MInvI).field_0x4 = uVar15;
    pFVar53->MInvM = dVar16;
    TDirtyElementPool<Chaos::FParticleMassProps>::Reset(&param_1->MassPropsPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 & 0x40) != 0) {
    pFVar54 = TDirtyElementPool<Chaos::FKinematicTarget>::GetElement
                        (&param_1->KinematicTargetPool,param_2);
    uVar1 = *(undefined8 *)&pFVar54->Rotation;
    uVar7 = *(undefined8 *)&(pFVar54->Rotation).field_0x8;
    uVar8 = *(undefined8 *)&pFVar54->Position;
    uVar9 = *(undefined8 *)&(pFVar54->Position).field_0x8;
    uVar10 = *(undefined8 *)&(pFVar54->Position).field_0x10;
    EVar43 = pFVar54->Mode;
    uVar4 = *(undefined4 *)&pFVar54->field_0x2c;
    pFVar54 = TDirtyElementPool<Chaos::FKinematicTarget>::GetElement
                        (&param_1->KinematicTargetPool,param_3);
    *(undefined8 *)&pFVar54->Rotation = uVar1;
    *(undefined8 *)&(pFVar54->Rotation).field_0x8 = uVar7;
    *(undefined8 *)&pFVar54->Position = uVar8;
    *(undefined8 *)&(pFVar54->Position).field_0x8 = uVar9;
    *(undefined8 *)&(pFVar54->Position).field_0x10 = uVar10;
    pFVar54->Mode = EVar43;
    *(undefined4 *)&pFVar54->field_0x2c = uVar4;
    TDirtyElementPool<Chaos::FKinematicTarget>::Reset(&param_1->KinematicTargetPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((char)uVar47 < '\0') {
    pFVar55 = TDirtyElementPool<Chaos::FPBDJointSettings>::GetElement
                        (&param_1->JointSettingsPool,param_2);
    lVar67 = 6;
    lVar66 = 6;
    puVar46 = local_338;
    do {
      puVar65 = puVar46;
      pFVar56 = pFVar55;
      uVar1 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x8;
      uVar7 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x10;
      uVar8 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x18;
      pFVar55 = (FPBDJointSettings *)&(pFVar56->ConnectorTransforms).V[1].field_0x20;
      *puVar65 = *(undefined8 *)(pFVar56->ConnectorTransforms).V;
      puVar65[1] = uVar1;
      uVar1 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x20;
      uVar9 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x28;
      puVar65[2] = uVar7;
      puVar65[3] = uVar8;
      uVar7 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x30;
      uVar8 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x38;
      puVar65[4] = uVar1;
      puVar65[5] = uVar9;
      uVar1 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x40;
      uVar9 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x48;
      puVar65[6] = uVar7;
      puVar65[7] = uVar8;
      uVar7 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x50;
      uVar8 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x58;
      puVar65[8] = uVar1;
      puVar65[9] = uVar9;
      uVar1 = *(undefined8 *)((pFVar56->ConnectorTransforms).V + 1);
      uVar9 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x8;
      puVar65[10] = uVar7;
      puVar65[0xb] = uVar8;
      uVar7 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x10;
      uVar8 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x18;
      puVar65[0xc] = uVar1;
      puVar65[0xd] = uVar9;
      puVar65[0xe] = uVar7;
      puVar65[0xf] = uVar8;
      lVar66 = lVar66 + -1;
      puVar46 = puVar65 + 0x10;
    } while (lVar66 != 0);
    uVar1 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x28;
    uVar7 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x30;
    uVar8 = *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x38;
    puVar65[0x10] = *(undefined8 *)pFVar55;
    puVar65[0x11] = uVar1;
    puVar65[0x12] = uVar7;
    puVar65[0x13] = uVar8;
    pFVar55 = TDirtyElementPool<Chaos::FPBDJointSettings>::GetElement
                        (&param_1->JointSettingsPool,param_3);
    puVar46 = local_338;
    do {
      puVar65 = puVar46;
      pFVar56 = pFVar55;
      pFVar55 = (FPBDJointSettings *)&(pFVar56->ConnectorTransforms).V[1].field_0x20;
      uVar1 = puVar65[1];
      uVar7 = puVar65[2];
      uVar8 = puVar65[3];
      *(undefined8 *)(pFVar56->ConnectorTransforms).V = *puVar65;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x8 = uVar1;
      uVar1 = puVar65[4];
      uVar9 = puVar65[5];
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x10 = uVar7;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x18 = uVar8;
      uVar7 = puVar65[6];
      uVar8 = puVar65[7];
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x20 = uVar1;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x28 = uVar9;
      uVar1 = puVar65[8];
      uVar9 = puVar65[9];
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x30 = uVar7;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x38 = uVar8;
      uVar7 = puVar65[10];
      uVar8 = puVar65[0xb];
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x40 = uVar1;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x48 = uVar9;
      uVar1 = puVar65[0xc];
      uVar9 = puVar65[0xd];
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x50 = uVar7;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[0].field_0x58 = uVar8;
      uVar7 = puVar65[0xe];
      uVar8 = puVar65[0xf];
      *(undefined8 *)((pFVar56->ConnectorTransforms).V + 1) = uVar1;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x8 = uVar9;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x10 = uVar7;
      *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x18 = uVar8;
      lVar67 = lVar67 + -1;
      puVar46 = puVar65 + 0x10;
    } while (lVar67 != 0);
    uVar1 = puVar65[0x11];
    uVar7 = puVar65[0x12];
    uVar8 = puVar65[0x13];
    *(undefined8 *)pFVar55 = puVar65[0x10];
    *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x28 = uVar1;
    *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x30 = uVar7;
    *(undefined8 *)&(pFVar56->ConnectorTransforms).V[1].field_0x38 = uVar8;
    TDirtyElementPool<Chaos::FPBDJointSettings>::Reset(&param_1->JointSettingsPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 8 & 1) != 0) {
    pFVar57 = TDirtyElementPool<Chaos::FProxyBasePairProperty>::GetElement
                        (&param_1->JointParticleProxiesPool,param_2);
    pIVar17 = (pFVar57->ParticleProxies).V[0];
    pIVar18 = (pFVar57->ParticleProxies).V[1];
    pFVar57 = TDirtyElementPool<Chaos::FProxyBasePairProperty>::GetElement
                        (&param_1->JointParticleProxiesPool,param_3);
    (pFVar57->ParticleProxies).V[0] = pIVar17;
    (pFVar57->ParticleProxies).V[1] = pIVar18;
    TDirtyElementPool<Chaos::FProxyBasePairProperty>::Reset
              (&param_1->JointParticleProxiesPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 9 & 1) != 0) {
    pFVar58 = TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::GetElement
                        (&param_1->JointPhysicsObjectsPool,param_2);
    pFVar6 = (pFVar58->PhysicsBodies).V[0];
    pFVar19 = (pFVar58->PhysicsBodies).V[1];
    pFVar58 = TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::GetElement
                        (&param_1->JointPhysicsObjectsPool,param_3);
    (pFVar58->PhysicsBodies).V[0] = pFVar6;
    (pFVar58->PhysicsBodies).V[1] = pFVar19;
    TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::Reset
              (&param_1->JointPhysicsObjectsPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 10 & 1) != 0) {
    pFVar59 = TDirtyElementPool<Chaos::FPBDSuspensionSettings>::GetElement
                        (&param_1->SuspensionSettingsPool,param_2);
    bVar44 = pFVar59->Enabled;
    uVar45 = *(undefined7 *)&pFVar59->field_0x1;
    dVar3 = pFVar59->HardstopStiffness;
    dVar16 = pFVar59->HardstopVelocityCompensation;
    dVar20 = pFVar59->SpringPreload;
    dVar21 = pFVar59->SpringStiffness;
    dVar22 = pFVar59->SpringDamping;
    dVar23 = pFVar59->MinLength;
    dVar24 = pFVar59->MaxLength;
    uVar7 = *(undefined8 *)&pFVar59->Axis;
    uVar8 = *(undefined8 *)&(pFVar59->Axis).field_0x8;
    uVar9 = *(undefined8 *)&(pFVar59->Axis).field_0x10;
    uVar10 = *(undefined8 *)&pFVar59->Target;
    uVar11 = *(undefined8 *)&(pFVar59->Target).field_0x8;
    uVar12 = *(undefined8 *)&(pFVar59->Target).field_0x10;
    uVar13 = *(undefined8 *)&pFVar59->Normal;
    uVar14 = *(undefined8 *)&(pFVar59->Normal).field_0x8;
    uVar1 = *(undefined8 *)&(pFVar59->Normal).field_0x10;
    pFVar59 = TDirtyElementPool<Chaos::FPBDSuspensionSettings>::GetElement
                        (&param_1->SuspensionSettingsPool,param_3);
    pFVar59->Enabled = bVar44;
    *(undefined7 *)&pFVar59->field_0x1 = uVar45;
    pFVar59->HardstopStiffness = dVar3;
    pFVar59->HardstopVelocityCompensation = dVar16;
    pFVar59->SpringPreload = dVar20;
    pFVar59->SpringStiffness = dVar21;
    pFVar59->SpringDamping = dVar22;
    pFVar59->MinLength = dVar23;
    pFVar59->MaxLength = dVar24;
    *(undefined8 *)&pFVar59->Axis = uVar7;
    *(undefined8 *)&(pFVar59->Axis).field_0x8 = uVar8;
    *(undefined8 *)&(pFVar59->Axis).field_0x10 = uVar9;
    *(undefined8 *)&pFVar59->Target = uVar10;
    *(undefined8 *)&(pFVar59->Target).field_0x8 = uVar11;
    *(undefined8 *)&(pFVar59->Target).field_0x10 = uVar12;
    *(undefined8 *)&pFVar59->Normal = uVar13;
    *(undefined8 *)&(pFVar59->Normal).field_0x8 = uVar14;
    *(undefined8 *)&(pFVar59->Normal).field_0x10 = uVar1;
    TDirtyElementPool<Chaos::FPBDSuspensionSettings>::Reset
              (&param_1->SuspensionSettingsPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0xb & 1) != 0) {
    pFVar60 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->SuspensionParticleProxyPool,param_2);
    pFVar5 = pFVar60->ParticleProxy;
    pFVar60 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->SuspensionParticleProxyPool,param_3);
    pFVar60->ParticleProxy = pFVar5;
    TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
              (&param_1->SuspensionParticleProxyPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0xc & 1) != 0) {
    pFVar61 = TDirtyElementPool<Chaos::FSuspensionLocation>::GetElement
                        (&param_1->SuspensionLocationPool,param_2);
    uVar7 = *(undefined8 *)&pFVar61->Location;
    uVar8 = *(undefined8 *)&(pFVar61->Location).field_0x8;
    uVar1 = *(undefined8 *)&(pFVar61->Location).field_0x10;
    pFVar61 = TDirtyElementPool<Chaos::FSuspensionLocation>::GetElement
                        (&param_1->SuspensionLocationPool,param_3);
    *(undefined8 *)&pFVar61->Location = uVar7;
    *(undefined8 *)&(pFVar61->Location).field_0x8 = uVar8;
    *(undefined8 *)&(pFVar61->Location).field_0x10 = uVar1;
    TDirtyElementPool<Chaos::FSuspensionLocation>::Reset(&param_1->SuspensionLocationPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0xd & 1) != 0) {
    pFVar62 = TDirtyElementPool<Chaos::FPhysicsObjectProperty>::GetElement
                        (&param_1->SuspensionPhysicsObjectPool,param_2);
    pFVar6 = pFVar62->PhysicsBody;
    pFVar62 = TDirtyElementPool<Chaos::FPhysicsObjectProperty>::GetElement
                        (&param_1->SuspensionPhysicsObjectPool,param_3);
    pFVar62->PhysicsBody = pFVar6;
    TDirtyElementPool<Chaos::FPhysicsObjectProperty>::Reset
              (&param_1->SuspensionPhysicsObjectPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0xe & 1) != 0) {
    pFVar63 = TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::GetElement
                        (&param_1->CharacterGroundConstraintSettingsPool,param_2);
    uVar1 = *(undefined8 *)&pFVar63->VerticalAxis;
    uVar7 = *(undefined8 *)&(pFVar63->VerticalAxis).field_0x8;
    uVar8 = *(undefined8 *)&(pFVar63->VerticalAxis).field_0x10;
    dVar3 = pFVar63->TargetHeight;
    dVar16 = pFVar63->RadialForceLimit;
    dVar20 = pFVar63->FrictionForceLimit;
    dVar21 = pFVar63->TwistTorqueLimit;
    dVar22 = pFVar63->SwingTorqueLimit;
    dVar23 = pFVar63->CosMaxWalkableSlopeAngle;
    dVar24 = pFVar63->DampingFactor;
    dVar25 = pFVar63->AssumedOnGroundHeight;
    dVar26 = pFVar63->MotionTargetMassBias;
    dVar27 = pFVar63->RadialForceMotionTargetScaling;
    dVar28 = pFVar63->MaxCharacterGroundMassRatio;
    pvVar2 = pFVar63->UserData;
    pFVar63 = TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::GetElement
                        (&param_1->CharacterGroundConstraintSettingsPool,param_3);
    *(undefined8 *)&pFVar63->VerticalAxis = uVar1;
    *(undefined8 *)&(pFVar63->VerticalAxis).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar63->VerticalAxis).field_0x10 = uVar8;
    pFVar63->TargetHeight = dVar3;
    pFVar63->RadialForceLimit = dVar16;
    pFVar63->FrictionForceLimit = dVar20;
    pFVar63->TwistTorqueLimit = dVar21;
    pFVar63->SwingTorqueLimit = dVar22;
    pFVar63->CosMaxWalkableSlopeAngle = dVar23;
    pFVar63->DampingFactor = dVar24;
    pFVar63->AssumedOnGroundHeight = dVar25;
    pFVar63->MotionTargetMassBias = dVar26;
    pFVar63->RadialForceMotionTargetScaling = dVar27;
    pFVar63->MaxCharacterGroundMassRatio = dVar28;
    pFVar63->UserData = pvVar2;
    TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::Reset
              (&param_1->CharacterGroundConstraintSettingsPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0xf & 1) != 0) {
    pFVar64 = TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::GetElement
                        (&param_1->CharacterGroundConstraintDynamicDataPool,param_2);
    uVar1 = *(undefined8 *)&pFVar64->GroundNormal;
    uVar7 = *(undefined8 *)&(pFVar64->GroundNormal).field_0x8;
    uVar8 = *(undefined8 *)&(pFVar64->GroundNormal).field_0x10;
    uVar9 = *(undefined8 *)&pFVar64->TargetDeltaPosition;
    uVar10 = *(undefined8 *)&(pFVar64->TargetDeltaPosition).field_0x8;
    uVar11 = *(undefined8 *)&(pFVar64->TargetDeltaPosition).field_0x10;
    dVar16 = pFVar64->TargetDeltaFacing;
    dVar20 = pFVar64->GroundDistance;
    dVar3 = pFVar64->CosMaxWalkableSlopeAngle;
    pFVar64 = TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::GetElement
                        (&param_1->CharacterGroundConstraintDynamicDataPool,param_3);
    *(undefined8 *)&pFVar64->GroundNormal = uVar1;
    *(undefined8 *)&(pFVar64->GroundNormal).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar64->GroundNormal).field_0x10 = uVar8;
    *(undefined8 *)&pFVar64->TargetDeltaPosition = uVar9;
    *(undefined8 *)&(pFVar64->TargetDeltaPosition).field_0x8 = uVar10;
    *(undefined8 *)&(pFVar64->TargetDeltaPosition).field_0x10 = uVar11;
    pFVar64->TargetDeltaFacing = dVar16;
    pFVar64->GroundDistance = dVar20;
    pFVar64->CosMaxWalkableSlopeAngle = dVar3;
    TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::Reset
              (&param_1->CharacterGroundConstraintDynamicDataPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0x10 & 1) != 0) {
    pFVar60 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->CharacterParticleProxyPool,param_2);
    pFVar5 = pFVar60->ParticleProxy;
    pFVar60 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->CharacterParticleProxyPool,param_3);
    pFVar60->ParticleProxy = pFVar5;
    TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
              (&param_1->CharacterParticleProxyPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0x11 & 1) != 0) {
    pFVar60 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->GroundParticleProxyPool,param_2);
    pFVar5 = pFVar60->ParticleProxy;
    pFVar60 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                        (&param_1->GroundParticleProxyPool,param_3);
    pFVar60->ParticleProxy = pFVar5;
    TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
              (&param_1->GroundParticleProxyPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0x12 & 1) != 0) {
    pFVar48 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->ClusterXRPool,param_2);
    uVar1 = *(undefined8 *)&pFVar48->MX;
    uVar7 = *(undefined8 *)&(pFVar48->MX).field_0x8;
    uVar8 = *(undefined8 *)&(pFVar48->MX).field_0x10;
    lVar66 = pFVar48->_padding_;
    uVar9 = *(undefined8 *)&pFVar48->MR;
    uVar10 = *(undefined8 *)&(pFVar48->MR).field_0x8;
    pFVar48 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->ClusterXRPool,param_3);
    *(undefined8 *)&pFVar48->MX = uVar1;
    *(undefined8 *)&(pFVar48->MX).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar48->MX).field_0x10 = uVar8;
    pFVar48->_padding_ = lVar66;
    *(undefined8 *)&pFVar48->MR = uVar9;
    *(undefined8 *)&(pFVar48->MR).field_0x8 = uVar10;
    TDirtyElementPool<Chaos::FParticlePositionRotation>::Reset(&param_1->ClusterXRPool,param_2);
    uVar47 = (this->Flags).Bits;
  }
  if ((uVar47 >> 0x13 & 1) != 0) {
    pFVar49 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->ClusterVelocitiesPool,param_2);
    uVar7 = *(undefined8 *)&pFVar49->MV;
    uVar8 = *(undefined8 *)&(pFVar49->MV).field_0x8;
    uVar1 = *(undefined8 *)&(pFVar49->MW).field_0x4;
    pFVar49 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->ClusterVelocitiesPool,param_3);
    *(undefined8 *)&pFVar49->MV = uVar7;
    *(undefined8 *)&(pFVar49->MV).field_0x8 = uVar8;
    *(undefined8 *)&(pFVar49->MW).field_0x4 = uVar1;
    TDirtyElementPool<Chaos::FParticleVelocities>::Reset(&param_1->ClusterVelocitiesPool,param_2);
  }
  return;
}

// FindCharacterGroundConstraintDynamicData @ 1440e13c0

FCharacterGroundConstraintDynamicData * __thiscall
Chaos::FDirtyChaosProperties::FindCharacterGroundConstraintDynamicData
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FCharacterGroundConstraintDynamicData *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x8000U) == 0) {
    return (FCharacterGroundConstraintDynamicData *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->CharacterGroundConstraintDynamicDataPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCharacterGroundConstraintDynamicData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCharacterGroundConstraintDynamicData *)
         ((param_1->CharacterGroundConstraintDynamicDataPool).Elements.AllocatorInstance.Data +
         (longlong)param_2 * 0x48);
}

// FindCharacterGroundConstraintSettings @ 1440e1450

FCharacterGroundConstraintSettings * __thiscall
Chaos::FDirtyChaosProperties::FindCharacterGroundConstraintSettings
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FCharacterGroundConstraintSettings *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x4000U) == 0) {
    return (FCharacterGroundConstraintSettings *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->CharacterGroundConstraintSettingsPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCharacterGroundConstraintSettings *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCharacterGroundConstraintSettings *)
         ((param_1->CharacterGroundConstraintSettingsPool).Elements.AllocatorInstance.Data +
         (longlong)param_2 * 0x78);
}

// FindDynamicMisc @ 1440e1580

FParticleDynamicMisc * __thiscall
Chaos::FDirtyChaosProperties::FindDynamicMisc
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleDynamicMisc *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 8) == 0) {
    return (FParticleDynamicMisc *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->DynamicMiscPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FParticleDynamicMisc *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FParticleDynamicMisc *)
         ((param_1->DynamicMiscPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 0x2c);
}

// FindDynamics @ 1440e1610

FParticleDynamics * __thiscall
Chaos::FDirtyChaosProperties::FindDynamics
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleDynamics *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 4) == 0) {
    return (FParticleDynamics *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->DynamicsPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FParticleDynamics *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FParticleDynamics *)
         ((param_1->DynamicsPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 0x30);
}

// FindJointSettings @ 1440e2470

FPBDJointSettings * __thiscall
Chaos::FDirtyChaosProperties::FindJointSettings
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FPBDJointSettings *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x80) == 0) {
    return (FPBDJointSettings *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->JointSettingsPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPBDJointSettings *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FPBDJointSettings *)
         ((param_1->JointSettingsPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 800);
}

// FindKinematicTarget @ 1440e2500

FKinematicTarget * __thiscall
Chaos::FDirtyChaosProperties::FindKinematicTarget
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FKinematicTarget *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x40) == 0) {
    return (FKinematicTarget *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->KinematicTargetPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FKinematicTarget *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FKinematicTarget *)
         ((param_1->KinematicTargetPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 0x30)
  ;
}

// FindMassProps @ 1440e2590

FParticleMassProps * __thiscall
Chaos::FDirtyChaosProperties::FindMassProps
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleMassProps *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x20) == 0) {
    return (FParticleMassProps *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->MassPropsPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FParticleMassProps *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FParticleMassProps *)
         ((param_1->MassPropsPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 0x60);
}

// FindNonFrequentData @ 1440e2620

FParticleNonFrequentData * __thiscall
Chaos::FDirtyChaosProperties::FindNonFrequentData
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FParticleNonFrequentData *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x10) == 0) {
    return (FParticleNonFrequentData *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->NonFrequentDataPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FParticleNonFrequentData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FParticleNonFrequentData *)
         ((param_1->NonFrequentDataPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 0x28)
  ;
}

// FindSuspensionSettings @ 1440e2930

FPBDSuspensionSettings * __thiscall
Chaos::FDirtyChaosProperties::FindSuspensionSettings
          (FDirtyChaosProperties *this,FDirtyPropertiesManager *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FPBDSuspensionSettings *pFVar3;
  uint uVar4;
  
  if (((this->Flags).Bits & 0x400U) == 0) {
    return (FPBDSuspensionSettings *)0x0;
  }
  uVar4 = 0;
  if (param_2 < (param_1->SuspensionSettingsPool).Elements.ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPBDSuspensionSettings *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FPBDSuspensionSettings *)
         ((param_1->SuspensionSettingsPool).Elements.AllocatorInstance.Data +
         (longlong)param_2 * 0x88);
}

