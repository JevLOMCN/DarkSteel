// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// FCollisionStructureManager @ 144012340

FCollisionStructureManager * __thiscall
FCollisionStructureManager::FCollisionStructureManager(FCollisionStructureManager *this)

{
  *this = (FCollisionStructureManager)&___7FCollisionStructureManager__6B_;
  return this;
}

// ~FCollisionStructureManager @ 144012f90

void __thiscall
FCollisionStructureManager::~FCollisionStructureManager(FCollisionStructureManager *this)

{
  *this = (FCollisionStructureManager)&___7FCollisionStructureManager__6B_;
  return;
}

// CalculateUnitMassInertiaTensor @ 144022a30

TVector<double> * __cdecl
FCollisionStructureManager::CalculateUnitMassInertiaTensor
          (TVector<double> *__return_storage_ptr__,TBox<double> *param_1,double param_2,
          EImplicitTypeEnum param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_res20 [8];
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  if (param_3 == Chaos_Implicit_Box) {
    dVar4 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
    dVar6 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
    dVar3 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
    dVar4 = dVar4 * dVar4;
    dVar6 = dVar6 * dVar6;
    dVar3 = dVar3 * dVar3;
    dVar5 = (dVar4 + dVar3) * __real_3fb5555555555555;
    dVar3 = (dVar6 + dVar3) * __real_3fb5555555555555;
    auVar2._8_4_ = SUB84(dVar5,0);
    auVar2._0_8_ = (dVar4 + dVar6) * __real_3fb5555555555555;
    auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  }
  else if (param_3 == Chaos_Implicit_Sphere) {
    dVar3 = param_2 * __real_3fd999999999999a * param_2;
    *(double *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = dVar3;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  }
  if ((((__return_storage_ptr__->field0_0x0)._s_0.X == 0.0) ||
      ((__return_storage_ptr__->field0_0x0)._s_0.Y == 0.0)) ||
     ((__return_storage_ptr__->field0_0x0)._s_0.Z == 0.0)) {
    `FCollisionStructureManager::CalculateUnitMassInertiaTensor'::__l2::<lambda_1>::operator()
              (local_res20);
  }
  return __return_storage_ptr__;
}

// CalculateVolume @ 144022b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl
FCollisionStructureManager::CalculateVolume
          (TBox<double> *param_1,double param_2,EImplicitTypeEnum param_3)

{
  double dVar1;
  double dVar2;
  undefined1 local_res18 [16];
  
  if (param_3 == Chaos_Implicit_Box) {
    dVar2 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
    dVar1 = ((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) *
            ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X);
  }
  else {
    if (param_3 != Chaos_Implicit_Sphere) {
      return __real_3ff0000000000000;
    }
    dVar1 = param_2 * param_2;
    dVar2 = param_2 * ___real_4010c15240000000;
  }
  if (dVar1 * dVar2 == 0.0) {
    `FCollisionStructureManager::CalculateVolume'::__l2::<lambda_1>::operator()(local_res18);
  }
  return dVar1 * dVar2;
}

// NewImplicit @ 144048c40

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicit
          (FErrorReporter *param_1,TParticles<double,3> *param_2,FTriangleMesh *param_3,
          TBox<double> *param_4,double param_5,int param_6,int param_7,float param_8,
          ECollisionTypeEnum param_9,EImplicitTypeEnum param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FImplicitObject *this;
  FErrorReporter *pFVar11;
  double dVar12;
  double dVar13;
  FErrorReporter local_d8 [8];
  
  dVar10 = __real_3fe0000000000000;
  if (param_10 == Chaos_Implicit_Box) {
    dVar1 = (param_4->Max).field0_0x0._s_0.Z;
    dVar2 = (param_4->Max).field0_0x0._s_0.Y;
    dVar3 = (param_4->Max).field0_0x0._s_0.X;
    dVar13 = (double)(__real_3f800000 - param_8 * __real_3c23d70a);
    dVar8 = (dVar2 - (param_4->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000 * dVar13;
    dVar7 = (dVar3 - (param_4->Min).field0_0x0._s_0.X) * __real_3fe0000000000000 * dVar13;
    dVar13 = (dVar1 - (param_4->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000 * dVar13;
    dVar3 = (dVar3 + (param_4->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
    dVar6 = dVar8;
    if (dVar7 <= dVar8) {
      dVar6 = dVar7;
    }
    dVar2 = (dVar2 + (param_4->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
    dVar1 = (dVar1 + (param_4->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
    if (dVar13 <= dVar6) {
      dVar6 = dVar13;
    }
    dVar9 = dVar6 * __real_3fa99999a0000000;
    if (__real_4024000000000000 <= dVar6 * __real_3fa99999a0000000) {
      dVar9 = __real_4024000000000000;
    }
    this = ::operator_new(0x50);
    if (this == (FImplicitObject *)0x0) {
      this = (FImplicitObject *)0x0;
    }
    else {
      dVar6 = dVar1 - dVar13;
      dVar12 = dVar2 - dVar8;
      Chaos::FImplicitObject::FImplicitObject(this,3,'\x01');
      dVar1 = dVar1 + dVar13;
      dVar2 = dVar2 + dVar8;
      this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
      this[1]._padding_ = (longlong)dVar12;
      *(double *)&this[1].Margin = dVar6;
      this[1]._padding_ = (longlong)(dVar3 - dVar7);
      auVar5._8_4_ = SUB84(dVar2,0);
      auVar5._0_8_ = dVar3 + dVar7;
      auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])&this[1].Type = auVar5;
      this[2]._padding_ = (longlong)dVar1;
      dVar1 = dVar1 - dVar6;
      dVar12 = (double)this[2]._padding_ - dVar12;
      dVar2 = *(double *)&this[1].Type - (double)this[1]._padding_;
      if (((dVar12 <= dVar2) || (dVar1 <= dVar2)) && (dVar2 = dVar1, dVar12 <= dVar1)) {
        dVar2 = dVar12;
      }
      dVar1 = dVar2 * dVar10;
      if (dVar9 <= dVar2 * dVar10) {
        dVar1 = dVar9;
      }
      this->Margin = (float)dVar1;
    }
    UpdateImplicitFlags(this,param_9);
  }
  else if (param_10 == Chaos_Implicit_Sphere) {
    this = NewImplicitSphere(param_5,param_8,param_9);
  }
  else {
    if (param_10 != Chaos_Implicit_LevelSet) {
      pFVar4 = (param_1->Prefix).Data.AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return (FImplicitObject *)0x0;
    }
    pFVar11 = Chaos::FErrorReporter::FErrorReporter(local_d8,param_1);
    this = NewImplicitLevelset(pFVar11,param_2,param_3,param_4,param_6,param_7,param_8,param_9);
  }
  pFVar4 = (param_1->Prefix).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// NewImplicitBox @ 144048f60

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicitBox
          (TBox<double> *param_1,float param_2,ECollisionTypeEnum param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FImplicitObject *this;
  double dVar10;
  double dVar11;
  
  dVar9 = __real_3fe0000000000000;
  dVar1 = (param_1->Max).field0_0x0._s_0.Z;
  dVar2 = (param_1->Max).field0_0x0._s_0.Y;
  dVar3 = (param_1->Max).field0_0x0._s_0.X;
  dVar11 = (double)(__real_3f800000 - param_2 * __real_3c23d70a);
  dVar7 = (dVar2 - (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000 * dVar11;
  dVar6 = (dVar3 - (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000 * dVar11;
  dVar11 = (dVar1 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000 * dVar11;
  dVar3 = (dVar3 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar5 = dVar7;
  if (dVar6 <= dVar7) {
    dVar5 = dVar6;
  }
  dVar2 = (dVar2 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar1 = (dVar1 + (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  if (dVar11 <= dVar5) {
    dVar5 = dVar11;
  }
  dVar8 = dVar5 * __real_3fa99999a0000000;
  if (__real_4024000000000000 <= dVar5 * __real_3fa99999a0000000) {
    dVar8 = __real_4024000000000000;
  }
  this = ::operator_new(0x50);
  if (this == (FImplicitObject *)0x0) {
    this = (FImplicitObject *)0x0;
  }
  else {
    dVar5 = dVar1 - dVar11;
    dVar10 = dVar2 - dVar7;
    Chaos::FImplicitObject::FImplicitObject(this,3,'\x01');
    dVar1 = dVar1 + dVar11;
    dVar2 = dVar2 + dVar7;
    this->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
    this[1]._padding_ = (longlong)dVar10;
    *(double *)&this[1].Margin = dVar5;
    this[1]._padding_ = (longlong)(dVar3 - dVar6);
    auVar4._8_4_ = SUB84(dVar2,0);
    auVar4._0_8_ = dVar3 + dVar6;
    auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])&this[1].Type = auVar4;
    this[2]._padding_ = (longlong)dVar1;
    dVar1 = dVar1 - dVar5;
    dVar10 = (double)this[2]._padding_ - dVar10;
    dVar2 = *(double *)&this[1].Type - (double)this[1]._padding_;
    if (((dVar10 <= dVar2) || (dVar1 <= dVar2)) && (dVar2 = dVar1, dVar10 <= dVar1)) {
      dVar2 = dVar10;
    }
    dVar1 = dVar2 * dVar9;
    if (dVar8 <= dVar2 * dVar9) {
      dVar1 = dVar8;
    }
    this->Margin = (float)dVar1;
  }
  UpdateImplicitFlags(this,param_3);
  return this;
}

// NewImplicitCapsule @ 144049180

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicitCapsule
          (TBox<double> *param_1,float param_2,ECollisionTypeEnum param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FCapsule *pFVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  double dVar9;
  uint uVar11;
  double dVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  
  dVar10 = (param_1->Max).field0_0x0._s_0.Z;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  dVar3 = (dVar1 - (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  dVar4 = (dVar2 - (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  dVar9 = (dVar10 - (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  uVar12 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_a8 = (dVar2 + (param_1->Min).field0_0x0._s_0.X) * __real_3fe0000000000000;
  uVar14 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_a0 = (dVar1 + (param_1->Min).field0_0x0._s_0.Y) * __real_3fe0000000000000;
  local_98 = (dVar10 + (param_1->Min).field0_0x0._s_0.Z) * __real_3fe0000000000000;
  uVar8 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar11 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar10 = (double)CONCAT44(uVar11,uVar8);
  if (((double)CONCAT44(uVar15,uVar14) < (double)CONCAT44(uVar13,uVar12) ||
       (double)CONCAT44(uVar15,uVar14) == (double)CONCAT44(uVar13,uVar12)) ||
     ((double)CONCAT44(uVar15,uVar14) < dVar10 || (double)CONCAT44(uVar15,uVar14) == dVar10)) {
    if (((double)CONCAT44(uVar15,uVar14) <= (double)CONCAT44(uVar13,uVar12) &&
         (double)CONCAT44(uVar13,uVar12) != (double)CONCAT44(uVar15,uVar14)) &&
       (dVar10 <= (double)CONCAT44(uVar13,uVar12) && (double)CONCAT44(uVar13,uVar12) != dVar10)) {
      dVar10 = 0.0;
      if ((double)CONCAT44(uVar15,uVar14) <= (double)CONCAT44(uVar11,uVar8)) {
        uVar8 = uVar14;
        uVar11 = uVar15;
      }
      dVar1 = 0.0;
      dVar2 = (double)CONCAT44(uVar13,uVar12) - (double)CONCAT44(uVar11,uVar8);
      goto LAB_144049275;
    }
    uVar8 = uVar12;
    uVar11 = uVar13;
    if ((double)CONCAT44(uVar15,uVar14) <= (double)CONCAT44(uVar13,uVar12)) {
      uVar8 = uVar14;
      uVar11 = uVar15;
    }
    dVar1 = 0.0;
    dVar10 = dVar10 - (double)CONCAT44(uVar11,uVar8);
  }
  else {
    if ((double)CONCAT44(uVar13,uVar12) <= dVar10) {
      dVar10 = (double)CONCAT44(uVar13,uVar12);
    }
    uVar8 = SUB84(dVar10,0);
    uVar11 = (uint)((ulonglong)dVar10 >> 0x20);
    dVar1 = (double)CONCAT44(uVar15,uVar14) - dVar10;
    dVar10 = 0.0;
  }
  dVar2 = 0.0;
LAB_144049275:
  auVar6._0_8_ = dVar2 * dVar2;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1 * dVar1 + auVar6._0_8_ + dVar10 * dVar10;
  auVar7 = sqrtpd(auVar6,auVar7);
  if (__real_3e45798ee0000000 <= auVar7._0_8_) {
    local_90 = local_a8 - dVar1;
    local_88 = local_a0 - dVar2;
    local_a8 = local_a8 + dVar1;
    local_a0 = local_a0 + dVar2;
    local_80 = local_98 - dVar10;
    local_98 = local_98 + dVar10;
    pFVar5 = ::operator_new(0x40);
    if (pFVar5 == (FCapsule *)0x0) {
      pFVar5 = (FCapsule *)0x0;
    }
    else {
      pFVar5 = Chaos::FCapsule::FCapsule
                         (pFVar5,(TVector<double,3> *)&local_90,(TVector<double,3> *)&local_a8,
                          (double)(__real_3f800000 - param_2 * __real_3c23d70a) *
                          (double)CONCAT44(uVar11,uVar8));
    }
    UpdateImplicitFlags((FImplicitObject *)pFVar5,param_3);
  }
  else {
    pFVar5 = (FCapsule *)NewImplicitSphere((double)CONCAT44(uVar11,uVar8),param_2,param_3);
  }
  return (FImplicitObject *)pFVar5;
}

// NewImplicitCapsule @ 1440493a0

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicitCapsule
          (double param_1,double param_2,float param_3,ECollisionTypeEnum param_4)

{
  double dVar1;
  FCapsule *pFVar2;
  undefined1 local_68 [24];
  TVector<double,3> local_50 [3];
  
  if (__real_3e45798ee0000000 <= param_2) {
    dVar1 = param_2 * __real_3fe0000000000000;
    pFVar2 = ::operator_new(0x40);
    if (pFVar2 == (FCapsule *)0x0) {
      pFVar2 = (FCapsule *)0x0;
    }
    else {
      local_68._0_8_ = 0;
      local_68._8_8_ = 0;
      local_50[0]._20_4_ =
           (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      local_50[0]._16_4_ = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
      local_50[0]._0_8_ = 0;
      local_50[0]._8_8_ = 0;
      local_68._16_8_ = dVar1;
      pFVar2 = Chaos::FCapsule::FCapsule
                         (pFVar2,local_50,(TVector<double,3> *)local_68,
                          (double)(__real_3f800000 - param_3 * __real_3c23d70a) * param_1);
    }
    UpdateImplicitFlags((FImplicitObject *)pFVar2,param_4);
  }
  else {
    pFVar2 = (FCapsule *)NewImplicitSphere(param_1,param_3,param_4);
  }
  return (FImplicitObject *)pFVar2;
}

// NewImplicitConvex @ 144049490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicitConvex
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TManagedArray<TRefCountPtr<Chaos::FConvex>_> *param_2,ECollisionTypeEnum param_3,
          TTransform<double> *param_4,double param_5,float param_6)

{
  longlong *plVar1;
  EIndexType EVar2;
  void *_Src;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  bool bVar10;
  uchar uVar11;
  int iVar12;
  int iVar13;
  FImplicitObject *pFVar14;
  FConvex *pFVar15;
  FImplicitObjectUnion *this;
  FConvex *pFVar16;
  TTransform<double> *pTVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  uint uVar44;
  uint uVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar54;
  undefined1 auVar51 [16];
  double dVar55;
  double dVar58;
  undefined4 uVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  float fVar75;
  double dVar76;
  undefined1 auVar77 [16];
  double dVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar88;
  uint uVar89;
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 local_1d8;
  ECollisionTypeEnum local_1d7;
  undefined1 local_1d6 [6];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_1b0;
  TRefCountPtr<Chaos::FImplicitObject> local_1a0;
  uint local_198;
  TTransform<double> *local_190;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_188;
  FConvex *local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  TManagedArray<TRefCountPtr<Chaos::FConvex>_> *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FScriptContainerElement *local_150;
  double local_148 [2];
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  FConvex *pFVar23;
  uint uVar52;
  
  local_198 = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)local_198;
  if (local_198 == 0) {
    return (FImplicitObject *)0x0;
  }
  pFVar16 = (FConvex *)0x0;
  pFVar24 = (param_1->AllocatorInstance).Data;
  local_150 = pFVar24 + uVar18 * 4;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 0;
  uVar44 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar52 = _UNK_15061cc88;
  uVar53 = _UNK_15061cc8c;
  local_1d7 = param_3;
  local_190 = param_4;
  local_160 = param_2;
  local_158 = param_1;
  do {
    pFVar4 = local_150;
    if (local_158->ArrayNum != (int)uVar18) {
      local_1d8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1d8);
    }
    uVar21 = 0;
    if (pFVar24 == pFVar4) {
      iVar12 = (int)local_1c8;
      if ((int)local_1c8 != 0) {
        if ((int)local_1c8 == 1) {
          pFVar16 = *(FConvex **)local_1d0.Data;
        }
        else {
          local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c0.ArrayNum = 0;
          local_1c0.ArrayMax = 0;
          pFVar24 = local_1d0.Data + (longlong)(int)local_1c8 * 8;
          FVar20.Data = local_1d0.Data;
          while( true ) {
            if ((int)local_1c8 != iVar12) {
              local_1d6[0] = 0;
              `TCheckedPointerIterator<Chaos::FImplicitObject_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1d6);
            }
            if (FVar20.Data == pFVar24) break;
            local_1a0.Reference = *(FImplicitObject **)FVar20.Data;
            if ((FConvex *)local_1a0.Reference != (FConvex *)0x0) {
              LOCK();
              *(int *)&((FConvex *)local_1a0.Reference)->_padding_ =
                   (int)((FConvex *)local_1a0.Reference)->_padding_ + 1;
              UNLOCK();
            }
            if (((local_1c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a0) &&
                ((FScriptContainerElement *)&local_1a0 <
                 local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayMax * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              pFVar14 = (FImplicitObject *)(*pcVar5)();
              return pFVar14;
            }
            if (local_1c0.ArrayNum == local_1c0.ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1c0.AllocatorInstance,&local_1c0.ArrayMax);
              local_1c0.ArrayNum = iVar13;
            }
            lVar25 = (longlong)local_1c0.ArrayNum;
            local_1c0.ArrayNum = local_1c0.ArrayNum + 1;
            *(undefined8 *)(local_1c0.AllocatorInstance.Data + lVar25 * 8) = 0;
            *(FImplicitObject **)(local_1c0.AllocatorInstance.Data + lVar25 * 8) =
                 local_1a0.Reference;
            if ((FConvex *)local_1a0.Reference != (FConvex *)0x0) {
              LOCK();
              *(int *)&(local_1a0.Reference)->_padding_ = (int)(local_1a0.Reference)->_padding_ + 1;
              UNLOCK();
              if ((FConvex *)local_1a0.Reference != (FConvex *)0x0) {
                LOCK();
                plVar1 = &(local_1a0.Reference)->_padding_;
                lVar25 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if (((int)lVar25 == 1) &&
                   (*(int *)((longlong)&(local_1a0.Reference)->_padding_ + 4) == 0)) {
                  (**(code **)(local_1a0.Reference)->_padding_)(local_1a0.Reference,1);
                }
              }
            }
            FVar20.Data = FVar20.Data + 8;
          }
          this = ::operator_new(0x70);
          if (this != (FImplicitObjectUnion *)0x0) {
            pFVar16 = (FConvex *)Chaos::FImplicitObjectUnion::FImplicitObjectUnion(this,&local_1c0);
          }
          DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                    ((TRefCountPtr<Chaos::FImplicitObject> *)local_1c0.AllocatorInstance.Data,
                     local_1c0.ArrayNum);
          if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.AllocatorInstance.Data);
          }
        }
      }
      if (local_1d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data);
      }
      return (FImplicitObject *)pFVar16;
    }
    uVar54 = *(uint *)pFVar24;
    uVar88 = uVar21;
    if ((int)uVar54 < *(int *)&param_2->field_0x18) {
      uVar88 = ~uVar54 >> 0x1f;
    }
    if ((uVar88 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FImplicitObject *)(*pcVar5)();
      return pFVar14;
    }
    if (*(longlong *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar54 * 8) != 0) {
      uVar54 = *(uint *)pFVar24;
      uVar88 = uVar21;
      if ((int)uVar54 < *(int *)&param_2->field_0x18) {
        uVar88 = ~uVar54 >> 0x1f;
      }
      if ((uVar88 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FImplicitObject *)(*pcVar5)();
        return pFVar14;
      }
      lVar25 = *(longlong *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar54 * 8);
      local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.ArrayNum = *(int *)(lVar25 + 0x38);
      lVar19 = (longlong)local_1b0.ArrayNum;
      _Src = *(void **)(lVar25 + 0x30);
      if (local_1b0.ArrayNum == 0) {
        local_1b0.ArrayMax = 0;
        iVar12 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_1b0.ArrayNum,0,&local_1b0.AllocatorInstance,local_1b0.ArrayNum,
                   &local_1b0.ArrayMax);
        memcpy(local_1b0.AllocatorInstance.Data,_Src,lVar19 * 0xc);
        iVar12 = local_1b0.ArrayNum;
      }
      uVar54 = *(uint *)pFVar24;
      uVar88 = uVar21;
      if ((int)uVar54 < *(int *)&param_2->field_0x18) {
        uVar88 = ~uVar54 >> 0x1f;
      }
      if ((uVar88 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar12 = local_1b0.ArrayNum, bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FImplicitObject *)(*pcVar5)();
        return pFVar14;
      }
      fVar65 = GlobalVectorConstants::SmallNumber.m128_f32[0];
      fVar70 = GlobalVectorConstants::SmallNumber.m128_f32[1];
      fVar75 = GlobalVectorConstants::SmallNumber.m128_f32[2];
      fVar90 = GlobalVectorConstants::SmallNumber.m128_f32[3];
      uVar88 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      uVar89 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      dVar55 = (local_190->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar58 = (local_190->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      lVar25 = *(longlong *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar54 * 8);
      auVar45._8_4_ = SUB84(dVar58,0);
      auVar45._0_8_ = dVar55;
      uVar59 = (undefined4)((ulonglong)dVar58 >> 0x20);
      auVar45._12_4_ = uVar59;
      auVar60._0_8_ =
           (local_190->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      auVar60._8_8_ =
           (local_190->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar33 = (double)*(float *)(lVar25 + 0x70);
      auVar46 = blendpd(auVar45,auVar60,2);
      local_108 = (double)*(float *)(lVar25 + 0x74);
      local_118._8_4_ = SUB84(dVar33,0);
      local_118._0_8_ = (double)*(float *)(lVar25 + 0x6c);
      local_118._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      dVar66 = (double)*(float *)(lVar25 + 0x6c) - (local_190->Translation).XY.m128d_f64[0];
      dVar33 = dVar33 - (local_190->Translation).XY.m128d_f64[1];
      uVar74 = (undefined4)((ulonglong)dVar33 >> 0x20);
      dVar26 = local_108 - (local_190->Translation).ZW.m128d_f64[0];
      auVar41._8_4_ = SUB84(dVar58,0);
      auVar41._0_8_ = dVar55;
      auVar41._12_4_ = uVar59;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = dVar26;
      dVar43 = auVar41._8_8_;
      auVar82._8_4_ = SUB84(dVar33,0);
      auVar82._0_8_ = dVar66;
      auVar82._12_4_ = uVar74;
      auVar84._8_4_ = SUB84(auVar60._0_8_,0);
      auVar84._0_8_ = dVar43;
      auVar84._12_4_ = (int)((ulonglong)auVar60._0_8_ >> 0x20);
      auVar34._8_4_ = SUB84(dVar33,0);
      auVar34._0_8_ = dVar66;
      auVar34._12_4_ = uVar74;
      auVar35 = blendpd(auVar34,auVar87,2);
      auVar83._0_8_ = auVar82._8_8_ * dVar55 - dVar43 * dVar66;
      auVar83._8_8_ = dVar26 * dVar58 - auVar84._8_8_ * dVar33;
      auVar77._8_4_ = SUB84(auVar83._8_8_,0);
      auVar77._0_8_ = auVar83._0_8_;
      auVar77._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
      auVar36._0_8_ = auVar35._0_8_ * auVar60._0_8_ - auVar46._0_8_ * dVar26;
      auVar36._8_8_ = auVar35._8_8_ * auVar60._8_8_ - auVar46._8_8_ * 0.0;
      dVar76 = auVar77._8_8_ + auVar77._8_8_;
      dVar81 = auVar36._0_8_ + auVar36._0_8_;
      auVar84 = blendpd(auVar83,auVar36,2);
      auVar85._0_8_ = auVar84._0_8_ + auVar84._0_8_;
      auVar85._8_8_ = auVar84._8_8_ + auVar84._8_8_;
      uVar59 = SUB84(dVar81,0);
      auVar71._8_4_ = uVar59;
      auVar71._0_8_ = dVar76;
      uVar74 = (undefined4)((ulonglong)dVar81 >> 0x20);
      auVar71._12_4_ = uVar74;
      auVar35._8_4_ = uVar59;
      auVar35._0_8_ = dVar76;
      auVar35._12_4_ = uVar74;
      auVar67._8_4_ = uVar59;
      auVar67._0_8_ = dVar76;
      auVar67._12_4_ = uVar74;
      auVar84 = blendpd(auVar67,auVar85,2);
      auVar72._0_8_ = auVar71._8_8_ * dVar55 - dVar76 * dVar43;
      auVar72._8_8_ = auVar85._0_8_ * dVar58 - auVar35._8_8_ * auVar60._0_8_;
      auVar91._8_4_ = SUB84(auVar85._8_8_,0);
      auVar91._0_8_ = auVar85._0_8_;
      auVar91._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
      auVar8._4_8_ = auVar60._8_8_;
      auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar61._0_8_ = auVar8._0_8_ << 0x20;
      auVar61._8_4_ = uVar88;
      auVar61._12_4_ = uVar89;
      auVar68._0_8_ = auVar84._0_8_ * auVar60._0_8_ - auVar85._0_8_ * auVar46._0_8_;
      auVar68._8_8_ = auVar84._8_8_ * auVar60._8_8_ - auVar91._8_8_ * auVar46._8_8_;
      auVar84 = *(undefined1 (*) [16])(local_190->Scale3D).ZW.m128d_f64;
      auVar47._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(local_190->Scale3D).XY.m128d_f64 + 4) & uVar22,
                            *(uint *)(local_190->Scale3D).XY.m128d_f64 & uVar44);
      auVar47._8_4_ = *(uint *)((local_190->Scale3D).XY.m128d_f64 + 1) & uVar52;
      auVar47._12_4_ = *(uint *)((longlong)(local_190->Scale3D).XY.m128d_f64 + 0xc) & uVar53;
      auVar62._8_8_ = auVar61._8_8_;
      auVar62._0_8_ = auVar84._0_8_;
      lVar25 = -(ulonglong)
                ((double)CONCAT44(auVar84._4_4_ & uVar22,auVar84._0_4_ & uVar44) <= (double)fVar75);
      lVar19 = -(ulonglong)(auVar47._8_8_ <= (double)fVar70);
      local_128 = 0;
      uStack_120 = 0;
      auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(local_190->Scale3D).XY.m128d_f64);
      auVar48._0_8_ =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar47._0_8_ <= (double)fVar65) >> 0x20) &
                            auVar84._4_4_,
                            ~(uint)-(ulonglong)(auVar47._0_8_ <= (double)fVar65) & auVar84._0_4_);
      auVar48._8_4_ = ~(uint)lVar19 & auVar84._8_4_;
      auVar48._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar84._12_4_;
      auVar46._8_4_ = SUB84(auVar72._8_8_,0);
      auVar46._0_8_ = auVar72._0_8_;
      auVar46._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
      local_148[0] = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
      local_148[1] = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
      auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar62);
      local_100 = auVar48._0_8_ * (dVar76 * auVar60._8_8_ + dVar66 + auVar46._8_8_);
      dStack_f8 = auVar48._8_8_ * (dVar81 * auVar60._8_8_ + dVar33 + auVar68._0_8_);
      local_164 = (float)local_100;
      auVar35 = blendpd(auVar72,auVar68,2);
      local_168 = (float)dStack_f8;
      local_f0 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar84._4_4_,
                                  ~(uint)lVar25 & auVar84._0_4_) *
                 (auVar85._0_8_ * auVar60._8_8_ + dVar26 + auVar35._0_8_);
      local_170 = (float)local_f0;
      local_16c = __real_3f800000 - param_6 * __real_3c23d70a;
      pTVar17 = local_190;
      pFVar23 = pFVar16;
      pFVar15 = pFVar16;
      if (0 < iVar12) {
        while( true ) {
          uVar22 = (uint)pFVar23;
          uVar44 = uVar21;
          if ((int)uVar22 < iVar12) {
            uVar44 = ~uVar22 >> 0x1f;
          }
          if (uVar44 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              pFVar14 = (FImplicitObject *)(*pcVar5)();
              return pFVar14;
            }
            uVar88 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            uVar89 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            fVar65 = GlobalVectorConstants::SmallNumber.m128_f32[0];
            fVar70 = GlobalVectorConstants::SmallNumber.m128_f32[1];
            fVar75 = GlobalVectorConstants::SmallNumber.m128_f32[2];
            fVar90 = GlobalVectorConstants::SmallNumber.m128_f32[3];
            pTVar17 = local_190;
            iVar12 = local_1b0.ArrayNum;
          }
          dVar55 = (pTVar17->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar58 = (pTVar17->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar49._8_4_ = SUB84(dVar58,0);
          auVar49._0_8_ = dVar55;
          uVar59 = (undefined4)((ulonglong)dVar58 >> 0x20);
          auVar49._12_4_ = uVar59;
          auVar69._0_8_ =
               (pTVar17->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar69._8_8_ =
               (pTVar17->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar91 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(pTVar17->Scale3D).XY.m128d_f64);
          dVar33 = (double)*(float *)((undefined1 *)((longlong)&pFVar15->_padding_ + 4) +
                                     (longlong)local_1b0.AllocatorInstance.Data);
          auVar35 = blendpd(auVar49,auVar69,2);
          auVar86._8_4_ = SUB84(auVar69._8_8_,0);
          auVar86._0_8_ = auVar69._0_8_;
          auVar86._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
          local_138 = (double)*(float *)((longlong)&pFVar15->_padding_ +
                                        local_1b0.AllocatorInstance.Data);
          local_148[1]._0_4_ = SUB84(dVar33,0);
          local_148[0] = (double)*(float *)(local_1b0.AllocatorInstance.Data +
                                           (longlong)&pFVar15->_padding_);
          local_148[1]._4_4_ = (int)((ulonglong)dVar33 >> 0x20);
          dVar66 = (double)*(float *)(local_1b0.AllocatorInstance.Data +
                                     (longlong)&pFVar15->_padding_) -
                   (pTVar17->Translation).XY.m128d_f64[0];
          dVar33 = dVar33 - (pTVar17->Translation).XY.m128d_f64[1];
          uVar74 = (undefined4)((ulonglong)dVar33 >> 0x20);
          dVar26 = local_138 - (pTVar17->Translation).ZW.m128d_f64[0];
          auVar42._8_4_ = SUB84(dVar58,0);
          auVar42._0_8_ = dVar55;
          auVar42._12_4_ = uVar59;
          dVar43 = auVar42._8_8_;
          auVar78._8_4_ = SUB84(dVar33,0);
          auVar78._0_8_ = dVar66;
          auVar78._12_4_ = uVar74;
          auVar27._8_4_ = SUB84(auVar69._0_8_,0);
          auVar27._0_8_ = dVar43;
          auVar27._12_4_ = (int)((ulonglong)auVar69._0_8_ >> 0x20);
          auVar37._8_4_ = SUB84(dVar33,0);
          auVar37._0_8_ = dVar66;
          auVar37._12_4_ = uVar74;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = dVar26;
          auVar84 = blendpd(auVar37,auVar6,2);
          auVar79._0_8_ = auVar78._8_8_ * dVar55 - dVar43 * dVar66;
          auVar79._8_8_ = dVar26 * dVar58 - auVar27._8_8_ * dVar33;
          auVar73._8_4_ = SUB84(auVar79._8_8_,0);
          auVar73._0_8_ = auVar79._0_8_;
          auVar73._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
          auVar38._0_8_ = auVar84._0_8_ * auVar69._0_8_ - auVar35._0_8_ * dVar26;
          auVar38._8_8_ = auVar84._8_8_ * auVar69._8_8_ - auVar35._8_8_ * 0.0;
          auVar84 = blendpd(auVar79,auVar38,2);
          dVar76 = auVar73._8_8_ + auVar73._8_8_;
          dVar81 = auVar38._0_8_ + auVar38._0_8_;
          auVar80._0_8_ = auVar84._0_8_ + auVar84._0_8_;
          auVar80._8_8_ = auVar84._8_8_ + auVar84._8_8_;
          uVar59 = SUB84(dVar81,0);
          auVar63._8_4_ = uVar59;
          auVar63._0_8_ = dVar76;
          uVar74 = (undefined4)((ulonglong)dVar81 >> 0x20);
          auVar63._12_4_ = uVar74;
          auVar28._8_4_ = uVar59;
          auVar28._0_8_ = dVar76;
          auVar28._12_4_ = uVar74;
          auVar56._8_4_ = uVar59;
          auVar56._0_8_ = dVar76;
          auVar56._12_4_ = uVar74;
          auVar64._0_8_ = auVar63._8_8_ * dVar55 - dVar76 * dVar43;
          auVar64._8_8_ = auVar80._0_8_ * dVar58 - auVar28._8_8_ * auVar69._0_8_;
          auVar84 = blendpd(auVar56,auVar80,2);
          auVar29._8_4_ = SUB84(auVar80._8_8_,0);
          auVar29._0_8_ = auVar80._0_8_;
          auVar29._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
          auVar57._0_8_ = auVar84._0_8_ * auVar69._0_8_ - auVar80._0_8_ * auVar35._0_8_;
          auVar57._8_8_ = auVar84._8_8_ * auVar69._8_8_ - auVar29._8_8_ * auVar35._8_8_;
          auVar84 = *(undefined1 (*) [16])(pTVar17->Scale3D).ZW.m128d_f64;
          auVar50._0_8_ =
               (double)CONCAT44(auVar84._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar84._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar50._8_4_ = uVar88 & _UNK_15061cc88;
          auVar50._12_4_ = uVar89 & _UNK_15061cc8c;
          auVar7._8_4_ = uVar88;
          auVar7._0_8_ = auVar84._0_8_;
          auVar7._12_4_ = uVar89;
          auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
          lVar25 = -(ulonglong)(auVar50._8_8_ <= (double)fVar90);
          auVar39._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                *(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 4),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                *(uint *)(pTVar17->Scale3D).XY.m128d_f64);
          auVar39._8_4_ = _UNK_15061cc88 & *(uint *)((pTVar17->Scale3D).XY.m128d_f64 + 1);
          auVar39._12_4_ =
               _UNK_15061cc8c & *(uint *)((longlong)(pTVar17->Scale3D).XY.m128d_f64 + 0xc);
          lVar19 = -(ulonglong)(auVar39._8_8_ <= (double)fVar70);
          auVar30._8_4_ = SUB84(auVar64._8_8_,0);
          auVar30._0_8_ = auVar64._0_8_;
          auVar30._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
          auVar40._0_8_ =
               (double)CONCAT44(~(uint)(-(ulonglong)(auVar39._0_8_ <= (double)fVar65) >> 0x20) &
                                auVar91._4_4_,
                                ~(uint)-(ulonglong)(auVar39._0_8_ <= (double)fVar65) & auVar91._0_4_
                               );
          auVar40._8_4_ = ~(uint)lVar19 & auVar91._8_4_;
          auVar40._12_4_ = ~(uint)((ulonglong)lVar19 >> 0x20) & auVar91._12_4_;
          uVar44 = (uint)-(ulonglong)(auVar50._0_8_ <= (double)fVar75);
          uVar53 = (uint)lVar25;
          uVar54 = (uint)((ulonglong)lVar25 >> 0x20);
          auVar51._0_4_ = uVar44 & (uint)local_128;
          uVar52 = (uint)(-(ulonglong)(auVar50._0_8_ <= (double)fVar75) >> 0x20);
          auVar51._4_4_ = uVar52 & local_128._4_4_;
          auVar51._8_4_ = uVar53 & (uint)uStack_120;
          auVar51._12_4_ = uVar54 & uStack_120._4_4_;
          local_e8 = auVar40._0_8_ * (dVar76 * auVar86._8_8_ + dVar66 + auVar30._8_8_);
          dStack_e0 = auVar40._8_8_ * (dVar81 * auVar69._8_8_ + dVar33 + auVar57._0_8_);
          auVar31._0_4_ = ~uVar44 & auVar84._0_4_;
          auVar31._4_4_ = ~uVar52 & auVar84._4_4_;
          auVar31._8_4_ = ~uVar53 & auVar84._8_4_;
          auVar31._12_4_ = ~uVar54 & auVar84._12_4_;
          uVar44 = uVar21;
          if ((int)uVar22 < iVar12) {
            uVar44 = ~uVar22 >> 0x1f;
          }
          auVar84 = blendpd(auVar64,auVar57,2);
          local_d8 = SUB168(auVar31 | auVar51,0) *
                     (auVar80._0_8_ * auVar86._8_8_ + dVar26 + auVar84._0_8_);
          auVar9._4_8_ = SUB168(auVar31 | auVar51,8) *
                         (auVar80._8_8_ * auVar69._8_8_ + 0.0 + auVar84._8_8_);
          auVar9._0_4_ = (int)((ulonglong)local_e8 >> 0x20);
          auVar32._0_8_ = auVar9._0_8_ << 0x20;
          auVar32._8_4_ = SUB84(dStack_e0,0);
          auVar32._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
          fVar65 = ((float)local_d8 - local_170) * local_16c + local_170;
          fVar70 = ((float)auVar32._8_8_ - local_168) * local_16c + local_168;
          fVar75 = ((float)local_e8 - local_164) * local_16c + local_164;
          if ((uVar44 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             pTVar17 = local_190, bVar10)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FImplicitObject *)(*pcVar5)();
            return pFVar14;
          }
          *(float *)(local_1b0.AllocatorInstance.Data + (longlong)&pFVar15->_padding_) = fVar75;
          *(float *)((undefined1 *)((longlong)&pFVar15->_padding_ + 4) +
                    (longlong)local_1b0.AllocatorInstance.Data) = fVar70;
          *(float *)((longlong)&pFVar15->_padding_ + local_1b0.AllocatorInstance.Data) = fVar65;
          param_2 = local_160;
          if (local_1b0.ArrayNum <= (int)(uVar22 + 1)) break;
          fVar65 = GlobalVectorConstants::SmallNumber.m128_f32[0];
          fVar70 = GlobalVectorConstants::SmallNumber.m128_f32[1];
          fVar75 = GlobalVectorConstants::SmallNumber.m128_f32[2];
          fVar90 = GlobalVectorConstants::SmallNumber.m128_f32[3];
          uVar88 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          uVar89 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          pFVar23 = (FConvex *)(ulonglong)(uVar22 + 1);
          pFVar15 = (FConvex *)((longlong)&pFVar15->_padding_ + 4);
          iVar12 = local_1b0.ArrayNum;
        }
      }
      fVar65 = __real_3f800000;
      uVar44 = *(uint *)pFVar24;
      if ((int)uVar44 < *(int *)&param_2->field_0x18) {
        uVar21 = ~uVar44 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FImplicitObject *)(*pcVar5)();
        return pFVar14;
      }
      lVar25 = *(longlong *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar44 * 8);
      dVar33 = (double)*(float *)(lVar25 + 0x54) - (double)*(float *)(lVar25 + 0x48);
      dVar66 = (double)*(float *)(lVar25 + 0x4c) - (double)*(float *)(lVar25 + 0x40);
      dVar26 = (double)*(float *)(lVar25 + 0x50) - (double)*(float *)(lVar25 + 0x44);
      if (((dVar26 <= dVar66) || (dVar33 <= dVar66)) && (dVar66 = dVar33, dVar26 <= dVar33)) {
        dVar66 = dVar26;
      }
      pFVar15 = ::operator_new(0xb0);
      pFVar23 = pFVar16;
      if (pFVar15 != (FConvex *)0x0) {
        Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pFVar15,3,'\b');
        pFVar15->_padding_ = (longlong)&___7FConvex_Chaos__6B_;
        *(undefined4 *)&(pFVar15->LocalBoundingBox).MMin = 0x7f7fffff;
        *(undefined4 *)&(pFVar15->LocalBoundingBox).MMin.field_0x4 = 0x7f7fffff;
        *(undefined4 *)&(pFVar15->LocalBoundingBox).MMin.field_0x8 = 0x7f7fffff;
        *(undefined4 *)&(pFVar15->LocalBoundingBox).MMax = 0xff7fffff;
        *(undefined4 *)&(pFVar15->LocalBoundingBox).MMax.field_0x4 = 0xff7fffff;
        *(undefined4 *)&(pFVar15->LocalBoundingBox).MMax.field_0x8 = 0xff7fffff;
        (pFVar15->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->Planes).ArrayNum = 0;
        (pFVar15->Planes).ArrayMax = 0;
        (pFVar15->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar15->Vertices).ArrayNum = 0;
        (pFVar15->Vertices).ArrayMax = 0;
        (pFVar15->StructureData).Data.Ptr = (void *)0x0;
        (pFVar15->StructureData).IndexType = None;
        *(undefined8 *)&pFVar15->CenterOfMass = 0;
        *(undefined4 *)&(pFVar15->CenterOfMass).field_0x8 = 0;
        *(undefined8 *)&pFVar15->RotationOfMass = 0;
        *(undefined8 *)&(pFVar15->RotationOfMass).field_0x8 = 0;
        *(undefined8 *)&(pFVar15->RotationOfMass).field_0x10 = 0;
        *(undefined8 *)&(pFVar15->RotationOfMass).field_0x18 = 0;
        pFVar23 = pFVar15;
        param_2 = local_160;
        if (local_1b0.ArrayNum != 0) {
          local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.ArrayNum = 0;
          local_188.ArrayMax = 0;
          Chaos::FConvexBuilder::Build
                    (&local_1b0,&pFVar15->Planes,&local_188,&pFVar15->Vertices,
                     &pFVar15->LocalBoundingBox,Default);
          Chaos::
          CalculateVolumeAndCenterOfMass<float,TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                    (&pFVar15->Vertices,&local_188,&pFVar15->Volume,&pFVar15->CenterOfMass);
          Chaos::FConvexBuilder::MergeFaces(&pFVar15->Planes,&local_188,&pFVar15->Vertices,fVar65);
          Chaos::FConvexBuilder::MergeColinearEdges
                    (&pFVar15->Planes,&local_188,&pFVar15->Vertices,__real_358637bd);
          Chaos::FConvex::CreateStructureData(pFVar15,&local_188,false);
          Chaos::FConvex::ComputeUnitMassInertiaTensorAndRotationOfMass
                    (pFVar15,(double)pFVar15->Volume);
          *(float *)&pFVar15->_padding_ = (float)(dVar66 * param_5);
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)local_188.AllocatorInstance.Data,
                     local_188.ArrayNum);
          param_2 = local_160;
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_188.AllocatorInstance.Data !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_188.AllocatorInstance.Data);
            param_2 = local_160;
          }
        }
      }
      if ((pFVar23->Vertices).ArrayNum < 1) {
        if ((pFVar23->StructureData).Data.Ptr != (void *)0x0) {
          if (((pFVar23->StructureData).IndexType == None) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexType != EIndexType::None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                                  ,0x187,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FImplicitObject *)(*pcVar5)();
            return pFVar14;
          }
          EVar2 = (pFVar23->StructureData).IndexType;
          if ((((EVar2 == Small) || (EVar2 == Medium)) || (EVar2 == Large)) &&
             (puVar3 = (pFVar23->StructureData).Data.Ptr, puVar3 != (undefined8 *)0x0)) {
            if ((void *)puVar3[8] != (void *)0x0) {
              FMemory::Free((void *)puVar3[8]);
            }
            if ((void *)puVar3[6] != (void *)0x0) {
              FMemory::Free((void *)puVar3[6]);
            }
            if ((void *)puVar3[4] != (void *)0x0) {
              FMemory::Free((void *)puVar3[4]);
            }
            if ((void *)puVar3[2] != (void *)0x0) {
              FMemory::Free((void *)puVar3[2]);
            }
            if ((void *)*puVar3 != (void *)0x0) {
              FMemory::Free((void *)*puVar3);
            }
            ::operator_delete(puVar3,0x50);
          }
          (pFVar23->StructureData).IndexType = None;
          (pFVar23->StructureData).Data.Ptr = (void *)0x0;
        }
        pFVar4 = (pFVar23->Vertices).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        pFVar4 = (pFVar23->Planes).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        Chaos::FImplicitObject::~FImplicitObject((FImplicitObject *)pFVar23);
        ::operator_delete(pFVar23,0xb0);
      }
      else {
        local_178 = pFVar23;
        if (local_1d7 == Chaos_Surface_Volumetric) {
          *(undefined1 *)((longlong)&pFVar23->_padding_ + 1) = 6;
          uVar11 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar23);
          if (uVar11 == '\x06') {
            *(undefined2 *)((longlong)&pFVar23->_padding_ + 4) = 0;
          }
        }
        else {
          uVar11 = Chaos::FImplicitObject::GetType((FImplicitObject *)pFVar23);
          *(uchar *)((longlong)&pFVar23->_padding_ + 1) = uVar11;
        }
        if (((local_1d0.Data <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 < local_1d0.Data + (longlong)local_1c8._4_4_ * 8)
            ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FImplicitObject *)(*pcVar5)();
          return pFVar14;
        }
        iVar12 = (int)local_1c8;
        if ((int)local_1c8 == local_1c8._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1d0,(int *)((longlong)&local_1c8 + 4));
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar12 + 1);
        *(FConvex **)(local_1d0.Data + (longlong)iVar12 * 8) = local_178;
      }
      uVar44 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar52 = _UNK_15061cc88;
      uVar53 = _UNK_15061cc8c;
      if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
        uVar44 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar52 = _UNK_15061cc88;
        uVar53 = _UNK_15061cc8c;
      }
    }
    pFVar24 = pFVar24 + 4;
    uVar18 = (ulonglong)local_198;
  } while( true );
}

// NewImplicitLevelset @ 14404a210

/* WARNING: Enum "Type": Some values do not have unique names */

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicitLevelset
          (FErrorReporter *param_1,TParticles<double,3> *param_2,FTriangleMesh *param_3,
          TBox<double> *param_4,int param_5,int param_6,float param_7,ECollisionTypeEnum param_8)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FErrorReporter *pFVar15;
  FLevelSet *pFVar16;
  FImplicitObject *pFVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  double dVar22;
  double dVar24;
  uint uVar25;
  uint uVar26;
  FString local_148;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  FErrorReporter local_c8 [8];
  
  dVar6 = __real_3f1a36e2e0000000;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = ((param_4->Max).field0_0x0._s_0.X - (param_4->Min).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar9 = ((param_4->Max).field0_0x0._s_0.Y - (param_4->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar10 = ((param_4->Max).field0_0x0._s_0.Z - (param_4->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  uVar21 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar23,uVar21) <= (double)CONCAT44(uVar26,uVar25)) {
    uVar25 = uVar21;
    uVar26 = uVar23;
  }
  uVar21 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar23,uVar21) <= (double)CONCAT44(uVar26,uVar25)) {
    uVar25 = uVar21;
    uVar26 = uVar23;
  }
  if ((double)CONCAT44(uVar26,uVar25) < __real_3f1a36e2e0000000) {
    pFVar2 = (param_1->Prefix).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar16 = (FLevelSet *)0x0;
  }
  else {
    pFVar15 = Chaos::FErrorReporter::FErrorReporter(local_c8,param_1);
    pFVar16 = NewLevelset(pFVar15,param_2,param_3,param_4,param_5,param_6,param_8);
    dVar24 = __real_3ff0000000000000;
    if (pFVar16 == (FLevelSet *)0x0) {
      if ((param_1->Prefix).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Prefix).Data.AllocatorInstance.Data;
      }
      iVar13 = FGenericPlatformStricmp::Stricmp(pwVar18,"");
      if (iVar13 == 0) {
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_Chaos::FErrorReporter::ReportWarning(wchar_t_const*___ptr64)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      else if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_Chaos::FErrorReporter::ReportWarning(wchar_t_const*___ptr64)___ptr64'
                    ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
      param_1->bEncountedErrors = true;
      param_1->bUnhandledErrors = true;
    }
    else {
      local_128 = *(double *)&(pFVar16->MLocalBoundingBox).MMin;
      dStack_120 = *(double *)&(pFVar16->MLocalBoundingBox).MMin.field_0x8;
      uVar25 = 0;
      iVar13 = *(int *)&(pFVar16->MPhi).field_0x18;
      local_118 = *(double *)&(pFVar16->MLocalBoundingBox).MMin.field_0x10;
      local_100 = *(double *)&(pFVar16->MLocalBoundingBox).MMax.field_0x10;
      dVar5 = 0.0;
      dVar1 = *(double *)&(pFVar16->MGrid).field_0x48;
      dVar7 = dVar1 * *(double *)&(pFVar16->MGrid).field_0x40 *
              *(double *)&(pFVar16->MGrid).field_0x50;
      local_110 = *(undefined1 (*) [16])&(pFVar16->MLocalBoundingBox).MMax;
      dVar1 = (dVar1 + *(double *)&(pFVar16->MGrid).field_0x40 +
              *(double *)&(pFVar16->MGrid).field_0x50) * __real_3fd5555555555555;
      dVar22 = (local_110._0_8_ - local_128) * (local_110._8_8_ - dStack_120) *
               (local_100 - local_118);
      local_138._8_4_ = local_110._8_4_;
      local_138._0_8_ = dVar22;
      local_138._12_4_ = local_110._12_4_;
      dVar11 = 0.0;
      if (0 < iVar13) {
        lVar19 = 0;
        do {
          uVar26 = 0;
          if ((int)uVar25 < iVar13) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FImplicitObject *)(*pcVar4)();
            return pFVar17;
          }
          dVar22 = *(double *)(lVar19 + *(longlong *)&(pFVar16->MPhi).field_0x10);
          if (dVar22 <= 0.0) {
            dVar22 = dVar1 - (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar14,
                                              SUB84(dVar22,0) & uVar20);
            if (dVar22 <= dVar6) {
              dVar5 = dVar5 + dVar7;
            }
            else {
              dVar22 = dVar22 / dVar1;
              if (dVar24 <= dVar22) {
                dVar22 = dVar24;
              }
              dVar5 = dVar5 + dVar22 * dVar7;
            }
          }
          iVar13 = *(int *)&(pFVar16->MPhi).field_0x18;
          uVar25 = uVar25 + 1;
          lVar19 = lVar19 + 8;
        } while ((int)uVar25 < iVar13);
        dVar22 = (double)local_138._0_8_;
        dVar11 = dVar5;
      }
      if (dVar11 < dVar22 * __real_3fa999999999999a) {
        local_f8 = *(undefined8 *)&(pFVar16->MLocalBoundingBox).MMin;
        uStack_f0 = *(undefined8 *)&(pFVar16->MLocalBoundingBox).MMin.field_0x8;
        local_e0 = *(undefined8 *)&(pFVar16->MLocalBoundingBox).MMax;
        uStack_d8 = *(undefined8 *)&(pFVar16->MLocalBoundingBox).MMax.field_0x8;
        local_e8 = *(undefined8 *)&(pFVar16->MLocalBoundingBox).MMin.field_0x10;
        local_d0 = *(undefined8 *)&(pFVar16->MLocalBoundingBox).MMax.field_0x10;
        ::FString::PrintfImpl
                  (&local_148,
                   L"Level set is small or empty:\n    domain extent: (%g %g %g) volume: %g\n    estimated level set volume: %g\n    percentage filled: %g%%"
                  );
        if ((param_1->Prefix).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(param_1->Prefix).Data.AllocatorInstance.Data;
        }
        iVar13 = FGenericPlatformStricmp::Stricmp(pwVar18,"");
        if (iVar13 == 0) {
          if (4 < (byte)LogChaos._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_Chaos::FErrorReporter::ReportLog(wchar_t_const*___ptr64)___ptr64'
                        ::__l26::LOG_Static,(FLogCategoryBase *)&LogChaos);
          }
        }
        else if (4 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_Chaos::FErrorReporter::ReportLog(wchar_t_const*___ptr64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      dVar6 = (double)(param_7 * __real_3c23d70a);
      dVar24 = dVar6 * dVar9;
      if (dVar6 * dVar10 <= dVar6 * dVar9) {
        dVar24 = dVar6 * dVar10;
      }
      dVar9 = dVar6 * dVar8;
      if (dVar24 <= dVar6 * dVar8) {
        dVar9 = dVar24;
      }
      if ((0.0 < dVar9) &&
         (uVar20 = 0,
         0 < *(int *)&(pFVar16->MGrid).field_0x38 * *(int *)&(pFVar16->MGrid).field_0x34 *
             *(int *)&(pFVar16->MGrid).field_0x30)) {
        lVar19 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar20 < *(int *)&(pFVar16->MPhi).field_0x18) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            pFVar17 = (FImplicitObject *)(*pcVar4)();
            return pFVar17;
          }
          lVar3 = *(longlong *)&(pFVar16->MPhi).field_0x10;
          uVar20 = uVar20 + 1;
          *(double *)(lVar19 + lVar3) = dVar9 + *(double *)(lVar19 + lVar3);
          lVar19 = lVar19 + 8;
        } while ((int)uVar20 <
                 *(int *)&(pFVar16->MGrid).field_0x38 * *(int *)&(pFVar16->MGrid).field_0x30 *
                 *(int *)&(pFVar16->MGrid).field_0x34);
      }
    }
    pFVar2 = (param_1->Prefix).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return (FImplicitObject *)pFVar16;
}

// NewImplicitSphere @ 14404a7c0

FImplicitObject * __cdecl
FCollisionStructureManager::NewImplicitSphere
          (double param_1,float param_2,ECollisionTypeEnum param_3)

{
  TSphere<double,3> *pTVar1;
  TVector<double,3> local_48 [2];
  
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 == (TSphere<double,3> *)0x0) {
    pTVar1 = (TSphere<double,3> *)0x0;
  }
  else {
    local_48[0]._16_8_ = 0;
    local_48[0]._0_8_ = 0;
    local_48[0]._8_8_ = 0;
    pTVar1 = Chaos::TSphere<double,3>::TSphere<double,3>
                       (pTVar1,local_48,
                        (double)(__real_3f800000 - param_2 * __real_3c23d70a) * param_1);
  }
  UpdateImplicitFlags((FImplicitObject *)pTVar1,param_3);
  return (FImplicitObject *)pTVar1;
}

// NewLevelset @ 14404a860

FLevelSet * __cdecl
FCollisionStructureManager::NewLevelset
          (FErrorReporter *param_1,TParticles<double,3> *param_2,FTriangleMesh *param_3,
          TBox<double> *param_4,int param_5,int param_6,ECollisionTypeEnum param_7)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  FLevelSet *pFVar4;
  FLevelSet *this;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<int,3>_u_0 local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  TUniformGridBase<double,3> local_68;
  
  if ((param_3->MElements).ArrayNum == 0) {
    pFVar5 = (param_1->Prefix).Data.AllocatorInstance.Data;
  }
  else {
    dVar7 = ((param_4->Max).field0_0x0._s_0.X - (param_4->Min).field0_0x0._s_0.X) *
            __real_3fe0000000000000;
    dVar8 = ((param_4->Max).field0_0x0._s_0.Y - (param_4->Min).field0_0x0._s_0.Y) *
            __real_3fe0000000000000;
    dVar6 = ((param_4->Max).field0_0x0._s_0.Z - (param_4->Min).field0_0x0._s_0.Z) *
            __real_3fe0000000000000;
    if ((dVar8 <= dVar7) || (dVar6 <= dVar7)) {
      if (dVar6 <= dVar8) {
        local_a8._s_0.X = (int)((__real_3ff0000000000000 / dVar6) * dVar7) * param_5;
        local_a8._s_0.Y = (int)((__real_3ff0000000000000 / dVar6) * dVar8) * param_5;
      }
      else {
        local_a8._s_0.X = (int)((__real_3ff0000000000000 / dVar8) * dVar7) * param_5;
        local_a8._s_0.Y = param_5;
        param_5 = (int)((__real_3ff0000000000000 / dVar8) * dVar6) * param_5;
      }
    }
    else {
      local_a8._s_0.X = param_5;
      local_a8._s_0.Y = (int)((__real_3ff0000000000000 / dVar7) * dVar8) * param_5;
      param_5 = (int)((__real_3ff0000000000000 / dVar7) * dVar6) * param_5;
    }
    local_98 = (param_4->Max).field0_0x0._s_0.X;
    dStack_90 = (param_4->Max).field0_0x0._s_0.Y;
    if (param_6 < local_a8._s_0.X) {
      local_a8._s_0.X = param_6;
    }
    local_88 = (param_4->Max).field0_0x0._s_0.Z;
    if (param_6 < local_a8._s_0.Y) {
      local_a8._s_0.Y = param_6;
    }
    local_70 = (param_4->Min).field0_0x0._s_0.Z;
    if (param_6 < param_5) {
      param_5 = param_6;
    }
    local_80 = (param_4->Min).field0_0x0._s_0.X;
    dStack_78 = (param_4->Min).field0_0x0._s_0.Y;
    local_a8._s_0.Z = param_5;
    Chaos::TUniformGridBase<double,3>::TUniformGridBase<double,3>
              (&local_68,(TVector<double,3> *)&local_80,(TVector<double,3> *)&local_98,
               (TVector<int,3> *)&local_a8._s_0,1);
    pFVar4 = ::operator_new(0x120);
    this = (FLevelSet *)0x0;
    if (pFVar4 != (FLevelSet *)0x0) {
      this = Chaos::FLevelSet::FLevelSet
                       (pFVar4,param_1,(TUniformGrid<double,3> *)&local_68,param_2,param_3,0);
    }
    if (param_1->bUnhandledErrors == false) {
      if (this == (FLevelSet *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_939406100363476814>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionCollisionStructureManager.cpp"
                           ,0xb2,"Implicit");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FLevelSet *)(*pcVar1)();
          return pFVar4;
        }
      }
      else if (param_7 == Chaos_Surface_Volumetric) {
        *(undefined1 *)((longlong)&this->_padding_ + 1) = 6;
        uVar3 = Chaos::FImplicitObject::GetType((FImplicitObject *)this);
        if (uVar3 == '\x06') {
          *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
        }
      }
      else {
        uVar3 = Chaos::FImplicitObject::GetType((FImplicitObject *)this);
        *(uchar *)((longlong)&this->_padding_ + 1) = uVar3;
      }
      pFVar5 = (param_1->Prefix).Data.AllocatorInstance.Data;
      if (pFVar5 == (FScriptContainerElement *)0x0) {
        return this;
      }
      FMemory::Free(pFVar5);
      return this;
    }
    param_1->bUnhandledErrors = false;
    if (this != (FLevelSet *)0x0) {
      Chaos::FLevelSet::~FLevelSet(this);
      ::operator_delete(this,0x120);
    }
    pFVar5 = (param_1->Prefix).Data.AllocatorInstance.Data;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return (FLevelSet *)0x0;
}

// NewSimplicial @ 14404aad0

FBVHParticles * __cdecl
FCollisionStructureManager::NewSimplicial
          (TParticles<double,3> *param_1,TManagedArray<int> *param_2,ECollisionTypeEnum param_3,
          FTriangleMesh *param_4,float param_5)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FBVHParticles *pFVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<Chaos::TVector<double,3>_const_,int> local_48;
  TVector<double,3> local_38;
  
  pFVar7 = ::operator_new(0x48);
  if (pFVar7 == (FBVHParticles *)0x0) {
    pFVar7 = (FBVHParticles *)0x0;
  }
  else {
    pFVar7 = Chaos::FBVHParticles::FBVHParticles(pFVar7);
  }
  iVar10 = (int)param_1->_padding_;
  local_48.DataPtr = Chaos::TParticles<double,3>::GetX(param_1,0);
  local_48.ArrayNum = iVar10;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FBVHParticles *)(*pcVar2)();
    return pFVar7;
  }
  Chaos::CleanCollisionParticles(&local_58,param_4,&local_48,(double)param_5);
  if (local_58.ArrayNum != 0) {
    iVar10 = 0;
    Chaos::TArrayCollection::ResizeHelper
              ((TArrayCollection *)pFVar7,(int)pFVar7->_padding_ + local_58.ArrayNum);
    piVar1 = (int *)((longlong)&pFVar7->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    uVar8 = local_58.ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0x18;
      do {
        uVar5 = 0;
        if ((int)uVar8 < local_58.ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FBVHParticles *)(*pcVar2)();
          return pFVar7;
        }
        FVar3.Data = local_58.AllocatorInstance.Data;
        iVar6 = _finite(*(double *)(local_58.AllocatorInstance.Data + lVar9));
        if (((iVar6 != 0) && (iVar6 = _finite(*(double *)(FVar3.Data + lVar9 + 8)), iVar6 != 0)) &&
           (iVar6 = _finite(*(double *)(FVar3.Data + lVar9 + 0x10)), iVar6 != 0)) {
          uVar5 = 0;
          if ((int)uVar8 < local_58.ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FBVHParticles *)(*pcVar2)();
            return pFVar7;
          }
          Chaos::TParticles<double,3>::SetX
                    ((TParticles<double,3> *)pFVar7,uVar8,
                     (TVector<double,3> *)(local_58.AllocatorInstance.Data + lVar9));
          iVar10 = iVar10 + 1;
        }
        lVar9 = lVar9 + -0x18;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    Chaos::TArrayCollection::ResizeHelper((TArrayCollection *)pFVar7,iVar10);
    piVar1 = (int *)((longlong)&pFVar7->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
  }
  if ((int)pFVar7->_padding_ == 0) {
    Chaos::TArrayCollection::ResizeHelper((TArrayCollection *)pFVar7,1);
    piVar1 = (int *)((longlong)&pFVar7->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    local_38._16_8_ = 0;
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    Chaos::TParticles<double,3>::SetX((TParticles<double,3> *)pFVar7,0,&local_38);
  }
  Chaos::FBVHParticles::UpdateAccelerationStructures(pFVar7);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return pFVar7;
}

// NewSimplicial @ 14404ad40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FBVHParticles * __cdecl
FCollisionStructureManager::NewSimplicial
          (TParticles<double,3> *param_1,FTriangleMesh *param_2,FImplicitObject *param_3,int param_4
          )

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FBVHParticles *this;
  FBVHParticles *pFVar16;
  double *pdVar17;
  TVector<double,3> *pTVar18;
  ulonglong uVar19;
  int iVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  uint uVar25;
  FBVHParticles *pFVar26;
  uint uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 unaff_XMM12 [16];
  undefined1 auVar47 [16];
  undefined1 local_208;
  undefined1 local_207 [3];
  int local_204;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_200;
  uint local_1f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e8;
  undefined4 local_1d8;
  TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> local_1d0;
  FBVHParticles *local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  char local_188;
  undefined4 local_187;
  undefined2 local_183;
  undefined1 local_181;
  TVector<double,3> local_180;
  TVector<double,3> TStack_168;
  longlong local_150;
  TVector<double,3> local_148;
  TAABB<double,3> local_130;
  double local_f0;
  undefined1 local_e8 [48];
  double dVar46;
  
  this = ::operator_new(0x48);
  pFVar26 = (FBVHParticles *)0x0;
  pFVar16 = pFVar26;
  if (this != (FBVHParticles *)0x0) {
    pFVar16 = Chaos::FBVHParticles::FBVHParticles(this);
  }
  local_1c0 = pFVar16;
  if ((param_3 == (FImplicitObject *)0x0) && ((int)param_1->_padding_ == 0)) {
    if ((byte)LogChaos._0_1_ < 5) {
      return pFVar16;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return pFVar16;
  }
  local_1f0 = 0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  Chaos::FTriangleMesh::GetVertexSetAsArray(param_2,&local_1e8);
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_204 = CollisionParticlesMax;
  if ((0 < param_4) && (param_4 < CollisionParticlesMax)) {
    local_204 = param_4;
  }
  if ((bCollisionParticlesUseImplicitCulling == 0) || (param_3 == (FImplicitObject *)0x0)) {
LAB_14404afcf:
  }
  else if (local_204 < local_1e8.ArrayNum) {
    if (param_3->bHasBoundingBox == false) {
      unaff_XMM12._8_8_ = 0;
      unaff_XMM12._0_8_ = __real_3ff0000000000000;
    }
    else {
      pdVar17 = (double *)(**(code **)(param_3->_padding_ + 0x90))(param_3,local_e8);
      auVar47._0_8_ =
           (pdVar17[3] - *pdVar17) * (pdVar17[3] - *pdVar17) +
           (pdVar17[4] - pdVar17[1]) * (pdVar17[4] - pdVar17[1]) +
           (pdVar17[5] - pdVar17[2]) * (pdVar17[5] - pdVar17[2]);
      auVar47._8_8_ = 0;
      unaff_XMM12 = sqrtpd(unaff_XMM12,auVar47);
    }
    dVar46 = unaff_XMM12._0_8_;
    dVar30 = dVar46 * __real_3f847ae140000000;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_1e8.ArrayNum,&local_200.AllocatorInstance,&local_200.ArrayNum,
               &local_200.ArrayMax);
    iVar15 = local_1e8.ArrayNum;
    uVar19 = (ulonglong)local_1e8.ArrayNum;
    pFVar23 = local_1e8.AllocatorInstance.Data + uVar19 * 4;
    FVar21.Data = local_1e8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar19 != iVar15) {
        local_208 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      if (FVar21.Data == pFVar23) break;
      pTVar18 = Chaos::TParticles<double,3>::GetX(param_1,*(int *)FVar21.Data);
      dVar29 = Chaos::FImplicitObject::SignedDistance(param_3,pTVar18);
      uVar13 = local_1f0;
      if (dVar30 < dVar29) {
        uVar9 = *(undefined8 *)pTVar18;
        uVar10 = *(undefined8 *)&pTVar18->field_0x8;
        uVar33 = *(undefined8 *)&pTVar18->field_0x10;
        uVar25 = 0;
        if ((int)local_1f0 < local_200.ArrayNum) {
          uVar25 = ~local_1f0 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FBVHParticles *)(*pcVar6)();
          return pFVar16;
        }
        local_1f0 = uVar13 + 1;
        *(undefined8 *)(local_200.AllocatorInstance.Data + (longlong)&pFVar26->_padding_) = uVar9;
        *(undefined8 *)(local_200.AllocatorInstance.Data + (longlong)&pFVar26->_padding_ + 8) =
             uVar10;
        *(undefined8 *)((longlong)&pFVar26->_padding_ + local_200.AllocatorInstance.Data) = uVar33;
        pFVar26 = (FBVHParticles *)&pFVar26->_padding_;
      }
      uVar19 = local_1e8._8_8_ & 0xffffffff;
      FVar21.Data = FVar21.Data + 4;
    }
    TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_200,local_1f0,Default);
    pFVar16 = local_1c0;
    if (local_204 < local_200.ArrayNum) {
      local_1d8 = 0;
      iVar15 = local_200.ArrayNum;
      goto LAB_14404b2eb;
    }
    goto LAB_14404afcf;
  }
  uVar22 = 0;
  local_188 = '\0';
  local_187 = 0;
  local_183 = 0;
  local_181 = 0;
  auVar31 = ZEXT816(0);
  local_1b8 = ZEXT816(0);
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_198 = 0.0;
  dStack_190 = 0.0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,local_1e8.ArrayNum,&local_200.AllocatorInstance,&local_200.ArrayNum,
             &local_200.ArrayMax);
  uVar19 = uVar22;
  uVar24 = uVar22;
  if (0 < local_1e8.ArrayNum) {
    do {
      uVar25 = (uint)uVar22;
      uVar27 = ~uVar25 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar25 < local_1e8.ArrayNum) {
        uVar13 = uVar27;
      }
      iVar15 = local_1e8.ArrayNum;
      if (uVar13 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FBVHParticles *)(*pcVar6)();
          return pFVar16;
        }
        iVar15 = local_1e8.ArrayNum;
      }
      uVar33 = auVar31._8_8_;
      uVar13 = *(uint *)(local_1e8.AllocatorInstance.Data + uVar24);
      uVar14 = 0;
      if ((int)uVar13 < *(int *)&(param_1->MX).field_0x10) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar33 = auVar31._8_8_;
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FBVHParticles *)(*pcVar6)();
          return pFVar16;
        }
        iVar15 = local_1e8.ArrayNum;
      }
      lVar5 = *(longlong *)&(param_1->MX).field_0x8;
      local_f0 = *(double *)(lVar5 + 0x10 + (longlong)(int)uVar13 * 0x18);
      auVar47 = *(undefined1 (*) [16])(lVar5 + (longlong)(int)uVar13 * 0x18);
      dVar30 = auVar47._8_8_;
      dVar46 = auVar47._0_8_;
      if (local_188 == '\0') {
        auVar8._4_8_ = uVar33;
        auVar8._0_4_ = auVar47._4_4_;
        auVar32._0_8_ = auVar8._0_8_ << 0x20;
        auVar32._8_4_ = auVar47._8_4_;
        auVar32._12_4_ = auVar47._12_4_;
        local_188 = '\x01';
        local_198 = auVar32._8_8_;
        auVar31._8_8_ = dVar30;
        auVar31._0_8_ = local_198;
        local_1b8 = auVar47;
        local_1a8 = local_f0;
        dStack_1a0 = dVar46;
        dStack_190 = local_f0;
      }
      else {
        if (dVar46 <= (double)local_1b8._0_8_) {
          local_1b8._0_8_ = dVar46;
        }
        if (dVar30 <= (double)local_1b8._8_8_) {
          local_1b8._8_8_ = dVar30;
        }
        if (local_f0 <= local_1a8) {
          local_1a8 = local_f0;
        }
        if (local_198 <= dVar30) {
          local_198 = dVar30;
        }
        auVar31._8_8_ = 0;
        auVar31._0_8_ = local_198;
        if (dStack_1a0 <= dVar46) {
          dStack_1a0 = dVar46;
        }
        if (dStack_190 <= local_f0) {
          dStack_190 = local_f0;
        }
      }
      uVar13 = 0;
      if ((int)uVar25 < iVar15) {
        uVar13 = uVar27;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FBVHParticles *)(*pcVar6)();
        return pFVar16;
      }
      uVar13 = *(uint *)(local_1e8.AllocatorInstance.Data + uVar24);
      uVar14 = 0;
      if ((int)uVar13 < *(int *)&(param_1->MX).field_0x10) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FBVHParticles *)(*pcVar6)();
        return pFVar16;
      }
      lVar5 = *(longlong *)&(param_1->MX).field_0x8;
      puVar4 = (undefined8 *)(lVar5 + (longlong)(int)uVar13 * 0x18);
      uVar9 = *puVar4;
      uVar10 = puVar4[1];
      uVar33 = *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)uVar13 * 0x18);
      uVar13 = 0;
      if ((int)uVar25 < local_200.ArrayNum) {
        uVar13 = uVar27;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FBVHParticles *)(*pcVar6)();
        return pFVar16;
      }
      uVar22 = (ulonglong)(uVar25 + 1);
      *(undefined8 *)(local_200.AllocatorInstance.Data + uVar19) = uVar9;
      *(undefined8 *)(local_200.AllocatorInstance.Data + uVar19 + 8) = uVar10;
      *(undefined8 *)(local_200.AllocatorInstance.Data + uVar19 + 0x10) = uVar33;
      uVar19 = uVar19 + 0x18;
      uVar24 = uVar24 + 4;
    } while ((int)(uVar25 + 1) < local_1e8.ArrayNum);
  }
  local_1d8 = 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = ((local_198 - (double)local_1b8._8_8_) * (local_198 - (double)local_1b8._8_8_) +
                  (dStack_1a0 - (double)local_1b8._0_8_) * (dStack_1a0 - (double)local_1b8._0_8_) +
                 (dStack_190 - local_1a8) * (dStack_190 - local_1a8)) * __real_3fd0000000000000;
  auVar47 = sqrtpd(unaff_XMM12,auVar7);
  dVar46 = auVar47._0_8_;
  iVar15 = local_200.ArrayNum;
LAB_14404b2eb:
  iVar11 = local_204;
  iVar20 = 0;
  dVar30 = (double)CollisionParticlesSpatialDivision;
  if (iVar15 == 0) {
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
  }
  else {
    local_180._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_180._8_8_ = _UNK_150a9e648;
    pFVar23 = local_200.AllocatorInstance.Data + 8;
    uVar42 = (undefined4)_UNK_150a9e648;
    uVar43 = SUB84(_UNK_150a9e648,4);
    local_180._16_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
    TStack_168._0_8_ = _UNK_150a9e6d8;
    pFVar3 = local_200.AllocatorInstance.Data + (longlong)iVar15 * 0x18;
    uVar38 = (undefined4)_UNK_150a9e6d8;
    uVar39 = SUB84(_UNK_150a9e6d8,4);
    uVar40 = (undefined4)___xmm_ffefffffffffffff7fefffffffffffff;
    uVar41 = SUB84(___xmm_ffefffffffffffff7fefffffffffffff,4);
    TStack_168._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
    TStack_168._16_8_ = _UNK_1508ffb58;
    uVar34 = (undefined4)_UNK_1508ffb58;
    uVar35 = SUB84(_UNK_1508ffb58,4);
    uVar36 = (undefined4)___xmm_ffefffffffffffffffefffffffffffff;
    uVar37 = SUB84(___xmm_ffefffffffffffffffefffffffffffff,4);
    uVar44 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
    uVar45 = SUB84(___xmm_7fefffffffffffff7fefffffffffffff,4);
    iVar20 = iVar15;
    while( true ) {
      if (iVar20 != iVar15) {
        local_207[0] = 0;
        `TCheckedPointerIterator<Chaos::TVector<double,3>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_207);
        iVar20 = local_200.ArrayNum;
      }
      pFVar1 = pFVar23 + -8;
      if (pFVar1 == pFVar3) break;
      dVar29 = *(double *)pFVar23;
      if (dVar29 <= (double)CONCAT44(uVar43,uVar42)) {
        uVar42 = SUB84(dVar29,0);
        uVar43 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      dVar29 = *(double *)(pFVar23 + 8);
      if (dVar29 <= (double)CONCAT44(uVar41,uVar40)) {
        uVar40 = SUB84(dVar29,0);
        uVar41 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      dVar29 = *(double *)pFVar23;
      if ((double)CONCAT44(uVar37,uVar36) <= dVar29) {
        uVar36 = SUB84(dVar29,0);
        uVar37 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      dVar29 = *(double *)(pFVar23 + 8);
      if ((double)CONCAT44(uVar35,uVar34) <= dVar29) {
        uVar34 = SUB84(dVar29,0);
        uVar35 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      dVar29 = *(double *)pFVar1;
      if (dVar29 <= (double)CONCAT44(uVar45,uVar44)) {
        uVar44 = SUB84(dVar29,0);
        uVar45 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      dVar29 = *(double *)pFVar1;
      if ((double)CONCAT44(uVar39,uVar38) <= dVar29) {
        uVar38 = SUB84(dVar29,0);
        uVar39 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      local_180._12_4_ = uVar43;
      local_180._8_4_ = uVar42;
      pFVar23 = pFVar23 + 0x18;
      local_180._20_4_ = uVar41;
      local_180._16_4_ = uVar40;
      TStack_168._12_4_ = uVar37;
      TStack_168._8_4_ = uVar36;
      local_180._4_4_ = uVar45;
      local_180._0_4_ = uVar44;
      TStack_168._4_4_ = uVar39;
      TStack_168._0_4_ = uVar38;
      TStack_168._20_4_ = uVar35;
      TStack_168._16_4_ = uVar34;
    }
    local_130.MMin._0_8_ = local_180._0_8_;
    local_130.MMin._8_8_ = local_180._8_8_;
    local_130.MMin._16_8_ = local_180._16_8_;
    local_130.MMax._0_8_ = TStack_168._0_8_;
    local_130.MMax._8_8_ = TStack_168._8_8_;
    local_130.MMax._16_8_ = TStack_168._16_8_;
    Chaos::CleanCollisionParticles(&local_1d0,&local_200,&local_130,dVar46 / dVar30);
    iVar20 = local_1d0.ArrayNum;
  }
  uVar19 = 0;
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
    iVar20 = local_1d0.ArrayNum;
  }
  iVar15 = iVar20;
  if (iVar11 < iVar20) {
    iVar15 = iVar11;
  }
  local_200.AllocatorInstance.Data = local_1d0.AllocatorInstance.Data;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayMax = local_1d0.ArrayMax;
  local_200.ArrayNum = iVar20;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  local_1c0 = (FBVHParticles *)CONCAT44(local_1c0._4_4_,iVar15);
  if (iVar15 != 0) {
    Chaos::TArrayCollection::ResizeHelper
              ((TArrayCollection *)pFVar16,(int)pFVar16->_padding_ + iVar15);
    piVar2 = (int *)((longlong)&pFVar16->_padding_ + 4);
    *piVar2 = *piVar2 + 1;
    local_150 = (longlong)iVar15;
    uVar24 = uVar19;
    uVar22 = uVar19;
    uVar28 = uVar19;
    if (0 < iVar15) {
      do {
        uVar27 = (uint)uVar22;
        uVar25 = ~uVar27 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar27 < local_200.ArrayNum) {
          uVar13 = uVar25;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FBVHParticles *)(*pcVar6)();
          return pFVar16;
        }
        FVar21.Data = local_200.AllocatorInstance.Data;
        iVar15 = _finite(*(double *)(local_200.AllocatorInstance.Data + uVar24));
        if (((iVar15 != 0) && (iVar15 = _finite(*(double *)(FVar21.Data + uVar24 + 8)), iVar15 != 0)
            ) && (iVar15 = _finite(*(double *)(FVar21.Data + uVar24 + 0x10)), iVar15 != 0)) {
          uVar13 = 0;
          if ((int)uVar27 < local_200.ArrayNum) {
            uVar13 = uVar25;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FBVHParticles *)(*pcVar6)();
            return pFVar16;
          }
          uVar9 = *(undefined8 *)(local_200.AllocatorInstance.Data + uVar24);
          uVar10 = *(undefined8 *)(local_200.AllocatorInstance.Data + uVar24 + 8);
          uVar33 = *(undefined8 *)(local_200.AllocatorInstance.Data + uVar24 + 0x10);
          uVar13 = 0;
          if ((int)uVar27 < (int)pFVar16->_padding_) {
            uVar13 = uVar25;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FBVHParticles *)(*pcVar6)();
            return pFVar16;
          }
          lVar5 = pFVar16->_padding_;
          uVar19 = (ulonglong)((int)uVar19 + 1);
          puVar4 = (undefined8 *)(uVar24 + lVar5);
          *puVar4 = uVar9;
          puVar4[1] = uVar10;
          *(undefined8 *)(uVar24 + 0x10 + lVar5) = uVar33;
        }
        uVar28 = uVar28 + 1;
        uVar24 = uVar24 + 0x18;
        uVar22 = (ulonglong)(uVar27 + 1);
      } while ((longlong)uVar28 < local_150);
      local_204 = (int)uVar19;
    }
    Chaos::TArrayCollection::ResizeHelper((TArrayCollection *)pFVar16,(int)uVar19);
    piVar2 = (int *)((longlong)&pFVar16->_padding_ + 4);
    *piVar2 = *piVar2 + 1;
  }
  if ((int)pFVar16->_padding_ == 0) {
    Chaos::TArrayCollection::ResizeHelper((TArrayCollection *)pFVar16,1);
    piVar2 = (int *)((longlong)&pFVar16->_padding_ + 4);
    *piVar2 = *piVar2 + 1;
    local_148._16_8_ = 0;
    local_148._0_8_ = 0;
    local_148._8_8_ = 0;
    Chaos::TParticles<double,3>::SetX((TParticles<double,3> *)pFVar16,0,&local_148);
  }
  Chaos::FBVHParticles::UpdateAccelerationStructures(pFVar16);
  if (4 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return pFVar16;
}

// UpdateImplicitFlags @ 144053b60

void __cdecl
FCollisionStructureManager::UpdateImplicitFlags(FImplicitObject *param_1,ECollisionTypeEnum param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if (param_1 == (FImplicitObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_939406100363476814>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionCollisionStructureManager.cpp"
                       ,0xb2,"Implicit");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == Chaos_Surface_Volumetric) {
    param_1->CollisionType = '\x06';
    uVar3 = Chaos::FImplicitObject::GetType(param_1);
    if (uVar3 == '\x06') {
      param_1->bIsConvex = false;
      param_1->bDoCollide = false;
      return;
    }
  }
  else {
    uVar3 = Chaos::FImplicitObject::GetType(param_1);
    param_1->CollisionType = uVar3;
  }
  return;
}

// operator() @ 1504ab940

bool __thiscall
`FCollisionStructureManager::CalculateUnitMassInertiaTensor'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_939406100363476493>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_939406100363476493>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ab980

bool __thiscall
`FCollisionStructureManager::CalculateVolume'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_939406100363476473>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_939406100363476473>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

