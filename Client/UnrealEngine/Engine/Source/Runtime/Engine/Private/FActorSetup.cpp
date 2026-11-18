// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FActorSetup @ 14824dca0

FActorSetup * __thiscall
ImmediatePhysics_Chaos::FActorSetup::FActorSetup(FActorSetup *this,FActorSetup *param_1)

{
  FImplicitObject *pFVar1;
  double dVar2;
  byte bVar3;
  
  dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->Geometry).Reference = (FImplicitObject *)0x0;
  pFVar1 = (param_1->Geometry).Reference;
  (this->Geometry).Reference = pFVar1;
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).AllocatorInstance.Data = (param_1->Shapes).AllocatorInstance.Data;
  (param_1->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = (param_1->Shapes).ArrayNum;
  (this->Shapes).ArrayMax = (param_1->Shapes).ArrayMax;
  (param_1->Shapes).ArrayNum = 0;
  (param_1->Shapes).ArrayMax = 0;
  (this->Material).Ptr = (param_1->Material).Ptr;
  (param_1->Material).Ptr = (FChaosPhysicsMaterial *)0x0;
  this->Mass = param_1->Mass;
  dVar2 = (param_1->Inertia).field0_0x0._s_0.Y;
  (this->Inertia).field0_0x0._s_0.X = (param_1->Inertia).field0_0x0._s_0.X;
  (this->Inertia).field0_0x0._s_0.Y = dVar2;
  (this->Inertia).field0_0x0._s_0.Z = (param_1->Inertia).field0_0x0._s_0.Z;
  dVar2 = (param_1->CoMTransform).Rotation.XY.m128d_f64[1];
  (this->CoMTransform).Rotation.XY.m128d_f64[0] = (param_1->CoMTransform).Rotation.XY.m128d_f64[0];
  (this->CoMTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->CoMTransform).Rotation.ZW.m128d_f64[1];
  (this->CoMTransform).Rotation.ZW.m128d_f64[0] = (param_1->CoMTransform).Rotation.ZW.m128d_f64[0];
  (this->CoMTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->CoMTransform).Translation.XY.m128d_f64[1];
  (this->CoMTransform).Translation.XY.m128d_f64[0] =
       (param_1->CoMTransform).Translation.XY.m128d_f64[0];
  (this->CoMTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->CoMTransform).Translation.ZW.m128d_f64[1];
  (this->CoMTransform).Translation.ZW.m128d_f64[0] =
       (param_1->CoMTransform).Translation.ZW.m128d_f64[0];
  (this->CoMTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->CoMTransform).Scale3D.XY.m128d_f64[1];
  (this->CoMTransform).Scale3D.XY.m128d_f64[0] = (param_1->CoMTransform).Scale3D.XY.m128d_f64[0];
  (this->CoMTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->CoMTransform).Scale3D.ZW.m128d_f64[1];
  (this->CoMTransform).Scale3D.ZW.m128d_f64[0] = (param_1->CoMTransform).Scale3D.ZW.m128d_f64[0];
  (this->CoMTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  this->LinearDamping = param_1->LinearDamping;
  this->AngularDamping = param_1->AngularDamping;
  this->ActorType = param_1->ActorType;
  this->CollisionEnabled = param_1->CollisionEnabled;
  this->GravityGroupIndex = param_1->GravityGroupIndex;
  bVar3 = (this->bInertiaConditioningEnabled ^ param_1->bInertiaConditioningEnabled) & 1 ^
          this->field_0x119;
  this->field_0x119 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x119) & 2 ^ bVar3;
  this->field_0x119 = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x119) & 4 ^ bVar3;
  this->field_0x119 = bVar3;
  this->field_0x119 = (bVar3 ^ param_1->field_0x119) & 8 ^ bVar3;
  return this;
}

// FActorSetup @ 14824de50

FActorSetup * __thiscall ImmediatePhysics_Chaos::FActorSetup::FActorSetup(FActorSetup *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  __m128d _Var5;
  
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Geometry).Reference = (FImplicitObject *)0x0;
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = 0;
  (this->Shapes).ArrayMax = 0;
  (this->Material).Ptr = (FChaosPhysicsMaterial *)0x0;
  this->Mass = 1.0;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Inertia).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Inertia).field0_0x0._s_0.Y = (double)uVar4;
  (this->Inertia).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *&(this->CoMTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->CoMTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->CoMTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->CoMTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->CoMTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var5 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  puVar2 = &this->field_0x119;
  this->bInertiaConditioningEnabled = '\x01';
  this->bGyroscopicTorqueEnabled = '\0';
  this->bUpdateKinematicFromSimulation = '\x01';
  this->bEnableGravity = '\x01';
  *&(this->CoMTransform).Scale3D.ZW.m128d_f64 = _Var5.m128d_f64;
  this->LinearDamping = 0.0;
  this->AngularDamping = 0.0;
  this->ActorType = KinematicActor;
  this->CollisionEnabled = PhysicsOnly;
  this->GravityGroupIndex = '\0';
  return this;
}

// ~FActorSetup @ 148252770

void __thiscall ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(FActorSetup *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FImplicitObject *pFVar3;
  longlong lVar4;
  
  ::operator_delete((this->Material).Ptr,0x80);
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
             (this->Shapes).AllocatorInstance.Data,(this->Shapes).ArrayNum);
  pFVar2 = (this->Shapes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->Geometry).Reference;
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar3->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001482527ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

