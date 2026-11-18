// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// operator() @ 14c6e71a0

void __thiscall
`UE::Geometry::FMeshVertexCurvatureCache::BuildAll'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  FDynamicMesh3 *this_00;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double local_res8;
  int local_res10 [2];
  double local_res18;
  FDynamicMesh3 *local_res20;
  double local_118;
  code *local_110;
  FDynamicMesh3 **local_108;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  FDynamicMesh3 *local_d0;
  int *local_c8;
  FDynamicMesh3 **local_c0;
  undefined8 *local_b8;
  double *local_b0;
  double *local_a8;
  double *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  this_00 = *(FDynamicMesh3 **)this;
  lVar12 = (longlong)param_1;
  if (((param_1 < 0) ||
      ((int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
            (this_00->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (uVar11 = (ulonglong)((uint)param_1 >> 9),
     0xfffd < (ushort)(*(short *)(*(longlong *)
                                   ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + uVar11 * 8) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar7 = false;
    uVar11 = (ulonglong)((uint)param_1 >> 9);
  }
  else {
    bVar7 = true;
  }
  if (bVar7) {
    bVar7 = UE::Geometry::FDynamicMesh3::IsBoundaryVertex(this_00,param_1);
    if (bVar7) {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar8 = 0;
      if (param_1 < (int)plVar2[1]) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar3 = *plVar2;
      lVar12 = lVar12 * 0x20;
      *(undefined8 *)(lVar12 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 8 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x10 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x18 + lVar3) = 0;
      return;
    }
    UE::Geometry::FMeshNormals::ComputeVertexNormal
              ((TVector<double> *)&local_e8._s_0,*(FDynamicMesh3 **)this,param_1,true,true);
    dVar13 = __real_408f400000000000;
    local_res20 = *(FDynamicMesh3 **)this;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = __real_408f400000000000;
    local_118 = __real_408f400000000000;
    local_res18 = 0.0;
    local_res8 = 0.0;
    lVar3 = *(longlong *)((local_res20->Vertices).Blocks.AllocatorInstance.Data + uVar11 * 8);
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    local_98 = *puVar1;
    uStack_90 = puVar1[1];
    local_88 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    local_c8 = local_res10;
    local_c0 = &local_res20;
    local_b8 = &local_98;
    local_b0 = &local_res18;
    local_a8 = &local_res8;
    local_a0 = &local_118;
    local_108 = &local_d0;
    local_110 = UE::Core::Private::Function::
                TFunctionRefCaller<`TGaussianCurvature<`UE::MeshCurvature::GaussianCurvature'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_res10[0] = param_1;
    local_d0 = local_res20;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (local_res20,param_1,(TFunctionRef<void___cdecl(int)> *)&local_110);
    if (__real_3eb0c6f7a0000000 <= local_res8) {
      dVar6 = (__real_401921fb54442d18 - local_res18) / local_res8;
    }
    else {
      dVar6 = 0.0;
    }
    TMeanCurvatureNormal<_UE::MeshCurvature::MeanCurvatureNormal_::__l2::<lambda_1>_>
              ((TVector<double> *)&local_100._s_0,*(FDynamicMesh3 **)this,param_1,
               (<lambda_1>)*(FDynamicMesh3 **)this,dVar13);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_100._s_0.X * local_100._s_0.X + local_100._s_0.Y * local_100._s_0.Y +
                   local_100._s_0.Z * local_100._s_0.Z;
    auVar16 = sqrtpd(auVar16,auVar5);
    dVar13 = local_e8._s_0.X * local_100._s_0.X + local_e8._s_0.Y * local_100._s_0.Y +
             local_e8._s_0.Z * local_100._s_0.Z;
    if (dVar13 <= 0.0) {
      iVar9 = (0.0 <= dVar13) - 1;
    }
    else {
      iVar9 = 1;
    }
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar8 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    dVar13 = (double)iVar9 * auVar16._0_8_;
    dVar15 = dVar13 * __real_3fe0000000000000;
    dVar13 = dVar13 * dVar13 * __real_3fd0000000000000 - dVar6;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar13;
    auVar16 = sqrtpd(auVar14,auVar14);
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *plVar2;
    lVar10 = lVar12 * 0x20;
    *(double *)(lVar10 + lVar3) = dVar15;
    *(double *)(lVar10 + 8 + lVar3) = dVar6;
    *(double *)(lVar10 + 0x10 + lVar3) = auVar16._0_8_ + dVar15;
    *(double *)(lVar10 + 0x18 + lVar3) = dVar15 - auVar16._0_8_;
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar8 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined1 *)(lVar12 + *plVar2) = 1;
  }
  return;
}

// BuildAll @ 14c715e40

void __thiscall
UE::Geometry::FMeshVertexCurvatureCache::BuildAll
          (FMeshVertexCurvatureCache *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *_Dst;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  <lambda_1> local_res8;
  bool local_res10 [8];
  longlong local_res18;
  TSampleSetStatisticBuilder<double> local_e8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_c0;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FDynamicMesh3 **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  double dStack_88;
  FDynamicMesh3 *local_80;
  FMeshVertexCurvatureCache *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  
  piVar1 = &(this->Curvatures).ArrayNum;
  uVar12 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  iVar10 = *piVar1;
  if (iVar10 < (int)uVar12) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,uVar12 - iVar10,(ForAnyElementType *)this,piVar1,
                       &(this->Curvatures).ArrayMax);
    DefaultConstructItems<UE::Geometry::FMeshVertexCurvatureCache::FVertexCurvature,int>
              ((this->Curvatures).AllocatorInstance.Data + (longlong)iVar9 * 0x20,uVar12 - iVar10);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar10) {
      uVar11 = iVar10 - uVar12;
      if (((int)(uVar12 | uVar11) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        _Dst = (this->Curvatures).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x20;
        iVar10 = (*piVar1 - uVar11) - uVar12;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar11 * 0x20,(longlong)iVar10 << 5);
        }
        *piVar1 = *piVar1 - uVar11;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,(ForAnyElementType *)this,*piVar1,&(this->Curvatures).ArrayMax);
      }
    }
  }
  uVar11 = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_res10[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_c0,local_res10,uVar12);
  local_70 = &local_c0;
  local_a0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshVertexCurvatureCache::BuildAll'::__l2::<lambda_1>,void,int>
             ::Call;
  local_98 = &local_80;
  local_b0.DataPtr = (void **)0x0;
  local_b0.ArrayNum = 0;
  local_res8 = SUB81(this,0);
  local_80 = param_1;
  local_78 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar12,1,(TFunctionRef<void___cdecl(int)> *)&local_a0,local_res8,
             None,&local_b0);
  TSampleSetStatisticBuilder<double>::TSampleSetStatisticBuilder<double>(&local_e8,4);
  iVar10 = 0;
  lVar16 = (longlong)(int)uVar12;
  local_res18 = lVar16;
  if (0 < (int)uVar12) {
    lVar15 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar11 < local_c0.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = iVar10 + 1;
      if (local_c0.AllocatorInstance.Data[lVar15] == (FScriptContainerElement)0x0) {
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < lVar16);
  }
  dVar6 = __real_3ff0000000000000;
  uVar12 = 0;
  if (0 < local_e8.NumStatistics) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar12 < local_e8.Statistics.ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(longlong *)(local_e8.Statistics.AllocatorInstance.Data + lVar16) = (longlong)iVar10;
      *(undefined8 *)(local_e8.Statistics.AllocatorInstance.Data + lVar16 + 8) = 0x7fefffffffffffff;
      *(undefined8 *)(local_e8.Statistics.AllocatorInstance.Data + lVar16 + 0x10) =
           0xffefffffffffffff;
      *(undefined8 *)(local_e8.Statistics.AllocatorInstance.Data + lVar16 + 0x18) = 0;
      *(undefined8 *)(local_e8.Statistics.AllocatorInstance.Data + lVar16 + 0x20) = 0;
      local_90 = 0;
      dStack_88 = dVar6 / (double)*(longlong *)(local_e8.Statistics.AllocatorInstance.Data + lVar16)
      ;
      uVar11 = 0;
      if ((int)uVar12 < local_e8.FixedCountBuildData.ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 0x28;
      *(ulonglong *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + lVar15) =
           CONCAT44(uStack_8c,local_90);
      *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + lVar15 + 8) = dStack_88;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar12 < local_e8.NumStatistics);
  }
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar9 = 0;
  iVar10 = local_e8.NumStatistics;
  while( true ) {
    if ((iVar9 == 1) && (uVar13 = 0, 0 < iVar10)) {
      lVar16 = 0;
      lVar15 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar13 < local_e8.Statistics.ArrayNum) {
          uVar18 = ~uVar13 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar7.Data = local_e8.Statistics.AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar13 < local_e8.FixedCountBuildData.ArrayNum) {
          uVar18 = ~uVar13 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(FVar7.Data + lVar15);
        *(undefined8 *)(FVar7.Data + lVar15 + 0x20) = 0;
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x28;
        *(undefined4 *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + lVar16) = 1;
        *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + lVar16 + 8) =
             dVar6 / (double)(lVar3 + -1);
        lVar16 = lVar16 + 0x10;
        iVar10 = local_e8.NumStatistics;
      } while ((int)uVar13 < local_e8.NumStatistics);
    }
    uVar13 = 0;
    lVar16 = 0;
    if (0 < local_res18) {
      lVar15 = 0;
      do {
        uVar14 = ~uVar13 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar13 < local_c0.ArrayNum) {
          uVar18 = uVar14;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_c0.AllocatorInstance.Data[lVar16] != (FScriptContainerElement)0x0) {
          uVar18 = 0;
          if ((int)uVar13 < (this->Curvatures).ArrayNum) {
            uVar18 = uVar14;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + lVar15);
          uVar18 = (uint)uVar2 & uVar12;
          uVar19 = (uint)((ulonglong)uVar2 >> 0x20) & uVar11;
          if ((local_e8.Statistics.ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar7.Data = local_e8.Statistics.AllocatorInstance.Data;
          if ((local_e8.FixedCountBuildData.ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)local_e8.FixedCountBuildData.AllocatorInstance.Data == 0) {
            if ((double)CONCAT44(uVar19,uVar18) < *(double *)(FVar7.Data + 8)) {
              *(long64 *)(FVar7.Data + 8) = CONCAT44(uVar19,uVar18);
            }
            if (*(double *)(FVar7.Data + 0x10) <= (double)CONCAT44(uVar19,uVar18) &&
                (double)CONCAT44(uVar19,uVar18) != *(double *)(FVar7.Data + 0x10)) {
              *(long64 *)(FVar7.Data + 0x10) = CONCAT44(uVar19,uVar18);
            }
            *(double *)(FVar7.Data + 0x18) =
                 (double)CONCAT44(uVar19,uVar18) *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 8) +
                 *(double *)(FVar7.Data + 0x18);
          }
          else {
            dVar5 = (double)CONCAT44(uVar19,uVar18) - *(double *)(FVar7.Data + 0x18);
            *(double *)(FVar7.Data + 0x20) =
                 dVar5 * dVar5 *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 8) +
                 *(double *)(FVar7.Data + 0x20);
          }
          uVar18 = 0;
          if ((int)uVar13 < (this->Curvatures).ArrayNum) {
            uVar18 = uVar14;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + lVar15 + 8);
          uVar18 = (uint)uVar2 & uVar12;
          uVar19 = (uint)((ulonglong)uVar2 >> 0x20) & uVar11;
          if ((local_e8.Statistics.ArrayNum < 2) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar7.Data = local_e8.Statistics.AllocatorInstance.Data;
          if ((local_e8.FixedCountBuildData.ArrayNum < 2) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x10) == 0) {
            if ((double)CONCAT44(uVar19,uVar18) < *(double *)(FVar7.Data + 0x30)) {
              *(long64 *)(FVar7.Data + 0x30) = CONCAT44(uVar19,uVar18);
            }
            if (*(double *)(FVar7.Data + 0x38) <= (double)CONCAT44(uVar19,uVar18) &&
                (double)CONCAT44(uVar19,uVar18) != *(double *)(FVar7.Data + 0x38)) {
              *(long64 *)(FVar7.Data + 0x38) = CONCAT44(uVar19,uVar18);
            }
            *(double *)(FVar7.Data + 0x40) =
                 (double)CONCAT44(uVar19,uVar18) *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x18) +
                 *(double *)(FVar7.Data + 0x40);
          }
          else {
            dVar5 = (double)CONCAT44(uVar19,uVar18) - *(double *)(FVar7.Data + 0x40);
            *(double *)(FVar7.Data + 0x48) =
                 dVar5 * dVar5 *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x18) +
                 *(double *)(FVar7.Data + 0x48);
          }
          uVar18 = 0;
          if ((int)uVar13 < (this->Curvatures).ArrayNum) {
            uVar18 = uVar14;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + lVar15 + 0x10);
          uVar18 = (uint)uVar2 & uVar12;
          uVar19 = (uint)((ulonglong)uVar2 >> 0x20) & uVar11;
          if ((local_e8.Statistics.ArrayNum < 3) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar7.Data = local_e8.Statistics.AllocatorInstance.Data;
          if ((local_e8.FixedCountBuildData.ArrayNum < 3) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x20) == 0) {
            if ((double)CONCAT44(uVar19,uVar18) < *(double *)(FVar7.Data + 0x58)) {
              *(long64 *)(FVar7.Data + 0x58) = CONCAT44(uVar19,uVar18);
            }
            if (*(double *)(FVar7.Data + 0x60) <= (double)CONCAT44(uVar19,uVar18) &&
                (double)CONCAT44(uVar19,uVar18) != *(double *)(FVar7.Data + 0x60)) {
              *(long64 *)(FVar7.Data + 0x60) = CONCAT44(uVar19,uVar18);
            }
            *(double *)(FVar7.Data + 0x68) =
                 (double)CONCAT44(uVar19,uVar18) *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x28) +
                 *(double *)(FVar7.Data + 0x68);
          }
          else {
            dVar5 = (double)CONCAT44(uVar19,uVar18) - *(double *)(FVar7.Data + 0x68);
            *(double *)(FVar7.Data + 0x70) =
                 dVar5 * dVar5 *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x28) +
                 *(double *)(FVar7.Data + 0x70);
          }
          uVar18 = 0;
          if ((int)uVar13 < (this->Curvatures).ArrayNum) {
            uVar18 = uVar14;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar2 = *(undefined8 *)((this->Curvatures).AllocatorInstance.Data + lVar15 + 0x18);
          uVar18 = (uint)uVar2 & uVar12;
          uVar14 = (uint)((ulonglong)uVar2 >> 0x20) & uVar11;
          if ((local_e8.Statistics.ArrayNum < 4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar7.Data = local_e8.Statistics.AllocatorInstance.Data;
          if ((local_e8.FixedCountBuildData.ArrayNum < 4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x30) == 0) {
            if ((double)CONCAT44(uVar14,uVar18) < *(double *)(FVar7.Data + 0x80)) {
              *(long64 *)(FVar7.Data + 0x80) = CONCAT44(uVar14,uVar18);
            }
            if (*(double *)(FVar7.Data + 0x88) <= (double)CONCAT44(uVar14,uVar18) &&
                (double)CONCAT44(uVar14,uVar18) != *(double *)(FVar7.Data + 0x88)) {
              *(long64 *)(FVar7.Data + 0x88) = CONCAT44(uVar14,uVar18);
            }
            *(double *)(FVar7.Data + 0x90) =
                 (double)CONCAT44(uVar14,uVar18) *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x38) +
                 *(double *)(FVar7.Data + 0x90);
          }
          else {
            dVar5 = (double)CONCAT44(uVar14,uVar18) - *(double *)(FVar7.Data + 0x90);
            *(double *)(FVar7.Data + 0x98) =
                 dVar5 * dVar5 *
                 *(double *)(local_e8.FixedCountBuildData.AllocatorInstance.Data + 0x38) +
                 *(double *)(FVar7.Data + 0x98);
          }
        }
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x20;
        iVar10 = local_e8.NumStatistics;
      } while (lVar16 < local_res18);
    }
    if ((iVar9 == 1) && (uVar13 = 0, 0 < iVar10)) break;
    iVar9 = iVar9 + 1;
    if (1 < iVar9) goto LAB_14c7168c8;
  }
  lVar16 = 0;
  do {
    uVar12 = 0;
    if ((int)uVar13 < local_e8.Statistics.ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar7.Data = local_e8.Statistics.AllocatorInstance.Data;
    uVar12 = 0;
    if ((int)uVar13 < local_e8.FixedCountBuildData.ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)(FVar7.Data + lVar16 + 0x20);
    uVar13 = uVar13 + 1;
    auVar17 = sqrtpd(auVar17,auVar17);
    *(longlong *)(FVar7.Data + lVar16 + 0x20) = auVar17._0_8_;
    lVar16 = lVar16 + 0x28;
  } while ((int)uVar13 < local_e8.NumStatistics);
LAB_14c7168c8:
  if ((local_e8.Statistics.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 8);
  (this->MeanStats).Count = *(long64 *)local_e8.Statistics.AllocatorInstance.Data;
  (this->MeanStats).Range.Min = dVar6;
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x18);
  (this->MeanStats).Range.Max = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x10);
  (this->MeanStats).Mean = dVar6;
  (this->MeanStats).StandardDeviation =
       *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x20);
  if ((local_e8.Statistics.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x30);
  (this->GaussianStats).Count = *(long64 *)(local_e8.Statistics.AllocatorInstance.Data + 0x28);
  (this->GaussianStats).Range.Min = dVar6;
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x40);
  (this->GaussianStats).Range.Max = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x38);
  (this->GaussianStats).Mean = dVar6;
  (this->GaussianStats).StandardDeviation =
       *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x48);
  if ((local_e8.Statistics.ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x58);
  (this->MaxPrincipalStats).Count = *(long64 *)(local_e8.Statistics.AllocatorInstance.Data + 0x50);
  (this->MaxPrincipalStats).Range.Min = dVar6;
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x68);
  (this->MaxPrincipalStats).Range.Max =
       *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x60);
  (this->MaxPrincipalStats).Mean = dVar6;
  (this->MaxPrincipalStats).StandardDeviation =
       *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x70);
  if ((local_e8.Statistics.ArrayNum < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x80);
  (this->MinPrincipalStats).Count = *(long64 *)(local_e8.Statistics.AllocatorInstance.Data + 0x78);
  (this->MinPrincipalStats).Range.Min = dVar6;
  dVar6 = *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x90);
  (this->MinPrincipalStats).Range.Max =
       *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x88);
  (this->MinPrincipalStats).Mean = dVar6;
  (this->MinPrincipalStats).StandardDeviation =
       *(double *)(local_e8.Statistics.AllocatorInstance.Data + 0x98);
  if (local_e8.FixedCountBuildData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.FixedCountBuildData.AllocatorInstance.Data);
  }
  if (local_e8.Statistics.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Statistics.AllocatorInstance.Data);
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// operator[] @ 14c89ad90

FVertexCurvature * __thiscall
UE::Geometry::FMeshVertexCurvatureCache::operator[](FMeshVertexCurvatureCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexCurvature *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Curvatures).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexCurvature *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexCurvature *)((this->Curvatures).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

