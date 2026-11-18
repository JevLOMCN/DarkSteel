// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ContainsNaN @ 14754ed60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FMeshPose::ContainsNaN(FMeshPose *this)

{
  ushort uVar1;
  FBoneContainer *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined7 extraout_var;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar22;
  double dVar21;
  uint uVar23;
  uint uVar25;
  double dVar24;
  
  auVar10 = ___xmm_7ff00000000000007ff0000000000000;
  pFVar2 = this->BoneContainer;
  uVar17 = 0;
  iVar13 = (pFVar2->BoneIndicesArray).ArrayNum;
  if (0 < iVar13) {
    lVar18 = 0;
    do {
      uVar14 = ~uVar17 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar17 < iVar13) {
        uVar15 = uVar14;
      }
      if (uVar15 == 0) {
        uVar14 = 0x506106c8;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          uVar12 = (*pcVar3)();
          return (bool)uVar12;
        }
      }
      uVar1 = *(ushort *)((pFVar2->BoneIndicesArray).AllocatorInstance.Data + lVar18);
      iVar13 = (int)this->_padding_;
      if (iVar13 <= (int)(uint)uVar1) {
        uVar14 = 0x506106c8;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        iVar13 = (int)CONCAT71(extraout_var,bVar11);
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          uVar12 = (*pcVar3)();
          return (bool)uVar12;
        }
      }
      uVar20 = auVar10._0_4_;
      uVar22 = auVar10._4_4_;
      uVar23 = auVar10._8_4_;
      uVar25 = auVar10._12_4_;
      puVar16 = (uint *)((ulonglong)uVar1 * 0x60 + this->_padding_);
      dVar21 = auVar10._0_8_;
      dVar24 = auVar10._8_8_;
      lVar19 = -(ulonglong)((double)CONCAT44(uVar25 & puVar16[7],uVar23 & puVar16[6]) == dVar24);
      auVar4._8_4_ = (int)lVar19;
      auVar4._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & puVar16[5],uVar20 & puVar16[4]) == dVar21);
      auVar4._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar15 = movmskpd(uVar14,auVar4);
      lVar19 = -(ulonglong)((double)CONCAT44(uVar25 & puVar16[3],uVar23 & puVar16[2]) == dVar24);
      auVar7._8_4_ = (int)lVar19;
      auVar7._0_8_ = -(ulonglong)((double)CONCAT44(uVar22 & puVar16[1],uVar20 & *puVar16) == dVar21)
      ;
      auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar13 = movmskpd(iVar13,auVar7);
      if ((uVar15 & 0x3fffffff) != 0 || iVar13 != 0) {
        return true;
      }
      lVar19 = -(ulonglong)((double)CONCAT44(uVar25 & puVar16[0xf],uVar23 & puVar16[0xe]) == dVar24)
      ;
      auVar5._8_4_ = (int)lVar19;
      auVar5._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & puVar16[0xd],uVar20 & puVar16[0xc]) == dVar21);
      auVar5._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar15 = movmskpd(0,auVar5);
      lVar19 = -(ulonglong)((double)CONCAT44(uVar25 & puVar16[0xb],uVar23 & puVar16[10]) == dVar24);
      auVar8._8_4_ = (int)lVar19;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & puVar16[9],uVar20 & puVar16[8]) == dVar21);
      auVar8._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar13 = movmskpd(iVar13,auVar8);
      if ((uVar15 & 0x3fffffff) != 0 || iVar13 != 0) {
        return true;
      }
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & puVar16[0x17],uVar23 & puVar16[0x16]) == dVar24);
      auVar6._8_4_ = (int)lVar19;
      auVar6._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & puVar16[0x15],uVar20 & puVar16[0x14]) == dVar21);
      auVar6._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar15 = movmskpd(0,auVar6);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(uVar25 & puVar16[0x13],uVar23 & puVar16[0x12]) == dVar24);
      auVar9._8_4_ = (int)lVar19;
      auVar9._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar22 & puVar16[0x11],uVar20 & puVar16[0x10]) == dVar21);
      auVar9._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar13 = movmskpd(iVar13,auVar9);
      if ((uVar15 & 0x3fffffff) != 0 || iVar13 != 0) {
        return true;
      }
      iVar13 = (pFVar2->BoneIndicesArray).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 2;
    } while ((int)uVar17 < iVar13);
  }
  return false;
}

// IsNormalized @ 14756aa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FMeshPose::IsNormalized(FMeshPose *this)

{
  double *pdVar1;
  ushort uVar2;
  FBoneContainer *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar11 = _UNK_15061cc8c;
  uVar10 = _UNK_15061cc88;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar3 = this->BoneContainer;
  uVar17 = 0;
  iVar14 = (pFVar3->BoneIndicesArray).ArrayNum;
  if (0 < iVar14) {
    lVar18 = 0;
    fVar24 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
    fVar25 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
    fVar26 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
    fVar27 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
    fVar28 = GlobalVectorConstants::FloatOne.m128_f32[0];
    fVar29 = GlobalVectorConstants::FloatOne.m128_f32[1];
    fVar30 = GlobalVectorConstants::FloatOne.m128_f32[2];
    fVar31 = GlobalVectorConstants::FloatOne.m128_f32[3];
    do {
      uVar15 = 0;
      if ((int)uVar17 < iVar14) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        fVar28 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar29 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar30 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar31 = GlobalVectorConstants::FloatOne.m128_f32[3];
        fVar24 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
        fVar25 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
        fVar26 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
        fVar27 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      }
      uVar2 = *(ushort *)((pFVar3->BoneIndicesArray).AllocatorInstance.Data + lVar18);
      if ((int)this->_padding_ <= (int)(uint)uVar2) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        fVar28 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar29 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar30 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar31 = GlobalVectorConstants::FloatOne.m128_f32[3];
        fVar24 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
        fVar25 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
        fVar26 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
        fVar27 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      }
      if ((int)this->_padding_ <= (int)(uint)uVar2) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        fVar28 = GlobalVectorConstants::FloatOne.m128_f32[0];
        fVar29 = GlobalVectorConstants::FloatOne.m128_f32[1];
        fVar30 = GlobalVectorConstants::FloatOne.m128_f32[2];
        fVar31 = GlobalVectorConstants::FloatOne.m128_f32[3];
        fVar24 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
        fVar25 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
        fVar26 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
        fVar27 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
      }
      lVar4 = this->_padding_;
      lVar16 = (ulonglong)uVar2 * 0x60;
      dVar23 = *(double *)(lVar16 + lVar4);
      dVar20 = ((double *)(lVar16 + lVar4))[1];
      pdVar1 = (double *)(lVar16 + 0x10 + lVar4);
      dVar22 = *pdVar1;
      dVar21 = pdVar1[1];
      dVar23 = dVar22 * dVar22 + dVar23 * dVar23;
      dVar20 = dVar21 * dVar21 + dVar20 * dVar20;
      dVar22 = dVar20 + dVar23;
      dVar23 = dVar23 + dVar20;
      dVar20 = (double)fVar30 - dVar22;
      dVar21 = (double)fVar31 - dVar23;
      lVar19 = -(ulonglong)
                ((double)fVar27 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar11,SUB84(dVar21,0) & uVar10
                                ));
      dVar22 = (double)fVar28 - dVar22;
      dVar23 = (double)fVar29 - dVar23;
      auVar7._8_4_ = (int)lVar19;
      auVar7._0_8_ = -(ulonglong)
                      ((double)fVar26 <
                      (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar9,
                                       SUB84(dVar20,0) & uVar8));
      auVar7._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar15 = movmskpd((int)lVar16,auVar7);
      lVar16 = -(ulonglong)
                ((double)fVar25 <
                (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar11,SUB84(dVar23,0) & uVar10
                                ));
      auVar6._8_4_ = (int)lVar16;
      auVar6._0_8_ = -(ulonglong)
                      ((double)fVar24 <
                      (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar9,
                                       SUB84(dVar22,0) & uVar8));
      auVar6._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      iVar14 = movmskpd((int)lVar4,auVar6);
      if ((uVar15 & 0x3fffffff) != 0 || iVar14 != 0) {
        return false;
      }
      iVar14 = (pFVar3->BoneIndicesArray).ArrayNum;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 2;
    } while ((int)uVar17 < iVar14);
  }
  return true;
}

// ResetToIdentity @ 147576c90

void __thiscall FMeshPose::ResetToIdentity(FMeshPose *this)

{
  FAnimationRuntime::InitializeTransform
            (this->BoneContainer,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this);
  return;
}

// ResetToRefPose @ 147576cb0

void __thiscall FMeshPose::ResetToRefPose(FMeshPose *this)

{
  FAnimationRuntime::FillWithRefPose
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this,
             this->BoneContainer);
  return;
}

