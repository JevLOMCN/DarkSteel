// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 83

// operator() @ 1473dc9b0

void __thiscall
`FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FCompactPoseBoneIndex param_2,TQuat<double> *param_3,
          TQuat<double> *param_4)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  uint uVar26;
  FCompactPose *pFVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar30 = ~(uint)param_2 >> 0x1f;
  uVar26 = 0;
  if ((int)param_2 < (int)plVar2[1]) {
    uVar26 = uVar30;
  }
  if (uVar26 == 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar17 = param_3->X;
  dVar18 = param_3->Y;
  dVar19 = param_3->Z;
  dVar20 = param_3->W;
  lVar3 = *plVar2;
  plVar2 = *(longlong **)this;
  lVar28 = (longlong)(int)param_2 * 0x60;
  pdVar1 = (double *)(lVar28 + 0x10 + lVar3);
  dVar21 = *pdVar1;
  dVar22 = pdVar1[1];
  pdVar1 = (double *)(lVar28 + lVar3);
  dVar23 = *pdVar1;
  dVar24 = pdVar1[1];
  uVar26 = 0;
  if ((int)param_2 < (int)plVar2[1]) {
    uVar26 = uVar30;
  }
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar16 = dVar21 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar20 * dVar24 +
           dVar18 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar19 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar13 = dVar17 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar20 * dVar22 +
           dVar18 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar19 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (uVar26 == 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  lVar29 = (longlong)(int)param_2 * 0x20;
  auVar14._8_4_ = SUB84(dVar16,0);
  auVar14._0_8_ =
       dVar22 * dVar17 * dVar5 + dVar20 * dVar23 + dVar18 * dVar21 * dVar7 + dVar19 * dVar24 * dVar9
  ;
  auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + lVar29) = auVar14;
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ =
       dVar17 * dVar24 * dVar6 + dVar20 * dVar21 + dVar18 * dVar23 * dVar8 +
       dVar19 * dVar22 * dVar10;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(lVar3 + 0x10 + lVar29) = auVar11;
  pFVar27 = TArrayView<FCompactPose_const_,int>::operator[]
                      (*(TArrayView<FCompactPose_const_,int> **)((longlong)this + 0x18),param_1);
  uVar26 = 0;
  if ((int)param_2 < *(int *)&pFVar27->field_0x8) {
    uVar26 = uVar30;
  }
  if (uVar26 == 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  pdVar1 = (double *)(*(longlong *)pFVar27 + lVar28);
  dVar17 = *pdVar1;
  dVar18 = pdVar1[1];
  pdVar1 = (double *)(*(longlong *)pFVar27 + 0x10 + lVar28);
  dVar19 = *pdVar1;
  dVar20 = pdVar1[1];
  dVar21 = param_4->X;
  dVar22 = param_4->Y;
  dVar23 = param_4->Z;
  dVar24 = param_4->W;
  uVar26 = 0;
  if ((int)param_2 < (int)plVar2[1]) {
    uVar26 = uVar30;
  }
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar16 = dVar19 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar18 * dVar24 +
           dVar20 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar23 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar13 = dVar21 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar20 * dVar24 +
           dVar18 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar23 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (uVar26 == 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  auVar15._8_4_ = SUB84(dVar16,0);
  auVar15._0_8_ =
       dVar20 * dVar21 * dVar5 + dVar17 * dVar24 + dVar19 * dVar22 * dVar7 + dVar23 * dVar18 * dVar9
  ;
  auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])(lVar29 + lVar3) = auVar15;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ =
       dVar21 * dVar18 * dVar6 + dVar19 * dVar24 + dVar17 * dVar22 * dVar8 +
       dVar23 * dVar20 * dVar10;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(lVar29 + 0x10 + lVar3) = auVar12;
  return;
}

// operator() @ 1473dcf90

TTransform<double> * __thiscall
`FAnimationRuntime::MirrorPose'::__l2::<lambda_1>::operator()
          (void *this,TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          FCompactPoseBoneIndex *param_2,FCompactPoseBoneIndex *param_3,
          FCompactPoseBoneIndex *param_4,FCompactPoseBoneIndex *param_5)

{
  double *pdVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  FCompactPoseBoneIndex FVar4;
  FCompactPoseBoneIndex FVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  bool bVar39;
  TTransform<double> *pTVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  
  plVar7 = *(longlong **)this;
  FVar4 = *param_4;
  uVar41 = 0;
  if ((int)FVar4 < (int)plVar7[1]) {
    uVar41 = ~(uint)FVar4 >> 0x1f;
  }
  if ((uVar41 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar9 = (code *)swi(3);
    pTVar40 = (TTransform<double> *)(*pcVar9)();
    return pTVar40;
  }
  lVar8 = *plVar7;
  plVar7 = *(longlong **)this;
  pdVar1 = (double *)((longlong)(int)FVar4 * 0x20 + lVar8);
  dVar25 = *pdVar1;
  dVar28 = pdVar1[1];
  pdVar1 = (double *)((longlong)(int)FVar4 * 0x20 + 0x10 + lVar8);
  dVar31 = *pdVar1;
  dVar38 = pdVar1[1];
  FVar4 = *param_5;
  uVar41 = 0;
  if ((int)FVar4 < (int)plVar7[1]) {
    uVar41 = ~(uint)FVar4 >> 0x1f;
  }
  if ((uVar41 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar9 = (code *)swi(3);
    pTVar40 = (TTransform<double> *)(*pcVar9)();
    return pTVar40;
  }
  lVar8 = *plVar7;
  FVar5 = *param_2;
  plVar7 = *(longlong **)this;
  pdVar1 = (double *)((longlong)(int)FVar4 * 0x20 + lVar8);
  dVar32 = *pdVar1;
  dVar33 = pdVar1[1];
  pdVar1 = (double *)((longlong)(int)FVar4 * 0x20 + 0x10 + lVar8);
  dVar34 = *pdVar1;
  dVar35 = pdVar1[1];
  uVar41 = 0;
  if ((int)FVar5 < (int)plVar7[1]) {
    uVar41 = ~(uint)FVar5 >> 0x1f;
  }
  if ((uVar41 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar9 = (code *)swi(3);
    pTVar40 = (TTransform<double> *)(*pcVar9)();
    return pTVar40;
  }
  lVar8 = *plVar7;
  plVar7 = *(longlong **)this;
  pdVar1 = (double *)((longlong)(int)FVar5 * 0x20 + lVar8);
  dVar26 = *pdVar1;
  dVar22 = pdVar1[1];
  pdVar1 = (double *)((longlong)(int)FVar5 * 0x20 + 0x10 + lVar8);
  dVar23 = *pdVar1;
  dVar24 = pdVar1[1];
  FVar4 = *param_3;
  uVar41 = 0;
  if ((int)FVar4 < (int)plVar7[1]) {
    uVar41 = ~(uint)FVar4 >> 0x1f;
  }
  if ((uVar41 == 0) &&
     (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar39)) {
    pcVar9 = (code *)swi(3);
    pTVar40 = (TTransform<double> *)(*pcVar9)();
    return pTVar40;
  }
  dVar36 = (param_1->Translation).XY.m128d_f64[0];
  dVar10 = (param_1->Translation).XY.m128d_f64[1];
  dVar11 = (param_1->Translation).ZW.m128d_f64[0];
  lVar8 = *plVar7;
  uVar56 = (uint)__xmm_80000000000000008000000000000000;
  uVar57 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  puVar2 = (uint *)((longlong)(int)FVar4 * 0x20 + lVar8);
  uVar58 = *puVar2;
  uVar59 = puVar2[1];
  uVar43 = puVar2[2];
  uVar44 = puVar2[3];
  auVar3 = *(undefined1 (*) [16])((longlong)(int)FVar4 * 0x20 + 0x10 + lVar8);
  uVar41 = auVar3._0_4_;
  uVar42 = auVar3._4_4_;
  iVar6 = *(int *)((longlong)this + 8);
  dVar48 = dVar11 * dVar22 - dVar10 * dVar23;
  dVar48 = dVar48 + dVar48;
  dVar29 = dVar36 * dVar23 - dVar11 * dVar26;
  dVar29 = dVar29 + dVar29;
  dVar21 = dVar10 * dVar26 - dVar36 * dVar22;
  dVar21 = dVar21 + dVar21;
  dVar37 = (dVar21 * dVar22 - dVar29 * dVar23) + dVar24 * dVar48 + dVar36;
  dVar36 = (dVar48 * dVar23 - dVar21 * dVar26) + dVar24 * dVar29 + dVar10;
  dVar21 = (dVar29 * dVar26 - dVar22 * dVar48) + dVar21 * dVar24 + dVar11;
  if (iVar6 == 1) {
    dVar37 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^ uVar57,SUB84(dVar37,0) ^ uVar56);
  }
  else if (iVar6 == 2) {
    dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar57,SUB84(dVar36,0) ^ uVar56);
  }
  else if (iVar6 == 3) {
    dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ uVar57,SUB84(dVar21,0) ^ uVar56);
  }
  local_198 = SUB84(dVar25,0);
  uStack_194 = (uint)((ulonglong)dVar25 >> 0x20);
  uStack_190 = SUB84(dVar28,0);
  uStack_18c = (uint)((ulonglong)dVar28 >> 0x20);
  uVar45 = SUB84(dVar31,0) ^ uVar56;
  uVar46 = (uint)((ulonglong)dVar31 >> 0x20) ^ uVar57;
  local_198 = local_198 ^ uVar56;
  uStack_194 = uStack_194 ^ uVar57;
  uStack_190 = uStack_190 ^ uVar56;
  uStack_18c = uStack_18c ^ uVar57;
  dVar49 = dVar21 * (double)CONCAT44(uStack_18c,uStack_190) -
           dVar36 * (double)CONCAT44(uVar46,uVar45);
  dVar49 = dVar49 + dVar49;
  dVar20 = dVar37 * (double)CONCAT44(uVar46,uVar45) -
           dVar21 * (double)CONCAT44(uStack_194,local_198);
  dVar20 = dVar20 + dVar20;
  dVar47 = dVar36 * (double)CONCAT44(uStack_194,local_198) -
           dVar37 * (double)CONCAT44(uStack_18c,uStack_190);
  dVar47 = dVar47 + dVar47;
  dVar27 = (param_1->Rotation).XY.m128d_f64[0];
  dVar30 = (param_1->Rotation).XY.m128d_f64[1];
  dVar50 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar51 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_1c8 = dVar51 * dVar26 * dVar29 + dVar24 * dVar27 + dVar22 * dVar50 * dVar10 +
              dVar23 * dVar30 * dVar11;
  uVar54 = (uint)((ulonglong)local_1c8 >> 0x20);
  dStack_1c0 = dVar50 * dVar26 * dVar14 + dVar24 * dVar30 + dVar22 * dVar51 * dVar52 +
               dVar23 * dVar27 * dVar15;
  uVar55 = (uint)((ulonglong)dStack_1c0 >> 0x20);
  dVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_1b8 = dVar26 * dVar30 * dVar48 + dVar24 * dVar50 + dVar22 * dVar27 * dVar12 +
              dVar23 * dVar51 * dVar13;
  uVar53 = (uint)((ulonglong)local_1b8 >> 0x20);
  dVar26 = dVar26 * dVar27 * dVar16 + dVar24 * dVar51 + dVar22 * dVar30 * dVar17 +
           dVar23 * dVar50 * dVar18;
  if (iVar6 == 1) {
    dStack_1c0 = (double)CONCAT44(uVar55 ^ uVar57,SUB84(dStack_1c0,0) ^ uVar56);
    local_1b8 = (double)CONCAT44(uVar53 ^ uVar57,SUB84(local_1b8,0) ^ uVar56);
LAB_1473dd5f1:
    uVar41 = uVar41 ^ uVar56;
    uVar42 = uVar42 ^ uVar57;
  }
  else {
    if (iVar6 == 2) {
      local_1c8 = (double)CONCAT44(uVar54 ^ uVar57,SUB84(local_1c8,0) ^ uVar56);
      local_1b8 = (double)CONCAT44(uVar53 ^ uVar57,SUB84(local_1b8,0) ^ uVar56);
LAB_1473dd5b2:
      uVar58 = uVar58 ^ uVar56;
      uVar59 = uVar59 ^ uVar57;
      uVar41 = uVar41 ^ uVar56;
      uVar42 = uVar42 ^ uVar57;
      goto LAB_1473dd5fd;
    }
    if (iVar6 == 3) {
      dStack_1c0 = (double)CONCAT44(uVar55 ^ uVar57,SUB84(dStack_1c0,0) ^ uVar56);
      local_1c8 = (double)CONCAT44(uVar54 ^ uVar57,SUB84(local_1c8,0) ^ uVar56);
    }
    else {
      if (iVar6 == 1) goto LAB_1473dd5f1;
      if (iVar6 == 2) goto LAB_1473dd5b2;
      if (iVar6 != 3) goto LAB_1473dd5fd;
    }
    uVar58 = uVar58 ^ uVar56;
    uVar59 = uVar59 ^ uVar57;
  }
  uVar43 = uVar43 ^ uVar56;
  uVar44 = uVar44 ^ uVar57;
LAB_1473dd5fd:
  dVar50 = (double)CONCAT44(uVar59,uVar58) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar51 = (double)CONCAT44(uVar44,uVar43) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar22 = (double)CONCAT44(uVar42,uVar41) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar23 = auVar3._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar24 = dVar50 * dVar35 * dVar29 + dVar23 * dVar32 + dVar51 * dVar34 * dVar10 +
           dVar22 * dVar33 * dVar11;
  dVar27 = dVar50 * dVar34 * dVar14 + dVar23 * dVar33 + dVar51 * dVar35 * dVar52 +
           dVar22 * dVar32 * dVar15;
  dVar30 = dVar50 * dVar33 * dVar48 + dVar23 * dVar34 + dVar51 * dVar32 * dVar12 +
           dVar22 * dVar35 * dVar13;
  dVar32 = dVar50 * dVar32 * dVar16 + dVar23 * dVar35 + dVar51 * dVar33 * dVar17 +
           dVar22 * dVar34 * dVar18;
  dVar34 = local_1c8 * dVar32 * dVar29 + dVar26 * dVar24 + dStack_1c0 * dVar30 * dVar10 +
           local_1b8 * dVar27 * dVar11;
  dVar35 = local_1c8 * dVar30 * dVar14 + dVar26 * dVar27 + dStack_1c0 * dVar32 * dVar52 +
           local_1b8 * dVar24 * dVar15;
  dVar22 = local_1c8 * dVar27 * dVar48 + dVar26 * dVar30 + dStack_1c0 * dVar24 * dVar12 +
           local_1b8 * dVar32 * dVar13;
  dVar26 = local_1c8 * dVar24 * dVar16 + dVar26 * dVar32 + dStack_1c0 * dVar27 * dVar17 +
           local_1b8 * dVar30 * dVar18;
  dVar25 = dVar25 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar28 = dVar28 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar31 = dVar31 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar33 = dVar38 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar23 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar52 = dVar25 * dVar22 * dVar14 + dVar33 * dVar35 + dVar28 * dVar26 * dVar52 +
           dVar31 * dVar34 * dVar15;
  dVar24 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar14 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar32 = dVar25 * dVar34 * dVar16 + dVar33 * dVar26 + dVar28 * dVar35 * dVar17 +
           dVar31 * dVar22 * dVar18;
  auVar3._8_4_ = SUB84(dVar52,0);
  auVar3._0_8_ = dVar25 * dVar26 * dVar29 + dVar33 * dVar34 + dVar28 * dVar22 * dVar10 +
                 dVar31 * dVar35 * dVar11;
  auVar3._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar19._8_4_ = SUB84(dVar32,0);
  auVar19._0_8_ =
       dVar25 * dVar35 * dVar48 + dVar33 * dVar22 + dVar28 * dVar34 * dVar12 +
       dVar31 * dVar26 * dVar13;
  auVar19._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar19;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (dVar47 * (double)CONCAT44(uStack_18c,uStack_190) - dVar20 * (double)CONCAT44(uVar46,uVar45))
       + dVar49 * dVar38 + dVar37;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] =
       (dVar49 * (double)CONCAT44(uVar46,uVar45) - dVar47 * (double)CONCAT44(uStack_194,local_198))
       + dVar20 * dVar38 + dVar36;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       (dVar20 * (double)CONCAT44(uStack_194,local_198) -
       dVar49 * (double)CONCAT44(uStack_18c,uStack_190)) + dVar47 * dVar38 + dVar21;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar24;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar14;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar23;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// operator() @ 1473dde30

void __thiscall
`FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_2>::operator()
          (void *this,int param_1,FCompactPoseBoneIndex param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  FCompactPose *pFVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  
  plVar5 = *(longlong **)((longlong)this + 8);
  lVar15 = (longlong)(int)param_2;
  uVar16 = ~(uint)param_2 >> 0x1f;
  uVar12 = 0;
  if ((int)param_2 < (int)plVar5[1]) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *plVar5;
  lVar14 = lVar15 * 0x60;
  pdVar1 = (double *)(lVar6 + 0x40 + lVar14);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar10 = *(double *)(lVar6 + 0x50 + lVar14);
  dVar2 = (param_3->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_3->field0_0x0)._s_0.Z;
  plVar5 = *(longlong **)this;
  uVar12 = 0;
  if ((int)param_2 < (int)plVar5[1]) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *plVar5;
  *(double *)(lVar6 + lVar15 * 0x18) = dVar8 * dVar2;
  *(double *)(lVar6 + 8 + lVar15 * 0x18) = dVar9 * dVar3;
  *(double *)(lVar6 + 0x10 + lVar15 * 0x18) = dVar10 * dVar4;
  pFVar13 = TArrayView<FCompactPose_const_,int>::operator[]
                      (*(TArrayView<FCompactPose_const_,int> **)((longlong)this + 0x18),param_1);
  uVar12 = 0;
  if ((int)param_2 < *(int *)&pFVar13->field_0x8) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  plVar5 = *(longlong **)((longlong)this + 0x10);
  pdVar1 = (double *)(lVar14 + 0x40 + *(longlong *)pFVar13);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar10 = *(double *)(lVar14 + 0x50 + *(longlong *)pFVar13);
  dVar2 = (param_4->field0_0x0)._s_0.X;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  dVar4 = (param_4->field0_0x0)._s_0.Z;
  uVar12 = 0;
  if ((int)param_2 < (int)plVar5[1]) {
    uVar12 = uVar16;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *plVar5;
  *(double *)(lVar6 + lVar15 * 0x18) = dVar8 * dVar2;
  *(double *)(lVar6 + 8 + lVar15 * 0x18) = dVar9 * dVar3;
  *(double *)(lVar6 + 0x10 + lVar15 * 0x18) = dVar10 * dVar4;
  return;
}

// operator() @ 1473de070

void __thiscall
`FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_3>::operator()
          (void *this,TTransform<double> *param_1,FCompactPoseBoneIndex param_2,
          FCompactPoseBoneIndex param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  
  plVar3 = *(longlong **)this;
  uVar30 = 0;
  if ((int)param_2 < (int)plVar3[1]) {
    uVar30 = ~(uint)param_2 >> 0x1f;
  }
  if (uVar30 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  plVar3 = *(longlong **)this;
  pdVar1 = (double *)((longlong)(int)param_2 * 0x20 + lVar4);
  pdVar2 = (double *)((longlong)(int)param_2 * 0x20 + 0x10 + lVar4);
  dVar9 = *pdVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar19 = pdVar1[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar30 = 0;
  if ((int)param_3 < (int)plVar3[1]) {
    uVar30 = ~(uint)param_3 >> 0x1f;
  }
  dVar10 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar25 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  if (uVar30 == 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  auVar28._8_4_ = SUB84(dVar25,0);
  auVar28._0_8_ = dVar10;
  auVar28._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  auVar26._8_8_ = dVar9;
  auVar26._0_8_ = dVar9;
  auVar20._8_4_ = SUB84(dVar19,0);
  auVar20._0_8_ = dVar19;
  auVar20._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  pdVar1 = (double *)((longlong)(int)param_3 * 0x20 + 0x10 + lVar4);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  pdVar1 = (double *)((longlong)(int)param_3 * 0x20 + lVar4);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  dVar6 = dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          auVar28._8_8_ * dVar14 +
          dVar19 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar15 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar7 = dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar25 * dVar15 +
          auVar20._8_8_ * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar8 = dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          auVar28._8_8_ * dVar12 +
          dVar19 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar10 = dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar25 * dVar13 +
           dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar10,0);
  auVar21._0_8_ = dVar8;
  auVar21._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar19 = dVar8 * dVar8 + dVar6 * dVar6;
  dVar25 = auVar21._8_8_ * dVar10 + dVar7 * dVar7;
  dVar9 = dVar25 + dVar19;
  dVar19 = dVar19 + dVar25;
  auVar22._8_4_ = SUB84(dVar19,0);
  auVar22._0_8_ = dVar9;
  auVar22._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar27 = sqrtpd(auVar26,auVar22);
  uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar19);
  uVar30 = (uint)(uVar17 >> 0x20);
  uVar31 = (uint)(uVar18 >> 0x20);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  auVar23._0_8_ = uVar17 & (ulonglong)(auVar22._0_8_ * dVar8);
  uVar11 = uVar18 & (ulonglong)(auVar22._8_8_ * dVar10);
  auVar23._8_4_ = (undefined4)uVar11;
  auVar23._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar29._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar29._4_4_ =
       ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar29._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar29._12_4_ =
       ~uVar31 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  auVar24._0_8_ = (ulonglong)(auVar22._0_8_ * dVar6) & uVar17;
  uVar11 = (ulonglong)(auVar22._8_8_ * dVar7) & uVar18;
  auVar24._8_4_ = (undefined4)uVar11;
  auVar24._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar27._4_4_ =
       ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar27._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar27._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar27._12_4_ =
       ~uVar31 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar24 | auVar27;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar29 | auVar23;
  return;
}

// operator() @ 1473de300

void __thiscall
`FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_4>::operator()
          (void *this,TTransform<double> *param_1,FCompactPoseBoneIndex param_2,
          FCompactPoseBoneIndex param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  plVar4 = *(longlong **)this;
  lVar10 = (longlong)(int)param_2;
  lVar11 = (longlong)(int)param_3;
  uVar12 = 0;
  if ((int)param_2 < (int)plVar4[1]) {
    uVar12 = ~(uint)param_2 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  dVar7 = 0.0;
  dVar1 = *(double *)(lVar5 + lVar10 * 0x18);
  uVar12 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar13,uVar12) &&
      (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee0000000) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)(lVar5 + 8 + lVar10 * 0x18);
  uVar12 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar13,uVar12) &&
      (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee0000000) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)(lVar5 + 0x10 + lVar10 * 0x18);
  uVar12 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee0000000 <= (double)CONCAT44(uVar13,uVar12) &&
      (double)CONCAT44(uVar13,uVar12) != __real_3e45798ee0000000) {
    dVar7 = __real_3ff0000000000000 / dVar3;
  }
  plVar4 = *(longlong **)this;
  uVar12 = 0;
  if ((int)param_3 < (int)plVar4[1]) {
    uVar12 = ~(uint)param_3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar10 = *plVar4;
  dVar2 = dVar2 * *(double *)(lVar10 + 8 + lVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + lVar11 * 0x18);
  auVar8._8_4_ = SUB84(dVar2,0);
  auVar8._0_8_ = dVar1 * *(double *)(lVar10 + lVar11 * 0x18);
  auVar8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64 = auVar8;
  (param_1->Scale3D).ZW.m128d_f64[0] = dVar7 * dVar3;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// operator() @ 1473de4b0

void __thiscall
`FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_5>::operator()
          (void *this,FCompactPoseBoneIndex param_1,float param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar16 = ~(uint)param_1 >> 0x1f;
  uVar29 = 0;
  if ((int)param_1 < (int)plVar3[1]) {
    uVar29 = uVar16;
  }
  if ((uVar29 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  lVar5 = *plVar3;
  lVar17 = (longlong)(int)param_1 * 0x20;
  uVar29 = 0;
  if ((int)param_1 < (int)plVar4[1]) {
    uVar29 = uVar16;
  }
  if ((uVar29 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = *plVar4;
  dVar20 = __real_bff0000000000000;
  if (0.0 <= *(double *)(lVar17 + 0x18 + lVar6) * *(double *)(lVar17 + 0x18 + lVar5) +
             *(double *)(lVar17 + 0x10 + lVar6) * *(double *)(lVar17 + 0x10 + lVar5) +
             *(double *)(lVar17 + 8 + lVar6) * *(double *)(lVar17 + 8 + lVar5) +
             *(double *)(lVar17 + lVar5) * *(double *)(lVar17 + lVar6)) {
    dVar20 = __real_3ff0000000000000;
  }
  dVar21 = (double)param_2;
  dVar20 = (double)(__real_3f800000 - param_2) * dVar20;
  dVar11 = *(double *)(lVar17 + lVar5);
  pdVar1 = (double *)(lVar17 + 0x10 + lVar5);
  dVar12 = *pdVar1;
  plVar3 = *(longlong **)this;
  dVar13 = *(double *)(lVar17 + lVar6);
  pdVar2 = (double *)(lVar17 + 0x10 + lVar6);
  dVar14 = *pdVar2;
  uVar29 = 0;
  if ((int)param_1 < (int)plVar3[1]) {
    uVar29 = uVar16;
  }
  dVar9 = dVar20 * ((double *)(lVar17 + lVar6))[1] + dVar21 * ((double *)(lVar17 + lVar5))[1];
  dVar24 = dVar21 * pdVar1[1] + dVar20 * pdVar2[1];
  if ((uVar29 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *plVar3;
  auVar27._8_4_ = SUB84(dVar9,0);
  auVar27._0_8_ = dVar20 * dVar13 + dVar21 * dVar11;
  auVar27._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(lVar17 + lVar5) = auVar27;
  auVar26._8_4_ = SUB84(dVar24,0);
  auVar26._0_8_ = dVar21 * dVar12 + dVar20 * dVar14;
  auVar26._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(lVar17 + 0x10 + lVar5) = auVar26;
  plVar3 = *(longlong **)this;
  uVar29 = 0;
  if ((int)param_1 < (int)plVar3[1]) {
    uVar29 = uVar16;
  }
  if ((uVar29 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *plVar3;
  dVar11 = *(double *)(lVar17 + lVar5);
  dVar12 = ((double *)(lVar17 + lVar5))[1];
  pdVar1 = (double *)(lVar17 + 0x10 + lVar5);
  dVar13 = *pdVar1;
  dVar14 = pdVar1[1];
  dVar21 = dVar13 * dVar13 + dVar11 * dVar11;
  dVar24 = dVar14 * dVar14 + dVar12 * dVar12;
  dVar20 = dVar24 + dVar21;
  dVar21 = dVar21 + dVar24;
  auVar8._8_4_ = SUB84(dVar21,0);
  auVar8._0_8_ = dVar20;
  auVar8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  auVar26 = sqrtpd(in_XMM4,auVar8);
  uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar20);
  uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= dVar21);
  uVar29 = (uint)(uVar18 >> 0x20);
  uVar16 = (uint)(uVar19 >> 0x20);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
  auVar28._0_8_ = uVar18 & (ulonglong)(auVar27._0_8_ * dVar11);
  uVar10 = uVar19 & (ulonglong)(auVar27._8_8_ * dVar12);
  auVar28._8_4_ = (undefined4)uVar10;
  auVar28._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar22._4_4_ =
       ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._12_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
  auVar25._0_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar25._4_4_ =
       ~uVar29 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar25._8_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar25._12_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar23._0_8_ = (ulonglong)(auVar26._0_8_ * dVar13) & uVar18;
  uVar19 = (ulonglong)(auVar26._8_8_ * dVar14) & uVar19;
  auVar23._8_4_ = (undefined4)uVar19;
  auVar23._12_4_ = (undefined4)(uVar19 >> 0x20);
  *(undefined1 (*) [16])(lVar17 + lVar5) = auVar28 | auVar22;
  *(undefined1 (*) [16])(lVar17 + 0x10 + lVar5) = auVar25 | auVar23;
  return;
}

// operator() @ 1473de790

void __thiscall
`FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_6>::operator()
          (void *this,FCompactPoseBoneIndex param_1,float param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  
  plVar6 = *(longlong **)((longlong)this + 0x10);
  lVar16 = (longlong)(int)param_1;
  uVar17 = ~(uint)param_1 >> 0x1f;
  uVar15 = 0;
  if ((int)param_1 < (int)plVar6[1]) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
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
  lVar7 = *plVar6;
  plVar6 = *(longlong **)((longlong)this + 8);
  uVar15 = 0;
  if ((int)param_1 < (int)plVar6[1]) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
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
  lVar8 = *plVar6;
  pdVar1 = (double *)(lVar7 + 8 + lVar16 * 0x18);
  dVar12 = *pdVar1;
  plVar6 = *(longlong **)this;
  dVar18 = (double)param_2;
  pdVar2 = (double *)(lVar8 + 8 + lVar16 * 0x18);
  dVar13 = *pdVar2;
  dVar11 = pdVar2[1];
  dVar3 = *(double *)(lVar7 + lVar16 * 0x18);
  dVar4 = *(double *)(lVar8 + lVar16 * 0x18);
  dVar5 = *(double *)(lVar8 + lVar16 * 0x18);
  dVar11 = (pdVar1[1] - dVar11) * dVar18 + dVar11;
  uVar15 = 0;
  if ((int)param_1 < (int)plVar6[1]) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
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
  lVar7 = *plVar6;
  *(double *)(lVar7 + lVar16 * 0x18) = (dVar3 - dVar4) * dVar18 + dVar5;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = (dVar12 - dVar13) * dVar18 + dVar13;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(lVar7 + 8 + lVar16 * 0x18) = auVar10;
  return;
}

// AccumulateAdditivePose @ 1473dfc90

void __cdecl
FAnimationRuntime::AccumulateAdditivePose
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,float param_3,
          EAdditiveAnimationType param_4)

{
  if (param_4 == AAT_RotationOffsetMeshSpace) {
    AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal(param_1->Pose,param_2->Pose,param_3);
  }
  else {
    AccumulateLocalSpaceAdditivePoseInternal(param_1->Pose,param_2->Pose,param_3);
  }
  if (__real_3727c5ac < param_3) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1->Curve,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2->Curve,
               (<lambda_1>)param_3);
  }
  UE::Anim::Attributes::AccumulateAttributes
            (param_2->Attributes,param_1->Attributes,param_3,param_4);
  FCompactPose::NormalizeRotations(param_1->Pose);
  return;
}

// AccumulateAdditivePose @ 1473dfd20

void __cdecl
FAnimationRuntime::AccumulateAdditivePose
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5,EAdditiveAnimationType param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  undefined8 local_50;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_50 = 0;
  local_48 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  if (param_6 == AAT_RotationOffsetMeshSpace) {
    AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal(param_1,param_2,param_5);
  }
  else {
    AccumulateLocalSpaceAdditivePoseInternal(param_1,param_2,param_5);
  }
  if (__real_3727c5ac < param_5) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
               (<lambda_1>)param_5);
  }
  UE::Anim::Attributes::AccumulateAttributes
            ((FStackAttributeContainer *)&local_58,(FStackAttributeContainer *)&local_58,param_5,
             param_6);
  FCompactPose::NormalizeRotations(param_1);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_48,(int)local_40);
  if (local_48 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_58,(int)local_50);
  if (local_58 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// AccumulateLocalSpaceAdditivePose @ 1473dfe40

void __cdecl
FAnimationRuntime::AccumulateLocalSpaceAdditivePose
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,float param_3)

{
  AccumulateLocalSpaceAdditivePoseInternal(param_1->Pose,param_2->Pose,param_3);
  if (__real_3727c5ac < param_3) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1->Curve,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2->Curve,
               (<lambda_1>)param_3);
  }
  UE::Anim::Attributes::AccumulateAttributes
            (param_2->Attributes,param_1->Attributes,param_3,AAT_LocalSpaceBase);
  FCompactPose::NormalizeRotations(param_1->Pose);
  return;
}

// AccumulateLocalSpaceAdditivePose @ 1473dfec0

void __cdecl
FAnimationRuntime::AccumulateLocalSpaceAdditivePose
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  undefined8 local_50;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_50 = 0;
  local_48 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  AccumulateLocalSpaceAdditivePoseInternal(param_1,param_2,param_5);
  if (__real_3727c5ac < param_5) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
               (<lambda_1>)param_5);
  }
  UE::Anim::Attributes::AccumulateAttributes
            ((FStackAttributeContainer *)&local_58,(FStackAttributeContainer *)&local_58,param_5,
             AAT_LocalSpaceBase);
  FCompactPose::NormalizeRotations(param_1);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_48,(int)local_40);
  if (local_48 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_58,(int)local_50);
  if (local_58 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// AccumulateLocalSpaceAdditivePoseInternal @ 1473dffd0

void __cdecl
FAnimationRuntime::AccumulateLocalSpaceAdditivePoseInternal
          (FCompactPose *param_1,FCompactPose *param_2,float param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  bool bVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar67;
  double dVar68;
  undefined1 auVar66 [16];
  double dVar69;
  undefined1 auVar71 [16];
  double dVar70;
  double dVar74;
  double dVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  
  if (__real_3727c5ac < param_3) {
    uVar4 = *(uint *)&param_1->field_0x8;
    if (param_3 < __real_3f7fff58) {
      uVar37 = 0;
      if (uVar4 != 0) {
        dVar70 = (double)param_3;
        dVar75 = (double)param_3;
        lVar38 = 0;
        dVar64 = (double)param_3;
        dVar68 = (double)param_3;
        do {
          uVar36 = 0;
          if ((int)uVar37 < *(int *)&param_2->field_0x8) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar8 = *(longlong *)param_2;
          pdVar1 = (double *)(lVar8 + 0x50 + lVar38);
          dVar69 = *pdVar1;
          dVar74 = pdVar1[1];
          dVar19 = *(double *)(lVar8 + lVar38);
          dVar54 = ((double *)(lVar8 + lVar38))[1];
          pdVar1 = (double *)(lVar8 + 0x10 + lVar38);
          dVar53 = *pdVar1;
          dVar56 = pdVar1[1];
          pdVar1 = (double *)(lVar8 + 0x20 + lVar38);
          dVar27 = *pdVar1;
          dVar28 = pdVar1[1];
          pdVar1 = (double *)(lVar8 + 0x30 + lVar38);
          dVar29 = *pdVar1;
          dVar30 = pdVar1[1];
          pdVar1 = (double *)(lVar8 + 0x40 + lVar38);
          dVar63 = *pdVar1;
          dVar67 = pdVar1[1];
          uVar36 = 0;
          if ((int)uVar37 < *(int *)&param_1->field_0x8) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          dVar60 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dVar62 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          lVar8 = *(longlong *)param_1;
          dVar22 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dVar61 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          fVar14 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar12 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
          uVar39 = -(ulonglong)(0.0 <= dVar19);
          uVar41 = -(ulonglong)(0.0 <= dVar54);
          auVar58._0_4_ = ~(uint)uVar39 & SUB84(0.0 - dVar60,0);
          auVar58._4_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)(0.0 - dVar60) >> 0x20);
          auVar58._8_4_ = ~(uint)uVar41 & SUB84(0.0 - dVar62,0);
          auVar58._12_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)(0.0 - dVar62) >> 0x20);
          auVar50._8_4_ = (int)(uVar41 & (ulonglong)dVar62);
          auVar50._0_8_ = uVar39 & (ulonglong)dVar60;
          auVar50._12_4_ = (int)((uVar41 & (ulonglong)dVar62) >> 0x20);
          uVar39 = -(ulonglong)(0.0 <= dVar53);
          uVar41 = -(ulonglong)(0.0 <= dVar56);
          pdVar1 = (double *)(lVar8 + 0x10 + lVar38);
          dVar31 = *pdVar1;
          dVar32 = pdVar1[1];
          dVar57 = SUB168(auVar58 | auVar50,0) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar70) + dVar70 * dVar19;
          dVar59 = SUB168(auVar58 | auVar50,8) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar75) + dVar75 * dVar54;
          auVar55._0_4_ = ~(uint)uVar39 & SUB84(0.0 - dVar22,0);
          auVar55._4_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)(0.0 - dVar22) >> 0x20);
          auVar55._8_4_ = ~(uint)uVar41 & SUB84(0.0 - dVar61,0);
          auVar55._12_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)(0.0 - dVar61) >> 0x20);
          auVar20._8_4_ = (int)((ulonglong)dVar61 & uVar41);
          auVar20._0_8_ = (ulonglong)dVar22 & uVar39;
          auVar20._12_4_ = (int)(((ulonglong)dVar61 & uVar41) >> 0x20);
          dVar33 = *(double *)(lVar8 + lVar38);
          dVar34 = ((double *)(lVar8 + lVar38))[1];
          dVar53 = SUB168(auVar55 | auVar20,0) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar64) + dVar64 * dVar53;
          dVar56 = SUB168(auVar55 | auVar20,8) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar68) + dVar68 * dVar56;
          auVar47._8_4_ = SUB84(dVar59,0);
          auVar47._0_8_ = dVar57;
          auVar47._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          dVar19 = dVar53 * dVar53 + dVar57 * dVar57;
          dVar54 = dVar56 * dVar56 + auVar47._8_8_ * dVar59;
          auVar48._8_4_ = SUB84(dVar54,0);
          auVar48._0_8_ = dVar19;
          auVar48._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          auVar49._0_8_ = auVar48._8_8_ + dVar19;
          auVar49._8_8_ = dVar19 + dVar54;
          uVar41 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar49._0_8_);
          uVar42 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar49._8_8_);
          uVar40 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar49._0_8_);
          uVar43 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar49._8_8_);
          auVar50 = sqrtpd(auVar49,auVar49);
          auVar72 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar50);
          auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar50);
          auVar73._0_8_ = uVar40 & (ulonglong)(auVar72._0_8_ * dVar57);
          uVar39 = uVar43 & (ulonglong)(auVar72._8_8_ * dVar59);
          auVar73._8_4_ = (undefined4)uVar39;
          auVar73._12_4_ = (undefined4)(uVar39 >> 0x20);
          auVar66._0_8_ = uVar41 & (ulonglong)(auVar50._0_8_ * dVar53);
          uVar39 = uVar42 & (ulonglong)(auVar50._8_8_ * dVar56);
          auVar66._8_4_ = (undefined4)uVar39;
          auVar66._12_4_ = (undefined4)(uVar39 >> 0x20);
          auVar21._4_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)dVar22 >> 0x20);
          auVar21._0_4_ = ~(uint)uVar41 & SUB84(dVar22,0);
          auVar21._8_4_ = ~(uint)uVar42 & SUB84(dVar61,0);
          auVar21._12_4_ = ~(uint)(uVar42 >> 0x20) & (uint)((ulonglong)dVar61 >> 0x20);
          auVar66 = auVar66 | auVar21;
          auVar72._4_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)dVar60 >> 0x20);
          auVar72._0_4_ = ~(uint)uVar40 & SUB84(dVar60,0);
          auVar72._8_4_ = ~(uint)uVar43 & SUB84(dVar62,0);
          auVar72._12_4_ = ~(uint)(uVar43 >> 0x20) & (uint)((ulonglong)dVar62 >> 0x20);
          dVar61 = SUB168(auVar73 | auVar72,0);
          dVar57 = SUB168(auVar73 | auVar72,8);
          dVar59 = auVar66._0_8_;
          dVar60 = auVar66._8_8_;
          dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          uVar37 = uVar37 + 1;
          auVar51._8_4_ = auVar66._8_4_;
          auVar51._0_8_ = dVar60;
          auVar51._12_4_ = auVar66._12_4_;
          dVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar22 = dVar33 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + auVar51._8_8_ * dVar32 +
                   dVar57 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar31 * dVar59 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar56 = dVar31 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar60 * dVar34 +
                   dVar57 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar33 * dVar59 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar24._8_4_ = SUB84(dVar56,0);
          auVar24._0_8_ =
               dVar32 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar60 * dVar33 +
               dVar57 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar34 * dVar59 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar24._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
          *(undefined1 (*) [16])(lVar8 + lVar38) = auVar24;
          auVar26._8_4_ = SUB84(dVar22,0);
          auVar26._0_8_ =
               dVar34 * dVar61 * dVar19 + dVar60 * dVar31 + dVar57 * dVar33 * dVar54 +
               dVar32 * dVar59 * dVar53;
          auVar26._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          *(undefined1 (*) [16])(lVar8 + 0x10 + lVar38) = auVar26;
          dVar54 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar64;
          dVar53 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar68;
          pdVar1 = (double *)(lVar8 + 0x20 + lVar38);
          dVar19 = pdVar1[1];
          pdVar2 = (double *)(lVar8 + 0x20 + lVar38);
          *pdVar2 = dVar70 * dVar27 + *pdVar1;
          pdVar2[1] = dVar75 * dVar28 + dVar19;
          auVar52._8_4_ = SUB84(dVar53,0);
          auVar52._0_8_ = dVar54;
          auVar52._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          pdVar1 = (double *)(lVar8 + 0x30 + lVar38);
          dVar19 = dVar68 * dVar30 + auVar52._8_8_ * 0.0 + pdVar1[1];
          auVar17._8_4_ = SUB84(dVar19,0);
          auVar17._0_8_ = dVar64 * dVar29 + dVar54 * 0.0 + *pdVar1;
          auVar17._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])(lVar8 + 0x30 + lVar38) = auVar17;
          pdVar1 = (double *)(lVar8 + 0x40 + lVar38);
          dVar19 = pdVar1[1];
          pdVar2 = (double *)(lVar8 + 0x40 + lVar38);
          *pdVar2 = (dVar70 * dVar63 + (double)fVar14) * *pdVar1;
          pdVar2[1] = (dVar75 * dVar67 + (double)fVar12) * dVar19;
          pdVar1 = (double *)(lVar8 + 0x50 + lVar38);
          dVar19 = (dVar68 * dVar74 + dVar53 * 0.0 + (double)fVar13) * pdVar1[1];
          auVar18._8_4_ = SUB84(dVar19,0);
          auVar18._0_8_ = (dVar64 * dVar69 + dVar54 * 0.0 + (double)fVar11) * *pdVar1;
          auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          *(undefined1 (*) [16])(lVar8 + 0x50 + lVar38) = auVar18;
          lVar38 = lVar38 + 0x60;
        } while (uVar37 != uVar4);
      }
    }
    else if (bAnim_AccumulateLocalSpaceAdditivePose_ISPC_Enabled) {
      if (((int)uVar4 < 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar5 = *(int *)&param_1->field_0x8;
      uVar6 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)param_1;
      if ((iVar5 < 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      AccumulateWithAdditiveScale(uVar7,uVar6,param_3,iVar5);
    }
    else {
      uVar37 = 0;
      if (uVar4 != 0) {
        dVar64 = (double)param_3;
        uVar76 = SUB84((double)param_3,0);
        uVar77 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
        lVar38 = 0;
        dVar68 = (double)param_3;
        dVar70 = (double)param_3;
        do {
          uVar36 = 0;
          if ((int)uVar37 < *(int *)&param_1->field_0x8) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar8 = *(longlong *)param_1;
          uVar36 = 0;
          if ((int)uVar37 < *(int *)&param_2->field_0x8) {
            uVar36 = ~uVar37 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pdVar1 = (double *)(lVar38 + 0x10 + lVar8);
          dVar27 = *pdVar1;
          dVar28 = pdVar1[1];
          auVar71._8_4_ = SUB84(dVar70,0);
          auVar71._0_8_ = dVar68;
          auVar71._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
          lVar9 = *(longlong *)param_2;
          dVar29 = *(double *)(lVar38 + lVar8);
          dVar30 = ((double *)(lVar38 + lVar8))[1];
          fVar14 = GlobalVectorConstants::Float1110.m128_f32[0];
          auVar65._8_4_ = uVar76;
          auVar65._0_8_ = dVar64;
          auVar65._12_4_ = uVar77;
          dVar63 = dVar64 * *(double *)(lVar9 + lVar38);
          dVar67 = auVar65._8_8_ * ((double *)(lVar9 + lVar38))[1];
          uVar37 = uVar37 + 1;
          pdVar1 = (double *)(lVar9 + 0x10 + lVar38);
          dVar69 = dVar68 * *pdVar1;
          dVar74 = auVar71._8_8_ * pdVar1[1];
          fVar12 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
          dVar75 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          auVar44._8_4_ = SUB84(dVar74,0);
          auVar44._0_8_ = dVar74;
          auVar44._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
          dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          auVar45._8_4_ = uVar76;
          auVar45._0_8_ = dVar64;
          auVar45._12_4_ = uVar77;
          dVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar56 = dVar29 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + auVar44._8_8_ * dVar28 +
                   dVar67 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar27 * dVar69 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar53 = dVar27 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar74 * dVar30 +
                   dVar67 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar29 * dVar69 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar23._8_4_ = SUB84(dVar53,0);
          auVar23._0_8_ =
               dVar28 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar74 * dVar29 +
               dVar67 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar30 * dVar69 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar23._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          *(undefined1 (*) [16])(lVar38 + lVar8) = auVar23;
          auVar25._8_4_ = SUB84(dVar56,0);
          auVar25._0_8_ =
               dVar30 * dVar63 * dVar75 + dVar74 * dVar27 + dVar67 * dVar29 * dVar19 +
               dVar28 * dVar69 * dVar54;
          auVar25._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
          *(undefined1 (*) [16])(lVar38 + 0x10 + lVar8) = auVar25;
          pdVar1 = (double *)(lVar9 + 0x20 + lVar38);
          dVar19 = pdVar1[1];
          pdVar2 = (double *)(lVar9 + 0x30 + lVar38);
          dVar54 = *pdVar2;
          dVar53 = pdVar2[1];
          pdVar2 = (double *)(lVar38 + 0x20 + lVar8);
          dVar75 = pdVar2[1];
          pdVar3 = (double *)(lVar38 + 0x20 + lVar8);
          *pdVar3 = dVar64 * *pdVar1 + *pdVar2;
          pdVar3[1] = auVar45._8_8_ * dVar19 + dVar75;
          pdVar1 = (double *)(lVar38 + 0x30 + lVar8);
          dVar75 = dVar70 * dVar53 + pdVar1[1];
          auVar46._8_4_ = uVar76;
          auVar46._0_8_ = dVar64;
          auVar46._12_4_ = uVar77;
          auVar15._8_4_ = SUB84(dVar75,0);
          auVar15._0_8_ = dVar68 * dVar54 + *pdVar1;
          auVar15._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
          *(undefined1 (*) [16])(lVar38 + 0x30 + lVar8) = auVar15;
          pdVar1 = (double *)(lVar9 + 0x40 + lVar38);
          dVar75 = pdVar1[1];
          pdVar2 = (double *)(lVar9 + 0x50 + lVar38);
          dVar19 = *pdVar2;
          dVar54 = pdVar2[1];
          pdVar2 = (double *)(lVar38 + 0x40 + lVar8);
          dVar53 = pdVar2[1];
          pdVar3 = (double *)(lVar38 + 0x40 + lVar8);
          *pdVar3 = (dVar64 * *pdVar1 + (double)fVar14) * *pdVar2;
          pdVar3[1] = (auVar46._8_8_ * dVar75 + (double)fVar12) * dVar53;
          pdVar1 = (double *)(lVar38 + 0x50 + lVar8);
          dVar75 = (dVar70 * dVar54 + (double)fVar13) * pdVar1[1];
          auVar16._8_4_ = SUB84(dVar75,0);
          auVar16._0_8_ = (dVar68 * dVar19 + (double)fVar11) * *pdVar1;
          auVar16._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
          *(undefined1 (*) [16])(lVar38 + 0x50 + lVar8) = auVar16;
          lVar38 = lVar38 + 0x60;
        } while (uVar37 != uVar4);
      }
    }
  }
  return;
}

// AccumulateMeshSpaceRotationAdditiveToLocalPose @ 1473e0750

void __cdecl
FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPose
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,float param_3)

{
  AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal(param_1->Pose,param_2->Pose,param_3);
  if (__real_3727c5ac < param_3) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1->Curve,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2->Curve,
               (<lambda_1>)param_3);
  }
  UE::Anim::Attributes::AccumulateAttributes
            (param_2->Attributes,param_1->Attributes,param_3,AAT_RotationOffsetMeshSpace);
  FCompactPose::NormalizeRotations(param_1->Pose);
  return;
}

// AccumulateMeshSpaceRotationAdditiveToLocalPose @ 1473e07d0

void __cdecl
FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPose
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  undefined8 local_50;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_50 = 0;
  local_48 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal(param_1,param_2,param_5);
  if (__real_3727c5ac < param_5) {
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
               (<lambda_1>)param_5);
  }
  UE::Anim::Attributes::AccumulateAttributes
            ((FStackAttributeContainer *)&local_58,(FStackAttributeContainer *)&local_58,param_5,
             AAT_RotationOffsetMeshSpace);
  FCompactPose::NormalizeRotations(param_1);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_48,(int)local_40);
  if (local_48 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_58,(int)local_50);
  if (local_58 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal @ 1473e08e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPoseInternal
          (FCompactPose *param_1,FCompactPose *param_2,float param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose> FVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  FColor_u_0 local_res18 [2];
  LARGE_INTEGER local_res20;
  FStatMessage local_58;
  FName local_48;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose;
  if (StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose ==
      (FThreadSafeStaticStat<FStat_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_AccumulateMeshSpaceRotAdditiveToLocalPose");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_AccumulateMeshSpaceRotAdditiveToLocalPose,*pFVar5,
                       L"AccumulateMeshSpaceRotAdditiveToLocalPose","STATGROUP_Anim",
                       "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar8.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                   ,0x515);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar8.Value;
      local_res20.s.HighPart = uVar7;
      local_48 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_48.ComparisonIndex.Value;
      goto LAB_1473e0a47;
    }
  }
  bVar3 = false;
  FVar9 = local_48;
LAB_1473e0a47:
  if (__real_3727c5ac < param_3) {
    ConvertPoseToMeshRotation(param_1);
    AccumulateLocalSpaceAdditivePoseInternal(param_1,param_2,param_3);
    ConvertMeshRotationPoseToLocalSpace(param_1);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res20);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_58);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// AccumulateRootSpaceAdditivePoseInternal @ 1473e0b70

void __cdecl
FAnimationRuntime::AccumulateRootSpaceAdditivePoseInternal
          (FCompactPose *param_1,FCompactPose *param_2,float param_3)

{
  undefined8 *puVar1;
  double (*padVar2) [2];
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  __m128d _Var20;
  __m128d _Var21;
  __m128d _Var22;
  __m128d _Var23;
  __m128d _Var24;
  bool bVar25;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  
  if (__real_3727c5ac < param_3) {
    if ((*(int *)&param_1->field_0x8 < 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    _Var24.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    _Var23.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    _Var22.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    _Var21.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    _Var20.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    puVar1 = *(undefined8 **)param_1;
    uVar4 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar5 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar6 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar7 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    uVar12 = puVar1[4];
    uVar13 = puVar1[5];
    uVar14 = puVar1[6];
    uVar15 = puVar1[7];
    uVar16 = puVar1[8];
    uVar17 = puVar1[9];
    uVar18 = puVar1[10];
    uVar19 = puVar1[0xb];
    if ((*(int *)&param_1->field_0x8 < 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    padVar2 = *(double (**) [2])param_1;
    *padVar2 = _Var20.m128d_f64;
    padVar2[1] = _Var21.m128d_f64;
    padVar2[2] = _Var22.m128d_f64;
    *(undefined4 *)padVar2[3] = uVar4;
    *(undefined4 *)((longlong)padVar2[3] + 4) = uVar5;
    *(undefined4 *)(padVar2[3] + 1) = uVar6;
    *(undefined4 *)((longlong)padVar2[3] + 0xc) = uVar7;
    local_c8 = _Var23.m128d_f64[0];
    dStack_c0 = _Var23.m128d_f64[1];
    padVar2[4][0] = local_c8;
    padVar2[4][1] = dStack_c0;
    local_b8 = _Var24.m128d_f64[0];
    dStack_b0 = _Var24.m128d_f64[1];
    padVar2[5][0] = local_b8;
    padVar2[5][1] = dStack_b0;
    ConvertPoseToMeshRotation(param_1);
    AccumulateLocalSpaceAdditivePoseInternal(param_1,param_2,param_3);
    ConvertMeshRotationPoseToLocalSpace(param_1);
    if ((*(int *)&param_1->field_0x8 < 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = *(undefined8 **)param_1;
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1[4] = uVar12;
    puVar1[5] = uVar13;
    puVar1[6] = uVar14;
    puVar1[7] = uVar15;
    puVar1[8] = uVar16;
    puVar1[9] = uVar17;
    puVar1[10] = uVar18;
    puVar1[0xb] = uVar19;
  }
  return;
}

// AccumulateRootSpaceRotationAdditiveToLocalPose @ 1473e0db0

void __cdecl
FAnimationRuntime::AccumulateRootSpaceRotationAdditiveToLocalPose
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,float param_3)

{
  FCompactPose *pFVar1;
  FCompactPose *pFVar2;
  undefined8 *puVar3;
  double (*padVar4) [2];
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  __m128d _Var22;
  __m128d _Var23;
  __m128d _Var24;
  __m128d _Var25;
  __m128d _Var26;
  bool bVar27;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  
  pFVar1 = param_2->Pose;
  pFVar2 = param_1->Pose;
  if (__real_3727c5ac < param_3) {
    if ((*(int *)&pFVar2->field_0x8 < 1) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    _Var26.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    _Var25.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    _Var24.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    _Var23.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    _Var22.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    puVar3 = *(undefined8 **)pFVar2;
    uVar6 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    uVar7 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    uVar8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    uVar9 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    uVar10 = *puVar3;
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    uVar14 = puVar3[4];
    uVar15 = puVar3[5];
    uVar16 = puVar3[6];
    uVar17 = puVar3[7];
    uVar18 = puVar3[8];
    uVar19 = puVar3[9];
    uVar20 = puVar3[10];
    uVar21 = puVar3[0xb];
    if ((*(int *)&pFVar2->field_0x8 < 1) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    padVar4 = *(double (**) [2])pFVar2;
    *padVar4 = _Var22.m128d_f64;
    padVar4[1] = _Var23.m128d_f64;
    padVar4[2] = _Var24.m128d_f64;
    *(undefined4 *)padVar4[3] = uVar6;
    *(undefined4 *)((longlong)padVar4[3] + 4) = uVar7;
    *(undefined4 *)(padVar4[3] + 1) = uVar8;
    *(undefined4 *)((longlong)padVar4[3] + 0xc) = uVar9;
    local_c8 = _Var25.m128d_f64[0];
    dStack_c0 = _Var25.m128d_f64[1];
    padVar4[4][0] = local_c8;
    padVar4[4][1] = dStack_c0;
    local_b8 = _Var26.m128d_f64[0];
    dStack_b0 = _Var26.m128d_f64[1];
    padVar4[5][0] = local_b8;
    padVar4[5][1] = dStack_b0;
    ConvertPoseToMeshRotation(pFVar2);
    AccumulateLocalSpaceAdditivePoseInternal(pFVar2,pFVar1,param_3);
    ConvertMeshRotationPoseToLocalSpace(pFVar2);
    if ((*(int *)&pFVar2->field_0x8 < 1) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar3 = *(undefined8 **)pFVar2;
    *puVar3 = uVar10;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    puVar3[4] = uVar14;
    puVar3[5] = uVar15;
    puVar3[6] = uVar16;
    puVar3[7] = uVar17;
    puVar3[8] = uVar18;
    puVar3[9] = uVar19;
    puVar3[10] = uVar20;
    puVar3[0xb] = uVar21;
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1->Curve,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2->Curve,
               (<lambda_1>)param_3);
  }
  UE::Anim::Attributes::AccumulateAttributes
            (param_2->Attributes,param_1->Attributes,param_3,AAT_RotationOffsetMeshSpace);
  FCompactPose::NormalizeRotations(param_1->Pose);
  return;
}

// AdvanceTime @ 1473e1820

ETypeAdvanceAnim __cdecl
FAnimationRuntime::AdvanceTime(bool param_1,float param_2,float *param_3,float param_4)

{
  ETypeAdvanceAnim EVar1;
  float fVar2;
  
  fVar2 = param_2 + *param_3;
  if ((fVar2 < 0.0) || (param_4 < fVar2)) {
    if (param_1) {
      if (param_4 == 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = FGenericPlatformMath::Fmod(fVar2,param_4);
        if (fVar2 < 0.0) {
          *param_3 = fVar2 + param_4;
          return ETAA_Looped;
        }
      }
      *param_3 = fVar2;
      return ETAA_Looped;
    }
    if (param_4 <= fVar2) {
      fVar2 = param_4;
    }
    EVar1 = ETAA_Finished;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  else {
    EVar1 = ETAA_Default;
  }
  *param_3 = fVar2;
  return EVar1;
}

// AppendActiveMorphTargets @ 1473e21f0

void __cdecl
FAnimationRuntime::AppendActiveMorphTargets
          (USkeletalMesh *param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2,TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
                   *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  FScriptContainerElement *_Dst;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 local_128 [4];
  uint local_124;
  int local_120;
  int local_11c;
  TPairInitializer<UMorphTarget_const_*_const_&,int_const_&> local_118;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  int **local_a8;
  uint *local_a0;
  undefined4 local_7c;
  
  if ((param_1 != (USkeletalMesh *)0x0) &&
     (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
    lVar10 = (**(code **)(param_1->_padding_ + 0x450))();
    iVar9 = param_4->ArrayNum;
    uVar15 = *(uint *)(lVar10 + 8);
    if (iVar9 < (int)uVar15) {
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(param_4,uVar15 - iVar9);
    }
    else {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if ((int)uVar15 < iVar9) {
        uVar14 = iVar9 - uVar15;
        if (((int)(uVar14 | uVar15) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar14 != 0) {
          _Dst = (param_4->AllocatorInstance).Data + (longlong)(int)uVar15 * 4;
          iVar9 = (param_4->ArrayNum - uVar14) - uVar15;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar14 * 4,(longlong)iVar9 << 2);
          }
          param_4->ArrayNum = param_4->ArrayNum - uVar14;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
        }
      }
    }
    if (uVar15 != 0) {
      fVar16 = UE::SkeletalRender::Settings::GetMorphTargetMaxBlendWeight();
      iVar9 = *(int *)&param_2->field_0x28;
      puVar1 = &param_2->field_0x10;
      iStack_100 = 0;
      uStack_fc = 1;
      local_e8 = 0;
      iStack_ec = 0;
      if (iVar9 != 0) {
        puVar11 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar11 = (uint *)puVar1;
        }
        uVar15 = *puVar11;
        local_e8 = 0;
        while (uVar15 == 0) {
          lVar10 = (longlong)iStack_100;
          local_e8 = local_e8 + 0x20;
          iStack_100 = iStack_100 + 1;
          iStack_ec = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
          goto LAB_1473e23be;
          uVar15 = puVar11[lVar10 + 1];
        }
        uStack_fc = -uVar15 & uVar15;
        uVar2 = (ulonglong)uStack_fc * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_120 = (int)lVar10;
        iStack_ec = local_120 + -1 + local_e8;
        if (iVar9 < iStack_ec) {
          iStack_ec = iVar9;
        }
      }
LAB_1473e23be:
      uVar15 = *(uint *)&param_2->field_0x28;
      uStack_e4 = local_7c;
      iStack_e0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uVar14 = uVar15 & 0xffffffe0;
      uStack_f0 = 0xffffffff;
      TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
      TStack_d0.CurrentBitIndex = iStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar15 >> 5;
      TStack_d0._28_4_ = local_7c;
      TStack_d0.BaseBitIndex = local_e8;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      local_108 = param_2;
      local_f8 = puVar1;
      local_d8 = param_2;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = __xmm_80000000800000008000000080000000;
      uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      uVar3 = *(uint *)&param_2->field_0x28;
      if (uVar15 != uVar3) {
        puVar12 = *(undefined1 **)&param_2->field_0x20;
        if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
        while (uVar15 == 0) {
          lVar10 = (longlong)iVar13;
          uVar14 = uVar14 + 0x20;
          iVar13 = iVar13 + 1;
          uVar15 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_1473e24e0;
          uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_11c = (int)lVar10;
        uVar15 = local_11c + -1 + uVar14;
        if ((int)uVar3 < (int)uVar15) {
          uVar15 = uVar3;
        }
      }
LAB_1473e24e0:
      while( true ) {
        pTVar7 = local_d8;
        if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
          local_128[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
        }
        if (((TStack_d0.CurrentBitIndex == uVar15) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == param_2)) break;
        lVar10 = *(longlong *)pTVar7;
        local_124 = 0xffffffff;
        fVar17 = *(float *)(lVar10 + 8 + (longlong)TStack_d0.CurrentBitIndex * 0x14);
        local_118.Value =
             (int *)USkeletalMesh::FindMorphTargetAndIndex
                              (param_1,*(FName *)(lVar10 + (longlong)TStack_d0.CurrentBitIndex *
                                                           0x14),(int *)&local_124);
        if ((UMorphTarget *)local_118.Value != (UMorphTarget *)0x0) {
          uVar14 = ((uint)((ulonglong)local_118.Value >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118.Value >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
            puVar12 = &param_3->field_0x38;
            if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
              puVar12 = *(undefined1 **)&param_3->field_0x40;
            }
            iVar9 = *(int *)(puVar12 +
                            (ulonglong)
                            (*(int *)&param_3->field_0x48 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
            if (iVar9 != -1) {
              do {
                lVar10 = *(longlong *)param_3 + (longlong)iVar9 * 0x18;
                if (*(UMorphTarget **)(*(longlong *)param_3 + (longlong)iVar9 * 0x18) ==
                    (UMorphTarget *)local_118.Value) goto LAB_1473e25ca;
                iVar9 = *(int *)(lVar10 + 0x10);
              } while (iVar9 != -1);
            }
          }
          lVar10 = 0;
LAB_1473e25ca:
          puVar11 = (uint *)(lVar10 + 8);
          if (lVar10 == 0) {
            puVar11 = (uint *)0x0;
          }
          if ((float)((uint)fVar17 & uVar5) <= MinMorphTargetBlendWeight) {
            if (puVar11 != (uint *)0x0) {
              if ((local_124 != *puVar11) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("SkeletalMorphIndex == *FoundMorphIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                                     ,0xaf7,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar10 = (longlong)(int)local_124;
              uVar14 = 0;
              if ((int)local_124 < param_4->ArrayNum) {
                uVar14 = ~local_124 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(undefined4 *)((param_4->AllocatorInstance).Data + lVar10 * 4) = 0;
            }
          }
          else {
            if (fVar16 <= fVar17) {
              fVar17 = fVar16;
            }
            if (fVar17 <= (float)((uint)fVar16 ^ uVar6)) {
              fVar17 = (float)((uint)fVar16 ^ uVar6);
            }
            if (puVar11 == (uint *)0x0) {
              local_a8 = &local_118.Value;
              local_a0 = &local_124;
              TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<UMorphTarget_const_*_const_&,int_const_&>_>
                        ((TSet<TTuple<UMorphTarget_const_*,int>,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>,FDefaultSetAllocator>
                          *)param_3,&local_118,(bool *)&local_a8);
              lVar10 = (longlong)(int)local_124;
              uVar14 = 0;
              if ((int)local_124 < param_4->ArrayNum) {
                uVar14 = ~local_124 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              if ((local_124 != *puVar11) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("SkeletalMorphIndex == *FoundMorphIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                                     ,0xaf0,L""), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar10 = (longlong)(int)local_124;
              uVar14 = 0;
              if ((int)local_124 < param_4->ArrayNum) {
                uVar14 = ~local_124 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            *(float *)((param_4->AllocatorInstance).Data + lVar10 * 4) = fVar17;
          }
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
    }
  }
  return;
}

// ApplyWeightToTransform @ 1473e2820

void __cdecl
FAnimationRuntime::ApplyWeightToTransform
          (FBoneContainer *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  
  iVar20 = (param_1->BoneIndicesArray).ArrayNum;
  uVar18 = 0;
  if (0 < iVar20) {
    lVar19 = 0;
    dVar11 = (double)param_3;
    dVar12 = (double)param_3;
    dVar13 = (double)param_3;
    dVar14 = (double)param_3;
    do {
      uVar16 = 0;
      if ((int)uVar18 < iVar20) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(ushort *)((param_1->BoneIndicesArray).AllocatorInstance.Data + lVar19);
      if ((param_2->ArrayNum <= (int)(uint)uVar1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      lVar17 = (ulonglong)uVar1 * 0x60;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + 2;
      dVar7 = dVar12 * *(double *)(pFVar2 + lVar17 + 0x20 + 8);
      auVar4._8_4_ = SUB84(dVar7,0);
      auVar4._0_8_ = dVar11 * *(double *)(pFVar2 + lVar17 + 0x20);
      auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar17 + 0x20) = auVar4;
      dVar7 = dVar14 * *(double *)(pFVar2 + lVar17 + 0x30 + 8);
      auVar8._8_4_ = SUB84(dVar7,0);
      auVar8._0_8_ = dVar13 * *(double *)(pFVar2 + lVar17 + 0x30);
      auVar8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar17 + 0x30) = auVar8;
      dVar7 = dVar12 * *(double *)(pFVar2 + lVar17 + 8);
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar11 * *(double *)(pFVar2 + lVar17);
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar17) = auVar5;
      dVar7 = dVar14 * *(double *)(pFVar2 + lVar17 + 0x10 + 8);
      auVar9._8_4_ = SUB84(dVar7,0);
      auVar9._0_8_ = dVar13 * *(double *)(pFVar2 + lVar17 + 0x10);
      auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar17 + 0x10) = auVar9;
      dVar7 = dVar12 * *(double *)(pFVar2 + lVar17 + 0x40 + 8);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar11 * *(double *)(pFVar2 + lVar17 + 0x40);
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar17 + 0x40) = auVar6;
      dVar7 = dVar14 * *(double *)(pFVar2 + lVar17 + 0x50 + 8);
      auVar10._8_4_ = SUB84(dVar7,0);
      auVar10._0_8_ = dVar13 * *(double *)(pFVar2 + lVar17 + 0x50);
      auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar17 + 0x50) = auVar10;
      iVar20 = (param_1->BoneIndicesArray).ArrayNum;
    } while ((int)uVar18 < iVar20);
  }
  return;
}

// BlendPosesPerBoneFilter @ 1473e38b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationRuntime::BlendPosesPerBoneFilter
          (FCompactPose *param_1,TArrayView<FCompactPose_const_,int> *param_2,FBlendedCurve *param_3
          ,TArrayView<FBlendedCurve_const_,int> *param_4,FStackAttributeContainer *param_5,
          TArrayView<UE::Anim::FStackAttributeContainer,int> *param_6,FAnimationPoseData *param_7,
          TArrayView<FPerBoneBlendWeight,int> *param_8,EBlendPosesPerBoneFilterFlags param_9,
          Type param_10)

{
  FTlsAutoCleanup *pFVar1;
  FTlsAutoCleanup *pFVar2;
  __m128d *p_Var3;
  __m128d *p_Var4;
  __m128d *p_Var5;
  undefined1 *puVar6;
  FPerBoneBlendWeight *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  FScriptContainerElement *pFVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double (*padVar15) [2];
  undefined8 uVar16;
  double adVar17 [2];
  double adVar18 [2];
  int iVar19;
  FCompactPoseBoneIndex FVar20;
  FCompactPose *this;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FTlsAutoCleanup FVar21;
  FTlsAutoCleanup FVar22;
  FTlsAutoCleanup FVar23;
  ForAnyElementType FVar24;
  FTlsAutoCleanup FVar25;
  FCompactPose *pFVar26;
  FBlendedCurve *pFVar27;
  code *pcVar28;
  undefined1 auVar29 [16];
  ulonglong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  FCompactPoseBoneIndex FVar35;
  bool bVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  TStatId TVar40;
  FTlsAutoCleanup *pFVar41;
  FTlsAutoCleanup *pFVar42;
  ForAnyElementType FVar43;
  TArrayView<UE::Math::TTransform<double>,int> *pTVar44;
  TVector<double>_u_0 *pTVar45;
  FTlsAutoCleanup *pFVar46;
  TTransform<double> *pTVar47;
  FTlsAutoCleanup FVar48;
  TQuat<double> *pTVar49;
  FTlsAutoCleanup *pFVar50;
  FBoneContainer *pFVar51;
  EBlendPosesPerBoneFilterFlags EVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  FPerBoneBlendWeight *pFVar56;
  FCompactPose *pFVar57;
  double (*padVar58) [2];
  double *pdVar59;
  FCompactPoseBoneIndex FVar60;
  FCompactPoseBoneIndex FVar61;
  uint uVar62;
  undefined1 (*pauVar63) [16];
  TVector<double>_u_0 *pTVar64;
  TQuat<double> *pTVar65;
  longlong lVar66;
  uint uVar67;
  FTlsAutoCleanup *pFVar68;
  ulonglong uVar69;
  longlong lVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  longlong lVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dVar98;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  double dVar120;
  undefined1 auVar105 [16];
  double dVar99;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar100;
  double dVar121;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar101;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar122;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar102;
  double dVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  double dVar124;
  double dVar132;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  double dVar133;
  undefined1 auVar134 [16];
  double dVar141;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  double dVar142;
  undefined4 uVar143;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  double dVar144;
  undefined1 auVar145 [16];
  double dVar147;
  undefined1 auVar146 [16];
  float fVar148;
  float fVar149;
  float fVar150;
  undefined4 uVar151;
  undefined4 uVar152;
  undefined4 uVar153;
  float fVar154;
  undefined4 uVar155;
  undefined4 uVar156;
  undefined4 uVar157;
  undefined4 uVar158;
  undefined4 uVar159;
  undefined4 uVar160;
  undefined4 uVar161;
  undefined4 uVar162;
  undefined4 uVar163;
  undefined4 uVar164;
  undefined4 uVar165;
  undefined4 uVar166;
  undefined4 uVar167;
  undefined4 uVar168;
  undefined4 uVar169;
  undefined4 uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined8 in_stack_fffffffffffff8d8;
  undefined8 in_stack_fffffffffffff8f0;
  longlong local_6b0;
  longlong local_6a8;
  FCompactPoseBoneIndex local_698;
  FCompactPoseBoneIndex local_694;
  FTlsAutoCleanup *local_690;
  FCompactPose *local_688;
  FBoneContainer *local_680;
  TQuat<double> *local_678;
  FTlsAutoCleanup *local_670;
  FCompactPoseBoneIndex local_668;
  FCompactPoseBoneIndex local_664;
  FCompactPoseBoneIndex local_660;
  float local_65c;
  undefined8 local_658;
  undefined1 local_650 [8];
  FCompactPose *local_648;
  int local_640;
  FTlsAutoCleanup *local_638;
  longlong local_630;
  FName local_628;
  byte local_620;
  longlong local_618;
  longlong local_610;
  TTransform<double> local_608;
  TTransform<double> local_5a8;
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  FTlsAutoCleanup local_528;
  FTlsAutoCleanup FStack_520;
  undefined1 local_518 [16];
  FTlsAutoCleanup local_508;
  FTlsAutoCleanup FStack_500;
  undefined1 local_4f8 [16];
  TTransform<double> local_4e8;
  TTransform<double> local_488;
  FTlsAutoCleanup *local_428;
  FCompactPose *local_420;
  FTlsAutoCleanup *local_418;
  TArrayView<FCompactPose_const_,int> *local_410;
  FTlsAutoCleanup *local_408;
  FCompactPose *local_400;
  FTlsAutoCleanup *local_3f8;
  TArrayView<FCompactPose_const_,int> *local_3f0;
  FCompactPose *local_3e8;
  FTlsAutoCleanup *local_3e0;
  FTlsAutoCleanup *local_3d8;
  TTransform<double> local_3c8;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_368;
  FBlendedCurve *local_360;
  FTlsAutoCleanup *local_358;
  FTlsAutoCleanup *local_350;
  FTlsAutoCleanup *local_348;
  FSourceLocation local_338;
  code *local_318;
  undefined1 *local_310;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FPerBoneBlendWeight *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FStackAttributeContainer *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  TTransform<double> local_2c8;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TArrayView<FBlendedCurve_const_*_const,int> local_1e8;
  TArrayView<FPerBoneBlendWeight_const_,int> local_1d8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_1c8;
  double local_1b0;
  double local_1a8;
  TArrayView<float_const_,int> local_198;
  TVector<double>_u_0 local_188;
  TArrayView<UE::Math::TTransform<double>,int> local_170;
  TArrayView<UE::Math::TTransform<double>,int> local_160;
  TArrayView<UE::Math::TTransform<double>,int> local_150;
  TArrayView<UE::Math::TTransform<double>,int> local_140;
  TArrayView<UE::Math::TTransform<double>,int> local_130;
  TArrayView<UE::Math::TTransform<double>,int> local_120;
  TArrayView<UE::Math::TTransform<double>,int> local_110;
  TArrayView<UE::Math::TTransform<double>,int> local_100 [3];
  
  TVar40 = FThreadSafeStaticStatInner<FStat_STAT_BlendPosesPerBoneFilter,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_BlendPosesPerBoneFilter,1> *)
                      &StatPtr_STAT_BlendPosesPerBoneFilter);
  local_338.Impl._Line = 0x73c;
  local_338.Impl._Function =
       "void __cdecl FAnimationRuntime::BlendPosesPerBoneFilter(struct FCompactPose &,const class TArrayView<struct FCompactPose const ,int>,struct FBlendedCurve &,const class TArrayView<struct FBlendedCurve const ,int>,struct UE::Anim::FStackAttributeContainer &,const class TArrayView<struct UE::Anim::FStackAttributeContainer,int>,struct FAnimationPoseData &,const class TArrayView<struct FPerBoneBlendWeight,int>,enum FAnimationRuntime::EBlendPosesPerBoneFilterFlags,enum ECurveBlendOption::Type)"
  ;
  local_338.Impl._Column = 2;
  local_338.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_628,*(TStatIdData **)&(TVar40.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_338);
  this = param_7->Pose;
  local_360 = param_7->Curve;
  this_00 = (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_7->Attributes
  ;
  local_368 = this_00;
  if (param_2->ArrayNum == 0) {
    TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)this,
               (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_1);
    *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
    UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator=
              (this_00,(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)param_5)
    ;
    goto LAB_1473e81ac;
  }
  iVar39 = *(int *)&param_1->field_0x8;
  if ((param_8->ArrayNum != iVar39) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("BoneBlendWeights.Num() == NumBones",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x74b,L""), bVar36)) {
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  if ((*(int *)&this->field_0x8 != iVar39) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutPose.GetNumBones() == NumBones",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x74c,L""), bVar36)) {
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  pFVar56 = param_8->DataPtr;
  iVar19 = param_2->ArrayNum;
  pFVar7 = pFVar56 + param_8->ArrayNum;
  local_640 = iVar19;
  for (; pFVar56 != pFVar7; pFVar56 = pFVar56 + 1) {
    if ((pFVar56->SourceIndex < 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("PerBoneBlendWeight.SourceIndex >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                            ,0x751,L""), bVar36)) {
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
    if ((iVar19 <= pFVar56->SourceIndex) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("PerBoneBlendWeight.SourceIndex < NumPoses",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                            ,0x752,L""), bVar36)) {
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
  }
  pFVar57 = param_2->DataPtr;
  pFVar26 = pFVar57 + param_2->ArrayNum;
  while( true ) {
    uVar143 = (undefined4)((ulonglong)in_stack_fffffffffffff8d8 >> 0x20);
    uVar152 = (undefined4)((ulonglong)in_stack_fffffffffffff8f0 >> 0x20);
    if (pFVar57 == pFVar26) break;
    if ((*(int *)&pFVar57->field_0x8 != iVar39) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlendPose.GetNumBones() == NumBones",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                            ,0x757,L""), bVar36)) {
      pcVar28 = (code *)swi(3);
      (*pcVar28)();
      return;
    }
    pFVar57 = pFVar57 + 1;
  }
  local_310 = local_650;
  local_318 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar41 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_318,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlendPosesPerBoneFilterScratchArea>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  pFVar68 = pFVar41 + 0xe;
  iVar37 = *(int *)&pFVar41[0xf].field_0x4;
  *(int *)(pFVar41 + 0xf) = 0;
  local_690 = pFVar68;
  if (iVar37 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pFVar68,0,(int *)&pFVar41[0xf].field_0x4);
  }
  iVar37 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar19,(ForAnyElementType *)pFVar68,(int *)(pFVar41 + 0xf),
                      (int *)&pFVar41[0xf].field_0x4);
  local_610 = (longlong)iVar19;
  memset(*(FScriptContainerElement **)pFVar68 + (longlong)iVar37 * 4,0,(longlong)iVar19 * 4);
  EVar52 = param_9 & MeshSpaceScale;
  pFVar50 = pFVar41 + 2;
  pFVar26 = (FCompactPose *)(pFVar41 + 4);
  pFVar1 = pFVar41 + 6;
  pFVar46 = pFVar41 + 8;
  pFVar2 = pFVar41 + 10;
  pFVar42 = pFVar41 + 0xc;
  local_658 = pFVar50;
  if (((param_9 & RootSpaceRotation) != None) || ((param_9 & MeshSpaceRotation) != None)) {
    iVar19 = *(int *)&pFVar41[3].field_0x4;
    *(undefined4 *)(pFVar41 + 3) = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,0,(ForAnyElementType *)pFVar50,0,(int *)&pFVar41[3].field_0x4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar39,(ForAnyElementType *)pFVar50,(int *)(pFVar41 + 3),
               (int *)&pFVar41[3].field_0x4);
    iVar19 = *(int *)&pFVar41[5].field_0x4;
    *(undefined4 *)(pFVar41 + 5) = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,0,(ForAnyElementType *)pFVar26,0,(int *)&pFVar41[5].field_0x4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar39,(ForAnyElementType *)pFVar26,(int *)(pFVar41 + 5),
               (int *)&pFVar41[5].field_0x4);
    iVar19 = *(int *)&pFVar41[7].field_0x4;
    *(undefined4 *)(pFVar41 + 7) = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,0,(ForAnyElementType *)pFVar1,0,(int *)&pFVar41[7].field_0x4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar39,(ForAnyElementType *)pFVar1,(int *)(pFVar41 + 7),
               (int *)&pFVar41[7].field_0x4);
  }
  local_630 = 8;
  if (EVar52 != None) {
    iVar19 = *(int *)&pFVar41[9].field_0x4;
    *(undefined4 *)(pFVar41 + 9) = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar46,0,(int *)&pFVar41[9].field_0x4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar39,(ForAnyElementType *)pFVar46,(int *)(pFVar41 + 9),
               (int *)&pFVar41[9].field_0x4);
    iVar19 = *(int *)&pFVar41[0xb].field_0x4;
    *(undefined4 *)(pFVar41 + 0xb) = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar2,0,(int *)&pFVar41[0xb].field_0x4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar39,(ForAnyElementType *)pFVar2,(int *)(pFVar41 + 0xb),
               (int *)&pFVar41[0xb].field_0x4);
    iVar19 = *(int *)&pFVar41[0xd].field_0x4;
    local_670 = pFVar41 + 0xd;
    *(undefined4 *)local_670 = 0;
    if (iVar19 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar42,0,(int *)&pFVar41[0xd].field_0x4);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar39,(ForAnyElementType *)pFVar42,(int *)local_670,
               (int *)&pFVar41[0xd].field_0x4);
  }
  dVar123 = _UNK_150689688;
  dVar102 = ___xmm_3ff00000000000003ff0000000000000;
  fVar34 = __real_3f7fff58;
  fVar150 = __real_3f800000;
  dVar122 = __real_3e45798ee0000000;
  fVar154 = __real_3727c5ac;
  dVar101 = __real_3ff0000000000000;
  pFVar51 = *(FBoneContainer **)&param_1->field_0x10;
  local_680 = pFVar51;
  local_648 = pFVar26;
  local_638 = pFVar2;
  local_428 = pFVar46;
  local_420 = param_1;
  local_418 = pFVar42;
  local_410 = param_2;
  local_408 = pFVar50;
  local_400 = param_1;
  local_3f8 = pFVar1;
  local_3f0 = param_2;
  local_3e8 = pFVar26;
  local_3e0 = pFVar50;
  local_3d8 = pFVar1;
  local_358 = pFVar2;
  local_350 = pFVar46;
  local_348 = pFVar42;
  if ((param_9 & RootSpaceRotation) == None) {
    if ((param_9 & MeshSpaceRotation) == None) {
LAB_1473e6e1b:
      if (EVar52 == None) {
        if (bAnim_BlendPosesPerBoneFilter_ISPC_Enabled == false) {
          uVar55 = *(uint *)&param_1->field_0x8;
          uVar62 = 0;
          if (uVar55 != 0) {
            lVar66 = 0;
            local_6b0 = 0;
            do {
              uVar67 = ~uVar62 >> 0x1f;
              uVar54 = 0;
              if ((int)uVar62 < param_8->ArrayNum) {
                uVar54 = uVar67;
              }
              if ((uVar54 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              uVar54 = param_8->DataPtr[local_6b0].SourceIndex;
              uVar38 = 0;
              if ((int)uVar62 < *(int *)&param_1->field_0x8) {
                uVar38 = uVar67;
              }
              if ((uVar38 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              lVar70 = *(longlong *)param_1;
              uVar53 = ~uVar54 >> 0x1f;
              uVar38 = 0;
              if ((int)uVar54 < param_2->ArrayNum) {
                uVar38 = uVar53;
              }
              if ((uVar38 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              pFVar51 = (FBoneContainer *)(longlong)(int)uVar54;
              local_688 = param_2->DataPtr;
              uVar38 = 0;
              if ((int)uVar62 < *(int *)&local_688[(longlong)pFVar51].field_0x8) {
                uVar38 = uVar67;
              }
              local_680 = pFVar51;
              if ((uVar38 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              local_488.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_488.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              pTVar47 = (TTransform<double> *)
                        (*(FScriptContainerElement **)(local_688 + (longlong)pFVar51) + lVar66);
              local_488.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_488.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              uVar38 = 0;
              if ((int)uVar62 < param_8->ArrayNum) {
                uVar38 = uVar67;
              }
              local_488.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_488.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_488.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_488.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_488.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_488.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_488.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_488.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              if ((uVar38 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              fVar149 = param_8->DataPtr[local_6b0].BlendWeight;
              if (fVar150 <= fVar149) {
                fVar149 = fVar150;
              }
              uVar38 = 0;
              if ((int)uVar54 < *(int *)(pFVar41 + 0xf)) {
                uVar38 = uVar53;
              }
              if (fVar149 <= 0.0) {
                fVar149 = 0.0;
              }
              if ((uVar38 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              fVar148 = *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)local_680 * 4);
              if (*(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)local_680 * 4) <=
                  fVar149) {
                fVar148 = fVar149;
              }
              uVar38 = 0;
              if ((int)uVar54 < *(int *)(pFVar41 + 0xf)) {
                uVar38 = uVar53;
              }
              if ((uVar38 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)local_680 * 4) = fVar148;
              if (fVar154 < fVar149) {
                if (fVar149 < fVar34) {
                  local_488.Rotation.XY.m128d_f64[0] = *(double *)(lVar66 + lVar70);
                  local_488.Rotation.XY.m128d_f64[1] = ((double *)(lVar66 + lVar70))[1];
                  pdVar59 = (double *)(lVar66 + 0x10 + lVar70);
                  local_488.Rotation.ZW.m128d_f64[0] = *pdVar59;
                  local_488.Rotation.ZW.m128d_f64[1] = pdVar59[1];
                  pdVar59 = (double *)(lVar66 + 0x20 + lVar70);
                  local_488.Translation.XY.m128d_f64[0] = *pdVar59;
                  local_488.Translation.XY.m128d_f64[1] = pdVar59[1];
                  pdVar59 = (double *)(lVar66 + 0x30 + lVar70);
                  local_488.Translation.ZW.m128d_f64[0] = *pdVar59;
                  local_488.Translation.ZW.m128d_f64[1] = pdVar59[1];
                  local_488.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar66 + 0x40 + lVar70);
                  local_488.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar66 + 0x50 + lVar70);
                  UE::Math::TTransform<double>::BlendWith(&local_488,pTVar47,fVar149);
                  uVar143 = local_488.Rotation.XY.m128d_f64[0]._0_4_;
                  uVar152 = local_488.Rotation.XY.m128d_f64[0]._4_4_;
                  uVar151 = local_488.Rotation.XY.m128d_f64[1]._0_4_;
                  uVar153 = local_488.Rotation.XY.m128d_f64[1]._4_4_;
                  uVar155 = local_488.Rotation.ZW.m128d_f64[0]._0_4_;
                  uVar156 = local_488.Rotation.ZW.m128d_f64[0]._4_4_;
                  uVar157 = local_488.Rotation.ZW.m128d_f64[1]._0_4_;
                  uVar158 = local_488.Rotation.ZW.m128d_f64[1]._4_4_;
                  uVar159 = local_488.Translation.XY.m128d_f64[0]._0_4_;
                  uVar160 = local_488.Translation.XY.m128d_f64[0]._4_4_;
                  uVar161 = local_488.Translation.XY.m128d_f64[1]._0_4_;
                  uVar162 = local_488.Translation.XY.m128d_f64[1]._4_4_;
                  uVar163 = local_488.Translation.ZW.m128d_f64[0]._0_4_;
                  uVar164 = local_488.Translation.ZW.m128d_f64[0]._4_4_;
                  uVar165 = local_488.Translation.ZW.m128d_f64[1]._0_4_;
                  uVar166 = local_488.Translation.ZW.m128d_f64[1]._4_4_;
                  uVar167 = local_488.Scale3D.XY.m128d_f64[0]._0_4_;
                  uVar168 = local_488.Scale3D.XY.m128d_f64[0]._4_4_;
                  uVar169 = local_488.Scale3D.XY.m128d_f64[1]._0_4_;
                  uVar170 = local_488.Scale3D.XY.m128d_f64[1]._4_4_;
                  dVar101 = local_488.Scale3D.ZW.m128d_f64[0];
                  dVar122 = local_488.Scale3D.ZW.m128d_f64[1];
                }
                else {
                  local_488.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
                  pdVar59 = (pTVar47->Rotation).XY.m128d_f64 + 1;
                  local_488.Rotation.XY.m128d_f64[1] = *pdVar59;
                  p_Var3 = &(pTVar47->Rotation).ZW;
                  local_488.Rotation.ZW.m128d_f64[0] = p_Var3->m128d_f64[0];
                  pdVar12 = (pTVar47->Rotation).ZW.m128d_f64 + 1;
                  local_488.Rotation.ZW.m128d_f64[1] = *pdVar12;
                  local_488.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
                  pdVar13 = (pTVar47->Translation).XY.m128d_f64 + 1;
                  local_488.Translation.XY.m128d_f64[1] = *pdVar13;
                  p_Var4 = &(pTVar47->Translation).ZW;
                  local_488.Translation.ZW.m128d_f64[0] = p_Var4->m128d_f64[0];
                  pdVar14 = (pTVar47->Translation).ZW.m128d_f64 + 1;
                  local_488.Translation.ZW.m128d_f64[1] = *pdVar14;
                  local_488.Scale3D.XY.m128d_f64 = *&(pTVar47->Scale3D).XY.m128d_f64;
                  p_Var5 = &(pTVar47->Scale3D).ZW;
                  local_488.Scale3D.ZW.m128d_f64 = *&p_Var5->m128d_f64;
                  uVar143 = *(undefined4 *)(pTVar47->Rotation).XY.m128d_f64;
                  uVar152 = *(undefined4 *)((longlong)(pTVar47->Rotation).XY.m128d_f64 + 4);
                  uVar151 = *(undefined4 *)pdVar59;
                  uVar153 = *(undefined4 *)((longlong)(pTVar47->Rotation).XY.m128d_f64 + 0xc);
                  uVar155 = *(undefined4 *)p_Var3->m128d_f64;
                  uVar156 = *(undefined4 *)((longlong)(pTVar47->Rotation).ZW.m128d_f64 + 4);
                  uVar157 = *(undefined4 *)pdVar12;
                  uVar158 = *(undefined4 *)((longlong)(pTVar47->Rotation).ZW.m128d_f64 + 0xc);
                  uVar159 = *(undefined4 *)(pTVar47->Translation).XY.m128d_f64;
                  uVar160 = *(undefined4 *)((longlong)(pTVar47->Translation).XY.m128d_f64 + 4);
                  uVar161 = *(undefined4 *)pdVar13;
                  uVar162 = *(undefined4 *)((longlong)(pTVar47->Translation).XY.m128d_f64 + 0xc);
                  uVar163 = *(undefined4 *)p_Var4->m128d_f64;
                  uVar164 = *(undefined4 *)((longlong)(pTVar47->Translation).ZW.m128d_f64 + 4);
                  uVar165 = *(undefined4 *)pdVar14;
                  uVar166 = *(undefined4 *)((longlong)(pTVar47->Translation).ZW.m128d_f64 + 0xc);
                  uVar167 = *(undefined4 *)(pTVar47->Scale3D).XY.m128d_f64;
                  uVar168 = *(undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + 4);
                  uVar169 = *(undefined4 *)((pTVar47->Scale3D).XY.m128d_f64 + 1);
                  uVar170 = *(undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + 0xc);
                  dVar101 = p_Var5->m128d_f64[0];
                  dVar122 = (pTVar47->Scale3D).ZW.m128d_f64[1];
                }
              }
              else {
                pdVar59 = (double *)(lVar66 + lVar70);
                local_488.Rotation.XY.m128d_f64[0] = *pdVar59;
                local_488.Rotation.XY.m128d_f64[1] = pdVar59[1];
                pdVar12 = (double *)(lVar66 + 0x10 + lVar70);
                local_488.Rotation.ZW.m128d_f64[0] = *pdVar12;
                local_488.Rotation.ZW.m128d_f64[1] = pdVar12[1];
                pdVar13 = (double *)(lVar66 + 0x20 + lVar70);
                local_488.Translation.XY.m128d_f64[0] = *pdVar13;
                local_488.Translation.XY.m128d_f64[1] = pdVar13[1];
                pdVar14 = (double *)(lVar66 + 0x30 + lVar70);
                local_488.Translation.ZW.m128d_f64[0] = *pdVar14;
                local_488.Translation.ZW.m128d_f64[1] = pdVar14[1];
                padVar58 = (double (*) [2])(lVar66 + 0x40 + lVar70);
                local_488.Scale3D.XY.m128d_f64 = *padVar58;
                padVar15 = (double (*) [2])(lVar66 + 0x50 + lVar70);
                local_488.Scale3D.ZW.m128d_f64 = *padVar15;
                uVar143 = *(undefined4 *)pdVar59;
                uVar152 = *(undefined4 *)((longlong)pdVar59 + 4);
                uVar151 = *(undefined4 *)(pdVar59 + 1);
                uVar153 = *(undefined4 *)((longlong)pdVar59 + 0xc);
                uVar155 = *(undefined4 *)pdVar12;
                uVar156 = *(undefined4 *)((longlong)pdVar12 + 4);
                uVar157 = *(undefined4 *)(pdVar12 + 1);
                uVar158 = *(undefined4 *)((longlong)pdVar12 + 0xc);
                uVar159 = *(undefined4 *)pdVar13;
                uVar160 = *(undefined4 *)((longlong)pdVar13 + 4);
                uVar161 = *(undefined4 *)(pdVar13 + 1);
                uVar162 = *(undefined4 *)((longlong)pdVar13 + 0xc);
                uVar163 = *(undefined4 *)pdVar14;
                uVar164 = *(undefined4 *)((longlong)pdVar14 + 4);
                uVar165 = *(undefined4 *)(pdVar14 + 1);
                uVar166 = *(undefined4 *)((longlong)pdVar14 + 0xc);
                uVar167 = *(undefined4 *)*padVar58;
                uVar168 = *(undefined4 *)((longlong)*padVar58 + 4);
                uVar169 = *(undefined4 *)(*padVar58 + 1);
                uVar170 = *(undefined4 *)((longlong)*padVar58 + 0xc);
                dVar101 = (*padVar15)[0];
                dVar122 = (*padVar15)[1];
              }
              uVar54 = 0;
              if ((int)uVar62 < *(int *)&this->field_0x8) {
                uVar54 = uVar67;
              }
              if ((uVar54 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              local_6b0 = local_6b0 + 1;
              uVar62 = uVar62 + 1;
              pTVar47 = ((ForElementType<UE::Math::TTransform<double>_> *)&this->field_0x0)->Data;
              puVar10 = (undefined4 *)((longlong)(pTVar47->Rotation).XY.m128d_f64 + lVar66);
              *puVar10 = uVar143;
              puVar10[1] = uVar152;
              puVar10[2] = uVar151;
              puVar10[3] = uVar153;
              puVar10 = (undefined4 *)((longlong)(pTVar47->Rotation).ZW.m128d_f64 + lVar66);
              *puVar10 = uVar155;
              puVar10[1] = uVar156;
              puVar10[2] = uVar157;
              puVar10[3] = uVar158;
              puVar10 = (undefined4 *)((longlong)(pTVar47->Translation).XY.m128d_f64 + lVar66);
              *puVar10 = uVar159;
              puVar10[1] = uVar160;
              puVar10[2] = uVar161;
              puVar10[3] = uVar162;
              puVar10 = (undefined4 *)((longlong)(pTVar47->Translation).ZW.m128d_f64 + lVar66);
              *puVar10 = uVar163;
              puVar10[1] = uVar164;
              puVar10[2] = uVar165;
              puVar10[3] = uVar166;
              puVar10 = (undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + lVar66);
              *puVar10 = uVar167;
              puVar10[1] = uVar168;
              puVar10[2] = uVar169;
              puVar10[3] = uVar170;
              pdVar59 = (double *)((longlong)(pTVar47->Scale3D).ZW.m128d_f64 + lVar66);
              *pdVar59 = dVar101;
              pdVar59[1] = dVar122;
              lVar66 = lVar66 + 0x60;
            } while (uVar62 != uVar55);
          }
        }
        else {
          FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                    ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,&local_150);
          uVar152 = *(undefined4 *)&param_1->field_0x8;
          pFVar8 = (pFVar51->CompactPoseParentBones).AllocatorInstance.Data;
          uVar16 = *(undefined8 *)param_1;
          FVar43.Data = *(FScriptContainerElement **)pFVar68;
          pTVar44 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                              ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,
                               local_100);
          ::BlendPosesPerBoneFilter
                    (pTVar44->DataPtr,uVar16,param_2,FVar43.Data,param_8->DataPtr,pFVar8,
                     CONCAT44(uVar143,uVar152));
        }
      }
      else if (bAnim_BlendPosesPerBoneFilter_ISPC_Enabled == false) {
        FVar20 = *(FCompactPoseBoneIndex *)&param_1->field_0x8;
        if (FVar20 != (FCompactPoseBoneIndex)0x0) {
          local_6a8 = 0;
          fVar154 = __real_3f800000;
          FVar60 = (FCompactPoseBoneIndex)0x0;
          do {
            uVar55 = 0;
            if ((int)FVar60 < param_8->ArrayNum) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            uVar55 = *(uint *)((longlong)&param_8->DataPtr->SourceIndex + local_6a8);
            lVar66 = (longlong)(int)uVar55;
            FBoneContainer::GetParentBoneIndex(local_680,&local_660);
            FVar61 = local_660;
            if (local_660 == (FCompactPoseBoneIndex)0xffffffff) {
              pTVar45 = &local_220;
              local_220._s_0.Z = dVar101;
              pTVar64 = &local_208;
              local_208._s_0.Z = dVar101;
              local_220._s_0.X = dVar102;
              local_220._s_0.Y = dVar123;
              local_208._s_0.X = dVar102;
              local_208._s_0.Y = dVar123;
            }
            else {
              uVar62 = 0;
              if ((int)local_660 < *(int *)(pFVar41 + 0xd)) {
                uVar62 = ~(uint)local_660 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar35 = local_660;
              pTVar45 = (TVector<double>_u_0 *)((longlong)*pFVar42 + (longlong)(int)FVar61 * 0x18);
              uVar62 = 0;
              if ((int)local_660 < *(int *)(pFVar41 + 9)) {
                uVar62 = ~(uint)local_660 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              pTVar64 = (TVector<double>_u_0 *)((longlong)pFVar41[8] + (longlong)(int)FVar35 * 0x18)
              ;
            }
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_2>::operator()
                      (&local_428,uVar55,FVar60,(TVector<double> *)&pTVar64->_s_0,
                       (TVector<double> *)&pTVar45->_s_0);
            uVar62 = 0;
            if ((int)FVar60 < *(int *)&param_1->field_0x8) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            lVar70 = *(longlong *)param_1;
            lVar74 = (longlong)(int)FVar60 * 0x60;
            uVar54 = ~uVar55 >> 0x1f;
            dVar122 = *(double *)(lVar74 + lVar70);
            dVar99 = ((double *)(lVar74 + lVar70))[1];
            pdVar59 = (double *)(lVar74 + 0x10 + lVar70);
            dVar100 = *pdVar59;
            dVar121 = pdVar59[1];
            pdVar59 = (double *)(lVar74 + 0x20 + lVar70);
            dVar141 = *pdVar59;
            dVar144 = pdVar59[1];
            pdVar59 = (double *)(lVar74 + 0x30 + lVar70);
            dVar147 = *pdVar59;
            dVar133 = pdVar59[1];
            pdVar59 = (double *)(lVar74 + 0x40 + lVar70);
            dVar142 = *pdVar59;
            dVar98 = pdVar59[1];
            padVar58 = (double (*) [2])(lVar74 + 0x50 + lVar70);
            adVar18 = *padVar58;
            adVar17 = *padVar58;
            uVar62 = 0;
            if ((int)uVar55 < param_2->ArrayNum) {
              uVar62 = uVar54;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pFVar26 = param_2->DataPtr;
            uVar62 = 0;
            if ((int)FVar60 < *(int *)&pFVar26[lVar66].field_0x8) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            lVar74 = (longlong)(int)FVar60 * 0x60;
            lVar70 = *(longlong *)(pFVar26 + lVar66);
            local_2c8.Rotation.XY.m128d_f64[0] = *(double *)(lVar74 + lVar70);
            local_2c8.Rotation.XY.m128d_f64[1] = ((double *)(lVar74 + lVar70))[1];
            pdVar59 = (double *)(lVar74 + 0x10 + lVar70);
            local_2c8.Rotation.ZW.m128d_f64[0] = *pdVar59;
            local_2c8.Rotation.ZW.m128d_f64[1] = pdVar59[1];
            pdVar59 = (double *)(lVar74 + 0x20 + lVar70);
            local_2c8.Translation.XY.m128d_f64[0] = *pdVar59;
            local_2c8.Translation.XY.m128d_f64[1] = pdVar59[1];
            pdVar59 = (double *)(lVar74 + 0x30 + lVar70);
            local_2c8.Translation.ZW.m128d_f64[0] = *pdVar59;
            local_2c8.Translation.ZW.m128d_f64[1] = pdVar59[1];
            pdVar59 = (double *)(lVar74 + 0x40 + lVar70);
            local_2c8.Scale3D.XY.m128d_f64[0] = *pdVar59;
            local_2c8.Scale3D.XY.m128d_f64[1] = pdVar59[1];
            local_2c8.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar74 + 0x50 + lVar70);
            uVar62 = 0;
            if ((int)FVar60 < param_8->ArrayNum) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            fVar150 = param_8->DataPtr[(int)FVar60].BlendWeight;
            if (fVar154 <= fVar150) {
              fVar150 = fVar154;
            }
            uVar62 = 0;
            if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
              uVar62 = uVar54;
            }
            if (fVar150 <= __real_00000000) {
              fVar150 = __real_00000000;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            fVar154 = *(float *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4);
            if (*(float *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4) <= fVar150) {
              fVar154 = fVar150;
            }
            uVar62 = 0;
            if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
              uVar62 = uVar54;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            fVar34 = __real_3727c5ac;
            *(float *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4) = fVar154;
            local_3c8.Rotation.XY.m128d_f64[0] = dVar122;
            local_3c8.Rotation.XY.m128d_f64[1] = dVar99;
            local_3c8.Rotation.ZW.m128d_f64[0] = dVar100;
            local_3c8.Rotation.ZW.m128d_f64[1] = dVar121;
            local_3c8.Translation.XY.m128d_f64[0] = dVar141;
            local_3c8.Translation.XY.m128d_f64[1] = dVar144;
            local_3c8.Translation.ZW.m128d_f64[0] = dVar147;
            local_3c8.Translation.ZW.m128d_f64[1] = dVar133;
            local_3c8.Scale3D.XY.m128d_f64[0] = dVar142;
            local_3c8.Scale3D.XY.m128d_f64[1] = dVar98;
            if (fVar34 < fVar150) {
              if (fVar150 < __real_3f7fff58) {
                local_3c8.Scale3D.ZW.m128d_f64 = adVar18;
                UE::Math::TTransform<double>::BlendWith(&local_3c8,&local_2c8,fVar150);
                `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_6>::operator()
                          (&local_358,FVar60,fVar150);
              }
              else {
                local_3c8.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
                local_3c8.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
                local_3c8.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
                local_3c8.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
                uVar55 = 0;
                if ((int)FVar60 < *(int *)(pFVar41 + 0xd)) {
                  uVar55 = ~(uint)FVar60 >> 0x1f;
                }
                local_3c8.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
                local_3c8.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
                local_3c8.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
                local_3c8.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
                local_3c8.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
                local_3c8.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
                local_3c8.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
                local_3c8.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
                if ((uVar55 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar28 = (code *)swi(3);
                  (*pcVar28)();
                  return;
                }
                puVar9 = (undefined8 *)((longlong)*pFVar42 + (longlong)(int)FVar60 * 0x18);
                uVar31 = *puVar9;
                uVar32 = puVar9[1];
                uVar16 = *(undefined8 *)((longlong)*pFVar42 + 0x10 + (longlong)(int)FVar60 * 0x18);
                uVar55 = 0;
                if ((int)FVar60 < *(int *)(pFVar41 + 0xb)) {
                  uVar55 = ~(uint)FVar60 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar28 = (code *)swi(3);
                  (*pcVar28)();
                  return;
                }
                FVar48 = pFVar41[10];
                puVar9 = (undefined8 *)((longlong)FVar48 + (longlong)(int)FVar60 * 0x18);
                *puVar9 = uVar31;
                puVar9[1] = uVar32;
                *(undefined8 *)((longlong)FVar48 + 0x10 + (longlong)(int)FVar60 * 0x18) = uVar16;
              }
            }
            else {
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 9)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              local_3c8.Scale3D.ZW.m128d_f64 = adVar17;
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              puVar9 = (undefined8 *)((longlong)pFVar41[8] + (longlong)(int)FVar60 * 0x18);
              uVar31 = *puVar9;
              uVar32 = puVar9[1];
              uVar16 = *(undefined8 *)((longlong)pFVar41[8] + 0x10 + (longlong)(int)FVar60 * 0x18);
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 0xb)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar48 = pFVar41[10];
              puVar9 = (undefined8 *)((longlong)FVar48 + (longlong)(int)FVar60 * 0x18);
              *puVar9 = uVar31;
              puVar9[1] = uVar32;
              *(undefined8 *)((longlong)FVar48 + 0x10 + (longlong)(int)FVar60 * 0x18) = uVar16;
            }
            if (local_660 != (FCompactPoseBoneIndex)0xffffffff) {
              `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_4>::operator()
                        (&local_638,&local_3c8,local_660,FVar60);
            }
            dVar98 = local_3c8.Scale3D.XY.m128d_f64[1];
            dVar142 = local_3c8.Scale3D.XY.m128d_f64[0];
            dVar133 = local_3c8.Translation.ZW.m128d_f64[1];
            dVar147 = local_3c8.Translation.ZW.m128d_f64[0];
            dVar144 = local_3c8.Translation.XY.m128d_f64[1];
            dVar141 = local_3c8.Translation.XY.m128d_f64[0];
            dVar121 = local_3c8.Rotation.ZW.m128d_f64[1];
            dVar100 = local_3c8.Rotation.ZW.m128d_f64[0];
            dVar99 = local_3c8.Rotation.XY.m128d_f64[1];
            dVar122 = local_3c8.Rotation.XY.m128d_f64[0];
            dVar120 = local_3c8.Scale3D.ZW.m128d_f64[0];
            dVar124 = local_3c8.Scale3D.ZW.m128d_f64[1];
            uVar55 = 0;
            if ((int)FVar60 < *(int *)&this->field_0x8) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pTVar47 = ((ForElementType<UE::Math::TTransform<double>_> *)&this->field_0x0)->Data;
            FVar61 = (FCompactPoseBoneIndex)((int)FVar60 + 1);
            local_6a8 = local_6a8 + 8;
            pTVar47[(int)FVar60].Rotation.XY.m128d_f64[0] = dVar122;
            pTVar47[(int)FVar60].Rotation.XY.m128d_f64[1] = dVar99;
            pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[0] = dVar100;
            pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[1] = dVar121;
            fVar154 = __real_3f800000;
            pTVar47[(int)FVar60].Translation.XY.m128d_f64[0] = dVar141;
            pTVar47[(int)FVar60].Translation.XY.m128d_f64[1] = dVar144;
            pTVar47[(int)FVar60].Translation.ZW.m128d_f64[0] = dVar147;
            pTVar47[(int)FVar60].Translation.ZW.m128d_f64[1] = dVar133;
            pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[0] = dVar142;
            pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[1] = dVar98;
            pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[0] = dVar120;
            pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[1] = dVar124;
            FVar60 = FVar61;
          } while (FVar61 != FVar20);
        }
      }
      else {
        FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,&local_170);
        uVar143 = *(undefined4 *)&param_1->field_0x8;
        FVar43.Data = *(FScriptContainerElement **)pFVar68;
        FVar48 = pFVar41[10];
        FVar21 = pFVar41[0xc];
        FVar22 = pFVar41[8];
        pFVar8 = (pFVar51->CompactPoseParentBones).AllocatorInstance.Data;
        uVar16 = *(undefined8 *)param_1;
        pTVar44 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                            ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,
                             &local_160);
        BlendPosesPerBoneFilterScale
                  (pTVar44->DataPtr,uVar16,param_2,FVar22,FVar21,FVar48,FVar43.Data,param_8->DataPtr
                   ,pFVar8,CONCAT44(uVar152,uVar143));
        pFVar68 = local_690;
      }
    }
    else if (EVar52 == None) {
      if ((param_9 & MeshSpaceRotation) == None) goto LAB_1473e6e1b;
      if (bAnim_BlendPosesPerBoneFilter_ISPC_Enabled == false) {
        FVar20 = *(FCompactPoseBoneIndex *)&param_1->field_0x8;
        if (FVar20 != (FCompactPoseBoneIndex)0x0) {
          local_6a8 = 0;
          FVar60 = (FCompactPoseBoneIndex)0x0;
          do {
            uVar55 = 0;
            if ((int)FVar60 < param_8->ArrayNum) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            uVar55 = *(uint *)((longlong)&param_8->DataPtr->SourceIndex + local_6a8);
            FBoneContainer::GetParentBoneIndex(local_680,&local_664);
            FVar61 = local_664;
            if (local_664 == (FCompactPoseBoneIndex)0xffffffff) {
              pTVar49 = &UE::Math::TQuat<double>::Identity;
              pTVar65 = &UE::Math::TQuat<double>::Identity;
            }
            else {
              uVar62 = 0;
              if ((int)local_664 < *(int *)(pFVar41 + 7)) {
                uVar62 = ~(uint)local_664 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar35 = local_664;
              pTVar49 = (TQuat<double> *)
                        (*(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar61 * 0x20);
              uVar62 = 0;
              if ((int)local_664 < *(int *)(pFVar50 + 1)) {
                uVar62 = ~(uint)local_664 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              pTVar65 = (TQuat<double> *)
                        (*(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar35 * 0x20);
            }
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_1>::operator()
                      (&local_408,uVar55,FVar60,pTVar65,pTVar49);
            uVar62 = 0;
            if ((int)FVar60 < *(int *)&param_1->field_0x8) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            uVar54 = ~uVar55 >> 0x1f;
            pdVar59 = (double *)((longlong)(int)FVar60 * 0x60 + *(longlong *)param_1);
            uVar62 = 0;
            if ((int)uVar55 < param_2->ArrayNum) {
              uVar62 = uVar54;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pFVar50 = (FTlsAutoCleanup *)(longlong)(int)uVar55;
            local_688 = param_2->DataPtr;
            uVar62 = 0;
            if ((int)FVar60 < *(int *)&local_688[(longlong)pFVar50].field_0x8) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            local_690 = pFVar50;
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            local_4e8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_4e8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            pTVar47 = (TTransform<double> *)
                      (*(FScriptContainerElement **)(local_688 + (longlong)pFVar50) +
                      (longlong)(int)FVar60 * 0x60);
            uVar62 = 0;
            if ((int)FVar60 < param_8->ArrayNum) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            local_4e8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_4e8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_4e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_4e8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_4e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_4e8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_4e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_4e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_4e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_4e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            fVar149 = param_8->DataPtr[(int)FVar60].BlendWeight;
            if (fVar150 <= fVar149) {
              fVar149 = fVar150;
            }
            uVar62 = 0;
            if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
              uVar62 = uVar54;
            }
            if (fVar149 <= 0.0) {
              fVar149 = 0.0;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            fVar148 = *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)(int)uVar55 * 4);
            if (*(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)(int)uVar55 * 4) <=
                fVar149) {
              fVar148 = fVar149;
            }
            uVar62 = 0;
            if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
              uVar62 = uVar54;
            }
            pFVar46 = (FTlsAutoCleanup *)(longlong)(int)uVar55;
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar46 = local_690, bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pFVar50 = local_658;
            *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)pFVar46 * 4) = fVar148;
            if (fVar154 < fVar149) {
              if (fVar149 < fVar34) {
                local_4e8.Rotation.XY.m128d_f64[0] = *pdVar59;
                local_4e8.Rotation.XY.m128d_f64[1] = pdVar59[1];
                local_4e8.Rotation.ZW.m128d_f64[0] = pdVar59[2];
                local_4e8.Rotation.ZW.m128d_f64[1] = pdVar59[3];
                local_4e8.Translation.XY.m128d_f64[0] = pdVar59[4];
                local_4e8.Translation.XY.m128d_f64[1] = pdVar59[5];
                local_4e8.Translation.ZW.m128d_f64[0] = pdVar59[6];
                local_4e8.Translation.ZW.m128d_f64[1] = pdVar59[7];
                local_4e8.Scale3D.XY.m128d_f64[0] = pdVar59[8];
                local_4e8.Scale3D.XY.m128d_f64[1] = pdVar59[9];
                local_4e8.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pdVar59 + 10);
                UE::Math::TTransform<double>::BlendWith(&local_4e8,pTVar47,fVar149);
                `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_5>::operator()
                          (&local_3e8,FVar60,fVar149);
                pFVar50 = local_658;
              }
              else {
                local_4e8.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
                local_4e8.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
                local_4e8.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
                local_4e8.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
                local_4e8.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
                local_4e8.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
                uVar55 = 0;
                if ((int)FVar60 < *(int *)(pFVar41 + 7)) {
                  uVar55 = ~(uint)FVar60 >> 0x1f;
                }
                local_4e8.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
                local_4e8.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
                local_4e8.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
                local_4e8.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
                local_4e8.Scale3D.ZW.m128d_f64 = *&(pTVar47->Scale3D).ZW.m128d_f64;
                if ((uVar55 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar28 = (code *)swi(3);
                  (*pcVar28)();
                  return;
                }
                pFVar8 = *(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar60 * 0x20;
                uVar16 = *(undefined8 *)pFVar8;
                uVar31 = *(undefined8 *)(pFVar8 + 8);
                pFVar8 = *(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar60 * 0x20 + 0x10;
                uVar32 = *(undefined8 *)pFVar8;
                uVar33 = *(undefined8 *)(pFVar8 + 8);
                uVar55 = 0;
                if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
                  uVar55 = ~(uint)FVar60 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar36)) {
                  pcVar28 = (code *)swi(3);
                  (*pcVar28)();
                  return;
                }
                FVar48 = pFVar41[4];
                puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
                *puVar9 = uVar16;
                puVar9[1] = uVar31;
                puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
                *puVar9 = uVar32;
                puVar9[1] = uVar33;
                pFVar50 = local_658;
              }
            }
            else {
              local_4e8.Rotation.XY.m128d_f64[0] = *pdVar59;
              local_4e8.Rotation.XY.m128d_f64[1] = pdVar59[1];
              local_4e8.Rotation.ZW.m128d_f64[0] = pdVar59[2];
              local_4e8.Rotation.ZW.m128d_f64[1] = pdVar59[3];
              local_4e8.Translation.XY.m128d_f64[0] = pdVar59[4];
              local_4e8.Translation.XY.m128d_f64[1] = pdVar59[5];
              local_4e8.Translation.ZW.m128d_f64[0] = pdVar59[6];
              local_4e8.Translation.ZW.m128d_f64[1] = pdVar59[7];
              local_4e8.Scale3D.XY.m128d_f64[0] = pdVar59[8];
              local_4e8.Scale3D.XY.m128d_f64[1] = pdVar59[9];
              local_4e8.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pdVar59 + 10);
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(local_658 + 1)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar43.Data = *(FScriptContainerElement **)pFVar50;
              pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20;
              uVar16 = *(undefined8 *)pFVar8;
              uVar31 = *(undefined8 *)(pFVar8 + 8);
              pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10;
              uVar32 = *(undefined8 *)pFVar8;
              uVar33 = *(undefined8 *)(pFVar8 + 8);
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar48 = pFVar41[4];
              puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
              *puVar9 = uVar16;
              puVar9[1] = uVar31;
              puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
              *puVar9 = uVar32;
              puVar9[1] = uVar33;
            }
            if (local_664 != (FCompactPoseBoneIndex)0xffffffff) {
              `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_3>::operator()
                        (&local_648,&local_4e8,local_664,FVar60);
            }
            dVar147 = local_4e8.Scale3D.XY.m128d_f64[1];
            dVar144 = local_4e8.Scale3D.XY.m128d_f64[0];
            dVar141 = local_4e8.Translation.ZW.m128d_f64[1];
            dVar121 = local_4e8.Translation.ZW.m128d_f64[0];
            dVar100 = local_4e8.Translation.XY.m128d_f64[1];
            dVar99 = local_4e8.Translation.XY.m128d_f64[0];
            dVar123 = local_4e8.Rotation.ZW.m128d_f64[1];
            dVar102 = local_4e8.Rotation.ZW.m128d_f64[0];
            dVar122 = local_4e8.Rotation.XY.m128d_f64[1];
            dVar101 = local_4e8.Rotation.XY.m128d_f64[0];
            dVar133 = local_4e8.Scale3D.ZW.m128d_f64[0];
            dVar142 = local_4e8.Scale3D.ZW.m128d_f64[1];
            uVar55 = 0;
            if ((int)FVar60 < *(int *)&this->field_0x8) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar61 = (FCompactPoseBoneIndex)((int)FVar60 + 1);
            local_6a8 = local_6a8 + 8;
            pTVar47 = ((ForElementType<UE::Math::TTransform<double>_> *)&this->field_0x0)->Data;
            pTVar47[(int)FVar60].Rotation.XY.m128d_f64[0] = dVar101;
            pTVar47[(int)FVar60].Rotation.XY.m128d_f64[1] = dVar122;
            pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[0] = dVar102;
            pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[1] = dVar123;
            pTVar47[(int)FVar60].Translation.XY.m128d_f64[0] = dVar99;
            pTVar47[(int)FVar60].Translation.XY.m128d_f64[1] = dVar100;
            pTVar47[(int)FVar60].Translation.ZW.m128d_f64[0] = dVar121;
            pTVar47[(int)FVar60].Translation.ZW.m128d_f64[1] = dVar141;
            pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[0] = dVar144;
            pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[1] = dVar147;
            pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[0] = dVar133;
            pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[1] = dVar142;
            FVar60 = FVar61;
          } while (FVar61 != FVar20);
        }
      }
      else {
        FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                  ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,&local_120);
        uVar143 = *(undefined4 *)&param_1->field_0x8;
        FVar43.Data = *(FScriptContainerElement **)pFVar68;
        FVar24.Data = *(FScriptContainerElement **)pFVar1;
        FVar48 = pFVar41[4];
        FVar21 = pFVar41[2];
        pFVar8 = (pFVar51->CompactPoseParentBones).AllocatorInstance.Data;
        uVar16 = *(undefined8 *)param_1;
        pTVar44 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                            ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,
                             &local_110);
        BlendPosesPerBoneFilterRotation
                  (pTVar44->DataPtr,uVar16,param_2,FVar21,FVar24.Data,FVar48,FVar43.Data,
                   param_8->DataPtr,pFVar8,CONCAT44(uVar152,uVar143));
        pFVar68 = local_690;
      }
    }
    else if (bAnim_BlendPosesPerBoneFilter_ISPC_Enabled == false) {
      FVar20 = *(FCompactPoseBoneIndex *)&param_1->field_0x8;
      if (FVar20 != (FCompactPoseBoneIndex)0x0) {
        local_658 = (FTlsAutoCleanup *)CONCAT44(local_658._4_4_,__real_3f800000);
        local_65c = 0.0;
        local_670 = (FTlsAutoCleanup *)0x0;
        FVar60 = (FCompactPoseBoneIndex)0x0;
        do {
          fVar149 = local_65c;
          pFVar46 = local_670;
          uVar55 = 0;
          if ((int)FVar60 < param_8->ArrayNum) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          uVar55 = *(uint *)(&pFVar46->field_0x0 + (longlong)param_8->DataPtr);
          FBoneContainer::GetParentBoneIndex(local_680,&local_698);
          FVar61 = local_698;
          if (local_698 == (FCompactPoseBoneIndex)0xffffffff) {
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_1>::operator()
                      (&local_408,uVar55,FVar60,&UE::Math::TQuat<double>::Identity,
                       &UE::Math::TQuat<double>::Identity);
            pTVar45 = &local_250;
            local_250._s_0.Z = dVar101;
            pTVar64 = &local_238;
            local_238._s_0.Z = dVar101;
            local_250._s_0.X = dVar102;
            local_250._s_0.Y = dVar123;
            local_238._s_0.X = dVar102;
            local_238._s_0.Y = dVar123;
          }
          else {
            uVar62 = 0;
            if ((int)local_698 < *(int *)(pFVar41 + 7)) {
              uVar62 = ~(uint)local_698 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar35 = local_698;
            FVar43.Data = *(FScriptContainerElement **)pFVar1;
            uVar62 = 0;
            if ((int)local_698 < *(int *)(pFVar41 + 3)) {
              uVar62 = ~(uint)local_698 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_1>::operator()
                      (&local_408,uVar55,FVar60,
                       (TQuat<double> *)
                       (*(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar35 * 0x20),
                       (TQuat<double> *)(FVar43.Data + (longlong)(int)FVar61 * 0x20));
            FVar61 = local_698;
            uVar62 = 0;
            if ((int)local_698 < *(int *)(pFVar41 + 0xd)) {
              uVar62 = ~(uint)local_698 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar35 = local_698;
            pTVar45 = (TVector<double>_u_0 *)((longlong)pFVar41[0xc] + (longlong)(int)FVar61 * 0x18)
            ;
            uVar62 = 0;
            if ((int)local_698 < *(int *)(pFVar41 + 9)) {
              uVar62 = ~(uint)local_698 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pTVar64 = (TVector<double>_u_0 *)((longlong)pFVar41[8] + (longlong)(int)FVar35 * 0x18);
          }
          `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_2>::operator()
                    (&local_428,uVar55,FVar60,(TVector<double> *)&pTVar64->_s_0,
                     (TVector<double> *)&pTVar45->_s_0);
          uVar62 = 0;
          if ((int)FVar60 < *(int *)&param_1->field_0x8) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          pdVar59 = (double *)((longlong)(int)FVar60 * 0x60 + *(longlong *)param_1);
          uVar54 = ~uVar55 >> 0x1f;
          uVar62 = 0;
          if ((int)uVar55 < param_2->ArrayNum) {
            uVar62 = uVar54;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          pFVar46 = (FTlsAutoCleanup *)(longlong)(int)uVar55;
          local_688 = param_2->DataPtr;
          uVar62 = 0;
          if ((int)FVar60 < *(int *)&local_688[(longlong)pFVar46].field_0x8) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          local_690 = pFVar46;
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          local_5a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_5a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          pTVar47 = (TTransform<double> *)
                    (*(FScriptContainerElement **)(local_688 + (longlong)pFVar46) +
                    (longlong)(int)FVar60 * 0x60);
          local_5a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_5a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_5a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_5a8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          uVar62 = 0;
          if ((int)FVar60 < param_8->ArrayNum) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          local_5a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_5a8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_5a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_5a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_5a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_5a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          fVar148 = param_8->DataPtr[(int)FVar60].BlendWeight;
          if (fVar150 <= fVar148) {
            fVar148 = fVar150;
          }
          uVar62 = 0;
          if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
            uVar62 = uVar54;
          }
          if (fVar148 <= fVar149) {
            fVar148 = fVar149;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          fVar150 = *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)(int)uVar55 * 4);
          if (*(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)(int)uVar55 * 4) <=
              fVar148) {
            fVar150 = fVar148;
          }
          uVar62 = 0;
          if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
            uVar62 = uVar54;
          }
          pFVar46 = (FTlsAutoCleanup *)(longlong)(int)uVar55;
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar46 = local_690, bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)pFVar46 * 4) = fVar150;
          if (fVar154 < fVar148) {
            if (fVar34 <= fVar148) {
              local_5a8.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
              local_5a8.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
              local_5a8.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
              local_5a8.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
              local_5a8.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
              local_5a8.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
              local_5a8.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
              local_5a8.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
              local_5a8.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
              local_5a8.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
              local_5a8.Scale3D.ZW.m128d_f64 = *&(pTVar47->Scale3D).ZW.m128d_f64;
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 7)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              pFVar8 = *(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar60 * 0x20;
              uVar16 = *(undefined8 *)pFVar8;
              uVar31 = *(undefined8 *)(pFVar8 + 8);
              pFVar8 = *(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar60 * 0x20 + 0x10;
              uVar32 = *(undefined8 *)pFVar8;
              uVar33 = *(undefined8 *)(pFVar8 + 8);
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar48 = pFVar41[4];
              puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
              *puVar9 = uVar16;
              puVar9[1] = uVar31;
              puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
              *puVar9 = uVar32;
              puVar9[1] = uVar33;
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 0xd)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar48 = *pFVar42;
              goto LAB_1473e63af;
            }
            local_5a8.Rotation.XY.m128d_f64[0] = *pdVar59;
            local_5a8.Rotation.XY.m128d_f64[1] = pdVar59[1];
            local_5a8.Rotation.ZW.m128d_f64[0] = pdVar59[2];
            local_5a8.Rotation.ZW.m128d_f64[1] = pdVar59[3];
            local_5a8.Translation.XY.m128d_f64[0] = pdVar59[4];
            local_5a8.Translation.XY.m128d_f64[1] = pdVar59[5];
            local_5a8.Translation.ZW.m128d_f64[0] = pdVar59[6];
            local_5a8.Translation.ZW.m128d_f64[1] = pdVar59[7];
            local_5a8.Scale3D.XY.m128d_f64[0] = pdVar59[8];
            local_5a8.Scale3D.XY.m128d_f64[1] = pdVar59[9];
            local_5a8.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pdVar59 + 10);
            UE::Math::TTransform<double>::BlendWith(&local_5a8,pTVar47,fVar148);
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_5>::operator()
                      (&local_3e8,FVar60,fVar148);
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_6>::operator()
                      (&local_358,FVar60,fVar148);
          }
          else {
            local_5a8.Rotation.XY.m128d_f64[0] = *pdVar59;
            local_5a8.Rotation.XY.m128d_f64[1] = pdVar59[1];
            local_5a8.Rotation.ZW.m128d_f64[0] = pdVar59[2];
            local_5a8.Rotation.ZW.m128d_f64[1] = pdVar59[3];
            local_5a8.Translation.XY.m128d_f64[0] = pdVar59[4];
            local_5a8.Translation.XY.m128d_f64[1] = pdVar59[5];
            local_5a8.Translation.ZW.m128d_f64[0] = pdVar59[6];
            local_5a8.Translation.ZW.m128d_f64[1] = pdVar59[7];
            local_5a8.Scale3D.XY.m128d_f64[0] = pdVar59[8];
            local_5a8.Scale3D.XY.m128d_f64[1] = pdVar59[9];
            local_5a8.Scale3D.ZW.m128d_f64 = *(double (*) [2])(pdVar59 + 10);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 3)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pFVar8 = *(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar60 * 0x20;
            uVar16 = *(undefined8 *)pFVar8;
            uVar31 = *(undefined8 *)(pFVar8 + 8);
            pFVar8 = *(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar60 * 0x20 + 0x10;
            uVar32 = *(undefined8 *)pFVar8;
            uVar33 = *(undefined8 *)(pFVar8 + 8);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar48 = pFVar41[4];
            puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
            *puVar9 = uVar16;
            puVar9[1] = uVar31;
            puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
            *puVar9 = uVar32;
            puVar9[1] = uVar33;
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 9)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar48 = pFVar41[8];
LAB_1473e63af:
            puVar9 = (undefined8 *)((longlong)FVar48 + (longlong)(int)FVar60 * 0x18);
            uVar31 = *puVar9;
            uVar32 = puVar9[1];
            uVar16 = *(undefined8 *)((longlong)FVar48 + 0x10 + (longlong)(int)FVar60 * 0x18);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 0xb)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar48 = pFVar41[10];
            puVar9 = (undefined8 *)((longlong)FVar48 + (longlong)(int)FVar60 * 0x18);
            *puVar9 = uVar31;
            puVar9[1] = uVar32;
            *(undefined8 *)((longlong)FVar48 + 0x10 + (longlong)(int)FVar60 * 0x18) = uVar16;
          }
          if (local_698 != (FCompactPoseBoneIndex)0xffffffff) {
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_3>::operator()
                      (&local_648,&local_5a8,local_698,FVar60);
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_4>::operator()
                      (&local_638,&local_5a8,local_698,FVar60);
          }
          dVar98 = local_5a8.Scale3D.XY.m128d_f64[1];
          dVar142 = local_5a8.Scale3D.XY.m128d_f64[0];
          dVar133 = local_5a8.Translation.ZW.m128d_f64[1];
          dVar147 = local_5a8.Translation.ZW.m128d_f64[0];
          dVar144 = local_5a8.Translation.XY.m128d_f64[1];
          dVar141 = local_5a8.Translation.XY.m128d_f64[0];
          dVar121 = local_5a8.Rotation.ZW.m128d_f64[1];
          dVar100 = local_5a8.Rotation.ZW.m128d_f64[0];
          dVar99 = local_5a8.Rotation.XY.m128d_f64[1];
          dVar122 = local_5a8.Rotation.XY.m128d_f64[0];
          dVar120 = local_5a8.Scale3D.ZW.m128d_f64[0];
          dVar124 = local_5a8.Scale3D.ZW.m128d_f64[1];
          uVar55 = 0;
          if ((int)FVar60 < *(int *)&this->field_0x8) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar61 = (FCompactPoseBoneIndex)((int)FVar60 + 1);
          local_670 = local_670 + 1;
          pTVar47 = ((ForElementType<UE::Math::TTransform<double>_> *)&this->field_0x0)->Data;
          pTVar47[(int)FVar60].Rotation.XY.m128d_f64[0] = dVar122;
          pTVar47[(int)FVar60].Rotation.XY.m128d_f64[1] = dVar99;
          pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[0] = dVar100;
          pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[1] = dVar121;
          pTVar47[(int)FVar60].Translation.XY.m128d_f64[0] = dVar141;
          pTVar47[(int)FVar60].Translation.XY.m128d_f64[1] = dVar144;
          pTVar47[(int)FVar60].Translation.ZW.m128d_f64[0] = dVar147;
          pTVar47[(int)FVar60].Translation.ZW.m128d_f64[1] = dVar133;
          pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[0] = dVar142;
          pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[1] = dVar98;
          pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[0] = dVar120;
          pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[1] = dVar124;
          fVar150 = (float)local_658;
          FVar60 = FVar61;
        } while (FVar61 != FVar20);
      }
    }
    else {
      FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,&local_140);
      uVar143 = *(undefined4 *)&param_1->field_0x8;
      FVar43.Data = *(FScriptContainerElement **)pFVar68;
      pFVar8 = (pFVar51->CompactPoseParentBones).AllocatorInstance.Data;
      FVar48 = pFVar41[8];
      FVar21 = pFVar41[10];
      FVar22 = pFVar41[4];
      FVar23 = pFVar41[0xc];
      FVar24.Data = *(FScriptContainerElement **)pFVar1;
      FVar25 = pFVar41[2];
      local_688 = *(FCompactPose **)param_1;
      pTVar44 = FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::GetMutableBones
                          ((FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)this,
                           &local_130);
      BlendPosesPerBoneFilterScaleRotation
                (pTVar44->DataPtr,local_688,param_2,FVar25,FVar48,FVar24.Data,FVar23,FVar22,FVar21,
                 FVar43.Data,param_8->DataPtr,pFVar8,uVar143);
      pFVar68 = local_690;
    }
  }
  else {
    FVar20 = *(FCompactPoseBoneIndex *)&param_1->field_0x8;
    if (EVar52 == None) {
      if (FVar20 != (FCompactPoseBoneIndex)0x0) {
        local_678 = (TQuat<double> *)0x0;
        FVar60 = (FCompactPoseBoneIndex)0x0;
        dVar101 = __real_3e45798ee0000000;
        do {
          pTVar49 = local_678;
          uVar55 = 0;
          if ((int)FVar60 < param_8->ArrayNum) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          uVar55 = *(uint *)((longlong)pTVar49 + (longlong)param_8->DataPtr);
          FBoneContainer::GetParentBoneIndex(local_680,&local_668);
          FVar61 = local_668;
          dVar99 = UE::Math::TQuat<double>::Identity.W;
          dVar123 = UE::Math::TQuat<double>::Identity.Z;
          dVar102 = UE::Math::TQuat<double>::Identity.Y;
          dVar122 = UE::Math::TQuat<double>::Identity.X;
          if (local_668 == (FCompactPoseBoneIndex)0xffffffff) {
            uVar62 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 3)) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar43.Data = *(FScriptContainerElement **)pFVar50;
            pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20;
            *(double *)pFVar8 = dVar122;
            *(double *)(pFVar8 + 8) = dVar102;
            pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10;
            *(double *)pFVar8 = dVar123;
            *(double *)(pFVar8 + 8) = dVar99;
            dVar99 = UE::Math::TQuat<double>::Identity.W;
            dVar123 = UE::Math::TQuat<double>::Identity.Z;
            dVar102 = UE::Math::TQuat<double>::Identity.Y;
            dVar122 = UE::Math::TQuat<double>::Identity.X;
            uVar62 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 7)) {
              uVar62 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar43.Data = *(FScriptContainerElement **)pFVar1;
            pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20;
            *(double *)pFVar8 = dVar122;
            *(double *)(pFVar8 + 8) = dVar102;
            pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10;
            *(double *)pFVar8 = dVar123;
            *(double *)(pFVar8 + 8) = dVar99;
          }
          else {
            uVar62 = 0;
            if ((int)local_668 < *(int *)(pFVar41 + 7)) {
              uVar62 = ~(uint)local_668 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar35 = local_668;
            FVar43.Data = *(FScriptContainerElement **)pFVar1;
            uVar62 = 0;
            if ((int)local_668 < *(int *)(pFVar41 + 3)) {
              uVar62 = ~(uint)local_668 >> 0x1f;
            }
            if ((uVar62 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_1>::operator()
                      (&local_408,uVar55,FVar60,
                       (TQuat<double> *)
                       (*(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar35 * 0x20),
                       (TQuat<double> *)(FVar43.Data + (longlong)(int)FVar61 * 0x20));
          }
          uVar62 = 0;
          if ((int)FVar60 < *(int *)&param_1->field_0x8) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          pauVar63 = (undefined1 (*) [16])((longlong)(int)FVar60 * 0x60 + *(longlong *)param_1);
          uVar54 = ~uVar55 >> 0x1f;
          uVar62 = 0;
          if ((int)uVar55 < param_2->ArrayNum) {
            uVar62 = uVar54;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          lVar66 = (longlong)(int)uVar55;
          local_688 = param_2->DataPtr;
          uVar62 = 0;
          if ((int)FVar60 < *(int *)&local_688[lVar66].field_0x8) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          lVar70 = (longlong)(int)FVar60;
          local_548._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_548._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_670 = *(FTlsAutoCleanup **)(local_688 + lVar66);
          local_528 = (FTlsAutoCleanup)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
          FStack_520 = (FTlsAutoCleanup)(double)GlobalVectorConstants::FloatZero.m128_f32[1];
          uVar62 = 0;
          if ((int)FVar60 < param_8->ArrayNum) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          local_538._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_538._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_508 = (FTlsAutoCleanup)(double)GlobalVectorConstants::Float1110.m128_f32[0];
          FStack_500 = (FTlsAutoCleanup)(double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_518._8_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_518._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_4f8._8_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_4f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          fVar149 = param_8->DataPtr[(int)FVar60].BlendWeight;
          if (fVar150 <= fVar149) {
            fVar149 = fVar150;
          }
          uVar62 = 0;
          if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
            uVar62 = uVar54;
          }
          if (fVar149 <= 0.0) {
            fVar149 = 0.0;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          fVar148 = *(float *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4);
          if (*(float *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4) <= fVar149) {
            fVar148 = fVar149;
          }
          uVar62 = 0;
          if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
            uVar62 = uVar54;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          *(float *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4) = fVar148;
          if (fVar154 < fVar149) {
            if (fVar34 <= fVar149) {
              local_548 = *(undefined1 (*) [16])(local_670 + lVar70 * 0xc);
              local_538 = *(undefined1 (*) [16])(local_670 + lVar70 * 0xc + 2);
              local_528 = local_670[lVar70 * 0xc + 4];
              FStack_520 = (local_670 + lVar70 * 0xc + 4)[1];
              local_518 = *(undefined1 (*) [16])(local_670 + lVar70 * 0xc + 6);
              local_508 = local_670[lVar70 * 0xc + 8];
              FStack_500 = (local_670 + lVar70 * 0xc + 8)[1];
              local_4f8 = *(undefined1 (*) [16])(local_670 + lVar70 * 0xc + 10);
              uVar55 = 0;
              if ((int)FVar60 < *(int *)(pFVar41 + 7)) {
                uVar55 = ~(uint)FVar60 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar28 = (code *)swi(3);
                (*pcVar28)();
                return;
              }
              FVar43.Data = *(FScriptContainerElement **)pFVar1;
              goto LAB_1473e54ce;
            }
            auVar126 = *pauVar63;
            auVar137 = pauVar63[1];
            dVar123 = (double)fVar149;
            dVar99 = (double)fVar149;
            uVar151 = (undefined4)((ulonglong)dVar99 >> 0x20);
            dVar100 = (double)fVar149;
            dVar121 = (double)fVar149;
            dVar133 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar123;
            dVar142 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar99;
            dVar122 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar100;
            dVar102 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar121;
            uVar152 = (undefined4)((ulonglong)dVar102 >> 0x20);
            auVar86._8_4_ = SUB84(dVar142,0);
            auVar86._0_8_ = dVar133;
            uVar143 = (undefined4)((ulonglong)dVar142 >> 0x20);
            auVar86._12_4_ = uVar143;
            auVar111._8_4_ = SUB84(dVar99,0);
            auVar111._0_8_ = dVar123;
            auVar111._12_4_ = uVar151;
            local_528 = (FTlsAutoCleanup)
                        (dVar123 * (double)local_670[lVar70 * 0xc + 4] +
                        dVar133 * *(double *)pauVar63[2]);
            FStack_520 = (FTlsAutoCleanup)
                         (auVar111._8_8_ * (double)(local_670 + lVar70 * 0xc + 4)[1] +
                         auVar86._8_8_ * *(double *)(pauVar63[2] + 8));
            auVar87._8_4_ = SUB84(dVar102,0);
            auVar87._0_8_ = dVar122;
            auVar87._12_4_ = uVar152;
            auVar112._8_4_ = SUB84(dVar99,0);
            auVar112._0_8_ = dVar123;
            auVar112._12_4_ = uVar151;
            dVar101 = dVar121 * (double)(local_670 + lVar70 * 0xc + 6)[1] +
                      auVar87._8_8_ * *(double *)(pauVar63[3] + 8);
            auVar88._8_4_ = SUB84(dVar142,0);
            auVar88._0_8_ = dVar133;
            auVar88._12_4_ = uVar143;
            local_518._8_4_ = SUB84(dVar101,0);
            local_518._0_8_ =
                 dVar100 * (double)local_670[lVar70 * 0xc + 6] + dVar122 * *(double *)pauVar63[3];
            local_518._12_4_ = (int)((ulonglong)dVar101 >> 0x20);
            local_508 = (FTlsAutoCleanup)
                        (dVar123 * (double)local_670[lVar70 * 0xc + 8] +
                        dVar133 * *(double *)pauVar63[4]);
            FStack_500 = (FTlsAutoCleanup)
                         (auVar112._8_8_ * (double)(local_670 + lVar70 * 0xc + 8)[1] +
                         auVar88._8_8_ * *(double *)(pauVar63[4] + 8));
            dVar144 = 0.0 - auVar137._0_8_;
            dVar147 = 0.0 - auVar137._8_8_;
            auVar89._8_4_ = SUB84(dVar102,0);
            auVar89._0_8_ = dVar122;
            auVar89._12_4_ = uVar152;
            dVar101 = dVar121 * (double)(local_670 + lVar70 * 0xc + 10)[1] +
                      auVar89._8_8_ * *(double *)(pauVar63[5] + 8);
            local_4f8._8_4_ = SUB84(dVar101,0);
            local_4f8._0_8_ =
                 dVar100 * (double)local_670[lVar70 * 0xc + 10] + dVar122 * *(double *)pauVar63[5];
            local_4f8._12_4_ = (int)((ulonglong)dVar101 >> 0x20);
            dVar101 = auVar137._0_8_ * (double)local_670[lVar70 * 0xc + 2] +
                      auVar126._0_8_ * (double)local_670[lVar70 * 0xc];
            dVar141 = auVar137._8_8_ * (double)(local_670 + lVar70 * 0xc + 2)[1] +
                      auVar126._8_8_ * (double)(local_670 + lVar70 * 0xc)[1];
            auVar90._8_4_ = SUB84(dVar141,0);
            auVar90._0_8_ = dVar101;
            auVar90._12_4_ = (int)((ulonglong)dVar141 >> 0x20);
            lVar66 = -(ulonglong)(0.0 <= auVar90._8_8_ + dVar101);
            lVar74 = -(ulonglong)(0.0 <= dVar101 + dVar141);
            uVar55 = (uint)lVar66;
            uVar62 = (uint)((ulonglong)lVar66 >> 0x20);
            uVar54 = (uint)lVar74;
            uVar67 = (uint)((ulonglong)lVar74 >> 0x20);
            dVar101 = 0.0 - auVar126._0_8_;
            dVar141 = 0.0 - auVar126._8_8_;
            auVar146._0_4_ = ~uVar55 & SUB84(dVar101,0);
            auVar146._4_4_ = ~uVar62 & (uint)((ulonglong)dVar101 >> 0x20);
            auVar146._8_4_ = ~uVar54 & SUB84(dVar141,0);
            auVar146._12_4_ = ~uVar67 & (uint)((ulonglong)dVar141 >> 0x20);
            auVar113._0_4_ = uVar55 & auVar126._0_4_;
            auVar113._4_4_ = uVar62 & auVar126._4_4_;
            auVar113._8_4_ = uVar54 & auVar126._8_4_;
            auVar113._12_4_ = uVar67 & auVar126._12_4_;
            auVar138._0_4_ = ~uVar55 & SUB84(dVar144,0);
            auVar138._4_4_ = ~uVar62 & (uint)((ulonglong)dVar144 >> 0x20);
            auVar138._8_4_ = ~uVar54 & SUB84(dVar147,0);
            auVar138._12_4_ = ~uVar67 & (uint)((ulonglong)dVar147 >> 0x20);
            dVar141 = SUB168(auVar146 | auVar113,0) * dVar133 +
                      dVar123 * (double)local_670[lVar70 * 0xc];
            dVar99 = SUB168(auVar146 | auVar113,8) * dVar142 +
                     dVar99 * (double)(local_670 + lVar70 * 0xc)[1];
            auVar126._4_4_ = uVar62 & auVar137._4_4_;
            auVar126._0_4_ = uVar55 & auVar137._0_4_;
            auVar126._8_4_ = uVar54 & auVar137._8_4_;
            auVar126._12_4_ = uVar67 & auVar137._12_4_;
            auVar137._8_4_ = SUB84(dVar99,0);
            auVar137._0_8_ = dVar141;
            auVar137._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
            dVar123 = SUB168(auVar138 | auVar126,0) * dVar122 +
                      dVar100 * (double)local_670[lVar70 * 0xc + 2];
            dVar102 = SUB168(auVar138 | auVar126,8) * dVar102 +
                      dVar121 * (double)(local_670 + lVar70 * 0xc + 2)[1];
            auVar114._8_4_ = SUB84(dVar102,0);
            auVar114._0_8_ = dVar123;
            auVar114._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
            dVar101 = dVar123 * dVar123 + dVar141 * dVar141;
            dVar122 = auVar114._8_8_ * dVar102 + auVar137._8_8_ * dVar99;
            auVar91._8_4_ = SUB84(dVar122,0);
            auVar91._0_8_ = dVar101;
            auVar91._12_4_ = (int)((ulonglong)dVar122 >> 0x20);
            auVar92._0_8_ = auVar91._8_8_ + dVar101;
            auVar92._8_8_ = dVar101 + dVar122;
            uVar69 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar92._0_8_);
            uVar71 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar92._8_8_);
            uVar73 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar92._0_8_);
            uVar72 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar92._8_8_);
            auVar126 = sqrtpd(auVar92,auVar92);
            auVar137 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                             auVar126);
            auVar126 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                             auVar126);
            auVar172._0_8_ = uVar69 & (ulonglong)(auVar137._0_8_ * dVar141);
            uVar30 = uVar71 & (ulonglong)(auVar137._8_8_ * dVar99);
            auVar172._8_4_ = (undefined4)uVar30;
            auVar172._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar115._0_4_ = ~(uint)uVar69 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_
            ;
            auVar115._4_4_ =
                 ~(uint)(uVar69 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar115._8_4_ = ~(uint)uVar71 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_
            ;
            auVar115._12_4_ =
                 ~(uint)(uVar71 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            local_548 = auVar172 | auVar115;
            auVar174._0_8_ = uVar73 & (ulonglong)(auVar126._0_8_ * dVar123);
            uVar30 = uVar72 & (ulonglong)(auVar126._8_8_ * dVar102);
            auVar174._8_4_ = (undefined4)uVar30;
            auVar174._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar129._0_4_ = ~(uint)uVar73 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_
            ;
            auVar129._4_4_ =
                 ~(uint)(uVar73 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar129._8_4_ = ~(uint)uVar72 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_
            ;
            auVar129._12_4_ =
                 ~(uint)(uVar72 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            local_538 = auVar174 | auVar129;
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_5>::operator()
                      (&local_3e8,FVar60,fVar149);
            dVar101 = __real_3e45798ee0000000;
          }
          else {
            local_548 = *pauVar63;
            local_538 = pauVar63[1];
            local_528 = *(FTlsAutoCleanup *)pauVar63[2];
            FStack_520 = *(FTlsAutoCleanup *)(pauVar63[2] + 8);
            local_518 = pauVar63[3];
            local_508 = *(FTlsAutoCleanup *)pauVar63[4];
            FStack_500 = *(FTlsAutoCleanup *)(pauVar63[4] + 8);
            local_4f8 = pauVar63[5];
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 3)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar43.Data = *(FScriptContainerElement **)pFVar50;
LAB_1473e54ce:
            uVar16 = *(undefined8 *)(FVar43.Data + (longlong)(int)FVar60 * 0x20);
            uVar31 = *(undefined8 *)(FVar43.Data + (longlong)(int)FVar60 * 0x20 + 8);
            uVar32 = *(undefined8 *)(FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10);
            uVar33 = *(undefined8 *)(FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10 + 8);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar48 = pFVar41[4];
            puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
            *puVar9 = uVar16;
            puVar9[1] = uVar31;
            puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
            *puVar9 = uVar32;
            puVar9[1] = uVar33;
          }
          pFVar26 = local_648;
          FVar61 = local_668;
          if (local_668 != (FCompactPoseBoneIndex)0xffffffff) {
            uVar55 = 0;
            if ((int)local_668 < *(int *)&local_648->field_0x8) {
              uVar55 = ~(uint)local_668 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pFVar57 = local_648;
            pFVar8 = *(FScriptContainerElement **)pFVar26 + (longlong)(int)FVar61 * 0x20;
            pFVar11 = *(FScriptContainerElement **)pFVar26 + (longlong)(int)FVar61 * 0x20 + 0x10;
            dVar122 = *(double *)pFVar8 *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar102 = *(double *)(pFVar8 + 8) *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            uVar55 = 0;
            if ((int)FVar60 < *(int *)&local_648->field_0x8) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            dVar123 = *(double *)pFVar11 *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar99 = *(double *)(pFVar11 + 8) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            uVar143 = (undefined4)((ulonglong)dVar99 >> 0x20);
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            auVar139._8_4_ = SUB84(dVar99,0);
            auVar139._0_8_ = dVar123;
            auVar139._12_4_ = uVar143;
            dVar100 = auVar139._8_8_;
            auVar93._8_4_ = SUB84(dVar99,0);
            auVar93._0_8_ = dVar100;
            auVar93._12_4_ = uVar143;
            auVar116._8_4_ = SUB84(dVar102,0);
            auVar116._0_8_ = dVar102;
            auVar116._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
            pFVar8 = *(FScriptContainerElement **)pFVar57 + (longlong)(int)FVar60 * 0x20 + 0x10;
            dVar147 = *(double *)pFVar8;
            dVar144 = *(double *)(pFVar8 + 8);
            auVar126 = *(undefined1 (*) [16])
                        (*(FScriptContainerElement **)pFVar57 + (longlong)(int)FVar60 * 0x20);
            dVar121 = auVar126._0_8_;
            dVar141 = auVar126._8_8_;
            auVar140._0_8_ = dVar100 * dVar147;
            auVar140._8_8_ = dVar99 * dVar144;
            auVar94._8_4_ = auVar126._0_4_;
            auVar94._0_8_ = dVar141;
            auVar94._12_4_ = auVar126._4_4_;
            dVar99 = dVar144 * dVar122 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar100 * dVar121 +
                     dVar102 * dVar147 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar141 * dVar123 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar100 = dVar147 * dVar122 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                      auVar93._8_8_ * dVar141 +
                      auVar116._8_8_ * dVar144 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                      auVar94._8_8_ * dVar123 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            auVar95._8_4_ = SUB84(dVar100,0);
            auVar95._0_8_ = dVar99;
            auVar95._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
            dVar144 = dVar141 * dVar122 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                      auVar140._0_8_ +
                      dVar102 * dVar121 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                      dVar144 * dVar123 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar122 = dVar121 * dVar122 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      auVar140._8_8_ +
                      dVar102 * dVar141 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar147 * dVar123 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar117._8_4_ = SUB84(dVar122,0);
            auVar117._0_8_ = dVar144;
            auVar117._12_4_ = (int)((ulonglong)dVar122 >> 0x20);
            dVar102 = dVar144 * dVar144 + dVar99 * dVar99;
            dVar123 = auVar117._8_8_ * dVar122 + auVar95._8_8_ * dVar100;
            auVar96._8_4_ = SUB84(dVar123,0);
            auVar96._0_8_ = dVar102;
            auVar96._12_4_ = (int)((ulonglong)dVar123 >> 0x20);
            auVar97._0_8_ = auVar96._8_8_ + dVar102;
            auVar97._8_8_ = dVar102 + dVar123;
            auVar137 = sqrtpd(auVar140,auVar97);
            uVar69 = -(ulonglong)(dVar101 <= auVar97._0_8_);
            uVar73 = -(ulonglong)(dVar101 <= auVar97._8_8_);
            auVar126 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                             auVar137);
            uVar55 = (uint)(uVar69 >> 0x20);
            uVar62 = (uint)(uVar73 >> 0x20);
            auVar118._0_4_ =
                 ~(uint)uVar69 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar118._4_4_ =
                 ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar118._8_4_ =
                 ~(uint)uVar73 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar118._12_4_ =
                 ~uVar62 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar130._0_8_ = uVar69 & (ulonglong)(auVar126._0_8_ * dVar99);
            uVar30 = uVar73 & (ulonglong)(auVar126._8_8_ * dVar100);
            auVar130._8_4_ = (undefined4)uVar30;
            auVar130._12_4_ = (undefined4)(uVar30 >> 0x20);
            local_548 = auVar130 | auVar118;
            auVar126 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                             auVar137);
            auVar119._0_8_ = (ulonglong)(auVar126._0_8_ * dVar144) & uVar69;
            uVar30 = (ulonglong)(auVar126._8_8_ * dVar122) & uVar73;
            auVar119._8_4_ = (undefined4)uVar30;
            auVar119._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar131._0_4_ =
                 ~(uint)uVar69 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar131._4_4_ =
                 ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar131._8_4_ =
                 ~(uint)uVar73 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar131._12_4_ =
                 ~uVar62 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            local_538 = auVar131 | auVar119;
            local_1a8 = dVar101;
          }
          uVar55 = 0;
          if ((int)FVar60 < *(int *)&this->field_0x8) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar61 = (FCompactPoseBoneIndex)((int)FVar60 + 1);
          local_678 = (TQuat<double> *)((longlong)local_678 + 8);
          pTVar47 = ((ForElementType<UE::Math::TTransform<double>_> *)&this->field_0x0)->Data;
          pTVar47[(int)FVar60].Rotation.XY.m128d_f64[0] = (double)local_548._0_8_;
          pTVar47[(int)FVar60].Rotation.XY.m128d_f64[1] = (double)local_548._8_8_;
          pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[0] = (double)local_538._0_8_;
          pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[1] = (double)local_538._8_8_;
          pTVar47[(int)FVar60].Translation.XY.m128d_f64[0] = (double)local_528;
          *(FTlsAutoCleanup *)(pTVar47[(int)FVar60].Translation.XY.m128d_f64 + 1) = FStack_520;
          pTVar47[(int)FVar60].Translation.ZW.m128d_f64[0] = (double)local_518._0_8_;
          pTVar47[(int)FVar60].Translation.ZW.m128d_f64[1] = (double)local_518._8_8_;
          pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[0] = (double)local_508;
          *(FTlsAutoCleanup *)(pTVar47[(int)FVar60].Scale3D.XY.m128d_f64 + 1) = FStack_500;
          *(undefined1 (*) [16])pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64 = local_4f8;
          FVar60 = FVar61;
        } while (FVar61 != FVar20);
      }
    }
    else if (FVar20 != (FCompactPoseBoneIndex)0x0) {
      local_65c = __real_3f800000;
      local_658 = (FTlsAutoCleanup *)((ulonglong)local_658._4_4_ << 0x20);
      local_670 = (FTlsAutoCleanup *)0x0;
      fVar150 = 0.0;
      FVar60 = (FCompactPoseBoneIndex)0x0;
      do {
        fVar149 = local_65c;
        pFVar46 = local_670;
        uVar55 = 0;
        if ((int)FVar60 < param_8->ArrayNum) {
          uVar55 = ~(uint)FVar60 >> 0x1f;
        }
        if ((uVar55 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        uVar55 = *(uint *)(&pFVar46->field_0x0 + (longlong)param_8->DataPtr);
        FBoneContainer::GetParentBoneIndex(local_680,&local_694);
        FVar61 = local_694;
        if (local_694 == (FCompactPoseBoneIndex)0xffffffff) {
          local_188._s_0.Z = dVar101;
          local_268._s_0.Z = dVar101;
          local_188._s_0.X = dVar102;
          local_188._s_0.Y = dVar123;
          local_268._s_0.X = dVar102;
          local_268._s_0.Y = dVar123;
          `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_2>::operator()
                    (&local_428,uVar55,FVar60,(TVector<double> *)&local_268._s_0,
                     (TVector<double> *)&local_188._s_0);
          dVar141 = UE::Math::TQuat<double>::Identity.W;
          dVar121 = UE::Math::TQuat<double>::Identity.Z;
          dVar100 = UE::Math::TQuat<double>::Identity.Y;
          dVar99 = UE::Math::TQuat<double>::Identity.X;
          uVar62 = 0;
          if ((int)FVar60 < *(int *)(pFVar41 + 3)) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar43.Data = *(FScriptContainerElement **)pFVar50;
          pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20;
          *(double *)pFVar8 = dVar99;
          *(double *)(pFVar8 + 8) = dVar100;
          pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10;
          *(double *)pFVar8 = dVar121;
          *(double *)(pFVar8 + 8) = dVar141;
          dVar141 = UE::Math::TQuat<double>::Identity.W;
          dVar121 = UE::Math::TQuat<double>::Identity.Z;
          dVar100 = UE::Math::TQuat<double>::Identity.Y;
          dVar99 = UE::Math::TQuat<double>::Identity.X;
          uVar62 = 0;
          if ((int)FVar60 < *(int *)(pFVar41 + 7)) {
            uVar62 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar43.Data = *(FScriptContainerElement **)pFVar1;
          pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20;
          *(double *)pFVar8 = dVar99;
          *(double *)(pFVar8 + 8) = dVar100;
          pFVar8 = FVar43.Data + (longlong)(int)FVar60 * 0x20 + 0x10;
          *(double *)pFVar8 = dVar121;
          *(double *)(pFVar8 + 8) = dVar141;
        }
        else {
          uVar62 = 0;
          if ((int)local_694 < *(int *)(pFVar41 + 7)) {
            uVar62 = ~(uint)local_694 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar35 = local_694;
          local_678 = (TQuat<double> *)
                      (*(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar61 * 0x20);
          uVar62 = 0;
          if ((int)local_694 < *(int *)(pFVar41 + 3)) {
            uVar62 = ~(uint)local_694 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_1>::operator()
                    (&local_408,uVar55,FVar60,
                     (TQuat<double> *)
                     (*(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar35 * 0x20),local_678
                    );
          FVar61 = local_694;
          uVar62 = 0;
          if ((int)local_694 < *(int *)(pFVar41 + 0xd)) {
            uVar62 = ~(uint)local_694 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar35 = local_694;
          local_678 = (TQuat<double> *)((longlong)pFVar41[0xc] + (longlong)(int)FVar61 * 0x18);
          uVar62 = 0;
          if ((int)local_694 < *(int *)(pFVar41 + 9)) {
            uVar62 = ~(uint)local_694 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_2>::operator()
                    (&local_428,uVar55,FVar60,
                     (TVector<double> *)((longlong)pFVar41[8] + (longlong)(int)FVar35 * 0x18),
                     (TVector<double> *)local_678);
        }
        uVar62 = 0;
        if ((int)FVar60 < *(int *)&param_1->field_0x8) {
          uVar62 = ~(uint)FVar60 >> 0x1f;
        }
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        padVar58 = (double (*) [2])((longlong)(int)FVar60 * 0x60 + *(longlong *)param_1);
        uVar54 = ~uVar55 >> 0x1f;
        uVar62 = 0;
        if ((int)uVar55 < param_2->ArrayNum) {
          uVar62 = uVar54;
        }
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        local_690 = (FTlsAutoCleanup *)(longlong)(int)uVar55;
        local_678 = (TQuat<double> *)((longlong)local_690 * 3);
        local_688 = param_2->DataPtr;
        uVar62 = 0;
        if ((int)FVar60 < *(int *)&local_688[(longlong)local_690].field_0x8) {
          uVar62 = ~(uint)FVar60 >> 0x1f;
        }
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        local_618 = (longlong)(int)FVar60 * 0x60;
        local_608.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_608.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_678 = *(TQuat<double> **)((longlong)&local_688->field_0x0 + local_678 * 8);
        local_608.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_608.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        uVar62 = 0;
        if ((int)FVar60 < param_8->ArrayNum) {
          uVar62 = ~(uint)FVar60 >> 0x1f;
        }
        local_608.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_608.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_608.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_608.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_608.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_608.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_608.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_608.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        fVar148 = param_8->DataPtr[(int)FVar60].BlendWeight;
        if (fVar149 <= fVar148) {
          fVar148 = fVar149;
        }
        uVar62 = 0;
        if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
          uVar62 = uVar54;
        }
        if (fVar148 <= fVar150) {
          fVar148 = fVar150;
        }
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        fVar150 = *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)(int)uVar55 * 4);
        if (*(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)(int)uVar55 * 4) <= fVar148)
        {
          fVar150 = fVar148;
        }
        uVar62 = 0;
        if ((int)uVar55 < *(int *)(pFVar41 + 0xf)) {
          uVar62 = uVar54;
        }
        pFVar46 = (FTlsAutoCleanup *)(longlong)(int)uVar55;
        if ((uVar62 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pFVar46 = local_690, bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        *(float *)(*(FScriptContainerElement **)pFVar68 + (longlong)pFVar46 * 4) = fVar150;
        if (fVar154 < fVar148) {
          if (fVar148 < fVar34) {
            adVar17 = *padVar58;
            adVar18 = padVar58[1];
            dVar144 = (double)fVar148;
            dVar147 = (double)fVar148;
            uVar143 = (undefined4)((ulonglong)dVar147 >> 0x20);
            dVar133 = (double)fVar148;
            dVar142 = (double)fVar148;
            uVar152 = (undefined4)((ulonglong)dVar142 >> 0x20);
            dVar99 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar144;
            dVar100 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar147;
            dVar121 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar133;
            dVar141 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar142;
            auVar75._8_4_ = SUB84(dVar147,0);
            auVar75._0_8_ = dVar144;
            auVar75._12_4_ = uVar143;
            local_608.Translation.XY.m128d_f64[0] =
                 dVar144 * *(double *)((longlong)local_678 + local_618 + 0x20) +
                 padVar58[2][0] * dVar99;
            local_608.Translation.XY.m128d_f64[1] =
                 auVar75._8_8_ *
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x20) + 8) +
                 padVar58[2][1] * dVar100;
            auVar103._8_4_ = SUB84(dVar142,0);
            auVar103._0_8_ = dVar133;
            auVar103._12_4_ = uVar152;
            auVar76._8_4_ = SUB84(dVar147,0);
            auVar76._0_8_ = dVar144;
            auVar76._12_4_ = uVar143;
            local_608.Scale3D.XY.m128d_f64[0] =
                 dVar144 * *(double *)((longlong)local_678 + local_618 + 0x40) +
                 padVar58[4][0] * dVar99;
            local_608.Scale3D.XY.m128d_f64[1] =
                 auVar76._8_8_ *
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x40) + 8) +
                 padVar58[4][1] * dVar100;
            local_608.Translation.ZW.m128d_f64[0] =
                 dVar133 * *(double *)((longlong)local_678 + local_618 + 0x30) +
                 padVar58[3][0] * dVar121;
            local_608.Translation.ZW.m128d_f64[1] =
                 auVar103._8_8_ *
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x30) + 8) +
                 padVar58[3][1] * dVar141;
            dVar124 = 0.0 - adVar18[0];
            dVar132 = 0.0 - adVar18[1];
            auVar104._8_4_ = SUB84(dVar142,0);
            auVar104._0_8_ = dVar133;
            auVar104._12_4_ = uVar152;
            local_608.Scale3D.ZW.m128d_f64[1] =
                 auVar104._8_8_ *
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x50) + 8) +
                 padVar58[5][1] * dVar141;
            local_608.Scale3D.ZW.m128d_f64[0] =
                 dVar133 * *(double *)((longlong)local_678 + local_618 + 0x50) +
                 padVar58[5][0] * dVar121;
            dVar98 = adVar18[0] * *(double *)((longlong)local_678 + local_618 + 0x10) +
                     adVar17[0] * *(double *)((longlong)local_678 + local_618);
            dVar120 = adVar18[1] *
                      *(double *)
                       ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x10) + 8) +
                      adVar17[1] *
                      *(double *)((FScriptContainerElement *)((longlong)local_678 + local_618) + 8);
            auVar77._8_4_ = SUB84(dVar120,0);
            auVar77._0_8_ = dVar98;
            auVar77._12_4_ = (int)((ulonglong)dVar120 >> 0x20);
            lVar66 = -(ulonglong)(0.0 <= auVar77._8_8_ + dVar98);
            lVar70 = -(ulonglong)(0.0 <= dVar98 + dVar120);
            uVar55 = (uint)lVar66;
            uVar62 = (uint)((ulonglong)lVar66 >> 0x20);
            uVar54 = (uint)lVar70;
            uVar67 = (uint)((ulonglong)lVar70 >> 0x20);
            dVar98 = 0.0 - adVar17[0];
            dVar120 = 0.0 - adVar17[1];
            auVar145._0_4_ = ~uVar55 & SUB84(dVar98,0);
            auVar145._4_4_ = ~uVar62 & (uint)((ulonglong)dVar98 >> 0x20);
            auVar145._8_4_ = ~uVar54 & SUB84(dVar120,0);
            auVar145._12_4_ = ~uVar67 & (uint)((ulonglong)dVar120 >> 0x20);
            auVar134._0_4_ = ~uVar55 & SUB84(dVar124,0);
            auVar134._4_4_ = ~uVar62 & (uint)((ulonglong)dVar124 >> 0x20);
            auVar134._8_4_ = ~uVar54 & SUB84(dVar132,0);
            auVar134._12_4_ = ~uVar67 & (uint)((ulonglong)dVar132 >> 0x20);
            auVar29._4_4_ = adVar17[0]._4_4_ & uVar62;
            auVar29._0_4_ = adVar17[0]._0_4_ & uVar55;
            auVar29._8_4_ = adVar17[1]._0_4_ & uVar54;
            auVar29._12_4_ = adVar17[1]._4_4_ & uVar67;
            auVar171._0_4_ = adVar18[0]._0_4_ & uVar55;
            auVar171._4_4_ = adVar18[0]._4_4_ & uVar62;
            auVar171._8_4_ = adVar18[1]._0_4_ & uVar54;
            auVar171._12_4_ = adVar18[1]._4_4_ & uVar67;
            dVar144 = SUB168(auVar145 | auVar29,0) * dVar99 +
                      dVar144 * *(double *)((longlong)local_678 + local_618);
            dVar147 = SUB168(auVar145 | auVar29,8) * dVar100 +
                      dVar147 * *(double *)
                                 ((FScriptContainerElement *)((longlong)local_678 + local_618) + 8);
            dVar121 = SUB168(auVar134 | auVar171,0) * dVar121 +
                      dVar133 * *(double *)((longlong)local_678 + local_618 + 0x10);
            dVar141 = SUB168(auVar134 | auVar171,8) * dVar141 +
                      dVar142 * *(double *)
                                 ((FScriptContainerElement *)
                                  ((longlong)local_678 + local_618 + 0x10) + 8);
            auVar78._8_4_ = SUB84(dVar147,0);
            auVar78._0_8_ = dVar144;
            auVar78._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
            auVar105._8_4_ = SUB84(dVar141,0);
            auVar105._0_8_ = dVar121;
            auVar105._12_4_ = (int)((ulonglong)dVar141 >> 0x20);
            dVar99 = dVar121 * dVar121 + dVar144 * dVar144;
            dVar100 = auVar105._8_8_ * dVar141 + auVar78._8_8_ * dVar147;
            auVar79._8_4_ = SUB84(dVar100,0);
            auVar79._0_8_ = dVar99;
            auVar79._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
            auVar80._0_8_ = auVar79._8_8_ + dVar99;
            auVar80._8_8_ = dVar99 + dVar100;
            uVar69 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar80._0_8_);
            uVar71 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar80._8_8_);
            uVar73 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar80._0_8_);
            uVar72 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar80._8_8_);
            auVar126 = sqrtpd(auVar80,auVar80);
            auVar137 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                             auVar126);
            auVar173._0_8_ = uVar69 & (ulonglong)(auVar137._0_8_ * dVar144);
            uVar30 = uVar71 & (ulonglong)(auVar137._8_8_ * dVar147);
            auVar173._8_4_ = (undefined4)uVar30;
            auVar173._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar106._0_4_ = ~(uint)uVar69 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_
            ;
            auVar106._4_4_ =
                 ~(uint)(uVar69 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar106._8_4_ = ~(uint)uVar71 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_
            ;
            auVar106._12_4_ =
                 ~(uint)(uVar71 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            local_608.Rotation.XY.m128d_f64 = (double  [2])(auVar173 | auVar106);
            auVar126 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                             auVar126);
            auVar175._0_8_ = uVar73 & (ulonglong)(auVar126._0_8_ * dVar121);
            uVar30 = uVar72 & (ulonglong)(auVar126._8_8_ * dVar141);
            auVar175._8_4_ = (undefined4)uVar30;
            auVar175._12_4_ = (undefined4)(uVar30 >> 0x20);
            auVar125._0_4_ = ~(uint)uVar73 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_
            ;
            auVar125._4_4_ =
                 ~(uint)(uVar73 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar125._8_4_ = ~(uint)uVar72 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_
            ;
            auVar125._12_4_ =
                 ~(uint)(uVar72 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            local_608.Rotation.ZW.m128d_f64 = (double  [2])(auVar175 | auVar125);
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_5>::operator()
                      (&local_3e8,FVar60,fVar148);
            `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_6>::operator()
                      (&local_358,FVar60,fVar148);
          }
          else {
            local_608.Rotation.XY.m128d_f64 = *(double (*) [2])((longlong)local_678 + local_618);
            local_608.Rotation.ZW.m128d_f64 =
                 *(double (*) [2])((longlong)local_678 + local_618 + 0x10);
            local_608.Translation.XY.m128d_f64[0] =
                 *(double *)((longlong)local_678 + local_618 + 0x20);
            local_608.Translation.XY.m128d_f64[1] =
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x20) + 8);
            local_608.Translation.ZW.m128d_f64[0] =
                 *(double *)((longlong)local_678 + local_618 + 0x30);
            local_608.Translation.ZW.m128d_f64[1] =
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x30) + 8);
            local_608.Scale3D.XY.m128d_f64[0] = *(double *)((longlong)local_678 + local_618 + 0x40);
            local_608.Scale3D.XY.m128d_f64[1] =
                 *(double *)
                  ((FScriptContainerElement *)((longlong)local_678 + local_618 + 0x40) + 8);
            local_608.Scale3D.ZW.m128d_f64 =
                 *(double (*) [2])((longlong)local_678 + local_618 + 0x50);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 7)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            pFVar8 = *(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar60 * 0x20;
            uVar16 = *(undefined8 *)pFVar8;
            uVar31 = *(undefined8 *)(pFVar8 + 8);
            pFVar8 = *(FScriptContainerElement **)pFVar1 + (longlong)(int)FVar60 * 0x20 + 0x10;
            uVar32 = *(undefined8 *)pFVar8;
            uVar33 = *(undefined8 *)(pFVar8 + 8);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar48 = pFVar41[4];
            puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
            *puVar9 = uVar16;
            puVar9[1] = uVar31;
            puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
            *puVar9 = uVar32;
            puVar9[1] = uVar33;
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 0xd)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            puVar9 = (undefined8 *)((longlong)*pFVar42 + (longlong)(int)FVar60 * 0x18);
            uVar31 = *puVar9;
            uVar32 = puVar9[1];
            uVar16 = *(undefined8 *)((longlong)*pFVar42 + 0x10 + (longlong)(int)FVar60 * 0x18);
            uVar55 = 0;
            if ((int)FVar60 < *(int *)(pFVar41 + 0xb)) {
              uVar55 = ~(uint)FVar60 >> 0x1f;
            }
            if ((uVar55 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar28 = (code *)swi(3);
              (*pcVar28)();
              return;
            }
            FVar48 = pFVar41[10];
            puVar9 = (undefined8 *)((longlong)FVar48 + (longlong)(int)FVar60 * 0x18);
            *puVar9 = uVar31;
            puVar9[1] = uVar32;
            *(undefined8 *)((longlong)FVar48 + 0x10 + (longlong)(int)FVar60 * 0x18) = uVar16;
          }
        }
        else {
          local_608.Rotation.XY.m128d_f64 = *padVar58;
          local_608.Rotation.ZW.m128d_f64 = padVar58[1];
          local_608.Translation.XY.m128d_f64[0] = padVar58[2][0];
          local_608.Translation.XY.m128d_f64[1] = padVar58[2][1];
          local_608.Translation.ZW.m128d_f64[0] = padVar58[3][0];
          local_608.Translation.ZW.m128d_f64[1] = padVar58[3][1];
          local_608.Scale3D.XY.m128d_f64[0] = padVar58[4][0];
          local_608.Scale3D.XY.m128d_f64[1] = padVar58[4][1];
          local_608.Scale3D.ZW.m128d_f64 = padVar58[5];
          uVar55 = 0;
          if ((int)FVar60 < *(int *)(pFVar41 + 3)) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          pFVar8 = *(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar60 * 0x20;
          uVar16 = *(undefined8 *)pFVar8;
          uVar31 = *(undefined8 *)(pFVar8 + 8);
          pFVar8 = *(FScriptContainerElement **)pFVar50 + (longlong)(int)FVar60 * 0x20 + 0x10;
          uVar32 = *(undefined8 *)pFVar8;
          uVar33 = *(undefined8 *)(pFVar8 + 8);
          uVar55 = 0;
          if ((int)FVar60 < *(int *)(pFVar41 + 5)) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar48 = pFVar41[4];
          puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + (longlong)FVar48);
          *puVar9 = uVar16;
          puVar9[1] = uVar31;
          puVar9 = (undefined8 *)((longlong)(int)FVar60 * 0x20 + 0x10 + (longlong)FVar48);
          *puVar9 = uVar32;
          puVar9[1] = uVar33;
          uVar55 = 0;
          if ((int)FVar60 < *(int *)(pFVar41 + 9)) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          puVar9 = (undefined8 *)((longlong)pFVar41[8] + (longlong)(int)FVar60 * 0x18);
          uVar31 = *puVar9;
          uVar32 = puVar9[1];
          uVar16 = *(undefined8 *)((longlong)pFVar41[8] + 0x10 + (longlong)(int)FVar60 * 0x18);
          uVar55 = 0;
          if ((int)FVar60 < *(int *)(pFVar41 + 0xb)) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          FVar48 = pFVar41[10];
          puVar9 = (undefined8 *)((longlong)FVar48 + (longlong)(int)FVar60 * 0x18);
          *puVar9 = uVar31;
          puVar9[1] = uVar32;
          *(undefined8 *)((longlong)FVar48 + 0x10 + (longlong)(int)FVar60 * 0x18) = uVar16;
        }
        FVar61 = local_694;
        if (local_694 != (FCompactPoseBoneIndex)0xffffffff) {
          local_688 = local_648;
          uVar55 = 0;
          if ((int)local_694 < *(int *)&local_648->field_0x8) {
            uVar55 = ~(uint)local_694 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          pFVar26 = local_648;
          pFVar8 = *(FScriptContainerElement **)local_688 + (longlong)(int)FVar61 * 0x20;
          pFVar11 = *(FScriptContainerElement **)local_688 + (longlong)(int)FVar61 * 0x20 + 0x10;
          dVar99 = *(double *)pFVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar100 = *(double *)(pFVar8 + 8) *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar55 = 0;
          if ((int)FVar60 < *(int *)&local_648->field_0x8) {
            uVar55 = ~(uint)FVar60 >> 0x1f;
          }
          dVar121 = *(double *)pFVar11 *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar141 = *(double *)(pFVar11 + 8) *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar143 = (undefined4)((ulonglong)dVar141 >> 0x20);
          if ((uVar55 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar28 = (code *)swi(3);
            (*pcVar28)();
            return;
          }
          auVar135._8_4_ = SUB84(dVar141,0);
          auVar135._0_8_ = dVar121;
          auVar135._12_4_ = uVar143;
          dVar144 = auVar135._8_8_;
          auVar81._8_4_ = SUB84(dVar141,0);
          auVar81._0_8_ = dVar144;
          auVar81._12_4_ = uVar143;
          auVar107._8_4_ = SUB84(dVar100,0);
          auVar107._0_8_ = dVar100;
          auVar107._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
          pFVar8 = *(FScriptContainerElement **)pFVar26 + (longlong)(int)FVar60 * 0x20 + 0x10;
          dVar133 = *(double *)pFVar8;
          dVar147 = *(double *)(pFVar8 + 8);
          pFVar8 = *(FScriptContainerElement **)pFVar26 + (longlong)(int)FVar60 * 0x20;
          dVar142 = *(double *)pFVar8;
          dVar98 = *(double *)(pFVar8 + 8);
          auVar136._0_8_ = dVar144 * dVar133;
          auVar136._8_8_ = dVar141 * dVar147;
          auVar82._8_4_ = SUB84(dVar121,0);
          auVar82._0_8_ = dVar121;
          auVar82._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
          dVar141 = dVar99 * dVar147 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar144 * dVar142 +
                    dVar100 * dVar133 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar121 * dVar98 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar144 = dVar99 * dVar133 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar81._8_8_ * dVar98 +
                    auVar107._8_8_ * dVar147 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar82._8_8_ * dVar142 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar83._8_4_ = SUB84(dVar144,0);
          auVar83._0_8_ = dVar141;
          auVar83._12_4_ = (int)((ulonglong)dVar144 >> 0x20);
          dVar147 = dVar99 * dVar98 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar136._0_8_
                    + dVar100 * dVar142 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar121 * dVar147 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar99 = dVar99 * dVar142 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + auVar136._8_8_
                   + dVar100 * dVar98 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   dVar121 * dVar133 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar108._8_4_ = SUB84(dVar99,0);
          auVar108._0_8_ = dVar147;
          auVar108._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
          dVar100 = dVar147 * dVar147 + dVar141 * dVar141;
          dVar121 = auVar108._8_8_ * dVar99 + auVar83._8_8_ * dVar144;
          auVar84._8_4_ = SUB84(dVar121,0);
          auVar84._0_8_ = dVar100;
          auVar84._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
          auVar85._0_8_ = auVar84._8_8_ + dVar100;
          auVar85._8_8_ = dVar100 + dVar121;
          auVar137 = sqrtpd(auVar136,auVar85);
          uVar69 = -(ulonglong)(dVar122 <= auVar85._0_8_);
          uVar73 = -(ulonglong)(dVar122 <= auVar85._8_8_);
          auVar126 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar137)
          ;
          uVar55 = (uint)(uVar69 >> 0x20);
          uVar62 = (uint)(uVar73 >> 0x20);
          auVar109._0_4_ =
               ~(uint)uVar69 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar109._4_4_ =
               ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar109._8_4_ =
               ~(uint)uVar73 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar109._12_4_ =
               ~uVar62 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar127._0_8_ = uVar69 & (ulonglong)(auVar126._0_8_ * dVar141);
          uVar30 = uVar73 & (ulonglong)(auVar126._8_8_ * dVar144);
          auVar127._8_4_ = (undefined4)uVar30;
          auVar127._12_4_ = (undefined4)(uVar30 >> 0x20);
          local_608.Rotation.XY.m128d_f64 = (double  [2])(auVar127 | auVar109);
          auVar126 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar137)
          ;
          auVar110._0_8_ = (ulonglong)(auVar126._0_8_ * dVar147) & uVar69;
          uVar30 = (ulonglong)(auVar126._8_8_ * dVar99) & uVar73;
          auVar110._8_4_ = (undefined4)uVar30;
          auVar110._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar128._0_4_ =
               ~(uint)uVar69 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar128._4_4_ =
               ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar128._8_4_ =
               ~(uint)uVar73 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar128._12_4_ =
               ~uVar62 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          local_608.Rotation.ZW.m128d_f64 = (double  [2])(auVar128 | auVar110);
          local_1b0 = dVar122;
          `FAnimationRuntime::BlendPosesPerBoneFilter'::__l2::<lambda_4>::operator()
                    (&local_638,&local_608,local_694,FVar60);
        }
        dVar120 = local_608.Scale3D.XY.m128d_f64[1];
        dVar98 = local_608.Scale3D.XY.m128d_f64[0];
        dVar142 = local_608.Translation.ZW.m128d_f64[1];
        dVar133 = local_608.Translation.ZW.m128d_f64[0];
        dVar147 = local_608.Translation.XY.m128d_f64[1];
        dVar144 = local_608.Translation.XY.m128d_f64[0];
        dVar99 = local_608.Rotation.XY.m128d_f64[0];
        dVar100 = local_608.Rotation.XY.m128d_f64[1];
        dVar121 = local_608.Rotation.ZW.m128d_f64[0];
        dVar141 = local_608.Rotation.ZW.m128d_f64[1];
        dVar124 = local_608.Scale3D.ZW.m128d_f64[0];
        dVar132 = local_608.Scale3D.ZW.m128d_f64[1];
        uVar55 = 0;
        if ((int)FVar60 < *(int *)&this->field_0x8) {
          uVar55 = ~(uint)FVar60 >> 0x1f;
        }
        if ((uVar55 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar28 = (code *)swi(3);
          (*pcVar28)();
          return;
        }
        FVar61 = (FCompactPoseBoneIndex)((int)FVar60 + 1);
        local_670 = local_670 + 1;
        pTVar47 = ((ForElementType<UE::Math::TTransform<double>_> *)&this->field_0x0)->Data;
        pTVar47[(int)FVar60].Rotation.XY.m128d_f64[0] = dVar99;
        pTVar47[(int)FVar60].Rotation.XY.m128d_f64[1] = dVar100;
        pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[0] = dVar121;
        pTVar47[(int)FVar60].Rotation.ZW.m128d_f64[1] = dVar141;
        pTVar47[(int)FVar60].Translation.XY.m128d_f64[0] = dVar144;
        pTVar47[(int)FVar60].Translation.XY.m128d_f64[1] = dVar147;
        pTVar47[(int)FVar60].Translation.ZW.m128d_f64[0] = dVar133;
        pTVar47[(int)FVar60].Translation.ZW.m128d_f64[1] = dVar142;
        pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[0] = dVar98;
        pTVar47[(int)FVar60].Scale3D.XY.m128d_f64[1] = dVar120;
        pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[0] = dVar124;
        pTVar47[(int)FVar60].Scale3D.ZW.m128d_f64[1] = dVar132;
        fVar150 = (float)local_658;
        FVar60 = FVar61;
      } while (FVar61 != FVar20);
    }
  }
  pFVar50 = pFVar41 + 0x10;
  puVar6 = &pFVar41[0x11].field_0x4;
  pFVar1 = pFVar41 + 0x12;
  iVar39 = *(int *)puVar6;
  *(undefined4 *)(pFVar41 + 0x11) = 0;
  if (iVar39 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pFVar50,0,(int *)puVar6);
  }
  iVar39 = *(int *)(pFVar41 + 0x11);
  uVar55 = local_640 + 1;
  if (iVar39 < (int)uVar55) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar55 - iVar39,(ForAnyElementType *)pFVar50,(int *)(pFVar41 + 0x11),
               (int *)puVar6);
  }
  else {
    if ((int)uVar55 < 0) goto LAB_1473e81f8;
    if ((int)uVar55 < iVar39) {
      uVar62 = iVar39 - uVar55;
      if (((int)(uVar55 | uVar62) < 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar36)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      if (uVar62 != 0) {
        iVar39 = (*(int *)(pFVar41 + 0x11) - uVar55) - uVar62;
        if (iVar39 != 0) {
          memmove(*(FScriptContainerElement **)pFVar50 + (longlong)(int)uVar55 * 8,
                  *(FScriptContainerElement **)pFVar50 + (longlong)(int)uVar55 * 8 +
                  (longlong)(int)uVar62 * 8,(longlong)iVar39 << 3);
        }
        iVar39 = *(int *)(pFVar41 + 0x11);
        *(uint *)(pFVar41 + 0x11) = iVar39 - uVar62;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pFVar50,iVar39 - uVar62,(int *)puVar6);
      }
    }
  }
  iVar39 = *(int *)&pFVar41[0x13].field_0x4;
  puVar6 = &pFVar41[0x13].field_0x4;
  pFVar46 = pFVar41 + 0x13;
  *(int *)pFVar46 = 0;
  if (iVar39 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pFVar1,0,(int *)puVar6);
  }
  iVar39 = *(int *)pFVar46;
  if (iVar39 < (int)uVar55) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar55 - iVar39,(ForAnyElementType *)pFVar1,(int *)pFVar46,(int *)puVar6);
  }
  else {
    if ((int)uVar55 < 0) {
LAB_1473e81f8:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar55);
    }
    if ((int)uVar55 < iVar39) {
      uVar62 = iVar39 - uVar55;
      if (((int)(uVar62 | uVar55) < 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar36)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      if (uVar62 != 0) {
        iVar39 = (*(int *)(pFVar41 + 0x13) - uVar55) - uVar62;
        if (iVar39 != 0) {
          memmove(*(FScriptContainerElement **)pFVar1 + (longlong)(int)uVar55 * 4,
                  *(FScriptContainerElement **)pFVar1 + (longlong)(int)uVar55 * 4 +
                  (longlong)(int)uVar62 * 4,(longlong)iVar39 << 2);
        }
        iVar39 = *(int *)(pFVar41 + 0x13);
        *(uint *)(pFVar41 + 0x13) = iVar39 - uVar62;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)pFVar1,iVar39 - uVar62,(int *)puVar6);
      }
    }
  }
  if ((*(int *)(pFVar41 + 0x11) < 1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  *(FBlendedCurve **)*(FScriptContainerElement **)pFVar50 = param_3;
  if ((*(int *)(pFVar41 + 0x13) < 1) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar36)) {
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  uVar55 = 0;
  *(undefined4 *)*(FScriptContainerElement **)pFVar1 = 0x3f800000;
  if (0 < local_610) {
    lVar66 = 0;
    do {
      uVar62 = 0;
      if ((int)uVar55 < param_4->ArrayNum) {
        uVar62 = ~uVar55 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar36)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      pFVar27 = param_4->DataPtr;
      uVar54 = ~(uVar55 + 1) >> 0x1f;
      uVar62 = 0;
      if ((int)(uVar55 + 1) < *(int *)(pFVar41 + 0x11)) {
        uVar62 = uVar54;
      }
      if ((uVar62 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      *(FBlendedCurve **)(*(FScriptContainerElement **)pFVar50 + local_630) = pFVar27 + (int)uVar55;
      uVar62 = 0;
      if ((int)uVar55 < *(int *)(pFVar68 + 1)) {
        uVar62 = ~uVar55 >> 0x1f;
      }
      if ((uVar62 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar143 = *(undefined4 *)(*(FScriptContainerElement **)pFVar68 + lVar66 * 4);
      uVar62 = 0;
      if ((int)(uVar55 + 1) < *(int *)(pFVar41 + 0x13)) {
        uVar62 = uVar54;
      }
      if ((uVar62 == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar36)) {
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
      uVar55 = uVar55 + 1;
      local_630 = local_630 + 8;
      *(undefined4 *)(*(FScriptContainerElement **)pFVar1 + lVar66 * 4 + 4) = uVar143;
      lVar66 = lVar66 + 1;
    } while (lVar66 < local_610);
  }
  local_308 = *(FScriptContainerElement **)pFVar1;
  iVar39 = *(int *)(pFVar41 + 0x13);
  if ((iVar39 < 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar36)) {
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  local_2f8 = *(FScriptContainerElement **)pFVar50;
  iVar19 = *(int *)(pFVar41 + 0x11);
  iStack_300 = iVar39;
  if ((iVar19 < 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar36)) {
    pcVar28 = (code *)swi(3);
    (*pcVar28)();
    return;
  }
  local_198._12_4_ = uStack_2fc;
  local_198.ArrayNum = iStack_300;
  local_1e8._12_4_ = uStack_2ec;
  local_1e8.ArrayNum = iVar19;
  local_1e8.DataPtr = (FBlendedCurve **)local_2f8;
  local_198.DataPtr = (float *)local_308;
  iStack_2f0 = iVar19;
  BlendCurves(&local_1e8,&local_198,local_360,param_10);
  local_2e8 = param_8->DataPtr;
  iStack_2e0 = param_8->ArrayNum;
  local_2d8 = param_6->DataPtr;
  local_1d8._12_4_ = uStack_2dc;
  local_1d8.ArrayNum = iStack_2e0;
  iStack_2d0 = param_6->ArrayNum;
  local_1c8._12_4_ = uStack_2cc;
  local_1c8.ArrayNum = iStack_2d0;
  local_1d8.DataPtr = local_2e8;
  local_1c8.DataPtr = local_2d8;
  UE::Anim::Attributes::BlendAttributesPerBoneFilter
            (param_5,&local_1c8,&local_1d8,(FStackAttributeContainer *)local_368);
LAB_1473e81ac:
  if ((local_620 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_620 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_620 & 4) != 0) {
    FThreadStats::AddMessage(local_628,CycleScopeEnd);
  }
  return;
}

// BlendPosesTogether @ 1473e8210

void __cdecl
FAnimationRuntime::BlendPosesTogether
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          FCompactPose *param_4,FBlendedCurve *param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_68;
  FAnimationPoseData local_58;
  TArrayView<float_const_,int> local_38;
  TArrayView<FBlendedCurve_const_,int> local_28;
  TArrayView<FCompactPose_const_,int> local_18;
  
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58.Curve = param_5;
  local_58.Attributes = (FStackAttributeContainer *)&local_a8;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  local_68.DataPtr = (FStackAttributeContainer *)0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_90 = 0;
  local_88 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_58.Pose = param_4;
  BlendPosesTogether(&local_18,&local_28,&local_68,&local_38,&local_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_88,(int)local_80);
  if (local_88 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_a8,(int)local_a0);
  if (local_a8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// BlendPosesTogether @ 1473e8310

void __cdecl
FAnimationRuntime::BlendPosesTogether
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<int_const_,int> *param_4,FCompactPose *param_5,FBlendedCurve *param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  undefined8 local_b0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_78;
  FAnimationPoseData local_68;
  TArrayView<int_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<FBlendedCurve_const_,int> local_28;
  TArrayView<FCompactPose_const_,int> local_18;
  
  local_48.DataPtr = param_4->DataPtr;
  local_48.ArrayNum = param_4->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_68.Pose = param_5;
  local_68.Curve = param_6;
  local_68.Attributes = (FStackAttributeContainer *)&local_b8;
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_78.DataPtr = (FStackAttributeContainer *)0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_b8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_b0 = 0;
  local_a8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  BlendPosesTogether(&local_18,&local_28,&local_78,&local_38,&local_48,&local_68);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_a8,(int)local_a0);
  if (local_a8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_b8,(int)local_b0);
  if (local_b8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}

// BlendPosesTogether @ 1473e8420

void __cdecl
FAnimationRuntime::BlendPosesTogether
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,FAnimationPoseData *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  <lambda_1> <Var5;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this;
  FCompactPose *this_00;
  FStackAttributeContainer *pFVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  FCompactPose *pFVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  longlong lVar27;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *pTVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  longlong local_e8;
  longlong local_e0;
  TArrayView<float_const_,int> local_a8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_98 [5];
  uint uVar41;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourcePoses.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x16e,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_5->Curve;
  this_00 = param_5->Pose;
  pFVar6 = param_5->Attributes;
  if ((param_4->ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar4 = *param_4->DataPtr;
  pFVar21 = TArrayView<FCompactPose_const_,int>::operator[](param_1,0);
  if (bAnim_BlendPoseOverwrite_ISPC_Enabled == false) {
    uVar23 = *(uint *)&pFVar21->field_0x8;
    uVar22 = 0;
    if (uVar23 != 0) {
      lVar27 = 0;
      dVar13 = (double)fVar4;
      uVar47 = SUB84((double)fVar4,0);
      uVar48 = (undefined4)((ulonglong)(double)fVar4 >> 0x20);
      dVar14 = (double)fVar4;
      uVar49 = SUB84((double)fVar4,0);
      uVar50 = (undefined4)((ulonglong)(double)fVar4 >> 0x20);
      do {
        uVar41 = 0;
        if ((int)uVar22 < *(int *)&this_00->field_0x8) {
          uVar41 = ~uVar22 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *(longlong *)this_00;
        uVar41 = 0;
        if ((int)uVar22 < *(int *)&pFVar21->field_0x8) {
          uVar41 = ~uVar22 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar8 = *(longlong *)pFVar21;
        auVar31._8_4_ = uVar47;
        auVar31._0_8_ = dVar13;
        auVar31._12_4_ = uVar48;
        auVar36._8_4_ = uVar49;
        auVar36._0_8_ = dVar14;
        auVar36._12_4_ = uVar50;
        uVar22 = uVar22 + 1;
        dVar15 = ((double *)(lVar8 + lVar27))[1];
        pdVar1 = (double *)(lVar8 + 0x10 + lVar27);
        dVar16 = *pdVar1;
        dVar35 = pdVar1[1];
        pdVar1 = (double *)(lVar8 + 0x40 + lVar27);
        dVar11 = *pdVar1;
        dVar12 = pdVar1[1];
        pdVar1 = (double *)(lVar8 + 0x50 + lVar27);
        dVar42 = *pdVar1;
        dVar45 = pdVar1[1];
        pdVar1 = (double *)(lVar8 + 0x20 + lVar27);
        dVar46 = *pdVar1;
        dVar17 = pdVar1[1];
        pdVar1 = (double *)(lVar8 + 0x30 + lVar27);
        dVar18 = *pdVar1;
        dVar19 = pdVar1[1];
        *(double *)(lVar27 + lVar7) = dVar13 * *(double *)(lVar8 + lVar27);
        ((double *)(lVar27 + lVar7))[1] = auVar31._8_8_ * dVar15;
        auVar32._8_4_ = uVar47;
        auVar32._0_8_ = dVar13;
        auVar32._12_4_ = uVar48;
        pdVar1 = (double *)(lVar27 + 0x10 + lVar7);
        *pdVar1 = dVar14 * dVar16;
        pdVar1[1] = auVar36._8_8_ * dVar35;
        auVar37._8_4_ = uVar49;
        auVar37._0_8_ = dVar14;
        auVar37._12_4_ = uVar50;
        pdVar1 = (double *)(lVar27 + 0x20 + lVar7);
        *pdVar1 = dVar13 * dVar46;
        pdVar1[1] = auVar32._8_8_ * dVar17;
        auVar33._8_4_ = uVar47;
        auVar33._0_8_ = dVar13;
        auVar33._12_4_ = uVar48;
        pdVar1 = (double *)(lVar27 + 0x30 + lVar7);
        *pdVar1 = dVar14 * dVar18;
        pdVar1[1] = auVar37._8_8_ * dVar19;
        auVar38._8_4_ = uVar49;
        auVar38._0_8_ = dVar14;
        auVar38._12_4_ = uVar50;
        pdVar1 = (double *)(lVar27 + 0x40 + lVar7);
        *pdVar1 = dVar13 * dVar11;
        pdVar1[1] = auVar33._8_8_ * dVar12;
        pdVar1 = (double *)(lVar27 + 0x50 + lVar7);
        *pdVar1 = dVar14 * dVar42;
        pdVar1[1] = auVar38._8_8_ * dVar45;
        lVar27 = lVar27 + 0x60;
      } while (uVar22 != uVar23);
    }
  }
  else {
    if ((*(int *)&this_00->field_0x8 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((*(int *)&this_00->field_0x8 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar20)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    BlendTransformOverwrite(*(undefined8 *)pFVar21);
  }
  iVar24 = param_1->ArrayNum;
  param_5._0_4_ = 1;
  if (1 < iVar24) {
    local_e0 = 4;
    lVar27 = 0x18;
    do {
      uVar23 = 0;
      if ((int)(uint)param_5 < param_4->ArrayNum) {
        uVar23 = ~(uint)param_5 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar4 = *(float *)(local_e0 + (longlong)param_4->DataPtr);
      uVar23 = 0;
      if ((int)(uint)param_5 < param_1->ArrayNum) {
        uVar23 = ~(uint)param_5 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar21 = param_1->DataPtr;
      if (bAnim_BlendPoseAccumulate_ISPC_Enabled == false) {
        uVar23 = *(uint *)(&pFVar21->field_0x8 + lVar27);
        uVar22 = 0;
        if (uVar23 != 0) {
          dVar13 = (double)fVar4;
          dVar14 = (double)fVar4;
          local_e8 = 0;
          dVar15 = (double)fVar4;
          dVar16 = (double)fVar4;
          do {
            uVar41 = 0;
            if ((int)uVar22 < *(int *)&this_00->field_0x8) {
              uVar41 = ~uVar22 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)this_00;
            uVar41 = 0;
            if ((int)uVar22 < *(int *)(&pFVar21->field_0x8 + lVar27)) {
              uVar41 = ~uVar22 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar8 = *(longlong *)(&pFVar21->field_0x0 + lVar27);
            uVar22 = uVar22 + 1;
            pdVar1 = (double *)(local_e8 + 0x10 + lVar7);
            pdVar2 = (double *)(lVar8 + 0x10 + local_e8);
            dVar45 = *(double *)(lVar8 + local_e8) * dVar13;
            dVar46 = ((double *)(lVar8 + local_e8))[1] * dVar14;
            dVar11 = *pdVar2 * dVar15;
            dVar12 = pdVar2[1] * dVar16;
            dVar35 = *pdVar1 * dVar11 + *(double *)(local_e8 + lVar7) * dVar45;
            dVar42 = pdVar1[1] * dVar12 + ((double *)(local_e8 + lVar7))[1] * dVar46;
            auVar34._8_4_ = SUB84(dVar42,0);
            auVar34._0_8_ = dVar35;
            auVar34._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
            uVar29 = -(ulonglong)(0.0 <= auVar34._8_8_ + dVar35);
            uVar30 = -(ulonglong)(0.0 <= dVar35 + dVar42);
            uVar44 = (uint)(uVar30 >> 0x20);
            uVar41 = (uint)(uVar29 >> 0x20);
            auVar39._0_8_ = (ulonglong)dVar45 & uVar29;
            auVar39._8_4_ = (undefined4)((ulonglong)dVar46 & uVar30);
            auVar39._12_4_ = (undefined4)(((ulonglong)dVar46 & uVar30) >> 0x20);
            auVar43._0_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar45,0);
            auVar43._4_4_ = ~uVar41 & (uint)((ulonglong)(0.0 - dVar45) >> 0x20);
            auVar43._8_4_ = ~(uint)uVar30 & SUB84(0.0 - dVar46,0);
            auVar43._12_4_ = ~uVar44 & (uint)((ulonglong)(0.0 - dVar46) >> 0x20);
            dVar35 = ((double *)(local_e8 + lVar7))[1];
            *(double *)(local_e8 + lVar7) =
                 SUB168(auVar43 | auVar39,0) + *(double *)(local_e8 + lVar7);
            ((double *)(local_e8 + lVar7))[1] = SUB168(auVar43 | auVar39,8) + dVar35;
            auVar40._0_4_ = ~(uint)uVar29 & SUB84(0.0 - dVar11,0);
            auVar40._4_4_ = ~uVar41 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
            auVar40._8_4_ = ~(uint)uVar30 & SUB84(0.0 - dVar12,0);
            auVar40._12_4_ = ~uVar44 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
            auVar10._8_4_ = (int)((ulonglong)dVar12 & uVar30);
            auVar10._0_8_ = (ulonglong)dVar11 & uVar29;
            auVar10._12_4_ = (int)(((ulonglong)dVar12 & uVar30) >> 0x20);
            pdVar1 = (double *)(local_e8 + 0x10 + lVar7);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)(local_e8 + 0x10 + lVar7);
            *pdVar2 = SUB168(auVar40 | auVar10,0) + *pdVar1;
            pdVar2[1] = SUB168(auVar40 | auVar10,8) + dVar35;
            pdVar1 = (double *)(lVar8 + 0x20 + local_e8);
            dVar11 = pdVar1[1];
            pdVar2 = (double *)(lVar8 + 0x30 + local_e8);
            dVar12 = *pdVar2;
            dVar42 = pdVar2[1];
            pdVar2 = (double *)(local_e8 + 0x20 + lVar7);
            dVar35 = pdVar2[1];
            pdVar3 = (double *)(local_e8 + 0x20 + lVar7);
            *pdVar3 = *pdVar1 * dVar13 + *pdVar2;
            pdVar3[1] = dVar11 * dVar14 + dVar35;
            pdVar1 = (double *)(local_e8 + 0x30 + lVar7);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)(local_e8 + 0x30 + lVar7);
            *pdVar2 = dVar12 * dVar15 + *pdVar1;
            pdVar2[1] = dVar42 * dVar16 + dVar35;
            pdVar1 = (double *)(lVar8 + 0x40 + local_e8);
            dVar11 = pdVar1[1];
            pdVar2 = (double *)(lVar8 + 0x50 + local_e8);
            dVar12 = *pdVar2;
            dVar42 = pdVar2[1];
            pdVar2 = (double *)(local_e8 + 0x40 + lVar7);
            dVar35 = pdVar2[1];
            pdVar3 = (double *)(local_e8 + 0x40 + lVar7);
            *pdVar3 = *pdVar1 * dVar13 + *pdVar2;
            pdVar3[1] = dVar11 * dVar14 + dVar35;
            pdVar1 = (double *)(local_e8 + 0x50 + lVar7);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)(local_e8 + 0x50 + lVar7);
            *pdVar2 = dVar12 * dVar15 + *pdVar1;
            pdVar2[1] = dVar42 * dVar16 + dVar35;
            local_e8 = local_e8 + 0x60;
          } while (uVar22 != uVar23);
        }
      }
      else {
        if ((*(int *)&this_00->field_0x8 < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((*(int *)&this_00->field_0x8 < 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar20)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        BlendTransformAccumulate(*(undefined8 *)(&pFVar21->field_0x0 + lVar27));
      }
      param_5._0_4_ = (uint)param_5 + 1;
      local_e0 = local_e0 + 4;
      lVar27 = lVar27 + 0x18;
      iVar24 = param_1->ArrayNum;
    } while ((int)(uint)param_5 < iVar24);
  }
  uVar23 = 1;
  if (1 < iVar24) {
    FCompactPose::NormalizeRotations(this_00);
  }
  if (0 < param_2->ArrayNum) {
    pTVar28 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2->DataPtr;
    pfVar26 = param_4->DataPtr;
    iVar24 = (int)*(undefined8 *)&param_2->ArrayNum;
    if (0 < iVar24) {
      iVar25 = (int)*(undefined8 *)&param_4->ArrayNum;
      if ((iVar25 < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar4 = *pfVar26;
      if ((iVar24 < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>(this,pTVar28,fVar4);
      fVar4 = __real_3727c5ac;
      if (1 < iVar24) {
        do {
          pTVar28 = pTVar28 + 1;
          pfVar26 = pfVar26 + 1;
          uVar22 = 0;
          if ((int)uVar23 < iVar25) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          <Var5.Weight = *pfVar26;
          uVar22 = 0;
          if ((int)uVar23 < iVar24) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (fVar4 < <Var5.Weight) {
            UE::Anim::FNamedValueArrayUtils::
            Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)this,
                       (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar28,
                       <Var5);
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < iVar24);
      }
    }
  }
  if (0 < param_3->ArrayNum) {
    local_a8.DataPtr = param_4->DataPtr;
    local_a8.ArrayNum = param_4->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_98[0].DataPtr = param_3->DataPtr;
    local_98[0].ArrayNum = param_3->ArrayNum;
    local_98[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
    UE::Anim::Attributes::BlendAttributes(local_98,&local_a8,pFVar6);
  }
  return;
}

// BlendPosesTogether @ 1473e8cb0

void __cdecl
FAnimationRuntime::BlendPosesTogether
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,TArrayView<int_const_,int> *param_5,
          FAnimationPoseData *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  <lambda_1> <Var5;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this;
  FCompactPose *this_00;
  FStackAttributeContainer *pFVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  bool bVar28;
  float *pfVar29;
  FCompactPose *pFVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint *puVar34;
  int iVar35;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *pTVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  longlong local_108;
  longlong local_d8;
  TArrayView<int_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_98 [5];
  uint uVar45;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourcePoses.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x19e,L""), bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_6->Curve;
  this_00 = param_6->Pose;
  pFVar6 = param_6->Attributes;
  if ((param_5->ArrayNum < 1) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pfVar29 = TArrayView<float_const_,int>::operator[](param_4,*param_5->DataPtr);
  fVar4 = *pfVar29;
  pFVar30 = TArrayView<FCompactPose_const_,int>::operator[](param_1,0);
  if (bAnim_BlendPoseOverwrite_ISPC_Enabled == false) {
    uVar37 = *(uint *)&pFVar30->field_0x8;
    uVar32 = 0;
    if (uVar37 != 0) {
      lVar38 = 0;
      dVar19 = (double)fVar4;
      dVar20 = (double)fVar4;
      dVar21 = (double)fVar4;
      dVar22 = (double)fVar4;
      do {
        uVar45 = 0;
        if ((int)uVar32 < *(int *)&this_00->field_0x8) {
          uVar45 = ~uVar32 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar8 = *(longlong *)this_00;
        uVar45 = 0;
        if ((int)uVar32 < *(int *)&pFVar30->field_0x8) {
          uVar45 = ~uVar32 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar9 = *(longlong *)pFVar30;
        uVar32 = uVar32 + 1;
        dVar18 = ((double *)(lVar9 + lVar38))[1];
        pdVar1 = (double *)(lVar9 + 0x10 + lVar38);
        dVar42 = *pdVar1;
        dVar46 = pdVar1[1];
        pdVar1 = (double *)(lVar9 + 0x20 + lVar38);
        dVar23 = *pdVar1;
        dVar24 = pdVar1[1];
        pdVar1 = (double *)(lVar9 + 0x30 + lVar38);
        dVar25 = *pdVar1;
        dVar15 = pdVar1[1];
        pdVar1 = (double *)(lVar9 + 0x40 + lVar38);
        dVar26 = *pdVar1;
        dVar16 = pdVar1[1];
        pdVar1 = (double *)(lVar9 + 0x50 + lVar38);
        dVar27 = *pdVar1;
        dVar17 = pdVar1[1];
        *(double *)(lVar38 + lVar8) = *(double *)(lVar9 + lVar38) * dVar19;
        ((double *)(lVar38 + lVar8))[1] = dVar18 * dVar20;
        pdVar1 = (double *)(lVar38 + 0x10 + lVar8);
        *pdVar1 = dVar42 * dVar21;
        pdVar1[1] = dVar46 * dVar22;
        dVar15 = dVar15 * dVar22;
        pdVar1 = (double *)(lVar38 + 0x20 + lVar8);
        *pdVar1 = dVar23 * dVar19;
        pdVar1[1] = dVar24 * dVar20;
        auVar11._8_4_ = SUB84(dVar15,0);
        auVar11._0_8_ = dVar25 * dVar21;
        auVar11._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])(lVar38 + 0x30 + lVar8) = auVar11;
        dVar16 = dVar16 * dVar20;
        dVar17 = dVar17 * dVar22;
        auVar13._8_4_ = SUB84(dVar16,0);
        auVar13._0_8_ = dVar26 * dVar19;
        auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined1 (*) [16])(lVar38 + 0x40 + lVar8) = auVar13;
        auVar14._8_4_ = SUB84(dVar17,0);
        auVar14._0_8_ = dVar27 * dVar21;
        auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(lVar38 + 0x50 + lVar8) = auVar14;
        lVar38 = lVar38 + 0x60;
      } while (uVar32 != uVar37);
    }
  }
  else {
    if ((*(int *)&this_00->field_0x8 < 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar28)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar7 = *(undefined8 *)this_00;
    if ((*(int *)&this_00->field_0x8 < 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar28)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    BlendTransformOverwrite(*(undefined8 *)pFVar30,uVar7);
  }
  iVar33 = param_1->ArrayNum;
  param_6._0_4_ = 1;
  if (1 < iVar33) {
    local_d8 = 4;
    lVar38 = 0x18;
    do {
      uVar37 = 0;
      if ((int)(uint)param_6 < param_5->ArrayNum) {
        uVar37 = ~(uint)param_6 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar37 = *(uint *)(local_d8 + (longlong)param_5->DataPtr);
      uVar32 = 0;
      if ((int)uVar37 < param_4->ArrayNum) {
        uVar32 = ~uVar37 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar4 = param_4->DataPtr[(int)uVar37];
      uVar37 = 0;
      if ((int)(uint)param_6 < param_1->ArrayNum) {
        uVar37 = ~(uint)param_6 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar30 = param_1->DataPtr;
      if (bAnim_BlendPoseAccumulate_ISPC_Enabled == false) {
        uVar37 = *(uint *)(&pFVar30->field_0x8 + lVar38);
        uVar32 = 0;
        if (uVar37 != 0) {
          dVar19 = (double)fVar4;
          dVar20 = (double)fVar4;
          local_108 = 0;
          dVar21 = (double)fVar4;
          dVar22 = (double)fVar4;
          do {
            uVar45 = 0;
            if ((int)uVar32 < *(int *)&this_00->field_0x8) {
              uVar45 = ~uVar32 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar8 = *(longlong *)this_00;
            uVar45 = 0;
            if ((int)uVar32 < *(int *)(&pFVar30->field_0x8 + lVar38)) {
              uVar45 = ~uVar32 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar9 = *(longlong *)(&pFVar30->field_0x0 + lVar38);
            uVar32 = uVar32 + 1;
            pdVar1 = (double *)(local_108 + 0x10 + lVar8);
            pdVar2 = (double *)(lVar9 + 0x10 + local_108);
            dVar15 = *(double *)(lVar9 + local_108) * dVar19;
            dVar16 = ((double *)(lVar9 + local_108))[1] * dVar20;
            dVar17 = *pdVar2 * dVar21;
            dVar18 = pdVar2[1] * dVar22;
            dVar42 = *pdVar1 * dVar17 + *(double *)(local_108 + lVar8) * dVar15;
            dVar46 = pdVar1[1] * dVar18 + ((double *)(local_108 + lVar8))[1] * dVar16;
            auVar41._8_4_ = SUB84(dVar46,0);
            auVar41._0_8_ = dVar42;
            auVar41._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            uVar39 = -(ulonglong)(0.0 <= auVar41._8_8_ + dVar42);
            uVar40 = -(ulonglong)(0.0 <= dVar42 + dVar46);
            uVar48 = (uint)(uVar40 >> 0x20);
            uVar45 = (uint)(uVar39 >> 0x20);
            auVar43._0_8_ = (ulonglong)dVar15 & uVar39;
            auVar43._8_4_ = (undefined4)((ulonglong)dVar16 & uVar40);
            auVar43._12_4_ = (undefined4)(((ulonglong)dVar16 & uVar40) >> 0x20);
            auVar47._0_4_ = ~(uint)uVar39 & SUB84(0.0 - dVar15,0);
            auVar47._4_4_ = ~uVar45 & (uint)((ulonglong)(0.0 - dVar15) >> 0x20);
            auVar47._8_4_ = ~(uint)uVar40 & SUB84(0.0 - dVar16,0);
            auVar47._12_4_ = ~uVar48 & (uint)((ulonglong)(0.0 - dVar16) >> 0x20);
            dVar15 = ((double *)(local_108 + lVar8))[1];
            *(double *)(local_108 + lVar8) =
                 SUB168(auVar47 | auVar43,0) + *(double *)(local_108 + lVar8);
            ((double *)(local_108 + lVar8))[1] = SUB168(auVar47 | auVar43,8) + dVar15;
            auVar44._0_4_ = ~(uint)uVar39 & SUB84(0.0 - dVar17,0);
            auVar44._4_4_ = ~uVar45 & (uint)((ulonglong)(0.0 - dVar17) >> 0x20);
            auVar44._8_4_ = ~(uint)uVar40 & SUB84(0.0 - dVar18,0);
            auVar44._12_4_ = ~uVar48 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
            auVar12._8_4_ = (int)((ulonglong)dVar18 & uVar40);
            auVar12._0_8_ = (ulonglong)dVar17 & uVar39;
            auVar12._12_4_ = (int)(((ulonglong)dVar18 & uVar40) >> 0x20);
            pdVar1 = (double *)(local_108 + 0x10 + lVar8);
            dVar15 = pdVar1[1];
            pdVar2 = (double *)(local_108 + 0x10 + lVar8);
            *pdVar2 = SUB168(auVar44 | auVar12,0) + *pdVar1;
            pdVar2[1] = SUB168(auVar44 | auVar12,8) + dVar15;
            pdVar1 = (double *)(lVar9 + 0x20 + local_108);
            dVar16 = pdVar1[1];
            pdVar2 = (double *)(lVar9 + 0x30 + local_108);
            dVar17 = *pdVar2;
            dVar18 = pdVar2[1];
            pdVar2 = (double *)(local_108 + 0x20 + lVar8);
            dVar15 = pdVar2[1];
            pdVar3 = (double *)(local_108 + 0x20 + lVar8);
            *pdVar3 = *pdVar1 * dVar19 + *pdVar2;
            pdVar3[1] = dVar16 * dVar20 + dVar15;
            pdVar1 = (double *)(local_108 + 0x30 + lVar8);
            dVar15 = pdVar1[1];
            pdVar2 = (double *)(local_108 + 0x30 + lVar8);
            *pdVar2 = dVar17 * dVar21 + *pdVar1;
            pdVar2[1] = dVar18 * dVar22 + dVar15;
            pdVar1 = (double *)(lVar9 + 0x40 + local_108);
            dVar16 = pdVar1[1];
            pdVar2 = (double *)(lVar9 + 0x50 + local_108);
            dVar17 = *pdVar2;
            dVar18 = pdVar2[1];
            pdVar2 = (double *)(local_108 + 0x40 + lVar8);
            dVar15 = pdVar2[1];
            pdVar3 = (double *)(local_108 + 0x40 + lVar8);
            *pdVar3 = *pdVar1 * dVar19 + *pdVar2;
            pdVar3[1] = dVar16 * dVar20 + dVar15;
            pdVar1 = (double *)(local_108 + 0x50 + lVar8);
            dVar15 = pdVar1[1];
            pdVar2 = (double *)(local_108 + 0x50 + lVar8);
            *pdVar2 = dVar17 * dVar21 + *pdVar1;
            pdVar2[1] = dVar18 * dVar22 + dVar15;
            local_108 = local_108 + 0x60;
          } while (uVar32 != uVar37);
        }
      }
      else {
        if ((*(int *)&this_00->field_0x8 < 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar7 = *(undefined8 *)this_00;
        if ((*(int *)&this_00->field_0x8 < 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        BlendTransformAccumulate(*(undefined8 *)(&pFVar30->field_0x0 + lVar38),uVar7);
      }
      param_6._0_4_ = (uint)param_6 + 1;
      iVar33 = param_1->ArrayNum;
      local_d8 = local_d8 + 4;
      lVar38 = lVar38 + 0x18;
    } while ((int)(uint)param_6 < iVar33);
  }
  uVar37 = 1;
  if (1 < iVar33) {
    FCompactPose::NormalizeRotations(this_00);
  }
  if (0 < param_2->ArrayNum) {
    pTVar36 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_2->DataPtr;
    puVar34 = (uint *)param_5->DataPtr;
    pfVar29 = param_4->DataPtr;
    uVar7 = *(undefined8 *)&param_4->ArrayNum;
    iVar33 = (int)*(undefined8 *)&param_2->ArrayNum;
    if (0 < iVar33) {
      iVar35 = (int)*(undefined8 *)&param_5->ArrayNum;
      if ((iVar35 < 1) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar31 = (int)uVar7;
      uVar32 = *puVar34;
      uVar45 = 0;
      if ((int)uVar32 < iVar31) {
        uVar45 = ~uVar32 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar4 = pfVar29[(int)uVar32];
      if ((iVar33 < 1) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>(this,pTVar36,fVar4);
      fVar4 = __real_3727c5ac;
      if (1 < iVar33) {
        do {
          pTVar36 = pTVar36 + 1;
          puVar34 = puVar34 + 1;
          uVar32 = 0;
          if ((int)uVar37 < iVar35) {
            uVar32 = ~uVar37 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar28)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar32 = *puVar34;
          uVar45 = 0;
          if ((int)uVar32 < iVar31) {
            uVar45 = ~uVar32 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar28)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar45 = 0;
          if ((int)uVar37 < iVar33) {
            uVar45 = ~uVar37 >> 0x1f;
          }
          <Var5.Weight = pfVar29[(int)uVar32];
          if ((uVar45 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar28)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (fVar4 < <Var5.Weight) {
            UE::Anim::FNamedValueArrayUtils::
            Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)this,
                       (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar36,
                       <Var5);
          }
          uVar37 = uVar37 + 1;
        } while ((int)uVar37 < iVar33);
      }
    }
  }
  if (0 < param_3->ArrayNum) {
    local_a8.DataPtr = param_4->DataPtr;
    local_a8.ArrayNum = param_4->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_b8.DataPtr = param_5->DataPtr;
    local_b8.ArrayNum = param_5->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&param_5->field_0xc;
    local_98[0].DataPtr = param_3->DataPtr;
    local_98[0].ArrayNum = param_3->ArrayNum;
    local_98[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
    UE::Anim::Attributes::BlendAttributes(local_98,&local_a8,&local_b8,pFVar6);
  }
  return;
}

// BlendPosesTogetherIndirect @ 1473e96b0

void __cdecl
FAnimationRuntime::BlendPosesTogetherIndirect
          (TArrayView<FCompactPose_const_*_const,int> *param_1,
          TArrayView<FBlendedCurve_const_*_const,int> *param_2,TArrayView<float_const_,int> *param_3
          ,FCompactPose *param_4,FBlendedCurve *param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> local_68;
  FAnimationPoseData local_58;
  TArrayView<float_const_,int> local_38;
  TArrayView<FBlendedCurve_const_*_const,int> local_28;
  TArrayView<FCompactPose_const_*_const,int> local_18;
  
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58.Curve = param_5;
  local_58.Attributes = (FStackAttributeContainer *)&local_a8;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  local_68.DataPtr = (FStackAttributeContainer **)0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_90 = 0;
  local_88 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_58.Pose = param_4;
  BlendPosesTogetherIndirect(&local_18,&local_28,&local_68,&local_38,&local_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_88,(int)local_80);
  if (local_88 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_a8,(int)local_a0);
  if (local_a8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// BlendPosesTogetherIndirect @ 1473e97b0

void __cdecl
FAnimationRuntime::BlendPosesTogetherIndirect
          (TArrayView<FCompactPose_const_*_const,int> *param_1,
          TArrayView<FBlendedCurve_const_*_const,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> *param_3,
          TArrayView<float_const_,int> *param_4,FAnimationPoseData *param_5)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  FBlendedCurve *pFVar4;
  FCompactPose *this;
  FStackAttributeContainer *pFVar5;
  FCompactPose *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  longlong local_e8;
  longlong local_e0;
  TArrayView<float_const_,int> local_c8;
  TArrayView<FBlendedCurve_const_*_const,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_*_const,int> local_98 [5];
  uint uVar44;
  
  if ((param_1->ArrayNum < 1) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourcePoses.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x1cc,L""), bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar4 = param_5->Curve;
  this = param_5->Pose;
  pFVar5 = param_5->Attributes;
  if ((param_4->ArrayNum < 1) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar3 = *param_4->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar6 = *param_1->DataPtr;
  if (bAnim_BlendPoseOverwrite_ISPC_Enabled == false) {
    uVar31 = *(uint *)&pFVar6->field_0x8;
    uVar29 = 0;
    if (uVar31 != 0) {
      lVar32 = 0;
      dVar19 = (double)fVar3;
      dVar20 = (double)fVar3;
      dVar21 = (double)fVar3;
      uVar50 = SUB84((double)fVar3,0);
      uVar51 = (undefined4)((ulonglong)(double)fVar3 >> 0x20);
      do {
        uVar30 = 0;
        if ((int)uVar29 < *(int *)&this->field_0x8) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar9 = *(longlong *)this;
        uVar30 = 0;
        if ((int)uVar29 < *(int *)&pFVar6->field_0x8) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)pFVar6;
        auVar36._8_4_ = uVar50;
        auVar36._0_8_ = dVar21;
        auVar36._12_4_ = uVar51;
        uVar29 = uVar29 + 1;
        dVar22 = dVar20 * ((double *)(lVar32 + lVar7))[1];
        pdVar1 = (double *)(lVar32 + 0x10 + lVar7);
        dVar18 = *pdVar1;
        dVar45 = pdVar1[1];
        pdVar1 = (double *)(lVar32 + 0x40 + lVar7);
        dVar48 = *pdVar1;
        dVar17 = pdVar1[1];
        pdVar1 = (double *)(lVar32 + 0x50 + lVar7);
        dVar49 = *pdVar1;
        dVar23 = pdVar1[1];
        pdVar1 = (double *)(lVar32 + 0x20 + lVar7);
        dVar24 = *pdVar1;
        dVar35 = pdVar1[1];
        pdVar1 = (double *)(lVar32 + 0x30 + lVar7);
        dVar25 = *pdVar1;
        dVar26 = pdVar1[1];
        auVar13._8_4_ = SUB84(dVar22,0);
        auVar13._0_8_ = dVar19 * *(double *)(lVar32 + lVar7);
        auVar13._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(lVar32 + lVar9) = auVar13;
        dVar35 = dVar20 * dVar35;
        pdVar1 = (double *)(lVar32 + 0x10 + lVar9);
        *pdVar1 = dVar21 * dVar18;
        pdVar1[1] = auVar36._8_8_ * dVar45;
        auVar37._8_4_ = uVar50;
        auVar37._0_8_ = dVar21;
        auVar37._12_4_ = uVar51;
        auVar14._8_4_ = SUB84(dVar35,0);
        auVar14._0_8_ = dVar19 * dVar24;
        auVar14._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        *(undefined1 (*) [16])(lVar32 + 0x20 + lVar9) = auVar14;
        dVar17 = dVar20 * dVar17;
        pdVar1 = (double *)(lVar32 + 0x30 + lVar9);
        *pdVar1 = dVar21 * dVar25;
        pdVar1[1] = auVar37._8_8_ * dVar26;
        auVar38._8_4_ = uVar50;
        auVar38._0_8_ = dVar21;
        auVar38._12_4_ = uVar51;
        auVar15._8_4_ = SUB84(dVar17,0);
        auVar15._0_8_ = dVar19 * dVar48;
        auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(lVar32 + 0x40 + lVar9) = auVar15;
        pdVar1 = (double *)(lVar32 + 0x50 + lVar9);
        *pdVar1 = dVar21 * dVar49;
        pdVar1[1] = auVar38._8_8_ * dVar23;
        lVar32 = lVar32 + 0x60;
      } while (uVar29 != uVar31);
    }
  }
  else {
    if ((*(int *)&this->field_0x8 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((*(int *)&this->field_0x8 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    BlendTransformOverwrite(*(longlong *)pFVar6);
  }
  iVar28 = param_1->ArrayNum;
  uVar31 = 1;
  if (1 < iVar28) {
    local_e0 = 8;
    local_e8 = 4;
    do {
      uVar29 = 0;
      if ((int)uVar31 < param_4->ArrayNum) {
        uVar29 = ~uVar31 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar3 = *(float *)(local_e8 + (longlong)param_4->DataPtr);
      uVar29 = 0;
      if ((int)uVar31 < param_1->ArrayNum) {
        uVar29 = ~uVar31 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar8 = *(longlong **)(local_e0 + (longlong)param_1->DataPtr);
      if (bAnim_BlendPoseAccumulate_ISPC_Enabled == false) {
        uVar29 = *(uint *)(plVar8 + 1);
        uVar30 = 0;
        if (uVar29 != 0) {
          dVar19 = (double)fVar3;
          dVar20 = (double)fVar3;
          param_5 = (FAnimationPoseData *)0x0;
          dVar21 = (double)fVar3;
          dVar22 = (double)fVar3;
          uVar50 = (undefined4)((ulonglong)dVar22 >> 0x20);
          do {
            uVar44 = 0;
            if ((int)uVar30 < *(int *)&this->field_0x8) {
              uVar44 = ~uVar30 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar32 = *(longlong *)this;
            uVar44 = 0;
            if ((int)uVar30 < (int)plVar8[1]) {
              uVar44 = ~uVar30 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar9 = *plVar8;
            uVar30 = uVar30 + 1;
            pdVar1 = (double *)((longlong)&param_5->Pose + lVar9);
            dVar48 = dVar19 * *pdVar1;
            dVar49 = dVar20 * pdVar1[1];
            pdVar1 = (double *)((longlong)&param_5->Attributes + lVar9);
            dVar17 = dVar21 * *pdVar1;
            dVar18 = dVar22 * pdVar1[1];
            pdVar1 = (double *)((longlong)&param_5->Pose + lVar32);
            auVar39._8_4_ = SUB84(dVar18,0);
            auVar39._0_8_ = dVar17;
            auVar39._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            pdVar2 = (double *)((longlong)&param_5->Attributes + lVar32);
            dVar35 = dVar17 * *pdVar2 + dVar48 * *pdVar1;
            dVar45 = auVar39._8_8_ * pdVar2[1] + dVar49 * pdVar1[1];
            uVar33 = -(ulonglong)(0.0 <= dVar45 + dVar35);
            uVar34 = -(ulonglong)(0.0 <= dVar35 + dVar45);
            uVar47 = (uint)(uVar34 >> 0x20);
            uVar44 = (uint)(uVar33 >> 0x20);
            auVar40._0_8_ = (ulonglong)dVar48 & uVar33;
            auVar40._8_4_ = (undefined4)((ulonglong)dVar49 & uVar34);
            auVar40._12_4_ = (undefined4)(((ulonglong)dVar49 & uVar34) >> 0x20);
            auVar46._0_4_ = ~(uint)uVar33 & SUB84(0.0 - dVar48,0);
            auVar46._4_4_ = ~uVar44 & (uint)((ulonglong)(0.0 - dVar48) >> 0x20);
            auVar46._8_4_ = ~(uint)uVar34 & SUB84(0.0 - dVar49,0);
            auVar46._12_4_ = ~uVar47 & (uint)((ulonglong)(0.0 - dVar49) >> 0x20);
            pdVar1 = (double *)((longlong)&param_5->Pose + lVar32);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)((longlong)&param_5->Pose + lVar32);
            *pdVar2 = SUB168(auVar46 | auVar40,0) + *pdVar1;
            pdVar2[1] = SUB168(auVar46 | auVar40,8) + dVar35;
            auVar41._0_4_ = ~(uint)uVar33 & SUB84(0.0 - dVar17,0);
            auVar41._4_4_ = ~uVar44 & (uint)((ulonglong)(0.0 - dVar17) >> 0x20);
            auVar41._8_4_ = ~(uint)uVar34 & SUB84(0.0 - dVar18,0);
            auVar41._12_4_ = ~uVar47 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
            auVar16._8_4_ = (int)((ulonglong)dVar18 & uVar34);
            auVar16._0_8_ = (ulonglong)dVar17 & uVar33;
            auVar16._12_4_ = (int)(((ulonglong)dVar18 & uVar34) >> 0x20);
            pdVar1 = (double *)((longlong)&param_5->Attributes + lVar32);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)((longlong)&param_5->Attributes + lVar32);
            *pdVar2 = SUB168(auVar41 | auVar16,0) + *pdVar1;
            pdVar2[1] = SUB168(auVar41 | auVar16,8) + dVar35;
            pdVar1 = (double *)((longlong)&param_5[1].Curve + lVar9);
            pdVar2 = (double *)((longlong)&param_5[2].Pose + lVar9);
            dVar17 = *pdVar2;
            dVar18 = pdVar2[1];
            auVar42._8_4_ = SUB84(dVar22,0);
            auVar42._0_8_ = dVar21;
            auVar42._12_4_ = uVar50;
            pdVar2 = (double *)((longlong)&param_5[1].Curve + lVar32);
            dVar35 = dVar20 * pdVar1[1] + pdVar2[1];
            auVar11._8_4_ = SUB84(dVar35,0);
            auVar11._0_8_ = dVar19 * *pdVar1 + *pdVar2;
            auVar11._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            *(undefined1 (*) [16])((longlong)&param_5[1].Curve + lVar32) = auVar11;
            pdVar1 = (double *)((longlong)&param_5[2].Pose + lVar32);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)((longlong)&param_5[2].Pose + lVar32);
            *pdVar2 = dVar21 * dVar17 + *pdVar1;
            pdVar2[1] = auVar42._8_8_ * dVar18 + dVar35;
            pdVar1 = (double *)((longlong)&param_5[2].Attributes + lVar9);
            pdVar2 = (double *)((longlong)&param_5[3].Curve + lVar9);
            dVar17 = *pdVar2;
            dVar18 = pdVar2[1];
            auVar43._8_4_ = SUB84(dVar22,0);
            auVar43._0_8_ = dVar21;
            auVar43._12_4_ = uVar50;
            pdVar2 = (double *)((longlong)&param_5[2].Attributes + lVar32);
            dVar35 = dVar20 * pdVar1[1] + pdVar2[1];
            auVar12._8_4_ = SUB84(dVar35,0);
            auVar12._0_8_ = dVar19 * *pdVar1 + *pdVar2;
            auVar12._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            *(undefined1 (*) [16])((longlong)&param_5[2].Attributes + lVar32) = auVar12;
            pdVar1 = (double *)((longlong)&param_5[3].Curve + lVar32);
            dVar35 = pdVar1[1];
            pdVar2 = (double *)((longlong)&param_5[3].Curve + lVar32);
            *pdVar2 = dVar21 * dVar17 + *pdVar1;
            pdVar2[1] = auVar43._8_8_ * dVar18 + dVar35;
            param_5 = param_5 + 4;
          } while (uVar30 != uVar29);
        }
      }
      else {
        if ((*(int *)&this->field_0x8 < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((*(int *)&this->field_0x8 < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        BlendTransformAccumulate(*plVar8);
      }
      uVar31 = uVar31 + 1;
      local_e8 = local_e8 + 4;
      iVar28 = param_1->ArrayNum;
      local_e0 = local_e0 + 8;
    } while ((int)uVar31 < iVar28);
  }
  if (1 < iVar28) {
    FCompactPose::NormalizeRotations(this);
  }
  if (0 < param_2->ArrayNum) {
    local_c8.DataPtr = param_4->DataPtr;
    local_c8.ArrayNum = param_4->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_b8.DataPtr = param_2->DataPtr;
    local_b8.ArrayNum = param_2->ArrayNum;
    local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    BlendCurves(&local_b8,&local_c8,pFVar4);
  }
  if (0 < param_3->ArrayNum) {
    local_a8.DataPtr = param_4->DataPtr;
    local_a8.ArrayNum = param_4->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_98[0].DataPtr = param_3->DataPtr;
    local_98[0].ArrayNum = param_3->ArrayNum;
    local_98[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
    UE::Anim::Attributes::BlendAttributes(local_98,&local_a8,pFVar5);
  }
  return;
}

// BlendPosesTogetherPerBone @ 1473e9ef0

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBone
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,IInterpolationIndexProvider *param_3,
          TArrayView<FBlendSampleData_const_,int> *param_4,FCompactPose *param_5,
          FBlendedCurve *param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_68;
  FAnimationPoseData local_58;
  TArrayView<FBlendSampleData_const_,int> local_38;
  TArrayView<FBlendedCurve_const_,int> local_28;
  TArrayView<FCompactPose_const_,int> local_18;
  
  local_38.DataPtr = param_4->DataPtr;
  local_38.ArrayNum = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_58.Pose = param_5;
  local_58.Curve = param_6;
  local_58.Attributes = (FStackAttributeContainer *)&local_a8;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_68.DataPtr = (FStackAttributeContainer *)0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_90 = 0;
  local_88 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  BlendPosesTogetherPerBone(&local_18,&local_28,&local_68,param_3,&local_38,&local_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_88,(int)local_80);
  if (local_88 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_a8,(int)local_a0);
  if (local_a8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// BlendPosesTogetherPerBone @ 1473ea000

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBone
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,IInterpolationIndexProvider *param_3,
          TArrayView<FBlendSampleData_const_,int> *param_4,TArrayView<int_const_,int> *param_5,
          FCompactPose *param_6,FBlendedCurve *param_7)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  undefined8 local_b0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_78;
  FAnimationPoseData local_68;
  TArrayView<int_const_,int> local_48;
  TArrayView<FBlendSampleData_const_,int> local_38;
  TArrayView<FBlendedCurve_const_,int> local_28;
  TArrayView<FCompactPose_const_,int> local_18;
  
  local_38.DataPtr = param_4->DataPtr;
  local_38.ArrayNum = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_68.Pose = param_6;
  local_68.Curve = param_7;
  local_68.Attributes = (FStackAttributeContainer *)&local_b8;
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = param_5->DataPtr;
  local_48.ArrayNum = param_5->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_b8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_78.DataPtr = (FStackAttributeContainer *)0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_b0 = 0;
  local_a8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  BlendPosesTogetherPerBone(&local_18,&local_28,&local_78,param_3,&local_38,&local_48,&local_68);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_a8,(int)local_a0);
  if (local_a8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_b8,(int)local_b0);
  if (local_b8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}

// BlendPosesTogetherPerBone @ 1473ea120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBone
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_3,
          IInterpolationIndexProvider *param_4,TArrayView<FBlendSampleData_const_,int> *param_5,
          FAnimationPoseData *param_6)

{
  undefined4 uVar1;
  float fVar2;
  <lambda_1> <Var3;
  FCompactPose *this;
  code *pcVar4;
  undefined8 uVar5;
  TArrayView<FBlendedCurve_const_,int> *pTVar6;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *pTVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  UObject *pUVar12;
  FCompactPose *pFVar13;
  FBlendSampleData *pFVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ForElementType<float> FVar20;
  longlong lVar21;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *pTVar22;
  ulonglong uVar23;
  undefined1 local_res8 [8];
  TArrayView<FBlendedCurve_const_,int> *local_res10;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *local_res18;
  uint local_res20 [2];
  TArray<int,TMemStackAllocator<0>_> local_178;
  ForElementType<float> local_168;
  int local_160 [2];
  FMemMark local_158;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_130;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_128;
  undefined8 uStack_120;
  FStackAttributeContainer *local_118;
  code *local_110;
  undefined1 *local_108;
  int *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  int *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  int *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  TReferenceControllerBase<1> *local_c0;
  TArrayView<int,int> local_b8;
  TArrayView<int,int> local_a8;
  TArrayView<FBlendSampleData_const_,int> local_98;
  TArrayView<int_const_,int> local_88;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_78 [3];
  
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_1->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourcePoses.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0x28b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this = param_6->Pose;
  local_130 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_6->Curve;
  local_118 = param_6->Attributes;
  puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_108 = local_res8;
  local_110 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_110,puVar10);
  uVar16 = 0;
  local_178.AllocatorInstance.Data = (int *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  local_158.Mem = (FMemStackBase *)(pFVar11 + 2);
  local_158.Top = (local_158.Mem)->Top;
  local_158.SavedChunk = *(FTaggedMemory **)(pFVar11 + 4);
  local_158.bPopped = false;
  local_158.NextTopmostMark = *(FMemMark **)(pFVar11 + 5);
  pFVar11[5] = (FTlsAutoCleanup)&local_158;
  *(int *)(pFVar11 + 6) = *(int *)(pFVar11 + 6) + 1;
  TArray<int,TMemStackAllocator<0>_>::SetNumUninitialized
            (&local_178,*(int *)&this->field_0x8,Default);
  lVar21 = *(longlong *)&this->field_0x10;
  pcVar4 = *(code **)*param_4;
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar21 + 0x40));
  (*pcVar4)(param_4,&local_c8,pUVar12);
  uVar19 = *(uint *)&this->field_0x8;
  if (uVar19 != 0) {
    do {
      local_res20[0] = uVar16;
      iVar9 = (**(code **)((longlong)*param_4 + 0x10))(param_4,local_res20,lVar21,local_c8);
      lVar18 = (longlong)(int)local_res20[0];
      uVar15 = 0;
      if ((int)local_res20[0] < local_178.ArrayNum) {
        uVar15 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = uVar16 + 1;
      local_178.AllocatorInstance.Data[lVar18] = iVar9;
    } while (uVar16 != uVar19);
  }
  pFVar13 = TArrayView<FCompactPose_const_,int>::operator[](param_1,0);
  pFVar14 = TArrayView<FBlendSampleData_const_,int>::operator[](param_5,0);
  iStack_f0 = local_178.ArrayNum;
  local_f8 = local_178.AllocatorInstance.Data;
  if ((local_178.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b8._12_4_ = uStack_ec;
  local_b8.ArrayNum = iStack_f0;
  local_b8.DataPtr = local_f8;
  BlendPosePerBone<0>(&local_b8,pFVar14,this,pFVar13);
  iVar9 = param_1->ArrayNum;
  uVar19 = 1;
  if (1 < iVar9) {
    do {
      uVar16 = 0;
      if ((int)uVar19 < iVar9) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = param_1->DataPtr;
      uVar16 = 0;
      if ((int)uVar19 < param_5->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = local_178.ArrayNum;
      pFVar14 = param_5->DataPtr;
      local_e8 = local_178.AllocatorInstance.Data;
      if ((local_178.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_e0 = iVar9;
      local_a8._12_4_ = uStack_dc;
      local_a8.ArrayNum = iVar9;
      local_a8.DataPtr = local_e8;
      BlendPosePerBone<1>(&local_a8,pFVar14 + (int)uVar19,this,pFVar13 + (int)uVar19);
      iVar9 = param_1->ArrayNum;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < iVar9);
  }
  FCompactPose::NormalizeRotations(this);
  if (0 < local_res10->ArrayNum) {
    uVar19 = param_5->ArrayNum;
    uVar23 = (ulonglong)uVar19;
    lVar21 = 0;
    local_168.Data = (float *)0x0;
    iVar9 = 0;
    local_160[0] = 0;
    local_160[1] = 0;
    if ((int)uVar19 < 1) {
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar23);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<float>_>
                (4,4,uVar19,&local_168,local_160,local_160 + 1);
      iVar9 = local_160[0];
      uVar19 = 0;
      lVar18 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar19 < (int)uVar23) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar1 = *(undefined4 *)((longlong)&param_5->DataPtr->TotalWeight + lVar18);
        uVar16 = 0;
        if ((int)uVar19 < iVar9) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar19 = uVar19 + 1;
        uVar16 = param_5->ArrayNum;
        uVar23 = (ulonglong)uVar16;
        lVar18 = lVar18 + 0x60;
        *(undefined4 *)((longlong)local_168.Data + lVar21) = uVar1;
        lVar21 = lVar21 + 4;
      } while ((int)uVar19 < (int)uVar16);
    }
    FVar20.Data = local_168.Data;
    pTVar6 = local_res10;
    uVar19 = 1;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_128 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar6->DataPtr;
    uStack_120 = *(undefined8 *)&pTVar6->ArrayNum;
    iVar17 = (int)*(undefined8 *)&pTVar6->ArrayNum;
    if (0 < iVar17) {
      if ((iVar9 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar2 = *FVar20.Data;
      if ((iVar17 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar22 = local_128;
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>(local_130,local_128,fVar2);
      fVar2 = __real_3727c5ac;
      if (1 < iVar17) {
        do {
          pTVar22 = pTVar22 + 1;
          FVar20.Data = FVar20.Data + 1;
          uVar16 = 0;
          if ((int)uVar19 < iVar9) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          <Var3.Weight = *FVar20.Data;
          uVar16 = 0;
          if ((int)uVar19 < iVar17) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (fVar2 < <Var3.Weight) {
            UE::Anim::FNamedValueArrayUtils::
            Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_130,
                       (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar22,
                       <Var3);
          }
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < iVar17);
      }
    }
  }
  pTVar7 = local_res18;
  if (0 < local_res18->ArrayNum) {
    iVar9 = local_178.ArrayNum;
    pFVar14 = param_5->DataPtr;
    uVar5._0_4_ = param_5->ArrayNum;
    uVar5._4_4_ = *(undefined4 *)&param_5->field_0xc;
    local_d8 = local_178.AllocatorInstance.Data;
    if ((local_178.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_78[0].DataPtr = pTVar7->DataPtr;
    local_78[0].ArrayNum = pTVar7->ArrayNum;
    local_78[0]._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    iStack_d0 = iVar9;
    local_88._12_4_ = uStack_cc;
    local_88.ArrayNum = iVar9;
    local_88.DataPtr = local_d8;
    local_98.DataPtr = pFVar14;
    local_98._8_8_ = uVar5;
    UE::Anim::Attributes::BlendAttributesPerBone(local_78,&local_88,&local_98,local_118);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  if (local_158.bPopped == false) {
    if (((local_158.Mem)->TopMark != &local_158) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_158.bPopped = true;
    (local_158.Mem)->NumMarks = (local_158.Mem)->NumMarks + -1;
    if (local_158.SavedChunk != (local_158.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_158.Mem,local_158.SavedChunk);
    }
    (local_158.Mem)->Top = local_158.Top;
    (local_158.Mem)->TopMark = local_158.NextTopmostMark;
  }
  return;
}

// BlendPosesTogetherPerBone @ 1473ea8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBone
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_3,
          IInterpolationIndexProvider *param_4,TArrayView<FBlendSampleData_const_,int> *param_5,
          TArrayView<int_const_,int> *param_6,FAnimationPoseData *param_7)

{
  float fVar1;
  <lambda_1> <Var2;
  FCompactPose *pFVar3;
  code *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  UObject *pUVar14;
  FCompactPose *pFVar15;
  FBlendSampleData *pFVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  TArrayView<FBlendedCurve_const_,int> *pTVar22;
  longlong lVar23;
  TArrayView<FBlendSampleData_const_,int> *pTVar24;
  ForElementType<float> FVar25;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *pTVar26;
  TArrayView<int_const_,int> *pTVar27;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [4];
  uint local_204;
  TArrayView<int_const_,int> *local_200;
  TArray<int,TMemStackAllocator<0>_> local_1f8;
  TArrayView<FBlendSampleData_const_,int> *local_1e8;
  FCompactPose *local_1e0;
  FMemMark local_1d8;
  FCompactPose *local_1b0;
  TArrayView<FBlendedCurve_const_,int> *local_1a8;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_1a0;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_198;
  undefined8 uStack_190;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *local_188;
  FStackAttributeContainer *local_180;
  code *local_178;
  undefined1 *local_170;
  int *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  int *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  int *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  TReferenceControllerBase<1> *local_130;
  TArrayView<int,int> local_128;
  TArrayView<int,int> local_118;
  TArrayView<int_const_,int> local_108;
  TArrayView<FBlendSampleData_const_,int> local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_d8;
  ForElementType<float> local_c8;
  int local_80 [2];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e8 = param_5;
  local_200 = param_6;
  local_1e0 = (FCompactPose *)param_1;
  local_1a8 = param_2;
  local_188 = param_3;
  if ((param_1->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourcePoses.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0x2c8,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1a0 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_7->Curve;
  pFVar3 = param_7->Pose;
  local_180 = param_7->Attributes;
  local_1b0 = pFVar3;
  puVar12 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_170 = local_208;
  local_178 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar13 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_178,puVar12);
  uVar18 = 0;
  local_1f8.AllocatorInstance.Data = (int *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  local_1d8.Mem = (FMemStackBase *)(pFVar13 + 2);
  local_1d8.Top = (local_1d8.Mem)->Top;
  local_1d8.SavedChunk = *(FTaggedMemory **)(pFVar13 + 4);
  local_1d8.bPopped = false;
  local_1d8.NextTopmostMark = *(FMemMark **)(pFVar13 + 5);
  pFVar13[5] = (FTlsAutoCleanup)&local_1d8;
  *(int *)(pFVar13 + 6) = *(int *)(pFVar13 + 6) + 1;
  TArray<int,TMemStackAllocator<0>_>::SetNumUninitialized
            (&local_1f8,*(int *)&pFVar3->field_0x8,Default);
  lVar23 = *(longlong *)&pFVar3->field_0x10;
  pcVar4 = *(code **)*param_4;
  pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar23 + 0x40));
  (*pcVar4)(param_4,&local_138,pUVar14);
  uVar21 = *(uint *)&pFVar3->field_0x8;
  if (uVar21 != 0) {
    do {
      local_204 = uVar18;
      iVar10 = (**(code **)((longlong)*param_4 + 0x10))(param_4,&local_204,lVar23,local_138);
      lVar20 = (longlong)(int)local_204;
      uVar17 = 0;
      if ((int)local_204 < local_1f8.ArrayNum) {
        uVar17 = ~local_204 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = uVar18 + 1;
      local_1f8.AllocatorInstance.Data[lVar20] = iVar10;
      param_1 = (TArrayView<FCompactPose_const_,int> *)local_1e0;
    } while (uVar18 != uVar21);
  }
  pFVar15 = TArrayView<FCompactPose_const_,int>::operator[](param_1,0);
  pTVar27 = local_200;
  if ((local_200->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar24 = local_1e8;
  pFVar16 = TArrayView<FBlendSampleData_const_,int>::operator[](local_1e8,*pTVar27->DataPtr);
  iStack_160 = local_1f8.ArrayNum;
  local_168 = local_1f8.AllocatorInstance.Data;
  if ((local_1f8.ArrayNum < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_128._12_4_ = uStack_15c;
  local_128.ArrayNum = iStack_160;
  local_128.DataPtr = local_168;
  BlendPosePerBone<0>(&local_128,pFVar16,pFVar3,pFVar15);
  pFVar3 = local_1e0;
  iVar10 = *(int *)&((FCompactPose *)param_1)->field_0x8;
  uVar21 = 1;
  if (1 < iVar10) {
    lVar23 = 4;
    do {
      uVar18 = 0;
      if ((int)uVar21 < iVar10) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_1e0 = *(FCompactPose **)&pFVar3->field_0x0;
      uVar18 = 0;
      if ((int)uVar21 < pTVar27->ArrayNum) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar24 = local_1e8;
      uVar18 = *(uint *)((longlong)pTVar27->DataPtr + lVar23);
      uVar17 = 0;
      if ((int)uVar18 < local_1e8->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = pTVar24->DataPtr;
      iVar10 = local_1f8.ArrayNum;
      local_158 = local_1f8.AllocatorInstance.Data;
      if ((local_1f8.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iStack_150 = iVar10;
      local_118._12_4_ = uStack_14c;
      local_118.ArrayNum = iVar10;
      local_118.DataPtr = local_158;
      BlendPosePerBone<1>(&local_118,pFVar16 + (int)uVar18,local_1b0,local_1e0 + (int)uVar21);
      iVar10 = *(int *)&pFVar3->field_0x8;
      uVar21 = uVar21 + 1;
      lVar23 = lVar23 + 4;
      pTVar24 = local_1e8;
      pTVar27 = local_200;
    } while ((int)uVar21 < iVar10);
  }
  uVar21 = 1;
  FCompactPose::NormalizeRotations(local_1b0);
  pTVar22 = local_1a8;
  if (0 < local_1a8->ArrayNum) {
    iVar10 = pTVar27->ArrayNum;
    local_80[1] = 0x10;
    local_c8.SecondaryData = (ForElementType<float>)0x0;
    local_80[0] = 0;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,iVar10,&local_c8,local_80,local_80 + 1);
    uVar18 = 0;
    if (0 < iVar10) {
      lVar23 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar18 < iVar10) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar17 = *(uint *)(lVar23 + (longlong)pTVar27->DataPtr);
        uVar11 = 0;
        if ((int)uVar17 < pTVar24->ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar1 = pTVar24->DataPtr[(int)uVar17].TotalWeight;
        uVar17 = 0;
        if ((int)uVar18 < local_80[0]) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = pTVar27->ArrayNum;
        FVar25 = (ForElementType<float>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<float>)0x0) {
          FVar25 = local_c8.SecondaryData;
        }
        uVar18 = uVar18 + 1;
        *(float *)((longlong)FVar25 + lVar23) = fVar1;
        lVar23 = lVar23 + 4;
        pTVar22 = local_1a8;
      } while ((int)uVar18 < iVar10);
    }
    iVar10 = local_80[0];
    FVar25 = (ForElementType<float>)&local_c8;
    if (local_c8.SecondaryData != (ForElementType<float>)0x0) {
      FVar25 = local_c8.SecondaryData;
    }
    if ((local_80[0] < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_198 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar22->DataPtr
    ;
    uStack_190 = *(undefined8 *)&pTVar22->ArrayNum;
    iVar19 = (int)*(undefined8 *)&pTVar22->ArrayNum;
    if (0 < iVar19) {
      if ((iVar10 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar1 = *(float *)FVar25;
      if ((iVar19 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar26 = local_198;
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>(local_1a0,local_198,fVar1);
      fVar1 = __real_3727c5ac;
      pTVar27 = local_200;
      if (1 < iVar19) {
        do {
          pTVar26 = pTVar26 + 1;
          FVar25 = (ForElementType<float>)((longlong)FVar25 + 4);
          uVar18 = 0;
          if ((int)uVar21 < iVar10) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          <Var2.Weight = *(float *)FVar25;
          uVar18 = 0;
          if ((int)uVar21 < iVar19) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (fVar1 < <Var2.Weight) {
            UE::Anim::FNamedValueArrayUtils::
            Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_1a0,
                       (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar26,
                       <Var2);
          }
          uVar21 = uVar21 + 1;
          pTVar27 = local_200;
        } while ((int)uVar21 < iVar19);
      }
    }
    if (local_c8.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  pTVar8 = local_188;
  if (0 < local_188->ArrayNum) {
    iVar10 = local_1f8.ArrayNum;
    piVar5 = pTVar27->DataPtr;
    uVar6._0_4_ = pTVar27->ArrayNum;
    uVar6._4_4_ = *(undefined4 *)&pTVar27->field_0xc;
    pFVar16 = local_1e8->DataPtr;
    uVar7._0_4_ = local_1e8->ArrayNum;
    uVar7._4_4_ = *(undefined4 *)&local_1e8->field_0xc;
    local_148 = local_1f8.AllocatorInstance.Data;
    if ((local_1f8.ArrayNum < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_d8.DataPtr = pTVar8->DataPtr;
    local_d8.ArrayNum = pTVar8->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    iStack_140 = iVar10;
    local_e8._12_4_ = uStack_13c;
    local_e8.ArrayNum = iVar10;
    local_e8.DataPtr = local_148;
    local_108.DataPtr = piVar5;
    local_108._8_8_ = uVar6;
    local_f8.DataPtr = pFVar16;
    local_f8._8_8_ = uVar7;
    UE::Anim::Attributes::BlendAttributesPerBone(&local_d8,&local_e8,&local_f8,&local_108,local_180)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  if (local_1d8.bPopped == false) {
    if (((local_1d8.Mem)->TopMark != &local_1d8) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1d8.bPopped = true;
    (local_1d8.Mem)->NumMarks = (local_1d8.Mem)->NumMarks + -1;
    if (local_1d8.SavedChunk != (local_1d8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_1d8.Mem,local_1d8.SavedChunk);
    }
    (local_1d8.Mem)->Top = local_1d8.Top;
    (local_1d8.Mem)->TopMark = local_1d8.NextTopmostMark;
  }
  return;
}

// BlendPosesTogetherPerBoneInMeshSpace @ 1473eb1e0

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBoneInMeshSpace
          (TArrayView<FCompactPose,int> *param_1,TArrayView<FBlendedCurve_const_,int> *param_2,
          UBlendSpace *param_3,TArrayView<FBlendSampleData_const_,int> *param_4,
          FCompactPose *param_5,FBlendedCurve *param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  undefined8 local_a0;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_68;
  FAnimationPoseData local_58;
  TArrayView<FBlendSampleData_const_,int> local_38;
  TArrayView<FBlendedCurve_const_,int> local_28;
  TArrayView<FCompactPose,int> local_18;
  
  local_38.DataPtr = param_4->DataPtr;
  local_38.ArrayNum = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_58.Pose = param_5;
  local_58.Curve = param_6;
  local_58.Attributes = (FStackAttributeContainer *)&local_a8;
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_68.DataPtr = (FStackAttributeContainer *)0x0;
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_a0 = 0;
  local_98 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_90 = 0;
  local_88 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  BlendPosesTogetherPerBoneInMeshSpace(&local_18,&local_28,&local_68,param_3,&local_38,&local_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_88,(int)local_80);
  if (local_88 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_98,(int)local_90);
  if (local_98 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_a8,(int)local_a0);
  if (local_a8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// BlendPosesTogetherPerBoneInMeshSpace @ 1473eb2f0

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBoneInMeshSpace
          (TArrayView<FCompactPose,int> *param_1,TArrayView<FBlendedCurve_const_,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_3,UBlendSpace *param_4,
          TArrayView<FBlendSampleData_const_,int> *param_5,FAnimationPoseData *param_6)

{
  FCompactPose *pFVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  FCompactPose *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  bool bVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  FCompactPose *pFVar29;
  IInterpolationIndexProvider *pIVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar54;
  uint uVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 auVar61 [16];
  double dVar62;
  FCompactPoseBoneIndex local_108;
  FCompactPoseBoneIndex local_104;
  double local_100;
  FCompactPose *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<FBlendSampleData_const_,int> local_e8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_d8;
  TArrayView<FBlendedCurve_const_,int> local_c8;
  TArrayView<FCompactPose_const_,int> local_b8 [5];
  
  dVar60 = __real_3e45798ee0000000;
  pFVar29 = param_1->DataPtr;
  pFVar5 = param_6->Pose;
  pFVar1 = pFVar29 + param_1->ArrayNum;
  do {
    if (pFVar29 == pFVar1) {
      local_f8 = param_1->DataPtr;
      iStack_f0 = param_1->ArrayNum;
      uVar22 = param_1->DataPtr;
      uVar23 = param_1->ArrayNum;
      local_b8[0].ArrayNum = uVar23;
      local_b8[0].DataPtr = (FCompactPose *)uVar22;
      pIVar30 = (IInterpolationIndexProvider *)&param_4->_padding_;
      if (param_4 == (UBlendSpace *)0x0) {
        pIVar30 = (IInterpolationIndexProvider *)0x0;
      }
      local_e8.DataPtr = param_5->DataPtr;
      local_e8.ArrayNum = param_5->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_d8.DataPtr = param_3->DataPtr;
      local_d8.ArrayNum = param_3->ArrayNum;
      local_d8._12_4_ = *(undefined4 *)&param_3->field_0xc;
      local_b8[0]._12_4_ = uStack_ec;
      local_c8.DataPtr = param_2->DataPtr;
      local_c8.ArrayNum = param_2->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      BlendPosesTogetherPerBone(local_b8,&local_c8,&local_d8,pIVar30,&local_e8,param_6);
      uVar4 = *(uint *)&pFVar5->field_0x8;
      while( true ) {
        do {
          uVar4 = uVar4 - 1;
          if (uVar4 == 0xffffffff) {
            GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] =
                 GlobalVectorConstants::DoubleOne.XY.m128d_f64[0];
            GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] =
                 GlobalVectorConstants::DoubleOne.XY.m128d_f64[1];
            GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] =
                 GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
            GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] =
                 GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1];
            GlobalVectorConstants::Double0001.XY.m128d_f64[0] =
                 GlobalVectorConstants::Double0001.XY.m128d_f64[0];
            GlobalVectorConstants::Double0001.XY.m128d_f64[1] =
                 GlobalVectorConstants::Double0001.XY.m128d_f64[1];
            GlobalVectorConstants::Double0001.ZW.m128d_f64[0] =
                 GlobalVectorConstants::Double0001.ZW.m128d_f64[0];
            GlobalVectorConstants::Double0001.ZW.m128d_f64[1] =
                 GlobalVectorConstants::Double0001.ZW.m128d_f64[1];
            GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] =
                 GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0];
            GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] =
                 GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1];
            GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] =
                 GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0];
            GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] =
                 GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] =
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            return;
          }
          FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&pFVar5->field_0x10,&local_104);
          lVar28 = (longlong)(int)local_104;
        } while (local_104 == (FCompactPoseBoneIndex)0xffffffff);
        uVar27 = 0;
        if ((int)local_104 < *(int *)&pFVar5->field_0x8) {
          uVar27 = ~(uint)local_104 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pdVar2 = (double *)(lVar28 * 0x60 + *(longlong *)pFVar5);
        pdVar3 = (double *)(lVar28 * 0x60 + 0x10 + *(longlong *)pFVar5);
        dVar60 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar62 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar27 = 0;
        if ((int)uVar4 < *(int *)&pFVar5->field_0x8) {
          uVar27 = ~uVar4 >> 0x1f;
        }
        dVar43 = *pdVar3 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar50 = pdVar3[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        auVar38._8_4_ = SUB84(dVar50,0);
        auVar38._0_8_ = dVar50;
        auVar38._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        auVar48._8_4_ = SUB84(dVar62,0);
        auVar48._0_8_ = dVar62;
        auVar48._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
        pdVar2 = (double *)((longlong)(int)uVar4 * 0x60 + 0x10 + *(longlong *)pFVar5);
        dVar16 = *pdVar2;
        dVar19 = pdVar2[1];
        pdVar2 = (double *)((longlong)(int)uVar4 * 0x60 + *(longlong *)pFVar5);
        dVar20 = *pdVar2;
        dVar21 = pdVar2[1];
        uVar27 = 0;
        if ((int)uVar4 < *(int *)&pFVar5->field_0x8) {
          uVar27 = ~uVar4 >> 0x1f;
        }
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        auVar39._8_4_ = SUB84(dVar43,0);
        auVar39._0_8_ = dVar43;
        auVar39._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        dVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        dVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar17 = dVar60 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar38._8_8_ * dVar21 +
                 auVar48._8_8_ * dVar19 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar39._8_8_ * dVar20 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar14 = dVar60 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar50 * dVar19 +
                 dVar62 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar43 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar28 = *(longlong *)pFVar5;
        auVar15._8_4_ = SUB84(dVar17,0);
        auVar15._0_8_ =
             dVar60 * dVar19 * dVar7 + dVar50 * dVar20 + dVar62 * dVar16 * dVar56 +
             dVar43 * dVar21 * dVar8;
        auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])((longlong)(int)uVar4 * 0x60 + lVar28) = auVar15;
        auVar13._8_4_ = SUB84(dVar14,0);
        auVar13._0_8_ =
             dVar60 * dVar21 * dVar12 + dVar50 * dVar16 + dVar62 * dVar20 * dVar57 +
             dVar43 * dVar19 * dVar9;
        auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])((longlong)(int)uVar4 * 0x60 + 0x10 + lVar28) = auVar13;
        uVar27 = 0;
        if ((int)uVar4 < *(int *)&pFVar5->field_0x8) {
          uVar27 = ~uVar4 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) break;
        lVar28 = *(longlong *)pFVar5;
        lVar26 = (longlong)(int)uVar4 * 0x60;
        dVar50 = SUB168(*(undefined1 (*) [16])(lVar26 + lVar28),0);
        pdVar2 = (double *)(lVar26 + 0x10 + lVar28);
        dVar60 = *pdVar2;
        dVar62 = pdVar2[1];
        dVar43 = SUB168(*(undefined1 (*) [16])(lVar26 + lVar28),8);
        auVar49._0_8_ = dVar60 * dVar60 + dVar50 * dVar50;
        auVar49._8_8_ = dVar62 * dVar62 + dVar43 * dVar43;
        auVar40._8_4_ = SUB84(auVar49._8_8_,0);
        auVar40._0_8_ = auVar49._0_8_;
        auVar40._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
        auVar41._0_8_ = auVar40._8_8_ + auVar49._0_8_;
        auVar41._8_8_ = auVar49._0_8_ + auVar49._8_8_;
        auVar58 = sqrtpd(auVar49,auVar41);
        uVar32 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar41._0_8_);
        uVar33 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar41._8_8_);
        uVar31 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar41._0_8_);
        uVar34 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar41._8_8_);
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar58);
        auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar58);
        auVar42._0_8_ = uVar31 & (ulonglong)(auVar52._0_8_ * dVar50);
        uVar18 = uVar34 & (ulonglong)(auVar52._8_8_ * dVar43);
        auVar42._8_4_ = (undefined4)uVar18;
        auVar42._12_4_ = (undefined4)(uVar18 >> 0x20);
        auVar53._0_8_ = uVar32 & (ulonglong)(auVar58._0_8_ * dVar60);
        uVar18 = uVar33 & (ulonglong)(auVar58._8_8_ * dVar62);
        auVar53._8_4_ = (undefined4)uVar18;
        auVar53._12_4_ = (undefined4)(uVar18 >> 0x20);
        auVar11._4_4_ =
             ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar11._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar11._8_4_ = ~(uint)uVar34 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar11._12_4_ =
             ~(uint)(uVar34 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar10._4_4_ =
             ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar10._0_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar10._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar10._12_4_ =
             ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(lVar26 + lVar28) = auVar42 | auVar11;
        *(undefined1 (*) [16])(lVar26 + 0x10 + lVar28) = auVar53 | auVar10;
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar27 = 0;
    uVar4 = *(uint *)&pFVar29->field_0x8;
    if (uVar4 != 0) {
      do {
        FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&pFVar29->field_0x10,&local_108);
        lVar28 = (longlong)(int)local_108;
        if (local_108 != (FCompactPoseBoneIndex)0xffffffff) {
          uVar25 = 0;
          if ((int)local_108 < *(int *)&pFVar29->field_0x8) {
            uVar25 = ~(uint)local_108 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          auVar52 = *(undefined1 (*) [16])(lVar28 * 0x60 + *(longlong *)pFVar29);
          auVar58 = *(undefined1 (*) [16])(lVar28 * 0x60 + 0x10 + *(longlong *)pFVar29);
          uVar25 = 0;
          if ((int)uVar27 < *(int *)&pFVar29->field_0x8) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar62 = auVar52._0_8_;
          dVar16 = auVar58._8_8_;
          auVar35._8_4_ = auVar58._8_4_;
          auVar35._0_8_ = dVar16;
          auVar35._12_4_ = auVar58._12_4_;
          dVar43 = auVar52._8_8_;
          auVar44._8_4_ = auVar52._8_4_;
          auVar44._0_8_ = dVar43;
          auVar44._12_4_ = auVar52._12_4_;
          dVar50 = auVar58._0_8_;
          local_100 = dVar60;
          pdVar2 = (double *)((longlong)(int)uVar27 * 0x60 + 0x10 + *(longlong *)pFVar29);
          dVar19 = *pdVar2;
          dVar20 = pdVar2[1];
          pdVar2 = (double *)((longlong)(int)uVar27 * 0x60 + *(longlong *)pFVar29);
          dVar21 = *pdVar2;
          dVar7 = pdVar2[1];
          uVar25 = 0;
          if ((int)uVar27 < *(int *)&pFVar29->field_0x8) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          auVar51._8_8_ = dVar19;
          auVar51._0_8_ = dVar20;
          auVar52._8_4_ = auVar58._0_4_;
          auVar52._0_8_ = dVar50;
          auVar52._12_4_ = auVar58._4_4_;
          dVar56 = dVar62 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar16 * dVar21 +
                   dVar43 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar50 * dVar7 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar57 = dVar62 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + auVar35._8_8_ * dVar7 +
                   auVar44._8_8_ * dVar20 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar52._8_8_ * dVar21 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          auVar45._8_4_ = SUB84(dVar57,0);
          auVar45._0_8_ = dVar56;
          auVar45._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
          dVar12 = dVar62 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar16 * dVar19 +
                   dVar43 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar50 * dVar20 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar62 = dVar62 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar16 * dVar20 +
                   dVar43 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar50 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar58._8_4_ = SUB84(dVar62,0);
          auVar58._0_8_ = dVar12;
          auVar58._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          dVar43 = dVar56 * dVar56 + dVar12 * dVar12;
          dVar50 = auVar45._8_8_ * dVar57 + auVar58._8_8_ * dVar62;
          auVar36._8_4_ = SUB84(dVar50,0);
          auVar36._0_8_ = dVar43;
          auVar36._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
          auVar37._0_8_ = auVar36._8_8_ + dVar43;
          auVar37._8_8_ = dVar43 + dVar50;
          auVar52 = sqrtpd(auVar51,auVar37);
          uVar31 = -(ulonglong)(dVar60 <= auVar37._0_8_);
          uVar32 = -(ulonglong)(dVar60 <= auVar37._8_8_);
          uVar54 = (uint)(uVar31 >> 0x20);
          uVar55 = (uint)(uVar32 >> 0x20);
          auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
          auVar46._0_4_ =
               ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar46._4_4_ =
               ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar46._8_4_ =
               ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar46._12_4_ =
               ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar59._0_8_ = uVar31 & (ulonglong)(auVar58._0_8_ * dVar56);
          uVar18 = uVar32 & (ulonglong)(auVar58._8_8_ * dVar57);
          auVar59._8_4_ = (undefined4)uVar18;
          auVar59._12_4_ = (undefined4)(uVar18 >> 0x20);
          auVar61._0_4_ =
               ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar61._4_4_ =
               ~uVar54 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar61._8_4_ =
               ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar61._12_4_ =
               ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
          auVar47._0_8_ = (ulonglong)(auVar52._0_8_ * dVar12) & uVar31;
          uVar32 = (ulonglong)(auVar52._8_8_ * dVar62) & uVar32;
          auVar47._8_4_ = (undefined4)uVar32;
          auVar47._12_4_ = (undefined4)(uVar32 >> 0x20);
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar28 = *(longlong *)pFVar29;
          *(undefined1 (*) [16])((longlong)(int)uVar27 * 0x60 + lVar28) = auVar59 | auVar46;
          *(undefined1 (*) [16])((longlong)(int)uVar27 * 0x60 + 0x10 + lVar28) = auVar61 | auVar47;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar4);
    }
    pFVar29 = pFVar29 + 1;
  } while( true );
}

// BlendPosesTogetherPerBoneRemapped @ 1473eba30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAnimationRuntime::BlendPosesTogetherPerBoneRemapped
          (TArrayView<FCompactPose_const_,int> *param_1,
          TArrayView<FBlendedCurve_const_,int> *param_2,
          TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *param_3,
          IInterpolationIndexProvider *param_4,TArrayView<FBlendSampleData_const_,int> *param_5,
          TArrayView<int_const_,int> *param_6,FSkeletonRemapping *param_7,
          FAnimationPoseData *param_8)

{
  float fVar1;
  <lambda_1> <Var2;
  code *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TArrayView<int_const_,int> *pTVar7;
  TArrayView<FBlendSampleData_const_,int> *pTVar8;
  TArrayView<FCompactPose_const_,int> *pTVar9;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *pTVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  UObject *pUVar15;
  FCompactPose *pFVar16;
  FBlendSampleData *pFVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  TArrayView<FBlendedCurve_const_,int> *pTVar22;
  longlong lVar23;
  FCompactPose *this;
  ForElementType<float> FVar24;
  longlong lVar25;
  TArrayView<int_const_,int> *pTVar26;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *pTVar27;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1d8;
  int local_1d0 [4];
  TArrayView<int_const_,int> *local_1c0;
  TArrayView<FBlendSampleData_const_,int> *local_1b8;
  FCompactPose *local_1b0;
  TArrayView<FBlendedCurve_const_,int> *local_1a8;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_1a0;
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *local_198;
  undefined8 uStack_190;
  TArrayView<FCompactPose_const_,int> *local_188;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> *local_180;
  FStackAttributeContainer *local_178;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  TReferenceControllerBase<1> *local_130;
  TArrayView<int,int> local_128;
  TArrayView<int,int> local_118;
  TArrayView<int_const_,int> local_108;
  TArrayView<FBlendSampleData_const_,int> local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_d8;
  ForElementType<float> local_c8;
  int local_80 [2];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b8 = param_5;
  local_1c0 = param_6;
  local_1a8 = param_2;
  local_188 = param_1;
  local_180 = param_3;
  if ((param_1->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourcePoses.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x2f8,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_7);
  if (((!bVar11) || (bVar11 = FWeakObjectPtr::IsValid(&(param_7->TargetSkeleton).WeakPtr), !bVar11))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkeletonRemapping.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                             ,0x2f9,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this = param_8->Pose;
  local_1a0 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_8->Curve;
  local_178 = param_8->Attributes;
  lVar25 = *(longlong *)&this->field_0x10;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0[0] = 0;
  local_1d0[1] = 0;
  local_1b0 = this;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)&this->field_0x8,&local_1d8,local_1d0,local_1d0 + 1);
  pcVar3 = *(code **)*param_4;
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&this->field_0x10 + 0x40));
  (*pcVar3)(param_4,&local_138,pUVar15);
  uVar21 = *(uint *)&this->field_0x8;
  uVar19 = 0;
  if (uVar21 != 0) {
    lVar23 = 0;
    do {
      if (((int)uVar19 < 0) || ((param_7->TargetToSourceBoneIndexes).ArrayNum <= (int)uVar19)) {
LAB_1473ebc86:
        local_1d0[2] = -1;
LAB_1473ebc8e:
        uVar14 = 0xffffffff;
      }
      else {
        uVar12 = 0;
        if ((int)uVar19 < (param_7->TargetToSourceBoneIndexes).ArrayNum) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = *(uint *)((param_7->TargetToSourceBoneIndexes).AllocatorInstance.Data + lVar23);
        if (((int)uVar12 < 0) || (*(int *)(lVar25 + 0x88) <= (int)uVar12)) goto LAB_1473ebc86;
        uVar13 = 0;
        if ((int)uVar12 < *(int *)(lVar25 + 0x88)) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1d0[2] = *(int *)(*(longlong *)(lVar25 + 0x80) + (longlong)(int)uVar12 * 4);
        if (local_1d0[2] == -1) goto LAB_1473ebc8e;
        uVar14 = (**(code **)((longlong)*param_4 + 0x10))(param_4,local_1d0 + 2,lVar25,local_138);
      }
      uVar12 = 0;
      if ((int)uVar19 < local_1d0[0]) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = uVar19 + 1;
      *(undefined4 *)(local_1d8.Data + lVar23) = uVar14;
      lVar23 = lVar23 + 4;
      this = local_1b0;
    } while (uVar19 != uVar21);
  }
  pTVar9 = local_188;
  pFVar16 = TArrayView<FCompactPose_const_,int>::operator[](local_188,0);
  pTVar26 = local_1c0;
  if ((local_1c0->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = TArrayView<FBlendSampleData_const_,int>::operator[](local_1b8,*pTVar26->DataPtr);
  iStack_160 = local_1d0[0];
  local_168 = local_1d8.Data;
  if ((local_1d0[0] < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_128._12_4_ = uStack_15c;
  local_128.ArrayNum = iStack_160;
  local_128.DataPtr = (int *)local_168;
  BlendPosePerBone<0>(&local_128,pFVar17,this,pFVar16);
  pTVar7 = local_1c0;
  iVar18 = pTVar9->ArrayNum;
  uVar21 = 1;
  if (1 < iVar18) {
    lVar25 = 4;
    do {
      uVar19 = 0;
      if ((int)uVar21 < iVar18) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = pTVar9->DataPtr;
      uVar19 = 0;
      if ((int)uVar21 < pTVar7->ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = local_1b8;
      uVar19 = *(uint *)(lVar25 + (longlong)pTVar7->DataPtr);
      uVar12 = 0;
      if ((int)uVar19 < local_1b8->ArrayNum) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = pTVar8->DataPtr;
      iVar18 = local_1d0[0];
      local_158 = local_1d8.Data;
      if ((local_1d0[0] < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = local_1b0;
      iStack_150 = iVar18;
      local_118._12_4_ = uStack_14c;
      local_118.ArrayNum = iVar18;
      local_118.DataPtr = (int *)local_158;
      BlendPosePerBone<1>(&local_118,pFVar17 + (int)uVar19,local_1b0,pFVar16 + (int)uVar21);
      iVar18 = pTVar9->ArrayNum;
      uVar21 = uVar21 + 1;
      lVar25 = lVar25 + 4;
      pTVar26 = local_1c0;
    } while ((int)uVar21 < iVar18);
  }
  uVar21 = 1;
  FCompactPose::NormalizeRotations(this);
  pTVar22 = local_1a8;
  if (0 < local_1a8->ArrayNum) {
    iVar18 = pTVar26->ArrayNum;
    local_80[1] = 0x10;
    local_c8.SecondaryData = (ForElementType<float>)0x0;
    local_80[0] = 0;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,iVar18,&local_c8,local_80,local_80 + 1);
    pTVar8 = local_1b8;
    uVar19 = 0;
    if (0 < iVar18) {
      lVar25 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar19 < iVar18) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = *(uint *)(lVar25 + (longlong)pTVar26->DataPtr);
        uVar13 = 0;
        if ((int)uVar12 < pTVar8->ArrayNum) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar1 = pTVar8->DataPtr[(int)uVar12].TotalWeight;
        uVar12 = 0;
        if ((int)uVar19 < local_80[0]) {
          uVar12 = ~uVar19 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar18 = pTVar26->ArrayNum;
        FVar24 = (ForElementType<float>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<float>)0x0) {
          FVar24 = local_c8.SecondaryData;
        }
        uVar19 = uVar19 + 1;
        *(float *)((longlong)FVar24 + lVar25) = fVar1;
        lVar25 = lVar25 + 4;
        pTVar22 = local_1a8;
      } while ((int)uVar19 < iVar18);
    }
    iVar18 = local_80[0];
    FVar24 = (ForElementType<float>)&local_c8;
    if (local_c8.SecondaryData != (ForElementType<float>)0x0) {
      FVar24 = local_c8.SecondaryData;
    }
    if ((local_80[0] < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_198 = (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar22->DataPtr
    ;
    uStack_190 = *(undefined8 *)&pTVar22->ArrayNum;
    iVar20 = (int)*(undefined8 *)&pTVar22->ArrayNum;
    if (0 < iVar20) {
      if ((iVar18 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)FVar24;
      if ((iVar20 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar27 = local_198;
      TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
      Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>(local_1a0,local_198,fVar1);
      fVar1 = __real_3727c5ac;
      pTVar26 = local_1c0;
      if (1 < iVar20) {
        do {
          pTVar27 = pTVar27 + 1;
          FVar24 = (ForElementType<float>)((longlong)FVar24 + 4);
          uVar19 = 0;
          if ((int)uVar21 < iVar18) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          <Var2.Weight = *(float *)FVar24;
          uVar19 = 0;
          if ((int)uVar21 < iVar20) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (fVar1 < <Var2.Weight) {
            UE::Anim::FNamedValueArrayUtils::
            Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Accumulate<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l5::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_1a0,
                       (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pTVar27,
                       <Var2);
          }
          uVar21 = uVar21 + 1;
          pTVar26 = local_1c0;
        } while ((int)uVar21 < iVar20);
      }
    }
    if (local_c8.SecondaryData != (ForElementType<float>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  pTVar10 = local_180;
  if (0 < local_180->ArrayNum) {
    iVar18 = local_1d0[0];
    piVar4 = pTVar26->DataPtr;
    uVar5._0_4_ = pTVar26->ArrayNum;
    uVar5._4_4_ = *(undefined4 *)&pTVar26->field_0xc;
    pFVar17 = local_1b8->DataPtr;
    uVar6._0_4_ = local_1b8->ArrayNum;
    uVar6._4_4_ = *(undefined4 *)&local_1b8->field_0xc;
    local_148 = local_1d8.Data;
    if ((local_1d0[0] < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8.DataPtr = pTVar10->DataPtr;
    local_d8.ArrayNum = pTVar10->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
    iStack_140 = iVar18;
    local_e8._12_4_ = uStack_13c;
    local_e8.ArrayNum = iVar18;
    local_e8.DataPtr = (int *)local_148;
    local_108.DataPtr = piVar4;
    local_108._8_8_ = uVar5;
    local_f8.DataPtr = pFVar17;
    local_f8._8_8_ = uVar6;
    UE::Anim::Attributes::BlendAttributesPerBone(&local_d8,&local_e8,&local_f8,&local_108,local_178)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  return;
}

// BlendTransformsByWeight @ 1473ec3d0

void __cdecl
FAnimationRuntime::BlendTransformsByWeight
          (TTransform<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  ulonglong uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  double dVar26;
  undefined8 uVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar27;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  double local_res10;
  double local_res18;
  
  iVar2 = param_2->ArrayNum;
  if ((iVar2 != param_3->ArrayNum) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Transforms.Num() == Weights.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x408,L""), bVar18)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (iVar2 == 0) {
    *&(param_1->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(param_1->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(param_1->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(param_1->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(param_1->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(param_1->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return;
  }
  if (iVar2 == 1) {
    if ((param_2->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    dVar8 = *(double *)(pFVar3 + 8);
    (param_1->Rotation).XY.m128d_f64[0] = *(double *)pFVar3;
    (param_1->Rotation).XY.m128d_f64[1] = dVar8;
    dVar8 = *(double *)(pFVar3 + 0x18);
    (param_1->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x10);
    (param_1->Rotation).ZW.m128d_f64[1] = dVar8;
    dVar8 = *(double *)(pFVar3 + 0x28);
    (param_1->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + 0x20);
    (param_1->Translation).XY.m128d_f64[1] = dVar8;
    dVar8 = *(double *)(pFVar3 + 0x38);
    (param_1->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x30);
    (param_1->Translation).ZW.m128d_f64[1] = dVar8;
    dVar8 = *(double *)(pFVar3 + 0x48);
    (param_1->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + 0x40);
    (param_1->Scale3D).XY.m128d_f64[1] = dVar8;
    dVar8 = *(double *)(pFVar3 + 0x58);
    (param_1->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x50);
    (param_1->Scale3D).ZW.m128d_f64[1] = dVar8;
  }
  else {
    if ((param_2->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_res10 = *(double *)(pFVar3 + 0x20);
    local_res18 = *(double *)(pFVar3 + 0x28);
    dVar8 = *(double *)(pFVar3 + 0x30);
    if ((param_3->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar12 = (double)*(float *)(param_3->AllocatorInstance).Data;
    local_res10 = dVar12 * local_res10;
    local_res18 = dVar12 * local_res18;
    dVar12 = dVar12 * dVar8;
    if ((param_2->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    dVar9 = *(double *)pFVar3;
    dVar10 = *(double *)(pFVar3 + 8);
    dVar8 = *(double *)(pFVar3 + 0x10);
    dVar11 = *(double *)(pFVar3 + 0x18);
    if ((param_3->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar7 = (double)*(float *)(param_3->AllocatorInstance).Data;
    dVar9 = dVar7 * dVar9;
    dVar10 = dVar7 * dVar10;
    dVar8 = dVar7 * dVar8;
    dVar7 = dVar7 * dVar11;
    if ((param_2->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (param_2->AllocatorInstance).Data;
    dVar14 = *(double *)(pFVar3 + 0x40);
    dVar11 = *(double *)(pFVar3 + 0x48);
    dVar26 = *(double *)(pFVar3 + 0x50);
    if ((param_3->ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar22 = 1;
    dVar13 = (double)*(float *)(param_3->AllocatorInstance).Data;
    dVar14 = dVar13 * dVar14;
    dVar11 = dVar13 * dVar11;
    dVar13 = dVar13 * dVar26;
    if (1 < (longlong)iVar2) {
      lVar21 = 1;
      lVar23 = 0x60;
      do {
        uVar20 = ~uVar22 >> 0x1f;
        uVar38 = 0;
        if ((int)uVar22 < param_3->ArrayNum) {
          uVar38 = uVar20;
        }
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        uVar38 = 0;
        if ((int)uVar22 < param_2->ArrayNum) {
          uVar38 = uVar20;
        }
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar4 + lVar23 + 0x20;
        uVar19 = 0;
        dVar26 = (double)*(float *)(pFVar3 + lVar21 * 4);
        uVar38 = uVar19;
        if ((int)uVar22 < param_3->ArrayNum) {
          uVar38 = uVar20;
        }
        local_res10 = local_res10 + (*(double *)pFVar1 - local_res10) * dVar26;
        dVar12 = dVar12 + (*(double *)(pFVar4 + lVar23 + 0x30) - dVar12) * dVar26;
        local_res18 = local_res18 + (*(double *)(pFVar1 + 8) - local_res18) * dVar26;
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        uVar38 = uVar19;
        if ((int)uVar22 < param_2->ArrayNum) {
          uVar38 = uVar20;
        }
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar4 + lVar23 + 0x40;
        dVar26 = *(double *)(pFVar1 + 8);
        auVar30._0_8_ = (double)*(float *)(pFVar3 + lVar21 * 4);
        auVar30._8_8_ = 0;
        uVar38 = uVar19;
        if ((int)uVar22 < param_3->ArrayNum) {
          uVar38 = uVar20;
        }
        dVar11 = dVar11 + (dVar26 - dVar11) * auVar30._0_8_;
        dVar14 = dVar14 + (*(double *)pFVar1 - dVar14) * auVar30._0_8_;
        dVar13 = dVar13 + (*(double *)(pFVar4 + lVar23 + 0x50) - dVar13) * auVar30._0_8_;
        if ((uVar38 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar33 = auVar30._8_8_;
        if ((int)uVar22 < param_2->ArrayNum) {
          uVar19 = uVar20;
        }
        dVar27 = (double)*(float *)((param_3->AllocatorInstance).Data + lVar21 * 4);
        if (uVar19 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar33 = auVar30._8_8_;
          if (bVar18) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        auVar30 = *(undefined1 (*) [16])(pFVar3 + lVar23 + 0x10);
        auVar36 = *(undefined1 (*) [16])(pFVar3 + lVar23);
        auVar15._4_8_ = dVar26;
        auVar15._0_4_ = auVar30._4_4_;
        auVar35._0_8_ = auVar15._0_8_ << 0x20;
        auVar35._8_4_ = auVar30._8_4_;
        auVar35._12_4_ = auVar30._12_4_;
        auVar16._4_8_ = uVar33;
        auVar16._0_4_ = auVar36._4_4_;
        auVar28._0_8_ = auVar16._0_8_ << 0x20;
        auVar28._8_4_ = auVar36._8_4_;
        auVar28._12_4_ = auVar36._12_4_;
        dVar26 = __real_3ff0000000000000;
        dVar34 = dVar27;
        if (auVar35._8_8_ * dVar7 + auVar30._0_8_ * dVar8 +
            auVar28._8_8_ * dVar10 + auVar36._0_8_ * dVar9 < __real_0000000000000000) {
          dVar26 = __real_bff0000000000000;
          dVar34 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar27,0) ^ (uint)__xmm_80000000000000008000000000000000);
        }
        in_XMM2._0_8_ = dVar26 - dVar34;
        in_XMM2._8_8_ = 0;
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 1;
        lVar23 = lVar23 + 0x60;
        dVar9 = dVar9 * in_XMM2._0_8_ + auVar36._0_8_ * dVar27;
        dVar10 = dVar10 * in_XMM2._0_8_ + auVar36._8_8_ * dVar27;
        dVar8 = dVar8 * in_XMM2._0_8_ + auVar30._0_8_ * dVar27;
        dVar7 = dVar7 * in_XMM2._0_8_ + auVar30._8_8_ * dVar27;
      } while (lVar21 < iVar2);
    }
    auVar29._8_4_ = SUB84(dVar10,0);
    auVar29._0_8_ = dVar9;
    auVar29._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    dVar27 = dVar9 * dVar9 + dVar8 * dVar8;
    dVar34 = auVar29._8_8_ * dVar10 + dVar7 * dVar7;
    dVar26 = dVar34 + dVar27;
    dVar27 = dVar27 + dVar34;
    auVar36._8_4_ = SUB84(dVar27,0);
    auVar36._0_8_ = dVar26;
    auVar36._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    auVar36 = sqrtpd(in_XMM2,auVar36);
    uVar24 = -(ulonglong)(__real_3e45798ee0000000 <= dVar26);
    uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= dVar27);
    uVar22 = (uint)(uVar24 >> 0x20);
    uVar38 = (uint)(uVar25 >> 0x20);
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
    auVar31._0_8_ = uVar24 & (ulonglong)(auVar30._0_8_ * dVar8);
    uVar17 = uVar25 & (ulonglong)(auVar30._8_8_ * dVar7);
    auVar31._8_4_ = (undefined4)uVar17;
    auVar31._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar37._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar37._4_4_ =
         ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar37._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar37._12_4_ =
         ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
    auVar32._0_8_ = (ulonglong)(auVar30._0_8_ * dVar9) & uVar24;
    uVar17 = (ulonglong)(auVar30._8_8_ * dVar10) & uVar25;
    auVar32._8_4_ = (undefined4)uVar17;
    auVar32._12_4_ = (undefined4)(uVar17 >> 0x20);
    auVar6._4_4_ = ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0]
                                   >> 0x20);
    auVar6._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar6._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar6._12_4_ =
         ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar32 | auVar6;
    *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar37 | auVar31;
    (param_1->Translation).XY.m128d_f64[0] = local_res10;
    (param_1->Translation).XY.m128d_f64[1] = local_res18;
    (param_1->Translation).ZW.m128d_f64[0] = dVar12;
    (param_1->Translation).ZW.m128d_f64[1] = 0.0;
    (param_1->Scale3D).XY.m128d_f64[0] = dVar14;
    (param_1->Scale3D).XY.m128d_f64[1] = dVar11;
    (param_1->Scale3D).ZW.m128d_f64[0] = dVar13;
    (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  return;
}

// BlendTwoPosesTogether @ 1473ecce0

void __cdecl
FAnimationRuntime::BlendTwoPosesTogether
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,float param_3,
          FAnimationPoseData *param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  FCompactPose *this;
  FCompactPose *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  FBlendedCurve *pFVar8;
  FBlendedCurve *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  FBlendedCurve *pFVar28;
  bool bVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float local_res18 [2];
  FBlendedCurve *local_res20;
  int local_1b8 [2];
  float local_1b0;
  float local_1ac;
  FStackAttributeContainer *local_1a8;
  int *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  float *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TArrayView<int_const_,int> local_168;
  TArrayView<float_const_,int> local_158;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_148;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_138;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_f8 [2];
  uint uVar43;
  
  fVar27 = __real_3f800000;
  this = param_4->Pose;
  pFVar4 = param_1->Pose;
  fVar51 = __real_3f800000 - param_3;
  local_res20 = param_4->Curve;
  local_1a8 = param_4->Attributes;
  if (bAnim_BlendPoseOverwrite_ISPC_Enabled) {
    if ((*(int *)&this->field_0x8 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar29)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar5 = *(undefined8 *)this;
    if ((*(int *)&this->field_0x8 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar29)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    BlendTransformOverwrite(*(longlong *)pFVar4,uVar5);
  }
  else {
    uVar3 = *(uint *)&pFVar4->field_0x8;
    uVar30 = 0;
    if (uVar3 != 0) {
      lVar31 = 0;
      dVar19 = (double)param_3;
      dVar20 = (double)param_3;
      dVar21 = (double)param_3;
      uVar49 = SUB84((double)param_3,0);
      uVar50 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
      do {
        uVar43 = 0;
        if ((int)uVar30 < *(int *)&this->field_0x8) {
          uVar43 = ~uVar30 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar6 = *(longlong *)this;
        uVar43 = 0;
        if ((int)uVar30 < *(int *)&pFVar4->field_0x8) {
          uVar43 = ~uVar30 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)pFVar4;
        auVar35._8_4_ = uVar49;
        auVar35._0_8_ = dVar21;
        auVar35._12_4_ = uVar50;
        uVar30 = uVar30 + 1;
        dVar22 = dVar20 * ((double *)(lVar7 + lVar31))[1];
        pdVar1 = (double *)(lVar7 + 0x10 + lVar31);
        dVar18 = *pdVar1;
        dVar44 = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x40 + lVar31);
        dVar47 = *pdVar1;
        dVar17 = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x50 + lVar31);
        dVar48 = *pdVar1;
        dVar23 = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x20 + lVar31);
        dVar24 = *pdVar1;
        dVar34 = pdVar1[1];
        pdVar1 = (double *)(lVar7 + 0x30 + lVar31);
        dVar25 = *pdVar1;
        dVar26 = pdVar1[1];
        auVar13._8_4_ = SUB84(dVar22,0);
        auVar13._0_8_ = dVar19 * *(double *)(lVar7 + lVar31);
        auVar13._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined1 (*) [16])(lVar31 + lVar6) = auVar13;
        dVar34 = dVar20 * dVar34;
        pdVar1 = (double *)(lVar31 + 0x10 + lVar6);
        *pdVar1 = dVar21 * dVar18;
        pdVar1[1] = auVar35._8_8_ * dVar44;
        auVar36._8_4_ = uVar49;
        auVar36._0_8_ = dVar21;
        auVar36._12_4_ = uVar50;
        auVar14._8_4_ = SUB84(dVar34,0);
        auVar14._0_8_ = dVar19 * dVar24;
        auVar14._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        *(undefined1 (*) [16])(lVar31 + 0x20 + lVar6) = auVar14;
        dVar17 = dVar20 * dVar17;
        pdVar1 = (double *)(lVar31 + 0x30 + lVar6);
        *pdVar1 = dVar21 * dVar25;
        pdVar1[1] = auVar36._8_8_ * dVar26;
        auVar37._8_4_ = uVar49;
        auVar37._0_8_ = dVar21;
        auVar37._12_4_ = uVar50;
        auVar15._8_4_ = SUB84(dVar17,0);
        auVar15._0_8_ = dVar19 * dVar47;
        auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(lVar31 + 0x40 + lVar6) = auVar15;
        pdVar1 = (double *)(lVar31 + 0x50 + lVar6);
        *pdVar1 = dVar21 * dVar48;
        pdVar1[1] = auVar37._8_8_ * dVar23;
        lVar31 = lVar31 + 0x60;
      } while (uVar30 != uVar3);
    }
  }
  pFVar4 = param_2->Pose;
  if (bAnim_BlendPoseAccumulate_ISPC_Enabled == false) {
    uVar3 = *(uint *)&pFVar4->field_0x8;
    uVar30 = 0;
    if (uVar3 != 0) {
      dVar19 = (double)fVar51;
      dVar20 = (double)fVar51;
      lVar31 = 0;
      dVar21 = (double)fVar51;
      dVar22 = (double)fVar51;
      uVar49 = (undefined4)((ulonglong)dVar22 >> 0x20);
      do {
        uVar43 = 0;
        if ((int)uVar30 < *(int *)&this->field_0x8) {
          uVar43 = ~uVar30 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar6 = *(longlong *)this;
        uVar43 = 0;
        if ((int)uVar30 < *(int *)&pFVar4->field_0x8) {
          uVar43 = ~uVar30 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)pFVar4;
        uVar30 = uVar30 + 1;
        dVar47 = dVar19 * *(double *)(lVar7 + lVar31);
        dVar48 = dVar20 * ((double *)(lVar7 + lVar31))[1];
        pdVar1 = (double *)(lVar7 + 0x10 + lVar31);
        dVar17 = dVar21 * *pdVar1;
        dVar18 = dVar22 * pdVar1[1];
        auVar38._8_4_ = SUB84(dVar18,0);
        auVar38._0_8_ = dVar17;
        auVar38._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        pdVar1 = (double *)(lVar6 + 0x10 + lVar31);
        dVar34 = dVar17 * *pdVar1 + dVar47 * *(double *)(lVar6 + lVar31);
        dVar44 = auVar38._8_8_ * pdVar1[1] + dVar48 * ((double *)(lVar6 + lVar31))[1];
        uVar32 = -(ulonglong)(0.0 <= dVar44 + dVar34);
        uVar33 = -(ulonglong)(0.0 <= dVar34 + dVar44);
        uVar46 = (uint)(uVar33 >> 0x20);
        uVar43 = (uint)(uVar32 >> 0x20);
        auVar39._0_8_ = (ulonglong)dVar47 & uVar32;
        auVar39._8_4_ = (undefined4)((ulonglong)dVar48 & uVar33);
        auVar39._12_4_ = (undefined4)(((ulonglong)dVar48 & uVar33) >> 0x20);
        auVar45._0_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar47,0);
        auVar45._4_4_ = ~uVar43 & (uint)((ulonglong)(0.0 - dVar47) >> 0x20);
        auVar45._8_4_ = ~(uint)uVar33 & SUB84(0.0 - dVar48,0);
        auVar45._12_4_ = ~uVar46 & (uint)((ulonglong)(0.0 - dVar48) >> 0x20);
        dVar34 = ((double *)(lVar6 + lVar31))[1];
        *(double *)(lVar6 + lVar31) = SUB168(auVar45 | auVar39,0) + *(double *)(lVar6 + lVar31);
        ((double *)(lVar6 + lVar31))[1] = SUB168(auVar45 | auVar39,8) + dVar34;
        auVar40._0_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar17,0);
        auVar40._4_4_ = ~uVar43 & (uint)((ulonglong)(0.0 - dVar17) >> 0x20);
        auVar40._8_4_ = ~(uint)uVar33 & SUB84(0.0 - dVar18,0);
        auVar40._12_4_ = ~uVar46 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
        auVar16._8_4_ = (int)((ulonglong)dVar18 & uVar33);
        auVar16._0_8_ = (ulonglong)dVar17 & uVar32;
        auVar16._12_4_ = (int)(((ulonglong)dVar18 & uVar33) >> 0x20);
        pdVar1 = (double *)(lVar6 + 0x10 + lVar31);
        dVar34 = pdVar1[1];
        pdVar2 = (double *)(lVar6 + 0x10 + lVar31);
        *pdVar2 = SUB168(auVar40 | auVar16,0) + *pdVar1;
        pdVar2[1] = SUB168(auVar40 | auVar16,8) + dVar34;
        pdVar1 = (double *)(lVar7 + 0x20 + lVar31);
        pdVar2 = (double *)(lVar7 + 0x30 + lVar31);
        dVar17 = *pdVar2;
        dVar18 = pdVar2[1];
        auVar41._8_4_ = SUB84(dVar22,0);
        auVar41._0_8_ = dVar21;
        auVar41._12_4_ = uVar49;
        pdVar2 = (double *)(lVar6 + 0x20 + lVar31);
        dVar34 = dVar20 * pdVar1[1] + pdVar2[1];
        auVar11._8_4_ = SUB84(dVar34,0);
        auVar11._0_8_ = dVar19 * *pdVar1 + *pdVar2;
        auVar11._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x20 + lVar31) = auVar11;
        pdVar1 = (double *)(lVar6 + 0x30 + lVar31);
        dVar34 = pdVar1[1];
        pdVar2 = (double *)(lVar6 + 0x30 + lVar31);
        *pdVar2 = dVar21 * dVar17 + *pdVar1;
        pdVar2[1] = auVar41._8_8_ * dVar18 + dVar34;
        pdVar1 = (double *)(lVar7 + 0x40 + lVar31);
        pdVar2 = (double *)(lVar7 + 0x50 + lVar31);
        dVar17 = *pdVar2;
        dVar18 = pdVar2[1];
        auVar42._8_4_ = SUB84(dVar22,0);
        auVar42._0_8_ = dVar21;
        auVar42._12_4_ = uVar49;
        pdVar2 = (double *)(lVar6 + 0x40 + lVar31);
        dVar34 = dVar20 * pdVar1[1] + pdVar2[1];
        auVar12._8_4_ = SUB84(dVar34,0);
        auVar12._0_8_ = dVar19 * *pdVar1 + *pdVar2;
        auVar12._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        *(undefined1 (*) [16])(lVar6 + 0x40 + lVar31) = auVar12;
        pdVar1 = (double *)(lVar6 + 0x50 + lVar31);
        dVar34 = pdVar1[1];
        pdVar2 = (double *)(lVar6 + 0x50 + lVar31);
        *pdVar2 = dVar21 * dVar17 + *pdVar1;
        pdVar2[1] = auVar42._8_8_ * dVar18 + dVar34;
        lVar31 = lVar31 + 0x60;
      } while (uVar30 != uVar3);
    }
  }
  else {
    if ((*(int *)&this->field_0x8 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar29)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar5 = *(undefined8 *)this;
    if ((*(int *)&this->field_0x8 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar29)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    BlendTransformAccumulate(*(longlong *)pFVar4,uVar5);
  }
  FCompactPose::NormalizeRotations(this);
  pFVar28 = local_res20;
  pFVar8 = param_2->Curve;
  pFVar9 = param_1->Curve;
  local_res18[0] = fVar51;
  if (__real_3727c5ac < (float)((uint)fVar51 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (__real_3727c5ac < (float)((uint)(fVar51 - fVar27) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      UE::Anim::FNamedValueArrayUtils::
      Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Lerp<TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l11::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)local_res20,
                 (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar9,
                 (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar8,
                 (<lambda_1>)local_res18);
    }
    else {
      TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
                ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)local_res20,
                 (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)pFVar8);
      pFVar28->field_0x10 = pFVar8->field_0x10;
    }
  }
  else {
    TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
              ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)local_res20,
               (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)pFVar9);
    pFVar28->field_0x10 = pFVar9->field_0x10;
  }
  local_198 = local_1b8;
  local_188 = &local_1b0;
  local_1b8[0] = 0;
  local_1b8[1] = 1;
  iStack_190 = 2;
  iStack_180 = 2;
  local_1b0 = param_3;
  local_1ac = fVar51;
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
            (&local_138,
             (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             param_1->Attributes);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
            (local_f8,(TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
                      param_2->Attributes);
  local_168._12_4_ = uStack_18c;
  local_168.ArrayNum = iStack_190;
  local_178 = &local_138;
  local_158._12_4_ = uStack_17c;
  local_158.ArrayNum = iStack_180;
  local_168.DataPtr = local_198;
  uStack_170 = 2;
  local_148._12_4_ = uStack_16c;
  local_148.ArrayNum = 2;
  local_158.DataPtr = local_188;
  local_148.DataPtr = (FStackAttributeContainer *)local_178;
  UE::Anim::Attributes::BlendAttributes(&local_148,&local_158,&local_168,local_1a8);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(local_f8);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_138);
  return;
}

// BlendTwoPosesTogether @ 1473ed360

void __cdecl
FAnimationRuntime::BlendTwoPosesTogether
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5,FCompactPose *param_6,FBlendedCurve *param_7)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  undefined8 local_90;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_88;
  undefined8 local_80;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  FAnimationPoseData local_58;
  FAnimationPoseData local_40;
  FAnimationPoseData local_28;
  
  local_98 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_90 = 0;
  local_88 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_80 = 0;
  local_78 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58.Pose = param_6;
  local_58.Curve = param_7;
  local_58.Attributes = (FStackAttributeContainer *)&local_98;
  local_28.Attributes = (FStackAttributeContainer *)&local_98;
  local_40.Attributes = (FStackAttributeContainer *)&local_98;
  local_40.Pose = param_2;
  local_40.Curve = param_4;
  local_28.Pose = param_1;
  local_28.Curve = param_3;
  BlendTwoPosesTogether(&local_28,&local_40,param_5,&local_58);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_78,(int)local_70);
  if (local_78 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_78);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_88,(int)local_80);
  if (local_88 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_98,(int)local_90);
  if (local_98 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// BlendTwoPosesTogetherPerBone @ 1473ed450

void __cdecl
FAnimationRuntime::BlendTwoPosesTogetherPerBone
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FAnimationPoseData *param_4)

{
  int iVar1;
  FBlendedCurve *this;
  FStackAttributeContainer *pFVar2;
  FBlendedCurve *pFVar3;
  FBlendedCurve *pFVar4;
  code *pcVar5;
  bool bVar6;
  <lambda_1> local_res8;
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38;
  
  this = param_4->Curve;
  pFVar2 = param_4->Attributes;
  BlendTwoPosesTogetherPerBone(param_1->Pose,param_2->Pose,param_3,param_4->Pose);
  pFVar3 = param_1->Curve;
  pFVar4 = param_2->Curve;
  TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)this,
             (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)pFVar3);
  this->field_0x10 = pFVar3->field_0x10;
  UE::Anim::FNamedValueArrayUtils::
  Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)this,
             (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar4,local_res8);
  local_38.DataPtr = (float *)(param_3->AllocatorInstance).Data;
  iVar1 = param_3->ArrayNum;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar1;
  UE::Anim::Attributes::BlendAttributesPerBone
            (param_1->Attributes,param_2->Attributes,&local_38,pFVar2);
  return;
}

// BlendTwoPosesTogetherPerBone @ 1473ed530

void __cdecl
FAnimationRuntime::BlendTwoPosesTogetherPerBone
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,TArray<float,TSizedDefaultAllocator<32>_> *param_5,FCompactPose *param_6,
          FBlendedCurve *param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_5c;
  TArrayView<float_const_,int> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_30 = 0;
  local_28 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  BlendTwoPosesTogetherPerBone(param_1,param_2,param_5,param_6);
  TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_7,
             (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_3);
  param_7->field_0x10 = param_3->field_0x10;
  UE::Anim::FNamedValueArrayUtils::
  Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_7,
             (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
             param_6._0_1_);
  local_58.DataPtr = (float *)(param_5->AllocatorInstance).Data;
  iVar1 = param_5->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar1;
  UE::Anim::Attributes::BlendAttributesPerBone
            ((FStackAttributeContainer *)&local_48,(FStackAttributeContainer *)&local_48,&local_58,
             (FStackAttributeContainer *)&local_48);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_28,(int)local_20);
  if (local_28 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_48,(int)local_40);
  if (local_48 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// BlendTwoPosesTogetherPerBone @ 1473ed690

void __cdecl
FAnimationRuntime::BlendTwoPosesTogetherPerBone
          (FCompactPose *param_1,FCompactPose *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FCompactPose *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  bool bVar48;
  longlong lVar49;
  uint uVar50;
  uint uVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined4 uVar65;
  uint uVar64;
  
  fVar47 = __real_3f7fff58;
  fVar46 = __real_3f800000;
  fVar45 = __real_3727c5ac;
  uVar6 = *(uint *)&param_4->field_0x8;
  uVar50 = 0;
  if (uVar6 != 0) {
    lVar53 = 0;
    lVar52 = 0;
    do {
      uVar51 = ~uVar50 >> 0x1f;
      uVar64 = 0;
      if ((int)uVar50 < param_3->ArrayNum) {
        uVar64 = uVar51;
      }
      if ((uVar64 == 0) &&
         (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar48)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar5 = *(float *)((param_3->AllocatorInstance).Data + lVar53 * 4);
      if (fVar5 < fVar47) {
        if (fVar5 <= fVar45) {
          uVar64 = 0;
          if ((int)uVar50 < *(int *)&param_1->field_0x8) {
            uVar64 = uVar51;
          }
          if ((uVar64 == 0) &&
             (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar48)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar49 = *(longlong *)param_1;
          goto LAB_1473edab0;
        }
        uVar64 = 0;
        if ((int)uVar50 < *(int *)&param_4->field_0x8) {
          uVar64 = uVar51;
        }
        if ((uVar64 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar49 = *(longlong *)param_4;
        uVar64 = 0;
        if ((int)uVar50 < *(int *)&param_1->field_0x8) {
          uVar64 = uVar51;
        }
        if ((uVar64 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)param_1;
        fVar62 = fVar46 - fVar5;
        pdVar1 = (double *)(lVar52 + 0x10 + lVar7);
        dVar22 = *pdVar1;
        dVar13 = pdVar1[1];
        pdVar1 = (double *)(lVar52 + 0x40 + lVar7);
        dVar24 = *pdVar1;
        dVar26 = pdVar1[1];
        pdVar1 = (double *)(lVar52 + 0x50 + lVar7);
        dVar27 = *pdVar1;
        dVar28 = pdVar1[1];
        pdVar1 = (double *)(lVar52 + 0x20 + lVar7);
        dVar29 = *pdVar1;
        dVar30 = pdVar1[1];
        pdVar1 = (double *)(lVar52 + 0x30 + lVar7);
        dVar31 = *pdVar1;
        dVar14 = pdVar1[1];
        dVar21 = (double)fVar62;
        dVar23 = (double)fVar62;
        uVar65 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar17 = (double)fVar62;
        dVar18 = (double)fVar62;
        auVar56._8_4_ = SUB84(dVar23,0);
        auVar56._0_8_ = dVar21;
        auVar56._12_4_ = uVar65;
        dVar32 = ((double *)(lVar52 + lVar7))[1];
        *(double *)(lVar52 + lVar49) = dVar21 * *(double *)(lVar52 + lVar7);
        ((double *)(lVar52 + lVar49))[1] = auVar56._8_8_ * dVar32;
        auVar57._8_4_ = SUB84(dVar23,0);
        auVar57._0_8_ = dVar21;
        auVar57._12_4_ = uVar65;
        dVar13 = dVar18 * dVar13;
        auVar9._8_4_ = SUB84(dVar13,0);
        auVar9._0_8_ = dVar17 * dVar22;
        auVar9._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x10 + lVar49) = auVar9;
        pdVar1 = (double *)(lVar52 + 0x20 + lVar49);
        *pdVar1 = dVar21 * dVar29;
        pdVar1[1] = auVar57._8_8_ * dVar30;
        dVar14 = dVar18 * dVar14;
        dVar23 = dVar23 * dVar26;
        auVar10._8_4_ = SUB84(dVar14,0);
        auVar10._0_8_ = dVar17 * dVar31;
        auVar10._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x30 + lVar49) = auVar10;
        auVar19._8_4_ = SUB84(dVar23,0);
        auVar19._0_8_ = dVar21 * dVar24;
        auVar19._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x40 + lVar49) = auVar19;
        dVar18 = dVar18 * dVar28;
        auVar16._8_4_ = SUB84(dVar18,0);
        auVar16._0_8_ = dVar17 * dVar27;
        auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x50 + lVar49) = auVar16;
        uVar64 = 0;
        if ((int)uVar50 < *(int *)&param_4->field_0x8) {
          uVar64 = uVar51;
        }
        if ((uVar64 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar49 = *(longlong *)param_4;
        uVar64 = 0;
        if ((int)uVar50 < *(int *)&param_2->field_0x8) {
          uVar64 = uVar51;
        }
        if ((uVar64 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)param_2;
        dVar22 = (double)fVar5;
        dVar24 = (double)fVar5;
        dVar26 = (double)fVar5;
        dVar27 = (double)fVar5;
        dVar17 = dVar22 * *(double *)(lVar52 + lVar7);
        dVar18 = dVar24 * ((double *)(lVar52 + lVar7))[1];
        pdVar1 = (double *)(lVar52 + 0x10 + lVar7);
        dVar21 = dVar26 * *pdVar1;
        dVar23 = dVar27 * pdVar1[1];
        auVar58._8_4_ = SUB84(dVar18,0);
        auVar58._0_8_ = dVar17;
        auVar58._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        pdVar1 = (double *)(lVar52 + 0x10 + lVar49);
        dVar13 = dVar21 * *pdVar1 + dVar17 * *(double *)(lVar52 + lVar49);
        dVar14 = dVar23 * pdVar1[1] + auVar58._8_8_ * ((double *)(lVar52 + lVar49))[1];
        auVar59._8_4_ = SUB84(dVar14,0);
        auVar59._0_8_ = dVar13;
        auVar59._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        uVar54 = -(ulonglong)(0.0 <= auVar59._8_8_ + dVar13);
        uVar55 = -(ulonglong)(0.0 <= dVar13 + dVar14);
        uVar51 = (uint)(uVar55 >> 0x20);
        auVar63._0_4_ = ~(uint)uVar54 & SUB84(0.0 - dVar17,0);
        uVar64 = (uint)(uVar54 >> 0x20);
        auVar63._4_4_ = ~uVar64 & (uint)((ulonglong)(0.0 - dVar17) >> 0x20);
        auVar63._8_4_ = ~(uint)uVar55 & SUB84(0.0 - dVar18,0);
        auVar63._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
        auVar11._8_4_ = (int)((ulonglong)dVar18 & uVar55);
        auVar11._0_8_ = (ulonglong)dVar17 & uVar54;
        auVar11._12_4_ = (int)(((ulonglong)dVar18 & uVar55) >> 0x20);
        dVar13 = ((double *)(lVar52 + lVar49))[1];
        auVar60._0_4_ = ~(uint)uVar54 & SUB84(0.0 - dVar21,0);
        auVar60._4_4_ = ~uVar64 & (uint)((ulonglong)(0.0 - dVar21) >> 0x20);
        auVar60._8_4_ = ~(uint)uVar55 & SUB84(0.0 - dVar23,0);
        auVar60._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar23) >> 0x20);
        *(double *)(lVar52 + lVar49) = SUB168(auVar63 | auVar11,0) + *(double *)(lVar52 + lVar49);
        ((double *)(lVar52 + lVar49))[1] = SUB168(auVar63 | auVar11,8) + dVar13;
        auVar15._8_4_ = (int)((ulonglong)dVar23 & uVar55);
        auVar15._0_8_ = (ulonglong)dVar21 & uVar54;
        auVar15._12_4_ = (int)(((ulonglong)dVar23 & uVar55) >> 0x20);
        pdVar1 = (double *)(lVar52 + 0x10 + lVar49);
        dVar13 = pdVar1[1];
        pdVar2 = (double *)(lVar52 + 0x10 + lVar49);
        *pdVar2 = SUB168(auVar60 | auVar15,0) + *pdVar1;
        pdVar2[1] = SUB168(auVar60 | auVar15,8) + dVar13;
        pdVar1 = (double *)(lVar52 + 0x30 + lVar7);
        dVar14 = *pdVar1;
        dVar17 = pdVar1[1];
        auVar61._8_4_ = SUB84(dVar24,0);
        auVar61._0_8_ = dVar22;
        auVar61._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        pdVar1 = (double *)(lVar52 + 0x20 + lVar7);
        dVar18 = pdVar1[1];
        pdVar2 = (double *)(lVar52 + 0x20 + lVar49);
        dVar13 = pdVar2[1];
        pdVar3 = (double *)(lVar52 + 0x20 + lVar49);
        *pdVar3 = dVar22 * *pdVar1 + *pdVar2;
        pdVar3[1] = auVar61._8_8_ * dVar18 + dVar13;
        pdVar1 = (double *)(lVar52 + 0x30 + lVar49);
        dVar13 = dVar27 * dVar17 + pdVar1[1];
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = dVar26 * dVar14 + *pdVar1;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x30 + lVar49) = auVar12;
        pdVar1 = (double *)(lVar52 + 0x40 + lVar7);
        pdVar2 = (double *)(lVar52 + 0x50 + lVar7);
        dVar14 = *pdVar2;
        dVar17 = pdVar2[1];
        pdVar2 = (double *)(lVar52 + 0x40 + lVar49);
        dVar13 = dVar24 * pdVar1[1] + pdVar2[1];
        auVar20._8_4_ = SUB84(dVar13,0);
        auVar20._0_8_ = dVar22 * *pdVar1 + *pdVar2;
        auVar20._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x40 + lVar49) = auVar20;
        pdVar1 = (double *)(lVar52 + 0x50 + lVar49);
        dVar13 = dVar27 * dVar17 + pdVar1[1];
        auVar25._8_4_ = SUB84(dVar13,0);
        auVar25._0_8_ = dVar26 * dVar14 + *pdVar1;
        auVar25._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(lVar52 + 0x50 + lVar49) = auVar25;
      }
      else {
        uVar64 = 0;
        if ((int)uVar50 < *(int *)&param_2->field_0x8) {
          uVar64 = uVar51;
        }
        if ((uVar64 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar49 = *(longlong *)param_2;
LAB_1473edab0:
        uVar33 = *(undefined8 *)(lVar52 + lVar49);
        uVar34 = ((undefined8 *)(lVar52 + lVar49))[1];
        puVar4 = (undefined8 *)(lVar52 + 0x10 + lVar49);
        uVar35 = *puVar4;
        uVar36 = puVar4[1];
        puVar4 = (undefined8 *)(lVar52 + 0x20 + lVar49);
        uVar37 = *puVar4;
        uVar38 = puVar4[1];
        puVar4 = (undefined8 *)(lVar52 + 0x30 + lVar49);
        uVar39 = *puVar4;
        uVar40 = puVar4[1];
        puVar4 = (undefined8 *)(lVar52 + 0x40 + lVar49);
        uVar41 = *puVar4;
        uVar42 = puVar4[1];
        puVar4 = (undefined8 *)(lVar52 + 0x50 + lVar49);
        uVar43 = *puVar4;
        uVar44 = puVar4[1];
        uVar64 = 0;
        if ((int)uVar50 < *(int *)&param_4->field_0x8) {
          uVar64 = uVar51;
        }
        if ((uVar64 == 0) &&
           (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar48)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar49 = *(longlong *)param_4;
        *(undefined8 *)(lVar52 + lVar49) = uVar33;
        ((undefined8 *)(lVar52 + lVar49))[1] = uVar34;
        puVar4 = (undefined8 *)(lVar52 + 0x10 + lVar49);
        *puVar4 = uVar35;
        puVar4[1] = uVar36;
        puVar4 = (undefined8 *)(lVar52 + 0x20 + lVar49);
        *puVar4 = uVar37;
        puVar4[1] = uVar38;
        puVar4 = (undefined8 *)(lVar52 + 0x30 + lVar49);
        *puVar4 = uVar39;
        puVar4[1] = uVar40;
        puVar4 = (undefined8 *)(lVar52 + 0x40 + lVar49);
        *puVar4 = uVar41;
        puVar4[1] = uVar42;
        puVar4 = (undefined8 *)(lVar52 + 0x50 + lVar49);
        *puVar4 = uVar43;
        puVar4[1] = uVar44;
      }
      uVar50 = uVar50 + 1;
      lVar53 = lVar53 + 1;
      lVar52 = lVar52 + 0x60;
    } while (uVar50 != uVar6);
  }
  FCompactPose::NormalizeRotations(param_4);
  return;
}

// CombineWithAdditiveAnimations @ 1473f1910

void __cdecl
FAnimationRuntime::CombineWithAdditiveAnimations
          (int param_1,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **param_2,
          float *param_3,FBoneContainer *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  ushort uVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  bool bVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar58;
  undefined1 auVar57 [16];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dStack_160;
  
  if (0 < param_1) {
    lVar37 = 0;
    do {
      pTVar3 = param_2[lVar37];
      uVar35 = 0;
      iVar33 = (param_4->BoneIndicesArray).ArrayNum;
      fVar1 = param_3[lVar37];
      if (0 < iVar33) {
        dVar55 = (double)fVar1;
        dVar58 = (double)fVar1;
        lVar34 = 0;
        dVar18 = (double)fVar1;
        dStack_160 = (double)fVar1;
        auVar17._8_4_ = SUB84(dStack_160,0);
        auVar17._0_8_ = dVar18;
        auVar17._12_4_ = (int)((ulonglong)dStack_160 >> 0x20);
        do {
          uVar32 = 0;
          if ((int)uVar35 < iVar33) {
            uVar32 = ~uVar35 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(ushort *)((param_4->BoneIndicesArray).AllocatorInstance.Data + lVar34);
          if ((pTVar3->ArrayNum <= (int)(uint)uVar2) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar3->AllocatorInstance).Data;
          lVar36 = (ulonglong)uVar2 * 0x60;
          dVar27 = *(double *)(pFVar4 + lVar36 + 0x20);
          dVar28 = *(double *)(pFVar4 + lVar36 + 0x20 + 8);
          dVar10 = *(double *)(pFVar4 + lVar36);
          dVar11 = *(double *)(pFVar4 + lVar36 + 8);
          dVar48 = *(double *)(pFVar4 + lVar36 + 0x10);
          dVar50 = *(double *)(pFVar4 + lVar36 + 0x10 + 8);
          dVar21 = *(double *)(pFVar4 + lVar36 + 0x30);
          dVar22 = *(double *)(pFVar4 + lVar36 + 0x30 + 8);
          dVar23 = *(double *)(pFVar4 + lVar36 + 0x50);
          dVar24 = *(double *)(pFVar4 + lVar36 + 0x50 + 8);
          dVar29 = *(double *)(pFVar4 + lVar36 + 0x40);
          dVar30 = *(double *)(pFVar4 + lVar36 + 0x40 + 8);
          if ((param_5->ArrayNum <= (int)(uint)uVar2) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (param_5->AllocatorInstance).Data;
          dVar14 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          dVar52 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          dVar56 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          dVar59 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          fVar8 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
          uVar38 = -(ulonglong)(0.0 <= dVar10);
          uVar40 = -(ulonglong)(0.0 <= dVar11);
          auVar53._0_4_ = ~(uint)uVar38 & SUB84(0.0 - dVar14,0);
          auVar53._4_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
          auVar53._8_4_ = ~(uint)uVar40 & SUB84(0.0 - dVar52,0);
          auVar53._12_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)(0.0 - dVar52) >> 0x20);
          auVar46._8_4_ = (int)((ulonglong)dVar52 & uVar40);
          auVar46._0_8_ = (ulonglong)dVar14 & uVar38;
          auVar46._12_4_ = (int)(((ulonglong)dVar52 & uVar40) >> 0x20);
          uVar38 = -(ulonglong)(0.0 <= dVar48);
          uVar40 = -(ulonglong)(0.0 <= dVar50);
          dVar51 = SUB168(auVar53 | auVar46,0) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar55) + dVar10 * dVar55;
          dVar54 = SUB168(auVar53 | auVar46,8) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar58) + dVar11 * dVar58;
          auVar49._0_4_ = ~(uint)uVar38 & SUB84(0.0 - dVar56,0);
          auVar49._4_4_ = ~(uint)(uVar38 >> 0x20) & (uint)((ulonglong)(0.0 - dVar56) >> 0x20);
          auVar49._8_4_ = ~(uint)uVar40 & SUB84(0.0 - dVar59,0);
          auVar49._12_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)(0.0 - dVar59) >> 0x20);
          auVar12._8_4_ = (int)((ulonglong)dVar59 & uVar40);
          auVar12._0_8_ = (ulonglong)dVar56 & uVar38;
          auVar12._12_4_ = (int)(((ulonglong)dVar59 & uVar40) >> 0x20);
          dVar25 = *(double *)(pFVar4 + lVar36);
          dVar26 = *(double *)(pFVar4 + lVar36 + 8);
          auVar43._8_4_ = SUB84(dVar54,0);
          auVar43._0_8_ = dVar51;
          auVar43._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          dVar48 = SUB168(auVar49 | auVar12,0) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar18) + dVar48 * dVar18;
          dVar50 = SUB168(auVar49 | auVar12,8) *
                   ((double)GlobalVectorConstants::FloatOne.m128_f32[3] - dStack_160) +
                   dVar50 * dStack_160;
          dVar10 = dVar48 * dVar48 + dVar51 * dVar51;
          dVar11 = dVar50 * dVar50 + auVar43._8_8_ * dVar54;
          auVar44._8_4_ = SUB84(dVar11,0);
          auVar44._0_8_ = dVar10;
          auVar44._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar45._0_8_ = auVar44._8_8_ + dVar10;
          auVar45._8_8_ = dVar10 + dVar11;
          uVar40 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar45._0_8_);
          uVar41 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar45._8_8_);
          uVar39 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar45._0_8_);
          uVar42 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar45._8_8_);
          auVar46 = sqrtpd(auVar45,auVar45);
          auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
          auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
          auVar61._0_8_ = uVar40 & (ulonglong)(auVar60._0_8_ * dVar51);
          uVar38 = uVar41 & (ulonglong)(auVar60._8_8_ * dVar54);
          auVar61._8_4_ = (undefined4)uVar38;
          auVar61._12_4_ = (undefined4)(uVar38 >> 0x20);
          dVar51 = *(double *)(pFVar4 + lVar36 + 0x10);
          dVar54 = *(double *)(pFVar4 + lVar36 + 0x10 + 8);
          auVar57._0_8_ = uVar39 & (ulonglong)(auVar46._0_8_ * dVar48);
          uVar38 = uVar42 & (ulonglong)(auVar46._8_8_ * dVar50);
          auVar57._8_4_ = (undefined4)uVar38;
          auVar57._12_4_ = (undefined4)(uVar38 >> 0x20);
          auVar60._4_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)dVar14 >> 0x20);
          auVar60._0_4_ = ~(uint)uVar40 & SUB84(dVar14,0);
          auVar60._8_4_ = ~(uint)uVar41 & SUB84(dVar52,0);
          auVar60._12_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)dVar52 >> 0x20);
          auVar13._4_4_ = ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)dVar56 >> 0x20);
          auVar13._0_4_ = ~(uint)uVar39 & SUB84(dVar56,0);
          auVar13._8_4_ = ~(uint)uVar42 & SUB84(dVar59,0);
          auVar13._12_4_ = ~(uint)(uVar42 >> 0x20) & (uint)((ulonglong)dVar59 >> 0x20);
          dVar52 = SUB168(auVar61 | auVar60,0);
          dVar62 = SUB168(auVar61 | auVar60,8);
          dVar56 = SUB168(auVar57 | auVar13,0);
          dVar59 = SUB168(auVar57 | auVar13,8);
          dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          uVar35 = uVar35 + 1;
          lVar34 = lVar34 + 2;
          dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dStack_160 = auVar17._8_8_;
          dVar50 = dVar51 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar26 * dVar59 +
                   dVar54 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar25 * dVar56 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar14 = dVar25 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar54 * dVar59 +
                   dVar26 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar51 * dVar56 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar15._8_4_ = SUB84(dVar50,0);
          auVar15._0_8_ =
               dVar54 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar25 * dVar59 +
               dVar51 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar26 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          auVar15._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
          *(undefined1 (*) [16])(pFVar4 + lVar36) = auVar15;
          auVar16._8_4_ = SUB84(dVar14,0);
          auVar16._0_8_ =
               dVar26 * dVar52 * dVar10 + dVar51 * dVar59 + dVar25 * dVar62 * dVar48 +
               dVar54 * dVar56 * dVar11;
          auVar16._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(pFVar4 + lVar36 + 0x10) = auVar16;
          dVar11 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar18;
          dVar48 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dStack_160;
          dVar10 = *(double *)(pFVar4 + lVar36 + 0x20 + 8);
          *(double *)(pFVar4 + lVar36 + 0x20) =
               dVar27 * dVar55 + *(double *)(pFVar4 + lVar36 + 0x20);
          *(double *)(pFVar4 + lVar36 + 0x20 + 8) = dVar28 * dVar58 + dVar10;
          auVar47._8_4_ = SUB84(dVar48,0);
          auVar47._0_8_ = dVar11;
          auVar47._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
          dVar10 = dVar22 * dStack_160 + auVar47._8_8_ * 0.0 +
                   *(double *)(pFVar4 + lVar36 + 0x30 + 8);
          auVar20._8_4_ = SUB84(dVar10,0);
          auVar20._0_8_ = dVar21 * dVar18 + dVar11 * 0.0 + *(double *)(pFVar4 + lVar36 + 0x30);
          auVar20._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pFVar4 + lVar36 + 0x30) = auVar20;
          dVar10 = (dVar30 * dVar58 + (double)fVar6) * *(double *)(pFVar4 + lVar36 + 0x40 + 8);
          auVar9._8_4_ = SUB84(dVar10,0);
          auVar9._0_8_ = (dVar29 * dVar55 + (double)fVar8) * *(double *)(pFVar4 + lVar36 + 0x40);
          auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pFVar4 + lVar36 + 0x40) = auVar9;
          dVar10 = (dVar24 * dStack_160 + dVar48 * 0.0 + (double)fVar7) *
                   *(double *)(pFVar4 + lVar36 + 0x50 + 8);
          auVar19._8_4_ = SUB84(dVar10,0);
          auVar19._0_8_ =
               (dVar23 * dVar18 + dVar11 * 0.0 + (double)fVar1) *
               *(double *)(pFVar4 + lVar36 + 0x50);
          auVar19._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pFVar4 + lVar36 + 0x50) = auVar19;
          iVar33 = (param_4->BoneIndicesArray).ArrayNum;
        } while ((int)uVar35 < iVar33);
      }
      lVar37 = lVar37 + 1;
    } while (lVar37 < param_1);
  }
  return;
}

// ConvertBoneSpaceTransformToCS @ 1473f29c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationRuntime::ConvertBoneSpaceTransformToCS
          (TTransform<double> *param_1,FCSPose<FCompactPose> *param_2,TTransform<double> *param_3,
          FCompactPoseBoneIndex param_4,EBoneControlSpace param_5)

{
  TTransform<double> *pTVar1;
  
  if (param_5 == BCS_WorldSpace) {
    UE::Math::TTransform<double>::SetToRelativeTransform(param_3,param_1);
  }
  else if (param_5 != BCS_ComponentSpace) {
    if (param_5 == BCS_ParentBoneSpace) {
      if (param_4 == (FCompactPoseBoneIndex)0xffffffff) {
        return;
      }
      FBoneContainer::GetParentBoneIndex
                (*(FBoneContainer **)&(param_2->Pose).field_0x10,(FCompactPoseBoneIndex *)&param_5);
      param_4 = (FCompactPoseBoneIndex)param_5;
    }
    else if (param_5 != BCS_BoneSpace) {
      if ((byte)LogAnimation._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      return;
    }
    if (param_4 != (FCompactPoseBoneIndex)0xffffffff) {
      pTVar1 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_2,param_4);
      UE::Math::TTransform<double>::Multiply(param_3,param_3,pTVar1);
      return;
    }
  }
  return;
}

// ConvertCSTransformToBoneSpace @ 1473f2cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationRuntime::ConvertCSTransformToBoneSpace
          (TTransform<double> *param_1,FCSPose<FCompactPose> *param_2,TTransform<double> *param_3,
          FCompactPoseBoneIndex param_4,EBoneControlSpace param_5)

{
  TTransform<double> *pTVar1;
  
  if (param_5 == BCS_WorldSpace) {
    UE::Math::TTransform<double>::Multiply(param_3,param_3,param_1);
  }
  else if (param_5 != BCS_ComponentSpace) {
    if (param_5 == BCS_ParentBoneSpace) {
      FBoneContainer::GetParentBoneIndex
                (*(FBoneContainer **)&(param_2->Pose).field_0x10,(FCompactPoseBoneIndex *)&param_5);
      param_4 = (FCompactPoseBoneIndex)param_5;
      if (param_5 != ~BCS_WorldSpace) goto LAB_1473f2d40;
    }
    else {
      if (param_5 == BCS_BoneSpace) {
LAB_1473f2d40:
        pTVar1 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_2,param_4);
        UE::Math::TTransform<double>::SetToRelativeTransform(param_3,pTVar1);
        return;
      }
      if (2 < (byte)LogAnimation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        return;
      }
    }
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace @ 1473f3190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAnimationRuntime::ConvertMeshRotationPoseToLocalSpace(FCompactPose *param_1)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_ConvertMeshRotPoseToLocalSpace> FVar32;
  FName FVar33;
  longlong lVar34;
  uint uVar35;
  FColor_u_0 local_res18 [2];
  FCompactPoseBoneIndex local_res20 [2];
  FName local_98;
  FName local_90;
  FName local_88;
  
  uVar35 = 0;
  FVar32 = StatPtr_STAT_ConvertMeshRotPoseToLocalSpace;
  if (StatPtr_STAT_ConvertMeshRotPoseToLocalSpace ==
      (FThreadSafeStaticStat<FStat_STAT_ConvertMeshRotPoseToLocalSpace>)0x0) {
    pFVar31 = ::FName::FName(&local_90,"STAT_ConvertMeshRotPoseToLocalSpace");
    FVar32 = (FThreadSafeStaticStat<FStat_STAT_ConvertMeshRotPoseToLocalSpace>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConvertMeshRotPoseToLocalSpace,
                        *pFVar31,L"ConvertMeshRotPoseToLocalSpace","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar32;
  bVar26 = false;
  bVar28 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar33.ComparisonIndex.Value.Value != 0) || (FVar33.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar26 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_98.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                   ,0x482);
        bVar26 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar27 = true;
      goto LAB_1473f32e3;
    }
  }
  bVar27 = false;
  FVar33 = local_88;
LAB_1473f32e3:
  uVar3 = *(uint *)&param_1->field_0x8;
  if (bAnim_ConvertMeshRotationPoseToLocalSpace_ISPC_Enabled == false) {
    while (uVar3 = uVar3 - 1, 0 < (int)uVar3) {
      FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&param_1->field_0x10,local_res20);
      lVar34 = (longlong)(int)local_res20[0];
      uVar30 = uVar35;
      if ((int)local_res20[0] < *(int *)&param_1->field_0x8) {
        uVar30 = ~(uint)local_res20[0] >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pdVar1 = (double *)(lVar34 * 0x60 + *(longlong *)param_1);
      pdVar2 = (double *)(lVar34 * 0x60 + 0x10 + *(longlong *)param_1);
      dVar14 = *pdVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar15 = pdVar1[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar30 = uVar35;
      if ((int)uVar3 < *(int *)&param_1->field_0x8) {
        uVar30 = ~uVar3 >> 0x1f;
      }
      dVar16 = *pdVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar17 = pdVar2[1] * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pdVar1 = (double *)((longlong)(int)uVar3 * 0x60 + 0x10 + *(longlong *)param_1);
      dVar22 = *pdVar1;
      dVar23 = pdVar1[1];
      pdVar1 = (double *)((longlong)(int)uVar3 * 0x60 + *(longlong *)param_1);
      dVar24 = *pdVar1;
      dVar25 = pdVar1[1];
      uVar30 = uVar35;
      if ((int)uVar3 < *(int *)&param_1->field_0x8) {
        uVar30 = ~uVar3 >> 0x1f;
      }
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar19 = dVar24 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar23 * dVar17 +
               dVar25 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar22 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar21 = dVar22 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar25 * dVar17 +
               dVar23 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar24 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar34 = *(longlong *)param_1;
      auVar20._8_4_ = SUB84(dVar21,0);
      auVar20._0_8_ =
           dVar23 * dVar14 * dVar8 + dVar24 * dVar17 + dVar22 * dVar15 * dVar9 +
           dVar25 * dVar16 * dVar12;
      auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      *(undefined1 (*) [16])((longlong)(int)uVar3 * 0x60 + lVar34) = auVar20;
      auVar18._8_4_ = SUB84(dVar19,0);
      auVar18._0_8_ =
           dVar25 * dVar14 * dVar10 + dVar22 * dVar17 + dVar24 * dVar15 * dVar11 +
           dVar23 * dVar16 * dVar13;
      auVar18._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])((longlong)(int)uVar3 * 0x60 + 0x10 + lVar34) = auVar18;
    }
  }
  else {
    if (((int)uVar3 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = *(int *)&param_1->field_0x8;
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + 0x90);
    if ((iVar4 < 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    ::ConvertMeshRotationPoseToLocalSpace(uVar5,uVar6,iVar4);
  }
  if (bVar28) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// ConvertPoseToAdditive @ 1473f3650

void __cdecl FAnimationRuntime::ConvertPoseToAdditive(FCompactPose *param_1,FCompactPose *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  if (bAnim_ConvertPoseToAdditive_ISPC_Enabled) {
    if ((*(int *)&param_1->field_0x8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar1 = *(undefined4 *)&param_2->field_0x8;
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)param_1;
    if ((*(int *)&param_1->field_0x8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ::ConvertPoseToAdditive(uVar4,uVar3,uVar1);
  }
  else {
    uVar2 = *(uint *)&param_2->field_0x8;
    uVar9 = 0;
    if (uVar2 != 0) {
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&param_1->field_0x8) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)param_1;
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&param_2->field_0x8) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ConvertTransformToAdditive
                  ((TTransform<double> *)(lVar5 + (longlong)(int)uVar9 * 0x60),
                   (TTransform<double> *)(*(longlong *)param_2 + (longlong)(int)uVar9 * 0x60));
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar2);
    }
  }
  return;
}

// ConvertPoseToMeshRotation @ 1473f37e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAnimationRuntime::ConvertPoseToMeshRotation(FCompactPose *param_1)

{
  double *pdVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint uVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_ConvertPoseToMeshRot> FVar30;
  FName FVar31;
  longlong lVar32;
  uint uVar33;
  uint local_res10;
  FColor_u_0 local_res18 [2];
  FCompactPoseBoneIndex local_res20 [2];
  FName local_98;
  FName local_90;
  FName local_88;
  
  uVar33 = 0;
  FVar30 = StatPtr_STAT_ConvertPoseToMeshRot;
  if (StatPtr_STAT_ConvertPoseToMeshRot ==
      (FThreadSafeStaticStat<FStat_STAT_ConvertPoseToMeshRot>)0x0) {
    pFVar29 = ::FName::FName(&local_90,"STAT_ConvertPoseToMeshRot");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_ConvertPoseToMeshRot>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConvertPoseToMeshRot,*pFVar29,
                        L"ConvertPoseToMeshRot","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar30;
  bVar24 = false;
  bVar26 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar24 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_98.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                   ,0x463);
        bVar24 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar25 = true;
      goto LAB_1473f3933;
    }
  }
  bVar25 = false;
  FVar31 = local_88;
LAB_1473f3933:
  if (bAnim_ConvertPoseToMeshRotation_ISPC_Enabled == false) {
    local_res10 = 1;
    if (1 < *(int *)&param_1->field_0x8) {
      do {
        FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&param_1->field_0x10,local_res20);
        lVar32 = (longlong)(int)local_res20[0];
        uVar28 = uVar33;
        if ((int)local_res20[0] < *(int *)&param_1->field_0x8) {
          uVar28 = ~(uint)local_res20[0] >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pdVar1 = (double *)(lVar32 * 0x60 + *(longlong *)param_1);
        dVar16 = *pdVar1;
        dVar17 = pdVar1[1];
        pdVar1 = (double *)(lVar32 * 0x60 + 0x10 + *(longlong *)param_1);
        dVar18 = *pdVar1;
        dVar19 = pdVar1[1];
        uVar28 = uVar33;
        if ((int)local_res10 < *(int *)&param_1->field_0x8) {
          uVar28 = ~local_res10 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pdVar1 = (double *)((longlong)(int)local_res10 * 0x60 + 0x10 + *(longlong *)param_1);
        dVar20 = *pdVar1;
        dVar21 = pdVar1[1];
        pdVar1 = (double *)((longlong)(int)local_res10 * 0x60 + *(longlong *)param_1);
        dVar22 = *pdVar1;
        dVar23 = pdVar1[1];
        uVar28 = uVar33;
        if ((int)local_res10 < *(int *)&param_1->field_0x8) {
          uVar28 = ~local_res10 >> 0x1f;
        }
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar15 = dVar16 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar23 * dVar19 +
                 dVar21 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar18 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar13 = dVar16 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar21 * dVar19 +
                 dVar23 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar18 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        if ((uVar28 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar32 = *(longlong *)param_1;
        auVar14._8_4_ = SUB84(dVar15,0);
        auVar14._0_8_ =
             dVar16 * dVar21 * dVar6 + dVar22 * dVar19 + dVar20 * dVar17 * dVar8 +
             dVar18 * dVar23 * dVar10;
        auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])((longlong)(int)local_res10 * 0x60 + lVar32) = auVar14;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ =
             dVar16 * dVar23 * dVar7 + dVar20 * dVar19 + dVar22 * dVar17 * dVar9 +
             dVar18 * dVar21 * dVar11;
        auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])((longlong)(int)local_res10 * 0x60 + 0x10 + lVar32) = auVar12;
        local_res10 = local_res10 + 1;
      } while ((int)local_res10 < *(int *)&param_1->field_0x8);
    }
  }
  else {
    if ((*(int *)&param_1->field_0x8 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar27)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)&param_1->field_0x8;
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + 0x90);
    if ((iVar2 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar27)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::ConvertPoseToMeshRotation(uVar3,uVar4,iVar2);
  }
  if (bVar26) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return;
}

// ConvertPoseToMeshSpace @ 1473f3ca0

void __cdecl
FAnimationRuntime::ConvertPoseToMeshSpace
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          FBoneContainer *param_3)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  
  iVar22 = (param_3->RefSkeleton->FinalRefBoneInfo).ArrayNum;
  if ((iVar22 != param_1->ArrayNum) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBones == LocalTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x6bb,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar22 != param_2->ArrayNum) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBones == MeshSpaceTransforms.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x6bc,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (((param_3->BoneIndicesArray).ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(short *)(param_3->BoneIndicesArray).AllocatorInstance.Data != 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("RequiredBoneIndexArray[0] == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x6c4,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  uVar10 = *(undefined8 *)(pFVar4 + 0x10);
  uVar11 = *(undefined8 *)(pFVar4 + 0x18);
  uVar12 = *(undefined8 *)(pFVar4 + 0x20);
  uVar13 = *(undefined8 *)(pFVar4 + 0x28);
  uVar6 = *(undefined4 *)pFVar4;
  uVar7 = *(undefined4 *)(pFVar4 + 4);
  uVar8 = *(undefined4 *)(pFVar4 + 8);
  uVar9 = *(undefined4 *)(pFVar4 + 0xc);
  uVar14 = *(undefined8 *)(pFVar4 + 0x30);
  uVar15 = *(undefined8 *)(pFVar4 + 0x38);
  uVar16 = *(undefined8 *)(pFVar4 + 0x50);
  uVar17 = *(undefined8 *)(pFVar4 + 0x58);
  uVar18 = *(undefined8 *)(pFVar4 + 0x40);
  uVar19 = *(undefined8 *)(pFVar4 + 0x48);
  if ((param_2->ArrayNum < 1) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar24 = 1;
  *(undefined4 *)pFVar4 = uVar6;
  *(undefined4 *)(pFVar4 + 4) = uVar7;
  *(undefined4 *)(pFVar4 + 8) = uVar8;
  *(undefined4 *)(pFVar4 + 0xc) = uVar9;
  *(undefined8 *)(pFVar4 + 0x10) = uVar10;
  *(undefined8 *)(pFVar4 + 0x18) = uVar11;
  *(undefined8 *)(pFVar4 + 0x20) = uVar12;
  *(undefined8 *)(pFVar4 + 0x28) = uVar13;
  *(undefined8 *)(pFVar4 + 0x30) = uVar14;
  *(undefined8 *)(pFVar4 + 0x38) = uVar15;
  *(undefined8 *)(pFVar4 + 0x40) = uVar18;
  *(undefined8 *)(pFVar4 + 0x48) = uVar19;
  *(undefined8 *)(pFVar4 + 0x50) = uVar16;
  *(undefined8 *)(pFVar4 + 0x58) = uVar17;
  lVar26 = (longlong)(param_3->BoneIndicesArray).ArrayNum;
  if (1 < lVar26) {
    lVar23 = 1;
    do {
      uVar21 = 0;
      if ((int)uVar24 < (param_3->BoneIndicesArray).ArrayNum) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar1 = *(ushort *)((param_3->BoneIndicesArray).AllocatorInstance.Data + lVar23 * 2);
      lVar25 = (ulonglong)uVar1 * 0x60;
      iVar22 = FBoneContainer::GetParentBoneIndex(param_3,(uint)uVar1);
      UE::Math::TTransform<double>::Multiply
                ((TTransform<double> *)(pFVar3 + lVar25),(TTransform<double> *)(pFVar2 + lVar25),
                 (TTransform<double> *)(pFVar3 + (longlong)iVar22 * 0x60));
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 1;
    } while (lVar23 < lVar26);
  }
  return;
}

// ConvertTransformToAdditive @ 1473f4290

void __cdecl
FAnimationRuntime::ConvertTransformToAdditive
          (TTransform<double> *param_1,TTransform<double> *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  __m128d _Var19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  _Var19.m128d_f64 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64;
  dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = (param_2->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar12 = (param_2->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar13 = (param_2->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar29 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar36._8_4_ = SUB84(dVar13,0);
  auVar36._0_8_ = dVar12;
  auVar36._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar33 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar14 = auVar29._0_8_;
  auVar31._8_4_ = auVar29._0_4_;
  auVar31._0_8_ = dVar14;
  auVar31._12_4_ = auVar29._4_4_;
  dVar17 = auVar33._8_8_;
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar15 = auVar29._8_8_;
  auVar25._8_4_ = auVar33._8_4_;
  auVar25._0_8_ = dVar17;
  auVar25._12_4_ = auVar33._12_4_;
  dVar16 = auVar33._0_8_;
  dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  auVar26._8_4_ = auVar33._0_4_;
  auVar26._0_8_ = dVar16;
  auVar26._12_4_ = auVar33._4_4_;
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  (param_1->Rotation).XY.m128d_f64[0] =
       dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar17 * dVar12 +
       dVar15 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar16 * auVar36._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] =
       auVar31._8_8_ * dVar10 * dVar35 + auVar25._8_8_ * dVar13 + dVar15 * dVar11 * dVar24 +
       auVar26._8_8_ * dVar12 * dVar9;
  dVar24 = dVar14 * dVar12 * dVar8 + dVar17 * dVar11 + dVar15 * dVar13 * dVar7 +
           dVar16 * dVar10 * _Var19.m128d_f64[1];
  auVar29._8_4_ = SUB84(dVar24,0);
  auVar29._0_8_ =
       dVar14 * auVar36._8_8_ * dVar34 + dVar17 * dVar10 + dVar15 * dVar12 * dVar5 +
       dVar16 * dVar11 * _Var19.m128d_f64[0];
  auVar29._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar29;
  dVar24 = (param_2->Translation).ZW.m128d_f64[0];
  dVar35 = (param_1->Translation).XY.m128d_f64[1];
  dVar9 = (param_2->Translation).XY.m128d_f64[1];
  dVar8 = (param_1->Translation).ZW.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = dVar35 - dVar9;
  (param_1->Translation).ZW.m128d_f64[0] = dVar8 - dVar24;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  auVar29 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
  dVar24 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar35 = 0.0;
  if (__real_3e45798ee0000000 <
      (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar9 = __real_3ff0000000000000 / auVar29._0_8_;
  }
  else {
    dVar9 = 0.0;
  }
  if (__real_3e45798ee0000000 <
      (double)CONCAT44(auVar29._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       auVar29._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar8 = __real_3ff0000000000000 / auVar29._8_8_;
  }
  else {
    dVar8 = 0.0;
  }
  if (__real_3e45798ee0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar35 = __real_3ff0000000000000 / dVar24;
  }
  dVar24 = (param_1->Scale3D).ZW.m128d_f64[0] * dVar35 - __real_3ff0000000000000;
  auVar32._0_8_ = (param_1->Scale3D).XY.m128d_f64[0] * dVar9 - __real_3ff0000000000000;
  auVar32._8_8_ = (param_1->Scale3D).XY.m128d_f64[1] * dVar8 - __real_3ff0000000000000;
  *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64 = auVar32;
  (param_1->Scale3D).ZW.m128d_f64[0] = dVar24;
  (param_1->Scale3D).ZW.m128d_f64[1] = 0.0;
  dVar9 = (param_1->Rotation).XY.m128d_f64[0];
  dVar8 = (param_1->Rotation).XY.m128d_f64[1];
  dVar5 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar24 = dVar5 * dVar5 + dVar9 * dVar9;
  dVar35 = dVar7 * dVar7 + dVar8 * dVar8;
  auVar27._8_4_ = SUB84(dVar35,0);
  auVar27._0_8_ = dVar24;
  auVar27._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  auVar28._0_8_ = auVar27._8_8_ + dVar24;
  auVar28._8_8_ = dVar24 + dVar35;
  auVar33 = sqrtpd(auVar32,auVar28);
  uVar20 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar28._0_8_);
  uVar22 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar28._8_8_);
  uVar21 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar28._0_8_);
  uVar23 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar28._8_8_);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
  auVar30._0_8_ = uVar21 & (ulonglong)(auVar29._0_8_ * dVar9);
  uVar18 = uVar23 & (ulonglong)(auVar29._8_8_ * dVar8);
  auVar30._8_4_ = (undefined4)uVar18;
  auVar30._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar37._0_8_ = uVar20 & (ulonglong)(auVar33._0_8_ * dVar5);
  uVar18 = uVar22 & (ulonglong)(auVar33._8_8_ * dVar7);
  auVar37._8_4_ = (undefined4)uVar18;
  auVar37._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar6._4_4_ = ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar6._0_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar6._8_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar6._12_4_ = ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  uVar1 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar2 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar30 | auVar6;
  auVar33._4_4_ = ~(uint)(uVar20 >> 0x20) & uVar2;
  auVar33._0_4_ = ~(uint)uVar20 & uVar1;
  auVar33._8_4_ = ~(uint)uVar22 & uVar3;
  auVar33._12_4_ = ~(uint)(uVar22 >> 0x20) & uVar4;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar37 | auVar33;
  return;
}

// CreateMaskWeights @ 1473f4ee0

void __cdecl
FAnimationRuntime::CreateMaskWeights
          (TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UBlendProfile_*,TSizedDefaultAllocator<32>_> *param_2,USkeleton *param_3)

{
  longlong lVar1;
  USkeleton *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FSkeletonRemappingRegistry *this;
  FSkeletonRemapping *this_00;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_res20;
  
  if (param_3 != (USkeleton *)0x0) {
    uVar11 = (param_3->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar11,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_>::AddZeroed(param_1,uVar11);
    iVar6 = param_2->ArrayNum;
    uVar11 = 0;
    if (0 < iVar6) {
      local_res20 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < iVar6) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar1 = *(longlong *)((param_2->AllocatorInstance).Data + local_res20);
        if ((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\x02')) {
          pUVar2 = *(USkeleton **)(lVar1 + 0x30);
          this = UE::Anim::FSkeletonRemappingRegistry::Get();
          this_00 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping(this,pUVar2,param_3);
          uVar9 = 0;
          iVar6 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x30))(lVar1 + 0x28);
          if (0 < iVar6) {
            lVar12 = 0;
            do {
              bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
              if ((bVar5) &&
                 (bVar5 = FWeakObjectPtr::IsValid(&(this_00->TargetSkeleton).WeakPtr), bVar5)) {
                uVar10 = ~uVar9 >> 0x1f;
                uVar8 = 0;
                if ((int)uVar9 < *(int *)(lVar1 + 0x40)) {
                  uVar8 = uVar10;
                }
                if ((uVar8 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar8 = *(int *)(*(longlong *)(lVar1 + 0x38) + 8 + lVar12) * 2 >> 1;
                if (((int)uVar8 < 0) ||
                   ((this_00->SourceToTargetBoneIndexes).ArrayNum <= (int)uVar8)) {
                  iVar6 = -1;
                }
                else {
                  uVar7 = 0;
                  if ((int)uVar8 < (this_00->SourceToTargetBoneIndexes).ArrayNum) {
                    uVar7 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar6 = *(int *)((this_00->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                                  (longlong)(int)uVar8 * 4);
                }
              }
              else {
                uVar10 = ~uVar9 >> 0x1f;
                uVar8 = 0;
                if ((int)uVar9 < *(int *)(lVar1 + 0x40)) {
                  uVar8 = uVar10;
                }
                if ((uVar8 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar6 = *(int *)(*(longlong *)(lVar1 + 0x38) + 8 + lVar12) * 2 >> 1;
              }
              if ((-1 < iVar6) && (iVar6 < param_1->ArrayNum)) {
                if ((iVar6 < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar3 = (param_1->AllocatorInstance).Data;
                *(uint *)(pFVar3 + (longlong)iVar6 * 8) = uVar11;
                uVar8 = 0;
                if ((int)uVar9 < *(int *)(lVar1 + 0x40)) {
                  uVar8 = uVar10;
                }
                if ((uVar8 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(undefined4 *)(pFVar3 + (longlong)iVar6 * 8 + 4) =
                     *(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 0x10 + lVar12);
              }
              uVar9 = uVar9 + 1;
              lVar12 = lVar12 + 0x14;
              iVar6 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x30))(lVar1 + 0x28);
            } while ((int)uVar9 < iVar6);
          }
        }
        iVar6 = param_2->ArrayNum;
        local_res20 = local_res20 + 8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar6);
    }
  }
  return;
}

// CreateMaskWeights @ 1473f5290

void __cdecl
FAnimationRuntime::CreateMaskWeights
          (TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FInputBlendPose,TSizedDefaultAllocator<32>_> *param_2,USkeleton *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  uint local_res18;
  uint local_98;
  longlong local_90;
  longlong local_88;
  
  if (param_3 != (USkeleton *)0x0) {
    uVar1 = (param_3->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_>::AddZeroed(param_1,uVar1);
    fVar7 = __real_3f800000;
    iVar16 = param_2->ArrayNum;
    local_res18 = 0;
    if (0 < iVar16) {
      local_88 = 0;
      do {
        uVar9 = 0;
        if ((int)local_res18 < iVar16) {
          uVar9 = ~local_res18 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        local_98 = 0;
        iVar16 = *(int *)(pFVar2 + local_88 + 8);
        if (0 < iVar16) {
          local_90 = 0;
          do {
            uVar9 = 0;
            if ((int)local_98 < iVar16) {
              uVar9 = ~local_98 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar3 = *(longlong *)(pFVar2 + local_88);
            FVar4 = *(FName *)(local_90 + lVar3);
            if ((FVar4 != (FName)0x0) &&
               (puVar11 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                          *)&(param_3->ReferenceSkeleton).FinalNameToIndexMap,FVar4)
               , puVar11 != (uint *)0x0)) {
              uVar9 = *puVar11;
              uVar15 = (ulonglong)(int)uVar9;
              if (uVar9 != 0xffffffff) {
                iVar16 = *(int *)(local_90 + 8 + lVar3);
                fVar18 = fVar7;
                if (iVar16 != 0) {
                  fVar18 = fVar7 / (float)iVar16;
                }
                uVar13 = uVar15;
                for (; (longlong)uVar15 < (longlong)(int)uVar1; uVar15 = uVar15 + 1) {
                  uVar14 = (uint)uVar13;
                  if ((int)uVar9 <= (int)uVar14) {
                    uVar13 = uVar13 & 0xffffffff;
                    iVar16 = 0;
                    do {
                      uVar12 = (uint)uVar13;
                      if (uVar12 == uVar9) {
                        if (iVar16 != -1) {
                          uVar12 = 0;
                          if ((int)uVar14 < param_1->ArrayNum) {
                            uVar12 = ~uVar14 >> 0x1f;
                          }
                          if ((uVar12 == 0) &&
                             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar8)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pFVar5 = (param_1->AllocatorInstance).Data;
                          *(uint *)(pFVar5 + uVar15 * 8) = local_res18;
                          fVar17 = (float)(iVar16 + 1) * fVar18 +
                                   *(float *)(pFVar5 + uVar15 * 8 + 4);
                          if (fVar7 <= fVar17) {
                            fVar17 = fVar7;
                          }
                          if (fVar17 <= 0.0) {
                            fVar17 = 0.0;
                          }
                          *(float *)(pFVar5 + uVar15 * 8 + 4) = fVar17;
                        }
                        break;
                      }
                      uVar10 = 0;
                      if ((int)uVar12 < (param_3->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
                        uVar10 = ~uVar12 >> 0x1f;
                      }
                      if ((uVar10 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar16 = iVar16 + 1;
                      uVar12 = *(uint *)((param_3->ReferenceSkeleton).FinalRefBoneInfo.
                                         AllocatorInstance.Data + (longlong)(int)uVar12 * 0xc + 8);
                      uVar13 = (ulonglong)uVar12;
                    } while (uVar12 != 0xffffffff);
                  }
                  uVar13 = (ulonglong)(uVar14 + 1);
                }
              }
            }
            local_98 = local_98 + 1;
            local_90 = local_90 + 0xc;
            iVar16 = *(int *)(pFVar2 + local_88 + 8);
          } while ((int)local_98 < iVar16);
        }
        iVar16 = param_2->ArrayNum;
        local_res18 = local_res18 + 1;
        local_88 = local_88 + 0x10;
      } while ((int)local_res18 < iVar16);
    }
  }
  return;
}

// EnsureParentsPresent @ 1473f9ec0

void __cdecl
FAnimationRuntime::EnsureParentsPresent
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,FReferenceSkeleton *param_2)

{
  FReferenceSkeleton::EnsureParentsExist(param_2,param_1);
  return;
}

// ExcludeBonesWithNoParents @ 1473fa030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationRuntime::ExcludeBonesWithNoParents
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,FReferenceSkeleton *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FReferenceSkeleton *pFVar12;
  longlong lVar13;
  FName local_res8;
  FReferenceSkeleton *local_res10;
  FName local_res20;
  FString local_58;
  FString local_48;
  
  uVar11 = param_1->ArrayNum;
  local_res10 = param_2;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar6 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar6) {
    lVar13 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < iVar6) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (param_1->AllocatorInstance).Data + lVar13;
      if (*(uint *)pFVar10 == 0) {
        pFVar3 = (param_3->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_3->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar6 + 1;
        *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = *(uint *)pFVar10;
        pFVar12 = param_2;
      }
      else {
        pTVar2 = &param_2->FinalRefBoneInfo;
        uVar7 = FReferenceSkeleton::GetParentIndexInternal(param_2,*(uint *)pFVar10,pTVar2);
        pFVar3 = (param_3->AllocatorInstance).Data;
        for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)param_3->ArrayNum * 4;
            pFVar9 = pFVar9 + 4) {
          if (*(uint *)pFVar9 == uVar7) {
            if (((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (longlong)*piVar1 * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = param_3->ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_3->AllocatorInstance,piVar1);
            }
            param_3->ArrayNum = iVar6 + 1;
            *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = *(uint *)pFVar10;
            pFVar12 = local_res10;
            goto LAB_1473fa3a0;
          }
        }
        pFVar12 = local_res10;
        if (2 < (byte)LogAnimation._0_1_) {
          uVar8 = 0;
          if ((int)uVar7 < (param_2->FinalRefBoneInfo).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_res8 = *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0xc);
          ::FName::ToString(&local_res8,&local_48);
          uVar7 = *(uint *)pFVar10;
          uVar8 = 0;
          if ((int)uVar7 < (param_2->FinalRefBoneInfo).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_res20 = *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0xc);
          ::FName::ToString(&local_res20,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          pFVar12 = local_res10;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
            pFVar12 = local_res10;
          }
        }
      }
LAB_1473fa3a0:
      iVar6 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 4;
      param_2 = pFVar12;
    } while ((int)uVar11 < iVar6);
  }
  return;
}

// FillUpComponentSpaceTransforms @ 1473fc140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FAnimationRuntime::FillUpComponentSpaceTransforms
          (FReferenceSkeleton *param_1,TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  TTransform<double> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  undefined1 auStackY_148 [32];
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar34 = param_2->ArrayNum;
  if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
  }
  piVar3 = &param_3->ArrayNum;
  *piVar3 = 0;
  if (param_3->ArrayMax < (int)uVar34) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar34,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,param_2->ArrayNum,&param_3->AllocatorInstance,piVar3,&param_3->ArrayMax);
  uVar34 = 0;
  if (0 < *piVar3) {
    lVar35 = 0;
    do {
      uVar32 = FReferenceSkeleton::GetParentIndexInternal(param_1,uVar34,&param_1->FinalRefBoneInfo)
      ;
      uVar36 = ~uVar34 >> 0x1f;
      if (uVar32 == 0xffffffff) {
        uVar32 = 0;
        if ((int)uVar34 < param_2->ArrayNum) {
          uVar32 = uVar36;
        }
        if ((uVar32 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar31)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = param_2->DataPtr;
        puVar1 = (undefined4 *)((longlong)(pTVar4->Rotation).XY.m128d_f64 + lVar35);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar1 = (undefined4 *)((longlong)(pTVar4->Rotation).ZW.m128d_f64 + lVar35);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar1 = (undefined4 *)((longlong)(pTVar4->Translation).XY.m128d_f64 + lVar35);
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        uVar17 = puVar1[2];
        uVar18 = puVar1[3];
        puVar1 = (undefined4 *)((longlong)(pTVar4->Translation).ZW.m128d_f64 + lVar35);
        uVar19 = *puVar1;
        uVar20 = puVar1[1];
        uVar21 = puVar1[2];
        uVar22 = puVar1[3];
        puVar1 = (undefined4 *)((longlong)(pTVar4->Scale3D).XY.m128d_f64 + lVar35);
        uVar23 = *puVar1;
        uVar24 = puVar1[1];
        uVar25 = puVar1[2];
        uVar26 = puVar1[3];
        puVar1 = (undefined4 *)((longlong)(pTVar4->Scale3D).ZW.m128d_f64 + lVar35);
        uVar27 = *puVar1;
        uVar28 = puVar1[1];
        uVar29 = puVar1[2];
        uVar30 = puVar1[3];
        uVar32 = 0;
        if ((int)uVar34 < *piVar3) {
          uVar32 = uVar36;
        }
      }
      else {
        uVar33 = 0;
        if ((int)uVar34 < param_2->ArrayNum) {
          uVar33 = uVar36;
        }
        if ((uVar33 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar31)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = param_2->DataPtr;
        uVar33 = 0;
        if ((int)uVar32 < *piVar3) {
          uVar33 = ~uVar32 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_108.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_108.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_108.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_108,pTVar4 + (int)uVar34,
                   (TTransform<double> *)
                   ((param_3->AllocatorInstance).Data + (longlong)(int)uVar32 * 0x60));
        uVar32 = 0;
        if ((int)uVar34 < *piVar3) {
          uVar32 = uVar36;
        }
        uVar7 = local_108.Rotation.XY.m128d_f64[0]._0_4_;
        uVar8 = local_108.Rotation.XY.m128d_f64[0]._4_4_;
        uVar9 = local_108.Rotation.XY.m128d_f64[1]._0_4_;
        uVar10 = local_108.Rotation.XY.m128d_f64[1]._4_4_;
        uVar11 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar12 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar13 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar14 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar15 = local_108.Translation.XY.m128d_f64[0]._0_4_;
        uVar16 = local_108.Translation.XY.m128d_f64[0]._4_4_;
        uVar17 = local_108.Translation.XY.m128d_f64[1]._0_4_;
        uVar18 = local_108.Translation.XY.m128d_f64[1]._4_4_;
        uVar19 = local_108.Translation.ZW.m128d_f64[0]._0_4_;
        uVar20 = local_108.Translation.ZW.m128d_f64[0]._4_4_;
        uVar21 = local_108.Translation.ZW.m128d_f64[1]._0_4_;
        uVar22 = local_108.Translation.ZW.m128d_f64[1]._4_4_;
        uVar23 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar24 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar25 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar26 = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar27 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar28 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar29 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar30 = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      if ((uVar32 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      uVar34 = uVar34 + 1;
      pFVar2 = pFVar5 + lVar35;
      *(undefined4 *)pFVar2 = uVar7;
      *(undefined4 *)(pFVar2 + 4) = uVar8;
      *(undefined4 *)(pFVar2 + 8) = uVar9;
      *(undefined4 *)(pFVar2 + 0xc) = uVar10;
      pFVar2 = pFVar5 + lVar35 + 0x10;
      *(undefined4 *)pFVar2 = uVar11;
      *(undefined4 *)(pFVar2 + 4) = uVar12;
      *(undefined4 *)(pFVar2 + 8) = uVar13;
      *(undefined4 *)(pFVar2 + 0xc) = uVar14;
      pFVar2 = pFVar5 + lVar35 + 0x20;
      *(undefined4 *)pFVar2 = uVar15;
      *(undefined4 *)(pFVar2 + 4) = uVar16;
      *(undefined4 *)(pFVar2 + 8) = uVar17;
      *(undefined4 *)(pFVar2 + 0xc) = uVar18;
      pFVar2 = pFVar5 + lVar35 + 0x30;
      *(undefined4 *)pFVar2 = uVar19;
      *(undefined4 *)(pFVar2 + 4) = uVar20;
      *(undefined4 *)(pFVar2 + 8) = uVar21;
      *(undefined4 *)(pFVar2 + 0xc) = uVar22;
      pFVar2 = pFVar5 + lVar35 + 0x40;
      *(undefined4 *)pFVar2 = uVar23;
      *(undefined4 *)(pFVar2 + 4) = uVar24;
      *(undefined4 *)(pFVar2 + 8) = uVar25;
      *(undefined4 *)(pFVar2 + 0xc) = uVar26;
      pFVar5 = pFVar5 + lVar35 + 0x50;
      *(undefined4 *)pFVar5 = uVar27;
      *(undefined4 *)(pFVar5 + 4) = uVar28;
      *(undefined4 *)(pFVar5 + 8) = uVar29;
      *(undefined4 *)(pFVar5 + 0xc) = uVar30;
      lVar35 = lVar35 + 0x60;
    } while ((int)uVar34 < *piVar3);
  }
  return;
}

// FillWithRefPose @ 1473fc530

void __cdecl
FAnimationRuntime::FillWithRefPose
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FBoneContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  UObject *pUVar22;
  USkeleton *this;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&param_2->RefSkeleton->FinalRefBonePose);
  if ((param_2->bDisableRetargeting != false) &&
     (pUVar22 = FWeakObjectPtr::Get(&(param_2->AssetSkeletalMesh).WeakPtr),
     pUVar22 != (UObject *)0x0)) {
    this = (USkeleton *)FWeakObjectPtr::Get(&(param_2->AssetSkeleton).WeakPtr);
    pTVar23 = USkeleton::GetRefLocalPoses(this,(FName)0x0);
    iVar25 = (param_2->BoneIndicesArray).ArrayNum;
    uVar27 = 0;
    if (0 < iVar25) {
      lVar29 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar27 < iVar25) {
          uVar20 = ~uVar27 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar2 = *(ushort *)((param_2->BoneIndicesArray).AllocatorInstance.Data + lVar29);
        uVar28 = (ulonglong)uVar2;
        uVar20 = (uint)uVar2;
        if ((int)(uint)uVar2 < (param_2->PoseToSkeletonBoneIndexArray).ArrayNum) {
          if (((param_2->PoseToSkeletonBoneIndexArray).ArrayNum <= (int)uVar20) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar28 = (ulonglong)(int)uVar20;
          uVar26 = *(uint *)((param_2->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data +
                            uVar28 * 4);
        }
        else {
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8192494858347217480>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                              ,0x248,"PoseToSkeletonBoneIndexArray.IsValidIndex(MeshIndex.GetInt())"
                             );
          if (bVar19) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar26 = 0xffffffff;
        }
        uVar21 = 0;
        if ((int)uVar26 < pTVar23->ArrayNum) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pTVar23->AllocatorInstance).Data;
        lVar24 = (longlong)(int)uVar26 * 0x60;
        uVar9 = *(undefined8 *)(pFVar3 + lVar24 + 0x10);
        uVar10 = *(undefined8 *)(pFVar3 + lVar24 + 0x10 + 8);
        uVar11 = *(undefined8 *)(pFVar3 + lVar24 + 0x20);
        uVar12 = *(undefined8 *)(pFVar3 + lVar24 + 0x20 + 8);
        pFVar1 = pFVar3 + lVar24;
        uVar5 = *(undefined4 *)pFVar1;
        uVar6 = *(undefined4 *)(pFVar1 + 4);
        uVar7 = *(undefined4 *)(pFVar1 + 8);
        uVar8 = *(undefined4 *)(pFVar1 + 0xc);
        uVar13 = *(undefined8 *)(pFVar3 + lVar24 + 0x30);
        uVar14 = *(undefined8 *)(pFVar3 + lVar24 + 0x30 + 8);
        uVar15 = *(undefined8 *)(pFVar3 + lVar24 + 0x50);
        uVar16 = *(undefined8 *)(pFVar3 + lVar24 + 0x50 + 8);
        uVar17 = *(undefined8 *)(pFVar3 + lVar24 + 0x40);
        uVar18 = *(undefined8 *)(pFVar3 + lVar24 + 0x40 + 8);
        if ((param_1->ArrayNum <= (int)uVar20) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        lVar24 = uVar28 * 0x60;
        uVar27 = uVar27 + 1;
        lVar29 = lVar29 + 2;
        pFVar1 = pFVar3 + lVar24;
        *(undefined4 *)pFVar1 = uVar5;
        *(undefined4 *)(pFVar1 + 4) = uVar6;
        *(undefined4 *)(pFVar1 + 8) = uVar7;
        *(undefined4 *)(pFVar1 + 0xc) = uVar8;
        *(undefined8 *)(pFVar3 + lVar24 + 0x10) = uVar9;
        *(undefined8 *)(pFVar3 + lVar24 + 0x10 + 8) = uVar10;
        *(undefined8 *)(pFVar3 + lVar24 + 0x20) = uVar11;
        *(undefined8 *)(pFVar3 + lVar24 + 0x20 + 8) = uVar12;
        *(undefined8 *)(pFVar3 + lVar24 + 0x30) = uVar13;
        *(undefined8 *)(pFVar3 + lVar24 + 0x30 + 8) = uVar14;
        *(undefined8 *)(pFVar3 + lVar24 + 0x40) = uVar17;
        *(undefined8 *)(pFVar3 + lVar24 + 0x40 + 8) = uVar18;
        *(undefined8 *)(pFVar3 + lVar24 + 0x50) = uVar15;
        *(undefined8 *)(pFVar3 + lVar24 + 0x50 + 8) = uVar16;
        iVar25 = (param_2->BoneIndicesArray).ArrayNum;
      } while ((int)uVar27 < iVar25);
    }
  }
  return;
}

// GetBoneTranslationRetargetingMode @ 147400460

Type __cdecl
FAnimationRuntime::GetBoneTranslationRetargetingMode
          (bool param_1,int param_2,int param_3,USkeleton *param_4,USkeleton *param_5,bool param_6)

{
  Type TVar1;
  
  if (!param_1) {
    TVar1 = USkeleton::GetBoneTranslationRetargetingMode(param_5,param_3,param_6);
    return TVar1;
  }
  if (param_2 == -1) {
    param_2 = param_3;
    param_4 = param_5;
  }
  TVar1 = USkeleton::GetBoneTranslationRetargetingMode(param_4,param_2,param_6);
  return TVar1;
}

// GetComponentSpaceRefPose @ 147400750

TTransform<double> * __cdecl
FAnimationRuntime::GetComponentSpaceRefPose
          (TTransform<double> *__return_storage_ptr__,FCompactPoseBoneIndex *param_1,
          FBoneContainer *param_2)

{
  ushort uVar1;
  FSkelMeshRefPoseOverride *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FCompactPoseBoneIndex FVar6;
  TTransform<double> *pTVar7;
  undefined4 extraout_var;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FCompactPoseBoneIndex local_res10 [2];
  
  FVar6 = *param_1;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  while( true ) {
    if (FVar6 == (FCompactPoseBoneIndex)0xffffffff) {
      UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      return __return_storage_ptr__;
    }
    pFVar2 = (param_2->RefPoseOverride).Object;
    if (pFVar2 == (FSkelMeshRefPoseOverride *)0x0) {
      pTVar8 = &param_2->RefSkeleton->FinalRefBonePose;
    }
    else {
      pTVar8 = &pFVar2->RefBonePoses;
    }
    uVar5 = 0;
    if ((int)FVar6 < (param_2->BoneIndicesArray).ArrayNum) {
      uVar5 = ~(uint)FVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar1 = *(ushort *)
             ((param_2->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)FVar6 * 2);
    if ((pTVar8->ArrayNum <= (int)(uint)uVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar3)();
      return pTVar7;
    }
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,__return_storage_ptr__,
               (TTransform<double> *)((pTVar8->AllocatorInstance).Data + (ulonglong)uVar1 * 0x60));
    FVar6 = FBoneContainer::GetParentBoneIndex(param_2,local_res10);
    FVar6 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar6);
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TTransform<double> *)(*pcVar3)();
  return pTVar7;
}

// GetComponentSpaceTransform @ 147400a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
FAnimationRuntime::GetComponentSpaceTransform
          (TTransform<double> *__return_storage_ptr__,FReferenceSkeleton *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  longlong local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar6 = (ulonglong)(uint)param_3;
  if ((param_3 < 0) || ((param_1->FinalRefBoneInfo).ArrayNum <= param_3)) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    pTVar5 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,param_3);
    local_108.Rotation.XY.m128d_f64[0] = (pTVar5->Rotation).XY.m128d_f64[0];
    local_108.Rotation.XY.m128d_f64[1] = (pTVar5->Rotation).XY.m128d_f64[1];
    local_108.Rotation.ZW.m128d_f64[0] = (pTVar5->Rotation).ZW.m128d_f64[0];
    local_108.Rotation.ZW.m128d_f64[1] = (pTVar5->Rotation).ZW.m128d_f64[1];
    local_108.Translation.XY.m128d_f64[0] = (pTVar5->Translation).XY.m128d_f64[0];
    local_108.Translation.XY.m128d_f64[1] = (pTVar5->Translation).XY.m128d_f64[1];
    local_108.Translation.ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
    local_108.Translation.ZW.m128d_f64[1] = (pTVar5->Translation).ZW.m128d_f64[1];
    local_108.Scale3D.XY.m128d_f64[0] = (pTVar5->Scale3D).XY.m128d_f64[0];
    local_108.Scale3D.XY.m128d_f64[1] = (pTVar5->Scale3D).XY.m128d_f64[1];
    local_108.Scale3D.ZW.m128d_f64[0] = (pTVar5->Scale3D).ZW.m128d_f64[0];
    local_108.Scale3D.ZW.m128d_f64[1] = (pTVar5->Scale3D).ZW.m128d_f64[1];
    do {
      uVar3 = FReferenceSkeleton::GetParentIndexInternal
                        (param_1,(int)uVar6,&param_1->FinalRefBoneInfo);
      uVar6 = (ulonglong)(int)uVar3;
      if (uVar3 != 0xffffffff) {
        uVar4 = 0;
        if ((int)uVar3 < param_2->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_118 = uVar6;
          local_110 = (longlong)param_2->ArrayNum;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar5 = (TTransform<double> *)(*pcVar1)();
            return pTVar5;
          }
        }
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_a8,&local_108,param_2->DataPtr + uVar6);
        local_108.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
        local_108.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
        local_108.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
        local_108.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
        local_108.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
        local_108.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
        local_108.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
        local_108.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
        local_108.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
        local_108.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
        local_108.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
        local_108.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
      }
    } while ((-1 < (int)uVar3) && ((int)uVar3 < (param_1->FinalRefBoneInfo).ArrayNum));
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
  }
  return __return_storage_ptr__;
}

// GetComponentSpaceTransformRefPose @ 147400c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
FAnimationRuntime::GetComponentSpaceTransformRefPose
          (TTransform<double> *__return_storage_ptr__,FReferenceSkeleton *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  iVar1 = (param_1->FinalRefBonePose).ArrayNum;
  pFVar2 = (param_1->FinalRefBonePose).AllocatorInstance.Data;
  lVar9 = (longlong)param_2;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TTransform<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if ((param_2 < 0) || ((param_1->FinalRefBoneInfo).ArrayNum <= param_2)) {
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_108.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_108.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  else {
    uVar5 = 0;
    if (param_2 < iVar1) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_118 = lVar9;
      local_110 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TTransform<double> *)(*pcVar3)();
        return pTVar7;
      }
    }
    lVar8 = lVar9 * 0x60;
    local_108.Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar8);
    local_108.Rotation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar8 + 8);
    local_108.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x10);
    local_108.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar8 + 0x10 + 8);
    local_108.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x20);
    local_108.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar8 + 0x20 + 8);
    local_108.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x30);
    local_108.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar8 + 0x30 + 8);
    local_108.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x40);
    local_108.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar8 + 0x40 + 8);
    local_108.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x50);
    local_108.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar8 + 0x50 + 8);
    do {
      uVar5 = FReferenceSkeleton::GetParentIndexInternal
                        (param_1,(int)lVar9,&param_1->FinalRefBoneInfo);
      lVar9 = (longlong)(int)uVar5;
      if (uVar5 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar5 < iVar1) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_118 = lVar9;
          local_110 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TTransform<double> *)(*pcVar3)();
            return pTVar7;
          }
        }
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_a8,&local_108,(TTransform<double> *)(pFVar2 + lVar9 * 0x60));
        local_108.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
        local_108.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
        local_108.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
        local_108.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
        local_108.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
        local_108.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
        local_108.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
        local_108.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
        local_108.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
        local_108.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
        local_108.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
        local_108.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
      }
    } while ((-1 < (int)uVar5) && ((int)uVar5 < (param_1->FinalRefBoneInfo).ArrayNum));
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetComponentSpaceTransformWithCache @ 147400f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
FAnimationRuntime::GetComponentSpaceTransformWithCache
          (FReferenceSkeleton *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  __m128d _Var4;
  __m128d _Var5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TTransform<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_158 [32];
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < param_5->ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TTransform<double> *)(*pcVar3)();
    return pTVar13;
  }
  if ((param_5->AllocatorInstance).Data[lVar15] == (FScriptContainerElement)0x0) {
    uVar11 = 0;
    if (param_3 < param_5->ArrayNum) {
      uVar11 = uVar14;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TTransform<double> *)(*pcVar3)();
      return pTVar13;
    }
    (param_5->AllocatorInstance).Data[lVar15] = (FScriptContainerElement)0x1;
    _Var9 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    _Var8 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    _Var7 = UE::Math::TTransform<double>::Identity.Translation.ZW;
    _Var6 = UE::Math::TTransform<double>::Identity.Translation.XY;
    _Var5 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
    _Var4 = UE::Math::TTransform<double>::Identity.Rotation.XY;
    uVar11 = 0;
    if (param_3 < param_4->ArrayNum) {
      uVar11 = uVar14;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TTransform<double> *)(*pcVar3)();
      return pTVar13;
    }
    pFVar1 = (param_4->AllocatorInstance).Data;
    lVar16 = lVar15 * 0x60;
    *(double (*) [2])(pFVar1 + lVar16) = _Var4.m128d_f64;
    *(double (*) [2])(pFVar1 + lVar16 + 0x10) = _Var5.m128d_f64;
    *(double (*) [2])(pFVar1 + lVar16 + 0x20) = _Var6.m128d_f64;
    *(double (*) [2])(pFVar1 + lVar16 + 0x30) = _Var7.m128d_f64;
    *(double (*) [2])(pFVar1 + lVar16 + 0x40) = _Var8.m128d_f64;
    *(double (*) [2])(pFVar1 + lVar16 + 0x50) = _Var9.m128d_f64;
    if ((-1 < param_3) && (param_3 < (param_1->FinalRefBoneInfo).ArrayNum)) {
      iVar12 = FReferenceSkeleton::GetParentIndexInternal
                         (param_1,param_3,&param_1->FinalRefBoneInfo);
      if (iVar12 == -1) {
        uVar11 = 0;
        if (param_3 < param_2->ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar13 = (TTransform<double> *)(*pcVar3)();
          return pTVar13;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        pFVar1 = pFVar2 + lVar16;
        uVar17 = *(undefined4 *)pFVar1;
        uVar18 = *(undefined4 *)(pFVar1 + 4);
        uVar19 = *(undefined4 *)(pFVar1 + 8);
        uVar20 = *(undefined4 *)(pFVar1 + 0xc);
        pFVar1 = pFVar2 + lVar16 + 0x10;
        uVar21 = *(undefined4 *)pFVar1;
        uVar22 = *(undefined4 *)(pFVar1 + 4);
        uVar23 = *(undefined4 *)(pFVar1 + 8);
        uVar24 = *(undefined4 *)(pFVar1 + 0xc);
        pFVar1 = pFVar2 + lVar16 + 0x20;
        uVar25 = *(undefined4 *)pFVar1;
        uVar26 = *(undefined4 *)(pFVar1 + 4);
        uVar27 = *(undefined4 *)(pFVar1 + 8);
        uVar28 = *(undefined4 *)(pFVar1 + 0xc);
        pFVar1 = pFVar2 + lVar16 + 0x30;
        uVar29 = *(undefined4 *)pFVar1;
        uVar30 = *(undefined4 *)(pFVar1 + 4);
        uVar31 = *(undefined4 *)(pFVar1 + 8);
        uVar32 = *(undefined4 *)(pFVar1 + 0xc);
        pFVar1 = pFVar2 + lVar16 + 0x40;
        uVar33 = *(undefined4 *)pFVar1;
        uVar34 = *(undefined4 *)(pFVar1 + 4);
        uVar35 = *(undefined4 *)(pFVar1 + 8);
        uVar36 = *(undefined4 *)(pFVar1 + 0xc);
        pFVar2 = pFVar2 + lVar16 + 0x50;
        uVar37 = *(undefined4 *)pFVar2;
        uVar38 = *(undefined4 *)(pFVar2 + 4);
        uVar39 = *(undefined4 *)(pFVar2 + 8);
        uVar40 = *(undefined4 *)(pFVar2 + 0xc);
      }
      else {
        pTVar13 = GetComponentSpaceTransformWithCache(param_1,param_2,iVar12,param_4,param_5);
        uVar11 = 0;
        if (param_3 < param_2->ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          pTVar13 = (TTransform<double> *)(*pcVar3)();
          return pTVar13;
        }
        local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_118.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_118.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_118,(TTransform<double> *)((param_2->AllocatorInstance).Data + lVar16),
                   pTVar13);
        uVar17 = local_118.Rotation.XY.m128d_f64[0]._0_4_;
        uVar18 = local_118.Rotation.XY.m128d_f64[0]._4_4_;
        uVar19 = local_118.Rotation.XY.m128d_f64[1]._0_4_;
        uVar20 = local_118.Rotation.XY.m128d_f64[1]._4_4_;
        uVar21 = local_118.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar22 = local_118.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar23 = local_118.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar24 = local_118.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar25 = local_118.Translation.XY.m128d_f64[0]._0_4_;
        uVar26 = local_118.Translation.XY.m128d_f64[0]._4_4_;
        uVar27 = local_118.Translation.XY.m128d_f64[1]._0_4_;
        uVar28 = local_118.Translation.XY.m128d_f64[1]._4_4_;
        uVar29 = local_118.Translation.ZW.m128d_f64[0]._0_4_;
        uVar30 = local_118.Translation.ZW.m128d_f64[0]._4_4_;
        uVar31 = local_118.Translation.ZW.m128d_f64[1]._0_4_;
        uVar32 = local_118.Translation.ZW.m128d_f64[1]._4_4_;
        uVar33 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar34 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar35 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar36 = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar37 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar38 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar39 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar40 = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      uVar11 = 0;
      if (param_3 < param_4->ArrayNum) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TTransform<double> *)(*pcVar3)();
        return pTVar13;
      }
      pFVar2 = (param_4->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar16;
      *(undefined4 *)pFVar1 = uVar17;
      *(undefined4 *)(pFVar1 + 4) = uVar18;
      *(undefined4 *)(pFVar1 + 8) = uVar19;
      *(undefined4 *)(pFVar1 + 0xc) = uVar20;
      pFVar1 = pFVar2 + lVar16 + 0x10;
      *(undefined4 *)pFVar1 = uVar21;
      *(undefined4 *)(pFVar1 + 4) = uVar22;
      *(undefined4 *)(pFVar1 + 8) = uVar23;
      *(undefined4 *)(pFVar1 + 0xc) = uVar24;
      pFVar1 = pFVar2 + lVar16 + 0x20;
      *(undefined4 *)pFVar1 = uVar25;
      *(undefined4 *)(pFVar1 + 4) = uVar26;
      *(undefined4 *)(pFVar1 + 8) = uVar27;
      *(undefined4 *)(pFVar1 + 0xc) = uVar28;
      pFVar1 = pFVar2 + lVar16 + 0x30;
      *(undefined4 *)pFVar1 = uVar29;
      *(undefined4 *)(pFVar1 + 4) = uVar30;
      *(undefined4 *)(pFVar1 + 8) = uVar31;
      *(undefined4 *)(pFVar1 + 0xc) = uVar32;
      pFVar1 = pFVar2 + lVar16 + 0x40;
      *(undefined4 *)pFVar1 = uVar33;
      *(undefined4 *)(pFVar1 + 4) = uVar34;
      *(undefined4 *)(pFVar1 + 8) = uVar35;
      *(undefined4 *)(pFVar1 + 0xc) = uVar36;
      pFVar2 = pFVar2 + lVar16 + 0x50;
      *(undefined4 *)pFVar2 = uVar37;
      *(undefined4 *)(pFVar2 + 4) = uVar38;
      *(undefined4 *)(pFVar2 + 8) = uVar39;
      *(undefined4 *)(pFVar2 + 0xc) = uVar40;
    }
  }
  uVar11 = 0;
  if (param_3 < param_4->ArrayNum) {
    uVar11 = uVar14;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TTransform<double> *)(*pcVar3)();
    return pTVar13;
  }
  return (TTransform<double> *)((param_4->AllocatorInstance).Data + lVar15 * 0x60);
}

// GetKeyIndicesFromTime @ 147402180

void __cdecl
FAnimationRuntime::GetKeyIndicesFromTime
          (int *param_1,int *param_2,float *param_3,double param_4,FFrameRate *param_5,int param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined8 in_XMM3_Qb;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  
  auVar6._8_8_ = in_XMM3_Qb;
  auVar6._0_8_ = param_4;
  if ((param_4 <= 0.0) || (param_6 == 1)) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0.0;
    return;
  }
  dVar4 = ((double)param_5->Numerator * param_4) / (double)param_5->Denominator;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar4;
  auVar6 = roundpd(auVar6,auVar1,1);
  dVar5 = auVar6._0_8_;
  dVar4 = dVar4 - dVar5;
  if (__real_41dfffffffc00000 <= dVar5) {
    dVar5 = __real_41dfffffffc00000;
  }
  if (dVar5 <= __real_c1e0000000000000) {
    dVar5 = __real_c1e0000000000000;
  }
  iVar3 = (int)dVar4;
  iVar2 = (int)dVar5 + iVar3;
  fVar7 = (float)dVar4 - (float)iVar3;
  fVar8 = fVar7;
  if ((0.0 < fVar7) && (fVar8 = ::FFrameTime::MaxSubframe, fVar7 <= ::FFrameTime::MaxSubframe)) {
    fVar8 = fVar7;
  }
  fVar7 = ::FFrameTime::MaxSubframe;
  if (fVar8 <= ::FFrameTime::MaxSubframe) {
    fVar7 = fVar8;
  }
  iVar3 = param_6 + -1;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if ((iVar2 <= iVar3) && ((iVar2 != iVar3 || (fVar7 < 0.0)))) {
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    iVar2 = 0;
    if (0 < iVar3) {
      iVar2 = iVar3;
    }
    *param_1 = iVar2;
    iVar3 = iVar2 + 1;
    if (iVar2 + 1 == param_6) {
      iVar3 = iVar2;
    }
    *param_2 = iVar3;
    *param_3 = fVar7;
    return;
  }
  *param_1 = iVar3;
  *param_2 = 0;
  *param_3 = 0.0;
  return;
}

// GetKeyIndicesFromTime @ 1474022a0

void __cdecl
FAnimationRuntime::GetKeyIndicesFromTime
          (int *param_1,int *param_2,float *param_3,double param_4,int param_5,double param_6,
          double param_7)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if ((0.0 < param_4) && (param_5 != 1)) {
    iVar2 = param_5 + -1;
    if (param_6 <= param_4) {
      *param_1 = iVar2;
      *param_2 = 0;
      *param_3 = 0.0;
      return;
    }
    if (param_7 <= 0.0) {
      param_7 = (double)iVar2 / param_6;
    }
    dVar3 = param_4 * param_7;
    iVar1 = (int)((longlong)ROUND((dVar3 + dVar3) - __real_3fe0000000000000) >> 1);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    *param_1 = iVar1;
    iVar2 = iVar1 + 1;
    if (iVar1 + 1 == param_5) {
      iVar2 = iVar1;
    }
    *param_2 = iVar2;
    *param_3 = (float)(dVar3 - (double)iVar1);
    return;
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0.0;
  return;
}

// GetSpaceTransform @ 147404f00

TTransform<double> * __cdecl
FAnimationRuntime::GetSpaceTransform
          (TTransform<double> *__return_storage_ptr__,FA2CSPose *param_1,int param_2)

{
  FA2CSPose::GetComponentSpaceTransform(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetSpaceTransform @ 147404f30

TTransform<double> * __cdecl
FAnimationRuntime::GetSpaceTransform
          (TTransform<double> *__return_storage_ptr__,FA2Pose *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TTransform<double> *pTVar9;
  longlong lVar10;
  
  uVar8 = 0;
  if (param_2 < (param_1->Bones).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TTransform<double> *)(*pcVar2)();
      return pTVar9;
    }
  }
  pFVar1 = (param_1->Bones).AllocatorInstance.Data;
  lVar10 = (longlong)param_2 * 0x60;
  dVar3 = *(double *)(pFVar1 + lVar10 + 8);
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x10);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x10 + 8);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(pFVar1 + lVar10);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pFVar1 + lVar10 + 0x20);
  dVar6 = *(double *)(pFVar1 + lVar10 + 0x20 + 8);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x30);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x30 + 8);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar3 = *(double *)(pFVar1 + lVar10 + 0x40);
  dVar6 = *(double *)(pFVar1 + lVar10 + 0x40 + 8);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar5;
  dVar4 = *(double *)(pFVar1 + lVar10 + 0x50);
  dVar5 = *(double *)(pFVar1 + lVar10 + 0x50 + 8);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar5;
  return __return_storage_ptr__;
}

// GetStringDistance @ 147405270

int __cdecl FAnimationRuntime::GetStringDistance(FString *param_1,FString *param_2)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  uint local_res18;
  longlong local_80;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  iVar4 = (param_1->Data).ArrayNum;
  uVar11 = 0;
  iVar12 = (param_2->Data).ArrayNum;
  uVar15 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar15 = 0;
  }
  uVar7 = iVar12 - 1;
  if (iVar12 == 0) {
    uVar7 = 0;
  }
  if (iVar4 == iVar12) {
    if (iVar4 < 2) {
      return 0;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar17 = iVar4 == 0;
  }
  else {
    bVar17 = iVar4 + iVar12 == 1;
  }
  if (bVar17) {
    return 0;
  }
  if (uVar15 == 0) {
    return uVar7;
  }
  if (uVar7 == 0) {
    return uVar15;
  }
  iVar12 = uVar7 + 1;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,&local_68,(int *)&local_60,(int *)((longlong)&local_60 + 4));
  memset(local_68.Data + (longlong)iVar4 * 4,0,(longlong)iVar12 << 2);
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
  memset(local_58.Data + (longlong)iVar4 * 4,0,(longlong)iVar12 << 2);
  uVar9 = uVar11;
  uVar13 = uVar11;
  if (0 < (int)local_60) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (int)local_60) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      *(uint *)(local_68.Data + uVar13) = uVar8;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar13 = uVar13 + 4;
    } while ((int)(uVar8 + 1) < (int)local_60);
  }
  uVar9 = local_50 & 0xffffffff;
  local_res18 = 0;
  uVar5 = 0;
  iVar4 = (int)local_50;
  if (0 < (int)uVar15) {
    local_80 = 0;
    uVar13 = uVar11;
    do {
      if (((int)uVar9 < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        iVar4 = (*pcVar3)();
        return iVar4;
      }
      *(uint *)local_58.Data = (uint)uVar13 + 1;
      uVar9 = uVar11;
      uVar16 = uVar11;
      uVar8 = (uint)uVar13;
      if (0 < (longlong)(int)uVar7) {
        do {
          if ((int)uVar13 < 0) {
code_r0x0001474054ca:
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x113,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               );
            if (bVar17) {
              pcVar3 = (code *)swi(3);
              iVar4 = (*pcVar3)();
              return iVar4;
            }
          }
          else {
            iVar4 = (param_1->Data).ArrayNum;
            uVar8 = iVar4 - 1;
            if (iVar4 == 0) {
              uVar8 = uVar5;
            }
            if ((int)uVar8 <= (int)uVar13) goto code_r0x0001474054ca;
          }
          sVar1 = *(short *)((param_1->Data).AllocatorInstance.Data + local_80 * 2);
          uVar8 = (uint)uVar9;
          if ((int)uVar8 < 0) {
code_r0x000147405525:
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x113,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               );
            if (bVar17) {
              pcVar3 = (code *)swi(3);
              iVar4 = (*pcVar3)();
              return iVar4;
            }
          }
          else {
            iVar4 = (param_2->Data).ArrayNum;
            uVar6 = iVar4 - 1;
            if (iVar4 == 0) {
              uVar6 = uVar5;
            }
            if ((int)uVar6 <= (int)uVar8) goto code_r0x000147405525;
          }
          sVar2 = *(short *)((param_2->Data).AllocatorInstance.Data + uVar16 * 2);
          uVar6 = uVar5;
          if ((int)uVar8 < (int)local_60) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar3 = (code *)swi(3);
              iVar4 = (*pcVar3)();
              return iVar4;
            }
          }
          uVar14 = uVar8 + 1;
          iVar4 = *(int *)(local_68.Data + uVar16 * 4) + (uint)(sVar1 != sVar2);
          uVar6 = uVar5;
          if ((int)uVar14 < (int)local_60) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            iVar4 = (*pcVar3)();
            return iVar4;
          }
          iVar12 = *(int *)(local_68.Data + uVar16 * 4 + 4);
          uVar6 = uVar5;
          if ((int)uVar8 < (int)local_50) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar3 = (code *)swi(3);
              iVar4 = (*pcVar3)();
              return iVar4;
            }
          }
          if (*(int *)(local_58.Data + uVar16 * 4) + 1 < iVar12 + 1) {
            iVar12 = *(int *)(local_58.Data + uVar16 * 4);
          }
          if (iVar12 + 1 < iVar4) {
            iVar4 = iVar12 + 1;
          }
          uVar6 = uVar5;
          if ((int)uVar14 < (int)local_50) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            iVar4 = (*pcVar3)();
            return iVar4;
          }
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar13 = (ulonglong)local_res18;
          *(int *)(local_58.Data + uVar16 * 4 + 4) = iVar4;
          uVar16 = uVar16 + 1;
          uVar8 = local_res18;
        } while ((longlong)uVar16 < (longlong)(int)uVar7);
      }
      _Src.Data = local_58.Data;
      iVar4 = (int)local_50;
      lVar10 = (longlong)(int)local_50;
      local_60 = CONCAT44(local_60._4_4_,(int)local_50);
      if (((int)local_50 == 0) && (local_60._4_4_ == 0)) {
        local_60 = local_50 & 0xffffffff;
        uVar9 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_50,local_60._4_4_,&local_68,(int)local_50,
                   (int *)((longlong)&local_60 + 4));
        if (iVar4 != 0) {
          memcpy(local_68.Data,_Src.Data,lVar10 << 2);
        }
        uVar9 = local_50 & 0xffffffff;
      }
      iVar4 = (int)uVar9;
      local_res18 = uVar8 + 1;
      uVar13 = (ulonglong)local_res18;
      local_80 = local_80 + 1;
    } while (local_80 < (int)uVar15);
  }
  if ((int)uVar7 < iVar4) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  iVar4 = *(int *)(local_58.Data + (longlong)(int)uVar7 * 4);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return iVar4;
}

// InitializeTransform @ 147406f90

void __cdecl
FAnimationRuntime::InitializeTransform
          (FBoneContainer *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((param_2->ArrayNum != (param_1->RefSkeleton->FinalRefBoneInfo).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Atoms.Num() == RequiredBones.GetNumBones()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0x85,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar10 = (param_1->BoneIndicesArray).ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar10) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(ushort *)((param_1->BoneIndicesArray).AllocatorInstance.Data + lVar12);
      if ((param_2->ArrayNum <= (int)(uint)uVar1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      lVar9 = (ulonglong)uVar1 * 0x60;
      lVar12 = lVar12 + 2;
      *(double *)(pFVar2 + lVar9) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      *(double *)(pFVar2 + lVar9 + 8) = (double)fVar4;
      *(double *)(pFVar2 + lVar9 + 0x10) = (double)fVar5;
      *(double *)(pFVar2 + lVar9 + 0x10 + 8) = (double)fVar6;
      fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
      *(double *)(pFVar2 + lVar9 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      *(double *)(pFVar2 + lVar9 + 0x20 + 8) = (double)fVar4;
      *(double *)(pFVar2 + lVar9 + 0x30) = (double)fVar5;
      *(double *)(pFVar2 + lVar9 + 0x30 + 8) = (double)fVar6;
      fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
      *(double *)(pFVar2 + lVar9 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      *(double *)(pFVar2 + lVar9 + 0x40 + 8) = (double)fVar4;
      *(double *)(pFVar2 + lVar9 + 0x50) = (double)fVar5;
      *(double *)(pFVar2 + lVar9 + 0x50 + 8) = (double)fVar6;
      iVar10 = (param_1->BoneIndicesArray).ArrayNum;
    } while ((int)uVar11 < iVar10);
  }
  return;
}

// LerpBoneTransforms @ 147408560

void __cdecl
FAnimationRuntime::LerpBoneTransforms
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
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
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 in_register_00001284 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  uint uVar46;
  
  auVar33._4_12_ = in_register_00001284;
  auVar33._0_4_ = param_3;
  if (__real_3f7fff58 <= param_3) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    return;
  }
  if (__real_3727c5ac < param_3) {
    if (bAnim_LerpBoneTransforms_ISPC_Enabled) {
      ::LerpBoneTransforms
                ((param_1->AllocatorInstance).Data,(param_2->AllocatorInstance).Data,auVar33._0_8_,
                 (param_4->AllocatorInstance).Data,param_4->ArrayNum);
      return;
    }
    fVar23 = __real_3f800000 - param_3;
    uVar16 = 0;
    pFVar1 = (param_2->AllocatorInstance).Data;
    iVar15 = param_4->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (0 < iVar15) {
      lVar17 = 0;
      dVar9 = (double)param_3;
      dVar10 = (double)param_3;
      uVar58 = (undefined4)((ulonglong)dVar10 >> 0x20);
      dVar7 = (double)fVar23;
      uVar54 = SUB84((double)fVar23,0);
      uVar55 = (undefined4)((ulonglong)(double)fVar23 >> 0x20);
      dVar11 = (double)param_3;
      dVar12 = (double)param_3;
      uVar59 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar8 = (double)fVar23;
      uVar56 = SUB84((double)fVar23,0);
      uVar57 = (undefined4)((ulonglong)(double)fVar23 >> 0x20);
      do {
        uVar46 = 0;
        if ((int)uVar16 < iVar15) {
          uVar46 = ~uVar16 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        auVar24._8_4_ = uVar54;
        auVar24._0_8_ = dVar7;
        auVar24._12_4_ = uVar55;
        auVar36._8_4_ = uVar56;
        auVar36._0_8_ = dVar8;
        auVar36._12_4_ = uVar57;
        lVar14 = (ulonglong)*(ushort *)((param_4->AllocatorInstance).Data + lVar17) * 0x60;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x20 + 8);
        *(double *)(pFVar2 + lVar14 + 0x20) = dVar7 * *(double *)(pFVar2 + lVar14 + 0x20);
        *(double *)(pFVar2 + lVar14 + 0x20 + 8) = auVar24._8_8_ * dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x30 + 8);
        auVar25._8_4_ = uVar54;
        auVar25._0_8_ = dVar7;
        auVar25._12_4_ = uVar55;
        *(double *)(pFVar2 + lVar14 + 0x30) = dVar8 * *(double *)(pFVar2 + lVar14 + 0x30);
        *(double *)(pFVar2 + lVar14 + 0x30 + 8) = auVar36._8_8_ * dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 8);
        auVar37._8_4_ = uVar56;
        auVar37._0_8_ = dVar8;
        auVar37._12_4_ = uVar57;
        *(double *)(pFVar2 + lVar14) = dVar7 * *(double *)(pFVar2 + lVar14);
        *(double *)(pFVar2 + lVar14 + 8) = auVar25._8_8_ * dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x10 + 8);
        auVar26._8_4_ = uVar54;
        auVar26._0_8_ = dVar7;
        auVar26._12_4_ = uVar55;
        *(double *)(pFVar2 + lVar14 + 0x10) = dVar8 * *(double *)(pFVar2 + lVar14 + 0x10);
        *(double *)(pFVar2 + lVar14 + 0x10 + 8) = auVar37._8_8_ * dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x40 + 8);
        auVar38._8_4_ = uVar56;
        auVar38._0_8_ = dVar8;
        auVar38._12_4_ = uVar57;
        *(double *)(pFVar2 + lVar14 + 0x40) = dVar7 * *(double *)(pFVar2 + lVar14 + 0x40);
        *(double *)(pFVar2 + lVar14 + 0x40 + 8) = auVar26._8_8_ * dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x50 + 8);
        *(double *)(pFVar2 + lVar14 + 0x50) = dVar8 * *(double *)(pFVar2 + lVar14 + 0x50);
        *(double *)(pFVar2 + lVar14 + 0x50 + 8) = auVar38._8_8_ * dVar35;
        dVar52 = dVar9 * *(double *)(pFVar1 + lVar14);
        dVar53 = dVar10 * *(double *)(pFVar1 + lVar14 + 8);
        dVar5 = dVar11 * *(double *)(pFVar1 + lVar14 + 0x10);
        dVar6 = dVar12 * *(double *)(pFVar1 + lVar14 + 0x10 + 8);
        auVar27._8_4_ = SUB84(dVar53,0);
        auVar27._0_8_ = dVar52;
        auVar27._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        auVar39._8_4_ = SUB84(dVar6,0);
        auVar39._0_8_ = dVar5;
        auVar39._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        dVar35 = dVar5 * *(double *)(pFVar2 + lVar14 + 0x10) + dVar52 * *(double *)(pFVar2 + lVar14)
        ;
        dVar47 = auVar39._8_8_ * *(double *)(pFVar2 + lVar14 + 0x10 + 8) +
                 auVar27._8_8_ * *(double *)(pFVar2 + lVar14 + 8);
        auVar28._8_4_ = SUB84(dVar47,0);
        auVar28._0_8_ = dVar35;
        auVar28._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        uVar18 = -(ulonglong)(0.0 <= auVar28._8_8_ + dVar35);
        uVar20 = -(ulonglong)(0.0 <= dVar35 + dVar47);
        uVar51 = (uint)(uVar20 >> 0x20);
        uVar46 = (uint)(uVar18 >> 0x20);
        auVar40._0_8_ = (ulonglong)dVar52 & uVar18;
        auVar40._8_4_ = (undefined4)((ulonglong)dVar53 & uVar20);
        auVar40._12_4_ = (undefined4)(((ulonglong)dVar53 & uVar20) >> 0x20);
        auVar48._0_4_ = ~(uint)uVar18 & SUB84(0.0 - dVar52,0);
        auVar48._4_4_ = ~uVar46 & (uint)((ulonglong)(0.0 - dVar52) >> 0x20);
        auVar48._8_4_ = ~(uint)uVar20 & SUB84(0.0 - dVar53,0);
        auVar48._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar53) >> 0x20);
        dVar35 = *(double *)(pFVar2 + lVar14 + 8);
        *(double *)(pFVar2 + lVar14) = SUB168(auVar48 | auVar40,0) + *(double *)(pFVar2 + lVar14);
        *(double *)(pFVar2 + lVar14 + 8) = SUB168(auVar48 | auVar40,8) + dVar35;
        auVar41._0_4_ = ~(uint)uVar18 & SUB84(0.0 - dVar5,0);
        auVar41._4_4_ = ~uVar46 & (uint)((ulonglong)(0.0 - dVar5) >> 0x20);
        auVar41._8_4_ = ~(uint)uVar20 & SUB84(0.0 - dVar6,0);
        auVar41._12_4_ = ~uVar51 & (uint)((ulonglong)(0.0 - dVar6) >> 0x20);
        auVar45._8_4_ = (int)((ulonglong)dVar6 & uVar20);
        auVar45._0_8_ = (ulonglong)dVar5 & uVar18;
        auVar45._12_4_ = (int)(((ulonglong)dVar6 & uVar20) >> 0x20);
        auVar29._8_4_ = SUB84(dVar10,0);
        auVar29._0_8_ = dVar9;
        auVar29._12_4_ = uVar58;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x10 + 8);
        *(double *)(pFVar2 + lVar14 + 0x10) =
             SUB168(auVar41 | auVar45,0) + *(double *)(pFVar2 + lVar14 + 0x10);
        *(double *)(pFVar2 + lVar14 + 0x10 + 8) = SUB168(auVar41 | auVar45,8) + dVar35;
        dVar5 = *(double *)(pFVar1 + lVar14 + 0x20 + 8);
        dVar6 = *(double *)(pFVar1 + lVar14 + 0x30);
        dVar47 = *(double *)(pFVar1 + lVar14 + 0x30 + 8);
        auVar42._8_4_ = SUB84(dVar12,0);
        auVar42._0_8_ = dVar11;
        auVar42._12_4_ = uVar59;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x20 + 8);
        *(double *)(pFVar2 + lVar14 + 0x20) =
             dVar9 * *(double *)(pFVar1 + lVar14 + 0x20) + *(double *)(pFVar2 + lVar14 + 0x20);
        *(double *)(pFVar2 + lVar14 + 0x20 + 8) = auVar29._8_8_ * dVar5 + dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x30 + 8);
        auVar30._8_4_ = SUB84(dVar10,0);
        auVar30._0_8_ = dVar9;
        auVar30._12_4_ = uVar58;
        *(double *)(pFVar2 + lVar14 + 0x30) = dVar11 * dVar6 + *(double *)(pFVar2 + lVar14 + 0x30);
        *(double *)(pFVar2 + lVar14 + 0x30 + 8) = auVar42._8_8_ * dVar47 + dVar35;
        dVar5 = *(double *)(pFVar1 + lVar14 + 0x40 + 8);
        dVar6 = *(double *)(pFVar1 + lVar14 + 0x50);
        dVar47 = *(double *)(pFVar1 + lVar14 + 0x50 + 8);
        auVar43._8_4_ = SUB84(dVar12,0);
        auVar43._0_8_ = dVar11;
        auVar43._12_4_ = uVar59;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x40 + 8);
        *(double *)(pFVar2 + lVar14 + 0x40) =
             dVar9 * *(double *)(pFVar1 + lVar14 + 0x40) + *(double *)(pFVar2 + lVar14 + 0x40);
        *(double *)(pFVar2 + lVar14 + 0x40 + 8) = auVar30._8_8_ * dVar5 + dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14 + 0x50 + 8);
        *(double *)(pFVar2 + lVar14 + 0x50) = dVar11 * dVar6 + *(double *)(pFVar2 + lVar14 + 0x50);
        *(double *)(pFVar2 + lVar14 + 0x50 + 8) = auVar43._8_8_ * dVar47 + dVar35;
        dVar35 = *(double *)(pFVar2 + lVar14);
        dVar5 = *(double *)(pFVar2 + lVar14 + 8);
        dVar6 = *(double *)(pFVar2 + lVar14 + 0x10);
        dVar47 = *(double *)(pFVar2 + lVar14 + 0x10 + 8);
        auVar44._0_8_ = dVar6 * dVar6 + dVar35 * dVar35;
        auVar44._8_8_ = dVar47 * dVar47 + dVar5 * dVar5;
        auVar31._8_4_ = SUB84(auVar44._8_8_,0);
        auVar31._0_8_ = auVar44._0_8_;
        auVar31._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
        auVar32._0_8_ = auVar31._8_8_ + auVar44._0_8_;
        auVar32._8_8_ = auVar44._0_8_ + auVar44._8_8_;
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 2;
        auVar45 = sqrtpd(auVar44,auVar32);
        uVar20 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar32._0_8_);
        uVar21 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar32._8_8_);
        uVar19 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar32._0_8_);
        uVar22 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar32._8_8_);
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
        auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
        auVar34._0_8_ = uVar19 & (ulonglong)(auVar33._0_8_ * dVar35);
        uVar18 = uVar22 & (ulonglong)(auVar33._8_8_ * dVar5);
        auVar34._8_4_ = (undefined4)uVar18;
        auVar34._12_4_ = (undefined4)(uVar18 >> 0x20);
        auVar50._0_8_ = uVar20 & (ulonglong)(auVar45._0_8_ * dVar6);
        uVar18 = uVar21 & (ulonglong)(auVar45._8_8_ * dVar47);
        auVar50._8_4_ = (undefined4)uVar18;
        auVar50._12_4_ = (undefined4)(uVar18 >> 0x20);
        auVar4._4_4_ = ~(uint)(uVar19 >> 0x20) &
                       GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar4._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar4._8_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar4._12_4_ =
             ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar49._0_4_ = ~(uint)uVar20 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar49._4_4_ =
             ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar49._8_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar49._12_4_ =
             ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pFVar2 + lVar14) = auVar34 | auVar4;
        *(undefined1 (*) [16])(pFVar2 + lVar14 + 0x10) = auVar50 | auVar49;
        iVar15 = param_4->ArrayNum;
      } while ((int)uVar16 < iVar15);
    }
  }
  return;
}

// LerpPoses @ 1474088c0

void __cdecl
FAnimationRuntime::LerpPoses
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  double dVar35;
  double dVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  double dVar46;
  double dVar47;
  uint uVar40;
  
  fVar20 = param_5;
  fVar18 = __real_3727c5ac;
  if (__real_3727c5ac < param_5) {
    if ((*(longlong *)&param_1->field_0x10 != *(longlong *)&param_2->field_0x10) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("&PoseA.GetBoneContainer() == &PoseB.GetBoneContainer()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                            ,0x368,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar19 = __real_3f800000;
    if (fVar20 < __real_3f7fff58) {
      uVar22 = 0;
      uVar4 = *(uint *)&param_1->field_0x8;
      fVar34 = __real_3f800000 - fVar20;
      if (uVar4 != 0) {
        lVar23 = 0;
        dVar14 = (double)fVar20;
        dVar15 = (double)fVar20;
        dVar10 = (double)fVar34;
        dVar11 = (double)fVar34;
        dVar16 = (double)fVar20;
        dVar17 = (double)fVar20;
        dVar12 = (double)fVar34;
        dVar13 = (double)fVar34;
        do {
          uVar40 = 0;
          if ((int)uVar22 < *(int *)&param_1->field_0x8) {
            uVar40 = ~uVar22 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)param_1;
          pdVar1 = (double *)(lVar5 + 0x20 + lVar23);
          dVar35 = pdVar1[1];
          pdVar2 = (double *)(lVar5 + 0x30 + lVar23);
          dVar8 = *pdVar2;
          dVar9 = pdVar2[1];
          pdVar2 = (double *)(lVar5 + 0x20 + lVar23);
          *pdVar2 = *pdVar1 * dVar10;
          pdVar2[1] = dVar35 * dVar11;
          pdVar1 = (double *)(lVar5 + 0x30 + lVar23);
          *pdVar1 = dVar8 * dVar12;
          pdVar1[1] = dVar9 * dVar13;
          dVar35 = ((double *)(lVar5 + lVar23))[1];
          pdVar1 = (double *)(lVar5 + 0x10 + lVar23);
          dVar8 = *pdVar1;
          dVar9 = pdVar1[1];
          *(double *)(lVar5 + lVar23) = *(double *)(lVar5 + lVar23) * dVar10;
          ((double *)(lVar5 + lVar23))[1] = dVar35 * dVar11;
          pdVar1 = (double *)(lVar5 + 0x10 + lVar23);
          *pdVar1 = dVar8 * dVar12;
          pdVar1[1] = dVar9 * dVar13;
          pdVar1 = (double *)(lVar5 + 0x40 + lVar23);
          dVar35 = pdVar1[1];
          pdVar2 = (double *)(lVar5 + 0x50 + lVar23);
          dVar8 = *pdVar2;
          dVar9 = pdVar2[1];
          pdVar2 = (double *)(lVar5 + 0x40 + lVar23);
          *pdVar2 = *pdVar1 * dVar10;
          pdVar2[1] = dVar35 * dVar11;
          pdVar1 = (double *)(lVar5 + 0x50 + lVar23);
          *pdVar1 = dVar8 * dVar12;
          pdVar1[1] = dVar9 * dVar13;
          uVar40 = 0;
          if ((int)uVar22 < *(int *)&param_2->field_0x8) {
            uVar40 = ~uVar22 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)param_2;
          pdVar1 = (double *)(lVar5 + 0x10 + lVar23);
          uVar22 = uVar22 + 1;
          dVar46 = dVar14 * *(double *)(lVar6 + lVar23);
          dVar47 = dVar15 * ((double *)(lVar6 + lVar23))[1];
          pdVar2 = (double *)(lVar6 + 0x10 + lVar23);
          dVar8 = *pdVar2 * dVar16;
          dVar9 = pdVar2[1] * dVar17;
          dVar35 = *pdVar1 * dVar8 + *(double *)(lVar5 + lVar23) * dVar46;
          dVar41 = pdVar1[1] * dVar9 + ((double *)(lVar5 + lVar23))[1] * dVar47;
          auVar29._8_4_ = SUB84(dVar41,0);
          auVar29._0_8_ = dVar35;
          auVar29._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          uVar24 = -(ulonglong)(0.0 <= auVar29._8_8_ + dVar35);
          uVar26 = -(ulonglong)(0.0 <= dVar35 + dVar41);
          uVar45 = (uint)(uVar26 >> 0x20);
          uVar40 = (uint)(uVar24 >> 0x20);
          auVar36._0_8_ = (ulonglong)dVar46 & uVar24;
          auVar36._8_4_ = (undefined4)((ulonglong)dVar47 & uVar26);
          auVar36._12_4_ = (undefined4)(((ulonglong)dVar47 & uVar26) >> 0x20);
          auVar42._0_4_ = ~(uint)uVar24 & SUB84(0.0 - dVar46,0);
          auVar42._4_4_ = ~uVar40 & (uint)((ulonglong)(0.0 - dVar46) >> 0x20);
          auVar42._8_4_ = ~(uint)uVar26 & SUB84(0.0 - dVar47,0);
          auVar42._12_4_ = ~uVar45 & (uint)((ulonglong)(0.0 - dVar47) >> 0x20);
          dVar35 = ((double *)(lVar5 + lVar23))[1];
          auVar37._0_4_ = ~(uint)uVar24 & SUB84(0.0 - dVar8,0);
          auVar37._4_4_ = ~uVar40 & (uint)((ulonglong)(0.0 - dVar8) >> 0x20);
          auVar37._8_4_ = ~(uint)uVar26 & SUB84(0.0 - dVar9,0);
          auVar37._12_4_ = ~uVar45 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
          *(double *)(lVar5 + lVar23) = SUB168(auVar42 | auVar36,0) + *(double *)(lVar5 + lVar23);
          ((double *)(lVar5 + lVar23))[1] = SUB168(auVar42 | auVar36,8) + dVar35;
          auVar32._8_4_ = (int)((ulonglong)dVar9 & uVar26);
          auVar32._0_8_ = (ulonglong)dVar8 & uVar24;
          auVar32._12_4_ = (int)(((ulonglong)dVar9 & uVar26) >> 0x20);
          pdVar1 = (double *)(lVar5 + 0x10 + lVar23);
          dVar35 = pdVar1[1];
          pdVar2 = (double *)(lVar5 + 0x10 + lVar23);
          *pdVar2 = SUB168(auVar37 | auVar32,0) + *pdVar1;
          pdVar2[1] = SUB168(auVar37 | auVar32,8) + dVar35;
          pdVar1 = (double *)(lVar6 + 0x20 + lVar23);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar6 + 0x30 + lVar23);
          dVar9 = *pdVar2;
          dVar41 = pdVar2[1];
          pdVar2 = (double *)(lVar5 + 0x20 + lVar23);
          dVar35 = pdVar2[1];
          pdVar3 = (double *)(lVar5 + 0x20 + lVar23);
          *pdVar3 = *pdVar1 * dVar14 + *pdVar2;
          pdVar3[1] = dVar8 * dVar15 + dVar35;
          pdVar1 = (double *)(lVar5 + 0x30 + lVar23);
          dVar35 = pdVar1[1];
          pdVar2 = (double *)(lVar5 + 0x30 + lVar23);
          *pdVar2 = dVar9 * dVar16 + *pdVar1;
          pdVar2[1] = dVar41 * dVar17 + dVar35;
          pdVar1 = (double *)(lVar6 + 0x40 + lVar23);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar6 + 0x50 + lVar23);
          dVar9 = *pdVar2;
          dVar41 = pdVar2[1];
          pdVar2 = (double *)(lVar5 + 0x40 + lVar23);
          dVar35 = pdVar2[1];
          pdVar3 = (double *)(lVar5 + 0x40 + lVar23);
          *pdVar3 = *pdVar1 * dVar14 + *pdVar2;
          pdVar3[1] = dVar8 * dVar15 + dVar35;
          pdVar1 = (double *)(lVar5 + 0x50 + lVar23);
          dVar35 = pdVar1[1];
          pdVar2 = (double *)(lVar5 + 0x50 + lVar23);
          *pdVar2 = dVar9 * dVar16 + *pdVar1;
          pdVar2[1] = dVar41 * dVar17 + dVar35;
          dVar35 = *(double *)(lVar5 + lVar23);
          dVar8 = ((double *)(lVar5 + lVar23))[1];
          pdVar1 = (double *)(lVar5 + 0x10 + lVar23);
          dVar9 = *pdVar1;
          dVar41 = pdVar1[1];
          auVar38._0_8_ = dVar9 * dVar9 + dVar35 * dVar35;
          auVar38._8_8_ = dVar41 * dVar41 + dVar8 * dVar8;
          auVar30._8_4_ = SUB84(auVar38._8_8_,0);
          auVar30._0_8_ = auVar38._0_8_;
          auVar30._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
          auVar31._0_8_ = auVar30._8_8_ + auVar38._0_8_;
          auVar31._8_8_ = auVar38._0_8_ + auVar38._8_8_;
          auVar39 = sqrtpd(auVar38,auVar31);
          uVar26 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar31._0_8_);
          uVar27 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar31._8_8_);
          uVar25 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar31._0_8_);
          uVar28 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar31._8_8_);
          auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
          auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
          auVar33._0_8_ = uVar25 & (ulonglong)(auVar32._0_8_ * dVar35);
          uVar24 = uVar28 & (ulonglong)(auVar32._8_8_ * dVar8);
          auVar33._8_4_ = (undefined4)uVar24;
          auVar33._12_4_ = (undefined4)(uVar24 >> 0x20);
          auVar44._0_8_ = uVar26 & (ulonglong)(auVar39._0_8_ * dVar9);
          uVar24 = uVar27 & (ulonglong)(auVar39._8_8_ * dVar41);
          auVar44._8_4_ = (undefined4)uVar24;
          auVar44._12_4_ = (undefined4)(uVar24 >> 0x20);
          auVar39._4_4_ =
               ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar39._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar39._8_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar39._12_4_ =
               ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar43._0_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar43._4_4_ =
               ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar43._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar43._12_4_ =
               ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(lVar5 + lVar23) = auVar33 | auVar39;
          *(undefined1 (*) [16])(lVar5 + 0x10 + lVar23) = auVar44 | auVar43;
          lVar23 = lVar23 + 0x60;
        } while (uVar22 != uVar4);
      }
      if (fVar18 < (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        param_5 = fVar20;
        if (fVar18 < (float)((uint)(fVar20 - fVar19) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          UE::Anim::FNamedValueArrayUtils::
          Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::LerpTo<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l11::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                     (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
                     (<lambda_1>)&param_5);
        }
        else {
          TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
                    ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_3,
                     (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_4);
          param_3->field_0x10 = param_4->field_0x10;
        }
      }
    }
    else {
      if (param_1 != param_2) {
        TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
                  ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_1,
                   (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)param_2);
        *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&param_2->field_0x10;
      }
      TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
                ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_3,
                 (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_4);
      param_3->field_0x10 = param_4->field_0x10;
    }
  }
  return;
}

// LerpPosesPerBone @ 147408d50

void __cdecl
FAnimationRuntime::LerpPosesPerBone
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  double dVar31;
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  double dVar43;
  undefined1 auVar42 [16];
  float fVar44;
  uint uVar39;
  
  fVar12 = __real_3727c5ac;
  if (__real_3727c5ac < param_5) {
    if ((*(longlong *)&param_1->field_0x10 != *(longlong *)&param_2->field_0x10) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("&PoseA.GetBoneContainer() == &PoseB.GetBoneContainer()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                            ,0x38a,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar13 = __real_3f800000;
    uVar4 = *(uint *)&param_1->field_0x8;
    uVar15 = 0;
    if (uVar4 != 0) {
      lVar18 = 0;
      lVar16 = 0;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar39 = 0;
        if ((int)uVar15 < param_6->ArrayNum) {
          uVar39 = uVar17;
        }
        if ((uVar39 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar30 = param_5 * *(float *)((param_6->AllocatorInstance).Data + lVar18 * 4);
        if (fVar12 < fVar30) {
          fVar44 = fVar13 - fVar30;
          uVar39 = 0;
          if ((int)uVar15 < *(int *)&param_1->field_0x8) {
            uVar39 = uVar17;
          }
          if ((uVar39 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)param_1;
          dVar36 = (double)fVar44;
          dVar40 = (double)fVar44;
          pdVar1 = (double *)(lVar16 + 0x20 + lVar5);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar16 + 0x30 + lVar5);
          dVar9 = *pdVar2;
          dVar10 = pdVar2[1];
          pdVar2 = (double *)(lVar16 + 0x20 + lVar5);
          *pdVar2 = *pdVar1 * dVar36;
          pdVar2[1] = dVar8 * dVar40;
          dVar41 = (double)fVar44;
          dVar43 = (double)fVar44;
          pdVar1 = (double *)(lVar16 + 0x30 + lVar5);
          *pdVar1 = dVar9 * dVar41;
          pdVar1[1] = dVar10 * dVar43;
          dVar8 = ((double *)(lVar16 + lVar5))[1];
          pdVar1 = (double *)(lVar16 + 0x10 + lVar5);
          dVar9 = *pdVar1;
          dVar10 = pdVar1[1];
          *(double *)(lVar16 + lVar5) = *(double *)(lVar16 + lVar5) * dVar36;
          ((double *)(lVar16 + lVar5))[1] = dVar8 * dVar40;
          pdVar1 = (double *)(lVar16 + 0x10 + lVar5);
          *pdVar1 = dVar9 * dVar41;
          pdVar1[1] = dVar10 * dVar43;
          pdVar1 = (double *)(lVar16 + 0x40 + lVar5);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar16 + 0x50 + lVar5);
          dVar9 = *pdVar2;
          dVar10 = pdVar2[1];
          pdVar2 = (double *)(lVar16 + 0x40 + lVar5);
          *pdVar2 = *pdVar1 * dVar36;
          pdVar2[1] = dVar8 * dVar40;
          pdVar1 = (double *)(lVar16 + 0x50 + lVar5);
          *pdVar1 = dVar9 * dVar41;
          pdVar1[1] = dVar10 * dVar43;
          uVar39 = 0;
          if ((int)uVar15 < *(int *)&param_2->field_0x8) {
            uVar39 = uVar17;
          }
          if ((uVar39 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pdVar1 = (double *)(lVar16 + 0x10 + lVar5);
          dVar40 = (double)fVar30;
          dVar41 = (double)fVar30;
          lVar6 = *(longlong *)param_2;
          dVar8 = *(double *)(lVar6 + lVar16) * dVar40;
          dVar9 = ((double *)(lVar6 + lVar16))[1] * dVar41;
          dVar43 = (double)fVar30;
          dVar11 = (double)fVar30;
          pdVar2 = (double *)(lVar6 + 0x10 + lVar16);
          dVar10 = *pdVar2 * dVar43;
          dVar36 = pdVar2[1] * dVar11;
          dVar31 = *pdVar1 * dVar10 + *(double *)(lVar16 + lVar5) * dVar8;
          dVar35 = pdVar1[1] * dVar36 + ((double *)(lVar16 + lVar5))[1] * dVar9;
          auVar24._8_4_ = SUB84(dVar35,0);
          auVar24._0_8_ = dVar31;
          auVar24._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          uVar19 = -(ulonglong)(0.0 <= auVar24._8_8_ + dVar31);
          uVar21 = -(ulonglong)(0.0 <= dVar31 + dVar35);
          uVar17 = (uint)(uVar21 >> 0x20);
          auVar37._0_4_ = ~(uint)uVar19 & SUB84(0.0 - dVar8,0);
          uVar39 = (uint)(uVar19 >> 0x20);
          auVar37._4_4_ = ~uVar39 & (uint)((ulonglong)(0.0 - dVar8) >> 0x20);
          auVar37._8_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar9,0);
          auVar37._12_4_ = ~uVar17 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
          auVar32._0_8_ = (ulonglong)dVar8 & uVar19;
          auVar32._8_4_ = (undefined4)((ulonglong)dVar9 & uVar21);
          auVar32._12_4_ = (undefined4)(((ulonglong)dVar9 & uVar21) >> 0x20);
          dVar8 = ((double *)(lVar16 + lVar5))[1];
          auVar25._0_4_ = ~(uint)uVar19 & SUB84(0.0 - dVar10,0);
          auVar25._4_4_ = ~uVar39 & (uint)((ulonglong)(0.0 - dVar10) >> 0x20);
          auVar25._8_4_ = ~(uint)uVar21 & SUB84(0.0 - dVar36,0);
          auVar25._12_4_ = ~uVar17 & (uint)((ulonglong)(0.0 - dVar36) >> 0x20);
          *(double *)(lVar16 + lVar5) = SUB168(auVar37 | auVar32,0) + *(double *)(lVar16 + lVar5);
          ((double *)(lVar16 + lVar5))[1] = SUB168(auVar37 | auVar32,8) + dVar8;
          auVar28._8_4_ = (int)((ulonglong)dVar36 & uVar21);
          auVar28._0_8_ = (ulonglong)dVar10 & uVar19;
          auVar28._12_4_ = (int)(((ulonglong)dVar36 & uVar21) >> 0x20);
          pdVar1 = (double *)(lVar16 + 0x10 + lVar5);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar16 + 0x10 + lVar5);
          *pdVar2 = SUB168(auVar25 | auVar28,0) + *pdVar1;
          pdVar2[1] = SUB168(auVar25 | auVar28,8) + dVar8;
          pdVar1 = (double *)(lVar6 + 0x20 + lVar16);
          dVar9 = pdVar1[1];
          pdVar2 = (double *)(lVar6 + 0x30 + lVar16);
          dVar10 = *pdVar2;
          dVar36 = pdVar2[1];
          pdVar2 = (double *)(lVar16 + 0x20 + lVar5);
          dVar8 = pdVar2[1];
          pdVar3 = (double *)(lVar16 + 0x20 + lVar5);
          *pdVar3 = *pdVar1 * dVar40 + *pdVar2;
          pdVar3[1] = dVar9 * dVar41 + dVar8;
          pdVar1 = (double *)(lVar16 + 0x30 + lVar5);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar16 + 0x30 + lVar5);
          *pdVar2 = dVar10 * dVar43 + *pdVar1;
          pdVar2[1] = dVar36 * dVar11 + dVar8;
          pdVar1 = (double *)(lVar6 + 0x40 + lVar16);
          dVar9 = pdVar1[1];
          pdVar2 = (double *)(lVar6 + 0x50 + lVar16);
          dVar10 = *pdVar2;
          dVar36 = pdVar2[1];
          pdVar2 = (double *)(lVar16 + 0x40 + lVar5);
          dVar8 = pdVar2[1];
          pdVar3 = (double *)(lVar16 + 0x40 + lVar5);
          *pdVar3 = *pdVar1 * dVar40 + *pdVar2;
          pdVar3[1] = dVar9 * dVar41 + dVar8;
          pdVar1 = (double *)(lVar16 + 0x50 + lVar5);
          dVar8 = pdVar1[1];
          pdVar2 = (double *)(lVar16 + 0x50 + lVar5);
          *pdVar2 = dVar10 * dVar43 + *pdVar1;
          pdVar2[1] = dVar36 * dVar11 + dVar8;
          dVar8 = *(double *)(lVar16 + lVar5);
          dVar9 = ((double *)(lVar16 + lVar5))[1];
          pdVar1 = (double *)(lVar16 + 0x10 + lVar5);
          dVar10 = *pdVar1;
          dVar36 = pdVar1[1];
          auVar33._0_8_ = dVar10 * dVar10 + dVar8 * dVar8;
          auVar33._8_8_ = dVar36 * dVar36 + dVar9 * dVar9;
          auVar26._8_4_ = SUB84(auVar33._8_8_,0);
          auVar26._0_8_ = auVar33._0_8_;
          auVar26._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
          auVar27._0_8_ = auVar26._8_8_ + auVar33._0_8_;
          auVar27._8_8_ = auVar33._0_8_ + auVar33._8_8_;
          auVar34 = sqrtpd(auVar33,auVar27);
          uVar21 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar27._0_8_);
          uVar22 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar27._8_8_);
          uVar20 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar27._0_8_);
          uVar23 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar27._8_8_);
          auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
          auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
          auVar29._0_8_ = uVar20 & (ulonglong)(auVar28._0_8_ * dVar8);
          uVar19 = uVar23 & (ulonglong)(auVar28._8_8_ * dVar9);
          auVar29._8_4_ = (undefined4)uVar19;
          auVar29._12_4_ = (undefined4)(uVar19 >> 0x20);
          auVar42._0_8_ = uVar21 & (ulonglong)(auVar34._0_8_ * dVar10);
          uVar19 = uVar22 & (ulonglong)(auVar34._8_8_ * dVar36);
          auVar42._8_4_ = (undefined4)uVar19;
          auVar42._12_4_ = (undefined4)(uVar19 >> 0x20);
          auVar34._4_4_ =
               ~(uint)(uVar20 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar34._0_4_ = ~(uint)uVar20 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar34._8_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar34._12_4_ =
               ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar38._0_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar38._4_4_ =
               ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar38._8_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar38._12_4_ =
               ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(lVar16 + lVar5) = auVar29 | auVar34;
          *(undefined1 (*) [16])(lVar16 + 0x10 + lVar5) = auVar42 | auVar38;
        }
        uVar15 = uVar15 + 1;
        lVar18 = lVar18 + 1;
        lVar16 = lVar16 + 0x60;
      } while (uVar15 != uVar4);
    }
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
               param_5._0_1_);
  }
  return;
}

// LerpPosesWithBoneIndexList @ 1474091c0

void __cdecl
FAnimationRuntime::LerpPosesWithBoneIndexList
          (FCompactPose *param_1,FCompactPose *param_2,FBlendedCurve *param_3,FBlendedCurve *param_4
          ,float param_5,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_6)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  bool bVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  double dVar55;
  undefined1 auVar56 [16];
  double dVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  uint uVar68;
  double dVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  uint uVar63;
  
  if (__real_3727c5ac < param_5) {
    if ((*(longlong *)&param_1->field_0x10 != *(longlong *)&param_2->field_0x10) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("&PoseA.GetBoneContainer() == &PoseB.GetBoneContainer()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                            ,0x3ac,L""), bVar31)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar34 = param_6->ArrayNum;
    if (param_5 < __real_3f7fff58) {
      uVar35 = 0;
      fVar54 = __real_3f800000 - param_5;
      if (0 < iVar34) {
        dVar13 = (double)fVar54;
        uVar71 = SUB84((double)fVar54,0);
        uVar72 = (undefined4)((ulonglong)(double)fVar54 >> 0x20);
        lVar36 = 0;
        dVar15 = (double)param_5;
        dVar16 = (double)param_5;
        uVar75 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar14 = (double)fVar54;
        uVar73 = SUB84((double)fVar54,0);
        uVar74 = (undefined4)((ulonglong)(double)fVar54 >> 0x20);
        dVar17 = (double)param_5;
        dVar18 = (double)param_5;
        uVar76 = (undefined4)((ulonglong)dVar18 >> 0x20);
        do {
          uVar63 = 0;
          if ((int)uVar35 < iVar34) {
            uVar63 = ~uVar35 >> 0x1f;
          }
          if ((uVar63 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar5 = (param_6->AllocatorInstance).Data;
          uVar63 = *(uint *)(pFVar5 + lVar36);
          uVar68 = 0;
          if ((int)uVar63 < *(int *)&param_1->field_0x8) {
            uVar68 = ~uVar63 >> 0x1f;
          }
          if ((uVar68 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)param_1;
          lVar32 = (longlong)(int)uVar63 * 0x60;
          auVar52._8_4_ = uVar71;
          auVar52._0_8_ = dVar13;
          auVar52._12_4_ = uVar72;
          pdVar2 = (double *)(lVar32 + 0x20 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x20 + lVar6);
          *pdVar3 = dVar13 * *pdVar2;
          pdVar3[1] = auVar52._8_8_ * dVar55;
          auVar62._8_4_ = uVar73;
          auVar62._0_8_ = dVar14;
          auVar62._12_4_ = uVar74;
          pdVar2 = (double *)(lVar32 + 0x30 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x30 + lVar6);
          *pdVar3 = dVar14 * *pdVar2;
          pdVar3[1] = auVar62._8_8_ * dVar55;
          auVar42._8_4_ = uVar71;
          auVar42._0_8_ = dVar13;
          auVar42._12_4_ = uVar72;
          dVar55 = ((double *)(lVar32 + lVar6))[1];
          *(double *)(lVar32 + lVar6) = dVar13 * *(double *)(lVar32 + lVar6);
          ((double *)(lVar32 + lVar6))[1] = auVar42._8_8_ * dVar55;
          auVar43._8_4_ = uVar73;
          auVar43._0_8_ = dVar14;
          auVar43._12_4_ = uVar74;
          pdVar2 = (double *)(lVar32 + 0x10 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x10 + lVar6);
          *pdVar3 = dVar14 * *pdVar2;
          pdVar3[1] = auVar43._8_8_ * dVar55;
          auVar44._8_4_ = uVar71;
          auVar44._0_8_ = dVar13;
          auVar44._12_4_ = uVar72;
          pdVar2 = (double *)(lVar32 + 0x40 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x40 + lVar6);
          *pdVar3 = dVar13 * *pdVar2;
          pdVar3[1] = auVar44._8_8_ * dVar55;
          auVar45._8_4_ = uVar73;
          auVar45._0_8_ = dVar14;
          auVar45._12_4_ = uVar74;
          pdVar2 = (double *)(lVar32 + 0x50 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x50 + lVar6);
          *pdVar3 = dVar14 * *pdVar2;
          pdVar3[1] = auVar45._8_8_ * dVar55;
          uVar63 = *(uint *)(pFVar5 + lVar36);
          uVar68 = 0;
          if ((int)uVar63 < *(int *)&param_2->field_0x8) {
            uVar68 = ~uVar63 >> 0x1f;
          }
          if ((uVar68 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *(longlong *)param_2;
          lVar33 = (longlong)(int)uVar63 * 0x60;
          dVar69 = dVar15 * *(double *)(lVar33 + lVar7);
          dVar70 = dVar16 * ((double *)(lVar33 + lVar7))[1];
          pdVar2 = (double *)(lVar33 + 0x10 + lVar7);
          dVar11 = dVar17 * *pdVar2;
          dVar12 = dVar18 * pdVar2[1];
          auVar46._8_4_ = SUB84(dVar70,0);
          auVar46._0_8_ = dVar69;
          auVar46._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
          auVar56._8_4_ = SUB84(dVar12,0);
          auVar56._0_8_ = dVar11;
          auVar56._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          pdVar2 = (double *)(lVar32 + 0x10 + lVar6);
          dVar55 = dVar11 * *pdVar2 + dVar69 * *(double *)(lVar32 + lVar6);
          dVar64 = auVar56._8_8_ * pdVar2[1] + auVar46._8_8_ * ((double *)(lVar32 + lVar6))[1];
          auVar47._8_4_ = SUB84(dVar64,0);
          auVar47._0_8_ = dVar55;
          auVar47._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
          uVar37 = -(ulonglong)(0.0 <= auVar47._8_8_ + dVar55);
          uVar39 = -(ulonglong)(0.0 <= dVar55 + dVar64);
          uVar68 = (uint)(uVar39 >> 0x20);
          uVar63 = (uint)(uVar37 >> 0x20);
          auVar57._0_8_ = (ulonglong)dVar69 & uVar37;
          auVar57._8_4_ = (undefined4)((ulonglong)dVar70 & uVar39);
          auVar57._12_4_ = (undefined4)(((ulonglong)dVar70 & uVar39) >> 0x20);
          auVar65._0_4_ = ~(uint)uVar37 & SUB84(0.0 - dVar69,0);
          auVar65._4_4_ = ~uVar63 & (uint)((ulonglong)(0.0 - dVar69) >> 0x20);
          auVar65._8_4_ = ~(uint)uVar39 & SUB84(0.0 - dVar70,0);
          auVar65._12_4_ = ~uVar68 & (uint)((ulonglong)(0.0 - dVar70) >> 0x20);
          dVar55 = ((double *)(lVar32 + lVar6))[1];
          *(double *)(lVar32 + lVar6) = SUB168(auVar65 | auVar57,0) + *(double *)(lVar32 + lVar6);
          ((double *)(lVar32 + lVar6))[1] = SUB168(auVar65 | auVar57,8) + dVar55;
          auVar58._0_4_ = ~(uint)uVar37 & SUB84(0.0 - dVar11,0);
          auVar58._4_4_ = ~uVar63 & (uint)((ulonglong)(0.0 - dVar11) >> 0x20);
          auVar58._8_4_ = ~(uint)uVar39 & SUB84(0.0 - dVar12,0);
          auVar58._12_4_ = ~uVar68 & (uint)((ulonglong)(0.0 - dVar12) >> 0x20);
          auVar9._8_4_ = (int)((ulonglong)dVar12 & uVar39);
          auVar9._0_8_ = (ulonglong)dVar11 & uVar37;
          auVar9._12_4_ = (int)(((ulonglong)dVar12 & uVar39) >> 0x20);
          auVar48._8_4_ = SUB84(dVar16,0);
          auVar48._0_8_ = dVar15;
          auVar48._12_4_ = uVar75;
          pdVar2 = (double *)(lVar32 + 0x10 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x10 + lVar6);
          *pdVar3 = SUB168(auVar58 | auVar9,0) + *pdVar2;
          pdVar3[1] = SUB168(auVar58 | auVar9,8) + dVar55;
          pdVar2 = (double *)(lVar33 + 0x20 + lVar7);
          dVar11 = pdVar2[1];
          pdVar3 = (double *)(lVar33 + 0x30 + lVar7);
          dVar12 = *pdVar3;
          dVar64 = pdVar3[1];
          auVar59._8_4_ = SUB84(dVar18,0);
          auVar59._0_8_ = dVar17;
          auVar59._12_4_ = uVar76;
          pdVar3 = (double *)(lVar32 + 0x20 + lVar6);
          dVar55 = pdVar3[1];
          pdVar4 = (double *)(lVar32 + 0x20 + lVar6);
          *pdVar4 = dVar15 * *pdVar2 + *pdVar3;
          pdVar4[1] = auVar48._8_8_ * dVar11 + dVar55;
          pdVar2 = (double *)(lVar32 + 0x30 + lVar6);
          dVar55 = pdVar2[1];
          auVar49._8_4_ = SUB84(dVar16,0);
          auVar49._0_8_ = dVar15;
          auVar49._12_4_ = uVar75;
          pdVar3 = (double *)(lVar32 + 0x30 + lVar6);
          *pdVar3 = dVar17 * dVar12 + *pdVar2;
          pdVar3[1] = auVar59._8_8_ * dVar64 + dVar55;
          pdVar2 = (double *)(lVar33 + 0x40 + lVar7);
          dVar11 = pdVar2[1];
          pdVar3 = (double *)(lVar33 + 0x50 + lVar7);
          dVar12 = *pdVar3;
          dVar64 = pdVar3[1];
          auVar60._8_4_ = SUB84(dVar18,0);
          auVar60._0_8_ = dVar17;
          auVar60._12_4_ = uVar76;
          pdVar3 = (double *)(lVar32 + 0x40 + lVar6);
          dVar55 = pdVar3[1];
          pdVar4 = (double *)(lVar32 + 0x40 + lVar6);
          *pdVar4 = dVar15 * *pdVar2 + *pdVar3;
          pdVar4[1] = auVar49._8_8_ * dVar11 + dVar55;
          pdVar2 = (double *)(lVar32 + 0x50 + lVar6);
          dVar55 = pdVar2[1];
          pdVar3 = (double *)(lVar32 + 0x50 + lVar6);
          *pdVar3 = dVar17 * dVar12 + *pdVar2;
          pdVar3[1] = auVar60._8_8_ * dVar64 + dVar55;
          dVar55 = *(double *)(lVar32 + lVar6);
          dVar11 = ((double *)(lVar32 + lVar6))[1];
          pdVar2 = (double *)(lVar32 + 0x10 + lVar6);
          dVar12 = *pdVar2;
          dVar64 = pdVar2[1];
          auVar61._0_8_ = dVar12 * dVar12 + dVar55 * dVar55;
          auVar61._8_8_ = dVar64 * dVar64 + dVar11 * dVar11;
          auVar50._8_4_ = SUB84(auVar61._8_8_,0);
          auVar50._0_8_ = auVar61._0_8_;
          auVar50._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
          auVar51._0_8_ = auVar50._8_8_ + auVar61._0_8_;
          auVar51._8_8_ = auVar61._0_8_ + auVar61._8_8_;
          auVar62 = sqrtpd(auVar61,auVar51);
          uVar39 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar51._0_8_);
          uVar40 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar51._8_8_);
          uVar38 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar51._0_8_);
          uVar41 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar51._8_8_);
          auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar62);
          auVar62 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar62);
          auVar53._0_8_ = uVar38 & (ulonglong)(auVar52._0_8_ * dVar55);
          uVar37 = uVar41 & (ulonglong)(auVar52._8_8_ * dVar11);
          auVar53._8_4_ = (undefined4)uVar37;
          auVar53._12_4_ = (undefined4)(uVar37 >> 0x20);
          auVar67._0_8_ = uVar39 & (ulonglong)(auVar62._0_8_ * dVar12);
          uVar37 = uVar40 & (ulonglong)(auVar62._8_8_ * dVar64);
          auVar67._8_4_ = (undefined4)uVar37;
          auVar67._12_4_ = (undefined4)(uVar37 >> 0x20);
          auVar10._4_4_ =
               ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar10._0_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar10._8_4_ = ~(uint)uVar41 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar10._12_4_ =
               ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar66._0_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar66._4_4_ =
               ~(uint)(uVar39 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar66._8_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar66._12_4_ =
               ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(lVar32 + lVar6) = auVar53 | auVar10;
          *(undefined1 (*) [16])(lVar32 + 0x10 + lVar6) = auVar67 | auVar66;
          iVar34 = param_6->ArrayNum;
          uVar35 = uVar35 + 1;
          lVar36 = lVar36 + 4;
        } while ((int)uVar35 < iVar34);
      }
      UE::Anim::FNamedValueArrayUtils::
      Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
                ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_3,
                 (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_4,
                 param_5._0_1_);
    }
    else {
      uVar35 = 0;
      if (0 < iVar34) {
        lVar36 = 0;
        do {
          uVar63 = 0;
          if ((int)uVar35 < iVar34) {
            uVar63 = ~uVar35 >> 0x1f;
          }
          if ((uVar63 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar5 = (param_6->AllocatorInstance).Data;
          uVar63 = *(uint *)(pFVar5 + lVar36);
          uVar68 = 0;
          if ((int)uVar63 < *(int *)&param_2->field_0x8) {
            uVar68 = ~uVar63 >> 0x1f;
          }
          if ((uVar68 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)param_2;
          uVar68 = *(uint *)(pFVar5 + lVar36);
          lVar32 = (longlong)(int)uVar63 * 0x60;
          uVar19 = *(undefined8 *)(lVar32 + lVar6);
          uVar20 = ((undefined8 *)(lVar32 + lVar6))[1];
          puVar1 = (undefined8 *)(lVar32 + 0x10 + lVar6);
          uVar21 = *puVar1;
          uVar22 = puVar1[1];
          puVar1 = (undefined8 *)(lVar32 + 0x20 + lVar6);
          uVar23 = *puVar1;
          uVar24 = puVar1[1];
          puVar1 = (undefined8 *)(lVar32 + 0x30 + lVar6);
          uVar25 = *puVar1;
          uVar26 = puVar1[1];
          puVar1 = (undefined8 *)(lVar32 + 0x40 + lVar6);
          uVar27 = *puVar1;
          uVar28 = puVar1[1];
          puVar1 = (undefined8 *)(lVar32 + 0x50 + lVar6);
          uVar29 = *puVar1;
          uVar30 = puVar1[1];
          uVar63 = 0;
          if ((int)uVar68 < *(int *)&param_1->field_0x8) {
            uVar63 = ~uVar68 >> 0x1f;
          }
          if ((uVar63 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)param_1;
          lVar32 = (longlong)(int)uVar68 * 0x60;
          uVar35 = uVar35 + 1;
          lVar36 = lVar36 + 4;
          *(undefined8 *)(lVar32 + lVar6) = uVar19;
          ((undefined8 *)(lVar32 + lVar6))[1] = uVar20;
          puVar1 = (undefined8 *)(lVar32 + 0x10 + lVar6);
          *puVar1 = uVar21;
          puVar1[1] = uVar22;
          puVar1 = (undefined8 *)(lVar32 + 0x20 + lVar6);
          *puVar1 = uVar23;
          puVar1[1] = uVar24;
          puVar1 = (undefined8 *)(lVar32 + 0x30 + lVar6);
          *puVar1 = uVar25;
          puVar1[1] = uVar26;
          puVar1 = (undefined8 *)(lVar32 + 0x40 + lVar6);
          *puVar1 = uVar27;
          puVar1[1] = uVar28;
          puVar1 = (undefined8 *)(lVar32 + 0x50 + lVar6);
          *puVar1 = uVar29;
          puVar1[1] = uVar30;
          iVar34 = param_6->ArrayNum;
        } while ((int)uVar35 < iVar34);
      }
      TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
                ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_3,
                 (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_4);
      param_3->field_0x10 = param_4->field_0x10;
    }
  }
  return;
}

// MakeSkeletonRefPoseFromMesh @ 14740ab20

void __cdecl
FAnimationRuntime::MakeSkeletonRefPoseFromMesh
          (USkeletalMesh *param_1,USkeleton *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 (*pauVar1) [12];
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  FName FVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  __m128d _Var21;
  __m128d _Var22;
  __m128d _Var23;
  __m128d _Var24;
  __m128d _Var25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  uint *puVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (((param_1 == (USkeletalMesh *)0x0) || (param_2 == (USkeleton *)0x0)) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMesh && InSkeleton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0xa8b,L""), bVar26)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar29 = (**(code **)(param_1->_padding_ + 0x318))();
  uVar35 = (param_2->ReferenceSkeleton).FinalRefBonePose.ArrayNum;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar35,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,(param_2->ReferenceSkeleton).FinalRefBonePose.ArrayNum,
             &param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  uVar35 = 0;
  if (0 < (param_2->ReferenceSkeleton).FinalRefBonePose.ArrayNum) {
    lVar36 = 0;
    lVar37 = 0;
    do {
      uVar34 = ~uVar35 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar35 < (param_2->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
        uVar27 = uVar34;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = *(FName *)((param_2->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                        lVar37);
      lVar30 = (**(code **)(param_1->_padding_ + 0x318))(param_1);
      if ((FVar4 == (FName)0x0) ||
         (puVar31 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                            ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                    *)(lVar30 + 0x90),FVar4), puVar31 == (uint *)0x0)) {
LAB_14740addb:
        _Var25.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        _Var24.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        _Var23.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        _Var22.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        _Var21.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        uVar6 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
        uVar7 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
        uVar8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
        uVar9 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
        uVar27 = 0;
        if ((int)uVar35 < param_3->ArrayNum) {
          uVar27 = uVar34;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar32 = (param_3->AllocatorInstance).Data;
        pFVar2 = pFVar32 + lVar36;
        *(undefined4 *)pFVar2 = uVar6;
        *(undefined4 *)(pFVar2 + 4) = uVar7;
        *(undefined4 *)(pFVar2 + 8) = uVar8;
        *(undefined4 *)(pFVar2 + 0xc) = uVar9;
        local_38 = _Var21.m128d_f64[0];
        uStack_30 = _Var21.m128d_f64[1];
        *(double *)(pFVar32 + lVar36 + 0x10) = local_38;
        *(double *)(pFVar32 + lVar36 + 0x10 + 8) = uStack_30;
        local_48 = _Var22.m128d_f64[0];
        dStack_40 = _Var22.m128d_f64[1];
        *(double *)(pFVar32 + lVar36 + 0x20) = local_48;
        *(double *)(pFVar32 + lVar36 + 0x20 + 8) = dStack_40;
        local_58 = _Var23.m128d_f64[0];
        dStack_50 = _Var23.m128d_f64[1];
        *(double *)(pFVar32 + lVar36 + 0x30) = local_58;
        *(double *)(pFVar32 + lVar36 + 0x30 + 8) = dStack_50;
        local_68 = _Var24.m128d_f64[0];
        dStack_60 = _Var24.m128d_f64[1];
        *(double *)(pFVar32 + lVar36 + 0x40) = local_68;
        *(double *)(pFVar32 + lVar36 + 0x40 + 8) = dStack_60;
        local_78 = _Var25.m128d_f64[0]._0_4_;
        uStack_74 = _Var25.m128d_f64[0]._4_4_;
        uStack_70 = _Var25.m128d_f64[1]._0_4_;
        uStack_6c = _Var25.m128d_f64[1]._4_4_;
        local_38._0_4_ = local_78;
        local_38._4_4_ = uStack_74;
        uStack_30._0_4_ = uStack_70;
        uStack_30._4_4_ = uStack_6c;
      }
      else {
        uVar27 = *puVar31;
        if (uVar27 == 0xffffffff) goto LAB_14740addb;
        uVar28 = 0;
        if ((int)uVar27 < *(int *)(lVar29 + 0x38)) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar33 = (longlong)(int)uVar27 * 0x60;
        lVar30 = *(longlong *)(lVar29 + 0x30);
        puVar3 = (undefined8 *)(lVar33 + 0x10 + lVar30);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        puVar3 = (undefined8 *)(lVar33 + 0x20 + lVar30);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        pauVar1 = (undefined1 (*) [12])(lVar33 + lVar30);
        local_88 = *(undefined4 *)*pauVar1;
        uStack_84 = *(undefined4 *)(*pauVar1 + 4);
        uStack_80 = *(undefined4 *)(*pauVar1 + 8);
        auVar20 = *pauVar1;
        uVar6 = *(undefined4 *)pauVar1[1];
        puVar3 = (undefined8 *)(lVar33 + 0x30 + lVar30);
        uVar14 = *puVar3;
        uVar15 = puVar3[1];
        puVar3 = (undefined8 *)(lVar33 + 0x50 + lVar30);
        uVar16 = *puVar3;
        uVar17 = puVar3[1];
        puVar3 = (undefined8 *)(lVar33 + 0x40 + lVar30);
        uVar18 = *puVar3;
        uVar19 = puVar3[1];
        uVar27 = 0;
        if ((int)uVar35 < param_3->ArrayNum) {
          uVar27 = uVar34;
        }
        if (uVar27 == 0) {
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_88 = auVar20._0_4_;
          uStack_84 = auVar20._4_4_;
          uStack_80 = auVar20._8_4_;
        }
        pFVar32 = (param_3->AllocatorInstance).Data;
        pFVar2 = pFVar32 + lVar36;
        *(undefined4 *)pFVar2 = local_88;
        *(undefined4 *)(pFVar2 + 4) = uStack_84;
        *(undefined4 *)(pFVar2 + 8) = uStack_80;
        *(undefined4 *)(pFVar2 + 0xc) = uVar6;
        *(undefined8 *)(pFVar32 + lVar36 + 0x10) = uVar10;
        *(undefined8 *)(pFVar32 + lVar36 + 0x10 + 8) = uVar11;
        *(undefined8 *)(pFVar32 + lVar36 + 0x20) = uVar12;
        *(undefined8 *)(pFVar32 + lVar36 + 0x20 + 8) = uVar13;
        *(undefined8 *)(pFVar32 + lVar36 + 0x30) = uVar14;
        *(undefined8 *)(pFVar32 + lVar36 + 0x30 + 8) = uVar15;
        *(undefined8 *)(pFVar32 + lVar36 + 0x40) = uVar18;
        *(undefined8 *)(pFVar32 + lVar36 + 0x40 + 8) = uVar19;
        local_38._0_4_ = (undefined4)uVar16;
        local_38._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
        uStack_30._0_4_ = (undefined4)uVar17;
        uStack_30._4_4_ = (undefined4)((ulonglong)uVar17 >> 0x20);
      }
      pFVar32 = pFVar32 + lVar36 + 0x50;
      *(undefined4 *)pFVar32 = (undefined4)local_38;
      *(undefined4 *)(pFVar32 + 4) = local_38._4_4_;
      *(undefined4 *)(pFVar32 + 8) = (undefined4)uStack_30;
      *(undefined4 *)(pFVar32 + 0xc) = uStack_30._4_4_;
      uVar35 = uVar35 + 1;
      lVar36 = lVar36 + 0x60;
      lVar37 = lVar37 + 0xc;
    } while ((int)uVar35 < (param_2->ReferenceSkeleton).FinalRefBonePose.ArrayNum);
  }
  return;
}

// MirrorCurves @ 14740af70

void __cdecl FAnimationRuntime::MirrorCurves(FBlendedCurve *param_1,UMirrorDataTable *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  float fVar3;
  ECurveElementFlags EVar4;
  int iVar5;
  FName FVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FCurveElement *pFVar12;
  FCurveElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar17 = 0;
  puVar1 = &(param_2->CurveToMirrorCurveMap).field_0x10;
  iVar5 = *(int *)&(param_2->CurveToMirrorCurveMap).field_0x28;
  uVar10 = 1;
  iVar19 = 0;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(param_2->CurveToMirrorCurveMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14740b01d;
      uVar16 = puVar20[lVar14 + 1];
    }
    uVar10 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar11 = local_res18 + -1 + iVar19;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_14740b01d:
  uVar16 = *(uint *)&(param_2->CurveToMirrorCurveMap).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar17);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_2->CurveToMirrorCurveMap).field_0x8 -
                       *(int *)&(param_2->CurveToMirrorCurveMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(param_2->CurveToMirrorCurveMap).field_0x28;
  if (uVar16 != uVar10) {
    puVar18 = *(undefined1 **)&(param_2->CurveToMirrorCurveMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      uVar15 = uVar15 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14740b120;
      uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar10 < (int)uVar16) {
      uVar16 = uVar10;
    }
  }
LAB_14740b120:
  do {
    if (*(int *)&(param_2->CurveToMirrorCurveMap).field_0x8 -
        *(int *)&(param_2->CurveToMirrorCurveMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    FVar6 = *(FName *)(*(longlong *)&param_2->CurveToMirrorCurveMap + 8 +
                      (longlong)TStack_60.CurrentBitIndex * 0x18);
    FVar7 = *(FName *)(*(longlong *)&param_2->CurveToMirrorCurveMap +
                      (longlong)TStack_60.CurrentBitIndex * 0x18);
    pFVar12 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
                        ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1,
                         FVar7);
    pFVar13 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
                        ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)param_1,
                         FVar6);
    if (pFVar12 == (FCurveElement *)0x0) {
      if (pFVar13 != (FCurveElement *)0x0) {
        pFVar13->Name = FVar7;
        goto LAB_14740b1af;
      }
    }
    else if (pFVar13 == (FCurveElement *)0x0) {
      pFVar12->Name = FVar6;
LAB_14740b1af:
      param_1->field_0x10 = 0;
    }
    else {
      fVar3 = pFVar12->Value;
      pFVar12->Value = pFVar13->Value;
      pFVar13->Value = fVar3;
      EVar4 = pFVar12->Flags;
      pFVar12->Flags = pFVar13->Flags;
      pFVar13->Flags = EVar4;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// MirrorPose @ 14740b1f0

/* WARNING: Type propagation algorithm not settling */

void __cdecl FAnimationRuntime::MirrorPose(FCompactPose *param_1,UMirrorDataTable *param_2)

{
  ushort uVar1;
  uint uVar2;
  FBoneContainer *this;
  FSkelMeshRefPoseOverride *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  USkeleton *pUVar20;
  TTransform<double> *pTVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint local_res8;
  FCompactPoseBoneIndex local_res18 [2];
  FCompactPoseBoneIndex local_res20 [2];
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
  local_d8;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_c8;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  this = *(FBoneContainer **)&param_1->field_0x10;
  pUVar20 = (USkeleton *)FWeakObjectPtr::Get(&(this->AssetSkeleton).WeakPtr);
  if (pUVar20 != (USkeleton *)0x0) {
    local_b8 = (void *)0x0;
    local_b0 = 0;
    UMirrorDataTable::FillMirrorBoneIndexes
              (param_2,pUVar20,
               (TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<FSkeletonPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
                *)&local_b8);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    UMirrorDataTable::FillCompactPoseMirrorBones
              (this,(TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<FSkeletonPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
                     *)&local_b8,
               (TTypedIndexRange<FCompactPoseBoneIndex,TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>_>
                *)&local_c8);
    uVar2 = (this->BoneIndicesArray).ArrayNum;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,uVar2,(ForAnyElementType *)&local_d8,(int *)((longlong)&local_d8 + 8),
                 (int *)&local_d8.field_0xc);
    }
    local_res18[0] = (FCompactPoseBoneIndex)0x0;
    pTVar21 = FBoneContainer::GetRefPoseTransform(this,local_res18);
    dVar7 = (pTVar21->Rotation).XY.m128d_f64[0];
    dVar11 = (pTVar21->Rotation).XY.m128d_f64[1];
    dVar12 = (pTVar21->Rotation).ZW.m128d_f64[0];
    dVar13 = (pTVar21->Rotation).ZW.m128d_f64[1];
    if (((int)local_d8._8_4_ < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(double *)local_d8._0_8_ = dVar7;
    *(double *)(local_d8._0_8_ + 8) = dVar11;
    *(double *)(local_d8._0_8_ + 0x10) = dVar12;
    *(double *)(local_d8._0_8_ + 0x18) = dVar13;
    local_res8 = 1;
    if (1 < (int)uVar2) {
      do {
        FBoneContainer::GetParentBoneIndex(this,local_res20);
        lVar23 = (longlong)(int)local_res20[0];
        uVar19 = 0;
        if ((int)local_res20[0] < (int)local_d8._8_4_) {
          uVar19 = ~(uint)local_res20[0] >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->RefPoseOverride).Object;
        pFVar22 = (FScriptContainerElement *)(local_d8._0_8_ + lVar23 * 0x20);
        if (pFVar3 == (FSkelMeshRefPoseOverride *)0x0) {
          pTVar24 = &this->RefSkeleton->FinalRefBonePose;
        }
        else {
          pTVar24 = &pFVar3->RefBonePoses;
        }
        uVar19 = 0;
        if ((int)local_res8 < (this->BoneIndicesArray).ArrayNum) {
          uVar19 = ~local_res8 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = *(ushort *)
                 ((this->BoneIndicesArray).AllocatorInstance.Data + (longlong)(int)local_res8 * 2);
        if ((pTVar24->ArrayNum <= (int)(uint)uVar1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar24->AllocatorInstance).Data;
        dVar7 = *(double *)pFVar22;
        dVar11 = *(double *)(pFVar22 + 8);
        dVar12 = *(double *)(pFVar22 + 0x10);
        dVar13 = *(double *)(pFVar22 + 0x18);
        lVar23 = (ulonglong)uVar1 * 0x60;
        pFVar22 = pFVar4 + lVar23 + 0x10;
        dVar14 = *(double *)pFVar22;
        dVar15 = *(double *)(pFVar22 + 8);
        pFVar4 = pFVar4 + lVar23;
        dVar16 = *(double *)pFVar4;
        dVar17 = *(double *)(pFVar4 + 8);
        uVar19 = 0;
        if ((int)local_res8 < (int)local_d8._8_4_) {
          uVar19 = ~local_res8 >> 0x1f;
        }
        dVar9 = dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar13 * dVar16 +
                dVar11 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar10 = dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar13 * dVar17 +
                 dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar12 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar27 = SUB84(dVar10,0);
        uVar28 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar10 = dVar7 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar13 * dVar14 +
                 dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar7 = dVar7 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar13 * dVar15 +
                dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar25 = SUB84(dVar7,0);
        uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_a8._8_4_ = uVar27;
        local_a8._0_8_ = dVar9;
        local_a8._12_4_ = uVar28;
        local_98._8_4_ = uVar25;
        local_98._0_8_ = dVar10;
        local_98._12_4_ = uVar26;
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        auVar8._8_4_ = uVar27;
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = uVar28;
        *(undefined1 (*) [16])(local_d8._0_8_ + (longlong)(int)local_res8 * 0x20) = auVar8;
        auVar6._8_4_ = uVar25;
        auVar6._0_8_ = dVar10;
        auVar6._12_4_ = uVar26;
        *(undefined1 (*) [16])(local_d8._0_8_ + ((longlong)(int)local_res8 * 4 + 2) * 8) = auVar6;
        local_res8 = local_res8 + 1;
      } while ((int)local_res8 < (int)uVar2);
    }
    MirrorPose(param_1,(uint)(param_2->MirrorAxis).Value,&local_c8,&local_d8);
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}

// MirrorPose @ 14740b670

void __cdecl
FAnimationRuntime::MirrorPose
          (FCompactPose *param_1,Type param_2,
          TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_3,
          TTypedIndexRange<FCompactPoseBoneIndex,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  FCompactPoseBoneIndex FVar8;
  FBoneContainer *this;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  bool bVar31;
  TTransform<double> *pTVar32;
  longlong lVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  double dVar43;
  double dVar44;
  uint uVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  FCompactPoseBoneIndex local_res8 [2];
  FCompactPoseBoneIndex local_res10 [2];
  FCompactPoseBoneIndex local_2a8;
  FCompactPoseBoneIndex local_2a4;
  FCompactPoseBoneIndex local_2a0 [2];
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined1 local_278 [16];
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
  *local_268;
  Type local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118 [2];
  
  if (param_2 == None) {
    return;
  }
  this = *(FBoneContainer **)&param_1->field_0x10;
  local_268 = param_4;
  local_260 = param_2;
  if ((param_3->ArrayNum < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(int *)(param_3->AllocatorInstance).Data == -1) goto LAB_14740bbc8;
  if ((*(int *)&param_4->field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  auVar4 = **(undefined1 (**) [16])param_4;
  uVar41 = auVar4._0_4_;
  uVar42 = auVar4._4_4_;
  uVar37 = auVar4._8_4_;
  uVar38 = auVar4._12_4_;
  auVar5 = (*(undefined1 (**) [16])param_4)[1];
  uVar39 = auVar5._0_4_;
  uVar40 = auVar5._4_4_;
  local_238 = auVar4;
  local_228 = auVar5;
  if ((*(int *)&param_1->field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar34 = *(longlong *)param_1;
  uVar45 = (uint)__xmm_80000000000000008000000000000000;
  uVar47 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar35 = (uint)*(undefined8 *)(lVar34 + 0x30);
  uVar36 = (uint)((ulonglong)*(undefined8 *)(lVar34 + 0x30) >> 0x20);
  pauVar1 = (undefined1 (*) [16])(lVar34 + 0x20);
  auVar6 = *pauVar1;
  if (param_2 == X) {
    local_298._4_4_ = *(uint *)(lVar34 + 0x24) ^ uVar47;
    local_298._0_4_ = *(uint *)*pauVar1 ^ uVar45;
    local_298._8_8_ = auVar6._8_8_;
  }
  else if (param_2 == Y) {
    local_298._12_4_ = *(uint *)(lVar34 + 0x2c) ^ uVar47;
    local_298._8_4_ = *(uint *)(lVar34 + 0x28) ^ uVar45;
    local_298._0_8_ = SUB128(*(undefined1 (*) [12])*pauVar1,0);
  }
  else {
    local_298 = auVar6;
    if (param_2 == Z) {
      uVar35 = uVar35 ^ uVar45;
      uVar36 = uVar36 ^ uVar47;
      local_288 = CONCAT44(uVar36,uVar35);
    }
  }
  local_248 = CONCAT44(uVar36,uVar35);
  local_258 = local_298._0_8_;
  uStack_250 = local_298._8_8_;
  if ((*(int *)&param_1->field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pauVar1 = *(undefined1 (**) [16])param_1;
  auVar6 = *pauVar1;
  uVar35 = auVar6._0_4_;
  uVar36 = auVar6._4_4_;
  local_278._8_4_ = auVar6._8_4_;
  local_278._12_4_ = auVar6._12_4_;
  uVar23 = *(uint *)pauVar1[1];
  local_208 = *(double *)pauVar1[1];
  uStack_200 = *(undefined4 *)(pauVar1[1] + 8);
  uStack_1fc = *(undefined4 *)(pauVar1[1] + 0xc);
  dVar27 = *(double *)(pauVar1[1] + 8);
  local_278._0_8_ = auVar6._8_8_;
  if (param_2 == X) {
    local_278._4_4_ = local_278._12_4_ ^ uVar47;
    local_278._0_4_ = local_278._8_4_ ^ uVar45;
    local_208 = (double)CONCAT44(*(uint *)(pauVar1[1] + 4) ^ uVar47,uVar23 ^ uVar45);
LAB_14740b939:
    uVar39 = uVar39 ^ uVar45;
    uVar40 = uVar40 ^ uVar47;
LAB_14740b93f:
    uVar37 = uVar37 ^ uVar45;
    uVar38 = uVar38 ^ uVar47;
  }
  else if (param_2 == Y) {
    local_208 = (double)CONCAT44(*(uint *)(pauVar1[1] + 4) ^ uVar47,uVar23 ^ uVar45);
    uVar35 = uVar35 ^ uVar45;
    uVar36 = uVar36 ^ uVar47;
LAB_14740b90f:
    uVar41 = uVar41 ^ uVar45;
    uVar42 = uVar42 ^ uVar47;
    uVar39 = uVar39 ^ uVar45;
    uVar40 = uVar40 ^ uVar47;
  }
  else {
    if (param_2 == Z) {
      uVar35 = uVar35 ^ uVar45;
      uVar36 = uVar36 ^ uVar47;
      local_278._4_4_ = local_278._12_4_ ^ uVar47;
      local_278._0_4_ = local_278._8_4_ ^ uVar45;
LAB_14740b8ee:
      uVar41 = uVar41 ^ uVar45;
      uVar42 = uVar42 ^ uVar47;
      goto LAB_14740b93f;
    }
    if (param_2 == X) goto LAB_14740b939;
    if (param_2 == Y) goto LAB_14740b90f;
    if (param_2 == Z) goto LAB_14740b8ee;
  }
  dVar43 = (double)CONCAT44(uVar42,uVar41) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar44 = (double)CONCAT44(uVar38,uVar37) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar15 = (double)CONCAT44(uVar40,uVar39) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar13 = auVar5._8_8_;
  dVar16 = dVar13 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar22 = auVar4._0_8_;
  dVar14 = auVar4._8_8_;
  dVar19 = auVar5._0_8_;
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  auVar4._8_4_ = SUB84(dVar14 * dVar44,0);
  auVar4._0_8_ = dVar22 * dVar44;
  auVar4._12_4_ = (int)((ulonglong)(dVar14 * dVar44) >> 0x20);
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar20 = dVar43 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar22 * dVar16 + dVar44 * dVar19 * dVar10 + dVar15 * dVar14 * dVar11;
  dVar21 = dVar43 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar14 * dVar16 +
           dVar44 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar15 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_298._8_8_ = auVar4._8_8_;
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar44 = dVar43 * dVar14 * dVar18 + dVar16 * dVar19 + dVar22 * dVar44 * dVar17 +
           dVar15 * dVar13 * dVar12;
  dVar22 = dVar43 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar16 * dVar13 +
           (double)local_298._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar15 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar13 = (double)CONCAT44(uVar36,uVar35) * dVar22 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar27 * dVar20;
  dVar14 = (double)CONCAT44(uVar36,uVar35) * dVar44 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar27 * dVar21;
  local_298._8_4_ = SUB84(dVar14,0);
  local_298._0_8_ = dVar13;
  local_298._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  dVar15 = (double)local_278._0_8_ * dVar44;
  dVar14 = local_208 * dVar21;
  dVar43 = (double)local_278._0_8_ * dVar20;
  dVar19 = (double)local_298._8_8_ +
           (double)local_278._0_8_ * dVar22 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_208 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar16 = local_208 * dVar22;
  dVar22 = (double)CONCAT44(uVar36,uVar35) * dVar20 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar27 * dVar22 +
           (double)local_278._0_8_ * dVar21 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           local_208 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if ((*(int *)&param_1->field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar30 = local_248;
  uVar29 = uStack_250;
  uVar28 = local_258;
  lVar34 = *(longlong *)param_1;
  uVar25 = *(undefined8 *)(lVar34 + 0x40);
  uVar26 = *(undefined8 *)(lVar34 + 0x48);
  uVar24 = *(undefined8 *)(lVar34 + 0x50);
  local_1f8 = uVar25;
  uStack_1f0 = uVar26;
  local_1e8 = uVar24;
  if ((*(int *)&param_1->field_0x8 < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pauVar1 = *(undefined1 (**) [16])param_1;
  auVar5._8_4_ = SUB84(dVar19,0);
  auVar5._0_8_ = dVar13 + dVar15 * dVar10 + dVar14 * dVar11;
  auVar5._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *pauVar1 = auVar5;
  auVar6._8_4_ = SUB84(dVar22,0);
  auVar6._0_8_ = (double)CONCAT44(uVar36,uVar35) * dVar21 * dVar18 + dVar27 * dVar44 +
                 dVar43 * dVar17 + dVar16 * dVar12;
  auVar6._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  pauVar1[1] = auVar6;
  *(undefined8 *)pauVar1[2] = uVar28;
  *(undefined8 *)(pauVar1[2] + 8) = uVar29;
  *(undefined8 *)pauVar1[3] = uVar30;
  *(undefined8 *)(pauVar1[3] + 8) = 0;
  *(undefined8 *)pauVar1[4] = uVar25;
  *(undefined8 *)(pauVar1[4] + 8) = uVar26;
  *(undefined8 *)pauVar1[5] = uVar24;
  *(undefined8 *)(pauVar1[5] + 8) = 0;
LAB_14740bbc8:
  iVar7 = (this->BoneIndicesArray).ArrayNum;
  local_res10[0] = (FCompactPoseBoneIndex)0x1;
  if (1 < iVar7) {
    do {
      FVar8 = local_res10[0];
      uVar41 = 0;
      if ((int)local_res10[0] < param_3->ArrayNum) {
        uVar41 = ~(uint)local_res10[0] >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_res8[0] =
           *(FCompactPoseBoneIndex *)((param_3->AllocatorInstance).Data + (longlong)(int)FVar8 * 4);
      uVar41 = 0;
      if (local_res8[0] == local_res10[0]) {
        FBoneContainer::GetParentBoneIndex(this,&local_2a8);
        lVar34 = (longlong)(int)local_res10[0];
        uVar39 = 0;
        if ((int)local_res10[0] < *(int *)&param_1->field_0x8) {
          uVar39 = ~(uint)local_res10[0] >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar32 = `FAnimationRuntime::MirrorPose'::__l2::<lambda_1>::operator()
                            (&local_268,local_118,
                             (TTransform<double> *)(lVar34 * 0x60 + *(longlong *)param_1),&local_2a8
                             ,local_res10,&local_2a8,local_res10);
        uVar46 = *(undefined4 *)(pTVar32->Rotation).XY.m128d_f64;
        uVar48 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 4);
        uVar49 = *(undefined4 *)((pTVar32->Rotation).XY.m128d_f64 + 1);
        uVar50 = *(undefined4 *)((longlong)(pTVar32->Rotation).XY.m128d_f64 + 0xc);
        uVar51 = *(undefined4 *)(pTVar32->Rotation).ZW.m128d_f64;
        uVar52 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 4);
        uVar53 = *(undefined4 *)((pTVar32->Rotation).ZW.m128d_f64 + 1);
        uVar54 = *(undefined4 *)((longlong)(pTVar32->Rotation).ZW.m128d_f64 + 0xc);
        uVar55 = *(undefined4 *)(pTVar32->Translation).XY.m128d_f64;
        uVar56 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 4);
        uVar57 = *(undefined4 *)((pTVar32->Translation).XY.m128d_f64 + 1);
        uVar58 = *(undefined4 *)((longlong)(pTVar32->Translation).XY.m128d_f64 + 0xc);
        uVar59 = *(undefined4 *)(pTVar32->Translation).ZW.m128d_f64;
        uVar60 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 4);
        uVar61 = *(undefined4 *)((pTVar32->Translation).ZW.m128d_f64 + 1);
        uVar62 = *(undefined4 *)((longlong)(pTVar32->Translation).ZW.m128d_f64 + 0xc);
        uVar63 = *(undefined4 *)(pTVar32->Scale3D).XY.m128d_f64;
        uVar64 = *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 4);
        uVar65 = *(undefined4 *)((pTVar32->Scale3D).XY.m128d_f64 + 1);
        uVar66 = *(undefined4 *)((longlong)(pTVar32->Scale3D).XY.m128d_f64 + 0xc);
        uVar67 = *(undefined4 *)(pTVar32->Scale3D).ZW.m128d_f64;
        uVar68 = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 4);
        uVar69 = *(undefined4 *)((pTVar32->Scale3D).ZW.m128d_f64 + 1);
        uVar70 = *(undefined4 *)((longlong)(pTVar32->Scale3D).ZW.m128d_f64 + 0xc);
        FVar8 = local_res10[0];
LAB_14740bf25:
        if ((int)FVar8 < *(int *)&param_1->field_0x8) {
          uVar41 = ~(uint)FVar8 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar34 = *(longlong *)param_1;
        lVar33 = (longlong)(int)FVar8 * 0x60;
        puVar2 = (undefined4 *)(lVar33 + lVar34);
        *puVar2 = uVar46;
        puVar2[1] = uVar48;
        puVar2[2] = uVar49;
        puVar2[3] = uVar50;
        puVar2 = (undefined4 *)(lVar33 + 0x10 + lVar34);
        *puVar2 = uVar51;
        puVar2[1] = uVar52;
        puVar2[2] = uVar53;
        puVar2[3] = uVar54;
        puVar2 = (undefined4 *)(lVar33 + 0x20 + lVar34);
        *puVar2 = uVar55;
        puVar2[1] = uVar56;
        puVar2[2] = uVar57;
        puVar2[3] = uVar58;
        puVar2 = (undefined4 *)(lVar33 + 0x30 + lVar34);
        *puVar2 = uVar59;
        puVar2[1] = uVar60;
        puVar2[2] = uVar61;
        puVar2[3] = uVar62;
        puVar2 = (undefined4 *)(lVar33 + 0x40 + lVar34);
        *puVar2 = uVar63;
        puVar2[1] = uVar64;
        puVar2[2] = uVar65;
        puVar2[3] = uVar66;
        puVar2 = (undefined4 *)(lVar33 + 0x50 + lVar34);
        *puVar2 = uVar67;
        puVar2[1] = uVar68;
        puVar2[2] = uVar69;
        puVar2[3] = uVar70;
      }
      else if ((int)local_res10[0] < (int)local_res8[0]) {
        FBoneContainer::GetParentBoneIndex(this,local_2a0);
        FBoneContainer::GetParentBoneIndex(this,&local_2a4);
        lVar34 = (longlong)(int)local_res8[0];
        uVar39 = uVar41;
        if ((int)local_res8[0] < *(int *)&param_1->field_0x8) {
          uVar39 = ~(uint)local_res8[0] >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        `FAnimationRuntime::MirrorPose'::__l2::<lambda_1>::operator()
                  (&local_268,&local_1d8,
                   (TTransform<double> *)(lVar34 * 0x60 + *(longlong *)param_1),&local_2a4,
                   local_res8,local_2a0,local_res10);
        lVar34 = (longlong)(int)local_res10[0];
        uVar39 = uVar41;
        if ((int)local_res10[0] < *(int *)&param_1->field_0x8) {
          uVar39 = ~(uint)local_res10[0] >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        `FAnimationRuntime::MirrorPose'::__l2::<lambda_1>::operator()
                  (&local_268,&local_178,
                   (TTransform<double> *)(lVar34 * 0x60 + *(longlong *)param_1),local_2a0,
                   local_res10,&local_2a4,local_res8);
        dVar18 = local_1d8.Scale3D.ZW.m128d_f64[1];
        dVar17 = local_1d8.Scale3D.ZW.m128d_f64[0];
        dVar22 = local_1d8.Scale3D.XY.m128d_f64[1];
        dVar19 = local_1d8.Scale3D.XY.m128d_f64[0];
        dVar16 = local_1d8.Translation.ZW.m128d_f64[1];
        dVar15 = local_1d8.Translation.ZW.m128d_f64[0];
        dVar13 = local_1d8.Translation.XY.m128d_f64[1];
        dVar14 = local_1d8.Translation.XY.m128d_f64[0];
        dVar12 = local_1d8.Rotation.ZW.m128d_f64[1];
        dVar11 = local_1d8.Rotation.ZW.m128d_f64[0];
        dVar10 = local_1d8.Rotation.XY.m128d_f64[1];
        dVar27 = local_1d8.Rotation.XY.m128d_f64[0];
        lVar34 = (longlong)(int)local_res10[0];
        uVar39 = uVar41;
        if ((int)local_res10[0] < *(int *)&param_1->field_0x8) {
          uVar39 = ~(uint)local_res10[0] >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar33 = *(longlong *)param_1;
        lVar34 = lVar34 * 0x60;
        *(double *)(lVar34 + lVar33) = dVar27;
        ((double *)(lVar34 + lVar33))[1] = dVar10;
        pdVar3 = (double *)(lVar34 + 0x10 + lVar33);
        *pdVar3 = dVar11;
        pdVar3[1] = dVar12;
        pdVar3 = (double *)(lVar34 + 0x20 + lVar33);
        *pdVar3 = dVar14;
        pdVar3[1] = dVar13;
        pdVar3 = (double *)(lVar34 + 0x30 + lVar33);
        *pdVar3 = dVar15;
        pdVar3[1] = dVar16;
        pdVar3 = (double *)(lVar34 + 0x40 + lVar33);
        *pdVar3 = dVar19;
        pdVar3[1] = dVar22;
        pdVar3 = (double *)(lVar34 + 0x50 + lVar33);
        *pdVar3 = dVar17;
        pdVar3[1] = dVar18;
        uVar46 = local_178.Rotation.XY.m128d_f64[0]._0_4_;
        uVar48 = local_178.Rotation.XY.m128d_f64[0]._4_4_;
        uVar49 = local_178.Rotation.XY.m128d_f64[1]._0_4_;
        uVar50 = local_178.Rotation.XY.m128d_f64[1]._4_4_;
        uVar51 = local_178.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar52 = local_178.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar53 = local_178.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar54 = local_178.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar55 = local_178.Translation.XY.m128d_f64[0]._0_4_;
        uVar56 = local_178.Translation.XY.m128d_f64[0]._4_4_;
        uVar57 = local_178.Translation.XY.m128d_f64[1]._0_4_;
        uVar58 = local_178.Translation.XY.m128d_f64[1]._4_4_;
        uVar59 = local_178.Translation.ZW.m128d_f64[0]._0_4_;
        uVar60 = local_178.Translation.ZW.m128d_f64[0]._4_4_;
        uVar61 = local_178.Translation.ZW.m128d_f64[1]._0_4_;
        uVar62 = local_178.Translation.ZW.m128d_f64[1]._4_4_;
        uVar63 = local_178.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar64 = local_178.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar65 = local_178.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar66 = local_178.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar67 = local_178.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar68 = local_178.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar69 = local_178.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar70 = local_178.Scale3D.ZW.m128d_f64[1]._4_4_;
        FVar8 = local_res8[0];
        goto LAB_14740bf25;
      }
      local_res10[0] = (FCompactPoseBoneIndex)((int)local_res10[0] + 1);
    } while ((int)local_res10[0] < iVar7);
  }
  return;
}

// MirrorQuat @ 14740c010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __cdecl
FAnimationRuntime::MirrorQuat
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,Type param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)&param_1->X;
  uVar3 = *(uint *)((longlong)&param_1->X + 4);
  uVar5 = *(uint *)&param_1->Y;
  uVar6 = *(uint *)((longlong)&param_1->Y + 4);
  dVar1 = param_1->Z;
  dVar2 = param_1->W;
  *(uint *)&__return_storage_ptr__->X = uVar4;
  *(uint *)((longlong)&__return_storage_ptr__->X + 4) = uVar3;
  *(uint *)&__return_storage_ptr__->Y = uVar5;
  *(uint *)((longlong)&__return_storage_ptr__->Y + 4) = uVar6;
  __return_storage_ptr__->Z = dVar1;
  __return_storage_ptr__->W = dVar2;
  if (param_2 == X) {
    uVar4 = *(uint *)((longlong)&__return_storage_ptr__->Y + 4) ^
            __xmm_80000000000000008000000000000000._4_4_;
    uVar3 = *(uint *)&__return_storage_ptr__->Z ^ _UNK_15066df78;
    uVar5 = *(uint *)((longlong)&__return_storage_ptr__->Z + 4) ^ _UNK_15066df7c;
    *(uint *)&__return_storage_ptr__->Y =
         *(uint *)&__return_storage_ptr__->Y ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->Y + 4) = uVar4;
    *(uint *)&__return_storage_ptr__->Z = uVar3;
    *(uint *)((longlong)&__return_storage_ptr__->Z + 4) = uVar5;
  }
  else {
    if (param_2 == Y) {
      __return_storage_ptr__->X =
           (double)CONCAT44((uint)((ulonglong)__return_storage_ptr__->X >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(__return_storage_ptr__->X,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
      __return_storage_ptr__->Z =
           (double)CONCAT44((uint)((ulonglong)__return_storage_ptr__->Z >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(__return_storage_ptr__->Z,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
      return __return_storage_ptr__;
    }
    if (param_2 == Z) {
      uVar3 = uVar3 ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar5 = uVar5 ^ _UNK_15066df78;
      uVar6 = uVar6 ^ _UNK_15066df7c;
      *(uint *)&__return_storage_ptr__->X = uVar4 ^ (uint)__xmm_80000000000000008000000000000000;
      *(uint *)((longlong)&__return_storage_ptr__->X + 4) = uVar3;
      *(uint *)&__return_storage_ptr__->Y = uVar5;
      *(uint *)((longlong)&__return_storage_ptr__->Y + 4) = uVar6;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// MirrorVector @ 14740c080

TVector<double> * __cdecl
FAnimationRuntime::MirrorVector
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,Type param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (param_2 == X) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&__return_storage_ptr__->field0_0x0 >>
                                0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                          (uint)*(undefined8 *)&__return_storage_ptr__->field0_0x0 ^
                          (uint)__xmm_80000000000000008000000000000000);
  }
  else {
    if (param_2 == Y) {
      uVar2 = *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
      return __return_storage_ptr__;
    }
    if (param_2 == Z) {
      uVar2 = *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// NormalizeRotations @ 14740ca00

void __cdecl
FAnimationRuntime::NormalizeRotations
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  iVar13 = param_1->ArrayNum;
  uVar14 = 0;
  if (0 < iVar13) {
    lVar15 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar14 < iVar13) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar14 = uVar14 + 1;
      dVar7 = *(double *)(pFVar1 + lVar15);
      dVar8 = *(double *)(pFVar1 + lVar15 + 8);
      dVar9 = *(double *)(pFVar1 + lVar15 + 0x10);
      dVar10 = *(double *)(pFVar1 + lVar15 + 0x10 + 8);
      auVar24._0_8_ = dVar9 * dVar9 + dVar7 * dVar7;
      auVar24._8_8_ = dVar10 * dVar10 + dVar8 * dVar8;
      auVar20._8_4_ = SUB84(auVar24._8_8_,0);
      auVar20._0_8_ = auVar24._0_8_;
      auVar20._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
      auVar21._0_8_ = auVar20._8_8_ + auVar24._0_8_;
      auVar21._8_8_ = auVar24._0_8_ + auVar24._8_8_;
      auVar25 = sqrtpd(auVar24,auVar21);
      uVar16 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar21._0_8_)
      ;
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar21._8_8_)
      ;
      uVar17 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar21._0_8_)
      ;
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar21._8_8_)
      ;
      auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
      auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
      auVar23._0_8_ = uVar17 & (ulonglong)(auVar22._0_8_ * dVar7);
      uVar6 = uVar19 & (ulonglong)(auVar22._8_8_ * dVar8);
      auVar23._8_4_ = (undefined4)uVar6;
      auVar23._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar26._0_8_ = uVar16 & (ulonglong)(auVar25._0_8_ * dVar9);
      uVar6 = uVar18 & (ulonglong)(auVar25._8_8_ * dVar10);
      auVar26._8_4_ = (undefined4)uVar6;
      auVar26._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar25._4_4_ =
           ~(uint)(uVar17 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar25._0_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar25._8_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar25._12_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar12 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar3 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar1 + lVar15) = auVar23 | auVar25;
      auVar22._4_4_ = ~(uint)(uVar16 >> 0x20) & uVar3;
      auVar22._0_4_ = ~(uint)uVar16 & uVar12;
      auVar22._8_4_ = ~(uint)uVar18 & uVar4;
      auVar22._12_4_ = ~(uint)(uVar18 >> 0x20) & uVar5;
      *(undefined1 (*) [16])(pFVar1 + lVar15 + 0x10) = auVar26 | auVar22;
      iVar13 = param_1->ArrayNum;
      lVar15 = lVar15 + 0x60;
    } while ((int)uVar14 < iVar13);
  }
  return;
}

// NormalizeRotations @ 14740cb30

void __cdecl
FAnimationRuntime::NormalizeRotations
          (FBoneContainer *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  if ((param_2->ArrayNum != (param_1->RefSkeleton->FinalRefBoneInfo).ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Atoms.Num() == RequiredBones.GetNumBones()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0x72,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar15 = (param_1->BoneIndicesArray).ArrayNum;
  uVar16 = 0;
  if (0 < iVar15) {
    lVar17 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar16 < iVar15) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(ushort *)((param_1->BoneIndicesArray).AllocatorInstance.Data + lVar17);
      if ((param_2->ArrayNum <= (int)(uint)uVar1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 2;
      lVar14 = (ulonglong)uVar1 * 0x60;
      dVar8 = *(double *)(pFVar2 + lVar14);
      dVar9 = *(double *)(pFVar2 + lVar14 + 8);
      dVar10 = *(double *)(pFVar2 + lVar14 + 0x10);
      dVar11 = *(double *)(pFVar2 + lVar14 + 0x10 + 8);
      auVar26._0_8_ = dVar10 * dVar10 + dVar8 * dVar8;
      auVar26._8_8_ = dVar11 * dVar11 + dVar9 * dVar9;
      auVar22._8_4_ = SUB84(auVar26._8_8_,0);
      auVar22._0_8_ = auVar26._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
      auVar23._0_8_ = auVar22._8_8_ + auVar26._0_8_;
      auVar23._8_8_ = auVar26._0_8_ + auVar26._8_8_;
      auVar27 = sqrtpd(auVar26,auVar23);
      uVar18 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar23._0_8_)
      ;
      uVar20 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar23._8_8_)
      ;
      uVar19 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar23._0_8_)
      ;
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar23._8_8_)
      ;
      auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
      auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
      auVar25._0_8_ = uVar19 & (ulonglong)(auVar24._0_8_ * dVar8);
      uVar7 = uVar21 & (ulonglong)(auVar24._8_8_ * dVar9);
      auVar25._8_4_ = (undefined4)uVar7;
      auVar25._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar28._0_8_ = uVar18 & (ulonglong)(auVar27._0_8_ * dVar10);
      uVar7 = uVar20 & (ulonglong)(auVar27._8_8_ * dVar11);
      auVar28._8_4_ = (undefined4)uVar7;
      auVar28._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar27._4_4_ =
           ~(uint)(uVar19 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar27._0_4_ = ~(uint)uVar19 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar27._8_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar27._12_4_ =
           ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar13 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar2 + lVar14) = auVar25 | auVar27;
      auVar24._4_4_ = ~(uint)(uVar18 >> 0x20) & uVar4;
      auVar24._0_4_ = ~(uint)uVar18 & uVar13;
      auVar24._8_4_ = ~(uint)uVar20 & uVar5;
      auVar24._12_4_ = ~(uint)(uVar20 >> 0x20) & uVar6;
      *(undefined1 (*) [16])(pFVar2 + lVar14 + 0x10) = auVar28 | auVar24;
      iVar15 = (param_1->BoneIndicesArray).ArrayNum;
    } while ((int)uVar16 < iVar15);
  }
  return;
}

// RetargetBoneTransform @ 14740fe10

void __cdecl
FAnimationRuntime::RetargetBoneTransform
          (USkeleton *param_1,FName *param_2,TTransform<double> *param_3,int param_4,
          FCompactPoseBoneIndex *param_5,FBoneContainer *param_6,bool param_7)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (param_1 != (USkeleton *)0x0) {
    pTVar1 = USkeleton::GetRefLocalPoses(param_1,*param_2);
    RetargetBoneTransform(param_1,param_2,pTVar1,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// RetargetBoneTransform @ 14740fe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimationRuntime::RetargetBoneTransform
          (USkeleton *param_1,FName *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TTransform<double> *param_4,int param_5,FCompactPoseBoneIndex *param_6,
          FBoneContainer *param_7,bool param_8)

{
  FScriptContainerElement *pFVar1;
  FCompactPoseBoneIndex FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  Type TVar31;
  USkeleton *this;
  FSkeletonRemappingRegistry *this_00;
  FSkeletonRemapping *this_01;
  TTransform<double> *pTVar32;
  FRetargetSourceCachedData *pFVar33;
  TVector<double> *pTVar34;
  TTransform<double> *pTVar35;
  FName this_02;
  uint uVar36;
  USkeleton *this_03;
  longlong lVar37;
  TQuat<double> *this_04;
  uint uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  double dVar61;
  double dVar62;
  TVector<double>_u_0 local_3a8;
  TTransform<double> local_388;
  undefined1 local_328 [8];
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  TVector<double>_u_0 local_2d8 [4];
  TVector<double> local_270 [11];
  TTransform<double> local_168;
  TTransform<double> local_108 [2];
  
  if ((param_3->ArrayNum == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!RetargetTransforms.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0xb4f,L""), bVar28)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 != (USkeleton *)0x0) {
    this = (USkeleton *)FWeakObjectPtr::Get(&(param_7->AssetSkeleton).WeakPtr);
    this_00 = UE::Anim::FSkeletonRemappingRegistry::Get();
    this_01 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping(this_00,param_1,this);
    iVar29 = FBoneContainer::GetSkeletonIndex(param_7,param_6);
    bVar28 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
    if ((((bVar28) && (bVar28 = FWeakObjectPtr::IsValid(&(this_01->TargetSkeleton).WeakPtr), bVar28)
         ) && (0 < (this_01->RetargetingTable).ArrayNum)) &&
       (iVar30 = FSkeletonRemapping::GetSourceSkeletonBoneIndex(this_01,iVar29), iVar30 != -1)) {
      pTVar32 = FSkeletonRemapping::RetargetBoneTransformToTargetSkeleton
                          (this_01,&local_168,iVar29,param_4);
      dVar51 = (pTVar32->Rotation).XY.m128d_f64[1];
      (param_4->Rotation).XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
      (param_4->Rotation).XY.m128d_f64[1] = dVar51;
      dVar51 = (pTVar32->Rotation).ZW.m128d_f64[1];
      (param_4->Rotation).ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
      (param_4->Rotation).ZW.m128d_f64[1] = dVar51;
      dVar51 = (pTVar32->Translation).XY.m128d_f64[1];
      (param_4->Translation).XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
      (param_4->Translation).XY.m128d_f64[1] = dVar51;
      dVar51 = (pTVar32->Translation).ZW.m128d_f64[1];
      (param_4->Translation).ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
      (param_4->Translation).ZW.m128d_f64[1] = dVar51;
      dVar51 = (pTVar32->Scale3D).XY.m128d_f64[1];
      (param_4->Scale3D).XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
      (param_4->Scale3D).XY.m128d_f64[1] = dVar51;
      dVar51 = (pTVar32->Scale3D).ZW.m128d_f64[1];
      (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
      (param_4->Scale3D).ZW.m128d_f64[1] = dVar51;
      param_5 = iVar30;
    }
    bVar28 = USkeleton::GetUseRetargetModesFromCompatibleSkeleton(this);
    this_03 = this;
    iVar30 = iVar29;
    if ((bVar28) && (param_5 != -1)) {
      this_03 = param_1;
      iVar30 = param_5;
    }
    TVar31 = USkeleton::GetBoneTranslationRetargetingMode
                       (this_03,iVar30,param_7->bDisableRetargeting);
    uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (TVar31 == Skeleton) {
      if (param_8) {
        (param_4->Translation).XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (param_4->Translation).XY.m128d_f64[1] = (double)uVar26;
        (param_4->Translation).ZW.m128d_f64[0] = (double)uVar27;
        (param_4->Translation).ZW.m128d_f64[1] = 0.0;
      }
      else {
        pTVar32 = FBoneContainer::GetRefPoseTransform(param_7,param_6);
        dVar51 = (pTVar32->Translation).ZW.m128d_f64[0];
        dVar57 = (pTVar32->Translation).XY.m128d_f64[1];
        (param_4->Translation).XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
        (param_4->Translation).XY.m128d_f64[1] = dVar57;
        (param_4->Translation).ZW.m128d_f64[0] = dVar51;
        (param_4->Translation).ZW.m128d_f64[1] = 0.0;
      }
    }
    else if (TVar31 == AnimationScaled) {
      if ((-1 < param_5) && (param_5 < param_3->ArrayNum)) {
        if ((param_5 < 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_3->AllocatorInstance).Data;
        pFVar1 = pFVar3 + (longlong)param_5 * 0x60 + 0x20;
        dVar51 = *(double *)pFVar1;
        dVar57 = *(double *)(pFVar1 + 8);
        dVar43 = *(double *)(pFVar3 + (longlong)param_5 * 0x60 + 0x30);
        fVar60 = (float)SQRT(dVar51 * dVar51 + dVar57 * dVar57 + dVar43 * dVar43);
        if (__real_38d1b717 < fVar60) {
          pTVar32 = FBoneContainer::GetRefPoseTransform(param_7,param_6);
          dVar51 = (pTVar32->Translation).XY.m128d_f64[0];
          dVar57 = (pTVar32->Translation).XY.m128d_f64[1];
          dVar43 = (pTVar32->Translation).ZW.m128d_f64[0];
          dVar52 = (double)((float)SQRT(dVar51 * dVar51 + dVar57 * dVar57 + dVar43 * dVar43) /
                           fVar60);
          dVar57 = (param_4->Translation).ZW.m128d_f64[0];
          dVar51 = (param_4->Translation).ZW.m128d_f64[1] * 0.0;
          dVar43 = (param_4->Translation).XY.m128d_f64[1];
          (param_4->Translation).XY.m128d_f64[0] = dVar52 * (param_4->Translation).XY.m128d_f64[0];
          (param_4->Translation).XY.m128d_f64[1] = dVar52 * dVar43;
          auVar49._8_4_ = SUB84(dVar51,0);
          auVar49._0_8_ = dVar52 * dVar57;
          auVar49._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          *(undefined1 (*) [16])(param_4->Translation).ZW.m128d_f64 = auVar49;
        }
      }
    }
    else if (TVar31 == AnimationRelative) {
      if (!param_8) {
        pTVar32 = FBoneContainer::GetRefPoseTransform(param_7,param_6);
        if ((param_5 < 0) || (param_3->ArrayNum <= param_5)) {
          if (bLogOnce != false) {
            if (1 < (byte)LogAnimation._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_2f0,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_1,&local_300,(UObject *)0x0,None);
              ::FName::ToString(param_2,&local_310);
              this_02 = FReferenceSkeleton::GetBoneName(&param_1->ReferenceSkeleton,(int)local_328);
              ::FName::ToString((FName *)this_02,&local_320);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_320.Data.AllocatorInstance.Data);
              }
              if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_310.Data.AllocatorInstance.Data);
              }
              if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_300.Data.AllocatorInstance.Data);
              }
              if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
              }
            }
            bLogOnce = false;
          }
        }
        else {
          if ((param_5 < 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          lVar37 = (longlong)param_5 * 0x60;
          local_388.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar37 + 0x20);
          local_388.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar37 + 0x20 + 8);
          local_388.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar37 + 0x30);
          local_388.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar37 + 0x30 + 8);
          pFVar1 = pFVar3 + lVar37;
          local_388.Rotation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)pFVar1;
          local_388.Rotation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar1 + 4);
          local_388.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar1 + 8);
          local_388.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar1 + 0xc);
          pFVar1 = pFVar3 + lVar37 + 0x10;
          local_388.Rotation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)pFVar1;
          local_388.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar1 + 4);
          local_388.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar1 + 8);
          local_388.Rotation.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar1 + 0xc);
          local_388.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar37 + 0x40);
          local_388.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar37 + 0x40 + 8);
          local_388.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar37 + 0x50);
          local_388.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar37 + 0x50 + 8);
          if (0 < (this_01->RetargetingTable).ArrayNum) {
            pTVar35 = FSkeletonRemapping::RetargetBoneTransformToTargetSkeleton
                                (this_01,local_108,iVar29,&local_388);
            local_388.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
            local_388.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
            local_388.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
            local_388.Rotation.XY.m128d_f64[0]._0_4_ =
                 *(undefined4 *)(pTVar35->Rotation).XY.m128d_f64;
            local_388.Rotation.XY.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar35->Rotation).XY.m128d_f64 + 4);
            local_388.Rotation.XY.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar35->Rotation).XY.m128d_f64 + 1);
            local_388.Rotation.XY.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar35->Rotation).XY.m128d_f64 + 0xc);
            local_388.Rotation.ZW.m128d_f64[0]._0_4_ =
                 *(undefined4 *)(pTVar35->Rotation).ZW.m128d_f64;
            local_388.Rotation.ZW.m128d_f64[0]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar35->Rotation).ZW.m128d_f64 + 4);
            local_388.Rotation.ZW.m128d_f64[1]._0_4_ =
                 *(undefined4 *)((pTVar35->Rotation).ZW.m128d_f64 + 1);
            local_388.Rotation.ZW.m128d_f64[1]._4_4_ =
                 *(undefined4 *)((longlong)(pTVar35->Rotation).ZW.m128d_f64 + 0xc);
            local_388.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
            local_388.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
            local_388.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
          }
          dVar9 = (double)CONCAT44(local_388.Rotation.XY.m128d_f64[0]._4_4_,
                                   local_388.Rotation.XY.m128d_f64[0]._0_4_) *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar10 = (double)CONCAT44(local_388.Rotation.XY.m128d_f64[1]._4_4_,
                                    local_388.Rotation.XY.m128d_f64[1]._0_4_) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar13 = (double)CONCAT44(local_388.Rotation.ZW.m128d_f64[0]._4_4_,
                                    local_388.Rotation.ZW.m128d_f64[0]._0_4_) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar14 = (double)CONCAT44(local_388.Rotation.ZW.m128d_f64[1]._4_4_,
                                    local_388.Rotation.ZW.m128d_f64[1]._0_4_) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar22 = (param_4->Rotation).XY.m128d_f64[0];
          dVar23 = (param_4->Rotation).XY.m128d_f64[1];
          auVar53._8_4_ = SUB84(dVar10,0);
          auVar53._0_8_ = dVar9;
          auVar53._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar49 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
          auVar58._8_4_ = SUB84(dVar14,0);
          auVar58._0_8_ = dVar13;
          auVar58._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          dVar61 = auVar49._0_8_;
          dVar62 = auVar49._8_8_;
          auVar44._8_4_ = auVar49._8_4_;
          auVar44._0_8_ = dVar62;
          auVar44._12_4_ = auVar49._12_4_;
          dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
          dVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
          dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar18 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          auVar45._8_4_ = auVar49._0_4_;
          auVar45._0_8_ = dVar61;
          auVar45._12_4_ = auVar49._4_4_;
          dVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar19 = dVar22 * auVar58._8_8_ *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar62 * dVar9
                   + dVar23 * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dVar61 * auVar53._8_8_ *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar20 = dVar22 * dVar13 * dVar51 + auVar44._8_8_ * dVar10 + dVar23 * dVar14 * dVar57 +
                   auVar45._8_8_ * dVar9 * dVar43;
          auVar54._8_4_ = SUB84(dVar19,0);
          auVar54._0_8_ = dVar19;
          auVar54._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          dVar24 = (pTVar32->Rotation).ZW.m128d_f64[0];
          dVar25 = (pTVar32->Rotation).ZW.m128d_f64[1];
          dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar52 = dVar22 * auVar53._8_8_ * dVar17 + dVar62 * dVar13 + dVar23 * dVar9 * dVar15 +
                   dVar61 * auVar58._8_8_ * dVar11;
          dVar9 = dVar22 * dVar9 * dVar18 + dVar62 * dVar14 + dVar23 * dVar10 * dVar16 +
                  dVar61 * dVar13 * dVar12;
          dVar10 = (pTVar32->Rotation).XY.m128d_f64[0];
          dVar13 = (pTVar32->Rotation).XY.m128d_f64[1];
          auVar46._8_4_ = SUB84(dVar9,0);
          auVar46._0_8_ = dVar9;
          auVar46._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          (param_4->Rotation).XY.m128d_f64[0] =
               dVar19 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar9 * dVar10 +
               dVar20 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar52 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          (param_4->Rotation).XY.m128d_f64[1] =
               auVar54._8_8_ * dVar24 * dVar51 + auVar46._8_8_ * dVar13 + dVar20 * dVar25 * dVar57 +
               dVar52 * dVar10 * dVar43;
          dVar51 = dVar19 * dVar10 * dVar18 + dVar9 * dVar25 + dVar20 * dVar13 * dVar16 +
                   dVar52 * dVar24 * dVar12;
          auVar8._8_4_ = SUB84(dVar51,0);
          auVar8._0_8_ = dVar19 * dVar13 * dVar17 + dVar9 * dVar24 + dVar20 * dVar10 * dVar15 +
                         dVar52 * dVar25 * dVar11;
          auVar8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64 = auVar8;
          dVar51 = (pTVar32->Translation).ZW.m128d_f64[0];
          dVar57 = ((pTVar32->Translation).XY.m128d_f64[1] - local_388.Translation.XY.m128d_f64[1])
                   + (param_4->Translation).XY.m128d_f64[1];
          auVar56._8_4_ = SUB84(dVar57,0);
          auVar56._0_8_ =
               ((pTVar32->Translation).XY.m128d_f64[0] - local_388.Translation.XY.m128d_f64[0]) +
               (param_4->Translation).XY.m128d_f64[0];
          auVar56._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
          *(undefined1 (*) [16])(param_4->Translation).XY.m128d_f64 = auVar56;
          (param_4->Translation).ZW.m128d_f64[0] =
               (dVar51 - local_388.Translation.ZW.m128d_f64[0]) +
               (param_4->Translation).ZW.m128d_f64[0];
          (param_4->Translation).ZW.m128d_f64[1] = 0.0;
          dVar57 = (pTVar32->Scale3D).ZW.m128d_f64[0];
          dVar51 = 0.0;
          if (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)local_388.Scale3D.XY.m128d_f64[0] >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_388.Scale3D.XY.m128d_f64[0],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            local_388.Scale3D.XY.m128d_f64[0] =
                 __real_3ff0000000000000 / local_388.Scale3D.XY.m128d_f64[0];
          }
          else {
            local_388.Scale3D.XY.m128d_f64[0] = 0.0;
          }
          if (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)local_388.Scale3D.XY.m128d_f64[1] >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_388.Scale3D.XY.m128d_f64[1],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            local_388.Scale3D.XY.m128d_f64[1] =
                 __real_3ff0000000000000 / local_388.Scale3D.XY.m128d_f64[1];
          }
          else {
            local_388.Scale3D.XY.m128d_f64[1] = 0.0;
          }
          if (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)local_388.Scale3D.ZW.m128d_f64[0] >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_388.Scale3D.ZW.m128d_f64[0],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            dVar51 = __real_3ff0000000000000 / local_388.Scale3D.ZW.m128d_f64[0];
          }
          auVar55._0_8_ =
               (pTVar32->Scale3D).XY.m128d_f64[1] * local_388.Scale3D.XY.m128d_f64[1] *
               (param_4->Scale3D).XY.m128d_f64[1];
          auVar55._8_8_ = 0;
          auVar6._8_4_ = SUB84(auVar55._0_8_,0);
          auVar6._0_8_ = local_388.Scale3D.XY.m128d_f64[0] * (pTVar32->Scale3D).XY.m128d_f64[0] *
                         (param_4->Scale3D).XY.m128d_f64[0];
          auVar6._12_4_ = (int)((ulonglong)auVar55._0_8_ >> 0x20);
          *(undefined1 (*) [16])(param_4->Scale3D).XY.m128d_f64 = auVar6;
          (param_4->Scale3D).ZW.m128d_f64[0] = dVar57 * dVar51 * (param_4->Scale3D).ZW.m128d_f64[0];
          (param_4->Scale3D).ZW.m128d_f64[1] = 0.0;
          dVar43 = (param_4->Rotation).XY.m128d_f64[0];
          dVar52 = (param_4->Rotation).XY.m128d_f64[1];
          dVar9 = (param_4->Rotation).ZW.m128d_f64[0];
          dVar10 = (param_4->Rotation).ZW.m128d_f64[1];
          dVar51 = dVar9 * dVar9 + dVar43 * dVar43;
          dVar57 = dVar10 * dVar10 + dVar52 * dVar52;
          auVar47._8_4_ = SUB84(dVar57,0);
          auVar47._0_8_ = dVar51;
          auVar47._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
          auVar48._0_8_ = auVar47._8_8_ + dVar51;
          auVar48._8_8_ = dVar51 + dVar57;
          auVar56 = sqrtpd(auVar55,auVar48);
          uVar39 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar48._0_8_);
          uVar41 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar48._8_8_);
          uVar40 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar48._0_8_);
          uVar42 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar48._8_8_);
          auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar56);
          auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar56);
          auVar50._0_8_ = uVar40 & (ulonglong)(auVar49._0_8_ * dVar43);
          uVar21 = uVar42 & (ulonglong)(auVar49._8_8_ * dVar52);
          auVar50._8_4_ = (undefined4)uVar21;
          auVar50._12_4_ = (undefined4)(uVar21 >> 0x20);
          auVar59._0_8_ = uVar39 & (ulonglong)(auVar56._0_8_ * dVar9);
          uVar21 = uVar41 & (ulonglong)(auVar56._8_8_ * dVar10);
          auVar59._8_4_ = (undefined4)uVar21;
          auVar59._12_4_ = (undefined4)(uVar21 >> 0x20);
          auVar7._4_4_ = ~(uint)(uVar40 >> 0x20) &
                         GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar7._0_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar7._8_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar7._12_4_ =
               ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar5._4_4_ = ~(uint)(uVar39 >> 0x20) &
                         GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar5._0_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar5._8_4_ = ~(uint)uVar41 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar5._12_4_ =
               ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64 = auVar50 | auVar7;
          *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64 = auVar59 | auVar5;
        }
      }
    }
    else if ((((TVar31 == OrientAndScale) && (!param_8)) &&
             (pFVar33 = FBoneContainer::GetRetargetSourceCachedData(param_7,param_2,this_01,param_3)
             , 0 < (pFVar33->OrientAndScaleData).ArrayNum)) &&
            (iVar29 = (pFVar33->CompactPoseIndexToOrientAndScaleIndex).ArrayNum,
            iVar29 == (param_7->BoneIndicesArray).ArrayNum)) {
      FVar2 = *param_6;
      uVar36 = 0;
      if ((int)FVar2 < iVar29) {
        uVar36 = ~(uint)FVar2 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar36 = *(uint *)((pFVar33->CompactPoseIndexToOrientAndScaleIndex).AllocatorInstance.Data +
                        (longlong)(int)FVar2 * 4);
      if (uVar36 != 0xffffffff) {
        uVar38 = 0;
        if ((int)uVar36 < (pFVar33->OrientAndScaleData).ArrayNum) {
          uVar38 = ~uVar36 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar57 = (param_4->Translation).XY.m128d_f64[0];
        dVar43 = (param_4->Translation).XY.m128d_f64[1];
        dVar51 = (param_4->Translation).ZW.m128d_f64[0];
        this_04 = (TQuat<double> *)
                  ((pFVar33->OrientAndScaleData).AllocatorInstance.Data +
                  (longlong)(int)uVar36 * 0x60);
        local_3a8._s_0.X = dVar57 - this_04[1].Y;
        local_3a8._s_0.Y = dVar43 - this_04[1].Z;
        local_3a8._s_0.Z = dVar51 - this_04[1].W;
        bVar28 = UE::Math::TVector<double>::IsNearlyZero
                           ((TVector<double> *)&local_3a8._s_0,__real_3f50624de0000000);
        if (bVar28) {
          dVar57 = this_04[2].X;
          dVar43 = this_04[2].Y;
          dVar51 = this_04[2].Z;
        }
        else {
          local_2d8[0]._0_8_ = dVar57;
          local_2d8[0]._8_8_ = dVar43;
          local_2d8[0]._16_8_ = dVar51;
          pTVar34 = UE::Math::TQuat<double>::RotateVector
                              (this_04,local_270,(TVector<double> *)&local_2d8[0]._s_0);
          dVar51 = (double)*(float *)&this_04[1].X;
          dVar57 = dVar51 * (pTVar34->field0_0x0)._s_0.X;
          dVar43 = dVar51 * (pTVar34->field0_0x0)._s_0.Y;
          dVar51 = dVar51 * (pTVar34->field0_0x0)._s_0.Z;
        }
        (param_4->Translation).XY.m128d_f64[0] = dVar57;
        (param_4->Translation).XY.m128d_f64[1] = dVar43;
        (param_4->Translation).ZW.m128d_f64[0] = dVar51;
        (param_4->Translation).ZW.m128d_f64[1] = 0.0;
      }
    }
  }
  return;
}

// SetSpaceTransform @ 1474196c0

void __cdecl
FAnimationRuntime::SetSpaceTransform(FA2CSPose *param_1,int param_2,TTransform<double> *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  longlong lVar20;
  uint uVar21;
  
  if (((param_2 < 0) || ((int)param_1->_padding_ <= param_2)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bones.IsValidIndex(BoneIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0xc04,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar9 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar11 = (param_3->Translation).XY.m128d_f64[0];
  dVar12 = (param_3->Translation).XY.m128d_f64[1];
  uVar5 = *(undefined4 *)(param_3->Rotation).XY.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_3->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 0xc);
  dVar13 = (param_3->Translation).ZW.m128d_f64[0];
  dVar14 = (param_3->Translation).ZW.m128d_f64[1];
  dVar15 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar16 = (param_3->Scale3D).ZW.m128d_f64[1];
  dVar17 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar18 = (param_3->Scale3D).XY.m128d_f64[1];
  uVar21 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar21 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = param_1->_padding_;
  lVar20 = (longlong)param_2 * 0x60;
  puVar1 = (undefined4 *)(lVar20 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  pdVar2 = (double *)(lVar20 + 0x10 + lVar3);
  *pdVar2 = dVar9;
  pdVar2[1] = dVar10;
  pdVar2 = (double *)(lVar20 + 0x20 + lVar3);
  *pdVar2 = dVar11;
  pdVar2[1] = dVar12;
  pdVar2 = (double *)(lVar20 + 0x30 + lVar3);
  *pdVar2 = dVar13;
  pdVar2[1] = dVar14;
  pdVar2 = (double *)(lVar20 + 0x40 + lVar3);
  *pdVar2 = dVar17;
  pdVar2[1] = dVar18;
  pdVar2 = (double *)(lVar20 + 0x50 + lVar3);
  *pdVar2 = dVar15;
  pdVar2[1] = dVar16;
  uVar21 = 0;
  if (param_2 < (param_1->ComponentSpaceFlags).ArrayNum) {
    uVar21 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_1->ComponentSpaceFlags).AllocatorInstance.Data[param_2] = (FScriptContainerElement)0x1;
  return;
}

// SetSpaceTransform @ 147419860

void __cdecl
FAnimationRuntime::SetSpaceTransform(FA2Pose *param_1,int param_2,TTransform<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  
  uVar4 = *(undefined4 *)(param_3->Rotation).XY.m128d_f64;
  uVar5 = *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 4);
  uVar6 = *(undefined4 *)((param_3->Rotation).XY.m128d_f64 + 1);
  uVar7 = *(undefined4 *)((longlong)(param_3->Rotation).XY.m128d_f64 + 0xc);
  dVar8 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar9 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar10 = (param_3->Translation).XY.m128d_f64[0];
  dVar11 = (param_3->Translation).XY.m128d_f64[1];
  dVar12 = (param_3->Translation).ZW.m128d_f64[0];
  dVar13 = (param_3->Translation).ZW.m128d_f64[1];
  dVar14 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar15 = (param_3->Scale3D).XY.m128d_f64[1];
  dVar16 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar17 = (param_3->Scale3D).ZW.m128d_f64[1];
  uVar19 = 0;
  if (param_2 < (param_1->Bones).ArrayNum) {
    uVar19 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->Bones).AllocatorInstance.Data;
  lVar20 = (longlong)param_2 * 0x60;
  pFVar1 = pFVar2 + lVar20;
  *(undefined4 *)pFVar1 = uVar4;
  *(undefined4 *)(pFVar1 + 4) = uVar5;
  *(undefined4 *)(pFVar1 + 8) = uVar6;
  *(undefined4 *)(pFVar1 + 0xc) = uVar7;
  *(double *)(pFVar2 + lVar20 + 0x10) = dVar8;
  *(double *)(pFVar2 + lVar20 + 0x10 + 8) = dVar9;
  *(double *)(pFVar2 + lVar20 + 0x20) = dVar10;
  *(double *)(pFVar2 + lVar20 + 0x20 + 8) = dVar11;
  *(double *)(pFVar2 + lVar20 + 0x30) = dVar12;
  *(double *)(pFVar2 + lVar20 + 0x30 + 8) = dVar13;
  *(double *)(pFVar2 + lVar20 + 0x40) = dVar14;
  *(double *)(pFVar2 + lVar20 + 0x40 + 8) = dVar15;
  *(double *)(pFVar2 + lVar20 + 0x50) = dVar16;
  *(double *)(pFVar2 + lVar20 + 0x50 + 8) = dVar17;
  return;
}

// TickBlendWeight @ 14741a3a0

void __cdecl
FAnimationRuntime::TickBlendWeight(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_3;
  if (param_2 != fVar2) {
    if (*param_4 == 0.0) {
      *param_3 = param_2;
      return;
    }
    fVar1 = (param_2 - fVar2) / *param_4;
    fVar2 = fVar1 * param_1 + fVar2;
    if (0.0 < fVar1) {
      if (param_2 <= fVar2) {
        fVar2 = param_2;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      *param_3 = fVar2;
      *param_4 = *param_4 - param_1;
      return;
    }
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= param_2) {
      fVar2 = param_2;
    }
    *param_3 = fVar2;
    *param_4 = *param_4 - param_1;
  }
  return;
}

// UpdateDesiredBoneWeight @ 14741af00

void __cdecl
FAnimationRuntime::UpdateDesiredBoneWeight
          (TArrayView<FPerBoneBlendWeight,int> *param_1,TArrayView<FPerBoneBlendWeight,int> *param_2
          ,TArrayView<float,int> *param_3)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5749056009096136451>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0x703,"TargetBoneBlendWeights.Num() == SrcBoneBlendWeights.Num()"), bVar4)
     ) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  memset(param_2->DataPtr,0,(longlong)param_2->ArrayNum << 3);
  fVar3 = __real_3727c5ac;
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)((longlong)&param_1->DataPtr->SourceIndex + lVar10);
      if ((param_3->ArrayNum <= (int)uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PoseIndex < BlendWeights.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                             ,0x70a,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar5 < param_3->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pfVar1 = param_3->DataPtr;
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar11 = *(float *)((longlong)&param_1->DataPtr->BlendWeight + lVar10) * pfVar1[(int)uVar5];
      if (fVar3 < fVar11) {
        uVar6 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        *(uint *)((longlong)&param_2->DataPtr->SourceIndex + lVar10) = uVar5;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)((longlong)&param_2->DataPtr->BlendWeight + lVar10) = fVar11;
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

