// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// FPlanarPolygonMeshGenerator @ 143567d30

FPlanarPolygonMeshGenerator * __thiscall
UE::Geometry::FPlanarPolygonMeshGenerator::FPlanarPolygonMeshGenerator
          (FPlanarPolygonMeshGenerator *this)

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
  (this->Polygon).Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polygon).Vertices.ArrayNum = 0;
  (this->Polygon).Vertices.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FPlanarPolygonMeshGenerator_Geometry_UE__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->Normal).field0_0x0 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_
  ;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  (this->IndicesMap).field0_0x0 = (FIndex2i_u_0)0x100000000;
  return this;
}

// ~FPlanarPolygonMeshGenerator @ 1435691b0

void __thiscall
UE::Geometry::FPlanarPolygonMeshGenerator::~FPlanarPolygonMeshGenerator
          (FPlanarPolygonMeshGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPlanarPolygonMeshGenerator_Geometry_UE__6B_;
  pFVar1 = (this->Polygon).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  return;
}

// Generate @ 1435999f0

FMeshShapeGenerator * __thiscall
UE::Geometry::FPlanarPolygonMeshGenerator::Generate(FPlanarPolygonMeshGenerator *this)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  undefined4 uVar19;
  FMeshShapeGenerator *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined4 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_148;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  double local_d8 [3];
  TVector2<double>_u_0 local_c0;
  double local_b0;
  double local_a8;
  
  iVar4 = (this->Polygon).Vertices.ArrayNum;
  if (iVar4 < 3) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumVertices >= 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\PlanarPolygonMeshGenerator.cpp"
                        ,0x21,L"");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
      return pFVar20;
    }
  }
  else {
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId39,"PlanarPolygonMeshGenerator_Generate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\PlanarPolygonMeshGenerator.cpp"
                 ,0x27);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId39);
    }
    uVar22 = 0;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    PolygonTriangulation::TriangulateSimplePolygon<double>
              (&(this->Polygon).Vertices,&local_140,false);
    iVar13 = local_140.ArrayNum;
    FMeshShapeGenerator::SetBufferSizes
              ((FMeshShapeGenerator *)this,iVar4,local_140.ArrayNum,iVar4,iVar4);
    TAxisAlignedBox2<double>::TAxisAlignedBox2<double>
              ((TAxisAlignedBox2<double> *)&local_c0._s_0,&(this->Polygon).Vertices);
    local_b0 = local_b0 - local_c0._s_0.X;
    local_a8 = local_a8 - local_c0._s_0.Y;
    if (local_b0 <= 0.0) {
      local_b0 = 0.0;
    }
    if (local_a8 <= 0.0) {
      local_a8 = 0.0;
    }
    if (local_b0 <= local_a8) {
      local_b0 = local_a8;
    }
    if (0 < iVar4) {
      dVar9 = __real_3ff0000000000000 / local_b0;
      local_res18 = 0;
      local_res20 = 0;
      uVar24 = uVar22;
      uVar25 = uVar22;
      do {
        uVar21 = (uint)uVar22;
        uVar26 = ~uVar21 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar21 < (this->Polygon).Vertices.ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        pFVar1 = (this->Polygon).Vertices.AllocatorInstance.Data + local_res20;
        dVar10 = *(double *)pFVar1;
        dVar11 = *(double *)(pFVar1 + 8);
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        local_100 = (float)((dVar10 - local_c0._s_0.X) * dVar9);
        fStack_fc = (float)((dVar11 - local_c0._s_0.Y) * dVar9);
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        *(ulonglong *)(this->_padding_ + uVar24 * 8) = CONCAT44(fStack_fc,local_100);
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        *(uint *)(this->_padding_ + uVar24 * 4) = uVar21;
        uVar3 = *(undefined8 *)&(this->Normal).field0_0x0;
        fVar5 = (this->Normal).field0_0x0._s_0.Z;
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        lVar7 = this->_padding_;
        *(undefined8 *)(local_res18 + lVar7) = uVar3;
        *(float *)(local_res18 + 8 + lVar7) = fVar5;
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        local_d8[2] = 0.0;
        local_d8[0] = 0.0;
        local_d8[1] = 0.0;
        *(uint *)(this->_padding_ + uVar24 * 4) = uVar21;
        uVar18 = (this->IndicesMap).field0_0x0._s_0.A;
        if ((2 < uVar18) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        local_d8[(int)uVar18] = dVar10;
        uVar18 = (this->IndicesMap).field0_0x0._s_0.B;
        if ((2 < uVar18) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        lVar7 = this->_padding_;
        local_d8[(int)uVar18] = dVar11;
        dVar15 = local_d8[2];
        dVar11 = local_d8[1];
        dVar10 = local_d8[0];
        uVar18 = 0;
        if ((int)uVar21 < (int)lVar7) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        lVar7 = this->_padding_;
        uVar22 = (ulonglong)(uVar21 + 1);
        uVar24 = uVar24 + 1;
        local_res18 = local_res18 + 0xc;
        local_res20 = local_res20 + 0x10;
        pdVar2 = (double *)(lVar7 + uVar25);
        *pdVar2 = dVar10;
        pdVar2[1] = dVar11;
        *(double *)(lVar7 + 0x10 + uVar25) = dVar15;
        uVar25 = uVar25 + 0x18;
      } while ((longlong)uVar24 < (longlong)iVar4);
    }
    uVar22 = 0;
    if (0 < (longlong)iVar13) {
      local_148 = 0;
      uVar24 = uVar22;
      do {
        uVar21 = (uint)uVar22;
        uVar26 = ~uVar21 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar21 < local_140.ArrayNum) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        local_e8 = *(undefined8 *)(local_140.AllocatorInstance.Data + uVar24);
        uVar6 = *(undefined4 *)(local_140.AllocatorInstance.Data + uVar24 + 8);
        uVar23 = (undefined4)local_e8;
        if ((char)this->_padding_ == '\0') {
          local_130 = (undefined4)local_e8;
          local_res10 = uVar6;
          local_f8 = local_e8;
          local_f0 = uVar6;
        }
        else {
          local_res10 = (undefined4)local_e8;
          local_130 = uVar6;
        }
        uVar19 = (undefined4)((ulonglong)local_e8 >> 0x20);
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        uStack_12c = uVar19;
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        lVar7 = this->_padding_;
        *(ulonglong *)(uVar24 + lVar7) = CONCAT44(uStack_12c,local_130);
        *(undefined4 *)(uVar24 + 8 + lVar7) = local_res10;
        uVar14 = local_e8._4_4_;
        if ((char)this->_padding_ == '\0') {
          local_120 = uVar23;
          uStack_11c = uVar19;
          uVar12 = uVar6;
        }
        else {
          uStack_11c = local_e8._4_4_;
          local_120 = uVar6;
          uVar12 = uVar23;
        }
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        lVar7 = this->_padding_;
        *(ulonglong *)(uVar24 + lVar7) = CONCAT44(uStack_11c,local_120);
        *(undefined4 *)(uVar24 + 8 + lVar7) = uVar12;
        if ((char)this->_padding_ == '\0') {
          local_110 = uVar23;
          uVar23 = uVar6;
          uStack_10c = uVar19;
        }
        else {
          uStack_10c = uVar14;
          local_110 = uVar6;
        }
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        lVar7 = this->_padding_;
        *(ulonglong *)(uVar24 + lVar7) = CONCAT44(uStack_10c,local_110);
        *(undefined4 *)(uVar24 + 8 + lVar7) = uVar23;
        uVar18 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar18 = uVar26;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          pFVar20 = (FMeshShapeGenerator *)(*pcVar8)();
          return pFVar20;
        }
        uVar22 = (ulonglong)(uVar21 + 1);
        uVar24 = uVar24 + 0xc;
        *(undefined4 *)(this->_padding_ + local_148 * 4) = 0;
        local_148 = local_148 + 1;
      } while (local_148 < iVar13);
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return (FMeshShapeGenerator *)this;
}

// SetPolygon @ 1435c3620

void __thiscall
UE::Geometry::FPlanarPolygonMeshGenerator::SetPolygon
          (FPlanarPolygonMeshGenerator *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TPolygon2<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  ForAnyElementType local_28 [2];
  
  pTVar1 = &this->Polygon;
  if (pTVar1 != (TPolygon2<double> *)local_28) {
    pFVar2 = (pTVar1->Vertices).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Polygon).Vertices.ArrayNum = 0;
    (this->Polygon).Vertices.ArrayMax = 0;
  }
  lVar8 = (longlong)param_1->ArrayNum;
  uVar10 = 0;
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->Vertices).AllocatorInstance.Data;
      pFVar2 = (param_1->AllocatorInstance).Data + lVar9;
      local_38 = *(undefined8 *)pFVar2;
      uStack_30 = *(undefined8 *)(pFVar2 + 8);
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar3 + (longlong)(this->Polygon).Vertices.ArrayMax * 0x10)) &&
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
      iVar7 = (this->Polygon).Vertices.ArrayNum;
      if (iVar7 == (this->Polygon).Vertices.ArrayMax) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)pTVar1,&(this->Polygon).Vertices.ArrayMax);
      }
      uVar10 = uVar10 + 1;
      (this->Polygon).Vertices.ArrayNum = iVar7 + 1;
      lVar9 = lVar9 + 0x10;
      pFVar2 = (pTVar1->Vertices).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar2 = local_38;
      *(undefined8 *)(pFVar2 + 8) = uStack_30;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

