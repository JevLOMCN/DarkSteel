// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ConvertToNonProbeConstraint @ 143a61160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FCollisionContactModifier::ConvertToNonProbeConstraint
          (FCollisionContactModifier *this,FPBDCollisionConstraint *param_1)

{
  TTransform<double> *pTVar1;
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
  (param_1->Flags).Bits = (param_1->Flags).Bits | 0x800;
  pTVar1 = (TTransform<double> *)
           FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
           GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
                     (&local_a8,(FConstGenericParticleHandle)param_1->Particle[0]);
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
            (&local_1c8,(TTransform<double> *)param_1->ImplicitTransform,pTVar1);
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
  pTVar1 = (TTransform<double> *)
           FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
           GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
                     (&local_a8,(FConstGenericParticleHandle)param_1->Particle[1]);
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
            (&local_1c8,(TTransform<double> *)(param_1->ImplicitTransform + 1),pTVar1);
  local_d8 = local_1c8.Translation.ZW.m128d_f64[0];
  dStack_d0 = local_1c8.Translation.ZW.m128d_f64[1];
  local_c8 = local_1c8.Scale3D.XY.m128d_f64[0];
  dStack_c0 = local_1c8.Scale3D.XY.m128d_f64[1];
  local_b8 = local_1c8.Scale3D.ZW.m128d_f64[0];
  dStack_b0 = local_1c8.Scale3D.ZW.m128d_f64[1];
  *(double *)param_1->ShapeWorldTransforms = local_168;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x8 = dStack_160;
  local_108 = local_1c8.Rotation.XY.m128d_f64[0];
  dStack_100 = local_1c8.Rotation.XY.m128d_f64[1];
  local_f8 = local_1c8.Rotation.ZW.m128d_f64[0];
  dStack_f0 = local_1c8.Rotation.ZW.m128d_f64[1];
  local_e8 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_e0 = local_1c8.Translation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x10 = local_158;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x18 = dStack_150;
  *(double *)(param_1->ShapeWorldTransforms + 1) = local_1c8.Rotation.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x8 = local_1c8.Rotation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x20 = local_148;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x28 = dStack_140;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x10 = local_1c8.Rotation.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x18 = local_1c8.Rotation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x30 = local_138;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x38 = dStack_130;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x20 = local_1c8.Translation.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x28 = local_1c8.Translation.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x30 = local_1c8.Translation.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x38 = local_1c8.Translation.ZW.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x40 = local_128;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x48 = dStack_120;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x40 = local_1c8.Scale3D.XY.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x48 = local_1c8.Scale3D.XY.m128d_f64[1];
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x50 = local_118;
  *(double *)&param_1->ShapeWorldTransforms[0].field_0x58 = dStack_110;
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x50 = local_1c8.Scale3D.ZW.m128d_f64[0];
  *(double *)&param_1->ShapeWorldTransforms[1].field_0x58 = local_1c8.Scale3D.ZW.m128d_f64[1];
  Collisions::UpdateConstraint
            (param_1,(TRigidTransform<double,3> *)&local_168,(TRigidTransform<double,3> *)&local_108
             ,this->Dt);
  (param_1->Flags).Bits = (param_1->Flags).Bits & 0xfeff;
  return;
}

// ConvertToProbeConstraint @ 143a613e0

void __thiscall
Chaos::FCollisionContactModifier::ConvertToProbeConstraint
          (FCollisionContactModifier *this,FPBDCollisionConstraint *param_1)

{
  (param_1->Flags).Bits = (param_1->Flags).Bits | 0x900;
  return;
}

// DisableConstraint @ 143a62290

void __thiscall
Chaos::FCollisionContactModifier::DisableConstraint
          (FCollisionContactModifier *this,FPBDCollisionConstraint *param_1)

{
  (param_1->Flags).Bits = (param_1->Flags).Bits | 0x802;
  return;
}

// EnableConstraint @ 143a663b0

void __thiscall
Chaos::FCollisionContactModifier::EnableConstraint
          (FCollisionContactModifier *this,FPBDCollisionConstraint *param_1)

{
  (param_1->Flags).Bits = (param_1->Flags).Bits & 0xfffd | 0x800;
  return;
}

// GetConstraints @ 143a68620

TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> * __thiscall
Chaos::FCollisionContactModifier::GetConstraints(FCollisionContactModifier *this)

{
  return &this->Constraints;
}

// GetContacts @ 143a68fd0

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

FContactPairModifierParticleRange * __thiscall
Chaos::FCollisionContactModifier::GetContacts
          (FCollisionContactModifier *this,FContactPairModifierParticleRange *__return_storage_ptr__
          ,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  FContactPairModifierParticleRange *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  <lambda_1> local_res8;
  
  __return_storage_ptr__->Modifier = this;
  __return_storage_ptr__->Particle = param_1;
  (__return_storage_ptr__->Constraints).AllocatorInstance.SecondaryData =
       (ForElementType<Chaos::FPBDCollisionConstraint_*>)0x0;
  (__return_storage_ptr__->Constraints).ArrayNum = 0;
  (__return_storage_ptr__->Constraints).ArrayMax = 0x10;
  pFVar5 = TGeometryParticleHandleImp<double,3,1>::ParticleCollisions(param_1);
  uVar8 = 0;
  iVar7 = (pFVar5->MidPhases).ArrayNum;
  if (iVar7 < 1) {
    return __return_storage_ptr__;
  }
  lVar9 = 0;
  local_res8.__this = __return_storage_ptr__;
  do {
    uVar3 = 0;
    if ((int)uVar8 < iVar7) {
      uVar3 = ~uVar8 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FContactPairModifierParticleRange *)(*pcVar1)();
      return pFVar6;
    }
    EVar4 = FParticlePairMidPhase::
            VisitCollisions<_Chaos::FContactPairModifierParticleRange::FContactPairModifierParticleRange_::__l2::<lambda_1>_>
                      (*(FParticlePairMidPhase **)
                        ((pFVar5->MidPhases).AllocatorInstance.Data + lVar9 + 8),&local_res8,
                       VisitDisabled);
    if (EVar4 == Stop) {
      return __return_storage_ptr__;
    }
    iVar7 = (pFVar5->MidPhases).ArrayNum;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
  } while ((int)uVar8 < iVar7);
  return __return_storage_ptr__;
}

// MakeVisitedContactPairsTracker @ 143a82ab0

FVisitedContactPairsTracker * __thiscall
Chaos::FCollisionContactModifier::MakeVisitedContactPairsTracker
          (FCollisionContactModifier *this,FVisitedContactPairsTracker *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ForElementType<unsigned_int> FVar5;
  uint uVar6;
  
  iVar4 = (this->Constraints).ArrayNum;
  uVar2 = *(undefined4 *)&(this->Constraints).field_0xc;
  this_00 = &__return_storage_ptr__->VisitedContacts;
  (__return_storage_ptr__->Constraints).DataPtr = (this->Constraints).DataPtr;
  (__return_storage_ptr__->Constraints).ArrayNum = iVar4;
  *(undefined4 *)&(__return_storage_ptr__->Constraints).field_0xc = uVar2;
  iVar4 = (__return_storage_ptr__->Constraints).ArrayNum;
  (__return_storage_ptr__->VisitedContacts).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (__return_storage_ptr__->VisitedContacts).MaxBits = 0x80;
  (__return_storage_ptr__->VisitedContacts).NumBits = iVar4;
  uVar3 = iVar4 + 0x1f;
  uVar6 = uVar3 >> 5;
  if (uVar3 >> 5 != 0) {
    if (4 < uVar6) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar6,4);
      (__return_storage_ptr__->VisitedContacts).MaxBits = uVar6 << 5;
    }
    FVar5 = (__return_storage_ptr__->VisitedContacts).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar5,0,(ulonglong)uVar6 << 2);
    iVar4 = (__return_storage_ptr__->VisitedContacts).NumBits;
    uVar6 = iVar4 >> 0x1f & 0x1f;
    uVar3 = iVar4 + uVar6;
    iVar4 = (uVar3 & 0x1f) - uVar6;
    if (iVar4 != 0) {
      FVar5 = (__return_storage_ptr__->VisitedContacts).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<unsigned_int>)0x0) {
        FVar5 = (ForElementType<unsigned_int>)this_00;
      }
      puVar1 = (uint *)((longlong)FVar5 + (longlong)((int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
    }
  }
  return __return_storage_ptr__;
}

// MarkConstraintForManifoldUpdate @ 143a82b80

void __thiscall
Chaos::FCollisionContactModifier::MarkConstraintForManifoldUpdate
          (FCollisionContactModifier *this,FPBDCollisionConstraint *param_1)

{
  FPBDCollisionConstraint *local_res8;
  FPBDCollisionConstraint *local_res10 [3];
  
  local_res10[0] = param_1;
  TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
  ::Emplace<Chaos::FPBDCollisionConstraint_*>
            (&this->NeedsManifoldUpdate,&local_res8,(bool *)local_res10);
  return;
}

// UpdateConstraintManifolds @ 143a98120

void __thiscall
Chaos::FCollisionContactModifier::UpdateConstraintManifolds(FCollisionContactModifier *this)

{
  undefined1 *puVar1;
  TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->NeedsManifoldUpdate).Elements.field_0x28;
  puVar1 = &(this->NeedsManifoldUpdate).Elements.field_0x10;
  iVar10 = 0;
  this_00 = &this->NeedsManifoldUpdate;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = iVar12;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->NeedsManifoldUpdate).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    iVar12 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143a981cd;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_143a981cd:
  uVar9 = *(uint *)&(this->NeedsManifoldUpdate).Elements.field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NeedsManifoldUpdate).Elements.field_0x8 -
                       *(int *)&(this->NeedsManifoldUpdate).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->NeedsManifoldUpdate).Elements.field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->NeedsManifoldUpdate).Elements.field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143a982d0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_143a982d0:
  while( true ) {
    if (*(int *)&(this->NeedsManifoldUpdate).Elements.field_0x8 -
        *(int *)&(this->NeedsManifoldUpdate).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<Chaos::FPBDCollisionConstraint_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FPBDCollisionConstraint::UpdateManifoldContacts
              (*(FPBDCollisionConstraint **)
                (*(longlong *)&this_00->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  if (*(int *)&(this->NeedsManifoldUpdate).Elements.field_0x8 !=
      *(int *)&(this->NeedsManifoldUpdate).Elements.field_0x34) {
    TSet<Chaos::FPBDCollisionConstraint_*,DefaultKeyFuncs<Chaos::FPBDCollisionConstraint_*,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    iVar3 = *(int *)&(this->NeedsManifoldUpdate).Elements.field_0xc;
    *(undefined4 *)&(this->NeedsManifoldUpdate).Elements.field_0x8 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->NeedsManifoldUpdate).Elements.field_0xc);
    }
    *(undefined4 *)&(this->NeedsManifoldUpdate).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->NeedsManifoldUpdate).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->NeedsManifoldUpdate).Elements.field_0x28 = 0;
  }
  return;
}

