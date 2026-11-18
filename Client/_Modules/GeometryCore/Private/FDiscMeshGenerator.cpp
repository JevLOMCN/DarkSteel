// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// FDiscMeshGenerator @ 143567710

FDiscMeshGenerator * __thiscall
UE::Geometry::FDiscMeshGenerator::FDiscMeshGenerator(FDiscMeshGenerator *this)

{
  (this->IndicesMap).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
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
  *(undefined1 *)&this->_padding_ = 0;
  this->bSinglePolygroup = false;
  *(undefined8 *)&(this->Normal).field0_0x0 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_
  ;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  (this->IndicesMap).field0_0x0 = (FIndex2i_u_0)0x100000000;
  this->AngleSamples = 10;
  this->RadialSamples = 2;
  this->StartAngle = 0.0;
  this->EndAngle = 360.0;
  this->Radius = 1.0;
  return this;
}

// Generate @ 1435966c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMeshShapeGenerator * __thiscall
UE::Geometry::FDiscMeshGenerator::Generate(FDiscMeshGenerator *this)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  double *pdVar4;
  bool bVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  FMeshShapeGenerator *pFVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  ulonglong uVar38;
  bool bVar39;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar40;
  longlong local_148;
  double local_118 [27];
  
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId30,"DiscMeshGenerator_Generate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\DiscMeshGenerator.cpp"
               ,0x1e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId30);
  }
  iVar29 = 1;
  uVar31 = 3;
  if (3 < this->AngleSamples) {
    uVar31 = this->AngleSamples;
  }
  iVar21 = 1;
  if (1 < this->RadialSamples) {
    iVar21 = this->RadialSamples;
  }
  iVar18 = iVar21 * uVar31 + 1;
  bVar5 = ___real_40767ffbe76c8b44 <= (double)(this->EndAngle - this->StartAngle);
  uVar36 = uVar31;
  if (!bVar5) {
    uVar36 = uVar31 - 1;
  }
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,iVar18,(iVar21 * 2 + -1) * uVar36,iVar18,iVar18);
  uVar36 = (this->IndicesMap).field0_0x0._s_0.A;
  local_118[2] = 0.0;
  local_118[0] = 0.0;
  local_118[1] = 0.0;
  if ((2 < uVar36) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
    return pFVar16;
  }
  uVar27 = 0;
  local_118[(int)uVar36] = 0.0;
  uVar36 = (this->IndicesMap).field0_0x0._s_0.B;
  if ((2 < uVar36) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
    return pFVar16;
  }
  lVar20 = this->_padding_;
  local_118[(int)uVar36] = 0.0;
  dVar11 = local_118[2];
  dVar10 = local_118[1];
  dVar8 = local_118[0];
  if (((int)lVar20 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
    return pFVar16;
  }
  pdVar4 = (double *)this->_padding_;
  *pdVar4 = dVar8;
  pdVar4[1] = dVar10;
  pdVar4[2] = dVar11;
  if (((int)this->_padding_ < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
    return pFVar16;
  }
  dVar11 = __real_3fe0000000000000;
  dVar10 = __real_3ff0000000000000;
  *(undefined8 *)this->_padding_ = 0x3f0000003f000000;
  fVar2 = this->Radius;
  dVar8 = (dVar10 / (double)iVar21) * dVar11;
  if (0 < (int)uVar31) {
    lVar20 = 1;
    local_148 = 0x18;
    do {
      iVar18 = 1;
      __libm_sse2_sincos_();
      uVar27 = uVar27 + 1;
      if (0 < iVar21) {
        lVar25 = lVar20;
        lVar34 = local_148;
        uVar36 = uVar27;
        do {
          uVar19 = (this->IndicesMap).field0_0x0._s_0.A;
          local_118[5] = 0.0;
          dVar40 = (double)iVar18;
          local_118[3] = 0.0;
          local_118[4] = 0.0;
          dVar7 = dVar40 * (double)fVar2 * (dVar10 / (double)iVar21);
          if ((2 < uVar19) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
            return pFVar16;
          }
          local_118[(longlong)(int)uVar19 + 3] = dVar7 * extraout_XMM0_Qb;
          uVar19 = (this->IndicesMap).field0_0x0._s_0.B;
          if ((2 < uVar19) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
            return pFVar16;
          }
          lVar9 = this->_padding_;
          local_118[(longlong)(int)uVar19 + 3] = dVar7 * extraout_XMM0_Qa;
          dVar13 = local_118[5];
          dVar12 = local_118[4];
          dVar7 = local_118[3];
          uVar19 = 0;
          if ((int)uVar36 < (int)lVar9) {
            uVar19 = ~uVar36 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
            return pFVar16;
          }
          lVar9 = this->_padding_;
          puVar1 = (undefined8 *)(lVar9 + lVar34);
          *puVar1 = dVar7;
          puVar1[1] = dVar12;
          *(double *)(lVar9 + 0x10 + lVar34) = dVar13;
          uVar19 = 0;
          if ((int)uVar36 < (int)this->_padding_) {
            uVar19 = ~uVar36 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
            return pFVar16;
          }
          iVar18 = iVar18 + 1;
          uVar36 = uVar36 + uVar31;
          lVar34 = lVar34 + (longlong)(int)uVar31 * 0x18;
          *(ulonglong *)(this->_padding_ + lVar25 * 8) =
               CONCAT44((float)(dVar40 * extraout_XMM0_Qa * dVar8 + dVar11),
                        (float)(dVar40 * extraout_XMM0_Qb * dVar8 + dVar11));
          lVar25 = lVar25 + (int)uVar31;
        } while (iVar18 <= iVar21);
      }
      local_148 = local_148 + 0x18;
      lVar20 = lVar20 + 1;
    } while ((int)uVar27 < (int)uVar31);
  }
  uVar26 = 0;
  uVar30 = uVar26;
  uVar33 = uVar26;
  uVar38 = uVar26;
  if (0 < (int)this->_padding_) {
    do {
      uVar19 = (uint)uVar30;
      uVar27 = ~uVar19 >> 0x1f;
      uVar36 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar36 = uVar27;
      }
      if ((uVar36 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar16;
      }
      *(uint *)(uVar33 + this->_padding_) = uVar19;
      uVar36 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar36 = uVar27;
      }
      if ((uVar36 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar16;
      }
      *(uint *)(uVar33 + this->_padding_) = uVar19;
      uVar3 = *(undefined8 *)&(this->Normal).field0_0x0;
      fVar2 = (this->Normal).field0_0x0._s_0.Z;
      uVar36 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar36 = uVar27;
      }
      if ((uVar36 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar16;
      }
      lVar20 = this->_padding_;
      *(undefined8 *)(uVar38 + lVar20) = uVar3;
      *(float *)(uVar38 + 8 + lVar20) = fVar2;
      uVar30 = (ulonglong)(uVar19 + 1);
      uVar33 = uVar33 + 4;
      uVar38 = uVar38 + 0xc;
    } while ((int)(uVar19 + 1) < (int)this->_padding_);
  }
  uVar30 = uVar26;
  if (1 < (int)uVar31) {
    iVar18 = 2;
    iVar35 = 1;
    uVar33 = uVar26;
    do {
      uVar27 = (uint)uVar26;
      FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar27,0,iVar18,iVar35);
      FMeshShapeGenerator::SetTriangleNormals
                ((FMeshShapeGenerator *)this,uVar27,0,uVar27 + 2,iVar35);
      FMeshShapeGenerator::SetTriangleUVs((FMeshShapeGenerator *)this,uVar27,0,uVar27 + 2,iVar35);
      uVar36 = 0;
      if ((int)uVar27 < (int)this->_padding_) {
        uVar36 = ~uVar27 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
        return pFVar16;
      }
      *(int *)(uVar33 + this->_padding_) = (int)uVar30;
      if (this->bSinglePolygroup == false) {
        uVar30 = (ulonglong)((int)uVar30 + 1);
      }
      uVar26 = (ulonglong)(uVar27 + 1);
      uVar33 = uVar33 + 4;
      iVar18 = iVar18 + 1;
      iVar35 = uVar27 + 2;
    } while (iVar35 < (int)uVar31);
  }
  if (bVar5) {
    iVar18 = (int)uVar26;
    FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,iVar18,0,1,uVar31);
    FMeshShapeGenerator::SetTriangleNormals((FMeshShapeGenerator *)this,iVar18,0,1,uVar31);
    FMeshShapeGenerator::SetTriangleUVs((FMeshShapeGenerator *)this,iVar18,0,1,uVar31);
    FMeshShapeGenerator::SetTrianglePolygon((FMeshShapeGenerator *)this,iVar18,(int)uVar30);
    uVar26 = (ulonglong)(iVar18 + 1);
    if (this->bSinglePolygroup == false) {
      uVar30 = (ulonglong)((int)uVar30 + 1);
    }
  }
  if (1 < iVar21) {
    lVar20 = (longlong)(int)uVar26;
    iVar18 = uVar31 + 1;
    uVar27 = ~uVar31;
    uVar36 = uVar31;
    do {
      if (1 < (int)uVar31) {
        iVar35 = uVar36 + 2;
        iVar15 = ((1 - uVar31) - iVar18) + uVar36;
        iVar17 = iVar15 + -1 + iVar35;
        uVar19 = uVar36;
        do {
          uVar19 = uVar19 + 1;
          uVar24 = (uint)uVar26;
          FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar24,iVar17,iVar35,uVar19);
          iVar32 = iVar15 + -1 + iVar35;
          FMeshShapeGenerator::SetTriangleNormals
                    ((FMeshShapeGenerator *)this,uVar24,iVar32,iVar35,iVar35 + -1);
          FMeshShapeGenerator::SetTriangleUVs
                    ((FMeshShapeGenerator *)this,uVar24,iVar32,iVar35,iVar35 + -1);
          uVar23 = 0;
          if ((int)uVar24 < (int)this->_padding_) {
            uVar23 = ~uVar24 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
            return pFVar16;
          }
          uVar22 = uVar24 + 1;
          iVar28 = iVar15 + iVar35;
          iVar37 = (int)uVar30;
          *(int *)(this->_padding_ + lVar20 * 4) = iVar37;
          FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar22,iVar32,iVar28,iVar35);
          FMeshShapeGenerator::SetTriangleNormals
                    ((FMeshShapeGenerator *)this,uVar22,iVar32,iVar28,iVar35);
          FMeshShapeGenerator::SetTriangleUVs
                    ((FMeshShapeGenerator *)this,uVar22,iVar32,iVar28,iVar35);
          uVar23 = 0;
          if ((int)uVar22 < (int)this->_padding_) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
            return pFVar16;
          }
          uVar26 = (ulonglong)(uVar24 + 2);
          *(int *)(this->_padding_ + 4 + lVar20 * 4) = iVar37;
          lVar20 = lVar20 + 2;
          if (this->bSinglePolygroup == false) {
            uVar30 = (ulonglong)(iVar37 + 1);
          }
          iVar35 = iVar35 + 1;
          iVar17 = iVar17 + 1;
        } while ((int)(uVar27 + iVar35) < (int)uVar31);
      }
      if (bVar5) {
        iVar15 = uVar36 + uVar31;
        iVar35 = uVar36 + 1;
        uVar23 = (uint)uVar26;
        FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar23,uVar36,iVar35,iVar15);
        FMeshShapeGenerator::SetTriangleNormals
                  ((FMeshShapeGenerator *)this,uVar23,uVar36,iVar35,iVar15);
        FMeshShapeGenerator::SetTriangleUVs((FMeshShapeGenerator *)this,uVar23,uVar36,iVar35,iVar15)
        ;
        uVar19 = 0;
        if ((int)uVar23 < (int)this->_padding_) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
          return pFVar16;
        }
        uVar24 = uVar23 + 1;
        iVar15 = (1 - uVar31) + uVar36;
        iVar17 = (int)uVar30;
        *(int *)(this->_padding_ + lVar20 * 4) = iVar17;
        FMeshShapeGenerator::SetTriangle((FMeshShapeGenerator *)this,uVar24,uVar36,iVar15,iVar35);
        FMeshShapeGenerator::SetTriangleNormals
                  ((FMeshShapeGenerator *)this,uVar24,uVar36,iVar15,iVar35);
        FMeshShapeGenerator::SetTriangleUVs((FMeshShapeGenerator *)this,uVar24,uVar36,iVar15,iVar35)
        ;
        uVar19 = 0;
        if ((int)uVar24 < (int)this->_padding_) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FMeshShapeGenerator *)(*pcVar6)();
          return pFVar16;
        }
        uVar26 = (ulonglong)(uVar23 + 2);
        *(int *)(this->_padding_ + 4 + lVar20 * 4) = iVar17;
        lVar20 = lVar20 + 2;
        if (this->bSinglePolygroup == false) {
          uVar30 = (ulonglong)(iVar17 + 1);
        }
      }
      uVar36 = uVar36 + uVar31;
      uVar27 = uVar27 - uVar31;
      iVar29 = iVar29 + 1;
      iVar18 = iVar18 + uVar31;
    } while (iVar29 < iVar21);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FMeshShapeGenerator *)this;
}

