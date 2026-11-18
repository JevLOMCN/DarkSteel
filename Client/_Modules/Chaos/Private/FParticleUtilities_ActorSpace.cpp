// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// GetActorWorldTransform<Chaos::FConstGenericParticleHandle> @ 14371a590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetActorWorldTransform<Chaos::FConstGenericParticleHandle>
          (TRigidTransform<double,3> *__return_storage_ptr__,FConstGenericParticleHandle param_1)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  FConstGenericParticleHandle FVar12;
  TRigidTransform<double,3> *pTVar13;
  longlong lVar14;
  TVector<double,3> *pTVar15;
  longlong lVar16;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  
  local_res8 = param_1.Imp.MHandle;
  bVar10 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar10) {
    FVar12.Imp.MHandle =
         (FGenericParticleHandleImp)
         (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar12.Imp.MHandle = param_1.Imp.MHandle;
    }
    uVar3 = (uint)((TGeometryParticleHandleImp<double,3,1> *)FVar12.Imp.MHandle)->_padding_;
    lVar14 = ((TGeometryParticleHandleImp<double,3,1> *)FVar12.Imp.MHandle)->_padding_;
    uVar11 = 0;
    if ((int)uVar3 < *(int *)(lVar14 + 0x568)) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TRigidTransform<double,3> *)(*pcVar4)();
        return pTVar13;
      }
    }
    lVar14 = *(longlong *)(lVar14 + 0x560);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1.Imp.MHandle + 8);
    lVar14 = *(longlong *)param_1.Imp.MHandle;
    uVar11 = 0;
    if ((int)uVar3 < *(int *)(lVar14 + 0x50)) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TRigidTransform<double,3> *)(*pcVar4)();
        return pTVar13;
      }
    }
    lVar14 = *(longlong *)(lVar14 + 0x48);
  }
  lVar16 = (longlong)(int)uVar3;
  fVar1 = *(float *)(lVar14 + lVar16 * 0x10);
  uVar2 = *(undefined8 *)(lVar14 + 8 + lVar16 * 0x10);
  dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar6 = (double)*(float *)(lVar14 + 4 + lVar16 * 0x10);
  local_res10 = param_1.Imp.MHandle;
  bVar10 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar10) {
    FVar12.Imp.MHandle =
         (FGenericParticleHandleImp)
         (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar12.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar12.Imp.MHandle);
  }
  else {
    pTVar15 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1.Imp.MHandle,
                         *(int *)((longlong)param_1.Imp.MHandle + 8));
  }
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (double)fVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar5;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (double)(float)uVar2;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar7;
  uVar9 = *(undefined8 *)&pTVar15->field_0x8;
  uVar2 = *(undefined8 *)&pTVar15->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)pTVar15;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar9;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  uVar2 = _UNK_150689688;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar2;
  uVar2 = _UNK_150689518;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar2;
  return __return_storage_ptr__;
}

// GetCoMWorldPosition<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*> @ 14371a740

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetCoMWorldPosition<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*>
          (TVector<double,3> *__return_storage_ptr__,TPBDRigidParticleHandleImp<double,3,1> *param_1
          )

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double,3> *pTVar10;
  TVector<double,3> *pTVar11;
  TVector<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  TVector<double>_u_0 local_78;
  TVector<double> local_58 [2];
  undefined1 local_28 [32];
  
  pTVar10 = TPBDRigidParticleHandleImp<double,3,1>::GetP(param_1);
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar14 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar13 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x568)) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x560);
  local_28._0_8_ = (undefined8)*(float *)(lVar4 + lVar14 * 0x10);
  local_28._8_8_ = (undefined8)*(float *)(lVar4 + 4 + lVar14 * 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 8 + lVar14 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_28._24_4_ = SUB84(dVar6,0);
  local_28._16_8_ = (double)(float)uVar1;
  local_28._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
  pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass(param_1);
  local_78._s_0.X = (double)*(undefined8 *)pTVar11;
  local_78._s_0.Y = (double)*(undefined8 *)&pTVar11->field_0x8;
  local_78._s_0.Z = (double)*(undefined8 *)&pTVar11->field_0x10;
  pTVar12 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_28,local_58,(TVector<double> *)&local_78._s_0);
  dVar7 = (pTVar12->field0_0x0)._s_0.X;
  dVar8 = (pTVar12->field0_0x0)._s_0.Y;
  dVar6 = *(double *)&pTVar10->field_0x8;
  dVar2 = *(double *)pTVar10;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar12->field0_0x0)._s_0.Z + *(double *)&pTVar10->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar8 + dVar6;
  *(double *)__return_storage_ptr__ = dVar7 + dVar2;
  return __return_storage_ptr__;
}

// GetCoMWorldPosition<Chaos::FConstGenericParticleHandle> @ 14371a890

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetCoMWorldPosition<Chaos::FConstGenericParticleHandle>
          (TVector<double,3> *__return_storage_ptr__,FConstGenericParticleHandle param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<double,3> *pTVar10;
  FConstGenericParticleHandle FVar11;
  longlong lVar12;
  TVector<double,3> *pTVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  FConstGenericParticleHandle this;
  undefined4 uVar16;
  undefined4 uVar17;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  FGenericParticleHandleImp local_res18;
  TVector<double>_u_0 local_98 [2];
  TVector<double> local_60;
  undefined1 local_48 [32];
  
  local_res8 = param_1.Imp.MHandle;
  local_res10 = param_1.Imp.MHandle;
  bVar8 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  this.Imp.MHandle = (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (bVar8) {
    FVar11.Imp.MHandle = this.Imp.MHandle;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar11.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar10 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar11.Imp.MHandle);
  }
  else {
    pTVar10 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1.Imp.MHandle,
                         *(int *)((longlong)param_1.Imp.MHandle + 8));
  }
  local_res18 = param_1.Imp.MHandle;
  bVar8 = FGenericParticleHandleImp::IsDynamic(&local_res18);
  if (bVar8) {
    FVar11.Imp.MHandle = this.Imp.MHandle;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar11.Imp.MHandle = param_1.Imp.MHandle;
    }
    uVar3 = (uint)((TGeometryParticleHandleImp<double,3,1> *)FVar11.Imp.MHandle)->_padding_;
    lVar12 = ((TGeometryParticleHandleImp<double,3,1> *)FVar11.Imp.MHandle)->_padding_;
    uVar9 = 0;
    if ((int)uVar3 < *(int *)(lVar12 + 0x568)) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x560);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1.Imp.MHandle + 8);
    lVar12 = *(longlong *)param_1.Imp.MHandle;
    uVar9 = 0;
    if ((int)uVar3 < *(int *)(lVar12 + 0x50)) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x48);
  }
  lVar15 = (longlong)(int)uVar3;
  local_48._0_8_ = (undefined8)*(float *)(lVar12 + lVar15 * 0x10);
  local_48._8_8_ = (undefined8)*(float *)(lVar12 + 4 + lVar15 * 0x10);
  uVar1 = *(undefined8 *)(lVar12 + 8 + lVar15 * 0x10);
  dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_48._24_4_ = SUB84(dVar5,0);
  local_48._16_8_ = (double)(float)uVar1;
  local_48._28_4_ = (int)((ulonglong)dVar5 >> 0x20);
  bVar8 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar8) {
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      this.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar13 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this.Imp.MHandle);
    local_98[0]._0_4_ = *(undefined4 *)pTVar13;
    local_98[0]._4_4_ = *(undefined4 *)&pTVar13->field_0x4;
    local_98[0]._8_4_ = *(undefined4 *)&pTVar13->field_0x8;
    local_98[0]._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    uVar16 = (undefined4)*(undefined8 *)&pTVar13->field_0x10;
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)&pTVar13->field_0x10 >> 0x20);
  }
  else {
    local_98[0]._0_4_ = 0;
    local_98[0]._4_4_ = 0;
    local_98[0]._8_4_ = 0;
    local_98[0]._12_4_ = 0;
    uVar16 = 0;
    uVar17 = 0;
  }
  local_98[0]._16_8_ = CONCAT44(uVar17,uVar16);
  pTVar14 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_48,&local_60,(TVector<double> *)&local_98[0]._s_0);
  dVar6 = (pTVar14->field0_0x0)._s_0.X;
  dVar7 = (pTVar14->field0_0x0)._s_0.Y;
  dVar5 = *(double *)&pTVar10->field_0x8;
  dVar2 = *(double *)pTVar10;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar14->field0_0x0)._s_0.Z + *(double *)&pTVar10->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar7 + dVar5;
  *(double *)__return_storage_ptr__ = dVar6 + dVar2;
  return __return_storage_ptr__;
}

// GetActorWorldTransform<Chaos::FGenericParticleHandle> @ 14394ce00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetActorWorldTransform<Chaos::FGenericParticleHandle>
          (TRigidTransform<double,3> *__return_storage_ptr__,FGenericParticleHandle param_1)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  FGenericParticleHandle FVar12;
  TRigidTransform<double,3> *pTVar13;
  longlong lVar14;
  TVector<double,3> *pTVar15;
  longlong lVar16;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  
  local_res8 = param_1.Imp.MHandle;
  bVar10 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar10) {
    FVar12.Imp.MHandle =
         (FGenericParticleHandleImp)
         (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar12.Imp.MHandle = param_1.Imp.MHandle;
    }
    uVar3 = (uint)((TGeometryParticleHandleImp<double,3,1> *)FVar12.Imp.MHandle)->_padding_;
    lVar14 = ((TGeometryParticleHandleImp<double,3,1> *)FVar12.Imp.MHandle)->_padding_;
    uVar11 = 0;
    if ((int)uVar3 < *(int *)(lVar14 + 0x568)) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TRigidTransform<double,3> *)(*pcVar4)();
        return pTVar13;
      }
    }
    lVar14 = *(longlong *)(lVar14 + 0x560);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1.Imp.MHandle + 8);
    lVar14 = *(longlong *)param_1.Imp.MHandle;
    uVar11 = 0;
    if ((int)uVar3 < *(int *)(lVar14 + 0x50)) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TRigidTransform<double,3> *)(*pcVar4)();
        return pTVar13;
      }
    }
    lVar14 = *(longlong *)(lVar14 + 0x48);
  }
  lVar16 = (longlong)(int)uVar3;
  fVar1 = *(float *)(lVar14 + lVar16 * 0x10);
  uVar2 = *(undefined8 *)(lVar14 + 8 + lVar16 * 0x10);
  dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
  dVar6 = (double)*(float *)(lVar14 + 4 + lVar16 * 0x10);
  local_res10 = param_1.Imp.MHandle;
  bVar10 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar10) {
    FVar12.Imp.MHandle =
         (FGenericParticleHandleImp)
         (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar12.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar12.Imp.MHandle);
  }
  else {
    pTVar15 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1.Imp.MHandle,
                         *(int *)((longlong)param_1.Imp.MHandle + 8));
  }
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (double)fVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar5;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = (double)(float)uVar2;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar7;
  uVar9 = *(undefined8 *)&pTVar15->field_0x8;
  uVar2 = *(undefined8 *)&pTVar15->field_0x10;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)pTVar15;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uVar9;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  uVar2 = _UNK_150689688;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar2;
  uVar2 = _UNK_150689518;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar2;
  return __return_storage_ptr__;
}

// ParticleLocalToCoMLocal<Chaos::FGenericParticleHandle> @ 14394d000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
ParticleLocalToCoMLocal<Chaos::FGenericParticleHandle>
          (TRigidTransform<double,3> *__return_storage_ptr__,FGenericParticleHandle param_1,
          TRigidTransform<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  TRotation<double,3> *pTVar20;
  TVector<double,3> *pTVar21;
  TVector<double> *pTVar22;
  FGenericParticleHandle FVar23;
  FGenericParticleHandle this;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  TVector<double>_u_0 local_c8;
  TQuat<double> local_a8;
  TVector<double> local_88 [4];
  
  dVar12 = *(double *)param_2;
  dVar13 = *(double *)&param_2->field_0x8;
  dVar14 = *(double *)&param_2->field_0x10;
  dVar15 = *(double *)&param_2->field_0x18;
  local_res10 = param_1.Imp.MHandle;
  bVar19 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  this.Imp.MHandle = (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (bVar19) {
    FVar23.Imp.MHandle = this.Imp.MHandle;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar23.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar23.Imp.MHandle);
    dVar31 = *(double *)pTVar20;
    dVar32 = *(double *)&pTVar20->field_0x8;
    dVar33 = *(double *)&pTVar20->field_0x10;
    dVar34 = *(double *)&pTVar20->field_0x18;
  }
  else {
    dVar31 = 0.0;
    dVar32 = 0.0;
    dVar33 = ___xmm_3ff00000000000000000000000000000;
    dVar34 = _UNK_15061cbc8;
  }
  dVar31 = dVar31 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar32 = dVar32 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar33 = dVar33 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar34 = dVar34 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar25._8_4_ = SUB84(dVar34,0);
  auVar25._0_8_ = dVar34;
  auVar25._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar28._8_4_ = SUB84(dVar32,0);
  auVar28._0_8_ = dVar32;
  auVar28._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  auVar26._8_4_ = SUB84(dVar33,0);
  auVar26._0_8_ = dVar33;
  auVar26._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar1 = *(double *)&param_2->field_0x30;
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = dVar14 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar25._8_8_ * dVar13 +
           auVar28._8_8_ * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + auVar26._8_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar16 = *(double *)&param_2->field_0x20;
  dVar17 = *(double *)&param_2->field_0x28;
  dVar9 = dVar31 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar34 * dVar15 +
          dVar32 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar33 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_res8 = param_1.Imp.MHandle;
  bVar19 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar19) {
    FVar23.Imp.MHandle = this.Imp.MHandle;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar23.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar20 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar23.Imp.MHandle);
    local_a8.X = *(double *)pTVar20;
    local_a8.Y = *(double *)&pTVar20->field_0x8;
    local_a8.Z = *(double *)&pTVar20->field_0x10;
    local_a8.W = *(double *)&pTVar20->field_0x18;
  }
  else {
    local_a8.X = 0.0;
    local_a8.Y = 0.0;
    local_a8.Z = ___xmm_3ff00000000000000000000000000000;
    local_a8.W = _UNK_15061cbc8;
  }
  bVar19 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar19) {
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      this.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar21 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this.Imp.MHandle);
    dVar24 = *(double *)pTVar21;
    dVar27 = *(double *)&pTVar21->field_0x8;
    uVar29 = (undefined4)*(undefined8 *)&pTVar21->field_0x10;
    uVar30 = (undefined4)((ulonglong)*(undefined8 *)&pTVar21->field_0x10 >> 0x20);
  }
  else {
    dVar24 = 0.0;
    dVar27 = 0.0;
    uVar29 = 0;
    uVar30 = 0;
  }
  local_c8._s_0.X = dVar16 - dVar24;
  local_c8._s_0.Y = dVar17 - dVar27;
  local_c8._s_0.Z = dVar1 - (double)CONCAT44(uVar30,uVar29);
  pTVar22 = UE::Math::TQuat<double>::UnrotateVector
                      (&local_a8,local_88,(TVector<double> *)&local_c8._s_0);
  dVar16 = (pTVar22->field0_0x0)._s_0.X;
  dVar17 = (pTVar22->field0_0x0)._s_0.Y;
  dVar1 = (pTVar22->field0_0x0)._s_0.Z;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ =
       dVar15 * dVar31 * dVar2 + dVar34 * dVar12 + dVar32 * dVar14 * dVar4 + dVar33 * dVar13 * dVar5
  ;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar10;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar31 * dVar13 * dVar3 + dVar34 * dVar14 + dVar32 * dVar12 * dVar6 +
                 dVar33 * dVar15 * dVar7;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar8;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar16;
  *(double *)&__return_storage_ptr__->field_0x28 = dVar17;
  *(double *)&__return_storage_ptr__->field_0x30 = dVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  uVar18 = _UNK_150689688;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar18;
  uVar18 = _UNK_150689518;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uVar18;
  return __return_storage_ptr__;
}

// GetCoMWorldPosition<Chaos::FGenericParticleHandle> @ 143c2d690

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetCoMWorldPosition<Chaos::FGenericParticleHandle>
          (TVector<double,3> *__return_storage_ptr__,FGenericParticleHandle param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TVector<double,3> *pTVar10;
  FGenericParticleHandle FVar11;
  longlong lVar12;
  TVector<double,3> *pTVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  FGenericParticleHandle this;
  undefined4 uVar16;
  undefined4 uVar17;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  FGenericParticleHandleImp local_res18;
  TVector<double>_u_0 local_98 [2];
  TVector<double> local_60;
  undefined1 local_48 [32];
  
  local_res8 = param_1.Imp.MHandle;
  local_res10 = param_1.Imp.MHandle;
  bVar8 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  this.Imp.MHandle = (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (bVar8) {
    FVar11.Imp.MHandle = this.Imp.MHandle;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar11.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar10 = TPBDRigidParticleHandleImp<double,3,1>::GetP
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar11.Imp.MHandle);
  }
  else {
    pTVar10 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)param_1.Imp.MHandle,
                         *(int *)((longlong)param_1.Imp.MHandle + 8));
  }
  local_res18 = param_1.Imp.MHandle;
  bVar8 = FGenericParticleHandleImp::IsDynamic(&local_res18);
  if (bVar8) {
    FVar11.Imp.MHandle = this.Imp.MHandle;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar11.Imp.MHandle = param_1.Imp.MHandle;
    }
    uVar3 = (uint)((TGeometryParticleHandleImp<double,3,1> *)FVar11.Imp.MHandle)->_padding_;
    lVar12 = ((TGeometryParticleHandleImp<double,3,1> *)FVar11.Imp.MHandle)->_padding_;
    uVar9 = 0;
    if ((int)uVar3 < *(int *)(lVar12 + 0x568)) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x560);
  }
  else {
    uVar3 = *(uint *)((longlong)param_1.Imp.MHandle + 8);
    lVar12 = *(longlong *)param_1.Imp.MHandle;
    uVar9 = 0;
    if ((int)uVar3 < *(int *)(lVar12 + 0x50)) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TVector<double,3> *)(*pcVar4)();
        return pTVar10;
      }
    }
    lVar12 = *(longlong *)(lVar12 + 0x48);
  }
  lVar15 = (longlong)(int)uVar3;
  local_48._0_8_ = (undefined8)*(float *)(lVar12 + lVar15 * 0x10);
  local_48._8_8_ = (undefined8)*(float *)(lVar12 + 4 + lVar15 * 0x10);
  uVar1 = *(undefined8 *)(lVar12 + 8 + lVar15 * 0x10);
  dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_48._24_4_ = SUB84(dVar5,0);
  local_48._16_8_ = (double)(float)uVar1;
  local_48._28_4_ = (int)((ulonglong)dVar5 >> 0x20);
  bVar8 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar8) {
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      this.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar13 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this.Imp.MHandle);
    local_98[0]._0_4_ = *(undefined4 *)pTVar13;
    local_98[0]._4_4_ = *(undefined4 *)&pTVar13->field_0x4;
    local_98[0]._8_4_ = *(undefined4 *)&pTVar13->field_0x8;
    local_98[0]._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    uVar16 = (undefined4)*(undefined8 *)&pTVar13->field_0x10;
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)&pTVar13->field_0x10 >> 0x20);
  }
  else {
    local_98[0]._0_4_ = 0;
    local_98[0]._4_4_ = 0;
    local_98[0]._8_4_ = 0;
    local_98[0]._12_4_ = 0;
    uVar16 = 0;
    uVar17 = 0;
  }
  local_98[0]._16_8_ = CONCAT44(uVar17,uVar16);
  pTVar14 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_48,&local_60,(TVector<double> *)&local_98[0]._s_0);
  dVar6 = (pTVar14->field0_0x0)._s_0.X;
  dVar7 = (pTVar14->field0_0x0)._s_0.Y;
  dVar5 = *(double *)&pTVar10->field_0x8;
  dVar2 = *(double *)pTVar10;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar14->field0_0x0)._s_0.Z + *(double *)&pTVar10->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar7 + dVar5;
  *(double *)__return_storage_ptr__ = dVar6 + dVar2;
  return __return_storage_ptr__;
}

// GetCoMWorldRotation<Chaos::FGenericParticleHandle> @ 143c2d8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRotation<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorPQ>::
GetCoMWorldRotation<Chaos::FGenericParticleHandle>
          (TRotation<double,3> *__return_storage_ptr__,FGenericParticleHandle param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  FGenericParticleHandle FVar17;
  TRotation<double,3> *pTVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  FGenericParticleHandleImp local_res8;
  FGenericParticleHandleImp local_res10;
  double local_res18;
  
  local_res8 = param_1.Imp.MHandle;
  local_res10 = param_1.Imp.MHandle;
  bVar15 = FGenericParticleHandleImp::IsDynamic(&local_res8);
  if (bVar15) {
    FVar17.Imp.MHandle =
         (FGenericParticleHandleImp)
         (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar17.Imp.MHandle = param_1.Imp.MHandle;
    }
    uVar4 = (uint)((TGeometryParticleHandleImp<double,3,1> *)FVar17.Imp.MHandle)->_padding_;
    lVar20 = (longlong)(int)uVar4;
    lVar19 = ((TGeometryParticleHandleImp<double,3,1> *)FVar17.Imp.MHandle)->_padding_;
    uVar16 = 0;
    if ((int)uVar4 < *(int *)(lVar19 + 0x568)) {
      uVar16 = ~uVar4 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        pTVar18 = (TRotation<double,3> *)(*pcVar5)();
        return pTVar18;
      }
    }
    lVar19 = *(longlong *)(lVar19 + 0x560);
    fVar1 = *(float *)(lVar19 + lVar20 * 0x10);
    fVar2 = *(float *)(lVar19 + 4 + lVar20 * 0x10);
  }
  else {
    uVar4 = *(uint *)((longlong)param_1.Imp.MHandle + 8);
    lVar20 = (longlong)(int)uVar4;
    lVar19 = *(longlong *)param_1.Imp.MHandle;
    uVar16 = 0;
    if ((int)uVar4 < *(int *)(lVar19 + 0x50)) {
      uVar16 = ~uVar4 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        pTVar18 = (TRotation<double,3> *)(*pcVar5)();
        return pTVar18;
      }
    }
    lVar19 = *(longlong *)(lVar19 + 0x48);
    fVar1 = *(float *)(lVar19 + lVar20 * 0x10);
    fVar2 = *(float *)(lVar19 + 4 + lVar20 * 0x10);
  }
  local_res18 = (double)fVar2;
  local_res8.MHandle = (TGeometryParticleHandleImp<double,3,1> *)(double)fVar1;
  uVar3 = *(undefined8 *)(lVar19 + 8 + lVar20 * 0x10);
  dVar12 = (double)(float)uVar3;
  dVar13 = (double)(float)((ulonglong)uVar3 >> 0x20);
  bVar15 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar15) {
    FVar17.Imp.MHandle =
         (FGenericParticleHandleImp)
         (FGenericParticleHandleImp)(TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)param_1.Imp.MHandle + 0xc)) {
      FVar17.Imp.MHandle = param_1.Imp.MHandle;
    }
    pTVar18 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)FVar17.Imp.MHandle);
    uVar21 = *(undefined4 *)pTVar18;
    uVar22 = *(undefined4 *)&pTVar18->field_0x4;
    uVar23 = *(undefined4 *)&pTVar18->field_0x8;
    uVar24 = *(undefined4 *)&pTVar18->field_0xc;
    dVar25 = *(double *)&pTVar18->field_0x10;
    dVar26 = *(double *)&pTVar18->field_0x18;
  }
  else {
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    dVar25 = ___xmm_3ff00000000000000000000000000000;
    dVar26 = _UNK_15061cbc8;
  }
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar14 = (double)local_res8.MHandle * (double)CONCAT44(uVar22,uVar21) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar26 * dVar13 +
           (double)CONCAT44(uVar24,uVar23) * local_res18 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar12 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar10 = (double)local_res8.MHandle * dVar25 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           (double)CONCAT44(uVar24,uVar23) * dVar13 +
           dVar26 * local_res18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar12 * (double)CONCAT44(uVar22,uVar21) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = (double)local_res8.MHandle * dVar26 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 (double)CONCAT44(uVar22,uVar21) * dVar13 +
                 dVar25 * local_res18 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar12 * (double)CONCAT44(uVar24,uVar23) *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar9;
  auVar11._8_4_ = SUB84(dVar14,0);
  auVar11._0_8_ =
       (double)local_res8.MHandle * (double)CONCAT44(uVar24,uVar23) * dVar6 + dVar25 * dVar13 +
       (double)CONCAT44(uVar22,uVar21) * local_res18 * dVar7 + dVar12 * dVar26 * dVar8;
  auVar11._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar11;
  return __return_storage_ptr__;
}

// GetCoMWorldPosition<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*> @ 1440fb3e0

TVector<double,3> * __cdecl
Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
GetCoMWorldPosition<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>
          (TVector<double,3> *__return_storage_ptr__,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double,3> *pTVar10;
  TVector<double,3> *pTVar11;
  TVector<double> *pTVar12;
  uint uVar13;
  longlong lVar14;
  TVector<double>_u_0 local_78;
  TVector<double> local_58 [2];
  undefined1 local_28 [32];
  
  pTVar10 = TParticles<double,3>::GetX
                      (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar14 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar13 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x50)) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector<double,3> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x48);
  local_28._0_8_ = (undefined8)*(float *)(lVar4 + lVar14 * 0x10);
  local_28._8_8_ = (undefined8)*(float *)(lVar4 + 4 + lVar14 * 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 8 + lVar14 * 0x10);
  dVar6 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_28._24_4_ = SUB84(dVar6,0);
  local_28._16_8_ = (double)(float)uVar1;
  local_28._28_4_ = (int)((ulonglong)dVar6 >> 0x20);
  pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  local_78._s_0.X = (double)*(undefined8 *)pTVar11;
  local_78._s_0.Y = (double)*(undefined8 *)&pTVar11->field_0x8;
  local_78._s_0.Z = (double)*(undefined8 *)&pTVar11->field_0x10;
  pTVar12 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_28,local_58,(TVector<double> *)&local_78._s_0);
  dVar7 = (pTVar12->field0_0x0)._s_0.X;
  dVar8 = (pTVar12->field0_0x0)._s_0.Y;
  dVar6 = *(double *)&pTVar10->field_0x8;
  dVar2 = *(double *)pTVar10;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (pTVar12->field0_0x0)._s_0.Z + *(double *)&pTVar10->field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar8 + dVar6;
  *(double *)__return_storage_ptr__ = dVar7 + dVar2;
  return __return_storage_ptr__;
}

