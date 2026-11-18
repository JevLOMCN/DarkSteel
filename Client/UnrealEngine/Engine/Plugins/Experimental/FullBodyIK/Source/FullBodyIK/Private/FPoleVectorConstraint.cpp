// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 3

// operator() @ 14df758d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPoleVectorConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
          (void *this,int param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  double *pdVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  ulonglong uVar13;
  double dVar14;
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
  uint uVar25;
  TTransform<double> *pTVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar29 = (longlong)param_1;
  pTVar26 = UE::Math::TTransform<double>::GetRelativeTransform(param_3,&local_118,param_2);
  plVar3 = *(longlong **)this;
  dVar10 = (pTVar26->Rotation).XY.m128d_f64[0];
  dVar11 = (pTVar26->Rotation).XY.m128d_f64[1];
  dVar14 = (pTVar26->Rotation).ZW.m128d_f64[0];
  dVar15 = (pTVar26->Rotation).ZW.m128d_f64[1];
  dVar16 = (pTVar26->Translation).XY.m128d_f64[0];
  dVar17 = (pTVar26->Translation).XY.m128d_f64[1];
  dVar18 = (pTVar26->Translation).ZW.m128d_f64[0];
  dVar19 = (pTVar26->Translation).ZW.m128d_f64[1];
  dVar20 = (pTVar26->Scale3D).XY.m128d_f64[0];
  dVar21 = (pTVar26->Scale3D).XY.m128d_f64[1];
  dVar22 = (pTVar26->Scale3D).ZW.m128d_f64[0];
  dVar23 = (pTVar26->Scale3D).ZW.m128d_f64[1];
  iVar2 = (int)plVar3[1];
  local_120 = (longlong)iVar2;
  uVar28 = (uint)~param_1 >> 0x1f;
  uVar25 = 0;
  if (param_1 < iVar2) {
    uVar25 = uVar28;
  }
  if (uVar25 == 0) {
    local_128 = lVar29;
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
  lVar4 = *plVar3;
  lVar27 = lVar29 * 0x60;
  *(double *)(lVar4 + lVar27) = dVar10;
  ((double *)(lVar4 + lVar27))[1] = dVar11;
  pdVar1 = (double *)(lVar4 + 0x10 + lVar27);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1 = (double *)(lVar4 + 0x20 + lVar27);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar17;
  pdVar1 = (double *)(lVar4 + 0x30 + lVar27);
  *pdVar1 = dVar18;
  pdVar1[1] = dVar19;
  pdVar1 = (double *)(lVar4 + 0x40 + lVar27);
  *pdVar1 = dVar20;
  pdVar1[1] = dVar21;
  pdVar1 = (double *)(lVar4 + 0x50 + lVar27);
  *pdVar1 = dVar22;
  pdVar1[1] = dVar23;
  plVar3 = *(longlong **)this;
  iVar2 = (int)plVar3[1];
  local_120 = (longlong)iVar2;
  uVar25 = 0;
  if (param_1 < iVar2) {
    uVar25 = uVar28;
  }
  if (uVar25 == 0) {
    local_128 = lVar29;
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
  lVar4 = *plVar3;
  dVar14 = *(double *)(lVar4 + lVar27);
  dVar15 = ((double *)(lVar4 + lVar27))[1];
  pdVar1 = (double *)(lVar4 + 0x10 + lVar27);
  dVar16 = *pdVar1;
  dVar17 = pdVar1[1];
  dVar10 = dVar16 * dVar16 + dVar14 * dVar14;
  dVar11 = dVar17 * dVar17 + dVar15 * dVar15;
  auVar40._8_4_ = SUB84(dVar11,0);
  auVar40._0_8_ = dVar10;
  auVar40._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar34._0_8_ = auVar40._8_8_ + dVar10;
  auVar34._8_8_ = dVar10 + dVar11;
  auVar40 = sqrtpd(in_XMM2,auVar34);
  uVar30 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar34._0_8_);
  uVar32 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar34._8_8_);
  uVar31 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar34._0_8_);
  uVar33 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar34._8_8_);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
  auVar36._0_8_ = uVar31 & (ulonglong)(auVar35._0_8_ * dVar14);
  uVar13 = uVar33 & (ulonglong)(auVar35._8_8_ * dVar15);
  auVar36._8_4_ = (undefined4)uVar13;
  auVar36._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar42._0_8_ = uVar30 & (ulonglong)(auVar41._0_8_ * dVar16);
  uVar13 = uVar32 & (ulonglong)(auVar41._8_8_ * dVar17);
  auVar42._8_4_ = (undefined4)uVar13;
  auVar42._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar41._4_4_ = ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar41._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar41._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar41._12_4_ = ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar25 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar8 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(lVar4 + lVar27) = auVar36 | auVar41;
  auVar35._4_4_ = ~(uint)(uVar30 >> 0x20) & uVar6;
  auVar35._0_4_ = ~(uint)uVar30 & uVar25;
  auVar35._8_4_ = ~(uint)uVar32 & uVar7;
  auVar35._12_4_ = ~(uint)(uVar32 >> 0x20) & uVar8;
  *(undefined1 (*) [16])(lVar4 + 0x10 + lVar27) = auVar42 | auVar35;
  plVar3 = *(longlong **)((longlong)this + 8);
  iVar2 = (int)plVar3[1];
  local_120 = (longlong)iVar2;
  uVar25 = 0;
  if (param_1 < iVar2) {
    uVar25 = uVar28;
  }
  if (uVar25 == 0) {
    local_128 = lVar29;
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
  lVar4 = *plVar3;
  dVar10 = (param_3->Rotation).XY.m128d_f64[1];
  lVar29 = lVar29 * 0x130;
  pdVar1 = (double *)(lVar29 + 0x10 + lVar4);
  *pdVar1 = (param_3->Rotation).XY.m128d_f64[0];
  pdVar1[1] = dVar10;
  dVar10 = (param_3->Rotation).ZW.m128d_f64[1];
  pdVar1 = (double *)(lVar29 + 0x20 + lVar4);
  *pdVar1 = (param_3->Rotation).ZW.m128d_f64[0];
  pdVar1[1] = dVar10;
  dVar10 = (param_3->Translation).XY.m128d_f64[1];
  pdVar1 = (double *)(lVar29 + 0x30 + lVar4);
  *pdVar1 = (param_3->Translation).XY.m128d_f64[0];
  pdVar1[1] = dVar10;
  dVar10 = (param_3->Translation).ZW.m128d_f64[1];
  pdVar1 = (double *)(lVar29 + 0x40 + lVar4);
  *pdVar1 = (param_3->Translation).ZW.m128d_f64[0];
  pdVar1[1] = dVar10;
  dVar10 = (param_3->Scale3D).XY.m128d_f64[1];
  pdVar1 = (double *)(lVar29 + 0x50 + lVar4);
  *pdVar1 = (param_3->Scale3D).XY.m128d_f64[0];
  pdVar1[1] = dVar10;
  dVar10 = (param_3->Scale3D).ZW.m128d_f64[1];
  pdVar1 = (double *)(lVar29 + 0x60 + lVar4);
  *pdVar1 = (param_3->Scale3D).ZW.m128d_f64[0];
  pdVar1[1] = dVar10;
  pdVar1 = (double *)(lVar29 + 0x10 + lVar4);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  pdVar1 = (double *)(lVar29 + 0x20 + lVar4);
  dVar16 = *pdVar1;
  dVar17 = pdVar1[1];
  dVar10 = dVar16 * dVar16 + dVar14 * dVar14;
  dVar11 = dVar17 * dVar17 + dVar15 * dVar15;
  auVar37._8_4_ = SUB84(dVar11,0);
  auVar37._0_8_ = dVar10;
  auVar37._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar38._0_8_ = auVar37._8_8_ + dVar10;
  auVar38._8_8_ = dVar10 + dVar11;
  auVar41 = sqrtpd(auVar40,auVar38);
  uVar30 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar38._0_8_);
  uVar32 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar38._8_8_);
  uVar31 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar38._0_8_);
  uVar33 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar38._8_8_);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
  auVar39._0_8_ = uVar31 & (ulonglong)(auVar35._0_8_ * dVar14);
  uVar13 = uVar33 & (ulonglong)(auVar35._8_8_ * dVar15);
  auVar39._8_4_ = (undefined4)uVar13;
  auVar39._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar43._0_8_ = uVar30 & (ulonglong)(auVar41._0_8_ * dVar16);
  uVar13 = uVar32 & (ulonglong)(auVar41._8_8_ * dVar17);
  auVar43._8_4_ = (undefined4)uVar13;
  auVar43._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar12._4_4_ = ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar12._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar12._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar12._12_4_ = ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  auVar9._4_4_ = ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  auVar9._0_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  auVar9._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  auVar9._12_4_ = ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(lVar29 + 0x10 + lVar4) = auVar39 | auVar12;
  *(undefined1 (*) [16])(lVar29 + 0x20 + lVar4) = auVar43 | auVar9;
  return;
}

// ApplyConstraint @ 14df779c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPoleVectorConstraint::ApplyConstraint
          (FPoleVectorConstraint *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double adVar1 [2];
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  TVector<double>_u_0 *pTVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStackY_2a8 [32];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_258;
  TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *local_250;
  FScriptContainerElement *local_248;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double> local_1f8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((-1 < this->BoneIndex) && (iVar18 = param_1->ArrayNum, this->BoneIndex < iVar18)) {
    iVar2 = this->ParentBoneIndex;
    if ((-1 < iVar2) &&
       (((iVar2 < iVar18 && (-1 < this->ChildBoneIndex)) && (this->ChildBoneIndex < iVar18)))) {
      if ((iVar2 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar17 = (longlong)iVar2 * 0x130;
      uVar19 = this->BoneIndex;
      local_118.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x10);
      local_118.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x10 + 8);
      local_118.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x20);
      local_118.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x20 + 8);
      local_118.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x30);
      local_118.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x30 + 8);
      local_118.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x40);
      local_118.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x40 + 8);
      local_118.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x50);
      local_118.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x50 + 8);
      local_118.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x60);
      local_118.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x60 + 8);
      uVar14 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      lVar17 = (longlong)(int)uVar19 * 0x130;
      uVar19 = this->ChildBoneIndex;
      local_b8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x10);
      local_b8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x10 + 8);
      local_b8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x20);
      local_b8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x20 + 8);
      local_b8.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x30);
      local_b8.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x30 + 8);
      local_b8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x40);
      local_b8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x40 + 8);
      local_b8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x50);
      local_b8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x50 + 8);
      local_b8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar17 + 0x60);
      local_b8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar17 + 0x60 + 8);
      uVar14 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      lVar17 = (longlong)(int)uVar19 * 0x130;
      local_178.Rotation.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar17 + 0x10);
      local_178.Rotation.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar17 + 0x10 + 8);
      local_178.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar17 + 0x20);
      local_178.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar17 + 0x20 + 8);
      pFVar3 = pFVar4 + lVar17 + 0x30;
      local_178.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)pFVar3;
      local_178.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(pFVar3 + 4);
      local_178.Translation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(pFVar3 + 8);
      local_178.Translation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)(pFVar3 + 0xc);
      adVar1 = *(double (*) [2])(pFVar4 + lVar17 + 0x40);
      local_228._s_0.Z = (double)adVar1[0];
      local_178.Translation.ZW.m128d_f64[0] = adVar1[0];
      local_178.Translation.ZW.m128d_f64[1] = adVar1[1];
      local_178.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar4 + lVar17 + 0x50);
      local_178.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar4 + lVar17 + 0x50 + 8);
      local_178.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar17 + 0x60);
      local_178.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar4 + lVar17 + 0x60 + 8);
      if (this->bUseLocalDir == false) {
        pTVar16 = &local_240;
        local_240._s_0.X = (this->PoleVector).field0_0x0._s_0.X;
        local_240._s_0.Y = (this->PoleVector).field0_0x0._s_0.Y;
        local_240._s_0.Z = (this->PoleVector).field0_0x0._s_0.Z;
      }
      else {
        uVar19 = this->BoneIndex;
        uVar14 = 0;
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pTVar16 = &CalculateCurrentPoleVectorDir
                             (this,&local_1f8,&local_118,&local_b8,&local_178,
                              (TQuat<double> *)
                              ((param_1->AllocatorInstance).Data +
                              (longlong)(int)uVar19 * 0x130 + 0x110))->field0_0x0;
        local_228._s_0.Z = local_178.Translation.ZW.m128d_f64[0];
      }
      local_210._s_0.X = (((TVector<double>_u_0 *)&(pTVar16->_s_0).X)->_s_0).X;
      local_210._s_0.Y = (pTVar16->_s_0).Y;
      local_210._s_0.Z = (pTVar16->_s_0).Z;
      local_228._0_4_ = local_178.Translation.XY.m128d_f64[0]._0_4_;
      local_228._4_4_ = local_178.Translation.XY.m128d_f64[0]._4_4_;
      local_228._8_4_ = local_178.Translation.XY.m128d_f64[1]._0_4_;
      local_228._12_4_ = local_178.Translation.XY.m128d_f64[1]._4_4_;
      AnimationCore::SolveTwoBoneIK
                (&local_118,&local_b8,&local_178,(TVector<double> *)&local_210._s_0,
                 (TVector<double> *)&local_228._s_0,false,___xmm_3ff00000000000003ff0000000000000,
                 _UNK_150689688);
      uVar19 = this->ParentBoneIndex;
      uVar14 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      local_258 = param_2;
      local_250 = param_1;
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x130) == -1) {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3777367163522776906>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\FBIKConstraint.cpp"
                            ,0xb6,"false");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pTVar21 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        uVar19 = this->ParentBoneIndex;
        uVar14 = 0;
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        uVar19 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x130);
        uVar14 = 0;
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pTVar21 = (TTransform<double> *)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x130 + 0x10);
      }
      `FPoleVectorConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
                (&local_258,this->ParentBoneIndex,pTVar21,&local_118);
      `FPoleVectorConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
                (&local_258,this->BoneIndex,&local_118,&local_b8);
      `FPoleVectorConstraint::ApplyConstraint'::__l5::<lambda_1>::operator()
                (&local_258,this->ChildBoneIndex,&local_b8,&local_178);
      iVar18 = param_1->ArrayNum;
      uVar19 = this->ParentBoneIndex + 1;
      if ((int)uVar19 < iVar18) {
        lVar17 = (longlong)(int)uVar19 * 0x60;
        lVar22 = (longlong)(int)uVar19 * 0x130;
        do {
          if ((uVar19 != this->BoneIndex) && (uVar19 != this->ChildBoneIndex)) {
            uVar20 = ~uVar19 >> 0x1f;
            uVar14 = 0;
            if ((int)uVar19 < iVar18) {
              uVar14 = uVar20;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar22);
            uVar15 = 0;
            if ((int)uVar19 < param_1->ArrayNum) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            local_248 = (param_1->AllocatorInstance).Data;
            uVar15 = 0;
            if ((int)uVar19 < param_2->ArrayNum) {
              uVar15 = uVar20;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            pFVar3 = (param_2->AllocatorInstance).Data;
            uVar20 = 0;
            if ((int)uVar14 < param_1->ArrayNum) {
              uVar20 = ~uVar14 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            local_1d8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_1d8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_1d8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_1d8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_1d8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_1d8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_1d8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_1d8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply
                      (&local_1d8,(TTransform<double> *)(pFVar3 + lVar17),
                       (TTransform<double> *)
                       ((param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x130 + 0x10));
            *(double *)(local_248 + lVar22 + 0x10) = local_1d8.Rotation.XY.m128d_f64[0];
            *(double *)(local_248 + lVar22 + 0x10 + 8) = local_1d8.Rotation.XY.m128d_f64[1];
            *(double *)(local_248 + lVar22 + 0x20) = local_1d8.Rotation.ZW.m128d_f64[0];
            *(double *)(local_248 + lVar22 + 0x20 + 8) = local_1d8.Rotation.ZW.m128d_f64[1];
            *(double *)(local_248 + lVar22 + 0x30) = local_1d8.Translation.XY.m128d_f64[0];
            *(double *)(local_248 + lVar22 + 0x30 + 8) = local_1d8.Translation.XY.m128d_f64[1];
            *(double *)(local_248 + lVar22 + 0x40) = local_1d8.Translation.ZW.m128d_f64[0];
            *(double *)(local_248 + lVar22 + 0x40 + 8) = local_1d8.Translation.ZW.m128d_f64[1];
            *(double *)(local_248 + lVar22 + 0x50) = local_1d8.Scale3D.XY.m128d_f64[0];
            *(double *)(local_248 + lVar22 + 0x50 + 8) = local_1d8.Scale3D.XY.m128d_f64[1];
            *(double *)(local_248 + lVar22 + 0x60) = local_1d8.Scale3D.ZW.m128d_f64[0];
            *(double *)(local_248 + lVar22 + 0x60 + 8) = local_1d8.Scale3D.ZW.m128d_f64[1];
            dVar8 = *(double *)(local_248 + lVar22 + 0x10);
            dVar9 = *(double *)(local_248 + lVar22 + 0x10 + 8);
            dVar10 = *(double *)(local_248 + lVar22 + 0x20);
            dVar11 = *(double *)(local_248 + lVar22 + 0x20 + 8);
            auVar31._0_8_ = dVar10 * dVar10 + dVar8 * dVar8;
            auVar31._8_8_ = dVar11 * dVar11 + dVar9 * dVar9;
            auVar27._8_4_ = SUB84(auVar31._8_8_,0);
            auVar27._0_8_ = auVar31._0_8_;
            auVar27._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
            auVar28._0_8_ = auVar27._8_8_ + auVar31._0_8_;
            auVar28._8_8_ = auVar31._0_8_ + auVar31._8_8_;
            auVar32 = sqrtpd(auVar31,auVar28);
            uVar23 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar28._0_8_);
            uVar25 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar28._8_8_);
            uVar24 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar28._0_8_);
            uVar26 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar28._8_8_);
            auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32)
            ;
            auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32)
            ;
            auVar30._0_8_ = uVar24 & (ulonglong)(auVar29._0_8_ * dVar8);
            uVar7 = uVar26 & (ulonglong)(auVar29._8_8_ * dVar9);
            auVar30._8_4_ = (undefined4)uVar7;
            auVar30._12_4_ = (undefined4)(uVar7 >> 0x20);
            auVar33._0_8_ = uVar23 & (ulonglong)(auVar32._0_8_ * dVar10);
            uVar7 = uVar25 & (ulonglong)(auVar32._8_8_ * dVar11);
            auVar33._8_4_ = (undefined4)uVar7;
            auVar33._12_4_ = (undefined4)(uVar7 >> 0x20);
            auVar32._4_4_ =
                 ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar32._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar32._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar32._12_4_ =
                 ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            uVar14 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            uVar20 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            uVar15 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            uVar6 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            *(undefined1 (*) [16])(local_248 + lVar22 + 0x10) = auVar30 | auVar32;
            auVar29._4_4_ = ~(uint)(uVar23 >> 0x20) & uVar20;
            auVar29._0_4_ = ~(uint)uVar23 & uVar14;
            auVar29._8_4_ = ~(uint)uVar25 & uVar15;
            auVar29._12_4_ = ~(uint)(uVar25 >> 0x20) & uVar6;
            *(undefined1 (*) [16])(local_248 + lVar22 + 0x20) = auVar33 | auVar29;
          }
          iVar18 = param_1->ArrayNum;
          lVar17 = lVar17 + 0x60;
          uVar19 = uVar19 + 1;
          lVar22 = lVar22 + 0x130;
        } while ((int)uVar19 < iVar18);
      }
      return true;
    }
  }
  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_3777367163522776931>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\FBIKConstraint.cpp"
                      ,0x9d,
                      "InOutLinkData.IsValidIndex(BoneIndex) && InOutLinkData.IsValidIndex(ParentBoneIndex) && InOutLinkData.IsValidIndex(ChildBoneIndex)"
                     );
  if (!bVar12) {
    return false;
  }
  pcVar5 = (code *)swi(3);
  uVar13 = (*pcVar5)();
  return (bool)uVar13;
}

// CalculateCurrentPoleVectorDir @ 14df7a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FPoleVectorConstraint::CalculateCurrentPoleVectorDir
          (FPoleVectorConstraint *this,TVector<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TQuat<double> *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_128 [64];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_128;
  UE::Math::TTransform<double>::GetRelativeTransform(param_2,&local_e8,param_1);
  local_e8.Scale3D.ZW.m128d_f64[0] =
       (this->PoleVector).field0_0x0._s_0.Z * local_e8.Scale3D.ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = local_e8.Scale3D.ZW.m128d_f64[1] * 0.0;
  local_e8.Scale3D.XY.m128d_f64[0] =
       local_e8.Scale3D.XY.m128d_f64[0] * (this->PoleVector).field0_0x0._s_0.X;
  local_e8.Scale3D.XY.m128d_f64[1] =
       local_e8.Scale3D.XY.m128d_f64[1] * (this->PoleVector).field0_0x0._s_0.Y;
  uVar30 = (undefined4)((ulonglong)local_e8.Scale3D.XY.m128d_f64[1] >> 0x20);
  dVar5 = local_e8.Rotation.ZW.m128d_f64[0];
  dVar25 = local_e8.Rotation.XY.m128d_f64[1];
  auVar27 = blendpd((undefined1  [16])local_e8.Rotation.XY.m128d_f64,
                    (undefined1  [16])local_e8.Rotation.ZW.m128d_f64,2);
  dVar3 = local_e8.Rotation.ZW.m128d_f64[1];
  auVar35._8_4_ = SUB84(local_e8.Scale3D.XY.m128d_f64[1],0);
  auVar35._0_8_ = local_e8.Scale3D.XY.m128d_f64[0];
  auVar35._12_4_ = uVar30;
  auVar13._8_4_ = SUB84(local_e8.Scale3D.XY.m128d_f64[1],0);
  auVar13._0_8_ = local_e8.Scale3D.XY.m128d_f64[0];
  auVar13._12_4_ = uVar30;
  auVar1._8_4_ = SUB84(local_e8.Scale3D.ZW.m128d_f64[1],0);
  auVar1._0_8_ = local_e8.Scale3D.ZW.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)local_e8.Scale3D.ZW.m128d_f64[1] >> 0x20);
  auVar14 = blendpd(auVar13,auVar1,2);
  auVar20._8_4_ = local_e8.Rotation.ZW.m128d_f64[0]._0_4_;
  auVar20._0_8_ = dVar25;
  auVar20._12_4_ = local_e8.Rotation.ZW.m128d_f64[0]._4_4_;
  auVar36._0_8_ =
       auVar35._8_8_ * local_e8.Rotation.XY.m128d_f64[0] - dVar25 * local_e8.Scale3D.XY.m128d_f64[0]
  ;
  auVar36._8_8_ =
       local_e8.Scale3D.ZW.m128d_f64[0] * dVar25 - auVar20._8_8_ * local_e8.Scale3D.XY.m128d_f64[1];
  auVar15._0_8_ = auVar14._0_8_ * dVar5 - auVar27._0_8_ * local_e8.Scale3D.ZW.m128d_f64[0];
  auVar15._8_8_ = auVar14._8_8_ * dVar3 - auVar27._8_8_ * local_e8.Scale3D.ZW.m128d_f64[1];
  auVar14 = blendpd(auVar36,auVar15,2);
  dVar2 = auVar36._8_8_ + auVar36._8_8_;
  dVar4 = auVar15._0_8_ + auVar15._0_8_;
  uVar30 = SUB84(dVar4,0);
  uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar37._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar37._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  auVar18._8_4_ = uVar30;
  auVar18._0_8_ = dVar2;
  auVar18._12_4_ = uVar34;
  auVar7._8_4_ = uVar30;
  auVar7._0_8_ = dVar2;
  auVar7._12_4_ = uVar34;
  auVar16._8_4_ = uVar30;
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar34;
  auVar14 = blendpd(auVar16,auVar37,2);
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  auVar19._0_8_ = auVar18._8_8_ * local_e8.Rotation.XY.m128d_f64[0] - dVar2 * dVar25;
  auVar19._8_8_ = auVar37._0_8_ * dVar25 - auVar7._8_8_ * dVar5;
  auVar8._8_4_ = SUB84(auVar37._8_8_,0);
  auVar8._0_8_ = auVar37._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar17._0_8_ = auVar14._0_8_ * dVar5 - auVar37._0_8_ * auVar27._0_8_;
  auVar17._8_8_ = auVar14._8_8_ * dVar3 - auVar8._8_8_ * auVar27._8_8_;
  auVar27._8_4_ = SUB84(auVar19._8_8_,0);
  auVar27._0_8_ = auVar19._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
  auVar20 = blendpd(auVar19,auVar17,2);
  auVar14 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar1 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar12 = auVar1._0_8_;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[0] *
          ((dVar2 * dVar3 + local_e8.Scale3D.XY.m128d_f64[0] + auVar27._8_8_) *
           __real_4059000000000000 + local_e8.Translation.XY.m128d_f64[0]);
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1] *
          ((dVar4 * dVar3 + local_e8.Scale3D.XY.m128d_f64[1] + auVar17._0_8_) *
           __real_4059000000000000 + local_e8.Translation.XY.m128d_f64[1]);
  uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar3 = ((auVar37._0_8_ * dVar3 + local_e8.Scale3D.ZW.m128d_f64[0] + auVar20._0_8_) *
           __real_4059000000000000 + local_e8.Translation.ZW.m128d_f64[0]) *
          (param_1->Scale3D).ZW.m128d_f64[0];
  dVar5 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar31._8_4_ = SUB84(dVar4,0);
  auVar31._0_8_ = dVar2;
  auVar31._12_4_ = uVar30;
  auVar20 = blendpd(auVar14,auVar1,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
  auVar32._8_8_ = dVar3 * auVar14._8_8_ - dVar12 * dVar4;
  auVar28._8_4_ = SUB84(auVar32._8_8_,0);
  auVar28._0_8_ = auVar32._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar9._8_4_ = SUB84(dVar4,0);
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = uVar30;
  auVar14._8_4_ = SUB84(dVar5,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar14 = blendpd(auVar9,auVar14,2);
  auVar10._0_8_ = auVar14._0_8_ * dVar12 - auVar20._0_8_ * dVar3;
  auVar10._8_8_ = auVar14._8_8_ * auVar1._8_8_ - auVar20._8_8_ * dVar5;
  auVar14 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar32,auVar10,2);
  dVar26 = auVar28._8_8_ + auVar28._8_8_;
  dVar29 = auVar10._0_8_ + auVar10._0_8_;
  auVar33._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar33._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar23._8_4_ = SUB84(dVar29,0);
  auVar23._0_8_ = dVar26;
  uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
  auVar23._12_4_ = uVar30;
  auVar21._8_4_ = SUB84(dVar29,0);
  auVar21._0_8_ = dVar26;
  auVar21._12_4_ = uVar30;
  auVar20 = blendpd(auVar21,auVar33,2);
  auVar24._0_8_ = auVar23._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar26;
  auVar24._8_8_ = auVar33._0_8_ * auVar14._8_8_ - dVar12 * dVar29;
  auVar14 = blendpd(auVar14,auVar1,2);
  dVar25 = (param_1->Translation).ZW.m128d_f64[0];
  auVar11._8_4_ = SUB84(auVar24._8_8_,0);
  auVar11._0_8_ = auVar24._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
  auVar22._0_8_ = auVar20._0_8_ * dVar12 - auVar14._0_8_ * auVar33._0_8_;
  auVar22._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar14._8_8_ * auVar33._8_8_;
  auVar14 = blendpd(auVar24,auVar22,2);
  dVar5 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar26 * dVar6 + dVar2 + auVar11._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar29 * dVar6 + dVar4 + auVar22._0_8_ + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar33._0_8_ * dVar6 + dVar3 + auVar14._0_8_ + dVar25;
  return __return_storage_ptr__;
}

