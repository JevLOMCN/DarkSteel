// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 50

// ConvertToNonProbe @ 143a60ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Chaos::FContactPairModifier::ConvertToNonProbe(FContactPairModifier *this)

{
  FPBDCollisionConstraint *pFVar1;
  FCollisionContactModifier *pFVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_1e8 [32];
  TTransform<double> local_1c8;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TRigidTransform<double,3> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pFVar1 = this->Constraint;
  pFVar2 = this->Modifier;
  (pFVar1->Flags).Bits = (pFVar1->Flags).Bits | 0x800;
  pTVar3 = (TTransform<double> *)
           FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
           GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
                     (&local_a8,(FConstGenericParticleHandle)pFVar1->Particle[0]);
  local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_1c8,(TTransform<double> *)pFVar1->ImplicitTransform,pTVar3);
  local_168 = local_1c8.Rotation.XY.m128d_f64[0];
  dStack_160 = local_1c8.Rotation.XY.m128d_f64[1];
  local_158 = local_1c8.Rotation.ZW.m128d_f64[0];
  dStack_150 = local_1c8.Rotation.ZW.m128d_f64[1];
  local_148 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_140 = local_1c8.Translation.XY.m128d_f64[1];
  local_138 = local_1c8.Translation.ZW.m128d_f64[0];
  dStack_130 = local_1c8.Translation.ZW.m128d_f64[1];
  local_128 = local_1c8.Scale3D.XY.m128d_f64[0];
  dStack_120 = local_1c8.Scale3D.XY.m128d_f64[1];
  local_118 = local_1c8.Scale3D.ZW.m128d_f64[0];
  dStack_110 = local_1c8.Scale3D.ZW.m128d_f64[1];
  pTVar3 = (TTransform<double> *)
           FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
           GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
                     (&local_a8,(FConstGenericParticleHandle)pFVar1->Particle[1]);
  local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_1c8,(TTransform<double> *)(pFVar1->ImplicitTransform + 1),pTVar3);
  local_d8 = local_1c8.Translation.ZW.m128d_f64[0];
  dStack_d0 = local_1c8.Translation.ZW.m128d_f64[1];
  local_c8 = local_1c8.Scale3D.XY.m128d_f64[0];
  dStack_c0 = local_1c8.Scale3D.XY.m128d_f64[1];
  local_b8 = local_1c8.Scale3D.ZW.m128d_f64[0];
  dStack_b0 = local_1c8.Scale3D.ZW.m128d_f64[1];
  *(double *)pFVar1->ShapeWorldTransforms = local_168;
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x8 = dStack_160;
  local_108 = local_1c8.Rotation.XY.m128d_f64[0];
  dStack_100 = local_1c8.Rotation.XY.m128d_f64[1];
  local_f8 = local_1c8.Rotation.ZW.m128d_f64[0];
  dStack_f0 = local_1c8.Rotation.ZW.m128d_f64[1];
  local_e8 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_e0 = local_1c8.Translation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x10 = local_158;
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x18 = dStack_150;
  *(double *)(pFVar1->ShapeWorldTransforms + 1) = local_1c8.Rotation.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x8 = local_1c8.Rotation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x20 = local_148;
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x28 = dStack_140;
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x10 = local_1c8.Rotation.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x18 = local_1c8.Rotation.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x30 = local_138;
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x38 = dStack_130;
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x20 = local_1c8.Translation.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x28 = local_1c8.Translation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x30 = local_1c8.Translation.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x38 = local_1c8.Translation.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x40 = local_128;
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x48 = dStack_120;
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x40 = local_1c8.Scale3D.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x48 = local_1c8.Scale3D.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x50 = local_118;
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x58 = dStack_110;
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x50 = local_1c8.Scale3D.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x58 = local_1c8.Scale3D.ZW.m128d_f64[1];
  Collisions::UpdateConstraint
            (pFVar1,(TRigidTransform<double,3> *)&local_168,(TRigidTransform<double,3> *)&local_108,
             pFVar2->Dt);
  (pFVar1->Flags).Bits = (pFVar1->Flags).Bits & 0xfeff;
  return;
}

// ConvertToProbe @ 143a613c0

void __thiscall Chaos::FContactPairModifier::ConvertToProbe(FContactPairModifier *this)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x900;
  return;
}

// Disable @ 143a62270

void __thiscall Chaos::FContactPairModifier::Disable(FContactPairModifier *this)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x802;
  return;
}

// Enable @ 143a66380

void __thiscall Chaos::FContactPairModifier::Enable(FContactPairModifier *this)

{
  (this->Constraint->Flags).Bits = (this->Constraint->Flags).Bits & 0xfffd | 0x800;
  return;
}

// GetConstraintContainerCookie @ 143a68610

FPBDCollisionConstraintContainerCookie * __thiscall
Chaos::FContactPairModifier::GetConstraintContainerCookie(FContactPairModifier *this)

{
  return &this->Constraint->ContainerCookie;
}

// GetContactGeometry @ 143a68f70

FImplicitObject * __thiscall
Chaos::FContactPairModifier::GetContactGeometry(FContactPairModifier *this,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  FImplicitObject *pFVar4;
  
  pFVar1 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x163,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FImplicitObject *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar1->Implicit[param_1];
}

// GetDeepestContactIndex @ 143a69110

int __thiscall Chaos::FContactPairModifier::GetDeepestContactIndex(FContactPairModifier *this)

{
  float fVar1;
  FPBDCollisionConstraint *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<Chaos::FManifoldPoint> FVar11;
  
  pFVar2 = this->Constraint;
  iVar6 = (pFVar2->ManifoldPoints).ArrayNum;
  FVar11 = (pFVar2->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar11 = (ForElementType<Chaos::FManifoldPoint>)&pFVar2->ManifoldPoints;
  }
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  if ((iVar6 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar8 = 1;
  uVar7 = 0;
  fVar1 = *(float *)((longlong)FVar11 + 0x24);
  if (1 < iVar6) {
    lVar10 = 0x6c;
    uVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      uVar7 = uVar8;
      fVar4 = *(float *)((uchar *)((longlong)FVar11 + 0x24) + lVar10);
      if (fVar1 <= *(float *)((uchar *)((longlong)FVar11 + 0x24) + lVar10)) {
        uVar7 = uVar9;
        fVar4 = fVar1;
      }
      fVar1 = fVar4;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x6c;
      uVar9 = uVar7;
    } while ((int)uVar8 < iVar6);
  }
  return uVar7;
}

// GetDynamicFriction @ 143a6b270

double __thiscall Chaos::FContactPairModifier::GetDynamicFriction(FContactPairModifier *this)

{
  return (double)(this->Constraint->Material).DynamicFriction;
}

// GetImplicit @ 143a6b340

FImplicitObject * __thiscall
Chaos::FContactPairModifier::GetImplicit(FContactPairModifier *this,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  FImplicitObject *pFVar4;
  
  pFVar1 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x163,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FImplicitObject *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar1->Implicit[param_1];
}

// GetInvInertiaScale @ 143a6b5a0

double __thiscall
Chaos::FContactPairModifier::GetInvInertiaScale(FContactPairModifier *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = 0x354;
  if (param_1 != 0) {
    lVar1 = 0x358;
  }
  return (double)*(float *)((longlong)this->Constraint->CollisionMargins + lVar1 + -0x18);
}

// GetInvMassScale @ 143a6b5d0

double __thiscall
Chaos::FContactPairModifier::GetInvMassScale(FContactPairModifier *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = 0x34c;
  if (param_1 != 0) {
    lVar1 = 0x350;
  }
  return (double)*(float *)((longlong)this->Constraint->CollisionMargins + lVar1 + -0x18);
}

// GetIsCCD @ 143a6b600

bool __thiscall Chaos::FContactPairModifier::GetIsCCD(FContactPairModifier *this)

{
  return ((this->Constraint->Flags).Bits & 0x600) == 0x600;
}

// GetIsInitialContact @ 143a6b620

bool __thiscall Chaos::FContactPairModifier::GetIsInitialContact(FContactPairModifier *this)

{
  return (bool)((byte)((this->Constraint->Flags).Bits >> 0xd) & 1);
}

// GetIsProbe @ 143a6b640

bool __thiscall Chaos::FContactPairModifier::GetIsProbe(FContactPairModifier *this)

{
  return (bool)(*(byte *)((longlong)&this->Constraint->Flags + 1) & 1);
}

// GetNumContacts @ 143a6c020

int __thiscall Chaos::FContactPairModifier::GetNumContacts(FContactPairModifier *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->Constraint->ManifoldPoints).ArrayNum;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// GetOtherParticle @ 143a6c070

TGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::FContactPairModifier::GetOtherParticle
          (FContactPairModifier *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDCollisionConstraint *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pFVar1 = this->Constraint;
  if (param_1 == pFVar1->Particle[0]) {
    return pFVar1->Particle[1];
  }
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (param_1 == pFVar1->Particle[1]) {
    pTVar2 = pFVar1->Particle[0];
  }
  return pTVar2;
}

// GetParticleAngularVelocity @ 143a6c0a0

TVector<double,3> * __thiscall
Chaos::FContactPairModifier::GetParticleAngularVelocity
          (FContactPairModifier *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double,3> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  pFVar1 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x15f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar2 = pFVar1->Particle[param_1];
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(undefined1 *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    this_00 = pTVar2;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1523422602083696917>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                       ,0x115,"KinematicHandle");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar3)();
      return pTVar5;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  TKinematicGeometryParticleHandleImp<double,3,1>::GetW
            ((TKinematicGeometryParticleHandleImp<double,3,1> *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetParticlePair @ 143a6c170

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FContactPairModifier::GetParticlePair
          (FContactPairModifier *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> **ppTVar1;
  TGeometryParticleHandleImp<double,3,1> *local_18;
  TGeometryParticleHandleImp<double,3,1> *local_10;
  undefined8 local_8;
  
  ppTVar1 = &local_18;
  local_18 = this->Constraint->Particle[0];
  local_10 = this->Constraint->Particle[1];
  do {
    *(TGeometryParticleHandleImp<double,3,1> **)
     (((longlong)__return_storage_ptr__ - (longlong)&local_18) + (longlong)ppTVar1) = *ppTVar1;
    ppTVar1 = ppTVar1 + 1;
  } while (ppTVar1 != (TGeometryParticleHandleImp<double,3,1> **)&local_8);
  return __return_storage_ptr__;
}

// GetParticlePosition @ 143a6c1d0

TVector<double,3> * __thiscall
Chaos::FContactPairModifier::GetParticlePosition
          (FContactPairModifier *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  FPBDCollisionConstraint *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double,3> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  pFVar2 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x15f,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pTVar3 = pFVar2->Particle[param_1];
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)*(undefined1 *)((longlong)&pTVar3->_padding_ + 4)) {
    this_00 = pTVar3;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar7 = TParticles<double,3>::GetX
                       ((TParticles<double,3> *)pTVar3->_padding_,(int)pTVar3->_padding_);
  }
  else {
    pTVar7 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
  }
  uVar5 = *(undefined8 *)&pTVar7->field_0x8;
  uVar1 = *(undefined8 *)&pTVar7->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar7;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// GetParticleRotation @ 143a6c270

TRotation<double,3> * __thiscall
Chaos::FContactPairModifier::GetParticleRotation
          (FContactPairModifier *this,TRotation<double,3> *__return_storage_ptr__,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar2;
  bool bVar3;
  TRotation<double,3> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  pFVar1 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x15f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRotation<double,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  this_00 = pFVar1->Particle[param_1];
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
    this_01 = this_00;
  }
  if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TPBDRigidParticleHandleImp<double,3,1>::GetQ
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_01,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  TGeometryParticleHandleImp<double,3,1>::GetR(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetParticleVelocity @ 143a6c310

TVector<double,3> * __thiscall
Chaos::FContactPairModifier::GetParticleVelocity
          (FContactPairModifier *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double,3> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  pFVar1 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x15f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar2 = pFVar1->Particle[param_1];
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(undefined1 *)((longlong)&pTVar2->_padding_ + 4) != '\0') {
    this_00 = pTVar2;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1523422602083696878>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                       ,0xee,"KinematicHandle");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar3)();
      return pTVar5;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  TKinematicGeometryParticleHandleImp<double,3,1>::GetV
            ((TKinematicGeometryParticleHandleImp<double,3,1> *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRestitution @ 143a6f8e0

double __thiscall Chaos::FContactPairModifier::GetRestitution(FContactPairModifier *this)

{
  return (double)(this->Constraint->Material).Restitution;
}

// GetRestitutionThreshold @ 143a6f900

double __thiscall Chaos::FContactPairModifier::GetRestitutionThreshold(FContactPairModifier *this)

{
  return (double)(this->Constraint->Material).RestitutionThreshold;
}

// GetSeparation @ 143a6f920

double __thiscall Chaos::FContactPairModifier::GetSeparation(FContactPairModifier *this,int param_1)

{
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  GetWorldContactLocations
            (this,param_1,(TVector<double,3> *)&local_58,(TVector<double,3> *)&local_40);
  GetWorldNormal(this,(TVector<double,3> *)&local_28,param_1);
  return (local_58 - local_40) * local_28 + (local_50 - local_38) * local_20 +
         (local_48 - local_30) * local_18;
}

// GetShape @ 143a6f9a0

FShapeInstance * __thiscall
Chaos::FContactPairModifier::GetShape(FContactPairModifier *this,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  FShapeInstance *pFVar4;
  
  pFVar1 = this->Constraint;
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                       ,0x167,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShapeInstance *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar1->Shape[param_1];
}

// GetShapePair @ 143a6fa00

TVector<Chaos::FPerShapeData_const_*,2> * __thiscall
Chaos::FContactPairModifier::GetShapePair
          (FContactPairModifier *this,
          TVector<Chaos::FPerShapeData_const_*,2> *__return_storage_ptr__)

{
  FShapeInstance **ppFVar1;
  FShapeInstance *local_18;
  FShapeInstance *local_10;
  undefined8 local_8;
  
  ppFVar1 = &local_18;
  local_18 = this->Constraint->Shape[0];
  local_10 = this->Constraint->Shape[1];
  do {
    *(FShapeInstance **)
     (((longlong)__return_storage_ptr__ - (longlong)&local_18) + (longlong)ppFVar1) = *ppFVar1;
    ppFVar1 = ppFVar1 + 1;
  } while (ppFVar1 != (FShapeInstance **)&local_8);
  return __return_storage_ptr__;
}

// GetShapeToWorld @ 143a6fa60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRigidTransform<double,3> * __thiscall
Chaos::FContactPairModifier::GetShapeToWorld
          (FContactPairModifier *this,TRigidTransform<double,3> *__return_storage_ptr__,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRigidTransform<double,3> *pTVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  undefined1 auStack_138 [32];
  TGeometryParticleHandleImp<double,3,1> *local_118;
  TGeometryParticleHandleImp<double,3,1> *pTStack_110;
  TGeometryParticleHandleImp<double,3,1> *local_108 [2];
  TRigidTransform<double,3> local_f8;
  TRigidTransform<double,3> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118 = this->Constraint->Particle[0];
  pTStack_110 = this->Constraint->Particle[1];
  local_108[0] = local_118;
  local_108[1] = pTStack_110;
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                       ,0x86,L"");
    if (bVar3) {
code_r0x000143a6fb03:
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRigidTransform<double,3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  else if ((1 < param_1) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < NumElements",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                              ,0x87,L""), bVar3)) goto code_r0x000143a6fb03;
  pFVar1 = this->Constraint;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)*(undefined1 *)((longlong)&local_108[param_1]->_padding_ + 4)) {
    this_00 = local_108[param_1];
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if ((1 < (uint)param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                           ,0x2a0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRigidTransform<double,3> *)(*pcVar2)();
      return pTVar4;
    }
    pTVar4 = TGeometryParticleHandleImp<double,3,1>::GetTransformXR(local_108[param_1],&local_98);
  }
  else {
    if ((1 < (uint)param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                           ,0x2a0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TRigidTransform<double,3> *)(*pcVar2)();
      return pTVar4;
    }
    pTVar4 = TPBDRigidParticleHandleImp<double,3,1>::GetTransformPQ
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&local_f8);
  }
  TRigidTransform<double,3>::operator*
            (pFVar1->ImplicitTransform + param_1,__return_storage_ptr__,pTVar4);
  return __return_storage_ptr__;
}

// GetStaticFriction @ 143a70410

double __thiscall Chaos::FContactPairModifier::GetStaticFriction(FContactPairModifier *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->Constraint->Material).StaticFriction;
  fVar1 = (this->Constraint->Material).DynamicFriction;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return (double)fVar2;
}

// GetTargetSeparation @ 143a70430

double __thiscall
Chaos::FContactPairModifier::GetTargetSeparation(FContactPairModifier *this,int param_1)

{
  FManifoldPoint *pFVar1;
  
  pFVar1 = FPBDCollisionConstraint::GetManifoldPoint(this->Constraint,param_1);
  return (double)pFVar1->TargetPhi;
}

// GetWorldContactLocation @ 143a709e0

TVector<double,3> * __thiscall
Chaos::FContactPairModifier::GetWorldContactLocation
          (FContactPairModifier *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  GetWorldContactLocations
            (this,param_1,(TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38);
  dVar1 = __real_3fe0000000000000;
  dVar2 = (local_28 + local_10) * __real_3fe0000000000000;
  *(double *)__return_storage_ptr__ = (local_38 + local_20) * __real_3fe0000000000000;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar2;
  *(double *)&__return_storage_ptr__->field_0x8 = (local_30 + local_18) * dVar1;
  return __return_storage_ptr__;
}

// GetWorldContactLocations @ 143a70a60

void __thiscall
Chaos::FContactPairModifier::GetWorldContactLocations
          (FContactPairModifier *this,int param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  FFlags *pFVar1;
  int iVar2;
  FPBDCollisionConstraint *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<Chaos::FManifoldPoint> FVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar3 = this->Constraint;
  iVar2 = (pFVar3->ManifoldPoints).ArrayNum;
  FVar11 = (pFVar3->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar11 = (ForElementType<Chaos::FManifoldPoint>)&pFVar3->ManifoldPoints;
  }
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar9 = 0;
  if (param_1 < iVar2) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  auVar32 = *(undefined1 (*) [16])&pFVar3->ShapeWorldTransforms[0].field_0x10;
  dVar7 = *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x18;
  lVar10 = (longlong)param_1 * 0x6c;
  auVar37._0_8_ = (double)*(float *)(lVar10 + 8 + (longlong)FVar11);
  auVar37._8_8_ = 0;
  auVar12 = *(undefined1 (*) [16])pFVar3->ShapeWorldTransforms;
  auVar27 = blendpd(auVar12,auVar32,2);
  dVar18 = (double)*(float *)(lVar10 + 4 + (longlong)FVar11);
  dVar6 = (double)*(float *)(lVar10 + (longlong)FVar11);
  uVar33 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar15 = *(undefined1 (*) [16])pFVar3->ShapeWorldTransforms;
  auVar34._8_4_ = SUB84(dVar18,0);
  auVar34._0_8_ = dVar6;
  auVar34._12_4_ = uVar33;
  dVar20 = auVar32._0_8_;
  auVar35._0_8_ = auVar34._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar6;
  auVar35._8_8_ = auVar37._0_8_ * auVar12._8_8_ - dVar20 * dVar18;
  auVar23._8_4_ = SUB84(dVar18,0);
  auVar23._0_8_ = dVar6;
  auVar23._12_4_ = uVar33;
  auVar12 = blendpd(auVar23,auVar37,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar20 - auVar27._0_8_ * auVar37._0_8_;
  auVar13._8_8_ = auVar12._8_8_ * auVar32._8_8_ - auVar27._8_8_ * 0.0;
  auVar12 = blendpd(auVar35,auVar13,2);
  dVar5 = auVar35._8_8_ + auVar35._8_8_;
  dVar21 = auVar13._0_8_ + auVar13._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar36._0_8_ = auVar12._0_8_ + auVar12._0_8_;
  auVar36._8_8_ = auVar12._8_8_ + auVar12._8_8_;
  auVar28._8_4_ = SUB84(dVar21,0);
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = uVar33;
  auVar22._8_4_ = SUB84(dVar21,0);
  auVar22._0_8_ = dVar5;
  auVar22._12_4_ = uVar33;
  auVar29._0_8_ = auVar28._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar5;
  auVar29._8_8_ = auVar36._0_8_ * auVar15._8_8_ - dVar20 * dVar21;
  auVar23 = blendpd(auVar22,auVar36,2);
  auVar27._8_4_ = SUB84(auVar29._8_8_,0);
  auVar27._0_8_ = auVar29._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar12 = blendpd(auVar15,auVar32,2);
  auVar24._0_8_ = auVar23._0_8_ * dVar20 - auVar12._0_8_ * auVar36._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * auVar32._8_8_ - auVar12._8_8_ * auVar36._8_8_;
  auVar12 = blendpd(auVar29,auVar24,2);
  dVar18 = dVar21 * dVar7 + dVar18 + auVar24._0_8_ +
           *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x28;
  dVar21 = *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x30;
  auVar32._8_4_ = SUB84(dVar18,0);
  auVar32._0_8_ =
       dVar5 * dVar7 + dVar6 + auVar27._8_8_ +
       *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x20;
  auVar32._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])param_2 = auVar32;
  *(double *)&param_2->field_0x10 = dVar7 * auVar36._0_8_ + auVar37._0_8_ + auVar12._0_8_ + dVar21;
  auVar32 = *(undefined1 (*) [16])&pFVar3->ShapeWorldTransforms[1].field_0x10;
  dVar20 = *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x18;
  dVar7 = (double)*(float *)(lVar10 + 0x14 + (longlong)FVar11);
  auVar12 = *(undefined1 (*) [16])(pFVar3->ShapeWorldTransforms + 1);
  dVar6 = (double)*(float *)(lVar10 + 0xc + (longlong)FVar11);
  dVar19 = (double)*(float *)(lVar10 + 0x10 + (longlong)FVar11);
  auVar23 = blendpd(auVar12,auVar32,2);
  uVar33 = (undefined4)((ulonglong)dVar19 >> 0x20);
  auVar38._8_4_ = SUB84(dVar19,0);
  auVar38._0_8_ = dVar6;
  auVar38._12_4_ = uVar33;
  dVar21 = auVar32._0_8_;
  auVar39._0_8_ = auVar38._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar6;
  auVar39._8_8_ = dVar7 * auVar12._8_8_ - dVar21 * dVar19;
  auVar14._8_4_ = SUB84(dVar19,0);
  auVar14._0_8_ = dVar6;
  auVar14._12_4_ = uVar33;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar7;
  auVar15 = blendpd(auVar14,auVar15,2);
  auVar12 = *(undefined1 (*) [16])(pFVar3->ShapeWorldTransforms + 1);
  auVar16._0_8_ = auVar15._0_8_ * dVar21 - auVar23._0_8_ * dVar7;
  auVar16._8_8_ = auVar15._8_8_ * auVar32._8_8_ - auVar23._8_8_ * 0.0;
  auVar15 = blendpd(auVar39,auVar16,2);
  auVar40._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar40._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  dVar5 = auVar39._8_8_ + auVar39._8_8_;
  dVar18 = auVar16._0_8_ + auVar16._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar30._8_4_ = SUB84(dVar18,0);
  auVar30._0_8_ = dVar5;
  auVar30._12_4_ = uVar33;
  auVar25._8_4_ = SUB84(dVar18,0);
  auVar25._0_8_ = dVar5;
  auVar25._12_4_ = uVar33;
  auVar15 = blendpd(auVar25,auVar40,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
  auVar31._8_8_ = auVar40._0_8_ * auVar12._8_8_ - dVar21 * dVar18;
  auVar17._8_4_ = SUB84(auVar31._8_8_,0);
  auVar17._0_8_ = auVar31._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar12 = blendpd(auVar12,auVar32,2);
  auVar26._0_8_ = auVar15._0_8_ * dVar21 - auVar12._0_8_ * auVar40._0_8_;
  auVar26._8_8_ = auVar15._8_8_ * auVar32._8_8_ - auVar12._8_8_ * auVar40._8_8_;
  auVar32 = blendpd(auVar31,auVar26,2);
  dVar21 = *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x30;
  dVar18 = dVar18 * dVar20 + dVar19 + auVar26._0_8_ +
           *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x28;
  auVar12._8_4_ = SUB84(dVar18,0);
  auVar12._0_8_ =
       dVar5 * dVar20 + dVar6 + auVar17._8_8_ +
       *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x20;
  auVar12._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar12;
  *(double *)&param_3->field_0x10 = auVar40._0_8_ * dVar20 + dVar7 + auVar32._0_8_ + dVar21;
  return;
}

// GetWorldNormal @ 143a70da0

TVector<double,3> * __thiscall
Chaos::FContactPairModifier::GetWorldNormal
          (FContactPairModifier *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  FPBDCollisionConstraint *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TVector<double,3> *pTVar12;
  longlong lVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pFVar3 = this->Constraint;
  iVar2 = (pFVar3->ManifoldPoints).ArrayNum;
  FVar14 = (pFVar3->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar14 = (ForElementType<Chaos::FManifoldPoint>)&pFVar3->ManifoldPoints;
  }
  if (iVar2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TVector<double,3> *)(*pcVar4)();
      return pTVar12;
    }
  }
  uVar11 = 0;
  if (param_1 < iVar2) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TVector<double,3> *)(*pcVar4)();
      return pTVar12;
    }
  }
  auVar1 = *(undefined1 (*) [16])&pFVar3->ShapeWorldTransforms[1].field_0x10;
  dVar9 = *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x18;
  lVar13 = (longlong)param_1 * 0x6c;
  dVar8 = (double)*(float *)(lVar13 + 0x20 + (longlong)FVar14);
  auVar15 = *(undefined1 (*) [16])(pFVar3->ShapeWorldTransforms + 1);
  auVar22 = blendpd(auVar15,auVar1,2);
  dVar17 = (double)*(float *)(lVar13 + 0x1c + (longlong)FVar14);
  dVar7 = (double)*(float *)(lVar13 + 0x18 + (longlong)FVar14);
  uVar25 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar21 = *(undefined1 (*) [16])(pFVar3->ShapeWorldTransforms + 1);
  auVar26._8_4_ = SUB84(dVar17,0);
  auVar26._0_8_ = dVar7;
  auVar26._12_4_ = uVar25;
  dVar18 = auVar1._0_8_;
  auVar27._0_8_ = auVar26._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar7;
  auVar27._8_8_ = dVar8 * auVar15._8_8_ - dVar18 * dVar17;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar7;
  auVar20._12_4_ = uVar25;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar8;
  auVar15 = blendpd(auVar20,auVar15,2);
  auVar16._0_8_ = auVar15._0_8_ * dVar18 - auVar22._0_8_ * dVar8;
  auVar16._8_8_ = auVar15._8_8_ * auVar1._8_8_ - auVar22._8_8_ * 0.0;
  auVar15 = blendpd(auVar27,auVar16,2);
  auVar28._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar28._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  dVar5 = auVar27._8_8_ + auVar27._8_8_;
  dVar6 = auVar16._0_8_ + auVar16._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._0_8_ = dVar5;
  auVar23._12_4_ = uVar25;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = uVar25;
  auVar20 = blendpd(auVar19,auVar28,2);
  auVar24._0_8_ = auVar23._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar5;
  auVar24._8_8_ = auVar28._0_8_ * auVar21._8_8_ - dVar18 * dVar6;
  auVar22._8_4_ = SUB84(auVar24._8_8_,0);
  auVar22._0_8_ = auVar24._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
  auVar15 = blendpd(auVar21,auVar1,2);
  auVar21._0_8_ = auVar20._0_8_ * dVar18 - auVar15._0_8_ * auVar28._0_8_;
  auVar21._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar15._8_8_ * auVar28._8_8_;
  auVar15 = blendpd(auVar24,auVar21,2);
  dVar6 = dVar6 * dVar9 + dVar17 + auVar21._0_8_;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar5 * dVar9 + dVar7 + auVar22._8_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = auVar28._0_8_ * dVar9 + dVar8 + auVar15._0_8_;
  return __return_storage_ptr__;
}

// IsContactPointDisabled @ 143a828c0

bool __thiscall
Chaos::FContactPairModifier::IsContactPointDisabled(FContactPairModifier *this,int param_1)

{
  FManifoldPoint *pFVar1;
  
  pFVar1 = FPBDCollisionConstraint::GetManifoldPoint(this->Constraint,param_1);
  return (bool)((pFVar1->Flags).Bits & 1);
}

// IsEdgeContactPoint @ 143a828e0

bool __thiscall
Chaos::FContactPairModifier::IsEdgeContactPoint(FContactPairModifier *this,int param_1)

{
  FManifoldPoint *pFVar1;
  
  pFVar1 = FPBDCollisionConstraint::GetManifoldPoint(this->Constraint,param_1);
  return (pFVar1->ContactPoint).ContactType == EdgeEdge;
}

// ModifyDynamicFriction @ 143a842e0

void __thiscall
Chaos::FContactPairModifier::ModifyDynamicFriction(FContactPairModifier *this,double param_1)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  (this->Constraint->Material).DynamicFriction = (float)param_1;
  return;
}

// ModifyInvInertiaScale @ 143a84310

void __thiscall
Chaos::FContactPairModifier::ModifyInvInertiaScale
          (FContactPairModifier *this,double param_1,int param_2)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  if (param_2 == 0) {
    (this->Constraint->Material).InvInertiaScale0 = (float)param_1;
    return;
  }
  (this->Constraint->Material).InvInertiaScale1 = (float)param_1;
  return;
}

// ModifyInvMassScale @ 143a84350

void __thiscall
Chaos::FContactPairModifier::ModifyInvMassScale
          (FContactPairModifier *this,double param_1,int param_2)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  if (param_2 == 0) {
    (this->Constraint->Material).InvMassScale0 = (float)param_1;
    return;
  }
  (this->Constraint->Material).InvMassScale1 = (float)param_1;
  return;
}

// ModifyParticleAngularVelocity @ 143a84390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FContactPairModifier::ModifyParticleAngularVelocity
          (FContactPairModifier *this,TVector<double,3> *param_1,int param_2)

{
  FFlags *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FPBDCollisionConstraint *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  EObjectStateType EVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  TVector<double,3> *pTVar14;
  TRotation<double,3> *pTVar15;
  longlong lVar16;
  TVector<double,3> local_a8;
  TVector<double,3> local_90;
  TRotation<double,3> local_78;
  TRotation<double,3> local_58 [2];
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar6 = this->Constraint;
  if ((1 < (uint)param_2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                          ,0x15f,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar7 = pFVar6->Particle[param_2];
  pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&pTVar7->_padding_ + 4) != '\0') {
    pTVar13 = pTVar7;
  }
  if (pTVar13 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1523422602083696932>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                        ,0x124,"KinematicHandle");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    uVar5 = (uint)pTVar13->_padding_;
    lVar16 = (longlong)(int)uVar5;
    dVar2 = *(double *)param_1;
    dVar3 = *(double *)&param_1->field_0x8;
    dVar4 = *(double *)&param_1->field_0x10;
    lVar8 = pTVar13->_padding_;
    uVar10 = 0;
    if ((int)uVar5 < *(int *)(lVar8 + 0x2b0)) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar8 = *(longlong *)(lVar8 + 0x2a8);
    *(float *)(lVar8 + lVar16 * 0xc) = (float)dVar2;
    *(float *)(lVar8 + 4 + lVar16 * 0xc) = (float)dVar3;
    *(float *)(lVar8 + 8 + lVar16 * 0xc) = (float)dVar4;
    pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
      pTVar13 = pTVar7;
    }
    if ((pTVar13 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       ((EVar12 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar13), EVar12 == Dynamic
        || (EVar12 == Sleeping)))) {
      dVar2 = this->Modifier->Dt;
      pTVar14 = TKinematicGeometryParticleHandleImp<double,3,1>::GetW
                          ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar13,&local_90);
      local_a8._0_4_ = *(uint *)pTVar14 ^ (uint)__xmm_80000000000000008000000000000000;
      local_a8._4_4_ = *(uint *)&pTVar14->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
      local_a8._8_4_ = *(uint *)&pTVar14->field_0x8 ^ _UNK_15066df78;
      local_a8._12_4_ = *(uint *)&pTVar14->field_0xc ^ _UNK_15066df7c;
      local_a8._16_4_ =
           (uint)*(undefined8 *)&pTVar14->field_0x10 ^ (uint)__xmm_80000000000000008000000000000000;
      local_a8._20_4_ =
           (uint)((ulonglong)*(undefined8 *)&pTVar14->field_0x10 >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
      pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::GetQ
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar13,&local_78);
      pTVar15 = TRotation<double,3>::IntegrateRotationWithAngularVelocity
                          (local_58,pTVar15,&local_a8,dVar2);
      TGeometryParticleHandleImp<double,3,1>::SetR(pTVar13,pTVar15,false);
    }
  }
  return;
}

// ModifyParticlePosition @ 143a845b0

void __thiscall
Chaos::FContactPairModifier::ModifyParticlePosition
          (FContactPairModifier *this,TVector<double,3> *param_1,bool param_2,int param_3)

{
  FFlags *pFVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  FPBDCollisionConstraint *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  EObjectStateType EVar15;
  TVector<double,3> *pTVar16;
  TVector<double,3> *pTVar17;
  uint uVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  double dVar20;
  FPBDCollisionConstraint *local_res8;
  FPBDCollisionConstraint *local_res20;
  undefined1 local_78 [16];
  double local_68;
  TVector<double,3> local_60 [2];
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar6 = this->Constraint;
  if (1 < (uint)param_3) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                        ,0x15f,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_res8 = this->Constraint;
  pTVar7 = pFVar6->Particle[param_3];
  TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::FPBDCollisionConstraint_*>
            (&this->Modifier->NeedsManifoldUpdate,&local_res20,(bool *)&local_res8);
  bVar4 = *(byte *)((longlong)&pTVar7->_padding_ + 4);
  pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < bVar4) {
    pTVar19 = pTVar7;
  }
  if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (bVar4 != 0) {
      pTVar19 = pTVar7;
    }
    if (pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1523422602083697016>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                          ,0x178,"false");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      TGeometryParticleHandleImp<double,3,1>::SetX(pTVar19,param_1,false);
      UpdateConstraintShapeTransforms(this);
    }
  }
  else {
    EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
    if ((EVar15 == Dynamic) || (EVar15 == Sleeping)) {
      TPBDRigidParticleHandleImp<double,3,1>::SetP
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19,param_1);
      if (param_2) {
        pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
        pTVar17 = TKinematicGeometryParticleHandleImp<double,3,1>::GetV
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar19,local_60);
        uVar5 = (uint)pTVar19->_padding_;
        dVar2 = *(double *)pTVar16;
        lVar8 = pTVar19->_padding_;
        dVar12 = *(double *)&pTVar16->field_0x8;
        dVar20 = this->Modifier->Dt;
        dVar3 = *(double *)pTVar17;
        dVar13 = *(double *)&pTVar17->field_0x8;
        uVar18 = 0;
        if ((int)uVar5 < *(int *)(lVar8 + 0x30)) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        dVar11 = *(double *)&pTVar16->field_0x10 - dVar20 * *(double *)&pTVar17->field_0x10;
        if (uVar18 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar8 = *(longlong *)(lVar8 + 0x28);
        *(double *)(lVar8 + (longlong)(int)uVar5 * 0x18) = dVar2 - dVar20 * dVar3;
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar12 - dVar20 * dVar13;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(lVar8 + 8 + (longlong)(int)uVar5 * 0x18) = auVar10;
        UpdateConstraintShapeTransforms(this);
      }
      else {
        if (0.0 < this->Modifier->Dt) {
          pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
          pTVar17 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pTVar19->_padding_,(int)pTVar19->_padding_);
          dVar20 = __real_3ff0000000000000 / this->Modifier->Dt;
          dVar2 = (*(double *)&pTVar16->field_0x8 - *(double *)&pTVar17->field_0x8) * dVar20;
          local_68 = (*(double *)&pTVar16->field_0x10 - *(double *)&pTVar17->field_0x10) * dVar20;
          local_78._8_4_ = SUB84(dVar2,0);
          local_78._0_8_ = (*(double *)pTVar16 - *(double *)pTVar17) * dVar20;
          local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          TKinematicGeometryParticleHandleImp<double,3,1>::SetV
                    ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar19,
                     (TVector<double,3> *)local_78,false);
        }
        UpdateConstraintShapeTransforms(this);
      }
    }
    else {
      TGeometryParticleHandleImp<double,3,1>::SetX(pTVar19,param_1,false);
      TPBDRigidParticleHandleImp<double,3,1>::SetP
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19,param_1);
      UpdateConstraintShapeTransforms(this);
    }
  }
  return;
}

// ModifyParticleRotation @ 143a84850

void __thiscall
Chaos::FContactPairModifier::ModifyParticleRotation
          (FContactPairModifier *this,TRotation<double,3> *param_1,bool param_2,int param_3)

{
  FFlags *pFVar1;
  undefined8 *puVar2;
  double dVar3;
  byte bVar4;
  FPBDCollisionConstraint *pFVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  EObjectStateType EVar11;
  TRotation<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FPBDCollisionConstraint *local_res8;
  FPBDCollisionConstraint *local_res20;
  TVector<float,3> local_e8;
  TVector<float,3> local_dc;
  undefined8 local_d0;
  uint local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  TRotation<float,3> local_a8;
  TRotation<float,3> local_98;
  TRotation<float,3> local_88;
  TRotation<float,3> local_78 [5];
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar5 = this->Constraint;
  if (1 < (uint)param_3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                        ,0x15f,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_res8 = this->Constraint;
  pTVar6 = pFVar5->Particle[param_3];
  TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::FPBDCollisionConstraint_*>
            (&this->Modifier->NeedsManifoldUpdate,&local_res20,(bool *)&local_res8);
  bVar4 = *(byte *)((longlong)&pTVar6->_padding_ + 4);
  pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < bVar4) {
    pTVar15 = pTVar6;
  }
  if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (bVar4 != 0) {
      pTVar15 = pTVar6;
    }
    if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1523422602083697081>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                          ,0x1b9,"false");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      TGeometryParticleHandleImp<double,3,1>::SetR(pTVar15,param_1,false);
      UpdateConstraintShapeTransforms(this);
    }
  }
  else {
    EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
    if ((EVar11 == Dynamic) || (EVar11 == Sleeping)) {
      TPBDRigidParticleHandleImp<double,3,1>::SetQ
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15,param_1);
      dVar3 = this->Modifier->Dt;
      uVar16 = 0;
      if (param_2) {
        uVar13 = (uint)pTVar15->_padding_;
        lVar7 = pTVar15->_padding_;
        uVar14 = uVar16;
        if ((int)uVar13 < *(int *)(lVar7 + 0x2b0)) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar7 = *(longlong *)(lVar7 + 0x2a8);
        uVar14 = (uint)pTVar15->_padding_;
        lVar8 = pTVar15->_padding_;
        local_d0 = *(undefined8 *)(lVar7 + (longlong)(int)uVar13 * 0xc);
        local_c8 = *(uint *)(lVar7 + 8 + (longlong)(int)uVar13 * 0xc);
        local_e8._0_4_ = (uint)local_d0 ^ __xmm_80000000800000008000000080000000;
        local_e8._4_4_ =
             (uint)((ulonglong)local_d0 >> 0x20) ^ __xmm_80000000800000008000000080000000;
        local_e8._8_4_ = local_c8 ^ __xmm_80000000800000008000000080000000;
        if ((int)uVar14 < *(int *)(lVar8 + 0x568)) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        puVar2 = (undefined8 *)(*(longlong *)(lVar8 + 0x560) + (longlong)(int)uVar14 * 0x10);
        local_a8._0_8_ = *puVar2;
        local_a8._8_8_ = puVar2[1];
        pTVar12 = TRotation<float,3>::IntegrateRotationWithAngularVelocity
                            (&local_88,&local_a8,&local_e8,(float)dVar3);
        TGeometryParticleHandleImp<double,3,1>::SetRf(pTVar15,pTVar12,false);
      }
      else if (0.0 < dVar3) {
        pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::GetQf
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15,local_78);
        uVar13 = (uint)pTVar15->_padding_;
        lVar7 = pTVar15->_padding_;
        uVar14 = uVar16;
        if ((int)uVar13 < *(int *)(lVar7 + 0x50)) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar13 * 0x10);
        local_98._0_8_ = *puVar2;
        local_98._8_8_ = puVar2[1];
        TRotation<float,3>::CalculateAngularVelocity1(&local_dc,&local_98,pTVar12,(float)dVar3);
        uVar13 = (uint)pTVar15->_padding_;
        lVar7 = pTVar15->_padding_;
        if ((int)uVar13 < *(int *)(lVar7 + 0x2b0)) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar7 = *(longlong *)(lVar7 + 0x2a8);
        *(undefined8 *)(lVar7 + (longlong)(int)uVar13 * 0xc) = local_dc._0_8_;
        *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar13 * 0xc) = local_dc._8_4_;
      }
    }
    else {
      lVar7 = pTVar15->_padding_;
      uVar16 = (uint)pTVar15->_padding_;
      fVar17 = (float)*(double *)param_1;
      uVar13 = 0;
      if ((int)uVar16 < *(int *)(lVar7 + 0x50)) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      fVar18 = (float)*(double *)&param_1->field_0x8;
      fVar19 = (float)*(double *)&param_1->field_0x10;
      fVar20 = (float)*(double *)&param_1->field_0x18;
      local_c0 = fVar17;
      fStack_bc = fVar18;
      fStack_b8 = fVar19;
      fStack_b4 = fVar20;
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar16 * 0x10);
      *puVar2 = CONCAT44(fStack_bc,local_c0);
      puVar2[1] = CONCAT44(fStack_b4,fStack_b8);
      uVar16 = (uint)pTVar15->_padding_;
      lVar7 = pTVar15->_padding_;
      uVar13 = 0;
      if ((int)uVar16 < *(int *)(lVar7 + 0x568)) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      local_c0 = fVar17;
      fStack_bc = fVar18;
      fStack_b8 = fVar19;
      fStack_b4 = fVar20;
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      puVar2 = (undefined8 *)(*(longlong *)(lVar7 + 0x560) + (longlong)(int)uVar16 * 0x10);
      *puVar2 = CONCAT44(fStack_bc,local_c0);
      puVar2[1] = CONCAT44(fStack_b4,fStack_b8);
    }
    UpdateConstraintShapeTransforms(this);
  }
  return;
}

// ModifyParticleVelocity @ 143a84d50

void __thiscall
Chaos::FContactPairModifier::ModifyParticleVelocity
          (FContactPairModifier *this,TVector<double,3> *param_1,int param_2)

{
  FFlags *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FPBDCollisionConstraint *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  EObjectStateType EVar15;
  TVector<double,3> *pTVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  uint uVar18;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar6 = this->Constraint;
  if (1 < (uint)param_2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                        ,0x15f,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar7 = pFVar6->Particle[param_2];
  pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(undefined1 *)((longlong)&pTVar7->_padding_ + 4) != '\0') {
    pTVar17 = pTVar7;
  }
  if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1523422602083696893>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\ContactModification.cpp"
                        ,0xfd,"KinematicHandle");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    TKinematicGeometryParticleHandleImp<double,3,1>::SetV
              ((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar17,param_1,false);
    pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)*(undefined1 *)((longlong)&pTVar7->_padding_ + 4)) {
      pTVar17 = pTVar7;
    }
    if (pTVar17 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar15 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar17);
      if ((EVar15 == Dynamic) || (EVar15 == Sleeping)) {
        pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar17);
        uVar5 = (uint)pTVar17->_padding_;
        lVar8 = pTVar17->_padding_;
        dVar2 = *(double *)pTVar16;
        dVar12 = *(double *)&pTVar16->field_0x8;
        dVar3 = this->Modifier->Dt;
        dVar4 = *(double *)param_1;
        uVar18 = 0;
        if ((int)uVar5 < *(int *)(lVar8 + 0x30)) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        dVar13 = *(double *)&param_1->field_0x8;
        dVar11 = *(double *)&pTVar16->field_0x10 - dVar3 * *(double *)&param_1->field_0x10;
        if (uVar18 == 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar8 = *(longlong *)(lVar8 + 0x28);
        *(double *)(lVar8 + (longlong)(int)uVar5 * 0x18) = dVar2 - dVar3 * dVar4;
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = dVar12 - dVar3 * dVar13;
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(lVar8 + 8 + (longlong)(int)uVar5 * 0x18) = auVar10;
      }
    }
  }
  return;
}

// ModifyRestitution @ 143a84f00

void __thiscall
Chaos::FContactPairModifier::ModifyRestitution(FContactPairModifier *this,double param_1)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  (this->Constraint->Material).Restitution = (float)param_1;
  return;
}

// ModifyRestitutionThreshold @ 143a84f30

void __thiscall
Chaos::FContactPairModifier::ModifyRestitutionThreshold(FContactPairModifier *this,double param_1)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  (this->Constraint->Material).RestitutionThreshold = (float)param_1;
  return;
}

// ModifyStaticFriction @ 143a84f60

void __thiscall
Chaos::FContactPairModifier::ModifyStaticFriction(FContactPairModifier *this,double param_1)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  (this->Constraint->Material).StaticFriction = (float)param_1;
  return;
}

// ModifyTargetSeparation @ 143a84f90

void __thiscall
Chaos::FContactPairModifier::ModifyTargetSeparation
          (FContactPairModifier *this,double param_1,int param_2)

{
  FFlags *pFVar1;
  FManifoldPoint *pFVar2;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar2 = FPBDCollisionConstraint::GetManifoldPoint(this->Constraint,param_2);
  pFVar2->TargetPhi = (float)param_1;
  return;
}

// ModifyWorldContactLocations @ 143a84fd0

void __thiscall
Chaos::FContactPairModifier::ModifyWorldContactLocations
          (FContactPairModifier *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          int param_3)

{
  FFlags *pFVar1;
  int iVar2;
  FPBDCollisionConstraint *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  ForElementType<Chaos::FManifoldPoint> FVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  FPBDCollisionConstraint *local_res8;
  FPBDCollisionConstraint *local_res20;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  pFVar3 = this->Constraint;
  iVar2 = (pFVar3->ManifoldPoints).ArrayNum;
  FVar16 = (pFVar3->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar16 = (ForElementType<Chaos::FManifoldPoint>)&pFVar3->ManifoldPoints;
  }
  if (iVar2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar14 = 0;
  if (param_3 < iVar2) {
    uVar14 = (uint)~param_3 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->Constraint;
  dVar17 = *(double *)&param_1->field_0x10 - *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x30;
  dVar10 = *(double *)param_1 - *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x20;
  dVar11 = *(double *)&param_1->field_0x8 - *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x28;
  uVar36 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar34 = *(double *)pFVar3->ShapeWorldTransforms *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar35 = *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar37._8_4_ = SUB84(dVar11,0);
  auVar37._0_8_ = dVar10;
  auVar37._12_4_ = uVar36;
  dVar7 = *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = *(double *)&pFVar3->ShapeWorldTransforms[0].field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar31._8_4_ = SUB84(dVar35,0);
  auVar31._0_8_ = dVar34;
  auVar31._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar7;
  auVar19._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar32 = blendpd(auVar31,auVar19,2);
  auVar18._8_4_ = SUB84(dVar11,0);
  auVar18._0_8_ = dVar10;
  auVar18._12_4_ = uVar36;
  auVar38._0_8_ = auVar37._8_8_ * dVar34 - dVar35 * dVar10;
  auVar38._8_8_ = dVar17 * dVar35 - dVar7 * dVar11;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar17;
  auVar19 = blendpd(auVar18,auVar9,2);
  lVar15 = (longlong)param_3 * 0x6c;
  auVar20._0_8_ = auVar19._0_8_ * dVar7 - auVar32._0_8_ * dVar17;
  auVar20._8_8_ = auVar19._8_8_ * dVar8 - auVar32._8_8_ * 0.0;
  auVar19 = blendpd(auVar38,auVar20,2);
  dVar5 = auVar38._8_8_ + auVar38._8_8_;
  dVar6 = auVar20._0_8_ + auVar20._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar39._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar39._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar27._8_4_ = SUB84(dVar6,0);
  auVar27._0_8_ = dVar5;
  auVar27._12_4_ = uVar36;
  auVar21._8_4_ = SUB84(dVar6,0);
  auVar21._0_8_ = dVar5;
  auVar21._12_4_ = uVar36;
  auVar19 = blendpd(auVar21,auVar39,2);
  auVar28._0_8_ = auVar27._8_8_ * dVar34 - dVar5 * dVar35;
  auVar28._8_8_ = auVar39._0_8_ * dVar35 - dVar6 * dVar7;
  auVar22._0_8_ = auVar19._0_8_ * dVar7 - auVar39._0_8_ * auVar32._0_8_;
  auVar22._8_8_ = auVar19._8_8_ * dVar8 - auVar39._8_8_ * auVar32._8_8_;
  auVar19 = blendpd(auVar28,auVar22,2);
  *(float *)(lVar15 + (longlong)FVar16) = (float)(dVar5 * dVar8 + dVar10 + auVar28._8_8_);
  *(float *)(lVar15 + 4 + (longlong)FVar16) = (float)(dVar6 * dVar8 + dVar11 + auVar22._0_8_);
  *(float *)(lVar15 + 8 + (longlong)FVar16) =
       (float)(auVar39._0_8_ * dVar8 + dVar17 + auVar19._0_8_);
  pFVar3 = this->Constraint;
  dVar7 = *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar34 = *(double *)(pFVar3->ShapeWorldTransforms + 1) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar35 = *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar17 = *(double *)&param_2->field_0x10 - *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x30;
  dVar10 = *(double *)param_2 - *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x20;
  dVar11 = *(double *)&param_2->field_0x8 - *(double *)&pFVar3->ShapeWorldTransforms[1].field_0x28;
  uVar36 = (undefined4)((ulonglong)dVar11 >> 0x20);
  auVar40._8_4_ = SUB84(dVar11,0);
  auVar40._0_8_ = dVar10;
  auVar40._12_4_ = uVar36;
  auVar33._8_4_ = SUB84(dVar35,0);
  auVar33._0_8_ = dVar34;
  auVar33._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  auVar23._8_4_ = SUB84(dVar11,0);
  auVar23._0_8_ = dVar10;
  auVar23._12_4_ = uVar36;
  auVar41._0_8_ = auVar40._8_8_ * dVar34 - dVar35 * dVar10;
  auVar41._8_8_ = dVar17 * dVar35 - dVar7 * dVar11;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar17;
  auVar19 = blendpd(auVar23,auVar12,2);
  auVar32._8_4_ = SUB84(dVar8,0);
  auVar32._0_8_ = dVar7;
  auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar32 = blendpd(auVar33,auVar32,2);
  auVar24._0_8_ = auVar19._0_8_ * dVar7 - auVar32._0_8_ * dVar17;
  auVar24._8_8_ = auVar19._8_8_ * dVar8 - auVar32._8_8_ * 0.0;
  auVar19 = blendpd(auVar41,auVar24,2);
  dVar5 = auVar41._8_8_ + auVar41._8_8_;
  dVar6 = auVar24._0_8_ + auVar24._0_8_;
  uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar42._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar42._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar29._8_4_ = SUB84(dVar6,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = uVar36;
  auVar25._8_4_ = SUB84(dVar6,0);
  auVar25._0_8_ = dVar5;
  auVar25._12_4_ = uVar36;
  auVar19 = blendpd(auVar25,auVar42,2);
  auVar30._0_8_ = auVar29._8_8_ * dVar34 - dVar5 * dVar35;
  auVar30._8_8_ = auVar42._0_8_ * dVar35 - dVar6 * dVar7;
  auVar26._0_8_ = auVar19._0_8_ * dVar7 - auVar42._0_8_ * auVar32._0_8_;
  auVar26._8_8_ = auVar19._8_8_ * dVar8 - auVar42._8_8_ * auVar32._8_8_;
  auVar19 = blendpd(auVar30,auVar26,2);
  *(float *)(lVar15 + 0xc + (longlong)FVar16) = (float)(dVar5 * dVar8 + dVar10 + auVar30._8_8_);
  *(float *)(lVar15 + 0x10 + (longlong)FVar16) = (float)(dVar6 * dVar8 + dVar11 + auVar26._0_8_);
  *(float *)(lVar15 + 0x14 + (longlong)FVar16) =
       (float)(auVar42._0_8_ * dVar8 + dVar17 + auVar19._0_8_);
  *(undefined8 *)(lVar15 + 0x3c + (longlong)FVar16) = *(undefined8 *)(lVar15 + (longlong)FVar16);
  *(undefined4 *)(lVar15 + 0x44 + (longlong)FVar16) = *(undefined4 *)(lVar15 + 8 + (longlong)FVar16)
  ;
  *(undefined8 *)(lVar15 + 0x48 + (longlong)FVar16) =
       *(undefined8 *)(lVar15 + 0xc + (longlong)FVar16);
  *(undefined4 *)(lVar15 + 0x50 + (longlong)FVar16) =
       *(undefined4 *)(lVar15 + 0x14 + (longlong)FVar16);
  pFVar3 = this->Constraint;
  (pFVar3->SavedManifoldPoints).ArrayNum = 0;
  if ((pFVar3->SavedManifoldPoints).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
              (0x1c,4,0,&(pFVar3->SavedManifoldPoints).AllocatorInstance,0,
               &(pFVar3->SavedManifoldPoints).ArrayMax);
  }
  local_res8 = this->Constraint;
  TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::FPBDCollisionConstraint_*>
            (&this->Modifier->NeedsManifoldUpdate,&local_res20,(bool *)&local_res8);
  return;
}

// ModifyWorldNormal @ 143a85400

void __thiscall
Chaos::FContactPairModifier::ModifyWorldNormal
          (FContactPairModifier *this,TVector<double,3> *param_1,int param_2)

{
  FFlags *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  FPBDCollisionConstraint *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  double dVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  FPBDCollisionConstraint *local_res8;
  FPBDCollisionConstraint *local_res18;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  GetWorldContactLocations
            (this,param_2,(TVector<double,3> *)&local_c8,(TVector<double,3> *)&local_b0);
  pFVar5 = this->Constraint;
  iVar4 = (pFVar5->ManifoldPoints).ArrayNum;
  FVar14 = (pFVar5->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar14 = (ForElementType<Chaos::FManifoldPoint>)&pFVar5->ManifoldPoints;
  }
  if (iVar4 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar12 = 0;
  if (param_2 < iVar4) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  auVar3 = *(undefined1 (*) [16])param_1;
  pFVar5 = this->Constraint;
  dVar2 = *(double *)&param_1->field_0x10;
  lVar13 = (longlong)param_2 * 0x6c;
  dVar9 = *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar10 = *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar22 = *(double *)(pFVar5->ShapeWorldTransforms + 1) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar23 = *(double *)&pFVar5->ShapeWorldTransforms[1].field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar2;
  auVar15 = blendpd(auVar3,auVar15,2);
  dVar28 = auVar3._8_8_;
  auVar21._8_4_ = SUB84(dVar23,0);
  auVar21._0_8_ = dVar22;
  auVar21._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar26._8_4_ = SUB84(dVar10,0);
  auVar26._0_8_ = dVar9;
  auVar26._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar21 = blendpd(auVar21,auVar26,2);
  auVar25._0_8_ = dVar28 * dVar22 - dVar23 * auVar3._0_8_;
  auVar25._8_8_ = dVar2 * dVar23 - dVar9 * dVar28;
  auVar16._0_8_ = auVar15._0_8_ * dVar9 - auVar21._0_8_ * dVar2;
  auVar16._8_8_ = auVar15._8_8_ * dVar10 - auVar21._8_8_ * 0.0;
  auVar26 = blendpd(auVar25,auVar16,2);
  dVar7 = auVar25._8_8_ + auVar25._8_8_;
  dVar8 = auVar16._0_8_ + auVar16._0_8_;
  uVar24 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar27._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar27._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar7;
  auVar19._12_4_ = uVar24;
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = uVar24;
  auVar26 = blendpd(auVar17,auVar27,2);
  auVar20._0_8_ = auVar19._8_8_ * dVar22 - dVar7 * dVar23;
  auVar20._8_8_ = auVar27._0_8_ * dVar23 - dVar8 * dVar9;
  auVar18._0_8_ = auVar26._0_8_ * dVar9 - auVar27._0_8_ * auVar21._0_8_;
  auVar18._8_8_ = auVar26._8_8_ * dVar10 - auVar27._8_8_ * auVar21._8_8_;
  auVar26 = blendpd(auVar20,auVar18,2);
  *(float *)(lVar13 + 0x18 + (longlong)FVar14) =
       (float)(dVar7 * dVar10 + auVar3._0_8_ + auVar20._8_8_);
  *(float *)(lVar13 + 0x1c + (longlong)FVar14) = (float)(dVar8 * dVar10 + dVar28 + auVar18._0_8_);
  *(float *)(lVar13 + 0x20 + (longlong)FVar14) =
       (float)(auVar27._0_8_ * dVar10 + dVar2 + auVar26._0_8_);
  *(float *)(lVar13 + 0x24 + (longlong)FVar14) =
       (float)((local_c0 - local_a8) * *(double *)&param_1->field_0x8 +
               (local_c8 - local_b0) * *(double *)param_1 +
              (local_b8 - local_a0) * *(double *)&param_1->field_0x10);
  local_res8 = this->Constraint;
  TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::FPBDCollisionConstraint_*>
            (&this->Modifier->NeedsManifoldUpdate,&local_res18,(bool *)&local_res8);
  return;
}

// SetContactPointDisabled @ 143a91c50

void __thiscall
Chaos::FContactPairModifier::SetContactPointDisabled(FContactPairModifier *this,int param_1)

{
  FPBDCollisionConstraint *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<Chaos::FManifoldPoint> FVar6;
  ForElementType<Chaos::FManifoldPoint> FVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  pFVar1 = this->Constraint;
  uVar8 = 0;
  if (param_1 < (pFVar1->ManifoldPoints).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar7 = (pFVar1->ManifoldPoints).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<Chaos::FManifoldPoint>)0x0) {
    FVar7 = (ForElementType<Chaos::FManifoldPoint>)&pFVar1->ManifoldPoints;
  }
  iVar9 = 0;
  ((uchar *)((longlong)FVar7 + 0x30))[(longlong)param_1 * 0x6c] =
       ((uchar *)((longlong)FVar7 + 0x30))[(longlong)param_1 * 0x6c] | 1;
  if (((*(byte *)&pFVar1->Flags >> 1 & 1) == 0) &&
     (uVar8 = 0, 0 < (pFVar1->ManifoldPoints).ArrayNum)) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (pFVar1->ManifoldPoints).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar7 = (pFVar1->ManifoldPoints).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<Chaos::FManifoldPoint>)&pFVar1->ManifoldPoints;
      if (FVar7 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
        FVar6 = FVar7;
      }
      iVar3 = iVar9 + 1;
      if ((*(byte *)(lVar10 + 0x30 + (longlong)FVar6) & 1) != 0) {
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x6c;
    } while ((int)uVar8 < (pFVar1->ManifoldPoints).ArrayNum);
    if (iVar9 != 0) {
      return;
    }
  }
  (pFVar1->Flags).Bits = (pFVar1->Flags).Bits | 2;
  return;
}

// SetIsInitialContact @ 143a91f40

void __thiscall
Chaos::FContactPairModifier::SetIsInitialContact(FContactPairModifier *this,bool param_1)

{
  FFlags *pFVar1;
  
  pFVar1 = &this->Constraint->Flags;
  pFVar1->Bits = pFVar1->Bits | 0x800;
  (this->Constraint->Flags).Bits = (ushort)param_1 << 0xd | (this->Constraint->Flags).Bits & 0xdfff;
  return;
}

// UpdateConstraintShapeTransforms @ 143a98390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FContactPairModifier::UpdateConstraintShapeTransforms(FContactPairModifier *this)

{
  FPBDCollisionConstraint *pFVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  bool bVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  undefined1 auStack_178 [32];
  FGenericParticleHandleImp local_158 [2];
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar1 = this->Constraint;
  pTVar2 = pFVar1->Particle[0];
  local_158[0].MHandle = pTVar2;
  bVar3 = FGenericParticleHandleImp::IsDynamic(local_158);
  if (bVar3) {
    pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
      pTVar4 = pTVar2;
    }
    TPBDRigidParticleHandleImp<double,3,1>::GetTransformPQ
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar4,
               (TRigidTransform<double,3> *)&local_148);
  }
  else {
    TGeometryParticleHandleImp<double,3,1>::GetTransformXR
              (pTVar2,(TRigidTransform<double,3> *)&local_148);
  }
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_e8,(TTransform<double> *)pFVar1->ImplicitTransform,&local_148);
  pFVar1 = this->Constraint;
  pTVar2 = pFVar1->Particle[1];
  local_158[0].MHandle = pTVar2;
  bVar3 = FGenericParticleHandleImp::IsDynamic(local_158);
  if (bVar3) {
    pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
      pTVar4 = pTVar2;
    }
    TPBDRigidParticleHandleImp<double,3,1>::GetTransformPQ
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar4,
               (TRigidTransform<double,3> *)&local_88);
  }
  else {
    TGeometryParticleHandleImp<double,3,1>::GetTransformXR
              (pTVar2,(TRigidTransform<double,3> *)&local_88);
  }
  local_148.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_148.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_148.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_148,(TTransform<double> *)(pFVar1->ImplicitTransform + 1),&local_88);
  pFVar1 = this->Constraint;
  *(double *)pFVar1->ShapeWorldTransforms = local_e8.Rotation.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x8 = local_e8.Rotation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x10 = local_e8.Rotation.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x18 = local_e8.Rotation.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x20 = local_e8.Translation.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x28 = local_e8.Translation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x30 = local_e8.Translation.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x38 = local_e8.Translation.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x40 = local_e8.Scale3D.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x48 = local_e8.Scale3D.XY.m128d_f64[1];
  *(double *)(pFVar1->ShapeWorldTransforms + 1) = local_148.Rotation.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x8 = local_148.Rotation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x50 = local_e8.Scale3D.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[0].field_0x58 = local_e8.Scale3D.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x10 = local_148.Rotation.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x18 = local_148.Rotation.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x20 = local_148.Translation.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x28 = local_148.Translation.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x30 = local_148.Translation.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x38 = local_148.Translation.ZW.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x40 = local_148.Scale3D.XY.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x48 = local_148.Scale3D.XY.m128d_f64[1];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x50 = local_148.Scale3D.ZW.m128d_f64[0];
  *(double *)&pFVar1->ShapeWorldTransforms[1].field_0x58 = local_148.Scale3D.ZW.m128d_f64[1];
  return;
}

