// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// operator() @ 14c9540d0

bool __thiscall
`UE::Geometry::FCurveSweepOp::CalculateResult'::__l39::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)this;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)param_3;
  uVar8 = 0;
  if (param_2 < (int)plVar1[1]) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)this;
  lVar3 = *plVar1;
  uVar8 = 0;
  if (param_3 < (int)plVar2[1]) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *plVar2;
  return (double)**(float **)((longlong)this + 8) <
         *(double *)(lVar4 + 8 + lVar10 * 0x18) * *(double *)(lVar3 + 8 + lVar9 * 0x18) +
         *(double *)(lVar3 + lVar9 * 0x18) * *(double *)(lVar4 + lVar10 * 0x18) +
         *(double *)(lVar4 + 0x10 + lVar10 * 0x18) * *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
}

// CalculateResult @ 14c962930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FCurveSweepOp::CalculateResult(FCurveSweepOp *this,FProgressCancel *param_1)

{
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  TArray<UE::Geometry::TDynamicVector<float,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined4 uVar5;
  ECapFillMode EVar6;
  code *pcVar7;
  longlong *plVar8;
  FDynamicMesh3 *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  float fVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ForAnyElementType FVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  bool bVar23;
  int iVar24;
  undefined8 uVar25;
  TDynamicMeshOverlay<float,3> *pTVar26;
  TDynamicMeshOverlay<float,3> *pTVar27;
  TVector2<float>_u_0 *pTVar28;
  TAxisAlignedBox3<double> *pTVar29;
  longlong *plVar30;
  undefined ***pppuVar31;
  longlong lVar32;
  TDynamicMeshOverlay<float,3> *pTVar33;
  TVector2<float>_u_0 *pTVar34;
  float fVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auStackY_548 [32];
  float local_508 [2];
  ForAnyElementType local_500;
  undefined8 local_4f8;
  FEdgeLoop local_4e8;
  FDynamicMeshEditor local_4a8;
  FDynamicMesh3 *local_4a0;
  ForAnyElementType local_498;
  int local_490;
  int local_48c;
  ForAnyElementType local_488;
  uint local_480;
  int local_47c;
  ForAnyElementType local_478;
  int local_470;
  int local_46c;
  undefined1 local_468;
  FDynamicMesh3 *local_460;
  ForAnyElementType local_458;
  int local_450;
  int local_44c;
  ForAnyElementType local_448;
  uint local_440;
  int local_43c;
  ForAnyElementType local_438;
  int local_430;
  int local_42c;
  undefined1 local_428;
  TArray<int,TSizedDefaultAllocator<32>_> local_420;
  TVector<double>_u_0 local_410;
  FMeshNormals local_3f8;
  TVector2<float>_u_0 local_3e0;
  TVector2<float>_u_0 local_3d8;
  TVector2<float>_u_0 local_3d0;
  TVector2<float>_u_0 local_3c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3c0;
  TVector<double>_u_0 local_3b0;
  code *local_398;
  undefined **local_388;
  code *local_380;
  undefined ***local_370;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_368;
  float *local_360;
  code *local_358;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **local_350;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_330;
  TQuaternion<double>_u_0 local_318;
  TVector<double>_u_0 local_2f8 [3];
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  TAxisAlignedBox3<double> local_290;
  undefined1 local_258 [160];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1b8;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  ForAnyElementType local_198;
  undefined8 local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_188;
  TVector2<double>_u_0 local_138;
  TVector2<double>_u_0 local_128;
  bool local_118;
  float local_114;
  undefined4 local_110;
  EProfileSweepQuadSplit local_10c;
  double local_108;
  EProfileSweepPolygonGrouping local_100;
  FProgressCancel *local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_f0;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_548;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar7 = *(code **)&param_1->CancelF;
    plVar8 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar30 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar30 = plVar8;
    }
    uVar25 = (**(code **)(*plVar30 + 8))();
    bVar23 = (bool)(*pcVar7)(uVar25);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  pTVar33 = (TDynamicMeshOverlay<float,3> *)0x0;
  if ((this->SweepCurve).ArrayNum < (int)((this->bSweepCurveIsClosed != false) + 2)) {
LAB_14c963b1d:
    FDynamicMesh3::Clear((FDynamicMesh3 *)this->_padding_);
    return;
  }
  iVar24 = (this->ProfileCurve).ArrayNum;
  if ((iVar24 < (int)((this->bProfileCurveIsClosed != false) + 2)) ||
     (iVar24 <= *(int *)&(this->ProfileVerticesToWeld).Elements.field_0x8 -
                *(int *)&(this->ProfileVerticesToWeld).Elements.field_0x34)) goto LAB_14c963b1d;
  local_138._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_138._s_0.Y = _UNK_150689688;
  local_128._s_0.X = 0.0;
  local_128._s_0.Y = 0.0;
  local_108 = __real_3f847ae147ae147b;
  local_258._8_8_ = (FScriptContainerElement *)0x0;
  local_258._16_8_ = 0;
  local_258._24_8_ = (FScriptContainerElement *)0x0;
  local_258._32_8_ = 0;
  local_258._40_8_ = (FScriptContainerElement *)0x0;
  local_258._48_8_ = 0;
  local_258._56_8_ = (FScriptContainerElement *)0x0;
  local_258._64_8_ = 0;
  local_258._72_8_ = (FScriptContainerElement *)0x0;
  local_258._80_8_ = 0;
  local_258._88_8_ = (FScriptContainerElement *)0x0;
  local_258._96_8_ = 0;
  local_258._104_8_ = (FScriptContainerElement *)0x0;
  local_258._112_8_ = 0;
  local_258._120_8_ = (FScriptContainerElement *)0x0;
  local_258._128_8_ = 0;
  local_258._136_8_ = (FScriptContainerElement *)0x0;
  local_258._144_8_ = 0;
  local_258[0x98] = false;
  local_258._0_8_ = &___7FProfileSweepGenerator_Geometry_UE__6B_;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = 0;
  local_190._4_4_ = 0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._44_4_ = 0x80;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  local_118 = false;
  local_114 = 100.0;
  local_110._0_1_ = false;
  local_110._1_1_ = false;
  local_110._2_1_ = true;
  local_110._3_1_ = true;
  local_10c = ShortestDiagonal;
  local_100 = PerFace;
  local_f8 = (FProgressCancel *)0x0;
  TStack_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_f0.ArrayNum = 0;
  TStack_f0.ArrayMax = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&local_1b8,&this->ProfileCurve);
  if ((TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)&local_1a8 !=
      &this->SweepCurve) {
    iVar24 = (this->SweepCurve).ArrayNum;
    pFVar36 = (this->SweepCurve).AllocatorInstance.Data;
    local_1a0._0_4_ = iVar24;
    if ((iVar24 == 0) && (local_1a0._4_4_ == 0)) {
      local_1a0._0_4_ = 0;
      local_1a0._4_4_ = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar24,local_1a0._4_4_,&local_1a8,iVar24,(int *)((longlong)&local_1a0 + 4));
      if (iVar24 != 0) {
        memcpy(local_1a8.Data,pFVar36,(longlong)iVar24 * 0x38);
      }
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_188,&this->ProfileVerticesToWeld);
  local_138._s_0.X = (this->UVScale).field0_0x0._s_0.X;
  local_138._s_0.Y = (this->UVScale).field0_0x0._s_0.Y;
  local_110._1_1_ = this->bProfileCurveIsClosed;
  local_110._0_1_ = this->bSweepCurveIsClosed;
  local_110._2_1_ = this->bSharpNormals;
  local_118 = this->bUVScaleRelativeWorld;
  local_114 = (float)this->UnitUVInWorldCoordinates;
  local_110._3_1_ = this->bUVsSkipFullyWeldedEdges;
  local_100 = this->PolygonGroupingMode;
  local_10c = this->QuadSplitMode;
  local_128._s_0.X = (this->UVOffset).field0_0x0._s_0.X;
  local_128._s_0.Y = (this->UVOffset).field0_0x0._s_0.Y;
  local_108 = this->DiagonalTolerance;
  FProfileSweepGenerator::Generate((FProfileSweepGenerator *)local_258);
  if ((param_1 != (FProgressCancel *)0x0) && (bVar23 = FProgressCancel::Cancelled(param_1), bVar23))
  goto LAB_14c963b07;
  FDynamicMesh3::Copy((FDynamicMesh3 *)this->_padding_,(FMeshShapeGenerator *)local_258);
  dVar12 = _UNK_15076c718;
  dVar11 = ___xmm_bff0000000000000bff0000000000000;
  fVar14 = __real_3f800000;
  dVar10 = __real_3ff0000000000000;
  if ((this->bProfileCurveIsClosed != false) &&
     ((this->bSweepCurveIsClosed == false && (this->CapFillMode != None)))) {
    local_508[0] = 0.0;
    pTVar27 = pTVar33;
    do {
      fVar35 = SUB84(pTVar27,0);
      if (param_1 != (FProgressCancel *)0x0) {
        if (param_1->WasCancelled != false) goto LAB_14c963b07;
        Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
        plVar8 = *(longlong **)&(param_1->CancelF).field_0x28;
        pcVar7 = *(code **)&param_1->CancelF;
        plVar30 = (longlong *)&(param_1->CancelF).field_0x10;
        if (plVar8 != (longlong *)0x0) {
          plVar30 = plVar8;
        }
        uVar25 = (**(code **)(*plVar30 + 8))();
        bVar23 = (bool)(*pcVar7)(uVar25);
        param_1->WasCancelled = bVar23;
        if (bVar23 != false) goto LAB_14c963b07;
      }
      local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_420.ArrayNum = 0;
      local_420.ArrayMax = 0;
      FEdgeLoop::VertexLoopToEdgeLoop
                ((FDynamicMesh3 *)this->_padding_,&TStack_f0 + (int)fVar35,&local_420);
      local_4e8.Mesh = (FDynamicMesh3 *)this->_padding_;
      local_4e8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.Vertices.ArrayNum = 0;
      local_4e8.Vertices.ArrayMax = 0;
      local_4e8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.Edges.ArrayNum = 0;
      local_4e8.Edges.ArrayMax = 0;
      local_4e8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.BowtieVertices.ArrayNum = 0;
      local_4e8.BowtieVertices.ArrayMax = 0;
      local_4e8.bBowtiesCalculated = false;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&local_4e8.Vertices,&TStack_f0 + (int)fVar35);
      FVar18.Data = local_420.AllocatorInstance.Data;
      iVar24 = local_420.ArrayNum;
      lVar32 = (longlong)local_420.ArrayNum;
      local_4e8.Edges.ArrayNum = local_420.ArrayNum;
      if ((local_420.ArrayNum == 0) && (local_4e8.Edges.ArrayMax == 0)) {
        local_4e8.Edges._8_8_ = local_420._8_8_ & 0xffffffff;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_420.ArrayNum,local_4e8.Edges.ArrayMax,
                   &local_4e8.Edges.AllocatorInstance,local_420.ArrayNum,&local_4e8.Edges.ArrayMax);
        if (iVar24 != 0) {
          memcpy(local_4e8.Edges.AllocatorInstance.Data,FVar18.Data,lVar32 << 2);
        }
      }
      if (fVar35 == 0.0) {
        if (0 < local_4e8.Vertices.ArrayNum / 2) {
          pFVar36 = local_4e8.Vertices.AllocatorInstance.Data +
                    (longlong)(local_4e8.Vertices.ArrayNum + -1) * 4;
          pTVar27 = pTVar33;
          do {
            uVar5 = *(undefined4 *)
                     (local_4e8.Vertices.AllocatorInstance.Data + (longlong)pTVar27 * 4);
            *(undefined4 *)(local_4e8.Vertices.AllocatorInstance.Data + (longlong)pTVar27 * 4) =
                 *(undefined4 *)pFVar36;
            pTVar27 = (TDynamicMeshOverlay<float,3> *)((longlong)&pTVar27->ParentMesh + 1);
            *(undefined4 *)pFVar36 = uVar5;
            pFVar36 = pFVar36 + -4;
          } while ((longlong)pTVar27 < (longlong)(local_4e8.Vertices.ArrayNum / 2));
        }
        if (0 < local_4e8.Edges.ArrayNum / 2) {
          pFVar36 = local_4e8.Edges.AllocatorInstance.Data +
                    (longlong)(local_4e8.Edges.ArrayNum + -1) * 4;
          pTVar27 = pTVar33;
          do {
            uVar5 = *(undefined4 *)(local_4e8.Edges.AllocatorInstance.Data + (longlong)pTVar27 * 4);
            *(undefined4 *)(local_4e8.Edges.AllocatorInstance.Data + (longlong)pTVar27 * 4) =
                 *(undefined4 *)pFVar36;
            pTVar27 = (TDynamicMeshOverlay<float,3> *)((longlong)&pTVar27->ParentMesh + 1);
            *(undefined4 *)pFVar36 = uVar5;
            pFVar36 = pFVar36 + -4;
          } while ((longlong)pTVar27 < (longlong)(local_4e8.Edges.ArrayNum / 2));
        }
      }
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.ArrayNum = 0;
      local_3c0.ArrayMax = 0;
      FEdgeLoop::GetVertices<UE::Math::TVector<double>_>(&local_4e8,&local_3c0);
      PolygonTriangulation::ComputePolygonPlane<double>
                (&local_3c0,(TVector<double> *)&local_410._s_0,(TVector<double> *)&local_3b0._s_0);
      EVar6 = this->CapFillMode;
      local_500.Data = (FScriptContainerElement *)0x0;
      local_4f8 = 0;
      local_410._s_0.X = local_410._s_0.X * dVar11;
      local_410._s_0.Y = local_410._s_0.Y * dVar12;
      local_410._s_0.Z = local_410._s_0.Z * dVar11;
      if (EVar6 == Delaunay) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_500,(int *)((longlong)&local_4f8 + 4));
        FVar18.Data = local_4e8.Vertices.AllocatorInstance.Data;
        pFVar36 = local_500.Data + (longlong)iVar24 * 0x10;
        local_4f8 = CONCAT44(local_4f8._4_4_,iVar24 + 1);
        *(FScriptContainerElement **)&pFVar36->field_0x0 = (FScriptContainerElement *)0x0;
        lVar32 = (longlong)local_4e8.Vertices.ArrayNum;
        *(int *)(pFVar36 + 8) = local_4e8.Vertices.ArrayNum;
        if (local_4e8.Vertices.ArrayNum == 0) {
          *(int *)(pFVar36 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_4e8.Vertices.ArrayNum,0,(ForAnyElementType *)pFVar36,
                     local_4e8.Vertices.ArrayNum,(int *)(pFVar36 + 0xc));
          memcpy(*(FScriptContainerElement **)&pFVar36->field_0x0,FVar18.Data,lVar32 << 2);
        }
        uVar5 = *(undefined4 *)&this->_padding_;
        uVar13 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        pTVar27 = ::operator_new(0x90);
        uVar21 = local_3b0._s_0.Z;
        uVar20 = local_3b0._s_0.Y;
        uVar19 = local_3b0._s_0.X;
        uVar17 = local_410._s_0.Z;
        uVar16 = local_410._s_0.Y;
        uVar25 = local_410._s_0.X;
        if (pTVar27 == (TDynamicMeshOverlay<float,3> *)0x0) {
          pTVar27 = (TDynamicMeshOverlay<float,3> *)0x0;
        }
        else {
          local_370 = (undefined ***)0x0;
          local_388 = &
                      ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_380 = ConstrainedDelaunayTriangulate<double>;
          local_398 = Core::Private::Function::
                      TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                      ::Call;
          pTVar27->ParentMesh = (FDynamicMesh3 *)&___7FPlanarHoleFiller_Geometry_UE__6B_;
          *(ForAnyElementType **)&(pTVar27->ElementsRefCounts).FreeIndices = &local_500;
          (pTVar27->ElementsRefCounts).RefCounts.CurBlock = 0;
          (pTVar27->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
          (pTVar27->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pTVar27->ElementsRefCounts).RefCounts.Blocks.ArrayNum = uVar5;
          (pTVar27->ElementsRefCounts).RefCounts.Blocks.ArrayMax = uVar13;
          *(code **)&(pTVar27->ElementsRefCounts).FreeIndices.Blocks.ArrayNum =
               Core::Private::Function::
               TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
               ::Call;
          (pTVar27->ParentVertices).CurBlock = 0;
          (pTVar27->ParentVertices).CurBlockUsed = 0;
          (*(code *)
            ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
          )(&local_388);
          (pTVar27->ParentVertices).Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)uVar19;
          *(undefined8 *)&(pTVar27->ParentVertices).Blocks.ArrayNum = uVar20;
          (pTVar27->ElementTriangles).Blocks.AllocatorInstance.Data =
               (FScriptContainerElement *)uVar25;
          *(undefined8 *)&(pTVar27->ElementTriangles).Blocks.ArrayNum = uVar16;
          *(undefined8 *)&pTVar27->ElementTriangles = uVar21;
          pTVar27[1].ParentMesh = (FDynamicMesh3 *)uVar17;
          if (local_398 != (code *)0x0) {
            pppuVar31 = &local_388;
            if (local_370 != (undefined ***)0x0) {
              pppuVar31 = local_370;
            }
            (*(code *)(*pppuVar31)[2])();
          }
        }
      }
      else {
        pTVar27 = pTVar33;
        if (EVar6 == EarClipping) {
          uVar5 = *(undefined4 *)&this->_padding_;
          uVar13 = *(undefined4 *)((longlong)&this->_padding_ + 4);
          pTVar26 = ::operator_new(0x68);
          FVar18.Data = local_4e8.Vertices.AllocatorInstance.Data;
          fVar35 = local_508[0];
          if (pTVar26 != (TDynamicMeshOverlay<float,3> *)0x0) {
            lVar32 = (longlong)local_4e8.Vertices.ArrayNum;
            local_460 = local_4e8.Mesh;
            local_458.Data = (FScriptContainerElement *)0x0;
            local_450 = local_4e8.Vertices.ArrayNum;
            if (local_4e8.Vertices.ArrayNum == 0) {
              local_44c = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4e8.Vertices.ArrayNum,0,&local_458,local_4e8.Vertices.ArrayNum,
                         &local_44c);
              memcpy(local_458.Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_4e8.Edges.AllocatorInstance.Data;
            lVar32 = (longlong)local_4e8.Edges.ArrayNum;
            local_448.Data = (FScriptContainerElement *)0x0;
            local_440 = local_4e8.Edges.ArrayNum;
            if (local_4e8.Edges.ArrayNum == 0) {
              local_43c = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4e8.Edges.ArrayNum,0,&local_448,local_4e8.Edges.ArrayNum,
                         &local_43c);
              memcpy(local_448.Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_4e8.BowtieVertices.AllocatorInstance.Data;
            lVar32 = (longlong)local_4e8.BowtieVertices.ArrayNum;
            local_438.Data = (FScriptContainerElement *)0x0;
            local_430 = local_4e8.BowtieVertices.ArrayNum;
            if (local_4e8.BowtieVertices.ArrayNum == 0) {
              local_42c = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4e8.BowtieVertices.ArrayNum,0,&local_438,
                         local_4e8.BowtieVertices.ArrayNum,&local_42c);
              memcpy(local_438.Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_458.Data;
            pTVar1 = &(pTVar26->ElementsRefCounts).FreeIndices.Blocks;
            local_428 = local_4e8.bBowtiesCalculated;
            pTVar26->ParentMesh = (FDynamicMesh3 *)&___7FSimpleHoleFiller_Geometry_UE__6B_;
            (pTVar26->ElementsRefCounts).RefCounts.CurBlock = 0;
            (pTVar26->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
            (pTVar26->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar26->ElementsRefCounts).RefCounts.Blocks.ArrayNum = uVar5;
            (pTVar26->ElementsRefCounts).RefCounts.Blocks.ArrayMax = uVar13;
            *(FDynamicMesh3 **)&(pTVar26->ElementsRefCounts).FreeIndices = local_460;
            piVar2 = &(pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayMax;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            lVar32 = (longlong)local_450;
            (pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayNum = local_450;
            if (local_450 == 0) {
              *piVar2 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_450,0,&pTVar1->AllocatorInstance,local_450,piVar2);
              memcpy((pTVar1->AllocatorInstance).Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_448.Data;
            *(undefined8 *)&(pTVar26->ElementsRefCounts).UsedCount = 0;
            piVar2 = &(pTVar26->ElementsRefCounts).UsedCount;
            lVar32 = (longlong)(int)local_440;
            puVar3 = &(pTVar26->Elements).CurBlockUsed;
            (pTVar26->Elements).CurBlock = local_440;
            if (local_440 == 0) {
              *puVar3 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_440,0,(ForAnyElementType *)piVar2,local_440,(int *)puVar3);
              memcpy(*(void **)piVar2,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_438.Data;
            (pTVar26->Elements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pTVar4 = &(pTVar26->Elements).Blocks;
            lVar32 = (longlong)local_430;
            piVar2 = &(pTVar26->Elements).Blocks.ArrayMax;
            (pTVar26->Elements).Blocks.ArrayNum = local_430;
            if (local_430 == 0) {
              *piVar2 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_430,0,&pTVar4->AllocatorInstance,local_430,piVar2);
              memcpy((pTVar4->AllocatorInstance).Data,FVar18.Data,lVar32 << 2);
            }
            *(undefined1 *)&(pTVar26->ParentVertices).CurBlock = local_428;
            *(undefined4 *)&(pTVar26->ParentVertices).Blocks.AllocatorInstance.Data = 1;
            *(undefined4 *)((longlong)&(pTVar26->ParentVertices).Blocks.AllocatorInstance.Data + 4)
                 = 0xffffffff;
            if (local_438.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_438.Data);
            }
            if (local_448.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_448.Data);
            }
            pTVar27 = pTVar26;
            fVar35 = local_508[0];
            if (local_458.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.Data);
              fVar35 = local_508[0];
            }
          }
        }
        else if (EVar6 == CenterFan) {
          uVar5 = *(undefined4 *)&this->_padding_;
          uVar13 = *(undefined4 *)((longlong)&this->_padding_ + 4);
          pTVar26 = ::operator_new(0x68);
          FVar18.Data = local_4e8.Vertices.AllocatorInstance.Data;
          fVar35 = local_508[0];
          if (pTVar26 != (TDynamicMeshOverlay<float,3> *)0x0) {
            lVar32 = (longlong)local_4e8.Vertices.ArrayNum;
            local_4a0 = local_4e8.Mesh;
            local_498.Data = (FScriptContainerElement *)0x0;
            local_490 = local_4e8.Vertices.ArrayNum;
            if (local_4e8.Vertices.ArrayNum == 0) {
              local_48c = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4e8.Vertices.ArrayNum,0,&local_498,local_4e8.Vertices.ArrayNum,
                         &local_48c);
              memcpy(local_498.Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_4e8.Edges.AllocatorInstance.Data;
            lVar32 = (longlong)local_4e8.Edges.ArrayNum;
            local_488.Data = (FScriptContainerElement *)0x0;
            local_480 = local_4e8.Edges.ArrayNum;
            if (local_4e8.Edges.ArrayNum == 0) {
              local_47c = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4e8.Edges.ArrayNum,0,&local_488,local_4e8.Edges.ArrayNum,
                         &local_47c);
              memcpy(local_488.Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_4e8.BowtieVertices.AllocatorInstance.Data;
            lVar32 = (longlong)local_4e8.BowtieVertices.ArrayNum;
            local_478.Data = (FScriptContainerElement *)0x0;
            local_470 = local_4e8.BowtieVertices.ArrayNum;
            if (local_4e8.BowtieVertices.ArrayNum == 0) {
              local_46c = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4e8.BowtieVertices.ArrayNum,0,&local_478,
                         local_4e8.BowtieVertices.ArrayNum,&local_46c);
              memcpy(local_478.Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_498.Data;
            pTVar1 = &(pTVar26->ElementsRefCounts).FreeIndices.Blocks;
            local_468 = local_4e8.bBowtiesCalculated;
            pTVar26->ParentMesh = (FDynamicMesh3 *)&___7FSimpleHoleFiller_Geometry_UE__6B_;
            (pTVar26->ElementsRefCounts).RefCounts.CurBlock = 0;
            (pTVar26->ElementsRefCounts).RefCounts.CurBlockUsed = 0;
            (pTVar26->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (pTVar26->ElementsRefCounts).RefCounts.Blocks.ArrayNum = uVar5;
            (pTVar26->ElementsRefCounts).RefCounts.Blocks.ArrayMax = uVar13;
            *(FDynamicMesh3 **)&(pTVar26->ElementsRefCounts).FreeIndices = local_4a0;
            piVar2 = &(pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayMax;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            lVar32 = (longlong)local_490;
            (pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayNum = local_490;
            if (local_490 == 0) {
              *piVar2 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_490,0,&pTVar1->AllocatorInstance,local_490,piVar2);
              memcpy((pTVar1->AllocatorInstance).Data,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_488.Data;
            *(undefined8 *)&(pTVar26->ElementsRefCounts).UsedCount = 0;
            piVar2 = &(pTVar26->ElementsRefCounts).UsedCount;
            lVar32 = (longlong)(int)local_480;
            puVar3 = &(pTVar26->Elements).CurBlockUsed;
            (pTVar26->Elements).CurBlock = local_480;
            if (local_480 == 0) {
              *puVar3 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_480,0,(ForAnyElementType *)piVar2,local_480,(int *)puVar3);
              memcpy(*(void **)piVar2,FVar18.Data,lVar32 << 2);
            }
            FVar18.Data = local_478.Data;
            (pTVar26->Elements).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pTVar4 = &(pTVar26->Elements).Blocks;
            lVar32 = (longlong)local_470;
            piVar2 = &(pTVar26->Elements).Blocks.ArrayMax;
            (pTVar26->Elements).Blocks.ArrayNum = local_470;
            if (local_470 == 0) {
              *piVar2 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_470,0,&pTVar4->AllocatorInstance,local_470,piVar2);
              memcpy((pTVar4->AllocatorInstance).Data,FVar18.Data,lVar32 << 2);
            }
            *(undefined1 *)&(pTVar26->ParentVertices).CurBlock = local_468;
            *(undefined4 *)&(pTVar26->ParentVertices).Blocks.AllocatorInstance.Data = 0;
            *(undefined4 *)((longlong)&(pTVar26->ParentVertices).Blocks.AllocatorInstance.Data + 4)
                 = 0xffffffff;
            if (local_478.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_478.Data);
            }
            if (local_488.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data);
            }
            pTVar27 = pTVar26;
            fVar35 = local_508[0];
            if (local_498.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Data);
              fVar35 = local_508[0];
            }
          }
        }
      }
      *(int *)(this->_padding_ + 0x1b0) = *(int *)(this->_padding_ + 0x1b0) + 1;
      (**(code **)&pTVar27->ParentMesh->Vertices)(pTVar27);
      pFVar9 = (FDynamicMesh3 *)this->_padding_;
      if ((pFVar9->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
        local_4a8.Mesh = pFVar9;
        if (this->bSharpNormals == false) {
          FDynamicMeshEditor::SetTriangleNormals
                    (&local_4a8,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar27->ElementsRefCounts);
        }
        local_330._s_0.X = local_3b0._s_0.X;
        local_330._s_0.Y = local_3b0._s_0.Y;
        local_318._s_0.X = 0.0;
        local_2f8[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_2f8[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_2f8[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_318._s_0.W = dVar10;
        local_318._s_0.Y = 0.0;
        local_318._s_0.Z = 0.0;
        local_330._s_0.Z = local_3b0._s_0.Z;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_318._s_0,(TVector<double> *)&local_2f8[0]._s_0,
                   (TVector<double> *)&local_410._s_0);
        bVar23 = this->bUVScaleRelativeWorld == false;
        if (bVar23) {
          pTVar28 = &local_3d0;
          pTVar34 = &local_3c8;
          local_3d0._s_0.X = (float)(this->UVOffset).field0_0x0._s_0.X;
          local_3d0._s_0.Y = (float)(this->UVOffset).field0_0x0._s_0.Y;
          local_3c8._s_0.X = (float)(this->UVScale).field0_0x0._s_0.X;
          local_3c8._s_0.Y = (float)(this->UVScale).field0_0x0._s_0.Y;
        }
        else {
          pTVar28 = &local_3e0;
          pTVar34 = &local_3d8;
          local_3d8._s_0.X = (float)(this->UVScale).field0_0x0._s_0.X * (fVar14 / local_114);
          local_3d8._s_0.Y = (float)(this->UVScale).field0_0x0._s_0.Y * (fVar14 / local_114);
          local_3e0._s_0.X = (float)(this->UVOffset).field0_0x0._s_0.X;
          local_3e0._s_0.Y = (float)(this->UVOffset).field0_0x0._s_0.Y;
        }
        FDynamicMeshEditor::SetTriangleUVsFromProjection
                  (&local_4a8,(TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar27->ElementsRefCounts
                   ,(TFrame3<double> *)&local_330._s_0,(TVector2<float> *)&pTVar34->_s_0,
                   (TVector2<float> *)&pTVar28->_s_0,0,true,bVar23);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_500.Data,(int)local_4f8);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_500.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_500.Data);
      }
      (*(code *)pTVar27->ParentMesh->_padding_)(pTVar27,1);
      if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.AllocatorInstance.Data);
      }
      if (local_4e8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.BowtieVertices.AllocatorInstance.Data);
      }
      if (local_4e8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Edges.AllocatorInstance.Data);
      }
      if (local_4e8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Vertices.AllocatorInstance.Data);
      }
      if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.AllocatorInstance.Data);
      }
      local_508[0] = (float)((int)fVar35 + 1);
      pTVar27 = (TDynamicMeshOverlay<float,3> *)(ulonglong)(uint)local_508[0];
    } while ((int)local_508[0] < 2);
  }
  if (this->bSharpNormals == false) {
LAB_14c9639aa:
    if ((param_1 == (FProgressCancel *)0x0) ||
       (bVar23 = FProgressCancel::Cancelled(param_1), !bVar23)) {
      pTVar29 = FDynamicMesh3::GetBounds((FDynamicMesh3 *)this->_padding_,&local_290,true);
      dVar12 = ((pTVar29->Max).field0_0x0._s_0.X + (pTVar29->Min).field0_0x0._s_0.X) *
               __real_3fe0000000000000;
      dVar11 = ((pTVar29->Max).field0_0x0._s_0.Y + (pTVar29->Min).field0_0x0._s_0.Y) *
               __real_3fe0000000000000;
      dVar10 = ((pTVar29->Max).field0_0x0._s_0.Z + (pTVar29->Min).field0_0x0._s_0.Z) *
               __real_3fe0000000000000;
      uVar37 = (uint)__xmm_80000000000000008000000000000000;
      uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_348._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar38,SUB84(dVar12,0) ^ uVar37);
      local_348._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar38,SUB84(dVar11,0) ^ uVar37);
      local_348._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar38,SUB84(dVar10,0) ^ uVar37);
      MeshTransforms::Translate
                ((FDynamicMesh3 *)this->_padding_,(TVector<double> *)&local_348._s_0,All);
      uVar17 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uStack_29c = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
      uStack_2a0 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
      local_2a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      lVar15 = _UNK_15061cbc8;
      lVar32 = ___xmm_3ff00000000000000000000000000000;
      this->_padding_ = 0;
      this->_padding_ = 0;
      dVar22 = (double)local_2a8;
      local_2a8._4_4_ = (undefined4)((ulonglong)local_2a8 >> 0x20);
      this->_padding_ = lVar32;
      this->_padding_ = lVar15;
      this->_padding_ = uVar25;
      this->_padding_ = uVar16;
      *(undefined4 *)&this->_padding_ = uVar5;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar13;
      *(undefined4 *)&this->_padding_ = (undefined4)local_2a8;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = local_2a8._4_4_;
      *(undefined4 *)&this->_padding_ = uStack_2a0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_29c;
      *(int *)&this->_padding_ = (int)uVar17;
      *(int *)((longlong)&this->_padding_ + 4) = (int)((ulonglong)uVar17 >> 0x20);
      this->_padding_ = (longlong)dVar12;
      this->_padding_ = (longlong)dVar11;
      this->_padding_ = (longlong)dVar10;
      local_2a8 = dVar22;
    }
  }
  else {
    if ((param_1 != (FProgressCancel *)0x0) &&
       (bVar23 = FProgressCancel::Cancelled(param_1), bVar23)) goto LAB_14c963b07;
    local_3f8.Mesh = (FDynamicMesh3 *)this->_padding_;
    local_3f8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f8.Normals.ArrayNum = 0;
    local_3f8.Normals.ArrayMax = 0;
    FMeshNormals::Compute_Triangle(&local_3f8);
    if ((param_1 == (FProgressCancel *)0x0) ||
       (bVar23 = FProgressCancel::Cancelled(param_1), !bVar23)) {
      local_508[0] = cosf((float)(this->SharpNormalAngleTolerance * ___real_3f91df46aaaaaaab));
      pTVar27 = *(TDynamicMeshOverlay<float,3> **)(this->_padding_ + 0x208);
      pTVar26 = pTVar33;
      if (pTVar27 != (TDynamicMeshOverlay<float,3> *)0x0) {
        pTVar26 = pTVar27;
      }
      pTVar27 = pTVar33;
      if (0 < (pTVar26->ElementsRefCounts).UsedCount) {
        pTVar27 = (TDynamicMeshOverlay<float,3> *)
                  **(undefined8 **)&(pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayNum;
      }
      local_368 = &local_3f8.Normals;
      local_360 = local_508;
      local_350 = &local_368;
      local_358 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FCurveSweepOp::CalculateResult'::__l39::<lambda_1>,bool,int,int,int>
                  ::Call;
      TDynamicMeshOverlay<float,3>::CreateFromPredicate
                (pTVar27,(TFunctionRef<bool___cdecl(int,int,int)> *)&local_358,0.0);
      if ((param_1 == (FProgressCancel *)0x0) ||
         (bVar23 = FProgressCancel::Cancelled(param_1), !bVar23)) {
        pTVar27 = *(TDynamicMeshOverlay<float,3> **)(this->_padding_ + 0x208);
        pTVar26 = pTVar33;
        if (pTVar27 != (TDynamicMeshOverlay<float,3> *)0x0) {
          pTVar26 = pTVar27;
        }
        pTVar27 = pTVar33;
        if (0 < (pTVar26->ElementsRefCounts).UsedCount) {
          pTVar27 = (TDynamicMeshOverlay<float,3> *)
                    **(undefined8 **)&(pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayNum;
        }
        FMeshNormals::Compute_Overlay_FaceAvg
                  (&local_3f8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar27,false,
                   true);
        pTVar27 = *(TDynamicMeshOverlay<float,3> **)(this->_padding_ + 0x208);
        pTVar26 = pTVar33;
        if (pTVar27 != (TDynamicMeshOverlay<float,3> *)0x0) {
          pTVar26 = pTVar27;
        }
        if (0 < (pTVar26->ElementsRefCounts).UsedCount) {
          pTVar33 = (TDynamicMeshOverlay<float,3> *)
                    **(undefined8 **)&(pTVar26->ElementsRefCounts).FreeIndices.Blocks.ArrayNum;
        }
        FMeshNormals::CopyToOverlay
                  (&local_3f8,
                   (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pTVar33,false);
        if (local_3f8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Normals.AllocatorInstance.Data);
        }
        goto LAB_14c9639aa;
      }
    }
    if (local_3f8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Normals.AllocatorInstance.Data);
    }
  }
LAB_14c963b07:
  FProfileSweepGenerator::~FProfileSweepGenerator((FProfileSweepGenerator *)local_258);
  return;
}

