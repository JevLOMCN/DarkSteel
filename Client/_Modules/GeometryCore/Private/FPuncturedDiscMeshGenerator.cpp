// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// FPuncturedDiscMeshGenerator @ 143568180

FPuncturedDiscMeshGenerator * __thiscall
UE::Geometry::FPuncturedDiscMeshGenerator::FPuncturedDiscMeshGenerator
          (FPuncturedDiscMeshGenerator *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDiscMeshGenerator_Geometry_UE__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  *(float *)((longlong)&this->_padding_ + 4) =
       UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x100000000;
  this->_padding_ = (longlong)&___7FPuncturedDiscMeshGenerator_Geometry_UE__6B_;
  *(undefined4 *)&this->_padding_ = 10;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x43b40000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->HoleRadius = 0.5;
  return this;
}

// Generate @ 14359d2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMeshShapeGenerator * __thiscall
UE::Geometry::FPuncturedDiscMeshGenerator::Generate(FPuncturedDiscMeshGenerator *this)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  FMeshShapeGenerator *pFVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar34;
  uint local_res10;
  longlong local_res18;
  int local_138;
  longlong local_120;
  double local_100 [24];
  
  iVar24 = (int)this->_padding_;
  iVar29 = 3;
  if (3 < iVar24) {
    iVar29 = iVar24;
  }
  iVar24 = *(int *)((longlong)&this->_padding_ + 4);
  iVar27 = 2;
  if (2 < iVar24) {
    iVar27 = iVar24;
  }
  iVar20 = iVar27 * iVar29;
  bVar6 = ___real_40767ffbe76c8b44 <=
          (double)(*(float *)((longlong)&this->_padding_ + 4) - *(float *)&this->_padding_);
  iVar24 = iVar29;
  if (!bVar6) {
    iVar24 = iVar29 + -1;
  }
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,iVar20,(iVar27 + -1) * iVar24 * 2,iVar20,iVar20);
  fVar2 = *(float *)&this->_padding_;
  fVar3 = this->HoleRadius;
  local_res10 = 0;
  dVar9 = __real_3fe0000000000000 / (double)fVar2;
  if (0 < iVar29) {
    local_res18 = 0;
    local_120 = 0;
    do {
      __libm_sse2_sincos_();
      iVar24 = 0;
      if (0 < iVar27) {
        lVar26 = local_res18;
        lVar33 = local_120;
        uVar31 = local_res10;
        do {
          uVar15 = *(uint *)((longlong)&this->_padding_ + 4);
          local_100[2] = 0.0;
          local_100[0] = 0.0;
          local_100[1] = 0.0;
          dVar34 = (double)iVar24 * ((double)(fVar2 - fVar3) / (double)(iVar27 + -1)) +
                   (double)fVar3;
          if ((2 < uVar15) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
            return pFVar18;
          }
          dVar8 = dVar34 * extraout_XMM0_Qb;
          local_100[(int)uVar15] = dVar8;
          uVar15 = (uint)this->_padding_;
          if ((2 < uVar15) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
            return pFVar18;
          }
          lVar10 = this->_padding_;
          dVar34 = dVar34 * extraout_XMM0_Qa;
          local_100[(int)uVar15] = dVar34;
          dVar13 = local_100[2];
          dVar12 = local_100[1];
          dVar11 = local_100[0];
          uVar15 = 0;
          if ((int)uVar31 < (int)lVar10) {
            uVar15 = ~uVar31 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
            return pFVar18;
          }
          lVar10 = this->_padding_;
          pdVar1 = (double *)(lVar33 + lVar10);
          *pdVar1 = dVar11;
          pdVar1[1] = dVar12;
          dVar8 = dVar8 * dVar9 + __real_3fe0000000000000;
          dVar34 = dVar34 * dVar9 + __real_3fe0000000000000;
          *(double *)(lVar33 + 0x10 + lVar10) = dVar13;
          uVar15 = 0;
          if ((int)uVar31 < (int)this->_padding_) {
            uVar15 = ~uVar31 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
            return pFVar18;
          }
          iVar24 = iVar24 + 1;
          uVar31 = uVar31 + iVar29;
          lVar33 = lVar33 + (longlong)iVar29 * 0x18;
          *(ulonglong *)(this->_padding_ + lVar26 * 8) = CONCAT44((float)dVar34,(float)dVar8);
          lVar26 = lVar26 + iVar29;
        } while (iVar24 < iVar27);
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_120 = local_120 + 0x18;
    } while ((int)local_res10 < iVar29);
  }
  uVar31 = 0;
  if (0 < (int)this->_padding_) {
    lVar26 = 0;
    lVar33 = 0;
    do {
      uVar25 = ~uVar31 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar31 < (int)this->_padding_) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
        return pFVar18;
      }
      *(uint *)(lVar33 + this->_padding_) = uVar31;
      uVar15 = 0;
      if ((int)uVar31 < (int)this->_padding_) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
        return pFVar18;
      }
      *(uint *)(lVar33 + this->_padding_) = uVar31;
      uVar4 = *(undefined8 *)((longlong)&this->_padding_ + 4);
      uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      uVar15 = 0;
      if ((int)uVar31 < (int)this->_padding_) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
        return pFVar18;
      }
      lVar10 = this->_padding_;
      uVar31 = uVar31 + 1;
      lVar33 = lVar33 + 4;
      *(undefined8 *)(lVar10 + lVar26) = uVar4;
      *(undefined4 *)(lVar10 + 8 + lVar26) = uVar5;
      lVar26 = lVar26 + 0xc;
    } while ((int)uVar31 < (int)this->_padding_);
  }
  uVar31 = 0;
  iVar24 = 0;
  if (1 < iVar27) {
    iVar20 = iVar29 + -1;
    local_138 = 1;
    lVar26 = 0;
    iVar17 = -iVar29;
    iVar21 = iVar29;
    do {
      if (1 < iVar29) {
        iVar32 = iVar20 + 2;
        iVar16 = ((1 - iVar29) - iVar21) + iVar20;
        iVar23 = iVar16 + -1;
        iVar19 = iVar32 + iVar23;
        iVar30 = iVar20;
        do {
          iVar30 = iVar30 + 1;
          FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar31,iVar19,iVar32,iVar30);
          iVar28 = iVar23 + iVar32;
          FMeshShapeGenerator::SetTriangleNormals
                    ((FMeshShapeGenerator *)this,uVar31,iVar28,iVar32,iVar32 + -1);
          FMeshShapeGenerator::SetTriangleUVs
                    ((FMeshShapeGenerator *)this,uVar31,iVar28,iVar32,iVar32 + -1);
          uVar15 = 0;
          if ((int)uVar31 < (int)this->_padding_) {
            uVar15 = ~uVar31 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
            return pFVar18;
          }
          uVar25 = uVar31 + 1;
          iVar22 = iVar16 + iVar32;
          *(int *)(this->_padding_ + lVar26 * 4) = iVar24;
          FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar25,iVar28,iVar22,iVar32);
          FMeshShapeGenerator::SetTriangleNormals
                    ((FMeshShapeGenerator *)this,uVar25,iVar28,iVar22,iVar32);
          FMeshShapeGenerator::SetTriangleUVs
                    ((FMeshShapeGenerator *)this,uVar25,iVar28,iVar22,iVar32);
          uVar15 = 0;
          if ((int)uVar25 < (int)this->_padding_) {
            uVar15 = ~uVar25 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
            return pFVar18;
          }
          uVar31 = uVar31 + 2;
          *(int *)(this->_padding_ + 4 + lVar26 * 4) = iVar24;
          lVar26 = lVar26 + 2;
          if ((char)this->_padding_ == '\0') {
            iVar24 = iVar24 + 1;
          }
          iVar32 = iVar32 + 1;
          iVar19 = iVar19 + 1;
        } while (iVar17 + iVar32 < iVar29);
      }
      if (bVar6) {
        iVar23 = iVar20 + iVar29;
        iVar32 = iVar20 + 1;
        FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar31,iVar20,iVar32,iVar23);
        FMeshShapeGenerator::SetTriangleNormals
                  ((FMeshShapeGenerator *)this,uVar31,iVar20,iVar32,iVar23);
        FMeshShapeGenerator::SetTriangleUVs((FMeshShapeGenerator *)this,uVar31,iVar20,iVar32,iVar23)
        ;
        uVar15 = 0;
        if ((int)uVar31 < (int)this->_padding_) {
          uVar15 = ~uVar31 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
          return pFVar18;
        }
        uVar25 = uVar31 + 1;
        iVar23 = (1 - iVar29) + iVar20;
        *(int *)(this->_padding_ + lVar26 * 4) = iVar24;
        FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar25,iVar20,iVar23,iVar32);
        FMeshShapeGenerator::SetTriangleNormals
                  ((FMeshShapeGenerator *)this,uVar25,iVar20,iVar23,iVar32);
        FMeshShapeGenerator::SetTriangleUVs((FMeshShapeGenerator *)this,uVar25,iVar20,iVar23,iVar32)
        ;
        uVar15 = 0;
        if ((int)uVar25 < (int)this->_padding_) {
          uVar15 = ~uVar25 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          pFVar18 = (FMeshShapeGenerator *)(*pcVar7)();
          return pFVar18;
        }
        uVar31 = uVar31 + 2;
        *(int *)(this->_padding_ + 4 + lVar26 * 4) = iVar24;
        lVar26 = lVar26 + 2;
        if ((char)this->_padding_ == '\0') {
          iVar24 = iVar24 + 1;
        }
      }
      iVar17 = iVar17 + -iVar29;
      iVar20 = iVar20 + iVar29;
      local_138 = local_138 + 1;
      iVar21 = iVar21 + iVar29;
    } while (local_138 < iVar27);
  }
  return (FMeshShapeGenerator *)this;
}

