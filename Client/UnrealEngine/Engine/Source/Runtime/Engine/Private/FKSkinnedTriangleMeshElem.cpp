// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetTransform @ 147258d20

TTransform<double> * __thiscall
FKSkinnedTriangleMeshElem::GetTransform
          (FKSkinnedTriangleMeshElem *this,TTransform<double> *__return_storage_ptr__)

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

// StaticStruct @ 14732e580

UScriptStruct * __cdecl FKSkinnedTriangleMeshElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKSkinnedTriangleMeshElem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKSkinnedTriangleMeshElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKSkinnedTriangleMeshElem,(UObject *)pUVar1,
                         L"KSkinnedTriangleMeshElem");
  }
  return Z_Registration_Info_UScriptStruct_FKSkinnedTriangleMeshElem.OuterSingleton;
}

// CalcAABB @ 1476f3740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FKSkinnedTriangleMeshElem::CalcAABB
          (FKSkinnedTriangleMeshElem *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  FSkinnedTriangleMesh *pFVar3;
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
  pFVar3 = (this->SkinnedTriangleMesh).Reference;
  uStack_103 = 0;
  uStack_101 = 0;
  if (pFVar3 == (FSkinnedTriangleMesh *)0x0) {
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
    lVar13 = (**(code **)(*(longlong *)pFVar3 + 0x90))(pFVar3,local_1e8);
    pFVar3 = (this->SkinnedTriangleMesh).Reference;
    pdVar14 = (double *)(**(code **)(*(longlong *)pFVar3 + 0x90))(pFVar3,local_138);
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

// GetSkinnedTriangleMesh @ 14770ab60

TRefCountPtr<Chaos::FSkinnedTriangleMesh> * __thiscall
FKSkinnedTriangleMeshElem::GetSkinnedTriangleMesh(FKSkinnedTriangleMeshElem *this)

{
  return &this->SkinnedTriangleMesh;
}

// Serialize @ 147726a40

bool __thiscall
FKSkinnedTriangleMeshElem::Serialize(FKSkinnedTriangleMeshElem *this,FArchive *param_1)

{
  TRefCountPtr<Chaos::FSkinnedTriangleMesh> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  FSkinnedTriangleMesh *pFVar4;
  FSkinnedTriangleMesh *pFVar5;
  undefined8 *puVar6;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar7;
  longlong local_b8 [2];
  FArchiveProxy local_a8;
  FChaosArchiveContext *local_10;
  
  pFVar7 = (FChaosArchiveContext *)0x0;
  if ((param_1->field_0x28 & 1) == 0) goto LAB_147726af2;
  pFVar5 = ::operator_new(0x2e0);
  if (pFVar5 == (FSkinnedTriangleMesh *)0x0) {
    pFVar5 = (FSkinnedTriangleMesh *)0x0;
  }
  else {
    pFVar5 = Chaos::FSkinnedTriangleMesh::FSkinnedTriangleMesh(pFVar5);
    if (pFVar5 != (FSkinnedTriangleMesh *)0x0) {
      LOCK();
      *(int *)&pFVar5->field_0x8 = *(int *)&pFVar5->field_0x8 + 1;
      UNLOCK();
    }
  }
  pTVar1 = &this->SkinnedTriangleMesh;
  if (pTVar1 == (TRefCountPtr<Chaos::FSkinnedTriangleMesh> *)local_b8) {
    if (pFVar5 == (FSkinnedTriangleMesh *)0x0) goto LAB_147726af2;
    LOCK();
    puVar2 = &pFVar5->field_0x8;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar3 != 1) || (*(int *)&pFVar5->field_0xc != 0)) goto LAB_147726af2;
    puVar6 = *(undefined8 **)pFVar5;
  }
  else {
    pFVar4 = pTVar1->Reference;
    pTVar1->Reference = pFVar5;
    if (pFVar4 == (FSkinnedTriangleMesh *)0x0) goto LAB_147726af2;
    LOCK();
    puVar2 = &pFVar4->field_0x8;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar3 != 1) || (*(int *)&pFVar4->field_0xc != 0)) goto LAB_147726af2;
    puVar6 = *(undefined8 **)pFVar4;
    pFVar5 = pFVar4;
  }
  (*(code *)*puVar6)(pFVar5,1);
LAB_147726af2:
  if ((this->SkinnedTriangleMesh).Reference != (FSkinnedTriangleMesh *)0x0) {
    FArchiveProxy::FArchiveProxy(&local_a8,param_1);
    local_a8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this_00 = ::operator_new(0x158);
    if (this_00 != (FChaosArchiveContext *)0x0) {
      pFVar7 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
    }
    pFVar5 = (this->SkinnedTriangleMesh).Reference;
    local_10 = pFVar7;
    (**(code **)(*(longlong *)pFVar5 + 0x100))(pFVar5,&local_a8);
    pFVar7 = local_10;
    if (local_10 != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_10);
      ::operator_delete(pFVar7,0x158);
    }
    FArchiveProxy::~FArchiveProxy(&local_a8);
  }
  return true;
}

// SetSkinnedTriangleMesh @ 147729770

void __thiscall
FKSkinnedTriangleMeshElem::SetSkinnedTriangleMesh
          (FKSkinnedTriangleMeshElem *this,TRefCountPtr<Chaos::FSkinnedTriangleMesh> *param_1)

{
  TRefCountPtr<Chaos::FSkinnedTriangleMesh> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  FSkinnedTriangleMesh *pFVar4;
  
  pTVar1 = &this->SkinnedTriangleMesh;
  if (pTVar1 != param_1) {
    pFVar4 = pTVar1->Reference;
    pTVar1->Reference = param_1->Reference;
    param_1->Reference = (FSkinnedTriangleMesh *)0x0;
    if (pFVar4 != (FSkinnedTriangleMesh *)0x0) {
      LOCK();
      puVar2 = &pFVar4->field_0x8;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)&pFVar4->field_0xc == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001477297ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        return;
      }
    }
  }
  return;
}

// CloneElem @ 14826e2a0

void __thiscall
FKSkinnedTriangleMeshElem::CloneElem
          (FKSkinnedTriangleMeshElem *this,FKSkinnedTriangleMeshElem *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FSkinnedTriangleMesh *pFVar3;
  FSkinnedTriangleMesh *pFVar4;
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
  pFVar3 = (param_1->SkinnedTriangleMesh).Reference;
  pFVar4 = (this->SkinnedTriangleMesh).Reference;
  if (pFVar4 != pFVar3) {
    (this->SkinnedTriangleMesh).Reference = pFVar3;
    if (pFVar3 != (FSkinnedTriangleMesh *)0x0) {
      LOCK();
      *(int *)&pFVar3->field_0x8 = *(int *)&pFVar3->field_0x8 + 1;
      UNLOCK();
    }
    if (pFVar4 != (FSkinnedTriangleMesh *)0x0) {
      LOCK();
      puVar1 = &pFVar4->field_0x8;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (*(int *)&pFVar4->field_0xc == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014826e30d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
        return;
      }
    }
  }
  return;
}

// DrawElemSolid @ 1482f7f50

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
FKSkinnedTriangleMeshElem::DrawElemSolid
          (FKSkinnedTriangleMeshElem *this,FPrimitiveDrawInterface *param_1,
          TTransform<double> *param_2,float param_3,FMaterialRenderProxy *param_4)

{
  int iVar1;
  FSkinnedTriangleMesh *pFVar2;
  code *pcVar3;
  bool bVar4;
  TMatrix<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [4];
  TVector<float>_u_0 local_174;
  TVector<float>_u_0 local_168;
  FDynamicMeshBuilder local_158;
  TVector<float>_u_0 local_128;
  TVector2<float>_u_0 local_11c;
  TVector2<float>_u_0 local_114;
  TVector2<float>_u_0 local_10c;
  TVector2<float>_u_0 local_104;
  TVector2<float>_u_0 local_fc;
  TVector2<float>_u_0 local_f4;
  TVector2<float>_u_0 local_ec;
  TVector2<float>_u_0 local_e4;
  FPackedNormal local_dc;
  FPackedNormal local_d8;
  undefined4 local_d4;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar2 = (this->SkinnedTriangleMesh).Reference;
  if (pFVar2 != (FSkinnedTriangleMesh *)0x0) {
    pFVar6 = (pFVar2->LocalPositions).AllocatorInstance.Data;
    iVar1 = (pFVar2->LocalPositions).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_158,param_1->View->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
    pFVar7 = pFVar6 + (longlong)iVar1 * 0xc;
    if (pFVar6 != pFVar7) {
      local_174._0_8_ = 0x3f800000;
      local_174._s_0.Z = 0.0;
      local_168._0_8_ = 0;
      local_168._s_0.Z = 1.0;
      do {
        local_128._0_8_ = *(undefined8 *)pFVar6;
        local_128._s_0.Z = (float)*(undefined4 *)(pFVar6 + 8);
        FPackedNormal::operator=(&local_dc,(TVector<float> *)&local_174._s_0);
        FPackedNormal::operator=(&local_d8,(TVector<float> *)&local_168._s_0);
        local_11c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_114 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_10c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_104 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_fc = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_ec = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_e4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_d4 = 0xffffffff;
        local_d8.Vector._s_0.W = '\x7f';
        FDynamicMeshBuilder::AddVertex(&local_158,(FDynamicMeshVertex *)&local_128._s_0);
        pFVar6 = pFVar6 + 0xc;
      } while (pFVar6 != pFVar7);
    }
    iVar1 = (pFVar2->TriangleMesh).MElements.ArrayNum;
    pFVar7 = (pFVar2->TriangleMesh).MElements.AllocatorInstance.Data;
    pFVar6 = pFVar7 + (longlong)iVar1 * 0xc;
    while( true ) {
      if ((pFVar2->TriangleMesh).MElements.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_178);
      }
      if (pFVar7 == pFVar6) break;
      FDynamicMeshBuilder::AddTriangle
                (&local_158,*(int *)pFVar7,*(int *)(pFVar7 + 4),*(int *)(pFVar7 + 8));
      pFVar7 = pFVar7 + 0xc;
    }
    pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_c8);
    FDynamicMeshBuilder::Draw
              (&local_158,param_1,pTVar5,param_4,'\0',false,true,(FHitProxyId)0xffffffff);
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_158);
  }
  return;
}

// DrawElemWire @ 1482fafa0

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
FKSkinnedTriangleMeshElem::DrawElemWire
          (FKSkinnedTriangleMeshElem *this,FPrimitiveDrawInterface *param_1,
          TTransform<double> *param_2,float param_3,FColor param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  float fVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FSkinnedTriangleMesh *pFVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 local_res8 [8];
  FPrimitiveDrawInterface *local_res10;
  ulonglong in_stack_fffffffffffffe48;
  ulonglong uVar59;
  ulonglong in_stack_fffffffffffffe50;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  FSkinnedTriangleMesh *local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  
  pFVar20 = (this->SkinnedTriangleMesh).Reference;
  if (pFVar20 != (FSkinnedTriangleMesh *)0x0) {
    pFVar18 = (pFVar20->LocalPositions).AllocatorInstance.Data;
    iVar1 = (pFVar20->LocalPositions).ArrayNum;
    uVar22 = (ulonglong)iVar1;
    local_res10 = param_1;
    local_160 = pFVar20;
    local_158 = pFVar18;
    if ((iVar1 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar59 = in_stack_fffffffffffffe48 & 0xffffffffffffff00;
    (**(code **)(param_1->_padding_ + 0x20))
              (param_1,0,(pFVar20->TriangleMesh).MElements.ArrayNum * 3,0,uVar59);
    fVar13 = __real_3b808081;
    uVar2 = (pFVar20->TriangleMesh).MElements.ArrayNum;
    uVar17 = (ulonglong)(int)uVar2;
    pFVar23 = (pFVar20->TriangleMesh).MElements.AllocatorInstance.Data;
    local_150 = pFVar23 + uVar17 * 0xc;
    while( true ) {
      pFVar14 = local_150;
      if ((pFVar20->TriangleMesh).MElements.ArrayNum != (int)uVar17) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar23 == pFVar14) break;
      uVar19 = *(uint *)pFVar23;
      uVar17 = (ulonglong)(int)uVar19;
      uVar16 = 0;
      if ((int)uVar19 < iVar1) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (uVar59 = uVar17, in_stack_fffffffffffffe50 = uVar22,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      auVar40 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      uVar19 = *(uint *)(pFVar23 + 4);
      uVar21 = (ulonglong)(int)uVar19;
      dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
      uVar16 = 0;
      if ((int)uVar19 < iVar1) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      local_d8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      local_e8 = (double)*(float *)(pFVar18 + uVar17 * 0xc + 8);
      dVar4 = (double)*(float *)(pFVar18 + uVar17 * 0xc + 4);
      auVar43 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar11 = local_e8 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar12 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar33 = blendpd(local_d8,auVar43,2);
      local_f8._8_4_ = SUB84(dVar4,0);
      local_f8._0_8_ = (double)*(float *)(pFVar18 + uVar17 * 0xc);
      local_f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar8 = (double)*(float *)(pFVar18 + uVar17 * 0xc) * (param_2->Scale3D).XY.m128d_f64[0];
      dVar4 = dVar4 * (param_2->Scale3D).XY.m128d_f64[1];
      uVar48 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar50._8_4_ = SUB84(dVar4,0);
      auVar50._0_8_ = dVar8;
      auVar50._12_4_ = uVar48;
      dVar6 = auVar43._0_8_;
      auVar51._0_8_ = auVar50._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar8;
      auVar51._8_8_ = dVar11 * local_d8._8_8_ - dVar6 * dVar4;
      auVar39._8_4_ = SUB84(dVar4,0);
      auVar39._0_8_ = dVar8;
      auVar39._12_4_ = uVar48;
      auVar25._8_4_ = SUB84(dVar12,0);
      auVar25._0_8_ = dVar11;
      auVar25._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar25 = blendpd(auVar39,auVar25,2);
      auVar26._0_8_ = auVar25._0_8_ * dVar6 - auVar33._0_8_ * dVar11;
      auVar26._8_8_ = auVar25._8_8_ * auVar43._8_8_ - auVar33._8_8_ * dVar12;
      auVar25 = blendpd(auVar51,auVar26,2);
      dVar12 = auVar51._8_8_ + auVar51._8_8_;
      dVar5 = auVar26._0_8_ + auVar26._0_8_;
      uVar48 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar52._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar52._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar41._8_4_ = SUB84(dVar5,0);
      auVar41._0_8_ = dVar12;
      auVar41._12_4_ = uVar48;
      auVar34._8_4_ = SUB84(dVar5,0);
      auVar34._0_8_ = dVar12;
      auVar34._12_4_ = uVar48;
      auVar25 = blendpd(auVar34,auVar52,2);
      auVar42._0_8_ = auVar41._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar12;
      auVar42._8_8_ = auVar52._0_8_ * auVar40._8_8_ - dVar6 * dVar5;
      auVar33._8_4_ = SUB84(auVar42._8_8_,0);
      auVar33._0_8_ = auVar42._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar39 = blendpd(auVar40,auVar43,2);
      auVar40._0_8_ = auVar25._0_8_ * dVar6 - auVar39._0_8_ * auVar52._0_8_;
      auVar40._8_8_ = auVar25._8_8_ * auVar43._8_8_ - auVar39._8_8_ * auVar52._8_8_;
      auVar43 = blendpd(auVar42,auVar40,2);
      dVar6 = dVar5 * dVar7 + dVar4 + auVar40._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      local_120 = auVar52._0_8_ * dVar7 + dVar11 + auVar43._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_130._8_4_ = SUB84(dVar6,0);
      local_130._0_8_ =
           dVar12 * dVar7 + dVar8 + auVar33._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_130._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      if ((uVar16 == 0) &&
         (uVar59 = uVar21, in_stack_fffffffffffffe50 = uVar22,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      auVar40 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      uVar19 = *(uint *)(pFVar23 + 8);
      uVar17 = (ulonglong)(int)uVar19;
      dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
      uVar16 = 0;
      if ((int)uVar19 < iVar1) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      local_b8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      local_c8 = (double)*(float *)(pFVar18 + uVar21 * 0xc + 8);
      dVar4 = (double)*(float *)(pFVar18 + uVar21 * 0xc + 4);
      auVar43 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar11 = local_c8 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar12 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar39 = blendpd(local_b8,auVar43,2);
      local_d8._8_4_ = SUB84(dVar4,0);
      local_d8._0_8_ = (double)*(float *)(pFVar18 + uVar21 * 0xc);
      local_d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar8 = (double)*(float *)(pFVar18 + uVar21 * 0xc) * (param_2->Scale3D).XY.m128d_f64[0];
      dVar4 = dVar4 * (param_2->Scale3D).XY.m128d_f64[1];
      uVar48 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar53._8_4_ = SUB84(dVar4,0);
      auVar53._0_8_ = dVar8;
      auVar53._12_4_ = uVar48;
      dVar6 = auVar43._0_8_;
      auVar54._0_8_ = auVar53._8_8_ * local_b8._0_8_ - local_b8._8_8_ * dVar8;
      auVar54._8_8_ = dVar11 * local_b8._8_8_ - dVar6 * dVar4;
      auVar27._8_4_ = SUB84(dVar4,0);
      auVar27._0_8_ = dVar8;
      auVar27._12_4_ = uVar48;
      auVar9._8_4_ = SUB84(dVar12,0);
      auVar9._0_8_ = dVar11;
      auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar25 = blendpd(auVar27,auVar9,2);
      auVar28._0_8_ = auVar25._0_8_ * dVar6 - auVar39._0_8_ * dVar11;
      auVar28._8_8_ = auVar25._8_8_ * auVar43._8_8_ - auVar39._8_8_ * dVar12;
      auVar25 = blendpd(auVar54,auVar28,2);
      dVar12 = auVar54._8_8_ + auVar54._8_8_;
      dVar5 = auVar28._0_8_ + auVar28._0_8_;
      uVar48 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar55._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar55._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar44._8_4_ = SUB84(dVar5,0);
      auVar44._0_8_ = dVar12;
      auVar44._12_4_ = uVar48;
      auVar35._8_4_ = SUB84(dVar5,0);
      auVar35._0_8_ = dVar12;
      auVar35._12_4_ = uVar48;
      auVar25 = blendpd(auVar35,auVar55,2);
      auVar45._0_8_ = auVar44._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar12;
      auVar45._8_8_ = auVar55._0_8_ * auVar40._8_8_ - dVar6 * dVar5;
      auVar29._8_4_ = SUB84(auVar45._8_8_,0);
      auVar29._0_8_ = auVar45._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
      auVar40 = blendpd(auVar40,auVar43,2);
      auVar36._0_8_ = auVar25._0_8_ * dVar6 - auVar40._0_8_ * auVar55._0_8_;
      auVar36._8_8_ = auVar25._8_8_ * auVar43._8_8_ - auVar40._8_8_ * auVar55._8_8_;
      auVar40 = blendpd(auVar45,auVar36,2);
      dVar6 = dVar5 * dVar7 + dVar4 + auVar36._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      local_138 = auVar55._0_8_ * dVar7 + dVar11 + auVar40._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_148._8_4_ = SUB84(dVar6,0);
      local_148._0_8_ =
           dVar12 * dVar7 + dVar8 + auVar29._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_148._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      if ((uVar16 == 0) &&
         (uVar59 = uVar17, in_stack_fffffffffffffe50 = uVar22,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      auVar40 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
      uVar24 = (ulonglong)param_4.field0_0x0._s_0.R;
      uVar21 = (ulonglong)param_4.field0_0x0._s_0.G;
      uVar19 = (uint)param_4.field0_0x0 & 0xff;
      local_f8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      local_a8 = (double)*(float *)(pFVar18 + uVar17 * 0xc + 8);
      dVar6 = (double)*(float *)(pFVar18 + uVar17 * 0xc + 4);
      dVar8 = local_a8 * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar4 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar43 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      auVar39 = blendpd(local_f8,auVar43,2);
      local_b8._8_4_ = SUB84(dVar6,0);
      local_b8._0_8_ = (double)*(float *)(pFVar18 + uVar17 * 0xc);
      local_b8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)*(float *)(pFVar18 + uVar17 * 0xc) * (param_2->Scale3D).XY.m128d_f64[0];
      dVar6 = dVar6 * (param_2->Scale3D).XY.m128d_f64[1];
      uVar48 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar56._8_4_ = SUB84(dVar6,0);
      auVar56._0_8_ = dVar5;
      auVar56._12_4_ = uVar48;
      dVar7 = auVar43._0_8_;
      auVar57._0_8_ = auVar56._8_8_ * local_f8._0_8_ - local_f8._8_8_ * dVar5;
      auVar57._8_8_ = dVar8 * local_f8._8_8_ - dVar7 * dVar6;
      auVar30._8_4_ = SUB84(dVar6,0);
      auVar30._0_8_ = dVar5;
      auVar30._12_4_ = uVar48;
      auVar10._8_4_ = SUB84(dVar4,0);
      auVar10._0_8_ = dVar8;
      auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar25 = blendpd(auVar30,auVar10,2);
      auVar31._0_8_ = auVar25._0_8_ * dVar7 - auVar39._0_8_ * dVar8;
      auVar31._8_8_ = auVar25._8_8_ * auVar43._8_8_ - auVar39._8_8_ * dVar4;
      auVar25 = blendpd(auVar57,auVar31,2);
      auVar58._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar58._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      dVar4 = auVar57._8_8_ + auVar57._8_8_;
      dVar12 = auVar31._0_8_ + auVar31._0_8_;
      uVar48 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar46._8_4_ = SUB84(dVar12,0);
      auVar46._0_8_ = dVar4;
      auVar46._12_4_ = uVar48;
      auVar37._8_4_ = SUB84(dVar12,0);
      auVar37._0_8_ = dVar4;
      auVar37._12_4_ = uVar48;
      auVar25 = blendpd(auVar37,auVar58,2);
      auVar47._0_8_ = auVar46._8_8_ * auVar40._0_8_ - auVar40._8_8_ * dVar4;
      auVar47._8_8_ = auVar58._0_8_ * auVar40._8_8_ - dVar7 * dVar12;
      auVar32._8_4_ = SUB84(auVar47._8_8_,0);
      auVar32._0_8_ = auVar47._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
      auVar40 = blendpd(auVar40,auVar43,2);
      auVar38._0_8_ = auVar25._0_8_ * dVar7 - auVar40._0_8_ * auVar58._0_8_;
      auVar38._8_8_ = auVar25._8_8_ * auVar43._8_8_ - auVar40._8_8_ * auVar58._8_8_;
      local_194 = FLinearColor::sRGBToLinearTable[uVar24];
      dVar7 = dVar12 * dVar11 + dVar6 + auVar38._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      local_190 = FLinearColor::sRGBToLinearTable[uVar21];
      auVar40 = blendpd(auVar47,auVar38,2);
      local_108 = auVar58._0_8_ * dVar11 + dVar8 + auVar40._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_18c = FLinearColor::sRGBToLinearTable[uVar19];
      local_118._8_4_ = SUB84(dVar7,0);
      local_118._0_8_ =
           dVar4 * dVar11 + dVar5 + auVar32._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_118._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      fVar49 = (float)((uint)param_4.field0_0x0 >> 0x18) * fVar13;
      in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffff00000000;
      uVar59 = uVar59 & 0xffffffffffffff00;
      local_188 = fVar49;
      (**(code **)(local_res10->_padding_ + 0x30))
                (local_res10,local_130,local_148,&local_194,uVar59,in_stack_fffffffffffffe50,0,0);
      local_184 = FLinearColor::sRGBToLinearTable[uVar24];
      local_180 = FLinearColor::sRGBToLinearTable[uVar21];
      local_17c = FLinearColor::sRGBToLinearTable[uVar19];
      in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffff00000000;
      uVar59 = uVar59 & 0xffffffffffffff00;
      local_178 = fVar49;
      (**(code **)(local_res10->_padding_ + 0x30))
                (local_res10,local_148,local_118,&local_184,uVar59,in_stack_fffffffffffffe50,0,0);
      local_174 = FLinearColor::sRGBToLinearTable[uVar24];
      local_170 = FLinearColor::sRGBToLinearTable[uVar21];
      local_16c = FLinearColor::sRGBToLinearTable[uVar19];
      in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffff00000000;
      uVar59 = uVar59 & 0xffffffffffffff00;
      local_168 = fVar49;
      (**(code **)(local_res10->_padding_ + 0x30))
                (local_res10,local_118,local_130,&local_174,uVar59,in_stack_fffffffffffffe50,0,0);
      uVar17 = (ulonglong)uVar2;
      pFVar23 = pFVar23 + 0xc;
      pFVar18 = local_158;
      pFVar20 = local_160;
    }
  }
  return;
}

// GetElemSolid @ 148309470

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
FKSkinnedTriangleMeshElem::GetElemSolid
          (FKSkinnedTriangleMeshElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  int iVar1;
  FSkinnedTriangleMesh *pFVar2;
  code *pcVar3;
  bool bVar4;
  TMatrix<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [4];
  TVector<float>_u_0 local_174;
  TVector<float>_u_0 local_168;
  FDynamicMeshBuilder local_158;
  TVector<float>_u_0 local_128;
  TVector2<float>_u_0 local_11c;
  TVector2<float>_u_0 local_114;
  TVector2<float>_u_0 local_10c;
  TVector2<float>_u_0 local_104;
  TVector2<float>_u_0 local_fc;
  TVector2<float>_u_0 local_f4;
  TVector2<float>_u_0 local_ec;
  TVector2<float>_u_0 local_e4;
  FPackedNormal local_dc;
  FPackedNormal local_d8;
  undefined4 local_d4;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar2 = (this->SkinnedTriangleMesh).Reference;
  if (pFVar2 != (FSkinnedTriangleMesh *)0x0) {
    pFVar6 = (pFVar2->LocalPositions).AllocatorInstance.Data;
    iVar1 = (pFVar2->LocalPositions).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FDynamicMeshBuilder::FDynamicMeshBuilder
              (&local_158,param_5->FeatureLevel,1,0,false,(FDynamicMeshBufferAllocator *)0x0);
    pFVar7 = pFVar6 + (longlong)iVar1 * 0xc;
    if (pFVar6 != pFVar7) {
      local_174._0_8_ = 0x3f800000;
      local_174._s_0.Z = 0.0;
      local_168._0_8_ = 0;
      local_168._s_0.Z = 1.0;
      do {
        local_128._0_8_ = *(undefined8 *)pFVar6;
        local_128._s_0.Z = (float)*(undefined4 *)(pFVar6 + 8);
        FPackedNormal::operator=(&local_dc,(TVector<float> *)&local_174._s_0);
        FPackedNormal::operator=(&local_d8,(TVector<float> *)&local_168._s_0);
        local_11c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_114 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_10c = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_104 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_fc = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_f4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_ec = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_e4 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_d4 = 0xffffffff;
        local_d8.Vector._s_0.W = '\x7f';
        FDynamicMeshBuilder::AddVertex(&local_158,(FDynamicMeshVertex *)&local_128._s_0);
        pFVar6 = pFVar6 + 0xc;
      } while (pFVar6 != pFVar7);
    }
    iVar1 = (pFVar2->TriangleMesh).MElements.ArrayNum;
    pFVar7 = (pFVar2->TriangleMesh).MElements.AllocatorInstance.Data;
    pFVar6 = pFVar7 + (longlong)iVar1 * 0xc;
    while( true ) {
      if ((pFVar2->TriangleMesh).MElements.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::TVector<int,3>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_178);
      }
      if (pFVar7 == pFVar6) break;
      FDynamicMeshBuilder::AddTriangle
                (&local_158,*(int *)pFVar7,*(int *)(pFVar7 + 4),*(int *)(pFVar7 + 8));
      pFVar7 = pFVar7 + 0xc;
    }
    pTVar5 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_c8);
    FDynamicMeshBuilder::GetMesh(&local_158,pTVar5,param_3,'\0',false,false,param_4,param_5);
    FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_158);
  }
  return;
}

