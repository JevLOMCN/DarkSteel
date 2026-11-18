// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// BakeImpl<1> @ 14c862250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::Geometry::FMeshVertexBaker::BakeImpl<1>(void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  <lambda_1> local_res8 [8];
  int local_res10 [2];
  ulonglong local_c8;
  int local_c0;
  int local_bc;
  code *local_b8;
  void **local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  void **local_90;
  void *local_88;
  ulonglong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  void **local_70;
  void *local_68;
  <lambda_1> *local_60;
  int *local_58;
  void *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  
  if (param_1 == (void *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4249890209774174300>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                       ,0x5c,"Data");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar10 = *(int *)((longlong)param_1 + 0x30);
    lVar8 = 0;
    if (iVar10 == 3) {
      local_60 = local_res8;
      local_b0 = &local_68;
      local_58 = local_res10;
      local_res8[0] = (<lambda_1>)0x1;
      local_res10[0] = 0;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshVertexBaker::BakeImpl<1>'::__l8::<lambda_1>,void,void_const_*>
                 ::Call;
      local_68 = param_1;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x38) + 8))();
      if ((local_res8[0] == (<lambda_1>)0x0) || (local_res10[0] != 1)) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4249890209774174320>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                           ,0x70,"bIsIdentity && NumDetailMeshes == 1");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = 1;
      }
    }
    local_48 = *(longlong *)((longlong)param_1 + 8);
    lVar1 = *(longlong *)(local_48 + 0x208);
    lVar7 = lVar8;
    local_40 = _DAT_00000040;
    if (lVar1 != 0) {
      lVar7 = lVar1;
      local_40 = *(undefined8 *)(lVar1 + 0x40);
    }
    if (0 < *(int *)(lVar7 + 0x38)) {
      lVar8 = **(longlong **)(lVar7 + 0x30);
    }
    local_c8 = *(ulonglong *)((longlong)param_1 + 0xd4);
    iVar9 = (int)local_c8;
    iVar11 = (int)(local_c8 >> 0x20);
    local_a8.DataPtr = (void **)0x0;
    iVar6 = iVar9;
    if (iVar9 < 1) {
      iVar6 = 1;
    }
    local_a8.ArrayNum = 0;
    if (0x400 < iVar6) {
      iVar6 = 0x400;
    }
    local_78 = 0x400;
    local_c0 = 1;
    if (1 < iVar6) {
      local_c0 = iVar6;
    }
    iVar6 = iVar11;
    if (iVar11 < 1) {
      iVar6 = 1;
    }
    if (1 < iVar6) {
      iVar6 = 1;
    }
    local_bc = 1;
    if (1 < iVar6) {
      local_bc = iVar6;
    }
    local_74 = *(undefined4 *)((longlong)param_1 + 0xf0);
    uVar2 = (ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | local_c8 & 0xffffffff;
    uVar3 = (ulonglong)(uint)(iVar11 >> 0x1f) << 0x20 | local_c8 >> 0x20;
    local_80 = &local_c8;
    local_70 = &local_50;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshVertexBaker::BakeImpl<1>'::__l2::<lambda_3>,void,int>
               ::Call;
    local_90 = &local_88;
    local_88 = param_1;
    local_50 = param_1;
    local_38 = lVar8;
    local_30 = iVar10;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               ((uint)((int)((longlong)uVar2 % (longlong)local_c0) != 0) +
               (int)((longlong)uVar2 / (longlong)local_c0)) *
               ((uint)((int)((longlong)uVar3 % (longlong)local_bc) != 0) +
               (int)((longlong)uVar3 / (longlong)local_bc)),1,
               (TFunctionRef<void___cdecl(int)> *)&local_98,local_res8[0],
               (uint)(*(char *)((longlong)param_1 + 0xd0) == '\0'),&local_a8);
  }
  return;
}

// BakeImpl<0> @ 14c8624c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::Geometry::FMeshVertexBaker::BakeImpl<0>(void *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  <lambda_1> local_res8 [8];
  int local_res10 [2];
  ulonglong local_c8;
  int local_c0;
  int local_bc;
  code *local_b8;
  void **local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  void **local_90;
  void *local_88;
  ulonglong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  void **local_70;
  void *local_68;
  <lambda_1> *local_60;
  int *local_58;
  void *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  
  if (param_1 == (void *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4249890209774174300>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                       ,0x5c,"Data");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar10 = *(int *)((longlong)param_1 + 0x30);
    lVar8 = 0;
    if (iVar10 == 3) {
      local_60 = local_res8;
      local_b0 = &local_68;
      local_58 = local_res10;
      local_res8[0] = (<lambda_1>)0x1;
      local_res10[0] = 0;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshVertexBaker::BakeImpl<0>'::__l8::<lambda_1>,void,void_const_*>
                 ::Call;
      local_68 = param_1;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x38) + 8))();
      if ((local_res8[0] == (<lambda_1>)0x0) || (local_res10[0] != 1)) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4249890209774174320>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                           ,0x70,"bIsIdentity && NumDetailMeshes == 1");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = 1;
      }
    }
    local_48 = *(longlong *)((longlong)param_1 + 8);
    lVar1 = *(longlong *)(local_48 + 0x208);
    lVar7 = lVar8;
    local_40 = _DAT_00000040;
    if (lVar1 != 0) {
      lVar7 = lVar1;
      local_40 = *(undefined8 *)(lVar1 + 0x40);
    }
    if (0 < *(int *)(lVar7 + 0x38)) {
      lVar8 = **(longlong **)(lVar7 + 0x30);
    }
    local_c8 = *(ulonglong *)((longlong)param_1 + 0xd4);
    iVar9 = (int)local_c8;
    iVar11 = (int)(local_c8 >> 0x20);
    local_a8.DataPtr = (void **)0x0;
    iVar6 = iVar9;
    if (iVar9 < 1) {
      iVar6 = 1;
    }
    local_a8.ArrayNum = 0;
    if (0x400 < iVar6) {
      iVar6 = 0x400;
    }
    local_78 = 0x400;
    local_c0 = 1;
    if (1 < iVar6) {
      local_c0 = iVar6;
    }
    iVar6 = iVar11;
    if (iVar11 < 1) {
      iVar6 = 1;
    }
    if (1 < iVar6) {
      iVar6 = 1;
    }
    local_bc = 1;
    if (1 < iVar6) {
      local_bc = iVar6;
    }
    local_74 = *(undefined4 *)((longlong)param_1 + 0xf0);
    uVar2 = (ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | local_c8 & 0xffffffff;
    uVar3 = (ulonglong)(uint)(iVar11 >> 0x1f) << 0x20 | local_c8 >> 0x20;
    local_80 = &local_c8;
    local_70 = &local_50;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshVertexBaker::BakeImpl<0>'::__l2::<lambda_3>,void,int>
               ::Call;
    local_90 = &local_88;
    local_88 = param_1;
    local_50 = param_1;
    local_38 = lVar8;
    local_30 = iVar10;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               ((uint)((int)((longlong)uVar2 % (longlong)local_c0) != 0) +
               (int)((longlong)uVar2 / (longlong)local_c0)) *
               ((uint)((int)((longlong)uVar3 % (longlong)local_bc) != 0) +
               (int)((longlong)uVar3 / (longlong)local_bc)),1,
               (TFunctionRef<void___cdecl(int)> *)&local_98,local_res8[0],
               (uint)(*(char *)((longlong)param_1 + 0xd0) == '\0'),&local_a8);
  }
  return;
}

// operator() @ 14c8a9900

void __thiscall
`UE::Geometry::FMeshVertexBaker::BakeImpl<1>'::__l2::<lambda_2>::operator()
          (void *this,int param_1,FCorrespondenceSample *param_2)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  FCorrespondenceSample *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  void *pvVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res10 [2];
  FCorrespondenceSample *local_res18;
  double local_res20;
  TVector<double>_u_0 local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  double local_180 [3];
  undefined8 local_168;
  uint local_160;
  undefined8 local_158;
  uint local_150;
  FScriptContainerElement *local_148;
  TVector<double>_u_0 local_140;
  undefined1 local_128 [24];
  TVector<double> local_110;
  TVector<double> local_f8 [7];
  
  if ((-1 < param_1) &&
     (this_00 = *(TDynamicMeshOverlay<float,4> **)((longlong)this + 0x10),
     param_1 < (int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                    (this_00->ElementsRefCounts).RefCounts.CurBlockUsed))) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2
                           ) - 1U) < 0xfffe) {
      uVar4 = *(uint *)(*(longlong *)
                         ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
      local_1a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      local_res18 = param_2;
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetElementTriangles(this_00,param_1,&local_190);
      uVar13 = local_190._8_8_;
      uVar19 = (ulonglong)local_190.ArrayNum;
      local_148 = local_190.AllocatorInstance.Data + uVar19 * 4;
      uVar20 = uVar19;
      FVar21.Data = local_190.AllocatorInstance.Data;
      fVar24 = local_res10[0];
      fVar25 = local_res10[0];
      fVar26 = local_res10[0];
      while( true ) {
        pFVar6 = local_148;
        uVar12 = local_1a8._s_0.Z;
        uVar11 = local_1a8._s_0.Y;
        uVar10 = local_1a8._s_0.X;
        iVar18 = 2;
        iVar15 = (int)uVar20;
        if ((int)uVar20 != (int)uVar19) {
          local_res10[0] = (float)((uint)local_res10[0] & 0xffffff00);
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
          iVar15 = local_190.ArrayNum;
        }
        pFVar9 = local_res18;
        if (FVar21.Data == pFVar6) break;
        uVar5 = *(uint *)FVar21.Data;
        UE::Geometry::FDynamicMesh3::GetTriInfo
                  (*(FDynamicMesh3 **)((longlong)this + 8),uVar5,(TVector<double> *)local_128,
                   &local_res20,local_f8);
        UE::Geometry::FMeshNormals::GetVertexWeightsOnTriangle
                  (&local_110,*(FDynamicMesh3 **)((longlong)this + 8),uVar5,local_res20,true,true);
        lVar17 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
                  (ulonglong)(uVar5 >> 9) * 8);
        local_168 = *(undefined8 *)(lVar17 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_160 = *(uint *)(lVar17 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        if ((uint)local_168 == uVar4) {
          lVar17 = 0;
        }
        else if ((uint)((ulonglong)local_168 >> 0x20) == uVar4) {
          lVar17 = 1;
        }
        else {
          lVar17 = -1;
          if (local_160 == uVar4) {
            lVar17 = 2;
          }
        }
        this_01 = *(TDynamicMeshOverlay<float,3> **)((longlong)this + 0x18);
        if (*(int *)(*(longlong *)
                      ((this_01->ElementTriangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar5 * 3 >> 9) * 8) + (ulonglong)(uVar5 * 3 & 0x1ff) * 4) < 0) {
          if ((lVar17 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar23 = local_110.field0_0x0.XYZ[lVar17];
          dVar8 = dVar23 * (double)local_128._0_8_;
          dVar22 = dVar23 * (double)local_128._8_8_;
          dVar23 = dVar23 * (double)local_128._16_8_;
        }
        else {
          iVar15 = UE::Geometry::TDynamicMeshOverlay<float,3>::GetElementIDAtVertex
                             (this_01,uVar5,uVar4);
          if (iVar15 != -1) {
            pFVar6 = (this_01->Elements).Blocks.AllocatorInstance.Data;
            uVar5 = iVar15 * 3;
            fVar24 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)(uVar5 & 0x1ff) * 4);
            fVar25 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                               (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
            fVar26 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                               (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
          }
          if ((lVar17 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar23 = local_110.field0_0x0.XYZ[lVar17];
          dVar8 = dVar23 * (double)fVar24;
          dVar22 = dVar23 * (double)fVar25;
          dVar23 = dVar23 * (double)fVar26;
        }
        uVar20 = local_190._8_8_ & 0xffffffff;
        local_1a8._s_0.Z = (double)uVar12 + dVar23;
        uVar19 = uVar13 & 0xffffffff;
        local_1a8._s_0.Y = (double)uVar11 + dVar22;
        local_1a8._s_0.X = (double)uVar10 + dVar8;
        FVar21.Data = FVar21.Data + 4;
      }
      plVar3 = (longlong *)((longlong)this + 8);
      dVar23 = SQRT((double)uVar11 * (double)uVar11 + (double)uVar10 * (double)uVar10 +
                    (double)uVar12 * (double)uVar12);
      if (dVar23 <= 0.0) {
        local_1a8._s_0.X = 0.0;
        local_1a8._s_0.Y = 0.0;
        local_1a8._s_0.Z = 0.0;
      }
      else {
        dVar23 = __real_3ff0000000000000 / dVar23;
        local_1a8._s_0.X = (double)uVar10 * dVar23;
        local_1a8._s_0.Y = (double)uVar11 * dVar23;
        local_1a8._s_0.Z = (double)uVar12 * dVar23;
      }
      lVar17 = *(longlong *)(*(longlong *)(*plVar3 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      pdVar2 = (double *)(lVar17 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
      local_140._s_0.X = *pdVar2;
      local_140._s_0.Y = pdVar2[1];
      local_140._s_0.Z = *(double *)(lVar17 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
      if ((iVar15 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(uint *)local_190.AllocatorInstance.Data;
      lVar17 = *(longlong *)(*(longlong *)(*plVar3 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
      local_158 = *(undefined8 *)(lVar17 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_150 = *(uint *)(lVar17 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_180[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_180[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_180[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if ((uint)local_158 == uVar4) {
        iVar18 = 0;
      }
      else if ((uint)((ulonglong)local_158 >> 0x20) == uVar4) {
        iVar18 = 1;
      }
      else if (local_150 != uVar4) {
        iVar18 = -1;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar13 = local_140._s_0.Z;
      (pFVar9->BaseSample).SurfacePoint.field0_0x0._s_0.X = local_140._s_0.X;
      (pFVar9->BaseSample).SurfacePoint.field0_0x0._s_0.Y = local_140._s_0.Y;
      local_180[iVar18] = 1.0;
      pTVar1 = &pFVar9->DetailBaryCoords;
      (pFVar9->BaseSample).TriangleIndex = uVar5;
      pFVar9->DetailMesh = (void *)0x0;
      (pFVar9->BaseSample).SurfacePoint.field0_0x0._s_0.Z = (double)uVar13;
      (pFVar9->BaseSample).BaryCoords.field0_0x0._s_0.X = local_180[0];
      (pFVar9->BaseSample).BaryCoords.field0_0x0._s_0.Y = local_180[1];
      pFVar9->DetailTriID = -1;
      (pFVar9->BaseNormal).field0_0x0._s_0.X = local_1a8._s_0.X;
      (pFVar9->BaseNormal).field0_0x0._s_0.Y = local_1a8._s_0.Y;
      (pFVar9->BaseSample).BaryCoords.field0_0x0._s_0.Z = local_180[2];
      (pFVar9->BaseNormal).field0_0x0._s_0.Z = local_1a8._s_0.Z;
      iVar15 = *(int *)((longlong)this + 0x20);
      if (iVar15 == 3) {
        pvVar16 = (void *)*plVar3;
        (pTVar1->field0_0x0)._s_0.X = local_180[0];
        (pFVar9->DetailBaryCoords).field0_0x0._s_0.Y = local_180[1];
        pFVar9->DetailTriID = uVar5;
        (pFVar9->DetailBaryCoords).field0_0x0._s_0.Z = local_180[2];
      }
      else {
        lVar17 = *(longlong *)this;
        if (iVar15 == 1) {
          pvVar16 = UE::Geometry::GetDetailMeshTrianglePoint_Nearest
                              (*(IMeshBakerDetailSampler **)(lVar17 + 0x38),
                               (TVector<double> *)&local_140._s_0,&pFVar9->DetailTriID,pTVar1);
        }
        else {
          pvVar16 = UE::Geometry::GetDetailMeshTrianglePoint_Raycast
                              (*(IMeshBakerDetailSampler **)(lVar17 + 0x38),
                               (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_1a8._s_0
                               ,&pFVar9->DetailTriID,pTVar1,*(double *)(lVar17 + 0x28),iVar15 == 2);
        }
      }
      pFVar9->DetailMesh = pvVar16;
      if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14c8a9fe0

void __thiscall
`UE::Geometry::FMeshVertexBaker::BakeImpl<0>'::__l2::<lambda_2>::operator()
          (void *this,int param_1,FCorrespondenceSample *param_2)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  TDynamicMeshOverlay<float,4> *this_00;
  TDynamicMeshOverlay<float,3> *this_01;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  FCorrespondenceSample *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  void *pvVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res10 [2];
  FCorrespondenceSample *local_res18;
  double local_res20;
  TVector<double>_u_0 local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  double local_180 [3];
  undefined8 local_168;
  uint local_160;
  undefined8 local_158;
  uint local_150;
  FScriptContainerElement *local_148;
  TVector<double>_u_0 local_140;
  undefined1 local_128 [24];
  TVector<double> local_110;
  TVector<double> local_f8 [7];
  
  if ((-1 < param_1) &&
     (this_00 = *(TDynamicMeshOverlay<float,4> **)((longlong)this + 0x10),
     param_1 < (int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                    (this_00->ElementsRefCounts).RefCounts.CurBlockUsed))) {
    if ((ushort)(*(short *)(*(longlong *)
                             ((this_00->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2
                           ) - 1U) < 0xfffe) {
      uVar4 = *(uint *)(*(longlong *)
                         ((this_00->ParentVertices).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
      local_1a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      local_res18 = param_2;
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetElementTriangles(this_00,param_1,&local_190);
      uVar13 = local_190._8_8_;
      uVar19 = (ulonglong)local_190.ArrayNum;
      local_148 = local_190.AllocatorInstance.Data + uVar19 * 4;
      uVar20 = uVar19;
      FVar21.Data = local_190.AllocatorInstance.Data;
      fVar24 = local_res10[0];
      fVar25 = local_res10[0];
      fVar26 = local_res10[0];
      while( true ) {
        pFVar6 = local_148;
        uVar12 = local_1a8._s_0.Z;
        uVar11 = local_1a8._s_0.Y;
        uVar10 = local_1a8._s_0.X;
        iVar18 = 2;
        iVar15 = (int)uVar20;
        if ((int)uVar20 != (int)uVar19) {
          local_res10[0] = (float)((uint)local_res10[0] & 0xffffff00);
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
          iVar15 = local_190.ArrayNum;
        }
        pFVar9 = local_res18;
        if (FVar21.Data == pFVar6) break;
        uVar5 = *(uint *)FVar21.Data;
        UE::Geometry::FDynamicMesh3::GetTriInfo
                  (*(FDynamicMesh3 **)((longlong)this + 8),uVar5,(TVector<double> *)local_128,
                   &local_res20,local_f8);
        UE::Geometry::FMeshNormals::GetVertexWeightsOnTriangle
                  (&local_110,*(FDynamicMesh3 **)((longlong)this + 8),uVar5,local_res20,true,true);
        lVar17 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) +
                  (ulonglong)(uVar5 >> 9) * 8);
        local_168 = *(undefined8 *)(lVar17 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_160 = *(uint *)(lVar17 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        if ((uint)local_168 == uVar4) {
          lVar17 = 0;
        }
        else if ((uint)((ulonglong)local_168 >> 0x20) == uVar4) {
          lVar17 = 1;
        }
        else {
          lVar17 = -1;
          if (local_160 == uVar4) {
            lVar17 = 2;
          }
        }
        this_01 = *(TDynamicMeshOverlay<float,3> **)((longlong)this + 0x18);
        if (*(int *)(*(longlong *)
                      ((this_01->ElementTriangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar5 * 3 >> 9) * 8) + (ulonglong)(uVar5 * 3 & 0x1ff) * 4) < 0) {
          if ((lVar17 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar23 = local_110.field0_0x0.XYZ[lVar17];
          dVar8 = dVar23 * (double)local_128._0_8_;
          dVar22 = dVar23 * (double)local_128._8_8_;
          dVar23 = dVar23 * (double)local_128._16_8_;
        }
        else {
          iVar15 = UE::Geometry::TDynamicMeshOverlay<float,3>::GetElementIDAtVertex
                             (this_01,uVar5,uVar4);
          if (iVar15 != -1) {
            pFVar6 = (this_01->Elements).Blocks.AllocatorInstance.Data;
            uVar5 = iVar15 * 3;
            fVar24 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)(uVar5 & 0x1ff) * 4);
            fVar25 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                               (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
            fVar26 = *(float *)(*(longlong *)(pFVar6 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                               (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
          }
          if ((lVar17 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          dVar23 = local_110.field0_0x0.XYZ[lVar17];
          dVar8 = dVar23 * (double)fVar24;
          dVar22 = dVar23 * (double)fVar25;
          dVar23 = dVar23 * (double)fVar26;
        }
        uVar20 = local_190._8_8_ & 0xffffffff;
        local_1a8._s_0.Z = (double)uVar12 + dVar23;
        uVar19 = uVar13 & 0xffffffff;
        local_1a8._s_0.Y = (double)uVar11 + dVar22;
        local_1a8._s_0.X = (double)uVar10 + dVar8;
        FVar21.Data = FVar21.Data + 4;
      }
      plVar3 = (longlong *)((longlong)this + 8);
      dVar23 = SQRT((double)uVar11 * (double)uVar11 + (double)uVar10 * (double)uVar10 +
                    (double)uVar12 * (double)uVar12);
      if (dVar23 <= 0.0) {
        local_1a8._s_0.X = 0.0;
        local_1a8._s_0.Y = 0.0;
        local_1a8._s_0.Z = 0.0;
      }
      else {
        dVar23 = __real_3ff0000000000000 / dVar23;
        local_1a8._s_0.X = (double)uVar10 * dVar23;
        local_1a8._s_0.Y = (double)uVar11 * dVar23;
        local_1a8._s_0.Z = (double)uVar12 * dVar23;
      }
      lVar17 = *(longlong *)(*(longlong *)(*plVar3 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      pdVar2 = (double *)(lVar17 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
      local_140._s_0.X = *pdVar2;
      local_140._s_0.Y = pdVar2[1];
      local_140._s_0.Z = *(double *)(lVar17 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
      if ((iVar15 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(uint *)local_190.AllocatorInstance.Data;
      lVar17 = *(longlong *)(*(longlong *)(*plVar3 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
      local_158 = *(undefined8 *)(lVar17 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_150 = *(uint *)(lVar17 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_180[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_180[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_180[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if ((uint)local_158 == uVar4) {
        iVar18 = 0;
      }
      else if ((uint)((ulonglong)local_158 >> 0x20) == uVar4) {
        iVar18 = 1;
      }
      else if (local_150 != uVar4) {
        iVar18 = -1;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar13 = local_140._s_0.Z;
      (pFVar9->BaseSample).SurfacePoint.field0_0x0._s_0.X = local_140._s_0.X;
      (pFVar9->BaseSample).SurfacePoint.field0_0x0._s_0.Y = local_140._s_0.Y;
      local_180[iVar18] = 1.0;
      pTVar1 = &pFVar9->DetailBaryCoords;
      (pFVar9->BaseSample).TriangleIndex = uVar5;
      pFVar9->DetailMesh = (void *)0x0;
      (pFVar9->BaseSample).SurfacePoint.field0_0x0._s_0.Z = (double)uVar13;
      (pFVar9->BaseSample).BaryCoords.field0_0x0._s_0.X = local_180[0];
      (pFVar9->BaseSample).BaryCoords.field0_0x0._s_0.Y = local_180[1];
      pFVar9->DetailTriID = -1;
      (pFVar9->BaseNormal).field0_0x0._s_0.X = local_1a8._s_0.X;
      (pFVar9->BaseNormal).field0_0x0._s_0.Y = local_1a8._s_0.Y;
      (pFVar9->BaseSample).BaryCoords.field0_0x0._s_0.Z = local_180[2];
      (pFVar9->BaseNormal).field0_0x0._s_0.Z = local_1a8._s_0.Z;
      iVar15 = *(int *)((longlong)this + 0x20);
      if (iVar15 == 3) {
        pvVar16 = (void *)*plVar3;
        (pTVar1->field0_0x0)._s_0.X = local_180[0];
        (pFVar9->DetailBaryCoords).field0_0x0._s_0.Y = local_180[1];
        pFVar9->DetailTriID = uVar5;
        (pFVar9->DetailBaryCoords).field0_0x0._s_0.Z = local_180[2];
      }
      else {
        lVar17 = *(longlong *)this;
        if (iVar15 == 1) {
          pvVar16 = UE::Geometry::GetDetailMeshTrianglePoint_Nearest
                              (*(IMeshBakerDetailSampler **)(lVar17 + 0x38),
                               (TVector<double> *)&local_140._s_0,&pFVar9->DetailTriID,pTVar1);
        }
        else {
          pvVar16 = UE::Geometry::GetDetailMeshTrianglePoint_Raycast
                              (*(IMeshBakerDetailSampler **)(lVar17 + 0x38),
                               (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_1a8._s_0
                               ,&pFVar9->DetailTriID,pTVar1,*(double *)(lVar17 + 0x28),iVar15 == 2);
        }
      }
      pFVar9->DetailMesh = pvVar16;
      if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14c8ae910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshVertexBaker::BakeImpl<1>'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  TVector4<float> *pTVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  long64 lVar17;
  undefined1 auStackY_1a8 [32];
  int local_178;
  TVector4<float> *local_168;
  long64 local_160;
  FCorrespondenceSample local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  lVar16 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar16 + 0xa0));
  pcVar1 = *(code **)(lVar16 + 0xa0);
  plVar14 = (longlong *)(lVar16 + 0xb0);
  if (*(longlong **)(lVar16 + 200) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar16 + 200);
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  cVar4 = (*pcVar1)(uVar11);
  if (cVar4 == '\0') {
    iVar9 = **(int **)((longlong)this + 8);
    iVar8 = (*(int **)((longlong)this + 8))[2];
    iVar6 = param_1 % (int)((uint)(iVar9 % iVar8 != 0) + iVar9 / iVar8);
    iVar7 = iVar6 * iVar8;
    iVar13 = iVar9;
    if (iVar7 < iVar9) {
      iVar13 = iVar7;
    }
    iVar8 = (iVar6 + 1) * iVar8;
    if (iVar8 < iVar9) {
      iVar9 = iVar8;
    }
    iVar8 = 0;
    if (0 < iVar9) {
      iVar8 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar13) {
      iVar9 = iVar13;
    }
    local_178 = 0;
    if (0 < iVar8 - iVar9) {
      lVar17 = (long64)(param_1 * 0x400);
      do {
        local_160 = lVar17;
        UE::Geometry::FMeshUVSampleInfo::FMeshUVSampleInfo(&local_158.BaseSample);
        local_158.BaseNormal.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_158.BaseNormal.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_158.DetailMesh = (void *)0x0;
        local_158.DetailBaryCoords.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_158.DetailBaryCoords.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_158.BaseNormal.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_158.DetailTriID = -1;
        local_158.DetailBaryCoords.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        __l2::<lambda_2>::operator()
                  (*(void **)((longlong)this + 0x18),param_1 * 0x400 + local_178,&local_158);
        if ((local_158.DetailMesh != (void *)0x0) &&
           (cVar4 = (**(code **)(**(longlong **)(*(longlong *)this + 0x38) + 0x90))
                              (*(longlong **)(*(longlong *)this + 0x38),local_158.DetailMesh,
                               local_158.DetailTriID), cVar4 != '\0')) {
          pTVar12 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              ((TDenseGrid2<UE::Math::TVector4<float>_> *)
                               (*(longlong *)(*(longlong *)this + 0xe0) + 8),lVar17);
          iVar13 = *(int *)((longlong)this + 0x14);
          uVar15 = 0;
          if (0 < iVar13) {
            lVar16 = 0;
            local_168 = pTVar12;
            do {
              lVar2 = *(longlong *)this;
              uVar10 = 0;
              if ((int)uVar15 < *(int *)(lVar2 + 0x100)) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar3 = *(longlong *)this;
              pcVar1 = *(code **)(lVar16 + *(longlong *)(lVar2 + 0xf8));
              uVar10 = 0;
              if ((int)uVar15 < *(int *)(lVar3 + 0x100)) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              (*pcVar1)(&local_168,&local_158,
                        *(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 0x20 + lVar16));
              iVar13 = *(int *)((longlong)this + 0x14);
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 0x40;
              lVar17 = local_160;
            } while ((int)uVar15 < iVar13);
          }
          uVar15 = 0;
          local_168 = pTVar12;
          if (0 < iVar13) {
            lVar16 = 0;
            do {
              if ((iVar13 != 4) &&
                 (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<4249890209774174449>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                                     ,0xf1,"NumBakers == 4"), bVar5)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar2 = *(longlong *)this;
              uVar10 = 0;
              if ((int)uVar15 < *(int *)(lVar2 + 0x100)) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar3 = *(longlong *)this;
              pcVar1 = *(code **)(*(longlong *)(lVar2 + 0xf8) + 0x18 + lVar16);
              uVar10 = 0;
              if ((int)uVar15 < *(int *)(lVar3 + 0x100)) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar11 = *(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 0x20 + lVar16);
              if ((3 < uVar15) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                     ,0x310,L""), bVar5)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              (*pcVar1)(0,&local_168,(longlong)&pTVar12->field0_0x0 + (longlong)(int)uVar15 * 4,
                        uVar11);
              iVar13 = *(int *)((longlong)this + 0x14);
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 0x40;
              lVar17 = local_160;
            } while ((int)uVar15 < iVar13);
          }
        }
        local_178 = local_178 + 1;
        lVar17 = lVar17 + 1;
      } while (local_178 < iVar8 - iVar9);
    }
  }
  return;
}

// operator() @ 14c8aed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FMeshVertexBaker::BakeImpl<0>'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  TVector4<float> *pTVar13;
  longlong *plVar14;
  uint uVar15;
  long64 lVar16;
  longlong lVar17;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  int local_178;
  int local_174;
  TVector4<float> *local_170;
  long64 local_168;
  FCorrespondenceSample local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  lVar17 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar17 + 0xa0));
  pcVar1 = *(code **)(lVar17 + 0xa0);
  plVar14 = (longlong *)(lVar17 + 0xb0);
  if (*(longlong **)(lVar17 + 200) != (longlong *)0x0) {
    plVar14 = *(longlong **)(lVar17 + 200);
  }
  uVar12 = (**(code **)(*plVar14 + 8))();
  cVar5 = (*pcVar1)(uVar12);
  if (cVar5 == '\0') {
    iVar10 = **(int **)((longlong)this + 8);
    iVar9 = (*(int **)((longlong)this + 8))[2];
    iVar7 = param_1 % (int)((uint)(iVar10 % iVar9 != 0) + iVar10 / iVar9);
    iVar8 = iVar7 * iVar9;
    iVar4 = iVar10;
    if (iVar8 < iVar10) {
      iVar4 = iVar8;
    }
    iVar9 = (iVar7 + 1) * iVar9;
    if (iVar9 < iVar10) {
      iVar10 = iVar9;
    }
    local_174 = 0;
    if (0 < iVar10) {
      local_174 = iVar10;
    }
    iVar10 = 0;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    iVar9 = 0;
    local_174 = local_174 - iVar10;
    if (0 < local_174) {
      local_178 = param_1 << 10;
      lVar16 = (long64)local_178;
      do {
        iVar10 = local_178;
        local_168 = lVar16;
        UE::Geometry::FMeshUVSampleInfo::FMeshUVSampleInfo(&local_158.BaseSample);
        local_158.BaseNormal.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_158.BaseNormal.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_158.DetailMesh = (void *)0x0;
        local_158.DetailBaryCoords.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_158.DetailBaryCoords.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_158.BaseNormal.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_158.DetailTriID = -1;
        local_158.DetailBaryCoords.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        __l2::<lambda_2>::operator()(*(void **)((longlong)this + 0x18),iVar10 + iVar9,&local_158);
        if ((local_158.DetailMesh != (void *)0x0) &&
           (cVar5 = (**(code **)(**(longlong **)(*(longlong *)this + 0x38) + 0x90))
                              (*(longlong **)(*(longlong *)this + 0x38),local_158.DetailMesh,
                               local_158.DetailTriID), cVar5 != '\0')) {
          pTVar13 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                              ((TDenseGrid2<UE::Math::TVector4<float>_> *)
                               (*(longlong *)(*(longlong *)this + 0xe0) + 8),lVar16);
          iVar10 = *(int *)((longlong)this + 0x14);
          uVar15 = 0;
          if (0 < iVar10) {
            lVar17 = 0;
            local_170 = pTVar13;
            do {
              lVar2 = *(longlong *)this;
              iVar10 = *(int *)(lVar2 + 0x100);
              uVar11 = 0;
              if ((int)uVar15 < iVar10) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if (uVar11 == 0) {
                local_188 = (longlong)(int)uVar15;
                local_180 = (longlong)iVar10;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              lVar3 = *(longlong *)this;
              pcVar1 = *(code **)(lVar17 + *(longlong *)(lVar2 + 0xf8));
              iVar10 = *(int *)(lVar3 + 0x100);
              uVar11 = 0;
              if ((int)uVar15 < iVar10) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if (uVar11 == 0) {
                local_188 = (longlong)(int)uVar15;
                local_180 = (longlong)iVar10;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              (*pcVar1)(&local_170,&local_158,
                        *(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 0x20 + lVar17));
              iVar10 = *(int *)((longlong)this + 0x14);
              uVar15 = uVar15 + 1;
              lVar17 = lVar17 + 0x40;
              lVar16 = local_168;
            } while ((int)uVar15 < iVar10);
          }
          uVar15 = 0;
          local_170 = pTVar13;
          if (0 < iVar10) {
            lVar17 = 0;
            do {
              lVar2 = *(longlong *)this;
              iVar10 = *(int *)(lVar2 + 0x100);
              uVar11 = 0;
              if ((int)uVar15 < iVar10) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if (uVar11 == 0) {
                local_188 = (longlong)(int)uVar15;
                local_180 = (longlong)iVar10;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              lVar3 = *(longlong *)this;
              pcVar1 = *(code **)(*(longlong *)(lVar2 + 0xf8) + 0x10 + lVar17);
              iVar10 = *(int *)(lVar3 + 0x100);
              uVar11 = 0;
              if ((int)uVar15 < iVar10) {
                uVar11 = ~uVar15 >> 0x1f;
              }
              if (uVar11 == 0) {
                local_188 = (longlong)(int)uVar15;
                local_180 = (longlong)iVar10;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              (*pcVar1)(0,&local_170,pTVar13,
                        *(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 0x20 + lVar17));
              uVar15 = uVar15 + 1;
              lVar17 = lVar17 + 0x40;
              lVar16 = local_168;
            } while ((int)uVar15 < *(int *)((longlong)this + 0x14));
          }
        }
        lVar16 = lVar16 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_174);
    }
  }
  return;
}

// Bake @ 14c8c0360

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FMeshVertexBaker::Bake(FMeshVertexBaker *this)

{
  TArray<UE::Geometry::FMeshMapEvaluator_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,TSizedDefaultAllocator<32>_> *this_00;
  TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
  *pTVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  FMeshConstantMapEvaluator *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  FEvaluationContext *pFVar9;
  longlong *plVar10;
  double dVar11;
  FImageDimensions FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  code *pcVar16;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar17;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar18;
  int *piVar19;
  TImageBuilder<UE::Math::TVector4<float>_> *pTVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  ulonglong uVar25;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  longlong local_res20;
  FMeshMapEvaluator *local_a8;
  FMeshConstantMapEvaluator *local_a0;
  FMeshConstantMapEvaluator *local_98;
  int local_90;
  undefined4 uStack_8c;
  LARGE_INTEGER local_88;
  TVector4<float> *local_80;
  longlong local_78;
  LARGE_INTEGER local_70;
  undefined8 local_68 [5];
  
  this->TotalBakeDuration = 0.0;
  QueryPerformanceCounter(&local_88);
  dVar11 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (((this->_padding_ == 0) || (lVar5 = *(longlong *)(this->_padding_ + 0x208), lVar5 == 0)) ||
     (*(longlong *)(lVar5 + 0x40) == 0)) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4249890209774174226>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                        ,0x12,
                        "TargetMesh && TargetMesh->HasAttributes() && TargetMesh->Attributes()->HasPrimaryColors()"
                       );
    if (bVar13) {
code_r0x00014c8c0c03:
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    goto LAB_14c8c0c04;
  }
  if (this->_padding_ == 0) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4249890209774174227>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                        ,0x13,"DetailSampler");
    if (bVar13) goto code_r0x00014c8c0c03;
    goto LAB_14c8c0c04;
  }
  pTVar1 = &this->Bakers;
  piVar3 = &(this->Bakers).ArrayMax;
  (this->Bakers).ArrayNum = 0;
  if ((this->Bakers).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar3);
  }
  if (this->BakeMode == RGBA) {
    pFVar6 = (FMeshConstantMapEvaluator *)(this->ColorEvaluator).Object;
    pFVar24 = (pTVar1->AllocatorInstance).Data;
    local_98 = &ZeroEvaluator;
    if (pFVar6 != (FMeshConstantMapEvaluator *)0x0) {
      local_98 = pFVar6;
    }
    if (((pFVar24 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 < pFVar24 + (longlong)*piVar3 * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Bakers).ArrayNum;
    if (iVar14 == *piVar3) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar3);
    }
    (this->Bakers).ArrayNum = iVar14 + 1;
    *(FMeshConstantMapEvaluator **)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) =
         local_98;
    pcVar16 = BakeImpl<0>;
  }
  else {
    local_a8 = this->ChannelEvaluators[0].Object;
    local_a0 = &ZeroEvaluator;
    pFVar24 = (FScriptContainerElement *)&local_a8;
    if (local_a8 == (FMeshMapEvaluator *)0x0) {
      pFVar24 = (FScriptContainerElement *)&local_a0;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar24) && (pFVar24 < pFVar7 + (longlong)*piVar3 * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Bakers).ArrayNum;
    if (iVar14 == *piVar3) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar3);
    }
    uVar8 = *(undefined8 *)pFVar24;
    (this->Bakers).ArrayNum = iVar14 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) = uVar8;
    local_a8 = this->ChannelEvaluators[1].Object;
    local_a0 = &ZeroEvaluator;
    pFVar24 = (FScriptContainerElement *)&local_a8;
    if (local_a8 == (FMeshMapEvaluator *)0x0) {
      pFVar24 = (FScriptContainerElement *)&local_a0;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar24) && (pFVar24 < pFVar7 + (longlong)*piVar3 * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Bakers).ArrayNum;
    if (iVar14 == *piVar3) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar3);
    }
    uVar8 = *(undefined8 *)pFVar24;
    (this->Bakers).ArrayNum = iVar14 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) = uVar8;
    local_a8 = this->ChannelEvaluators[2].Object;
    local_a0 = &ZeroEvaluator;
    pFVar24 = (FScriptContainerElement *)&local_a8;
    if (local_a8 == (FMeshMapEvaluator *)0x0) {
      pFVar24 = (FScriptContainerElement *)&local_a0;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar24) && (pFVar24 < pFVar7 + (longlong)*piVar3 * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Bakers).ArrayNum;
    if (iVar14 == *piVar3) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar3);
    }
    uVar8 = *(undefined8 *)pFVar24;
    (this->Bakers).ArrayNum = iVar14 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) = uVar8;
    local_a0 = &OneEvaluator;
    local_a8 = this->ChannelEvaluators[3].Object;
    pFVar24 = (FScriptContainerElement *)&local_a8;
    if (local_a8 == (FMeshMapEvaluator *)0x0) {
      pFVar24 = (FScriptContainerElement *)&local_a0;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar24) && (pFVar24 < pFVar7 + (longlong)*piVar3 * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar14 = (this->Bakers).ArrayNum;
    if (iVar14 == *piVar3) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar3);
    }
    uVar8 = *(undefined8 *)pFVar24;
    (this->Bakers).ArrayNum = iVar14 + 1;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8) = uVar8;
    pcVar16 = BakeImpl<1>;
  }
  this->BakeInternal = pcVar16;
  iVar14 = (this->Bakers).ArrayNum;
  if (iVar14 == 0) goto LAB_14c8c0c04;
  local_80 = &this->BakeDefaults;
  *(undefined8 *)&local_80->field0_0x0 = 0;
  this_00 = &this->BakeContexts;
  (this->BakeDefaults).field0_0x0._s_0.Z = 0.0;
  piVar3 = &(this->BakeContexts).ArrayMax;
  (this->BakeDefaults).field0_0x0._s_0.W = 1.0;
  pFVar9 = (FEvaluationContext *)(this_00->AllocatorInstance).Data;
  iVar4 = (this->BakeContexts).ArrayNum;
  if (*piVar3 < 0) {
    DestructItems<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,int>(pFVar9,iVar4);
    (this->BakeContexts).ArrayNum = 0;
    if (*piVar3 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&this_00->AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,int>(pFVar9,iVar4);
    (this->BakeContexts).ArrayNum = 0;
  }
  uVar22 = 0;
  TArray<UE::Geometry::FMeshMapEvaluator::FEvaluationContext,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar14,Default);
  this->BakeSampleBufferSize = 0;
  local_res10 = 0;
  local_78 = (longlong)iVar14;
  if (0 < iVar14) {
    local_res20 = 0;
    uVar25 = uVar22;
    do {
      lVar5 = local_res20;
      uVar21 = (uint)uVar22;
      uVar23 = ~uVar21 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar21 < (this->Bakers).ArrayNum) {
        uVar15 = uVar23;
      }
      local_res18 = uVar23;
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      plVar10 = *(longlong **)((pTVar1->AllocatorInstance).Data + lVar5 * 8);
      pcVar16 = *(code **)(*plVar10 + 8);
      uVar15 = 0;
      if ((int)uVar21 < (this->BakeContexts).ArrayNum) {
        uVar15 = uVar23;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      (*pcVar16)(plVar10,this,(this->BakeContexts).AllocatorInstance.Data + uVar25);
      uVar15 = 0;
      if ((int)uVar21 < (this->BakeContexts).ArrayNum) {
        uVar15 = uVar23;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar24 = (this->BakeContexts).AllocatorInstance.Data;
      piVar19 = *(int **)(pFVar24 + uVar25 + 0x30);
      iVar14 = *(int *)(pFVar24 + uVar25 + 0x38);
      piVar3 = piVar19 + iVar14;
      while( true ) {
        if (*(int *)(pFVar24 + uVar25 + 0x38) != iVar14) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<enum_UE::Geometry::FMeshMapEvaluator::EComponents,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        uVar21 = local_res18;
        uVar15 = local_res10;
        if (piVar19 == piVar3) break;
        this->BakeSampleBufferSize = this->BakeSampleBufferSize + *piVar19;
        piVar19 = piVar19 + 1;
      }
      if (4 < this->BakeSampleBufferSize) {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4249890209774174272>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Sampling\\MeshVertexBaker.cpp"
                            ,0x40,"BakeSampleBufferSize <= 4");
        if (!bVar13) goto LAB_14c8c0c04;
        goto code_r0x00014c8c0c03;
      }
      uVar23 = 0;
      if ((int)local_res10 < (this->BakeContexts).ArrayNum) {
        uVar23 = local_res18;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pcVar16 = *(code **)((this->BakeContexts).AllocatorInstance.Data + uVar25 + 8);
      uVar23 = 0;
      if ((int)uVar15 < (this->BakeContexts).ArrayNum) {
        uVar23 = uVar21;
      }
      if ((uVar23 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      (*pcVar16)(&local_80,
                 *(undefined8 *)((this->BakeContexts).AllocatorInstance.Data + uVar25 + 0x20));
      local_res10 = uVar15 + 1;
      uVar22 = (ulonglong)local_res10;
      local_res20 = local_res20 + 1;
      uVar25 = uVar25 + 0x40;
    } while (local_res20 < local_78);
  }
  pTVar20 = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  pTVar18 = *(TImageBuilder<UE::Math::TVector4<float>_> **)(this->_padding_ + 0x208);
  pTVar17 = pTVar20;
  if (pTVar18 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    pTVar17 = pTVar18;
  }
  iVar14 = *(int *)(pTVar17[1].Image.Buffer.ArrayNum + 0x38);
  if ((iVar14 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("WidthIn >= 0 && HeightIn >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                          ,0x20,L""), bVar13)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  uStack_8c = 1;
  FVar12.Height = 1;
  FVar12.Width = iVar14;
  this->Dimensions = FVar12;
  local_90 = iVar14;
  pTVar18 = ::operator_new(0x30);
  if (pTVar18 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
    (pTVar18->Dimensions).Width = 0;
    (pTVar18->Dimensions).Height = 0;
    (pTVar18->Image).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar18->Image).Buffer.ArrayNum = 0;
    (pTVar18->Image).Buffer.ArrayMax = 0;
    (pTVar18->Image).DimensionX = 0;
    (pTVar18->Image).DimensionY = 0;
    pTVar20 = pTVar18;
  }
  pTVar2 = &this->BakeResult;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,TDefaultDelete<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_>_>
                 *)local_68) {
    if (pTVar20 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
      pFVar24 = (pTVar20->Image).Buffer.AllocatorInstance.Data;
      pTVar18 = pTVar20;
      if (pFVar24 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar24);
      }
      goto LAB_14c8c0b92;
    }
  }
  else {
    pTVar18 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar20;
    if (pTVar18 != (TImageBuilder<UE::Math::TVector4<float>_> *)0x0) {
      pFVar24 = (pTVar18->Image).Buffer.AllocatorInstance.Data;
      if (pFVar24 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar24);
      }
LAB_14c8c0b92:
      ::operator_delete(pTVar18,0x30);
    }
  }
  TImageBuilder<UE::Math::TVector4<float>_>::SetDimensions(pTVar2->Ptr,this->Dimensions);
  TImageBuilder<UE::Math::TVector4<float>_>::Clear(pTVar2->Ptr,&this->BakeDefaults);
  if (this->BakeInternal == BakeImpl<1>) {
    BakeImpl<1>(this);
  }
  else {
    (*this->BakeInternal)(this);
  }
LAB_14c8c0c04:
  QueryPerformanceCounter(&local_70);
  this->TotalBakeDuration =
       ((double)local_70.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar11) +
       this->TotalBakeDuration;
  return;
}

// GetBakeResult @ 14c8f20d0

TImageBuilder<UE::Math::TVector4<float>_> * __thiscall
UE::Geometry::FMeshVertexBaker::GetBakeResult(FMeshVertexBaker *this)

{
  return (this->BakeResult).Ptr;
}

