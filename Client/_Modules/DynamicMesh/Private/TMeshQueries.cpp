// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// GetVertexSelectedTriangles @ 14c743c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVertexSelectedTriangles
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  FSmallListSet *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a8;
  undefined8 local_288;
  undefined1 *puStack_280;
  undefined4 local_278;
  uint uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  int local_268;
  undefined4 local_264;
  longlong *local_260;
  int local_258;
  int local_254;
  FDynamicMesh3 *local_250;
  TArray<int,TSizedDefaultAllocator<32>_> *local_248;
  undefined4 local_23c;
  undefined1 local_238 [64];
  ForAnyElementType local_1f8;
  uint local_1f0;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  code *pcStack_1b0;
  undefined1 *local_1a8;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  code *pcStack_188;
  undefined1 *local_180;
  undefined8 uStack_178;
  int local_170;
  undefined4 uStack_16c;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  uVar10 = param_2->ArrayNum;
  uVar8 = 0;
  local_238._0_8_ = (FScriptContainerElement *)0x0;
  local_238._8_8_ = (FScriptContainerElement *)0x0;
  local_238._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_238._40_4_ = 0;
  local_238._44_4_ = 0x80;
  local_238._48_4_ = 0xffffffff;
  local_238._52_4_ = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_250 = param_1;
  local_248 = __return_storage_ptr__;
  if (uVar10 == 0) goto LAB_14c743eff;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_238,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_1f0 != 0) && ((int)uVar10 <= (int)local_1f0)) goto LAB_14c743eff;
  local_1f0 = uVar10;
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4);
  }
  if (uVar10 != 0) {
    uVar12 = uVar10;
    if (uVar10 < 2) {
      if (local_1f8.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_14c743d58;
      }
    }
    else {
LAB_14c743d58:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,uVar12,4);
    }
    if (0 < (int)uVar10) {
      uVar14 = (ulonglong)uVar10;
      uVar13 = uVar8;
      do {
        FVar7.Data = (FScriptContainerElement *)(local_238 + 0x38);
        if (local_1f8.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_1f8.Data;
        }
        uVar5 = (longlong)(int)uVar10 - 1U & uVar13;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar7.Data + uVar5 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_1f0 != 0) {
    TStack_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
    local_288 = (code *)0x100000000;
    local_278 = 0xffffffff;
    uStack_274 = 0;
    uStack_270 = 0;
    if (local_238._40_4_ != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
      if ((ForElementType<unsigned_int>)local_238._32_8_ != (ForElementType<unsigned_int>)0x0) {
        FVar15 = (ForElementType<unsigned_int>)local_238._32_8_;
      }
      uVar10 = *(uint *)FVar15;
      uVar13 = uVar8;
      while (uVar10 == 0) {
        uStack_270 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_270;
        iVar6 = (int)uVar8;
        uVar10 = iVar6 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar14 = (ulonglong)local_288 >> 0x20;
        local_288 = (code *)CONCAT44((int)uVar14,uVar10);
        if ((int)(((int)(local_238._40_4_ - 1) >> 0x1f & 0x1fU) + (local_238._40_4_ - 1)) >> 5 <
            (int)uVar10) goto LAB_14c743e5f;
        uVar10 = ((uint *)((longlong)FVar15 + 4))[iVar6];
        local_278 = 0xffffffff;
      }
      local_288 = (code *)CONCAT44(-uVar10 & uVar10,SUB84(local_288,0));
      uVar8 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_274 = (int)lVar3 + -1 + uStack_270;
      uVar8 = (ulonglong)uStack_274;
      if ((int)local_238._40_4_ < (int)uStack_274) {
LAB_14c743e5f:
        uVar8 = (ulonglong)(uint)local_238._40_4_;
        uStack_274 = local_238._40_4_;
      }
    }
    local_278 = 0xffffffff;
    local_2b0 = (undefined1  [8])local_238;
    TStack_2a8.CurrentBitIndex = uStack_274;
    TStack_2a8.UnvisitedBitMask = -1;
    TStack_2a8._28_4_ = uStack_26c;
    TStack_2a8.BaseBitIndex = uStack_270;
    TStack_2a8._padding_ = (longlong)local_288;
    puStack_280 = (undefined1 *)TStack_2a8.Array;
    if ((int)uVar8 < (int)local_238._40_4_) {
      do {
        iVar6 = (int)uVar8;
        uVar10 = local_1f0 - 1 &
                 *(uint *)(*(longlong *)(TDynamicVector<int,512> *)local_2b0 + (longlong)iVar6 * 0xc
                          );
        lVar3 = *(longlong *)(TDynamicVector<int,512> *)local_2b0 + (longlong)iVar6 * 0xc;
        *(uint *)(lVar3 + 8) = uVar10;
        FVar7.Data = (FScriptContainerElement *)(local_238 + 0x38);
        if (local_1f8.Data != (FScriptContainerElement *)0x0) {
          FVar7.Data = local_1f8.Data;
        }
        uVar8 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar7.Data + uVar8 * 4);
        *(int *)(FVar7.Data + uVar8 * 4) = iVar6;
        TStack_2a8.UnvisitedBitMask = TStack_2a8.UnvisitedBitMask & ~TStack_2a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2b0 + 8));
        uVar8 = (ulonglong)(uint)TStack_2a8.CurrentBitIndex;
      } while (TStack_2a8.CurrentBitIndex < *(int *)((longlong)TStack_2a8.Array + 0x18));
    }
  }
LAB_14c743eff:
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar6 = param_2->ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar6 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar6) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b8);
    }
    pTVar4 = local_248;
    if (pFVar16 == pFVar1) break;
    iVar2 = *(int *)pFVar16;
    uStack_270 = (uint)param_1;
    uStack_26c = (undefined4)((ulonglong)param_1 >> 0x20);
    local_278 = 0x50a9da80;
    uStack_274 = 1;
    pFVar11 = &param_1->VertexEdgeLists;
    local_288 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                ::Call;
    local_260 = (longlong *)0x0;
    local_264 = local_23c;
    local_1e8._0_8_ = 0;
    local_1c0 = (longlong *)0x0;
    local_1b8 = (FSmallListSet *)0x0;
    pcStack_1b0 = (code *)((ulonglong)pcStack_1b0 & 0xffffffff00000000);
    local_190 = (FSmallListSet *)0x0;
    pcStack_188 = (code *)((ulonglong)pcStack_188 & 0xffffffff00000000);
    local_268 = iVar2;
    FSmallListSet::BaseValueIterator::BaseValueIterator
              ((BaseValueIterator *)local_2b0,pFVar11,iVar2,false);
    local_1b8 = (FSmallListSet *)local_2b0;
    pcStack_1b0 = (code *)TStack_2a8._padding_;
    local_198 = TStack_2a8.BaseBitIndex;
    uStack_194 = TStack_2a8._28_4_;
    local_1a8 = (undefined1 *)TStack_2a8.Array;
    iStack_1a0 = TStack_2a8.UnvisitedBitMask;
    iStack_19c = TStack_2a8.CurrentBitIndex;
    TStack_2a8._padding_ = CONCAT44(0xffffffff,iVar2);
    TStack_2a8.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)((ulonglong)TStack_2a8.Array & 0xffffffff00000000);
    TStack_2a8.UnvisitedBitMask = -1;
    TStack_2a8.CurrentBitIndex = -1;
    pcStack_188 = (code *)TStack_2a8._padding_;
    local_170 = TStack_2a8.BaseBitIndex;
    uStack_16c = TStack_2a8._28_4_;
    local_180 = (undefined1 *)TStack_2a8.Array;
    uStack_178 = 0xffffffffffffffff;
    local_2b0 = (undefined1  [8])pFVar11;
    local_190 = pFVar11;
    TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)&local_288);
    if (local_288 != (code *)0x0) {
      plVar9 = (longlong *)&local_278;
      if (local_260 != (longlong *)0x0) {
        plVar9 = local_260;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
               (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
               (ValueIterator *)&local_190,(ValueIterator *)&local_190,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
    while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
            (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
      local_258 = local_168._88_4_;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,&local_254,
                 (bool *)&local_258);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
    }
    if (local_d8._96_8_ != 0) {
      plVar9 = (longlong *)(local_d8 + 0x70);
      if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_d8._136_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_168._96_8_ != 0) {
      plVar9 = (longlong *)(local_168 + 0x70);
      if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_168._136_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_1e8._0_8_ != 0) {
      plVar9 = (longlong *)(local_1e8 + 0x10);
      if (local_1c0 != (longlong *)0x0) {
        plVar9 = local_1c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    pFVar16 = pFVar16 + 4;
    param_1 = local_250;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_248);
  local_1f0 = 0;
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_238);
  return pTVar4;
}

// GetVolumeArea @ 14c7441b0

TVector2<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeArea
          (TVector2<double> *__return_storage_ptr__,FDynamicMesh3 *param_1)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  uVar17 = 0;
  iVar16 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  dVar9 = 0.0;
  uVar3 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  dVar10 = 0.0;
  iVar1 = uVar3 + iVar16;
  dVar23 = 0.0;
  dVar21 = 0.0;
  if (0 < iVar1) {
    uVar18 = 0;
    do {
      if ((int)uVar17 < iVar1) {
        uVar15 = (ulonglong)(uVar18 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar17 >> 9) * 8) + uVar15 * 2) - 1U) < 0xfffe)
        {
          lVar6 = *(longlong *)
                   ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar17 >> 9) * 8);
          pFVar7 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
          uVar4 = *(uint *)(lVar6 + uVar15 * 0xc);
          uVar14 = (ulonglong)(uVar4 & 0x1ff);
          pdVar2 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar14 * 0x18);
          dVar11 = *pdVar2;
          dVar20 = pdVar2[1];
          dVar21 = *(double *)
                    (*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar14 * 0x18);
          uVar4 = *(uint *)(lVar6 + 4 + uVar15 * 0xc);
          uVar14 = (ulonglong)(uVar4 & 0x1ff);
          pdVar2 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + uVar14 * 0x18);
          dVar12 = *pdVar2;
          uVar5 = *(uint *)(lVar6 + 8 + uVar15 * 0xc);
          dVar8 = *(double *)
                   (*(longlong *)(pFVar7 + (ulonglong)(uVar4 >> 9) * 8) + 0x10 + uVar14 * 0x18) -
                  dVar21;
          dVar23 = dVar12 - dVar11;
          dVar24 = pdVar2[1] - dVar20;
          uVar15 = (ulonglong)(uVar5 & 0x1ff);
          pdVar2 = (double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8) + uVar15 * 0x18);
          dVar13 = *pdVar2;
          dVar21 = *(double *)
                    (*(longlong *)(pFVar7 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar15 * 0x18) -
                   dVar21;
          dVar22 = dVar13 - dVar11;
          dVar20 = pdVar2[1] - dVar20;
          dVar19 = dVar21 * dVar23 - dVar22 * dVar8;
          dVar21 = dVar20 * dVar8 - dVar21 * dVar24;
          dVar23 = dVar22 * dVar24 - dVar20 * dVar23;
          dVar9 = dVar9 + (dVar12 + dVar11 + dVar13) * dVar21;
          dVar10 = dVar10 + SQRT(dVar21 * dVar21 + dVar19 * dVar19 + dVar23 * dVar23);
        }
      }
      uVar17 = uVar17 + 1;
      uVar18 = uVar18 + 1;
      dVar23 = dVar9;
      dVar21 = dVar10;
    } while ((int)uVar17 < (int)(iVar16 + uVar3));
  }
  dVar21 = dVar21 * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar23 * __real_3fc5555555555555;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar21;
  return __return_storage_ptr__;
}

// EdgeLengthStats @ 14c800b80

void __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::EdgeLengthStats
          (FDynamicMesh3 *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar11 = 0;
  if ((param_1->EdgeRefCounts).UsedCount != 0) {
    *param_2 = 3.3999999521443642e+38;
    *param_3 = -3.3999999521443642e+38;
    *param_4 = 0.0;
    iVar9 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
    iVar12 = 0x7a69;
    uVar8 = uVar11;
    if (param_5 == 0) {
      iVar12 = 1;
      uVar8 = 0;
      param_5 = iVar9;
    }
    do {
      uVar10 = (uint)uVar11;
      if ((-1 < (int)uVar10) &&
         ((int)uVar10 <
          (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (uVar11 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) <
            0xfffe) {
          pFVar3 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
          uVar11 = *(ulonglong *)
                    (*(longlong *)
                      ((param_1->Edges).Blocks.AllocatorInstance.Data + (uVar11 >> 9) * 8) +
                    (ulonglong)(uVar10 & 0x1ff) * 0x10);
          uVar7 = (ulonglong)((uint)uVar11 & 0x1ff);
          lVar4 = *(longlong *)(pFVar3 + ((uVar11 & 0xffffffff) >> 9) * 8);
          pdVar1 = (double *)(lVar4 + uVar7 * 0x18);
          uVar6 = (ulonglong)((uint)(uVar11 >> 0x20) & 0x1ff);
          lVar5 = *(longlong *)(pFVar3 + (uVar11 >> 0x29) * 8);
          pdVar2 = (double *)(lVar5 + uVar6 * 0x18);
          dVar14 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18) -
                   *(double *)(lVar4 + 0x10 + uVar7 * 0x18);
          dVar13 = *pdVar2 - *pdVar1;
          dVar15 = pdVar2[1] - pdVar1[1];
          dVar13 = SQRT(dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14);
          if (dVar13 < *param_2) {
            *param_2 = dVar13;
          }
          if (*param_3 <= dVar13 && dVar13 != *param_3) {
            *param_3 = dVar13;
          }
          uVar8 = (ulonglong)((int)uVar8 + 1);
          *param_4 = dVar13 + *param_4;
        }
      }
      uVar6 = (longlong)(int)(uVar10 + iVar12) % (longlong)iVar9;
      uVar11 = uVar6 & 0xffffffff;
    } while (((int)uVar6 != 0) && ((int)uVar8 < param_5));
    *param_4 = *param_4 / (double)(int)uVar8;
    return;
  }
  *param_2 = 0.0;
  *param_3 = 0.0;
  *param_4 = 0.0;
  return;
}

// EdgeLengthStatsFromEdges @ 14c800d80

void __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::EdgeLengthStatsFromEdges
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,double *param_3,
          double *param_4,double *param_5)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_res8 [8];
  
  iVar13 = 0;
  if ((param_1->EdgeRefCounts).UsedCount != 0) {
    *param_3 = 3.3999999521443642e+38;
    *param_4 = -3.3999999521443642e+38;
    *param_5 = 0.0;
    pFVar12 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar4 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar12 == pFVar1) break;
      uVar5 = *(uint *)pFVar12;
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 <
          (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 2) - 1U
                    ) < 0xfffe) {
          pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
          uVar7 = *(ulonglong *)
                   (*(longlong *)
                     ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8)
                   + (ulonglong)(uVar5 & 0x1ff) * 0x10);
          uVar11 = (ulonglong)((uint)uVar7 & 0x1ff);
          lVar8 = *(longlong *)(pFVar6 + ((uVar7 & 0xffffffff) >> 9) * 8);
          pdVar2 = (double *)(lVar8 + uVar11 * 0x18);
          uVar10 = (ulonglong)((uint)(uVar7 >> 0x20) & 0x1ff);
          lVar9 = *(longlong *)(pFVar6 + (uVar7 >> 0x29) * 8);
          pdVar3 = (double *)(lVar9 + uVar10 * 0x18);
          dVar15 = *(double *)(lVar9 + 0x10 + uVar10 * 0x18) -
                   *(double *)(lVar8 + 0x10 + uVar11 * 0x18);
          dVar14 = *pdVar3 - *pdVar2;
          dVar16 = pdVar3[1] - pdVar2[1];
          dVar14 = SQRT(dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15);
          if (dVar14 < *param_3) {
            *param_3 = dVar14;
          }
          if (*param_4 <= dVar14 && dVar14 != *param_4) {
            *param_4 = dVar14;
          }
          iVar13 = iVar13 + 1;
          *param_5 = dVar14 + *param_5;
        }
      }
      pFVar12 = pFVar12 + 4;
    }
    *param_5 = *param_5 / (double)iVar13;
    return;
  }
  *param_3 = 0.0;
  *param_4 = 0.0;
  *param_5 = 0.0;
  return;
}

// ExpandVertexSelectionToNeighbors @ 14c8022c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c802556) */
/* WARNING: Removing unreachable block (ram,0x00014c802567) */
/* WARNING: Removing unreachable block (ram,0x00014c80256b) */

void __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::ExpandVertexSelectionToNeighbors
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_4)

{
  int *piVar1;
  FSmallListSet *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uchar auVar14 [4];
  uchar auVar15 [4];
  uchar auVar16 [4];
  uchar auVar17 [4];
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  uchar uVar24;
  uchar uVar25;
  code *pcVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined ***pppuVar32;
  longlong *plVar33;
  longlong *plVar34;
  undefined1 *puVar35;
  FScriptContainerElement *pFVar36;
  code *pcVar37;
  int iVar38;
  undefined1 auStackY_338 [32];
  undefined1 local_2e8 [4];
  uint local_2e4;
  uint local_2e0;
  int local_2dc;
  int local_2d8 [2];
  int local_2d0;
  uint local_2cc;
  FScriptContainerElement *local_2c8;
  undefined1 local_2c0 [8];
  FDynamicMesh3 *local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2b0;
  FScriptContainerElement *local_2a8;
  code *local_298;
  undefined8 uStack_290;
  FFunctionStorage local_288;
  code *local_268;
  longlong local_258 [3];
  longlong *local_240;
  code *local_238;
  longlong local_228 [3];
  longlong *local_210;
  uint *local_208;
  int *local_200;
  uint local_1f8;
  undefined4 uStack_1f4;
  FDynamicMesh3 *pFStack_1f0;
  uint *local_1e8;
  int *local_1e0;
  code *local_1d8;
  undefined **local_1c8;
  undefined8 local_1c0;
  FDynamicMesh3 *pFStack_1b8;
  undefined ***local_1b0;
  FSmallListSet *local_1a8;
  uint local_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uchar auStack_180 [4];
  uchar auStack_17c [4];
  uchar local_178 [4];
  uchar auStack_174 [4];
  longlong *plStack_170;
  BaseValueIterator local_168;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  FSmallListSet *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2b8 = param_1;
  local_2b0 = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             param_4,param_2->ArrayNum);
  uVar3 = param_2->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_3->ArrayMax;
  if (*piVar1 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
  }
  local_2cc = param_2->ArrayNum;
  uVar31 = (ulonglong)(int)local_2cc;
  iVar28 = 0;
  pFVar36 = (param_2->AllocatorInstance).Data;
  local_2a8 = pFVar36 + uVar31 * 4;
  do {
    pFVar4 = local_2a8;
    local_2c8 = pFVar36;
    if (param_2->ArrayNum != (int)uVar31) {
      local_2e8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2e8);
    }
    if (pFVar36 == pFVar4) {
      return;
    }
    local_2e4 = *(uint *)pFVar36;
    if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
      puVar35 = &param_4->field_0x38;
      if (*(undefined1 **)&param_4->field_0x40 != (undefined1 *)0x0) {
        puVar35 = *(undefined1 **)&param_4->field_0x40;
      }
      iVar29 = *(int *)(puVar35 + (ulonglong)(*(int *)&param_4->field_0x48 - 1U & local_2e4) * 4);
      if (iVar29 != -1) {
        do {
          iVar38 = iVar28;
          if (*(uint *)(*(longlong *)param_4 + (longlong)iVar29 * 0x10) == local_2e4)
          goto LAB_14c8024a0;
          iVar29 = *(int *)(*(longlong *)param_4 + 8 + (longlong)iVar29 * 0x10);
        } while (iVar29 != -1);
      }
    }
    local_208 = &local_2e4;
    local_200 = &local_2dc;
    iVar38 = iVar28 + 1;
    local_2dc = iVar28;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_4,(TPairInitializer<int_const_&,int_&&> *)local_2c0,(bool *)&local_208);
    pFVar36 = (param_3->AllocatorInstance).Data;
    if (((pFVar36 <= (FScriptContainerElement *)&local_2e4) &&
        ((FScriptContainerElement *)&local_2e4 < pFVar36 + (longlong)*piVar1 * 4)) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar27)) {
      pcVar37 = (code *)swi(3);
      (*pcVar37)();
      return;
    }
    iVar28 = param_3->ArrayNum;
    if (iVar28 == *piVar1) {
      iVar28 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_3->AllocatorInstance,piVar1);
    }
    param_3->ArrayNum = iVar28 + 1;
    *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar28 * 4) = local_2e4;
LAB_14c8024a0:
    uVar3 = local_2e4;
    pFStack_1f0 = local_2b8;
    local_1c0 = CONCAT44(uStack_1f4,local_2e4);
    pFVar2 = &local_2b8->VertexEdgeLists;
    local_1b0 = (undefined ***)0x0;
    local_288.HeapAllocation = (longlong *)0x0;
    local_1c8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxVerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AVMappedValueEnumerable_FSmallListSet_45_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_1d8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                ::Call;
    local_298 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,int,int>
                ::Call;
    pFStack_1b8 = local_2b8;
    local_1f8 = local_2e4;
    Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VtxVerticesItr'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_1c8,&local_288);
    auVar16 = auStack_17c;
    auVar14 = auStack_180;
    uVar13 = local_188._4_4_;
    uVar12 = (undefined4)local_188;
    uVar11 = uStack_190;
    plStack_170 = local_288.HeapAllocation;
    uVar8 = local_288.InlineAllocation._12_4_;
    uVar7 = local_288.InlineAllocation._8_4_;
    uVar6 = local_288.InlineAllocation._4_4_;
    uVar5 = local_288.InlineAllocation._0_4_;
    uVar22 = auStack_174[0];
    uVar23 = auStack_174[1];
    uVar24 = auStack_174[2];
    uVar25 = auStack_174[3];
    uVar30._4_1_ = auStack_174[0];
    uVar30._5_1_ = auStack_174[1];
    uVar30._6_1_ = auStack_174[2];
    uVar30._7_1_ = auStack_174[3];
    uVar18 = local_178[0];
    uVar19 = local_178[1];
    uVar20 = local_178[2];
    uVar21 = local_178[3];
    uVar30._0_1_ = local_178[0];
    uVar30._1_1_ = local_178[1];
    uVar30._2_1_ = local_178[2];
    uVar30._3_1_ = local_178[3];
    local_198 = local_298;
    uStack_190 = uStack_290;
    uVar9 = local_288.InlineAllocation._16_4_;
    uVar10 = local_288.InlineAllocation._20_4_;
    local_178[0] = local_288.InlineAllocation[0x10];
    local_178[1] = local_288.InlineAllocation[0x11];
    local_178[2] = local_288.InlineAllocation[0x12];
    local_178[3] = local_288.InlineAllocation[0x13];
    auStack_174[0] = local_288.InlineAllocation[0x14];
    auStack_174[1] = local_288.InlineAllocation[0x15];
    auStack_174[2] = local_288.InlineAllocation[0x16];
    auStack_174[3] = local_288.InlineAllocation[0x17];
    local_1a8 = pFVar2;
    local_1a0 = uVar3;
    local_188._0_1_ = local_288.InlineAllocation[0];
    local_188._1_1_ = local_288.InlineAllocation[1];
    local_188._2_1_ = local_288.InlineAllocation[2];
    local_188._3_1_ = local_288.InlineAllocation[3];
    local_188._4_1_ = local_288.InlineAllocation[4];
    local_188._5_1_ = local_288.InlineAllocation[5];
    local_188._6_1_ = local_288.InlineAllocation[6];
    local_188._7_1_ = local_288.InlineAllocation[7];
    auStack_180[0] = local_288.InlineAllocation[8];
    auStack_180[1] = local_288.InlineAllocation[9];
    auStack_180[2] = local_288.InlineAllocation[10];
    auStack_180[3] = local_288.InlineAllocation[0xb];
    auStack_17c[0] = local_288.InlineAllocation[0xc];
    auStack_17c[1] = local_288.InlineAllocation[0xd];
    auStack_17c[2] = local_288.InlineAllocation[0xe];
    auStack_17c[3] = local_288.InlineAllocation[0xf];
    local_188._0_1_ = (uchar)uVar12;
    local_188._1_1_ = SUB41(uVar12,1);
    local_188._2_1_ = SUB41(uVar12,2);
    local_188._3_1_ = SUB41(uVar12,3);
    local_288.InlineAllocation[0] = (uchar)local_188;
    local_288.InlineAllocation[1] = local_188._1_1_;
    local_288.InlineAllocation[2] = local_188._2_1_;
    local_288.InlineAllocation[3] = local_188._3_1_;
    local_188._4_1_ = (uchar)uVar13;
    local_188._5_1_ = SUB41(uVar13,1);
    local_188._6_1_ = SUB41(uVar13,2);
    local_188._7_1_ = SUB41(uVar13,3);
    local_288.InlineAllocation[4] = local_188._4_1_;
    local_288.InlineAllocation[5] = local_188._5_1_;
    local_288.InlineAllocation[6] = local_188._6_1_;
    local_288.InlineAllocation[7] = local_188._7_1_;
    auStack_180[0] = auVar14[0];
    auStack_180[1] = auVar14[1];
    auStack_180[2] = auVar14[2];
    auStack_180[3] = auVar14[3];
    local_288.InlineAllocation[8] = auStack_180[0];
    local_288.InlineAllocation[9] = auStack_180[1];
    local_288.InlineAllocation[10] = auStack_180[2];
    local_288.InlineAllocation[0xb] = auStack_180[3];
    auStack_17c[0] = auVar16[0];
    auStack_17c[1] = auVar16[1];
    auStack_17c[2] = auVar16[2];
    auStack_17c[3] = auVar16[3];
    local_288.InlineAllocation[0xc] = auStack_17c[0];
    local_288.InlineAllocation[0xd] = auStack_17c[1];
    local_288.InlineAllocation[0xe] = auStack_17c[2];
    local_288.InlineAllocation[0xf] = auStack_17c[3];
    local_288.InlineAllocation[0x10] = uVar18;
    local_288.InlineAllocation[0x11] = uVar19;
    local_288.InlineAllocation[0x12] = uVar20;
    local_288.InlineAllocation[0x13] = uVar21;
    local_288.InlineAllocation[0x14] = uVar22;
    local_288.InlineAllocation[0x15] = uVar23;
    local_288.InlineAllocation[0x16] = uVar24;
    local_288.InlineAllocation[0x17] = uVar25;
    local_288.HeapAllocation = (void *)0x0;
    local_288.InlineAllocation[0x14] = (uchar)uVar10;
    local_288.InlineAllocation[0x15] = SUB41(uVar10,1);
    local_288.InlineAllocation[0x16] = SUB41(uVar10,2);
    local_288.InlineAllocation[0x17] = SUB41(uVar10,3);
    auStack_174[0] = local_288.InlineAllocation[0x14];
    auStack_174[1] = local_288.InlineAllocation[0x15];
    auStack_174[2] = local_288.InlineAllocation[0x16];
    auStack_174[3] = local_288.InlineAllocation[0x17];
    local_288.InlineAllocation[0x10] = (uchar)uVar9;
    local_288.InlineAllocation[0x11] = SUB41(uVar9,1);
    local_288.InlineAllocation[0x12] = SUB41(uVar9,2);
    local_288.InlineAllocation[0x13] = SUB41(uVar9,3);
    local_178[0] = local_288.InlineAllocation[0x10];
    local_178[1] = local_288.InlineAllocation[0x11];
    local_178[2] = local_288.InlineAllocation[0x12];
    local_178[3] = local_288.InlineAllocation[0x13];
    local_288.InlineAllocation[0xc] = (uchar)uVar8;
    local_288.InlineAllocation[0xd] = SUB41(uVar8,1);
    local_288.InlineAllocation[0xe] = SUB41(uVar8,2);
    local_288.InlineAllocation[0xf] = SUB41(uVar8,3);
    auStack_17c[0] = local_288.InlineAllocation[0xc];
    auStack_17c[1] = local_288.InlineAllocation[0xd];
    auStack_17c[2] = local_288.InlineAllocation[0xe];
    auStack_17c[3] = local_288.InlineAllocation[0xf];
    auVar17 = auStack_17c;
    local_288.InlineAllocation[8] = (uchar)uVar7;
    local_288.InlineAllocation[9] = SUB41(uVar7,1);
    local_288.InlineAllocation[10] = SUB41(uVar7,2);
    local_288.InlineAllocation[0xb] = SUB41(uVar7,3);
    auStack_180[0] = local_288.InlineAllocation[8];
    auStack_180[1] = local_288.InlineAllocation[9];
    auStack_180[2] = local_288.InlineAllocation[10];
    auStack_180[3] = local_288.InlineAllocation[0xb];
    auVar15 = auStack_180;
    local_288.InlineAllocation[4] = (uchar)uVar6;
    local_288.InlineAllocation[5] = SUB41(uVar6,1);
    local_288.InlineAllocation[6] = SUB41(uVar6,2);
    local_288.InlineAllocation[7] = SUB41(uVar6,3);
    local_188._4_1_ = local_288.InlineAllocation[4];
    local_188._5_1_ = local_288.InlineAllocation[5];
    local_188._6_1_ = local_288.InlineAllocation[6];
    local_188._7_1_ = local_288.InlineAllocation[7];
    uVar6 = local_188._4_4_;
    local_288.InlineAllocation[0] = (uchar)uVar5;
    local_288.InlineAllocation[1] = SUB41(uVar5,1);
    local_288.InlineAllocation[2] = SUB41(uVar5,2);
    local_288.InlineAllocation[3] = SUB41(uVar5,3);
    local_188._0_1_ = local_288.InlineAllocation[0];
    local_188._1_1_ = local_288.InlineAllocation[1];
    local_188._2_1_ = local_288.InlineAllocation[2];
    local_188._3_1_ = local_288.InlineAllocation[3];
    uVar5 = (undefined4)local_188;
    local_288.HeapAllocation = (void *)0x0;
    auStack_17c[0] = auVar16[0];
    auStack_17c[1] = auVar16[1];
    auStack_17c[2] = auVar16[2];
    auStack_17c[3] = auVar16[3];
    local_288.InlineAllocation[0xc] = auStack_17c[0];
    local_288.InlineAllocation[0xd] = auStack_17c[1];
    local_288.InlineAllocation[0xe] = auStack_17c[2];
    local_288.InlineAllocation[0xf] = auStack_17c[3];
    auStack_180[0] = auVar14[0];
    auStack_180[1] = auVar14[1];
    auStack_180[2] = auVar14[2];
    auStack_180[3] = auVar14[3];
    local_288.InlineAllocation[8] = auStack_180[0];
    local_288.InlineAllocation[9] = auStack_180[1];
    local_288.InlineAllocation[10] = auStack_180[2];
    local_288.InlineAllocation[0xb] = auStack_180[3];
    local_188._4_1_ = (uchar)uVar13;
    local_188._5_1_ = SUB41(uVar13,1);
    local_188._6_1_ = SUB41(uVar13,2);
    local_188._7_1_ = SUB41(uVar13,3);
    local_288.InlineAllocation[4] = local_188._4_1_;
    local_288.InlineAllocation[5] = local_188._5_1_;
    local_288.InlineAllocation[6] = local_188._6_1_;
    local_288.InlineAllocation[7] = local_188._7_1_;
    local_188._0_1_ = (uchar)uVar12;
    local_188._1_1_ = SUB41(uVar12,1);
    local_188._2_1_ = SUB41(uVar12,2);
    local_188._3_1_ = SUB41(uVar12,3);
    local_288.InlineAllocation[0] = (uchar)local_188;
    local_288.InlineAllocation[1] = local_188._1_1_;
    local_288.InlineAllocation[2] = local_188._2_1_;
    local_288.InlineAllocation[3] = local_188._3_1_;
    uStack_290 = uVar11;
    local_298 = (code *)0x0;
    local_288.InlineAllocation._16_8_ = uVar30;
    local_188._0_4_ = uVar5;
    local_188._4_4_ = uVar6;
    auStack_180 = auVar15;
    auStack_17c = auVar17;
    if (local_1d8 != (code *)0x0) {
      pppuVar32 = &local_1c8;
      if (local_1b0 != (undefined ***)0x0) {
        pppuVar32 = local_1b0;
      }
      (*(code *)(*pppuVar32)[2])();
    }
    uVar3 = local_1a0;
    pFVar2 = local_1a8;
    local_268 = local_198;
    local_240 = (longlong *)0x0;
    if (local_198 != (code *)0x0) {
      plVar34 = &local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar34 = plStack_170;
      }
      (**(code **)*plVar34)(plVar34,local_258);
    }
    pcVar37 = local_268;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_168,pFVar2,uVar3,false);
    local_a8 = pcVar37;
    local_138 = (code *)0x0;
    plStack_110 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    if (pcVar37 != (code *)0x0) {
      plVar34 = local_258;
      if (local_240 != (longlong *)0x0) {
        plVar34 = local_240;
      }
      (**(code **)*plVar34)(plVar34,&local_98);
      pcVar37 = local_268;
    }
    plVar34 = plStack_110;
    uVar8 = uStack_11c;
    uVar7 = uStack_120;
    uVar6 = uStack_124;
    uVar5 = local_128;
    uVar11 = uStack_130;
    pcVar26 = local_138;
    uVar30 = CONCAT44(uStack_114,local_118);
    local_138 = local_a8;
    uStack_130 = uStack_a0;
    local_118 = (undefined4)local_88;
    uStack_114 = local_88._4_4_;
    plStack_110 = plStack_80;
    local_128 = local_98;
    uStack_124 = uStack_94;
    uStack_120 = uStack_90;
    uStack_11c = uStack_8c;
    local_a8 = pcVar26;
    uStack_a0 = uVar11;
    local_98 = uVar5;
    uStack_94 = uVar6;
    uStack_90 = uVar7;
    uStack_8c = uVar8;
    local_88 = uVar30;
    plStack_80 = plVar34;
    if (pcVar26 != (code *)0x0) {
      plVar33 = (longlong *)&local_98;
      if (plVar34 != (longlong *)0x0) {
        plVar33 = plVar34;
      }
      (**(code **)(*plVar33 + 0x10))();
      pcVar37 = local_268;
    }
    if (pcVar37 != (code *)0x0) {
      plVar34 = local_258;
      if (local_240 != (longlong *)0x0) {
        plVar34 = local_240;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    uVar3 = local_1a0;
    pFVar2 = local_1a8;
    local_238 = local_198;
    local_210 = (longlong *)0x0;
    if (local_198 != (code *)0x0) {
      plVar34 = &local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar34 = plStack_170;
      }
      (**(code **)*plVar34)(plVar34,local_228);
    }
    local_108 = pFVar2;
    local_100 = uVar3;
    local_fc = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0xffffffffffffffff;
    local_d8 = (code *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_78 = local_238;
    plStack_50 = (longlong *)0x0;
    if (local_238 != (code *)0x0) {
      plVar34 = local_228;
      if (local_210 != (longlong *)0x0) {
        plVar34 = local_210;
      }
      (**(code **)*plVar34)(plVar34,&local_68);
    }
    plVar34 = plStack_b0;
    uVar8 = uStack_bc;
    uVar7 = uStack_c0;
    uVar6 = uStack_c4;
    uVar5 = local_c8;
    uVar11 = uStack_d0;
    pcVar37 = local_d8;
    uVar30 = CONCAT44(uStack_b4,local_b8);
    local_d8 = local_78;
    uStack_d0 = uStack_70;
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    plStack_b0 = plStack_50;
    local_c8 = local_68;
    uStack_c4 = uStack_64;
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    local_78 = pcVar37;
    uStack_70 = uVar11;
    local_68 = uVar5;
    uStack_64 = uVar6;
    uStack_60 = uVar7;
    uStack_5c = uVar8;
    local_58 = uVar30;
    plStack_50 = plVar34;
    if (pcVar37 != (code *)0x0) {
      plVar33 = (longlong *)&local_68;
      if (plVar34 != (longlong *)0x0) {
        plVar33 = plVar34;
      }
      (**(code **)(*plVar33 + 0x10))();
    }
    iVar28 = iVar38;
    if (local_238 != (code *)0x0) {
      plVar34 = local_228;
      if (local_210 != (longlong *)0x0) {
        plVar34 = local_210;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    while (((local_168.ListSet != local_108 || (local_168.ListIndex != local_100)) ||
           ((local_168.iCur != (int)local_f0 || (local_168.cur_ptr != local_f0._4_4_))))) {
      local_2d8[0] = local_168.cur_value;
      Core::Private::Function::CheckCallable(local_138);
      pcVar37 = local_138;
      plVar34 = (longlong *)&local_128;
      if (plStack_110 != (longlong *)0x0) {
        plVar34 = plStack_110;
      }
      uVar30 = (**(code **)(*plVar34 + 8))();
      local_2e0 = (*pcVar37)(uVar30,local_2d8);
      if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
        puVar35 = &param_4->field_0x38;
        if (*(undefined1 **)&param_4->field_0x40 != (undefined1 *)0x0) {
          puVar35 = *(undefined1 **)&param_4->field_0x40;
        }
        iVar29 = *(int *)(puVar35 + (ulonglong)(*(int *)&param_4->field_0x48 - 1U & local_2e0) * 4);
        if (iVar29 != -1) {
          do {
            if (*(uint *)(*(longlong *)param_4 + (longlong)iVar29 * 0x10) == local_2e0)
            goto LAB_14c8029ae;
            iVar29 = *(int *)(*(longlong *)param_4 + 8 + (longlong)iVar29 * 0x10);
          } while (iVar29 != -1);
        }
      }
      local_1e8 = &local_2e0;
      local_1e0 = &local_2d0;
      local_2d0 = iVar28;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_4,(TPairInitializer<int_const_&,int_&&> *)(local_2c0 + 4),
                 (bool *)&local_1e8);
      pFVar36 = (param_3->AllocatorInstance).Data;
      if (((pFVar36 <= (FScriptContainerElement *)&local_2e0) &&
          ((FScriptContainerElement *)&local_2e0 < pFVar36 + (longlong)*piVar1 * 4)) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar27)) {
        pcVar37 = (code *)swi(3);
        (*pcVar37)();
        return;
      }
      iVar29 = param_3->ArrayNum;
      if (iVar29 == *piVar1) {
        iVar29 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar29 + 1;
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar29 * 4) = local_2e0;
      iVar28 = iVar28 + 1;
LAB_14c8029ae:
      FSmallListSet::BaseValueIterator::GotoNext(&local_168);
    }
    if (local_d8 != (code *)0x0) {
      plVar34 = (longlong *)&local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar34 = plStack_b0;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    if (local_138 != (code *)0x0) {
      plVar34 = (longlong *)&local_128;
      if (plStack_110 != (longlong *)0x0) {
        plVar34 = plStack_110;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    if (local_198 != (code *)0x0) {
      plVar34 = &local_188;
      if (plStack_170 != (longlong *)0x0) {
        plVar34 = plStack_170;
      }
      (**(code **)(*plVar34 + 0x10))();
    }
    pFVar36 = local_2c8 + 4;
    uVar31 = (ulonglong)local_2cc;
    param_2 = local_2b0;
  } while( true );
}

// GetAllEdgeLengths @ 14c80d850

void __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetAllEdgeLengths
          (FDynamicMesh3 *param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          double *param_3)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 local_58 [3];
  double local_40;
  
  uVar15 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar16 = (ulonglong)uVar15;
  local_58[0] = __real_bff0000000000000;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar15,&param_2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar15) {
    do {
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar5 + (longlong)*piVar1 * 8)) &&
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
      iVar10 = param_2->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_58[0];
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  *param_3 = 0.0;
  uVar15 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  uVar16 = 0;
  if ((uVar15 != 0) &&
     (pFVar5 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar16 = 1;
    uVar13 = 1;
    if ((int)uVar15 < 2) goto joined_r0x00014c80d9e9;
    do {
      sVar4 = *(short *)(*(longlong *)(pFVar5 + (uVar16 >> 9) * 8) +
                        (ulonglong)((uint)uVar16 & 0x1ff) * 2);
      if ((sVar4 != 0) && (sVar4 != -1)) break;
      uVar13 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar15);
  }
  uVar13 = (uint)uVar16;
joined_r0x00014c80d9e9:
  do {
    if (uVar13 == uVar15) {
      return;
    }
    while( true ) {
      pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
      uVar14 = (uint)uVar16;
      uVar16 = *(ulonglong *)
                (*(longlong *)((param_1->Edges).Blocks.AllocatorInstance.Data + (uVar16 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 0x10);
      uVar12 = (ulonglong)((uint)uVar16 & 0x1ff);
      lVar6 = *(longlong *)(pFVar5 + ((uVar16 & 0xffffffff) >> 9) * 8);
      pdVar2 = (double *)(lVar6 + uVar12 * 0x18);
      uVar11 = (ulonglong)((uint)(uVar16 >> 0x20) & 0x1ff);
      lVar7 = *(longlong *)(pFVar5 + (uVar16 >> 0x29) * 8);
      pdVar3 = (double *)(lVar7 + uVar11 * 0x18);
      local_40 = *(double *)(lVar7 + 0x10 + uVar11 * 0x18);
      dVar17 = *pdVar2 - *pdVar3;
      dVar19 = pdVar2[1] - pdVar3[1];
      dVar18 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18) - local_40;
      uVar13 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(double *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 8) =
           SQRT(dVar19 * dVar19 + dVar17 * dVar17 + dVar18 * dVar18);
      uVar13 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = uVar14 + 1;
      uVar16 = (ulonglong)uVar13;
      *param_3 = *(double *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar14 * 8) +
                 *param_3;
      if ((int)uVar15 <= (int)uVar13) break;
      while( true ) {
        uVar11 = (ulonglong)((uint)uVar16 & 0x1ff);
        lVar6 = *(longlong *)
                 ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar16 >> 9) * 8);
        if ((*(short *)(lVar6 + uVar11 * 2) != 0) && (*(short *)(lVar6 + uVar11 * 2) != -1)) break;
        uVar13 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar13;
        if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014c80d9e9;
      }
    }
  } while( true );
}

// GetTriBounds @ 14c811b00

TAxisAlignedBox3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::MeshAutoRepair::FComponentMesh>::GetTriBounds
          (TAxisAlignedBox3<double> *__return_storage_ptr__,FComponentMesh *param_1,int param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  FComponent *pFVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TAxisAlignedBox3<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint local_b8;
  undefined8 local_a8;
  double local_98;
  undefined8 local_90;
  double local_80;
  
  pFVar4 = param_1->Component;
  pFVar5 = param_1->Mesh;
  uVar10 = 0;
  if (param_2 < (pFVar4->Indices).ArrayNum) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TAxisAlignedBox3<double> *)(*pcVar8)();
    return pTVar11;
  }
  uVar10 = *(uint *)((pFVar4->Indices).AllocatorInstance.Data + (longlong)param_2 * 4);
  uVar12 = (ulonglong)(uVar10 & 0x1ff);
  lVar6 = *(longlong *)
           ((pFVar5->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
  uVar13 = *(ulonglong *)(lVar6 + uVar12 * 0xc);
  uVar10 = *(uint *)(lVar6 + 8 + uVar12 * 0xc);
  pFVar7 = (param_1->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  local_b8 = (uint)uVar13;
  auVar2 = *(undefined1 (*) [16])
            (*(longlong *)(pFVar7 + (ulonglong)(local_b8 >> 9) * 8) +
            (ulonglong)(local_b8 & 0x1ff) * 0x18);
  uVar15 = auVar2._0_4_;
  uVar16 = auVar2._4_4_;
  uVar21 = auVar2._8_4_;
  uVar22 = auVar2._12_4_;
  local_98 = *(double *)
              (*(longlong *)(pFVar7 + (ulonglong)(local_b8 >> 9) * 8) + 0x10 +
              (ulonglong)(local_b8 & 0x1ff) * 0x18);
  uVar12 = (ulonglong)((uint)(uVar13 >> 0x20) & 0x1ff);
  auVar3 = *(undefined1 (*) [16])(*(longlong *)(pFVar7 + (uVar13 >> 0x29) * 8) + uVar12 * 0x18);
  dVar23 = auVar3._0_8_;
  dVar24 = auVar3._8_8_;
  dVar1 = *(double *)(*(longlong *)(pFVar7 + (uVar13 >> 0x29) * 8) + 0x10 + uVar12 * 0x18);
  local_a8 = auVar2._0_8_;
  uVar19 = auVar3._0_4_;
  uVar20 = auVar3._4_4_;
  local_90 = dVar23;
  if ((local_a8 <= dVar23) &&
     (uVar19 = uVar15, uVar20 = uVar16, local_90 = local_a8, local_a8 < dVar23)) {
    uVar15 = auVar3._0_4_;
    uVar16 = auVar3._4_4_;
    local_a8 = dVar23;
  }
  dVar25 = auVar2._8_8_;
  uVar17 = uVar21;
  uVar18 = uVar22;
  dVar23 = dVar25;
  if (dVar25 <= dVar24) {
    if (dVar25 < dVar24) {
      local_a8 = (double)CONCAT44(uVar16,uVar15);
      uVar17 = auVar3._8_4_;
      uVar18 = auVar3._12_4_;
      dVar23 = dVar24;
    }
  }
  else {
    local_90 = (double)CONCAT44(uVar20,uVar19);
    uVar21 = auVar3._8_4_;
    uVar22 = auVar3._12_4_;
    dVar25 = dVar24;
  }
  uVar26 = SUB84(local_98,0);
  uVar27 = (undefined4)((ulonglong)local_98 >> 0x20);
  uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar28 = SUB84(dVar1,0);
  uVar29 = uVar14;
  local_80 = dVar1;
  if ((local_98 <= dVar1) &&
     (uVar28 = uVar26, uVar29 = uVar27, local_80 = local_98, local_98 < dVar1)) {
    uVar26 = SUB84(dVar1,0);
    uVar27 = uVar14;
    local_98 = dVar1;
  }
  uVar13 = (ulonglong)(uVar10 & 0x1ff);
  auVar2 = *(undefined1 (*) [16])
            (*(longlong *)(pFVar7 + (ulonglong)(uVar10 >> 9) * 8) + uVar13 * 0x18);
  dVar24 = auVar2._0_8_;
  dVar1 = *(double *)(*(longlong *)(pFVar7 + (ulonglong)(uVar10 >> 9) * 8) + 0x10 + uVar13 * 0x18);
  if ((double)CONCAT44(uVar20,uVar19) <= dVar24) {
    if ((double)CONCAT44(uVar16,uVar15) <= dVar24 && dVar24 != (double)CONCAT44(uVar16,uVar15)) {
      uVar17 = SUB84(dVar23,0);
      uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
      uVar15 = auVar2._0_4_;
      uVar16 = auVar2._4_4_;
      local_a8 = dVar24;
    }
  }
  else {
    uVar21 = SUB84(dVar25,0);
    uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
    uVar19 = auVar2._0_4_;
    uVar20 = auVar2._4_4_;
    local_90 = dVar24;
  }
  if (dVar25 <= auVar2._8_8_) {
    if (dVar23 < auVar2._8_8_) {
      uVar15 = (undefined4)local_a8;
      uVar16 = local_a8._4_4_;
      uVar17 = auVar2._8_4_;
      uVar18 = auVar2._12_4_;
    }
  }
  else {
    uVar19 = (undefined4)local_90;
    uVar20 = local_90._4_4_;
    uVar21 = auVar2._8_4_;
    uVar22 = auVar2._12_4_;
  }
  dVar23 = dVar1;
  if (((double)CONCAT44(uVar29,uVar28) <= dVar1) &&
     (dVar23 = local_80,
     (double)CONCAT44(uVar27,uVar26) <= dVar1 && dVar1 != (double)CONCAT44(uVar27,uVar26))) {
    local_98 = dVar1;
  }
  local_80 = dVar23;
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar19;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar20;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar21;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar22;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_80;
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar16;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar17;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar18;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_98;
  return __return_storage_ptr__;
}

// GetVolumeArea @ 14c8f9e10

TVector2<double> * __cdecl
UE::Geometry::
TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::GetVolumeArea(TVector2<double> *__return_storage_ptr__,
               TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
               *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TVector2<double> *pTVar16;
  int iVar17;
  longlong lVar18;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  pTVar19 = param_1->SourceTriangles;
  iVar17 = 0;
  dVar8 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar1 = 0.0;
  if (0 < pTVar19->ArrayNum) {
    lVar18 = 0;
    do {
      if ((-1 < iVar17) && (iVar17 < pTVar19->ArrayNum)) {
        if ((iVar17 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TVector2<double> *)(*pcVar5)();
          return pTVar16;
        }
        pFVar2 = (pTVar19->AllocatorInstance).Data;
        pTVar3 = param_1->SourceVertices;
        uVar15 = *(uint *)(pFVar2 + lVar18);
        uVar14 = 0;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TVector2<double> *)(*pcVar5)();
          return pTVar16;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        uVar14 = *(uint *)(pFVar2 + lVar18 + 4);
        pTVar3 = param_1->SourceVertices;
        dVar1 = *(double *)(pFVar4 + (longlong)(int)uVar15 * 0x18 + 0x10);
        pFVar4 = pFVar4 + (longlong)(int)uVar15 * 0x18;
        dVar10 = *(double *)pFVar4;
        dVar22 = *(double *)(pFVar4 + 8);
        uVar15 = 0;
        if ((int)uVar14 < pTVar3->ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TVector2<double> *)(*pcVar5)();
          return pTVar16;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        uVar15 = *(uint *)(pFVar2 + lVar18 + 8);
        pTVar3 = param_1->SourceVertices;
        dVar21 = *(double *)(pFVar4 + (longlong)(int)uVar14 * 0x18 + 0x10);
        pFVar4 = pFVar4 + (longlong)(int)uVar14 * 0x18;
        dVar11 = *(double *)pFVar4;
        dVar23 = *(double *)(pFVar4 + 8);
        uVar14 = 0;
        if ((int)uVar15 < pTVar3->ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          pTVar16 = (TVector2<double> *)(*pcVar5)();
          return pTVar16;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        dVar21 = dVar21 - dVar1;
        dVar7 = dVar11 - dVar10;
        pFVar2 = pFVar4 + (longlong)(int)uVar15 * 0x18;
        dVar12 = *(double *)pFVar2;
        dVar23 = dVar23 - dVar22;
        dVar1 = *(double *)(pFVar4 + (longlong)(int)uVar15 * 0x18 + 0x10) - dVar1;
        dVar6 = dVar12 - dVar10;
        dVar22 = *(double *)(pFVar2 + 8) - dVar22;
        dVar20 = dVar1 * dVar7 - dVar6 * dVar21;
        dVar21 = dVar22 * dVar21 - dVar1 * dVar23;
        dVar1 = dVar6 * dVar23 - dVar22 * dVar7;
        dVar8 = dVar8 + (dVar11 + dVar10 + dVar12) * dVar21;
        dVar9 = dVar9 + SQRT(dVar21 * dVar21 + dVar20 * dVar20 + dVar1 * dVar1);
      }
      pTVar19 = param_1->SourceTriangles;
      iVar17 = iVar17 + 1;
      lVar18 = lVar18 + 0xc;
      dVar10 = dVar8;
      dVar1 = dVar9;
    } while (iVar17 < pTVar19->ArrayNum);
  }
  dVar1 = dVar1 * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar10 * __real_3fc5555555555555;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

