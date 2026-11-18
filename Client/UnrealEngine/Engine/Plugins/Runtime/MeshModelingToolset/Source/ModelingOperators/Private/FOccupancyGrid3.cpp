// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// FOccupancyGrid3<UE::Geometry::FDynamicMesh3> @ 14c940ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FOccupancyGrid3 * __thiscall
UE::Geometry::FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>
          (FOccupancyGrid3 *this,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  ulong64 uVar13;
  FOccupancyGrid3 *pFVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined1 auStackY_398 [32];
  <lambda_1> local_358;
  undefined1 local_350 [32];
  undefined1 local_330 [32];
  ulong64 local_310;
  double local_308;
  int local_300;
  FOccupancyGrid3 *local_2f8;
  undefined1 *local_2f0;
  TArrayView<std::nullptr_t,int> local_2e8;
  code *local_2d8;
  FOccupancyGrid3 **local_2d0;
  double local_2b8;
  undefined1 local_2a8 [64];
  undefined **local_268;
  code *local_260;
  undefined ***local_250;
  TVector<float>_u_0 local_248;
  ForAnyElementType local_238;
  undefined8 local_230;
  FVector3i_u_0 local_228;
  undefined1 local_218 [112];
  undefined **local_1a8;
  code *local_1a0;
  undefined8 local_190;
  TVector<float>_u_0 local_188;
  ForAnyElementType local_178;
  undefined8 local_170;
  FVector3i_u_0 local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  FVector3i_u_0 local_148;
  ForAnyElementType local_138;
  undefined8 local_130;
  FVector3i_u_0 local_128;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_398;
  uVar22 = 0;
  (this->Occupancy).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Occupancy).Buffer.ArrayNum = 0;
  (this->Occupancy).Buffer.ArrayMax = 0;
  *(undefined8 *)&(this->Occupancy).Dimensions.field0_0x0 = 0;
  (this->Occupancy).Dimensions.field0_0x0._s_0.Z = 0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_118,param_1,true);
  local_330._0_8_ = &local_118;
  local_308 = __real_4000000000000000;
  local_330._8_8_ = (FScriptContainerElement *)0x0;
  local_330._16_4_ = 0;
  local_330._20_4_ = 0;
  local_330._24_4_ = 0.0;
  local_310 = 0;
  local_300 = 2;
  if ((local_118.RootIndex < 0) ||
     (uVar13 = FDynamicMesh3::GetChangeStamp(local_118.Mesh), local_118.MeshChangeStamp != uVar13))
  {
    uVar11 = local_330._0_8_;
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_330._0_8_,false);
    uVar13 = FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(uVar11 + 8));
    *(ulong64 *)(uVar11 + 0x10) = uVar13;
  }
  TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
            ((TFastWindingTree<UE::Geometry::FDynamicMesh3> *)local_330);
  local_310 = *(ulong64 *)(local_330._0_8_ + 0x10);
  if (local_118.RootIndex < 0) {
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    dVar29 = __real_7fefffffffffffff;
    dVar31 = __real_ffefffffffffffff;
    dVar32 = __real_ffefffffffffffff;
    dVar2 = __real_7fefffffffffffff;
    dVar9 = __real_7fefffffffffffff;
    dVar25 = __real_ffefffffffffffff;
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FOccupancyGrid3 *)(*pcVar8)();
      return pFVar14;
    }
  }
  else {
    uVar15 = (ulonglong)(local_118.RootIndex & 0x1ff);
    lVar7 = *(longlong *)
             (local_118.BoxCenters.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_118.RootIndex >> 9) * 8);
    dVar25 = *(double *)(lVar7 + uVar15 * 0x18);
    lVar5 = *(longlong *)
             (local_118.BoxExtents.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)local_118.RootIndex >> 9) * 8);
    dVar2 = *(double *)(lVar7 + 8 + uVar15 * 0x18);
    dVar32 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
    dVar29 = dVar32 - *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
    dVar31 = dVar32 + *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
    dVar32 = dVar2 + *(double *)(lVar5 + 8 + uVar15 * 0x18);
    dVar2 = dVar2 - *(double *)(lVar5 + 8 + uVar15 * 0x18);
    dVar9 = dVar25 - *(double *)(lVar5 + uVar15 * 0x18);
    dVar25 = dVar25 + *(double *)(lVar5 + uVar15 * 0x18);
  }
  fVar10 = __real_3f000000;
  dVar25 = dVar25 - dVar9;
  dVar32 = dVar32 - dVar2;
  dVar31 = dVar31 - dVar29;
  if (dVar25 <= 0.0) {
    dVar25 = 0.0;
  }
  if (dVar32 <= 0.0) {
    dVar32 = 0.0;
  }
  if (dVar31 <= 0.0) {
    dVar31 = 0.0;
  }
  local_2a8._8_8_ = local_330;
  if (dVar32 <= dVar31) {
    dVar32 = dVar31;
  }
  if (dVar32 <= dVar25) {
    dVar32 = dVar25;
  }
  local_218._16_4_ = (undefined4)(dVar32 / (double)param_2);
  this->CellSize = (float)local_218._16_4_;
  fVar24 = (float)local_218._16_4_ * fVar10;
  (this->CellMidPoint).field0_0x0._s_0.X = fVar24;
  (this->CellMidPoint).field0_0x0._s_0.Y = fVar24;
  (this->CellMidPoint).field0_0x0._s_0.Z = fVar24;
  local_2a8._16_8_ = (undefined8)(float)local_218._16_4_;
  local_260 = TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::<lambda_42_>::
              <lambda_invoker_cdecl>;
  local_218._8_8_ = local_330._0_8_;
  local_2a8._48_8_ = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  local_218._96_8_ = Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  local_218._64_8_ = 0.0;
  local_218._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_218._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2a8._24_4_ = 1;
  local_218._40_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2a8._28_4_ = NarrowBand;
  local_2a8._32_4_ = 0.5;
  local_2a8[0x24] = true;
  local_250 = (undefined ***)0x0;
  local_268 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230._0_4_ = 0;
  local_230._4_4_ = 0;
  local_228._0_8_ = 0;
  local_228._s_0.Z = 0;
  local_218._20_4_ = 1;
  local_218[0x30] = true;
  local_218._52_4_ = 0x1000;
  local_218._56_4_ = NarrowBandOnly;
  local_218[0x48] = true;
  local_218._76_4_ = WindingCount;
  local_218[0x50] = false;
  local_218[0x51] = false;
  local_190 = 0;
  local_1a8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_1a0 = TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::<lambda_44_>::<lambda_invoker_cdecl>;
  local_188._0_8_ = 0;
  local_188._s_0.Z = 0.0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170._0_4_ = 0;
  local_170._4_4_ = 0;
  local_168._0_8_ = 0;
  local_168._s_0.Z = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150._0_4_ = 0;
  local_150._4_4_ = 0;
  local_148._0_8_ = 0;
  local_148._s_0.Z = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130._0_4_ = 0;
  local_130._4_4_ = 0;
  local_128._0_8_ = 0;
  local_128._s_0.Z = 0;
  local_2a8._0_8_ = param_1;
  local_218._0_8_ = param_1;
  TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3>::Compute
            ((TMeshWindingNumberGrid<UE::Geometry::FDynamicMesh3> *)local_2a8);
  local_350._0_8_ = (FScriptContainerElement *)0x0;
  local_350._8_4_ = 0;
  local_350._12_4_ = 0;
  local_350._16_8_ = 0;
  local_350._24_4_ = 0;
  TDenseGrid3<enum_UE::Geometry::FOccupancyGrid3::EDomain>::Resize
            (local_350,(int)local_228._0_8_ + -1,(int)((ulonglong)local_228._0_8_ >> 0x20) + -1,
             local_228._s_0.Z + -1,Default);
  uVar15 = uVar22;
  uVar19 = uVar22;
  if (0 < (int)local_350._8_4_) {
    do {
      uVar17 = (uint)uVar19;
      uVar23 = 0;
      if ((int)uVar17 < (int)local_350._8_4_) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FOccupancyGrid3 *)(*pcVar8)();
        return pFVar14;
      }
      *(undefined4 *)(local_350._0_8_ + uVar15) = 0;
      uVar15 = uVar15 + 4;
      uVar19 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < (int)local_350._8_4_);
  }
  if (this != (FOccupancyGrid3 *)local_350) {
    pFVar6 = (this->Occupancy).Buffer.AllocatorInstance.Data;
    iVar18 = local_350._8_4_;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
      iVar18 = local_350._8_4_;
    }
    (this->Occupancy).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)local_350._0_8_;
    (this->Occupancy).Buffer.ArrayMax = local_350._12_4_;
    local_350._8_4_ = 0;
    local_350._12_4_ = 0;
    local_350._0_8_ = (FScriptContainerElement *)0x0;
    (this->Occupancy).Buffer.ArrayNum = iVar18;
  }
  *(undefined8 *)&(this->Occupancy).Dimensions.field0_0x0 = local_350._16_8_;
  (this->Occupancy).Dimensions.field0_0x0._s_0.Z = local_350._24_4_;
  if ((FScriptContainerElement *)local_350._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_350._0_8_);
  }
  local_2f0 = local_2a8;
  fVar24 = (this->CellMidPoint).field0_0x0._s_0.Y;
  fVar26 = (this->CellMidPoint).field0_0x0._s_0.Z;
  (this->GridOrigin).field0_0x0._s_0.X = local_248._s_0.X + (this->CellMidPoint).field0_0x0._s_0.X;
  (this->GridOrigin).field0_0x0._s_0.Y = local_248._s_0.Y + fVar24;
  (this->GridOrigin).field0_0x0._s_0.Z = local_248._s_0.Z + fVar26;
  local_2d8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
              ::Call;
  local_2d0 = &local_2f8;
  local_2e8.DataPtr = (void **)0x0;
  local_2e8.ArrayNum = 0;
  local_2f8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Occupancy).Dimensions.field0_0x0._s_0.X *
             (this->Occupancy).Dimensions.field0_0x0._s_0.Y *
             (this->Occupancy).Dimensions.field0_0x0._s_0.Z,1,
             (TFunctionRef<void___cdecl(int)> *)&local_2d8,local_358,None,&local_2e8);
  fVar24 = __real_3f800000;
  if (0 < (param_1->VertexRefCounts).UsedCount) {
    do {
      uVar15 = (ulonglong)((uint)uVar22 & 0x1ff);
      lVar7 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar22 >> 9) * 8);
      local_2b8 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
      pdVar1 = (double *)(lVar7 + uVar15 * 0x18);
      fVar30 = (float)local_2b8 - (this->GridOrigin).field0_0x0._s_0.Z;
      fVar27 = (float)*pdVar1 - (this->GridOrigin).field0_0x0._s_0.X;
      fVar26 = fVar24 / this->CellSize;
      fVar28 = (float)pdVar1[1] - (this->GridOrigin).field0_0x0._s_0.Y;
      iVar18 = (int)ROUND((fVar30 + fVar30) * fVar26 - fVar10) >> 1;
      iVar21 = (int)ROUND((fVar28 + fVar28) * fVar26 - fVar10) >> 1;
      iVar20 = (int)ROUND((fVar27 + fVar27) * fVar26 - fVar10) >> 1;
      if (((((iVar20 < 0) || (iVar21 < 0)) || (iVar18 < 0)) ||
          ((iVar3 = (this->Occupancy).Dimensions.field0_0x0._s_0.X, iVar3 <= iVar20 ||
           (iVar4 = (this->Occupancy).Dimensions.field0_0x0._s_0.Y, iVar4 <= iVar21)))) ||
         ((this->Occupancy).Dimensions.field0_0x0._s_0.Z <= iVar18)) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1641990963905691559>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\OccupancyGrid3.h"
                            ,0x59,"Occupancy.IsValidIndex(OccupancyIndex)");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          pFVar14 = (FOccupancyGrid3 *)(*pcVar8)();
          return pFVar14;
        }
      }
      else {
        uVar17 = (iVar21 + iVar4 * iVar18) * iVar3 + iVar20;
        uVar23 = 0;
        if ((int)uVar17 < (this->Occupancy).Buffer.ArrayNum) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pFVar14 = (FOccupancyGrid3 *)(*pcVar8)();
          return pFVar14;
        }
        if (*(int *)((this->Occupancy).Buffer.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) ==
            0) {
          uVar17 = (iVar18 * (this->Occupancy).Dimensions.field0_0x0._s_0.Y + iVar21) *
                   (this->Occupancy).Dimensions.field0_0x0._s_0.X + iVar20;
          uVar23 = 0;
          if ((int)uVar17 < (this->Occupancy).Buffer.ArrayNum) {
            uVar23 = ~uVar17 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            pFVar14 = (FOccupancyGrid3 *)(*pcVar8)();
            return pFVar14;
          }
          *(undefined4 *)
           ((this->Occupancy).Buffer.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = 1;
        }
      }
      uVar23 = (uint)uVar22 + 1;
      uVar22 = (ulonglong)uVar23;
    } while ((int)uVar23 < (param_1->VertexRefCounts).UsedCount);
  }
  TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::~TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>
            ((TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *)local_218);
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data);
  }
  if ((code *)local_2a8._48_8_ != (code *)0x0) {
    pppuVar16 = &local_268;
    if (local_250 != (undefined ***)0x0) {
      pppuVar16 = local_250;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((FScriptContainerElement *)local_330._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_330._8_8_);
  }
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_118);
  return this;
}

// operator() @ 14c94a620

void __thiscall
`UE::Geometry::FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FVector3i **ppFVar13;
  int iVar14;
  int iVar15;
  
  lVar2 = *(longlong *)this;
  ppFVar13 = &`public:___cdecl_UE::Geometry::FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>(UE::Geometry::FDynamicMesh3_const&___ptr64,int)___ptr64'
              ::__l2::CornerOffsets;
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar5 = (longlong)param_1 / (longlong)*(int *)(lVar2 + 0x10);
  iVar14 = param_1 % *(int *)(lVar2 + 0x10);
  iVar1 = *(int *)(lVar2 + 0x14);
  iVar10 = param_1 / (iVar1 * *(int *)(lVar2 + 0x10));
  iVar12 = 0;
  do {
    iVar15 = (int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) %
                  (longlong)iVar1);
    uVar11 = ((int)((ulonglong)*ppFVar13 >> 0x20) +
             (*(int *)(ppFVar13 + 1) + iVar10) * *(int *)(lVar3 + 0x84) + iVar15) *
             *(int *)(lVar3 + 0x80) + iVar14 + (int)*ppFVar13;
    uVar9 = 0;
    if ((int)uVar11 < *(int *)(lVar3 + 0x78)) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar7 = iVar12 + 1;
    if (*(float *)(*(longlong *)(lVar3 + 0x70) + (longlong)(int)uVar11 * 4) <
        *(float *)(lVar3 + 0x20)) {
      iVar7 = iVar12;
    }
    iVar12 = iVar7;
    ppFVar13 = (FVector3i **)((longlong)ppFVar13 + 0xc);
  } while (ppFVar13 != (FVector3i **)"Occupancy.IsValidIndex(OccupancyIndex)");
  if (iVar12 == 8) {
    plVar4 = *(longlong **)this;
    uVar11 = (iVar10 * *(int *)((longlong)plVar4 + 0x14) + iVar15) * (int)plVar4[2] + iVar14;
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(undefined4 *)(*plVar4 + (longlong)(int)uVar11 * 4) = 2;
  }
  else if (0 < iVar12) {
    plVar4 = *(longlong **)this;
    uVar11 = (iVar10 * *(int *)((longlong)plVar4 + 0x14) + iVar15) * (int)plVar4[2] + iVar14;
    uVar9 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(undefined4 *)(*plVar4 + (longlong)(int)uVar11 * 4) = 1;
  }
  return;
}

