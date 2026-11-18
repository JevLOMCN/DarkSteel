// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FSuspensionConstraint @ 143d91ff0

FSuspensionConstraint * __thiscall
Chaos::FSuspensionConstraint::FSuspensionConstraint(FSuspensionConstraint *this)

{
  undefined8 uVar1;
  
  FConstraintBase::FConstraintBase((FConstraintBase *)this,SuspensionConstraintType);
  this->_padding_ = (longlong)&___7FSuspensionConstraint_Chaos__6B_;
  (this->SuspensionSettings).Property.HardstopStiffness = 1.0;
  (this->SuspensionSettings).Property.HardstopVelocityCompensation = 1.0;
  (this->SuspensionSettings).Property.Enabled = false;
  (this->SuspensionSettings).Property.SpringPreload = 0.0;
  (this->SuspensionSettings).Property.SpringStiffness = 0.0;
  (this->SuspensionSettings).Property.SpringDamping = 0.0;
  (this->SuspensionSettings).Property.MinLength = 0.0;
  (this->SuspensionSettings).Property.MaxLength = 0.0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Axis.field_0x10 = 0x3ff0000000000000;
  *(undefined8 *)&(this->SuspensionSettings).Property.Axis = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Axis.field_0x8 = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Target = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Target.field_0x8 = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Target.field_0x10 = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Normal = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Normal.field_0x8 = 0;
  *(undefined8 *)&(this->SuspensionSettings).Property.Normal.field_0x10 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&(this->SuspensionLocation).Property.Location =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->SuspensionLocation).Property.Location.field_0x8 = uVar1;
  *(double *)&(this->SuspensionLocation).Property.Location.field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SuspensionProxy).Property.Proxy = (IPhysicsProxyBase *)0x0;
  (this->SuspensionBody).Property.PhysicsBody = (FPhysicsObject *)0x0;
  return this;
}

// ~FSuspensionConstraint @ 143d92c30

void __thiscall Chaos::FSuspensionConstraint::~FSuspensionConstraint(FSuspensionConstraint *this)

{
  this->_padding_ = (longlong)&___7FConstraintBase_Chaos__6B_;
  return;
}

// SetParticleProxy @ 143db7f50

void __thiscall
Chaos::FSuspensionConstraint::SetParticleProxy
          (FSuspensionConstraint *this,IPhysicsProxyBase *param_1)

{
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  
  if (param_1 == (IPhysicsProxyBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParticleProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSuspensionConstraintData.cpp"
                       ,0x11,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  if (param_1->Type != SingleParticleProxy) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<824601091965452309>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSuspensionConstraintData.cpp"
                       ,0x15,"InParticleProxy->GetType() == EPhysicsProxyType::SingleParticleProxy")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->SuspensionProxy).Property.Proxy = param_1;
  uVar4 = (uint)this->_padding_ | 0x800;
  *(uint *)&this->_padding_ = uVar4;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    uVar4 = (uint)this->_padding_;
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  if (param_1->Type == SingleParticleProxy) {
    pUVar5 = param_1[1].Owner;
  }
  else {
    pUVar5 = (UObject *)0x0;
  }
  (this->SuspensionBody).Property.PhysicsBody = (FPhysicsObject *)pUVar5;
  *(uint *)&this->_padding_ = uVar4 | 0x2000;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetPhysicsBody @ 143db8040

void __thiscall
Chaos::FSuspensionConstraint::SetPhysicsBody(FSuspensionConstraint *this,FPhysicsObject **param_1)

{
  IPhysicsProxyBase *pIVar1;
  code *pcVar2;
  bool bVar3;
  FPhysicsObject *pFVar4;
  IPhysicsProxyBase *pIVar5;
  IPhysicsProxyBase *pIVar6;
  FPhysicsObject **ppFVar7;
  IPhysicsProxyBase *pIVar8;
  IPhysicsProxyBase *pIVar9;
  FPhysicsObject *local_18;
  FPhysicsObject *local_10;
  
  if ((*param_1 == (FPhysicsObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBody",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSuspensionConstraintData.cpp"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18 = *param_1;
  ppFVar7 = &local_18;
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  pIVar8 = (IPhysicsProxyBase *)0x0;
  pFVar4 = local_18;
  pIVar5 = pIVar8;
  while (((pIVar6 = pIVar5, pFVar4 == (FPhysicsObject *)0x0 ||
          ((pIVar6 = pFVar4->Proxy, pIVar9 = pIVar8, pIVar6 != (IPhysicsProxyBase *)0x0 &&
           ((pIVar5 == (IPhysicsProxyBase *)0x0 ||
            (bVar3 = pIVar6 == pIVar5, pIVar6 = pIVar5, bVar3)))))) &&
         (ppFVar7 = ppFVar7 + 1, pIVar9 = pIVar6, ppFVar7 != &local_10))) {
    pFVar4 = *ppFVar7;
    pIVar5 = pIVar6;
  }
  (this->SuspensionProxy).Property.Proxy = pIVar9;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x800;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->SuspensionBody).Property.PhysicsBody = *param_1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x2000;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SyncRemoteDataImp @ 143dba500

void __thiscall
Chaos::FSuspensionConstraint::SyncRemoteDataImp
          (FSuspensionConstraint *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  undefined8 uVar1;
  IPhysicsProxyBase *pIVar2;
  FPhysicsObject *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined7 uVar20;
  bool bVar21;
  uint uVar22;
  FPBDSuspensionSettings *pFVar23;
  FSuspensionLocation *pFVar24;
  FPhysicsObjectProperty *pFVar25;
  
  uVar22 = (param_3->Flags).Bits;
  if ((uVar22 >> 10 & 1) != 0) {
    bVar21 = (this->SuspensionSettings).Property.Enabled;
    uVar20 = *(undefined7 *)&(this->SuspensionSettings).Property.field_0x1;
    dVar5 = (this->SuspensionSettings).Property.HardstopStiffness;
    dVar6 = (this->SuspensionSettings).Property.HardstopVelocityCompensation;
    dVar7 = (this->SuspensionSettings).Property.SpringPreload;
    dVar8 = (this->SuspensionSettings).Property.SpringStiffness;
    dVar9 = (this->SuspensionSettings).Property.SpringDamping;
    dVar10 = (this->SuspensionSettings).Property.MinLength;
    dVar11 = (this->SuspensionSettings).Property.MaxLength;
    uVar12 = *(undefined8 *)&(this->SuspensionSettings).Property.Axis;
    uVar13 = *(undefined8 *)&(this->SuspensionSettings).Property.Axis.field_0x8;
    uVar14 = *(undefined8 *)&(this->SuspensionSettings).Property.Axis.field_0x10;
    uVar15 = *(undefined8 *)&(this->SuspensionSettings).Property.Target;
    uVar16 = *(undefined8 *)&(this->SuspensionSettings).Property.Target.field_0x8;
    uVar17 = *(undefined8 *)&(this->SuspensionSettings).Property.Target.field_0x10;
    uVar18 = *(undefined8 *)&(this->SuspensionSettings).Property.Normal;
    uVar19 = *(undefined8 *)&(this->SuspensionSettings).Property.Normal.field_0x8;
    uVar1 = *(undefined8 *)&(this->SuspensionSettings).Property.Normal.field_0x10;
    pFVar23 = TDirtyElementPool<Chaos::FPBDSuspensionSettings>::GetElement
                        (&param_1->SuspensionSettingsPool,param_2);
    pFVar23->Enabled = bVar21;
    *(undefined7 *)&pFVar23->field_0x1 = uVar20;
    pFVar23->HardstopStiffness = dVar5;
    pFVar23->HardstopVelocityCompensation = dVar6;
    pFVar23->SpringPreload = dVar7;
    pFVar23->SpringStiffness = dVar8;
    pFVar23->SpringDamping = dVar9;
    pFVar23->MinLength = dVar10;
    pFVar23->MaxLength = dVar11;
    *(undefined8 *)&pFVar23->Axis = uVar12;
    *(undefined8 *)&(pFVar23->Axis).field_0x8 = uVar13;
    *(undefined8 *)&(pFVar23->Axis).field_0x10 = uVar14;
    *(undefined8 *)&pFVar23->Target = uVar15;
    *(undefined8 *)&(pFVar23->Target).field_0x8 = uVar16;
    *(undefined8 *)&(pFVar23->Target).field_0x10 = uVar17;
    *(undefined8 *)&pFVar23->Normal = uVar18;
    *(undefined8 *)&(pFVar23->Normal).field_0x8 = uVar19;
    *(undefined8 *)&(pFVar23->Normal).field_0x10 = uVar1;
    uVar22 = (param_3->Flags).Bits;
  }
  if ((uVar22 >> 0xc & 1) != 0) {
    uVar12 = *(undefined8 *)&(this->SuspensionLocation).Property.Location;
    uVar13 = *(undefined8 *)&(this->SuspensionLocation).Property.Location.field_0x8;
    uVar1 = *(undefined8 *)&(this->SuspensionLocation).Property.Location.field_0x10;
    pFVar24 = TDirtyElementPool<Chaos::FSuspensionLocation>::GetElement
                        (&param_1->SuspensionLocationPool,param_2);
    *(undefined8 *)&pFVar24->Location = uVar12;
    *(undefined8 *)&(pFVar24->Location).field_0x8 = uVar13;
    *(undefined8 *)&(pFVar24->Location).field_0x10 = uVar1;
    uVar22 = (param_3->Flags).Bits;
  }
  if ((uVar22 >> 0xb & 1) != 0) {
    pIVar2 = (this->SuspensionProxy).Property.Proxy;
    uVar22 = 0;
    if (param_2 < (param_1->SuspensionParticleProxyPool).Elements.ArrayNum) {
      uVar22 = (uint)~param_2 >> 0x1f;
    }
    if (uVar22 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(IPhysicsProxyBase **)
     ((param_1->SuspensionParticleProxyPool).Elements.AllocatorInstance.Data + (longlong)param_2 * 8
     ) = pIVar2;
    uVar22 = (param_3->Flags).Bits;
  }
  if ((uVar22 >> 0xd & 1) != 0) {
    pFVar3 = (this->SuspensionBody).Property.PhysicsBody;
    pFVar25 = TDirtyElementPool<Chaos::FPhysicsObjectProperty>::GetElement
                        (&param_1->SuspensionPhysicsObjectPool,param_2);
    pFVar25->PhysicsBody = pFVar3;
  }
  return;
}

