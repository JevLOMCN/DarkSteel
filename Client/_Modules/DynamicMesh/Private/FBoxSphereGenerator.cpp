// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Generate @ 14c8f0840

FMeshShapeGenerator * __thiscall
UE::Geometry::FBoxSphereGenerator::Generate(FBoxSphereGenerator *this)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  FMeshShapeGenerator *pFVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  
  FGridBoxMeshGenerator::Generate((FGridBoxMeshGenerator *)this);
  dVar18 = __real_3ff0000000000000;
  dVar27 = (double)this->_padding_;
  plVar1 = &this->_padding_;
  dVar2 = (double)this->_padding_;
  dVar29 = dVar27 + dVar27;
  dVar3 = (double)this->_padding_;
  dVar16 = (double)this->_padding_;
  dVar17 = (double)this->_padding_;
  uVar23 = 0;
  dVar4 = (double)this->_padding_;
  dVar39 = dVar2 + dVar2;
  dVar7 = __real_3ff0000000000000 - (dVar39 * dVar2 + dVar29 * dVar27);
  dVar31 = (double)this->_padding_;
  dVar9 = dVar3 * dVar39 + dVar31 * dVar29;
  dVar13 = dVar31 * dVar29 - dVar3 * dVar39;
  dVar30 = dVar31 * dVar39 - dVar3 * dVar29;
  dVar15 = dVar31 * dVar39 + dVar3 * dVar29;
  dVar3 = (dVar31 + dVar31) * dVar3;
  dVar31 = (dVar31 + dVar31) * dVar31;
  dVar12 = dVar39 * dVar27 + dVar3;
  dVar3 = dVar39 * dVar27 - dVar3;
  dVar2 = __real_3ff0000000000000 - (dVar31 + dVar39 * dVar2);
  dVar27 = __real_3ff0000000000000 - (dVar31 + dVar29 * dVar27);
  if (0 < (int)this->_padding_) {
    lVar24 = 0;
    do {
      dVar31 = __real_3fe0000000000000;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = __real_3fe0000000000000;
      uVar20 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      lVar25 = *plVar1;
      dVar14 = *(double *)(lVar24 + lVar25) - dVar16;
      dVar39 = *(double *)(lVar24 + 8 + lVar25) - dVar17;
      dVar29 = *(double *)(lVar24 + 0x10 + lVar25) - dVar4;
      if (this->SphereProjectionMethod == CubeMapping) {
        auVar36._0_8_ =
             (dVar14 * dVar7 + dVar39 * dVar9 + dVar29 * dVar30) / (double)this->_padding_;
        auVar36._8_8_ = 0;
        dVar10 = auVar36._0_8_ * auVar36._0_8_;
        dVar32 = (dVar14 * dVar15 + dVar39 * dVar3 + dVar29 * dVar27) / (double)this->_padding_;
        dVar35 = (dVar14 * dVar13 + dVar39 * dVar2 + dVar29 * dVar12) / (double)this->_padding_;
        dVar29 = dVar32 * dVar32;
        dVar14 = dVar35 * dVar35;
        auVar33._0_8_ = dVar29 * dVar31;
        auVar33._8_8_ = 0;
        dVar31 = dVar14 * dVar31;
        auVar37._8_8_ = 0;
        auVar37._0_8_ =
             dVar29 * dVar14 * __real_3fd5555555555555 + ((dVar18 - dVar31) - auVar33._0_8_);
        auVar40 = sqrtpd(auVar40,auVar37);
        dVar39 = dVar18 - dVar10 * __real_3fe0000000000000;
        dVar38 = auVar40._0_8_ * auVar36._0_8_;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar14 * dVar10 * __real_3fd5555555555555 + (dVar39 - dVar31);
        auVar40 = sqrtpd(auVar33,auVar11);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar29 * dVar10 * __real_3fd5555555555555 + (dVar39 - auVar33._0_8_);
        auVar37 = sqrtpd(auVar36,auVar8);
        dVar32 = auVar40._0_8_ * dVar32;
        dVar35 = auVar37._0_8_ * dVar35;
        dVar14 = dVar13 * dVar35 + dVar7 * dVar38 + dVar15 * dVar32;
        dVar39 = dVar2 * dVar35 + dVar9 * dVar38 + dVar3 * dVar32;
        dVar29 = dVar12 * dVar35 + dVar30 * dVar38 + dVar27 * dVar32;
      }
      auVar28._0_8_ = dVar39 * dVar39;
      auVar28._8_8_ = 0;
      auVar34._0_8_ = dVar14 * dVar14 + auVar28._0_8_ + dVar29 * dVar29;
      auVar34._8_8_ = 0;
      auVar40 = sqrtpd(auVar28,auVar34);
      if (auVar40._0_8_ <= 0.0) {
        dVar29 = 0.0;
        dVar39 = 0.0;
        dVar31 = 0.0;
      }
      else {
        dVar31 = dVar18 / auVar40._0_8_;
        dVar29 = dVar31 * dVar29;
        dVar39 = dVar31 * dVar39;
        dVar31 = dVar31 * dVar14;
      }
      uVar20 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      lVar25 = *plVar1;
      uVar23 = uVar23 + 1;
      *(double *)(lVar24 + lVar25) = dVar31;
      *(double *)(lVar24 + 8 + lVar25) = dVar39;
      *(double *)(lVar24 + 0x10 + lVar25) = dVar29;
      lVar24 = lVar24 + 0x18;
    } while ((int)uVar23 < (int)this->_padding_);
  }
  uVar23 = 0;
  if (0 < (int)this->_padding_) {
    lVar25 = 0;
    lVar24 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      uVar20 = *(uint *)(lVar24 + this->_padding_);
      lVar26 = (longlong)(int)uVar20;
      uVar21 = 0;
      if ((int)uVar20 < (int)this->_padding_) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      lVar5 = *plVar1;
      dVar27 = *(double *)(lVar5 + lVar26 * 0x18);
      dVar2 = *(double *)(lVar5 + 8 + lVar26 * 0x18);
      dVar3 = *(double *)(lVar5 + 0x10 + lVar26 * 0x18);
      uVar20 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      lVar26 = this->_padding_;
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 4;
      *(float *)(lVar26 + lVar25) = (float)dVar27;
      *(float *)(lVar26 + 4 + lVar25) = (float)dVar2;
      *(float *)(lVar26 + 8 + lVar25) = (float)dVar3;
      lVar25 = lVar25 + 0xc;
    } while ((int)uVar23 < (int)this->_padding_);
  }
  uVar23 = 0;
  if (0 < (int)this->_padding_) {
    lVar24 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      lVar25 = this->_padding_;
      dVar31 = (double)this->Radius;
      dVar27 = *(double *)(lVar24 + lVar25);
      dVar2 = *(double *)(lVar24 + 8 + lVar25);
      dVar3 = *(double *)(lVar24 + 0x10 + lVar25);
      uVar20 = 0;
      if ((int)uVar23 < (int)this->_padding_) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        pFVar22 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar22;
      }
      lVar25 = this->_padding_;
      uVar23 = uVar23 + 1;
      *(double *)(lVar24 + lVar25) = dVar31 * dVar27 + dVar16;
      *(double *)(lVar24 + 8 + lVar25) = dVar31 * dVar2 + dVar17;
      *(double *)(lVar24 + 0x10 + lVar25) = dVar31 * dVar3 + dVar4;
      lVar24 = lVar24 + 0x18;
    } while ((int)uVar23 < (int)this->_padding_);
  }
  return (FMeshShapeGenerator *)this;
}

