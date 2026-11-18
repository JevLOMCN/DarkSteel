// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 11

// FProfileSweepGenerator @ 143568020

FProfileSweepGenerator * __thiscall
UE::Geometry::FProfileSweepGenerator::FProfileSweepGenerator(FProfileSweepGenerator *this)

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
  (this->ProfileCurve).ArrayNum = 0;
  (this->ProfileCurve).ArrayMax = 0;
  (this->SweepCurve).ArrayNum = 0;
  (this->SweepCurve).ArrayMax = 0;
  (this->SweepScaleCurve).ArrayNum = 0;
  (this->SweepScaleCurve).ArrayMax = 0;
  *(undefined8 *)&(this->WeldedVertices).Elements.field_0x8 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FProfileSweepGenerator_Geometry_UE__6B_;
  (this->ProfileCurve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SweepCurve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SweepScaleCurve).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->WeldedVertices).Elements = 0;
  *(undefined8 *)&(this->WeldedVertices).Elements.field_0x20 = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)&(this->WeldedVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WeldedVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WeldedVertices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WeldedVertices).Elements.field_0x34 = 0;
  (this->WeldedVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WeldedVertices).HashSize = 0;
  (this->UVScale).field0_0x0._s_0.X = 1.0;
  (this->UVScale).field0_0x0._s_0.Y = 1.0;
  this->DiagonalTolerance = 0.01;
  this->bUVScaleRelativeWorld = false;
  this->UnitUVInWorldCoordinates = 100.0;
  this->bSweepCurveIsClosed = false;
  this->bProfileCurveIsClosed = false;
  this->bSharpNormals = true;
  this->bUVsSkipFullyWeldedEdges = true;
  this->QuadSplitMethod = ShortestDiagonal;
  this->PolygonGroupingMode = PerFace;
  this->Progress = (FProgressCancel *)0x0;
  (this->UVOffset).field0_0x0._s_0.X = 0.0;
  (this->UVOffset).field0_0x0._s_0.Y = 0.0;
  this->EndProfiles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EndProfiles[0].ArrayNum = 0;
  this->EndProfiles[0].ArrayMax = 0;
  this->EndProfiles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->EndProfiles[1].ArrayNum = 0;
  this->EndProfiles[1].ArrayMax = 0;
  return this;
}

// ~FProfileSweepGenerator @ 143569240

void __thiscall
UE::Geometry::FProfileSweepGenerator::~FProfileSweepGenerator(FProfileSweepGenerator *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  FProfileSweepGenerator *pFVar4;
  
  pFVar4 = this + 1;
  lVar3 = 2;
  do {
    pFVar1 = pFVar4[-1].EndProfiles[1].AllocatorInstance.Data;
    pFVar4 = (FProfileSweepGenerator *)(pFVar4[-1].EndProfiles + 1);
    lVar3 = lVar3 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar3 != 0);
  (this->WeldedVertices).HashSize = 0;
  FVar2 = (this->WeldedVertices).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WeldedVertices).Elements);
  pFVar1 = (this->SweepScaleCurve).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SweepCurve).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProfileCurve).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  return;
}

// operator() @ 14356b9f0

void __thiscall
`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  FMeshShapeGenerator *this_00;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TVector<double> *pTVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong local_res20;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  longlong *local_c8;
  longlong local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double> local_a0;
  TVector<double> local_88 [3];
  
  lVar5 = *(longlong *)this;
  lVar22 = (longlong)param_1;
  if (*(int *)(lVar5 + 0xd8) != *(int *)(lVar5 + 0x104)) {
    lVar17 = *(longlong *)(lVar5 + 0x110);
    if (*(longlong *)(lVar5 + 0x110) == 0) {
      lVar17 = lVar5 + 0x108;
    }
    iVar20 = *(int *)(lVar17 + (ulonglong)(*(int *)(lVar5 + 0x118) - 1U & param_1) * 4);
    if (iVar20 != -1) {
      do {
        if (*(int *)(*(longlong *)(lVar5 + 0xd0) + (longlong)iVar20 * 0xc) == param_1) {
          if (iVar20 != -1) {
            uVar14 = 0;
            if (param_1 < *(int *)(lVar5 + 0xa8)) {
              uVar14 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar17 = *(longlong *)this;
            pdVar1 = (double *)(*(longlong *)(lVar5 + 0xa0) + lVar22 * 0x18);
            local_f8._s_0.X = *pdVar1;
            local_f8._s_0.Y = pdVar1[1];
            local_f8._s_0.Z = *(double *)(*(longlong *)(lVar5 + 0xa0) + 0x10 + lVar22 * 0x18);
            iVar20 = *(int *)(lVar17 + 200);
            if (iVar20 != 0) {
              if ((iVar20 < 1) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pdVar1 = *(double **)(lVar17 + 0xc0);
              local_f8._s_0.X = local_f8._s_0.X * *pdVar1;
              local_f8._s_0.Y = local_f8._s_0.Y * pdVar1[1];
              local_f8._s_0.Z = local_f8._s_0.Z * pdVar1[2];
            }
            this_00 = *(FMeshShapeGenerator **)this;
            if ((*(int *)&this_00[1].UVs.AllocatorInstance.Data < 1) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pdVar1 = *(double **)&this_00[1].Vertices.ArrayNum;
            pTVar16 = UE::Geometry::operator*<double>
                                (&local_a0,(TQuaternion<double> *)(pdVar1 + 3),
                                 (TVector<double> *)&local_f8._s_0);
            local_b8._s_0.X = (pTVar16->field0_0x0)._s_0.X + *pdVar1;
            local_b8._s_0.Y = pdVar1[1] + (pTVar16->field0_0x0)._s_0.Y;
            local_b8._s_0.Z = pdVar1[2] + (pTVar16->field0_0x0)._s_0.Z;
            plVar7 = *(longlong **)((longlong)this + 0x18);
            uVar14 = 0;
            if (param_1 < (int)plVar7[1]) {
              uVar14 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            UE::Geometry::FMeshShapeGenerator::SetVertex
                      (this_00,*(int *)(*plVar7 + lVar22 * 4),(TVector<double> *)&local_b8._s_0);
            return;
          }
          break;
        }
        iVar20 = *(int *)(*(longlong *)(lVar5 + 0xd0) + 4 + (longlong)iVar20 * 0xc);
      } while (iVar20 != -1);
    }
  }
  uVar19 = 0;
  if (0 < *(int *)((longlong)this + 0x10)) {
    local_c0 = lVar22 * 0x18;
    local_res20 = 0;
    uVar21 = uVar19;
    do {
      lVar17 = local_c0;
      lVar5 = *(longlong *)this;
      uVar14 = 0;
      if (param_1 < *(int *)(lVar5 + 0xa8)) {
        uVar14 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0xa0);
      lVar6 = *(longlong *)this;
      pdVar1 = (double *)(lVar5 + lVar17);
      local_e0._s_0.X = *pdVar1;
      local_e0._s_0.Y = pdVar1[1];
      iVar20 = *(int *)(lVar6 + 200);
      local_e0._s_0.Z = *(double *)(lVar5 + 0x10 + lVar17);
      uVar14 = (uint)uVar19;
      if (iVar20 != 0) {
        uVar18 = 0;
        if ((int)uVar14 < iVar20) {
          uVar18 = ~uVar14 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar5 = *(longlong *)(lVar6 + 0xc0);
        local_e0._s_0.X = local_e0._s_0.X * *(double *)(lVar5 + uVar21);
        local_e0._s_0.Y = local_e0._s_0.Y * *(double *)(lVar5 + 8 + uVar21);
        local_e0._s_0.Z = local_e0._s_0.Z * *(double *)(lVar5 + 0x10 + uVar21);
      }
      lVar5 = *(longlong *)this;
      uVar15 = 0;
      uVar18 = uVar15;
      if ((int)uVar14 < *(int *)(lVar5 + 0xb8)) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar17 = *(longlong *)(lVar5 + 0xb0);
      pTVar16 = UE::Geometry::operator*<double>
                          (local_88,(TQuaternion<double> *)(local_res20 + 0x18 + lVar17),
                           (TVector<double> *)&local_e0._s_0);
      local_c8 = *(longlong **)((longlong)this + 0x18);
      iVar20 = *(int *)((longlong)this + 0xc);
      dVar11 = (pTVar16->field0_0x0)._s_0.Y;
      iVar4 = *(int *)((longlong)this + 8);
      dVar2 = *(double *)(local_res20 + lVar17);
      dVar3 = (pTVar16->field0_0x0)._s_0.X;
      pdVar1 = (double *)(local_res20 + 8 + lVar17);
      dVar12 = *pdVar1;
      uVar18 = uVar15;
      if (param_1 < (int)local_c8[1]) {
        uVar18 = (uint)~param_1 >> 0x1f;
      }
      dVar10 = pdVar1[1] + (pTVar16->field0_0x0)._s_0.Z;
      if ((uVar18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = *(int *)(*local_c8 + lVar22 * 4) + iVar20 * uVar14 + iVar4;
      if ((int)uVar18 < *(int *)(lVar5 + 0x10)) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_res20 = local_res20 + 0x38;
      uVar19 = (ulonglong)(uVar14 + 1);
      uVar21 = uVar21 + 0x18;
      lVar5 = *(longlong *)(lVar5 + 8);
      *(double *)(lVar5 + (longlong)(int)uVar18 * 0x18) = dVar2 + dVar3;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar12 + dVar11;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar5 + 8 + (longlong)(int)uVar18 * 0x18) = auVar9;
    } while ((int)(uVar14 + 1) < *(int *)((longlong)this + 0x10));
  }
  return;
}

// operator() @ 14356c0b0

void __thiscall
`UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar10 = 0;
  iVar2 = *(int *)((longlong)this + 8);
  if (0 < *(int *)((longlong)this + 0xc)) {
    lVar13 = 0;
    do {
      lVar4 = *(longlong *)this;
      if (*(int *)(lVar4 + 0xd8) != *(int *)(lVar4 + 0x104)) {
        lVar9 = lVar4 + 0x108;
        if (*(longlong *)(lVar4 + 0x110) != 0) {
          lVar9 = *(longlong *)(lVar4 + 0x110);
        }
        iVar11 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar4 + 0x118) - 1U & uVar10) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar4 + 0xd0) + (longlong)iVar11 * 0xc) == uVar10) {
              if (iVar11 != -1) goto LAB_14356c3a5;
              break;
            }
            iVar11 = *(int *)(*(longlong *)(lVar4 + 0xd0) + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      iVar11 = *(int *)((longlong)this + 0x10);
      plVar5 = *(longlong **)((longlong)this + 0x18);
      iVar3 = *(int *)((longlong)this + 0x14);
      uVar8 = 0;
      if ((int)uVar10 < (int)plVar5[1]) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = iVar3 * param_1 + *(int *)(*plVar5 + lVar13) + iVar11;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(lVar4 + 0x10)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)((longlong)this + 0x10);
      plVar5 = *(longlong **)((longlong)this + 0x18);
      iVar3 = *(int *)((longlong)this + 0x14);
      dVar15 = *(double *)(*(longlong *)(lVar4 + 8) + 0x10 + (longlong)(int)uVar12 * 0x18);
      pdVar1 = (double *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar12 * 0x18);
      dVar14 = *pdVar1;
      dVar16 = pdVar1[1];
      lVar4 = *(longlong *)this;
      uVar8 = 0;
      if ((int)uVar10 < (int)plVar5[1]) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = iVar3 * ((param_1 + 1) % iVar2) + *(int *)(lVar13 + *plVar5) + iVar11;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)(lVar4 + 0x10)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar5 = *(longlong **)((longlong)this + 0x20);
      lVar4 = *(longlong *)(lVar4 + 8);
      pdVar1 = (double *)(lVar4 + (longlong)(int)uVar12 * 0x18);
      dVar15 = *(double *)(lVar4 + 0x10 + (longlong)(int)uVar12 * 0x18) - dVar15;
      dVar14 = *pdVar1 - dVar14;
      dVar16 = pdVar1[1] - dVar16;
      uVar8 = 0;
      if (param_1 < (int)plVar5[1]) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *plVar5;
      *(double *)(lVar4 + (longlong)param_1 * 8) =
           SQRT(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15) +
           *(double *)(lVar4 + (longlong)param_1 * 8);
LAB_14356c3a5:
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
    } while ((int)uVar10 < *(int *)((longlong)this + 0xc));
  }
  return;
}

// operator() @ 14356eaf0

void __thiscall
`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  FMeshShapeGenerator *this_00;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  uint uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  longlong local_190;
  longlong local_180;
  int local_168;
  int local_158;
  int local_148;
  int local_138;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [5];
  
  dVar12 = __real_3ff0000000000000;
  uVar25 = 0;
  iVar19 = (param_1 + 1) % *(int *)((longlong)this + 8);
  if (0 < *(int *)((longlong)this + 0x20)) {
    uVar45 = (uint)__xmm_80000000000000008000000000000000;
    uVar46 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_190 = 0;
    local_180 = 0;
    do {
      lVar30 = *(longlong *)this;
      uVar10 = (uint)uVar25;
      uVar6 = (longlong)(int)(uVar10 + 1) % (longlong)*(int *)((longlong)this + 0xc);
      uVar14 = (uint)uVar6;
      lVar28 = (longlong)(int)uVar14;
      if (*(int *)(lVar30 + 0xd8) == *(int *)(lVar30 + 0x104)) {
        iVar18 = -1;
LAB_14356eba7:
        iVar22 = *(int *)((longlong)this + 0x10);
        plVar3 = *(longlong **)((longlong)this + 0x18);
        iVar31 = *(int *)((longlong)this + 0x14);
        uVar26 = ~uVar10 >> 0x1f;
        if (iVar18 == -1) {
          uVar27 = 0;
          if ((int)uVar10 < (int)plVar3[1]) {
            uVar27 = uVar26;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = *(int *)((longlong)this + 0x14);
          plVar4 = *(longlong **)((longlong)this + 0x18);
          uVar24 = iVar31 * param_1 + *(int *)(*plVar3 + local_190 * 4) + iVar22;
          iVar22 = *(int *)((longlong)this + 0x10);
          uVar27 = 0;
          if ((int)uVar10 < (int)plVar4[1]) {
            uVar27 = uVar26;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar27 = iVar18 * iVar19 + *(int *)(*plVar4 + local_190 * 4) + iVar22;
          plVar3 = *(longlong **)((longlong)this + 0x18);
          iVar22 = *(int *)((longlong)this + 0x10);
          iVar18 = *(int *)((longlong)this + 0x14);
          uVar26 = 0;
          if ((int)uVar14 < (int)plVar3[1]) {
            uVar26 = ~uVar14 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar31 = *(int *)((longlong)this + 0x10);
          iVar23 = *(int *)((longlong)this + 0x14);
          plVar4 = *(longlong **)((longlong)this + 0x18);
          uVar32 = iVar18 * iVar19 + *(int *)(*plVar3 + lVar28 * 4) + iVar22;
          uVar26 = 0;
          if ((int)uVar14 < (int)plVar4[1]) {
            uVar26 = ~uVar14 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar26 = iVar23 * param_1 + *(int *)(*plVar4 + lVar28 * 4) + iVar31;
          iVar22 = UE::SweepGeneratorLocals::GetTriangleIndex
                             (param_1,uVar10,*(int *)((longlong)this + 0x24),
                              *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28));
          lVar30 = *(longlong *)this;
          uVar14 = param_1;
          if (*(char *)(lVar30 + 0x14c) == '\0') {
LAB_14356fa1e:
            uVar42 = 0;
            if ((int)uVar32 < *(int *)(lVar30 + 0x10)) {
              uVar42 = ~uVar32 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar30 = *(longlong *)(lVar30 + 8);
            lVar15 = (longlong)(int)uVar32;
            lVar28 = *(longlong *)this;
            uVar42 = 0;
            if ((int)uVar24 < *(int *)(lVar28 + 0x10)) {
              uVar42 = ~uVar24 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar17 = (longlong)(int)uVar24;
            lVar28 = *(longlong *)(lVar28 + 8);
            dVar37 = *(double *)(lVar30 + lVar15 * 0x18) - *(double *)(lVar28 + lVar17 * 0x18);
            dVar40 = *(double *)(lVar30 + 8 + lVar15 * 0x18) -
                     *(double *)(lVar28 + 8 + lVar17 * 0x18);
            dVar33 = *(double *)(lVar30 + 0x10 + lVar15 * 0x18) -
                     *(double *)(lVar28 + 0x10 + lVar17 * 0x18);
            auVar34._0_8_ = dVar37 * dVar37;
            auVar34._8_8_ = 0;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = dVar40 * dVar40 + auVar34._0_8_ + dVar33 * dVar33;
            auVar38 = sqrtpd(auVar34,auVar9);
            if (auVar38._0_8_ <= 0.0) {
              local_f0._s_0.X = 0.0;
              local_f0._s_0.Y = 0.0;
              local_f0._s_0.Z = 0.0;
            }
            else {
              dVar35 = dVar12 / auVar38._0_8_;
              local_f0._s_0.X = dVar35 * dVar37;
              local_f0._s_0.Y = dVar35 * dVar40;
              local_f0._s_0.Z = dVar35 * dVar33;
            }
            uVar25 = (ulonglong)local_f0._s_0.Z >> 0x20;
            uVar42 = SUB84(local_f0._s_0.Z,0);
            uVar11 = (ulonglong)local_f0._8_8_ >> 0x20;
            uVar44 = SUB84(local_f0._s_0.Y,0);
            uVar6 = (ulonglong)local_f0._0_8_ >> 0x20;
            uVar43 = SUB84(local_f0._s_0.X,0);
            UE::Geometry::FMeshShapeGenerator::SetTriangle
                      (*(FMeshShapeGenerator **)this,iVar22,uVar24,uVar32,uVar26);
            UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
                      (*(FProfileSweepGenerator **)this,iVar22,uVar24,uVar32,uVar26,
                       *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 0x30),(TVector<double> *)&local_f0._s_0);
            iVar18 = *(int *)((longlong)this + 0x38) * param_1 + uVar10;
            UE::Geometry::FMeshShapeGenerator::SetTriangleUVs
                      (*(FMeshShapeGenerator **)this,iVar22,iVar18,
                       (param_1 + 1) * *(int *)((longlong)this + 0x38) + 1 + uVar10,iVar18 + 1);
            cVar1 = *(char *)&(*(FMeshShapeGenerator **)this)[2].UVs.AllocatorInstance.Data;
            if (cVar1 == '\0') {
              uVar26 = 0;
            }
            else if (cVar1 == '\x01') {
              uVar26 = param_1 * *(int *)((longlong)this + 0x20) + uVar10;
            }
            else {
              uVar26 = param_1;
              if ((cVar1 != '\x02') && (uVar26 = 0xffffffff, cVar1 == '\x03')) {
                uVar26 = uVar10;
              }
            }
            UE::Geometry::FMeshShapeGenerator::SetTrianglePolygon
                      (*(FMeshShapeGenerator **)this,iVar22,uVar26);
            iVar31 = iVar22 + 1;
            UE::Geometry::FMeshShapeGenerator::SetTriangle
                      (*(FMeshShapeGenerator **)this,iVar31,uVar32,uVar24,uVar27);
            local_c0[0]._0_8_ = CONCAT44((uint)uVar6 ^ uVar46,uVar43 ^ uVar45);
            local_c0[0]._8_8_ = CONCAT44((uint)uVar11 ^ uVar46,uVar44 ^ uVar45);
            local_c0[0]._16_8_ = CONCAT44((uint)uVar25 ^ uVar46,uVar42 ^ uVar45);
            UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
                      (*(FProfileSweepGenerator **)this,iVar31,uVar32,uVar24,uVar27,
                       *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 0x30),(TVector<double> *)&local_c0[0]._s_0);
            iVar18 = (param_1 + 1) * *(int *)((longlong)this + 0x38) + uVar10;
            UE::Geometry::FMeshShapeGenerator::SetTriangleUVs
                      (*(FMeshShapeGenerator **)this,iVar31,iVar18 + 1,
                       *(int *)((longlong)this + 0x38) * param_1 + uVar10,iVar18);
            this_00 = *(FMeshShapeGenerator **)this;
            cVar1 = *(char *)&this_00[2].UVs.AllocatorInstance.Data;
            if (cVar1 == '\0') {
              uVar14 = 0;
            }
            else if (cVar1 == '\x01') {
              uVar14 = param_1 * *(int *)((longlong)this + 0x20) + uVar10;
            }
            else if ((cVar1 != '\x02') && (uVar14 = 0xffffffff, cVar1 == '\x03')) {
              uVar14 = uVar10;
            }
          }
          else {
            uVar42 = 0;
            if ((int)uVar32 < *(int *)(lVar30 + 0x10)) {
              uVar42 = ~uVar32 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar15 = (longlong)(int)uVar32;
            lVar28 = *(longlong *)(lVar30 + 8);
            lVar30 = *(longlong *)this;
            uVar42 = 0;
            if ((int)uVar24 < *(int *)(lVar30 + 0x10)) {
              uVar42 = ~uVar24 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar16 = (longlong)(int)uVar24;
            lVar17 = *(longlong *)(lVar30 + 8);
            lVar30 = *(longlong *)this;
            uVar42 = 0;
            if ((int)uVar26 < *(int *)(lVar30 + 0x10)) {
              uVar42 = ~uVar26 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = *(longlong *)this;
            lVar30 = *(longlong *)(lVar30 + 8);
            lVar29 = (longlong)(int)uVar27;
            lVar20 = (longlong)(int)uVar26;
            uVar42 = 0;
            if ((int)uVar27 < *(int *)(lVar5 + 0x10)) {
              uVar42 = ~uVar27 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar21 = (longlong)(int)uVar26;
            lVar5 = *(longlong *)(lVar5 + 8);
            dVar40 = *(double *)(lVar30 + 8 + lVar21 * 0x18) -
                     *(double *)(lVar5 + 8 + lVar29 * 0x18);
            dVar41 = *(double *)(lVar30 + lVar21 * 0x18) - *(double *)(lVar5 + lVar29 * 0x18);
            dVar39 = *(double *)(lVar30 + 0x10 + lVar21 * 0x18) -
                     *(double *)(lVar5 + 0x10 + lVar29 * 0x18);
            lVar30 = *(longlong *)this;
            dVar36 = *(double *)(lVar28 + 8 + lVar15 * 0x18) -
                     *(double *)(lVar17 + 8 + lVar16 * 0x18);
            dVar35 = *(double *)(lVar28 + lVar15 * 0x18) - *(double *)(lVar17 + lVar16 * 0x18);
            dVar33 = *(double *)(lVar28 + 0x10 + lVar15 * 0x18) -
                     *(double *)(lVar17 + 0x10 + lVar16 * 0x18);
            dVar37 = *(double *)(lVar30 + 0x150) + dVar12;
            auVar38._0_8_ =
                 (dVar36 * dVar36 + dVar35 * dVar35 + dVar33 * dVar33) /
                 (dVar40 * dVar40 + dVar41 * dVar41 + dVar39 * dVar39);
            auVar38._8_8_ = 0;
            if (auVar38._0_8_ <= dVar37 * dVar37) goto LAB_14356fa1e;
            uVar42 = 0;
            if ((int)uVar26 < *(int *)(lVar30 + 0x10)) {
              uVar42 = ~uVar26 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar30 = *(longlong *)(lVar30 + 8);
            lVar15 = (longlong)(int)uVar27;
            lVar28 = *(longlong *)this;
            uVar42 = 0;
            if ((int)uVar27 < *(int *)(lVar28 + 0x10)) {
              uVar42 = ~uVar27 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar28 = *(longlong *)(lVar28 + 8);
            dVar37 = *(double *)(lVar30 + lVar20 * 0x18) - *(double *)(lVar28 + lVar15 * 0x18);
            dVar40 = *(double *)(lVar30 + 8 + lVar20 * 0x18) -
                     *(double *)(lVar28 + 8 + lVar15 * 0x18);
            dVar33 = *(double *)(lVar30 + 0x10 + lVar20 * 0x18) -
                     *(double *)(lVar28 + 0x10 + lVar15 * 0x18);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = dVar40 * dVar40 + dVar37 * dVar37 + dVar33 * dVar33;
            auVar38 = sqrtpd(auVar38,auVar8);
            if (auVar38._0_8_ <= 0.0) {
              local_108._s_0.Z = 0.0;
              local_108._s_0.X = 0.0;
              local_108._s_0.Y = 0.0;
            }
            else {
              dVar35 = dVar12 / auVar38._0_8_;
              local_108._s_0.X = dVar37 * dVar35;
              local_108._s_0.Y = dVar40 * dVar35;
              local_108._s_0.Z = dVar33 * dVar35;
            }
            uVar11 = (ulonglong)local_108._16_8_ >> 0x20;
            uVar44 = SUB84(local_108._s_0.Z,0);
            uVar6 = (ulonglong)local_108._8_8_ >> 0x20;
            uVar43 = SUB84(local_108._s_0.Y,0);
            uVar25 = (ulonglong)local_108._0_8_ >> 0x20;
            uVar42 = SUB84(local_108._s_0.X,0);
            UE::Geometry::FMeshShapeGenerator::SetTriangle
                      (*(FMeshShapeGenerator **)this,iVar22,uVar27,uVar26,uVar24);
            UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
                      (*(FProfileSweepGenerator **)this,iVar22,uVar27,uVar26,uVar24,
                       *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 0x30),(TVector<double> *)&local_108._s_0);
            iVar18 = *(int *)((longlong)this + 0x38) * param_1 + uVar10;
            UE::Geometry::FMeshShapeGenerator::SetTriangleUVs
                      (*(FMeshShapeGenerator **)this,iVar22,
                       *(int *)((longlong)this + 0x38) * (param_1 + 1) + uVar10,iVar18 + 1,iVar18);
            cVar1 = *(char *)&(*(FMeshShapeGenerator **)this)[2].UVs.AllocatorInstance.Data;
            if (cVar1 == '\0') {
              uVar24 = 0;
            }
            else if (cVar1 == '\x01') {
              uVar24 = param_1 * *(int *)((longlong)this + 0x20) + uVar10;
            }
            else {
              uVar24 = param_1;
              if ((cVar1 != '\x02') && (uVar24 = 0xffffffff, cVar1 == '\x03')) {
                uVar24 = uVar10;
              }
            }
            UE::Geometry::FMeshShapeGenerator::SetTrianglePolygon
                      (*(FMeshShapeGenerator **)this,iVar22,uVar24);
            iVar18 = iVar22 + 1;
            UE::Geometry::FMeshShapeGenerator::SetTriangle
                      (*(FMeshShapeGenerator **)this,iVar18,uVar26,uVar27,uVar32);
            local_d8._s_0.X = (double)CONCAT44((uint)uVar25 ^ uVar46,uVar42 ^ uVar45);
            local_d8._s_0.Y = (double)CONCAT44((uint)uVar6 ^ uVar46,uVar43 ^ uVar45);
            local_d8._s_0.Z = (double)CONCAT44((uint)uVar11 ^ uVar46,uVar44 ^ uVar45);
            UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
                      (*(FProfileSweepGenerator **)this,iVar18,uVar26,uVar27,uVar32,
                       *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                        ((longlong)this + 0x30),(TVector<double> *)&local_d8._s_0);
            iVar31 = *(int *)((longlong)this + 0x38) * (param_1 + 1) + uVar10;
            UE::Geometry::FMeshShapeGenerator::SetTriangleUVs
                      (*(FMeshShapeGenerator **)this,iVar18,
                       *(int *)((longlong)this + 0x38) * param_1 + 1 + uVar10,iVar31,iVar31 + 1);
            this_00 = *(FMeshShapeGenerator **)this;
            cVar1 = *(char *)&this_00[2].UVs.AllocatorInstance.Data;
            if (cVar1 == '\0') {
              uVar14 = 0;
            }
            else if (cVar1 == '\x01') {
              uVar14 = param_1 * *(int *)((longlong)this + 0x20) + uVar10;
            }
            else if ((cVar1 != '\x02') && (uVar14 = 0xffffffff, cVar1 == '\x03')) {
              uVar14 = uVar10;
            }
          }
          UE::Geometry::FMeshShapeGenerator::SetTrianglePolygon(this_00,iVar22 + 1,uVar14);
        }
        else {
          uVar27 = 0;
          if ((int)uVar10 < (int)plVar3[1]) {
            uVar27 = uVar26;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = *(int *)((longlong)this + 0x14);
          plVar4 = *(longlong **)((longlong)this + 0x18);
          iVar22 = iVar31 * param_1 + *(int *)(*plVar3 + local_190 * 4) + iVar22;
          iVar31 = *(int *)((longlong)this + 0x10);
          uVar27 = 0;
          if ((int)uVar10 < (int)plVar4[1]) {
            uVar27 = uVar26;
          }
          if ((uVar27 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar3 = *(longlong **)((longlong)this + 0x18);
          iVar31 = iVar18 * iVar19 + *(int *)(*plVar4 + local_190 * 4) + iVar31;
          uVar26 = 0;
          if ((int)uVar14 < (int)plVar3[1]) {
            uVar26 = ~uVar14 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = *(int *)(*plVar3 + lVar28 * 4);
          uVar14 = UE::SweepGeneratorLocals::GetTriangleIndex
                             (param_1,uVar10,*(int *)((longlong)this + 0x24),
                              *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28));
          lVar28 = (longlong)(int)uVar14;
          lVar30 = *(longlong *)this;
          local_148 = iVar22;
          iVar23 = iVar18;
          if (*(char *)(lVar30 + 0x98) != '\0') {
            local_148 = iVar18;
            iVar23 = iVar22;
          }
          uVar27 = ~uVar14 >> 0x1f;
          uVar26 = 0;
          if ((int)uVar14 < *(int *)(lVar30 + 0x60)) {
            uVar26 = uVar27;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x58);
          *(ulonglong *)(lVar30 + lVar28 * 0xc) = CONCAT44(iVar31,local_148);
          *(int *)(lVar30 + 8 + lVar28 * 0xc) = iVar23;
          UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
                    (*(FProfileSweepGenerator **)this,uVar14,iVar22,iVar31,iVar18,
                     *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                      ((longlong)this + 0x30));
          iVar22 = *(int *)((longlong)this + 0x38);
          lVar30 = *(longlong *)this;
          local_138 = iVar22 * param_1 + uVar10;
          iVar18 = local_138 + 1;
          if (*(char *)(lVar30 + 0x98) != '\0') {
            iVar18 = local_138;
            local_138 = local_138 + 1;
          }
          uVar26 = 0;
          if ((int)uVar14 < *(int *)(lVar30 + 0x70)) {
            uVar26 = uVar27;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x68);
          *(ulonglong *)(lVar30 + lVar28 * 0xc) =
               CONCAT44(iVar22 * (param_1 + 1) + uVar10,local_138);
          *(int *)(lVar30 + 8 + lVar28 * 0xc) = iVar18;
          lVar30 = *(longlong *)this;
          cVar1 = *(char *)(lVar30 + 0x158);
          if (cVar1 == '\0') {
            uVar26 = 0;
          }
          else if (cVar1 == '\x01') {
            uVar26 = param_1 * *(int *)((longlong)this + 0x20) + uVar10;
          }
          else {
            uVar26 = param_1;
            if ((cVar1 != '\x02') && (uVar26 = 0xffffffff, cVar1 == '\x03')) {
              uVar26 = uVar10;
            }
          }
          uVar24 = 0;
          if ((int)uVar14 < *(int *)(lVar30 + 0x90)) {
            uVar24 = uVar27;
          }
          if ((uVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)(*(longlong *)(lVar30 + 0x88) + lVar28 * 4) = uVar26;
        }
      }
      else {
        lVar15 = lVar30 + 0x108;
        if (*(longlong *)(lVar30 + 0x110) != 0) {
          lVar15 = *(longlong *)(lVar30 + 0x110);
        }
        iVar22 = *(int *)(lVar15 + (*(int *)(lVar30 + 0x118) - 1 & uVar25) * 4);
        if (iVar22 != -1) {
          lVar15 = *(longlong *)(lVar30 + 0xd0);
          do {
            if (*(uint *)(lVar15 + (longlong)iVar22 * 0xc) == uVar10) goto LAB_14356ed81;
            iVar22 = *(int *)(lVar15 + 4 + (longlong)iVar22 * 0xc);
          } while (iVar22 != -1);
        }
        iVar22 = -1;
LAB_14356ed81:
        lVar15 = lVar30 + 0x108;
        if (*(longlong *)(lVar30 + 0x110) != 0) {
          lVar15 = *(longlong *)(lVar30 + 0x110);
        }
        iVar18 = *(int *)(lVar15 + ((ulonglong)(*(int *)(lVar30 + 0x118) - 1) & uVar6 & 0xffffffff)
                                   * 4);
        if (iVar18 != -1) {
          lVar30 = *(longlong *)(lVar30 + 0xd0);
          do {
            if (*(uint *)(lVar30 + (longlong)iVar18 * 0xc) == uVar14) goto LAB_14356edcc;
            iVar18 = *(int *)(lVar30 + 4 + (longlong)iVar18 * 0xc);
          } while (iVar18 != -1);
        }
        iVar18 = -1;
LAB_14356edcc:
        if (iVar22 == -1) goto LAB_14356eba7;
        if (iVar18 == -1) {
          plVar3 = *(longlong **)((longlong)this + 0x18);
          uVar26 = 0;
          if ((int)uVar10 < (int)plVar3[1]) {
            uVar26 = ~uVar10 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar4 = *(longlong **)((longlong)this + 0x18);
          iVar22 = *(int *)(local_180 + *plVar3);
          iVar18 = *(int *)((longlong)this + 0x14);
          iVar31 = *(int *)((longlong)this + 0x10);
          uVar26 = 0;
          if ((int)uVar14 < (int)plVar4[1]) {
            uVar26 = ~uVar14 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar23 = *(int *)((longlong)this + 0x10);
          iVar2 = *(int *)((longlong)this + 0x14);
          plVar3 = *(longlong **)((longlong)this + 0x18);
          iVar31 = iVar18 * iVar19 + *(int *)(*plVar4 + lVar28 * 4) + iVar31;
          uVar26 = 0;
          if ((int)uVar14 < (int)plVar3[1]) {
            uVar26 = ~uVar14 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar23 = iVar2 * param_1 + *(int *)(*plVar3 + lVar28 * 4) + iVar23;
          uVar14 = UE::SweepGeneratorLocals::GetTriangleIndex
                             (param_1,uVar10,*(int *)((longlong)this + 0x24),
                              *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28));
          lVar28 = (longlong)(int)uVar14;
          lVar30 = *(longlong *)this;
          local_168 = iVar22;
          iVar18 = iVar23;
          if (*(char *)(lVar30 + 0x98) != '\0') {
            local_168 = iVar23;
            iVar18 = iVar22;
          }
          uVar27 = ~uVar14 >> 0x1f;
          uVar26 = 0;
          if ((int)uVar14 < *(int *)(lVar30 + 0x60)) {
            uVar26 = uVar27;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x58);
          *(ulonglong *)(lVar30 + lVar28 * 0xc) = CONCAT44(iVar31,local_168);
          *(int *)(lVar30 + 8 + lVar28 * 0xc) = iVar18;
          UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
                    (*(FProfileSweepGenerator **)this,uVar14,iVar22,iVar31,iVar23,
                     *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                      ((longlong)this + 0x30));
          lVar30 = *(longlong *)this;
          iVar22 = *(int *)((longlong)this + 0x38);
          local_158 = *(int *)((longlong)this + 0x38) * param_1 + uVar10;
          iVar18 = local_158 + 1;
          if (*(char *)(lVar30 + 0x98) != '\0') {
            iVar18 = local_158;
            local_158 = local_158 + 1;
          }
          uVar26 = 0;
          if ((int)uVar14 < *(int *)(lVar30 + 0x70)) {
            uVar26 = uVar27;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar30 = *(longlong *)(lVar30 + 0x68);
          *(ulonglong *)(lVar30 + lVar28 * 0xc) =
               CONCAT44((param_1 + 1) * iVar22 + 1 + uVar10,local_158);
          *(int *)(lVar30 + 8 + lVar28 * 0xc) = iVar18;
          lVar30 = *(longlong *)this;
          cVar1 = *(char *)(lVar30 + 0x158);
          if (cVar1 == '\0') {
            uVar26 = 0;
          }
          else if (cVar1 == '\x01') {
            uVar26 = param_1 * *(int *)((longlong)this + 0x20) + uVar10;
          }
          else {
            uVar26 = param_1;
            if ((cVar1 != '\x02') && (uVar26 = 0xffffffff, cVar1 == '\x03')) {
              uVar26 = uVar10;
            }
          }
          uVar24 = 0;
          if ((int)uVar14 < *(int *)(lVar30 + 0x90)) {
            uVar24 = uVar27;
          }
          if ((uVar24 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)(*(longlong *)(lVar30 + 0x88) + lVar28 * 4) = uVar26;
        }
      }
      local_180 = local_180 + 4;
      uVar25 = (ulonglong)(uVar10 + 1);
      local_190 = local_190 + 1;
    } while ((int)(uVar10 + 1) < *(int *)((longlong)this + 0x20));
  }
  return;
}

// operator() @ 14356fd90

void __thiscall
`UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  
  uVar16 = 0;
  iVar3 = *(int *)((longlong)this + 8);
  if (0 < *(int *)((longlong)this + 0x10)) {
    lVar17 = 0;
    do {
      lVar18 = *(longlong *)this;
      uVar5 = (longlong)(int)uVar16 % (longlong)*(int *)((longlong)this + 0xc);
      uVar10 = (uint)uVar5;
      if (*(int *)(lVar18 + 0xd8) != *(int *)(lVar18 + 0x104)) {
        lVar11 = lVar18 + 0x108;
        if (*(longlong *)(lVar18 + 0x110) != 0) {
          lVar11 = *(longlong *)(lVar18 + 0x110);
        }
        iVar15 = *(int *)(lVar11 + ((ulonglong)(*(int *)(lVar18 + 0x118) - 1) & uVar5 & 0xffffffff)
                                   * 4);
        if (iVar15 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar18 + 0xd0) + (longlong)iVar15 * 0xc) == uVar10) {
              plVar14 = *(longlong **)((longlong)this + 0x20);
              iVar12 = *(int *)((longlong)this + 0x18);
              iVar19 = *(int *)((longlong)this + 0x14);
              uVar9 = ~uVar10 >> 0x1f;
              if (iVar15 == -1) goto LAB_14356fe7d;
              uVar13 = 0;
              if ((int)uVar10 < (int)plVar14[1]) {
                uVar13 = uVar9;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar18 = *(longlong *)this;
              iVar19 = *(int *)(*plVar14 + (longlong)(int)uVar10 * 4);
              plVar14 = *(longlong **)((longlong)this + 0x38);
              uVar10 = 0;
              if ((int)uVar16 < (int)plVar14[1]) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar4 = *(longlong **)((longlong)this + 0x28);
              dVar1 = *(double *)(*plVar14 + lVar17);
              uVar10 = 0;
              if (param_1 < (int)plVar4[1]) {
                uVar10 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar2 = *(double *)(*plVar4 + (longlong)param_1 * 8);
              uVar13 = param_1 * *(int *)((longlong)this + 0x10) + uVar16;
              uVar9 = ~uVar13 >> 0x1f;
              uVar10 = 0;
              if ((int)uVar13 < *(int *)(lVar18 + 0x20)) {
                uVar10 = uVar9;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar8 = CONCAT44((float)dVar1,(float)dVar2);
              goto LAB_14356ffec;
            }
            iVar15 = *(int *)(*(longlong *)(lVar18 + 0xd0) + 4 + (longlong)iVar15 * 0xc);
          } while (iVar15 != -1);
        }
      }
      iVar19 = *(int *)((longlong)this + 0x14);
      iVar12 = *(int *)((longlong)this + 0x18);
      plVar14 = *(longlong **)((longlong)this + 0x20);
      uVar9 = ~uVar10 >> 0x1f;
LAB_14356fe7d:
      uVar13 = 0;
      if ((int)uVar10 < (int)plVar14[1]) {
        uVar13 = uVar9;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)((longlong)this + 0x38);
      iVar19 = *(int *)(*plVar14 + (longlong)(int)uVar10 * 4) + iVar12 * (param_1 % iVar3) + iVar19;
      lVar18 = *(longlong *)this;
      uVar10 = 0;
      if ((int)uVar16 < (int)plVar4[1]) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar14 = *(longlong **)((longlong)this + 0x30);
      dVar1 = *(double *)(*plVar4 + lVar17);
      uVar10 = 0;
      if (param_1 < (int)plVar14[1]) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar2 = *(double *)(*plVar14 + (longlong)param_1 * 8);
      uVar13 = param_1 * *(int *)((longlong)this + 0x10) + uVar16;
      uVar9 = ~uVar13 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar13 < *(int *)(lVar18 + 0x20)) {
        uVar10 = uVar9;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = CONCAT44((float)dVar1,(float)dVar2);
LAB_14356ffec:
      *(undefined8 *)(*(longlong *)(lVar18 + 0x18) + (longlong)(int)uVar13 * 8) = uVar8;
      uVar10 = 0;
      if ((int)uVar13 < *(int *)(lVar18 + 0x30)) {
        uVar10 = uVar9;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 8;
      *(int *)(*(longlong *)(lVar18 + 0x28) + (longlong)(int)uVar13 * 4) = iVar19;
    } while ((int)uVar16 < *(int *)((longlong)this + 0x10));
  }
  return;
}

// operator() @ 143571610

void __thiscall
`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_3>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  FMeshShapeGenerator *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  TVector<float>_u_0 local_18;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  this_00 = *(FMeshShapeGenerator **)this;
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *plVar3;
  dVar1 = *(double *)(lVar4 + lVar8 * 0x18);
  dVar10 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  auVar11._0_8_ = dVar2 * dVar2;
  auVar11._8_8_ = 0;
  dVar9 = 0.0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar10 * dVar10 + dVar1 * dVar1 + auVar11._0_8_;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (auVar12._0_8_ <= 0.0) {
    dVar10 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar9 = __real_3ff0000000000000 / auVar12._0_8_;
    dVar10 = dVar9 * dVar10;
    dVar2 = dVar9 * dVar2;
    dVar9 = dVar9 * dVar1;
  }
  local_18._s_0.X = (float)dVar9;
  local_18._s_0.Y = (float)dVar10;
  local_18._s_0.Z = (float)dVar2;
  UE::Geometry::FMeshShapeGenerator::SetNormal
            (this_00,param_1,(TVector<float> *)&local_18._s_0,param_1);
  return;
}

// AdjustNormalsForTriangle @ 143575090

void __thiscall
UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
          (FProfileSweepGenerator *this,int param_1,int param_2,int param_3,int param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_38;
  
  lVar8 = (longlong)param_3;
  lVar7 = (longlong)param_2;
  uVar6 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = this->_padding_;
  uVar6 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = this->_padding_;
  dVar11 = *(double *)(lVar1 + lVar8 * 0x18) - *(double *)(lVar2 + lVar7 * 0x18);
  dVar12 = *(double *)(lVar1 + 8 + lVar8 * 0x18) - *(double *)(lVar2 + 8 + lVar7 * 0x18);
  dVar13 = *(double *)(lVar1 + 0x10 + lVar8 * 0x18) - *(double *)(lVar2 + 0x10 + lVar7 * 0x18);
  auVar9._0_8_ = dVar11 * dVar11;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar12 * dVar12 + auVar9._0_8_ + dVar13 * dVar13;
  auVar10 = sqrtpd(auVar9,auVar10);
  if (auVar10._0_8_ <= 0.0) {
    local_38._s_0.Z = 0.0;
    local_38._s_0.X = 0.0;
    local_38._s_0.Y = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / auVar10._0_8_;
    local_38._s_0.X = dVar4 * dVar11;
    local_38._s_0.Y = dVar4 * dVar12;
    local_38._s_0.Z = dVar4 * dVar13;
  }
  AdjustNormalsForTriangle
            (this,param_1,param_2,param_3,param_4,param_5,(TVector<double> *)&local_38._s_0);
  return;
}

// AdjustNormalsForTriangle @ 143575240

void __thiscall
UE::Geometry::FProfileSweepGenerator::AdjustNormalsForTriangle
          (FProfileSweepGenerator *this,int param_1,int param_2,int param_3,int param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TVector<double> *param_6)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double _X;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  
  lVar19 = (longlong)param_4;
  uVar17 = 0;
  if (param_4 < (int)this->_padding_) {
    uVar17 = (uint)~param_4 >> 0x1f;
  }
  lVar18 = (longlong)param_2;
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = this->_padding_;
  uVar17 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar17 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar21 = __real_3ff0000000000000;
  lVar15 = (longlong)param_3;
  lVar3 = this->_padding_;
  dVar23 = *(double *)(lVar2 + lVar19 * 0x18) - *(double *)(lVar3 + lVar15 * 0x18);
  dVar11 = *(double *)(lVar2 + 8 + lVar19 * 0x18) - *(double *)(lVar3 + 8 + lVar15 * 0x18);
  dVar12 = *(double *)(lVar2 + 0x10 + lVar19 * 0x18) - *(double *)(lVar3 + 0x10 + lVar15 * 0x18);
  auVar27._0_8_ = dVar11 * dVar11 + dVar23 * dVar23 + dVar12 * dVar12;
  auVar27._8_8_ = 0;
  auVar27 = sqrtpd(in_XMM3,auVar27);
  if (auVar27._0_8_ <= 0.0) {
    dVar23 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
  }
  else {
    dVar20 = __real_3ff0000000000000 / auVar27._0_8_;
    dVar23 = dVar23 * dVar20;
    dVar11 = dVar11 * dVar20;
    dVar12 = dVar12 * dVar20;
  }
  uVar17 = 0;
  if (param_4 < (int)this->_padding_) {
    uVar17 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = this->_padding_;
  uVar17 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar17 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  _X = __real_bff0000000000000;
  lVar3 = this->_padding_;
  dVar6 = *(double *)(lVar2 + lVar19 * 0x18) - *(double *)(lVar3 + lVar18 * 0x18);
  dVar20 = *(double *)(lVar2 + 8 + lVar19 * 0x18) - *(double *)(lVar3 + 8 + lVar18 * 0x18);
  dVar7 = *(double *)(lVar2 + 0x10 + lVar19 * 0x18) - *(double *)(lVar3 + 0x10 + lVar18 * 0x18);
  auVar24._0_8_ = dVar20 * dVar20 + dVar6 * dVar6 + dVar7 * dVar7;
  auVar24._8_8_ = 0;
  auVar27 = sqrtpd(auVar27,auVar24);
  if (auVar27._0_8_ <= 0.0) {
    dVar6 = 0.0;
    dVar20 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar21 = dVar21 / auVar27._0_8_;
    dVar6 = dVar6 * dVar21;
    dVar20 = dVar20 * dVar21;
    dVar7 = dVar7 * dVar21;
  }
  dVar21 = (param_6->field0_0x0)._s_0.Y;
  dVar26 = (param_6->field0_0x0)._s_0.Z;
  dVar1 = (param_6->field0_0x0)._s_0.X;
  dVar8 = dVar20 * dVar26 - dVar7 * dVar21;
  dVar9 = dVar7 * dVar1 - dVar6 * dVar26;
  dVar10 = dVar6 * dVar21 - dVar20 * dVar1;
  auVar25._0_8_ = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
  auVar25._8_8_ = 0;
  auVar27 = sqrtpd(auVar25,auVar25);
  if (auVar27._0_8_ <= 0.0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  else {
    dVar22 = __real_3ff0000000000000 / auVar27._0_8_;
    dVar8 = dVar8 * dVar22;
    dVar9 = dVar9 * dVar22;
    dVar10 = dVar10 * dVar22;
  }
  dVar26 = dVar1 * dVar6 + dVar21 * dVar20 + dVar26 * dVar7;
  dVar21 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar26) && (dVar21 = dVar26, __real_3ff0000000000000 <= dVar26)) {
    dVar21 = __real_3ff0000000000000;
  }
  dVar21 = acos(dVar21);
  uVar17 = param_1 * 3;
  uVar14 = 0;
  if ((int)uVar17 < param_5->ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar19 = (longlong)(int)uVar17;
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar19 * 0x18) = dVar8 * dVar21;
  *(double *)(pFVar4 + lVar19 * 0x18 + 8) = dVar9 * dVar21;
  *(double *)(pFVar4 + lVar19 * 0x18 + 0x10) = dVar10 * dVar21;
  dVar21 = dVar11 * (param_6->field0_0x0)._s_0.Y + dVar23 * (param_6->field0_0x0)._s_0.X +
           dVar12 * (param_6->field0_0x0)._s_0.Z;
  dVar26 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar21,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar21 = _X;
  if ((_X <= dVar26) && (dVar21 = dVar26, __real_3ff0000000000000 <= dVar26)) {
    dVar21 = __real_3ff0000000000000;
  }
  dVar21 = acos(dVar21);
  uVar16 = uVar17 + 1;
  uVar14 = 0;
  if ((int)uVar16 < param_5->ArrayNum) {
    uVar14 = ~uVar16 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar19 = (longlong)(int)uVar16;
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar19 * 0x18) = dVar8 * dVar21;
  *(double *)(pFVar4 + lVar19 * 0x18 + 8) = dVar9 * dVar21;
  *(double *)(pFVar4 + lVar19 * 0x18 + 0x10) = dVar10 * dVar21;
  dVar23 = dVar20 * dVar11 + dVar6 * dVar23 + dVar7 * dVar12;
  if ((_X <= dVar23) && (_X = dVar23, __real_3ff0000000000000 <= dVar23)) {
    _X = __real_3ff0000000000000;
  }
  dVar23 = acos(_X);
  uVar17 = uVar17 + 2;
  uVar14 = 0;
  if ((int)uVar17 < param_5->ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar19 = (longlong)(int)uVar17;
  pFVar4 = (param_5->AllocatorInstance).Data;
  *(double *)(pFVar4 + lVar19 * 0x18) = dVar8 * dVar23;
  *(double *)(pFVar4 + lVar19 * 0x18 + 8) = dVar9 * dVar23;
  *(double *)(pFVar4 + lVar19 * 0x18 + 0x10) = dVar10 * dVar23;
  FMeshShapeGenerator::SetTriangleNormals
            ((FMeshShapeGenerator *)this,param_1,param_2,param_3,param_4);
  return;
}

// Generate @ 14359c4f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMeshShapeGenerator * __thiscall
UE::Geometry::FProfileSweepGenerator::Generate(FProfileSweepGenerator *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  int iVar3;
  FProgressCancel *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  FMeshShapeGenerator *pFVar14;
  longlong *plVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  uint uVar26;
  <lambda_1> <Var28;
  uint local_res18;
  int local_1a8;
  int local_1a4;
  int local_1a0 [2];
  longlong local_198;
  int local_190;
  uint local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_178;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  longlong local_148;
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  int local_130;
  int local_12c;
  undefined8 local_128;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  FProfileSweepGenerator **local_100;
  TArrayView<std::nullptr_t,int> local_f8;
  code *local_e8;
  FProfileSweepGenerator **local_e0;
  FProfileSweepGenerator *local_d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FProfileSweepGenerator **local_b0;
  FProfileSweepGenerator *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  FProfileSweepGenerator *local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  int local_68;
  uint local_64;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_58;
  int local_50;
  ulonglong uVar27;
  
  pFVar4 = this->Progress;
  if (pFVar4 != (FProgressCancel *)0x0) {
    if (pFVar4->WasCancelled != false) {
      return (FMeshShapeGenerator *)this;
    }
    Core::Private::Function::CheckCallable(*(void **)&pFVar4->CancelF);
    pcVar5 = *(code **)&pFVar4->CancelF;
    plVar6 = *(longlong **)&(pFVar4->CancelF).field_0x28;
    plVar15 = (longlong *)&(pFVar4->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar15 = plVar6;
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    bVar10 = (bool)(*pcVar5)(uVar13);
    pFVar4->WasCancelled = bVar10;
    if (bVar10 != false) {
      return (FMeshShapeGenerator *)this;
    }
  }
  iVar25 = (this->ProfileCurve).ArrayNum;
  if (((iVar25 < 2) || (iVar22 = (this->SweepCurve).ArrayNum, iVar22 < 2)) ||
     ((iVar3 = (this->SweepScaleCurve).ArrayNum, iVar3 != 0 && (iVar3 != iVar22)))) {
LAB_14359d27a:
    FMeshShapeGenerator::Reset((FMeshShapeGenerator *)this);
    return (FMeshShapeGenerator *)this;
  }
  iVar22 = *(int *)&(this->WeldedVertices).Elements.field_0x8 -
           *(int *)&(this->WeldedVertices).Elements.field_0x34;
  iVar25 = iVar25 - iVar22;
  local_1a4 = iVar22;
  if (iVar25 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumNonWelded >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                        ,0x344,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
      return pFVar14;
    }
  }
  else if (iVar25 == 0) goto LAB_14359d27a;
  <Var28 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId843,"ProfileSweepGenerator_Generate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
               ,0x34b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId843);
  }
  local_190 = (this->SweepCurve).ArrayNum;
  iVar3 = (this->ProfileCurve).ArrayNum;
  iVar19 = local_190;
  if (this->bSweepCurveIsClosed == false) {
    iVar19 = local_190 + -1;
  }
  iVar12 = iVar3;
  if (this->bProfileCurveIsClosed == false) {
    iVar12 = iVar3 + -1;
  }
  uVar26 = 0;
  uVar27 = 0;
  local_148 = CONCAT44(local_148._4_4_,iVar12);
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_17c = local_190 * iVar25 + iVar22;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_130 = iVar19;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_158,iVar3,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_140,iVar3,Default);
  local_184 = 0;
  local_188 = 0;
  local_res18 = 0;
  uVar17 = uVar26;
  if (0 < iVar3) {
    local_198 = 0;
    uVar24 = uVar27;
    do {
      uVar23 = (uint)uVar24;
      if (*(int *)&(this->WeldedVertices).Elements.field_0x8 !=
          *(int *)&(this->WeldedVertices).Elements.field_0x34) {
        FVar7 = (this->WeldedVertices).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(this->WeldedVertices).Hash;
        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar7;
        }
        iVar22 = *(int *)((longlong)FVar16 + ((this->WeldedVertices).HashSize - 1 & uVar24) * 4);
        if (iVar22 != -1) {
          lVar18 = *(longlong *)&(this->WeldedVertices).Elements;
          do {
            if (*(uint *)(lVar18 + (longlong)iVar22 * 0xc) == uVar23) {
              if (iVar22 == -1) goto LAB_14359c753;
              iVar19 = local_184;
              local_184 = local_184 + 1;
              goto LAB_14359c765;
            }
            iVar22 = *(int *)(lVar18 + 4 + (longlong)iVar22 * 0xc);
          } while (iVar22 != -1);
        }
      }
      iVar22 = -1;
LAB_14359c753:
      iVar19 = local_188;
      local_188 = local_188 + 1;
LAB_14359c765:
      local_18c = ~uVar23 >> 0x1f;
      uVar11 = uVar26;
      if ((int)uVar23 < local_158.ArrayNum) {
        uVar11 = local_18c;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar17 = local_res18, bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      *(int *)(local_158.AllocatorInstance.Data + local_198) = iVar19;
      if ((this->bProfileCurveIsClosed != false) || ((int)uVar23 < iVar3 + -1)) {
        uVar24 = (longlong)(int)(uVar23 + 1) % (longlong)iVar3;
        if (*(int *)&(this->WeldedVertices).Elements.field_0x8 !=
            *(int *)&(this->WeldedVertices).Elements.field_0x34) {
          FVar7 = (this->WeldedVertices).Hash.SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&(this->WeldedVertices).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar7;
          }
          iVar19 = *(int *)((longlong)FVar16 +
                           ((ulonglong)((this->WeldedVertices).HashSize - 1) & uVar24 & 0xffffffff)
                           * 4);
          if (iVar19 != -1) {
            lVar18 = *(longlong *)&(this->WeldedVertices).Elements;
            do {
              if (*(int *)(lVar18 + (longlong)iVar19 * 0xc) == (int)uVar24) goto LAB_14359c84b;
              iVar19 = *(int *)(lVar18 + 4 + (longlong)iVar19 * 0xc);
            } while (iVar19 != -1);
          }
        }
        iVar19 = -1;
LAB_14359c84b:
        if (iVar22 == -1) {
          uVar11 = uVar26;
          if ((int)uVar23 < local_140.ArrayNum) {
            uVar11 = local_18c;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar17 = local_res18, bVar10)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          *(uint *)(local_140.AllocatorInstance.Data + local_198) = uVar17;
          uVar17 = uVar17 + (iVar19 == -1) + 1;
          local_res18 = uVar17;
        }
        else {
          if (iVar19 == -1) {
            local_res18 = uVar17 + 1;
          }
          else {
            uVar17 = 0xffffffff;
          }
          uVar11 = uVar26;
          if ((int)uVar23 < local_140.ArrayNum) {
            uVar11 = local_18c;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
            return pFVar14;
          }
          *(uint *)(local_140.AllocatorInstance.Data + local_198) = uVar17;
          uVar17 = local_res18;
        }
      }
      local_198 = local_198 + 4;
      uVar24 = (ulonglong)(uVar23 + 1);
    } while ((int)(uVar23 + 1) < iVar3);
    iVar19 = local_130;
    iVar12 = (int)local_148;
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar20 = iVar19 * uVar17;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_168,iVar20 * 3,Default);
  iVar22 = local_17c;
  FMeshShapeGenerator::SetBufferSizes((FMeshShapeGenerator *)this,local_17c,iVar20,0,local_17c);
  if ((this->Progress != (FProgressCancel *)0x0) &&
     (bVar10 = FProgressCancel::Cancelled(this->Progress), bVar10)) goto LAB_14359d235;
  local_a0 = local_1a4;
  local_98 = local_190;
  local_90 = &local_158;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_1>,void,int>
              ::Call;
  local_100 = &local_a8;
  local_118.DataPtr = (void **)0x0;
  local_118.ArrayNum = 0;
  local_a8 = this;
  local_9c = iVar25;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_108,<Var28,None,
             &local_118);
  if ((this->Progress != (FProgressCancel *)0x0) &&
     (bVar10 = FProgressCancel::Cancelled(this->Progress), bVar10)) goto LAB_14359d235;
  local_180 = 0;
  local_12c = 0;
  InitializeUvBuffer(this,&local_158,&local_12c,&local_180);
  local_80 = local_190;
  local_78 = local_1a4;
  local_70 = &local_158;
  local_64 = local_res18;
  local_60 = &local_140;
  local_58 = &local_168;
  local_50 = local_180;
  local_e8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_2>,void,int>
             ::Call;
  local_e0 = &local_88;
  local_f8.DataPtr = (void **)0x0;
  local_f8.ArrayNum = 0;
  local_88 = this;
  local_7c = iVar3;
  local_74 = iVar25;
  local_68 = iVar12;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar19,1,(TFunctionRef<void___cdecl(int)> *)&local_e8,<Var28,None,
             &local_f8);
  if ((this->Progress != (FProgressCancel *)0x0) &&
     (bVar10 = FProgressCancel::Cancelled(this->Progress), bVar10)) goto LAB_14359d235;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_178,iVar22,Default);
  local_148 = (longlong)iVar20;
  if (0 < iVar20) {
    local_198 = 0;
    lVar18 = 0x30;
    uVar23 = 2;
    uVar17 = uVar26;
    do {
      lVar21 = local_198;
      uVar11 = uVar26;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      iVar22 = *(int *)(this->_padding_ + 8 + lVar21);
      local_128 = *(longlong *)(this->_padding_ + lVar21);
      uVar11 = uVar26;
      if ((int)(uVar23 - 2) < local_168.ArrayNum) {
        uVar11 = ~(uVar23 - 2) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      FVar9.Data = local_168.AllocatorInstance.Data;
      lVar21 = (longlong)(int)local_128;
      if (((int)local_128 < 0 || local_178.ArrayNum <= (int)local_128) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18) =
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18) +
           *(double *)(FVar9.Data + lVar18 + -0x30);
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 8) =
           *(double *)(FVar9.Data + lVar18 + -0x28) +
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 8);
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 0x10) =
           *(double *)(FVar9.Data + lVar18 + -0x20) +
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 0x10);
      uVar11 = uVar26;
      if ((int)(uVar23 - 1) < local_168.ArrayNum) {
        uVar11 = ~(uVar23 - 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      FVar9.Data = local_168.AllocatorInstance.Data;
      lVar21 = (longlong)local_128._4_4_;
      if ((local_128 < 0 || local_178.ArrayNum <= local_128._4_4_) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18) =
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18) +
           *(double *)(FVar9.Data + lVar18 + -0x18);
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 8) =
           *(double *)(FVar9.Data + lVar18 + -0x10) +
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 8);
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 0x10) =
           *(double *)(FVar9.Data + lVar18 + -8) +
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 0x10);
      uVar11 = uVar26;
      if ((int)uVar23 < local_168.ArrayNum) {
        uVar11 = ~uVar23 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      FVar9.Data = local_168.AllocatorInstance.Data;
      lVar21 = (longlong)iVar22;
      if ((iVar22 < 0 || local_178.ArrayNum <= iVar22) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
        return pFVar14;
      }
      uVar17 = uVar17 + 1;
      uVar23 = uVar23 + 3;
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18) =
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18) +
           *(double *)(FVar9.Data + lVar18);
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 8) =
           *(double *)(FVar9.Data + lVar18 + 8) +
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 8);
      lVar2 = lVar18 + 0x10;
      lVar18 = lVar18 + 0x48;
      local_198 = local_198 + 0xc;
      local_148 = local_148 + -1;
      *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 0x10) =
           *(double *)(FVar9.Data + lVar2) +
           *(double *)(local_178.AllocatorInstance.Data + lVar21 * 0x18 + 0x10);
    } while (local_148 != 0);
    local_148 = 0;
    iVar22 = local_17c;
  }
  pFVar4 = this->Progress;
  if (pFVar4 == (FProgressCancel *)0x0) {
LAB_14359cf06:
    local_d0 = &local_178;
    local_c8.DataPtr = (void **)0x0;
    local_b8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::Generate'::__l2::<lambda_3>,void,int>
               ::Call;
    local_b0 = &local_d8;
    local_c8.ArrayNum = 0;
    local_d8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar22,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,<Var28,None
               ,&local_c8);
    if ((((this->Progress == (FProgressCancel *)0x0) ||
         (bVar10 = FProgressCancel::Cancelled(this->Progress), !bVar10)) &&
        (this->bSweepCurveIsClosed == false)) && (0 < iVar3)) {
      pTVar1 = this->EndProfiles;
      iVar22 = local_190 + -1;
      do {
        iVar19 = (int)uVar27;
        if (*(int *)&(this->WeldedVertices).Elements.field_0x8 !=
            *(int *)&(this->WeldedVertices).Elements.field_0x34) {
          FVar7 = (this->WeldedVertices).Hash.SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&(this->WeldedVertices).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar7;
          }
          iVar12 = *(int *)((longlong)FVar16 + ((this->WeldedVertices).HashSize - 1 & uVar27) * 4);
          if (iVar12 != -1) {
            lVar18 = *(longlong *)&(this->WeldedVertices).Elements;
            do {
              if (*(int *)(lVar18 + (longlong)iVar12 * 0xc) == iVar19) goto LAB_14359d00c;
              iVar12 = *(int *)(lVar18 + 4 + (longlong)iVar12 * 0xc);
            } while (iVar12 != -1);
          }
        }
        iVar12 = -1;
LAB_14359d00c:
        local_1a8 = SweepGeneratorLocals::GetVertIndex
                              (iVar12 != -1,0,iVar19,local_1a4,iVar25,&local_158);
        pFVar8 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_1a8) &&
            ((FScriptContainerElement *)&local_1a8 <
             pFVar8 + (longlong)this->EndProfiles[0].ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
          return pFVar14;
        }
        iVar12 = this->EndProfiles[0].ArrayNum;
        if (iVar12 == this->EndProfiles[0].ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,&this->EndProfiles[0].ArrayMax);
        }
        this->EndProfiles[0].ArrayNum = iVar12 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1a8;
        if (*(int *)&(this->WeldedVertices).Elements.field_0x8 !=
            *(int *)&(this->WeldedVertices).Elements.field_0x34) {
          FVar7 = (this->WeldedVertices).Hash.SecondaryData;
          FVar16 = (ForElementType<FSetElementId>)&(this->WeldedVertices).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = FVar7;
          }
          iVar12 = *(int *)((longlong)FVar16 + ((this->WeldedVertices).HashSize - 1 & uVar27) * 4);
          if (iVar12 != -1) {
            lVar18 = *(longlong *)&(this->WeldedVertices).Elements;
            do {
              if (*(int *)(lVar18 + (longlong)iVar12 * 0xc) == iVar19) goto LAB_14359d12c;
              iVar12 = *(int *)(lVar18 + 4 + (longlong)iVar12 * 0xc);
            } while (iVar12 != -1);
          }
        }
        iVar12 = -1;
LAB_14359d12c:
        local_1a0[0] = SweepGeneratorLocals::GetVertIndex
                                 (iVar12 != -1,iVar22,iVar19,local_1a4,iVar25,&local_158);
        pFVar8 = this->EndProfiles[1].AllocatorInstance.Data;
        if (((pFVar8 <= (FScriptContainerElement *)local_1a0) &&
            ((FScriptContainerElement *)local_1a0 <
             pFVar8 + (longlong)this->EndProfiles[1].ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FMeshShapeGenerator *)(*pcVar5)();
          return pFVar14;
        }
        iVar12 = this->EndProfiles[1].ArrayNum;
        if (iVar12 == this->EndProfiles[1].ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&this->EndProfiles[1].AllocatorInstance,
                              &this->EndProfiles[1].ArrayMax);
        }
        uVar27 = (ulonglong)(iVar19 + 1U);
        this->EndProfiles[1].ArrayNum = iVar12 + 1;
        *(int *)(this->EndProfiles[1].AllocatorInstance.Data + (longlong)iVar12 * 4) = local_1a0[0];
      } while ((int)(iVar19 + 1U) < iVar3);
    }
  }
  else if (pFVar4->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&pFVar4->CancelF);
    pcVar5 = *(code **)&pFVar4->CancelF;
    plVar6 = *(longlong **)&(pFVar4->CancelF).field_0x28;
    plVar15 = (longlong *)&(pFVar4->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar15 = plVar6;
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    bVar10 = (bool)(*pcVar5)(uVar13);
    pFVar4->WasCancelled = bVar10;
    if (bVar10 == false) goto LAB_14359cf06;
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
LAB_14359d235:
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if ((bool)<Var28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FMeshShapeGenerator *)this;
}

// InitializeUvBuffer @ 1435b7000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer
          (FProfileSweepGenerator *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          int *param_2,int *param_3)

{
  void *_Dst;
  double dVar1;
  double dVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  <lambda_1> local_res8;
  double local_1a8;
  ForAnyElementType local_1a0;
  int local_198;
  int iStack_194;
  ForAnyElementType local_190;
  undefined8 local_188;
  ForAnyElementType local_180;
  undefined8 local_178;
  ForAnyElementType local_170;
  int local_168 [3];
  int local_15c;
  int local_158;
  double local_150;
  undefined8 local_148;
  FProfileSweepGenerator *local_140;
  uint local_138;
  int local_134;
  int local_130;
  int local_12c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_128;
  ForAnyElementType *local_120;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  FProfileSweepGenerator **local_100;
  TArrayView<std::nullptr_t,int> local_f8;
  code *local_e8;
  FProfileSweepGenerator **local_e0;
  FProfileSweepGenerator *local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  ForAnyElementType *local_b0;
  ForAnyElementType *local_a8;
  ForAnyElementType *local_a0;
  
  iVar3 = (this->ProfileCurve).ArrayNum;
  local_168[2] = (this->SweepCurve).ArrayNum;
  iVar11 = iVar3;
  if (this->bProfileCurveIsClosed == false) {
    iVar11 = iVar3 + -1;
  }
  uVar14 = local_168[2];
  if (this->bSweepCurveIsClosed == false) {
    uVar14 = local_168[2] - 1;
  }
  local_1a8 = 0.0;
  iVar22 = *(int *)&(this->WeldedVertices).Elements.field_0x8 -
           *(int *)&(this->WeldedVertices).Elements.field_0x34;
  local_158 = iVar3 - iVar22;
  uVar17 = 0;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  local_15c = iVar22;
  iVar10 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_190,(int *)((longlong)&local_188 + 4));
  lVar21 = (longlong)iVar11;
  local_188 = CONCAT44(local_188._4_4_,iVar10 + 1);
  *(double *)(local_190.Data + (longlong)iVar10 * 8) = local_1a8;
  if (0 < iVar11) {
    lVar23 = 0;
    do {
      uVar18 = (uint)uVar17;
      uVar16 = (longlong)(int)(uVar18 + 1) % (longlong)iVar3;
      uVar12 = (uint)uVar16;
      lVar15 = (longlong)(int)uVar12;
      if ((this->bUVsSkipFullyWeldedEdges != false) &&
         (*(int *)&(this->WeldedVertices).Elements.field_0x8 !=
          *(int *)&(this->WeldedVertices).Elements.field_0x34)) {
        FVar19 = (ForElementType<FSetElementId>)&(this->WeldedVertices).Hash;
        FVar4 = (this->WeldedVertices).Hash.SecondaryData;
        FVar13 = FVar19;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar13 = FVar4;
        }
        uVar20 = (this->WeldedVertices).HashSize - 1;
        iVar11 = *(int *)((longlong)FVar13 + (uVar20 & uVar17) * 4);
        if (iVar11 != -1) {
          lVar5 = *(longlong *)&(this->WeldedVertices).Elements;
          do {
            if (*(uint *)(lVar5 + (longlong)iVar11 * 0xc) == uVar18) {
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar19 = FVar4;
              }
              iVar11 = *(int *)((longlong)FVar19 + (uVar16 & 0xffffffff & (ulonglong)uVar20) * 4);
              goto joined_r0x0001435b716d;
            }
            iVar11 = *(int *)(lVar5 + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
LAB_1435b7188:
      uVar20 = 0;
      if ((int)uVar12 < (this->ProfileCurve).ArrayNum) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->ProfileCurve).AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar18 < (this->ProfileCurve).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->ProfileCurve).AllocatorInstance.Data;
      auVar25._0_8_ =
           (*(double *)(pFVar6 + lVar15 * 0x18 + 0x10) - *(double *)(pFVar7 + lVar23 + 0x10)) *
           (*(double *)(pFVar6 + lVar15 * 0x18 + 0x10) - *(double *)(pFVar7 + lVar23 + 0x10));
      auVar25._8_8_ = 0;
      auVar26._8_8_ = 0;
      auVar26._0_8_ =
           (*(double *)(pFVar6 + lVar15 * 0x18 + 8) - *(double *)(pFVar7 + lVar23 + 8)) *
           (*(double *)(pFVar6 + lVar15 * 0x18 + 8) - *(double *)(pFVar7 + lVar23 + 8)) +
           (*(double *)(pFVar6 + lVar15 * 0x18) - *(double *)(pFVar7 + lVar23)) *
           (*(double *)(pFVar6 + lVar15 * 0x18) - *(double *)(pFVar7 + lVar23)) + auVar25._0_8_;
      auVar26 = sqrtpd(auVar25,auVar26);
      local_1a8 = local_1a8 + auVar26._0_8_;
LAB_1435b7282:
      if (((local_190.Data <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < local_190.Data + (longlong)local_188._4_4_ * 8))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (int)local_188;
      if ((int)local_188 == local_188._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_190,(int *)((longlong)&local_188 + 4));
      }
      uVar17 = (ulonglong)(uVar18 + 1);
      lVar23 = lVar23 + 0x18;
      local_188 = CONCAT44(local_188._4_4_,iVar11 + 1);
      *(double *)(local_190.Data + (longlong)iVar11 * 8) = local_1a8;
      lVar21 = lVar21 + -1;
      iVar22 = local_15c;
    } while (lVar21 != 0);
  }
  if (this->bUVScaleRelativeWorld == false) {
    dVar24 = local_1a8;
    if (local_1a8 == 0.0) {
      bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7550971673701254321>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Generators\\SweepGenerator.cpp"
                         ,0x4b1,"CumulativeDistance != 0");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_1435b739a;
    }
LAB_1435b78b5:
    dVar24 = (this->UVScale).field0_0x0._s_0.Y / dVar24;
  }
  else {
    if (this->UnitUVInWorldCoordinates != 0.0) {
      dVar24 = (double)this->UnitUVInWorldCoordinates;
      goto LAB_1435b78b5;
    }
LAB_1435b739a:
    dVar24 = 0.0;
  }
  uVar16 = 0;
  uVar17 = uVar16;
  if (0 < (int)local_188) {
    do {
      uVar12 = (uint)uVar16;
      uVar18 = 0;
      if ((int)uVar12 < (int)local_188) {
        uVar18 = ~uVar12 >> 0x1f;
      }
      iVar11 = (int)local_188;
      if (uVar18 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (int)local_188;
      }
      dVar1 = *(double *)(local_190.Data + uVar17 * 8);
      uVar18 = 0;
      if ((int)uVar12 < iVar11) {
        uVar18 = ~uVar12 >> 0x1f;
      }
      dVar2 = (this->UVOffset).field0_0x0._s_0.Y;
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = (ulonglong)(uVar12 + 1);
      *(double *)(local_190.Data + uVar17 * 8) = dVar24 * dVar1 + dVar2;
      uVar17 = uVar17 + 1;
    } while ((int)(uVar12 + 1) < (int)local_188);
  }
  uVar18 = 0;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168[0] = 0;
  local_168[1] = 0;
  if ((int)uVar14 < 1) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
  }
  else {
    iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar14,&local_170,local_168,local_168 + 1);
    memset(local_170.Data + (longlong)iVar11 * 8,0,(longlong)(int)uVar14 << 3);
  }
  local_138 = local_168[2];
  local_12c = local_158;
  local_120 = &local_170;
  local_108 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_1>,void,int>
              ::Call;
  local_100 = &local_140;
  local_res8 = SUB41(iVar3,0);
  local_118.DataPtr = (void **)0x0;
  local_118.ArrayNum = 0;
  local_140 = this;
  local_134 = iVar3;
  local_130 = iVar22;
  local_128 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar14,1,(TFunctionRef<void___cdecl(int)> *)&local_108,local_res8,
             None,&local_118);
  local_1a8 = 0.0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  iStack_194 = 0;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  iVar11 = Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_180,(int *)((longlong)&local_178 + 4));
  local_178 = CONCAT44(local_178._4_4_,iVar11 + 1);
  *(undefined8 *)(local_180.Data + (longlong)iVar11 * 8) = 0;
  dVar24 = __real_3fe0000000000000;
  if (0 < (int)uVar14) {
    lVar21 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar18 < local_168[0]) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1a8 = local_1a8 + *(double *)(local_170.Data + lVar21 * 8);
      if (((local_180.Data <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < local_180.Data + (longlong)local_178._4_4_ * 8))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (int)local_178;
      if ((int)local_178 == local_178._4_4_) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_180,(int *)((longlong)&local_178 + 4));
      }
      local_178 = CONCAT44(local_178._4_4_,iVar11 + 1);
      *(double *)(local_180.Data + (longlong)iVar11 * 8) = local_1a8;
      uVar12 = 0;
      if ((int)uVar18 < local_168[0]) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_150 = local_1a8 - *(double *)(local_170.Data + lVar21 * 8) * dVar24;
      if (((local_1a0.Data <= (FScriptContainerElement *)&local_150) &&
          ((FScriptContainerElement *)&local_150 < local_1a0.Data + (longlong)iStack_194 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_198 == iStack_194) {
        local_198 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_1a0,&iStack_194);
      }
      iVar11 = local_198 + 1;
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + 1;
      *(double *)(local_1a0.Data + (longlong)local_198 * 8) = local_150;
      local_198 = iVar11;
    } while (lVar21 < (int)uVar14);
  }
  local_148 = 0;
  if (((local_1a0.Data <= (FScriptContainerElement *)&local_148) &&
      ((FScriptContainerElement *)&local_148 < local_1a0.Data + (longlong)iStack_194 * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (local_198 == iStack_194) {
    local_198 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1a0,&iStack_194);
  }
  lVar21 = (longlong)local_198;
  _local_198 = CONCAT44(iStack_194,local_198 + 1);
  *(undefined8 *)(local_1a0.Data + lVar21 * 8) = local_148;
  dVar24 = (this->UVScale).field0_0x0._s_0.X;
  if (this->bUVScaleRelativeWorld == false) {
    if (local_1a8 != 0.0) {
      dVar24 = dVar24 / local_1a8;
      goto LAB_1435b78f1;
    }
  }
  else if (this->UnitUVInWorldCoordinates != 0.0) {
    dVar24 = dVar24 / (double)((float)iVar3 * this->UnitUVInWorldCoordinates);
    goto LAB_1435b78f1;
  }
  dVar24 = 0.0;
LAB_1435b78f1:
  uVar14 = 1;
  if (1 < (int)local_178) {
    lVar21 = 8;
    do {
      uVar18 = 0;
      if ((int)uVar14 < (int)local_178) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      iVar11 = (int)local_178;
      if (uVar18 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (int)local_178;
      }
      dVar1 = *(double *)(local_180.Data + lVar21);
      uVar18 = 0;
      if ((int)uVar14 < iVar11) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      dVar2 = (this->UVOffset).field0_0x0._s_0.X;
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)(local_180.Data + lVar21) = dVar24 * dVar1 + dVar2;
      uVar18 = 0;
      if ((int)(uVar14 - 1) < local_198) {
        uVar18 = -uVar14 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      dVar1 = *(double *)(local_1a0.Data + lVar21 + -8);
      uVar18 = 0;
      if ((int)(uVar14 - 1) < local_198) {
        uVar18 = -uVar14 >> 0x1f;
      }
      dVar2 = (this->UVOffset).field0_0x0._s_0.X;
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = uVar14 + 1;
      *(double *)(local_1a0.Data + lVar21 + -8) = dVar24 * dVar1 + dVar2;
      lVar21 = lVar21 + 8;
    } while ((int)uVar14 < (int)local_178);
  }
  *param_2 = (int)local_178;
  *param_3 = (int)local_188;
  uVar14 = (int)local_188 * *param_2;
  if (0 < (int)uVar14) {
    iVar11 = (int)this->_padding_;
    if (iVar11 < (int)uVar14) {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar14 - iVar11,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    else if ((int)uVar14 < iVar11) {
      uVar18 = iVar11 - uVar14;
      if (((int)(uVar18 | uVar14) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar18 != 0) {
        _Dst = (void *)(this->_padding_ + (longlong)(int)uVar14 * 8);
        iVar11 = ((int)this->_padding_ - uVar18) - uVar14;
        if (iVar11 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar18 * 8),(longlong)iVar11 << 3);
        }
        iVar11 = (int)this->_padding_ - uVar18;
        *(int *)&this->_padding_ = iVar11;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)&this->_padding_,iVar11,
                   (int *)((longlong)&this->_padding_ + 4));
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,uVar14,Default);
  }
  local_d0 = local_168[2];
  local_c8 = *param_3;
  local_c4 = local_15c;
  local_c0 = local_158;
  local_b0 = &local_1a0;
  local_a8 = &local_180;
  local_a0 = &local_190;
  local_e8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FProfileSweepGenerator::InitializeUvBuffer'::__l2::<lambda_2>,void,int>
             ::Call;
  local_e0 = &local_d8;
  local_f8.DataPtr = (void **)0x0;
  local_f8.ArrayNum = 0;
  local_d8 = this;
  local_cc = iVar3;
  local_b8 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*param_2,1,(TFunctionRef<void___cdecl(int)> *)&local_e8,local_res8,
             None,&local_f8);
  if (local_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data);
  }
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  return;
joined_r0x0001435b716d:
  if (iVar11 == -1) goto LAB_1435b7188;
  if (*(uint *)(lVar5 + (longlong)iVar11 * 0xc) == uVar12) goto LAB_1435b7282;
  iVar11 = *(int *)(lVar5 + 4 + (longlong)iVar11 * 0xc);
  goto joined_r0x0001435b716d;
}

