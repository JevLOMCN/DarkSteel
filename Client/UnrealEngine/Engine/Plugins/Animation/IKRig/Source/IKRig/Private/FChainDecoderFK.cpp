// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 14

// ~FChainDecoderFK @ 14df1b8e0

void __thiscall FChainDecoderFK::~FChainDecoderFK(FChainDecoderFK *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IntermediateLocalTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IntermediateParentIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedData).TargetRefPoseLengths.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedData).SourceRefPoseLengths.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedData).FromToGlobalRotationDeltas.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedData).SourceBoneIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14df1f800

TVector<double> * __thiscall
`FChainDecoderFK::GetPointOnSplineDistanceFromPoint'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  TVector<double>_u_0 local_98 [6];
  
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar12 = ((param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) * dVar2 +
           ((param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) * dVar3 +
           ((param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) * dVar1;
  dVar7 = dVar12 * dVar3 + (param_1->field0_0x0)._s_0.X;
  dVar8 = dVar12 * dVar2 + (param_1->field0_0x0)._s_0.Y;
  dVar6 = dVar12 * dVar1 + (param_1->field0_0x0)._s_0.Z;
  dVar12 = dVar7 - (param_3->field0_0x0)._s_0.X;
  dVar14 = dVar8 - (param_3->field0_0x0)._s_0.Y;
  dVar11 = dVar6 - (param_3->field0_0x0)._s_0.Z;
  auVar13._0_8_ = dVar11 * dVar11;
  auVar13._8_8_ = 0;
  auVar15._0_8_ = dVar14 * dVar14 + dVar12 * dVar12 + auVar13._0_8_;
  auVar15._8_8_ = 0;
  auVar13 = sqrtpd(auVar13,auVar15);
  if (auVar13._0_8_ < param_4) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_4 * param_4 - auVar15._0_8_;
    auVar13 = sqrtpd(auVar15,auVar5);
    dVar12 = auVar13._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar3 + dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar12 * dVar2 + dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12 * dVar1 + dVar6;
  }
  else {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7246723178364403034>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                       ,0x2a6,"DistancePointToRay < TargetDistanceFromPointToRay");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar4)();
      return pTVar10;
    }
    dVar1 = (param_1->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_98[0]._16_8_ = (param_1->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_98[0]._8_4_ = SUB84(dVar1,0);
    local_98[0]._0_8_ = (param_1->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_98[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    UE::Math::TVector<double>::GetClampedToMaxSize
              ((TVector<double> *)&local_98[0]._s_0,__return_storage_ptr__,param_4);
  }
  return __return_storage_ptr__;
}

// BlendByAlpha @ 14df26bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChainDecoderFK::BlendByAlpha
          (FChainDecoderFK *this,FRetargetFKChainSettings *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FTargetSkeleton *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  int iVar2;
  FResolvedBoneChain *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  ulonglong uVar13;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  FTargetSkeleton *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  TTransform<double> *pTVar25;
  longlong lVar26;
  FResolvedBoneChain *pFVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  FRetargetFKChainSettings *local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1c0;
  FTargetSkeleton *local_1b8;
  TTransform<double> *local_1b0;
  FChainDecoderFK *local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  dVar16 = __real_3ff0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  dVar6 = param_1->TranslationAlpha - __real_3ff0000000000000;
  uVar32 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar34 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar6 = param_1->RotationAlpha - __real_3ff0000000000000;
  uVar33 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar35 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar35,uVar33) &&
       (double)CONCAT44(uVar35,uVar33) != __real_3e45798ee2308c3a) ||
     (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar34,uVar32) &&
      (double)CONCAT44(uVar34,uVar32) != __real_3e45798ee2308c3a)) {
    local_1c8 = param_1;
    local_1c0 = param_2;
    local_1b8 = param_3;
    local_1a8 = this;
    FResolvedBoneChain::FillTransformsWithLocalSpaceOfChain
              ((FRetargetSkeleton *)param_3,param_4,param_2,&this->BoneChain->CurrentLocalTransforms
              );
    dVar17 = __real_bff0000000000000;
    dVar6 = __real_3e45798ee0000000;
    pFVar27 = this->BoneChain;
    uVar32 = 0;
    if (0 < (pFVar27->RefPoseLocalTransforms).ArrayNum) {
      lVar29 = 0;
      lVar28 = 0;
      uVar33 = (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      do {
        iVar2 = (pFVar27->CurrentLocalTransforms).ArrayNum;
        uVar35 = ~uVar32 >> 0x1f;
        uVar34 = 0;
        if ((int)uVar32 < iVar2) {
          uVar34 = uVar35;
        }
        if (uVar34 == 0) {
          local_1d8 = (longlong)(int)uVar32;
          local_1d0 = (longlong)iVar2;
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar3 = this->BoneChain;
        pTVar25 = (TTransform<double> *)
                  ((pFVar27->CurrentLocalTransforms).AllocatorInstance.Data + lVar28);
        iVar2 = (pFVar3->RefPoseLocalTransforms).ArrayNum;
        uVar34 = 0;
        if ((int)uVar32 < iVar2) {
          uVar34 = uVar35;
        }
        local_1b0 = pTVar25;
        if ((uVar34 == 0) &&
           (local_1d8 = lVar29, local_1d0 = (longlong)iVar2,
           bVar24 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar18 = local_1c0;
        pFVar4 = (pFVar3->RefPoseLocalTransforms).AllocatorInstance.Data;
        local_198 = (pTVar25->Translation).XY.m128d_f64[0];
        dStack_190 = (pTVar25->Translation).XY.m128d_f64[1];
        local_188 = (pTVar25->Translation).ZW.m128d_f64[0];
        local_180 = *(double *)(pFVar4 + lVar28 + 0x20);
        dStack_178 = *(double *)(pFVar4 + lVar28 + 0x20 + 8);
        local_170 = *(double *)(pFVar4 + lVar28 + 0x30);
        dVar1 = local_1c8->TranslationAlpha;
        dVar43 = (local_198 - local_180) * dVar1 + local_180;
        local_158 = (local_188 - local_170) * dVar1 + local_170;
        dVar1 = (dStack_190 - dStack_178) * dVar1 + dStack_178;
        uVar48 = SUB84(dVar1,0);
        uVar49 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_168._8_4_ = uVar48;
        local_168._0_8_ = dVar43;
        local_168._12_4_ = uVar49;
        auVar38._8_4_ = uVar48;
        auVar38._0_8_ = dVar43;
        auVar38._12_4_ = uVar49;
        *(undefined1 (*) [16])(pTVar25->Translation).XY.m128d_f64 = auVar38;
        (pTVar25->Translation).ZW.m128d_f64[0] = local_158;
        (pTVar25->Translation).ZW.m128d_f64[1] = 0.0;
        auVar38 = *(undefined1 (*) [16])(pTVar25->Rotation).XY.m128d_f64;
        dVar8 = *(double *)(pFVar4 + lVar28);
        dVar9 = *(double *)(pFVar4 + lVar28 + 8);
        auVar46 = *(undefined1 (*) [16])(pTVar25->Rotation).ZW.m128d_f64;
        auVar11._4_8_ = dStack_190;
        auVar11._0_4_ = auVar38._4_4_;
        auVar44._0_8_ = auVar11._0_8_ << 0x20;
        auVar44._8_4_ = auVar38._8_4_;
        auVar44._12_4_ = auVar38._12_4_;
        dVar41 = *(double *)(pFVar4 + lVar28 + 0x10);
        dVar14 = *(double *)(pFVar4 + lVar28 + 0x10 + 8);
        dVar1 = local_1c8->RotationAlpha;
        auVar12._4_8_ = auVar38._8_8_;
        auVar12._0_4_ = auVar46._4_4_;
        auVar36._0_8_ = auVar12._0_8_ << 0x20;
        auVar36._8_4_ = auVar46._8_4_;
        auVar36._12_4_ = auVar46._12_4_;
        dVar42 = dVar1;
        dVar43 = dVar16;
        if (auVar44._8_8_ * dVar9 + auVar38._0_8_ * dVar8 +
            auVar46._0_8_ * dVar41 + auVar36._8_8_ * dVar14 < 0.0) {
          dVar42 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ (uint)uVar15,
                                    SUB84(dVar1,0) ^ uVar33);
          dVar43 = dVar17;
        }
        auVar45._0_8_ = dVar43 - dVar42;
        auVar45._8_8_ = 0;
        local_1a0 = dVar6;
        dVar42 = auVar45._0_8_ * dVar8 + dVar1 * auVar38._0_8_;
        dVar10 = auVar45._0_8_ * dVar9 + dVar1 * auVar38._8_8_;
        dVar8 = auVar45._0_8_ * dVar41 + dVar1 * auVar46._0_8_;
        dVar9 = auVar45._0_8_ * dVar14 + dVar1 * auVar46._8_8_;
        auVar37._8_4_ = SUB84(dVar9,0);
        auVar37._0_8_ = dVar8;
        auVar37._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar43 = dVar8 * dVar8 + dVar42 * dVar42;
        dVar41 = auVar37._8_8_ * dVar9 + dVar10 * dVar10;
        dVar1 = dVar41 + dVar43;
        dVar43 = dVar43 + dVar41;
        auVar46._8_4_ = SUB84(dVar43,0);
        auVar46._0_8_ = dVar1;
        auVar46._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        auVar46 = sqrtpd(auVar45,auVar46);
        uVar30 = -(ulonglong)(dVar6 <= dVar1);
        uVar31 = -(ulonglong)(dVar6 <= dVar43);
        uVar34 = (uint)(uVar30 >> 0x20);
        uVar50 = (uint)(uVar31 >> 0x20);
        auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
        auVar39._0_8_ = uVar30 & (ulonglong)(auVar38._0_8_ * dVar8);
        uVar13 = uVar31 & (ulonglong)(auVar38._8_8_ * dVar9);
        auVar39._8_4_ = (undefined4)uVar13;
        auVar39._12_4_ = (undefined4)(uVar13 >> 0x20);
        auVar47._0_4_ =
             ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar47._4_4_ =
             ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar47._8_4_ =
             ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar47._12_4_ =
             ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar46);
        auVar40._0_8_ = (ulonglong)(auVar38._0_8_ * dVar42) & uVar30;
        uVar13 = (ulonglong)(auVar38._8_8_ * dVar10) & uVar31;
        auVar40._8_4_ = (undefined4)uVar13;
        auVar40._12_4_ = (undefined4)(uVar13 >> 0x20);
        auVar7._4_4_ = ~uVar34 & (uint)((ulonglong)
                                        (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20
                                       );
        auVar7._0_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
        ;
        auVar7._8_4_ = ~(uint)uVar31 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
        ;
        auVar7._12_4_ =
             ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        *(undefined1 (*) [16])(pTVar25->Rotation).XY.m128d_f64 = auVar40 | auVar7;
        *(undefined1 (*) [16])(pTVar25->Rotation).ZW.m128d_f64 = auVar47 | auVar39;
        uVar34 = 0;
        if ((int)uVar32 < local_1c0->ArrayNum) {
          uVar34 = uVar35;
        }
        if ((uVar34 == 0) &&
           (local_1d8 = lVar29, local_1d0 = (longlong)local_1c0->ArrayNum,
           bVar24 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar19 = local_1b8;
        uVar34 = *(uint *)((pTVar18->AllocatorInstance).Data + lVar29 * 4);
        lVar26 = (longlong)(int)uVar34;
        iVar2 = (int)local_1b8->_padding_;
        uVar35 = 0;
        if ((int)uVar34 < iVar2) {
          uVar35 = ~uVar34 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (local_1d8 = lVar26, local_1d0 = (longlong)iVar2,
           bVar24 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar35 = *(uint *)(pFVar19->_padding_ + lVar26 * 4);
        if (uVar35 == 0xffffffff) {
          pTVar25 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          uVar50 = 0;
          if ((int)uVar35 < param_4->ArrayNum) {
            uVar50 = ~uVar35 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (local_1d8 = (longlong)(int)uVar35, local_1d0 = (longlong)param_4->ArrayNum,
             bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar25 = (TTransform<double> *)
                    ((param_4->AllocatorInstance).Data + (longlong)(int)uVar35 * 0x60);
        }
        local_148.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_148.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_148.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_148.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_148,local_1b0,pTVar25);
        dVar10 = local_148.Scale3D.XY.m128d_f64[1];
        dVar42 = local_148.Scale3D.XY.m128d_f64[0];
        dVar14 = local_148.Translation.XY.m128d_f64[1];
        dVar41 = local_148.Translation.XY.m128d_f64[0];
        dVar1 = local_148.Rotation.XY.m128d_f64[0];
        dVar43 = local_148.Rotation.XY.m128d_f64[1];
        dVar8 = local_148.Rotation.ZW.m128d_f64[0];
        dVar9 = local_148.Rotation.ZW.m128d_f64[1];
        uVar35 = 0;
        if ((int)uVar34 < param_4->ArrayNum) {
          uVar35 = ~uVar34 >> 0x1f;
        }
        dVar20 = local_148.Translation.ZW.m128d_f64[0];
        dVar21 = local_148.Translation.ZW.m128d_f64[1];
        dVar22 = local_148.Scale3D.ZW.m128d_f64[0];
        dVar23 = local_148.Scale3D.ZW.m128d_f64[1];
        if ((uVar35 == 0) &&
           (local_1d8 = lVar26, local_1d0 = (longlong)param_4->ArrayNum,
           bVar24 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar24)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_4->AllocatorInstance).Data;
        lVar26 = lVar26 * 0x60;
        uVar32 = uVar32 + 1;
        lVar29 = lVar29 + 1;
        lVar28 = lVar28 + 0x60;
        *(double *)(pFVar4 + lVar26) = dVar1;
        *(double *)(pFVar4 + lVar26 + 8) = dVar43;
        *(double *)(pFVar4 + lVar26 + 0x10) = dVar8;
        *(double *)(pFVar4 + lVar26 + 0x10 + 8) = dVar9;
        *(double *)(pFVar4 + lVar26 + 0x20) = dVar41;
        *(double *)(pFVar4 + lVar26 + 0x20 + 8) = dVar14;
        *(double *)(pFVar4 + lVar26 + 0x30) = dVar20;
        *(double *)(pFVar4 + lVar26 + 0x30 + 8) = dVar21;
        *(double *)(pFVar4 + lVar26 + 0x40) = dVar42;
        *(double *)(pFVar4 + lVar26 + 0x40 + 8) = dVar10;
        *(double *)(pFVar4 + lVar26 + 0x50) = dVar22;
        *(double *)(pFVar4 + lVar26 + 0x50 + 8) = dVar23;
        pFVar27 = local_1a8->BoneChain;
        this = local_1a8;
      } while ((int)uVar32 < (pFVar27->RefPoseLocalTransforms).ArrayNum);
    }
  }
  return;
}

// DecodePose @ 14df2ebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChainDecoderFK::DecodePose
          (FChainDecoderFK *this,FIKRetargetPelvisMotionOp *param_1,
          FRetargetFKChainSettings *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          FChainEncoderFK *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,
          FRetargetSkeleton *param_6,FTargetSkeleton *param_7,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_8)

{
  EFKChainRotationMode EVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
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
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  TTransform<double> *pTVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_428 [32];
  longlong local_3b0;
  longlong local_398;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_390;
  FRetargetSkeleton *local_380;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_378;
  FIKRetargetPelvisMotionOp *local_370;
  FResolvedBoneChain *local_368;
  double local_360;
  double dStack_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  TQuat<double> local_2f8;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  double local_218;
  double dStack_210;
  double local_208;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_378 = param_5;
  local_380 = param_6;
  local_370 = param_1;
  if ((param_3->ArrayNum != (this->BoneChain->Params).ArrayNum) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetBoneIndices.Num() == BoneChain->Params.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                          ,0x98,L""), bVar25)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar32 = 0;
  uVar31 = 0;
  uVar34 = uVar32;
  uVar35 = uVar32;
  if (0 < (this->IntermediateParentIndices).ArrayNum) {
    do {
      uVar33 = (uint)uVar34;
      uVar26 = uVar31;
      if ((int)uVar33 < (this->IntermediateParentIndices).ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar29 = *(int *)((this->IntermediateParentIndices).AllocatorInstance.Data + uVar35);
      uVar26 = uVar31;
      if ((int)uVar33 < (this->IntermediateLocalTransforms).ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FRetargetSkeleton::UpdateGlobalTransformOfSingleBone
                ((FRetargetSkeleton *)param_7,iVar29,
                 (TTransform<double> *)
                 ((this->IntermediateLocalTransforms).AllocatorInstance.Data +
                 (longlong)(int)uVar33 * 0x60),param_8);
      uVar34 = (ulonglong)(uVar33 + 1);
      uVar35 = uVar35 + 4;
    } while ((int)(uVar33 + 1) < (this->IntermediateParentIndices).ArrayNum);
  }
  UE::Math::TTransform<double>::GetRelativeTransform
            (&param_4->BoneChain->ChainParentInitialGlobalTransform,&local_138,
             &this->BoneChain->ChainParentInitialGlobalTransform);
  uVar26 = this->BoneChain->ChainParentBoneIndex;
  if (uVar26 == 0xffffffff) {
    pTVar28 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    if ((int)uVar26 < param_8->ArrayNum) {
      uVar31 = ~uVar26 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar28 = (TTransform<double> *)
              ((param_8->AllocatorInstance).Data + (longlong)(int)uVar26 * 0x60);
  }
  local_198.Rotation.XY.m128d_f64[0] = (pTVar28->Rotation).XY.m128d_f64[0];
  local_198.Rotation.XY.m128d_f64[1] = (pTVar28->Rotation).XY.m128d_f64[1];
  local_198.Rotation.ZW.m128d_f64[0] = (pTVar28->Rotation).ZW.m128d_f64[0];
  local_198.Rotation.ZW.m128d_f64[1] = (pTVar28->Rotation).ZW.m128d_f64[1];
  local_198.Translation.XY.m128d_f64[0] = (pTVar28->Translation).XY.m128d_f64[0];
  local_198.Translation.XY.m128d_f64[1] = (pTVar28->Translation).XY.m128d_f64[1];
  local_198.Translation.ZW.m128d_f64[0] = (pTVar28->Translation).ZW.m128d_f64[0];
  local_198.Translation.ZW.m128d_f64[1] = (pTVar28->Translation).ZW.m128d_f64[1];
  local_198.Scale3D.XY.m128d_f64[0] = (pTVar28->Scale3D).XY.m128d_f64[0];
  local_198.Scale3D.XY.m128d_f64[1] = (pTVar28->Scale3D).XY.m128d_f64[1];
  local_198.Scale3D.ZW.m128d_f64[0] = (pTVar28->Scale3D).ZW.m128d_f64[0];
  local_198.Scale3D.ZW.m128d_f64[1] = (pTVar28->Scale3D).ZW.m128d_f64[1];
  local_1f8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1f8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1f8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1f8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1f8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1f8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1f8,&local_138,&local_198);
  FChainEncoderFK::TransformCurrentChainTransforms(param_4,&local_1f8);
  uVar31 = 0;
  if (param_2->EnableFK == false) {
    local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_390.ArrayNum = 0;
    local_390.ArrayMax = 0;
    FResolvedBoneChain::FillTransformsWithGlobalRetargetPoseOfChain
              ((FRetargetSkeleton *)param_7,param_8,param_3,&local_390);
    iVar29 = param_3->ArrayNum;
    if (0 < iVar29) {
      local_3b0 = 0;
      uVar34 = uVar32;
      do {
        uVar33 = (uint)uVar32;
        uVar26 = uVar31;
        if ((int)uVar33 < iVar29) {
          uVar26 = ~uVar33 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar26 = *(uint *)((param_3->AllocatorInstance).Data + local_3b0);
        uVar27 = uVar31;
        if ((int)uVar33 < local_390.ArrayNum) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34);
        uVar10 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 8);
        uVar11 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x10);
        uVar12 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x10 + 8);
        uVar13 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x20);
        uVar14 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x20 + 8);
        uVar15 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x30);
        uVar16 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x30 + 8);
        uVar17 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x40);
        uVar18 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x40 + 8);
        uVar19 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x50);
        uVar20 = *(undefined8 *)(local_390.AllocatorInstance.Data + uVar34 + 0x50 + 8);
        uVar27 = uVar31;
        if ((int)uVar26 < param_8->ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_8->AllocatorInstance).Data;
        uVar32 = (ulonglong)(uVar33 + 1);
        lVar30 = (longlong)(int)uVar26 * 0x60;
        local_3b0 = local_3b0 + 4;
        uVar34 = uVar34 + 0x60;
        *(undefined8 *)(pFVar2 + lVar30) = uVar9;
        *(undefined8 *)(pFVar2 + lVar30 + 8) = uVar10;
        *(undefined8 *)(pFVar2 + lVar30 + 0x10) = uVar11;
        *(undefined8 *)(pFVar2 + lVar30 + 0x10 + 8) = uVar12;
        *(undefined8 *)(pFVar2 + lVar30 + 0x20) = uVar13;
        *(undefined8 *)(pFVar2 + lVar30 + 0x20 + 8) = uVar14;
        *(undefined8 *)(pFVar2 + lVar30 + 0x30) = uVar15;
        *(undefined8 *)(pFVar2 + lVar30 + 0x30 + 8) = uVar16;
        *(undefined8 *)(pFVar2 + lVar30 + 0x40) = uVar17;
        *(undefined8 *)(pFVar2 + lVar30 + 0x40 + 8) = uVar18;
        *(undefined8 *)(pFVar2 + lVar30 + 0x50) = uVar19;
        *(undefined8 *)(pFVar2 + lVar30 + 0x50 + 8) = uVar20;
        iVar29 = param_3->ArrayNum;
      } while ((int)(uVar33 + 1) < iVar29);
    }
    if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_390.AllocatorInstance.Data);
    }
  }
  else {
    iVar29 = param_3->ArrayNum;
    if (0 < iVar29) {
      local_398 = 0;
      uVar34 = uVar32;
      do {
        uVar42 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        uVar43 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        uVar33 = (uint)uVar32;
        local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        uVar40 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        uVar41 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        uVar38 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar39 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        uVar36 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar37 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_2d8.Rotation.XY.m128d_f64[1]._0_4_ = uVar42;
        local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar43;
        local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar36;
        local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar37;
        local_278.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar36;
        local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_278.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar37;
        local_2d8.Translation.ZW.m128d_f64[1]._0_4_ = uVar40;
        local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2d8.Translation.ZW.m128d_f64[1]._4_4_ = uVar41;
        local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar38;
        local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar39;
        local_278.Rotation.XY.m128d_f64[1]._0_4_ = uVar42;
        local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_278.Rotation.XY.m128d_f64[1]._4_4_ = uVar43;
        local_278.Translation.ZW.m128d_f64[1]._0_4_ = uVar40;
        local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_278.Translation.ZW.m128d_f64[1]._4_4_ = uVar41;
        local_278.Scale3D.XY.m128d_f64[1]._0_4_ = uVar38;
        local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_278.Scale3D.XY.m128d_f64[1]._4_4_ = uVar39;
        local_278.Rotation.ZW.m128d_f64[0] = local_2d8.Rotation.ZW.m128d_f64[0];
        local_278.Rotation.ZW.m128d_f64[1] = local_2d8.Rotation.ZW.m128d_f64[1];
        local_278.Translation.XY.m128d_f64[0] = local_2d8.Translation.XY.m128d_f64[0];
        local_278.Translation.XY.m128d_f64[1] = local_2d8.Translation.XY.m128d_f64[1];
        RetargetRotation(this,&local_2f8,uVar33,param_2,param_3,param_7,param_8,param_4,&local_2d8,
                         &local_278);
        RetargetPosition(this,(TVector<double> *)&local_330._s_0,uVar33,&local_2f8,local_370,param_2
                         ,param_3,param_4,local_378,local_380,param_7,param_8,&local_2d8);
        local_368 = this->BoneChain;
        local_338 = local_2d8.Scale3D.ZW.m128d_f64[0];
        uVar26 = uVar31;
        if ((int)uVar33 < (local_368->RefPoseGlobalTransforms).ArrayNum) {
          uVar26 = ~uVar33 >> 0x1f;
        }
        local_350 = local_278.Scale3D.ZW.m128d_f64[0];
        local_348 = local_2d8.Scale3D.XY.m128d_f64[0];
        dStack_340 = local_2d8.Scale3D.XY.m128d_f64[1];
        local_360 = local_278.Scale3D.XY.m128d_f64[0];
        dStack_358 = local_278.Scale3D.XY.m128d_f64[1];
        if ((uVar26 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (local_368->RefPoseGlobalTransforms).AllocatorInstance.Data;
        pFVar2 = pFVar3 + uVar34 + 0x40;
        local_218 = *(double *)pFVar2;
        dStack_210 = *(double *)(pFVar2 + 8);
        local_208 = *(double *)(pFVar3 + uVar34 + 0x50);
        uVar26 = uVar31;
        if ((int)uVar33 < param_3->ArrayNum) {
          uVar26 = ~uVar33 >> 0x1f;
        }
        dVar8 = (local_218 - local_360) + local_348;
        dVar5 = (dStack_210 - dStack_358) + dStack_340;
        dVar6 = (local_208 - local_350) + local_338;
        if ((uVar26 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar24 = local_2f8.W;
        dVar23 = local_2f8.Z;
        dVar22 = local_2f8.Y;
        dVar21 = local_2f8.X;
        uVar9 = local_330._s_0.Z;
        uVar39 = local_330._12_4_;
        uVar38 = local_330._8_4_;
        uVar37 = local_330._4_4_;
        uVar36 = local_330._0_4_;
        uVar26 = *(uint *)((param_3->AllocatorInstance).Data + local_398);
        uVar27 = uVar31;
        if ((int)uVar26 < param_8->ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_8->AllocatorInstance).Data;
        uVar32 = (ulonglong)(uVar33 + 1);
        lVar30 = (longlong)(int)uVar26 * 0x60;
        local_398 = local_398 + 4;
        uVar34 = uVar34 + 0x60;
        *(double *)(pFVar3 + lVar30) = dVar21;
        *(double *)(pFVar3 + lVar30 + 8) = dVar22;
        *(double *)(pFVar3 + lVar30 + 0x10) = dVar23;
        *(double *)(pFVar3 + lVar30 + 0x10 + 8) = dVar24;
        pFVar2 = pFVar3 + lVar30 + 0x20;
        *(undefined4 *)pFVar2 = uVar36;
        *(undefined4 *)(pFVar2 + 4) = uVar37;
        *(undefined4 *)(pFVar2 + 8) = uVar38;
        *(undefined4 *)(pFVar2 + 0xc) = uVar39;
        *(undefined8 *)(pFVar3 + lVar30 + 0x30) = uVar9;
        *(undefined8 *)(pFVar3 + lVar30 + 0x30 + 8) = 0;
        auVar7._8_4_ = SUB84(dVar5,0);
        auVar7._0_8_ = dVar8;
        auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(pFVar3 + lVar30 + 0x40) = auVar7;
        *(double *)(pFVar3 + lVar30 + 0x50) = dVar6;
        *(double *)(pFVar3 + lVar30 + 0x50 + 8) = 0.0;
        iVar29 = param_3->ArrayNum;
      } while ((int)(uVar33 + 1) < iVar29);
    }
    EVar1 = param_2->RotationMode;
    if ((EVar1 == MatchChain) || (EVar1 == MatchScaledChain)) {
      if ((iVar29 < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar26 = *(uint *)(param_3->AllocatorInstance).Data;
      if ((int)uVar26 < param_8->ArrayNum) {
        uVar31 = ~uVar26 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_8->AllocatorInstance).Data;
      pFVar2 = pFVar3 + (longlong)(int)uVar26 * 0x60 + 0x20;
      local_318._s_0.X = (double)*(undefined8 *)pFVar2;
      local_318._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
      local_318._s_0.Z = (double)*(undefined8 *)(pFVar3 + (longlong)(int)uVar26 * 0x60 + 0x30);
      MatchChain(this,EVar1 == MatchScaledChain,param_4,param_3,(TVector<double> *)&local_318._s_0,
                 param_8);
    }
    BlendByAlpha(this,param_2,param_3,param_7,param_8);
  }
  return;
}

// GetPointOnSplineDistanceFromPoint @ 14df3b560

void __cdecl
FChainDecoderFK::GetPointOnSplineDistanceFromPoint
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          double param_3,double param_4,int *param_5,double *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 unaff_XMM7 [16];
  undefined1 local_res10 [8];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [2];
  
  GetPointOnSplineFromIndexAndAlpha((TVector<double> *)&local_a8._s_0,param_1,param_2,param_3);
  *param_5 = param_2;
  iVar12 = param_1->ArrayNum;
  if (param_2 < iVar12 + -1) {
    do {
      uVar13 = param_2 + 1;
      uVar10 = 0;
      if ((int)uVar13 < iVar12) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      lVar11 = (longlong)(int)uVar13;
      uVar10 = *param_5;
      lVar14 = (longlong)(int)uVar10;
      auVar15._0_8_ =
           (*(double *)(pFVar1 + lVar11 * 0x18 + 0x10) - local_a8._s_0.Z) *
           (*(double *)(pFVar1 + lVar11 * 0x18 + 0x10) - local_a8._s_0.Z);
      auVar15._8_8_ = 0;
      auVar16._8_8_ = 0;
      auVar16._0_8_ =
           (*(double *)(pFVar1 + lVar11 * 0x18 + 8) - local_a8._s_0.Y) *
           (*(double *)(pFVar1 + lVar11 * 0x18 + 8) - local_a8._s_0.Y) +
           (*(double *)(pFVar1 + lVar11 * 0x18) - local_a8._s_0.X) *
           (*(double *)(pFVar1 + lVar11 * 0x18) - local_a8._s_0.X) + auVar15._0_8_;
      auVar16 = sqrtpd(auVar15,auVar16);
      if (param_4 <= auVar16._0_8_) {
        uVar13 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar19 = __real_3ff0000000000000;
        pFVar2 = (param_1->AllocatorInstance).Data;
        dVar20 = *(double *)(pFVar1 + lVar11 * 0x18) - *(double *)(pFVar2 + lVar14 * 0x18);
        dVar21 = *(double *)(pFVar1 + lVar11 * 0x18 + 8) - *(double *)(pFVar2 + lVar14 * 0x18 + 8);
        dVar22 = *(double *)(pFVar1 + lVar11 * 0x18 + 0x10) -
                 *(double *)(pFVar2 + lVar14 * 0x18 + 0x10);
        pFVar2 = pFVar2 + lVar14 * 0x18;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar21 * dVar21 + dVar20 * dVar20 + dVar22 * dVar22;
        auVar16 = sqrtpd(unaff_XMM7,auVar6);
        dVar23 = auVar16._0_8_;
        if (dVar23 <= __real_3e45798ee0000000) {
          local_c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          dVar8 = __real_3ff0000000000000 / dVar23;
          local_c0._s_0.X = dVar8 * dVar20;
          local_c0._s_0.Y = dVar8 * dVar21;
          local_c0._s_0.Z = dVar8 * dVar22;
        }
        `FChainDecoderFK::GetPointOnSplineDistanceFromPoint'::__l2::<lambda_1>::operator()
                  (local_res10,(TVector<double> *)&local_90._s_0,(TVector<double> *)pFVar2,
                   (TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_a8._s_0,param_4);
        dVar20 = local_90._s_0.X - (((TVector<double>_u_0 *)&pFVar2->field_0x0)->_s_0).X;
        auVar17._0_8_ =
             (local_90._s_0.Z - *(double *)(pFVar2 + 0x10)) *
             (local_90._s_0.Z - *(double *)(pFVar2 + 0x10));
        auVar17._8_8_ = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (local_90._s_0.Y - *(double *)(pFVar2 + 8)) *
                       (local_90._s_0.Y - *(double *)(pFVar2 + 8)) + dVar20 * dVar20 + auVar17._0_8_
        ;
        auVar16 = sqrtpd(auVar17,auVar7);
        *param_6 = auVar16._0_8_ * (dVar19 / dVar23);
        return;
      }
      param_2 = uVar10 + 1;
      *param_5 = param_2;
      iVar12 = param_1->ArrayNum;
    } while (param_2 < iVar12 + -1);
  }
  uVar10 = 0;
  if ((int)(iVar12 - 1U) < iVar12) {
    uVar10 = ~(iVar12 - 1U) >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = param_1->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data + ((longlong)iVar12 + -1) * 0x18;
  uVar10 = 0;
  if ((int)(iVar12 - 1U) < iVar12) {
    uVar10 = ~(iVar12 - 1U) >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar12 = param_1->ArrayNum;
  lVar11 = (longlong)iVar12;
  pFVar2 = (param_1->AllocatorInstance).Data;
  uVar13 = iVar12 - 2;
  uVar10 = 0;
  if ((int)uVar13 < iVar12) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar14 = (longlong)(int)uVar13;
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_d8._s_0.X =
       *(double *)(pFVar2 + lVar11 * 0x18 + -0x18) - *(double *)(pFVar3 + lVar14 * 0x18);
  local_d8._s_0.Y =
       *(double *)(pFVar2 + lVar11 * 0x18 + -0x10) - *(double *)(pFVar3 + lVar14 * 0x18 + 8);
  local_d8._s_0.Z =
       *(double *)(pFVar2 + lVar11 * 0x18 + -8) - *(double *)(pFVar3 + lVar14 * 0x18 + 0x10);
  dVar19 = local_d8._s_0.Y * local_d8._s_0.Y + local_d8._s_0.X * local_d8._s_0.X +
           local_d8._s_0.Z * local_d8._s_0.Z;
  if (dVar19 != __real_3ff0000000000000) {
    if (dVar19 < __real_3e45798ee0000000) {
      local_d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      dVar19 = __real_3ff0000000000000 / SQRT(dVar19);
      local_d8._s_0.X = local_d8._s_0.X * dVar19;
      local_d8._s_0.Y = local_d8._s_0.Y * dVar19;
      local_d8._s_0.Z = dVar19 * local_d8._s_0.Z;
    }
  }
  `FChainDecoderFK::GetPointOnSplineDistanceFromPoint'::__l2::<lambda_1>::operator()
            (local_res10,(TVector<double> *)&local_78[0]._s_0,(TVector<double> *)pFVar1,
             (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_a8._s_0,param_4);
  dVar19 = (double)local_78[0]._0_8_ - (((TVector<double>_u_0 *)&pFVar1->field_0x0)->_s_0).X;
  auVar18._0_8_ =
       ((double)local_78[0]._16_8_ - *(double *)(pFVar1 + 0x10)) *
       ((double)local_78[0]._16_8_ - *(double *)(pFVar1 + 0x10));
  auVar18._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ((double)local_78[0]._8_8_ - *(double *)(pFVar1 + 8)) *
                 ((double)local_78[0]._8_8_ - *(double *)(pFVar1 + 8)) + dVar19 * dVar19 +
                 auVar18._0_8_;
  auVar16 = sqrtpd(auVar18,auVar5);
  *param_6 = auVar16._0_8_;
  *param_5 = param_1->ArrayNum + -1;
  return;
}

// GetPointOnSplineFromIndexAndAlpha @ 14df3ba40

TVector<double> * __cdecl
FChainDecoderFK::GetPointOnSplineFromIndexAndAlpha
          (TVector<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          double param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [3];
  
  lVar12 = (longlong)param_2;
  if (param_2 < 0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7246723178364403076>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                       ,0x27c,"InPointIndex>=0");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar6)();
      return pTVar8;
    }
    if (param_1->ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar6)();
        return pTVar8;
      }
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    dVar2 = *(double *)(pFVar4 + 8);
    dVar13 = *(double *)(pFVar4 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar13;
  }
  else {
    iVar3 = param_1->ArrayNum;
    if (param_2 == iVar3 + -1) {
      uVar11 = iVar3 - 2;
      uVar10 = 0;
      if ((int)uVar11 < iVar3) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar6)();
          return pTVar8;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar12 = (longlong)(int)uVar11;
      uVar11 = param_1->ArrayNum - 1;
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar6)();
          return pTVar8;
        }
      }
      lVar9 = (longlong)param_1->ArrayNum;
      pFVar5 = (param_1->AllocatorInstance).Data;
      dVar1 = *(double *)(pFVar5 + lVar9 * 0x18 + -0x18);
      dVar13 = *(double *)(pFVar5 + lVar9 * 0x18 + -0x10);
      local_88._s_0.X = dVar1 - *(double *)(pFVar4 + lVar12 * 0x18);
      dVar2 = *(double *)(pFVar5 + lVar9 * 0x18 + -8);
      local_88._s_0.Y = dVar13 - *(double *)(pFVar4 + lVar12 * 0x18 + 8);
      local_88._s_0.Z = dVar2 - *(double *)(pFVar4 + lVar12 * 0x18 + 0x10);
      UE::Math::TVector<double>::GetSafeNormal
                ((TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70[0]._s_0,
                 __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
      dVar13 = (double)local_70[0]._8_8_ * param_3 + dVar13;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_70[0]._0_8_ * param_3 + dVar1;
      dVar2 = (double)local_70[0]._16_8_ * param_3 + dVar2;
    }
    else {
      uVar11 = param_2 + 1;
      uVar10 = 0;
      if ((int)uVar11 < iVar3) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar6)();
          return pTVar8;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar9 = (longlong)(int)uVar11;
      uVar10 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar10 = (uint)~param_2 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pTVar8 = (TVector<double> *)(*pcVar6)();
          return pTVar8;
        }
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      dVar13 = (*(double *)(pFVar4 + lVar9 * 0x18 + 8) - *(double *)(pFVar5 + lVar12 * 0x18 + 8)) *
               param_3 + *(double *)(pFVar5 + lVar12 * 0x18 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (*(double *)(pFVar4 + lVar9 * 0x18) - *(double *)(pFVar5 + lVar12 * 0x18)) * param_3 +
           *(double *)(pFVar5 + lVar12 * 0x18);
      dVar2 = (*(double *)(pFVar4 + lVar9 * 0x18 + 0x10) -
              *(double *)(pFVar5 + lVar12 * 0x18 + 0x10)) * param_3 +
              *(double *)(pFVar5 + lVar12 * 0x18 + 0x10);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
  }
  return __return_storage_ptr__;
}

// Initialize @ 14df42450

void __thiscall
FChainDecoderFK::Initialize
          (FChainDecoderFK *this,FResolvedBoneChain *param_1,FResolvedBoneChain *param_2,
          FRetargetSkeleton *param_3,FTargetSkeleton *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FResolvedBoneChain *)0x0) || (param_2 == (FResolvedBoneChain *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceBoneChain && InTargetBoneChain",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->BoneChain = param_2;
  FChainDecoderCachedData::Initialize(&this->CachedData,param_1,param_2,param_3,param_4);
  return;
}

// InitializeIntermediateParentIndices @ 14df45d10

void __thiscall
FChainDecoderFK::InitializeIntermediateParentIndices
          (FChainDecoderFK *this,int param_1,int param_2,FTargetSkeleton *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_28 [4];
  
  pTVar1 = &this->IntermediateParentIndices;
  piVar2 = &(this->IntermediateParentIndices).ArrayMax;
  lVar12 = 0;
  (this->IntermediateParentIndices).ArrayNum = 0;
  if ((this->IntermediateParentIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar10 = 0;
  if (param_2 < (int)param_3->_padding_) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = *(uint *)(param_3->_padding_ + (longlong)param_2 * 4);
  while ((-1 < (int)uVar10 && (uVar10 != param_1))) {
    uVar7 = 0;
    if ((int)uVar10 < (param_3->IsBoneRetargeted).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    local_28[0] = uVar10;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_3->IsBoneRetargeted).AllocatorInstance.Data[(int)uVar10] !=
        (FScriptContainerElement)0x0) break;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar2 * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->IntermediateParentIndices).ArrayNum;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->IntermediateParentIndices).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_28[0];
    lVar13 = (longlong)(int)local_28[0];
    uVar10 = 0;
    if ((int)local_28[0] < (int)param_3->_padding_) {
      uVar10 = ~local_28[0] >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = *(uint *)(param_3->_padding_ + lVar13 * 4);
  }
  iVar8 = (this->IntermediateParentIndices).ArrayNum;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar9 = iVar8 / 2;
  if (0 < iVar9) {
    pFVar11 = pFVar4 + (longlong)(iVar8 + -1) * 4;
    do {
      uVar3 = *(undefined4 *)(pFVar4 + lVar12 * 4);
      *(undefined4 *)(pFVar4 + lVar12 * 4) = *(undefined4 *)pFVar11;
      lVar12 = lVar12 + 1;
      *(undefined4 *)pFVar11 = uVar3;
      pFVar11 = pFVar11 + -4;
    } while (lVar12 < iVar9);
  }
  return;
}

// MatchChain @ 14df48fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FChainDecoderFK::MatchChain
          (FChainDecoderFK *this,bool param_1,FChainEncoderFK *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TVector<double> *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar27;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar47;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  double dVar52;
  uint uVar56;
  double dVar53;
  double dVar57;
  undefined4 uVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar73;
  undefined1 auVar72 [16];
  undefined1 local_268;
  undefined1 local_267;
  char local_266;
  undefined1 local_265;
  undefined1 local_264 [4];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_260;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_250;
  int local_240 [2];
  FScriptContainerElement *local_238;
  uint local_230;
  double local_228;
  longlong local_220;
  TVector<double>_u_0 local_218;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  TVector<double>_u_0 local_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  TQuat<double> local_138;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [16];
  
  if ((2 < param_3->ArrayNum) && (2 < (param_2->BoneChain->BoneIndices).ArrayNum)) {
    iVar12 = 0;
    pFVar19 = (param_2->CurrentGlobalTransforms).AllocatorInstance.Data;
    iVar14 = (param_2->CurrentGlobalTransforms).ArrayNum;
    pFVar17 = pFVar19 + 0x20;
    pFVar21 = pFVar19 + (longlong)iVar14 * 0x60;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    local_266 = param_1;
    while( true ) {
      if ((param_2->CurrentGlobalTransforms).ArrayNum != iVar14) {
        local_268 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_268);
        iVar12 = local_260.ArrayNum;
      }
      if (pFVar19 == pFVar21) break;
      local_1e8 = *(double *)pFVar17;
      dStack_1e0 = *(double *)(pFVar17 + 8);
      local_1d8 = *(undefined8 *)(pFVar17 + 0x10);
      iVar11 = iVar12;
      if ((local_260.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e8) &&
         ((FScriptContainerElement *)&local_1e8 <
          local_260.AllocatorInstance.Data + (longlong)local_260.ArrayMax * 0x18)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar11 = local_260.ArrayNum;
      }
      if (iVar11 == local_260.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_260.AllocatorInstance,&local_260.ArrayMax);
      }
      iVar12 = iVar11 + 1;
      local_260.ArrayNum = iVar12;
      pFVar19 = pFVar19 + 0x60;
      pFVar17 = pFVar17 + 0x60;
      *(double *)(local_260.AllocatorInstance.Data + (longlong)iVar11 * 0x18) = local_1e8;
      *(double *)(local_260.AllocatorInstance.Data + (longlong)iVar11 * 0x18 + 8) = dStack_1e0;
      *(undefined8 *)(local_260.AllocatorInstance.Data + (longlong)iVar11 * 0x18 + 0x10) = local_1d8
      ;
    }
    if (iVar12 < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar12 = local_260.ArrayNum;
    }
    pFVar17 = local_260.AllocatorInstance.Data + 0x10;
    dVar59 = (param_4->field0_0x0)._s_0.X;
    dVar25 = (param_4->field0_0x0)._s_0.Y;
    dVar26 = (param_4->field0_0x0)._s_0.Z;
    pFVar19 = local_260.AllocatorInstance.Data + (longlong)iVar12 * 0x18;
    dVar48 = *(double *)local_260.AllocatorInstance.Data;
    dVar53 = *(double *)(local_260.AllocatorInstance.Data + 8);
    dVar27 = *(double *)pFVar17;
    iVar14 = iVar12;
    while( true ) {
      if (iVar14 != iVar12) {
        local_267 = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_267);
      }
      dVar9 = __real_3ff0000000000000;
      pFVar21 = pFVar17 + -0x10;
      if (pFVar21 == pFVar19) break;
      *(double *)pFVar21 = (dVar59 - dVar48) + *(double *)pFVar21;
      *(double *)(pFVar17 + -8) = (dVar25 - dVar53) + *(double *)(pFVar17 + -8);
      *(double *)pFVar17 = (dVar26 - dVar27) + *(double *)pFVar17;
      pFVar17 = pFVar17 + 0x18;
      iVar14 = local_260.ArrayNum;
    }
    if (local_266 != '\0') {
      uVar20 = param_3->ArrayNum;
      local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250.ArrayMax = 0;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      local_250.ArrayNum = 0;
      if (0 < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar20,&local_250.AllocatorInstance,0,&local_250.ArrayMax);
      }
      pFVar19 = (param_3->AllocatorInstance).Data;
      iVar14 = param_3->ArrayNum;
      pFVar17 = pFVar19 + (longlong)iVar14 * 4;
      while( true ) {
        if (param_3->ArrayNum != iVar14) {
          local_265 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_265);
        }
        if (pFVar19 == pFVar17) break;
        uVar20 = *(uint *)pFVar19;
        uVar16 = 0;
        if ((int)uVar20 < param_5->ArrayNum) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar21 = (param_5->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x60;
        if (((local_250.AllocatorInstance.Data <= pFVar21) &&
            (pFVar21 < local_250.AllocatorInstance.Data + (longlong)local_250.ArrayMax * 0x60)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_250.ArrayNum == local_250.ArrayMax) {
          local_250.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&local_250.AllocatorInstance,&local_250.ArrayMax);
        }
        lVar13 = (longlong)local_250.ArrayNum;
        local_250.ArrayNum = local_250.ArrayNum + 1;
        uVar8 = *(undefined8 *)(pFVar21 + 8);
        lVar13 = lVar13 * 0x60;
        pFVar19 = pFVar19 + 4;
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13) = *(undefined8 *)pFVar21;
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar21 + 0x18);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x10) =
             *(undefined8 *)(pFVar21 + 0x10);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x10 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar21 + 0x28);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x20) =
             *(undefined8 *)(pFVar21 + 0x20);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x20 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar21 + 0x38);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x30) =
             *(undefined8 *)(pFVar21 + 0x30);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x30 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar21 + 0x48);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x40) =
             *(undefined8 *)(pFVar21 + 0x40);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x40 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar21 + 0x58);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x50) =
             *(undefined8 *)(pFVar21 + 0x50);
        *(undefined8 *)(local_250.AllocatorInstance.Data + lVar13 + 0x50 + 8) = uVar8;
      }
      dVar25 = FResolvedBoneChain::GetChainLength(&local_250);
      dVar26 = FResolvedBoneChain::GetChainLength(&param_2->CurrentGlobalTransforms);
      dVar59 = dVar9;
      if (__real_3f1a36e2e0000000 <= dVar25) {
        dVar59 = dVar26 / dVar25;
      }
      iVar14 = local_260.ArrayNum;
      uVar15 = (ulonglong)local_260.ArrayNum;
      pFVar19 = local_260.AllocatorInstance.Data + uVar15 * 0x18;
      pFVar17 = local_260.AllocatorInstance.Data + 0x10;
      while( true ) {
        if ((int)uVar15 != iVar14) {
          local_264[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_264);
        }
        pFVar21 = pFVar17 + -0x10;
        if (pFVar21 == pFVar19) break;
        dVar25 = (param_4->field0_0x0)._s_0.Y;
        dVar26 = (param_4->field0_0x0)._s_0.Z;
        *(double *)pFVar21 =
             (*(double *)pFVar21 - (param_4->field0_0x0)._s_0.X) * dVar59 +
             (param_4->field0_0x0)._s_0.X;
        *(double *)(pFVar17 + -8) = (*(double *)(pFVar17 + -8) - dVar25) * dVar59 + dVar25;
        *(double *)pFVar17 = (*(double *)pFVar17 - dVar26) * dVar59 + dVar26;
        pFVar17 = pFVar17 + 0x18;
        uVar15 = local_260._8_8_ & 0xffffffff;
      }
      if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.AllocatorInstance.Data);
      }
    }
    dVar59 = __real_3e45798ee0000000;
    iVar14 = param_3->ArrayNum;
    local_228 = 0.0;
    local_240[0] = 0;
    if (0 < iVar14 + -1) {
      uVar20 = 1;
      local_220 = 4;
      local_148 = 0;
      uStack_140 = 0;
      do {
        lVar13 = local_220;
        uVar16 = 0;
        if ((int)(uVar20 - 1) < iVar14) {
          uVar16 = ~(uVar20 - 1) >> 0x1f;
        }
        local_230 = uVar20;
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar16 = *(uint *)((param_3->AllocatorInstance).Data + lVar13 + -4);
        uVar51 = 0;
        if ((int)uVar20 < param_3->ArrayNum) {
          uVar51 = ~uVar20 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar18 = ~uVar16 >> 0x1f;
        local_238 = (FScriptContainerElement *)
                    CONCAT44(local_238._4_4_,
                             *(undefined4 *)((param_3->AllocatorInstance).Data + lVar13));
        uVar51 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar51 = uVar18;
        }
        if ((uVar51 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar19 = (param_5->AllocatorInstance).Data;
        lVar13 = (longlong)(int)uVar16 * 0x60;
        pFVar17 = pFVar19 + lVar13 + 0x20;
        local_1b8 = *(double *)pFVar17;
        dStack_1b0 = *(double *)(pFVar17 + 8);
        local_1a8 = *(double *)(pFVar19 + lVar13 + 0x30);
        uVar51 = 0;
        if ((int)(uint)local_238 < param_5->ArrayNum) {
          uVar51 = ~(uint)local_238 >> 0x1f;
        }
        if (uVar51 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar19 = (param_5->AllocatorInstance).Data;
        pFVar17 = pFVar19 + (longlong)(int)(uint)local_238 * 0x60 + 0x20;
        dVar48 = *(double *)pFVar17;
        dVar26 = *(double *)(pFVar17 + 8);
        dVar25 = *(double *)(pFVar19 + (longlong)(int)(uint)local_238 * 0x60 + 0x30);
        uVar51 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar51 = uVar18;
        }
        local_200 = dVar48;
        dStack_1f8 = dVar26;
        local_1f0 = dVar25;
        if ((uVar51 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        dVar7 = local_1a8;
        dVar6 = dStack_1b0;
        dVar5 = local_1b8;
        pFVar19 = (param_5->AllocatorInstance).Data;
        dVar25 = dVar25 - *(double *)(pFVar19 + lVar13 + 0x30);
        dVar3 = dVar48 - *(double *)(pFVar19 + lVar13 + 0x20);
        dVar4 = dVar26 - *(double *)(pFVar19 + lVar13 + 0x20 + 8);
        uVar67 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar52 = *(double *)(pFVar19 + lVar13) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar57 = *(double *)(pFVar19 + lVar13 + 8) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar69._8_4_ = SUB84(dVar4,0);
        auVar69._0_8_ = dVar3;
        auVar69._12_4_ = uVar67;
        dVar53 = *(double *)(pFVar19 + lVar13 + 0x10) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar27 = *(double *)(pFVar19 + lVar13 + 0x10 + 8) *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar40._8_4_ = SUB84(dVar57,0);
        auVar40._0_8_ = dVar52;
        uVar58 = (undefined4)((ulonglong)dVar57 >> 0x20);
        auVar40._12_4_ = uVar58;
        dVar47 = auVar40._8_8_;
        auVar49._8_4_ = SUB84(dVar57,0);
        auVar49._0_8_ = dVar52;
        auVar49._12_4_ = uVar58;
        auVar44._8_4_ = SUB84(dVar53,0);
        auVar44._0_8_ = dVar47;
        auVar44._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        auVar38._8_4_ = SUB84(dVar27,0);
        auVar38._0_8_ = dVar53;
        auVar38._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        auVar50 = blendpd(auVar49,auVar38,2);
        auVar70._0_8_ = auVar69._8_8_ * dVar52 - dVar47 * dVar3;
        auVar70._8_8_ = dVar25 * dVar57 - auVar44._8_8_ * dVar4;
        auVar37._8_4_ = SUB84(dVar4,0);
        auVar37._0_8_ = dVar3;
        auVar37._12_4_ = uVar67;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = dVar25;
        auVar38 = blendpd(auVar37,auVar33,2);
        auVar39._0_8_ = auVar38._0_8_ * dVar53 - dVar25 * auVar50._0_8_;
        auVar39._8_8_ = auVar38._8_8_ * dVar27 - auVar50._8_8_ * 0.0;
        auVar38 = blendpd(auVar70,auVar39,2);
        dVar36 = auVar70._8_8_ + auVar70._8_8_;
        dVar2 = auVar39._0_8_ + auVar39._0_8_;
        uVar58 = SUB84(dVar2,0);
        uVar67 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar71._0_8_ = auVar38._0_8_ + auVar38._0_8_;
        auVar71._8_8_ = auVar38._8_8_ + auVar38._8_8_;
        auVar65._8_4_ = uVar58;
        auVar65._0_8_ = dVar36;
        auVar65._12_4_ = uVar67;
        auVar28._8_4_ = uVar58;
        auVar28._0_8_ = dVar36;
        auVar28._12_4_ = uVar67;
        auVar60._8_4_ = uVar58;
        auVar60._0_8_ = dVar36;
        auVar60._12_4_ = uVar67;
        auVar38 = blendpd(auVar60,auVar71,2);
        auVar66._0_8_ = auVar65._8_8_ * dVar52 - dVar36 * dVar47;
        auVar66._8_8_ = auVar71._0_8_ * dVar57 - auVar28._8_8_ * dVar53;
        auVar29._8_4_ = SUB84(auVar71._8_8_,0);
        auVar29._0_8_ = auVar71._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
        auVar61._0_8_ = auVar38._0_8_ * dVar53 - auVar71._0_8_ * auVar50._0_8_;
        auVar61._8_8_ = auVar38._8_8_ * dVar27 - auVar29._8_8_ * auVar50._8_8_;
        auVar38 = *(undefined1 (*) [16])(pFVar19 + lVar13 + 0x50);
        pFVar17 = pFVar19 + lVar13 + 0x40;
        auVar41._0_8_ =
             (double)CONCAT44(*(uint *)(pFVar17 + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)pFVar17 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar41._8_4_ = *(uint *)(pFVar17 + 8) & _UNK_15061cc88;
        auVar41._12_4_ = *(uint *)(pFVar17 + 0xc) & _UNK_15061cc8c;
        lVar22 = -(ulonglong)
                  (auVar41._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar24 = -(ulonglong)
                  (auVar41._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        lVar23 = -(ulonglong)
                  ((double)CONCAT44(auVar38._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    auVar38._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar30._8_4_ = SUB84(auVar66._8_8_,0);
        auVar30._0_8_ = auVar66._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
        auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        *(undefined1 (*) [16])(pFVar19 + lVar13 + 0x40));
        auVar42._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar50._4_4_,
                              ~(uint)lVar22 & auVar50._0_4_);
        auVar42._8_4_ = ~(uint)lVar24 & auVar50._8_4_;
        auVar42._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar50._12_4_;
        uVar51 = (uint)lVar23;
        uVar56 = (uint)((ulonglong)lVar23 >> 0x20);
        auVar50._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar50._0_8_ = auVar38._0_8_;
        auVar50._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar50);
        local_170 = auVar42._0_8_ * (dVar36 * dVar27 + dVar3 + auVar30._8_8_);
        dStack_168 = auVar42._8_8_ * (dVar2 * dVar27 + dVar4 + auVar61._0_8_);
        auVar50 = blendpd(auVar66,auVar61,2);
        dVar48 = dVar48 - local_1b8;
        local_160 = (double)(CONCAT44(~uVar56 & auVar38._4_4_,~uVar51 & auVar38._0_4_) |
                            CONCAT44(local_148._4_4_ & uVar56,(uint)local_148 & uVar51)) *
                    (auVar71._0_8_ * dVar27 + dVar25 + auVar50._0_8_);
        dVar53 = local_1f0 - local_1a8;
        dVar26 = dVar26 - dStack_1b0;
        dVar25 = SQRT(dVar26 * dVar26 + dVar48 * dVar48 + dVar53 * dVar53);
        if (dVar25 <= dVar59) {
          local_1d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          dVar27 = dVar9 / dVar25;
          local_1d0._s_0.X = dVar48 * dVar27;
          local_1d0._s_0.Y = dVar26 * dVar27;
          local_1d0._s_0.Z = dVar53 * dVar27;
        }
        GetPointOnSplineDistanceFromPoint
                  (&local_260,local_240[0],local_228,dVar25,local_240,&local_228);
        GetPointOnSplineFromIndexAndAlpha
                  ((TVector<double> *)&local_188._s_0,&local_260,local_240[0],local_228);
        local_218._s_0.X = local_188._s_0.X - dVar5;
        local_218._s_0.Y = local_188._s_0.Y - dVar6;
        local_218._s_0.Z = local_188._s_0.Z - dVar7;
        dVar25 = local_218._s_0.Y * local_218._s_0.Y + local_218._s_0.X * local_218._s_0.X +
                 local_218._s_0.Z * local_218._s_0.Z;
        if (dVar25 != dVar9) {
          if (dVar59 <= dVar25) {
            local_158 = dVar9 / SQRT(dVar25);
            local_218._s_0.X = local_158 * local_218._s_0.X;
            local_218._s_0.Y = local_158 * local_218._s_0.Y;
            local_218._s_0.Z = local_158 * local_218._s_0.Z;
          }
          else {
            local_218._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_218._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_218._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_138,(TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_218._s_0)
        ;
        uVar51 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar51 = uVar18;
        }
        if ((uVar51 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_238 = (param_5->AllocatorInstance).Data;
        uVar51 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar51 = uVar18;
        }
        if ((uVar51 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar19 = (param_5->AllocatorInstance).Data;
        dVar52 = local_138.X;
        dVar68 = local_138.Z;
        dVar57 = local_138.Y;
        pFVar17 = pFVar19 + lVar13;
        dVar5 = *(double *)pFVar17;
        dVar6 = *(double *)(pFVar17 + 8);
        auVar43._8_4_ = local_138.X._0_4_;
        auVar43._0_8_ = dVar52;
        auVar43._12_4_ = local_138.X._4_4_;
        pFVar19 = pFVar19 + lVar13 + 0x10;
        dVar7 = *(double *)pFVar19;
        dVar47 = *(double *)(pFVar19 + 8);
        dVar73 = local_138.W;
        dVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
        dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        auVar31._8_4_ = local_138.Z._0_4_;
        auVar31._0_8_ = dVar68;
        auVar31._12_4_ = local_138.Z._4_4_;
        dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        *(double *)(local_238 + lVar13) =
             dVar52 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar5 * dVar73 +
             dVar7 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar68 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        *(double *)(local_238 + lVar13 + 8) =
             dVar52 * dVar7 * dVar53 + dVar6 * dVar73 + dVar47 * dVar57 * dVar36 +
             dVar68 * dVar5 * dVar3;
        *(double *)(local_238 + lVar13 + 0x10) =
             dVar52 * dVar6 * dVar25 + dVar7 * dVar73 + dVar5 * dVar57 * dVar26 +
             dVar68 * dVar47 * dVar48;
        *(double *)(local_238 + lVar13 + 0x10 + 8) =
             auVar43._8_8_ * dVar5 * dVar27 + dVar47 * dVar73 + dVar6 * dVar57 * dVar2 +
             auVar31._8_8_ * dVar7 * dVar4;
        uVar51 = 0;
        if ((int)uVar16 < param_5->ArrayNum) {
          uVar51 = uVar18;
        }
        if ((uVar51 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar17 = (param_5->AllocatorInstance).Data;
        iVar14 = param_3->ArrayNum;
        auVar38 = *(undefined1 (*) [16])(pFVar17 + lVar13 + 0x10);
        dVar36 = auVar38._0_8_;
        auVar50 = *(undefined1 (*) [16])(pFVar17 + lVar13);
        dVar27 = *(double *)(pFVar17 + lVar13 + 0x18);
        auVar72._0_8_ = local_160 * *(double *)(pFVar17 + lVar13 + 0x50);
        auVar72._8_8_ = *(double *)(pFVar17 + lVar13 + 0x50 + 8) * 0.0;
        dVar48 = *(double *)(pFVar17 + lVar13 + 0x40) * local_170;
        dVar53 = *(double *)(pFVar17 + lVar13 + 0x40 + 8) * dStack_168;
        uVar58 = (undefined4)((ulonglong)dVar53 >> 0x20);
        local_f8 = *(undefined1 (*) [16])(pFVar17 + lVar13);
        auVar62._8_4_ = SUB84(dVar53,0);
        auVar62._0_8_ = dVar48;
        auVar62._12_4_ = uVar58;
        auVar44 = blendpd(local_f8,auVar38,2);
        auVar63._0_8_ = auVar62._8_8_ * local_f8._0_8_ - local_f8._8_8_ * dVar48;
        auVar63._8_8_ = auVar72._0_8_ * local_f8._8_8_ - dVar36 * dVar53;
        auVar32._8_4_ = SUB84(dVar53,0);
        auVar32._0_8_ = dVar48;
        auVar32._12_4_ = uVar58;
        auVar33 = blendpd(auVar32,auVar72,2);
        auVar34._0_8_ = auVar33._0_8_ * dVar36 - auVar44._0_8_ * auVar72._0_8_;
        auVar34._8_8_ = auVar33._8_8_ * auVar38._8_8_ - auVar44._8_8_ * auVar72._8_8_;
        auVar33 = blendpd(auVar63,auVar34,2);
        dVar25 = auVar63._8_8_ + auVar63._8_8_;
        dVar26 = auVar34._0_8_ + auVar34._0_8_;
        uVar58 = (undefined4)((ulonglong)dVar26 >> 0x20);
        auVar64._0_8_ = auVar33._0_8_ + auVar33._0_8_;
        auVar64._8_8_ = auVar33._8_8_ + auVar33._8_8_;
        auVar54._8_4_ = SUB84(dVar26,0);
        auVar54._0_8_ = dVar25;
        auVar54._12_4_ = uVar58;
        auVar45._8_4_ = SUB84(dVar26,0);
        auVar45._0_8_ = dVar25;
        auVar45._12_4_ = uVar58;
        auVar33 = blendpd(auVar45,auVar64,2);
        auVar55._0_8_ = auVar54._8_8_ * auVar50._0_8_ - auVar50._8_8_ * dVar25;
        auVar55._8_8_ = auVar64._0_8_ * auVar50._8_8_ - dVar36 * dVar26;
        auVar50 = blendpd(auVar50,auVar38,2);
        auVar35._8_4_ = SUB84(auVar55._8_8_,0);
        auVar35._0_8_ = auVar55._0_8_;
        auVar35._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
        auVar46._0_8_ = auVar33._0_8_ * dVar36 - auVar50._0_8_ * auVar64._0_8_;
        auVar46._8_8_ = auVar33._8_8_ * auVar38._8_8_ - auVar50._8_8_ * auVar64._8_8_;
        auVar38 = blendpd(auVar55,auVar46,2);
        dVar25 = dVar25 * dVar27 + dVar48 + auVar35._8_8_ + *(double *)(pFVar17 + lVar13 + 0x20);
        dStack_198 = dVar26 * dVar27 + dVar53 + auVar46._0_8_ +
                     *(double *)(pFVar17 + lVar13 + 0x20 + 8);
        local_108 = auVar64._0_8_ * dVar27 + auVar72._0_8_ + auVar38._0_8_ +
                    *(double *)(pFVar17 + lVar13 + 0x30);
        local_1a0 = dVar25 - local_200;
        local_190 = local_108 - local_1f0;
        local_118._8_4_ = SUB84(dStack_198,0);
        local_118._0_8_ = dVar25;
        local_118._12_4_ = (int)((ulonglong)dStack_198 >> 0x20);
        dStack_198 = dStack_198 - dStack_1f8;
        lVar13 = local_220;
        uVar16 = uVar20;
        if ((int)uVar20 < iVar14) {
          do {
            uVar51 = 0;
            if ((int)uVar16 < iVar14) {
              uVar51 = ~uVar16 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar51 = *(uint *)((param_3->AllocatorInstance).Data + lVar13);
            uVar18 = 0;
            if ((int)uVar51 < param_5->ArrayNum) {
              uVar18 = ~uVar51 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar17 = (param_5->AllocatorInstance).Data;
            uVar16 = uVar16 + 1;
            lVar22 = (longlong)(int)uVar51 * 0x60;
            dVar48 = *(double *)(pFVar17 + lVar22 + 0x20 + 8);
            dVar25 = *(double *)(pFVar17 + lVar22 + 0x30);
            dVar26 = *(double *)(pFVar17 + lVar22 + 0x30 + 8);
            *(double *)(pFVar17 + lVar22 + 0x20) = *(double *)(pFVar17 + lVar22 + 0x20) + local_1a0;
            *(double *)(pFVar17 + lVar22 + 0x20 + 8) = dVar48 + dStack_198;
            *(double *)(pFVar17 + lVar22 + 0x30) = local_190 + dVar25;
            *(double *)(pFVar17 + lVar22 + 0x30 + 8) = dVar26 + 0.0;
            iVar14 = param_3->ArrayNum;
            lVar13 = lVar13 + 4;
          } while ((int)uVar16 < iVar14);
        }
        local_220 = local_220 + 4;
        uVar20 = uVar20 + 1;
      } while ((int)local_230 < iVar14 + -1);
    }
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
  }
  return;
}

// RetargetPosition @ 14df4fc80

TVector<double> * __thiscall
FChainDecoderFK::RetargetPosition
          (FChainDecoderFK *this,TVector<double> *__return_storage_ptr__,int param_1,
          TQuat<double> *param_2,FIKRetargetPelvisMotionOp *param_3,
          FRetargetFKChainSettings *param_4,TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          FChainEncoderFK *param_6,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_7,
          FRetargetSkeleton *param_8,FTargetSkeleton *param_9,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_10,
          TTransform<double> *param_11)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FResolvedBoneChain *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  TTransform<double> *pTVar22;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  undefined4 uVar29;
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
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar65;
  undefined1 auVar60 [16];
  double dVar57;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 uVar66;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar67;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  undefined8 uVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  double dVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined4 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  double dVar107;
  __m128d _Var108;
  undefined1 auVar109 [16];
  double dVar113;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined4 uVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  undefined4 uVar117;
  undefined4 uVar118;
  undefined4 uVar119;
  undefined1 local_278 [16];
  undefined1 local_268 [8];
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 local_258 [16];
  double local_248 [2];
  TVector<double>_u_0 local_238;
  undefined1 local_218 [32];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  TVector<double> local_1c8 [16];
  
  lVar25 = (longlong)param_1;
  uVar26 = (uint)~param_1 >> 0x1f;
  uVar18 = 0;
  if (param_1 < param_5->ArrayNum) {
    uVar18 = uVar26;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TVector<double> *)(*pcVar4)();
    return pTVar21;
  }
  _Var108.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  uVar114 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
  uVar115 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
  uVar116 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
  uVar117 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
  uVar118 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
  uVar119 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
  uVar18 = *(uint *)((param_5->AllocatorInstance).Data + lVar25 * 4);
  lVar28 = (longlong)(int)uVar18;
  uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  uVar100 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
  uVar101 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
  uVar102 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
  uVar103 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
  uVar104 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
  uVar105 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
  uVar106 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
  uVar96 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
  uVar97 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
  uVar98 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
  uVar99 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
  uVar27 = ~uVar18 >> 0x1f;
  local_268 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  _uStack_260 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  uVar19 = 0;
  if ((int)uVar18 < (int)param_9->_padding_) {
    uVar19 = uVar27;
  }
  local_258._0_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_258._8_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_248[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_248[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  if ((uVar19 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    pTVar21 = (TVector<double> *)(*pcVar4)();
    return pTVar21;
  }
  uVar19 = *(uint *)(param_9->_padding_ + lVar28 * 4);
  if (uVar19 != 0xffffffff) {
    uVar20 = 0;
    if ((int)uVar19 < param_10->ArrayNum) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    lVar24 = (longlong)(int)uVar19 * 0x60;
    pFVar2 = (param_10->AllocatorInstance).Data;
    pFVar1 = pFVar2 + lVar24 + 0x20;
    uVar114 = *(undefined4 *)&pFVar1->field_0x0;
    uVar115 = *(undefined4 *)(pFVar1 + 4);
    uVar116 = *(undefined4 *)(pFVar1 + 8);
    uVar117 = *(undefined4 *)(pFVar1 + 0xc);
    _local_268 = *(double (*) [2])pFVar1;
    pFVar1 = pFVar2 + lVar24 + 0x30;
    uVar118 = *(undefined4 *)&pFVar1->field_0x0;
    uVar119 = *(undefined4 *)(pFVar1 + 4);
    local_258 = *(undefined1 (*) [16])pFVar1;
    pFVar1 = pFVar2 + lVar24 + 0x50;
    uVar29 = *(undefined4 *)&pFVar1->field_0x0;
    uVar100 = *(undefined4 *)(pFVar1 + 4);
    uVar101 = *(undefined4 *)(pFVar1 + 8);
    uVar102 = *(undefined4 *)(pFVar1 + 0xc);
    local_248 = *(double (*) [2])pFVar1;
    pFVar1 = pFVar2 + lVar24;
    uVar103 = *(undefined4 *)pFVar1;
    uVar104 = *(undefined4 *)(pFVar1 + 4);
    uVar105 = *(undefined4 *)(pFVar1 + 8);
    uVar106 = *(undefined4 *)(pFVar1 + 0xc);
    pFVar1 = pFVar2 + lVar24 + 0x10;
    uVar96 = *(undefined4 *)pFVar1;
    uVar97 = *(undefined4 *)(pFVar1 + 4);
    uVar98 = *(undefined4 *)(pFVar1 + 8);
    uVar99 = *(undefined4 *)(pFVar1 + 0xc);
    _Var108.m128d_f64 = *(double (*) [2])(pFVar2 + lVar24 + 0x40);
  }
  auVar48._0_8_ = _Var108.m128d_f64[0];
  auVar48._8_8_ = _Var108.m128d_f64[1];
  switch(param_4->TranslationMode) {
  case None:
    pTVar23 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                        ((FResolvedRetargetPoseSet *)&param_9->_padding_);
    uVar26 = 0;
    if ((int)uVar18 < pTVar23->ArrayNum) {
      uVar26 = uVar27;
    }
    if ((uVar26 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    pFVar2 = (pTVar23->AllocatorInstance).Data;
    auVar58._4_4_ = uVar104;
    auVar58._0_4_ = uVar103;
    auVar58._8_4_ = uVar105;
    auVar58._12_4_ = uVar106;
    dVar65 = auVar58._8_8_;
    auVar68._4_4_ = uVar104;
    auVar68._0_4_ = uVar103;
    auVar68._8_4_ = uVar105;
    auVar68._12_4_ = uVar106;
    auVar12._4_4_ = uVar97;
    auVar12._0_4_ = uVar96;
    auVar12._8_4_ = uVar98;
    auVar12._12_4_ = uVar99;
    auVar43 = blendpd(auVar68,auVar12,2);
    pFVar1 = pFVar2 + lVar28 * 0x60 + 0x20;
    dVar87 = *(double *)pFVar1 * auVar48._0_8_;
    dVar67 = *(double *)(pFVar1 + 8) * auVar48._8_8_;
    dVar78 = *(double *)(pFVar2 + lVar28 * 0x60 + 0x30) * (double)CONCAT44(uVar100,uVar29);
    dVar75 = (double)CONCAT44(uVar102,uVar101) * 0.0;
    auVar89._8_4_ = SUB84(dVar67,0);
    auVar89._0_8_ = dVar87;
    auVar89._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
    auVar90._0_8_ = auVar89._8_8_ * (double)CONCAT44(uVar104,uVar103) - dVar65 * dVar87;
    auVar90._8_8_ =
         dVar78 * (double)CONCAT44(uVar106,uVar105) - (double)CONCAT44(uVar97,uVar96) * dVar67;
    auVar48._0_8_ = auVar43._0_8_ * dVar78;
    auVar48._8_8_ = auVar43._8_8_ * dVar75;
    goto LAB_14df4ff88;
  case GloballyScaled:
    uVar56 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uVar76 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar66 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    if (param_3 != (FIKRetargetPelvisMotionOp *)0x0) {
      auVar48._0_8_ = (param_3->Settings).ScaleHorizontal;
      uVar56 = auVar48._0_8_ * (param_3->GlobalScaleFactor).field0_0x0._s_0.Y;
      uVar76 = (param_3->GlobalScaleFactor).field0_0x0._s_0.Z * (param_3->Settings).ScaleVertical;
      uVar66 = auVar48._0_8_ * (param_3->GlobalScaleFactor).field0_0x0._s_0.X;
    }
    auVar48._0_8_ = (param_11->Translation).XY.m128d_f64[1];
    auVar48._8_8_ = (param_11->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)uVar66 * (param_11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar56 * auVar48._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar76 * auVar48._8_8_;
    break;
  case Absolute:
    auVar48._0_8_ = (param_11->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_11->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar48._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_11->Translation).ZW.m128d_f64[0];
    break;
  case StretchBoneLengthUniformly:
    if (param_1 == 0) {
      pTVar23 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                          ((FResolvedRetargetPoseSet *)&param_9->_padding_);
      uVar26 = 0;
      if ((int)uVar18 < pTVar23->ArrayNum) {
        uVar26 = uVar27;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        pTVar21 = (TVector<double> *)(*pcVar4)();
        return pTVar21;
      }
      pFVar2 = (pTVar23->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar28 * 0x60 + 0x20;
      dVar87 = *(double *)pFVar1;
      dVar67 = *(double *)(pFVar1 + 8);
      dVar78 = *(double *)(pFVar2 + lVar28 * 0x60 + 0x30);
      goto LAB_14df50141;
    }
    dVar78 = FResolvedBoneChain::GetChainLength(&param_6->BoneChain->RefPoseGlobalTransforms);
    dVar87 = FResolvedBoneChain::GetChainLength(&param_6->CurrentGlobalTransforms);
    dVar67 = __real_3ff0000000000000;
    if (__real_3f1a36e2e0000000 <= dVar78) {
      dVar67 = dVar87 / dVar78;
    }
    pTVar23 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                        ((FResolvedRetargetPoseSet *)&param_9->_padding_);
    uVar26 = 0;
    if ((int)uVar18 < pTVar23->ArrayNum) {
      uVar26 = uVar27;
    }
    if ((uVar26 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    pFVar2 = (pTVar23->AllocatorInstance).Data;
    auVar60._4_4_ = uVar104;
    auVar60._0_4_ = uVar103;
    auVar60._8_4_ = uVar105;
    auVar60._12_4_ = uVar106;
    auVar70._4_4_ = uVar104;
    auVar70._0_4_ = uVar103;
    auVar70._8_4_ = uVar105;
    auVar70._12_4_ = uVar106;
    auVar11._4_4_ = uVar97;
    auVar11._0_4_ = uVar96;
    auVar11._8_4_ = uVar98;
    auVar11._12_4_ = uVar99;
    auVar43 = blendpd(auVar70,auVar11,2);
    pFVar1 = pFVar2 + lVar28 * 0x60 + 0x20;
    auVar48._0_8_ = auVar48._0_8_ * *(double *)pFVar1 * dVar67;
    auVar48._8_8_ = auVar48._8_8_ * *(double *)(pFVar1 + 8) * dVar67;
    dVar78 = *(double *)(pFVar2 + lVar28 * 0x60 + 0x30) * dVar67 * (double)CONCAT44(uVar100,uVar29);
    dVar87 = (double)CONCAT44(uVar102,uVar101) * 0.0;
    auVar92._8_4_ = SUB84(auVar48._8_8_,0);
    auVar92._0_8_ = auVar48._0_8_;
    uVar29 = (undefined4)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar92._12_4_ = uVar29;
    auVar34._8_4_ = SUB84(auVar48._8_8_,0);
    auVar34._0_8_ = auVar48._0_8_;
    auVar34._12_4_ = uVar29;
    auVar7._8_4_ = SUB84(dVar87,0);
    auVar7._0_8_ = dVar78;
    auVar7._12_4_ = (int)((ulonglong)dVar87 >> 0x20);
    auVar73 = blendpd(auVar34,auVar7,2);
    auVar93._0_8_ =
         auVar92._8_8_ * (double)CONCAT44(uVar104,uVar103) - auVar48._0_8_ * auVar60._8_8_;
    auVar93._8_8_ =
         dVar78 * (double)CONCAT44(uVar106,uVar105) -
         auVar48._8_8_ * (double)CONCAT44(uVar97,uVar96);
    auVar79._8_4_ = SUB84(auVar93._8_8_,0);
    auVar79._0_8_ = auVar93._0_8_;
    auVar79._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
    auVar35._0_8_ = auVar73._0_8_ * (double)CONCAT44(uVar97,uVar96) - dVar78 * auVar43._0_8_;
    auVar35._8_8_ = auVar73._8_8_ * (double)CONCAT44(uVar99,uVar98) - dVar87 * auVar43._8_8_;
    dVar87 = auVar79._8_8_ + auVar79._8_8_;
    dVar67 = auVar35._0_8_ + auVar35._0_8_;
    auVar73 = blendpd(auVar93,auVar35,2);
    auVar94._0_8_ = auVar73._0_8_ + auVar73._0_8_;
    auVar94._8_8_ = auVar73._8_8_ + auVar73._8_8_;
    auVar49._8_4_ = SUB84(dVar67,0);
    auVar49._0_8_ = dVar87;
    uVar29 = (undefined4)((ulonglong)dVar67 >> 0x20);
    auVar49._12_4_ = uVar29;
    auVar36._8_4_ = SUB84(dVar67,0);
    auVar36._0_8_ = dVar87;
    auVar36._12_4_ = uVar29;
    auVar73 = blendpd(auVar36,auVar94,2);
    auVar47._0_8_ = auVar49._8_8_ * (double)CONCAT44(uVar104,uVar103) - dVar87 * auVar60._8_8_;
    auVar47._8_8_ =
         auVar94._0_8_ * (double)CONCAT44(uVar106,uVar105) -
         dVar67 * (double)CONCAT44(uVar97,uVar96);
    dVar87 = dVar87 * (double)CONCAT44(uVar99,uVar98) + auVar48._0_8_;
    dVar67 = dVar67 * (double)CONCAT44(uVar99,uVar98) + auVar48._8_8_;
    dVar78 = auVar94._0_8_ * (double)CONCAT44(uVar99,uVar98) + dVar78;
    auVar48._0_8_ = auVar94._0_8_;
    auVar48._8_8_ = auVar94._8_8_;
    goto LAB_14df4fff2;
  case StretchBoneLengthNonUniformly:
    pFVar3 = this->BoneChain;
    uVar19 = 0;
    if (param_1 < (pFVar3->Params).ArrayNum) {
      uVar19 = uVar26;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    local_278._0_8_ = (double)*(float *)((pFVar3->Params).AllocatorInstance.Data + lVar25 * 4);
    dVar78 = FResolvedBoneChain::GetStretchAtParam
                       (param_6->BoneChain,&param_6->BoneChain->RefPoseGlobalTransforms,
                        &param_6->CurrentGlobalTransforms,(double *)local_278);
    pTVar23 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                        ((FResolvedRetargetPoseSet *)&param_9->_padding_);
    uVar26 = 0;
    if ((int)uVar18 < pTVar23->ArrayNum) {
      uVar26 = uVar27;
    }
    if ((uVar26 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    pFVar2 = (pTVar23->AllocatorInstance).Data;
    pFVar1 = pFVar2 + lVar28 * 0x60 + 0x20;
    dVar67 = *(double *)(pFVar1 + 8) * dVar78;
    dVar87 = *(double *)pFVar1 * dVar78;
    dVar78 = *(double *)(pFVar2 + lVar28 * 0x60 + 0x30) * dVar78;
LAB_14df50141:
    dVar87 = dVar87 * auVar48._0_8_;
    dVar67 = dVar67 * auVar48._8_8_;
    dVar78 = dVar78 * (double)CONCAT44(uVar100,uVar29);
    dVar75 = (double)CONCAT44(uVar102,uVar101) * 0.0;
    auVar91._8_4_ = SUB84(dVar67,0);
    auVar91._0_8_ = dVar87;
    auVar91._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
    auVar59._4_4_ = uVar104;
    auVar59._0_4_ = uVar103;
    auVar59._8_4_ = uVar105;
    auVar59._12_4_ = uVar106;
    dVar65 = auVar59._8_8_;
    auVar69._4_4_ = uVar104;
    auVar69._0_4_ = uVar103;
    auVar69._8_4_ = uVar105;
    auVar69._12_4_ = uVar106;
    auVar10._4_4_ = uVar97;
    auVar10._0_4_ = uVar96;
    auVar10._8_4_ = uVar98;
    auVar10._12_4_ = uVar99;
    auVar43 = blendpd(auVar69,auVar10,2);
    auVar90._0_8_ = auVar91._8_8_ * (double)CONCAT44(uVar104,uVar103) - dVar87 * dVar65;
    auVar90._8_8_ =
         dVar78 * (double)CONCAT44(uVar106,uVar105) - dVar67 * (double)CONCAT44(uVar97,uVar96);
    auVar48._0_8_ = dVar78 * auVar43._0_8_;
    auVar48._8_8_ = dVar75 * auVar43._8_8_;
LAB_14df4ff88:
    auVar30._8_4_ = SUB84(dVar67,0);
    auVar30._0_8_ = dVar87;
    auVar30._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
    auVar8._8_4_ = SUB84(dVar75,0);
    auVar8._0_8_ = dVar78;
    auVar8._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
    auVar73 = blendpd(auVar30,auVar8,2);
    auVar31._0_8_ = auVar73._0_8_ * (double)CONCAT44(uVar97,uVar96) - auVar48._0_8_;
    auVar31._8_8_ = auVar73._8_8_ * (double)CONCAT44(uVar99,uVar98) - auVar48._8_8_;
    dVar75 = auVar90._8_8_ + auVar90._8_8_;
    dVar57 = auVar31._0_8_ + auVar31._0_8_;
    auVar73 = blendpd(auVar90,auVar31,2);
    auVar48._0_8_ = auVar73._0_8_ + auVar73._0_8_;
    auVar48._8_8_ = auVar73._8_8_ + auVar73._8_8_;
    auVar46._8_4_ = SUB84(dVar57,0);
    auVar46._0_8_ = dVar75;
    uVar29 = (undefined4)((ulonglong)dVar57 >> 0x20);
    auVar46._12_4_ = uVar29;
    auVar32._8_4_ = SUB84(dVar57,0);
    auVar32._0_8_ = dVar75;
    auVar32._12_4_ = uVar29;
    auVar73 = blendpd(auVar32,auVar48,2);
    auVar47._0_8_ = auVar46._8_8_ * (double)CONCAT44(uVar104,uVar103) - dVar75 * dVar65;
    auVar47._8_8_ =
         auVar48._0_8_ * (double)CONCAT44(uVar106,uVar105) -
         dVar57 * (double)CONCAT44(uVar97,uVar96);
    dVar87 = dVar75 * (double)CONCAT44(uVar99,uVar98) + dVar87;
    dVar67 = dVar57 * (double)CONCAT44(uVar99,uVar98) + dVar67;
    dVar78 = auVar48._0_8_ * (double)CONCAT44(uVar99,uVar98) + dVar78;
LAB_14df4fff2:
    auVar33._0_8_ = auVar73._0_8_ * (double)CONCAT44(uVar97,uVar96) - auVar48._0_8_ * auVar43._0_8_;
    auVar33._8_8_ = auVar73._8_8_ * (double)CONCAT44(uVar99,uVar98) - auVar48._8_8_ * auVar43._8_8_;
    auVar48 = blendpd(auVar47,auVar33,2);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar87 + auVar47._8_8_ + (double)CONCAT44(uVar115,uVar114);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar67 + auVar33._0_8_ + (double)CONCAT44(uVar117,uVar116);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar78 + auVar48._0_8_ + (double)CONCAT44(uVar119,uVar118);
    break;
  case OrientAndScale:
    uVar19 = 0;
    if (param_1 < (this->CachedData).TargetRefPoseLengths.ArrayNum) {
      uVar19 = uVar26;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    dVar78 = *(double *)
              ((this->CachedData).TargetRefPoseLengths.AllocatorInstance.Data + lVar25 * 8);
    uVar19 = 0;
    if (param_1 < (this->CachedData).SourceRefPoseLengths.ArrayNum) {
      uVar19 = uVar26;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    dVar87 = *(double *)
              ((this->CachedData).SourceRefPoseLengths.AllocatorInstance.Data + lVar25 * 8);
    uVar19 = 0;
    if (param_1 < (this->CachedData).SourceBoneIndices.ArrayNum) {
      uVar19 = uVar26;
    }
    if ((uVar19 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    uVar19 = *(uint *)((this->CachedData).SourceBoneIndices.AllocatorInstance.Data + lVar25 * 4);
    uVar20 = 0;
    if ((int)uVar19 < param_7->ArrayNum) {
      uVar20 = ~uVar19 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    pFVar2 = (param_7->AllocatorInstance).Data;
    pTVar22 = FRetargetSkeleton::GetParentTransform(param_8,uVar19,param_7);
    pFVar1 = pFVar2 + (longlong)(int)uVar19 * 0x60 + 0x20;
    local_1f8 = *(double *)pFVar1;
    dStack_1f0 = *(double *)(pFVar1 + 8);
    local_1e8 = *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x60 + 0x30);
    local_1e0 = (pTVar22->Translation).XY.m128d_f64[0];
    dStack_1d8 = (pTVar22->Translation).XY.m128d_f64[1];
    local_1d0 = (pTVar22->Translation).ZW.m128d_f64[0];
    dVar57 = local_1f8 - local_1e0;
    dVar75 = dStack_1f0 - dStack_1d8;
    dVar65 = local_1e8 - local_1d0;
    dVar67 = SQRT(dVar75 * dVar75 + dVar57 * dVar57 + dVar65 * dVar65);
    uVar56 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar76 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar66 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 < dVar67) {
      dVar5 = __real_3ff0000000000000 / dVar67;
      uVar56 = dVar75 * dVar5;
      uVar76 = dVar65 * dVar5;
      uVar66 = dVar57 * dVar5;
    }
    if ((dVar78 <= __real_3fb99999a0000000) || (dVar87 <= __real_3fb99999a0000000)) {
      dVar67 = dVar67 - dVar87;
      pTVar23 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                          ((FResolvedRetargetPoseSet *)&param_9->_padding_);
      uVar26 = 0;
      if ((int)uVar18 < pTVar23->ArrayNum) {
        uVar26 = uVar27;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        pTVar21 = (TVector<double> *)(*pcVar4)();
        return pTVar21;
      }
      pFVar2 = (pTVar23->AllocatorInstance).Data;
      auVar62._4_4_ = uVar104;
      auVar62._0_4_ = uVar103;
      auVar62._8_4_ = uVar105;
      auVar62._12_4_ = uVar106;
      auVar72._4_4_ = uVar104;
      auVar72._0_4_ = uVar103;
      auVar72._8_4_ = uVar105;
      auVar72._12_4_ = uVar106;
      auVar9._4_4_ = uVar97;
      auVar9._0_4_ = uVar96;
      auVar9._8_4_ = uVar98;
      auVar9._12_4_ = uVar99;
      auVar73 = blendpd(auVar72,auVar9,2);
      pFVar1 = pFVar2 + lVar28 * 0x60 + 0x20;
      local_248[0] = *(double *)(pFVar2 + lVar28 * 0x60 + 0x30) * local_248[0];
      local_248[1] = local_248[1] * 0.0;
      auVar48._0_8_ = *(double *)pFVar1 * auVar48._0_8_;
      auVar48._8_8_ = *(double *)(pFVar1 + 8) * auVar48._8_8_;
      auVar110._8_4_ = SUB84(auVar48._8_8_,0);
      auVar110._0_8_ = auVar48._0_8_;
      uVar29 = (undefined4)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar110._12_4_ = uVar29;
      auVar39._8_4_ = SUB84(auVar48._8_8_,0);
      auVar39._0_8_ = auVar48._0_8_;
      auVar39._12_4_ = uVar29;
      auVar6._8_4_ = SUB84(local_248[1],0);
      auVar6._0_8_ = local_248[0];
      auVar6._12_4_ = (int)((ulonglong)local_248[1] >> 0x20);
      auVar43 = blendpd(auVar39,auVar6,2);
      auVar111._0_8_ =
           auVar110._8_8_ * (double)CONCAT44(uVar104,uVar103) - auVar48._0_8_ * auVar62._8_8_;
      auVar111._8_8_ =
           local_248[0] * (double)CONCAT44(uVar106,uVar105) -
           auVar48._8_8_ * (double)CONCAT44(uVar97,uVar96);
      auVar82._8_4_ = SUB84(auVar111._8_8_,0);
      auVar82._0_8_ = auVar111._0_8_;
      auVar82._12_4_ = (int)((ulonglong)auVar111._8_8_ >> 0x20);
      auVar40._0_8_ = auVar43._0_8_ * (double)CONCAT44(uVar97,uVar96) - local_248[0] * auVar73._0_8_
      ;
      auVar40._8_8_ = auVar43._8_8_ * (double)CONCAT44(uVar99,uVar98) - local_248[1] * auVar73._8_8_
      ;
      auVar43 = blendpd(auVar111,auVar40,2);
      dVar78 = auVar82._8_8_ + auVar82._8_8_;
      dVar87 = auVar40._0_8_ + auVar40._0_8_;
      auVar112._0_8_ = auVar43._0_8_ + auVar43._0_8_;
      auVar112._8_8_ = auVar43._8_8_ + auVar43._8_8_;
      auVar51._8_4_ = SUB84(dVar87,0);
      auVar51._0_8_ = dVar78;
      uVar29 = (undefined4)((ulonglong)dVar87 >> 0x20);
      auVar51._12_4_ = uVar29;
      auVar41._8_4_ = SUB84(dVar87,0);
      auVar41._0_8_ = dVar78;
      auVar41._12_4_ = uVar29;
      auVar43 = blendpd(auVar41,auVar112,2);
      auVar52._0_8_ = auVar51._8_8_ * (double)CONCAT44(uVar104,uVar103) - dVar78 * auVar62._8_8_;
      auVar52._8_8_ =
           auVar112._0_8_ * (double)CONCAT44(uVar106,uVar105) -
           dVar87 * (double)CONCAT44(uVar97,uVar96);
      auVar42._0_8_ =
           auVar43._0_8_ * (double)CONCAT44(uVar97,uVar96) - auVar112._0_8_ * auVar73._0_8_;
      auVar42._8_8_ =
           auVar43._8_8_ * (double)CONCAT44(uVar99,uVar98) - auVar112._8_8_ * auVar73._8_8_;
      auVar43 = blendpd(auVar52,auVar42,2);
      dVar78 = ((dVar78 * (double)CONCAT44(uVar99,uVar98) + auVar48._0_8_ + auVar52._8_8_ +
                (double)CONCAT44(uVar115,uVar114)) - (double)CONCAT44(uVar115,uVar114)) +
               dVar67 * (double)uVar66;
      auVar48._0_8_ =
           ((auVar112._0_8_ * (double)CONCAT44(uVar99,uVar98) + local_248[0] + auVar43._0_8_ +
            (double)CONCAT44(uVar119,uVar118)) - (double)CONCAT44(uVar119,uVar118)) +
           (double)uVar76 * dVar67;
      auVar48._8_8_ =
           ((dVar87 * (double)CONCAT44(uVar99,uVar98) + auVar48._8_8_ + auVar42._0_8_ +
            (double)CONCAT44(uVar117,uVar116)) - (double)CONCAT44(uVar117,uVar116)) +
           (double)uVar56 * dVar67;
    }
    else {
      uVar18 = 0;
      if (param_1 < (this->CachedData).FromToGlobalRotationDeltas.ArrayNum) {
        uVar18 = uVar26;
      }
      dVar67 = (dVar78 / dVar87) * dVar67;
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        pTVar21 = (TVector<double> *)(*pcVar4)();
        return pTVar21;
      }
      pFVar1 = (this->CachedData).FromToGlobalRotationDeltas.AllocatorInstance.Data;
      auVar43 = *(undefined1 (*) [16])(pFVar1 + lVar25 * 0x20);
      dVar77 = auVar43._0_8_;
      pFVar1 = pFVar1 + lVar25 * 0x20 + 0x10;
      auVar48._8_8_ = *(double *)pFVar1;
      dVar57 = *(double *)(pFVar1 + 8);
      dVar86 = auVar43._8_8_;
      auVar109._8_4_ = auVar43._0_4_;
      auVar109._0_8_ = dVar77;
      auVar109._12_4_ = auVar43._4_4_;
      dVar5 = param_2->Z;
      dVar14 = param_2->W;
      dVar15 = param_2->X;
      dVar16 = param_2->Y;
      auVar37._8_4_ = auVar43._8_4_;
      auVar37._0_8_ = dVar86;
      auVar37._12_4_ = auVar43._12_4_;
      dVar87 = dVar5 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar78 = dVar14 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar75 = dVar15 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar65 = dVar16 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar107 = dVar77 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar57 * dVar15 +
                dVar86 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                auVar48._8_8_ * dVar16 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar113 = auVar109._8_8_ * dVar5 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar57 * dVar16 +
                auVar37._8_8_ * dVar14 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar48._8_8_ * dVar15 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar50._8_4_ = SUB84(dVar65,0);
      auVar50._0_8_ = dVar75;
      auVar50._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
      auVar80._8_4_ = SUB84(dVar78,0);
      auVar80._0_8_ = dVar87;
      auVar80._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
      auVar48._0_8_ =
           dVar77 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar57 * dVar5 +
           dVar86 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           auVar48._8_8_ * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      auVar48._8_8_ =
           dVar77 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar57 * dVar14 +
           dVar86 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           auVar48._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar71._8_4_ = SUB84(auVar48._8_8_,0);
      auVar71._0_8_ = auVar48._0_8_;
      auVar71._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      auVar61._8_4_ = SUB84(dVar107,0);
      auVar61._0_8_ = dVar107;
      auVar61._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
      local_278._8_4_ = SUB84(auVar48._0_8_,0);
      local_278._0_8_ = auVar48._0_8_;
      local_278._12_4_ = (int)((ulonglong)auVar48._0_8_ >> 0x20);
      auVar38._8_4_ = SUB84(dVar113,0);
      auVar38._0_8_ = dVar113;
      auVar38._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
      local_218._0_8_ =
           dVar107 * auVar80._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + auVar71._8_8_ * dVar75 +
           dVar113 * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           auVar48._0_8_ * auVar50._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_218._8_8_ =
           auVar61._8_8_ * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + auVar48._8_8_ * dVar65 +
           auVar38._8_8_ * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + (double)local_278._8_8_ * dVar75 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar48._8_8_ =
           dVar107 * dVar75 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           auVar48._8_8_ * dVar78 +
           dVar113 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           (double)local_278._8_8_ * dVar87 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_218._24_4_ = SUB84(auVar48._8_8_,0);
      local_218._16_8_ =
           dVar107 * auVar50._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + auVar71._8_8_ * dVar87 +
           dVar113 * dVar75 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           auVar48._0_8_ * auVar80._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_218._28_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
      local_238._s_0.X = dVar67 * (double)uVar66;
      local_238._s_0.Y = dVar67 * (double)uVar56;
      local_238._s_0.Z = dVar67 * (double)uVar76;
      pTVar21 = UE::Math::TQuat<double>::RotateVector
                          ((TQuat<double> *)local_218,local_1c8,(TVector<double> *)&local_238._s_0);
      auVar43 = *(undefined1 (*) [16])&pTVar21->field0_0x0;
      dVar78 = auVar43._0_8_;
      auVar48._0_8_ = (pTVar21->field0_0x0)._s_0.Z;
      auVar13._4_8_ = dVar87;
      auVar13._0_4_ = auVar43._4_4_;
      auVar81._0_8_ = auVar13._0_8_ << 0x20;
      auVar81._8_4_ = auVar43._8_4_;
      auVar81._12_4_ = auVar43._12_4_;
      auVar48._8_8_ = auVar81._8_8_;
      uVar114 = local_268._0_4_;
      uVar115 = local_268._4_4_;
      uVar116 = uStack_260;
      uVar117 = uStack_25c;
      uVar118 = local_258._0_4_;
      uVar119 = local_258._4_4_;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar115,uVar114) + dVar78;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar117,uVar116) + auVar48._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar119,uVar118) + auVar48._0_8_;
    break;
  default:
    pTVar23 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                        ((FResolvedRetargetPoseSet *)&param_9->_padding_);
    uVar26 = 0;
    if ((int)uVar18 < pTVar23->ArrayNum) {
      uVar26 = uVar27;
    }
    if ((uVar26 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar4)();
      return pTVar21;
    }
    pFVar2 = (pTVar23->AllocatorInstance).Data;
    auVar53._4_4_ = uVar104;
    auVar53._0_4_ = uVar103;
    auVar53._8_4_ = uVar105;
    auVar53._12_4_ = uVar106;
    auVar74._4_4_ = uVar104;
    auVar74._0_4_ = uVar103;
    auVar74._8_4_ = uVar105;
    auVar74._12_4_ = uVar106;
    dVar67 = (double)CONCAT44(uVar99,uVar98);
    pFVar1 = pFVar2 + lVar28 * 0x60 + 0x20;
    auVar48._0_8_ = *(double *)pFVar1 * auVar48._0_8_;
    auVar48._8_8_ = *(double *)(pFVar1 + 8) * auVar48._8_8_;
    uVar88 = (undefined4)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar95._0_8_ = *(double *)(pFVar2 + lVar28 * 0x60 + 0x30) * (double)CONCAT44(uVar100,uVar29);
    auVar95._8_8_ = (double)CONCAT44(uVar102,uVar101) * 0.0;
    auVar43._4_4_ = uVar97;
    auVar43._0_4_ = uVar96;
    auVar43._8_4_ = uVar98;
    auVar43._12_4_ = uVar99;
    auVar74 = blendpd(auVar74,auVar43,2);
    auVar83._8_4_ = SUB84(auVar48._8_8_,0);
    auVar83._0_8_ = auVar48._0_8_;
    auVar83._12_4_ = uVar88;
    auVar73._8_4_ = SUB84(auVar48._8_8_,0);
    auVar73._0_8_ = auVar48._0_8_;
    auVar73._12_4_ = uVar88;
    auVar43 = blendpd(auVar73,auVar95,2);
    auVar84._0_8_ =
         auVar83._8_8_ * (double)CONCAT44(uVar104,uVar103) - auVar53._8_8_ * auVar48._0_8_;
    auVar84._8_8_ =
         auVar95._0_8_ * (double)CONCAT44(uVar106,uVar105) -
         (double)CONCAT44(uVar97,uVar96) * auVar48._8_8_;
    auVar44._0_8_ = auVar43._0_8_ * (double)CONCAT44(uVar97,uVar96) - auVar74._0_8_ * auVar95._0_8_;
    auVar44._8_8_ = auVar43._8_8_ * (double)CONCAT44(uVar99,uVar98) - auVar74._8_8_ * auVar95._8_8_;
    dVar78 = auVar84._8_8_ + auVar84._8_8_;
    dVar87 = auVar44._0_8_ + auVar44._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar87 >> 0x20);
    auVar43 = blendpd(auVar84,auVar44,2);
    auVar45._8_4_ = uVar98;
    auVar45._0_8_ = dVar67;
    auVar45._12_4_ = uVar99;
    auVar63._8_4_ = SUB84(dVar87,0);
    auVar63._0_8_ = dVar78;
    auVar63._12_4_ = uVar29;
    auVar85._0_8_ = auVar43._0_8_ + auVar43._0_8_;
    auVar85._8_8_ = auVar43._8_8_ + auVar43._8_8_;
    auVar64._0_8_ = auVar63._8_8_ * (double)CONCAT44(uVar104,uVar103) - auVar53._8_8_ * dVar78;
    auVar64._8_8_ =
         auVar85._0_8_ * (double)CONCAT44(uVar106,uVar105) -
         (double)CONCAT44(uVar97,uVar96) * dVar87;
    auVar54._8_4_ = SUB84(dVar87,0);
    auVar54._0_8_ = dVar78;
    auVar54._12_4_ = uVar29;
    auVar43 = blendpd(auVar54,auVar85,2);
    auVar55._0_8_ = auVar43._0_8_ * (double)CONCAT44(uVar97,uVar96) - auVar74._0_8_ * auVar85._0_8_;
    auVar55._8_8_ = auVar43._8_8_ * (double)CONCAT44(uVar99,uVar98) - auVar74._8_8_ * auVar85._8_8_;
    auVar43 = blendpd(auVar64,auVar55,2);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar67 * dVar78 + auVar48._0_8_ + auVar64._8_8_ + (double)CONCAT44(uVar115,uVar114);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         auVar45._8_8_ * dVar87 + auVar48._8_8_ + auVar55._0_8_ + (double)CONCAT44(uVar117,uVar116);
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar67 * auVar85._0_8_ + auVar95._0_8_ + auVar43._0_8_ + (double)CONCAT44(uVar119,uVar118);
  }
  return __return_storage_ptr__;
}

// RetargetRotation @ 14df50c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
FChainDecoderFK::RetargetRotation
          (FChainDecoderFK *this,TQuat<double> *__return_storage_ptr__,int param_1,
          FRetargetFKChainSettings *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          FTargetSkeleton *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,
          FChainEncoderFK *param_6,TTransform<double> *param_7,TTransform<double> *param_8)

{
  int iVar1;
  FResolvedBoneChain *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  TQuat<double> *pTVar24;
  TTransform<double> *pTVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  undefined4 uVar33;
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
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  uint local_288;
  uint local_284;
  TQuat<double> *local_280;
  FResolvedBoneChain *local_278;
  TArray<int,TSizedDefaultAllocator<32>_> *local_270;
  FTargetSkeleton *local_268;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_260;
  FChainDecoderFK *local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  double local_220;
  double local_218 [2];
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  uVar28 = 0;
  local_268 = param_4;
  local_260 = param_5;
  lVar32 = (longlong)param_1;
  local_270 = param_3;
  uVar23 = 0;
  local_280 = __return_storage_ptr__;
  local_258 = this;
  if (param_2->RotationMode == CopyLocal) {
    pFVar2 = this->BoneChain;
    local_284 = (uint)~param_1 >> 0x1f;
    iVar1 = (pFVar2->Params).ArrayNum;
    uVar27 = 0;
    uVar26 = uVar27;
    if (param_1 < iVar1) {
      uVar26 = local_284;
    }
    if ((uVar26 == 0) &&
       (local_298 = lVar32, local_290 = (longlong)iVar1,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    local_228 = (double)*(float *)((pFVar2->Params).AllocatorInstance.Data + lVar32 * 4);
    uVar22 = FResolvedBoneChain::GetBoneClosestToParam(param_6->BoneChain,&local_228);
    lVar29 = (longlong)(int)uVar22;
    iVar1 = (param_6->CurrentGlobalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    uVar31 = ~uVar22 >> 0x1f;
    uVar26 = uVar27;
    if ((int)uVar22 < iVar1) {
      uVar26 = uVar31;
    }
    if ((uVar26 == 0) &&
       (local_298 = lVar29,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    pFVar3 = (param_6->CurrentGlobalTransforms).AllocatorInstance.Data;
    lVar30 = lVar29 * 0x60;
    dVar18 = *(double *)(pFVar3 + lVar30 + 8);
    (param_7->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar30);
    (param_7->Rotation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x10 + 8);
    (param_7->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x10);
    (param_7->Rotation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x20 + 8);
    (param_7->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x20);
    (param_7->Translation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x30 + 8);
    (param_7->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x30);
    (param_7->Translation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x40 + 8);
    (param_7->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x40);
    (param_7->Scale3D).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x50 + 8);
    (param_7->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x50);
    (param_7->Scale3D).ZW.m128d_f64[1] = dVar18;
    local_278 = param_6->BoneChain;
    iVar1 = (local_278->RefPoseGlobalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    uVar26 = uVar27;
    if ((int)uVar22 < iVar1) {
      uVar26 = uVar31;
    }
    if ((uVar26 == 0) &&
       (local_298 = lVar29,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    uVar26 = local_284;
    pFVar3 = (local_278->RefPoseGlobalTransforms).AllocatorInstance.Data;
    dVar18 = *(double *)(pFVar3 + lVar30 + 8);
    (param_8->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar30);
    (param_8->Rotation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x10 + 8);
    (param_8->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x10);
    (param_8->Rotation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x20 + 8);
    (param_8->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x20);
    (param_8->Translation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x30 + 8);
    (param_8->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x30);
    (param_8->Translation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x40 + 8);
    (param_8->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x40);
    (param_8->Scale3D).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + lVar30 + 0x50 + 8);
    (param_8->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar30 + 0x50);
    (param_8->Scale3D).ZW.m128d_f64[1] = dVar18;
    local_290 = (longlong)local_270->ArrayNum;
    if (param_1 < local_270->ArrayNum) {
      uVar27 = local_284;
    }
    if ((uVar27 == 0) &&
       (local_298 = lVar32,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    uVar40 = UE::Math::TQuat<double>::Identity.W._4_4_;
    uVar39 = UE::Math::TQuat<double>::Identity.W._0_4_;
    uVar38 = UE::Math::TQuat<double>::Identity.Z._4_4_;
    uVar37 = UE::Math::TQuat<double>::Identity.Z._0_4_;
    uVar36 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    uVar35 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uVar34 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uVar33 = UE::Math::TQuat<double>::Identity.X._0_4_;
    iVar1 = (int)local_268->_padding_;
    local_290 = (longlong)iVar1;
    local_248 = UE::Math::TQuat<double>::Identity.X._0_4_;
    uStack_244 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uStack_240 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uStack_23c = UE::Math::TQuat<double>::Identity.Y._4_4_;
    local_238 = UE::Math::TQuat<double>::Identity.Z._0_4_;
    uStack_234 = UE::Math::TQuat<double>::Identity.Z._4_4_;
    uStack_230 = UE::Math::TQuat<double>::Identity.W._0_4_;
    uStack_22c = UE::Math::TQuat<double>::Identity.W._4_4_;
    local_288 = *(uint *)((local_270->AllocatorInstance).Data + lVar32 * 4);
    local_298 = (longlong)(int)local_288;
    uVar27 = uVar23;
    if ((int)local_288 < iVar1) {
      uVar27 = ~local_288 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    local_288 = *(uint *)(local_268->_padding_ + (longlong)(int)local_288 * 4);
    local_298 = (longlong)(int)local_288;
    if (local_288 != 0xffffffff) {
      local_290 = (longlong)local_260->ArrayNum;
      uVar27 = uVar23;
      if ((int)local_288 < local_260->ArrayNum) {
        uVar27 = ~local_288 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
      pFVar4 = (local_260->AllocatorInstance).Data;
      pFVar3 = pFVar4 + (longlong)(int)local_288 * 0x60;
      uVar33 = *(undefined4 *)pFVar3;
      uVar34 = *(undefined4 *)(pFVar3 + 4);
      uVar35 = *(undefined4 *)(pFVar3 + 8);
      uVar36 = *(undefined4 *)(pFVar3 + 0xc);
      pFVar4 = pFVar4 + (longlong)(int)local_288 * 0x60 + 0x10;
      uVar37 = *(undefined4 *)pFVar4;
      uVar38 = *(undefined4 *)(pFVar4 + 4);
      uVar39 = *(undefined4 *)(pFVar4 + 8);
      uVar40 = *(undefined4 *)(pFVar4 + 0xc);
      local_248 = uVar33;
      uStack_244 = uVar34;
      uStack_240 = uVar35;
      uStack_23c = uVar36;
      local_238 = uVar37;
      uStack_234 = uVar38;
      uStack_230 = uVar39;
      uStack_22c = uVar40;
    }
    local_278 = param_6->BoneChain;
    iVar1 = (local_278->CurrentLocalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    uVar27 = uVar23;
    if ((int)uVar22 < iVar1) {
      uVar27 = uVar31;
    }
    if ((uVar27 == 0) &&
       (local_298 = (longlong)(int)uVar22,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    pFVar2 = param_6->BoneChain;
    pFVar4 = (local_278->CurrentLocalTransforms).AllocatorInstance.Data;
    iVar1 = (pFVar2->RefPoseLocalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    pFVar3 = pFVar4 + lVar30;
    dVar18 = *(double *)pFVar3;
    dVar9 = *(double *)(pFVar3 + 8);
    pFVar4 = pFVar4 + lVar30 + 0x10;
    dVar13 = *(double *)pFVar4;
    dVar15 = *(double *)(pFVar4 + 8);
    if ((int)uVar22 < iVar1) {
      uVar23 = uVar31;
    }
    if ((uVar23 == 0) &&
       (local_298 = (longlong)(int)uVar22,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    pFVar3 = (pFVar2->RefPoseLocalTransforms).AllocatorInstance.Data;
    uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
    uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
    uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
    uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
    uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
    uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
    uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
    uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
    uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
    uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
    uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
    pFVar4 = pFVar3 + lVar30 + 0x10;
    dVar7 = *(double *)pFVar4 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar8 = *(double *)(pFVar4 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    pFVar3 = pFVar3 + lVar30;
    dVar12 = *(double *)pFVar3 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar14 = *(double *)(pFVar3 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    pFVar2 = local_258->BoneChain;
    iVar1 = (pFVar2->RefPoseLocalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    if (param_1 < iVar1) {
      uVar28 = uVar26;
    }
    dVar19 = dVar18 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar15 * dVar12 +
             dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar13 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar20 = dVar18 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar15 * dVar14 +
             dVar9 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar13 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar17 = dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar15 * dVar7 +
             dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar18 = dVar18 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar15 * dVar8 +
             dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar13 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    if (uVar28 == 0) {
      local_298 = lVar32;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
      uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
      uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
      uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
      uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
      uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
      uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
      uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
      uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
      uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
      uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
      uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
      uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    }
    pFVar3 = (pFVar2->RefPoseLocalTransforms).AllocatorInstance.Data;
    pFVar4 = pFVar3 + lVar32 * 0x60 + 0x10;
    dVar9 = *(double *)pFVar4;
    dVar13 = *(double *)(pFVar4 + 8);
    pFVar3 = pFVar3 + lVar32 * 0x60;
    dVar12 = *(double *)pFVar3;
    dVar14 = *(double *)(pFVar3 + 8);
    dVar15 = dVar13 * dVar19 * (double)CONCAT44(uVar46,uVar45) + dVar12 * dVar18 +
             dVar9 * dVar20 * (double)CONCAT44(uVar43,uVar47) +
             dVar14 * dVar17 * (double)CONCAT44(uVar52,uVar41);
    dVar7 = dVar9 * dVar19 * (double)CONCAT44(uVar44,uVar48) + dVar14 * dVar18 +
            dVar13 * dVar20 * (double)CONCAT44(uVar50,uVar42) +
            dVar12 * dVar17 * (double)CONCAT44(uVar49,uVar51);
    dVar8 = dVar14 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar9 * dVar18 +
            dVar12 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar12 = dVar12 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar13 * dVar18 +
             dVar14 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar18 = (double)CONCAT44(uVar34,uVar33) * dVar12 * (double)CONCAT44(uVar46,uVar45) +
             (double)CONCAT44(uVar40,uVar39) * dVar15 +
             (double)CONCAT44(uVar36,uVar35) * dVar8 * (double)CONCAT44(uVar43,uVar47) +
             (double)CONCAT44(uVar38,uVar37) * dVar7 * (double)CONCAT44(uVar52,uVar41);
    dVar9 = (double)CONCAT44(uVar34,uVar33) * dVar8 * (double)CONCAT44(uVar44,uVar48) +
            (double)CONCAT44(uVar40,uVar39) * dVar7 +
            (double)CONCAT44(uVar36,uVar35) * dVar12 * (double)CONCAT44(uVar50,uVar42) +
            (double)CONCAT44(uVar38,uVar37) * dVar15 * (double)CONCAT44(uVar49,uVar51);
    dVar13 = (double)CONCAT44(uVar34,uVar33) * dVar7 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             (double)CONCAT44(uVar40,uVar39) * dVar8 +
             (double)CONCAT44(uVar36,uVar35) * dVar15 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             (double)CONCAT44(uVar38,uVar37) * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar15 = (double)CONCAT44(uVar34,uVar33) * dVar15 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             (double)CONCAT44(uVar40,uVar39) * dVar12 +
             (double)CONCAT44(uVar36,uVar35) * dVar7 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             (double)CONCAT44(uVar38,uVar37) * dVar8 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar6._8_4_ = SUB84(dVar9,0);
    auVar6._0_8_ = dVar18;
    auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_280->X = dVar18;
    local_280->Y = (double)auVar6._8_8_;
    auVar10._8_4_ = SUB84(dVar15,0);
    auVar10._0_8_ = dVar13;
    auVar10._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    local_280->Z = dVar13;
    local_280->W = (double)auVar10._8_8_;
    return local_280;
  }
  switch(param_2->RotationMode) {
  case Interpolated:
  case MatchChain:
  case MatchScaledChain:
    pFVar2 = this->BoneChain;
    iVar1 = (pFVar2->Params).ArrayNum;
    if (param_1 < iVar1) {
      uVar23 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (local_298 = lVar32, local_290 = (longlong)iVar1,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    dVar18 = (double)*(float *)((pFVar2->Params).AllocatorInstance.Data + lVar32 * 4);
    local_220 = dVar18;
    pTVar25 = FResolvedBoneChain::GetTransformAtChainParam
                        (param_6->BoneChain,&local_208,&param_6->CurrentGlobalTransforms,&local_220)
    ;
    dVar9 = (pTVar25->Rotation).XY.m128d_f64[1];
    (param_7->Rotation).XY.m128d_f64[0] = (pTVar25->Rotation).XY.m128d_f64[0];
    (param_7->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar25->Rotation).ZW.m128d_f64[1];
    (param_7->Rotation).ZW.m128d_f64[0] = (pTVar25->Rotation).ZW.m128d_f64[0];
    (param_7->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (pTVar25->Translation).XY.m128d_f64[1];
    (param_7->Translation).XY.m128d_f64[0] = (pTVar25->Translation).XY.m128d_f64[0];
    (param_7->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar25->Translation).ZW.m128d_f64[1];
    (param_7->Translation).ZW.m128d_f64[0] = (pTVar25->Translation).ZW.m128d_f64[0];
    (param_7->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = (pTVar25->Scale3D).XY.m128d_f64[1];
    (param_7->Scale3D).XY.m128d_f64[0] = (pTVar25->Scale3D).XY.m128d_f64[0];
    (param_7->Scale3D).XY.m128d_f64[1] = dVar9;
    dVar9 = (pTVar25->Scale3D).ZW.m128d_f64[1];
    (param_7->Scale3D).ZW.m128d_f64[0] = (pTVar25->Scale3D).ZW.m128d_f64[0];
    (param_7->Scale3D).ZW.m128d_f64[1] = dVar9;
    local_218[0] = dVar18;
    pTVar25 = FResolvedBoneChain::GetTransformAtChainParam
                        (param_6->BoneChain,&local_1a8,&param_6->BoneChain->RefPoseGlobalTransforms,
                         local_218);
    goto LAB_14df51467;
  case OneToOne:
    iVar1 = (param_6->CurrentGlobalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    if (param_1 < iVar1) {
      if ((param_1 < 0) &&
         (local_298 = lVar32,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
      pFVar3 = (param_6->CurrentGlobalTransforms).AllocatorInstance.Data;
      lVar29 = lVar32 * 0x60;
      dVar18 = *(double *)(pFVar3 + lVar29 + 8);
      (param_7->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29);
      (param_7->Rotation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x10 + 8);
      (param_7->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x10);
      (param_7->Rotation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x20 + 8);
      (param_7->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x20);
      (param_7->Translation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x30 + 8);
      (param_7->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x30);
      (param_7->Translation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x40 + 8);
      (param_7->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x40);
      (param_7->Scale3D).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x50 + 8);
      (param_7->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x50);
      (param_7->Scale3D).ZW.m128d_f64[1] = dVar18;
      pFVar2 = param_6->BoneChain;
      iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
      local_290 = (longlong)iVar1;
      if (param_1 < iVar1) {
        uVar23 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (local_298 = lVar32,
         bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
      pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
      dVar18 = *(double *)(pFVar3 + lVar29 + 8);
      (param_8->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29);
      (param_8->Rotation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x10 + 8);
      (param_8->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x10);
      (param_8->Rotation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x20 + 8);
      (param_8->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x20);
      (param_8->Translation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x30 + 8);
      (param_8->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x30);
      (param_8->Translation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x40 + 8);
      (param_8->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x40);
      (param_8->Scale3D).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x50 + 8);
      (param_8->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x50);
      (param_8->Scale3D).ZW.m128d_f64[1] = dVar18;
      __return_storage_ptr__ = local_280;
    }
    else {
      uVar27 = iVar1 - 1;
      uVar26 = uVar23;
      if ((int)uVar27 < iVar1) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      if (uVar26 == 0) {
        local_298 = (longlong)(int)uVar27;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          pTVar24 = (TQuat<double> *)(*pcVar5)();
          return pTVar24;
        }
      }
      pFVar3 = (param_6->CurrentGlobalTransforms).AllocatorInstance.Data;
      lVar29 = (longlong)(param_6->CurrentGlobalTransforms).ArrayNum * 0x60;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x60 + 8);
      (param_7->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x60);
      (param_7->Rotation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x50 + 8);
      (param_7->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x50);
      (param_7->Rotation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x40 + 8);
      (param_7->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x40);
      (param_7->Translation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x30 + 8);
      (param_7->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x30);
      (param_7->Translation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x20 + 8);
      (param_7->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x20);
      (param_7->Scale3D).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x10 + 8);
      (param_7->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x10);
      (param_7->Scale3D).ZW.m128d_f64[1] = dVar18;
      pFVar2 = param_6->BoneChain;
      iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
      local_290 = (longlong)iVar1;
      uVar26 = iVar1 - 1;
      if ((int)uVar26 < iVar1) {
        uVar23 = ~uVar26 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_298 = (longlong)(int)uVar26;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          pTVar24 = (TQuat<double> *)(*pcVar5)();
          return pTVar24;
        }
      }
      pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
      lVar29 = (longlong)(pFVar2->RefPoseGlobalTransforms).ArrayNum * 0x60;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x60 + 8);
      (param_8->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x60);
      (param_8->Rotation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x50 + 8);
      (param_8->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x50);
      (param_8->Rotation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x40 + 8);
      (param_8->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x40);
      (param_8->Translation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x30 + 8);
      (param_8->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x30);
      (param_8->Translation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x20 + 8);
      (param_8->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x20);
      (param_8->Scale3D).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + -0x10 + 8);
      (param_8->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + -0x10);
      (param_8->Scale3D).ZW.m128d_f64[1] = dVar18;
    }
    break;
  case OneToOneReversed:
    iVar1 = (param_6->CurrentGlobalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    uVar26 = param_3->ArrayNum - iVar1;
    if ((int)uVar26 < 0) {
      uVar26 = uVar28;
    }
    uVar27 = iVar1 - param_3->ArrayNum;
    if ((int)uVar27 < 0) {
      uVar27 = uVar28;
    }
    if ((int)uVar26 <= param_1) {
      uVar27 = (param_1 - uVar26) + uVar27;
      uVar26 = uVar23;
      if ((int)uVar27 < iVar1) {
        uVar26 = ~uVar27 >> 0x1f;
      }
      local_284 = uVar27;
      if (uVar26 == 0) {
        local_298 = (longlong)(int)uVar27;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          pTVar24 = (TQuat<double> *)(*pcVar5)();
          return pTVar24;
        }
      }
      pFVar3 = (param_6->CurrentGlobalTransforms).AllocatorInstance.Data;
      local_298 = (longlong)(int)uVar27;
      lVar29 = local_298 * 0x60;
      dVar18 = *(double *)(pFVar3 + lVar29 + 8);
      (param_7->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29);
      (param_7->Rotation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x10 + 8);
      (param_7->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x10);
      (param_7->Rotation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x20 + 8);
      (param_7->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x20);
      (param_7->Translation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x30 + 8);
      (param_7->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x30);
      (param_7->Translation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x40 + 8);
      (param_7->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x40);
      (param_7->Scale3D).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x50 + 8);
      (param_7->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x50);
      (param_7->Scale3D).ZW.m128d_f64[1] = dVar18;
      pFVar2 = param_6->BoneChain;
      iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
      local_290 = (longlong)iVar1;
      if ((int)local_284 < iVar1) {
        uVar23 = ~uVar27 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
      pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
      dVar18 = *(double *)(pFVar3 + lVar29 + 8);
      (param_8->Rotation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29);
      (param_8->Rotation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x10 + 8);
      (param_8->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x10);
      (param_8->Rotation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x20 + 8);
      (param_8->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x20);
      (param_8->Translation).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x30 + 8);
      (param_8->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x30);
      (param_8->Translation).ZW.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x40 + 8);
      (param_8->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x40);
      (param_8->Scale3D).XY.m128d_f64[1] = dVar18;
      dVar18 = *(double *)(pFVar3 + lVar29 + 0x50 + 8);
      (param_8->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar29 + 0x50);
      (param_8->Scale3D).ZW.m128d_f64[1] = dVar18;
      __return_storage_ptr__ = local_280;
      break;
    }
    pFVar2 = param_6->BoneChain;
    iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    if (iVar1 < 1) {
      local_298 = 0;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
    }
    pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
    dVar18 = *(double *)(pFVar3 + 8);
    (param_7->Rotation).XY.m128d_f64[0] = *(double *)pFVar3;
    (param_7->Rotation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x18);
    (param_7->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x10);
    (param_7->Rotation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x28);
    (param_7->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + 0x20);
    (param_7->Translation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x38);
    (param_7->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x30);
    (param_7->Translation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x48);
    (param_7->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + 0x40);
    (param_7->Scale3D).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x58);
    (param_7->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x50);
    (param_7->Scale3D).ZW.m128d_f64[1] = dVar18;
    pFVar2 = param_6->BoneChain;
    iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
    local_290 = (longlong)iVar1;
    if (iVar1 < 1) {
      local_298 = 0;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
    }
    pTVar25 = (TTransform<double> *)(pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
LAB_14df51467:
    dVar18 = (pTVar25->Rotation).XY.m128d_f64[1];
    (param_8->Rotation).XY.m128d_f64[0] = (pTVar25->Rotation).XY.m128d_f64[0];
    (param_8->Rotation).XY.m128d_f64[1] = dVar18;
    dVar18 = (pTVar25->Rotation).ZW.m128d_f64[1];
    (param_8->Rotation).ZW.m128d_f64[0] = (pTVar25->Rotation).ZW.m128d_f64[0];
    (param_8->Rotation).ZW.m128d_f64[1] = dVar18;
    dVar18 = (pTVar25->Translation).XY.m128d_f64[1];
    (param_8->Translation).XY.m128d_f64[0] = (pTVar25->Translation).XY.m128d_f64[0];
    (param_8->Translation).XY.m128d_f64[1] = dVar18;
    dVar18 = (pTVar25->Translation).ZW.m128d_f64[1];
    (param_8->Translation).ZW.m128d_f64[0] = (pTVar25->Translation).ZW.m128d_f64[0];
    (param_8->Translation).ZW.m128d_f64[1] = dVar18;
    dVar18 = (pTVar25->Scale3D).XY.m128d_f64[1];
    (param_8->Scale3D).XY.m128d_f64[0] = (pTVar25->Scale3D).XY.m128d_f64[0];
    (param_8->Scale3D).XY.m128d_f64[1] = dVar18;
    dVar18 = (pTVar25->Scale3D).ZW.m128d_f64[1];
    (param_8->Scale3D).ZW.m128d_f64[0] = (pTVar25->Scale3D).ZW.m128d_f64[0];
    (param_8->Scale3D).ZW.m128d_f64[1] = dVar18;
    break;
  case None:
    pFVar2 = param_6->BoneChain;
    iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
    if (iVar1 < 1) {
      local_298 = 0;
      local_290 = (longlong)iVar1;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
    }
    pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
    dVar18 = *(double *)(pFVar3 + 8);
    (param_8->Rotation).XY.m128d_f64[0] = *(double *)pFVar3;
    (param_8->Rotation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x18);
    (param_8->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x10);
    (param_8->Rotation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x28);
    (param_8->Translation).XY.m128d_f64[0] = *(double *)(pFVar3 + 0x20);
    (param_8->Translation).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x38);
    (param_8->Translation).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x30);
    (param_8->Translation).ZW.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x48);
    (param_8->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar3 + 0x40);
    (param_8->Scale3D).XY.m128d_f64[1] = dVar18;
    dVar18 = *(double *)(pFVar3 + 0x58);
    (param_8->Scale3D).ZW.m128d_f64[0] = *(double *)(pFVar3 + 0x50);
    (param_8->Scale3D).ZW.m128d_f64[1] = dVar18;
    pFVar2 = param_6->BoneChain;
    iVar1 = (pFVar2->RefPoseLocalTransforms).ArrayNum;
    if (iVar1 < 1) {
      local_298 = 0;
      local_290 = (longlong)iVar1;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        pTVar24 = (TQuat<double> *)(*pcVar5)();
        return pTVar24;
      }
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
              (&local_148,
               (TTransform<double> *)(pFVar2->RefPoseLocalTransforms).AllocatorInstance.Data,
               &param_6->ChainParentCurrentGlobalTransform);
    (param_7->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
    (param_7->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
    (param_7->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
    (param_7->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
    (param_7->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
    (param_7->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
    (param_7->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
    (param_7->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
    (param_7->Scale3D).XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
    (param_7->Scale3D).XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
    (param_7->Scale3D).ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
    (param_7->Scale3D).ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
    break;
  default:
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\FKChainsOp.cpp"
                        ,0x152,L"");
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
  }
  dVar7 = (param_7->Rotation).XY.m128d_f64[0];
  dVar8 = (param_7->Rotation).XY.m128d_f64[1];
  dVar12 = (param_7->Rotation).ZW.m128d_f64[0];
  dVar14 = (param_7->Rotation).ZW.m128d_f64[1];
  dVar18 = (param_8->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = (param_8->Rotation).ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar13 = (param_8->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar15 = (param_8->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  pFVar2 = local_258->BoneChain;
  iVar1 = (pFVar2->RefPoseGlobalTransforms).ArrayNum;
  local_290 = (longlong)iVar1;
  if (param_1 < iVar1) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  uVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
  uVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
  uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
  uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
  uVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
  uVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
  uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
  uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
  uVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
  uVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
  uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
  uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
  uVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
  uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
  uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
  uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
  uVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
  uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
  uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
  uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
  dVar19 = dVar7 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar14 * dVar13 +
           dVar8 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar20 = dVar7 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar14 * dVar15 +
           dVar8 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar12 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar17 = dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar14 * dVar18 +
           dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar18 = dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar14 * dVar9 +
           dVar8 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar12 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (uVar28 == 0) {
    local_298 = lVar32;
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar5 = (code *)swi(3);
      pTVar24 = (TQuat<double> *)(*pcVar5)();
      return pTVar24;
    }
    uVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
    uVar47 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
    uVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
    uVar49 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
    uVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
    uVar40 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
    uVar43 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
    uVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
    uVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._0_4_;
    uVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]._4_4_;
    uVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._0_4_;
    uVar50 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]._4_4_;
    uVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
    uVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
    uVar41 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
    uVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    uVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
    uVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
    uVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
    uVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
  }
  pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
  pFVar4 = pFVar3 + lVar32 * 0x60 + 0x10;
  dVar7 = *(double *)pFVar4;
  dVar8 = *(double *)(pFVar4 + 8);
  pFVar3 = pFVar3 + lVar32 * 0x60;
  dVar12 = *(double *)pFVar3;
  dVar14 = *(double *)(pFVar3 + 8);
  dVar9 = dVar19 * dVar8 * (double)CONCAT44(uVar38,uVar33) + dVar18 * dVar12 +
          dVar20 * dVar7 * (double)CONCAT44(uVar40,uVar35) +
          dVar17 * dVar14 * (double)CONCAT44(uVar47,uVar37);
  dVar13 = dVar19 * dVar7 * (double)CONCAT44(uVar42,uVar41) + dVar18 * dVar14 +
           dVar20 * dVar8 * (double)CONCAT44(uVar44,uVar43) +
           dVar17 * dVar12 * (double)CONCAT44(uVar49,uVar48);
  dVar15 = dVar19 * dVar14 * (double)CONCAT44(uVar39,uVar34) + dVar18 * dVar7 +
           dVar20 * dVar12 * (double)CONCAT44(uVar45,uVar36) +
           dVar17 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar18 = dVar19 * dVar12 * (double)CONCAT44(uVar51,uVar46) + dVar18 * dVar8 +
           dVar20 * dVar14 * (double)CONCAT44(uVar50,uVar52) +
           dVar17 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar9;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  __return_storage_ptr__->X = dVar9;
  __return_storage_ptr__->Y = (double)auVar11._8_8_;
  auVar16._8_4_ = SUB84(dVar18,0);
  auVar16._0_8_ = dVar15;
  auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  __return_storage_ptr__->Z = dVar15;
  __return_storage_ptr__->W = (double)auVar16._8_8_;
  return __return_storage_ptr__;
}

// RetargetScale @ 14df51d10

TVector<double> * __thiscall
FChainDecoderFK::RetargetScale
          (FChainDecoderFK *this,TVector<double> *__return_storage_ptr__,int param_1,
          TTransform<double> *param_2,TTransform<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FResolvedBoneChain *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  
  pFVar2 = this->BoneChain;
  dVar9 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar10 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar5 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar12 = (param_3->Scale3D).XY.m128d_f64[1];
  uVar14 = 0;
  if (param_1 < (pFVar2->RefPoseGlobalTransforms).ArrayNum) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar4)();
      return pTVar15;
    }
  }
  pFVar3 = (pFVar2->RefPoseGlobalTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x60 + 0x40;
  dVar7 = *(double *)(pFVar1 + 8);
  dVar8 = *(double *)(pFVar3 + (longlong)param_1 * 0x60 + 0x50);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (*(double *)pFVar1 - dVar11) + dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar7 - dVar12) + dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar8 - dVar6) + dVar5;
  return __return_storage_ptr__;
}

// UpdateIntermediateLocalTransforms @ 14df5dae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChainDecoderFK::UpdateIntermediateLocalTransforms
          (FChainDecoderFK *this,FTargetSkeleton *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [16];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar3 = (this->IntermediateParentIndices).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->IntermediateLocalTransforms).ArrayMax;
  (this->IntermediateLocalTransforms).ArrayNum = 0;
  if ((this->IntermediateLocalTransforms).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,&(this->IntermediateLocalTransforms).AllocatorInstance,0,piVar1);
  }
  pFVar11 = (this->IntermediateParentIndices).AllocatorInstance.Data;
  iVar4 = (this->IntermediateParentIndices).ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar4 * 4;
  while( true ) {
    if ((this->IntermediateParentIndices).ArrayNum != iVar4) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar11 == pFVar2) break;
    FRetargetSkeleton::GetLocalTransformOfSingleBone
              ((FRetargetSkeleton *)param_1,&local_a8,*(int *)pFVar11,param_2);
    pTVar5 = (TTransform<double> *)(this->IntermediateLocalTransforms).AllocatorInstance.Data;
    if ((pTVar5 <= &local_a8) && (&local_a8 < pTVar5 + *piVar1)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (this->IntermediateLocalTransforms).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1060,&(this->IntermediateLocalTransforms).AllocatorInstance,piVar1);
    }
    (this->IntermediateLocalTransforms).ArrayNum = iVar9 + 1;
    pFVar6 = (this->IntermediateLocalTransforms).AllocatorInstance.Data;
    lVar10 = (longlong)iVar9 * 0x60;
    pFVar11 = pFVar11 + 4;
    *(double *)(pFVar6 + lVar10) = local_a8.Rotation.XY.m128d_f64[0];
    *(double *)(pFVar6 + lVar10 + 8) = local_a8.Rotation.XY.m128d_f64[1];
    *(double *)(pFVar6 + lVar10 + 0x10) = local_a8.Rotation.ZW.m128d_f64[0];
    *(double *)(pFVar6 + lVar10 + 0x10 + 8) = local_a8.Rotation.ZW.m128d_f64[1];
    *(double *)(pFVar6 + lVar10 + 0x20) = local_a8.Translation.XY.m128d_f64[0];
    *(double *)(pFVar6 + lVar10 + 0x20 + 8) = local_a8.Translation.XY.m128d_f64[1];
    *(double *)(pFVar6 + lVar10 + 0x30) = local_a8.Translation.ZW.m128d_f64[0];
    *(double *)(pFVar6 + lVar10 + 0x30 + 8) = local_a8.Translation.ZW.m128d_f64[1];
    *(double *)(pFVar6 + lVar10 + 0x40) = local_a8.Scale3D.XY.m128d_f64[0];
    *(double *)(pFVar6 + lVar10 + 0x40 + 8) = local_a8.Scale3D.XY.m128d_f64[1];
    *(double *)(pFVar6 + lVar10 + 0x50) = local_a8.Scale3D.ZW.m128d_f64[0];
    *(double *)(pFVar6 + lVar10 + 0x50 + 8) = local_a8.Scale3D.ZW.m128d_f64[1];
  }
  return;
}

// UpdateIntermediateParents @ 14df5dcd0

void __thiscall
FChainDecoderFK::UpdateIntermediateParents
          (FChainDecoderFK *this,FTargetSkeleton *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->IntermediateParentIndices).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->IntermediateParentIndices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)((this->IntermediateParentIndices).AllocatorInstance.Data + lVar6);
      uVar4 = 0;
      if ((int)uVar5 < (this->IntermediateLocalTransforms).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FRetargetSkeleton::UpdateGlobalTransformOfSingleBone
                ((FRetargetSkeleton *)param_1,iVar1,
                 (TTransform<double> *)
                 ((this->IntermediateLocalTransforms).AllocatorInstance.Data +
                 (longlong)(int)uVar5 * 0x60),param_2);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (this->IntermediateParentIndices).ArrayNum);
  }
  return;
}

