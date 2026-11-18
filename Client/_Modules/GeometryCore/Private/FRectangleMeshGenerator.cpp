// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// FRectangleMeshGenerator @ 143568270

FRectangleMeshGenerator * __thiscall
UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator(FRectangleMeshGenerator *this)

{
  undefined8 uVar1;
  
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
  this->_padding_ = (longlong)&___7FRectangleMeshGenerator_Geometry_UE__6B_;
  this->bScaleUVByAspectRatio = true;
  this->bSinglePolyGroup = false;
  (this->IndicesMap).field0_0x0 = (FIndex2i_u_0)0xffffffffffffffff;
  *(undefined1 *)&this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Width = 10.0;
  this->Height = 10.0;
  (this->Origin).field0_0x0._s_0.Z = (double)uVar1;
  this->HeightVertexCount = 8;
  this->WidthVertexCount = 8;
  *(undefined8 *)&(this->Normal).field0_0x0 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_
  ;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  (this->IndicesMap).field0_0x0 = (FIndex2i_u_0)0x100000000;
  return this;
}

// Generate @ 14359dc40

FMeshShapeGenerator * __thiscall
UE::Geometry::FRectangleMeshGenerator::Generate(FRectangleMeshGenerator *this)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FMeshShapeGenerator *pFVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  float local_res10;
  int local_res18;
  int local_1e8;
  int local_1e4;
  int local_1dc;
  longlong local_1d0;
  int local_1b0;
  int local_1a0;
  int local_190;
  int local_180;
  int local_170;
  int local_160;
  ulonglong local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  
  iVar24 = (this->IndicesMap).field0_0x0._s_0.A;
  if (((iVar24 < 0) || (2 < iVar24)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IndicesMap.A >= 0 && IndicesMap.A <= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RectangleMeshGenerator.cpp"
                          ,0x17,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
    return pFVar14;
  }
  iVar24 = (this->IndicesMap).field0_0x0._s_0.B;
  if (((iVar24 < 0) || (2 < iVar24)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IndicesMap.B >= 0 && IndicesMap.B <= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RectangleMeshGenerator.cpp"
                          ,0x18,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
    return pFVar14;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId26,"RectangleMeshGenerator_Generate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\RectangleMeshGenerator.cpp"
               ,0x1a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId26);
  }
  iVar24 = 2;
  if (1 < this->WidthVertexCount) {
    iVar24 = this->WidthVertexCount;
  }
  iVar28 = 2;
  if (1 < this->HeightVertexCount) {
    iVar28 = this->HeightVertexCount;
  }
  iVar17 = iVar28 * iVar24;
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,iVar17,(iVar28 * 2 + -2) * (iVar24 + -1),iVar17,iVar17);
  dVar1 = __real_bfe0000000000000;
  (**(code **)(this->_padding_ + 0x10))
            (this,&local_148,0,this->Width * __real_bfe0000000000000,
             this->Height * __real_bfe0000000000000);
  dVar10 = __real_3fe0000000000000;
  (**(code **)(this->_padding_ + 0x10))
            (this,&local_118,1,this->Width * __real_3fe0000000000000,this->Height * dVar1);
  (**(code **)(this->_padding_ + 0x10))
            (this,&local_100,2,this->Width * dVar10,this->Height * dVar10);
  (**(code **)(this->_padding_ + 0x10))(this,&local_130,3,this->Width * dVar1,this->Height * dVar10)
  ;
  dVar10 = __real_3ff0000000000000;
  local_res10 = __real_3f800000;
  fVar43 = __real_3f800000;
  if (this->bScaleUVByAspectRatio != false) {
    dVar1 = this->Height;
    dVar42 = this->Width;
    if (dVar42 != dVar1) {
      if (dVar1 < dVar42) {
        local_res10 = (float)(dVar1 / dVar42);
      }
      else {
        fVar43 = (float)(dVar42 / dVar1);
      }
    }
  }
  uVar21 = 0;
  local_1e4 = 0;
  if (iVar28 != 0) {
    lVar27 = 0;
    dVar1 = __real_3ff0000000000000 / (double)(iVar28 + -1);
    do {
      iVar17 = 0;
      dVar42 = (double)local_1e4 * dVar1;
      if (iVar24 != 0) {
        lVar26 = lVar27 * 0x18;
        lVar19 = lVar27 * 0xc;
        dVar9 = dVar10 - dVar42;
        local_1d0 = (ulonglong)(uint)((float)dVar42 * local_res10) << 0x20;
        do {
          fVar3 = (this->Normal).field0_0x0._s_0.Z;
          uVar2 = *(undefined8 *)&(this->Normal).field0_0x0;
          uVar29 = ~uVar21 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          dVar41 = (double)iVar17 * (dVar10 / (double)(iVar24 + -1));
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar4 = this->_padding_;
          *(undefined8 *)(lVar19 + lVar4) = uVar2;
          *(float *)(lVar19 + 8 + lVar4) = fVar3;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          *(uint *)(this->_padding_ + lVar27 * 4) = uVar21;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          local_1d0 = CONCAT44(local_1d0._4_4_,(float)dVar41 * fVar43);
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          *(longlong *)(this->_padding_ + lVar27 * 8) = local_1d0;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          dVar40 = dVar10 - dVar41;
          *(uint *)(this->_padding_ + lVar27 * 4) = uVar21;
          dVar37 = dVar9 * local_118;
          dVar6 = dVar9 * local_148;
          dVar7 = dVar9 * local_140;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          dVar8 = dVar9 * local_138;
          dVar31 = local_130 * dVar42;
          dVar32 = local_100 * dVar42;
          dVar33 = local_128 * dVar42;
          dVar34 = local_f8 * dVar42;
          dVar38 = dVar9 * local_110;
          dVar35 = local_120 * dVar42;
          dVar36 = local_f0 * dVar42;
          dVar39 = dVar9 * local_108;
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar4 = this->_padding_;
          uVar21 = uVar21 + 1;
          lVar27 = lVar27 + 1;
          lVar19 = lVar19 + 0xc;
          iVar17 = iVar17 + 1;
          *(double *)(lVar26 + lVar4) = (dVar6 + dVar31) * dVar40 + (dVar37 + dVar32) * dVar41;
          *(double *)(lVar26 + 8 + lVar4) = (dVar7 + dVar33) * dVar40 + (dVar38 + dVar34) * dVar41;
          *(double *)(lVar26 + 0x10 + lVar4) =
               (dVar8 + dVar35) * dVar40 + (dVar39 + dVar36) * dVar41;
          lVar26 = lVar26 + 0x18;
        } while (iVar17 < iVar24);
      }
      local_1e4 = local_1e4 + 1;
    } while (local_1e4 < iVar28);
  }
  uVar21 = 0;
  local_res10 = 0.0;
  local_1dc = 0;
  if (0 < iVar28 + -1) {
    lVar27 = 0;
    iVar17 = iVar24 + 1;
    local_1d0 = 0;
    do {
      local_150 = (ulonglong)(iVar24 - 1U);
      if (0 < (int)(iVar24 - 1U)) {
        iVar23 = -iVar24;
        lVar19 = lVar27 * 0xc;
        local_res18 = iVar17 + -1;
        iVar15 = iVar17 + iVar23;
        iVar20 = iVar23 + -1;
        iVar18 = iVar17 + iVar20;
        iVar22 = iVar17;
        do {
          iVar16 = iVar18;
          local_1b0 = iVar15;
          if ((char)this->_padding_ == '\0') {
            iVar16 = iVar23 + iVar22;
            local_1b0 = iVar20 + iVar22;
          }
          uVar29 = ~uVar21 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar27 = this->_padding_;
          *(ulonglong *)(lVar27 + lVar19) = CONCAT44(iVar22,local_1b0);
          *(int *)(lVar27 + 8 + lVar19) = iVar16;
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          local_190 = iVar20 + iVar22;
          *(float *)(this->_padding_ + local_1d0 * 4) = local_res10;
          iVar16 = iVar23 + iVar22;
          local_1e8 = iVar16;
          local_1a0 = local_190;
          if ((char)this->_padding_ != '\0') {
            local_1e8 = local_190;
            local_1a0 = iVar16;
          }
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar27 = this->_padding_;
          *(ulonglong *)(lVar27 + lVar19) = CONCAT44(iVar22,local_1a0);
          *(int *)(lVar27 + 8 + lVar19) = local_1e8;
          iVar25 = iVar16;
          if ((char)this->_padding_ != '\0') {
            iVar25 = local_190;
            local_190 = iVar16;
          }
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar29;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar27 = this->_padding_;
          uVar13 = uVar21 + 1;
          *(ulonglong *)(lVar27 + lVar19) = CONCAT44(iVar22,local_190);
          *(int *)(lVar27 + 8 + lVar19) = iVar25;
          iVar16 = iVar20 + iVar22;
          iVar25 = local_res18;
          local_180 = iVar22;
          if ((char)this->_padding_ == '\0') {
            iVar16 = iVar22;
            iVar25 = iVar22 + -1;
            local_180 = iVar20 + iVar22;
          }
          uVar30 = ~uVar13 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar13 < (int)this->_padding_) {
            uVar29 = uVar30;
          }
          if ((uVar29 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar27 = this->_padding_;
          *(ulonglong *)(lVar27 + 0xc + lVar19) = CONCAT44(iVar25,local_180);
          *(int *)(lVar27 + 0x14 + lVar19) = iVar16;
          uVar29 = 0;
          if ((int)uVar13 < (int)this->_padding_) {
            uVar29 = uVar30;
          }
          if ((uVar29 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          *(float *)(this->_padding_ + 4 + local_1d0 * 4) = local_res10;
          local_170 = iVar20 + iVar22;
          local_1e8 = iVar22;
          if ((char)this->_padding_ != '\0') {
            local_1e8 = local_170;
            local_170 = iVar22;
          }
          uVar29 = 0;
          if ((int)uVar13 < (int)this->_padding_) {
            uVar29 = uVar30;
          }
          if ((uVar29 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar27 = this->_padding_;
          *(ulonglong *)(lVar27 + 0xc + lVar19) = CONCAT44(iVar22 + -1,local_170);
          *(int *)(lVar27 + 0x14 + lVar19) = local_1e8;
          local_160 = iVar20 + iVar22;
          iVar16 = iVar22;
          if ((char)this->_padding_ != '\0') {
            iVar16 = local_160;
            local_160 = iVar22;
          }
          uVar29 = 0;
          if ((int)uVar13 < (int)this->_padding_) {
            uVar29 = uVar30;
          }
          if ((uVar29 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          lVar27 = this->_padding_;
          uVar21 = uVar21 + 2;
          *(ulonglong *)(lVar27 + 0xc + lVar19) = CONCAT44(iVar22 + -1,local_160);
          *(int *)(lVar27 + 0x14 + lVar19) = iVar16;
          lVar19 = lVar19 + 0x18;
          lVar27 = local_1d0 + 2;
          if (this->bSinglePolyGroup == false) {
            local_res10 = (float)((int)local_res10 + 1);
          }
          iVar22 = iVar22 + 1;
          local_150 = local_150 - 1;
          local_res18 = local_res18 + 1;
          iVar15 = iVar15 + 1;
          iVar18 = iVar18 + 1;
          local_1d0 = lVar27;
        } while (local_150 != 0);
      }
      local_1dc = local_1dc + 1;
      iVar17 = iVar17 + iVar24;
    } while (local_1dc < iVar28 + -1);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FMeshShapeGenerator *)this;
}

// MakeVertex @ 1435ba830

TVector<double> * __thiscall
UE::Geometry::FRectangleMeshGenerator::MakeVertex
          (FRectangleMeshGenerator *this,TVector<double> *__return_storage_ptr__,int param_1,
          double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double local_38 [6];
  
  uVar3 = (this->IndicesMap).field0_0x0._s_0.A;
  local_38[2] = 0.0;
  local_38[0] = 0.0;
  local_38[1] = 0.0;
  if (2 < uVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  local_38[(int)uVar3] = param_2;
  uVar3 = (this->IndicesMap).field0_0x0._s_0.B;
  if (2 < uVar3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  local_38[(int)uVar3] = param_3;
  dVar1 = (this->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_38[0] + (this->Origin).field0_0x0._s_0.X;
  dVar2 = (this->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_38[1] + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_38[2] + dVar2;
  return __return_storage_ptr__;
}

