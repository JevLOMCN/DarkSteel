// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c969060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FSelfUnionMeshesOp::CalculateResult(FSelfUnionMeshesOp *this,FProgressCancel *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  TArrayView<int_const_,int> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FEdgeLoop *pFVar17;
  byte bVar18;
  longlong *plVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  FEdgeLoop *pFVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  uint *puVar27;
  FEdgeLoop *pFVar28;
  uint uVar29;
  ulonglong uVar30;
  ForElementType<unsigned_int> FVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  uint *puVar35;
  undefined1 auStackY_4f8 [32];
  undefined1 local_4a8;
  undefined1 local_4a7 [7];
  ForAnyElementType local_4a0;
  undefined8 local_498;
  uint local_490 [2];
  uint local_488;
  uint uStack_484;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_480;
  undefined4 local_478;
  uint uStack_474;
  uint uStack_470;
  undefined4 uStack_46c;
  uint local_468;
  uint uStack_464;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_460;
  undefined4 local_458;
  uint uStack_454;
  uint uStack_450;
  undefined4 uStack_44c;
  undefined4 local_440;
  int local_43c;
  undefined4 local_438;
  int local_434;
  FSelfUnionMeshesOp *local_430;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_428;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_420;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f8;
  FSparseArrayAllocationInfo local_3d8;
  TArrayView<int_const_,int> local_3c8;
  FEdgeLoop local_3b8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_378;
  FScriptContainerElement local_340 [8];
  ForAnyElementType local_338;
  uint local_330;
  undefined1 local_328 [64];
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_2d0;
  undefined8 local_2c8;
  longlong *plStack_2c0;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  bool local_2a8;
  ForAnyElementType local_2a0;
  undefined8 local_298;
  longlong local_288;
  undefined8 uStack_280;
  longlong local_278 [3];
  longlong *plStack_260;
  FMeshSelfUnion local_258;
  FMinimalHoleFiller local_188;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_430 = this;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar6 = *(code **)&param_1->CancelF;
    plVar21 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar19 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar21 != (longlong *)0x0) {
      plVar19 = plVar21;
    }
    uVar13 = (**(code **)(*plVar19 + 8))();
    bVar9 = (bool)(*pcVar6)(uVar13);
    param_1->WasCancelled = bVar9;
    if (bVar9 != false) {
      return;
    }
  }
  if (((this->CombinedMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FDynamicMesh3::operator=((FDynamicMesh3 *)this->_padding_,(this->CombinedMesh).Object);
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar6 = *(code **)&param_1->CancelF;
    plVar21 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar19 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar21 != (longlong *)0x0) {
      plVar19 = plVar21;
    }
    uVar13 = (**(code **)(*plVar19 + 8))();
    bVar9 = (bool)(*pcVar6)(uVar13);
    param_1->WasCancelled = bVar9;
    if (bVar9 != false) {
      return;
    }
  }
  local_258.Mesh = (FDynamicMesh3 *)this->_padding_;
  local_258.DegenerateEdgeTolFactor = ___xmm_3eb0c6f7a00000003ff8000000000000;
  local_258.SnapTolerance = _UNK_150b37c88;
  local_258.NormalOffset = __real_3eb0c6f7a0000000;
  local_258._padding_ = (longlong)&___7FMeshSelfUnion_Geometry_UE__6B_;
  local_258.bCollapseDegenerateEdgesOnCut = true;
  local_258.bWeldSharedEdges = true;
  local_258.bTrackAllNewEdges = false;
  local_258.Progress = (FProgressCancel *)0x0;
  local_258.bPreserveTriangleGroups = true;
  local_258.bPreserveVertexUVs = true;
  local_258.bPreserveOverlayUVs = true;
  local_258.UVDistortTolerance = 1e-06;
  local_258.bPreserveVertexNormals = true;
  local_258.NormalDistortTolerance = 0.01;
  local_258.CreatedBoundaryEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.CreatedBoundaryEdges.ArrayNum = 0;
  local_258.CreatedBoundaryEdges.ArrayMax = 0;
  local_258.AllNewEdges.Elements._0_8_ = 0;
  local_258.AllNewEdges.Elements._8_8_ = 0;
  local_258.AllNewEdges.Elements._32_8_ = 0;
  local_258.AllNewEdges.Elements._40_4_ = 0;
  local_258.AllNewEdges.Elements._44_4_ = 0x80;
  local_258.AllNewEdges.Elements._48_4_ = 0xffffffff;
  local_258.AllNewEdges.Elements._52_4_ = 0;
  local_258.AllNewEdges.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_258.AllNewEdges.HashSize = 0;
  local_258.SimplificationAngleTolerance = ___xmm_3fd00000000000003fb999999999999a;
  local_258.TryToImproveTriQualityThreshold = _UNK_150b37c98;
  if ((local_258.Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshIn != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Operations\\MeshSelfUnion.h"
                         ,0x6f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_258.bTrimFlaps = this->bTrimFlaps;
  local_258.WindingThreshold = this->WindingNumberThreshold;
  local_258.bSimplifyAlongNewEdges = this->bTryCollapseExtraEdges;
  bVar9 = FMeshSelfUnion::Compute(&local_258);
  if (param_1 != (FProgressCancel *)0x0) {
    bVar10 = FProgressCancel::Cancelled(param_1);
    pTStack_2d0 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)CONCAT44(pTStack_2d0._4_4_,pTStack_2d0._0_4_);
    if (bVar10) goto LAB_14c969f66;
  }
  FVar20.Data = local_258.CreatedBoundaryEdges.AllocatorInstance.Data;
  pTVar2 = &this->CreatedBoundaryEdges;
  if (pTVar2 != &local_258.CreatedBoundaryEdges) {
    lVar23 = (longlong)local_258.CreatedBoundaryEdges.ArrayNum;
    piVar1 = &(this->CreatedBoundaryEdges).ArrayMax;
    iVar11 = *piVar1;
    (this->CreatedBoundaryEdges).ArrayNum = local_258.CreatedBoundaryEdges.ArrayNum;
    if (local_258.CreatedBoundaryEdges.ArrayNum == 0) {
      if (iVar11 == 0) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,iVar11,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_258.CreatedBoundaryEdges.ArrayNum,iVar11,&pTVar2->AllocatorInstance,
                 local_258.CreatedBoundaryEdges.ArrayNum,piVar1);
      memcpy((pTVar2->AllocatorInstance).Data,FVar20.Data,lVar23 << 2);
    }
  }
  uVar16 = 0;
  pTStack_2d0 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)CONCAT44(pTStack_2d0._4_4_,pTStack_2d0._0_4_);
  if ((bVar9) ||
     (pTStack_2d0 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)CONCAT44(pTStack_2d0._4_4_,pTStack_2d0._0_4_),
     this->bAttemptFixHoles == false)) goto LAB_14c969f66;
  local_328._0_8_ = this->_padding_;
  local_328._8_8_ = (FEdgeLoop *)0x0;
  local_328._16_8_ = 0;
  local_328._24_8_ = (FEdgeSpan *)0x0;
  local_328._32_4_ = 0;
  local_328._36_4_ = 0;
  local_328[0x28] = false;
  local_328[0x29] = false;
  local_328._44_4_ = Compute;
  local_328._48_4_ = ConvertToOpenSpan;
  local_2e8 = 0;
  plStack_2c0 = (longlong *)0x0;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0._0_4_ = 0;
  local_2b0._4_4_ = 0;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298._0_4_ = 0;
  local_298._4_4_ = 0;
  local_328[0x2a] = bVar9;
  local_2a8 = bVar9;
  pTVar14 = TArrayView<int_const_,int>::
            TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_3c8,&this->CreatedBoundaryEdges);
  puVar35 = (uint *)pTVar14->DataPtr;
  local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.Data.ArrayNum = 0;
  local_378.Data.ArrayMax = 0;
  local_378.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar26 = (uint)*(undefined8 *)&pTVar14->ArrayNum;
  local_378.AllocationFlags.NumBits = 0;
  local_378.AllocationFlags.MaxBits = 0x80;
  local_378.FirstFreeIndex = -1;
  local_378.NumFreeIndices = 0;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  if (uVar26 != 0) {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve(&local_378,uVar26);
    uVar22 = 1;
    if (3 < uVar26) {
      uVar30 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_440 = (undefined4)lVar23;
      uVar22 = 1 << ((byte)lVar23 & 0x1f);
    }
    if ((local_330 == 0) || ((int)local_330 < (int)uVar22)) {
      local_330 = uVar22;
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_338,0,0,4);
      }
      if (uVar22 != 0) {
        uVar29 = uVar22;
        if (uVar22 < 2) {
          if (local_338.Data != (FScriptContainerElement *)0x0) {
            uVar29 = 0;
            goto LAB_14c969508;
          }
        }
        else {
LAB_14c969508:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_338,0,uVar29,4);
        }
        if (0 < (int)uVar22) {
          uVar33 = (ulonglong)uVar22;
          uVar30 = uVar16;
          do {
            FVar20.Data = local_340;
            if (local_338.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_338.Data;
            }
            uVar15 = uVar30 & (longlong)(int)uVar22 - 1U;
            uVar30 = uVar30 + 1;
            *(undefined4 *)(FVar20.Data + uVar15 * 4) = 0xffffffff;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
      }
      if (local_330 != 0) {
        pTStack_480 = &local_378.AllocationFlags;
        local_488 = 0;
        uStack_484 = 1;
        uStack_474 = 0;
        uStack_470 = 0;
        if (local_378.AllocationFlags.NumBits != 0) {
          FVar31 = (ForElementType<unsigned_int>)&local_378.AllocationFlags;
          if (local_378.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar31 = local_378.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar22 = *(uint *)FVar31;
          uVar30 = uVar16;
          while (uVar22 == 0) {
            uStack_470 = (int)uVar30 + 0x20;
            uVar30 = (ulonglong)uStack_470;
            iVar11 = (int)uVar16;
            local_488 = iVar11 + 1;
            uVar16 = (ulonglong)local_488;
            if ((int)((local_378.AllocationFlags.NumBits - 1U) +
                     ((int)(local_378.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_488) goto LAB_14c96962f;
            uVar22 = *(uint *)((uchar *)((longlong)FVar31 + 4) + (longlong)iVar11 * 4);
          }
          uStack_484 = -uVar22 & uVar22;
          uVar16 = (ulonglong)uStack_484 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_43c = (int)lVar23;
          uStack_474 = (uStack_470 - 1) + local_43c;
          uVar16 = (ulonglong)uStack_474;
          if (local_378.AllocationFlags.NumBits < (int)uStack_474) {
LAB_14c96962f:
            uVar16 = (ulonglong)(uint)local_378.AllocationFlags.NumBits;
            uStack_474 = local_378.AllocationFlags.NumBits;
          }
        }
        local_478 = 0xffffffff;
        local_428 = &local_378;
        local_420._padding_ = CONCAT44(uStack_484,local_488);
        local_420.CurrentBitIndex = uStack_474;
        local_420.UnvisitedBitMask = 0xffffffff;
        local_420._28_4_ = uStack_46c;
        local_420.BaseBitIndex = uStack_470;
        local_420.Array = pTStack_480;
        if ((int)uVar16 < local_378.AllocationFlags.NumBits) {
          do {
            pFVar34 = (local_428->Data).AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar16;
            uVar22 = local_330 - 1 & *(uint *)(pFVar34 + lVar23 * 0xc);
            *(uint *)(pFVar34 + lVar23 * 0xc + 8) = uVar22;
            FVar20.Data = local_340;
            if (local_338.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_338.Data;
            }
            uVar30 = (longlong)(int)local_330 - 1U & (longlong)(int)uVar22;
            *(undefined4 *)(pFVar34 + lVar23 * 0xc + 4) = *(undefined4 *)(FVar20.Data + uVar30 * 4);
            *(int *)(FVar20.Data + uVar30 * 4) = (int)uVar16;
            local_420.UnvisitedBitMask = local_420.UnvisitedBitMask & ~local_420._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_420);
            uVar16 = (ulonglong)(uint)local_420.CurrentBitIndex;
          } while (local_420.CurrentBitIndex < (local_420.Array)->NumBits);
        }
      }
    }
  }
  puVar3 = puVar35 + (int)uVar26;
  iVar11 = local_378.FirstFreeIndex;
  local_288 = local_2e8;
  uVar13 = uStack_2e0;
  uVar7 = local_2c8;
  plStack_260 = plStack_2c0;
  for (; local_378.FirstFreeIndex = iVar11, puVar35 != puVar3; puVar35 = puVar35 + 1) {
    puVar27 = (uint *)0x0;
    local_2e8 = local_288;
    uStack_2e0 = uVar13;
    local_2c8 = uVar7;
    plStack_2c0 = plStack_260;
    if (local_378.NumFreeIndices == 0) {
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)&local_378,&local_378.Data.ArrayNum,
                          &local_378.Data.ArrayMax);
      iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_378.AllocationFlags,1);
      FVar31 = (ForElementType<unsigned_int>)&local_378.AllocationFlags;
      if (local_378.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar31 = local_378.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      bVar18 = (byte)iVar12 & 0x1f;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 0x1f;
        bVar18 = bVar18 - 0x20;
      }
      puVar4 = (uint *)((longlong)FVar31 + (longlong)(iVar12 >> 5) * 4);
      *puVar4 = *puVar4 & ~(1 << (bVar18 & 0x1f));
    }
    else {
      local_378.FirstFreeIndex =
           *(int *)(local_378.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc + 4);
      local_378.NumFreeIndices = local_378.NumFreeIndices + -1;
      if (local_378.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_378.Data.AllocatorInstance.Data + (longlong)local_378.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_378,&local_3d8,iVar11);
    if (local_3d8.Pointer != (uint *)0x0) {
      *(uint *)local_3d8.Pointer = *puVar35;
      *(uint *)((longlong)local_3d8.Pointer + 4) = 0xffffffff;
      puVar27 = local_3d8.Pointer;
    }
    uVar26 = *puVar27;
    if ((local_378.Data.ArrayNum - local_378.NumFreeIndices != 1) &&
       (local_378.Data.ArrayNum != local_378.NumFreeIndices)) {
      FVar20.Data = local_340;
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_338.Data;
      }
      for (iVar11 = *(int *)(FVar20.Data + (ulonglong)(local_330 - 1 & uVar26) * 4); iVar11 != -1;
          iVar11 = *(int *)(local_378.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc + 4)) {
        if (*(uint *)(local_378.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc) == uVar26) {
          if (iVar11 != -1) {
            *(uint *)(local_378.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc) = uVar26;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_378,local_3d8.Index,1);
            goto LAB_14c969b0f;
          }
          break;
        }
      }
    }
    uVar16 = 0;
    uVar29 = local_378.Data.ArrayNum - local_378.NumFreeIndices;
    uVar22 = 1;
    if (3 < uVar29) {
      uVar30 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_438 = (undefined4)lVar23;
      uVar22 = 1 << ((byte)lVar23 & 0x1f);
    }
    if (((int)uVar29 < 1) || ((int)uVar22 <= (int)local_330)) {
      uVar26 = local_330 - 1 & uVar26;
      puVar27[2] = uVar26;
      FVar20.Data = local_340;
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        FVar20.Data = local_338.Data;
      }
      uVar16 = (longlong)(int)local_330 - 1U & (longlong)(int)uVar26;
      puVar27[1] = *(uint *)(FVar20.Data + uVar16 * 4);
      *(int *)(FVar20.Data + uVar16 * 4) = local_3d8.Index;
    }
    else {
      local_330 = uVar22;
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_338,0,0,4);
      }
      if (uVar22 != 0) {
        uVar26 = uVar22;
        if (uVar22 < 2) {
          if (local_338.Data != (FScriptContainerElement *)0x0) {
            uVar26 = 0;
            goto LAB_14c969916;
          }
        }
        else {
LAB_14c969916:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_338,0,uVar26,4);
        }
        if (0 < (int)uVar22) {
          uVar33 = (ulonglong)uVar22;
          uVar30 = uVar16;
          do {
            FVar20.Data = local_340;
            if (local_338.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_338.Data;
            }
            uVar15 = uVar30 & (longlong)(int)uVar22 - 1U;
            uVar30 = uVar30 + 1;
            *(undefined4 *)(FVar20.Data + uVar15 * 4) = 0xffffffff;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
      }
      if (local_330 != 0) {
        pTStack_460 = &local_378.AllocationFlags;
        local_468 = 0;
        uStack_464 = 1;
        uStack_454 = 0;
        uStack_450 = 0;
        if (local_378.AllocationFlags.NumBits != 0) {
          FVar31 = (ForElementType<unsigned_int>)&local_378.AllocationFlags;
          if (local_378.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar31 = local_378.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar26 = *(uint *)FVar31;
          uVar30 = uVar16;
          while (uVar26 == 0) {
            uStack_450 = (int)uVar30 + 0x20;
            uVar30 = (ulonglong)uStack_450;
            iVar11 = (int)uVar16;
            local_468 = iVar11 + 1;
            uVar16 = (ulonglong)local_468;
            if ((int)((local_378.AllocationFlags.NumBits - 1U) +
                     ((int)(local_378.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_468) goto LAB_14c969a2d;
            uVar26 = *(uint *)((uchar *)((longlong)FVar31 + 4) + (longlong)iVar11 * 4);
          }
          uStack_464 = -uVar26 & uVar26;
          uVar16 = (ulonglong)uStack_464 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_434 = (int)lVar23;
          uStack_454 = local_434 + -1 + uStack_450;
          uVar16 = (ulonglong)uStack_454;
          if (local_378.AllocationFlags.NumBits < (int)uStack_454) {
LAB_14c969a2d:
            uVar16 = (ulonglong)(uint)local_378.AllocationFlags.NumBits;
            uStack_454 = local_378.AllocationFlags.NumBits;
          }
        }
        local_458 = 0xffffffff;
        local_400 = &local_378;
        local_3f8._padding_ = CONCAT44(uStack_464,local_468);
        local_3f8.CurrentBitIndex = uStack_454;
        local_3f8.UnvisitedBitMask = 0xffffffff;
        local_3f8._28_4_ = uStack_44c;
        local_3f8.BaseBitIndex = uStack_450;
        local_3f8.Array = pTStack_460;
        if ((int)uVar16 < local_378.AllocationFlags.NumBits) {
          do {
            pFVar34 = (local_400->Data).AllocatorInstance.Data;
            lVar23 = (longlong)(int)uVar16;
            uVar26 = local_330 - 1 & *(uint *)(pFVar34 + lVar23 * 0xc);
            *(uint *)(pFVar34 + lVar23 * 0xc + 8) = uVar26;
            FVar20.Data = local_340;
            if (local_338.Data != (FScriptContainerElement *)0x0) {
              FVar20.Data = local_338.Data;
            }
            uVar30 = (longlong)(int)local_330 - 1U & (longlong)(int)uVar26;
            *(undefined4 *)(pFVar34 + lVar23 * 0xc + 4) = *(undefined4 *)(FVar20.Data + uVar30 * 4);
            *(int *)(FVar20.Data + uVar30 * 4) = (int)uVar16;
            local_3f8.UnvisitedBitMask = local_3f8.UnvisitedBitMask & ~local_3f8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f8);
            uVar16 = (ulonglong)(uint)local_3f8.CurrentBitIndex;
          } while (local_3f8.CurrentBitIndex < (local_3f8.Array)->NumBits);
        }
      }
    }
LAB_14c969b0f:
    this = local_430;
    iVar11 = local_378.FirstFreeIndex;
    local_288 = local_2e8;
    uVar13 = uStack_2e0;
    uVar7 = local_2c8;
    plStack_260 = plStack_2c0;
  }
  pFVar34 = (FScriptContainerElement *)0x0;
  pTStack_2d0 = &local_378;
  local_2e8 = (longlong)
              Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSelfUnionMeshesOp::CalculateResult'::__l14::<lambda_1>,bool,int>
              ::Call;
  uStack_2e0 = uStack_280;
  local_2c8 = local_278[2];
  plStack_2c0 = (longlong *)0x0;
  local_2d8 = 0x528d8328;
  uStack_2d4 = 1;
  uStack_280 = uVar13;
  local_278[2] = uVar7;
  if (local_288 != 0) {
    plVar21 = local_278;
    if (plStack_260 != (longlong *)0x0) {
      plVar21 = plStack_260;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_328);
  if (param_1 == (FProgressCancel *)0x0) {
LAB_14c969c41:
    uVar8 = local_328._16_4_;
    uVar16 = (ulonglong)(int)local_328._16_4_;
    pFVar28 = (FEdgeLoop *)(local_328._8_8_ + uVar16 * 0x40);
    pFVar24 = (FEdgeLoop *)local_328._8_8_;
    while( true ) {
      if ((int)uVar16 != uVar8) {
        local_4a8 = 0;
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4a8);
      }
      if (pFVar24 == pFVar28) break;
      pFVar17 = FEdgeLoop::FEdgeLoop(&local_3b8,pFVar24);
      FMinimalHoleFiller::FMinimalHoleFiller(&local_188,(FDynamicMesh3 *)this->_padding_,pFVar17);
      FMinimalHoleFiller::Fill(&local_188,-1);
      FMinimalHoleFiller::~FMinimalHoleFiller(&local_188);
      uVar16 = local_328._16_8_ & 0xffffffff;
      pFVar24 = pFVar24 + 1;
    }
    iVar11 = local_258.CreatedBoundaryEdges.ArrayNum;
    local_4a0.Data = (FScriptContainerElement *)0x0;
    local_498 = 0;
    pFVar5 = local_258.CreatedBoundaryEdges.AllocatorInstance.Data +
             (longlong)local_258.CreatedBoundaryEdges.ArrayNum * 4;
    FVar20.Data = pFVar34;
    FVar25.Data = local_258.CreatedBoundaryEdges.AllocatorInstance.Data;
    pFVar32 = pFVar34;
    while( true ) {
      if (local_258.CreatedBoundaryEdges.ArrayNum != iVar11) {
        local_4a7[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4a7);
        pFVar32 = (FScriptContainerElement *)(local_498 & 0xffffffff);
        FVar20.Data = local_4a0.Data;
      }
      iVar12 = (int)pFVar32;
      if (FVar25.Data == pFVar5) break;
      local_490[0] = *(uint *)FVar25.Data;
      lVar23 = this->_padding_;
      if ((((-1 < (int)local_490[0]) &&
           ((int)local_490[0] < *(int *)(lVar23 + 0x1d0) * 0x200 + *(int *)(lVar23 + 0x1d4))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar23 + 0x1d8) + (ulonglong)(local_490[0] >> 9) * 8)
                              + (ulonglong)(local_490[0] & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (*(int *)(*(longlong *)(*(longlong *)(lVar23 + 0x1c0) + (ulonglong)(local_490[0] >> 9) * 8)
                   + 0xc + (ulonglong)(local_490[0] & 0x1ff) * 0x10) == -1)) {
        if ((FVar20.Data <= (FScriptContainerElement *)local_490) &&
           ((FScriptContainerElement *)local_490 < FVar20.Data + (longlong)local_498._4_4_ * 4)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar20.Data = local_4a0.Data;
          iVar12 = (int)local_498;
        }
        if (iVar12 == local_498._4_4_) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_4a0,(int *)((longlong)&local_498 + 4));
          FVar20.Data = local_4a0.Data;
        }
        local_498 = CONCAT44(local_498._4_4_,iVar12 + 1U);
        *(uint *)(FVar20.Data + (longlong)iVar12 * 4) = local_490[0];
        pFVar32 = (FScriptContainerElement *)(ulonglong)(iVar12 + 1U);
        FVar20.Data = local_4a0.Data;
      }
      FVar25.Data = FVar25.Data + 4;
    }
    pTVar2 = &this->CreatedBoundaryEdges;
    if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)&local_4a0) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
        FVar20.Data = local_4a0.Data;
        iVar12 = (int)local_498;
      }
      (pTVar2->AllocatorInstance).Data = FVar20.Data;
      local_4a0.Data = (FScriptContainerElement *)0x0;
      (this->CreatedBoundaryEdges).ArrayNum = iVar12;
      (this->CreatedBoundaryEdges).ArrayMax = local_498._4_4_;
      local_498 = 0;
      FVar20.Data = pFVar34;
    }
    if (FVar20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar20.Data);
    }
    local_330 = 0;
    if (local_338.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_378);
  }
  else {
    bVar9 = FProgressCancel::Cancelled(param_1);
    if (!bVar9) goto LAB_14c969c41;
    local_330 = 0;
    if (local_338.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_378,0);
    if (local_378.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_378.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  if (local_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data);
  }
  if (local_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data);
  }
  if ((code *)local_2e8 != (code *)0x0) {
    plVar21 = (longlong *)&local_2d8;
    if (plStack_2c0 != (longlong *)0x0) {
      plVar21 = plStack_2c0;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_328._24_8_,local_328._32_4_);
  if ((FEdgeSpan *)local_328._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_328._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_328._8_8_,local_328._16_4_);
  if ((FEdgeLoop *)local_328._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_328._8_8_);
  }
LAB_14c969f66:
  local_258._padding_ = (longlong)&___7FMeshSelfUnion_Geometry_UE__6B_;
  local_258.AllNewEdges.HashSize = 0;
  if (local_258.AllNewEdges.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_258.AllNewEdges.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_258.AllNewEdges.Elements);
  if (local_258.CreatedBoundaryEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.CreatedBoundaryEdges.AllocatorInstance.Data);
  }
  return;
}

// SetTransform @ 14c985990

void __thiscall
UE::Geometry::FSelfUnionMeshesOp::SetTransform
          (FSelfUnionMeshesOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

