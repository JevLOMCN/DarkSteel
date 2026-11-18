// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FSuspensionConstraintPhysicsProxy @ 1440cccc0

FSuspensionConstraintPhysicsProxy * __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::FSuspensionConstraintPhysicsProxy
          (FSuspensionConstraintPhysicsProxy *this,FSuspensionConstraint *param_1,
          FPBDSuspensionConstraintHandle *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSuspensionConstraintPhysicsProxy *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> *paVar6;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFProxyTimestampBase___00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar3[1]._padding_ = 0;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSuspensionConstraintPhysicsProxy *)(*pcVar1)();
        return pFVar4;
      }
    }
    paVar6 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  this->_padding_ = (longlong)pTVar5;
  this->_padding_ = (longlong)param_3;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 9;
  this->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->Constraint_GT = param_1;
  this->_padding_ = (longlong)&___7FSuspensionConstraintPhysicsProxy_Chaos__6B_;
  this->Constraint_PT = param_2;
  this->bInitialized = false;
  if (param_1 == (FSuspensionConstraint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint_GT!=nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\SuspensionConstraintProxy.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSuspensionConstraintPhysicsProxy *)(*pcVar1)();
      return pFVar4;
    }
  }
  FConstraintBase::SetProxy((FConstraintBase *)this->Constraint_GT,(IPhysicsProxyBase *)this);
  return this;
}

// DestroyOnGameThread @ 1440db2d0

void __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::DestroyOnGameThread
          (FSuspensionConstraintPhysicsProxy *this)

{
  FSuspensionConstraint *pFVar1;
  
  pFVar1 = this->Constraint_GT;
  if (pFVar1 != (FSuspensionConstraint *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->Constraint_GT = (FSuspensionConstraint *)0x0;
  }
  return;
}

// DestroyOnPhysicsThread @ 1440db400

void __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::DestroyOnPhysicsThread
          (FSuspensionConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1)

{
  FPBDSuspensionConstraintHandle *pFVar1;
  
  pFVar1 = this->Constraint_PT;
  if (pFVar1 != (FPBDSuspensionConstraintHandle *)0x0) {
    if (*(FPBDIslandConstraint **)&pFVar1->field_0x10 != (FPBDIslandConstraint *)0x0) {
      Chaos::Private::FPBDIslandManager::RemoveConstraint
                ((FPBDIslandManager *)&((param_1->MEvolution).Ptr)->_padding_,
                 (FConstraintHandle *)pFVar1);
    }
    FPBDSuspensionConstraints::RemoveConstraint
              (&((param_1->MEvolution).Ptr)->SuspensionConstraints,
               *(int *)&this->Constraint_PT->field_0x18);
    this->Constraint_PT = (FPBDSuspensionConstraintHandle *)0x0;
  }
  return;
}

// GetHandleUnsafe @ 1440e4f10

void * __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::GetHandleUnsafe(FSuspensionConstraintPhysicsProxy *this)

{
  return this->Constraint_PT;
}

// GetParticleHandleFromProxy @ 1440e4fd0

TGeometryParticleHandleImp<double,3,1> * __cdecl
Chaos::FSuspensionConstraintPhysicsProxy::GetParticleHandleFromProxy(IPhysicsProxyBase *param_1)

{
  if ((param_1 != (IPhysicsProxyBase *)0x0) && (param_1->Type == SingleParticleProxy)) {
    return (TGeometryParticleHandleImp<double,3,1> *)param_1[1].Solver;
  }
  return (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// InitializeOnPhysicsThread @ 1440e69a0

void __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::InitializeOnPhysicsThread
          (FSuspensionConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1,
          FDirtyPropertiesManager *param_2,int param_3,FDirtyChaosProperties *param_4)

{
  FScriptContainerElement *pFVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  FPBDSuspensionSettings *pFVar7;
  FPBDSuspensionConstraintHandle *pFVar8;
  TVector<double,3> *pTVar9;
  
  if (((int)(param_1->Particles).ParticleHandles._padding_ != 0) &&
     (pFVar2 = (param_1->MEvolution).Ptr, ((param_4->Flags).Bits & 0x2000U) != 0)) {
    pTVar9 = (TVector<double,3> *)0x0;
    uVar5 = 0;
    if (param_3 < (param_2->SuspensionPhysicsObjectPool).Elements.ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_2->SuspensionPhysicsObjectPool).Elements.AllocatorInstance.Data +
             (longlong)param_3 * 8;
    if ((pFVar1 != (FScriptContainerElement *)0x0) &&
       (pTVar6 = FPhysicsObject::GetRootParticle<1>(*(FPhysicsObject **)pFVar1),
       pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
      pFVar7 = FDirtyChaosProperties::FindSuspensionSettings(param_4,param_2,param_3);
      if (((param_4->Flags).Bits & 0x1000U) != 0) {
        uVar5 = 0;
        if (param_3 < (param_2->SuspensionLocationPool).Elements.ArrayNum) {
          uVar5 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar9 = (TVector<double,3> *)
                 ((param_2->SuspensionLocationPool).Elements.AllocatorInstance.Data +
                 (longlong)param_3 * 0x18);
      }
      if ((pFVar7 != (FPBDSuspensionSettings *)0x0) && (pTVar9 != (TVector<double,3> *)0x0)) {
        pFVar8 = FPBDSuspensionConstraints::AddConstraint
                           (&pFVar2->SuspensionConstraints,pTVar6,pTVar9,pFVar7);
        this->Constraint_PT = pFVar8;
        TGeometryParticlesImp<double,3,0>::AddConstraintHandle
                  ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,(int *)&pTVar6->_padding_,
                   (FConstraintHandle *)pFVar8);
      }
    }
  }
  return;
}

// PushStateOnGameThread @ 1440ec9e0

void __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::PushStateOnGameThread
          (FSuspensionConstraintPhysicsProxy *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  FSuspensionConstraint *pFVar1;
  bool bVar2;
  
  if (this->Constraint_GT != (FSuspensionConstraint *)0x0) {
    bVar2 = FConstraintBase::IsValid((FConstraintBase *)this->Constraint_GT);
    if (bVar2) {
      pFVar1 = this->Constraint_GT;
      (param_3->Flags).Bits = (int)pFVar1->_padding_;
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1,param_2,param_3);
      *(undefined4 *)&pFVar1->_padding_ = 0;
    }
  }
  return;
}

// PushStateOnPhysicsThread @ 1440eccd0

void __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::PushStateOnPhysicsThread
          (FSuspensionConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1,
          FDirtyPropertiesManager *param_2,int param_3,FDirtyChaosProperties *param_4)

{
  undefined8 uVar1;
  FPBDSuspensionConstraintHandle *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  undefined7 uVar19;
  FPBDSuspensionSettings *pFVar20;
  
  pFVar2 = this->Constraint_PT;
  if (((pFVar2 != (FPBDSuspensionConstraintHandle *)0x0) && (*(int *)&pFVar2->field_0x18 != -1)) &&
     (*(longlong *)&pFVar2->field_0x8 != 0)) {
    pFVar20 = FDirtyChaosProperties::FindSuspensionSettings(param_4,param_2,param_3);
    if (pFVar20 != (FPBDSuspensionSettings *)0x0) {
      bVar18 = pFVar20->Enabled;
      uVar19 = *(undefined7 *)&pFVar20->field_0x1;
      dVar3 = pFVar20->HardstopStiffness;
      dVar4 = pFVar20->HardstopVelocityCompensation;
      dVar5 = pFVar20->SpringPreload;
      dVar6 = pFVar20->SpringStiffness;
      dVar7 = pFVar20->SpringDamping;
      dVar8 = pFVar20->MinLength;
      dVar9 = pFVar20->MaxLength;
      uVar10 = *(undefined8 *)&pFVar20->Axis;
      uVar11 = *(undefined8 *)&(pFVar20->Axis).field_0x8;
      uVar12 = *(undefined8 *)&(pFVar20->Axis).field_0x10;
      uVar13 = *(undefined8 *)&pFVar20->Target;
      uVar14 = *(undefined8 *)&(pFVar20->Target).field_0x8;
      uVar15 = *(undefined8 *)&(pFVar20->Target).field_0x10;
      uVar16 = *(undefined8 *)&pFVar20->Normal;
      uVar17 = *(undefined8 *)&(pFVar20->Normal).field_0x8;
      uVar1 = *(undefined8 *)&(pFVar20->Normal).field_0x10;
      pFVar20 = FPBDSuspensionConstraintHandle::GetSettings(this->Constraint_PT);
      pFVar20->Enabled = bVar18;
      *(undefined7 *)&pFVar20->field_0x1 = uVar19;
      pFVar20->HardstopStiffness = dVar3;
      pFVar20->HardstopVelocityCompensation = dVar4;
      pFVar20->SpringPreload = dVar5;
      pFVar20->SpringStiffness = dVar6;
      pFVar20->SpringDamping = dVar7;
      pFVar20->MinLength = dVar8;
      pFVar20->MaxLength = dVar9;
      *(undefined8 *)&pFVar20->Axis = uVar10;
      *(undefined8 *)&(pFVar20->Axis).field_0x8 = uVar11;
      *(undefined8 *)&(pFVar20->Axis).field_0x10 = uVar12;
      *(undefined8 *)&pFVar20->Target = uVar13;
      *(undefined8 *)&(pFVar20->Target).field_0x8 = uVar14;
      *(undefined8 *)&(pFVar20->Target).field_0x10 = uVar15;
      *(undefined8 *)&pFVar20->Normal = uVar16;
      *(undefined8 *)&(pFVar20->Normal).field_0x8 = uVar17;
      *(undefined8 *)&(pFVar20->Normal).field_0x10 = uVar1;
    }
  }
  return;
}

// UpdateTargetOnPhysicsThread @ 1440f79d0

void __thiscall
Chaos::FSuspensionConstraintPhysicsProxy::UpdateTargetOnPhysicsThread
          (FSuspensionConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1,
          TVector<double> *param_2,TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FPBDSuspensionSettings *pFVar4;
  FPBDSuspensionConstraints *this_00;
  
  if (this->Constraint_PT != (FPBDSuspensionConstraintHandle *)0x0) {
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    this_00 = &((param_1->MEvolution).Ptr)->SuspensionConstraints;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    pFVar4 = FPBDSuspensionConstraints::GetSettings
                       (this_00,*(int *)&this->Constraint_PT->field_0x18);
    *(double *)&pFVar4->Target = dVar2;
    *(double *)&(pFVar4->Target).field_0x8 = dVar3;
    *(double *)&(pFVar4->Target).field_0x10 = dVar1;
    dVar2 = (param_3->field0_0x0)._s_0.X;
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    dVar1 = (param_3->field0_0x0)._s_0.Z;
    pFVar4 = FPBDSuspensionConstraints::GetSettings
                       (this_00,*(int *)&this->Constraint_PT->field_0x18);
    *(double *)&pFVar4->Normal = dVar2;
    *(double *)&(pFVar4->Normal).field_0x8 = dVar3;
    *(double *)&(pFVar4->Normal).field_0x10 = dVar1;
    pFVar4 = FPBDSuspensionConstraints::GetSettings
                       (this_00,*(int *)&this->Constraint_PT->field_0x18);
    pFVar4->Enabled = param_4;
  }
  return;
}

