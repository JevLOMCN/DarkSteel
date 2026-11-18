// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// GetTransform @ 1472570a0

TTransform<double> * __thiscall
FKSkinnedLevelSetElem::GetTransform
          (FKSkinnedLevelSetElem *this,TTransform<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// StaticStruct @ 14732d340

UScriptStruct * __cdecl FKSkinnedLevelSetElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKSkinnedLevelSetElem.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKSkinnedLevelSetElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKSkinnedLevelSetElem,(UObject *)pUVar1,
                         L"KSkinnedLevelSetElem");
  }
  return Z_Registration_Info_UScriptStruct_FKSkinnedLevelSetElem.OuterSingleton;
}

// CalcAABB @ 1476f33e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKSkinnedLevelSetElem::CalcAABB
          (FKSkinnedLevelSetElem *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  longlong lVar13;
  double *pdVar14;
  TMatrix<double> *pTVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar21 [16];
  uint uVar24;
  uint uVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [48];
  TMatrix<double> local_1b8;
  undefined1 local_138 [48];
  undefined1 local_108;
  undefined4 uStack_107;
  undefined2 uStack_103;
  undefined1 uStack_101;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_108 = 0;
  uStack_107 = 0;
  pTVar3 = (this->WeightedLatticeLevelSet).Reference;
  uStack_103 = 0;
  uStack_101 = 0;
  if (pTVar3 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    lVar13 = (**(code **)(*(longlong *)pTVar3 + 0x90))(pTVar3,local_1e8);
    pTVar3 = (this->WeightedLatticeLevelSet).Reference;
    pdVar14 = (double *)(**(code **)(*(longlong *)pTVar3 + 0x90))(pTVar3,local_138);
    dVar1 = *(double *)(lVar13 + 0x28);
    dVar9 = *(double *)(lVar13 + 0x18);
    dVar23 = *(double *)(lVar13 + 0x20);
    local_1b8.M[2][2] = (param_2->field0_0x0)._s_0.Z;
    dVar2 = pdVar14[2];
    dVar11 = *pdVar14;
    dVar4 = pdVar14[1];
    local_1b8.M[2][3] = 0.0;
    local_1b8.M[0][0] = UE::Math::TQuat<double>::Identity.X;
    local_1b8.M[0][1] = UE::Math::TQuat<double>::Identity.Y;
    local_1b8.M[2][0] = (param_2->field0_0x0)._s_0.X;
    local_1b8.M[2][1] = (param_2->field0_0x0)._s_0.Y;
    local_1b8.M[0][2]._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
    local_1b8.M[0][2]._4_4_ = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
    local_1b8.M[0][3]._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.W,0);
    local_1b8.M[0][3]._4_4_ = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
    local_1b8.M[1][0]._0_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
    local_1b8.M[1][0]._4_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    local_1b8.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8.M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_1b8.M[1][3] = 0.0;
    local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_f8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_f8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_f8,(TTransform<double> *)&local_1b8,param_1);
    pTVar15 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_f8,&local_1b8);
    dVar6 = (dVar9 + dVar11) * ___xmm_3fe00000000000003fe0000000000000;
    dVar7 = (dVar23 + dVar4) * _UNK_150689678;
    dVar26 = (dVar1 + dVar2) * ___xmm_3fe00000000000003fe0000000000000;
    dVar9 = (dVar9 - dVar11) * ___xmm_3fe00000000000003fe0000000000000;
    dVar11 = (dVar23 - dVar4) * _UNK_150689678;
    dVar8 = (dVar1 - dVar2) * ___xmm_3fe00000000000003fe0000000000000;
    auVar17._8_4_ = SUB84(dVar6,0);
    auVar17._0_8_ = dVar6;
    auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar1 = dVar8 * pTVar15->M[2][0];
    dVar2 = dVar8 * pTVar15->M[2][1];
    dVar4 = dVar7 * pTVar15->M[1][0] + dVar6 * pTVar15->M[0][0] + dVar26 * pTVar15->M[2][0] +
            pTVar15->M[3][0];
    dVar5 = dVar7 * pTVar15->M[1][1] + auVar17._8_8_ * pTVar15->M[0][1] + dVar26 * pTVar15->M[2][1]
            + pTVar15->M[3][1];
    dVar8 = dVar8 * pTVar15->M[2][2];
    auVar18._8_4_ = SUB84(dVar9,0);
    auVar18._0_8_ = dVar9;
    auVar18._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar16 = dVar9 * pTVar15->M[0][0];
    dVar22 = auVar18._8_8_ * pTVar15->M[0][1];
    dVar10 = dVar11 * pTVar15->M[1][2];
    dVar23 = dVar11 * pTVar15->M[1][0];
    dVar11 = dVar11 * pTVar15->M[1][1];
    dVar9 = dVar9 * pTVar15->M[0][2];
    dVar6 = dVar7 * pTVar15->M[1][2] + dVar6 * pTVar15->M[0][2] + dVar26 * pTVar15->M[2][2] +
            pTVar15->M[3][2];
    local_1b8.M[1][2] = (double)CONCAT71(local_1b8.M[1][2]._1_7_,1);
    auVar19._0_8_ =
         (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar19._8_4_ = SUB84(dVar22,0) & _UNK_15061cc88;
    auVar19._12_4_ = (uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c;
    uVar29 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar27 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    auVar20._8_4_ = SUB84(dVar5,0);
    auVar20._0_8_ = dVar4;
    auVar20._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            auVar19._0_8_ +
            (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar11,0) & _UNK_15061cc88) + auVar19._8_8_ +
            (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar2,0) & _UNK_15061cc88);
    uVar24 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar25 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar23 = auVar20._8_8_ - dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar4 - dVar1;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar23;
    dVar9 = (double)CONCAT44(uVar30,uVar29) + (double)CONCAT44(uVar25,uVar24) +
            (double)CONCAT44(uVar28,uVar27);
    dVar1 = dVar1 + dVar4;
    local_1b8.M[0][3]._0_4_ = SUB84(dVar1,0);
    local_1b8.M[0][3]._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar12._4_8_ = dVar23;
    auVar12._0_4_ = local_1b8.M[0][2]._4_4_;
    auVar21._0_8_ = auVar12._0_8_ << 0x20;
    auVar21._8_4_ = local_1b8.M[0][3]._0_4_;
    auVar21._12_4_ = local_1b8.M[0][3]._4_4_;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar9;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = auVar21._8_8_;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2 + dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9 + dVar6;
    *(double *)&__return_storage_ptr__->IsValid = local_1b8.M[1][2];
  }
  return __return_storage_ptr__;
}

// LatticeGridResolution @ 147715120

TIntVector3<int> * __thiscall
FKSkinnedLevelSetElem::LatticeGridResolution
          (FKSkinnedLevelSetElem *this,TIntVector3<int> *__return_storage_ptr__)

{
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar1;
  
  pTVar1 = (this->WeightedLatticeLevelSet).Reference;
  if (pTVar1 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)&pTVar1->field_0x50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)&pTVar1->field_0x54;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(int *)&pTVar1->field_0x58;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// LevelSetGridResolution @ 1477152e0

TIntVector3<int> * __thiscall
FKSkinnedLevelSetElem::LevelSetGridResolution
          (FKSkinnedLevelSetElem *this,TIntVector3<int> *__return_storage_ptr__)

{
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar1;
  FLevelSet *pFVar2;
  
  pTVar1 = (this->WeightedLatticeLevelSet).Reference;
  if (pTVar1 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    pFVar2 = (pTVar1->Object).Reference;
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(int *)&(pFVar2->MGrid).field_0x30;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = *(int *)&(pFVar2->MGrid).field_0x34;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(int *)&(pFVar2->MGrid).field_0x38;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// Serialize @ 1477268d0

bool __thiscall FKSkinnedLevelSetElem::Serialize(FKSkinnedLevelSetElem *this,FArchive *param_1)

{
  TRefCountPtr<Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>_> *pTVar1;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar2;
  longlong lVar3;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar4;
  undefined8 *puVar5;
  FChaosArchiveContext *this_00;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar6;
  longlong *plVar7;
  longlong local_b8 [2];
  FArchiveProxy local_a8;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *local_10;
  
  pTVar6 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
  if ((param_1->field_0x28 & 1) == 0) goto LAB_14772699a;
  pTVar4 = ::operator_new(0x240);
  if (pTVar4 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    plVar7 = (longlong *)&DAT_00000008;
    pTVar4 = pTVar6;
  }
  else {
    Chaos::FWeightedLatticeImplicitObject::FWeightedLatticeImplicitObject
              ((FWeightedLatticeImplicitObject *)pTVar4,2,'&');
    *(undefined ***)pTVar4 = &___7__TWeightedLatticeImplicitObject_VFLevelSet_Chaos___Chaos__6B_;
    plVar7 = (longlong *)&pTVar4->field_0x8;
    (pTVar4->Object).Reference = (FLevelSet *)0x0;
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  pTVar1 = &this->WeightedLatticeLevelSet;
  if (pTVar1 == (TRefCountPtr<Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>_> *)local_b8)
  {
    if (pTVar4 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) goto LAB_14772699a;
    LOCK();
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if (((int)lVar3 != 1) || (*(int *)&pTVar4->field_0xc != 0)) goto LAB_14772699a;
    puVar5 = *(undefined8 **)pTVar4;
  }
  else {
    pTVar2 = pTVar1->Reference;
    pTVar1->Reference = pTVar4;
    if (pTVar2 == (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) goto LAB_14772699a;
    LOCK();
    plVar7 = (longlong *)&pTVar2->field_0x8;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if (((int)lVar3 != 1) || (*(int *)&pTVar2->field_0xc != 0)) goto LAB_14772699a;
    puVar5 = *(undefined8 **)pTVar2;
    pTVar4 = pTVar2;
  }
  (*(code *)*puVar5)(pTVar4,1);
LAB_14772699a:
  if ((this->WeightedLatticeLevelSet).Reference !=
      (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    FArchiveProxy::FArchiveProxy(&local_a8,param_1);
    local_a8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this_00 = ::operator_new(0x158);
    if (this_00 != (FChaosArchiveContext *)0x0) {
      pTVar6 = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)
               Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
    }
    pTVar4 = (this->WeightedLatticeLevelSet).Reference;
    local_10 = pTVar6;
    (**(code **)(*(longlong *)pTVar4 + 0x100))(pTVar4,&local_a8);
    pTVar6 = local_10;
    if (local_10 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext((FChaosArchiveContext *)local_10);
      ::operator_delete(pTVar6,0x158);
    }
    FArchiveProxy::~FArchiveProxy(&local_a8);
  }
  return true;
}

// SetWeightedLevelSet @ 1477297e0

void __thiscall
FKSkinnedLevelSetElem::SetWeightedLevelSet
          (FKSkinnedLevelSetElem *this,
          TRefCountPtr<Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>_> *param_1)

{
  TRefCountPtr<Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>_> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar4;
  
  pTVar1 = &this->WeightedLatticeLevelSet;
  if (pTVar1 != param_1) {
    pTVar4 = pTVar1->Reference;
    pTVar1->Reference = param_1->Reference;
    param_1->Reference = (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
    if (pTVar4 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
      LOCK();
      puVar2 = &pTVar4->field_0x8;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)&pTVar4->field_0xc == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014772981d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)pTVar4)(pTVar4,1);
        return;
      }
    }
  }
  return;
}

// CloneElem @ 14826e220

void __thiscall
FKSkinnedLevelSetElem::CloneElem(FKSkinnedLevelSetElem *this,FKSkinnedLevelSetElem *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar3;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar4;
  longlong lVar5;
  
  lVar5 = this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ ^ ((byte)lVar5 ^ (byte)param_1->_padding_) & 1;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  pTVar3 = (param_1->WeightedLatticeLevelSet).Reference;
  pTVar4 = (this->WeightedLatticeLevelSet).Reference;
  if (pTVar4 != pTVar3) {
    (this->WeightedLatticeLevelSet).Reference = pTVar3;
    if (pTVar3 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
      LOCK();
      *(int *)&pTVar3->field_0x8 = *(int *)&pTVar3->field_0x8 + 1;
      UNLOCK();
    }
    if (pTVar4 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
      LOCK();
      puVar1 = &pTVar4->field_0x8;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)&pTVar4->field_0xc == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014826e28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)pTVar4)(pTVar4,1);
        return;
      }
    }
  }
  return;
}

// DrawElemSolid @ 1482f7cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKSkinnedLevelSetElem::DrawElemSolid
          (FKSkinnedLevelSetElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  FScriptContainerElement *pFVar1;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar2;
  double dVar3;
  int iVar4;
  TVector<double,3> *pTVar5;
  TMatrix<double> *pTVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_160;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_150;
  TVector<float>_u_0 local_140;
  TVector<float>_u_0 local_134;
  undefined1 local_128 [16];
  double local_118;
  FDynamicMeshBuilder local_110;
  TVector<double,3> local_e8;
  TVector<float>_u_0 local_c8;
  TVector2<float>_u_0 local_bc;
  TVector2<float>_u_0 local_b4;
  TVector2<float>_u_0 local_ac;
  TVector2<float>_u_0 local_a4;
  TVector2<float>_u_0 local_9c;
  TVector2<float>_u_0 local_94;
  TVector2<float>_u_0 local_8c;
  TVector2<float>_u_0 local_84;
  FPackedNormal local_7c;
  FPackedNormal local_78;
  undefined4 local_74;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar2 = (this->WeightedLatticeLevelSet).Reference;
  if (pTVar2 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    Chaos::FLevelSet::GetZeroIsosurfaceGridCellFaces
              ((pTVar2->Object).Reference,&local_150,&local_160);
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_110,param_1->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
    iVar4 = local_150.ArrayNum;
    uVar7 = (ulonglong)local_150.ArrayNum;
    pFVar1 = local_150.AllocatorInstance.Data + uVar7 * 0xc;
    FVar8.Data = local_150.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (FVar8.Data == pFVar1) break;
      dVar3 = (double)(float)((ulonglong)*(undefined8 *)FVar8.Data >> 0x20);
      local_128._8_4_ = SUB84(dVar3,0);
      local_128._0_8_ = (double)(float)*(undefined8 *)FVar8.Data;
      local_128._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_118 = (double)*(float *)(FVar8.Data + 8);
      pTVar5 = Chaos::FWeightedLatticeImplicitObject::GetDeformedPoint
                         ((FWeightedLatticeImplicitObject *)
                          (this->WeightedLatticeLevelSet).Reference,&local_e8,
                          (TVector<double,3> *)local_128);
      local_140._0_8_ = 0x3f800000;
      local_140._s_0.Z = 0.0;
      local_c8._s_0.Y = (float)*(double *)&pTVar5->field_0x8;
      local_c8._s_0.Z = (float)*(double *)&pTVar5->field_0x10;
      local_c8._s_0.X = (float)*(double *)pTVar5;
      FPackedNormal::operator=(&local_7c,(TVector<float> *)&local_140._s_0);
      local_134._0_8_ = 0;
      local_134._s_0.Z = 1.0;
      FPackedNormal::operator=(&local_78,(TVector<float> *)&local_134._s_0);
      local_bc = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_ac = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_a4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_9c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_94 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_8c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_84 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_74 = 0xffffffff;
      local_78.Vector._s_0.W = '\x7f';
      FDynamicMeshBuilder::AddVertex(&local_110,(FDynamicMeshVertex *)&local_c8._s_0);
      uVar7 = local_150._8_8_ & 0xffffffff;
      FVar8.Data = FVar8.Data + 0xc;
    }
    iVar4 = local_160.ArrayNum;
    uVar7 = (ulonglong)local_160.ArrayNum;
    pFVar1 = local_160.AllocatorInstance.Data + uVar7 * 0xc;
    FVar8.Data = local_160.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar4) {
        `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (FVar8.Data == pFVar1) break;
      FDynamicMeshBuilder::AddTriangle
                (&local_110,*(int *)FVar8.Data,*(int *)(FVar8.Data + 4),*(int *)(FVar8.Data + 8));
      uVar7 = local_160._8_8_ & 0xffffffff;
      FVar8.Data = FVar8.Data + 0xc;
    }
    pTVar6 = UE::Math::TTransform<double>::ToMatrixWithScale
                       (param_2,(TMatrix<double> *)&local_c8._s_0);
    FDynamicMeshBuilder::Draw
              (&local_110,param_1,pTVar6,param_4,'\0',false,true,(FHitProxyId)0xffffffff);
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_110);
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawElemWire @ 1482fae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKSkinnedLevelSetElem::DrawElemWire
          (FKSkinnedLevelSetElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FColor param_4)

{
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar1;
  FLinearColor *this_00;
  TMatrix<double> *pTVar2;
  undefined1 auStack_f8 [32];
  FLinearColor_u_0 local_d8;
  FColor_u_0 local_c8;
  FLinearColor_u_0 local_c4;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->WeightedLatticeLevelSet).Reference !=
      (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    local_c4._s_0.R = (float)((uint)param_4.field0_0x0 >> 0x10 & 0xff) * __real_3b808081;
    local_c4._s_0.G = (float)((uint)param_4.field0_0x0 >> 8 & 0xff) * __real_3b808081;
    local_c4._s_0.B = (float)((uint)param_4.field0_0x0 & 0xff) * __real_3b808081;
    local_c4._s_0.A = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
    FLinearColor::LinearRGBToHSV((FLinearColor *)&local_c4._s_0,(FLinearColor *)&local_d8._s_0);
    local_d8._s_0.R = local_d8._s_0.R + __real_43700000;
    if (__real_43b40000 <= local_d8._s_0.R) {
      local_d8._s_0.R = local_d8._s_0.R - __real_43b40000;
    }
    local_d8._s_0.G = local_d8._s_0.G * __real_3f000000;
    pTVar1 = (this->WeightedLatticeLevelSet).Reference;
    local_d8._s_0.B = local_d8._s_0.B * __real_3f4ccccd;
    local_d8._s_0.A = local_d8._s_0.A * __real_3f000000;
    this_00 = FLinearColor::HSVToLinearRGB
                        ((FLinearColor *)&local_d8._s_0,(FLinearColor *)&local_c4._s_0);
    FLinearColor::ToFColorSRGB(this_00);
    pTVar2 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_a8);
    DrawSkinnedLevelSetLattice(param_1,pTVar2,(FColor)local_c8,pTVar1);
  }
  return;
}

// GetElemSolid @ 1483091d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FKSkinnedLevelSetElem::GetElemSolid
          (FKSkinnedLevelSetElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  FScriptContainerElement *pFVar1;
  TWeightedLatticeImplicitObject<Chaos::FLevelSet> *pTVar2;
  double dVar3;
  int iVar4;
  FPrimitiveDrawInterface *pFVar5;
  TVector<double,3> *pTVar6;
  TMatrix<double> *pTVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [8];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_160;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_150;
  TVector<float>_u_0 local_140;
  TVector<float>_u_0 local_134;
  FMaterialRenderProxy *local_128;
  undefined1 local_120 [16];
  double local_110;
  FDynamicMeshBuilder local_108;
  TVector<double,3> local_e0;
  TVector<float>_u_0 local_c8;
  TVector2<float>_u_0 local_bc;
  TVector2<float>_u_0 local_b4;
  TVector2<float>_u_0 local_ac;
  TVector2<float>_u_0 local_a4;
  TVector2<float>_u_0 local_9c;
  TVector2<float>_u_0 local_94;
  TVector2<float>_u_0 local_8c;
  TVector2<float>_u_0 local_84;
  FPackedNormal local_7c;
  FPackedNormal local_78;
  undefined4 local_74;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar2 = (this->WeightedLatticeLevelSet).Reference;
  if (pTVar2 != (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0) {
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    local_128 = param_3;
    Chaos::FLevelSet::GetZeroIsosurfaceGridCellFaces
              ((pTVar2->Object).Reference,&local_150,&local_160);
    pFVar5 = FMeshElementCollector::GetPDI(param_5,param_4);
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_108,pFVar5->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
    iVar4 = local_150.ArrayNum;
    uVar8 = (ulonglong)local_150.ArrayNum;
    pFVar1 = local_150.AllocatorInstance.Data + uVar8 * 0xc;
    FVar9.Data = local_150.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (FVar9.Data == pFVar1) break;
      dVar3 = (double)(float)((ulonglong)*(undefined8 *)FVar9.Data >> 0x20);
      local_120._8_4_ = SUB84(dVar3,0);
      local_120._0_8_ = (double)(float)*(undefined8 *)FVar9.Data;
      local_120._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_110 = (double)*(float *)(FVar9.Data + 8);
      pTVar6 = Chaos::FWeightedLatticeImplicitObject::GetDeformedPoint
                         ((FWeightedLatticeImplicitObject *)
                          (this->WeightedLatticeLevelSet).Reference,&local_e0,
                          (TVector<double,3> *)local_120);
      local_140._0_8_ = 0x3f800000;
      local_140._s_0.Z = 0.0;
      local_c8._s_0.Y = (float)*(double *)&pTVar6->field_0x8;
      local_c8._s_0.Z = (float)*(double *)&pTVar6->field_0x10;
      local_c8._s_0.X = (float)*(double *)pTVar6;
      FPackedNormal::operator=(&local_7c,(TVector<float> *)&local_140._s_0);
      local_134._0_8_ = 0;
      local_134._s_0.Z = 1.0;
      FPackedNormal::operator=(&local_78,(TVector<float> *)&local_134._s_0);
      local_bc = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_b4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_ac = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_a4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_9c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_94 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_8c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_84 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_74 = 0xffffffff;
      local_78.Vector._s_0.W = '\x7f';
      FDynamicMeshBuilder::AddVertex(&local_108,(FDynamicMeshVertex *)&local_c8._s_0);
      uVar8 = local_150._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 0xc;
    }
    iVar4 = local_160.ArrayNum;
    uVar8 = (ulonglong)local_160.ArrayNum;
    pFVar1 = local_160.AllocatorInstance.Data + uVar8 * 0xc;
    FVar9.Data = local_160.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        `TCheckedPointerIterator<UE::Math::TIntVector3<int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_168);
      }
      if (FVar9.Data == pFVar1) break;
      FDynamicMeshBuilder::AddTriangle
                (&local_108,*(int *)FVar9.Data,*(int *)(FVar9.Data + 4),*(int *)(FVar9.Data + 8));
      uVar8 = local_160._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 0xc;
    }
    pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale
                       (param_1,(TMatrix<double> *)&local_c8._s_0);
    FDynamicMeshBuilder::GetMesh(&local_108,pTVar7,local_128,'\0',false,false,param_4,param_5);
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_108);
    if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.AllocatorInstance.Data);
    }
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  return;
}

