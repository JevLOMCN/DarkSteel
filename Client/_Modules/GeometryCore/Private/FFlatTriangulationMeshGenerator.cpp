// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// FFlatTriangulationMeshGenerator @ 143567a90

FFlatTriangulationMeshGenerator * __thiscall
UE::Geometry::FFlatTriangulationMeshGenerator::FFlatTriangulationMeshGenerator
          (FFlatTriangulationMeshGenerator *this)

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
  (this->Vertices2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices2D).ArrayNum = 0;
  (this->Vertices2D).ArrayMax = 0;
  (this->Triangles2D).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles2D).ArrayNum = 0;
  (this->Triangles2D).ArrayMax = 0;
  (this->Triangles2DPolygroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles2DPolygroups).ArrayNum = 0;
  (this->Triangles2DPolygroups).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FFlatTriangulationMeshGenerator_Geometry_UE__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->Normal).field0_0x0 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_
  ;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  (this->IndicesMap).field0_0x0 = (FIndex2i_u_0)0x100000000;
  return this;
}

// ~FFlatTriangulationMeshGenerator @ 143568f20

void __thiscall
UE::Geometry::FFlatTriangulationMeshGenerator::~FFlatTriangulationMeshGenerator
          (FFlatTriangulationMeshGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FFlatTriangulationMeshGenerator_Geometry_UE__6B_;
  pFVar1 = (this->Triangles2DPolygroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices2D).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  return;
}

// Generate @ 143597320

FMeshShapeGenerator * __thiscall
UE::Geometry::FFlatTriangulationMeshGenerator::Generate(FFlatTriangulationMeshGenerator *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  undefined4 uVar18;
  FMeshShapeGenerator *pFVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  uint uVar23;
  undefined4 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_110;
  undefined4 local_100;
  undefined4 local_d8;
  undefined8 local_c8 [3];
  TVector2<double>_u_0 local_b0;
  double local_a0;
  double local_98;
  
  iVar4 = (this->Vertices2D).ArrayNum;
  if (iVar4 < 3) {
    bVar15 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<1463820151211163667>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\FlatTriangulationMeshGenerator.cpp"
                        ,0x13,"NumVertices >= 3");
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
      return pFVar19;
    }
  }
  else {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId25,"FlatTriangulationMeshGenerator_Generate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\FlatTriangulationMeshGenerator.cpp"
                 ,0x19);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
    }
    iVar5 = (this->Triangles2D).ArrayNum;
    FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)this,iVar4,iVar5,iVar4,iVar4);
    TAxisAlignedBox2<double>::TAxisAlignedBox2<double>
              ((TAxisAlignedBox2<double> *)&local_b0._s_0,&this->Vertices2D);
    local_a0 = local_a0 - local_b0._s_0.X;
    uVar20 = 0;
    local_98 = local_98 - local_b0._s_0.Y;
    if (local_a0 <= 0.0) {
      local_a0 = 0.0;
    }
    if (local_98 <= 0.0) {
      local_98 = 0.0;
    }
    if (local_a0 <= local_98) {
      local_a0 = local_98;
    }
    if (0 < iVar4) {
      lVar22 = 0;
      dVar12 = __real_3ff0000000000000 / local_a0;
      local_128 = 0;
      local_res20 = 0;
      local_res18 = 0;
      do {
        uVar23 = ~uVar20 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar20 < (this->Vertices2D).ArrayNum) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        pFVar7 = (this->Vertices2D).AllocatorInstance.Data;
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        dVar10 = *(double *)(pFVar7 + local_res18) - local_b0._s_0.X;
        dVar11 = *(double *)(pFVar7 + local_res18 + 8) - local_b0._s_0.Y;
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        *(ulonglong *)(this->_padding_ + lVar22 * 8) =
             CONCAT44((float)(dVar11 * dVar12),(float)(dVar10 * dVar12));
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        *(uint *)(this->_padding_ + lVar22 * 4) = uVar20;
        uVar2 = *(undefined8 *)&(this->Normal).field0_0x0;
        fVar6 = (this->Normal).field0_0x0._s_0.Z;
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        lVar8 = this->_padding_;
        *(undefined8 *)(local_res20 + lVar8) = uVar2;
        *(float *)(local_res20 + 8 + lVar8) = fVar6;
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        local_c8[2] = 0;
        local_c8[0] = 0;
        local_c8[1] = 0;
        *(uint *)(this->_padding_ + lVar22 * 4) = uVar20;
        uVar17 = (this->IndicesMap).field0_0x0._s_0.A;
        uVar2 = *(undefined8 *)(pFVar7 + local_res18 + 8);
        uVar3 = *(undefined8 *)(pFVar7 + local_res18);
        if ((2 < uVar17) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        local_c8[(int)uVar17] = uVar3;
        uVar17 = (this->IndicesMap).field0_0x0._s_0.B;
        if ((2 < uVar17) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        lVar8 = this->_padding_;
        local_c8[(int)uVar17] = uVar2;
        uVar14 = local_c8[2];
        uVar3 = local_c8[1];
        uVar2 = local_c8[0];
        uVar17 = 0;
        if ((int)uVar20 < (int)lVar8) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        uVar20 = uVar20 + 1;
        lVar8 = this->_padding_;
        lVar22 = lVar22 + 1;
        local_res20 = local_res20 + 0xc;
        local_res18 = local_res18 + 0x10;
        puVar1 = (undefined8 *)(local_128 + lVar8);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(local_128 + 0x10 + lVar8) = uVar14;
        local_128 = local_128 + 0x18;
      } while (lVar22 < iVar4);
    }
    uVar20 = 0;
    if (0 < (longlong)iVar5) {
      local_128 = 0;
      lVar22 = 0;
      do {
        uVar23 = ~uVar20 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar20 < (this->Triangles2D).ArrayNum) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        pFVar7 = (this->Triangles2D).AllocatorInstance.Data;
        uVar2 = *(undefined8 *)(pFVar7 + lVar22);
        uVar21 = *(undefined4 *)(pFVar7 + lVar22 + 8);
        local_d8 = (undefined4)uVar2;
        local_res10 = uVar21;
        uVar13 = local_d8;
        if ((char)this->_padding_ != '\0') {
          local_res10 = local_d8;
          uVar13 = uVar21;
        }
        uVar18 = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_120 = CONCAT44(uVar18,uVar13);
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        lVar8 = this->_padding_;
        *(undefined8 *)(lVar22 + lVar8) = local_120;
        *(undefined4 *)(lVar22 + 8 + lVar8) = local_res10;
        local_110 = uVar21;
        uVar13 = local_d8;
        if ((char)this->_padding_ == '\0') {
          local_110 = local_d8;
          uVar13 = uVar21;
        }
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        lVar8 = this->_padding_;
        *(ulonglong *)(lVar22 + lVar8) = CONCAT44(uVar18,local_110);
        *(undefined4 *)(lVar22 + 8 + lVar8) = uVar13;
        local_100 = uVar21;
        if ((char)this->_padding_ == '\0') {
          local_100 = local_d8;
          local_d8 = uVar21;
        }
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        lVar8 = this->_padding_;
        *(ulonglong *)(lVar22 + lVar8) = CONCAT44(uVar18,local_100);
        *(undefined4 *)(lVar22 + 8 + lVar8) = local_d8;
        iVar4 = (this->Triangles2DPolygroups).ArrayNum;
        if (iVar4 == 0) {
          uVar21 = 0;
        }
        else {
          uVar17 = 0;
          if ((int)uVar20 < iVar4) {
            uVar17 = uVar23;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar9 = (code *)swi(3);
            pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
            return pFVar19;
          }
          uVar21 = *(undefined4 *)
                    ((this->Triangles2DPolygroups).AllocatorInstance.Data + local_128 * 4);
        }
        uVar17 = 0;
        if ((int)uVar20 < (int)this->_padding_) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FMeshShapeGenerator *)(*pcVar9)();
          return pFVar19;
        }
        uVar20 = uVar20 + 1;
        lVar22 = lVar22 + 0xc;
        *(undefined4 *)(this->_padding_ + local_128 * 4) = uVar21;
        local_128 = local_128 + 1;
      } while (local_128 < iVar5);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return (FMeshShapeGenerator *)this;
}

