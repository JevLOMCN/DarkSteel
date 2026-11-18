// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 2

// FMinimalBoxMeshGenerator @ 1496f90d0

FMinimalBoxMeshGenerator * __thiscall
UE::Geometry::FMinimalBoxMeshGenerator::FMinimalBoxMeshGenerator(FMinimalBoxMeshGenerator *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FMinimalBoxMeshGenerator_Geometry_UE__6B_;
  (this->Box).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Box).Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Box).Frame.Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->Box).Frame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Box).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->Box).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->Box).Extents.field0_0x0._s_0.X = 1.0;
  (this->Box).Extents.field0_0x0._s_0.Y = 1.0;
  (this->Box).Extents.field0_0x0._s_0.Z = 1.0;
  this->bScaleUVByAspectRatio = true;
  return this;
}

// Generate @ 14970c380

FMeshShapeGenerator * __thiscall
UE::Geometry::FMinimalBoxMeshGenerator::Generate(FMinimalBoxMeshGenerator *this)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FMeshShapeGenerator *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  uint uVar30;
  float fVar31;
  uint uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int local_18c;
  uint local_188;
  int local_184;
  int local_180;
  uint local_17c;
  longlong local_178;
  int *local_170;
  uint local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  uint local_130;
  uint local_120;
  uint local_110;
  uint local_100;
  uint local_f0;
  uint local_e0;
  int *local_d0;
  
  local_158 = 0x18;
  FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)this,8,0xc,0x18,0x18);
  uVar30 = (uint)__xmm_80000000000000008000000000000000;
  uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar23 = 0;
  uVar15 = uVar23;
  uVar18 = uVar23;
  do {
    dVar10 = __real_3ff0000000000000;
    uVar1 = *(undefined8 *)&(this->Box).Extents.field0_0x0;
    uVar45 = (uint)uVar1;
    uVar46 = (uint)((ulonglong)uVar1 >> 0x20);
    uVar16 = (uint)uVar18;
    if ((((uint)(uVar18 >> 1) ^ uVar16) & 1) == 0) {
      uVar45 = uVar45 ^ uVar30;
      uVar46 = uVar46 ^ uVar32;
    }
    uVar1 = *(undefined8 *)((longlong)&(this->Box).Extents.field0_0x0 + 8);
    uVar43 = (uint)uVar1;
    uVar44 = (uint)((ulonglong)uVar1 >> 0x20);
    if ((uVar18 & 2) == 0) {
      uVar43 = uVar43 ^ uVar30;
      uVar44 = uVar44 ^ uVar32;
    }
    uVar1 = *(undefined8 *)((longlong)&(this->Box).Extents.field0_0x0 + 0x10);
    uVar40 = (uint)uVar1;
    uVar42 = (uint)((ulonglong)uVar1 >> 0x20);
    if (uVar16 < 4) {
      uVar40 = uVar40 ^ uVar30;
      uVar42 = uVar42 ^ uVar32;
    }
    dVar25 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
    dVar27 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
    dVar33 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
    dVar29 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
    dVar8 = dVar27 + dVar27;
    dVar7 = dVar29 + dVar29;
    dVar35 = (dVar25 + dVar25) * dVar25;
    dVar34 = (dVar25 + dVar25) * dVar33;
    auVar37._0_8_ = (dVar7 * dVar25 - dVar8 * dVar33) * (double)CONCAT44(uVar46,uVar45);
    auVar37._8_8_ = 0;
    dVar36 = (this->Box).Frame.Origin.field0_0x0._s_0.X;
    dVar6 = __real_3ff0000000000000 - (dVar7 * dVar29 + dVar8 * dVar27);
    dVar26 = __real_3ff0000000000000 - (dVar35 + dVar7 * dVar29);
    dVar24 = __real_3ff0000000000000 - (dVar35 + dVar8 * dVar27);
    dVar29 = (this->Box).Frame.Origin.field0_0x0._s_0.Y;
    dVar35 = (this->Box).Frame.Origin.field0_0x0._s_0.Z;
    if (((int)this->_padding_ <= (int)uVar16) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar19 = this->_padding_;
    uVar18 = (ulonglong)(uVar16 + 1);
    *(double *)(uVar15 + lVar19) =
         dVar6 * (double)CONCAT44(uVar46,uVar45) +
         (dVar8 * dVar25 - dVar7 * dVar33) * (double)CONCAT44(uVar44,uVar43) +
         (dVar8 * dVar33 + dVar7 * dVar25) * (double)CONCAT44(uVar42,uVar40) + dVar36;
    *(double *)(uVar15 + 8 + lVar19) =
         (dVar8 * dVar25 + dVar7 * dVar33) * (double)CONCAT44(uVar46,uVar45) +
         (dVar7 * dVar27 - dVar34) * (double)CONCAT44(uVar42,uVar40) +
         dVar26 * (double)CONCAT44(uVar44,uVar43) + dVar29;
    *(double *)(uVar15 + 0x10 + lVar19) =
         (dVar34 + dVar7 * dVar27) * (double)CONCAT44(uVar44,uVar43) + auVar37._0_8_ +
         dVar24 * (double)CONCAT44(uVar42,uVar40) + dVar35;
    uVar15 = uVar15 + 0x18;
  } while ((int)(uVar16 + 1) < 8);
  dVar25 = (this->Box).Extents.field0_0x0._s_0.X;
  dVar27 = (this->Box).Extents.field0_0x0._s_0.Y;
  dVar33 = (this->Box).Extents.field0_0x0._s_0.Z;
  fVar31 = __real_3f800000;
  if (this->bScaleUVByAspectRatio != false) {
    dVar27 = dVar27 + dVar27;
    dVar25 = dVar25 + dVar25;
    dVar33 = dVar33 + dVar33;
    dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar30 = SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar32 = (uint)((ulonglong)dVar25 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (dVar27 <= (double)CONCAT44(uVar32,uVar30)) {
      dVar27 = (double)CONCAT44(uVar32,uVar30);
    }
    dVar25 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar33,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar27 <= dVar25) {
      dVar27 = dVar25;
    }
    fVar31 = __real_3f800000 / (float)dVar27;
  }
  local_168 = 0;
  local_188 = 2;
  local_170 = IndexUtil::BoxFaces[0] + 1;
  local_d0 = IndexUtil::BoxFaceNormals;
  local_18c = 0;
  local_150 = 0;
  local_178 = 0;
  local_160 = 0x10;
  local_17c = 0;
  local_180 = 1;
  local_184 = 3;
  while( true ) {
    iVar17 = *local_d0;
    iVar12 = -iVar17;
    if (-iVar17 < 0) {
      iVar12 = iVar17;
    }
    if (iVar12 == 1) {
      dVar25 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
      dVar27 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
      dVar33 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
      dVar35 = dVar25 + dVar25;
      dVar29 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
      dVar36 = dVar27 + dVar27;
      uVar28 = dVar29 * dVar36 + dVar33 * dVar35;
      uVar1 = dVar33 * dVar36 - dVar29 * dVar35;
      uVar9 = dVar10 - (dVar27 * dVar36 + dVar25 * dVar35);
    }
    else if (iVar12 == 2) {
      dVar25 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
      dVar27 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
      dVar33 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
      dVar29 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
      dVar36 = dVar33 + dVar33;
      uVar28 = dVar10 - (dVar25 * (dVar25 + dVar25) + dVar33 * dVar36);
      uVar1 = dVar29 * (dVar25 + dVar25) + dVar27 * dVar36;
      uVar9 = (dVar27 + dVar27) * dVar25 - dVar29 * dVar36;
    }
    else if (iVar12 == 3) {
      dVar25 = (this->Box).Frame.Rotation.field0_0x0._s_0.Y;
      dVar27 = (this->Box).Frame.Rotation.field0_0x0._s_0.X;
      dVar33 = (this->Box).Frame.Rotation.field0_0x0._s_0.W;
      dVar29 = (this->Box).Frame.Rotation.field0_0x0._s_0.Z;
      dVar29 = dVar29 + dVar29;
      auVar37._0_8_ = dVar27 * (dVar27 + dVar27) + dVar25 * (dVar25 + dVar25);
      auVar37._8_8_ = 0;
      uVar28 = dVar25 * dVar29 - dVar33 * (dVar27 + dVar27);
      uVar1 = dVar10 - auVar37._0_8_;
      uVar9 = dVar33 * (dVar25 + dVar25) + dVar27 * dVar29;
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\FrameTypes.h"
                          ,0x88,L"");
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (bVar11) {
        pcVar3 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
        return pFVar14;
      }
    }
    if (iVar17 < 1) {
      iVar17 = iVar17 >> 0x1f;
    }
    else {
      iVar17 = 1;
    }
    uVar30 = *local_170;
    lVar19 = (longlong)(int)uVar30;
    dVar25 = (double)iVar17;
    uVar32 = 0;
    if ((int)uVar30 < (int)this->_padding_) {
      uVar32 = ~uVar30 >> 0x1f;
    }
    fVar38 = (float)((double)uVar9 * dVar25);
    fVar39 = (float)((double)uVar28 * dVar25);
    fVar41 = (float)((double)uVar1 * dVar25);
    if ((uVar32 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    uVar30 = (*(int (*) [4])(local_170 + -1))[0];
    lVar20 = (longlong)(int)uVar30;
    lVar22 = this->_padding_;
    uVar32 = 0;
    if ((int)uVar30 < (int)this->_padding_) {
      uVar32 = ~uVar30 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar2 = this->_padding_;
    uVar30 = local_170[1];
    lVar21 = (longlong)(int)uVar30;
    dVar25 = *(double *)(lVar22 + 8 + lVar19 * 0x18) - *(double *)(lVar2 + 8 + lVar20 * 0x18);
    dVar33 = *(double *)(lVar22 + lVar19 * 0x18) - *(double *)(lVar2 + lVar20 * 0x18);
    dVar27 = *(double *)(lVar22 + 0x10 + lVar19 * 0x18) - *(double *)(lVar2 + 0x10 + lVar20 * 0x18);
    uVar32 = 0;
    if ((int)uVar30 < (int)this->_padding_) {
      uVar32 = ~uVar30 >> 0x1f;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar25 * dVar25 + dVar33 * dVar33 + dVar27 * dVar27;
    auVar37 = sqrtpd(auVar37,auVar4);
    if ((uVar32 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    uVar30 = *local_170;
    lVar22 = (longlong)(int)uVar30;
    lVar19 = this->_padding_;
    uVar32 = 0;
    if ((int)uVar30 < (int)this->_padding_) {
      uVar32 = ~uVar30 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar20 = this->_padding_;
    dVar25 = *(double *)(lVar19 + 8 + lVar21 * 0x18) - *(double *)(lVar20 + 8 + lVar22 * 0x18);
    dVar29 = *(double *)(lVar19 + lVar21 * 0x18) - *(double *)(lVar20 + lVar22 * 0x18);
    dVar33 = *(double *)(lVar19 + 0x10 + lVar21 * 0x18) - *(double *)(lVar20 + 0x10 + lVar22 * 0x18)
    ;
    dVar27 = (double)fVar31 * auVar37._0_8_;
    uVar32 = ~(local_188 - 2) >> 0x1f;
    uVar30 = 0;
    if ((int)uVar23 < (int)this->_padding_) {
      uVar30 = uVar32;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar25 * dVar25 + dVar29 * dVar29 + dVar33 * dVar33;
    auVar37 = sqrtpd(auVar37,auVar5);
    auVar37._0_8_ = auVar37._0_8_ * (double)fVar31;
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar19 = this->_padding_;
    local_e0 = local_188 - 2;
    *(ulonglong *)(local_158 + -0x18 + lVar19) = CONCAT44(fVar39,fVar38);
    *(float *)(local_158 + -0x10 + lVar19) = fVar41;
    iVar17 = IndexUtil::BoxFacesUV[0].field0_0x0._0_4_;
    iVar12 = IndexUtil::BoxFacesUV[0].field0_0x0._4_4_;
    uVar30 = 0;
    if ((int)local_e0 < (int)this->_padding_) {
      uVar30 = uVar32;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    uVar32 = ~(local_188 - 1) >> 0x1f;
    *(ulonglong *)(local_160 + -0x10 + this->_padding_) =
         CONCAT44((float)((double)iVar12 * auVar37._0_8_),(float)((double)iVar17 * dVar27));
    uVar30 = 0;
    if (local_180 < (int)this->_padding_) {
      uVar30 = uVar32;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar19 = this->_padding_;
    iVar17 = local_188 - 1;
    *(ulonglong *)(local_158 + -0xc + lVar19) = CONCAT44(fVar39,fVar38);
    *(float *)(local_158 + -4 + lVar19) = fVar41;
    iVar12 = IndexUtil::BoxFacesUV[1].field0_0x0._0_4_;
    iVar13 = IndexUtil::BoxFacesUV[1].field0_0x0._4_4_;
    uVar30 = 0;
    if (iVar17 < (int)this->_padding_) {
      uVar30 = uVar32;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    *(ulonglong *)(local_160 + -8 + this->_padding_) =
         CONCAT44((float)((double)iVar13 * auVar37._0_8_),(float)((double)iVar12 * dVar27));
    uVar30 = 0;
    if ((int)local_188 < (int)this->_padding_) {
      uVar30 = ~local_188 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar19 = this->_padding_;
    *(ulonglong *)(local_158 + lVar19) = CONCAT44(fVar39,fVar38);
    *(float *)(local_158 + 8 + lVar19) = fVar41;
    iVar12 = IndexUtil::BoxFacesUV[2].field0_0x0._0_4_;
    iVar13 = IndexUtil::BoxFacesUV[2].field0_0x0._4_4_;
    uVar30 = 0;
    if ((int)local_188 < (int)this->_padding_) {
      uVar30 = ~local_188 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    uVar32 = local_188 + 1;
    *(ulonglong *)(local_160 + this->_padding_) =
         CONCAT44((float)((double)iVar13 * auVar37._0_8_),(float)((double)iVar12 * dVar27));
    uVar30 = 0;
    if (local_184 < (int)this->_padding_) {
      uVar30 = ~uVar32 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar19 = this->_padding_;
    *(ulonglong *)(local_158 + 0xc + lVar19) = CONCAT44(fVar39,fVar38);
    *(float *)(local_158 + 0x14 + lVar19) = fVar41;
    iVar12 = IndexUtil::BoxFacesUV[3].field0_0x0._0_4_;
    iVar13 = IndexUtil::BoxFacesUV[3].field0_0x0._4_4_;
    uVar30 = 0;
    if ((int)uVar32 < (int)this->_padding_) {
      uVar30 = ~uVar32 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    local_184 = local_184 + 4;
    local_180 = local_180 + 4;
    local_17c = local_17c + 4;
    local_158 = local_158 + 0x30;
    *(ulonglong *)(local_160 + 8 + this->_padding_) =
         CONCAT44((float)((double)iVar13 * auVar37._0_8_),(float)((double)iVar12 * dVar27));
    local_160 = local_160 + 0x20;
    uVar30 = *local_170;
    local_130 = (*(int (*) [4])(local_170 + -1))[0];
    uVar16 = local_170[1];
    if ((char)this->_padding_ != '\0') {
      uVar16 = local_130;
      local_130 = local_170[1];
    }
    uVar46 = ~local_168 >> 0x1f;
    uVar45 = 0;
    if ((int)local_168 < (int)this->_padding_) {
      uVar45 = uVar46;
    }
    if ((uVar45 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    lVar19 = this->_padding_;
    *(ulonglong *)(local_178 + lVar19) = CONCAT44(uVar30,local_130);
    *(uint *)(local_178 + 8 + lVar19) = uVar16;
    uVar30 = 0;
    if ((int)local_168 < (int)this->_padding_) {
      uVar30 = uVar46;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    *(int *)(this->_padding_ + local_150 * 4) = local_18c;
    uVar30 = local_188;
    local_120 = local_e0;
    if ((char)this->_padding_ != '\0') {
      uVar30 = local_e0;
      local_120 = local_188;
    }
    uVar16 = 0;
    if ((int)local_168 < (int)this->_padding_) {
      uVar16 = uVar46;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar19 = this->_padding_;
    *(ulonglong *)(lVar19 + local_178) = CONCAT44(iVar17,local_120);
    *(uint *)(lVar19 + 8 + local_178) = uVar30;
    uVar30 = local_188;
    local_110 = local_e0;
    if ((char)this->_padding_ != '\0') {
      uVar30 = local_e0;
      local_110 = local_188;
    }
    uVar16 = 0;
    if ((int)local_168 < (int)this->_padding_) {
      uVar16 = uVar46;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    uVar45 = local_168 + 1;
    lVar22 = this->_padding_;
    lVar19 = local_178 + 0xc;
    *(ulonglong *)(lVar22 + local_178) = CONCAT44(iVar17,local_110);
    *(uint *)(lVar22 + 8 + local_178) = uVar30;
    uVar30 = local_170[1];
    local_100 = (*(int (*) [4])(local_170 + -1))[0];
    uVar16 = local_170[2];
    if ((char)this->_padding_ != '\0') {
      uVar16 = local_100;
      local_100 = local_170[2];
    }
    uVar43 = ~uVar45 >> 0x1f;
    uVar46 = 0;
    if ((int)uVar45 < (int)this->_padding_) {
      uVar46 = uVar43;
    }
    if ((uVar46 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar22 = this->_padding_;
    *(ulonglong *)(lVar19 + lVar22) = CONCAT44(uVar30,local_100);
    *(uint *)(local_178 + 0x14 + lVar22) = uVar16;
    uVar30 = 0;
    if ((int)uVar45 < (int)this->_padding_) {
      uVar30 = uVar43;
    }
    if ((uVar30 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    *(int *)(this->_padding_ + 4 + local_150 * 4) = local_18c;
    uVar30 = uVar32;
    local_f0 = local_e0;
    if ((char)this->_padding_ != '\0') {
      uVar30 = local_e0;
      local_f0 = uVar32;
    }
    uVar16 = 0;
    if ((int)uVar45 < (int)this->_padding_) {
      uVar16 = uVar43;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar22 = this->_padding_;
    *(ulonglong *)(lVar22 + lVar19) = CONCAT44(local_188,local_f0);
    *(uint *)(lVar22 + 8 + lVar19) = uVar30;
    uVar30 = uVar32;
    if ((char)this->_padding_ != '\0') {
      uVar30 = local_e0;
      local_e0 = uVar32;
    }
    uVar32 = 0;
    if ((int)uVar45 < (int)this->_padding_) {
      uVar32 = uVar43;
    }
    if ((uVar32 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar14;
    }
    lVar22 = this->_padding_;
    local_178 = local_178 + 0x18;
    local_168 = local_168 + 2;
    local_d0 = local_d0 + 1;
    local_170 = local_170 + 4;
    local_150 = local_150 + 2;
    local_18c = local_18c + 1;
    *(ulonglong *)(lVar22 + lVar19) = CONCAT44(local_188,local_e0);
    *(uint *)(lVar22 + 8 + lVar19) = uVar30;
    uVar23 = (ulonglong)local_17c;
    local_188 = local_188 + 4;
    if (5 < local_18c) {
      return (FMeshShapeGenerator *)this;
    }
  }
  pcVar3 = (code *)swi(3);
  pFVar14 = (FMeshShapeGenerator *)(*pcVar3)();
  return pFVar14;
}

