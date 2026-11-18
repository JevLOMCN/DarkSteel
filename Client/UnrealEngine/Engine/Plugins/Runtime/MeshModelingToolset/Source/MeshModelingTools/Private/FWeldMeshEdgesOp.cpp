// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FWeldMeshEdgesOp @ 14cd4f640

FWeldMeshEdgesOp * __thiscall FWeldMeshEdgesOp::FWeldMeshEdgesOp(FWeldMeshEdgesOp *this)

{
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FWeldMeshEdgesOp__6B_;
  (this->SourceMesh).Object = (FDynamicMesh3 *)0x0;
  (this->SourceMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->SelectedEdges).Elements = 0;
  *(undefined8 *)&(this->SelectedEdges).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedEdges).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectedEdges).Elements.field_0x30 = 0xffffffff;
  (this->SelectedEdges).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedEdges).HashSize = 0;
  this->InitialNumBoundaryEdges = 0;
  this->FinalNumBoundaryEdges = 0;
  return this;
}

// CalculateResult @ 14cd61330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FWeldMeshEdgesOp::CalculateResult(FWeldMeshEdgesOp *this,FProgressCancel *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  undefined8 uVar11;
  FDynamicMesh3 *pFVar12;
  FDynamicMesh3 *pFVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  FFunctionStorage *pFVar17;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar18;
  longlong *plVar19;
  uint uVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar21;
  undefined1 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_488 [32];
  undefined1 local_458 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_450;
  TArray<int,TSizedDefaultAllocator<32>_> local_440;
  TArray<int,TSizedDefaultAllocator<32>_> local_430;
  int local_420 [2];
  FDynamicMeshEditor local_418;
  FRefCountVector *local_410;
  uint local_408;
  int iStack_404;
  FSplitAttributeWelder local_400;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3e8;
  longlong lStack_3e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3d8;
  FDynamicMesh3 *pFStack_3d0;
  undefined8 uStack_3c8;
  TBitArray<FDefaultBitArrayAllocator> **local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b8;
  int local_398;
  FRefCountVector *local_390;
  int local_388;
  int local_384;
  FRefCountVector *local_380;
  int local_378;
  int local_374;
  FRefCountVector *local_370;
  int local_368;
  int local_364;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_358;
  undefined8 uStack_338;
  FDynamicMeshEditResult local_328;
  FMergeCoincidentMeshEdges local_2b8;
  FMergeCoincidentMeshEdges local_258;
  code *local_1f8 [2];
  FFunctionStorage local_1e8;
  undefined1 local_1c8 [8];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  TBitArray<FDefaultBitArrayAllocator> local_1b0;
  undefined8 uStack_190;
  ForElementType<FSetElementId> local_180;
  int local_178;
  double local_170;
  int local_168;
  undefined1 local_158 [40];
  longlong *local_130;
  FRefCountVector *local_128;
  undefined1 local_118 [48];
  longlong local_e8 [3];
  longlong *local_d0;
  undefined1 local_c8 [80];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_488;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar4 = *(code **)&param_1->CancelF;
    plVar19 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar15 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar19 != (longlong *)0x0) {
      plVar15 = plVar19;
    }
    uVar11 = (**(code **)(*plVar15 + 8))();
    bVar7 = (bool)(*pcVar4)(uVar11);
    param_1->WasCancelled = bVar7;
    if (bVar7 != false) {
      return;
    }
  }
  pTVar26 = &this->SourceMesh;
  if (((pTVar26->Object != (FDynamicMesh3 *)0x0) &&
      ((pTVar26->Object->TriangleRefCounts).UsedCount != 0)) &&
     (pFVar12 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(pTVar26),
     (pFVar12->VertexRefCounts).UsedCount != 0)) {
    pFVar12 = (FDynamicMesh3 *)this->_padding_;
    pFVar13 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                        (pTVar26);
    UE::Geometry::FDynamicMesh3::Copy(pFVar12,pFVar13,true,true,true,true);
    pTVar21 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    if (this->bSplitBowties != false) {
      local_418.Mesh = (FDynamicMesh3 *)this->_padding_;
      local_328.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewVertices.ArrayNum = 0;
      local_328.NewVertices.ArrayMax = 0;
      local_328.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewTriangles.ArrayNum = 0;
      local_328.NewTriangles.ArrayMax = 0;
      local_328.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewQuads.ArrayNum = 0;
      local_328.NewQuads.ArrayMax = 0;
      local_328.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewPolygons.ArrayNum = 0;
      local_328.NewPolygons.ArrayMax = 0;
      local_328.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewGroups.ArrayNum = 0;
      local_328.NewGroups.ArrayMax = 0;
      local_328.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewNormalOverlayElements.ArrayNum = 0;
      local_328.NewNormalOverlayElements.ArrayMax = 0;
      local_328.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.NewColorOverlayElements.ArrayNum = 0;
      local_328.NewColorOverlayElements.ArrayMax = 0;
      if (*(int *)&(this->SelectedEdges).Elements.field_0x8 ==
          *(int *)&(this->SelectedEdges).Elements.field_0x34) {
        UE::Geometry::FDynamicMeshEditor::SplitBowties(&local_418,&local_328);
      }
      else {
        local_3b8.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->SelectedEdges).Elements.field_0x10;
        pTVar1 = &this->SelectedEdges;
        local_3b8.UnvisitedBitMask = 0xffffffff;
        local_3b8._padding_._0_4_ = 0;
        local_3b8._padding_._4_4_ = 1;
        local_3b8.CurrentBitIndex = 0;
        local_3b8.BaseBitIndex = 0;
        if (*(int *)&(this->SelectedEdges).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
        }
        uVar20 = *(uint *)&(this->SelectedEdges).Elements.field_0x28;
        lStack_3e0 = CONCAT44(local_3b8._padding_._4_4_,(undefined4)local_3b8._padding_);
        pFStack_3d0._4_4_ = local_3b8.CurrentBitIndex;
        pFStack_3d0._0_4_ = local_3b8.UnvisitedBitMask;
        uStack_3c8._4_4_ = local_3b8._28_4_;
        uStack_3c8._0_4_ = local_3b8.BaseBitIndex;
        uVar23 = uVar20 & 0xffffffe0;
        pTStack_3d8 = local_3b8.Array;
        local_3c0 = (TBitArray<FDefaultBitArrayAllocator> **)
                    CONCAT44(local_3c0._4_4_,
                             *(int *)&(this->SelectedEdges).Elements.field_0x8 -
                             *(int *)&(this->SelectedEdges).Elements.field_0x34);
        iVar25 = (int)uVar20 >> 5;
        TStack_358.Array = local_3b8.Array;
        uStack_338 = local_3c0;
        local_3e8 = pTVar1;
        local_360 = pTVar1;
        TStack_358._padding_ = lStack_3e0;
        TStack_358._16_8_ = pFStack_3d0;
        TStack_358._24_8_ = uStack_3c8;
        if (((int)uVar20 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(uint *)&(this->SelectedEdges).Elements.field_0x28;
        if (uVar20 != uVar3) {
          puVar22 = *(undefined1 **)&(this->SelectedEdges).Elements.field_0x20;
          if (puVar22 == (undefined1 *)0x0) {
            puVar22 = &(this->SelectedEdges).Elements.field_0x10;
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar25 * 4);
          while (uVar20 == 0) {
            lVar16 = (longlong)iVar25;
            uVar23 = uVar23 + 0x20;
            iVar25 = iVar25 + 1;
            uVar20 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
            goto LAB_14cd615f1;
            uVar20 = *(uint *)(puVar22 + lVar16 * 4 + 4);
          }
          uVar24 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_398 = (int)lVar16;
          uVar20 = local_398 + -1 + uVar23;
          if ((int)uVar3 < (int)uVar20) {
            uVar20 = uVar3;
          }
        }
LAB_14cd615f1:
        while( true ) {
          pTVar1 = local_360;
          if (*(int *)&(local_360->Elements).field_0x8 - *(int *)&(local_360->Elements).field_0x34
              != (int)uStack_338) {
            local_458[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_458);
          }
          if (((TStack_358.CurrentBitIndex == uVar20) &&
              (TStack_358.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->SelectedEdges).Elements.field_0x10))
             && (pTVar1 == &this->SelectedEdges)) break;
          local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_430.ArrayNum = 0;
          local_430.ArrayMax = 0;
          local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_440.ArrayNum = 0;
          local_440.ArrayMax = 0;
          uVar23 = *(uint *)(*(longlong *)&pTVar1->Elements +
                            (longlong)TStack_358.CurrentBitIndex * 0xc);
          local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_450.ArrayNum = 0;
          local_450.ArrayMax = 0;
          uVar11 = *(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar23 >> 9) * 8) +
                    (ulonglong)(uVar23 & 0x1ff) * 0x10);
          UE::Geometry::FDynamicMeshEditor::SplitBowtiesInternal
                    (&local_418,(int)uVar11,&local_430,&local_440,&local_450,&local_328.NewVertices)
          ;
          if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.AllocatorInstance.Data);
          }
          if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_440.AllocatorInstance.Data);
          }
          if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.AllocatorInstance.Data);
          }
          local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_430.ArrayNum = 0;
          local_430.ArrayMax = 0;
          local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_440.ArrayNum = 0;
          local_440.ArrayMax = 0;
          local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_450.ArrayNum = 0;
          local_450.ArrayMax = 0;
          UE::Geometry::FDynamicMeshEditor::SplitBowtiesInternal
                    (&local_418,(int)((ulonglong)uVar11 >> 0x20),&local_430,&local_440,&local_450,
                     &local_328.NewVertices);
          if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.AllocatorInstance.Data);
          }
          if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_440.AllocatorInstance.Data);
          }
          if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.AllocatorInstance.Data);
          }
          TStack_358.UnvisitedBitMask = TStack_358.UnvisitedBitMask & ~TStack_358._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_358);
        }
      }
      UE::Geometry::FDynamicMeshEditResult::~FDynamicMeshEditResult(&local_328);
    }
    pTVar26 = &this->SourceMesh;
    uVar24 = 1;
    cVar8 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))((longlong *)this->_padding_,0,0);
    this->InitialNumBoundaryEdges = 0;
    pFVar12 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(pTVar26);
    local_3c0 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    pTStack_3d8 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__BoundaryEdgeIndicesItr_FDynamicMesh3_Geometry_UE__QEBA_AVFilteredEnumerable_FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1e8.HeapAllocation = (FFunctionStorage *)0x0;
    local_3e8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,bool,int>
                ::Call;
    local_1f8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,bool,int>
                   ::Call;
    pFStack_3d0 = pFVar12;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&pTStack_3d8,&local_1e8);
    local_128 = &pFVar12->EdgeRefCounts;
    local_158._0_8_ = 0;
    local_130 = (longlong *)0x0;
    TFunction<bool___cdecl(int)>::operator=
              ((TFunction<bool___cdecl(int)> *)local_158,(TFunction<bool___cdecl(int)> *)local_1f8);
    if (local_1f8[0] != (code *)0x0) {
      pFVar17 = &local_1e8;
      if (local_1e8.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar17 = local_1e8.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar17->InlineAllocation + 0x10))();
    }
    if (local_3e8 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      ppTVar18 = &pTStack_3d8;
      if (local_3c0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar18 = local_3c0;
      }
      (*(code *)((*ppTVar18)->AllocatorInstance).SecondaryData)();
    }
    local_390 = local_128;
    local_410 = local_128;
    local_408 = 0;
    iStack_404 = (local_128->RefCounts).CurBlock * 0x200 + (local_128->RefCounts).CurBlockUsed;
    if (((iStack_404 != 0) &&
        (pFVar5 = (local_128->RefCounts).Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar5 - 1U))) && (local_408 = 1, 1 < iStack_404)) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar5 + (uVar24 >> 9) * 8) +
                          (ulonglong)(local_408 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        local_408 = (int)uVar24 + 1;
        uVar24 = (ulonglong)local_408;
      } while ((int)local_408 < iStack_404);
    }
    local_388 = iStack_404;
    local_384 = iStack_404;
    UE::Geometry::FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_118,
               (IndexIterator *)&local_410,(IndexIterator *)&local_390,
               (TFunction<bool___cdecl(int)> *)local_158);
    local_380 = local_128;
    local_370 = local_128;
    local_378 = (local_128->RefCounts).CurBlock * 0x200 + (local_128->RefCounts).CurBlockUsed;
    local_374 = local_378;
    local_368 = local_378;
    local_364 = local_378;
    UE::Geometry::FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_c8,
               (IndexIterator *)&local_370,(IndexIterator *)&local_380,
               (TFunction<bool___cdecl(int)> *)local_158);
    if (local_118._8_4_ != local_c8._8_4_) {
      do {
        this->InitialNumBoundaryEdges = this->InitialNumBoundaryEdges + 1;
        do {
          UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_118);
          if (local_118._8_4_ == local_118._24_4_) break;
          local_420[0] = local_118._8_4_;
          UE::Core::Private::Function::CheckCallable((void *)local_118._32_8_);
          uVar11 = local_118._32_8_;
          plVar19 = local_e8;
          if (local_d0 != (longlong *)0x0) {
            plVar19 = local_d0;
          }
          uVar14 = (**(code **)(*plVar19 + 8))();
          cVar9 = (*(code *)uVar11)(uVar14,local_420);
        } while (cVar9 == '\0');
      } while (local_118._8_4_ != local_c8._8_4_);
    }
    if (local_c8._32_8_ != 0) {
      plVar19 = (longlong *)(local_c8 + 0x30);
      if ((longlong *)local_c8._72_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_c8._72_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if ((code *)local_118._32_8_ != (code *)0x0) {
      plVar19 = local_e8;
      if (local_d0 != (longlong *)0x0) {
        plVar19 = local_d0;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_158._0_8_ != 0) {
      plVar19 = (longlong *)(local_158 + 0x10);
      if (local_130 != (longlong *)0x0) {
        plVar19 = local_130;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    fVar28 = __real_3c8efa35;
    local_2b8.MergeVertexTolerance = this->Tolerance;
    local_2b8.MergeSearchTolerance = local_2b8.MergeVertexTolerance + local_2b8.MergeVertexTolerance
    ;
    this->FinalNumBoundaryEdges = this->InitialNumBoundaryEdges;
    local_2b8.Mesh = (FDynamicMesh3 *)this->_padding_;
    local_2b8.OnlyUniquePairs = this->bOnlyUnique;
    local_2b8.EdgesToMerge = pTVar21;
    if (*(int *)&(this->SelectedEdges).Elements.field_0x8 !=
        *(int *)&(this->SelectedEdges).Elements.field_0x34) {
      local_2b8.EdgesToMerge = &this->SelectedEdges;
    }
    local_2b8.bWeldAttrsOnMergedEdges = this->WeldAttributeMode == OnWeldedMeshEdgesOnly;
    local_2b8.SplitAttributeWelder.UVDistSqrdThreshold =
         this->SplitUVThreshold * this->SplitUVThreshold;
    local_2b8._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
    local_2b8.InitialNumBoundaryEdges = 0;
    local_2b8.FinalNumBoundaryEdges = 0;
    fVar27 = cosf(this->SplitNormalThreshold * fVar28);
    uVar20 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar6 = __real_3f800000;
    local_2b8.SplitAttributeWelder.NormalVecDotThreshold =
         (float)((uint)(__real_3f800000 - fVar27) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar27 = cosf(this->SplitTangentsThreshold * fVar28);
    local_2b8.SplitAttributeWelder.ColorDistSqrdThreshold =
         this->SplitColorThreshold * this->SplitColorThreshold;
    local_2b8.SplitAttributeWelder.TangentVecDotThreshold = (float)((uint)(fVar6 - fVar27) & uVar20)
    ;
    bVar7 = UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_2b8);
    this->FinalNumBoundaryEdges = local_2b8.FinalNumBoundaryEdges;
    if (((bVar7) && (0 < local_2b8.FinalNumBoundaryEdges)) && (this->bResolveTJunctions != false)) {
      local_1c8 = (undefined1  [8])this->_padding_;
      local_1b0.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_1b0.MaxBits = _UNK_150631d94;
      uStack_190 = _UNK_150631d98;
      local_170 = this->Tolerance + this->Tolerance;
      local_1c0.Data = (FScriptContainerElement *)0x0;
      local_1b8 = 0;
      local_1b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_180 = (ForElementType<FSetElementId>)0x0;
      local_178 = 0;
      local_168 = 0;
      bVar10 = UE::Geometry::FMeshResolveTJunctions::Apply((FMeshResolveTJunctions *)local_1c8);
      if ((bVar10) && (0 < local_168)) {
        local_258.MergeVertexTolerance = this->Tolerance;
        local_258.Mesh = (FDynamicMesh3 *)this->_padding_;
        local_258.bWeldAttrsOnMergedEdges = this->WeldAttributeMode == OnWeldedMeshEdgesOnly;
        local_258.MergeSearchTolerance =
             local_258.MergeVertexTolerance + local_258.MergeVertexTolerance;
        local_258.OnlyUniquePairs = this->bOnlyUnique;
        local_258._padding_ = (longlong)&___7FMergeCoincidentMeshEdges_Geometry_UE__6B_;
        local_258.InitialNumBoundaryEdges = 0;
        local_258.FinalNumBoundaryEdges = 0;
        local_258.SplitAttributeWelder.UVDistSqrdThreshold =
             this->SplitUVThreshold * this->SplitUVThreshold;
        local_258.EdgesToMerge = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
        fVar27 = cosf(this->SplitNormalThreshold * fVar28);
        local_258.SplitAttributeWelder.NormalVecDotThreshold =
             (float)((uint)(fVar6 - fVar27) & uVar20);
        fVar27 = cosf(this->SplitTangentsThreshold * fVar28);
        local_258.SplitAttributeWelder.ColorDistSqrdThreshold =
             this->SplitColorThreshold * this->SplitColorThreshold;
        local_258.SplitAttributeWelder.TangentVecDotThreshold =
             (float)((uint)(fVar6 - fVar27) & uVar20);
        bVar7 = UE::Geometry::FMergeCoincidentMeshEdges::Apply(&local_258);
        this->FinalNumBoundaryEdges = local_258.FinalNumBoundaryEdges;
      }
      local_178 = 0;
      if (local_180 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_180);
      }
      uVar24 = local_1b8 >> 0x20;
      local_1b8 = local_1b8 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_1c0,0,(int *)((longlong)&local_1b8 + 4));
      }
      iVar25 = local_1b0.MaxBits;
      uStack_190 = 0xffffffff;
      local_1b0._24_8_ = (ulonglong)(uint)local_1b0.MaxBits << 0x20;
      if (0x80 < (uint)iVar25) {
        local_1b0.NumBits = 0;
        local_1b0.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1b0,0);
      }
      if (local_1b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1b0.AllocatorInstance.SecondaryData);
      }
      if (local_1c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data);
      }
    }
    if (this->WeldAttributeMode == OnFullMesh) {
      local_400.UVDistSqrdThreshold = this->SplitUVThreshold * this->SplitUVThreshold;
      fVar27 = cosf(this->SplitNormalThreshold * fVar28);
      local_400.NormalVecDotThreshold = (float)((uint)(fVar6 - fVar27) & uVar20);
      fVar28 = cosf(this->SplitTangentsThreshold * fVar28);
      local_400.ColorDistSqrdThreshold = this->SplitColorThreshold * this->SplitColorThreshold;
      local_400.TangentVecDotThreshold = (float)((uint)(fVar6 - fVar28) & uVar20);
      UE::Geometry::FSplitAttributeWelder::WeldSplitElements
                (&local_400,(FDynamicMesh3 *)this->_padding_);
    }
    pFVar12 = (FDynamicMesh3 *)this->_padding_;
    if (cVar8 == '\0') {
      pTVar21 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x101;
    }
    if (bVar7 != false) {
      cVar8 = (**(code **)(pFVar12->_padding_ + 0xd8))(pFVar12,pTVar21,0);
      if (cVar8 != '\0') {
        return;
      }
      pFVar12 = (FDynamicMesh3 *)this->_padding_;
    }
    if ((pTVar26->Object == (FDynamicMesh3 *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Geometry::FDynamicMesh3::Copy(pFVar12,pTVar26->Object,true,true,true,true);
    this->FinalNumBoundaryEdges = this->InitialNumBoundaryEdges;
  }
  return;
}

