// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 14

// FRecomputeUVsOp @ 14c946cf0

FRecomputeUVsOp * __thiscall UE::Geometry::FRecomputeUVsOp::FRecomputeUVsOp(FRecomputeUVsOp *this)

{
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->bAutoRotate = true;
  this->bPackToOriginalBounds = false;
  this->bNormalizeAreas = true;
  this->_padding_ = (longlong)&___7FRecomputeUVsOp_Geometry_UE__6B_;
  this->NormalSmoothingAlpha = 0.25;
  this->MergingThreshold = 1.5;
  this->CompactnessThreshold = 9999999.0;
  this->MaxNormalDeviationDeg = 45.0;
  (this->InputMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InputMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->InputGroups).Object = (FPolygroupSet *)0x0;
  (this->InputGroups).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->AreaScaling = 1.0;
  this->UVLayer = 0;
  this->bPackUVs = true;
  this->PackingTextureResolution = 0x200;
  this->PackingGutterWidth = 1.0;
  this->UnwrapType = ExpMap;
  this->IslandMode = PolyGroups;
  this->bPreserveIrregularity = false;
  this->NormalSmoothingRounds = 0;
  this->bMergingOptimization = false;
  this->bUDIMsEnabled = false;
  *(undefined8 *)&(this->Selection).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x40) = 0;
  (this->Selection).field0_0x0.TypedValue.HashSize = 0;
  (this->NewResultInfo).Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewResultInfo).Errors.ArrayNum = 0;
  (this->NewResultInfo).Errors.ArrayMax = 0;
  (this->NewResultInfo).Warnings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewResultInfo).Warnings.ArrayNum = 0;
  (this->NewResultInfo).Warnings.ArrayMax = 0;
  (this->NewResultInfo).Result = Success;
  return this;
}

// ~FRecomputeUVsOp @ 14c949760

void __thiscall UE::Geometry::FRecomputeUVsOp::~FRecomputeUVsOp(FRecomputeUVsOp *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FRecomputeUVsOp_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)(this->NewResultInfo).Warnings.AllocatorInstance.Data,
             (this->NewResultInfo).Warnings.ArrayNum);
  pFVar1 = (this->NewResultInfo).Warnings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)(this->NewResultInfo).Errors.AllocatorInstance.Data,
             (this->NewResultInfo).Errors.ArrayNum);
  pFVar1 = (this->NewResultInfo).Errors.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(int *)((longlong)&(this->Selection).field0_0x0 + 0xc) != -1) {
    (this->Selection).field0_0x0.TypedValue.HashSize = 0;
    pvVar2 = *(void **)((longlong)&(this->Selection).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Selection);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputGroups).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMesh).SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// operator() @ 14c94da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FRecomputeUVsOp::NormalizeUVAreas'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  bool *pbVar19;
  undefined8 *puVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  ulonglong uVar24;
  ForElementType<unsigned_int> FVar25;
  ulonglong uVar26;
  longlong lVar27;
  double *pdVar28;
  int *piVar29;
  double *pdVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c7 [7];
  uint local_2c0;
  uint uStack_2bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b8;
  undefined4 local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  int local_298 [4];
  undefined4 local_288;
  int local_284;
  int local_280;
  int local_27c;
  undefined8 *local_278;
  int *local_270;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  longlong *local_240;
  int iStack_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  uint uStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  double local_1e0 [5];
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined4 local_13c;
  undefined1 local_138 [32];
  ForElementType<unsigned_int> local_118;
  uint local_110;
  int local_10c;
  int local_108;
  int local_104;
  FScriptContainerElement local_100 [8];
  ForAnyElementType local_f8;
  uint local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  lVar27 = *(longlong *)this;
  uVar17 = 0;
  iVar22 = *(int *)(lVar27 + 0x20);
  uVar16 = 0;
  if (param_1 < iVar22) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (local_2d8 = (longlong)param_1, local_2d0 = (longlong)iVar22,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_2a0 = 1;
  puVar20 = *(undefined8 **)(*(longlong *)(lVar27 + 0x18) + (longlong)param_1 * 8);
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_118 = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = -1;
  local_104 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  local_278 = puVar20;
  uVar16 = *(int *)(puVar20 + 1) * 3;
  if (uVar16 == 0) goto LAB_14c94ddd2;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_138,uVar16);
  uVar21 = 1;
  if (3 < uVar16) {
    uVar24 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_288 = (int)lVar27;
    uVar21 = 1 << ((byte)lVar27 & 0x1f);
  }
  if ((local_f0 != 0) && ((int)uVar21 <= (int)local_f0)) goto LAB_14c94ddd2;
  local_f0 = uVar21;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,0,4);
  }
  if (uVar21 != 0) {
    uVar16 = uVar21;
    if (uVar21 < 2) {
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_14c94dc0d;
      }
    }
    else {
LAB_14c94dc0d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f8,0,uVar16,4);
    }
    if (0 < (int)uVar21) {
      uVar26 = (ulonglong)uVar21;
      uVar24 = uVar17;
      do {
        FVar15.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_f8.Data;
        }
        uVar12 = (longlong)(int)uVar21 - 1U & uVar24;
        uVar24 = uVar24 + 1;
        *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_f0 != 0) {
    pTStack_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    local_2c0 = 0;
    uStack_2bc = 1;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    if (local_110 != 0) {
      FVar25 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
      if (local_118 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_118;
      }
      uVar16 = *(uint *)FVar25;
      uVar24 = uVar17;
      while (uVar16 == 0) {
        uStack_2a8 = (int)uVar24 + 0x20;
        uVar24 = (ulonglong)uStack_2a8;
        iVar22 = (int)uVar17;
        local_2c0 = iVar22 + 1;
        uVar17 = (ulonglong)local_2c0;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2c0)
        goto LAB_14c94dd2f;
        uVar16 = ((uint *)((longlong)FVar25 + 4))[iVar22];
      }
      uStack_2bc = -uVar16 & uVar16;
      uVar17 = (ulonglong)uStack_2bc * 2 + 1;
      lVar27 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uStack_2ac = (uStack_2a8 - 1) + (int)lVar27;
      uVar17 = (ulonglong)uStack_2ac;
      local_284 = (int)lVar27;
      if ((int)local_110 < (int)uStack_2ac) {
LAB_14c94dd2f:
        uVar17 = (ulonglong)local_110;
        uStack_2ac = local_110;
      }
    }
    local_2b0 = 0xffffffff;
    local_268 = (longlong *)local_138;
    local_260._padding_ = CONCAT44(uStack_2bc,local_2c0);
    local_260.Array = pTStack_2b8;
    local_260.UnvisitedBitMask = 0xffffffff;
    local_260.CurrentBitIndex = uStack_2ac;
    local_260.BaseBitIndex = uStack_2a8;
    local_260._28_4_ = uStack_2a4;
    if ((int)uVar17 < (int)local_110) {
      do {
        lVar27 = *local_268;
        lVar13 = (longlong)(int)uVar17;
        uVar16 = local_f0 - 1 & *(uint *)(lVar27 + lVar13 * 0xc);
        *(uint *)(lVar27 + 8 + lVar13 * 0xc) = uVar16;
        FVar15.Data = local_100;
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_f8.Data;
        }
        uVar24 = (longlong)(int)local_f0 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar27 + 4 + lVar13 * 0xc) = *(undefined4 *)(FVar15.Data + uVar24 * 4);
        *(int *)(FVar15.Data + uVar24 * 4) = (int)uVar17;
        local_260.UnvisitedBitMask = local_260.UnvisitedBitMask & ~local_260._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
        uVar17 = (ulonglong)(uint)local_260.CurrentBitIndex;
      } while (local_260.CurrentBitIndex < (local_260.Array)->NumBits);
    }
  }
LAB_14c94ddd2:
  dVar9 = __real_3fe0000000000000;
  piVar23 = (int *)*puVar20;
  iVar22 = *(int *)(puVar20 + 1);
  piVar29 = piVar23 + iVar22;
  uVar32 = (undefined4)__real_7fefffffffffffff;
  uVar36 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  dVar7 = 0.0;
  dVar8 = 0.0;
  local_270 = piVar29;
  uVar31 = uVar32;
  uVar35 = uVar36;
  dVar5 = __real_ffefffffffffffff;
  dVar37 = __real_ffefffffffffffff;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  while( true ) {
    if (*(int *)(puVar20 + 1) != iVar22) {
      local_2c8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_2c8);
    }
    uVar18 = local_110;
    if (piVar23 == piVar29) break;
    uVar18 = *piVar23 * 3;
    lVar27 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x78);
    local_298[0] = *(int *)(*(longlong *)(lVar27 + (ulonglong)(uVar18 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 4);
    local_298[1] = *(int *)(*(longlong *)(lVar27 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                           (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
    local_298[2] = *(int *)(*(longlong *)(lVar27 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                           (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
    if (((local_298[0] != -1) && (local_298[1] != -1)) && (local_298[2] != -1)) {
      pbVar19 = (bool *)local_298;
      lVar27 = 3;
      pdVar30 = &local_1a8;
      pdVar28 = local_1e0;
      dVar38 = dVar5;
      dVar6 = dVar37;
      do {
        uVar18 = *(uint *)pbVar19;
        lVar13 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x48);
        dVar37 = (double)*(float *)(*(longlong *)
                                     (lVar13 + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar18 * 2 & 0x1ff) * 4);
        fVar2 = *(float *)(*(longlong *)(lVar13 + (ulonglong)((uVar18 & 0x7fffffff) >> 8) * 8) +
                          (ulonglong)(uVar18 * 2 + 1 & 0x1ff) * 4);
        *pdVar28 = dVar37;
        dVar5 = (double)fVar2;
        dVar39 = dVar37;
        if ((double)CONCAT44(uVar35,uVar31) <= dVar37) {
          dVar39 = (double)CONCAT44(uVar35,uVar31);
        }
        pdVar28[1] = dVar5;
        if (dVar37 <= dVar6) {
          dVar37 = dVar6;
        }
        uVar31 = SUB84(dVar39,0);
        uVar35 = (undefined4)((ulonglong)dVar39 >> 0x20);
        dVar6 = dVar5;
        if ((double)CONCAT44(uVar36,uVar32) <= dVar5) {
          dVar6 = (double)CONCAT44(uVar36,uVar32);
        }
        if (dVar5 <= dVar38) {
          dVar5 = dVar38;
        }
        uVar32 = SUB84(dVar6,0);
        uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uVar18 = *(uint *)(*(longlong *)
                            (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
                            (ulonglong)(*(uint *)pbVar19 >> 9) * 8) +
                          (ulonglong)(*(uint *)pbVar19 & 0x1ff) * 4);
        uVar17 = (ulonglong)(uVar18 & 0x1ff);
        lVar13 = *(longlong *)
                  (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10) +
                  (ulonglong)(uVar18 >> 9) * 8);
        pdVar1 = (double *)(lVar13 + uVar17 * 0x18);
        dVar6 = pdVar1[1];
        dVar38 = *(double *)(lVar13 + 0x10 + uVar17 * 0x18);
        *pdVar30 = *pdVar1;
        pdVar30[1] = dVar6;
        pdVar30[2] = dVar38;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_280,
                   pbVar19);
        pbVar19 = pbVar19 + 4;
        pdVar28 = pdVar28 + 2;
        pdVar30 = pdVar30 + 3;
        lVar27 = lVar27 + -1;
        dVar38 = dVar5;
        dVar6 = dVar37;
      } while (lVar27 != 0);
      dVar38 = (local_1b8 - local_1e0[1]) * (local_1e0[2] - local_1e0[0]) -
               (local_1e0[3] - local_1e0[1]) * (local_1e0[4] - local_1e0[0]);
      dVar7 = dVar7 + (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar21,
                                       SUB84(dVar38,0) & uVar16) * dVar9;
      dVar6 = (local_168 - local_198) * (local_190 - local_1a8) -
              (local_180 - local_198) * (local_178 - local_1a8);
      auVar33._0_8_ = (local_188 - dStack_1a0) * (local_168 - local_198);
      auVar33._8_8_ = 0;
      dVar39 = (local_188 - dStack_1a0) * (local_178 - local_1a8) -
               (local_170 - dStack_1a0) * (local_190 - local_1a8);
      dVar38 = (local_170 - dStack_1a0) * (local_180 - local_198) - auVar33._0_8_;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar38 * dVar38 + dVar6 * dVar6 + dVar39 * dVar39;
      auVar34 = sqrtpd(auVar33,auVar34);
      dVar8 = dVar8 + auVar34._0_8_ * dVar9;
      puVar20 = local_278;
      piVar29 = local_270;
      uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    }
    piVar23 = piVar23 + 1;
  }
  dVar38 = __real_3ff0000000000000;
  if (__real_3ee4f8b588e368f1 < dVar7) {
    dVar38 = (__real_3ff0000000000000 / SQRT(dVar7)) * SQRT(dVar8);
  }
  iStack_238 = 0;
  local_220 = 0;
  dVar38 = dVar38 * (double)**(float **)((longlong)this + 0x18);
  uStack_224 = 0;
  if (local_110 == 0) {
LAB_14c94e243:
    uStack_234 = (uint)local_2a0;
  }
  else {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_118;
    }
    uStack_234 = *(uint *)FVar25;
    while (uStack_234 == 0) {
      lVar27 = (longlong)iStack_238;
      local_220 = local_220 + 0x20;
      iStack_238 = iStack_238 + 1;
      uStack_224 = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_238)
      goto LAB_14c94e243;
      uStack_234 = ((uint *)((longlong)FVar25 + 4))[lVar27];
    }
    uStack_234 = -uStack_234 & uStack_234;
    uVar17 = (ulonglong)uStack_234 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uStack_224 = local_220 + -1 + (int)lVar27;
    local_27c = (int)lVar27;
    if ((int)local_110 < (int)uStack_224) {
      uStack_224 = local_110;
    }
  }
  local_240 = (longlong *)local_138;
  uStack_21c = local_13c;
  local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  uVar16 = local_110 & 0xffffffe0;
  uStack_228 = 0xffffffff;
  iStack_218 = local_138._8_4_ - local_104;
  local_210 = (longlong *)local_138;
  TStack_208._padding_ = CONCAT44(uStack_234,iStack_238);
  iVar22 = (int)local_110 >> 5;
  bVar14 = (byte)local_110;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
  TStack_208.UnvisitedBitMask = 0xffffffff;
  TStack_208.CurrentBitIndex = uStack_224;
  TStack_208.BaseBitIndex = local_220;
  TStack_208._28_4_ = local_13c;
  uStack_1e8 = CONCAT44(uStack_214,local_138._8_4_ - local_104);
  if (((int)local_110 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar18 != local_110) {
    FVar25 = (ForElementType<unsigned_int>)((longlong)local_138 + 0x10);
    if (local_118 != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_118;
    }
    uVar21 = -1 << (bVar14 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar22 * 4);
    while (uVar21 == 0) {
      lVar27 = (longlong)iVar22;
      uVar16 = uVar16 + 0x20;
      iVar22 = iVar22 + 1;
      uVar18 = local_110;
      if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14c94e35d;
      uVar21 = ((uint *)((longlong)FVar25 + 4))[lVar27];
    }
    uVar17 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar18 = (uVar16 - 1) + (int)lVar27;
    if ((int)local_110 < (int)uVar18) {
      uVar18 = local_110;
    }
  }
LAB_14c94e35d:
  while( true ) {
    plVar10 = local_210;
    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)uStack_1e8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2c7);
    }
    if (((TStack_208.CurrentBitIndex == uVar18) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
       (plVar10 == (longlong *)local_138)) break;
    uVar16 = *(uint *)(*plVar10 + (longlong)TStack_208.CurrentBitIndex * 0xc);
    lVar27 = **(longlong **)((longlong)this + 8);
    uVar17 = (ulonglong)((uVar16 & 0x7fffffff) >> 8);
    lVar13 = *(longlong *)(lVar27 + 0x48);
    uVar24 = (ulonglong)(uVar16 * 2 + 1 & 0x1ff);
    uVar26 = (ulonglong)(uVar16 * 2 & 0x1ff);
    lVar3 = *(longlong *)(lVar13 + (ulonglong)((uVar16 & 0x7fffffff) >> 8) * 8);
    fVar2 = *(float *)(*(longlong *)(lVar13 + uVar17 * 8) + uVar24 * 4);
    *(float *)(lVar3 + uVar26 * 4) =
         (float)(((double)*(float *)(lVar3 + uVar26 * 4) -
                 (dVar37 + (double)CONCAT44(uVar35,uVar31)) * dVar9) * dVar38);
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    *(float *)(*(longlong *)(*(longlong *)(lVar27 + 0x48) + uVar17 * 8) + uVar24 * 4) =
         (float)(((double)fVar2 - ((double)CONCAT44(uVar36,uVar32) + dVar5) * dVar9) * dVar38);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
  local_f0 = 0;
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  return;
}

// operator() @ 14c953db0

bool __thiscall
`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = UE::Geometry::FPolygroupSet::GetTriangleGroup(*(FPolygroupSet **)(lVar1 + 0x98),param_1);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar6 = UE::Geometry::FPolygroupSet::GetTriangleGroup(*(FPolygroupSet **)(lVar1 + 0x98),param_2);
  return iVar5 == iVar6;
}

// operator() @ 14c953e70

void __thiscall
`UE::Geometry::FRecomputeUVsOp::CalculateResult_RegionOptimization'::__l33::<lambda_1>::operator()
          (void *this,int param_1)

{
  char *pcVar1;
  code *pcVar2;
  FDynamicMeshUVEditor *this_00;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  pcVar1 = (char *)**(undefined8 **)this;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar7 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar7 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar3 = (*pcVar2)(uVar6);
    *pcVar1 = cVar3;
    if (cVar3 != '\0') {
      return;
    }
  }
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar5 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)param_1 + *plVar7) != '\0') {
    this_00 = *(FDynamicMeshUVEditor **)((longlong)this + 0x10);
    plVar7 = *(longlong **)((longlong)this + 0x18);
    uVar5 = 0;
    if (param_1 < (int)plVar7[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Geometry::FDynamicMeshUVEditor::AutoOrientUVArea
              (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((longlong)param_1 * 0x10 + *plVar7));
  }
  return;
}

// operator() @ 14c954310

void __thiscall
`UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l49::<lambda_1>::operator()
          (void *this,int param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  
  pcVar1 = (char *)**(undefined8 **)this;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar8 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar8 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar3 = (*pcVar2)(uVar6);
    *pcVar1 = cVar3;
    if (cVar3 != '\0') {
      return;
    }
  }
  plVar8 = *(longlong **)((longlong)this + 8);
  uVar5 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)param_1 + *plVar8) != '\0') {
    pTVar7 = &UE::Geometry::FMeshConnectedComponents::operator[]
                        ((FMeshConnectedComponents *)(*(longlong *)((longlong)this + 0x10) + 0x10),
                         param_1)->Indices;
    UE::Geometry::FDynamicMeshUVEditor::AutoOrientUVArea
              (*(FDynamicMeshUVEditor **)((longlong)this + 0x18),pTVar7);
  }
  return;
}

// operator() @ 14c9577e0

bool __thiscall
`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = UE::Geometry::FPolygroupSet::GetTriangleGroup(*(FPolygroupSet **)(lVar1 + 0x98),param_1);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar6 = UE::Geometry::FPolygroupSet::GetTriangleGroup(*(FPolygroupSet **)(lVar1 + 0x98),param_2);
  return iVar5 == iVar6;
}

// operator() @ 14c9578a0

void __thiscall
`UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l55::<lambda_2>::operator()
          (void *this,int param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  
  pcVar1 = (char *)**(undefined8 **)this;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar8 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar8 = *(longlong **)(pcVar1 + 0x98);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    cVar3 = (*pcVar2)(uVar6);
    *pcVar1 = cVar3;
    if (cVar3 != '\0') {
      return;
    }
  }
  plVar8 = *(longlong **)((longlong)this + 8);
  uVar5 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)param_1 + *plVar8) != '\0') {
    pTVar7 = &UE::Geometry::FMeshConnectedComponents::operator[]
                        ((FMeshConnectedComponents *)(*(longlong *)((longlong)this + 0x10) + 0x10),
                         param_1)->Indices;
    plVar8 = *(longlong **)((longlong)this + 0x18);
    uVar5 = 0;
    if (param_1 < (int)plVar8[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Geometry::FDynamicMeshUVEditor::ScaleUVAreaToBoundingBox
              (*(FDynamicMeshUVEditor **)((longlong)this + 0x20),pTVar7,
               (TAxisAlignedBox2<float> *)((longlong)param_1 * 0x10 + *plVar8),true,true);
  }
  return;
}

// CalculateResult @ 14c967bc0

void __thiscall
UE::Geometry::FRecomputeUVsOp::CalculateResult(FRecomputeUVsOp *this,FProgressCancel *param_1)

{
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  EGeometryResultType EVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 local_30 [2];
  undefined8 local_20 [3];
  
  pTVar1 = &(this->NewResultInfo).Errors;
  (this->NewResultInfo).Result = InProgress;
  if (pTVar1 != (TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *)local_30) {
    DestructItems<UE::Geometry::FGeometryError,int>
              ((FGeometryError *)(pTVar1->AllocatorInstance).Data,
               (this->NewResultInfo).Errors.ArrayNum);
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NewResultInfo).Errors.ArrayNum = 0;
    (this->NewResultInfo).Errors.ArrayMax = 0;
  }
  pTVar2 = &(this->NewResultInfo).Warnings;
  if (pTVar2 != (TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *)local_20) {
    DestructItems<UE::Geometry::FGeometryWarning,int>
              ((FGeometryWarning *)(pTVar2->AllocatorInstance).Data,
               (this->NewResultInfo).Warnings.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NewResultInfo).Warnings.ArrayNum = 0;
    (this->NewResultInfo).Warnings.ArrayMax = 0;
  }
  DestructItems<UE::Geometry::FGeometryWarning,int>((FGeometryWarning *)0x0,0);
  DestructItems<UE::Geometry::FGeometryError,int>((FGeometryError *)0x0,0);
  cVar6 = '\0';
  if ((this->bPackToOriginalBounds == false) ||
     ((this->bMergingOptimization == false && (this->IslandMode != PolyGroups)))) {
    if (this->bMergingOptimization == false) {
      cVar6 = (**(code **)(this->_padding_ + 0x20))(this,param_1);
    }
    else {
      cVar6 = (**(code **)(this->_padding_ + 0x28))();
    }
  }
  if (param_1 == (FProgressCancel *)0x0) {
LAB_14c967cdb:
    EVar8 = Failure;
    if (cVar6 != '\0') {
      EVar8 = Success;
    }
  }
  else {
    if (param_1->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar4 = *(code **)&param_1->CancelF;
      plVar5 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar10 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar10 = plVar5;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      bVar7 = (bool)(*pcVar4)(uVar9);
      param_1->WasCancelled = bVar7;
      if (bVar7 == false) goto LAB_14c967cdb;
    }
    EVar8 = Cancelled;
  }
  (this->NewResultInfo).Result = EVar8;
                    /* WARNING: Could not recover jumptable at 0x00014c967d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,&this->NewResultInfo);
  return;
}

// CalculateResult_Basic @ 14c9739a0

bool __thiscall
UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic(FRecomputeUVsOp *this,FProgressCancel *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ERecomputeUVsUnwrapType EVar7;
  FDynamicMesh3 *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  float fVar12;
  FProgressCancel *pFVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  TileConnectedComponents *pTVar15;
  bool bVar16;
  undefined1 uVar17;
  FScriptContainerElement FVar18;
  int iVar19;
  uint uVar20;
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  FText *pFVar24;
  FGeometryError *pFVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  FProgressCancel *local_res10;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  bool local_1f8 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_1f0;
  uint local_1e0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1d8;
  TileConnectedComponents *local_1d0;
  uint local_1c8;
  ForAnyElementType local_1c0;
  int local_1b8 [2];
  TArray<UE::Geometry::TileConnectedComponents,TSizedDefaultAllocator<32>_> local_1b0;
  uint local_1a0;
  uint local_19c;
  FDynamicMeshUVEditor local_198;
  longlong local_180;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_178;
  TileConnectedComponents *local_170;
  FExpMapOptions local_168;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  FProgressCancel ***local_140;
  TArrayView<std::nullptr_t,int> local_138;
  code *local_128;
  FProgressCancel ***local_120;
  FProgressCancel **local_118;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_110;
  TileConnectedComponents *local_108;
  FDynamicMeshUVEditor *local_100;
  FProgressCancel **local_f8;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_f0;
  TileConnectedComponents *local_e8;
  ForAnyElementType *local_e0;
  FDynamicMeshUVEditor *local_d8;
  longlong local_d0;
  FText local_c8;
  FGeometryError local_b8 [2];
  
  pFVar8 = (this->InputMesh).Object;
  if (pFVar8 == (FDynamicMesh3 *)0x0) {
    return false;
  }
  local_res10 = param_1;
  this_00 = ::operator_new(0x230);
  pFVar21 = (FDynamicMesh3 *)0x0;
  if (this_00 != (FDynamicMesh3 *)0x0) {
    pFVar21 = FDynamicMesh3::FDynamicMesh3(this_00,pFVar8);
  }
  plVar10 = &this->_padding_;
  if (plVar10 == &local_d0) {
    if (pFVar21 != (FDynamicMesh3 *)0x0) {
      puVar22 = (undefined8 *)pFVar21->_padding_;
      goto LAB_14c973a1f;
    }
  }
  else {
    pFVar8 = (FDynamicMesh3 *)*plVar10;
    *plVar10 = (longlong)pFVar21;
    if (pFVar8 != (FDynamicMesh3 *)0x0) {
      puVar22 = (undefined8 *)pFVar8->_padding_;
      pFVar21 = pFVar8;
LAB_14c973a1f:
      (*(code *)*puVar22)(pFVar21,1);
    }
  }
  FDynamicMeshUVEditor::FDynamicMeshUVEditor
            (&local_198,(FDynamicMesh3 *)*plVar10,this->UVLayer,true);
  local_178 = local_198.UVOverlay;
  if (local_198.UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar16 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3259108668393652451>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\ParameterizationOps\\RecomputeUVsOp.cpp"
                        ,0xe3,"UseOverlay != nullptr");
    if (bVar16) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return (bool)uVar17;
    }
  }
  else if ((local_res10 == (FProgressCancel *)0x0) ||
          (bVar16 = FProgressCancel::Cancelled(local_res10), !bVar16)) {
    local_res18[0] = false;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    CollectIslandComponentsPerTile(this,local_198.UVOverlay,&local_1b0,local_res18);
    if ((local_res10 != (FProgressCancel *)0x0) &&
       (bVar16 = FProgressCancel::Cancelled(local_res10), bVar16)) {
      bVar16 = false;
LAB_14c974515:
      DestructItems<UE::Geometry::TileConnectedComponents,int>
                ((TileConnectedComponents *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
      if ((TileConnectedComponents *)local_1b0.AllocatorInstance.Data !=
          (TileConnectedComponents *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      return bVar16;
    }
    fVar12 = __real_3f800000;
    uVar26 = (ulonglong)local_1b0.ArrayNum;
    local_170 = (TileConnectedComponents *)(local_1b0.AllocatorInstance.Data + uVar26 * 0x30);
    local_19c = local_1b0.ArrayNum;
    FVar28.Data = local_1b0.AllocatorInstance.Data;
    pTVar31 = local_198.UVOverlay;
LAB_14c973b48:
    pTVar15 = local_170;
    local_1d0 = (TileConnectedComponents *)FVar28.Data;
    if (local_1b0.ArrayNum != (int)uVar26) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::TileConnectedComponents,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if ((TileConnectedComponents *)FVar28.Data == pTVar15) {
      bVar16 = true;
      goto LAB_14c974515;
    }
    uVar34 = (((TileConnectedComponents *)FVar28.Data)->ConnectedComponents).Components.Array.
             ArrayNum;
    uVar26 = 0;
    local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.ArrayNum = 0;
    local_1f0.ArrayMax = 0;
    local_1f8[0] = false;
    local_1e0 = uVar34;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_1f0,local_1f8,uVar34);
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    if ((int)uVar34 < 1) {
      if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
      }
    }
    else {
      iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,uVar34,&local_1c0,local_1b8,local_1b8 + 1);
      DefaultConstructItems<UE::Geometry::TAxisAlignedBox2<float>,int>
                (local_1c0.Data + (longlong)iVar19 * 0x10,uVar34);
      local_1c8 = 0;
      local_180 = 0;
      uVar33 = uVar26;
      do {
        lVar32 = local_180;
        uVar29 = (uint)uVar26;
        uVar34 = ~uVar29 >> 0x1f;
        uVar20 = 0;
        if ((int)uVar29 <
            (((TileConnectedComponents *)FVar28.Data)->ConnectedComponents).Components.Array.
            ArrayNum) {
          uVar20 = uVar34;
        }
        local_1a0 = uVar34;
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_1d8 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                     ((((TileConnectedComponents *)FVar28.Data)->ConnectedComponents).Components.
                      Array.AllocatorInstance.Data + lVar32 * 8);
        uVar20 = 0;
        if ((int)uVar29 < local_1b8[0]) {
          uVar20 = uVar34;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        FVar28.Data = local_1c0.Data;
        pTVar14 = local_1d8;
        if (this->bPackToOriginalBounds != false) {
          pFVar30 = (local_1d8->AllocatorInstance).Data;
          iVar19 = local_1d8->ArrayNum;
          pFVar1 = pFVar30 + (longlong)iVar19 * 4;
          while( true ) {
            if (pTVar14->ArrayNum != iVar19) {
              local_1f8[1] = false;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_1f8 + 1);
            }
            lVar32 = local_180;
            uVar34 = local_1a0;
            uVar29 = local_1c8;
            if (pFVar30 == pFVar1) break;
            uVar20 = *(int *)pFVar30 * 3;
            lVar32 = *(longlong *)&local_178->field_0x78;
            uVar34 = *(uint *)(*(longlong *)(lVar32 + (ulonglong)(uVar20 >> 9) * 8) +
                              (ulonglong)(uVar20 & 0x1ff) * 4);
            if (-1 < (int)uVar34) {
              lVar9 = *(longlong *)&local_178->field_0x48;
              fVar36 = *(float *)(*(longlong *)(lVar9 + (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8)
                                 + (ulonglong)(uVar34 * 2 & 0x1ff) * 4);
              fVar2 = *(float *)(*(longlong *)(lVar9 + (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar34 * 2 + 1 & 0x1ff) * 4);
              uVar34 = *(uint *)(*(longlong *)(lVar32 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                                (ulonglong)(uVar20 + 1 & 0x1ff) * 4);
              fVar3 = *(float *)(*(longlong *)(lVar9 + (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar34 * 2 & 0x1ff) * 4);
              fVar4 = *(float *)(*(longlong *)(lVar9 + (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar34 * 2 + 1 & 0x1ff) * 4);
              uVar34 = *(uint *)(*(longlong *)(lVar32 + (ulonglong)(uVar20 + 2 >> 9) * 8) +
                                (ulonglong)(uVar20 + 2 & 0x1ff) * 4);
              fVar5 = *(float *)(*(longlong *)(lVar9 + (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar34 * 2 & 0x1ff) * 4);
              fVar6 = *(float *)(*(longlong *)(lVar9 + (ulonglong)((uVar34 & 0x7fffffff) >> 8) * 8)
                                + (ulonglong)(uVar34 * 2 + 1 & 0x1ff) * 4);
              fVar38 = *(float *)(FVar28.Data + uVar33);
              if (fVar36 < *(float *)(FVar28.Data + uVar33)) {
                *(float *)(FVar28.Data + uVar33) = fVar36;
                fVar38 = fVar36;
              }
              fVar37 = *(float *)(FVar28.Data + uVar33 + 8);
              if (*(float *)(FVar28.Data + uVar33 + 8) < fVar36) {
                *(float *)(FVar28.Data + uVar33 + 8) = fVar36;
                fVar37 = fVar36;
              }
              fVar36 = *(float *)(FVar28.Data + uVar33 + 4);
              if (fVar2 < *(float *)(FVar28.Data + uVar33 + 4)) {
                *(float *)(FVar28.Data + uVar33 + 4) = fVar2;
                fVar36 = fVar2;
              }
              fVar35 = *(float *)(FVar28.Data + uVar33 + 0xc);
              if (*(float *)(FVar28.Data + uVar33 + 0xc) < fVar2) {
                *(float *)(FVar28.Data + uVar33 + 0xc) = fVar2;
                fVar35 = fVar2;
              }
              if (fVar3 < fVar38) {
                *(float *)(FVar28.Data + uVar33) = fVar3;
                fVar38 = fVar3;
              }
              if (fVar37 < fVar3) {
                *(float *)(FVar28.Data + uVar33 + 8) = fVar3;
                fVar37 = fVar3;
              }
              if (fVar4 < fVar36) {
                *(float *)(FVar28.Data + uVar33 + 4) = fVar4;
                fVar36 = fVar4;
              }
              if (fVar35 < fVar4) {
                *(float *)(FVar28.Data + uVar33 + 0xc) = fVar4;
                fVar35 = fVar4;
              }
              if (fVar5 < fVar38) {
                *(float *)(FVar28.Data + uVar33) = fVar5;
              }
              if (fVar37 < fVar5) {
                *(float *)(FVar28.Data + uVar33 + 8) = fVar5;
              }
              if (fVar6 < fVar36) {
                *(float *)(FVar28.Data + uVar33 + 4) = fVar6;
              }
              if (fVar35 < fVar6) {
                *(float *)(FVar28.Data + uVar33 + 0xc) = fVar6;
              }
            }
            pFVar30 = pFVar30 + 4;
          }
        }
        uVar20 = 0;
        if ((int)uVar29 < local_1f0.ArrayNum) {
          uVar20 = uVar34;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        local_1f0.AllocatorInstance.Data[lVar32] = (FScriptContainerElement)0x0;
        EVar7 = this->UnwrapType;
        if (EVar7 == ExpMap) {
          local_168.NormalSmoothingRounds = this->NormalSmoothingRounds;
          local_168.NormalSmoothingAlpha = this->NormalSmoothingAlpha;
          FVar18 = (FScriptContainerElement)
                   FDynamicMeshUVEditor::SetTriangleUVsFromExpMap
                             (&local_198,local_1d8,&local_168,(FUVEditResult *)0x0);
          uVar20 = 0;
          if ((int)uVar29 < local_1f0.ArrayNum) {
            uVar20 = uVar34;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          local_1f0.AllocatorInstance.Data[lVar32] = FVar18;
        }
        else {
          if (EVar7 == ConformalFreeBoundary) {
            FVar18 = (FScriptContainerElement)
                     FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundaryConformal
                               (&local_198,local_1d8,local_res18[0],(FUVEditResult *)0x0);
          }
          else {
            if (EVar7 != SpectralConformal) goto LAB_14c9740c6;
            FVar18 = (FScriptContainerElement)
                     FDynamicMeshUVEditor::SetTriangleUVsFromFreeBoundarySpectralConformal
                               (&local_198,local_1d8,local_res18[0],this->bPreserveIrregularity,
                                (FUVEditResult *)0x0);
          }
          uVar20 = 0;
          if ((int)uVar29 < local_1f0.ArrayNum) {
            uVar20 = uVar34;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          local_1f0.AllocatorInstance.Data[lVar32] = FVar18;
          uVar20 = 0;
          if ((int)uVar29 < local_1f0.ArrayNum) {
            uVar20 = uVar34;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return (bool)uVar17;
          }
          if (local_1f0.AllocatorInstance.Data[lVar32] != (FScriptContainerElement)0x0) {
            FDynamicMeshUVEditor::ScaleUVAreaTo3DArea(&local_198,local_1d8,true,fVar12);
          }
        }
LAB_14c9740c6:
        uVar20 = 0;
        if ((int)uVar29 < local_1f0.ArrayNum) {
          uVar20 = uVar34;
        }
        if ((uVar20 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
        pFVar13 = local_res10;
        if (local_res10 != (FProgressCancel *)0x0) {
          if (local_res10->WasCancelled != false) goto LAB_14c9744f1;
          Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
          plVar10 = *(longlong **)&(pFVar13->CancelF).field_0x28;
          pcVar11 = *(code **)&pFVar13->CancelF;
          plVar27 = (longlong *)&(pFVar13->CancelF).field_0x10;
          if (plVar10 != (longlong *)0x0) {
            plVar27 = plVar10;
          }
          (**(code **)(*plVar27 + 8))();
          bVar16 = (bool)(*pcVar11)();
          pFVar13->WasCancelled = bVar16;
          if (bVar16 != false) goto LAB_14c9744f1;
        }
        local_1c8 = uVar29 + 1;
        uVar26 = (ulonglong)local_1c8;
        local_180 = lVar32 + 1;
        uVar33 = uVar33 + 0x10;
        FVar28.Data = (FScriptContainerElement *)local_1d0;
        pTVar31 = local_178;
        uVar34 = local_1e0;
      } while ((int)local_1c8 < (int)local_1e0);
    }
    if (this->bAutoRotate != false) {
      local_118 = &local_res10;
      local_158.DataPtr = (void **)0x0;
      local_110 = &local_1f0;
      local_158.ArrayNum = 0;
      local_100 = &local_198;
      local_148 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l49::<lambda_1>,void,int>
                  ::Call;
      local_140 = &local_118;
      local_108 = (TileConnectedComponents *)FVar28.Data;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",uVar34,1,(TFunctionRef<void___cdecl(int)> *)&local_148,
                 SUB81(this,0),None,&local_158);
    }
    pFVar13 = local_res10;
    if (local_res10 != (FProgressCancel *)0x0) {
      if (local_res10->WasCancelled != false) goto LAB_14c9744f1;
      Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
      plVar10 = *(longlong **)&(pFVar13->CancelF).field_0x28;
      pcVar11 = *(code **)&pFVar13->CancelF;
      plVar27 = (longlong *)&(pFVar13->CancelF).field_0x10;
      if (plVar10 != (longlong *)0x0) {
        plVar27 = plVar10;
      }
      (**(code **)(*plVar27 + 8))();
      bVar16 = (bool)(*pcVar11)();
      pFVar13->WasCancelled = bVar16;
      if (bVar16 != false) goto LAB_14c9744f1;
    }
    pTVar15 = local_1d0;
    if (this->bPackToOriginalBounds != false) {
      local_f8 = &local_res10;
      local_e8 = local_1d0;
      local_f0 = &local_1f0;
      local_138.DataPtr = (void **)0x0;
      local_e0 = &local_1c0;
      local_138.ArrayNum = 0;
      local_d8 = &local_198;
      local_128 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CalculateResult_Basic'::__l55::<lambda_2>,void,int>
                  ::Call;
      local_120 = &local_f8;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_1e0,1,(TFunctionRef<void___cdecl(int)> *)&local_128,
                 SUB81(this,0),None,&local_138);
    }
    pFVar13 = local_res10;
    if (local_res10 != (FProgressCancel *)0x0) {
      if (local_res10->WasCancelled != false) goto LAB_14c9744f1;
      Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
      plVar10 = *(longlong **)&(pFVar13->CancelF).field_0x28;
      pcVar11 = *(code **)&pFVar13->CancelF;
      plVar27 = (longlong *)&(pFVar13->CancelF).field_0x10;
      if (plVar10 != (longlong *)0x0) {
        plVar27 = plVar10;
      }
      uVar23 = (**(code **)(*plVar27 + 8))();
      bVar16 = (bool)(*pcVar11)(uVar23);
      pFVar13->WasCancelled = bVar16;
      if (bVar16 != false) goto LAB_14c9744f1;
    }
    if (this->bNormalizeAreas != false) {
      NormalizeUVAreas(this,(FDynamicMesh3 *)this->_padding_,pTVar31,pTVar15,this->AreaScaling);
    }
    pFVar13 = local_res10;
    if (local_res10 != (FProgressCancel *)0x0) {
      if (local_res10->WasCancelled != false) goto LAB_14c9744f1;
      Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
      plVar10 = *(longlong **)&(pFVar13->CancelF).field_0x28;
      pcVar11 = *(code **)&pFVar13->CancelF;
      plVar27 = (longlong *)&(pFVar13->CancelF).field_0x10;
      if (plVar10 != (longlong *)0x0) {
        plVar27 = plVar10;
      }
      uVar23 = (**(code **)(*plVar27 + 8))();
      bVar16 = (bool)(*pcVar11)(uVar23);
      pFVar13->WasCancelled = bVar16;
      if (bVar16 != false) goto LAB_14c9744f1;
    }
    if (this->bPackUVs != false) {
      if ((pTVar15->TileTids).ArrayNum < 1) {
        bVar16 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3259108668393652596>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\ParameterizationOps\\RecomputeUVsOp.cpp"
                            ,0x174,"TileComponents.TileTids.Num() > 0");
        if (bVar16) {
          pcVar11 = (code *)swi(3);
          uVar17 = (*pcVar11)();
          return (bool)uVar17;
        }
      }
      else {
        bVar16 = FDynamicMeshUVEditor::UDIMPack
                           (&local_198,this->PackingTextureResolution,this->PackingGutterWidth,
                            &pTVar15->Tile,&pTVar15->TileTids);
        if (!bVar16) {
          pFVar24 = FText::AsLocalizable_Advanced_LocText
                              (&local_c8,L"RecomputeUVsOp",L"IslandPackingFailed",
                               L"Failed to pack UV islands");
          pFVar25 = FGeometryError::FGeometryError(local_b8,0,pFVar24);
          FGeometryResult::AddError(&this->NewResultInfo,pFVar25);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          }
LAB_14c9744f1:
          if (local_1c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data);
          }
          if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.AllocatorInstance.Data);
          }
          bVar16 = false;
          goto LAB_14c974515;
        }
      }
    }
    pFVar13 = local_res10;
    if (local_res10 != (FProgressCancel *)0x0) {
      if (local_res10->WasCancelled != false) goto LAB_14c9744f1;
      Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
      plVar10 = *(longlong **)&(pFVar13->CancelF).field_0x28;
      pcVar11 = *(code **)&pFVar13->CancelF;
      plVar27 = (longlong *)&(pFVar13->CancelF).field_0x10;
      if (plVar10 != (longlong *)0x0) {
        plVar27 = plVar10;
      }
      uVar23 = (**(code **)(*plVar27 + 8))();
      bVar16 = (bool)(*pcVar11)(uVar23);
      pFVar13->WasCancelled = bVar16;
      if (bVar16 != false) goto LAB_14c9744f1;
    }
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    FVar28.Data = (FScriptContainerElement *)(local_1d0 + 1);
    uVar26 = (ulonglong)local_19c;
    goto LAB_14c973b48;
  }
  return false;
}

// CalculateResult_RegionOptimization @ 14c975590

bool __thiscall
UE::Geometry::FRecomputeUVsOp::CalculateResult_RegionOptimization
          (FRecomputeUVsOp *this,FProgressCancel *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FGeometryWarning,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  FGeometryWarning *pFVar4;
  code *pcVar5;
  double dVar6;
  <lambda_1> <Var7;
  FProgressCancel *pFVar8;
  TileConnectedComponents *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  FText *pFVar16;
  FGeometryError *pFVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ForAnyElementType FVar20;
  FDynamicMesh3 *pFVar21;
  <lambda_1> local_res8 [8];
  FProgressCancel *local_res10;
  undefined1 local_res18 [8];
  float local_res20 [2];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_288;
  TArray<UE::Geometry::TileConnectedComponents,TSizedDefaultAllocator<32>_> local_278;
  uint local_268;
  TArray<bool,TSizedDefaultAllocator<32>_> local_260;
  FDynamicMesh3 *local_250;
  FGeometryWarning local_248;
  undefined1 local_218 [8];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_210;
  TileConnectedComponents *local_208;
  TArrayView<std::nullptr_t,int> local_200;
  code *local_1f0;
  FProgressCancel ***local_1e8;
  TArrayView<std::nullptr_t,int> local_1e0;
  code *local_1d0;
  TileConnectedComponents **local_1c8;
  FPatchBasedMeshUVGenerator local_1b8;
  FDynamicMeshUVEditor local_158;
  FProgressCancel **local_140;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_138;
  FDynamicMeshUVEditor *local_130;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_128;
  TileConnectedComponents *local_120;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_118;
  longlong local_110;
  float *local_108;
  longlong local_100 [2];
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FGeometryError local_c0;
  FGeometryError local_90;
  
  pFVar21 = (this->InputMesh).Object;
  if (pFVar21 == (FDynamicMesh3 *)0x0) {
    return false;
  }
  local_res10 = param_1;
  this_00 = ::operator_new(0x230);
  pFVar13 = (FDynamicMesh3 *)0x0;
  if (this_00 != (FDynamicMesh3 *)0x0) {
    pFVar13 = FDynamicMesh3::FDynamicMesh3(this_00,pFVar21);
  }
  plVar3 = &this->_padding_;
  if (plVar3 == local_100) {
    if (pFVar13 == (FDynamicMesh3 *)0x0) goto LAB_14c975616;
    puVar14 = (undefined8 *)pFVar13->_padding_;
  }
  else {
    pFVar21 = (FDynamicMesh3 *)*plVar3;
    *plVar3 = (longlong)pFVar13;
    if (pFVar21 == (FDynamicMesh3 *)0x0) goto LAB_14c975616;
    puVar14 = (undefined8 *)pFVar21->_padding_;
    pFVar13 = pFVar21;
  }
  (*(code *)*puVar14)(pFVar13,1);
LAB_14c975616:
  pFVar21 = (FDynamicMesh3 *)*plVar3;
  local_250 = pFVar21;
  FDynamicMeshUVEditor::FDynamicMeshUVEditor(&local_158,pFVar21,this->UVLayer,true);
  if (local_158.UVOverlay == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3259108668393652633>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\ParameterizationOps\\RecomputeUVsOp.cpp"
                        ,0x199,"UseOverlay != nullptr");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  else if ((local_res10 == (FProgressCancel *)0x0) ||
          (bVar10 = FProgressCancel::Cancelled(local_res10), !bVar10)) {
    local_res8[0] = (<lambda_1>)0x0;
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    CollectIslandComponentsPerTile(this,local_158.UVOverlay,&local_278,(bool *)local_res8);
    if ((local_res10 == (FProgressCancel *)0x0) ||
       (bVar10 = FProgressCancel::Cancelled(local_res10), !bVar10)) {
      <Var7 = local_res8[0];
      dVar6 = __real_3ff0000000000000;
      uVar18 = (ulonglong)local_278.ArrayNum;
      local_208 = (TileConnectedComponents *)(local_278.AllocatorInstance.Data + uVar18 * 0x30);
      local_268 = local_278.ArrayNum;
      FVar20.Data = local_278.AllocatorInstance.Data;
      while( true ) {
        pTVar9 = local_208;
        if (local_278.ArrayNum != (int)uVar18) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::TileConnectedComponents,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if ((TileConnectedComponents *)FVar20.Data == pTVar9) {
          bVar10 = true;
          goto LAB_14c975d99;
        }
        local_1b8.MergingThreshold = this->MergingThreshold;
        local_1b8.CompactnessThreshold = this->CompactnessThreshold;
        local_1b8.NormalSmoothingRounds = this->NormalSmoothingRounds;
        local_1b8.MaxNormalDeviationDeg = this->MaxNormalDeviationDeg;
        local_1b8.NormalSmoothingAlpha = this->NormalSmoothingAlpha;
        local_1b8.PatchNormalWeight = dVar6;
        local_1b8.GroupConstraint = (FPolygroupSet *)0x0;
        local_1b8.TargetPatchCount = 100;
        local_1b8.bNormalWeightedPatches = true;
        local_1b8.MinPatchSize = 2;
        local_1b8.bAutoAlignPatches = true;
        local_1b8.bAutoPack = true;
        local_1b8.PackingTextureResolution = 0x200;
        local_1b8.PackingGutterWidth = 1.0;
        local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.ArrayNum = 0;
        local_288.ArrayMax = 0;
        bVar10 = FPatchBasedMeshUVGenerator::ComputeIslandsByRegionMerging
                           (&local_1b8,pFVar21,local_158.UVOverlay,
                            &((TileConnectedComponents *)FVar20.Data)->ConnectedComponents,
                            &local_288,local_res10);
        pFVar8 = local_res10;
        if (!bVar10) {
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_d0,L"RecomputeUVsOp",L"IslandMergingFailed",
                               L"Failed to merge UV islands");
          pFVar17 = FGeometryError::FGeometryError(&local_90,0,pFVar16);
          FGeometryResult::AddError(&this->NewResultInfo,pFVar17);
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          goto LAB_14c975d5e;
        }
        if (local_res10 != (FProgressCancel *)0x0) {
          if (local_res10->WasCancelled != false) goto LAB_14c975d5e;
          Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
          plVar3 = *(longlong **)&(pFVar8->CancelF).field_0x28;
          pcVar5 = *(code **)&pFVar8->CancelF;
          plVar19 = (longlong *)&(pFVar8->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar19 = plVar3;
          }
          uVar15 = (**(code **)(*plVar19 + 8))();
          bVar10 = (bool)(*pcVar5)(uVar15);
          pFVar8->WasCancelled = bVar10;
          if (bVar10 != false) goto LAB_14c975d5e;
        }
        local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.ArrayNum = 0;
        local_260.ArrayMax = 0;
        iVar12 = FPatchBasedMeshUVGenerator::ComputeUVsFromTriangleSets
                           (&local_1b8,local_250,local_158.UVOverlay,&local_288,&local_260,
                            local_res10);
        if (0 < iVar12) {
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_f0,L"RecomputeUVsOp",L"PartialSolvesFailed",
                               L"Failed to compute UVs for some UV islands");
          local_248.WarningCode = 0;
          local_248.Message.TextData.Reference = (pFVar16->TextData).Reference;
          if (local_248.Message.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_248.Message.TextData.Reference + 8))
                      (local_248.Message.TextData.Reference,local_218);
          }
          local_248.Message.Flags = pFVar16->Flags;
          local_248.Timestamp.Ticks = 0;
          local_248.CustomData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.CustomData.ArrayNum = 0;
          local_248.CustomData.ArrayMax = 0;
          local_248.Timestamp = FDateTime::Now();
          pTVar2 = &(this->NewResultInfo).Warnings;
          pFVar4 = (FGeometryWarning *)(pTVar2->AllocatorInstance).Data;
                    /* WARNING: Load size is inaccurate */
          local_248.Timestamp.Ticks = *local_248.Timestamp.Ticks;
          if (((pFVar4 <= &local_248) &&
              (&local_248 < pFVar4 + (this->NewResultInfo).Warnings.ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
          iVar12 = (this->NewResultInfo).Warnings.ArrayNum;
          piVar1 = &(this->NewResultInfo).Warnings.ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->NewResultInfo).Warnings.ArrayNum = iVar12 + 1;
          FGeometryWarning::FGeometryWarning
                    ((FGeometryWarning *)
                     ((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x30),&local_248);
          if (local_248.CustomData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.CustomData.AllocatorInstance.Data);
          }
          if (local_248.Message.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_248.Message.TextData.Reference + 0x10))();
          }
          if (local_f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
          }
        }
        pFVar8 = local_res10;
        if (local_res10 != (FProgressCancel *)0x0) {
          if (local_res10->WasCancelled != false) goto LAB_14c975cfa;
          Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
          plVar3 = *(longlong **)&(pFVar8->CancelF).field_0x28;
          pcVar5 = *(code **)&pFVar8->CancelF;
          plVar19 = (longlong *)&(pFVar8->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar19 = plVar3;
          }
          (**(code **)(*plVar19 + 8))();
          bVar10 = (bool)(*pcVar5)();
          pFVar8->WasCancelled = bVar10;
          if (bVar10 != false) goto LAB_14c975cfa;
        }
        if (this->bAutoRotate != false) {
          local_140 = &local_res10;
          local_138 = &local_260;
          local_130 = &local_158;
          local_200.DataPtr = (void **)0x0;
          local_128 = &local_288;
          local_200.ArrayNum = 0;
          local_1f0 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CalculateResult_RegionOptimization'::__l33::<lambda_1>,void,int>
                      ::Call;
          local_1e8 = &local_140;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",local_288.ArrayNum,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_1f0,<Var7,None,&local_200);
        }
        pFVar8 = local_res10;
        if (local_res10 != (FProgressCancel *)0x0) {
          if (local_res10->WasCancelled != false) goto LAB_14c975cfa;
          Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
          plVar3 = *(longlong **)&(pFVar8->CancelF).field_0x28;
          pcVar5 = *(code **)&pFVar8->CancelF;
          plVar19 = (longlong *)&(pFVar8->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar19 = plVar3;
          }
          (**(code **)(*plVar19 + 8))();
          bVar10 = (bool)(*pcVar5)();
          pFVar8->WasCancelled = bVar10;
          if (bVar10 != false) goto LAB_14c975cfa;
        }
        if (this->bNormalizeAreas != false) {
          local_res20[0] = this->AreaScaling;
          local_118 = &local_210;
          local_110 = this->_padding_;
          local_108 = local_res20;
          local_1d0 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::NormalizeUVAreas'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_1c8 = &local_120;
          local_1e0.DataPtr = (void **)0x0;
          local_1e0.ArrayNum = 0;
          local_210 = local_158.UVOverlay;
          local_120 = (TileConnectedComponents *)FVar20.Data;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",
                     (((TileConnectedComponents *)FVar20.Data)->ConnectedComponents).Components.
                     Array.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_1d0,<Var7,None,
                     &local_1e0);
        }
        pFVar8 = local_res10;
        if (local_res10 != (FProgressCancel *)0x0) {
          if (local_res10->WasCancelled != false) goto LAB_14c975cfa;
          Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
          plVar3 = *(longlong **)&(pFVar8->CancelF).field_0x28;
          pcVar5 = *(code **)&pFVar8->CancelF;
          plVar19 = (longlong *)&(pFVar8->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar19 = plVar3;
          }
          uVar15 = (**(code **)(*plVar19 + 8))();
          bVar10 = (bool)(*pcVar5)(uVar15);
          pFVar8->WasCancelled = bVar10;
          if (bVar10 != false) goto LAB_14c975cfa;
        }
        if ((this->bPackUVs != false) &&
           (bVar10 = FDynamicMeshUVEditor::UDIMPack
                               (&local_158,this->PackingTextureResolution,this->PackingGutterWidth,
                                &((TileConnectedComponents *)FVar20.Data)->Tile,
                                (TArray<int,TSizedDefaultAllocator<32>_> *)FVar20.Data), !bVar10))
        break;
        pFVar8 = local_res10;
        if (local_res10 != (FProgressCancel *)0x0) {
          if (local_res10->WasCancelled != false) goto LAB_14c975cfa;
          Core::Private::Function::CheckCallable(*(void **)&local_res10->CancelF);
          plVar3 = *(longlong **)&(pFVar8->CancelF).field_0x28;
          pcVar5 = *(code **)&pFVar8->CancelF;
          plVar19 = (longlong *)&(pFVar8->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar19 = plVar3;
          }
          uVar15 = (**(code **)(*plVar19 + 8))();
          bVar10 = (bool)(*pcVar5)(uVar15);
          pFVar8->WasCancelled = bVar10;
          if (bVar10 != false) goto LAB_14c975cfa;
        }
        if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.AllocatorInstance.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)local_288.AllocatorInstance.Data,
                   local_288.ArrayNum);
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_288.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_288.AllocatorInstance.Data);
        }
        FVar20.Data = FVar20.Data + 0x30;
        uVar18 = (ulonglong)local_268;
        pFVar21 = local_250;
      }
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_e0,L"RecomputeUVsOp",L"IslandPackingFailed",
                           L"Failed to pack UV islands");
      pFVar17 = FGeometryError::FGeometryError(&local_c0,0,pFVar16);
      FGeometryResult::AddError(&this->NewResultInfo,pFVar17);
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
LAB_14c975cfa:
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
LAB_14c975d5e:
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_288.AllocatorInstance.Data,
                 local_288.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_288.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_288.AllocatorInstance.Data);
      }
      bVar10 = false;
    }
    else {
      bVar10 = false;
    }
LAB_14c975d99:
    DestructItems<UE::Geometry::TileConnectedComponents,int>
              ((TileConnectedComponents *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
    if ((TileConnectedComponents *)local_278.AllocatorInstance.Data !=
        (TileConnectedComponents *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    return bVar10;
  }
  return false;
}

// CollectIslandComponentsPerTile @ 14c9778c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile
          (FRecomputeUVsOp *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TArray<UE::Geometry::TileConnectedComponents,TSizedDefaultAllocator<32>_> *param_2,
          bool *param_3)

{
  FVector2i_u_0 *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  TFunction<bool___cdecl(int,int)> *pTVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  undefined1 auStackY_318 [32];
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_2b0;
  FRecomputeUVsOp *local_2a0;
  FMeshConnectedComponents local_298;
  undefined8 local_280;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_278;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>_u_0 local_270;
  TArray<UE::Geometry::TileConnectedComponents,TSizedDefaultAllocator<32>_> *local_260;
  int *local_258;
  undefined8 local_250;
  undefined8 local_248;
  bool *local_240;
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> local_228;
  TArray<int,TSizedDefaultAllocator<32>_> local_218;
  TArray<int,TSizedDefaultAllocator<32>_> local_208;
  code *local_1f8 [2];
  undefined **local_1e8;
  FRecomputeUVsOp *local_1e0;
  undefined8 local_1d0;
  code *local_1c8 [2];
  undefined **local_1b8;
  FRecomputeUVsOp *local_1b0;
  undefined8 local_1a0;
  code *local_198 [2];
  undefined **local_188;
  FRecomputeUVsOp *local_180;
  undefined8 local_170;
  code *local_168 [2];
  undefined **local_158;
  FRecomputeUVsOp *local_150;
  undefined8 local_140;
  code *local_138 [2];
  undefined **local_128;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_120;
  undefined8 local_110;
  code *local_108 [2];
  undefined **local_f8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_f0;
  undefined8 local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [88];
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  *param_3 = false;
  local_2a0 = this;
  local_278 = param_1;
  local_260 = param_2;
  local_240 = param_3;
  DestructItems<UE::Geometry::TileConnectedComponents,int>
            ((TileConnectedComponents *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar14 = (FScriptContainerElement *)0x0;
  piVar18 = &param_2->ArrayMax;
  iVar6 = 0;
  param_2->ArrayNum = 0;
  local_258 = piVar18;
  if (*piVar18 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_2->AllocatorInstance,0,piVar18);
  }
  iVar4 = *(int *)((longlong)&(this->Selection).field0_0x0 + 0xc);
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  local_2c8.Data = (FScriptContainerElement *)0x0;
  local_2c0 = 0;
  if (this->bUDIMsEnabled == false) {
    if (iVar4 == -1) {
      local_248 = 0;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
      local_280 = 0;
      local_2b0.ArrayNum = iVar6 + 1;
      *(undefined8 *)(local_2b0.AllocatorInstance.Data + (longlong)iVar6 * 8) = 0;
      if (((local_2c8.Data <= (FScriptContainerElement *)&local_280) &&
          ((FScriptContainerElement *)&local_280 < local_2c8.Data + (longlong)local_2c0._4_4_ * 8))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = (int)local_2c0;
      if ((int)local_2c0 == local_2c0._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_2c8,(int *)((longlong)&local_2c0 + 4));
      }
      local_2c0 = CONCAT44(local_2c0._4_4_,iVar6 + 1);
      *(undefined8 *)(local_2c8.Data + (longlong)iVar6 * 8) = local_280;
      local_280 = 0;
    }
    else {
      local_250 = 0;
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
      local_2b0.ArrayNum = iVar6 + 1;
      *(undefined8 *)(local_2b0.AllocatorInstance.Data + (longlong)iVar6 * 8) = 0;
      if ((*(int *)((longlong)&(this->Selection).field0_0x0 + 0xc) == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                         ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->Selection,
                          &local_208);
      pFVar10 = ::operator_new(0x10);
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)&pFVar10->field_0x0 = 0;
        *(FScriptContainerElement **)&pFVar10->field_0x0 = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar10 + 8) = pTVar7->ArrayNum;
        *(int *)(pFVar10 + 0xc) = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
        pFVar14 = pFVar10;
      }
      iVar6 = (int)local_2c0;
      if ((int)local_2c0 == local_2c0._4_4_) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_2c8,(int *)((longlong)&local_2c0 + 4));
      }
      local_2c0 = CONCAT44(local_2c0._4_4_,iVar6 + 1);
      *(FScriptContainerElement **)(local_2c8.Data + (longlong)iVar6 * 8) = pFVar14;
      this = local_2a0;
      if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
        this = local_2a0;
      }
    }
  }
  else {
    iVar17 = -1;
    if (iVar4 != -1) {
      pTVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                         ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->Selection,
                          &local_238);
      iVar6 = 0;
      if (pTVar7 != &local_d8) {
        pFVar14 = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar17 = pTVar7->ArrayMax;
        iVar6 = pTVar7->ArrayNum;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
        if ((iVar17 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
    }
    local_270.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_270.TypedValue.ArrayNum = 0;
    local_270.TypedValue.ArrayMax = -1;
    if (iVar17 != -1) {
      local_270.TypedValue.ArrayNum = iVar6;
      if (iVar6 == 0) {
        local_270.TypedValue.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar6,0,&local_270.TypedValue.AllocatorInstance,iVar6,
                   &local_270.TypedValue.ArrayMax);
        memcpy((void *)local_270.TypedValue.AllocatorInstance.Data,pFVar14,(longlong)iVar6 << 2);
      }
    }
    FDynamicMeshUDIMClassifier::FDynamicMeshUDIMClassifier
              ((FDynamicMeshUDIMClassifier *)local_c8,param_1,
               (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *)&local_270.TypedValue);
    pTVar8 = FDynamicMeshUDIMClassifier::ActiveTiles
                       ((FDynamicMeshUDIMClassifier *)local_c8,&local_228);
    if (&local_2b0 != pTVar8) {
      if ((FVector2i_u_0 *)local_2b0.AllocatorInstance.Data != (FVector2i_u_0 *)0x0) {
        FMemory::Free(local_2b0.AllocatorInstance.Data);
      }
      local_2b0.AllocatorInstance.Data = (pTVar8->AllocatorInstance).Data;
      (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_2b0.ArrayNum = pTVar8->ArrayNum;
      local_2b0.ArrayMax = pTVar8->ArrayMax;
      pTVar8->ArrayNum = 0;
      pTVar8->ArrayMax = 0;
    }
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
    iVar6 = local_2b0.ArrayNum;
    uVar11 = (ulonglong)local_2b0.ArrayNum;
    pFVar1 = (FVector2i_u_0 *)(local_2b0.AllocatorInstance.Data + uVar11 * 8);
    FVar15.Data = local_2b0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar6) {
        local_2b8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FVector2i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2b8);
      }
      if ((FVector2i_u_0 *)FVar15.Data == pFVar1) break;
      pTVar7 = FDynamicMeshUDIMClassifier::TidsForTile
                         ((FDynamicMeshUDIMClassifier *)local_c8,&local_218,
                          (FVector2i)*(FVector2i_u_0_s_0 *)FVar15.Data);
      puVar9 = ::operator_new(0x10);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        *puVar9 = 0;
        *puVar9 = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar9 + 1) = pTVar7->ArrayNum;
        *(int *)((longlong)puVar9 + 0xc) = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      iVar4 = (int)local_2c0;
      if ((int)local_2c0 == local_2c0._4_4_) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_2c8,(int *)((longlong)&local_2c0 + 4));
      }
      local_2c0 = CONCAT44(local_2c0._4_4_,iVar4 + 1);
      *(undefined8 **)(local_2c8.Data + (longlong)iVar4 * 8) = puVar9;
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
      }
      uVar11 = local_2b0._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector2i,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_c8 + 0x18));
    if ((local_c8._20_4_ != -1) &&
       ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_c8._8_8_);
    }
    param_1 = local_278;
    this = local_2a0;
    param_2 = local_260;
    piVar18 = local_258;
    if ((iVar17 != -1) && (pFVar14 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar14);
      param_1 = local_278;
      this = local_2a0;
      param_2 = local_260;
      piVar18 = local_258;
    }
  }
  uVar12 = 0;
  uVar11 = uVar12;
  if (0 < local_2b0.ArrayNum) {
    do {
      local_298.Mesh = (FDynamicMesh3 *)this->_padding_;
      uVar19 = (uint)uVar12;
      uVar13 = ~uVar19 >> 0x1f;
      local_298.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.Components.Array.ArrayNum = 0;
      local_298.Components.Array.ArrayMax = 0;
      uVar5 = 0;
      if (this->IslandMode == PolyGroups) {
        if ((this->InputGroups).Object == (FPolygroupSet *)0x0) {
          if ((int)uVar19 < (int)local_2c0) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (*(longlong *)(local_2c8.Data + uVar11) != 0) {
            local_170 = 0;
            local_188 = &Core::Private::Function::
                         TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`37'::<lambda_3>,0,0>
                         ::_vftable_;
            local_198[0] = Core::Private::Function::
                           TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l37::<lambda_3>,bool,int,int>
                           ::Call;
            uVar5 = 0;
            if ((int)uVar19 < (int)local_2c0) {
              uVar5 = uVar13;
            }
            local_180 = this;
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar16 = (TFunction<bool___cdecl(int,int)> *)local_198;
            goto LAB_14c977d36;
          }
          local_140 = 0;
          local_158 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`39'::<lambda_4>,0,0>
                       ::_vftable_;
          local_168[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l39::<lambda_4>,bool,int,int>
                         ::Call;
          local_150 = this;
          FMeshConnectedComponents::FindConnectedTriangles
                    (&local_298,(TFunction<bool___cdecl(int,int)> *)local_168);
        }
        else {
          if ((int)uVar19 < (int)local_2c0) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (*(longlong *)(local_2c8.Data + uVar11) == 0) {
            local_1a0 = 0;
            local_1b8 = &Core::Private::Function::
                         TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`32'::<lambda_2>,0,0>
                         ::_vftable_;
            local_1c8[0] = Core::Private::Function::
                           TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l32::<lambda_2>,bool,int,int>
                           ::Call;
            local_1b0 = this;
            FMeshConnectedComponents::FindConnectedTriangles
                      (&local_298,(TFunction<bool___cdecl(int,int)> *)local_1c8);
          }
          else {
            local_1d0 = 0;
            local_1e8 = &Core::Private::Function::
                         TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`30'::<lambda_1>,0,0>
                         ::_vftable_;
            local_1f8[0] = Core::Private::Function::
                           TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l30::<lambda_1>,bool,int,int>
                           ::Call;
            uVar5 = 0;
            if ((int)uVar19 < (int)local_2c0) {
              uVar5 = uVar13;
            }
            local_1e0 = this;
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pTVar16 = (TFunction<bool___cdecl(int,int)> *)local_1f8;
LAB_14c977d36:
            FMeshConnectedComponents::FindConnectedTriangles
                      (&local_298,
                       *(TArray<int,TSizedDefaultAllocator<32>_> **)(local_2c8.Data + uVar11),
                       pTVar16);
          }
        }
      }
      else {
        if ((int)uVar19 < (int)local_2c0) {
          uVar5 = uVar13;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (*(longlong *)(local_2c8.Data + uVar11) == 0) {
          local_e0 = 0;
          local_f8 = &Core::Private::Function::
                      TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`46'::<lambda_6>,0,0>
                      ::_vftable_;
          local_108[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l46::<lambda_6>,bool,int,int>
                         ::Call;
          local_f0 = param_1;
          FMeshConnectedComponents::FindConnectedTriangles
                    (&local_298,(TFunction<bool___cdecl(int,int)> *)local_108);
        }
        else {
          local_110 = 0;
          local_128 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::`44'::<lambda_5>,0,0>
                       ::_vftable_;
          local_138[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::CollectIslandComponentsPerTile'::__l44::<lambda_5>,bool,int,int>
                         ::Call;
          uVar5 = 0;
          if ((int)uVar19 < (int)local_2c0) {
            uVar5 = uVar13;
          }
          local_120 = param_1;
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FMeshConnectedComponents::FindConnectedTriangles
                    (&local_298,
                     *(TArray<int,TSizedDefaultAllocator<32>_> **)(local_2c8.Data + uVar11),
                     (TFunction<bool___cdecl(int,int)> *)local_138);
        }
        *local_240 = true;
      }
      iVar6 = 0;
      FVar15.Data = local_298.Components.Array.AllocatorInstance.Data;
      if (local_298.Components.Array.ArrayNum != 0) {
        uVar5 = 0;
        if ((int)uVar19 < local_2b0.ArrayNum) {
          uVar5 = uVar13;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar14 = local_2b0.AllocatorInstance.Data + (longlong)(int)uVar19 * 8;
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar18) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_2->AllocatorInstance,piVar18);
        }
        param_2->ArrayNum = iVar6 + 1;
        TileConnectedComponents::TileConnectedComponents
                  ((TileConnectedComponents *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x30),&local_298,
                   (FVector2i *)pFVar14);
        iVar6 = local_298.Components.Array.ArrayNum;
        FVar15.Data = local_298.Components.Array.AllocatorInstance.Data;
      }
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar9 = *(undefined8 **)FVar15.Data;
        if (puVar9 != (undefined8 *)0x0) {
          if ((void *)*puVar9 != (void *)0x0) {
            FMemory::Free((void *)*puVar9);
          }
          ::operator_delete(puVar9,0x10);
        }
        FVar15.Data = FVar15.Data + 8;
      }
      uVar12 = (ulonglong)local_298.Components.Array._8_8_ >> 0x20;
      local_298.Components.Array._8_8_ = local_298.Components.Array._8_8_ & 0xffffffff00000000;
      if ((int)uVar12 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&local_298.Components,0,
                   &local_298.Components.Array.ArrayMax);
      }
      if (local_298.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Components.Array.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)(uVar19 + 1);
      param_1 = local_278;
      this = local_2a0;
      uVar11 = uVar11 + 8;
    } while ((int)(uVar19 + 1) < local_2b0.ArrayNum);
  }
  DestructItems<TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>,int>
            ((TUniquePtr<TArray<int,TSizedDefaultAllocator<32>_>,TDefaultDelete<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              *)local_2c8.Data,(int)local_2c0);
  if (local_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data);
  }
  if ((FVector2i_u_0 *)local_2b0.AllocatorInstance.Data != (FVector2i_u_0 *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
  return;
}

// IsValid @ 14c981bb0

bool __thiscall UE::Geometry::FRecomputeUVsOp::IsValid(FRecomputeUVsOp *this)

{
  if (this->bPackToOriginalBounds == false) {
    return true;
  }
  if (this->bMergingOptimization == false) {
    return this->IslandMode != PolyGroups;
  }
  return false;
}

// NormalizeUVAreas @ 14c982eb0

void __thiscall
UE::Geometry::FRecomputeUVsOp::NormalizeUVAreas
          (FRecomputeUVsOp *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          TileConnectedComponents *param_3,float param_4)

{
  <lambda_1> local_res10;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18 [2];
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  TileConnectedComponents **local_30;
  TileConnectedComponents *local_28;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_20;
  FDynamicMesh3 *local_18;
  float *local_10;
  
  local_20 = local_res18;
  local_48.DataPtr = (void **)0x0;
  local_10 = &param_4;
  local_48.ArrayNum = 0;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FRecomputeUVsOp::NormalizeUVAreas'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = &local_28;
  local_res18[0] = param_2;
  local_28 = param_3;
  local_18 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(param_3->ConnectedComponents).Components.Array.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_38,local_res10,None,&local_48);
  return;
}

