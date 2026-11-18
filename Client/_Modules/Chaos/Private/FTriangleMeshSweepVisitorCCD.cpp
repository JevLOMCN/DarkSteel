// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// VisitSweep @ 143edfdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TBox<double,3>,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::TBox<double,3>,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  undefined8 uVar2;
  uint uVar3;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  double dVar6;
  TVector<float,3> TVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  TAABB<double,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_258 [32];
  float local_1f0;
  float local_1ec;
  TVector<float,3> *local_1e8;
  TVector<float,3> *local_1e0;
  double local_1d8;
  double local_1d0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  __m128 local_198 [2];
  __m128 local_178;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined1 local_138 [16];
  double local_128;
  TVector<double,3> local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar14 = (longlong)(int)uVar3;
  fVar31 = (float)*(double *)&this->TriMeshScale;
  fVar32 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar3 >> 0x1f;
  fVar19 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar13 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_1e8 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar4->AllocatorInstance).Data + lVar14 * 6));
  pTVar4 = this->Elements;
  uVar13 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_1e0 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar4->AllocatorInstance).Data + lVar14 * 6 + 2));
  pTVar4 = this->Elements;
  uVar13 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pTVar11 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar4->AllocatorInstance).Data + lVar14 * 6 + 4))
  ;
  fVar33 = (float)*(undefined8 *)local_1e8 * fVar31;
  fVar34 = (float)((ulonglong)*(undefined8 *)local_1e8 >> 0x20) * fVar32;
  fVar35 = *(float *)&local_1e8->field_0x8 * fVar19;
  TVar7 = *local_1e0;
  fVar25 = (float)*(undefined8 *)pTVar11 * fVar31;
  fVar26 = (float)((ulonglong)*(undefined8 *)pTVar11 >> 0x20) * fVar32;
  fVar28 = *(float *)&pTVar11->field_0x8 * fVar19;
  local_e8._0_4_ = TVar7._0_4_ * fVar31;
  local_e8._4_4_ = TVar7._4_4_ * fVar32;
  local_e8._8_4_ = TVar7._8_4_ * fVar19;
  local_e8._12_4_ = 0;
  local_f8._4_4_ = fVar34;
  local_f8._0_4_ = fVar33;
  local_f8._8_4_ = fVar35;
  local_f8._12_4_ = 0;
  local_d8._4_4_ = fVar26;
  local_d8._0_4_ = fVar25;
  local_d8._8_4_ = fVar28;
  local_d8._12_4_ = 0;
  fVar25 = fVar25 - fVar33;
  fVar26 = fVar26 - fVar34;
  fVar28 = fVar28 - fVar35;
  fVar32 = fVar26 * (local_e8._0_4_ - fVar33) - (local_e8._4_4_ - fVar34) * fVar25;
  fVar19 = fVar28 * (local_e8._4_4_ - fVar34) - (local_e8._8_4_ - fVar35) * fVar26;
  fVar31 = fVar25 * (local_e8._8_4_ - fVar35) - (local_e8._0_4_ - fVar33) * fVar28;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar25 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar31 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar19 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar32;
    auVar17._4_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar17._0_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar17._8_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar17._12_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar10 = movmskps((int)pTVar11,auVar17);
    if (iVar10 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar24 = this->LengthScale * this->Length;
  fVar38 = (float)this->IgnorePenetration;
  fVar39 = (float)this->IgnorePenetration;
  fVar25 = fVar31 * fVar31 + fVar19 * fVar19;
  fVar26 = fVar19 * fVar19 + fVar31 * fVar31;
  fVar28 = fVar32 * fVar32 + 0.0;
  fVar22 = fVar32 * fVar32 + 0.0;
  auVar16._0_4_ = fVar28 + fVar25;
  auVar16._4_4_ = fVar22 + fVar26;
  auVar16._8_4_ = fVar25 + fVar28;
  auVar16._12_4_ = fVar26 + fVar22;
  auVar17 = sqrtps(auVar16,auVar16);
  auVar17 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar17);
  fVar19 = auVar17._0_4_ * fVar19;
  fVar31 = auVar17._4_4_ * fVar31;
  fVar32 = auVar17._8_4_ * fVar32;
  fVar22 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar27 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar29 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar30 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar25 = fVar31 * fVar22 - fVar27 * fVar19;
  fVar26 = fVar32 * fVar27 - fVar29 * fVar31;
  fVar28 = fVar19 * fVar29 - fVar22 * fVar32;
  fVar26 = fVar26 + fVar26;
  fVar28 = fVar28 + fVar28;
  fVar25 = fVar25 + fVar25;
  fVar36 = fVar30 * fVar26 + fVar19 + (fVar25 * fVar27 - fVar29 * fVar28);
  fVar37 = fVar30 * fVar28 + fVar31 + (fVar26 * fVar29 - fVar22 * fVar25);
  fVar25 = fVar30 * fVar25 + fVar32 + (fVar28 * fVar22 - fVar27 * fVar26);
  fVar33 = fVar33 - (fVar24 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar34 = fVar34 - (fVar24 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar35 = fVar35 - (fVar24 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar19 = fVar34 * fVar22 - fVar33 * fVar27;
  fVar31 = fVar35 * fVar27 - fVar34 * fVar29;
  fVar32 = fVar33 * fVar29 - fVar35 * fVar22;
  fVar31 = fVar31 + fVar31;
  fVar32 = fVar32 + fVar32;
  fVar19 = fVar19 + fVar19;
  dVar23 = (double)(0.0 - fVar36);
  dVar6 = (double)(0.0 - fVar37);
  local_1c8.Geometry = this->QueryGeom;
  pTVar12 = &((TBox<double,3> *)local_1c8.Geometry)->AABB;
  local_158 = (double)(0.0 - fVar25);
  local_168._8_4_ = SUB84(dVar6,0);
  local_168._0_8_ = dVar23;
  local_168._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  if (0.0 <= dVar23) {
    pTVar12 = (TAABB<double,3> *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMax;
  }
  if (0.0 <= dVar6) {
    uVar2 = *(undefined8 *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMax.field_0x8;
    uVar20 = (undefined4)uVar2;
    uVar21 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    uVar2 = *(undefined8 *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMin.field_0x8;
    uVar20 = (undefined4)uVar2;
    uVar21 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if (0.0 <= local_158) {
    dVar23 = *(double *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMax.field_0x10;
  }
  else {
    dVar23 = *(double *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMin.field_0x10;
  }
  fVar19 = ((fVar30 * fVar32 + fVar34 + (fVar31 * fVar29 - fVar22 * fVar19)) -
           (float)(double)CONCAT44(uVar21,uVar20)) * fVar37 +
           ((fVar30 * fVar31 + fVar33 + (fVar19 * fVar27 - fVar29 * fVar32)) -
           (float)*(double *)&pTVar12->MMin) * fVar36 +
           ((fVar30 * fVar19 + fVar35 + (fVar32 * fVar22 - fVar27 * fVar31)) - (float)dVar23) *
           fVar25;
  auVar18._4_4_ = -(uint)(fVar19 < fVar39);
  auVar18._0_4_ = -(uint)(fVar19 < fVar38);
  auVar18._8_4_ = -(uint)(fVar19 < fVar38);
  auVar18._12_4_ = -(uint)(fVar19 < fVar39);
  iVar10 = movmskps((int)pTVar12,auVar18);
  if (iVar10 != 0) {
    return true;
  }
  local_1c8.Margin = *(float *)&((TBox<double,3> *)local_1c8.Geometry)->_padding_;
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
  local_1b0.Geometry = local_f8;
  local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1c8.Radius = 0.0;
  local_1b0.Margin = 0.0;
  local_1b0.Radius = 0.0;
  bVar8 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_1f0,&local_178,local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar8) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((this->RayDirSimd).m128_f32[1] * (float)local_198[0]._4_4_ +
                        p_Var1->m128_f32[0] * (float)local_198[0]._0_4_ +
                       (this->RayDirSimd).m128_f32[2] * (float)local_198[0]._8_4_),
               (double)(this->LengthScale * *param_2),(double)local_1f0,this->IgnorePenetration,
               this->TargetPenetration,&local_1d8,&local_1d0);
    fVar19 = (float)local_1d8 * *param_2;
    if (fVar19 < *param_2) {
      local_150 = (double)local_178.m128_f32[0];
      dStack_148 = (double)local_178.m128_f32[1];
      local_140 = (double)local_178.m128_f32[2];
      *param_2 = fVar19;
      local_128 = (double)(float)local_198[0]._8_4_;
      local_138._8_4_ = SUB84((double)(float)local_198[0]._4_4_,0);
      local_138._0_8_ = (double)(float)local_198[0]._0_4_;
      local_138._12_4_ = (int)((ulonglong)(double)(float)local_198[0]._4_4_ >> 0x20);
      local_118._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_118._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_118._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_118,(TVector<double,3> *)local_138,(TVector<double,3> *)&local_150,
                 this->LengthScale,fVar19,&this->OutNormal,&this->OutPosition,&local_1ec);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_1d0;
      this->OutDistance = (double)fVar19;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee0460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TBox<double,3>,int>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::TBox<double,3>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  undefined8 uVar2;
  uint uVar3;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  double dVar6;
  TVector<float,3> TVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  TAABB<double,3> *pTVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TParticles<float,3> *this_00;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_258 [32];
  float local_1f0;
  float local_1ec;
  TVector<float,3> *local_1e8;
  TVector<float,3> *local_1e0;
  double local_1d8;
  double local_1d0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  __m128 local_198 [2];
  __m128 local_178;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined1 local_138 [16];
  double local_128;
  TVector<double,3> local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar14 = (longlong)(int)uVar3;
  fVar31 = (float)*(double *)&this->TriMeshScale;
  fVar32 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar3 >> 0x1f;
  fVar19 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar13 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_1e8 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar14 * 0xc));
  pTVar4 = this->Elements;
  uVar13 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_1e0 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar14 * 0xc + 4));
  pTVar4 = this->Elements;
  uVar13 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pTVar11 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar14 * 0xc + 8));
  fVar33 = (float)*(undefined8 *)local_1e8 * fVar31;
  fVar34 = (float)((ulonglong)*(undefined8 *)local_1e8 >> 0x20) * fVar32;
  fVar35 = *(float *)&local_1e8->field_0x8 * fVar19;
  TVar7 = *local_1e0;
  fVar25 = (float)*(undefined8 *)pTVar11 * fVar31;
  fVar26 = (float)((ulonglong)*(undefined8 *)pTVar11 >> 0x20) * fVar32;
  fVar28 = *(float *)&pTVar11->field_0x8 * fVar19;
  local_e8._0_4_ = TVar7._0_4_ * fVar31;
  local_e8._4_4_ = TVar7._4_4_ * fVar32;
  local_e8._8_4_ = TVar7._8_4_ * fVar19;
  local_e8._12_4_ = 0;
  local_f8._4_4_ = fVar34;
  local_f8._0_4_ = fVar33;
  local_f8._8_4_ = fVar35;
  local_f8._12_4_ = 0;
  local_d8._4_4_ = fVar26;
  local_d8._0_4_ = fVar25;
  local_d8._8_4_ = fVar28;
  local_d8._12_4_ = 0;
  fVar25 = fVar25 - fVar33;
  fVar26 = fVar26 - fVar34;
  fVar28 = fVar28 - fVar35;
  fVar32 = fVar26 * (local_e8._0_4_ - fVar33) - (local_e8._4_4_ - fVar34) * fVar25;
  fVar19 = fVar28 * (local_e8._4_4_ - fVar34) - (local_e8._8_4_ - fVar35) * fVar26;
  fVar31 = fVar25 * (local_e8._8_4_ - fVar35) - (local_e8._0_4_ - fVar33) * fVar28;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar25 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar31 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar19 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar32;
    auVar17._4_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar17._0_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar17._8_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar17._12_4_ = -(uint)(0.0 < fVar25 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar10 = movmskps((int)pTVar11,auVar17);
    if (iVar10 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar24 = this->LengthScale * this->Length;
  fVar38 = (float)this->IgnorePenetration;
  fVar39 = (float)this->IgnorePenetration;
  fVar25 = fVar31 * fVar31 + fVar19 * fVar19;
  fVar26 = fVar19 * fVar19 + fVar31 * fVar31;
  fVar28 = fVar32 * fVar32 + 0.0;
  fVar22 = fVar32 * fVar32 + 0.0;
  auVar16._0_4_ = fVar28 + fVar25;
  auVar16._4_4_ = fVar22 + fVar26;
  auVar16._8_4_ = fVar25 + fVar28;
  auVar16._12_4_ = fVar26 + fVar22;
  auVar17 = sqrtps(auVar16,auVar16);
  auVar17 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar17);
  fVar19 = auVar17._0_4_ * fVar19;
  fVar31 = auVar17._4_4_ * fVar31;
  fVar32 = auVar17._8_4_ * fVar32;
  fVar22 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar27 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar29 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar30 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar25 = fVar31 * fVar22 - fVar27 * fVar19;
  fVar26 = fVar32 * fVar27 - fVar29 * fVar31;
  fVar28 = fVar19 * fVar29 - fVar22 * fVar32;
  fVar26 = fVar26 + fVar26;
  fVar28 = fVar28 + fVar28;
  fVar25 = fVar25 + fVar25;
  fVar36 = fVar30 * fVar26 + fVar19 + (fVar25 * fVar27 - fVar29 * fVar28);
  fVar37 = fVar30 * fVar28 + fVar31 + (fVar26 * fVar29 - fVar22 * fVar25);
  fVar25 = fVar30 * fVar25 + fVar32 + (fVar28 * fVar22 - fVar27 * fVar26);
  fVar33 = fVar33 - (fVar24 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar34 = fVar34 - (fVar24 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar35 = fVar35 - (fVar24 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar19 = fVar34 * fVar22 - fVar33 * fVar27;
  fVar31 = fVar35 * fVar27 - fVar34 * fVar29;
  fVar32 = fVar33 * fVar29 - fVar35 * fVar22;
  fVar31 = fVar31 + fVar31;
  fVar32 = fVar32 + fVar32;
  fVar19 = fVar19 + fVar19;
  dVar23 = (double)(0.0 - fVar36);
  dVar6 = (double)(0.0 - fVar37);
  local_1c8.Geometry = this->QueryGeom;
  pTVar12 = &((TBox<double,3> *)local_1c8.Geometry)->AABB;
  local_158 = (double)(0.0 - fVar25);
  local_168._8_4_ = SUB84(dVar6,0);
  local_168._0_8_ = dVar23;
  local_168._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  if (0.0 <= dVar23) {
    pTVar12 = (TAABB<double,3> *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMax;
  }
  if (0.0 <= dVar6) {
    uVar2 = *(undefined8 *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMax.field_0x8;
    uVar20 = (undefined4)uVar2;
    uVar21 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    uVar2 = *(undefined8 *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMin.field_0x8;
    uVar20 = (undefined4)uVar2;
    uVar21 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if (0.0 <= local_158) {
    dVar23 = *(double *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMax.field_0x10;
  }
  else {
    dVar23 = *(double *)&(((TBox<double,3> *)local_1c8.Geometry)->AABB).MMin.field_0x10;
  }
  fVar19 = ((fVar30 * fVar32 + fVar34 + (fVar31 * fVar29 - fVar22 * fVar19)) -
           (float)(double)CONCAT44(uVar21,uVar20)) * fVar37 +
           ((fVar30 * fVar31 + fVar33 + (fVar19 * fVar27 - fVar29 * fVar32)) -
           (float)*(double *)&pTVar12->MMin) * fVar36 +
           ((fVar30 * fVar19 + fVar35 + (fVar32 * fVar22 - fVar27 * fVar31)) - (float)dVar23) *
           fVar25;
  auVar18._4_4_ = -(uint)(fVar19 < fVar39);
  auVar18._0_4_ = -(uint)(fVar19 < fVar38);
  auVar18._8_4_ = -(uint)(fVar19 < fVar38);
  auVar18._12_4_ = -(uint)(fVar19 < fVar39);
  iVar10 = movmskps((int)pTVar12,auVar18);
  if (iVar10 != 0) {
    return true;
  }
  local_1c8.Margin = *(float *)&((TBox<double,3> *)local_1c8.Geometry)->_padding_;
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
  local_1b0.Geometry = local_f8;
  local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1c8.Radius = 0.0;
  local_1b0.Margin = 0.0;
  local_1b0.Radius = 0.0;
  bVar8 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_1f0,&local_178,local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar8) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((float)local_198[0]._4_4_ * (this->RayDirSimd).m128_f32[1] +
                        (float)local_198[0]._0_4_ * p_Var1->m128_f32[0] +
                       (float)local_198[0]._8_4_ * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_1f0,this->IgnorePenetration,
               this->TargetPenetration,&local_1d8,&local_1d0);
    fVar19 = (float)local_1d8 * *param_2;
    if (fVar19 < *param_2) {
      local_150 = (double)local_178.m128_f32[0];
      dStack_148 = (double)local_178.m128_f32[1];
      local_140 = (double)local_178.m128_f32[2];
      *param_2 = fVar19;
      local_128 = (double)(float)local_198[0]._8_4_;
      local_138._8_4_ = SUB84((double)(float)local_198[0]._4_4_,0);
      local_138._0_8_ = (double)(float)local_198[0]._0_4_;
      local_138._12_4_ = (int)((ulonglong)(double)(float)local_198[0]._4_4_ >> 0x20);
      local_118._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_118._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_118._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_118,(TVector<double,3> *)local_138,(TVector<double,3> *)&local_150,
                 this->LengthScale,fVar19,&this->OutNormal,&this->OutPosition,&local_1ec);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_1d0;
      this->OutDistance = (double)fVar19;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee0ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::
FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>::
VisitSweep(FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,unsigned_short>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  uint uVar5;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar7;
  TBox<double,3> *pTVar8;
  code *pcVar9;
  TVector<float,3> TVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  TAABB<double,3> *pTVar19;
  TParticles<float,3> *this_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double adStackY_3b0 [32];
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  float local_240;
  float local_23c;
  TVector<float,3> *local_238;
  TVector<float,3> *local_230;
  double local_228;
  double local_220;
  double local_218 [3];
  undefined1 local_200 [12];
  float local_1f4;
  code *local_1f0;
  FGeomGJKHelperSIMD local_1e8;
  __m128 local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0 [5];
  __m128 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_150 [16];
  double local_140;
  TVector<double,3> local_138;
  uint local_118 [12];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar6 = this->Elements;
  uVar5 = param_1->Payload;
  lVar16 = (longlong)(int)uVar5;
  fVar32 = (float)*(double *)&this->TriMeshScale;
  fVar33 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar17 = ~uVar5 >> 0x1f;
  fVar23 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar13 = 0;
  if ((int)uVar5 < pTVar6->ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    uStackY_2b0 = 0x143ee0b90;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  uStackY_2b0 = 0x143ee0baf;
  local_238 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar6->AllocatorInstance).Data + lVar16 * 6));
  pTVar6 = this->Elements;
  uVar13 = 0;
  if ((int)uVar5 < pTVar6->ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    uStackY_2b0 = 0x143ee0bf6;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  uStackY_2b0 = 0x143ee0c12;
  local_230 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar6->AllocatorInstance).Data + lVar16 * 6 + 2));
  pTVar6 = this->Elements;
  uVar13 = 0;
  if ((int)uVar5 < pTVar6->ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    uStackY_2b0 = 0x143ee0c5c;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  uStackY_2b0 = 0x143ee0c78;
  pTVar15 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar6->AllocatorInstance).Data + lVar16 * 6 + 4))
  ;
  fVar34 = (float)*(undefined8 *)local_238 * fVar32;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_238 >> 0x20) * fVar33;
  fVar36 = *(float *)&local_238->field_0x8 * fVar23;
  TVar10 = *local_230;
  fVar26 = (float)*(undefined8 *)pTVar15 * fVar32;
  fVar27 = (float)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) * fVar33;
  fVar29 = *(float *)&pTVar15->field_0x8 * fVar23;
  local_d8._0_4_ = TVar10._0_4_ * fVar32;
  local_d8._4_4_ = TVar10._4_4_ * fVar33;
  local_d8._8_4_ = TVar10._8_4_ * fVar23;
  local_d8._12_4_ = 0;
  local_e8._4_4_ = fVar35;
  local_e8._0_4_ = fVar34;
  local_e8._8_4_ = fVar36;
  local_e8._12_4_ = 0;
  local_c8._4_4_ = fVar27;
  local_c8._0_4_ = fVar26;
  local_c8._8_4_ = fVar29;
  local_c8._12_4_ = 0;
  fVar26 = fVar26 - fVar34;
  fVar27 = fVar27 - fVar35;
  fVar29 = fVar29 - fVar36;
  fVar33 = fVar27 * (local_d8._0_4_ - fVar34) - (local_d8._4_4_ - fVar35) * fVar26;
  fVar23 = fVar29 * (local_d8._4_4_ - fVar35) - (local_d8._8_4_ - fVar36) * fVar27;
  fVar32 = fVar26 * (local_d8._8_4_ - fVar36) - (local_d8._0_4_ - fVar34) * fVar29;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar26 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar32 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar23 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar33;
    auVar21._4_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar21._0_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar21._8_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar21._12_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar14 = movmskps((int)pTVar15,auVar21);
    if (iVar14 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar25 = this->Length * this->LengthScale;
  pTVar7 = this->QueryGeom;
  fVar39 = (float)this->IgnorePenetration;
  fVar40 = (float)this->IgnorePenetration;
  fVar26 = fVar32 * fVar32 + fVar23 * fVar23;
  fVar27 = fVar23 * fVar23 + fVar32 * fVar32;
  fVar29 = fVar33 * fVar33 + 0.0;
  fVar24 = fVar33 * fVar33 + 0.0;
  auVar20._0_4_ = fVar29 + fVar26;
  auVar20._4_4_ = fVar24 + fVar27;
  auVar20._8_4_ = fVar26 + fVar29;
  auVar20._12_4_ = fVar27 + fVar24;
  auVar21 = sqrtps(auVar20,auVar20);
  auVar21 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar21);
  fVar23 = auVar21._0_4_ * fVar23;
  fVar32 = auVar21._4_4_ * fVar32;
  fVar33 = auVar21._8_4_ * fVar33;
  fVar24 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar28 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar30 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar31 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar26 = fVar32 * fVar24 - fVar28 * fVar23;
  fVar27 = fVar33 * fVar28 - fVar30 * fVar32;
  fVar29 = fVar23 * fVar30 - fVar24 * fVar33;
  fVar27 = fVar27 + fVar27;
  fVar29 = fVar29 + fVar29;
  fVar26 = fVar26 + fVar26;
  fVar37 = fVar31 * fVar27 + fVar23 + (fVar26 * fVar28 - fVar30 * fVar29);
  fVar38 = fVar31 * fVar29 + fVar32 + (fVar27 * fVar30 - fVar24 * fVar26);
  fVar26 = fVar31 * fVar26 + fVar33 + (fVar29 * fVar24 - fVar28 * fVar27);
  fVar34 = fVar34 - (fVar25 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar35 = fVar35 - (fVar25 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar36 = fVar36 - (fVar25 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar23 = fVar35 * fVar24 - fVar34 * fVar28;
  fVar32 = fVar36 * fVar28 - fVar35 * fVar30;
  fVar33 = fVar34 * fVar30 - fVar36 * fVar24;
  fVar32 = fVar32 + fVar32;
  fVar33 = fVar33 + fVar33;
  fVar23 = fVar23 + fVar23;
  puVar18 = local_118;
  lVar16 = 0;
  pTVar8 = (pTVar7->MObject).Reference;
  pTVar19 = &pTVar8->AABB;
  local_218[1] = (double)*(float *)((longlong)&pTVar7->_padding_ + 4);
  local_218[0] = (double)*(float *)&pTVar7->_padding_;
  local_218[2] = (double)*(float *)&pTVar7->_padding_;
  local_1b8 = (double)*(float *)&pTVar7->_padding_ * (double)(0.0 - fVar37);
  local_1b0 = local_218[1] * (double)(0.0 - fVar38);
  local_1a8 = (double)*(float *)&pTVar7->_padding_ * (double)(0.0 - fVar26);
  do {
    pdVar2 = (double *)((longlong)local_218 + lVar16 + ((longlong)pTVar19 - (longlong)local_218));
    pdVar3 = (double *)(((longlong)&local_1b8 - (longlong)pTVar19) + (longlong)pdVar2);
    bVar11 = 0.0 < *pdVar3 || *pdVar3 == 0.0;
    if (bVar11) {
      dVar4 = *(double *)(&(pTVar8->AABB).MMax.field_0x0 + lVar16);
    }
    else {
      dVar4 = *pdVar2;
    }
    uVar13 = (uint)bVar11;
    *(double *)((longlong)local_1a0 + lVar16) = *(double *)((longlong)local_218 + lVar16) * dVar4;
    lVar16 = lVar16 + 8;
    *puVar18 = uVar13;
    puVar18 = puVar18 + 1;
  } while (lVar16 < 0x18);
  fVar23 = ((fVar31 * fVar33 + fVar35 + (fVar32 * fVar30 - fVar24 * fVar23)) - (float)local_1a0[1])
           * fVar38 +
           ((fVar31 * fVar32 + fVar34 + (fVar23 * fVar28 - fVar30 * fVar33)) - (float)local_1a0[0])
           * fVar37 +
           ((fVar31 * fVar23 + fVar36 + (fVar33 * fVar24 - fVar28 * fVar32)) - (float)local_1a0[2])
           * fVar26;
  auVar22._4_4_ = -(uint)(fVar23 < fVar40);
  auVar22._0_4_ = -(uint)(fVar23 < fVar39);
  auVar22._8_4_ = -(uint)(fVar23 < fVar39);
  auVar22._12_4_ = -(uint)(fVar23 < fVar40);
  iVar14 = movmskps(uVar13,auVar22);
  if (iVar14 != 0) {
    return true;
  }
  local_200._0_8_ = this->QueryGeom;
  local_200._8_4_ =
       *(undefined4 *)
        &((TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)local_200._0_8_)->_padding_;
  local_1f0 = FGeomGJKHelperSIMD::
              SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>;
  local_1e8.Geometry = local_e8;
  local_1e8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1f4 = 0.0;
  local_1e8.Margin = 0.0;
  local_1e8.Radius = 0.0;
  uStackY_2b0 = 0x143ee102c;
  bVar11 = GJKRaycast2ImplSimd<__m128,1>
                     (&local_1e8,(FGeomGJKHelperSIMD *)local_200,&this->RotationSimd,
                      &this->TranslationSimd,p_Var1,this->LengthScale * *param_2,&local_240,
                      &local_178,&local_1c8,true,&GlobalVectorConstants::Float1000);
  if (bVar11) {
    uStackY_2b0 = 0x143ee108f;
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)(local_1c8.m128_f32[1] * (this->RayDirSimd).m128_f32[1] +
                        local_1c8.m128_f32[0] * p_Var1->m128_f32[0] +
                       local_1c8.m128_f32[2] * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_240,this->IgnorePenetration,
               this->TargetPenetration,&local_228,&local_220);
    fVar23 = (float)local_228 * *param_2;
    if (fVar23 < *param_2) {
      local_168 = (double)local_178.m128_f32[0];
      dStack_160 = (double)local_178.m128_f32[1];
      local_158 = (double)local_178.m128_f32[2];
      *param_2 = fVar23;
      local_140 = (double)local_1c8.m128_f32[2];
      local_150._8_4_ = SUB84((double)local_1c8.m128_f32[1],0);
      local_150._0_8_ = (double)local_1c8.m128_f32[0];
      local_150._12_4_ = (int)((ulonglong)(double)local_1c8.m128_f32[1] >> 0x20);
      local_138._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_138._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_138._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      uStackY_2b0 = 0x143ee112b;
      TransformSweepOutputsHelper
                (&local_138,(TVector<double,3> *)local_150,(TVector<double,3> *)&local_168,
                 this->LengthScale,fVar23,&this->OutNormal,&this->OutPosition,&local_23c);
      this->OutFaceIndex = uVar5;
      this->OutPhi = local_220;
      this->OutDistance = (double)fVar23;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee1190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>::
VisitSweep(FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>,int>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  uint uVar5;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  TImplicitObjectScaled<Chaos::TBox<double,3>,1> *pTVar7;
  TBox<double,3> *pTVar8;
  code *pcVar9;
  TVector<float,3> TVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  TVector<float,3> *pTVar15;
  longlong lVar16;
  uint uVar17;
  uint *puVar18;
  TAABB<double,3> *pTVar19;
  TParticles<float,3> *this_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double adStackY_3b0 [32];
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  float local_240;
  float local_23c;
  TVector<float,3> *local_238;
  TVector<float,3> *local_230;
  double local_228;
  double local_220;
  double local_218 [3];
  undefined1 local_200 [12];
  float local_1f4;
  code *local_1f0;
  FGeomGJKHelperSIMD local_1e8;
  __m128 local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0 [5];
  __m128 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_150 [16];
  double local_140;
  TVector<double,3> local_138;
  uint local_118 [12];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar6 = this->Elements;
  uVar5 = param_1->Payload;
  lVar16 = (longlong)(int)uVar5;
  fVar32 = (float)*(double *)&this->TriMeshScale;
  fVar33 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar17 = ~uVar5 >> 0x1f;
  fVar23 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar13 = 0;
  if ((int)uVar5 < pTVar6->ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    uStackY_2b0 = 0x143ee1250;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  uStackY_2b0 = 0x143ee126e;
  local_238 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar6->AllocatorInstance).Data + lVar16 * 0xc));
  pTVar6 = this->Elements;
  uVar13 = 0;
  if ((int)uVar5 < pTVar6->ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    uStackY_2b0 = 0x143ee12b5;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  uStackY_2b0 = 0x143ee12d0;
  local_230 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar6->AllocatorInstance).Data + lVar16 * 0xc + 4));
  pTVar6 = this->Elements;
  uVar13 = 0;
  if ((int)uVar5 < pTVar6->ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    uStackY_2b0 = 0x143ee131a;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  uStackY_2b0 = 0x143ee1335;
  pTVar15 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar6->AllocatorInstance).Data + lVar16 * 0xc + 8));
  fVar34 = (float)*(undefined8 *)local_238 * fVar32;
  fVar35 = (float)((ulonglong)*(undefined8 *)local_238 >> 0x20) * fVar33;
  fVar36 = *(float *)&local_238->field_0x8 * fVar23;
  TVar10 = *local_230;
  fVar26 = (float)*(undefined8 *)pTVar15 * fVar32;
  fVar27 = (float)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) * fVar33;
  fVar29 = *(float *)&pTVar15->field_0x8 * fVar23;
  local_d8._0_4_ = TVar10._0_4_ * fVar32;
  local_d8._4_4_ = TVar10._4_4_ * fVar33;
  local_d8._8_4_ = TVar10._8_4_ * fVar23;
  local_d8._12_4_ = 0;
  local_e8._4_4_ = fVar35;
  local_e8._0_4_ = fVar34;
  local_e8._8_4_ = fVar36;
  local_e8._12_4_ = 0;
  local_c8._4_4_ = fVar27;
  local_c8._0_4_ = fVar26;
  local_c8._8_4_ = fVar29;
  local_c8._12_4_ = 0;
  fVar26 = fVar26 - fVar34;
  fVar27 = fVar27 - fVar35;
  fVar29 = fVar29 - fVar36;
  fVar33 = fVar27 * (local_d8._0_4_ - fVar34) - (local_d8._4_4_ - fVar35) * fVar26;
  fVar23 = fVar29 * (local_d8._4_4_ - fVar35) - (local_d8._8_4_ - fVar36) * fVar27;
  fVar32 = fVar26 * (local_d8._8_4_ - fVar36) - (local_d8._0_4_ - fVar34) * fVar29;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar26 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar32 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar23 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar33;
    auVar21._4_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar21._0_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar21._8_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar21._12_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar14 = movmskps((int)pTVar15,auVar21);
    if (iVar14 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar25 = this->Length * this->LengthScale;
  pTVar7 = this->QueryGeom;
  fVar39 = (float)this->IgnorePenetration;
  fVar40 = (float)this->IgnorePenetration;
  fVar26 = fVar32 * fVar32 + fVar23 * fVar23;
  fVar27 = fVar23 * fVar23 + fVar32 * fVar32;
  fVar29 = fVar33 * fVar33 + 0.0;
  fVar24 = fVar33 * fVar33 + 0.0;
  auVar20._0_4_ = fVar29 + fVar26;
  auVar20._4_4_ = fVar24 + fVar27;
  auVar20._8_4_ = fVar26 + fVar29;
  auVar20._12_4_ = fVar27 + fVar24;
  auVar21 = sqrtps(auVar20,auVar20);
  auVar21 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar21);
  fVar23 = auVar21._0_4_ * fVar23;
  fVar32 = auVar21._4_4_ * fVar32;
  fVar33 = auVar21._8_4_ * fVar33;
  fVar24 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar28 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar30 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar31 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar26 = fVar32 * fVar24 - fVar28 * fVar23;
  fVar27 = fVar33 * fVar28 - fVar30 * fVar32;
  fVar29 = fVar23 * fVar30 - fVar24 * fVar33;
  fVar27 = fVar27 + fVar27;
  fVar29 = fVar29 + fVar29;
  fVar26 = fVar26 + fVar26;
  fVar37 = fVar31 * fVar27 + fVar23 + (fVar26 * fVar28 - fVar30 * fVar29);
  fVar38 = fVar31 * fVar29 + fVar32 + (fVar27 * fVar30 - fVar24 * fVar26);
  fVar26 = fVar31 * fVar26 + fVar33 + (fVar29 * fVar24 - fVar28 * fVar27);
  fVar34 = fVar34 - (fVar25 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar35 = fVar35 - (fVar25 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar36 = fVar36 - (fVar25 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar23 = fVar35 * fVar24 - fVar34 * fVar28;
  fVar32 = fVar36 * fVar28 - fVar35 * fVar30;
  fVar33 = fVar34 * fVar30 - fVar36 * fVar24;
  fVar32 = fVar32 + fVar32;
  fVar33 = fVar33 + fVar33;
  fVar23 = fVar23 + fVar23;
  puVar18 = local_118;
  lVar16 = 0;
  pTVar8 = (pTVar7->MObject).Reference;
  pTVar19 = &pTVar8->AABB;
  local_218[1] = (double)*(float *)((longlong)&pTVar7->_padding_ + 4);
  local_218[0] = (double)*(float *)&pTVar7->_padding_;
  local_218[2] = (double)*(float *)&pTVar7->_padding_;
  local_1b8 = (double)*(float *)&pTVar7->_padding_ * (double)(0.0 - fVar37);
  local_1b0 = local_218[1] * (double)(0.0 - fVar38);
  local_1a8 = (double)*(float *)&pTVar7->_padding_ * (double)(0.0 - fVar26);
  do {
    pdVar2 = (double *)((longlong)local_218 + lVar16 + ((longlong)pTVar19 - (longlong)local_218));
    pdVar3 = (double *)(((longlong)&local_1b8 - (longlong)pTVar19) + (longlong)pdVar2);
    bVar11 = 0.0 < *pdVar3 || *pdVar3 == 0.0;
    if (bVar11) {
      dVar4 = *(double *)(&(pTVar8->AABB).MMax.field_0x0 + lVar16);
    }
    else {
      dVar4 = *pdVar2;
    }
    uVar13 = (uint)bVar11;
    *(double *)((longlong)local_1a0 + lVar16) = *(double *)((longlong)local_218 + lVar16) * dVar4;
    lVar16 = lVar16 + 8;
    *puVar18 = uVar13;
    puVar18 = puVar18 + 1;
  } while (lVar16 < 0x18);
  fVar23 = ((fVar31 * fVar33 + fVar35 + (fVar32 * fVar30 - fVar24 * fVar23)) - (float)local_1a0[1])
           * fVar38 +
           ((fVar31 * fVar32 + fVar34 + (fVar23 * fVar28 - fVar30 * fVar33)) - (float)local_1a0[0])
           * fVar37 +
           ((fVar31 * fVar23 + fVar36 + (fVar33 * fVar24 - fVar28 * fVar32)) - (float)local_1a0[2])
           * fVar26;
  auVar22._4_4_ = -(uint)(fVar23 < fVar40);
  auVar22._0_4_ = -(uint)(fVar23 < fVar39);
  auVar22._8_4_ = -(uint)(fVar23 < fVar39);
  auVar22._12_4_ = -(uint)(fVar23 < fVar40);
  iVar14 = movmskps(uVar13,auVar22);
  if (iVar14 != 0) {
    return true;
  }
  local_200._0_8_ = this->QueryGeom;
  local_200._8_4_ =
       *(undefined4 *)
        &((TImplicitObjectScaled<Chaos::TBox<double,3>,1> *)local_200._0_8_)->_padding_;
  local_1f0 = FGeomGJKHelperSIMD::
              SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>;
  local_1e8.Geometry = local_e8;
  local_1e8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1f4 = 0.0;
  local_1e8.Margin = 0.0;
  local_1e8.Radius = 0.0;
  uStackY_2b0 = 0x143ee16ec;
  bVar11 = GJKRaycast2ImplSimd<__m128,1>
                     (&local_1e8,(FGeomGJKHelperSIMD *)local_200,&this->RotationSimd,
                      &this->TranslationSimd,p_Var1,this->LengthScale * *param_2,&local_240,
                      &local_178,&local_1c8,true,&GlobalVectorConstants::Float1000);
  if (bVar11) {
    uStackY_2b0 = 0x143ee174f;
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((this->RayDirSimd).m128_f32[1] * local_1c8.m128_f32[1] +
                        p_Var1->m128_f32[0] * local_1c8.m128_f32[0] +
                       (this->RayDirSimd).m128_f32[2] * local_1c8.m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_240,this->IgnorePenetration,
               this->TargetPenetration,&local_228,&local_220);
    fVar23 = (float)local_228 * *param_2;
    if (fVar23 < *param_2) {
      local_168 = (double)local_178.m128_f32[0];
      dStack_160 = (double)local_178.m128_f32[1];
      local_158 = (double)local_178.m128_f32[2];
      *param_2 = fVar23;
      local_140 = (double)local_1c8.m128_f32[2];
      local_150._8_4_ = SUB84((double)local_1c8.m128_f32[1],0);
      local_150._0_8_ = (double)local_1c8.m128_f32[0];
      local_150._12_4_ = (int)((ulonglong)(double)local_1c8.m128_f32[1] >> 0x20);
      local_138._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_138._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_138._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      uStackY_2b0 = 0x143ee17eb;
      TransformSweepOutputsHelper
                (&local_138,(TVector<double,3> *)local_150,(TVector<double,3> *)&local_168,
                 this->LengthScale,fVar23,&this->OutNormal,&this->OutPosition,&local_23c);
      this->OutFaceIndex = uVar5;
      this->OutPhi = local_220;
      this->OutDistance = (double)fVar23;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee1850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::
FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>
::VisitSweep(FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,unsigned_short>
             *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TSphere<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TVector<float,3> *pTVar10;
  longlong lVar11;
  uint uVar12;
  TParticles<float,3> *this_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_268 [32];
  float local_208 [2];
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *local_200;
  float local_1f8 [2];
  TVector<float,3> *local_1f0;
  TVector<float,3> *local_1e8;
  double local_1e0;
  double local_1d8;
  FGeomGJKHelperSIMD local_1d0;
  FGeomGJKHelperSIMD local_1b8;
  __m128 local_198 [2];
  __m128 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_150 [16];
  double local_140;
  TVector<double,3> local_138;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_200 = this->Elements;
  uVar2 = param_1->Payload;
  lVar11 = (longlong)(int)uVar2;
  fVar21 = (float)*(double *)&this->TriMeshScale;
  fVar23 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar12 = ~uVar2 >> 0x1f;
  fVar15 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar8 = 0;
  if ((int)uVar2 < local_200->ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1f0 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((local_200->AllocatorInstance).Data + lVar11 * 6)
                        );
  local_200 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < local_200->ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1e8 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((local_200->AllocatorInstance).Data + lVar11 * 6 + 2));
  local_200 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < local_200->ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar10 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)
                                      ((local_200->AllocatorInstance).Data + lVar11 * 6 + 4));
  fVar31 = (float)*(undefined8 *)local_1f0 * fVar21;
  fVar32 = (float)((ulonglong)*(undefined8 *)local_1f0 >> 0x20) * fVar23;
  fVar33 = *(float *)&local_1f0->field_0x8 * fVar15;
  fVar17 = (float)*(undefined8 *)pTVar10 * fVar21;
  fVar19 = (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20) * fVar23;
  fVar20 = *(float *)&pTVar10->field_0x8 * fVar15;
  fVar21 = (float)*(undefined8 *)local_1e8 * fVar21;
  fVar23 = (float)((ulonglong)*(undefined8 *)local_1e8 >> 0x20) * fVar23;
  fVar15 = *(float *)&local_1e8->field_0x8 * fVar15;
  local_118._4_4_ = fVar32;
  local_118._0_4_ = fVar31;
  local_118._8_4_ = fVar33;
  local_118._12_4_ = 0;
  local_f8._4_4_ = fVar19;
  local_f8._0_4_ = fVar17;
  local_f8._8_4_ = fVar20;
  local_f8._12_4_ = 0;
  fVar17 = fVar17 - fVar31;
  fVar19 = fVar19 - fVar32;
  fVar20 = fVar20 - fVar33;
  local_108._4_4_ = fVar23;
  local_108._0_4_ = fVar21;
  local_108._8_4_ = fVar15;
  local_108._12_4_ = 0;
  fVar21 = fVar21 - fVar31;
  fVar23 = fVar23 - fVar32;
  fVar15 = fVar15 - fVar33;
  fVar18 = fVar19 * fVar21 - fVar23 * fVar17;
  fVar23 = fVar20 * fVar23 - fVar15 * fVar19;
  fVar15 = fVar17 * fVar15 - fVar21 * fVar20;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar15 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar23 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar18 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar14._4_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar14._0_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar14._8_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar14._12_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    uVar8 = movmskps((int)pTVar10,auVar14);
    pTVar10 = (TVector<float,3> *)(ulonglong)uVar8;
    if (uVar8 != 0) {
      return true;
    }
  }
  local_1d0.Geometry = this->QueryGeom;
  pTVar3 = (((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->MObject).
           Reference;
  if (*(float *)&pTVar3->_padding_ <= 0.0) {
    local_208[0] = 0.0;
  }
  else {
    local_208[0] = *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)
                              local_1d0.Geometry)->_padding_;
  }
  p_Var1 = &this->RayDirSimd;
  fVar22 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0] * (this->RotationSimd).m128_f32[0];
  fVar24 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1] * (this->RotationSimd).m128_f32[1];
  fVar25 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2] * (this->RotationSimd).m128_f32[2];
  fVar26 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3] * (this->RotationSimd).m128_f32[3];
  fVar16 = this->LengthScale * this->Length;
  fVar29 = (float)this->IgnorePenetration;
  fVar30 = (float)this->IgnorePenetration;
  fVar21 = fVar15 * fVar15 + fVar23 * fVar23;
  fVar17 = fVar23 * fVar23 + fVar15 * fVar15;
  fVar19 = fVar18 * fVar18 + 0.0;
  fVar20 = fVar18 * fVar18 + 0.0;
  auVar13._0_4_ = fVar19 + fVar21;
  auVar13._4_4_ = fVar20 + fVar17;
  auVar13._8_4_ = fVar21 + fVar19;
  auVar13._12_4_ = fVar17 + fVar20;
  auVar14 = sqrtps(auVar13,auVar13);
  auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
  fVar23 = auVar14._0_4_ * fVar23;
  fVar15 = auVar14._4_4_ * fVar15;
  fVar18 = auVar14._8_4_ * fVar18;
  fVar20 = fVar15 * fVar22 - fVar24 * fVar23;
  fVar27 = fVar18 * fVar24 - fVar25 * fVar15;
  fVar28 = fVar23 * fVar25 - fVar22 * fVar18;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  fVar20 = fVar20 + fVar20;
  fVar31 = fVar31 - (fVar16 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar32 = fVar32 - (fVar16 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar33 = fVar33 - (fVar16 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar21 = fVar32 * fVar22 - fVar31 * fVar24;
  fVar17 = fVar33 * fVar24 - fVar32 * fVar25;
  fVar19 = fVar31 * fVar25 - fVar33 * fVar22;
  fVar17 = fVar17 + fVar17;
  fVar19 = fVar19 + fVar19;
  fVar21 = fVar21 + fVar21;
  fVar15 = ((fVar26 * fVar19 + fVar32 + (fVar17 * fVar25 - fVar22 * fVar21)) -
           *(float *)&(pTVar3->Center).field_0x4 *
           *(float *)((longlong)
                      &((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                       _padding_ + 4)) *
           (fVar26 * fVar28 + fVar15 + (fVar27 * fVar25 - fVar22 * fVar20)) +
           ((fVar26 * fVar17 + fVar31 + (fVar21 * fVar24 - fVar25 * fVar19)) -
           *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                      _padding_ * *(float *)&pTVar3->Center) *
           (fVar26 * fVar27 + fVar23 + (fVar20 * fVar24 - fVar25 * fVar28)) +
           ((fVar26 * fVar21 + fVar33 + (fVar19 * fVar22 - fVar24 * fVar17)) -
           *(float *)&(pTVar3->Center).field_0x8 *
           *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                      _padding_) * (fVar26 * fVar20 + fVar18 + (fVar28 * fVar22 - fVar24 * fVar27));
  auVar5._4_4_ = -(uint)(fVar15 < fVar30 - local_208[0]);
  auVar5._0_4_ = -(uint)(fVar15 < fVar29 - local_208[0]);
  auVar5._8_4_ = -(uint)(fVar15 < fVar29 - local_208[0]);
  auVar5._12_4_ = -(uint)(fVar15 < fVar30 - local_208[0]);
  iVar9 = movmskps((int)pTVar10,auVar5);
  if (iVar9 != 0) {
    return true;
  }
  local_1d0.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                  _padding_;
  if (*(float *)&pTVar3->_padding_ <= 0.0) {
    local_1d0.Radius = 0.0;
  }
  else {
    local_1d0.Radius =
         *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                    _padding_;
  }
  local_1d0.Func =
       FGeomGJKHelperSIMD::
       SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
  local_1b8.Geometry = local_118;
  local_1b8.Margin = 0.0;
  local_1b8.Radius = 0.0;
  local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  bVar6 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b8,&local_1d0,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,local_1f8,&local_178,local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar6) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((float)local_198[0]._4_4_ * (this->RayDirSimd).m128_f32[1] +
                        (float)local_198[0]._0_4_ * p_Var1->m128_f32[0] +
                       (float)local_198[0]._8_4_ * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_1f8[0],this->IgnorePenetration,
               this->TargetPenetration,&local_1e0,&local_1d8);
    fVar15 = (float)local_1e0 * *param_2;
    if (fVar15 < *param_2) {
      local_168 = (double)local_178.m128_f32[0];
      dStack_160 = (double)local_178.m128_f32[1];
      local_158 = (double)local_178.m128_f32[2];
      *param_2 = fVar15;
      local_140 = (double)(float)local_198[0]._8_4_;
      local_150._8_4_ = SUB84((double)(float)local_198[0]._4_4_,0);
      local_150._0_8_ = (double)(float)local_198[0]._0_4_;
      local_150._12_4_ = (int)((ulonglong)(double)(float)local_198[0]._4_4_ >> 0x20);
      local_138._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_138._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_138._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_138,(TVector<double,3> *)local_150,(TVector<double,3> *)&local_168,
                 this->LengthScale,fVar15,&this->OutNormal,&this->OutPosition,local_208);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1d8;
      this->OutDistance = (double)fVar15;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee1f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>::
VisitSweep(FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>,int>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TSphere<double,3> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TVector<float,3> *pTVar10;
  longlong lVar11;
  uint uVar12;
  TParticles<float,3> *this_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_268 [32];
  float local_208 [2];
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_200;
  float local_1f8 [2];
  TVector<float,3> *local_1f0;
  TVector<float,3> *local_1e8;
  double local_1e0;
  double local_1d8;
  FGeomGJKHelperSIMD local_1d0;
  FGeomGJKHelperSIMD local_1b8;
  __m128 local_198 [2];
  __m128 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_150 [16];
  double local_140;
  TVector<double,3> local_138;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_200 = this->Elements;
  uVar2 = param_1->Payload;
  lVar11 = (longlong)(int)uVar2;
  fVar21 = (float)*(double *)&this->TriMeshScale;
  fVar23 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar12 = ~uVar2 >> 0x1f;
  fVar15 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar8 = 0;
  if ((int)uVar2 < local_200->ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1f0 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_200->AllocatorInstance).Data + lVar11 * 0xc));
  local_200 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < local_200->ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1e8 = TParticles<float,3>::GetX
                        (this_00,*(int *)((local_200->AllocatorInstance).Data + lVar11 * 0xc + 4));
  local_200 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < local_200->ArrayNum) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar10 = TParticles<float,3>::GetX
                      (this_00,*(int *)((local_200->AllocatorInstance).Data + lVar11 * 0xc + 8));
  fVar31 = (float)*(undefined8 *)local_1f0 * fVar21;
  fVar32 = (float)((ulonglong)*(undefined8 *)local_1f0 >> 0x20) * fVar23;
  fVar33 = *(float *)&local_1f0->field_0x8 * fVar15;
  fVar17 = (float)*(undefined8 *)pTVar10 * fVar21;
  fVar19 = (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20) * fVar23;
  fVar20 = *(float *)&pTVar10->field_0x8 * fVar15;
  fVar21 = (float)*(undefined8 *)local_1e8 * fVar21;
  fVar23 = (float)((ulonglong)*(undefined8 *)local_1e8 >> 0x20) * fVar23;
  fVar15 = *(float *)&local_1e8->field_0x8 * fVar15;
  local_118._4_4_ = fVar32;
  local_118._0_4_ = fVar31;
  local_118._8_4_ = fVar33;
  local_118._12_4_ = 0;
  local_f8._4_4_ = fVar19;
  local_f8._0_4_ = fVar17;
  local_f8._8_4_ = fVar20;
  local_f8._12_4_ = 0;
  fVar17 = fVar17 - fVar31;
  fVar19 = fVar19 - fVar32;
  fVar20 = fVar20 - fVar33;
  local_108._4_4_ = fVar23;
  local_108._0_4_ = fVar21;
  local_108._8_4_ = fVar15;
  local_108._12_4_ = 0;
  fVar21 = fVar21 - fVar31;
  fVar23 = fVar23 - fVar32;
  fVar15 = fVar15 - fVar33;
  fVar18 = fVar19 * fVar21 - fVar23 * fVar17;
  fVar23 = fVar20 * fVar23 - fVar15 * fVar19;
  fVar15 = fVar17 * fVar15 - fVar21 * fVar20;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar21 = fVar15 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar23 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar18 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar14._4_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar14._0_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar14._8_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar14._12_4_ = -(uint)(0.0 < fVar21 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    uVar8 = movmskps((int)pTVar10,auVar14);
    pTVar10 = (TVector<float,3> *)(ulonglong)uVar8;
    if (uVar8 != 0) {
      return true;
    }
  }
  local_1d0.Geometry = this->QueryGeom;
  pTVar3 = (((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->MObject).
           Reference;
  if (*(float *)&pTVar3->_padding_ <= 0.0) {
    local_208[0] = 0.0;
  }
  else {
    local_208[0] = *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)
                              local_1d0.Geometry)->_padding_;
  }
  p_Var1 = &this->RayDirSimd;
  fVar22 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar24 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar25 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar26 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar16 = this->LengthScale * this->Length;
  fVar29 = (float)this->IgnorePenetration;
  fVar30 = (float)this->IgnorePenetration;
  fVar21 = fVar15 * fVar15 + fVar23 * fVar23;
  fVar17 = fVar23 * fVar23 + fVar15 * fVar15;
  fVar19 = fVar18 * fVar18 + 0.0;
  fVar20 = fVar18 * fVar18 + 0.0;
  auVar13._0_4_ = fVar19 + fVar21;
  auVar13._4_4_ = fVar20 + fVar17;
  auVar13._8_4_ = fVar21 + fVar19;
  auVar13._12_4_ = fVar17 + fVar20;
  auVar14 = sqrtps(auVar13,auVar13);
  auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
  fVar23 = auVar14._0_4_ * fVar23;
  fVar15 = auVar14._4_4_ * fVar15;
  fVar18 = auVar14._8_4_ * fVar18;
  fVar20 = fVar15 * fVar22 - fVar24 * fVar23;
  fVar27 = fVar18 * fVar24 - fVar25 * fVar15;
  fVar28 = fVar23 * fVar25 - fVar22 * fVar18;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  fVar20 = fVar20 + fVar20;
  fVar31 = fVar31 - (fVar16 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar32 = fVar32 - (fVar16 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar33 = fVar33 - (fVar16 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar21 = fVar32 * fVar22 - fVar31 * fVar24;
  fVar17 = fVar33 * fVar24 - fVar32 * fVar25;
  fVar19 = fVar31 * fVar25 - fVar33 * fVar22;
  fVar17 = fVar17 + fVar17;
  fVar19 = fVar19 + fVar19;
  fVar21 = fVar21 + fVar21;
  fVar15 = ((fVar26 * fVar19 + fVar32 + (fVar17 * fVar25 - fVar22 * fVar21)) -
           *(float *)&(pTVar3->Center).field_0x4 *
           *(float *)((longlong)
                      &((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                       _padding_ + 4)) *
           (fVar26 * fVar28 + fVar15 + (fVar27 * fVar25 - fVar22 * fVar20)) +
           ((fVar26 * fVar17 + fVar31 + (fVar21 * fVar24 - fVar25 * fVar19)) -
           *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                      _padding_ * *(float *)&pTVar3->Center) *
           (fVar26 * fVar27 + fVar23 + (fVar20 * fVar24 - fVar25 * fVar28)) +
           ((fVar26 * fVar21 + fVar33 + (fVar19 * fVar22 - fVar24 * fVar17)) -
           *(float *)&(pTVar3->Center).field_0x8 *
           *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                      _padding_) * (fVar26 * fVar20 + fVar18 + (fVar28 * fVar22 - fVar24 * fVar27));
  auVar5._4_4_ = -(uint)(fVar15 < fVar30 - local_208[0]);
  auVar5._0_4_ = -(uint)(fVar15 < fVar29 - local_208[0]);
  auVar5._8_4_ = -(uint)(fVar15 < fVar29 - local_208[0]);
  auVar5._12_4_ = -(uint)(fVar15 < fVar30 - local_208[0]);
  iVar9 = movmskps((int)pTVar10,auVar5);
  if (iVar9 != 0) {
    return true;
  }
  local_1d0.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                  _padding_;
  if (*(float *)&pTVar3->_padding_ <= 0.0) {
    local_1d0.Radius = 0.0;
  }
  else {
    local_1d0.Radius =
         *(float *)&((TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *)local_1d0.Geometry)->
                    _padding_;
  }
  local_1d0.Func =
       FGeomGJKHelperSIMD::
       SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
  local_1b8.Geometry = local_118;
  local_1b8.Margin = 0.0;
  local_1b8.Radius = 0.0;
  local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  bVar6 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b8,&local_1d0,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,local_1f8,&local_178,local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar6) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((float)local_198[0]._4_4_ * (this->RayDirSimd).m128_f32[1] +
                        (float)local_198[0]._0_4_ * p_Var1->m128_f32[0] +
                       (float)local_198[0]._8_4_ * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_1f8[0],this->IgnorePenetration,
               this->TargetPenetration,&local_1e0,&local_1d8);
    fVar15 = (float)local_1e0 * *param_2;
    if (fVar15 < *param_2) {
      local_168 = (double)local_178.m128_f32[0];
      dStack_160 = (double)local_178.m128_f32[1];
      local_158 = (double)local_178.m128_f32[2];
      *param_2 = fVar15;
      local_140 = (double)(float)local_198[0]._8_4_;
      local_150._8_4_ = SUB84((double)(float)local_198[0]._4_4_,0);
      local_150._0_8_ = (double)(float)local_198[0]._0_4_;
      local_150._12_4_ = (int)((ulonglong)(double)(float)local_198[0]._4_4_ >> 0x20);
      local_138._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_138._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_138._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_138,(TVector<double,3> *)local_150,(TVector<double,3> *)&local_168,
                 this->LengthScale,fVar15,&this->OutNormal,&this->OutPosition,local_208);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1d8;
      this->OutDistance = (double)fVar15;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee25b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>
::VisitSweep(FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,unsigned_short>
             *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  FCapsule *pFVar4;
  code *pcVar5;
  TVector<float,3> TVar6;
  undefined1 auVar7 [12];
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  TParticles<float,3> *this_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStackY_288 [32];
  float local_220 [2];
  TVector<float,3> *local_218;
  float local_210 [2];
  TVector<float,3> *local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  __m128 local_1a8;
  __m128 local_198;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  TVector<double,3> local_158 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pTVar3 = this->Elements;
  uVar2 = param_1->Payload;
  lVar13 = (longlong)(int)uVar2;
  fVar33 = (float)*(double *)&this->TriMeshScale;
  fVar34 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar14 = ~uVar2 >> 0x1f;
  fVar20 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar12 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar13 * 6));
  pTVar3 = this->Elements;
  uVar12 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_218 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar3->AllocatorInstance).Data + lVar13 * 6 + 2));
  pTVar3 = this->Elements;
  uVar12 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pTVar11 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar13 * 6 + 4))
  ;
  fVar35 = (float)*(undefined8 *)local_208 * fVar33;
  fVar36 = (float)((ulonglong)*(undefined8 *)local_208 >> 0x20) * fVar34;
  fVar37 = *(float *)&local_208->field_0x8 * fVar20;
  TVar6 = *local_218;
  fVar26 = (float)*(undefined8 *)pTVar11 * fVar33;
  fVar28 = (float)((ulonglong)*(undefined8 *)pTVar11 >> 0x20) * fVar34;
  fVar30 = *(float *)&pTVar11->field_0x8 * fVar20;
  local_108._0_4_ = TVar6._0_4_ * fVar33;
  local_108._4_4_ = TVar6._4_4_ * fVar34;
  local_108._8_4_ = TVar6._8_4_ * fVar20;
  local_108._12_4_ = 0;
  local_118._4_4_ = fVar36;
  local_118._0_4_ = fVar35;
  local_118._8_4_ = fVar37;
  local_118._12_4_ = 0;
  local_f8._4_4_ = fVar28;
  local_f8._0_4_ = fVar26;
  local_f8._8_4_ = fVar30;
  local_f8._12_4_ = 0;
  fVar26 = fVar26 - fVar35;
  fVar28 = fVar28 - fVar36;
  fVar30 = fVar30 - fVar37;
  fVar34 = fVar28 * (local_108._0_4_ - fVar35) - (local_108._4_4_ - fVar36) * fVar26;
  fVar20 = fVar30 * (local_108._4_4_ - fVar36) - (local_108._8_4_ - fVar37) * fVar28;
  fVar33 = fVar26 * (local_108._8_4_ - fVar37) - (local_108._0_4_ - fVar35) * fVar30;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar26 = fVar33 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar20 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar34 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar16._4_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar16._0_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar16._8_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar16._12_4_ = -(uint)(0.0 < fVar26 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar10 = movmskps((int)pTVar11,auVar16);
    if (iVar10 != 0) {
      return true;
    }
  }
  local_1e0.Geometry = this->QueryGeom;
  pFVar4 = (((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->MObject).Reference;
  if (*(float *)&pFVar4->_padding_ <= 0.0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_;
  }
  p_Var1 = &this->RayDirSimd;
  fVar25 = this->LengthScale * this->Length;
  fVar41 = (float)this->IgnorePenetration;
  fVar42 = (float)this->IgnorePenetration;
  fVar28 = fVar33 * fVar33 + fVar20 * fVar20;
  fVar30 = fVar20 * fVar20 + fVar33 * fVar33;
  fVar21 = fVar34 * fVar34 + 0.0;
  fVar22 = fVar34 * fVar34 + 0.0;
  auVar15._0_4_ = fVar21 + fVar28;
  auVar15._4_4_ = fVar22 + fVar30;
  auVar15._8_4_ = fVar28 + fVar21;
  auVar15._12_4_ = fVar30 + fVar22;
  auVar16 = sqrtps(auVar15,auVar15);
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
  fVar20 = auVar16._0_4_ * fVar20;
  fVar33 = auVar16._4_4_ * fVar33;
  fVar34 = auVar16._8_4_ * fVar34;
  fVar24 = auVar16._12_4_ * 0.0;
  fVar27 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0] * (this->RotationSimd).m128_f32[0];
  fVar29 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1] * (this->RotationSimd).m128_f32[1];
  fVar31 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2] * (this->RotationSimd).m128_f32[2];
  fVar32 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3] * (this->RotationSimd).m128_f32[3];
  fVar28 = fVar33 * fVar27 - fVar29 * fVar20;
  fVar30 = fVar34 * fVar29 - fVar31 * fVar33;
  fVar21 = fVar20 * fVar31 - fVar27 * fVar34;
  fVar23 = fVar24 * fVar32 - fVar32 * fVar24;
  fVar30 = fVar30 + fVar30;
  fVar21 = fVar21 + fVar21;
  fVar28 = fVar28 + fVar28;
  fVar23 = fVar23 + fVar23;
  fVar38 = fVar32 * fVar30 + fVar20 + (fVar28 * fVar29 - fVar31 * fVar21);
  fVar39 = fVar32 * fVar21 + fVar33 + (fVar30 * fVar31 - fVar27 * fVar28);
  fVar40 = fVar32 * fVar28 + fVar34 + (fVar21 * fVar27 - fVar29 * fVar30);
  fVar35 = fVar35 - (fVar25 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar36 = fVar36 - (fVar25 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar37 = fVar37 - (fVar25 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar30 = fVar36 * fVar27 - fVar29 * fVar35;
  fVar21 = fVar37 * fVar29 - fVar31 * fVar36;
  fVar22 = fVar35 * fVar31 - fVar27 * fVar37;
  fVar21 = fVar21 + fVar21;
  fVar22 = fVar22 + fVar22;
  fVar30 = fVar30 + fVar30;
  auVar17._0_4_ = 0.0 - fVar38;
  auVar17._4_4_ = 0.0 - fVar39;
  auVar17._8_4_ = 0.0 - fVar40;
  auVar17._12_4_ = 0.0 - (fVar32 * fVar23 + fVar24 + (fVar23 * fVar32 - fVar32 * fVar23));
  fVar20 = *(float *)((longlong)
                      &((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_ +
                     4);
  fVar33 = *(float *)&(pFVar4->MSegment).MAxis;
  fVar34 = *(float *)&(pFVar4->MSegment).MAxis.field_0x4;
  fVar28 = *(float *)&(pFVar4->MSegment).MAxis.field_0x8;
  local_218 = (TVector<float,3> *)(double)fVar20;
  auVar7._4_8_ = auVar17._8_8_;
  auVar7._0_4_ = (int)((ulonglong)(double)auVar17._0_4_ >> 0x20);
  auVar18._0_8_ = auVar7._0_8_ << 0x20;
  auVar18._8_4_ = SUB84((double)auVar17._4_4_,0);
  auVar18._12_4_ = (int)((ulonglong)(double)auVar17._4_4_ >> 0x20);
  if ((float)(auVar18._8_8_ * (double)local_218) * fVar34 +
      (float)((double)auVar17._0_4_ *
             (double)*(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->
                                _padding_) * fVar33 +
      auVar17._8_4_ *
      *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_ *
      fVar28 < 0.0) {
    local_1f0 = *(undefined8 *)&(pFVar4->MSegment).MPoint;
    fVar23 = (float)((ulonglong)local_1f0 >> 0x20);
    fVar34 = *(float *)&(pFVar4->MSegment).MPoint.field_0x8;
    fVar33 = (float)local_1f0;
  }
  else {
    fVar24 = (pFVar4->MSegment).MLength;
    fVar23 = fVar34 * fVar24 + *(float *)&(pFVar4->MSegment).MPoint.field_0x4;
    fVar34 = fVar28 * fVar24 + *(float *)&(pFVar4->MSegment).MPoint.field_0x8;
    fVar33 = fVar33 * fVar24 + *(float *)&(pFVar4->MSegment).MPoint;
  }
  fVar20 = ((fVar32 * fVar22 + fVar36 + (fVar21 * fVar31 - fVar27 * fVar30)) - fVar20 * fVar23) *
           fVar39 + ((fVar32 * fVar21 + fVar35 + (fVar30 * fVar29 - fVar31 * fVar22)) -
                    *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->
                               _padding_ * fVar33) * fVar38 +
           ((fVar32 * fVar30 + fVar37 + (fVar22 * fVar27 - fVar29 * fVar21)) -
           *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_ *
           fVar34) * fVar40;
  auVar19._4_4_ = -(uint)(fVar20 < fVar42 - fVar26);
  auVar19._0_4_ = -(uint)(fVar20 < fVar41 - fVar26);
  auVar19._8_4_ = -(uint)(fVar20 < fVar41 - fVar26);
  auVar19._12_4_ = -(uint)(fVar20 < fVar42 - fVar26);
  iVar10 = movmskps((int)pFVar4,auVar19);
  if (iVar10 != 0) {
    return true;
  }
  local_1e0.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_;
  if (*(float *)&pFVar4->_padding_ <= 0.0) {
    local_1e0.Radius = 0.0;
  }
  else {
    local_1e0.Radius =
         *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_;
  }
  local_1e0.Func =
       FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
  local_1c8.Geometry = local_118;
  local_1c8.Margin = 0.0;
  local_1c8.Radius = 0.0;
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  bVar8 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1c8,&local_1e0,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,local_220,&local_198,&local_1a8,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar8) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)(local_1a8.m128_f32[1] * (this->RayDirSimd).m128_f32[1] +
                        local_1a8.m128_f32[0] * p_Var1->m128_f32[0] +
                       local_1a8.m128_f32[2] * (this->RayDirSimd).m128_f32[2]),
               (double)(*param_2 * this->LengthScale),(double)local_220[0],this->IgnorePenetration,
               this->TargetPenetration,&local_200,&local_1f8);
    fVar20 = (float)local_200 * *param_2;
    if (fVar20 < *param_2) {
      local_188 = (double)local_198.m128_f32[0];
      dStack_180 = (double)local_198.m128_f32[1];
      local_178 = (double)local_198.m128_f32[2];
      *param_2 = fVar20;
      local_160 = (double)local_1a8.m128_f32[2];
      local_170._8_4_ = SUB84((double)local_1a8.m128_f32[1],0);
      local_170._0_8_ = (double)local_1a8.m128_f32[0];
      local_170._12_4_ = (int)((ulonglong)(double)local_1a8.m128_f32[1] >> 0x20);
      local_158[0]._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_158[0]._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_158[0]._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (local_158,(TVector<double,3> *)local_170,(TVector<double,3> *)&local_188,
                 this->LengthScale,fVar20,&this->OutNormal,&this->OutPosition,local_210);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1f8;
      this->OutDistance = (double)fVar20;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee2d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  float fVar2;
  uint uVar3;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  FCapsule *pFVar5;
  code *pcVar6;
  TVector<float,3> TVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  TParticles<float,3> *this_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_288 [32];
  float local_220 [2];
  double local_218;
  TVector<float,3> *local_210;
  TVector<float,3> *local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  FGeomGJKHelperSIMD local_1e0;
  FGeomGJKHelperSIMD local_1c8;
  __m128 local_1a8;
  __m128 local_198;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  TVector<double,3> local_158 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar13 = (longlong)(int)uVar3;
  fVar29 = (float)*(double *)&this->TriMeshScale;
  fVar30 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar14 = ~uVar3 >> 0x1f;
  fVar18 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_210 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar13 * 0xc));
  pTVar4 = this->Elements;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_208 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar13 * 0xc + 4));
  pTVar4 = this->Elements;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pTVar11 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar13 * 0xc + 8));
  fVar31 = (float)*(undefined8 *)local_210 * fVar29;
  fVar32 = (float)((ulonglong)*(undefined8 *)local_210 >> 0x20) * fVar30;
  fVar33 = *(float *)&local_210->field_0x8 * fVar18;
  TVar7 = *local_208;
  fVar22 = (float)*(undefined8 *)pTVar11 * fVar29;
  fVar24 = (float)((ulonglong)*(undefined8 *)pTVar11 >> 0x20) * fVar30;
  fVar26 = *(float *)&pTVar11->field_0x8 * fVar18;
  local_108._0_4_ = TVar7._0_4_ * fVar29;
  local_108._4_4_ = TVar7._4_4_ * fVar30;
  local_108._8_4_ = TVar7._8_4_ * fVar18;
  local_108._12_4_ = 0;
  local_118._4_4_ = fVar32;
  local_118._0_4_ = fVar31;
  local_118._8_4_ = fVar33;
  local_118._12_4_ = 0;
  local_f8._4_4_ = fVar24;
  local_f8._0_4_ = fVar22;
  local_f8._8_4_ = fVar26;
  local_f8._12_4_ = 0;
  fVar22 = fVar22 - fVar31;
  fVar24 = fVar24 - fVar32;
  fVar26 = fVar26 - fVar33;
  fVar30 = fVar24 * (local_108._0_4_ - fVar31) - (local_108._4_4_ - fVar32) * fVar22;
  fVar18 = fVar26 * (local_108._4_4_ - fVar32) - (local_108._8_4_ - fVar33) * fVar24;
  fVar29 = fVar22 * (local_108._8_4_ - fVar33) - (local_108._0_4_ - fVar31) * fVar26;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar22 = fVar29 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar18 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar30 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar16._4_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar16._0_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar16._8_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar16._12_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar10 = movmskps((int)pTVar11,auVar16);
    if (iVar10 != 0) {
      return true;
    }
  }
  local_1e0.Geometry = this->QueryGeom;
  pFVar5 = (((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->MObject).Reference;
  if (*(float *)&pFVar5->_padding_ <= 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_;
  }
  p_Var1 = &this->RayDirSimd;
  fVar21 = this->LengthScale * this->Length;
  fVar37 = (float)this->IgnorePenetration;
  fVar38 = (float)this->IgnorePenetration;
  fVar24 = fVar29 * fVar29 + fVar18 * fVar18;
  fVar26 = fVar18 * fVar18 + fVar29 * fVar29;
  fVar19 = fVar30 * fVar30 + 0.0;
  fVar20 = fVar30 * fVar30 + 0.0;
  auVar15._0_4_ = fVar19 + fVar24;
  auVar15._4_4_ = fVar20 + fVar26;
  auVar15._8_4_ = fVar24 + fVar19;
  auVar15._12_4_ = fVar26 + fVar20;
  auVar16 = sqrtps(auVar15,auVar15);
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
  fVar18 = auVar16._0_4_ * fVar18;
  fVar29 = auVar16._4_4_ * fVar29;
  fVar30 = auVar16._8_4_ * fVar30;
  fVar23 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar25 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar27 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar28 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar24 = fVar29 * fVar23 - fVar25 * fVar18;
  fVar26 = fVar30 * fVar25 - fVar27 * fVar29;
  fVar19 = fVar18 * fVar27 - fVar23 * fVar30;
  fVar26 = fVar26 + fVar26;
  fVar19 = fVar19 + fVar19;
  fVar24 = fVar24 + fVar24;
  fVar34 = fVar28 * fVar26 + fVar18 + (fVar24 * fVar25 - fVar27 * fVar19);
  fVar35 = fVar28 * fVar19 + fVar29 + (fVar26 * fVar27 - fVar23 * fVar24);
  fVar36 = fVar28 * fVar24 + fVar30 + (fVar19 * fVar23 - fVar25 * fVar26);
  fVar31 = fVar31 - (fVar21 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar32 = fVar32 - (fVar21 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar33 = fVar33 - (fVar21 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar26 = fVar32 * fVar23 - fVar25 * fVar31;
  fVar19 = fVar33 * fVar25 - fVar27 * fVar32;
  fVar20 = fVar31 * fVar27 - fVar23 * fVar33;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar26 = fVar26 + fVar26;
  fVar18 = *(float *)((longlong)
                      &((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_ +
                     4);
  fVar29 = *(float *)&(pFVar5->MSegment).MAxis;
  fVar30 = *(float *)&(pFVar5->MSegment).MAxis.field_0x4;
  fVar24 = *(float *)&(pFVar5->MSegment).MAxis.field_0x8;
  local_218 = (double)*(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->
                                 _padding_;
  if ((0.0 - fVar35) * fVar18 * fVar30 +
      (0.0 - fVar34) *
      *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_ *
      fVar29 + (float)((double)(0.0 - fVar36) * local_218) * fVar24 < 0.0) {
    local_1f0 = *(undefined8 *)&(pFVar5->MSegment).MPoint;
    fVar21 = (float)((ulonglong)local_1f0 >> 0x20);
    fVar30 = *(float *)&(pFVar5->MSegment).MPoint.field_0x8;
    fVar29 = (float)local_1f0;
  }
  else {
    fVar2 = (pFVar5->MSegment).MLength;
    fVar21 = fVar2 * fVar30 + *(float *)&(pFVar5->MSegment).MPoint.field_0x4;
    fVar30 = fVar2 * fVar24 + *(float *)&(pFVar5->MSegment).MPoint.field_0x8;
    fVar29 = fVar2 * fVar29 + *(float *)&(pFVar5->MSegment).MPoint;
  }
  fVar18 = ((fVar28 * fVar20 + fVar32 + (fVar19 * fVar27 - fVar23 * fVar26)) - fVar18 * fVar21) *
           fVar35 + ((fVar28 * fVar19 + fVar31 + (fVar26 * fVar25 - fVar27 * fVar20)) -
                    *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->
                               _padding_ * fVar29) * fVar34 +
           ((fVar28 * fVar26 + fVar33 + (fVar20 * fVar23 - fVar25 * fVar19)) -
           *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_ *
           fVar30) * fVar36;
  auVar17._4_4_ = -(uint)(fVar18 < fVar38 - fVar22);
  auVar17._0_4_ = -(uint)(fVar18 < fVar37 - fVar22);
  auVar17._8_4_ = -(uint)(fVar18 < fVar37 - fVar22);
  auVar17._12_4_ = -(uint)(fVar18 < fVar38 - fVar22);
  iVar10 = movmskps((int)pFVar5,auVar17);
  if (iVar10 != 0) {
    return true;
  }
  local_1e0.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_;
  if (*(float *)&pFVar5->_padding_ <= 0.0) {
    local_1e0.Radius = 0.0;
  }
  else {
    local_1e0.Radius =
         *(float *)&((TImplicitObjectScaled<Chaos::FCapsule,1> *)local_1e0.Geometry)->_padding_;
  }
  local_1e0.Func =
       FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
  local_1c8.Geometry = local_118;
  local_1c8.Margin = 0.0;
  local_1c8.Radius = 0.0;
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  bVar8 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1c8,&local_1e0,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,local_220,&local_198,&local_1a8,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar8) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)(local_1a8.m128_f32[1] * (this->RayDirSimd).m128_f32[1] +
                        local_1a8.m128_f32[0] * p_Var1->m128_f32[0] +
                       local_1a8.m128_f32[2] * (this->RayDirSimd).m128_f32[2]),
               (double)(*param_2 * this->LengthScale),(double)local_220[0],this->IgnorePenetration,
               this->TargetPenetration,&local_200,&local_1f8);
    fVar18 = (float)local_200 * *param_2;
    if (fVar18 < *param_2) {
      local_188 = (double)local_198.m128_f32[0];
      dStack_180 = (double)local_198.m128_f32[1];
      local_178 = (double)local_198.m128_f32[2];
      *param_2 = fVar18;
      local_160 = (double)local_1a8.m128_f32[2];
      local_170._8_4_ = SUB84((double)local_1a8.m128_f32[1],0);
      local_170._0_8_ = (double)local_1a8.m128_f32[0];
      local_170._12_4_ = (int)((ulonglong)(double)local_1a8.m128_f32[1] >> 0x20);
      local_158[0]._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_158[0]._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_158[0]._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (local_158,(TVector<double,3> *)local_170,(TVector<double,3> *)&local_188,
                 this->LengthScale,fVar18,&this->OutNormal,&this->OutPosition,(float *)&local_218);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_1f8;
      this->OutDistance = (double)fVar18;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee3470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>::
VisitSweep(FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,unsigned_short>
           *this,TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  double dVar2;
  uint uVar3;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  TVector<float,3> TVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  TVector<double,3> *pTVar14;
  uint uVar15;
  longlong lVar16;
  TParticles<float,3> *this_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_2a8 [32];
  int local_240;
  float local_23c;
  float local_238 [2];
  TVector<float,3> *local_230;
  TVector<float,3> *local_228;
  double local_220;
  double local_218;
  FGeomGJKHelperSIMD local_210;
  FGeomGJKHelperSIMD local_1f8;
  __m128 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  __m128 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  TVector<double,3> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar16 = (longlong)(int)uVar3;
  fVar28 = (float)*(double *)&this->TriMeshScale;
  fVar29 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar3 >> 0x1f;
  fVar19 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_230 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar4->AllocatorInstance).Data + lVar16 * 6));
  pTVar4 = this->Elements;
  uVar11 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_228 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar4->AllocatorInstance).Data + lVar16 * 6 + 2));
  pTVar4 = this->Elements;
  uVar11 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar4->AllocatorInstance).Data + lVar16 * 6 + 4))
  ;
  fVar32 = (float)*(undefined8 *)local_230 * fVar28;
  fVar33 = (float)((ulonglong)*(undefined8 *)local_230 >> 0x20) * fVar29;
  fVar34 = *(float *)&local_230->field_0x8 * fVar19;
  TVar8 = *local_228;
  fVar22 = (float)*(undefined8 *)pTVar13 * fVar28;
  fVar23 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar29;
  fVar25 = *(float *)&pTVar13->field_0x8 * fVar19;
  local_f8._0_4_ = TVar8._0_4_ * fVar28;
  local_f8._4_4_ = TVar8._4_4_ * fVar29;
  local_f8._8_4_ = TVar8._8_4_ * fVar19;
  local_f8._12_4_ = 0;
  local_108._4_4_ = fVar33;
  local_108._0_4_ = fVar32;
  local_108._8_4_ = fVar34;
  local_108._12_4_ = 0;
  local_e8._4_4_ = fVar23;
  local_e8._0_4_ = fVar22;
  local_e8._8_4_ = fVar25;
  local_e8._12_4_ = 0;
  fVar22 = fVar22 - fVar32;
  fVar23 = fVar23 - fVar33;
  fVar25 = fVar25 - fVar34;
  fVar29 = fVar23 * (local_f8._0_4_ - fVar32) - (local_f8._4_4_ - fVar33) * fVar22;
  fVar19 = fVar25 * (local_f8._4_4_ - fVar33) - (local_f8._8_4_ - fVar34) * fVar23;
  fVar28 = fVar22 * (local_f8._8_4_ - fVar34) - (local_f8._0_4_ - fVar32) * fVar25;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar22 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar28 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar19 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar29;
    auVar18._4_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar18._0_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar18._8_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar18._12_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar12 = movmskps((int)pTVar13,auVar18);
    if (iVar12 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar21 = this->Length * this->LengthScale;
  pTVar5 = this->QueryGeom;
  local_240 = -1;
  fVar22 = fVar28 * fVar28 + fVar19 * fVar19;
  fVar23 = fVar19 * fVar19 + fVar28 * fVar28;
  fVar25 = fVar29 * fVar29 + 0.0;
  fVar20 = fVar29 * fVar29 + 0.0;
  dVar2 = this->IgnorePenetration;
  auVar17._0_4_ = fVar25 + fVar22;
  auVar17._4_4_ = fVar20 + fVar23;
  auVar17._8_4_ = fVar22 + fVar25;
  auVar17._12_4_ = fVar23 + fVar20;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  fVar19 = auVar18._0_4_ * fVar19;
  fVar28 = auVar18._4_4_ * fVar28;
  fVar29 = auVar18._8_4_ * fVar29;
  fVar20 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar24 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar26 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar27 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar22 = fVar28 * fVar20 - fVar24 * fVar19;
  fVar23 = fVar29 * fVar24 - fVar26 * fVar28;
  fVar25 = fVar19 * fVar26 - fVar20 * fVar29;
  fVar23 = fVar23 + fVar23;
  fVar25 = fVar25 + fVar25;
  fVar22 = fVar22 + fVar22;
  fVar30 = fVar27 * fVar23 + fVar19 + (fVar22 * fVar24 - fVar26 * fVar25);
  fVar31 = fVar27 * fVar25 + fVar28 + (fVar23 * fVar26 - fVar20 * fVar22);
  fVar25 = fVar27 * fVar22 + fVar29 + (fVar25 * fVar20 - fVar24 * fVar23);
  fVar32 = fVar32 - (fVar21 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar33 = fVar33 - (fVar21 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar34 = fVar34 - (fVar21 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar29 = fVar33 * fVar20 - fVar32 * fVar24;
  fVar22 = fVar34 * fVar24 - fVar33 * fVar26;
  fVar23 = fVar32 * fVar26 - fVar34 * fVar20;
  local_178 = (double)(0.0 - fVar30);
  dStack_170 = (double)(0.0 - fVar31);
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar23 + fVar23;
  fVar29 = fVar29 + fVar29;
  local_168 = (double)(0.0 - fVar25);
  local_1c8 = (double)*(float *)&pTVar5->_padding_;
  local_1c0 = (double)*(float *)((longlong)&pTVar5->_padding_ + 4);
  local_1b8 = (double)*(float *)&pTVar5->_padding_;
  pTVar14 = FConvex::SupportCoreScaled
                      ((pTVar5->MObject).Reference,(TVector<double,3> *)&local_1b0,
                       (TVector<double,3> *)&local_178,0.0,(TVector<double,3> *)&local_1c8,
                       (double *)0x0,&local_240);
  fVar19 = (float)dVar2;
  fVar28 = (float)dVar2;
  fVar29 = ((fVar27 * fVar23 + fVar33 + (fVar22 * fVar26 - fVar20 * fVar29)) - (float)dStack_1a8) *
           fVar31 + ((fVar27 * fVar22 + fVar32 + (fVar29 * fVar24 - fVar26 * fVar23)) -
                    (float)local_1b0) * fVar30 +
           ((fVar27 * fVar29 + fVar34 + (fVar23 * fVar20 - fVar24 * fVar22)) - (float)local_1a0) *
           fVar25;
  auVar7._4_4_ = -(uint)(fVar29 < fVar28);
  auVar7._0_4_ = -(uint)(fVar29 < fVar19);
  auVar7._8_4_ = -(uint)(fVar29 < fVar19);
  auVar7._12_4_ = -(uint)(fVar29 < fVar28);
  iVar12 = movmskps((int)pTVar14,auVar7);
  if (iVar12 != 0) {
    return true;
  }
  local_210.Geometry = this->QueryGeom;
  local_210.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::FConvex,1> *)local_210.Geometry)->_padding_;
  local_210.Func =
       FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
  local_1f8.Geometry = local_108;
  local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_210.Radius = 0.0;
  local_1f8.Margin = 0.0;
  local_1f8.Radius = 0.0;
  bVar9 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1f8,&local_210,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     *param_2 * this->LengthScale,&local_23c,&local_188,&local_1d8,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar9) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((this->RayDirSimd).m128_f32[1] * local_1d8.m128_f32[1] +
                        p_Var1->m128_f32[0] * local_1d8.m128_f32[0] +
                       (this->RayDirSimd).m128_f32[2] * local_1d8.m128_f32[2]),
               (double)(*param_2 * this->LengthScale),(double)local_23c,this->IgnorePenetration,
               this->TargetPenetration,&local_220,&local_218);
    fVar19 = (float)local_220 * *param_2;
    if (fVar19 < *param_2) {
      local_160 = (double)local_188.m128_f32[0];
      dStack_158 = (double)local_188.m128_f32[1];
      local_150 = (double)local_188.m128_f32[2];
      *param_2 = fVar19;
      local_138 = (double)local_1d8.m128_f32[2];
      local_148._8_4_ = SUB84((double)local_1d8.m128_f32[1],0);
      local_148._0_8_ = (double)local_1d8.m128_f32[0];
      local_148._12_4_ = (int)((ulonglong)(double)local_1d8.m128_f32[1] >> 0x20);
      local_128._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_128._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_128._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_128,(TVector<double,3> *)local_148,(TVector<double,3> *)&local_160,
                 this->LengthScale,fVar19,&this->OutNormal,&this->OutPosition,local_238);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_218;
      this->OutDistance = (double)fVar19;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee3b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  double dVar2;
  uint uVar3;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  TVector<float,3> TVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  TVector<float,3> *pTVar13;
  TVector<double,3> *pTVar14;
  uint uVar15;
  longlong lVar16;
  TParticles<float,3> *this_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_2a8 [32];
  int local_240;
  float local_23c;
  float local_238 [2];
  TVector<float,3> *local_230;
  TVector<float,3> *local_228;
  double local_220;
  double local_218;
  FGeomGJKHelperSIMD local_210;
  FGeomGJKHelperSIMD local_1f8;
  __m128 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  __m128 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  TVector<double,3> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar16 = (longlong)(int)uVar3;
  fVar28 = (float)*(double *)&this->TriMeshScale;
  fVar29 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar15 = ~uVar3 >> 0x1f;
  fVar19 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar11 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_230 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar16 * 0xc));
  pTVar4 = this->Elements;
  uVar11 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  local_228 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar16 * 0xc + 4));
  pTVar4 = this->Elements;
  uVar11 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar11 = uVar15;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar13 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar16 * 0xc + 8));
  fVar32 = (float)*(undefined8 *)local_230 * fVar28;
  fVar33 = (float)((ulonglong)*(undefined8 *)local_230 >> 0x20) * fVar29;
  fVar34 = *(float *)&local_230->field_0x8 * fVar19;
  TVar8 = *local_228;
  fVar22 = (float)*(undefined8 *)pTVar13 * fVar28;
  fVar23 = (float)((ulonglong)*(undefined8 *)pTVar13 >> 0x20) * fVar29;
  fVar25 = *(float *)&pTVar13->field_0x8 * fVar19;
  local_f8._0_4_ = TVar8._0_4_ * fVar28;
  local_f8._4_4_ = TVar8._4_4_ * fVar29;
  local_f8._8_4_ = TVar8._8_4_ * fVar19;
  local_f8._12_4_ = 0;
  local_108._4_4_ = fVar33;
  local_108._0_4_ = fVar32;
  local_108._8_4_ = fVar34;
  local_108._12_4_ = 0;
  local_e8._4_4_ = fVar23;
  local_e8._0_4_ = fVar22;
  local_e8._8_4_ = fVar25;
  local_e8._12_4_ = 0;
  fVar22 = fVar22 - fVar32;
  fVar23 = fVar23 - fVar33;
  fVar25 = fVar25 - fVar34;
  fVar29 = fVar23 * (local_f8._0_4_ - fVar32) - (local_f8._4_4_ - fVar33) * fVar22;
  fVar19 = fVar25 * (local_f8._4_4_ - fVar33) - (local_f8._8_4_ - fVar34) * fVar23;
  fVar28 = fVar22 * (local_f8._8_4_ - fVar34) - (local_f8._0_4_ - fVar32) * fVar25;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar22 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar28 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar19 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar29;
    auVar18._4_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar18._0_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar18._8_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar18._12_4_ = -(uint)(0.0 < fVar22 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar12 = movmskps((int)pTVar13,auVar18);
    if (iVar12 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar21 = this->Length * this->LengthScale;
  pTVar5 = this->QueryGeom;
  local_240 = -1;
  fVar22 = fVar28 * fVar28 + fVar19 * fVar19;
  fVar23 = fVar19 * fVar19 + fVar28 * fVar28;
  fVar25 = fVar29 * fVar29 + 0.0;
  fVar20 = fVar29 * fVar29 + 0.0;
  dVar2 = this->IgnorePenetration;
  auVar17._0_4_ = fVar25 + fVar22;
  auVar17._4_4_ = fVar20 + fVar23;
  auVar17._8_4_ = fVar22 + fVar25;
  auVar17._12_4_ = fVar23 + fVar20;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  fVar19 = auVar18._0_4_ * fVar19;
  fVar28 = auVar18._4_4_ * fVar28;
  fVar29 = auVar18._8_4_ * fVar29;
  fVar20 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar24 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar26 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar27 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar22 = fVar28 * fVar20 - fVar24 * fVar19;
  fVar23 = fVar29 * fVar24 - fVar26 * fVar28;
  fVar25 = fVar19 * fVar26 - fVar20 * fVar29;
  fVar23 = fVar23 + fVar23;
  fVar25 = fVar25 + fVar25;
  fVar22 = fVar22 + fVar22;
  fVar30 = fVar27 * fVar23 + fVar19 + (fVar22 * fVar24 - fVar26 * fVar25);
  fVar31 = fVar27 * fVar25 + fVar28 + (fVar23 * fVar26 - fVar20 * fVar22);
  fVar25 = fVar27 * fVar22 + fVar29 + (fVar25 * fVar20 - fVar24 * fVar23);
  fVar32 = fVar32 - (fVar21 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar33 = fVar33 - (fVar21 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar34 = fVar34 - (fVar21 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar29 = fVar33 * fVar20 - fVar32 * fVar24;
  fVar22 = fVar34 * fVar24 - fVar33 * fVar26;
  fVar23 = fVar32 * fVar26 - fVar34 * fVar20;
  local_178 = (double)(0.0 - fVar30);
  dStack_170 = (double)(0.0 - fVar31);
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar23 + fVar23;
  fVar29 = fVar29 + fVar29;
  local_168 = (double)(0.0 - fVar25);
  local_1c8 = (double)*(float *)&pTVar5->_padding_;
  local_1c0 = (double)*(float *)((longlong)&pTVar5->_padding_ + 4);
  local_1b8 = (double)*(float *)&pTVar5->_padding_;
  pTVar14 = FConvex::SupportCoreScaled
                      ((pTVar5->MObject).Reference,(TVector<double,3> *)&local_1b0,
                       (TVector<double,3> *)&local_178,0.0,(TVector<double,3> *)&local_1c8,
                       (double *)0x0,&local_240);
  fVar19 = (float)dVar2;
  fVar28 = (float)dVar2;
  fVar29 = ((fVar27 * fVar23 + fVar33 + (fVar22 * fVar26 - fVar20 * fVar29)) - (float)dStack_1a8) *
           fVar31 + ((fVar27 * fVar22 + fVar32 + (fVar29 * fVar24 - fVar26 * fVar23)) -
                    (float)local_1b0) * fVar30 +
           ((fVar27 * fVar29 + fVar34 + (fVar23 * fVar20 - fVar24 * fVar22)) - (float)local_1a0) *
           fVar25;
  auVar7._4_4_ = -(uint)(fVar29 < fVar28);
  auVar7._0_4_ = -(uint)(fVar29 < fVar19);
  auVar7._8_4_ = -(uint)(fVar29 < fVar19);
  auVar7._12_4_ = -(uint)(fVar29 < fVar28);
  iVar12 = movmskps((int)pTVar14,auVar7);
  if (iVar12 != 0) {
    return true;
  }
  local_210.Geometry = this->QueryGeom;
  local_210.Margin =
       *(float *)&((TImplicitObjectScaled<Chaos::FConvex,1> *)local_210.Geometry)->_padding_;
  local_210.Func =
       FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
  local_1f8.Geometry = local_108;
  local_1f8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_210.Radius = 0.0;
  local_1f8.Margin = 0.0;
  local_1f8.Radius = 0.0;
  bVar9 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1f8,&local_210,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     *param_2 * this->LengthScale,&local_23c,&local_188,&local_1d8,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar9) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((this->RayDirSimd).m128_f32[1] * local_1d8.m128_f32[1] +
                        p_Var1->m128_f32[0] * local_1d8.m128_f32[0] +
                       (this->RayDirSimd).m128_f32[2] * local_1d8.m128_f32[2]),
               (double)(*param_2 * this->LengthScale),(double)local_23c,this->IgnorePenetration,
               this->TargetPenetration,&local_220,&local_218);
    fVar19 = (float)local_220 * *param_2;
    if (fVar19 < *param_2) {
      local_160 = (double)local_188.m128_f32[0];
      dStack_158 = (double)local_188.m128_f32[1];
      local_150 = (double)local_188.m128_f32[2];
      *param_2 = fVar19;
      local_138 = (double)local_1d8.m128_f32[2];
      local_148._8_4_ = SUB84((double)local_1d8.m128_f32[1],0);
      local_148._0_8_ = (double)local_1d8.m128_f32[0];
      local_148._12_4_ = (int)((ulonglong)(double)local_1d8.m128_f32[1] >> 0x20);
      local_128._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_128._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_128._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_128,(TVector<double,3> *)local_148,(TVector<double,3> *)&local_160,
                 this->LengthScale,fVar19,&this->OutNormal,&this->OutPosition,local_238);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_218;
      this->OutDistance = (double)fVar19;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee41b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TSphere<double,3>,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::TSphere<double,3>,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TParticles<float,3> *this_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_248 [32];
  float local_1e0;
  float local_1dc;
  TVector<float,3> *local_1d8;
  TVector<float,3> *local_1d0;
  double local_1c8;
  double local_1c0;
  FGeomGJKHelperSIMD local_1b8;
  FGeomGJKHelperSIMD local_1a0;
  __m128 local_188 [2];
  __m128 local_168;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  TVector<double,3> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar3 = this->Elements;
  uVar2 = param_1->Payload;
  lVar12 = (longlong)(int)uVar2;
  fVar24 = (float)*(double *)&this->TriMeshScale;
  fVar25 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar11 = ~uVar2 >> 0x1f;
  fVar15 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar8 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1d8 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar12 * 6));
  pTVar3 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1d0 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar3->AllocatorInstance).Data + lVar12 * 6 + 2));
  pTVar3 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar10 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar12 * 6 + 4))
  ;
  fVar31 = (float)*(undefined8 *)local_1d8 * fVar24;
  fVar32 = (float)((ulonglong)*(undefined8 *)local_1d8 >> 0x20) * fVar25;
  fVar33 = *(float *)&local_1d8->field_0x8 * fVar15;
  fVar17 = (float)*(undefined8 *)pTVar10 * fVar24;
  fVar19 = (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20) * fVar25;
  fVar21 = *(float *)&pTVar10->field_0x8 * fVar15;
  fVar24 = (float)*(undefined8 *)local_1d0 * fVar24;
  fVar25 = (float)((ulonglong)*(undefined8 *)local_1d0 >> 0x20) * fVar25;
  fVar15 = *(float *)&local_1d0->field_0x8 * fVar15;
  local_108._4_4_ = fVar32;
  local_108._0_4_ = fVar31;
  local_108._8_4_ = fVar33;
  local_108._12_4_ = 0;
  local_e8._4_4_ = fVar19;
  local_e8._0_4_ = fVar17;
  local_e8._8_4_ = fVar21;
  local_e8._12_4_ = 0;
  fVar17 = fVar17 - fVar31;
  fVar19 = fVar19 - fVar32;
  fVar21 = fVar21 - fVar33;
  local_f8._4_4_ = fVar25;
  local_f8._0_4_ = fVar24;
  local_f8._8_4_ = fVar15;
  local_f8._12_4_ = 0;
  fVar24 = fVar24 - fVar31;
  fVar25 = fVar25 - fVar32;
  fVar15 = fVar15 - fVar33;
  fVar18 = fVar19 * fVar24 - fVar25 * fVar17;
  fVar25 = fVar21 * fVar25 - fVar15 * fVar19;
  fVar15 = fVar17 * fVar15 - fVar24 * fVar21;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar24 = fVar15 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar25 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar18 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar14._4_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar14._0_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar14._8_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar14._12_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    uVar8 = movmskps((int)pTVar10,auVar14);
    pTVar10 = (TVector<float,3> *)(ulonglong)uVar8;
    if (uVar8 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  local_1b8.Geometry = this->QueryGeom;
  fVar16 = this->LengthScale * this->Length;
  local_1b8.Margin = *(float *)&((TSphere<double,3> *)local_1b8.Geometry)->_padding_;
  fVar29 = (float)this->IgnorePenetration;
  fVar30 = (float)this->IgnorePenetration;
  fVar24 = fVar15 * fVar15 + fVar25 * fVar25;
  fVar17 = fVar25 * fVar25 + fVar15 * fVar15;
  fVar19 = fVar18 * fVar18 + 0.0;
  fVar21 = fVar18 * fVar18 + 0.0;
  auVar13._0_4_ = fVar19 + fVar24;
  auVar13._4_4_ = fVar21 + fVar17;
  auVar13._8_4_ = fVar24 + fVar19;
  auVar13._12_4_ = fVar17 + fVar21;
  auVar14 = sqrtps(auVar13,auVar13);
  auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
  fVar25 = auVar14._0_4_ * fVar25;
  fVar15 = auVar14._4_4_ * fVar15;
  fVar18 = auVar14._8_4_ * fVar18;
  fVar21 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar20 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar22 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar23 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar26 = fVar15 * fVar21 - fVar20 * fVar25;
  fVar27 = fVar18 * fVar20 - fVar22 * fVar15;
  fVar28 = fVar25 * fVar22 - fVar21 * fVar18;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  fVar26 = fVar26 + fVar26;
  fVar31 = fVar31 - (fVar16 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar32 = fVar32 - (fVar16 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar33 = fVar33 - (fVar16 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar24 = fVar32 * fVar21 - fVar31 * fVar20;
  fVar17 = fVar33 * fVar20 - fVar32 * fVar22;
  fVar19 = fVar31 * fVar22 - fVar33 * fVar21;
  fVar17 = fVar17 + fVar17;
  fVar19 = fVar19 + fVar19;
  fVar24 = fVar24 + fVar24;
  fVar15 = ((fVar23 * fVar19 + fVar32 + (fVar17 * fVar22 - fVar21 * fVar24)) -
           (float)((ulonglong)*(undefined8 *)&((TSphere<double,3> *)local_1b8.Geometry)->Center >>
                  0x20)) * (fVar23 * fVar28 + fVar15 + (fVar27 * fVar22 - fVar21 * fVar26)) +
           ((fVar23 * fVar17 + fVar31 + (fVar24 * fVar20 - fVar22 * fVar19)) -
           (float)*(undefined8 *)&((TSphere<double,3> *)local_1b8.Geometry)->Center) *
           (fVar23 * fVar27 + fVar25 + (fVar26 * fVar20 - fVar22 * fVar28)) +
           ((fVar23 * fVar24 + fVar33 + (fVar19 * fVar21 - fVar20 * fVar17)) -
           *(float *)&(((TSphere<double,3> *)local_1b8.Geometry)->Center).field_0x8) *
           (fVar23 * fVar26 + fVar18 + (fVar28 * fVar21 - fVar20 * fVar27));
  auVar5._4_4_ = -(uint)(fVar15 < fVar30 - local_1b8.Margin);
  auVar5._0_4_ = -(uint)(fVar15 < fVar29 - local_1b8.Margin);
  auVar5._8_4_ = -(uint)(fVar15 < fVar29 - local_1b8.Margin);
  auVar5._12_4_ = -(uint)(fVar15 < fVar30 - local_1b8.Margin);
  iVar9 = movmskps((int)pTVar10,auVar5);
  if (iVar9 != 0) {
    return true;
  }
  local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
  local_1a0.Geometry = local_108;
  local_1a0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1a0.Margin = 0.0;
  local_1a0.Radius = 0.0;
  local_1b8.Radius = local_1b8.Margin;
  bVar6 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1a0,&local_1b8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_1e0,&local_168,local_188,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar6) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((float)local_188[0]._4_4_ * (this->RayDirSimd).m128_f32[1] +
                        (float)local_188[0]._0_4_ * p_Var1->m128_f32[0] +
                       (float)local_188[0]._8_4_ * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_1e0,this->IgnorePenetration,
               this->TargetPenetration,&local_1c8,&local_1c0);
    fVar15 = (float)local_1c8 * *param_2;
    if (fVar15 < *param_2) {
      local_158 = (double)local_168.m128_f32[0];
      dStack_150 = (double)local_168.m128_f32[1];
      local_148 = (double)local_168.m128_f32[2];
      *param_2 = fVar15;
      local_130 = (double)(float)local_188[0]._8_4_;
      local_140._8_4_ = SUB84((double)(float)local_188[0]._4_4_,0);
      local_140._0_8_ = (double)(float)local_188[0]._0_4_;
      local_140._12_4_ = (int)((ulonglong)(double)(float)local_188[0]._4_4_ >> 0x20);
      local_128._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_128._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_128._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_128,(TVector<double,3> *)local_140,(TVector<double,3> *)&local_158,
                 this->LengthScale,fVar15,&this->OutNormal,&this->OutPosition,&local_1dc);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1c0;
      this->OutDistance = (double)fVar15;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee47e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::TSphere<double,3>,int>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::TSphere<double,3>,int> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  TVector<float,3> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TParticles<float,3> *this_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_248 [32];
  float local_1e0;
  float local_1dc;
  TVector<float,3> *local_1d8;
  TVector<float,3> *local_1d0;
  double local_1c8;
  double local_1c0;
  FGeomGJKHelperSIMD local_1b8;
  FGeomGJKHelperSIMD local_1a0;
  __m128 local_188 [2];
  __m128 local_168;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  TVector<double,3> local_128;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar3 = this->Elements;
  uVar2 = param_1->Payload;
  lVar12 = (longlong)(int)uVar2;
  fVar24 = (float)*(double *)&this->TriMeshScale;
  fVar25 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar11 = ~uVar2 >> 0x1f;
  fVar15 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar8 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1d8 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0xc));
  pTVar3 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_1d0 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0xc + 4));
  pTVar3 = this->Elements;
  uVar8 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar10 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0xc + 8));
  fVar31 = (float)*(undefined8 *)local_1d8 * fVar24;
  fVar32 = (float)((ulonglong)*(undefined8 *)local_1d8 >> 0x20) * fVar25;
  fVar33 = *(float *)&local_1d8->field_0x8 * fVar15;
  fVar17 = (float)*(undefined8 *)pTVar10 * fVar24;
  fVar19 = (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20) * fVar25;
  fVar21 = *(float *)&pTVar10->field_0x8 * fVar15;
  fVar24 = (float)*(undefined8 *)local_1d0 * fVar24;
  fVar25 = (float)((ulonglong)*(undefined8 *)local_1d0 >> 0x20) * fVar25;
  fVar15 = *(float *)&local_1d0->field_0x8 * fVar15;
  local_108._4_4_ = fVar32;
  local_108._0_4_ = fVar31;
  local_108._8_4_ = fVar33;
  local_108._12_4_ = 0;
  local_e8._4_4_ = fVar19;
  local_e8._0_4_ = fVar17;
  local_e8._8_4_ = fVar21;
  local_e8._12_4_ = 0;
  fVar17 = fVar17 - fVar31;
  fVar19 = fVar19 - fVar32;
  fVar21 = fVar21 - fVar33;
  local_f8._4_4_ = fVar25;
  local_f8._0_4_ = fVar24;
  local_f8._8_4_ = fVar15;
  local_f8._12_4_ = 0;
  fVar24 = fVar24 - fVar31;
  fVar25 = fVar25 - fVar32;
  fVar15 = fVar15 - fVar33;
  fVar18 = fVar19 * fVar24 - fVar25 * fVar17;
  fVar25 = fVar21 * fVar25 - fVar15 * fVar19;
  fVar15 = fVar17 * fVar15 - fVar24 * fVar21;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar24 = fVar15 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar25 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar18 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar14._4_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar14._0_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar14._8_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar14._12_4_ = -(uint)(0.0 < fVar24 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    uVar8 = movmskps((int)pTVar10,auVar14);
    pTVar10 = (TVector<float,3> *)(ulonglong)uVar8;
    if (uVar8 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  local_1b8.Geometry = this->QueryGeom;
  fVar16 = this->LengthScale * this->Length;
  local_1b8.Margin = *(float *)&((TSphere<double,3> *)local_1b8.Geometry)->_padding_;
  fVar29 = (float)this->IgnorePenetration;
  fVar30 = (float)this->IgnorePenetration;
  fVar24 = fVar15 * fVar15 + fVar25 * fVar25;
  fVar17 = fVar25 * fVar25 + fVar15 * fVar15;
  fVar19 = fVar18 * fVar18 + 0.0;
  fVar21 = fVar18 * fVar18 + 0.0;
  auVar13._0_4_ = fVar19 + fVar24;
  auVar13._4_4_ = fVar21 + fVar17;
  auVar13._8_4_ = fVar24 + fVar19;
  auVar13._12_4_ = fVar17 + fVar21;
  auVar14 = sqrtps(auVar13,auVar13);
  auVar14 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar14);
  fVar25 = auVar14._0_4_ * fVar25;
  fVar15 = auVar14._4_4_ * fVar15;
  fVar18 = auVar14._8_4_ * fVar18;
  fVar21 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar20 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar22 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar23 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar26 = fVar15 * fVar21 - fVar20 * fVar25;
  fVar27 = fVar18 * fVar20 - fVar22 * fVar15;
  fVar28 = fVar25 * fVar22 - fVar21 * fVar18;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  fVar26 = fVar26 + fVar26;
  fVar31 = fVar31 - (fVar16 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar32 = fVar32 - (fVar16 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar33 = fVar33 - (fVar16 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar24 = fVar32 * fVar21 - fVar31 * fVar20;
  fVar17 = fVar33 * fVar20 - fVar32 * fVar22;
  fVar19 = fVar31 * fVar22 - fVar33 * fVar21;
  fVar17 = fVar17 + fVar17;
  fVar19 = fVar19 + fVar19;
  fVar24 = fVar24 + fVar24;
  fVar15 = ((fVar23 * fVar19 + fVar32 + (fVar17 * fVar22 - fVar21 * fVar24)) -
           (float)((ulonglong)*(undefined8 *)&((TSphere<double,3> *)local_1b8.Geometry)->Center >>
                  0x20)) * (fVar23 * fVar28 + fVar15 + (fVar27 * fVar22 - fVar21 * fVar26)) +
           ((fVar23 * fVar17 + fVar31 + (fVar24 * fVar20 - fVar22 * fVar19)) -
           (float)*(undefined8 *)&((TSphere<double,3> *)local_1b8.Geometry)->Center) *
           (fVar23 * fVar27 + fVar25 + (fVar26 * fVar20 - fVar22 * fVar28)) +
           ((fVar23 * fVar24 + fVar33 + (fVar19 * fVar21 - fVar20 * fVar17)) -
           *(float *)&(((TSphere<double,3> *)local_1b8.Geometry)->Center).field_0x8) *
           (fVar23 * fVar26 + fVar18 + (fVar28 * fVar21 - fVar20 * fVar27));
  auVar5._4_4_ = -(uint)(fVar15 < fVar30 - local_1b8.Margin);
  auVar5._0_4_ = -(uint)(fVar15 < fVar29 - local_1b8.Margin);
  auVar5._8_4_ = -(uint)(fVar15 < fVar29 - local_1b8.Margin);
  auVar5._12_4_ = -(uint)(fVar15 < fVar30 - local_1b8.Margin);
  iVar9 = movmskps((int)pTVar10,auVar5);
  if (iVar9 != 0) {
    return true;
  }
  local_1b8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
  local_1a0.Geometry = local_108;
  local_1a0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1a0.Margin = 0.0;
  local_1a0.Radius = 0.0;
  local_1b8.Radius = local_1b8.Margin;
  bVar6 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1a0,&local_1b8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_1e0,&local_168,local_188,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar6) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((float)local_188[0]._4_4_ * (this->RayDirSimd).m128_f32[1] +
                        (float)local_188[0]._0_4_ * p_Var1->m128_f32[0] +
                       (float)local_188[0]._8_4_ * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_1e0,this->IgnorePenetration,
               this->TargetPenetration,&local_1c8,&local_1c0);
    fVar15 = (float)local_1c8 * *param_2;
    if (fVar15 < *param_2) {
      local_158 = (double)local_168.m128_f32[0];
      dStack_150 = (double)local_168.m128_f32[1];
      local_148 = (double)local_168.m128_f32[2];
      *param_2 = fVar15;
      local_130 = (double)(float)local_188[0]._8_4_;
      local_140._8_4_ = SUB84((double)(float)local_188[0]._4_4_,0);
      local_140._0_8_ = (double)(float)local_188[0]._0_4_;
      local_140._12_4_ = (int)((ulonglong)(double)(float)local_188[0]._4_4_ >> 0x20);
      local_128._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_128._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_128._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_128,(TVector<double,3> *)local_140,(TVector<double,3> *)&local_158,
                 this->LengthScale,fVar15,&this->OutNormal,&this->OutPosition,&local_1dc);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1c0;
      this->OutDistance = (double)fVar15;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee4e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::FCapsule,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::FCapsule,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  TVector<float,3> TVar5;
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  longlong lVar12;
  uint uVar13;
  TParticles<float,3> *this_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_268 [32];
  float local_200;
  float local_1fc;
  TVector<float,3> *local_1f8;
  TVector<float,3> *local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  __m128 local_198;
  __m128 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  TVector<double,3> local_148 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar3 = this->Elements;
  uVar2 = param_1->Payload;
  lVar12 = (longlong)(int)uVar2;
  fVar30 = (float)*(double *)&this->TriMeshScale;
  fVar31 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar13 = ~uVar2 >> 0x1f;
  fVar19 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar9 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1f8 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar12 * 6));
  pTVar3 = this->Elements;
  uVar9 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1f0 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar3->AllocatorInstance).Data + lVar12 * 6 + 2));
  pTVar3 = this->Elements;
  uVar9 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pTVar11 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar3->AllocatorInstance).Data + lVar12 * 6 + 4))
  ;
  fVar32 = (float)*(undefined8 *)local_1f8 * fVar30;
  fVar33 = (float)((ulonglong)*(undefined8 *)local_1f8 >> 0x20) * fVar31;
  fVar34 = *(float *)&local_1f8->field_0x8 * fVar19;
  TVar5 = *local_1f0;
  fVar23 = (float)*(undefined8 *)pTVar11 * fVar30;
  fVar25 = (float)((ulonglong)*(undefined8 *)pTVar11 >> 0x20) * fVar31;
  fVar27 = *(float *)&pTVar11->field_0x8 * fVar19;
  local_f8._0_4_ = TVar5._0_4_ * fVar30;
  local_f8._4_4_ = TVar5._4_4_ * fVar31;
  local_f8._8_4_ = TVar5._8_4_ * fVar19;
  local_f8._12_4_ = 0;
  local_108._4_4_ = fVar33;
  local_108._0_4_ = fVar32;
  local_108._8_4_ = fVar34;
  local_108._12_4_ = 0;
  local_e8._4_4_ = fVar25;
  local_e8._0_4_ = fVar23;
  local_e8._8_4_ = fVar27;
  local_e8._12_4_ = 0;
  fVar23 = fVar23 - fVar32;
  fVar25 = fVar25 - fVar33;
  fVar27 = fVar27 - fVar34;
  fVar31 = fVar25 * (local_f8._0_4_ - fVar32) - (local_f8._4_4_ - fVar33) * fVar23;
  fVar19 = fVar27 * (local_f8._4_4_ - fVar33) - (local_f8._8_4_ - fVar34) * fVar25;
  fVar30 = fVar23 * (local_f8._8_4_ - fVar34) - (local_f8._0_4_ - fVar32) * fVar27;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar23 = fVar30 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar19 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar31 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar15._4_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar15._0_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar15._8_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar15._12_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    uVar9 = movmskps((int)pTVar11,auVar15);
    pTVar11 = (TVector<float,3> *)(ulonglong)uVar9;
    if (uVar9 != 0) {
      return true;
    }
  }
  local_1c8.Geometry = this->QueryGeom;
  p_Var1 = &this->RayDirSimd;
  local_1c8.Margin = *(float *)&((FCapsule *)local_1c8.Geometry)->_padding_;
  fVar22 = this->LengthScale * this->Length;
  fVar38 = (float)this->IgnorePenetration;
  fVar39 = (float)this->IgnorePenetration;
  fVar23 = fVar30 * fVar30 + fVar19 * fVar19;
  fVar25 = fVar19 * fVar19 + fVar30 * fVar30;
  fVar27 = fVar31 * fVar31 + 0.0;
  fVar20 = fVar31 * fVar31 + 0.0;
  auVar14._0_4_ = fVar27 + fVar23;
  auVar14._4_4_ = fVar20 + fVar25;
  auVar14._8_4_ = fVar23 + fVar27;
  auVar14._12_4_ = fVar25 + fVar20;
  auVar15 = sqrtps(auVar14,auVar14);
  auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  fVar19 = auVar15._0_4_ * fVar19;
  fVar30 = auVar15._4_4_ * fVar30;
  fVar31 = auVar15._8_4_ * fVar31;
  fVar21 = auVar15._12_4_ * 0.0;
  fVar24 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar26 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar28 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar29 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar23 = fVar30 * fVar24 - fVar26 * fVar19;
  fVar25 = fVar31 * fVar26 - fVar28 * fVar30;
  fVar27 = fVar19 * fVar28 - fVar24 * fVar31;
  fVar20 = fVar21 * fVar29 - fVar29 * fVar21;
  fVar25 = fVar25 + fVar25;
  fVar27 = fVar27 + fVar27;
  fVar23 = fVar23 + fVar23;
  fVar20 = fVar20 + fVar20;
  fVar35 = fVar29 * fVar25 + fVar19 + (fVar23 * fVar26 - fVar28 * fVar27);
  fVar36 = fVar29 * fVar27 + fVar30 + (fVar25 * fVar28 - fVar24 * fVar23);
  fVar37 = fVar29 * fVar23 + fVar31 + (fVar27 * fVar24 - fVar26 * fVar25);
  fVar32 = fVar32 - (fVar22 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar33 = fVar33 - (fVar22 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar34 = fVar34 - (fVar22 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar23 = fVar33 * fVar24 - fVar32 * fVar26;
  fVar25 = fVar34 * fVar26 - fVar33 * fVar28;
  fVar27 = fVar32 * fVar28 - fVar34 * fVar24;
  fVar25 = fVar25 + fVar25;
  fVar27 = fVar27 + fVar27;
  fVar23 = fVar23 + fVar23;
  fVar19 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MAxis;
  fVar30 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MAxis.field_0x4;
  fVar31 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MAxis.field_0x8;
  auVar16._0_4_ = 0.0 - fVar35;
  auVar16._4_4_ = 0.0 - fVar36;
  auVar16._8_4_ = 0.0 - fVar37;
  auVar16._12_4_ = 0.0 - (fVar29 * fVar20 + fVar21 + (fVar20 * fVar29 - fVar29 * fVar20));
  auVar6._4_8_ = auVar16._8_8_;
  auVar6._0_4_ = (int)((ulonglong)(double)auVar16._0_4_ >> 0x20);
  auVar17._0_8_ = auVar6._0_8_ << 0x20;
  auVar17._8_4_ = SUB84((double)auVar16._4_4_,0);
  auVar17._12_4_ = (int)((ulonglong)(double)auVar16._4_4_ >> 0x20);
  if ((float)auVar17._8_8_ * fVar30 + auVar16._0_4_ * fVar19 + auVar16._8_4_ * fVar31 < 0.0) {
    local_1d8 = *(undefined8 *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint;
    fVar20 = (float)((ulonglong)local_1d8 >> 0x20);
    fVar30 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint.field_0x8;
    fVar19 = (float)local_1d8;
  }
  else {
    fVar21 = (((FCapsule *)local_1c8.Geometry)->MSegment).MLength;
    fVar20 = fVar30 * fVar21 +
             *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint.field_0x4;
    fVar30 = fVar31 * fVar21 +
             *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint.field_0x8;
    fVar19 = fVar19 * fVar21 + *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint;
  }
  fVar19 = ((fVar29 * fVar27 + fVar33 + (fVar25 * fVar28 - fVar24 * fVar23)) - fVar20) * fVar36 +
           ((fVar29 * fVar25 + fVar32 + (fVar23 * fVar26 - fVar28 * fVar27)) - fVar19) * fVar35 +
           ((fVar29 * fVar23 + fVar34 + (fVar27 * fVar24 - fVar26 * fVar25)) - fVar30) * fVar37;
  auVar18._4_4_ = -(uint)(fVar19 < fVar39 - local_1c8.Margin);
  auVar18._0_4_ = -(uint)(fVar19 < fVar38 - local_1c8.Margin);
  auVar18._8_4_ = -(uint)(fVar19 < fVar38 - local_1c8.Margin);
  auVar18._12_4_ = -(uint)(fVar19 < fVar39 - local_1c8.Margin);
  iVar10 = movmskps((int)pTVar11,auVar18);
  if (iVar10 != 0) {
    return true;
  }
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
  local_1b0.Geometry = local_108;
  local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1b0.Margin = 0.0;
  local_1b0.Radius = 0.0;
  local_1c8.Radius = local_1c8.Margin;
  bVar7 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_200,&local_188,&local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar7) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)(local_198.m128_f32[1] * (this->RayDirSimd).m128_f32[1] +
                        local_198.m128_f32[0] * p_Var1->m128_f32[0] +
                       local_198.m128_f32[2] * (this->RayDirSimd).m128_f32[2]),
               (double)(*param_2 * this->LengthScale),(double)local_200,this->IgnorePenetration,
               this->TargetPenetration,&local_1e8,&local_1e0);
    fVar19 = (float)local_1e8 * *param_2;
    if (fVar19 < *param_2) {
      local_178 = (double)local_188.m128_f32[0];
      dStack_170 = (double)local_188.m128_f32[1];
      local_168 = (double)local_188.m128_f32[2];
      *param_2 = fVar19;
      local_150 = (double)local_198.m128_f32[2];
      local_160._8_4_ = SUB84((double)local_198.m128_f32[1],0);
      local_160._0_8_ = (double)local_198.m128_f32[0];
      local_160._12_4_ = (int)((ulonglong)(double)local_198.m128_f32[1] >> 0x20);
      local_148[0]._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_148[0]._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_148[0]._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (local_148,(TVector<double,3> *)local_160,(TVector<double,3> *)&local_178,
                 this->LengthScale,fVar19,&this->OutNormal,&this->OutPosition,&local_1fc);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1e0;
      this->OutDistance = (double)fVar19;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee54d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::FCapsule,int>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::FCapsule,int> *this,TSpatialVisitorData<int> *param_1
          ,float *param_2)

{
  __m128 *p_Var1;
  uint uVar2;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  TVector<float,3> TVar5;
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  longlong lVar12;
  uint uVar13;
  TParticles<float,3> *this_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStackY_268 [32];
  float local_200;
  float local_1fc;
  TVector<float,3> *local_1f8;
  TVector<float,3> *local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  __m128 local_198;
  __m128 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  TVector<double,3> local_148 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar3 = this->Elements;
  uVar2 = param_1->Payload;
  lVar12 = (longlong)(int)uVar2;
  fVar30 = (float)*(double *)&this->TriMeshScale;
  fVar31 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar13 = ~uVar2 >> 0x1f;
  fVar19 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar9 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1f8 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0xc));
  pTVar3 = this->Elements;
  uVar9 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_1f0 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0xc + 4));
  pTVar3 = this->Elements;
  uVar9 = 0;
  if ((int)uVar2 < pTVar3->ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pTVar11 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar3->AllocatorInstance).Data + lVar12 * 0xc + 8));
  fVar32 = (float)*(undefined8 *)local_1f8 * fVar30;
  fVar33 = (float)((ulonglong)*(undefined8 *)local_1f8 >> 0x20) * fVar31;
  fVar34 = *(float *)&local_1f8->field_0x8 * fVar19;
  TVar5 = *local_1f0;
  fVar23 = (float)*(undefined8 *)pTVar11 * fVar30;
  fVar25 = (float)((ulonglong)*(undefined8 *)pTVar11 >> 0x20) * fVar31;
  fVar27 = *(float *)&pTVar11->field_0x8 * fVar19;
  local_f8._0_4_ = TVar5._0_4_ * fVar30;
  local_f8._4_4_ = TVar5._4_4_ * fVar31;
  local_f8._8_4_ = TVar5._8_4_ * fVar19;
  local_f8._12_4_ = 0;
  local_108._4_4_ = fVar33;
  local_108._0_4_ = fVar32;
  local_108._8_4_ = fVar34;
  local_108._12_4_ = 0;
  local_e8._4_4_ = fVar25;
  local_e8._0_4_ = fVar23;
  local_e8._8_4_ = fVar27;
  local_e8._12_4_ = 0;
  fVar23 = fVar23 - fVar32;
  fVar25 = fVar25 - fVar33;
  fVar27 = fVar27 - fVar34;
  fVar31 = fVar25 * (local_f8._0_4_ - fVar32) - (local_f8._4_4_ - fVar33) * fVar23;
  fVar19 = fVar27 * (local_f8._4_4_ - fVar33) - (local_f8._8_4_ - fVar34) * fVar25;
  fVar30 = fVar23 * (local_f8._8_4_ - fVar34) - (local_f8._0_4_ - fVar32) * fVar27;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar23 = fVar30 * (this->VectorScaledDirNormalized).m128_f32[1] +
             fVar19 * (this->VectorScaledDirNormalized).m128_f32[0] +
             fVar31 * (this->VectorScaledDirNormalized).m128_f32[2];
    auVar15._4_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar15._0_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar15._8_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar15._12_4_ = -(uint)(0.0 < fVar23 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    uVar9 = movmskps((int)pTVar11,auVar15);
    pTVar11 = (TVector<float,3> *)(ulonglong)uVar9;
    if (uVar9 != 0) {
      return true;
    }
  }
  local_1c8.Geometry = this->QueryGeom;
  p_Var1 = &this->RayDirSimd;
  local_1c8.Margin = *(float *)&((FCapsule *)local_1c8.Geometry)->_padding_;
  fVar22 = this->LengthScale * this->Length;
  fVar38 = (float)this->IgnorePenetration;
  fVar39 = (float)this->IgnorePenetration;
  fVar23 = fVar30 * fVar30 + fVar19 * fVar19;
  fVar25 = fVar19 * fVar19 + fVar30 * fVar30;
  fVar27 = fVar31 * fVar31 + 0.0;
  fVar20 = fVar31 * fVar31 + 0.0;
  auVar14._0_4_ = fVar27 + fVar23;
  auVar14._4_4_ = fVar20 + fVar25;
  auVar14._8_4_ = fVar23 + fVar27;
  auVar14._12_4_ = fVar25 + fVar20;
  auVar15 = sqrtps(auVar14,auVar14);
  auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  fVar19 = auVar15._0_4_ * fVar19;
  fVar30 = auVar15._4_4_ * fVar30;
  fVar31 = auVar15._8_4_ * fVar31;
  fVar21 = auVar15._12_4_ * 0.0;
  fVar24 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar26 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar28 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar29 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar23 = fVar30 * fVar24 - fVar26 * fVar19;
  fVar25 = fVar31 * fVar26 - fVar28 * fVar30;
  fVar27 = fVar19 * fVar28 - fVar24 * fVar31;
  fVar20 = fVar21 * fVar29 - fVar29 * fVar21;
  fVar25 = fVar25 + fVar25;
  fVar27 = fVar27 + fVar27;
  fVar23 = fVar23 + fVar23;
  fVar20 = fVar20 + fVar20;
  fVar35 = fVar29 * fVar25 + fVar19 + (fVar23 * fVar26 - fVar28 * fVar27);
  fVar36 = fVar29 * fVar27 + fVar30 + (fVar25 * fVar28 - fVar24 * fVar23);
  fVar37 = fVar29 * fVar23 + fVar31 + (fVar27 * fVar24 - fVar26 * fVar25);
  fVar32 = fVar32 - (fVar22 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar33 = fVar33 - (fVar22 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar34 = fVar34 - (fVar22 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar23 = fVar33 * fVar24 - fVar32 * fVar26;
  fVar25 = fVar34 * fVar26 - fVar33 * fVar28;
  fVar27 = fVar32 * fVar28 - fVar34 * fVar24;
  fVar25 = fVar25 + fVar25;
  fVar27 = fVar27 + fVar27;
  fVar23 = fVar23 + fVar23;
  fVar19 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MAxis;
  fVar30 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MAxis.field_0x4;
  fVar31 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MAxis.field_0x8;
  auVar16._0_4_ = 0.0 - fVar35;
  auVar16._4_4_ = 0.0 - fVar36;
  auVar16._8_4_ = 0.0 - fVar37;
  auVar16._12_4_ = 0.0 - (fVar29 * fVar20 + fVar21 + (fVar20 * fVar29 - fVar29 * fVar20));
  auVar6._4_8_ = auVar16._8_8_;
  auVar6._0_4_ = (int)((ulonglong)(double)auVar16._0_4_ >> 0x20);
  auVar17._0_8_ = auVar6._0_8_ << 0x20;
  auVar17._8_4_ = SUB84((double)auVar16._4_4_,0);
  auVar17._12_4_ = (int)((ulonglong)(double)auVar16._4_4_ >> 0x20);
  if ((float)auVar17._8_8_ * fVar30 + auVar16._0_4_ * fVar19 + auVar16._8_4_ * fVar31 < 0.0) {
    local_1d8 = *(undefined8 *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint;
    fVar20 = (float)((ulonglong)local_1d8 >> 0x20);
    fVar30 = *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint.field_0x8;
    fVar19 = (float)local_1d8;
  }
  else {
    fVar21 = (((FCapsule *)local_1c8.Geometry)->MSegment).MLength;
    fVar20 = fVar30 * fVar21 +
             *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint.field_0x4;
    fVar30 = fVar31 * fVar21 +
             *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint.field_0x8;
    fVar19 = fVar19 * fVar21 + *(float *)&(((FCapsule *)local_1c8.Geometry)->MSegment).MPoint;
  }
  fVar19 = ((fVar29 * fVar27 + fVar33 + (fVar25 * fVar28 - fVar24 * fVar23)) - fVar20) * fVar36 +
           ((fVar29 * fVar25 + fVar32 + (fVar23 * fVar26 - fVar28 * fVar27)) - fVar19) * fVar35 +
           ((fVar29 * fVar23 + fVar34 + (fVar27 * fVar24 - fVar26 * fVar25)) - fVar30) * fVar37;
  auVar18._4_4_ = -(uint)(fVar19 < fVar39 - local_1c8.Margin);
  auVar18._0_4_ = -(uint)(fVar19 < fVar38 - local_1c8.Margin);
  auVar18._8_4_ = -(uint)(fVar19 < fVar38 - local_1c8.Margin);
  auVar18._12_4_ = -(uint)(fVar19 < fVar39 - local_1c8.Margin);
  iVar10 = movmskps((int)pTVar11,auVar18);
  if (iVar10 != 0) {
    return true;
  }
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
  local_1b0.Geometry = local_108;
  local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1b0.Margin = 0.0;
  local_1b0.Radius = 0.0;
  local_1c8.Radius = local_1c8.Margin;
  bVar7 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_200,&local_188,&local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar7) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)(local_198.m128_f32[1] * (this->RayDirSimd).m128_f32[1] +
                        local_198.m128_f32[0] * p_Var1->m128_f32[0] +
                       local_198.m128_f32[2] * (this->RayDirSimd).m128_f32[2]),
               (double)(*param_2 * this->LengthScale),(double)local_200,this->IgnorePenetration,
               this->TargetPenetration,&local_1e8,&local_1e0);
    fVar19 = (float)local_1e8 * *param_2;
    if (fVar19 < *param_2) {
      local_178 = (double)local_188.m128_f32[0];
      dStack_170 = (double)local_188.m128_f32[1];
      local_168 = (double)local_188.m128_f32[2];
      *param_2 = fVar19;
      local_150 = (double)local_198.m128_f32[2];
      local_160._8_4_ = SUB84((double)local_198.m128_f32[1],0);
      local_160._0_8_ = (double)local_198.m128_f32[0];
      local_160._12_4_ = (int)((ulonglong)(double)local_198.m128_f32[1] >> 0x20);
      local_148[0]._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_148[0]._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_148[0]._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (local_148,(TVector<double,3> *)local_160,(TVector<double,3> *)&local_178,
                 this->LengthScale,fVar19,&this->OutNormal,&this->OutPosition,&local_1fc);
      this->OutFaceIndex = uVar2;
      this->OutPhi = local_1e0;
      this->OutDistance = (double)fVar19;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee5ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::FConvex,unsigned_short>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::FConvex,unsigned_short> *this,
          TSpatialVisitorData<int> *param_1,float *param_2)

{
  __m128 *p_Var1;
  double dVar2;
  uint uVar3;
  TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TVector<float,3> *pTVar10;
  __m128 *p_Var11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  TParticles<float,3> *this_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_258 [32];
  float local_1f0;
  float local_1ec;
  TVector<float,3> *local_1e8;
  TVector<float,3> *local_1e0;
  double local_1d8;
  double local_1d0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  __m128 local_198 [2];
  __m128 local_178;
  __m128 local_168;
  __m128 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  TVector<double,3> local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar14 = (longlong)(int)uVar3;
  fVar27 = (float)*(double *)&this->TriMeshScale;
  fVar28 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar13 = ~uVar3 >> 0x1f;
  fVar17 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_1e8 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)((pTVar4->AllocatorInstance).Data + lVar14 * 6));
  pTVar4 = this->Elements;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_1e0 = TParticles<float,3>::GetX
                        (this_00,(uint)*(ushort *)
                                        ((pTVar4->AllocatorInstance).Data + lVar14 * 6 + 2));
  pTVar4 = this->Elements;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar10 = TParticles<float,3>::GetX
                      (this_00,(uint)*(ushort *)((pTVar4->AllocatorInstance).Data + lVar14 * 6 + 4))
  ;
  fVar32 = (float)*(undefined8 *)local_1e8 * fVar27;
  fVar33 = (float)((ulonglong)*(undefined8 *)local_1e8 >> 0x20) * fVar28;
  fVar34 = *(float *)&local_1e8->field_0x8 * fVar17;
  fVar19 = (float)*(undefined8 *)pTVar10 * fVar27;
  fVar21 = (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20) * fVar28;
  fVar22 = *(float *)&pTVar10->field_0x8 * fVar17;
  fVar27 = (float)*(undefined8 *)local_1e0 * fVar27;
  fVar28 = (float)((ulonglong)*(undefined8 *)local_1e0 >> 0x20) * fVar28;
  fVar17 = *(float *)&local_1e0->field_0x8 * fVar17;
  local_f8._4_4_ = fVar33;
  local_f8._0_4_ = fVar32;
  local_f8._8_4_ = fVar34;
  local_f8._12_4_ = 0;
  local_d8._4_4_ = fVar21;
  local_d8._0_4_ = fVar19;
  local_d8._8_4_ = fVar22;
  local_d8._12_4_ = 0;
  fVar19 = fVar19 - fVar32;
  fVar21 = fVar21 - fVar33;
  fVar22 = fVar22 - fVar34;
  local_e8._4_4_ = fVar28;
  local_e8._0_4_ = fVar27;
  local_e8._8_4_ = fVar17;
  local_e8._12_4_ = 0;
  fVar27 = fVar27 - fVar32;
  fVar28 = fVar28 - fVar33;
  fVar17 = fVar17 - fVar34;
  fVar20 = fVar21 * fVar27 - fVar28 * fVar19;
  fVar28 = fVar22 * fVar28 - fVar17 * fVar21;
  fVar17 = fVar19 * fVar17 - fVar27 * fVar22;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar27 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar17 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar28 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar20;
    auVar16._4_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar16._0_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar16._8_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar16._12_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar9 = movmskps((int)pTVar10,auVar16);
    if (iVar9 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar23 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar24 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar25 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar26 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar18 = this->Length * this->LengthScale;
  fVar27 = fVar17 * fVar17 + fVar28 * fVar28;
  fVar19 = fVar28 * fVar28 + fVar17 * fVar17;
  fVar21 = fVar20 * fVar20 + 0.0;
  fVar22 = fVar20 * fVar20 + 0.0;
  dVar2 = this->IgnorePenetration;
  auVar15._0_4_ = fVar21 + fVar27;
  auVar15._4_4_ = fVar22 + fVar19;
  auVar15._8_4_ = fVar27 + fVar21;
  auVar15._12_4_ = fVar19 + fVar22;
  auVar16 = sqrtps(auVar15,auVar15);
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
  fVar28 = auVar16._0_4_ * fVar28;
  fVar17 = auVar16._4_4_ * fVar17;
  fVar20 = auVar16._8_4_ * fVar20;
  fVar27 = auVar16._12_4_ * 0.0;
  fVar19 = fVar17 * fVar23 - fVar24 * fVar28;
  fVar21 = fVar20 * fVar24 - fVar25 * fVar17;
  fVar30 = fVar28 * fVar25 - fVar23 * fVar20;
  fVar31 = fVar27 * fVar26 - fVar26 * fVar27;
  fVar21 = fVar21 + fVar21;
  fVar30 = fVar30 + fVar30;
  fVar19 = fVar19 + fVar19;
  fVar31 = fVar31 + fVar31;
  fVar22 = fVar21 * fVar26 + fVar28 + (fVar19 * fVar24 - fVar30 * fVar25);
  fVar29 = fVar30 * fVar26 + fVar17 + (fVar21 * fVar25 - fVar19 * fVar23);
  fVar21 = fVar19 * fVar26 + fVar20 + (fVar30 * fVar23 - fVar21 * fVar24);
  fVar32 = fVar32 - (fVar18 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar33 = fVar33 - (fVar18 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar34 = fVar34 - (fVar18 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar28 = fVar33 * fVar23 - fVar32 * fVar24;
  fVar20 = fVar34 * fVar24 - fVar33 * fVar25;
  fVar19 = fVar32 * fVar25 - fVar34 * fVar23;
  fVar20 = fVar20 + fVar20;
  fVar19 = fVar19 + fVar19;
  fVar28 = fVar28 + fVar28;
  local_178.m128_f32[0] = 0.0 - fVar22;
  local_178.m128_f32[1] = 0.0 - fVar29;
  local_178.m128_f32[2] = 0.0 - fVar21;
  local_178.m128_f32[3] = 0.0 - (fVar31 * fVar26 + fVar27 + (fVar31 * fVar26 - fVar31 * fVar26));
  p_Var11 = FConvex::SupportCoreSimd(this->QueryGeom,&local_168,&local_178,0.0);
  fVar17 = (float)dVar2;
  fVar27 = (float)dVar2;
  fVar28 = ((fVar19 * fVar26 + fVar33 + (fVar20 * fVar25 - fVar28 * fVar23)) - local_168.m128_f32[1]
           ) * fVar29 +
           ((fVar20 * fVar26 + fVar32 + (fVar28 * fVar24 - fVar19 * fVar25)) - local_168.m128_f32[0]
           ) * fVar22 +
           ((fVar28 * fVar26 + fVar34 + (fVar19 * fVar23 - fVar20 * fVar24)) - local_168.m128_f32[2]
           ) * fVar21;
  auVar6._4_4_ = -(uint)(fVar28 < fVar27);
  auVar6._0_4_ = -(uint)(fVar28 < fVar17);
  auVar6._8_4_ = -(uint)(fVar28 < fVar17);
  auVar6._12_4_ = -(uint)(fVar28 < fVar27);
  iVar9 = movmskps((int)p_Var11,auVar6);
  if (iVar9 != 0) {
    return true;
  }
  local_1c8.Geometry = this->QueryGeom;
  local_1c8.Margin = *(float *)&((FConvex *)local_1c8.Geometry)->_padding_;
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
  local_1b0.Geometry = local_f8;
  local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1c8.Radius = 0.0;
  local_1b0.Margin = 0.0;
  local_1b0.Radius = 0.0;
  bVar7 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_1f0,&local_158,local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar7) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((float)local_198[0]._4_4_ * (this->RayDirSimd).m128_f32[1] +
                        (float)local_198[0]._0_4_ * p_Var1->m128_f32[0] +
                       (float)local_198[0]._8_4_ * (this->RayDirSimd).m128_f32[2]),
               (double)(this->LengthScale * *param_2),(double)local_1f0,this->IgnorePenetration,
               this->TargetPenetration,&local_1d8,&local_1d0);
    fVar17 = (float)local_1d8 * *param_2;
    if (fVar17 < *param_2) {
      local_148 = (double)local_158.m128_f32[0];
      dStack_140 = (double)local_158.m128_f32[1];
      local_138 = (double)local_158.m128_f32[2];
      *param_2 = fVar17;
      local_120 = (double)(float)local_198[0]._8_4_;
      local_130._8_4_ = SUB84((double)(float)local_198[0]._4_4_,0);
      local_130._0_8_ = (double)(float)local_198[0]._0_4_;
      local_130._12_4_ = (int)((ulonglong)(double)(float)local_198[0]._4_4_ >> 0x20);
      local_118._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_118._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_118._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_118,(TVector<double,3> *)local_130,(TVector<double,3> *)&local_148,
                 this->LengthScale,fVar17,&this->OutNormal,&this->OutPosition,&local_1ec);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_1d0;
      this->OutDistance = (double)fVar17;
    }
  }
  return 0.0 < *param_2;
}

// VisitSweep @ 143ee61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::FTriangleMeshSweepVisitorCCD<Chaos::FConvex,int>::VisitSweep
          (FTriangleMeshSweepVisitorCCD<Chaos::FConvex,int> *this,TSpatialVisitorData<int> *param_1,
          float *param_2)

{
  __m128 *p_Var1;
  double dVar2;
  uint uVar3;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TVector<float,3> *pTVar10;
  __m128 *p_Var11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  TParticles<float,3> *this_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_258 [32];
  float local_1f0;
  float local_1ec;
  TVector<float,3> *local_1e8;
  TVector<float,3> *local_1e0;
  double local_1d8;
  double local_1d0;
  FGeomGJKHelperSIMD local_1c8;
  FGeomGJKHelperSIMD local_1b0;
  __m128 local_198 [2];
  __m128 local_178;
  __m128 local_168;
  __m128 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_130 [16];
  double local_120;
  TVector<double,3> local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pTVar4 = this->Elements;
  uVar3 = param_1->Payload;
  lVar14 = (longlong)(int)uVar3;
  fVar27 = (float)*(double *)&this->TriMeshScale;
  fVar28 = (float)*(double *)&(this->TriMeshScale).field_0x8;
  this_00 = &this->TriMesh->MParticles;
  uVar13 = ~uVar3 >> 0x1f;
  fVar17 = (float)*(double *)&(this->TriMeshScale).field_0x10;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_1e8 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar14 * 0xc));
  pTVar4 = this->Elements;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_1e0 = TParticles<float,3>::GetX
                        (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar14 * 0xc + 4));
  pTVar4 = this->Elements;
  uVar12 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar12 = uVar13;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar10 = TParticles<float,3>::GetX
                      (this_00,*(int *)((pTVar4->AllocatorInstance).Data + lVar14 * 0xc + 8));
  fVar32 = (float)*(undefined8 *)local_1e8 * fVar27;
  fVar33 = (float)((ulonglong)*(undefined8 *)local_1e8 >> 0x20) * fVar28;
  fVar34 = *(float *)&local_1e8->field_0x8 * fVar17;
  fVar19 = (float)*(undefined8 *)pTVar10 * fVar27;
  fVar21 = (float)((ulonglong)*(undefined8 *)pTVar10 >> 0x20) * fVar28;
  fVar22 = *(float *)&pTVar10->field_0x8 * fVar17;
  fVar27 = (float)*(undefined8 *)local_1e0 * fVar27;
  fVar28 = (float)((ulonglong)*(undefined8 *)local_1e0 >> 0x20) * fVar28;
  fVar17 = *(float *)&local_1e0->field_0x8 * fVar17;
  local_f8._4_4_ = fVar33;
  local_f8._0_4_ = fVar32;
  local_f8._8_4_ = fVar34;
  local_f8._12_4_ = 0;
  local_d8._4_4_ = fVar21;
  local_d8._0_4_ = fVar19;
  local_d8._8_4_ = fVar22;
  local_d8._12_4_ = 0;
  fVar19 = fVar19 - fVar32;
  fVar21 = fVar21 - fVar33;
  fVar22 = fVar22 - fVar34;
  local_e8._4_4_ = fVar28;
  local_e8._0_4_ = fVar27;
  local_e8._8_4_ = fVar17;
  local_e8._12_4_ = 0;
  fVar27 = fVar27 - fVar32;
  fVar28 = fVar28 - fVar33;
  fVar17 = fVar17 - fVar34;
  fVar20 = fVar21 * fVar27 - fVar28 * fVar19;
  fVar28 = fVar22 * fVar28 - fVar17 * fVar21;
  fVar17 = fVar19 * fVar17 - fVar27 * fVar22;
  if (this->CullsBackFaceSweepsCode != 0.0) {
    fVar27 = (this->VectorScaledDirNormalized).m128_f32[1] * fVar17 +
             (this->VectorScaledDirNormalized).m128_f32[0] * fVar28 +
             (this->VectorScaledDirNormalized).m128_f32[2] * fVar20;
    auVar16._4_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[1]);
    auVar16._0_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[0]);
    auVar16._8_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[2]);
    auVar16._12_4_ = -(uint)(0.0 < fVar27 * (this->VectorCullsBackFaceSweepsCode).m128_f32[3]);
    iVar9 = movmskps((int)pTVar10,auVar16);
    if (iVar9 != 0) {
      return true;
    }
  }
  p_Var1 = &this->RayDirSimd;
  fVar23 = (this->RotationSimd).m128_f32[0] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar24 = (this->RotationSimd).m128_f32[1] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar25 = (this->RotationSimd).m128_f32[2] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar26 = (this->RotationSimd).m128_f32[3] * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar18 = this->Length * this->LengthScale;
  fVar27 = fVar17 * fVar17 + fVar28 * fVar28;
  fVar19 = fVar28 * fVar28 + fVar17 * fVar17;
  fVar21 = fVar20 * fVar20 + 0.0;
  fVar22 = fVar20 * fVar20 + 0.0;
  dVar2 = this->IgnorePenetration;
  auVar15._0_4_ = fVar21 + fVar27;
  auVar15._4_4_ = fVar22 + fVar19;
  auVar15._8_4_ = fVar27 + fVar21;
  auVar15._12_4_ = fVar19 + fVar22;
  auVar16 = sqrtps(auVar15,auVar15);
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
  fVar28 = auVar16._0_4_ * fVar28;
  fVar17 = auVar16._4_4_ * fVar17;
  fVar20 = auVar16._8_4_ * fVar20;
  fVar27 = auVar16._12_4_ * 0.0;
  fVar19 = fVar17 * fVar23 - fVar24 * fVar28;
  fVar21 = fVar20 * fVar24 - fVar25 * fVar17;
  fVar30 = fVar28 * fVar25 - fVar23 * fVar20;
  fVar31 = fVar27 * fVar26 - fVar26 * fVar27;
  fVar21 = fVar21 + fVar21;
  fVar30 = fVar30 + fVar30;
  fVar19 = fVar19 + fVar19;
  fVar31 = fVar31 + fVar31;
  fVar22 = fVar21 * fVar26 + fVar28 + (fVar19 * fVar24 - fVar30 * fVar25);
  fVar29 = fVar30 * fVar26 + fVar17 + (fVar21 * fVar25 - fVar19 * fVar23);
  fVar21 = fVar19 * fVar26 + fVar20 + (fVar30 * fVar23 - fVar21 * fVar24);
  fVar32 = fVar32 - (fVar18 * p_Var1->m128_f32[0] + (this->TranslationSimd).m128_f32[0]);
  fVar33 = fVar33 - (fVar18 * (this->RayDirSimd).m128_f32[1] + (this->TranslationSimd).m128_f32[1]);
  fVar34 = fVar34 - (fVar18 * (this->RayDirSimd).m128_f32[2] + (this->TranslationSimd).m128_f32[2]);
  fVar28 = fVar33 * fVar23 - fVar32 * fVar24;
  fVar20 = fVar34 * fVar24 - fVar33 * fVar25;
  fVar19 = fVar32 * fVar25 - fVar34 * fVar23;
  fVar20 = fVar20 + fVar20;
  fVar19 = fVar19 + fVar19;
  fVar28 = fVar28 + fVar28;
  local_178.m128_f32[0] = 0.0 - fVar22;
  local_178.m128_f32[1] = 0.0 - fVar29;
  local_178.m128_f32[2] = 0.0 - fVar21;
  local_178.m128_f32[3] = 0.0 - (fVar31 * fVar26 + fVar27 + (fVar31 * fVar26 - fVar31 * fVar26));
  p_Var11 = FConvex::SupportCoreSimd(this->QueryGeom,&local_168,&local_178,0.0);
  fVar17 = (float)dVar2;
  fVar27 = (float)dVar2;
  fVar28 = ((fVar19 * fVar26 + fVar33 + (fVar20 * fVar25 - fVar28 * fVar23)) - local_168.m128_f32[1]
           ) * fVar29 +
           ((fVar20 * fVar26 + fVar32 + (fVar28 * fVar24 - fVar19 * fVar25)) - local_168.m128_f32[0]
           ) * fVar22 +
           ((fVar28 * fVar26 + fVar34 + (fVar19 * fVar23 - fVar20 * fVar24)) - local_168.m128_f32[2]
           ) * fVar21;
  auVar6._4_4_ = -(uint)(fVar28 < fVar27);
  auVar6._0_4_ = -(uint)(fVar28 < fVar17);
  auVar6._8_4_ = -(uint)(fVar28 < fVar17);
  auVar6._12_4_ = -(uint)(fVar28 < fVar27);
  iVar9 = movmskps((int)p_Var11,auVar6);
  if (iVar9 != 0) {
    return true;
  }
  local_1c8.Geometry = this->QueryGeom;
  local_1c8.Margin = *(float *)&((FConvex *)local_1c8.Geometry)->_padding_;
  local_1c8.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
  local_1b0.Geometry = local_f8;
  local_1b0.Func = FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_1c8.Radius = 0.0;
  local_1b0.Margin = 0.0;
  local_1b0.Radius = 0.0;
  bVar7 = GJKRaycast2ImplSimd<__m128,1>
                    (&local_1b0,&local_1c8,&this->RotationSimd,&this->TranslationSimd,p_Var1,
                     this->LengthScale * *param_2,&local_1f0,&local_158,local_198,true,
                     &GlobalVectorConstants::Float1000);
  if (bVar7) {
    ComputeSweptContactTOIAndPhiAtTargetPenetration
              ((double)((this->RayDirSimd).m128_f32[1] * (float)local_198[0]._4_4_ +
                        p_Var1->m128_f32[0] * (float)local_198[0]._0_4_ +
                       (this->RayDirSimd).m128_f32[2] * (float)local_198[0]._8_4_),
               (double)(this->LengthScale * *param_2),(double)local_1f0,this->IgnorePenetration,
               this->TargetPenetration,&local_1d8,&local_1d0);
    fVar17 = (float)local_1d8 * *param_2;
    if (fVar17 < *param_2) {
      local_148 = (double)local_158.m128_f32[0];
      dStack_140 = (double)local_158.m128_f32[1];
      local_138 = (double)local_158.m128_f32[2];
      *param_2 = fVar17;
      local_120 = (double)(float)local_198[0]._8_4_;
      local_130._8_4_ = SUB84((double)(float)local_198[0]._4_4_,0);
      local_130._0_8_ = (double)(float)local_198[0]._0_4_;
      local_130._12_4_ = (int)((ulonglong)(double)(float)local_198[0]._4_4_ >> 0x20);
      local_118._16_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x10;
      local_118._0_8_ = *(undefined8 *)&this->TriMeshScale;
      local_118._8_8_ = *(undefined8 *)&(this->TriMeshScale).field_0x8;
      TransformSweepOutputsHelper
                (&local_118,(TVector<double,3> *)local_130,(TVector<double,3> *)&local_148,
                 this->LengthScale,fVar17,&this->OutNormal,&this->OutPosition,&local_1ec);
      this->OutFaceIndex = uVar3;
      this->OutPhi = local_1d0;
      this->OutDistance = (double)fVar17;
    }
  }
  return 0.0 < *param_2;
}

