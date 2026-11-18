// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// FPhysicsReplication @ 1482d9120

FPhysicsReplication * __thiscall
FPhysicsReplication::FPhysicsReplication(FPhysicsReplication *this,FPhysScene_Chaos *param_1)

{
  FPhysicsSolverBase *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  FPhysicsReplicationAsync *pFVar4;
  FPhysicsReplicationAsync *pFVar5;
  UPhysicsSettings *pUVar6;
  
  *(undefined8 *)&this->ComponentToTargets_DEPRECATED = 0;
  *(undefined8 *)&(this->ComponentToTargets_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentToTargets_DEPRECATED).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FPhysicsReplication__6B_;
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentToTargets_DEPRECATED).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x48 = 0;
  (this->ReplicatedTargetsQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedTargetsQueue).ArrayNum = 0;
  (this->ReplicatedTargetsQueue).ArrayMax = 0;
  (this->SettingsCurrent).WeakPtr = (FWeakObjectPtr)0x0;
  this->PhysicsReplicationAsync = (FPhysicsReplicationAsync *)0x0;
  this->PhysScene = param_1;
  this->AsyncInput = (FPhysicsReplicationAsyncInput *)0x0;
  this_00 = (FPhysicsSolverBase *)param_1->_padding_;
  if (this_00 != (FPhysicsSolverBase *)0x0) {
    pFVar4 = ::operator_new(0x4a0);
    pFVar5 = (FPhysicsReplicationAsync *)0x0;
    if (pFVar4 != (FPhysicsReplicationAsync *)0x0) {
      memset(pFVar4,0,0x4a0);
      pFVar5 = FPhysicsReplicationAsync::FPhysicsReplicationAsync(pFVar4);
    }
    if ((pFVar5->_padding_ & 0x100) != 0) {
      this_00->bSolverHasFrozenGameThreadCallbacks = true;
    }
    pFVar4 = (FPhysicsReplicationAsync *)&pFVar5->_padding_;
    if (pFVar5 == (FPhysicsReplicationAsync *)0x0) {
      pFVar4 = (FPhysicsReplicationAsync *)0x0;
    }
    Chaos::FPhysicsSolverBase::RegisterSimCallbackObject_External
              (this_00,(ISimCallbackObject *)pFVar4);
    this->PhysicsReplicationAsync = pFVar5;
    pUVar6 = UPhysicsSettings::Get();
    fVar1 = (pUVar6->PhysicErrorCorrection).PingLimit;
    fVar2 = (pUVar6->PhysicErrorCorrection).ErrorPerLinearDifference;
    fVar3 = (pUVar6->PhysicErrorCorrection).ErrorPerAngularDifference;
    (pFVar5->ErrorCorrectionDefault).PingExtrapolation =
         (pUVar6->PhysicErrorCorrection).PingExtrapolation;
    (pFVar5->ErrorCorrectionDefault).PingLimit = fVar1;
    (pFVar5->ErrorCorrectionDefault).ErrorPerLinearDifference = fVar2;
    (pFVar5->ErrorCorrectionDefault).ErrorPerAngularDifference = fVar3;
    fVar1 = (pUVar6->PhysicErrorCorrection).MaxLinearHardSnapDistance;
    fVar2 = (pUVar6->PhysicErrorCorrection).PositionLerp;
    fVar3 = (pUVar6->PhysicErrorCorrection).AngleLerp;
    (pFVar5->ErrorCorrectionDefault).MaxRestoredStateError =
         (pUVar6->PhysicErrorCorrection).MaxRestoredStateError;
    (pFVar5->ErrorCorrectionDefault).MaxLinearHardSnapDistance = fVar1;
    (pFVar5->ErrorCorrectionDefault).PositionLerp = fVar2;
    (pFVar5->ErrorCorrectionDefault).AngleLerp = fVar3;
    fVar1 = (pUVar6->PhysicErrorCorrection).AngularVelocityCoefficient;
    fVar2 = (pUVar6->PhysicErrorCorrection).ErrorAccumulationSeconds;
    fVar3 = (pUVar6->PhysicErrorCorrection).ErrorAccumulationDistanceSq;
    (pFVar5->ErrorCorrectionDefault).LinearVelocityCoefficient =
         (pUVar6->PhysicErrorCorrection).LinearVelocityCoefficient;
    (pFVar5->ErrorCorrectionDefault).AngularVelocityCoefficient = fVar1;
    (pFVar5->ErrorCorrectionDefault).ErrorAccumulationSeconds = fVar2;
    (pFVar5->ErrorCorrectionDefault).ErrorAccumulationDistanceSq = fVar3;
    (pFVar5->ErrorCorrectionDefault).ErrorAccumulationSimilarity =
         (pUVar6->PhysicErrorCorrection).ErrorAccumulationSimilarity;
  }
  return this;
}

// ~FPhysicsReplication @ 1482dda90

void __thiscall FPhysicsReplication::~FPhysicsReplication(FPhysicsReplication *this)

{
  FPhysicsSolverBase *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FPhysicsReplication__6B_;
  if ((this->PhysicsReplicationAsync != (FPhysicsReplicationAsync *)0x0) &&
     (this_00 = (FPhysicsSolverBase *)this->PhysScene->_padding_,
     this_00 != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
              (this_00,(ISimCallbackObject *)&this->PhysicsReplicationAsync->_padding_);
  }
  DestructItems<FReplicatedPhysicsTarget,int>
            ((FReplicatedPhysicsTarget *)(this->ReplicatedTargetsQueue).AllocatorInstance.Data,
             (this->ReplicatedTargetsQueue).ArrayNum);
  pFVar1 = (this->ReplicatedTargetsQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ComponentToTargets_DEPRECATED).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentToTargets_DEPRECATED).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentToTargets_DEPRECATED);
  this->_padding_ = (longlong)&___7IPhysicsReplication__6B_;
  return;
}

// operator() @ 1482e1cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FPhysicsReplication::ApplyRigidBodyState'::__l163::<lambda_1>::operator()(void *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  FRewindData *pFVar2;
  TThreadedSingleParticlePhysicsProxyBase<0> *pTVar3;
  double dVar4;
  EObjectStateType EVar5;
  bool bVar6;
  TThreadedSingleParticlePhysicsProxyBase<0> *this_00;
  TThreadedSingleParticlePhysicsProxyBase<0> *this_01;
  TThreadedSingleParticlePhysicsProxyBase<0> *pTVar7;
  TThreadedSingleParticlePhysicsProxyBase<0> *this_02;
  TVector<double>_u_0 local_58;
  TVector<double,3> local_40;
  TRotation<double,3> local_28;
  
  this_02 = (TThreadedSingleParticlePhysicsProxyBase<0> *)0x0;
  pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)
            &(*(TThreadedSingleParticlePhysicsProxyBase<0> **)((longlong)this + 8))->field_0x48;
  local_28._0_8_ = *(undefined8 *)((longlong)this + 0x10);
  local_28._8_8_ = *(undefined8 *)((longlong)this + 0x18);
  local_28._16_8_ = *(undefined8 *)((longlong)this + 0x20);
  local_28._24_8_ = *(undefined8 *)((longlong)this + 0x28);
  this_00 = *(TThreadedSingleParticlePhysicsProxyBase<0> **)((longlong)this + 8);
  if (pTVar1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = this_02;
  }
  local_40._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_40._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  local_40._16_8_ = *(undefined8 *)((longlong)this + 0x40);
  local_58._0_16_ = ZEXT816(0);
  Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
            (*(FPBDRigidsEvolutionGBF **)(*(longlong *)this + 0xbd0),pTVar1,&local_40,&local_28,
             *(bool *)((longlong)this + 0xf0),*(bool *)((longlong)this + 0xf1),
             (TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_> *)&local_58._s_0);
  if ((void *)local_58._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_58._s_0.X);
  }
  local_58._0_16_ = *(undefined1 (*) [16])((longlong)this + 0xb0);
  local_58._s_0.Z = *(double *)((longlong)this + 0xc0);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext(this_00);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext(this_00);
  pFVar2 = *(FRewindData **)(*(longlong *)&this_00->field_0x8 + 0x238);
  if (pFVar2 != (FRewindData *)0x0) {
    Chaos::FRewindData::MarkDirtyFromPT
              (pFVar2,*(TGeometryParticleHandleImp<double,3,1> **)&this_00->field_0x48);
  }
  pTVar3 = *(TThreadedSingleParticlePhysicsProxyBase<0> **)&this_00->field_0x48;
  pTVar7 = this_02;
  if (pTVar3->field_0xc != 0) {
    pTVar7 = pTVar3;
  }
  if (pTVar7 != (TThreadedSingleParticlePhysicsProxyBase<0> *)0x0) {
    this_01 = this_02;
    if (1 < (byte)pTVar3->field_0xc) {
      this_01 = pTVar3;
    }
    if (this_01 != (TThreadedSingleParticlePhysicsProxyBase<0> *)0x0) {
      EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
      if (EVar5 == Sleeping) {
        bVar6 = UE::Math::TVector<double>::IsNearlyZero
                          ((TVector<double> *)&local_58._s_0,__real_3f1a36e2e0000000);
        if (!bVar6) {
          Chaos::SetObjectStateHelper
                    ((IPhysicsProxyBase *)this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_01,
                     Dynamic,true,true);
        }
      }
    }
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar7,*(int *)&pTVar7->field_0x8,
               (TVector<double,3> *)&local_58._s_0);
  }
  dVar4 = *(double *)((longlong)this + 0xd0) * _UNK_150689668;
  local_58._s_0.Z = *(double *)((longlong)this + 0xd8) * ___xmm_3f91df46a00000003f91df46a0000000;
  local_58._8_4_ = SUB84(dVar4,0);
  local_58._s_0.X = *(double *)((longlong)this + 200) * ___xmm_3f91df46a00000003f91df46a0000000;
  local_58._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext(this_00);
  Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext(this_00);
  pFVar2 = *(FRewindData **)(*(longlong *)&this_00->field_0x8 + 0x238);
  if (pFVar2 != (FRewindData *)0x0) {
    Chaos::FRewindData::MarkDirtyFromPT
              (pFVar2,*(TGeometryParticleHandleImp<double,3,1> **)&this_00->field_0x48);
  }
  pTVar3 = *(TThreadedSingleParticlePhysicsProxyBase<0> **)&this_00->field_0x48;
  pTVar7 = this_02;
  if (pTVar3->field_0xc != 0) {
    pTVar7 = pTVar3;
  }
  if (pTVar7 != (TThreadedSingleParticlePhysicsProxyBase<0> *)0x0) {
    if (1 < (byte)pTVar3->field_0xc) {
      this_02 = pTVar3;
    }
    if (this_02 != (TThreadedSingleParticlePhysicsProxyBase<0> *)0x0) {
      EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_02);
      if (EVar5 == Sleeping) {
        bVar6 = UE::Math::TVector<double>::IsNearlyZero
                          ((TVector<double> *)&local_58._s_0,__real_3f1a36e2e0000000);
        if (!bVar6) {
          Chaos::SetObjectStateHelper
                    ((IPhysicsProxyBase *)this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_02,
                     Dynamic,true,true);
        }
      }
    }
    Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar7,*(int *)&pTVar7->field_0x8,
               (TVector<double,3> *)&local_58._s_0);
  }
  return;
}

// ApplyRigidBodyState @ 1482e7dd0

bool __thiscall
FPhysicsReplication::ApplyRigidBodyState
          (FPhysicsReplication *this,float param_1,FBodyInstance *param_2,
          FReplicatedPhysicsTarget *param_3,FRigidBodyErrorCorrection *param_4,float param_5,
          int param_6,int param_7)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001482e7de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(this,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// ApplyRigidBodyState @ 1482e7df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPhysicsReplication::ApplyRigidBodyState
          (FPhysicsReplication *this,float param_1,FBodyInstance *param_2,
          FReplicatedPhysicsTarget *param_3,FRigidBodyErrorCorrection *param_4,float param_5,
          bool *param_6)

{
  FNetworkPhysicsSettingsDefaultReplication *pFVar1;
  int *piVar2;
  UObject *pUVar3;
  longlong lVar4;
  FPhysicsReplicationAsyncInput *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar24;
  TVector<double> *pTVar25;
  UWorld *pUVar26;
  FSingleParticlePhysicsProxy *pFVar27;
  FSimCallbackCommandObject *pFVar28;
  longlong lVar29;
  TQuat<double> *pTVar30;
  FStaticBasicLogRecord *pFVar31;
  code **ppcVar32;
  longlong *plVar33;
  FNetworkPhysicsSettingsData *pFVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  double extraout_XMM0_Qa;
  double dVar41;
  undefined1 auVar42 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar60;
  undefined1 auVar57 [16];
  double dVar61;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  double dVar73;
  double adVar72 [2];
  float fVar74;
  float fVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar81;
  uint uVar82;
  undefined1 auStackY_778 [32];
  char local_718;
  undefined1 local_717;
  undefined1 local_716;
  uchar local_714;
  bool local_713 [3];
  float local_710;
  float local_70c;
  float local_708;
  float local_704;
  float local_700;
  float local_6fc;
  float local_6f8;
  float local_6f4;
  float local_6f0;
  float local_6ec;
  float local_6e8;
  float local_6e4;
  float local_6e0;
  TVector<double>_u_0 local_6d8;
  undefined4 local_6c0;
  float local_6bc;
  float local_6b8;
  FColor_u_0 local_6b4;
  float local_6b0 [2];
  FPhysicsReplication *local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  bool *local_688;
  double local_678;
  double dStack_670;
  double local_668;
  undefined8 uStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  TVector<double>_u_0 local_638;
  double dStack_620;
  double local_618;
  double dStack_610;
  ulonglong local_608;
  undefined8 uStack_600;
  UObject *local_5f8;
  TVector<double>_u_0 local_5e8;
  TVector<double>_u_0 local_5c8;
  TQuat<double> local_5a8;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined1 local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  double local_508;
  double local_500;
  double local_4f8;
  FString local_4f0;
  undefined1 local_4d8 [16];
  double local_4c8;
  TVector<double>_u_0 local_4b8;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  TQuat<double> local_458;
  undefined1 local_438 [16];
  double local_428;
  undefined8 uStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  ulonglong local_3c8;
  undefined8 uStack_3c0;
  FSingleParticlePhysicsProxy *local_3b8;
  FPhysicsObject *local_3b0;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  bool local_398;
  EPhysicsReplicationMode local_394;
  bool local_388;
  float local_384;
  TVector2<double>_u_0 local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  double local_330;
  double dStack_328;
  double local_320;
  longlong local_318;
  FSingleParticlePhysicsProxy *pFStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  ulonglong local_238;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined1 local_227;
  TVector<double> local_218;
  TQuat<double> local_1f8;
  code *local_1d8 [2];
  code *local_1c8 [3];
  code **local_1b0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_778;
  local_688 = param_6;
  local_6c0 = 0;
  local_6f8 = param_1;
  local_6a8 = this;
  bVar20 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)param_2);
  if ((!bVar20) || (bVar20 = FBodyInstance::IsValidBodyInstance(param_2), !bVar20)) {
    return false;
  }
  local_658 = (param_3->TargetState).Quaternion.X;
  dStack_650 = (param_3->TargetState).Quaternion.Y;
  local_648 = (param_3->TargetState).Quaternion.Z;
  dStack_640 = (param_3->TargetState).Quaternion.W;
  local_678 = *(double *)&(param_3->TargetState).Position;
  dStack_670 = *(double *)&(param_3->TargetState).Position.field_0x8;
  local_668 = *(double *)&(param_3->TargetState).Position.field_0x10;
  uStack_660 = *(undefined8 *)&(param_3->TargetState).field_0x18;
  local_638._s_0.X = (double)*(undefined8 *)&(param_3->TargetState).LinVel;
  local_638._s_0.Y = (double)*(undefined8 *)&(param_3->TargetState).LinVel.field_0x8;
  local_618 = *(double *)&(param_3->TargetState).AngVel.field_0x8;
  dStack_610 = *(double *)&(param_3->TargetState).AngVel.field_0x10;
  local_638._s_0.Z = (double)*(undefined8 *)&(param_3->TargetState).LinVel.field_0x10;
  dStack_620 = *(double *)&(param_3->TargetState).AngVel;
  local_608 = *(ulonglong *)&(param_3->TargetState).Flags;
  uStack_600 = *(undefined8 *)&(param_3->TargetState).field_0x78;
  fVar74 = (float)(local_658 * local_658 + dStack_650 * dStack_650 +
                  local_648 * local_648 + dStack_640 * dStack_640);
  bVar20 = FBodyInstanceCore::ShouldInstanceSimulatingPhysics((FBodyInstanceCore *)param_2);
  if ((!bVar20) ||
     (bVar20 = FBodyInstance::IsValidBodyInstance(param_2), fVar53 = __real_3f800000, !bVar20)) {
    if ((byte)LogPhysics._0_1_ < 3) {
      return true;
    }
    FBodyInstance::GetBodyDebugName(param_2,&local_360);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    local_350.Data.AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
LAB_1482e95d7:
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if (fVar74 < __real_38d1b717) {
    if ((byte)LogPhysics._0_1_ < 3) {
      return true;
    }
    FBodyInstance::GetBodyDebugName(param_2,&local_350);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    goto LAB_1482e95d7;
  }
  if (__real_38d1b717 <
      (float)((uint)(fVar74 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if ((byte)LogPhysics._0_1_ < 3) {
      return true;
    }
    FBodyInstance::GetBodyDebugName(param_2,&local_340);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    local_350.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
    goto LAB_1482e95d7;
  }
  fVar74 = CharacterMovementCVars::NetPingExtrapolation;
  if (CharacterMovementCVars::NetPingExtrapolation < 0.0) {
    fVar74 = param_4->PingExtrapolation;
  }
  fVar75 = CharacterMovementCVars::NetPingLimit;
  if (CharacterMovementCVars::NetPingLimit <= 0.0) {
    fVar75 = param_4->PingLimit;
  }
  local_708 = CharacterMovementCVars::ErrorPerLinearDifference;
  if (CharacterMovementCVars::ErrorPerLinearDifference < 0.0) {
    local_708 = param_4->ErrorPerLinearDifference;
  }
  local_6e0 = CharacterMovementCVars::ErrorPerAngularDifference;
  if (CharacterMovementCVars::ErrorPerAngularDifference < 0.0) {
    local_6e0 = param_4->ErrorPerAngularDifference;
  }
  local_70c = CharacterMovementCVars::MaxRestoredStateError;
  if (CharacterMovementCVars::MaxRestoredStateError < 0.0) {
    local_70c = param_4->MaxRestoredStateError;
  }
  local_700 = CharacterMovementCVars::ErrorAccumulationSeconds;
  if (CharacterMovementCVars::ErrorAccumulationSeconds < 0.0) {
    local_700 = param_4->ErrorAccumulationSeconds;
  }
  local_6f4 = CharacterMovementCVars::ErrorAccumulationDistanceSq;
  if (CharacterMovementCVars::ErrorAccumulationDistanceSq < 0.0) {
    local_6f4 = param_4->ErrorAccumulationDistanceSq;
  }
  local_6f0 = CharacterMovementCVars::ErrorAccumulationSimilarity;
  if (CharacterMovementCVars::ErrorAccumulationSimilarity < 0.0) {
    local_6f0 = param_4->ErrorAccumulationSimilarity;
  }
  local_6e4 = CharacterMovementCVars::PositionLerp;
  if (CharacterMovementCVars::PositionLerp < 0.0) {
    local_6e4 = param_4->PositionLerp;
  }
  local_6ec = CharacterMovementCVars::LinearVelocityCoefficient;
  if (CharacterMovementCVars::LinearVelocityCoefficient < 0.0) {
    local_6ec = param_4->LinearVelocityCoefficient;
  }
  local_704 = CharacterMovementCVars::AngleLerp;
  if (CharacterMovementCVars::AngleLerp < 0.0) {
    local_704 = param_4->AngleLerp;
  }
  local_6e8 = CharacterMovementCVars::AngularVelocityCoefficient;
  if (CharacterMovementCVars::AngularVelocityCoefficient < 0.0) {
    local_6e8 = param_4->AngularVelocityCoefficient;
  }
  fVar39 = CharacterMovementCVars::MaxLinearHardSnapDistance;
  if (CharacterMovementCVars::MaxLinearHardSnapDistance < 0.0) {
    fVar39 = param_4->MaxLinearHardSnapDistance;
  }
  local_718 = PhysicsReplicationCVars::DefaultReplicationCVars::bHardsnapLegacyInPT;
  local_716 = PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodiesFriction;
  local_717 = PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
  local_710 = fVar39;
  bVar20 = FWeakObjectPtr::IsValid(&(this->SettingsCurrent).WeakPtr);
  if (bVar20) {
    TVar24 = FWeakObjectPtr::Pin(&(this->SettingsCurrent).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar3 = *TVar24.Object;
    *(undefined8 *)TVar24.Object = 0;
    if (local_5f8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_5f8);
      local_5f8 = (UObject *)0x0;
    }
    if ((pUVar3 == (UObject *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                            ,0x67,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      uVar21 = (*pcVar7)();
      return (bool)uVar21;
    }
    if (*(longlong *)&pUVar3[4].field_0x20 == 0) {
      pFVar34 = &UNetworkPhysicsSettingsComponent::SettingsNetworkPhysicsData_Default;
    }
    else {
      pFVar34 = (FNetworkPhysicsSettingsData *)(*(longlong *)&pUVar3[4].field_0x20 + 0x38);
    }
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar3);
    local_710 = fVar39;
    if (pFVar1->bOverrideMaxLinearHardSnapDistance != 0) {
      local_710 = (pFVar34->DefaultReplicationSettings).MaxLinearHardSnapDistance;
    }
    local_718 = PhysicsReplicationCVars::DefaultReplicationCVars::bHardsnapLegacyInPT;
    if (pFVar1->bOverrideDefaultLegacyHardsnapInPT != 0) {
      local_718 = (pFVar34->DefaultReplicationSettings).bHardsnapInPhysicsThread;
    }
    local_717 = PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodies;
    if (pFVar1->bOverrideCorrectConnectedBodies != 0) {
      local_717 = (pFVar34->DefaultReplicationSettings).bCorrectConnectedBodies;
    }
    this = local_6a8;
    local_716 = PhysicsReplicationCVars::DefaultReplicationCVars::bCorrectConnectedBodiesFriction;
    if (pFVar1->bOverrideCorrectConnectedBodiesFriction != 0) {
      local_716 = (pFVar34->DefaultReplicationSettings).bCorrectConnectedBodiesFriction;
    }
  }
  local_558 = 0;
  local_5c8._s_0.X = 0.0;
  local_5c8._s_0.Y = 0.0;
  local_5c8._s_0.Z = 0.0;
  local_5a8.Z = ___xmm_3ff00000000000000000000000000000;
  local_5a8.W = _UNK_15061cbc8;
  local_578 = 0;
  uStack_570 = 0;
  local_5a8.X = 0.0;
  local_5a8.Y = 0.0;
  local_588 = 0;
  uStack_580 = 0;
  local_568 = 0;
  uStack_560 = 0;
  FBodyInstance::GetRigidBodyState(param_2,(FRigidBodyState *)&local_5c8._s_0);
  local_6bc = fVar75;
  if (param_5 <= fVar75) {
    local_6bc = param_5;
  }
  if (local_6bc <= 0.0) {
    local_6bc = 0.0;
  }
  local_4f8 = (double)(local_6bc * fVar74);
  local_508 = local_638._s_0.Y * local_4f8;
  local_500 = local_638._s_0.X * local_4f8;
  local_4f8 = local_638._s_0.Z * local_4f8;
  local_6d8._s_0.X = local_678 + local_500;
  local_6d8._s_0.Y = dStack_670 + local_508;
  local_6d8._s_0.Z = local_668 + local_4f8;
  auVar42._0_8_ = local_618 * local_618;
  auVar42._8_8_ = 0;
  auVar79._0_8_ = dStack_620 * dStack_620 + auVar42._0_8_ + dStack_610 * dStack_610;
  auVar79._8_8_ = 0;
  auVar42 = sqrtpd(auVar42,auVar79);
  if ((float)auVar42._0_8_ <= __real_322bcc77) {
    local_5e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar40 = (double)(fVar53 / (float)auVar42._0_8_);
    uVar10 = dStack_620 * dVar40;
    uVar11 = local_618 * dVar40;
    uVar12 = dStack_610 * dVar40;
  }
  local_6a0 = local_6d8._s_0.X;
  local_698 = local_6d8._s_0.Y;
  local_690 = local_6d8._s_0.Z;
  __libm_sse2_sincos_();
  dVar62 = extraout_XMM0_Qa * (double)uVar11;
  dVar40 = extraout_XMM0_Qa * (double)uVar10;
  dVar76 = extraout_XMM0_Qa * (double)uVar12;
  auVar64._8_4_ = SUB84(dVar40,0);
  auVar64._0_8_ = dVar40;
  auVar64._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  auVar55._8_4_ = SUB84(dVar62,0);
  auVar55._0_8_ = dVar62;
  auVar55._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
  auVar43._8_4_ = SUB84(dVar76,0);
  auVar43._0_8_ = dVar76;
  auVar43._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
  local_690 = local_690 - local_5c8._s_0.Z;
  local_6a0 = local_6a0 - local_5c8._s_0.X;
  local_5e8._s_0.X =
       dVar40 * dStack_640 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       local_658 * extraout_XMM0_Qb +
       dVar62 * local_648 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar76 * dStack_650 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_458.Y = auVar64._8_8_ * local_648 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dStack_650 * extraout_XMM0_Qb +
                auVar55._8_8_ * dStack_640 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar43._8_8_ * local_658 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_698 = local_698 - local_5c8._s_0.Y;
  auVar44._0_8_ = local_6a0 * local_6a0;
  auVar44._8_8_ = 0;
  dVar60 = local_5a8.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = local_5a8.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar65._0_8_ = local_698 * local_698 + auVar44._0_8_ + local_690 * local_690;
  auVar65._8_8_ = 0;
  dVar71 = local_5a8.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar73 = local_5a8.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar42 = sqrtpd(auVar44,auVar65);
  local_6fc = (float)auVar42._0_8_;
  local_458.Z = dVar40 * dStack_650 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                extraout_XMM0_Qb * local_648 +
                local_658 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                + dVar76 * dStack_640 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_458.W = dVar40 * local_658 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                + extraout_XMM0_Qb * dStack_640 +
                dStack_650 * dVar62 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar76 * local_648 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
  ;
  auVar45._8_4_ = SUB84(local_458.W,0);
  auVar45._0_8_ = local_458.W;
  auVar45._12_4_ = (int)((ulonglong)local_458.W >> 0x20);
  auVar66._8_4_ = SUB84(dVar8,0);
  auVar66._0_8_ = dVar60;
  auVar66._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar56._8_4_ = SUB84(local_458.Y,0);
  auVar56._0_8_ = local_458.Y;
  auVar56._12_4_ = (int)((ulonglong)local_458.Y >> 0x20);
  auVar46._8_4_ = SUB84(local_458.Z,0);
  auVar46._0_8_ = local_458.Z;
  auVar46._12_4_ = (int)((ulonglong)local_458.Z >> 0x20);
  dVar40 = auVar46._8_8_ * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar38 = SUB84(__real_bff0000000000000,0);
  uVar52 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar76 = local_5e8._s_0.X * dVar73 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + local_458.W * dVar60 +
           local_458.Y * dVar71 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_458.Z * auVar66._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar77 = local_5e8._s_0.X * dVar71 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + auVar45._8_8_ * dVar8 +
           auVar56._8_8_ * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar40;
  auVar68._0_8_ = local_458.W * dVar71;
  auVar68._8_8_ = local_458.W * dVar73;
  dVar62 = local_5e8._s_0.X * auVar66._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar68._0_8_ +
           local_458.Y * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           local_458.Z * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar60 = local_5e8._s_0.X * dVar60 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + auVar68._8_8_ +
           local_458.Y * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           local_458.Z * dVar71 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar9._4_8_ = dVar40;
  auVar9._0_4_ = (int)((ulonglong)dVar62 >> 0x20);
  auVar47._0_8_ = auVar9._0_8_ << 0x20;
  auVar47._8_4_ = SUB84(dVar60,0);
  auVar47._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
  dVar40 = auVar47._8_8_;
  if (__real_bff0000000000000 <= dVar40) {
    if (__real_3ff0000000000000 <= dVar40) {
      dVar40 = __real_3ff0000000000000;
    }
    uVar38 = SUB84(dVar40,0);
    uVar52 = (undefined4)((ulonglong)dVar40 >> 0x20);
  }
  auVar57._8_4_ = SUB84(dVar77,0);
  auVar57._0_8_ = dVar76;
  auVar57._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
  dVar40 = dVar76 * dVar76 + dVar62 * dVar62;
  dVar60 = auVar57._8_8_ * dVar77 + 0.0;
  auVar48._8_4_ = SUB84(dVar60,0);
  auVar48._0_8_ = dVar40;
  auVar48._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
  auVar49._0_8_ = auVar48._8_8_ + dVar40;
  auVar49._8_8_ = dVar40 + dVar60;
  auVar42 = sqrtpd(auVar68,auVar49);
  uVar35 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar49._0_8_);
  uVar37 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar49._8_8_);
  auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
  uVar36 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar49._0_8_);
  auVar80._0_8_ = uVar35 & (ulonglong)(auVar79._0_8_ * dVar76);
  uVar13 = uVar37 & (ulonglong)(auVar79._8_8_ * dVar77);
  auVar80._8_4_ = (undefined4)uVar13;
  auVar80._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar67._0_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar67._4_4_ =
       ~(uint)(uVar35 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar67._8_4_ = ~(uint)uVar37 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar67._12_4_ =
       ~(uint)(uVar37 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar80 = auVar80 | auVar67;
  auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
  local_4c8 = (double)(CONCAT44(~(uint)(uVar36 >> 0x20) &
                                (uint)((ulonglong)
                                       (double)GlobalVectorConstants::Float1000.m128_f32[2] >> 0x20)
                                ,~(uint)uVar36 &
                                 SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                      uVar36 & (ulonglong)(auVar42._0_8_ * dVar62));
  local_5e8._s_0.Y = local_5e8._s_0.X;
  local_4d8 = auVar80;
  local_458.X = local_5e8._s_0.X;
  dVar40 = acos((double)CONCAT44(uVar52,uVar38));
  for (fVar74 = (float)(dVar40 + dVar40); __real_40490fdb < fVar74;
      fVar74 = fVar74 + __real_c0c90fdb) {
  }
  for (; fVar74 < __real_c0490fdb; fVar74 = fVar74 + __real_40c90fdb) {
  }
  fVar74 = fVar74 * __real_42652ee0;
  uVar13 = local_608 & 1;
  FBodyInstance::IsInstanceAwake(param_2);
  dVar40 = __real_3e45798ee0000000;
  fVar53 = (float)((uint)fVar74 & __xmm_7fffffff7fffffff7fffffff7fffffff) * local_6e0 +
           local_6fc * local_708;
  bVar20 = fVar53 < local_70c;
  if (fVar53 < local_70c) {
    param_3->AccumulatedErrorSeconds = 0.0;
    goto LAB_1482e94b0;
  }
  dVar60 = (param_3->PrevPos).field0_0x0._s_0.X;
  dVar8 = (param_3->PrevPos).field0_0x0._s_0.Y;
  dVar76 = (param_3->PrevPosTarget).field0_0x0._s_0.X - dVar60;
  dVar62 = (param_3->PrevPos).field0_0x0._s_0.Z;
  dVar71 = (param_3->PrevPosTarget).field0_0x0._s_0.Y - dVar8;
  dVar73 = (param_3->PrevPosTarget).field0_0x0._s_0.Z - dVar62;
  local_5e8._s_0.X = dVar76;
  local_5e8._s_0.Y = dVar71;
  local_5e8._s_0.Z = dVar73;
  pTVar25 = UE::Math::TVector<double>::GetSafeNormal
                      ((TVector<double> *)&local_5e8._s_0,&local_218,__real_3e45798ee0000000,
                       &UE::Math::TVector<double>::ZeroVector);
  fVar75 = local_700;
  fVar53 = local_710;
  local_708 = (float)((local_5c8._s_0.Y - dVar8) * (pTVar25->field0_0x0)._s_0.Y +
                      (local_5c8._s_0.X - dVar60) * (pTVar25->field0_0x0)._s_0.X +
                     (local_5c8._s_0.Z - dVar62) * (pTVar25->field0_0x0)._s_0.Z);
  local_70c = (float)((local_6d8._s_0.Y - local_5c8._s_0.Y) * dVar71 +
                      (local_6d8._s_0.X - local_5c8._s_0.X) * dVar76 +
                     (local_6d8._s_0.Z - local_5c8._s_0.Z) * dVar73);
  if ((local_6f4 <= local_708) || (local_70c <= local_6f0)) {
    fVar39 = param_3->AccumulatedErrorSeconds - local_6f8;
    if (fVar39 <= __real_00000000) {
      fVar39 = __real_00000000;
    }
  }
  else {
    fVar39 = local_6f8 + param_3->AccumulatedErrorSeconds;
  }
  param_3->AccumulatedErrorSeconds = fVar39;
  dVar71 = _UNK_150689688;
  dVar62 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689518;
  dVar60 = ___xmm_00000000000000003ff0000000000000;
  if (((local_710 < local_6fc) || (local_700 < fVar39)) ||
     (CharacterMovementCVars::AlwaysHardSnap != 0)) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  adVar72[1] = 0.0;
  adVar72[0] = local_6d8._s_0.Z;
  local_1a8.Rotation.XY.m128d_f64[0] = local_458.X;
  local_1a8.Rotation.XY.m128d_f64[1] = local_458.Y;
  local_1a8.Rotation.ZW.m128d_f64[0] = local_458.Z;
  local_1a8.Rotation.ZW.m128d_f64[1] = local_458.W;
  local_1a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_1a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_1a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_1a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_1a8.Translation.XY.m128d_f64[0] = local_6d8._s_0.X;
  local_1a8.Translation.XY.m128d_f64[1] = local_6d8._s_0.Y;
  local_1a8.Translation.ZW.m128d_f64 = adVar72;
  if (bVar22) {
    if (((PhysicsReplicationCVars::LogPhysicsReplicationHardSnaps != 0) &&
        (this->PhysScene != (FPhysScene_Chaos *)0x0)) &&
       (pUVar26 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene), pUVar26 != (UWorld *)0x0)) {
      if (2 < (byte)LogTemp._0_1_) {
        bVar20 = FBodyInstance::IsInstanceAwake(param_2);
        local_704 = (float)(bVar20 ^ 1);
        if (this->PhysScene == (FPhysScene_Chaos *)0x0) {
          pUVar26 = (UWorld *)0x0;
        }
        else {
          pUVar26 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene);
        }
        UWorld::IsPlayingReplay(pUVar26);
        ::FString::PrintfImpl(&local_518,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_528,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_538,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_548,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_4f0,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
        }
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
        if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_538.Data.AllocatorInstance.Data);
        }
        if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_528.Data.AllocatorInstance.Data);
        }
        this = local_6a8;
        if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Data.AllocatorInstance.Data);
          this = local_6a8;
        }
      }
      if (local_688 != (bool *)0x0) {
        *local_688 = true;
      }
      if (local_6fc <= fVar53) {
        if (2 < (byte)LogTemp._0_1_) {
          pFVar31 = (FStaticBasicLogRecord *)&PTR_u_Hard_snap_due_t_151a7d008;
          goto LAB_1482e8ca8;
        }
      }
      else if (2 < (byte)LogTemp._0_1_) {
        pFVar31 = &::LOG_Static;
LAB_1482e8ca8:
        UE::Logging::Private::BasicLog<3>(pFVar31,(FLogCategoryBase *)&LogTemp);
      }
    }
    param_3->AccumulatedErrorSeconds = 0.0;
    bVar20 = true;
    if ((((this->PhysicsReplicationAsync == (FPhysicsReplicationAsync *)0x0) || (local_718 == '\0'))
        || (pFVar27 = FBodyInstance::GetPhysicsActor(param_2),
           pFVar27 == (FSingleParticlePhysicsProxy *)0x0)) ||
       (lVar4 = pFVar27->_padding_, lVar4 == 0)) {
      FBodyInstance::SetBodyTransform(param_2,&local_1a8,ResetPhysics,false);
      FBodyInstance::SetLinearVelocity(param_2,(TVector<double> *)&local_638._s_0,false,false);
      local_4b8._s_0.X = dStack_620 * ___xmm_3f91df46a00000003f91df46a0000000;
      local_4b8._s_0.Y = local_618 * _UNK_150689668;
      local_4b8._s_0.Z = dStack_610 * ___xmm_3f91df46a00000003f91df46a0000000;
      FBodyInstance::SetAngularVelocityInRadians
                (param_2,(TVector<double> *)&local_4b8._s_0,false,false);
    }
    else {
      local_308 = local_1a8.Rotation.XY.m128d_f64[0];
      dStack_300 = local_1a8.Rotation.XY.m128d_f64[1];
      local_2f8 = local_1a8.Rotation.ZW.m128d_f64[0];
      dStack_2f0 = local_1a8.Rotation.ZW.m128d_f64[1];
      local_2e8 = local_1a8.Translation.XY.m128d_f64[0];
      dStack_2e0 = local_1a8.Translation.XY.m128d_f64[1];
      local_2d8 = local_1a8.Translation.ZW.m128d_f64[0];
      dStack_2d0 = local_1a8.Translation.ZW.m128d_f64[1];
      local_2c8 = local_1a8.Scale3D.XY.m128d_f64[0];
      dStack_2c0 = local_1a8.Scale3D.XY.m128d_f64[1];
      local_2b8 = local_1a8.Scale3D.ZW.m128d_f64[0];
      dStack_2b0 = local_1a8.Scale3D.ZW.m128d_f64[1];
      local_2a8 = local_678;
      dStack_2a0 = dStack_670;
      local_298 = local_668;
      uStack_290 = uStack_660;
      local_288 = local_658;
      dStack_280 = dStack_650;
      local_278 = local_648;
      dStack_270 = dStack_640;
      local_268 = local_638._s_0.X;
      dStack_260 = local_638._s_0.Y;
      local_258 = local_638._s_0.Z;
      dStack_250 = dStack_620;
      local_228 = local_717;
      local_248 = local_618;
      dStack_240 = dStack_610;
      local_238 = local_608;
      uStack_230 = uStack_600;
      local_227 = local_716;
      local_318 = lVar4;
      pFStack_310 = pFVar27;
      if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar22 = IsInGameThread(), !bVar22)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                              ,0x1b3,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      pFVar28 = ::operator_new(0xc0);
      if (pFVar28 == (FSimCallbackCommandObject *)0x0) {
        pFVar28 = (FSimCallbackCommandObject *)0x0;
        bVar22 = false;
      }
      else {
        local_1d8[0] = (code *)0x0;
        local_1b0 = FMemory::Malloc(0x110,0x10);
        *local_1b0 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`FPhysicsReplication::ApplyRigidBodyState'::`163'::<lambda_1>,1,1>
                              ::_vftable_;
        lVar29 = 2;
        ppcVar32 = local_1b0 + 2;
        plVar33 = &local_318;
        do {
          pcVar7 = (code *)plVar33[1];
          pcVar17 = (code *)plVar33[2];
          pcVar18 = (code *)plVar33[3];
          *ppcVar32 = (code *)*plVar33;
          ppcVar32[1] = pcVar7;
          pcVar7 = (code *)plVar33[4];
          pcVar19 = (code *)plVar33[5];
          ppcVar32[2] = pcVar17;
          ppcVar32[3] = pcVar18;
          pcVar17 = (code *)plVar33[6];
          pcVar18 = (code *)plVar33[7];
          ppcVar32[4] = pcVar7;
          ppcVar32[5] = pcVar19;
          pcVar7 = (code *)plVar33[8];
          pcVar19 = (code *)plVar33[9];
          ppcVar32[6] = pcVar17;
          ppcVar32[7] = pcVar18;
          pcVar17 = (code *)plVar33[10];
          pcVar18 = (code *)plVar33[0xb];
          ppcVar32[8] = pcVar7;
          ppcVar32[9] = pcVar19;
          pcVar7 = (code *)plVar33[0xc];
          pcVar19 = (code *)plVar33[0xd];
          ppcVar32[10] = pcVar17;
          ppcVar32[0xb] = pcVar18;
          pcVar17 = (code *)plVar33[0xe];
          pcVar18 = (code *)plVar33[0xf];
          ppcVar32[0xc] = pcVar7;
          ppcVar32[0xd] = pcVar19;
          ppcVar32[0xe] = pcVar17;
          ppcVar32[0xf] = pcVar18;
          lVar29 = lVar29 + -1;
          ppcVar32 = ppcVar32 + 0x10;
          plVar33 = plVar33 + 0x10;
        } while (lVar29 != 0);
        if (local_1b0 + 2 != (code **)0x0) {
          local_1d8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FPhysicsReplication::ApplyRigidBodyState'::__l163::<lambda_1>,void>
                         ::Call;
        }
        pFVar28 = Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject
                            (pFVar28,(TUniqueFunction<void___cdecl(void)> *)local_1d8,-1);
        bVar22 = true;
      }
      if ((bVar22) && (local_1d8[0] != (code *)0x0)) {
        ppcVar32 = local_1d8 + 2;
        if (local_1b0 != (code **)0x0) {
          ppcVar32 = local_1b0;
        }
        (**(code **)(*ppcVar32 + 0x10))();
      }
      Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar4 + 0x98),pFVar28);
    }
  }
  else if (this->PhysicsReplicationAsync == (FPhysicsReplicationAsync *)0x0) {
    dVar73 = (double)local_6ec;
    dVar63 = (double)local_6f8;
    local_4a0._s_0.X = local_6a0 * dVar73 * dVar63 + local_638._s_0.X;
    local_4a0._s_0.Y = local_698 * dVar73 * dVar63 + local_638._s_0.Y;
    dVar77 = (double)fVar74;
    local_4a0._s_0.Z = local_690 * dVar73 * dVar63 + local_638._s_0.Z;
    dVar41 = (double)local_6e4;
    dVar73 = (double)local_6e8;
    local_688 = (bool *)((local_6d8._s_0.Z - local_5c8._s_0.Z) * dVar41 + local_5c8._s_0.Z);
    dVar76 = auVar80._0_8_ * dVar77 * dVar73 * dVar63 + dStack_620;
    dVar78 = auVar80._8_8_ * dVar77 * dVar73 * dVar63 + local_618;
    dVar73 = local_4c8 * dVar77 * dVar73 * dVar63 + dStack_610;
    dVar77 = (local_6d8._s_0.X - local_5c8._s_0.X) * dVar41 + local_5c8._s_0.X;
    dVar41 = (local_6d8._s_0.Y - local_5c8._s_0.Y) * dVar41 + local_5c8._s_0.Y;
    pTVar30 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (&local_1f8,&local_5a8,&local_458,(double)local_704);
    dVar63 = pTVar30->X;
    dVar14 = pTVar30->Y;
    dVar15 = pTVar30->Z;
    dVar16 = pTVar30->W;
    dVar54 = dVar63 * dVar63 + dVar15 * dVar15;
    dVar61 = dVar14 * dVar14 + dVar16 * dVar16;
    auVar50._8_4_ = SUB84(dVar61,0);
    auVar50._0_8_ = dVar54;
    auVar50._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
    auVar51._0_8_ = auVar50._8_8_ + dVar54;
    auVar51._8_8_ = dVar54 + dVar61;
    auVar79 = sqrtpd((undefined1  [16])adVar72,auVar51);
    uVar37 = -(ulonglong)(dVar40 <= auVar51._0_8_);
    uVar36 = -(ulonglong)(dVar40 <= auVar51._8_8_);
    uVar81 = (uint)(uVar37 >> 0x20);
    uVar82 = (uint)(uVar36 >> 0x20);
    auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar79);
    auVar69._0_8_ = uVar37 & (ulonglong)(auVar42._0_8_ * dVar63);
    uVar35 = uVar36 & (ulonglong)(auVar42._8_8_ * dVar14);
    auVar69._8_4_ = (undefined4)uVar35;
    auVar69._12_4_ = (undefined4)(uVar35 >> 0x20);
    auVar58._0_4_ = ~(uint)uVar37 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar58._4_4_ =
         ~uVar81 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar58._8_4_ = ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar58._12_4_ =
         ~uVar82 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_148.Rotation.XY.m128d_f64 = (double  [2])(auVar69 | auVar58);
    auVar70._0_4_ = ~(uint)uVar37 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar70._4_4_ =
         ~uVar81 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar70._8_4_ = ~(uint)uVar36 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar70._12_4_ =
         ~uVar82 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar79);
    local_148.Scale3D.XY.m128d_f64[0] = dVar62;
    local_148.Scale3D.XY.m128d_f64[1] = dVar71;
    local_148.Scale3D.ZW.m128d_f64[0] = dVar60;
    local_148.Scale3D.ZW.m128d_f64[1] = dVar8;
    auVar59._0_8_ = (ulonglong)(auVar42._0_8_ * dVar15) & uVar37;
    uVar36 = (ulonglong)(auVar42._8_8_ * dVar16) & uVar36;
    auVar59._8_4_ = (undefined4)uVar36;
    auVar59._12_4_ = (undefined4)(uVar36 >> 0x20);
    local_148.Rotation.ZW.m128d_f64 = (double  [2])(auVar70 | auVar59);
    local_148.Translation.ZW.m128d_f64[0] = (double)local_688;
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_148.Translation.XY.m128d_f64[0] = dVar77;
    local_148.Translation.XY.m128d_f64[1] = dVar41;
    FBodyInstance::SetBodyTransform(param_2,&local_148,ResetPhysics,true);
    FBodyInstance::SetLinearVelocity(param_2,(TVector<double> *)&local_4a0._s_0,false,true);
    local_488._s_0.X = dVar76 * __real_3f91df46a0000000;
    local_488._s_0.Y = dVar78 * __real_3f91df46a0000000;
    local_488._s_0.Z = dVar73 * __real_3f91df46a0000000;
    FBodyInstance::SetAngularVelocityInRadians
              (param_2,(TVector<double> *)&local_488._s_0,false,true);
  }
  else {
    uStack_420 = uStack_660;
    local_3e8 = local_638._s_0.Z;
    dStack_3e0 = dStack_620;
    local_3f8 = local_638._s_0.X;
    dStack_3f0 = local_638._s_0.Y;
    local_3c8 = local_608;
    uStack_3c0 = uStack_600;
    local_3b0 = (FPhysicsObject *)0x0;
    local_394 = Default;
    local_388 = false;
    local_3d8 = local_618;
    dStack_3d0 = dStack_610;
    local_330 = local_6d8._s_0.X;
    dStack_328 = local_6d8._s_0.Y;
    local_320 = local_6d8._s_0.Z;
    local_438._0_8_ = local_6d8._s_0.X;
    local_438._8_8_ = local_6d8._s_0.Y;
    local_428 = local_6d8._s_0.Z;
    local_418 = local_458.X;
    dStack_410 = local_458.Y;
    local_408 = local_458.Z;
    dStack_400 = local_458.W;
    local_3b8 = FBodyInstance::GetPhysicsActor(param_2);
    local_3a8 = param_4->LinearVelocityCoefficient;
    local_3a4 = param_4->AngularVelocityCoefficient;
    pFVar5 = this->AsyncInput;
    local_3a0 = param_4->PositionLerp;
    local_39c = param_4->AngleLerp;
    local_384 = local_6bc;
    local_398 = true;
    pFVar6 = (pFVar5->InputData).AllocatorInstance.Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_438) &&
        ((FScriptContainerElement *)local_438 <
         pFVar6 + (longlong)(pFVar5->InputData).ArrayMax * 0xc0)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar22)) {
      pcVar7 = (code *)swi(3);
      uVar21 = (*pcVar7)();
      return (bool)uVar21;
    }
    iVar23 = (pFVar5->InputData).ArrayNum;
    piVar2 = &(pFVar5->InputData).ArrayMax;
    if (iVar23 == *piVar2) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10c0,&(pFVar5->InputData).AllocatorInstance,piVar2);
    }
    (pFVar5->InputData).ArrayNum = iVar23 + 1;
    FPhysicsRepAsyncInputData::FPhysicsRepAsyncInputData
              ((FPhysicsRepAsyncInputData *)
               ((pFVar5->InputData).AllocatorInstance.Data + (longlong)iVar23 * 0xc0),
               (FPhysicsRepAsyncInputData *)local_438);
  }
  if (CharacterMovementCVars::NetShowCorrections != 0) {
    local_6b8 = param_3->AccumulatedErrorSeconds / fVar75;
    (param_3->ErrorHistory).bAutoAdjustMinMax = false;
    (param_3->ErrorHistory).MinValue = 0.0;
    (param_3->ErrorHistory).MaxValue = 1.0;
    FDebugFloatHistory::AddSample(&param_3->ErrorHistory,&local_6b8);
    if ((this->PhysScene != (FPhysScene_Chaos *)0x0) &&
       (pUVar26 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene), pUVar26 != (UWorld *)0x0)) {
      local_6b4 = FColor::White.field0_0x0;
      DrawDebugDirectionalArrow
                (pUVar26,(TVector<double> *)&local_5c8._s_0,(TVector<double> *)&local_6d8._s_0,
                 __real_40a00000,(FColor *)&local_6b4._s_0,false,
                 CharacterMovementCVars::NetCorrectionLifetime,'\0',__real_3fc00000);
      local_370._s_0.X = ___xmm_40490000000000004059000000000000;
      local_370._s_0.Y = _UNK_151a801d8;
      local_470._s_0.X = local_5c8._s_0.X;
      local_470._s_0.Y = local_5c8._s_0.Y;
      local_714 = 0xff;
      local_470._s_0.Z = local_5c8._s_0.Z + __real_4059000000000000;
      local_6b0[0] = 0.0;
      local_713[0] = false;
      DrawDebugFloatHistory
                (pUVar26,&param_3->ErrorHistory,(TVector<double> *)&local_470._s_0,
                 (TVector2<double> *)&local_370._s_0,&FColor::White,local_713,local_6b0,&local_714);
    }
  }
LAB_1482e94b0:
  if ((uVar13 != 0) && (this->PhysicsReplicationAsync == (FPhysicsReplicationAsync *)0x0)) {
    FBodyInstance::PutInstanceToSleep(param_2);
  }
  (param_3->PrevPosTarget).field0_0x0._s_0.X = local_6d8._s_0.X;
  (param_3->PrevPosTarget).field0_0x0._s_0.Y = local_6d8._s_0.Y;
  (param_3->PrevPosTarget).field0_0x0._s_0.Z = local_6d8._s_0.Z;
  (param_3->PrevPos).field0_0x0._s_0.X = local_5c8._s_0.X;
  (param_3->PrevPos).field0_0x0._s_0.Y = local_5c8._s_0.Y;
  (param_3->PrevPos).field0_0x0._s_0.Z = local_5c8._s_0.Z;
  return bVar20;
}

// GetLocalPing @ 14830ae00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall FPhysicsReplication::GetLocalPing(FPhysicsReplication *this)

{
  UWorld *this_00;
  APlayerController *pAVar1;
  
  if (this->PhysScene != (FPhysScene_Chaos *)0x0) {
    this_00 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene);
    if (this_00 != (UWorld *)0x0) {
      pAVar1 = UWorld::GetFirstPlayerController(this_00);
      if ((pAVar1 != (APlayerController *)0x0) && (pAVar1->_padding_ != 0)) {
        return *(float *)(pAVar1->_padding_ + 0x308);
      }
    }
  }
  return 0.0;
}

// GetOwnerPing @ 14830b4e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FPhysicsReplication::GetOwnerPing
          (FPhysicsReplication *this,AActor *param_1,FReplicatedPhysicsTarget *param_2)

{
  return 0.0;
}

// GetOwningWorld @ 14830b4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPhysicsReplication::GetOwningWorld(FPhysicsReplication *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  if (this->PhysScene == (FPhysScene_Chaos *)0x0) {
    return (UWorld *)0x0;
  }
  pUVar2 = (UWorld *)this->PhysScene->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// GetOwningWorld @ 14830b510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FPhysicsReplication::GetOwningWorld(FPhysicsReplication *this)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  
  if (this->PhysScene == (FPhysScene_Chaos *)0x0) {
    return (UWorld *)0x0;
  }
  pUVar2 = (UWorld *)this->PhysScene->_padding_;
  if (pUVar2 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWorld *)0x0;
}

// OnSetReplicatedTarget @ 148315650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplication::OnSetReplicatedTarget
          (FPhysicsReplication *this,UPrimitiveComponent *param_1,FName param_2,
          FRigidBodyState *param_3,int param_4,FReplicatedPhysicsTarget *param_5)

{
  return;
}

// OnTargetRestored @ 148315670

void __thiscall
FPhysicsReplication::OnTargetRestored
          (FPhysicsReplication *this,TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> param_1,
          FReplicatedPhysicsTarget *param_2)

{
  return;
}

// OnTick @ 1483156b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPhysicsReplication::OnTick
          (FPhysicsReplication *this,float param_1,
          TMap<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>_>
          *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FPhysicsRepAsyncInputData *pFVar5;
  FReplicatedPhysicsTarget *pFVar6;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  ENetMode EVar10;
  uint uVar11;
  int iVar12;
  UPhysicsSettings *pUVar13;
  UWorld *pUVar14;
  APlayerController *pAVar15;
  FPhysicsReplicationAsyncInput *pFVar16;
  UPrimitiveComponent *this_00;
  UClass *pUVar17;
  UObject *pUVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char local_res20;
  ulonglong in_stack_fffffffffffffe00;
  undefined1 local_1e8 [4];
  int local_1e4;
  ulonglong local_1e0;
  FWeakObjectPtr local_1d8;
  FRigidBodyErrorCorrection *local_1d0;
  longlong *local_1c8;
  undefined1 auStack_1c0 [16];
  uint uStack_1b0;
  int iStack_1ac;
  longlong local_1a8;
  TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
  *pTStack_1a0;
  TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
  *local_198;
  char local_190;
  char cStack_18f;
  UObject *local_188;
  UObject *local_180;
  FPhysicsRepAsyncInputData local_178;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
  *pTStack_90;
  
  if ((CharacterMovementCVars::SkipPhysicsReplication == 0) &&
     ((*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34 ||
      ((this->ReplicatedTargetsQueue).ArrayNum != 0)))) {
    local_1e4 = 0;
    local_res20 = '\0';
    pUVar13 = UPhysicsSettings::Get();
    if ((((pUVar13->PhysicsPrediction).bEnablePhysicsPrediction != false) &&
        (((this->PhysScene != (FPhysScene_Chaos *)0x0 &&
          (pUVar14 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene), pUVar14 != (UWorld *)0x0))
         && (EVar10 = UWorld::InternalGetNetMode(pUVar14), EVar10 == NM_Client)))) &&
       (pAVar15 = UWorld::GetFirstPlayerController(pUVar14), pAVar15 != (APlayerController *)0x0)) {
      local_res20 = pAVar15->bNetworkPhysicsTickOffsetAssigned;
      local_1e4 = pAVar15->NetworkPhysicsTickOffset;
    }
    pUVar13 = UPhysicsSettings::Get();
    local_1d0 = &pUVar13->PhysicErrorCorrection;
    fVar28 = 0.0;
    if (this->PhysicsReplicationAsync != (FPhysicsReplicationAsync *)0x0) {
      fVar27 = CharacterMovementCVars::PositionLerp;
      if (CharacterMovementCVars::PositionLerp < 0.0) {
        fVar27 = (pUVar13->PhysicErrorCorrection).PositionLerp;
      }
      fVar26 = CharacterMovementCVars::LinearVelocityCoefficient;
      if (CharacterMovementCVars::LinearVelocityCoefficient < 0.0) {
        fVar26 = (pUVar13->PhysicErrorCorrection).LinearVelocityCoefficient;
      }
      fVar25 = CharacterMovementCVars::AngleLerp;
      if (CharacterMovementCVars::AngleLerp < 0.0) {
        fVar25 = (pUVar13->PhysicErrorCorrection).AngleLerp;
      }
      fVar24 = CharacterMovementCVars::AngularVelocityCoefficient;
      if (CharacterMovementCVars::AngularVelocityCoefficient < 0.0) {
        fVar24 = (pUVar13->PhysicErrorCorrection).AngularVelocityCoefficient;
      }
      pFVar16 = (FPhysicsReplicationAsyncInput *)
                Chaos::ISimCallbackObject::GetProducerInputData_External
                          ((ISimCallbackObject *)&this->PhysicsReplicationAsync->_padding_);
      this->AsyncInput = pFVar16;
      (pFVar16->ErrorCorrection).PositionLerp = fVar27;
      (this->AsyncInput->ErrorCorrection).AngleLerp = fVar25;
      (this->AsyncInput->ErrorCorrection).LinearVelocityCoefficient = fVar26;
      (this->AsyncInput->ErrorCorrection).AngularVelocityCoefficient = fVar24;
    }
    if (((this->PhysScene != (FPhysScene_Chaos *)0x0) &&
        (pUVar14 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene), pUVar14 != (UWorld *)0x0)) &&
       ((pAVar15 = UWorld::GetFirstPlayerController(pUVar14), pAVar15 != (APlayerController *)0x0 &&
        (pAVar15->_padding_ != 0)))) {
      fVar28 = *(float *)(pAVar15->_padding_ + 0x308);
    }
    TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_b8,
               (TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
                *)param_2);
    fVar27 = __real_3a03126f;
    local_190 = '\0';
    cStack_18f = '\0';
    local_1c8 = (longlong *)local_b8._0_8_;
    auStack_1c0._0_8_ = local_b8._8_8_;
    stack0xfffffffffffffe48 = local_b8._16_16_;
    local_1a8 = local_98;
    pTStack_1a0 = pTStack_90;
    iVar12 = local_b8._28_4_;
    local_198 = (TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
                 *)param_2;
    if (iVar12 < *(int *)(local_b8._16_8_ + 0x18)) {
      do {
        plVar7 = local_1c8;
        lVar22 = (longlong)iVar12 * 0x120;
        this_00 = (UPrimitiveComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_1c8 + lVar22));
        if (((this_00 != (UPrimitiveComponent *)0x0) && (*(longlong *)&this_00->field_0xd0 == 0)) &&
           (local_1e0 = (**(code **)(*(longlong *)this_00 + 0x818))
                                  (this_00,*(undefined8 *)(*plVar7 + 0x90 + lVar22),1,0xffffffff),
           local_1e0 != 0)) {
          uVar20 = *(ulonglong *)&this_00->field_0xa8;
          lVar2 = *plVar7;
          if (uVar20 != 0) {
            uVar11 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            if (UNetworkPhysicsSettingsComponent::ObjectToSettings_External._8_4_ !=
                UNetworkPhysicsSettingsComponent::ObjectToSettings_External._52_4_) {
              lVar21 = 0x154c62098;
              if (UNetworkPhysicsSettingsComponent::ObjectToSettings_External._64_8_ != 0) {
                lVar21 = UNetworkPhysicsSettingsComponent::ObjectToSettings_External._64_8_;
              }
              for (iVar12 = *(int *)(lVar21 + (ulonglong)
                                              (UNetworkPhysicsSettingsComponent::
                                               ObjectToSettings_External._72_4_ - 1 &
                                              (uVar11 >> 0x10 ^ uVar11)) * 4); iVar12 != -1;
                  iVar12 = *(int *)(UNetworkPhysicsSettingsComponent::ObjectToSettings_External.
                                    _0_8_ + 0x10 + (longlong)iVar12 * 0x18)) {
                if (*(ulonglong *)
                     (UNetworkPhysicsSettingsComponent::ObjectToSettings_External._0_8_ +
                     (longlong)iVar12 * 0x18) == uVar20) {
                  if (((iVar12 != -1) &&
                      (lVar21 = UNetworkPhysicsSettingsComponent::ObjectToSettings_External._0_8_ +
                                (longlong)iVar12 * 0x18, lVar21 != 0)) &&
                     (puVar19 = (undefined8 *)(lVar21 + 8), puVar19 != (undefined8 *)0x0)) {
                    local_188 = (UObject *)*puVar19;
                    goto LAB_148315a2e;
                  }
                  break;
                }
              }
            }
            local_188 = (UObject *)0x0;
LAB_148315a2e:
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_188 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_188);
            }
            FWeakObjectPtr::operator=(&(this->SettingsCurrent).WeakPtr,(FObjectPtr)&local_188);
            if ((((*(char *)(uVar20 + 0x168) == '\x02') &&
                 ((bool)this_00->bReplicatePhysicsToAutonomousProxy)) ||
                (*(char *)(uVar20 + 0x168) == '\x01')) &&
               ((*(byte *)(lVar2 + 0x80 + lVar22) & 2) != 0)) {
              in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffff00000000;
              cVar8 = (**(code **)(this->_padding_ + 0x40))
                                (this,param_1,local_1e0,lVar2 + 0x10 + lVar22,local_1d0,
                                 fVar28 * fVar27,*(int *)(lVar2 + 0xd0 + lVar22) - local_1e4,
                                 in_stack_fffffffffffffe00);
              if (PhysicsReplicationCVars::SkipSkeletalRepOptimization == 0) {
LAB_148315af4:
                UPrimitiveComponent::SyncComponentToRBPhysics(this_00);
              }
              else {
                pUVar17 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                iVar12 = (int)pUVar17->_padding_;
                if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar12) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar12 * 8
                     ) != &pUVar17->_padding_)) goto LAB_148315af4;
              }
              if (cVar8 != '\0') {
                pcVar3 = *(code **)(this->_padding_ + 0x28);
                pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar7 + lVar22));
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar18 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar18);
                }
                local_1d8.ObjectIndex = 0;
                local_1d8.ObjectSerialNumber = 0;
                local_180 = pUVar18;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar18 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar18);
                }
                FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_180);
                (*pcVar3)(this,local_1d8);
                TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
                ::RemoveByIndex(pTStack_1a0,iStack_1ac);
                local_190 = '\x01';
              }
            }
          }
        }
        uStack_1b0 = uStack_1b0 & ~auStack_1c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1c0);
        iVar12 = iStack_1ac;
      } while (iStack_1ac < *(int *)(auStack_1c0._8_8_ + 0x18));
      if ((local_190 != '\0') && (cStack_18f != '\0')) {
        uVar11 = *(int *)&(local_198->Elements).field_0x8 -
                 *(int *)&(local_198->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar12 = 1;
        }
        else {
          uVar20 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_1d0 = (FRigidBodyErrorCorrection *)CONCAT44(local_1d0._4_4_,(int)lVar22);
          iVar12 = 1 << ((byte)lVar22 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_198->HashSize < iVar12)) || (iVar12 < local_198->HashSize))
        {
          local_198->HashSize = iVar12;
          TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
          ::Rehash(local_198);
        }
      }
    }
    iVar12 = (this->ReplicatedTargetsQueue).ArrayNum;
    uVar20 = (ulonglong)iVar12;
    pFVar4 = (this->ReplicatedTargetsQueue).AllocatorInstance.Data;
    lVar22 = uVar20 * 0x100;
    local_1e0 = CONCAT44(local_1e0._4_4_,iVar12);
    pFVar23 = pFVar4 + 0xd0;
    while( true ) {
      if ((this->ReplicatedTargetsQueue).ArrayNum != (int)uVar20) {
        local_1e8[0] = 0;
        `TCheckedPointerIterator<FReplicatedPhysicsTarget,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1e8);
      }
      if (pFVar23 + -0xd0 == pFVar4 + lVar22) break;
      local_178.FrameOffset.bIsSet = local_res20 != '\0';
      local_178.PhysicsObject = *(FPhysicsObject **)(pFVar23 + -8);
      local_178.TargetState.Position._0_8_ = *(undefined8 *)(pFVar23 + -0xd0);
      local_178.TargetState.Position._8_8_ = *(undefined8 *)(pFVar23 + -200);
      local_178.TargetState.Position._16_8_ = *(undefined8 *)(pFVar23 + -0xc0);
      local_178.TargetState._24_8_ = *(undefined8 *)(pFVar23 + -0xb8);
      local_178.RepMode = *(EPhysicsReplicationMode *)pFVar23;
      local_178.TargetState.Quaternion.X = *(double *)(pFVar23 + -0xb0);
      local_178.TargetState.Quaternion.Y = *(double *)(pFVar23 + -0xa8);
      local_178.ServerFrame = *(int *)(pFVar23 + -0x10);
      local_178.TargetState.LinVel._0_8_ = *(undefined8 *)(pFVar23 + -0x90);
      local_178.TargetState.LinVel._8_8_ = *(undefined8 *)(pFVar23 + -0x88);
      local_178.ErrorCorrection.bIsSet = false;
      local_178.TargetState.Quaternion.Z = *(double *)(pFVar23 + -0xa0);
      local_178.TargetState.Quaternion.W = *(double *)(pFVar23 + -0x98);
      local_178.TargetState.AngVel._8_8_ = *(undefined8 *)(pFVar23 + -0x70);
      local_178.TargetState.AngVel._16_8_ = *(undefined8 *)(pFVar23 + -0x68);
      local_178.Proxy = (FSingleParticlePhysicsProxy *)0x0;
      local_178.TargetState.LinVel._16_8_ = *(undefined8 *)(pFVar23 + -0x80);
      local_178.TargetState.AngVel._0_8_ = *(undefined8 *)(pFVar23 + -0x78);
      local_178.LatencyOneWay = fVar28 * fVar27;
      local_178.TargetState._112_8_ = *(undefined8 *)(pFVar23 + -0x60);
      local_178.TargetState._120_8_ = *(undefined8 *)(pFVar23 + -0x58);
      if (local_178.FrameOffset.bIsSet) {
        local_178.FrameOffset.TypedValue = local_1e4;
      }
      pFVar16 = this->AsyncInput;
      pFVar5 = (FPhysicsRepAsyncInputData *)(pFVar16->InputData).AllocatorInstance.Data;
      if (((pFVar5 <= &local_178) && (&local_178 < pFVar5 + (pFVar16->InputData).ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = (pFVar16->InputData).ArrayNum;
      piVar1 = &(pFVar16->InputData).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10c0,&(pFVar16->InputData).AllocatorInstance,piVar1);
      }
      (pFVar16->InputData).ArrayNum = iVar12 + 1;
      FPhysicsRepAsyncInputData::FPhysicsRepAsyncInputData
                ((FPhysicsRepAsyncInputData *)
                 ((pFVar16->InputData).AllocatorInstance.Data + (longlong)iVar12 * 0xc0),&local_178)
      ;
      uVar20 = local_1e0 & 0xffffffff;
      pFVar23 = pFVar23 + 0x100;
    }
    piVar1 = &(this->ReplicatedTargetsQueue).ArrayMax;
    pFVar6 = (FReplicatedPhysicsTarget *)(this->ReplicatedTargetsQueue).AllocatorInstance.Data;
    iVar12 = (this->ReplicatedTargetsQueue).ArrayNum;
    if ((this->ReplicatedTargetsQueue).ArrayMax < 0) {
      DestructItems<FReplicatedPhysicsTarget,int>(pFVar6,iVar12);
      (this->ReplicatedTargetsQueue).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,0x10,0,&(this->ReplicatedTargetsQueue).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FReplicatedPhysicsTarget,int>(pFVar6,iVar12);
      (this->ReplicatedTargetsQueue).ArrayNum = 0;
    }
    this->AsyncInput = (FPhysicsReplicationAsyncInput *)0x0;
  }
  return;
}

// PrepareAsyncData_External @ 14831a290

void __thiscall
FPhysicsReplication::PrepareAsyncData_External
          (FPhysicsReplication *this,FRigidBodyErrorCorrection *param_1)

{
  FPhysicsReplicationAsyncInput *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = CharacterMovementCVars::PositionLerp;
  if (CharacterMovementCVars::PositionLerp < 0.0) {
    fVar5 = param_1->PositionLerp;
  }
  fVar2 = CharacterMovementCVars::LinearVelocityCoefficient;
  if (CharacterMovementCVars::LinearVelocityCoefficient < 0.0) {
    fVar2 = param_1->LinearVelocityCoefficient;
  }
  fVar4 = CharacterMovementCVars::AngleLerp;
  if (CharacterMovementCVars::AngleLerp < 0.0) {
    fVar4 = param_1->AngleLerp;
  }
  fVar3 = CharacterMovementCVars::AngularVelocityCoefficient;
  if (CharacterMovementCVars::AngularVelocityCoefficient < 0.0) {
    fVar3 = param_1->AngularVelocityCoefficient;
  }
  pFVar1 = (FPhysicsReplicationAsyncInput *)
           Chaos::ISimCallbackObject::GetProducerInputData_External
                     ((ISimCallbackObject *)&this->PhysicsReplicationAsync->_padding_);
  this->AsyncInput = pFVar1;
  (pFVar1->ErrorCorrection).PositionLerp = fVar5;
  (this->AsyncInput->ErrorCorrection).AngleLerp = fVar4;
  (this->AsyncInput->ErrorCorrection).LinearVelocityCoefficient = fVar2;
  (this->AsyncInput->ErrorCorrection).AngularVelocityCoefficient = fVar3;
  return;
}

// RemoveReplicatedTarget @ 14831d970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplication::RemoveReplicatedTarget(FPhysicsReplication *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  longlong lVar2;
  FReplicatedPhysicsTarget *pFVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  UPrimitiveComponent *local_res20;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  FReplicatedPhysicsTarget local_138;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    FVar5 = local_res10;
    if (*(int *)&(this->ComponentToTargets_DEPRECATED).field_0x8 !=
        *(int *)&(this->ComponentToTargets_DEPRECATED).field_0x34) {
      puVar8 = *(undefined1 **)&(this->ComponentToTargets_DEPRECATED).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->ComponentToTargets_DEPRECATED).field_0x38;
      }
      for (iVar7 = *(int *)(puVar8 + ((longlong)
                                      (local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex) &
                                     (longlong)
                                     *(int *)&(this->ComponentToTargets_DEPRECATED).field_0x48 - 1U)
                                     * 4); iVar7 != -1;
          iVar7 = *(int *)((longlong)iVar7 * 0x120 + 0x110 + lVar2)) {
        lVar2 = *(longlong *)&this->ComponentToTargets_DEPRECATED;
        local_148 = FVar5;
        local_140 = *(FWeakObjectPtr *)((longlong)iVar7 * 0x120 + lVar2);
        bVar6 = TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>::
                UEOpEquals<UPrimitiveComponent_const_,bool>
                          ((TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&local_140,
                           (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&local_148);
        if (bVar6) {
          TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
                           *)&this->ComponentToTargets_DEPRECATED,iVar7);
          break;
        }
      }
    }
    local_res18 = 0;
    local_138.PhysicsObject =
         (FPhysicsObject *)
         (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                   (&param_1->field_0x260,&local_res18);
    pFVar3 = (FReplicatedPhysicsTarget *)(this->ReplicatedTargetsQueue).AllocatorInstance.Data;
    local_138.TargetState.Position._16_8_ = 0;
    local_138.TargetState.Quaternion.Z = ___xmm_3ff00000000000000000000000000000;
    local_138.TargetState.Quaternion.W = _UNK_15061cbc8;
    local_138.ServerFrame = 0;
    local_138.ErrorHistory.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.TargetState.LinVel._16_8_ = 0;
    local_138.TargetState.AngVel._0_8_ = 0;
    local_138.TargetState.Position._0_8_ = 0;
    local_138.TargetState.Position._8_8_ = 0;
    local_138.TargetState.Quaternion.X = 0.0;
    local_138.TargetState.Quaternion.Y = 0.0;
    local_138.TargetState.LinVel._0_8_ = 0;
    local_138.TargetState.LinVel._8_8_ = 0;
    local_138.TargetState.AngVel._8_8_ = 0;
    local_138.TargetState.AngVel._16_8_ = 0;
    local_138.TargetState.Flags = '\0';
    local_138.BoneName.ComparisonIndex.Value = 0;
    local_138.BoneName.Number = 0;
    local_138.ArrivedTimeSeconds = 0.0;
    local_138.AccumulatedErrorSeconds = 0.0;
    local_138.ErrorHistory.Samples.ArrayNum = 0;
    local_138.ErrorHistory.Samples.ArrayMax = 0;
    local_138.ErrorHistory.MaxSamples = 100;
    local_138.ErrorHistory.MinValue = 0.0;
    local_138.ErrorHistory.MaxValue = 0.0;
    local_138.ErrorHistory.bAutoAdjustMinMax = true;
    if (((pFVar3 <= &local_138) && (&local_138 < pFVar3 + (this->ReplicatedTargetsQueue).ArrayMax))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ReplicatedTargetsQueue).ArrayNum;
    piVar1 = &(this->ReplicatedTargetsQueue).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,0x10,&(this->ReplicatedTargetsQueue).AllocatorInstance,piVar1);
    }
    (this->ReplicatedTargetsQueue).ArrayNum = iVar7 + 1;
    FReplicatedPhysicsTarget::FReplicatedPhysicsTarget
              ((FReplicatedPhysicsTarget *)
               ((this->ReplicatedTargetsQueue).AllocatorInstance.Data + (longlong)iVar7 * 0x100),
               &local_138);
    if (local_138.ErrorHistory.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.ErrorHistory.Samples.AllocatorInstance.Data);
    }
  }
  return;
}

// SetReplicatedTarget @ 148322380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPhysicsReplication::SetReplicatedTarget
          (FPhysicsReplication *this,FPhysicsObject *param_1,FRigidBodyState *param_2,int param_3,
          EPhysicsReplicationMode param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorld *pUVar6;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  FVector_NetQuantize100 local_c8;
  FVector_NetQuantize100 FStack_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  FName local_88;
  float local_80;
  float local_7c;
  int local_48;
  FPhysicsObject *local_40;
  EPhysicsReplicationMode local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  bool local_14;
  
  if (((param_1 != (FPhysicsObject *)0x0) && (this->PhysScene != (FPhysScene_Chaos *)0x0)) &&
     (pUVar6 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene), pUVar6 != (UWorld *)0x0)) {
    local_e8 = (param_2->Quaternion).X;
    dStack_e0 = (param_2->Quaternion).Y;
    local_d8 = (param_2->Quaternion).Z;
    dStack_d0 = (param_2->Quaternion).W;
    local_108._0_8_ = *(undefined8 *)&param_2->Position;
    local_108._8_8_ = *(undefined8 *)&(param_2->Position).field_0x8;
    local_f8 = *(double *)&(param_2->Position).field_0x10;
    uStack_f0 = *(undefined8 *)&param_2->field_0x18;
    local_c8._0_8_ = *(undefined8 *)&param_2->LinVel;
    local_c8._8_8_ = *(undefined8 *)&(param_2->LinVel).field_0x8;
    local_c8._16_8_ = *(undefined8 *)&(param_2->LinVel).field_0x10;
    FStack_b0._0_8_ = *(undefined8 *)&param_2->AngVel;
    FStack_b0._8_8_ = *(undefined8 *)&(param_2->AngVel).field_0x8;
    FStack_b0._16_8_ = *(undefined8 *)&(param_2->AngVel).field_0x10;
    local_98._0_1_ = param_2->Flags;
    local_98._1_7_ = *(undefined7 *)&param_2->field_0x71;
    uStack_90 = *(undefined8 *)&param_2->field_0x78;
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    local_7c = 0.0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    local_18 = 0.0;
    local_20._0_4_ = 100;
    local_20._4_4_ = 0.0;
    local_14 = true;
    local_38 = param_4;
    local_80 = (float)pUVar6->TimeSeconds;
    local_48 = param_3;
    local_40 = param_1;
    iVar5 = _finite((double)local_108._0_8_);
    if ((((iVar5 == 0) || (iVar5 = _finite((double)local_108._8_8_), iVar5 == 0)) ||
        (iVar5 = _finite(local_f8), iVar5 == 0)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8944149740426101119>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                           ,0x17f,"!Target.TargetState.Position.ContainsNaN()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->ReplicatedTargetsQueue).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_108) &&
        ((FScriptContainerElement *)local_108 <
         pFVar2 + (longlong)(this->ReplicatedTargetsQueue).ArrayMax * 0x100)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->ReplicatedTargetsQueue).ArrayNum;
    piVar1 = &(this->ReplicatedTargetsQueue).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,0x10,&(this->ReplicatedTargetsQueue).AllocatorInstance,piVar1);
    }
    (this->ReplicatedTargetsQueue).ArrayNum = iVar5 + 1;
    FReplicatedPhysicsTarget::FReplicatedPhysicsTarget
              ((FReplicatedPhysicsTarget *)
               ((this->ReplicatedTargetsQueue).AllocatorInstance.Data + (longlong)iVar5 * 0x100),
               (FReplicatedPhysicsTarget *)local_108);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  return;
}

// SetReplicatedTarget @ 148322590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplication::SetReplicatedTarget
          (FPhysicsReplication *this,UPrimitiveComponent *param_1,FName param_2,
          FRigidBodyState *param_3,int param_4)

{
  uchar uVar1;
  AActor *this_00;
  code *pcVar2;
  double dVar3;
  EPhysicsReplicationMode EVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  FPhysicsObject *pFVar8;
  longlong lVar9;
  double *pdVar10;
  TKeyInitializer<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&> local_res10;
  FName local_res18;
  FWeakObjectPtr local_48;
  UPrimitiveComponent *local_40;
  FWeakObjectPtr local_38;
  FWeakObjectPtr *local_30;
  
  this_00 = *(AActor **)&param_1->field_0xa8;
  local_res18 = param_2;
  if ((this_00 != (AActor *)0x0) &&
     ((PhysicsReplicationCVars::EnableDefaultReplication != 0 ||
      (EVar4 = AActor::GetPhysicsReplicationMode(this_00), EVar4 != Default)))) {
    uVar1 = (this_00->Role).Value;
    if (uVar1 == '\x02') {
      if ((bool)param_1->bReplicatePhysicsToAutonomousProxy) {
LAB_1483228d5:
        pFVar8 = (FPhysicsObject *)
                 (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                           (&param_1->field_0x260,&local_res18);
        EVar4 = AActor::GetPhysicsReplicationMode(this_00);
        SetReplicatedTarget(this,pFVar8,param_3,param_4,EVar4);
        return;
      }
    }
    else if (uVar1 == '\x01') goto LAB_1483228d5;
  }
  if (this->PhysScene == (FPhysScene_Chaos *)0x0) {
    return;
  }
  pUVar7 = FPhysScene_Chaos::GetOwningWorld(this->PhysScene);
  if (pUVar7 == (UWorld *)0x0) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_40 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
  local_38 = local_48;
  iVar6 = TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
                      *)&this->ComponentToTargets_DEPRECATED,
                     local_48.ObjectSerialNumber ^ local_48.ObjectIndex,
                     (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&local_38);
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x120 + *(longlong *)&this->ComponentToTargets_DEPRECATED;
    pdVar10 = (double *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pdVar10 = (double *)0x0;
    }
    if (pdVar10 != (double *)0x0) goto LAB_148322703;
  }
  local_30 = &local_48;
  TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_const_&>_>
            ((TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
              *)&this->ComponentToTargets_DEPRECATED,&local_res10,(bool *)&local_30);
  dVar3 = *(double *)&(param_3->Position).field_0x8;
  pdVar10 = (double *)
            (*(longlong *)&this->ComponentToTargets_DEPRECATED +
            (longlong)(int)local_res10.Key * 0x120 + 0x10);
  pdVar10[0x15] = *(double *)&param_3->Position;
  pdVar10[0x16] = dVar3;
  pdVar10[0x17] = *(double *)&(param_3->Position).field_0x10;
  dVar3 = *(double *)&(param_3->Position).field_0x8;
  pdVar10[0x12] = *(double *)&param_3->Position;
  pdVar10[0x13] = dVar3;
  pdVar10[0x14] = *(double *)&(param_3->Position).field_0x10;
LAB_148322703:
  *(int *)(pdVar10 + 0x18) = param_4;
  dVar3 = *(double *)&(param_3->Position).field_0x8;
  *pdVar10 = *(double *)&param_3->Position;
  pdVar10[1] = dVar3;
  dVar3 = *(double *)&param_3->field_0x18;
  pdVar10[2] = *(double *)&(param_3->Position).field_0x10;
  pdVar10[3] = dVar3;
  dVar3 = (param_3->Quaternion).Y;
  pdVar10[4] = (param_3->Quaternion).X;
  pdVar10[5] = dVar3;
  dVar3 = (param_3->Quaternion).W;
  pdVar10[6] = (param_3->Quaternion).Z;
  pdVar10[7] = dVar3;
  dVar3 = *(double *)&(param_3->LinVel).field_0x8;
  pdVar10[8] = *(double *)&param_3->LinVel;
  pdVar10[9] = dVar3;
  dVar3 = *(double *)&param_3->AngVel;
  pdVar10[10] = *(double *)&(param_3->LinVel).field_0x10;
  pdVar10[0xb] = dVar3;
  dVar3 = *(double *)&(param_3->AngVel).field_0x10;
  pdVar10[0xc] = *(double *)&(param_3->AngVel).field_0x8;
  pdVar10[0xd] = dVar3;
  dVar3 = *(double *)&param_3->field_0x78;
  pdVar10[0xe] = *(double *)&param_3->Flags;
  pdVar10[0xf] = dVar3;
  *(FName *)(pdVar10 + 0x10) = local_res18;
  *(float *)(pdVar10 + 0x11) = (float)pUVar7->TimeSeconds;
  iVar6 = _finite(pdVar10[0x15]);
  if ((((iVar6 == 0) || (iVar6 = _finite(pdVar10[0x16]), iVar6 == 0)) ||
      (iVar6 = _finite(pdVar10[0x17]), iVar6 == 0)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8944149740426101090>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                         ,0x162,"!Target->PrevPos.ContainsNaN()"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = _finite(pdVar10[0x12]);
  if ((((iVar6 == 0) || (iVar6 = _finite(pdVar10[0x13]), iVar6 == 0)) ||
      (iVar6 = _finite(pdVar10[0x14]), iVar6 == 0)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8944149740426101091>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                         ,0x163,"!Target->PrevPosTarget.ContainsNaN()"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = _finite(*pdVar10);
  if ((((iVar6 == 0) || (iVar6 = _finite(pdVar10[1]), iVar6 == 0)) ||
      (iVar6 = _finite(pdVar10[2]), iVar6 == 0)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8944149740426101092>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsReplication.cpp"
                         ,0x164,"!Target->TargetState.Position.ContainsNaN()"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(this->_padding_ + 0x30))(this,param_1,local_res18,param_3,param_4,pdVar10);
  return;
}

// ShouldSkipPhysicsReplication @ 1483237f0

bool __cdecl FPhysicsReplication::ShouldSkipPhysicsReplication(void)

{
  return CharacterMovementCVars::SkipPhysicsReplication != 0;
}

// Tick @ 148324340

void __thiscall FPhysicsReplication::Tick(FPhysicsReplication *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148324347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,param_1,&this->ComponentToTargets_DEPRECATED);
  return;
}

