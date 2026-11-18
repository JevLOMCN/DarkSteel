// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// <lambda_invoker_cdecl> @ 14c940ee0

bool __cdecl
UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::<lambda_34_>::<lambda_invoker_cdecl>
          (void)

{
  return false;
}

// ComputeFirstPass @ 14c979af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass
          (TImplicitMorphology<UE::Geometry::FDynamicMesh3> *this,double param_1,double param_2)

{
  double *pdVar1;
  TAxisAlignedBox3<double> *pTVar2;
  uint uVar3;
  int iVar4;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined ***pppuVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  <lambda_1> <Var29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 in_XMM1_Qb;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 in_XMM4_Qb;
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auStackY_328 [32];
  TPlus<void> local_2f8;
  IndexEnumerable local_2f0;
  TVector<double>_u_0 local_2e8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined1 *local_2b8;
  double dStack_2b0;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined1 local_278 [56];
  longlong *local_240;
  float local_238;
  int local_234;
  TVector<double>_u_0 local_230;
  bool local_218;
  int local_214;
  EComputeModes local_210;
  double local_208;
  bool local_200;
  EInsideModes local_1fc;
  undefined2 local_1f8;
  code *local_1e8;
  undefined **local_1d8;
  code *local_1d0;
  undefined ***local_1c0;
  TVector<float>_u_0 local_1b8;
  FVector3i_u_0 local_1a8;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  FBlock3 *local_188;
  undefined8 local_180;
  undefined1 local_178 [24];
  undefined4 local_160;
  FBlock3 *local_158;
  undefined8 local_150;
  undefined1 local_148 [24];
  undefined4 local_130;
  FBlock3 *local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_328;
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass(double,double)___ptr64'
                ::__l2::__CpuProfilerEventSpecId144,"Geometry_Morphology_FirstPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
               ,0x90);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass(double,double)___ptr64'
               ::__l2::__CpuProfilerEventSpecId144);
  }
  local_238 = 1.0;
  local_278._0_8_ = (FDynamicMesh3 *)0x0;
  local_278._8_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_1d8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_278._16_8_ = 0;
  local_230._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_230._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1d0 = TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::<lambda_43_>::
              <lambda_invoker_cdecl>;
  local_230._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_208 = 0.0;
  local_1a8._0_8_ = 0;
  local_1a8._s_0.Z = 0;
  uStack_19c = 0;
  local_240 = (longlong *)0x0;
  local_234 = 1;
  local_218 = true;
  local_214 = 0x1000;
  local_210 = NarrowBandOnly;
  local_200 = true;
  local_1fc = WindingCount;
  local_1f8._0_1_ = false;
  local_1f8._1_1_ = true;
  local_1c0 = (undefined ***)0x0;
  local_1e8 = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  uStack_198 = 0;
  uStack_194 = 0;
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)&local_1a8._s_0,0,0,0);
  local_190 = 0;
  local_178._0_8_ = 0;
  local_178._8_8_ = 0;
  local_188 = (FBlock3 *)0x0;
  local_180 = 0;
  local_178._16_8_ = 0;
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)local_178,0,0,0);
  local_160 = 0;
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_158 = (FBlock3 *)0x0;
  local_150 = 0;
  local_148._16_8_ = 0;
  TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)local_148,0,0,0);
  dVar32 = __real_ffefffffffffffff;
  dVar37 = __real_7fefffffffffffff;
  local_278._8_8_ = this->SourceSpatial;
  <Var29.Mesh = this->Source;
  dVar39 = this->GridCellSize;
  local_130 = 0;
  local_128 = (FBlock3 *)0x0;
  local_120 = 0;
  local_210 = NarrowBand_SpatialFloodFill;
  uVar3 = ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_278._8_8_)->RootIndex;
  local_278._0_8_ = <Var29.Mesh;
  if ((int)uVar3 < 0) {
    bVar19 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    if (bVar19) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    auVar11._4_8_ = in_XMM1_Qb;
    auVar11._0_4_ = (int)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
    auVar35._0_8_ = auVar11._0_8_ << 0x20;
    auVar35._8_4_ = SUB84(_UNK_150a9e648,0);
    auVar35._12_4_ = (int)((ulonglong)_UNK_150a9e648 >> 0x20);
    <Var29.Mesh = this->Source;
    auVar12._4_8_ = in_XMM4_Qb;
    auVar12._0_4_ = (int)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
    auVar40._0_8_ = auVar12._0_8_ << 0x20;
    auVar40._8_4_ = SUB84(_UNK_1508ffb58,0);
    auVar40._12_4_ = (int)((ulonglong)_UNK_1508ffb58 >> 0x20);
    dVar38 = auVar40._8_8_;
    dVar33 = auVar35._8_8_;
    dVar36 = dVar32;
    dVar34 = dVar37;
    dVar41 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dVar31 = ___xmm_ffefffffffffffffffefffffffffffff;
  }
  else {
    uVar27 = (ulonglong)(uVar3 & 0x1ff);
    lVar6 = *(longlong *)
             ((((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_278._8_8_)->BoxCenters).Blocks.
              AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    dVar34 = *(double *)(lVar6 + uVar27 * 0x18);
    lVar7 = *(longlong *)
             ((((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_278._8_8_)->BoxExtents).Blocks.
              AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    dVar36 = *(double *)(lVar6 + 0x10 + uVar27 * 0x18);
    dVar38 = *(double *)(lVar7 + 8 + uVar27 * 0x18);
    dVar33 = dVar36 - *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
    dVar31 = dVar34 + *(double *)(lVar7 + uVar27 * 0x18);
    dVar36 = dVar36 + *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
    dVar34 = dVar34 - *(double *)(lVar7 + uVar27 * 0x18);
    dVar41 = *(double *)(lVar6 + 8 + uVar27 * 0x18) - dVar38;
    dVar38 = dVar38 + *(double *)(lVar6 + 8 + uVar27 * 0x18);
  }
  dVar16 = __real_4092c00000000000;
  dVar15 = __real_bfe0000000000000;
  dVar31 = dVar31 - dVar34;
  dVar38 = dVar38 - dVar41;
  dVar36 = dVar36 - dVar33;
  if (dVar31 <= 0.0) {
    dVar31 = 0.0;
  }
  if (dVar38 <= 0.0) {
    dVar38 = 0.0;
  }
  if (dVar36 <= 0.0) {
    dVar36 = 0.0;
  }
  if (dVar38 <= dVar36) {
    dVar38 = dVar36;
  }
  if (dVar38 <= dVar31) {
    dVar38 = dVar31;
  }
  dVar38 = dVar38 + param_1 + param_1;
  if (dVar39 * __real_4092c00000000000 < dVar39 + dVar39 + dVar38) {
    dVar39 = dVar38 * ___real_3f4b5a2d4d5b081f;
  }
  local_238 = (float)dVar39;
  dVar39 = (double)local_238;
  local_208 = param_1 + dVar39;
  this->NarrowBandMaxDistance = local_208;
  iVar28 = -((int)ROUND(dVar15 - (local_208 + local_208) / dVar39) >> 1);
  iVar4 = ((<Var29.Mesh)->EdgeRefCounts).UsedCount;
  local_234 = iVar28;
  if (iVar4 == 0) {
    dVar34 = 0.0;
  }
  else {
    local_2f0.Vector = &(<Var29.Mesh)->EdgeRefCounts;
    dVar34 = Algo::
             TransformAccumulate<double,UE::Geometry::FRefCountVector::IndexEnumerable,_UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::AverageEdgeLength_::__l2::<lambda_1>,TPlus<void>_>
                       (&local_2f0,<Var29,0.0,local_2f8);
    dVar34 = dVar34 / (double)iVar4;
  }
  if ((iVar28 < 2) || ((dVar39 / dVar34) * (double)iVar28 < __real_3fd0000000000000)) {
    local_278._8_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    local_210 = NarrowBandOnly;
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass(double,double)___ptr64'
                ::__l6::__CpuProfilerEventSpecId169,"Geometry_Morphology_FirstPass_ComputeSDF",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
               ,0xa9);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass(double,double)___ptr64'
               ::__l6::__CpuProfilerEventSpecId169);
  }
  pTVar5 = this->SourceSpatial;
  uVar3 = pTVar5->RootIndex;
  if ((int)uVar3 < 0) {
    bVar20 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    local_2c0 = dVar32;
    local_2d0 = dVar32;
    local_2e8._s_0.Y = dVar37;
    local_2e8._s_0.X = dVar37;
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    uVar27 = (ulonglong)(uVar3 & 0x1ff);
    lVar6 = *(longlong *)
             ((pTVar5->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    dVar39 = *(double *)(lVar6 + uVar27 * 0x18);
    lVar7 = *(longlong *)
             ((pTVar5->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    dVar34 = *(double *)(lVar6 + 8 + uVar27 * 0x18);
    dVar36 = *(double *)(lVar6 + 0x10 + uVar27 * 0x18);
    dVar32 = dVar34 + *(double *)(lVar7 + 8 + uVar27 * 0x18);
    dVar37 = dVar36 - *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
    local_2c0 = dVar36 + *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
    local_2d0 = dVar39 + *(double *)(lVar7 + uVar27 * 0x18);
    local_2e8._s_0.Y = dVar34 - *(double *)(lVar7 + 8 + uVar27 * 0x18);
    local_2e8._s_0.X = dVar39 - *(double *)(lVar7 + uVar27 * 0x18);
  }
  local_2e8._s_0.Z = dVar37;
  local_2c8 = dVar32;
  TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3>::Compute
            ((TSparseNarrowBandMeshSDF<UE::Geometry::FDynamicMesh3> *)local_278,
             (TAxisAlignedBox3<double> *)&local_2e8._s_0);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar18 = uStack_198;
  uVar17 = uStack_19c;
  local_2b8 = local_278;
  dStack_2b0 = (double)local_1b8._s_0.X;
  local_288 = uStack_194;
  (this->MarchingCubes).IsoValue = param_2;
  uStack_280 = __real_47efffffe0000000;
  dVar39 = (double)local_238;
  if (this->bUseCustomBounds == false) {
    pTVar5 = this->SourceSpatial;
    uVar3 = pTVar5->RootIndex;
    if ((int)uVar3 < 0) {
      bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2828200105734045879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                          ,0xb7,"RootIndex >= 0");
      dVar36 = ___xmm_7fefffffffffffff7fefffffffffffff;
      dVar38 = _UNK_150a9e648;
      dVar31 = ___xmm_ffefffffffffffff7fefffffffffffff;
      dVar32 = _UNK_150a9e6d8;
      dVar37 = ___xmm_ffefffffffffffffffefffffffffffff;
      dVar34 = _UNK_1508ffb58;
      if (bVar19) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      uVar27 = (ulonglong)(uVar3 & 0x1ff);
      lVar6 = *(longlong *)
               ((pTVar5->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
      dVar37 = *(double *)(lVar6 + 8 + uVar27 * 0x18);
      lVar7 = *(longlong *)
               ((pTVar5->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
      dVar32 = *(double *)(lVar6 + uVar27 * 0x18);
      dVar34 = *(double *)(lVar6 + 0x10 + uVar27 * 0x18);
      dVar36 = dVar32 - *(double *)(lVar7 + uVar27 * 0x18);
      dVar38 = dVar37 - *(double *)(lVar7 + 8 + uVar27 * 0x18);
      dVar31 = dVar34 - *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
      dVar32 = dVar32 + *(double *)(lVar7 + uVar27 * 0x18);
      dVar37 = dVar37 + *(double *)(lVar7 + 8 + uVar27 * 0x18);
      dVar34 = dVar34 + *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
    }
    pdVar1 = &(this->MarchingCubes).IsoValue;
    dVar33 = *pdVar1;
    dVar41 = *pdVar1;
    pTVar2 = &(this->MarchingCubes).Bounds;
    (pTVar2->Min).field0_0x0._s_0.X = dVar36;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar38;
    dVar36 = this->GridCellSize;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar31;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar32;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar37;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar34;
    dVar38 = (pTVar2->Min).field0_0x0._s_0.X - dVar36;
    dVar31 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y - dVar36;
    dVar32 = dVar36 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X;
    dVar37 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z - dVar36;
    dVar34 = dVar36 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y;
    (pTVar2->Min).field0_0x0._s_0.X = dVar38;
    dVar36 = dVar36 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar32;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar31;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar34;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar37;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar36;
    if (dVar41 <= 0.0 && dVar33 != 0.0) {
      (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar32 + local_208;
      (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar34 + local_208;
      (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar36 + local_208;
      (pTVar2->Min).field0_0x0._s_0.X = dVar38 - local_208;
      (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar31 - local_208;
      (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar37 - local_208;
    }
  }
  else {
    dVar37 = (this->CustomBounds).Min.field0_0x0._s_0.Y;
    dVar32 = (this->CustomBounds).Min.field0_0x0._s_0.Z;
    dVar34 = (this->CustomBounds).Max.field0_0x0._s_0.X;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X = (this->CustomBounds).Min.field0_0x0._s_0.X;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar37;
    dVar37 = (this->CustomBounds).Max.field0_0x0._s_0.Y;
    dVar36 = (this->CustomBounds).Max.field0_0x0._s_0.Z;
    (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar32;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar34;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar37;
    (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar36;
  }
  dVar37 = this->MeshCellSize;
  (this->MarchingCubes).RootMode = SingleLerp;
  dVar32 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y -
           (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y;
  dVar34 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X -
           (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X;
  dVar36 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z -
           (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z;
  if (dVar32 <= 0.0) {
    dVar32 = 0.0;
  }
  if (dVar34 <= 0.0) {
    dVar34 = 0.0;
  }
  if (dVar36 <= 0.0) {
    dVar36 = 0.0;
  }
  if (dVar36 <= dVar32) {
    dVar36 = dVar32;
  }
  if (dVar36 <= dVar34) {
    dVar36 = dVar34;
  }
  if (dVar37 * dVar16 < dVar37 + dVar36) {
    dVar37 = dVar36 * ___real_3f4b5456423040e8;
  }
  (this->MarchingCubes).CubeSize = dVar37;
  TFunction<bool___cdecl(void)>::operator=(&(this->MarchingCubes).CancelF,&this->CancelF);
  Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar8 = *(code **)&this->CancelF;
  plVar26 = *(longlong **)&(this->CancelF).field_0x28;
  plVar24 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar26 != (longlong *)0x0) {
    plVar24 = plVar26;
  }
  uVar22 = (**(code **)(*plVar24 + 8))();
  cVar21 = (*pcVar8)(uVar22);
  if (cVar21 == '\0') {
    local_118 = (code *)0x0;
    puVar23 = FMemory::Malloc(0x48,8);
    puVar23[1] = local_2b8;
    puVar23[2] = dStack_2b0;
    *puVar23 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__ComputeFirstPass___TImplicitMorphology_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEAAXNN_Z__0A__00_Function_Private_Core_UE__6B_
    ;
    auVar9._8_4_ = SUB84((double)local_1b8._s_0.Z,0);
    auVar9._0_8_ = (double)local_1b8._s_0.Y;
    auVar9._12_4_ = (int)((ulonglong)(double)local_1b8._s_0.Z >> 0x20);
    *(undefined1 (*) [16])(puVar23 + 3) = auVar9;
    auVar10._8_4_ = uVar17;
    auVar10._0_8_ = dVar39;
    auVar10._12_4_ = uVar18;
    *(undefined1 (*) [16])(puVar23 + 5) = auVar10;
    puVar23[7] = CONCAT44(uStack_284,local_288);
    puVar23[8] = uStack_280;
    lVar6 = *(longlong *)&(this->MarchingCubes).Implicit;
    uVar22 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8;
    if (puVar23 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_118 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass'::__l2::<lambda_1>,double,UE::Math::TVector<double>_>
                  ::Call;
    }
    lVar7 = *(longlong *)&(this->MarchingCubes).Implicit.field_0x10;
    uVar14 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x18;
    uVar13 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20;
    plStack_f0 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
    *(code **)&(this->MarchingCubes).Implicit = local_118;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8 = uStack_110;
    *(longlong *)&(this->MarchingCubes).Implicit.field_0x10 = local_108;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x18 = uStack_100;
    *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20 = local_f8;
    *(undefined8 **)&(this->MarchingCubes).Implicit.field_0x28 = puVar23;
    local_118 = (code *)lVar6;
    uStack_110 = uVar22;
    local_108 = lVar7;
    uStack_100 = uVar14;
    local_f8 = uVar13;
    if (lVar6 != 0) {
      plVar26 = &local_108;
      if (plStack_f0 != (longlong *)0x0) {
        plVar26 = plStack_f0;
      }
      (**(code **)(*plVar26 + 0x10))();
    }
    (this->MarchingCubes).bEnableValueCaching = false;
    if (CpuChannel->Enabled < 0) {
      (**(code **)((this->MarchingCubes)._padding_ + 8))(&this->MarchingCubes);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass(double,double)___ptr64'
                  ::__l18::__CpuProfilerEventSpecId206,"Geometry_Morphology_FirstPass_GenerateMesh",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
                 ,0xce);
      FCpuProfilerTrace::OutputBeginEvent
                (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass(double,double)___ptr64'
                 ::__l18::__CpuProfilerEventSpecId206);
      (**(code **)((this->MarchingCubes)._padding_ + 8))(&this->MarchingCubes);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (*(longlong *)&(this->MarchingCubes).Implicit != 0) {
      plVar26 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
      plVar24 = (longlong *)&(this->MarchingCubes).Implicit.field_0x10;
      if (plVar26 != (longlong *)0x0) {
        plVar24 = plVar26;
      }
      (**(code **)(*plVar24 + 0x10))();
      *(undefined8 *)&(this->MarchingCubes).Implicit = 0;
    }
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>(local_128,(int)local_120)
  ;
  if (local_128 != (FBlock3 *)0x0) {
    FMemory::Free(local_128);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>(local_158,(int)local_150)
  ;
  if (local_158 != (FBlock3 *)0x0) {
    FMemory::Free(local_158);
  }
  DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,int>
            (local_188,(int)local_180);
  if (local_188 != (FBlock3 *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_1e8 != (code *)0x0) {
    pppuVar25 = &local_1d8;
    if (local_1c0 != (undefined ***)0x0) {
      pppuVar25 = local_1c0;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if (local_278._16_8_ != 0) {
    plVar26 = (longlong *)(local_278 + 0x20);
    if (local_240 != (longlong *)0x0) {
      plVar26 = local_240;
    }
    (**(code **)(*plVar26 + 0x10))();
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeSecondPass @ 14c97a910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass
          (TImplicitMorphology<UE::Geometry::FDynamicMesh3> *this,double param_1,double param_2)

{
  FMarchingCubes *this_00;
  TAxisAlignedBox3<double> *pTVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  bool bVar21;
  char cVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined ***pppuVar29;
  bool bVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_3e8 [32];
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> local_3a8;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined1 local_328 [56];
  longlong *local_2f0;
  float local_2e8;
  int local_2e4;
  TVector<double>_u_0 local_2e0;
  bool local_2c8;
  int local_2c4;
  EComputeModes local_2c0;
  double local_2b8;
  bool local_2b0;
  EInsideModes local_2ac;
  undefined2 local_2a8;
  code *local_298;
  undefined **local_288;
  code *local_280;
  undefined ***local_270;
  TVector<float>_u_0 local_268;
  FVector3i_u_0 local_258;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  FBlock3 *local_238;
  undefined8 local_230;
  undefined1 local_228 [24];
  undefined4 local_210;
  FBlock3 *local_208;
  undefined8 local_200;
  undefined1 local_1f8 [24];
  undefined4 local_1e0;
  FBlock3 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [48];
  undefined **local_198;
  code *local_190;
  undefined ***local_180;
  double local_178;
  TDynamicVector<int,512> local_170;
  TDynamicVector<UE::Math::TVector<double>,512> local_158;
  TDynamicVector<UE::Math::TVector<double>,512> local_140;
  TDynamicVector<int,512> local_128;
  undefined8 local_110;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                ::__l2::__CpuProfilerEventSpecId217,"Geometry_Morphology_SecondPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
               ,0xd9);
    FCpuProfilerTrace::OutputBeginEvent
              (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
               ::__l2::__CpuProfilerEventSpecId217);
  }
  this_00 = &this->MarchingCubes;
  if ((int)(this->MarchingCubes)._padding_ == 0) {
    FMeshShapeGenerator::Reset((FMeshShapeGenerator *)this_00);
  }
  else {
    local_3a8.SourceVertices =
         (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
         &(this->MarchingCubes)._padding_;
    local_1c8._0_8_ =
         &
         ___7__TMeshAABBTree3_U__TIndexVectorMeshArrayAdapter_UFIndex3i_Geometry_UE__NU__TVector_N_Math_3__Geometry_UE___Geometry_UE__6B_
    ;
    local_198 = &
                ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_190 = `UE::Geometry::
                TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                ::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_1c8._32_8_ =
         Core::Private::Function::
         TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
         ::Call;
    local_178 = __real_3e45798ee2308c3a;
    local_1c8._16_8_ = 0;
    local_1c8._24_4_ = 3;
    local_180 = (undefined ***)0x0;
    local_170.CurBlock = 0;
    local_170.CurBlockUsed = 0;
    local_170.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Blocks.ArrayNum = 0;
    local_170.Blocks.ArrayMax = 0;
    local_3a8.SourceTriangles =
         (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
         &(this->MarchingCubes)._padding_;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_170);
    local_158.CurBlock = 0;
    local_158.CurBlockUsed = 0;
    local_158.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Blocks.ArrayNum = 0;
    local_158.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_158);
    local_140.CurBlock = 0;
    local_140.CurBlockUsed = 0;
    local_140.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Blocks.ArrayNum = 0;
    local_140.Blocks.ArrayMax = 0;
    TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_140);
    local_128.CurBlock = 0;
    local_128.CurBlockUsed = 0;
    local_128.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Blocks.ArrayNum = 0;
    local_128.Blocks.ArrayMax = 0;
    TDynamicVector<int,512>::AddAllocatedBlock(&local_128);
    local_1c8._8_8_ = &local_3a8;
    local_110 = -1;
    pTVar1 = &(this->MarchingCubes).Bounds;
    dVar33 = (pTVar1->Min).field0_0x0._s_0.X;
    dVar35 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y;
    local_398 = *(undefined1 (*) [16])&(pTVar1->Min).field0_0x0;
    pauVar2 = (undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Min.field0_0x0 + 0x10);
    dVar15 = *(double *)*pauVar2;
    dVar34 = (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X;
    local_388 = *pauVar2;
    local_1c8._16_8_ = 0;
    local_378 = *(undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Max.field0_0x0 + 8);
    dVar14 = local_378._0_8_;
    uVar40 = local_378._8_4_;
    uVar41 = local_378._12_4_;
    dVar32 = local_378._8_8_;
    if (this->bUseCustomBounds == false) {
      dVar3 = this->MeshCellSize;
      dVar14 = dVar14 + dVar3;
      dVar33 = dVar33 - dVar3;
      dVar15 = dVar15 - dVar3;
      dVar34 = dVar34 + dVar3;
      dVar32 = dVar32 + dVar3;
      dVar35 = dVar35 - dVar3;
      uVar40 = SUB84(dVar32,0);
      uVar41 = (undefined4)((ulonglong)dVar32 >> 0x20);
      local_378._8_4_ = uVar40;
      local_378._0_8_ = dVar14;
      local_378._12_4_ = uVar41;
      local_388._8_4_ = SUB84(dVar34,0);
      local_388._0_8_ = dVar15;
      local_388._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      local_398._8_4_ = SUB84(dVar35,0);
      local_398._0_8_ = dVar33;
      local_398._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    }
    local_328._16_8_ = 0;
    local_328._0_8_ =
         (TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *)
         0x0;
    local_328._8_8_ =
         (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *)0x0;
    local_288 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
    local_2f0 = (longlong *)0x0;
    local_2e0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_2e0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_280 = TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                ::<lambda_45_>::<lambda_invoker_cdecl>;
    local_2e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2e8 = 1.0;
    local_2b8 = 0.0;
    local_258._0_8_ = 0;
    local_258._s_0.Z = 0;
    uStack_24c = 0;
    local_2e4 = 1;
    local_2c8 = true;
    local_2c4 = 0x1000;
    local_2c0 = NarrowBandOnly;
    local_2b0 = true;
    local_2ac = WindingCount;
    local_2a8._0_1_ = false;
    local_2a8._1_1_ = true;
    local_270 = (undefined ***)0x0;
    local_298 = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    uStack_248 = 0;
    uStack_244 = 0;
    TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)&local_258._s_0,0,0,0);
    local_240 = 0;
    local_228._0_8_ = 0;
    local_228._8_8_ = 0;
    local_238 = (FBlock3 *)0x0;
    local_230 = 0;
    local_228._16_8_ = 0;
    TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)local_228,0,0,0);
    local_210 = 0;
    local_1f8._0_8_ = 0;
    local_1f8._8_8_ = 0;
    local_208 = (FBlock3 *)0x0;
    local_200 = 0;
    local_1f8._16_8_ = 0;
    TBlockedGrid3Layout<8>::Resize((TBlockedGrid3Layout<8> *)local_1f8,0,0,0);
    dVar18 = __real_4092c00000000000;
    dVar3 = this->GridCellSize;
    dVar4 = 0.0;
    local_1e0 = 0;
    local_1d8 = (FBlock3 *)0x0;
    dVar8 = dVar32 - dVar15;
    if (dVar32 - dVar15 <= 0.0) {
      dVar8 = dVar4;
    }
    local_1d0 = 0;
    dVar32 = dVar34 - dVar33;
    if (dVar34 - dVar33 <= 0.0) {
      dVar32 = dVar4;
    }
    dVar16 = dVar14 - dVar35;
    if (dVar14 - dVar35 <= 0.0) {
      dVar16 = dVar4;
    }
    local_328._0_8_ = &local_3a8;
    if (dVar8 <= dVar16) {
      dVar8 = dVar16;
    }
    if (dVar8 <= dVar32) {
      dVar8 = dVar32;
    }
    dVar8 = dVar8 + param_1 + param_1;
    if (dVar3 * __real_4092c00000000000 < dVar3 + dVar3 + dVar8) {
      dVar3 = dVar8 * ___real_3f4b5a2d4d5b081f;
    }
    local_328._8_8_ =
         (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *)0x0;
    local_2e8 = (float)dVar3;
    local_2b8 = param_1 + (double)local_2e8;
    local_2e4 = -((int)ROUND(__real_bfe0000000000000 - (local_2b8 + local_2b8) / (double)local_2e8)
                 >> 1);
    if (local_2e4 < 2) {
      local_2c0 = NarrowBandOnly;
    }
    else {
      bVar31 = -1 < CpuChannel->Enabled;
      if (bVar31) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                    ::__l11::__CpuProfilerEventSpecId251,
                   "Geometry_Morphology_SecondPass_BuildSpatial",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
                   ,0xfb);
        FCpuProfilerTrace::OutputBeginEvent
                  (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                   ::__l11::__CpuProfilerEventSpecId251);
      }
      TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
      ::BuildTopDown((TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                      *)local_1c8,false);
      local_328._8_8_ = local_1c8;
      local_1c8._16_8_ = 1;
      local_2c0 = NarrowBand_SpatialFloodFill;
      if (this->bUseCustomBounds == false) {
        if (local_110 < 0) {
          bVar21 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2828200105734045879>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                              ,0xb7,"RootIndex >= 0");
          dVar33 = __real_7fefffffffffffff;
          dVar14 = __real_ffefffffffffffff;
          dVar34 = __real_ffefffffffffffff;
          dVar15 = __real_7fefffffffffffff;
          dVar35 = __real_7fefffffffffffff;
          dVar32 = __real_ffefffffffffffff;
          if (bVar21) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          uVar23 = (ulonglong)(local_110._4_4_ & 0x1ff);
          lVar5 = *(longlong *)
                   (local_158.Blocks.AllocatorInstance.Data + (ulonglong)(local_110._4_4_ >> 9) * 8)
          ;
          dVar32 = *(double *)(lVar5 + uVar23 * 0x18);
          lVar6 = *(longlong *)
                   (local_140.Blocks.AllocatorInstance.Data + (ulonglong)(local_110._4_4_ >> 9) * 8)
          ;
          dVar35 = *(double *)(lVar5 + 8 + uVar23 * 0x18);
          dVar8 = *(double *)(lVar5 + 0x10 + uVar23 * 0x18);
          dVar33 = dVar32 - *(double *)(lVar6 + uVar23 * 0x18);
          dVar14 = dVar35 + *(double *)(lVar6 + 8 + uVar23 * 0x18);
          dVar34 = dVar32 + *(double *)(lVar6 + uVar23 * 0x18);
          dVar15 = dVar8 - *(double *)(lVar6 + 0x10 + uVar23 * 0x18);
          dVar35 = dVar35 - *(double *)(lVar6 + 8 + uVar23 * 0x18);
          dVar32 = dVar8 + *(double *)(lVar6 + 0x10 + uVar23 * 0x18);
        }
        uVar40 = SUB84(dVar32,0);
        uVar41 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      if (bVar31) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    uVar39 = (undefined4)((ulonglong)dVar34 >> 0x20);
    uVar38 = SUB84(dVar34,0);
    uVar37 = (undefined4)((ulonglong)dVar35 >> 0x20);
    uVar36 = SUB84(dVar35,0);
    Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
    pcVar7 = *(code **)&this->CancelF;
    plVar28 = (longlong *)&(this->CancelF).field_0x10;
    plVar27 = *(longlong **)&(this->CancelF).field_0x28;
    plVar26 = plVar28;
    if (plVar27 != (longlong *)0x0) {
      plVar26 = plVar27;
    }
    uVar24 = (**(code **)(*plVar26 + 8))();
    cVar22 = (*pcVar7)(uVar24);
    if (cVar22 == '\0') {
      if (CpuChannel->Enabled < 0) {
        local_368._8_4_ = uVar36;
        local_368._0_8_ = dVar33;
        local_368._12_4_ = uVar37;
        local_358._8_4_ = uVar38;
        local_358._0_8_ = dVar15;
        local_358._12_4_ = uVar39;
        local_348._8_4_ = uVar40;
        local_348._0_8_ = dVar14;
        local_348._12_4_ = uVar41;
        TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
        ::Compute((TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                   *)local_328,(TAxisAlignedBox3<double> *)local_368);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                    ::__l20::__CpuProfilerEventSpecId272,"Geometry_Morphology_SecondPass_ComputeSDF"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
                   ,0x110);
        FCpuProfilerTrace::OutputBeginEvent
                  (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                   ::__l20::__CpuProfilerEventSpecId272);
        local_368._8_4_ = uVar36;
        local_368._0_8_ = dVar33;
        local_368._12_4_ = uVar37;
        local_358._8_4_ = uVar38;
        local_358._0_8_ = dVar15;
        local_358._12_4_ = uVar39;
        local_348._8_4_ = uVar40;
        local_348._0_8_ = dVar14;
        local_348._12_4_ = uVar41;
        TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
        ::Compute((TSparseNarrowBandMeshSDF<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                   *)local_328,(TAxisAlignedBox3<double> *)local_368);
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar20 = uStack_248;
      uVar19 = uStack_24c;
      local_338 = uStack_244;
      local_368._8_8_ = (double)local_268._s_0.X;
      local_368._0_8_ = local_328;
      uStack_330 = __real_47efffffe0000000;
      dVar32 = (double)local_2e8;
      FMeshShapeGenerator::Reset((FMeshShapeGenerator *)this_00);
      auVar9._8_4_ = uVar36;
      auVar9._0_8_ = dVar33;
      auVar9._12_4_ = uVar37;
      *(undefined1 (*) [16])&(this->MarchingCubes).Bounds.Min.field0_0x0 = auVar9;
      auVar10._8_4_ = uVar38;
      auVar10._0_8_ = dVar15;
      auVar10._12_4_ = uVar39;
      *(undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Min.field0_0x0 + 0x10) =
           auVar10;
      (this->MarchingCubes).IsoValue = param_2;
      auVar11._8_4_ = uVar40;
      auVar11._0_8_ = dVar14;
      auVar11._12_4_ = uVar41;
      *(undefined1 (*) [16])((longlong)&(this->MarchingCubes).Bounds.Max.field0_0x0 + 8) = auVar11;
      if (this->bUseCustomBounds == false) {
        dVar15 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X - dVar3;
        dVar14 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y - dVar3;
        dVar33 = dVar3 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X;
        dVar35 = (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z - dVar3;
        dVar34 = dVar3 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X = dVar15;
        dVar3 = dVar3 + (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar33;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar14;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar34;
        (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar35;
        (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar3;
        if (param_2 < 0.0) {
          dVar8 = this->NarrowBandMaxDistance;
          dVar33 = dVar33 + dVar8;
          dVar34 = dVar8 + dVar34;
          dVar3 = dVar8 + dVar3;
          dVar15 = dVar15 - dVar8;
          dVar14 = dVar14 - dVar8;
          dVar35 = dVar35 - dVar8;
          (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.X = dVar33;
          (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Y = dVar34;
          (this->MarchingCubes).Bounds.Max.field0_0x0._s_0.Z = dVar3;
          (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.X = dVar15;
          (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Y = dVar14;
          (this->MarchingCubes).Bounds.Min.field0_0x0._s_0.Z = dVar35;
        }
        dVar8 = (this->MarchingCubes).CubeSize;
        dVar16 = dVar3 - dVar35;
        if (dVar3 - dVar35 <= 0.0) {
          dVar16 = dVar4;
        }
        dVar35 = dVar34 - dVar14;
        if (dVar34 - dVar14 <= 0.0) {
          dVar35 = dVar4;
        }
        dVar34 = dVar33 - dVar15;
        if (dVar33 - dVar15 <= 0.0) {
          dVar34 = dVar4;
        }
        if (dVar16 <= dVar35) {
          dVar16 = dVar35;
        }
        if (dVar16 <= dVar34) {
          dVar16 = dVar34;
        }
        if (dVar8 * dVar18 < dVar8 + dVar16) {
          dVar8 = dVar16 * ___real_3f4b5456423040e8;
        }
        (this->MarchingCubes).CubeSize = dVar8;
      }
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar27 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar7 = *(code **)&this->CancelF;
      if (plVar27 != (longlong *)0x0) {
        plVar28 = plVar27;
      }
      uVar24 = (**(code **)(*plVar28 + 8))(plVar28);
      cVar22 = (*pcVar7)(uVar24);
      if (cVar22 == '\0') {
        local_108 = (code *)0x0;
        puVar25 = FMemory::Malloc(0x48,8);
        puVar25[1] = local_368._0_8_;
        puVar25[2] = local_368._8_8_;
        *puVar25 = &
                   ___7__TFunction_OwnedObject_V<lambda_1>__1__ComputeSecondPass___TImplicitMorphology_VFDynamicMesh3_Geometry_UE___Geometry_UE__IEAAXNN_Z__0A__00_Function_Private_Core_UE__6B_
        ;
        auVar12._8_4_ = SUB84((double)local_268._s_0.Z,0);
        auVar12._0_8_ = (double)local_268._s_0.Y;
        auVar12._12_4_ = (int)((ulonglong)(double)local_268._s_0.Z >> 0x20);
        *(undefined1 (*) [16])(puVar25 + 3) = auVar12;
        auVar13._8_4_ = uVar19;
        auVar13._0_8_ = dVar32;
        auVar13._12_4_ = uVar20;
        *(undefined1 (*) [16])(puVar25 + 5) = auVar13;
        puVar25[7] = CONCAT44(uStack_334,local_338);
        puVar25[8] = uStack_330;
        lVar5 = *(longlong *)&(this->MarchingCubes).Implicit;
        uVar24 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8;
        if (puVar25 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_108 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass'::__l2::<lambda_1>,double,UE::Math::TVector<double>_>
                      ::Call;
        }
        uVar40 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x10;
        uVar41 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x14;
        uVar36 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x18;
        uVar37 = *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x1c;
        uVar17 = *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x20;
        plVar28 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
        *(code **)&(this->MarchingCubes).Implicit = local_108;
        *(undefined8 *)&(this->MarchingCubes).Implicit.field_0x8 = uStack_100;
        uStack_e0._0_4_ = SUB84(puVar25,0);
        uStack_e0._4_4_ = (undefined4)((ulonglong)puVar25 >> 0x20);
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x10 = local_f8;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x14 = uStack_f4;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x18 = uStack_f0;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x1c = uStack_ec;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x20 = (undefined4)local_e8;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x24 = local_e8._4_4_;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x28 = (undefined4)uStack_e0;
        *(undefined4 *)&(this->MarchingCubes).Implicit.field_0x2c = uStack_e0._4_4_;
        local_108 = (code *)lVar5;
        uStack_100 = uVar24;
        local_f8 = uVar40;
        uStack_f4 = uVar41;
        uStack_f0 = uVar36;
        uStack_ec = uVar37;
        local_e8 = uVar17;
        uStack_e0 = plVar28;
        if (lVar5 != 0) {
          plVar27 = (longlong *)&local_f8;
          if (plVar28 != (longlong *)0x0) {
            plVar27 = plVar28;
          }
          (**(code **)(*plVar27 + 0x10))();
        }
        (this->MarchingCubes).bEnableValueCaching = false;
        if (CpuChannel->Enabled < 0) {
          (**(code **)(this_00->_padding_ + 8))(this_00);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                      ::__l30::__CpuProfilerEventSpecId304,
                     "Geometry_Morphology_SecondPass_GenerateMesh",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
                     ,0x130);
          FCpuProfilerTrace::OutputBeginEvent
                    (`protected:_void___cdecl_UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass(double,double)___ptr64'
                     ::__l30::__CpuProfilerEventSpecId304);
          (**(code **)(this_00->_padding_ + 8))(this_00);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (*(longlong *)&(this->MarchingCubes).Implicit != 0) {
          plVar28 = *(longlong **)&(this->MarchingCubes).Implicit.field_0x28;
          plVar27 = (longlong *)&(this->MarchingCubes).Implicit.field_0x10;
          if (plVar28 != (longlong *)0x0) {
            plVar27 = plVar28;
          }
          (**(code **)(*plVar27 + 0x10))();
          *(undefined8 *)&(this->MarchingCubes).Implicit = 0;
        }
      }
    }
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>
              (local_1d8,(int)local_1d0);
    if (local_1d8 != (FBlock3 *)0x0) {
      FMemory::Free(local_1d8);
    }
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<int,8>::FBlock3,int>
              (local_208,(int)local_200);
    if (local_208 != (FBlock3 *)0x0) {
      FMemory::Free(local_208);
    }
    DestructItems<UE::Geometry::TBasicBlockedDenseGrid3<float,8>::FBlock3,int>
              (local_238,(int)local_230);
    if (local_238 != (FBlock3 *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_298 != (code *)0x0) {
      pppuVar29 = &local_288;
      if (local_270 != (undefined ***)0x0) {
        pppuVar29 = local_270;
      }
      (*(code *)(*pppuVar29)[2])();
    }
    if (local_328._16_8_ != 0) {
      plVar28 = (longlong *)(local_328 + 0x20);
      if (local_2f0 != (longlong *)0x0) {
        plVar28 = local_2f0;
      }
      (**(code **)(*plVar28 + 0x10))();
    }
    TDynamicVector<int,512>::Empty(&local_128,0);
    if (local_128.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_140,0);
    if (local_140.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_158,0);
    if (local_158.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Blocks.AllocatorInstance.Data);
    }
    TDynamicVector<int,512>::Empty(&local_170,0);
    if (local_170.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Blocks.AllocatorInstance.Data);
    }
    if ((code *)local_1c8._32_8_ != (code *)0x0) {
      pppuVar29 = &local_198;
      if (local_180 != (undefined ***)0x0) {
        pppuVar29 = local_180;
      }
      (*(code *)(*pppuVar29)[2])();
    }
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

