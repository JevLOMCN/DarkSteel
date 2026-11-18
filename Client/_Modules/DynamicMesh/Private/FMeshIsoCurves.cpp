// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// operator() @ 14c7bc9b0

void __thiscall
`UE::Geometry::FMeshIsoCurves::Cut'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_res10 [2];
  
  lVar1 = *(longlong *)((longlong)this + 0x10);
  if (((param_1 < 0) || (*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar1 + 0x28) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    uVar6 = *(undefined4 *)((longlong)this + 0x20);
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
  }
  else {
    local_res10[0] = param_1;
    uVar6 = (*(code *)**(undefined8 **)((longlong)this + 0x18))
                      ((*(undefined8 **)((longlong)this + 0x18))[1],local_res10);
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)(*plVar2 + (longlong)param_1 * 4) = uVar6;
  return;
}

// Cut @ 14c7fd560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshIsoCurves::Cut
          (FMeshIsoCurves *this,FDynamicMesh3 *param_1,TFunctionRef<float___cdecl(int)> *param_2,
          TFunctionRef<float___cdecl(int,int,float,float)> *param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_138 [32];
  <lambda_1> local_f8;
  TArray<float,TSizedDefaultAllocator<32>_> local_f0;
  code *local_e0;
  FMeshIsoCurves **local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  FMeshIsoCurves *local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_b8;
  FDynamicMesh3 *local_b0;
  TFunctionRef<float___cdecl(int)> *local_a8;
  float local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar2 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
          (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&local_f0.AllocatorInstance,&local_f0.ArrayNum,&local_f0.ArrayMax);
  }
  local_b8 = &local_f0;
  local_a0 = param_4;
  local_e0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshIsoCurves::Cut'::__l2::<lambda_1>,void,int>::
             Call;
  local_d8 = &local_c0;
  local_d0.DataPtr = (void **)0x0;
  local_d0.ArrayNum = 0;
  local_c0 = this;
  local_b0 = param_1;
  local_a8 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",uVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_e0,local_f8,None,
             &local_d0);
  local_e0 = *(code **)param_3;
  local_d8 = *(FMeshIsoCurves ***)&param_3->field_0x8;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  SplitCrossingEdges(this,param_1,&local_f0,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                     (TFunctionRef<float___cdecl(int,int,float,float)> *)&local_e0,param_4);
  if ((this->Settings).bCollapseDegenerateEdgesOnCut != false) {
    FLocalPlanarSimplify::CollapseDegenerateEdges
              (param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,false,
               (this->Settings).DegenerateEdgeTol,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SplitCrossingEdges @ 14c835670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshIsoCurves::SplitCrossingEdges
          (FMeshIsoCurves *this,FDynamicMesh3 *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TFunctionRef<float___cdecl(int,int,float,float)> *param_4,float param_5)

{
  float *pfVar1;
  double *pdVar2;
  double *pdVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FMeshIsoCurves *pFVar27;
  ulonglong uVar28;
  ForElementType<unsigned_int> FVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8 [8];
  FDynamicMesh3 *local_2a0;
  int local_298;
  float local_290;
  float local_288 [2];
  uint local_280 [2];
  uint local_278 [2];
  undefined8 local_270;
  int local_268 [2];
  FMeshIsoCurves *local_260;
  int local_258;
  uint uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_250;
  undefined4 local_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  undefined1 local_208 [4];
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1e4;
  undefined8 local_1dc;
  int local_1d4 [3];
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  TFunctionRef<float___cdecl(int,int,float,float)> *local_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  longlong *local_180;
  undefined1 local_178 [20];
  uint uStack_164;
  FSparseArrayAllocationInfo local_158;
  FSparseArrayAllocationInfo local_148 [2];
  double local_128;
  undefined1 local_118 [32];
  ForElementType<unsigned_int> local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  FScriptContainerElement local_e0 [8];
  ForAnyElementType local_d8;
  uint local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_1b0 = param_4;
  local_2a0 = param_1;
  local_260 = this;
  local_238 = param_3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar12 = __real_3fe0000000000000;
  dVar11 = __real_3ff0000000000000;
  dVar7 = (this->Settings).SnapToExistingVertexTol;
  uVar37 = SUB84(dVar7,0);
  uVar38 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uVar24 = 0;
  if (dVar7 <= 0.0) {
    uVar37 = 0;
    uVar38 = 0;
  }
  local_298 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->EdgeRefCounts).RefCounts.CurBlockUsed;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  dVar7 = (double)CONCAT44(uVar38,uVar37) * (double)CONCAT44(uVar38,uVar37);
  local_f8 = (ForElementType<unsigned_int>)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = -1;
  local_e4 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  if (0 < local_298) {
    do {
      uVar30 = (uint)uVar24;
      if ((int)uVar30 <
          (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed)) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (uVar24 >> 9) * 8) + (ulonglong)(uVar30 & 0x1ff) * 2) - 1U) <
            0xfffe) {
          if (local_118._8_4_ != local_e4) {
            FVar21.Data = local_e0;
            if (local_d8.Data != (FScriptContainerElement *)0x0) {
              FVar21.Data = local_d8.Data;
            }
            for (iVar15 = *(int *)(FVar21.Data + (local_d0 - 1 & uVar24) * 4); iVar15 != -1;
                iVar15 = *(int *)(local_118._0_8_ + (longlong)iVar15 * 0xc + 4)) {
              if (*(uint *)(local_118._0_8_ + (longlong)iVar15 * 0xc) == uVar30) goto LAB_14c8363d0;
            }
          }
          uVar28 = *(ulonglong *)
                    (*(longlong *)
                      ((param_1->Edges).Blocks.AllocatorInstance.Data + (uVar24 >> 9) * 8) +
                    (ulonglong)(uVar30 & 0x1ff) * 0x10);
          uVar22 = (uint)uVar28;
          uVar26 = (uint)(uVar28 >> 0x20);
          uVar23 = 0;
          if ((int)uVar22 < param_2->ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          local_270 = uVar28;
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar31 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar22 * 4);
          uVar23 = 0;
          if ((int)uVar26 < param_2->ArrayNum) {
            uVar23 = ~uVar26 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar23 = local_270._4_4_;
          fVar33 = fVar31 - param_5;
          fVar5 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)local_270._4_4_ * 4)
          ;
          fVar32 = fVar5 - param_5;
          fVar6 = (local_260->Settings).CurveIsoValueSnapTolerance;
          param_1 = local_2a0;
          if (((fVar6 < (float)((uint)fVar33 & uVar13)) && (fVar6 < (float)((uint)fVar32 & uVar13)))
             && (fVar32 * fVar33 < 0.0)) {
            local_280[0] = local_270._4_4_;
            local_290 = fVar5;
            local_288[0] = fVar31;
            local_278[0] = uVar22;
            fVar31 = (float)(**(code **)local_1b0)
                                      (*(undefined8 *)&local_1b0->field_0x8,local_278,local_280,
                                       local_288);
            param_1 = local_2a0;
            dVar35 = (double)fVar31;
            if ((0.0 < dVar35) && (dVar35 < dVar11)) {
              if (0.0 < dVar7) {
                uVar18 = (ulonglong)(uVar23 & 0x1ff);
                pFVar8 = (local_2a0->Vertices).Blocks.AllocatorInstance.Data;
                lVar25 = *(longlong *)(pFVar8 + ((uVar28 & 0xffffffff) >> 9) * 8);
                pdVar2 = (double *)(lVar25 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
                local_128 = *(double *)(lVar25 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
                lVar25 = *(longlong *)(pFVar8 + (ulonglong)(uVar23 >> 9) * 8);
                pdVar3 = (double *)(lVar25 + uVar18 * 0x18);
                if (dVar12 < dVar35) {
                  dVar35 = dVar11 - dVar35;
                }
                dVar34 = (pdVar3[1] - pdVar2[1]) * dVar35;
                dVar36 = (*pdVar3 - *pdVar2) * dVar35;
                dVar35 = (*(double *)(lVar25 + 0x10 + uVar18 * 0x18) - local_128) * dVar35;
                if (dVar34 * dVar34 + dVar36 * dVar36 + dVar35 * dVar35 <= dVar7)
                goto LAB_14c8363d0;
              }
              local_204 = 0xffffffffffffffff;
              local_1fc = -1;
              local_1f4 = 0xffffffffffffffff;
              local_1e4 = 0xffffffffffffffff;
              local_1dc = 0xffffffffffffffff;
              local_1d4[0] = -1;
              iVar15 = (**(code **)(local_2a0->_padding_ + 0x30))(local_2a0,uVar24,local_208);
              if (iVar15 != 0) {
                local_2a8[0] = 0;
                bVar14 = `UE::Geometry::FMeshIsoCurves::SplitCrossingEdges'::__l23::<lambda_2>::
                         operator()(local_2a8);
                if (!bVar14) goto LAB_14c8363d0;
              }
              iVar15 = local_298;
              uVar23 = (uint)local_1dc;
              if ((int)(uint)local_1dc < local_298) {
                if (local_e4 == 0) {
                  iVar16 = Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0xc,4,1,(ForAnyElementType *)local_118,(int *)(local_118 + 8),
                                      (int *)(local_118 + 0xc));
                  iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                     ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),1);
                  FVar29 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
                  if (local_f8 != (ForElementType<unsigned_int>)0x0) {
                    FVar29 = local_f8;
                  }
                  bVar20 = (byte)iVar17 & 0x1f;
                  if (iVar17 < 0) {
                    iVar17 = iVar17 + 0x1f;
                    bVar20 = bVar20 - 0x20;
                  }
                  puVar4 = (uint *)((longlong)FVar29 + (longlong)(iVar17 >> 5) * 4);
                  *puVar4 = *puVar4 & ~(1 << (bVar20 & 0x1f));
                  iVar17 = local_e8;
                }
                else {
                  local_e4 = local_e4 + -1;
                  iVar17 = *(int *)(local_118._0_8_ + (longlong)local_e8 * 0xc + 4);
                  iVar16 = local_e8;
                  if (local_e4 != 0) {
                    *(undefined4 *)(local_118._0_8_ + (longlong)iVar17 * 0xc) = 0xffffffff;
                  }
                }
                local_e8 = iVar17;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_118,&local_158,iVar16);
                if (local_158.Pointer != (uint *)0x0) {
                  *(uint *)local_158.Pointer = uVar23;
                  *(uint *)((longlong)local_158.Pointer + 4) = 0xffffffff;
                }
                uVar23 = *(uint *)local_158.Pointer;
                if ((local_118._8_4_ - local_e4 != 1) && (local_118._8_4_ != local_e4)) {
                  FVar21.Data = local_e0;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_d8.Data;
                  }
                  for (iVar16 = *(int *)(FVar21.Data + (ulonglong)(local_d0 - 1 & uVar23) * 4);
                      iVar16 != -1; iVar16 = *(int *)(local_118._0_8_ + (longlong)iVar16 * 0xc + 4))
                  {
                    if (*(uint *)(local_118._0_8_ + (longlong)iVar16 * 0xc) == uVar23) {
                      if (iVar16 != -1) {
                        *(uint *)(local_118._0_8_ + (longlong)iVar16 * 0xc) = uVar23;
                        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_118,local_158.Index,1);
                        goto LAB_14c835f0f;
                      }
                      break;
                    }
                  }
                }
                uVar26 = 1;
                uVar22 = local_118._8_4_ - local_e4;
                if (3 < uVar22) {
                  uVar24 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
                  lVar25 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                    }
                  }
                  local_1c8 = (undefined4)lVar25;
                  uVar26 = 1 << ((byte)lVar25 & 0x1f);
                }
                if (((int)uVar22 < 1) || ((int)uVar26 <= (int)local_d0)) {
                  uVar23 = local_d0 - 1 & uVar23;
                  *(uint *)((longlong)local_158.Pointer + 8) = uVar23;
                  FVar21.Data = local_e0;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_d8.Data;
                  }
                  uVar24 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar23;
                  *(uint *)((longlong)local_158.Pointer + 4) = *(uint *)(FVar21.Data + uVar24 * 4);
                  *(int *)(FVar21.Data + uVar24 * 4) = local_158.Index;
                }
                else {
                  local_d0 = uVar26;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_d8,0,0,4);
                  }
                  if (uVar26 != 0) {
                    uVar23 = uVar26;
                    if (uVar26 < 2) {
                      if (local_d8.Data != (FScriptContainerElement *)0x0) {
                        uVar23 = 0;
                        goto LAB_14c835d1d;
                      }
                    }
                    else {
LAB_14c835d1d:
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_d8,0,uVar23,4);
                    }
                    if (0 < (int)uVar26) {
                      uVar28 = (ulonglong)uVar26;
                      uVar24 = 0;
                      do {
                        FVar21.Data = local_e0;
                        if (local_d8.Data != (FScriptContainerElement *)0x0) {
                          FVar21.Data = local_d8.Data;
                        }
                        uVar18 = uVar24 & (longlong)(int)uVar26 - 1U;
                        uVar24 = uVar24 + 1;
                        *(undefined4 *)(FVar21.Data + uVar18 * 4) = 0xffffffff;
                        uVar28 = uVar28 - 1;
                      } while (uVar28 != 0);
                    }
                  }
                  if (local_d0 != 0) {
                    pTStack_250 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
                    uStack_254 = 1;
                    local_258 = 0;
                    iStack_244 = 0;
                    iStack_240 = 0;
                    if (local_f0 != 0) {
                      FVar29 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
                      if (local_f8 != (ForElementType<unsigned_int>)0x0) {
                        FVar29 = local_f8;
                      }
                      uVar23 = *(uint *)FVar29;
                      iStack_240 = 0;
                      local_258 = 0;
                      while (uVar23 == 0) {
                        iStack_240 = iStack_240 + 0x20;
                        lVar25 = (longlong)local_258;
                        local_258 = local_258 + 1;
                        if ((int)(local_f0 + -1 + (local_f0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_258)
                        goto LAB_14c835e2d;
                        uVar23 = ((uint *)((longlong)FVar29 + 4))[lVar25];
                      }
                      uStack_254 = -uVar23 & uVar23;
                      uVar24 = (ulonglong)uStack_254 * 2 + 1;
                      lVar25 = 0x3f;
                      if (uVar24 != 0) {
                        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                        }
                      }
                      local_1c4 = (int)lVar25;
                      iStack_244 = iStack_240 + -1 + local_1c4;
                      if (local_f0 < iStack_244) {
LAB_14c835e2d:
                        iStack_244 = local_f0;
                      }
                    }
                    local_248 = 0xffffffff;
                    local_1a8 = (longlong *)local_118;
                    local_1a0._padding_ = CONCAT44(uStack_254,local_258);
                    local_1a0.CurrentBitIndex = iStack_244;
                    local_1a0.UnvisitedBitMask = 0xffffffff;
                    local_1a0._28_4_ = uStack_23c;
                    local_1a0.BaseBitIndex = iStack_240;
                    local_1a0.Array = pTStack_250;
                    iVar16 = iStack_244;
                    if (iStack_244 < local_f0) {
                      do {
                        lVar25 = *local_1a8;
                        lVar19 = (longlong)iVar16;
                        uVar23 = local_d0 - 1 & *(uint *)(lVar25 + lVar19 * 0xc);
                        *(uint *)(lVar25 + 8 + lVar19 * 0xc) = uVar23;
                        FVar21.Data = local_e0;
                        if (local_d8.Data != (FScriptContainerElement *)0x0) {
                          FVar21.Data = local_d8.Data;
                        }
                        uVar24 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar23;
                        *(undefined4 *)(lVar25 + 4 + lVar19 * 0xc) =
                             *(undefined4 *)(FVar21.Data + uVar24 * 4);
                        *(int *)(FVar21.Data + uVar24 * 4) = iVar16;
                        local_1a0.UnvisitedBitMask =
                             local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0)
                        ;
                        iVar16 = local_1a0.CurrentBitIndex;
                      } while (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits);
                    }
                  }
                }
              }
LAB_14c835f0f:
              uVar23 = local_1dc._4_4_;
              if ((int)local_1dc._4_4_ < iVar15) {
                if (local_e4 == 0) {
                  iVar16 = Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0xc,4,1,(ForAnyElementType *)local_118,(int *)(local_118 + 8),
                                      (int *)(local_118 + 0xc));
                  iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                     ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),1);
                  FVar29 = (ForElementType<unsigned_int>)((longlong)local_118 + 0x10);
                  if (local_f8 != (ForElementType<unsigned_int>)0x0) {
                    FVar29 = local_f8;
                  }
                  bVar20 = (byte)iVar17 & 0x1f;
                  if (iVar17 < 0) {
                    iVar17 = iVar17 + 0x1f;
                    bVar20 = bVar20 - 0x20;
                  }
                  puVar4 = (uint *)((longlong)FVar29 + (longlong)(iVar17 >> 5) * 4);
                  *puVar4 = *puVar4 & ~(1 << (bVar20 & 0x1f));
                  iVar17 = local_e8;
                }
                else {
                  iVar17 = *(int *)(local_118._0_8_ + (longlong)local_e8 * 0xc + 4);
                  local_e4 = local_e4 + -1;
                  iVar16 = local_e8;
                  if (local_e4 != 0) {
                    *(undefined4 *)(local_118._0_8_ + (longlong)iVar17 * 0xc) = 0xffffffff;
                  }
                }
                local_e8 = iVar17;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_118,local_148,iVar16);
                if (local_148[0].Pointer != (uint *)0x0) {
                  *(uint *)local_148[0].Pointer = uVar23;
                  *(uint *)((longlong)local_148[0].Pointer + 4) = 0xffffffff;
                }
                uVar23 = *(uint *)local_148[0].Pointer;
                if ((local_118._8_4_ - local_e4 != 1) && (local_118._8_4_ != local_e4)) {
                  FVar21.Data = local_e0;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_d8.Data;
                  }
                  for (iVar16 = *(int *)(FVar21.Data + (ulonglong)(local_d0 - 1 & uVar23) * 4);
                      iVar16 != -1; iVar16 = *(int *)(local_118._0_8_ + (longlong)iVar16 * 0xc + 4))
                  {
                    if (*(uint *)(local_118._0_8_ + (longlong)iVar16 * 0xc) == uVar23) {
                      if (iVar16 != -1) {
                        *(uint *)(local_118._0_8_ + (longlong)iVar16 * 0xc) = uVar23;
                        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_118,local_148[0].Index,1);
                        goto LAB_14c8362bf;
                      }
                      break;
                    }
                  }
                }
                uVar26 = 1;
                uVar22 = local_118._8_4_ - local_e4;
                if (3 < uVar22) {
                  uVar24 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
                  lVar25 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                    }
                  }
                  local_1c0 = (undefined4)lVar25;
                  uVar26 = 1 << ((byte)lVar25 & 0x1f);
                }
                if (((int)uVar22 < 1) || ((int)uVar26 <= (int)local_d0)) {
                  uVar23 = local_d0 - 1 & uVar23;
                  *(uint *)((longlong)local_148[0].Pointer + 8) = uVar23;
                  FVar21.Data = local_e0;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    FVar21.Data = local_d8.Data;
                  }
                  uVar24 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar23;
                  *(uint *)((longlong)local_148[0].Pointer + 4) =
                       *(uint *)(FVar21.Data + uVar24 * 4);
                  *(int *)(FVar21.Data + uVar24 * 4) = local_148[0].Index;
                }
                else {
                  local_d0 = uVar26;
                  if (local_d8.Data != (FScriptContainerElement *)0x0) {
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_d8,0,0,4);
                  }
                  if (uVar26 != 0) {
                    uVar23 = uVar26;
                    if (uVar26 < 2) {
                      if (local_d8.Data != (FScriptContainerElement *)0x0) {
                        uVar23 = 0;
                        goto LAB_14c83613d;
                      }
                    }
                    else {
LAB_14c83613d:
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_d8,0,uVar23,4);
                    }
                    if (0 < (int)uVar26) {
                      uVar28 = (ulonglong)uVar26;
                      uVar24 = 0;
                      do {
                        FVar21.Data = local_e0;
                        if (local_d8.Data != (FScriptContainerElement *)0x0) {
                          FVar21.Data = local_d8.Data;
                        }
                        uVar18 = uVar24 & (longlong)(int)uVar26 - 1U;
                        uVar24 = uVar24 + 1;
                        *(undefined4 *)(FVar21.Data + uVar18 * 4) = 0xffffffff;
                        uVar28 = uVar28 - 1;
                      } while (uVar28 != 0);
                    }
                  }
                  if (local_d0 != 0) {
                    local_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
                    local_230._padding_._0_4_ = 0;
                    local_230._padding_._4_4_ = 1;
                    local_230.UnvisitedBitMask = 0xffffffff;
                    local_230.CurrentBitIndex = 0;
                    local_230.BaseBitIndex = 0;
                    if (local_f0 != 0) {
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
                    }
                    auVar10._4_4_ = local_230.CurrentBitIndex;
                    auVar10._8_4_ = local_230.BaseBitIndex;
                    auVar10._0_4_ = local_230.UnvisitedBitMask;
                    unique0x10000a5a = local_230._28_4_;
                    unique0x10000a4e = auVar10;
                    local_180 = (longlong *)local_118;
                    local_178._0_8_ =
                         CONCAT44(local_230._padding_._4_4_,(undefined4)local_230._padding_);
                    uVar24 = auVar10._0_8_ >> 0x20;
                    local_178._8_8_ = local_230.Array;
                    if (local_230.CurrentBitIndex < (local_230.Array)->NumBits) {
                      do {
                        lVar25 = *local_180;
                        lVar19 = (longlong)(int)uVar24;
                        uVar23 = local_d0 - 1 & *(uint *)(lVar25 + lVar19 * 0xc);
                        *(uint *)(lVar25 + 8 + lVar19 * 0xc) = uVar23;
                        FVar21.Data = local_e0;
                        if (local_d8.Data != (FScriptContainerElement *)0x0) {
                          FVar21.Data = local_d8.Data;
                        }
                        uVar28 = (longlong)(int)local_d0 - 1U & (longlong)(int)uVar23;
                        *(undefined4 *)(lVar25 + 4 + lVar19 * 0xc) =
                             *(undefined4 *)(FVar21.Data + uVar28 * 4);
                        *(int *)(FVar21.Data + uVar28 * 4) = (int)uVar24;
                        local_178._16_4_ = local_178._16_4_ & ~local_178._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_178);
                        uVar24 = (ulonglong)uStack_164;
                      } while ((int)uStack_164 < *(int *)(local_178._8_8_ + 0x18));
                    }
                  }
                }
              }
LAB_14c8362bf:
              lVar25 = (longlong)(int)local_1fc;
              if ((int)local_1fc < param_2->ArrayNum) {
                if (((int)local_1fc < 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                fVar31 = (float)((uint)(*(float *)((param_2->AllocatorInstance).Data + lVar25 * 4) -
                                       param_5) & uVar13);
                pfVar1 = &(local_260->Settings).CurveIsoValueSnapTolerance;
                this_00 = local_238;
                pFVar27 = local_260;
                if (fVar31 < *pfVar1 || fVar31 == *pfVar1) goto LAB_14c8364a1;
              }
              else {
LAB_14c8364a1:
                this_00 = local_238;
                pFVar27 = local_260;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (local_238,&local_1bc,(bool *)((longlong)&local_1dc + 4));
              }
              param_1 = local_2a0;
              if (local_1d4[0] != -1) {
                local_268[0] = local_1d4[0];
                if (local_1d4[0] < iVar15) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_118,
                             &local_1b8,(bool *)local_268);
                }
                lVar25 = (longlong)local_1fc._4_4_;
                if (local_1fc._4_4_ < param_2->ArrayNum) {
                  if ((local_1fc < 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  fVar31 = (float)((uint)(*(float *)((param_2->AllocatorInstance).Data + lVar25 * 4)
                                         - param_5) & uVar13);
                  pfVar1 = &(pFVar27->Settings).CurveIsoValueSnapTolerance;
                  param_1 = local_2a0;
                  if (*pfVar1 <= fVar31 && fVar31 != *pfVar1) goto LAB_14c8363d0;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (this_00,&local_1b4,(bool *)local_1d4);
                param_1 = local_2a0;
              }
            }
          }
        }
      }
LAB_14c8363d0:
      uVar24 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < local_298);
  }
  local_d0 = 0;
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  return;
}

// operator() @ 150574020

bool __thiscall
`UE::Geometry::FMeshIsoCurves::SplitCrossingEdges'::__l23::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6743017058931310706>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6743017058931310706>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

