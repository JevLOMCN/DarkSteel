// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FGrassBuilderBase @ 145f41580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGrassBuilderBase * __thiscall
FGrassBuilderBase::FGrassBuilderBase
          (FGrassBuilderBase *this,ALandscapeProxy *param_1,ULandscapeComponent *param_2,
          FGrassVariety *param_3,Type param_4,int param_5,int param_6,int param_7,bool param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  TIntPoint<int> TVar9;
  TMatrix<double> *pTVar10;
  FGrassBuilderBase *pFVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  float fVar24;
  TMatrix<double> local_98;
  
  fVar24 = __real_3f800000;
  if (param_8) {
    fVar24 = GGrassDensityScale;
  }
  fVar12 = FGrassVariety::GetDensity(param_3);
  this->GrassDensity = fVar12 * fVar24;
  lVar3 = param_1->_padding_;
  dVar22 = *(double *)(lVar3 + 0x180);
  (this->DrawScale).field0_0x0._s_0.X = *(double *)(lVar3 + 0x178);
  (this->DrawScale).field0_0x0._s_0.Y = dVar22;
  (this->DrawScale).field0_0x0._s_0.Z = *(double *)(lVar3 + 0x188);
  lVar3 = param_1->_padding_;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar3 != 0) {
    uVar14 = *(undefined4 *)(lVar3 + 0x210);
    uVar15 = *(undefined4 *)(lVar3 + 0x214);
    uVar16 = *(undefined4 *)(lVar3 + 0x218);
    uVar17 = *(undefined4 *)(lVar3 + 0x21c);
    uVar18 = *(double *)(lVar3 + 0x220);
  }
  *(undefined4 *)&(this->DrawLoc).field0_0x0 = uVar14;
  *(undefined4 *)((longlong)&(this->DrawLoc).field0_0x0 + 4) = uVar15;
  *(undefined4 *)((longlong)&(this->DrawLoc).field0_0x0 + 8) = uVar16;
  *(undefined4 *)((longlong)&(this->DrawLoc).field0_0x0 + 0xc) = uVar17;
  (this->DrawLoc).field0_0x0._s_0.Z = (double)uVar18;
  TVar9 = ALandscapeProxy::GetSectionBase(param_1);
  dVar22 = (this->DrawScale).field0_0x0._s_0.X;
  dVar19 = (this->DrawScale).field0_0x0._s_0.Y;
  TVar4 = *(TIntPoint<int>_u_0_s_0 *)TVar9.field0_0x0;
  (this->LandscapeSectionOffset).field0_0x0._s_0 = TVar4;
  iVar8 = param_2->SectionBaseX;
  iVar1 = param_2->SectionBaseY;
  iVar2 = param_2->SectionBaseY;
  *(int *)&(this->SectionBase).field0_0x0 = param_2->SectionBaseX;
  *(int *)((longlong)&(this->SectionBase).field0_0x0 + 4) = iVar2;
  iVar2 = param_2->ComponentSizeQuads;
  this->ComponentSizeQuads = iVar2;
  dVar20 = (double)iVar2;
  (this->Origin).field0_0x0._s_0.X = (double)iVar8 * dVar22;
  (this->Origin).field0_0x0._s_0.Z = 0.0;
  (this->Extent).field0_0x0._s_0.Z = 0.0;
  (this->ComponentOrigin).field0_0x0._s_0.Z = 0.0;
  dVar21 = dVar20 * dVar19;
  dVar20 = dVar20 * dVar22;
  (this->Extent).field0_0x0._s_0.Y = dVar21;
  (this->Origin).field0_0x0._s_0.Y = (double)iVar1 * dVar19;
  (this->Extent).field0_0x0._s_0.X = dVar20;
  dVar6 = __real_bfe0000000000000;
  (this->ComponentOrigin).field0_0x0._s_0.X = (double)(iVar8 - TVar4.X) * dVar22;
  (this->ComponentOrigin).field0_0x0._s_0.Y = (double)(iVar1 - TVar4.Y) * dVar19;
  auVar13._0_8_ = (double)this->GrassDensity * __real_3eb0c6f7a0b5ed8d;
  auVar13._8_8_ = 0;
  dVar22 = dVar21 * dVar20 * auVar13._0_8_;
  auVar23._0_4_ = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar23._4_4_ = (uint)((ulonglong)dVar22 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  auVar23._8_8_ = 0;
  auVar13 = sqrtpd(auVar13,auVar23);
  iVar8 = -((int)ROUND(dVar6 - (auVar13._0_8_ + auVar13._0_8_)) >> 1);
  this->SqrtMaxInstances = iVar8;
  this->bHaveValidData = iVar8 != 0;
  pTVar10 = UE::Math::TTransform<double>::ToMatrixNoScale
                      ((TTransform<double> *)(param_1->_padding_ + 0x1f0),&local_98);
  dVar22 = pTVar10->M[0][1];
  (this->LandscapeToWorld).M[0][0] = pTVar10->M[0][0];
  (this->LandscapeToWorld).M[0][1] = dVar22;
  dVar22 = pTVar10->M[0][3];
  (this->LandscapeToWorld).M[0][2] = pTVar10->M[0][2];
  (this->LandscapeToWorld).M[0][3] = dVar22;
  dVar22 = pTVar10->M[1][1];
  (this->LandscapeToWorld).M[1][0] = pTVar10->M[1][0];
  (this->LandscapeToWorld).M[1][1] = dVar22;
  dVar22 = pTVar10->M[1][3];
  (this->LandscapeToWorld).M[1][2] = pTVar10->M[1][2];
  (this->LandscapeToWorld).M[1][3] = dVar22;
  dVar22 = pTVar10->M[2][1];
  (this->LandscapeToWorld).M[2][0] = pTVar10->M[2][0];
  (this->LandscapeToWorld).M[2][1] = dVar22;
  dVar22 = pTVar10->M[2][3];
  (this->LandscapeToWorld).M[2][2] = pTVar10->M[2][2];
  (this->LandscapeToWorld).M[2][3] = dVar22;
  dVar22 = pTVar10->M[3][1];
  bVar7 = this->bHaveValidData;
  (this->LandscapeToWorld).M[3][0] = pTVar10->M[3][0];
  (this->LandscapeToWorld).M[3][1] = dVar22;
  dVar22 = pTVar10->M[3][3];
  (this->LandscapeToWorld).M[3][2] = pTVar10->M[3][2];
  (this->LandscapeToWorld).M[3][3] = dVar22;
  if ((bVar7 != false) && (param_5 != 1)) {
    if ((this->SqrtMaxInstances <= param_5 * 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SqrtMaxInstances > 2 * SqrtSubsections",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                           ,0x6e5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FGrassBuilderBase *)(*pcVar5)();
      return pFVar11;
    }
    iVar8 = this->SqrtMaxInstances / param_5;
    this->SqrtMaxInstances = iVar8;
    if ((iVar8 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SqrtMaxInstances > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                           ,0x6e7,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FGrassBuilderBase *)(*pcVar5)();
      return pFVar11;
    }
    dVar19 = (__real_3ff0000000000000 / (double)param_5) * (this->Extent).field0_0x0._s_0.Y;
    dVar22 = (__real_3ff0000000000000 / (double)param_5) * (this->Extent).field0_0x0._s_0.X;
    (this->Extent).field0_0x0._s_0.Y = dVar19;
    (this->Extent).field0_0x0._s_0.X = dVar22;
    (this->Origin).field0_0x0._s_0.X = (double)param_6 * dVar22 + (this->Origin).field0_0x0._s_0.X;
    (this->Origin).field0_0x0._s_0.Y = (double)param_7 * dVar19 + (this->Origin).field0_0x0._s_0.Y;
  }
  return this;
}

