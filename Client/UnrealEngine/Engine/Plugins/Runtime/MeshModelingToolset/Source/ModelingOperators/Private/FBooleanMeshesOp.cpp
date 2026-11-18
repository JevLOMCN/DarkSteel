// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c9606c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FBooleanMeshesOp::CalculateResult(FBooleanMeshesOp *this,FProgressCancel *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  uint *puVar4;
  ECSGOperation EVar5;
  code *pcVar6;
  FDynamicMesh3 *pFVar7;
  FDynamicMesh3 *pFVar8;
  FScriptContainerElement *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  double dVar11;
  double dVar12;
  FProgressCancel *this_00;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  FBooleanMeshesOp *pFVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  TArrayView<int_const_,int> *pTVar23;
  ulonglong uVar24;
  TAxisAlignedBox3<double> *pTVar25;
  FEdgeLoop *pFVar26;
  byte bVar27;
  longlong *plVar28;
  ForAnyElementType FVar29;
  longlong *plVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  EBooleanOp EVar33;
  uint uVar34;
  FScriptContainerElement *pFVar35;
  FEdgeLoop *pFVar36;
  uint uVar37;
  FEdgeLoop *this_01;
  uint uVar38;
  ulonglong uVar39;
  ForElementType<unsigned_int> FVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  uint *puVar43;
  double dVar44;
  undefined1 auStackY_818 [32];
  undefined1 local_7c8;
  undefined1 local_7c7 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_7c0;
  uint local_7b0 [2];
  FBooleanMeshesOp *local_7a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_7a0;
  int local_798;
  uint uStack_794;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_790;
  undefined4 local_788;
  int iStack_784;
  int iStack_780;
  undefined4 uStack_77c;
  int local_778;
  uint uStack_774;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_770;
  undefined4 local_768;
  int iStack_764;
  int iStack_760;
  undefined4 uStack_75c;
  TVector<double>_u_0 local_758;
  FProgressCancel *local_740;
  FDynamicMeshEditor local_738;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_730;
  TVector<float>_u_0 local_720;
  undefined4 local_714;
  int local_710;
  undefined4 local_70c;
  int local_708;
  TVector2<float>_u_0 local_704;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_6f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_6d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6c8;
  FSparseArrayAllocationInfo local_6a8;
  TVector<double>_u_0 local_698;
  TQuaternion<double>_u_0 local_680;
  TVector<double>_u_0 local_660;
  TVector<double>_u_0 local_648;
  TArrayView<int_const_,int> local_630;
  TAxisAlignedBox3<double> local_620;
  FEdgeLoop local_5f0;
  FMeshBoolean local_5a8;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_308;
  FScriptContainerElement local_2d0 [8];
  ForAnyElementType local_2c8;
  uint local_2c0;
  undefined1 local_2b8 [64];
  longlong local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_260;
  undefined8 local_258;
  longlong *plStack_250;
  ForAnyElementType local_248;
  undefined8 local_240;
  bool local_238;
  ForAnyElementType local_230;
  undefined8 local_228;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208 [3];
  longlong *plStack_1f0;
  undefined1 local_1e8 [304];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_818;
  local_7a8 = this;
  local_740 = param_1;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar6 = *(code **)&param_1->CancelF;
    plVar30 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar30 != (longlong *)0x0) {
      plVar28 = plVar30;
    }
    uVar22 = (**(code **)(*plVar28 + 8))();
    bVar19 = (bool)(*pcVar6)(uVar22);
    param_1->WasCancelled = bVar19;
    if (bVar19 != false) {
      return;
    }
  }
  if ((((this->Meshes).ArrayNum != 2) || ((this->Transforms).ArrayNum != 2)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Meshes.Num() == 2 && Transforms.Num() == 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\BooleanMeshesOp.cpp"
                          ,0x19,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar37 = 0;
  if (this->bTrimMode == false) {
    if (this->CSGOperation == DifferenceBA) {
LAB_14c96080f:
      uVar37 = 1;
      goto LAB_14c960814;
    }
    iVar20 = 1;
LAB_14c9607b2:
    EVar5 = this->CSGOperation;
    if ((EVar5 == DifferenceAB) || (EVar5 == DifferenceBA)) {
      EVar33 = Difference;
    }
    else if (EVar5 == Intersect) {
      EVar33 = Intersect;
    }
    else {
      if ((EVar5 != Union) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\BooleanMeshesOp.cpp"
                              ,0x42,L""), bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EVar33 = Union;
    }
  }
  else {
    if (this->TrimOperation == TrimB) goto LAB_14c96080f;
LAB_14c960814:
    iVar20 = 1 - uVar37;
    if (this->bTrimMode == false) goto LAB_14c9607b2;
    if (this->TrimSide == RemoveInside) {
LAB_14c960857:
      EVar33 = TrimInside;
    }
    else {
      if (this->TrimSide != RemoveOutside) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\CompositionOps\\BooleanMeshesOp.cpp"
                            ,0x2f,L"");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_14c960857;
      }
      EVar33 = TrimOutside;
    }
  }
  pFVar7 = (FDynamicMesh3 *)this->_padding_;
  if (((this->Transforms).ArrayNum <= iVar20) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_7a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->Transforms).AllocatorInstance.Data;
  uVar39 = (ulonglong)uVar37;
  if (((this->Meshes).ArrayNum <= iVar20) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = *(FDynamicMesh3 **)((this->Meshes).AllocatorInstance.Data + (1 - uVar39) * 0x10);
  if (((local_7a8->Transforms).ArrayNum <= (int)uVar37) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = (local_7a8->Transforms).AllocatorInstance.Data;
  if (((local_7a8->Meshes).ArrayNum <= (int)uVar37) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FMeshBoolean::FMeshBoolean
            (&local_5a8,
             *(FDynamicMesh3 **)((local_7a8->Meshes).AllocatorInstance.Data + uVar39 * 0x10),
             (TTransformSRT3<double> *)(pFVar9 + uVar39 * 0x50),pFVar8,
             (TTransformSRT3<double> *)(local_7a0 + (1 - uVar39) * 5),pFVar7,EVar33);
  this_00 = local_740;
  if (local_740 != (FProgressCancel *)0x0) {
    pTStack_260 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)CONCAT44(pTStack_260._4_4_,pTStack_260._0_4_);
    if (local_740->WasCancelled != false) goto LAB_14c961999;
    Core::Private::Function::CheckCallable(*(void **)&local_740->CancelF);
    pcVar6 = *(code **)&this_00->CancelF;
    plVar30 = *(longlong **)&(this_00->CancelF).field_0x28;
    plVar28 = (longlong *)&(this_00->CancelF).field_0x10;
    if (plVar30 != (longlong *)0x0) {
      plVar28 = plVar30;
    }
    uVar22 = (**(code **)(*plVar28 + 8))();
    bVar19 = (bool)(*pcVar6)(uVar22);
    this_00->WasCancelled = bVar19;
    pTStack_260 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)CONCAT44(pTStack_260._4_4_,pTStack_260._0_4_);
    if (bVar19 != false) goto LAB_14c961999;
  }
  pFVar16 = local_7a8;
  local_5a8.bPutResultInInputSpace = false;
  local_5a8.Progress = this_00;
  local_5a8.bSimplifyAlongNewEdges = local_7a8->bTryCollapseExtraEdges;
  local_5a8.WindingThreshold = local_7a8->WindingThreshold;
  FMeshBoolean::Compute(&local_5a8);
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Rotation.field0_0x0._s_0.X;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Rotation.field0_0x0._s_0.Y;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Rotation.field0_0x0._s_0.Z;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Rotation.field0_0x0._s_0.W;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Translation.field0_0x0._s_0.X;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Translation.field0_0x0._s_0.Y;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Translation.field0_0x0._s_0.Z;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Scale3D.field0_0x0._s_0.X;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Scale3D.field0_0x0._s_0.Y;
  pFVar16->_padding_ = (longlong)local_5a8.ResultTransform.Scale3D.field0_0x0._s_0.Z;
  if (this_00 != (FProgressCancel *)0x0) {
    bVar19 = FProgressCancel::Cancelled(this_00);
    pTStack_260 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)CONCAT44(pTStack_260._4_4_,pTStack_260._0_4_);
    if (bVar19) goto LAB_14c961999;
  }
  pTVar2 = &pFVar16->CreatedBoundaryEdges;
  local_7a0 = pTVar2;
  if (pTVar2 != &local_5a8.CreatedBoundaryEdges) {
    piVar1 = &(pFVar16->CreatedBoundaryEdges).ArrayMax;
    (pFVar16->CreatedBoundaryEdges).ArrayNum = local_5a8.CreatedBoundaryEdges.ArrayNum;
    if ((local_5a8.CreatedBoundaryEdges.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_5a8.CreatedBoundaryEdges.ArrayNum,*piVar1,&pTVar2->AllocatorInstance,
                 local_5a8.CreatedBoundaryEdges.ArrayNum,piVar1);
      if (local_5a8.CreatedBoundaryEdges.ArrayNum != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,
               local_5a8.CreatedBoundaryEdges.AllocatorInstance.Data,
               (longlong)local_5a8.CreatedBoundaryEdges.ArrayNum << 2);
      }
    }
  }
  pTStack_260 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)CONCAT44(pTStack_260._4_4_,pTStack_260._0_4_);
  if (((pFVar16->CreatedBoundaryEdges).ArrayNum < 1) ||
     (pTStack_260 = (TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)CONCAT44(pTStack_260._4_4_,pTStack_260._0_4_),
     pFVar16->bAttemptFixHoles == false)) goto LAB_14c961999;
  local_2b8._0_8_ = local_5a8.Result;
  local_2b8._8_8_ = (FEdgeLoop *)0x0;
  local_2b8._16_8_ = 0;
  local_2b8._24_8_ = (FEdgeSpan *)0x0;
  local_2b8._32_4_ = 0;
  local_2b8._36_4_ = 0;
  local_2b8[0x28] = false;
  local_2b8[0x29] = false;
  local_2b8[0x2a] = false;
  local_2b8._44_4_ = Compute;
  local_2b8._48_4_ = ConvertToOpenSpan;
  local_278 = 0;
  plStack_250 = (longlong *)0x0;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240._0_4_ = 0;
  local_240._4_4_ = 0;
  local_238 = false;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228._0_4_ = 0;
  local_228._4_4_ = 0;
  pTVar23 = TArrayView<int_const_,int>::
            TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_630,pTVar2);
  puVar43 = (uint *)pTVar23->DataPtr;
  local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.Data.ArrayNum = 0;
  local_308.Data.ArrayMax = 0;
  local_308.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar37 = (uint)*(undefined8 *)&pTVar23->ArrayNum;
  local_308.AllocationFlags.NumBits = 0;
  local_308.AllocationFlags.MaxBits = 0x80;
  local_308.FirstFreeIndex = -1;
  local_308.NumFreeIndices = 0;
  local_2c8.Data = (FScriptContainerElement *)0x0;
  local_2c0 = 0;
  if (uVar37 != 0) {
    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar37);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve(&local_308,uVar37);
    uVar34 = 1;
    if (3 < uVar37) {
      uVar39 = (ulonglong)((uVar37 >> 1) + 7) * 2 + 1;
      lVar31 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_714 = (undefined4)lVar31;
      uVar34 = 1 << ((byte)lVar31 & 0x1f);
    }
    if ((local_2c0 == 0) || ((int)local_2c0 < (int)uVar34)) {
      local_2c0 = uVar34;
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c8,0,0,4);
      }
      if (uVar34 != 0) {
        uVar38 = uVar34;
        if (uVar34 < 2) {
          if (local_2c8.Data != (FScriptContainerElement *)0x0) {
            uVar38 = 0;
            goto LAB_14c960ced;
          }
        }
        else {
LAB_14c960ced:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_2c8,0,uVar38,4);
        }
        if (0 < (int)uVar34) {
          uVar42 = (ulonglong)uVar34;
          uVar39 = 0;
          do {
            FVar29.Data = local_2d0;
            if (local_2c8.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_2c8.Data;
            }
            uVar24 = uVar39 & (longlong)(int)uVar34 - 1U;
            uVar39 = uVar39 + 1;
            *(undefined4 *)(FVar29.Data + uVar24 * 4) = 0xffffffff;
            uVar42 = uVar42 - 1;
          } while (uVar42 != 0);
        }
      }
      if (local_2c0 != 0) {
        pTStack_790 = &local_308.AllocationFlags;
        local_798 = 0;
        uStack_794 = 1;
        iStack_784 = 0;
        iStack_780 = 0;
        if (local_308.AllocationFlags.NumBits != 0) {
          FVar40 = (ForElementType<unsigned_int>)&local_308.AllocationFlags;
          if (local_308.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar40 = local_308.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar34 = *(uint *)FVar40;
          local_798 = 0;
          iStack_780 = 0;
          while (uVar34 == 0) {
            iStack_780 = iStack_780 + 0x20;
            lVar31 = (longlong)local_798;
            local_798 = local_798 + 1;
            if ((int)(local_308.AllocationFlags.NumBits + -1 +
                     (local_308.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_798)
            goto LAB_14c960e0d;
            uVar34 = *(uint *)((uchar *)((longlong)FVar40 + 4) + lVar31 * 4);
          }
          uStack_794 = -uVar34 & uVar34;
          uVar39 = (ulonglong)uStack_794 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_710 = (int)lVar31;
          iStack_784 = iStack_780 + -1 + local_710;
          if (local_308.AllocationFlags.NumBits < iStack_784) {
LAB_14c960e0d:
            iStack_784 = local_308.AllocationFlags.NumBits;
          }
        }
        local_788 = 0xffffffff;
        local_6f8 = &local_308;
        local_6f0._padding_ = CONCAT44(uStack_794,local_798);
        local_6f0.CurrentBitIndex = iStack_784;
        local_6f0.UnvisitedBitMask = 0xffffffff;
        local_6f0._28_4_ = uStack_77c;
        local_6f0.BaseBitIndex = iStack_780;
        iVar20 = iStack_784;
        local_6f0.Array = pTStack_790;
        if (iStack_784 < local_308.AllocationFlags.NumBits) {
          do {
            pFVar9 = (local_6f8->Data).AllocatorInstance.Data;
            lVar31 = (longlong)iVar20;
            uVar34 = local_2c0 - 1 & *(uint *)(pFVar9 + lVar31 * 0xc);
            *(uint *)(pFVar9 + lVar31 * 0xc + 8) = uVar34;
            FVar29.Data = local_2d0;
            if (local_2c8.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_2c8.Data;
            }
            uVar39 = (longlong)(int)local_2c0 - 1U & (longlong)(int)uVar34;
            *(undefined4 *)(pFVar9 + lVar31 * 0xc + 4) = *(undefined4 *)(FVar29.Data + uVar39 * 4);
            *(int *)(FVar29.Data + uVar39 * 4) = iVar20;
            local_6f0.UnvisitedBitMask = local_6f0.UnvisitedBitMask & ~local_6f0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f0);
            iVar20 = local_6f0.CurrentBitIndex;
          } while (local_6f0.CurrentBitIndex < (local_6f0.Array)->NumBits);
        }
      }
    }
  }
  puVar3 = puVar43 + (int)uVar37;
  iVar20 = local_308.FirstFreeIndex;
  local_218 = local_278;
  uVar22 = uStack_270;
  uVar13 = local_258;
  plStack_1f0 = plStack_250;
  for (; local_308.FirstFreeIndex = iVar20, puVar43 != puVar3; puVar43 = puVar43 + 1) {
    local_278 = local_218;
    uStack_270 = uVar22;
    local_258 = uVar13;
    plStack_250 = plStack_1f0;
    if (local_308.NumFreeIndices == 0) {
      iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)&local_308,&local_308.Data.ArrayNum,
                          &local_308.Data.ArrayMax);
      iVar21 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_308.AllocationFlags,1);
      FVar40 = (ForElementType<unsigned_int>)&local_308.AllocationFlags;
      if (local_308.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar40 = local_308.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      bVar27 = (byte)iVar21 & 0x1f;
      if (iVar21 < 0) {
        iVar21 = iVar21 + 0x1f;
        bVar27 = bVar27 - 0x20;
      }
      puVar4 = (uint *)((longlong)FVar40 + (longlong)(iVar21 >> 5) * 4);
      *puVar4 = *puVar4 & ~(1 << (bVar27 & 0x1f));
    }
    else {
      local_308.FirstFreeIndex =
           *(int *)(local_308.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc + 4);
      local_308.NumFreeIndices = local_308.NumFreeIndices + -1;
      if (local_308.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_308.Data.AllocatorInstance.Data + (longlong)local_308.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_308,&local_6a8,iVar20);
    if (local_6a8.Pointer != (uint *)0x0) {
      *(uint *)local_6a8.Pointer = *puVar43;
      *(uint *)((longlong)local_6a8.Pointer + 4) = 0xffffffff;
    }
    uVar37 = *(uint *)local_6a8.Pointer;
    if ((local_308.Data.ArrayNum - local_308.NumFreeIndices != 1) &&
       (local_308.Data.ArrayNum != local_308.NumFreeIndices)) {
      FVar29.Data = local_2d0;
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        FVar29.Data = local_2c8.Data;
      }
      for (iVar20 = *(int *)(FVar29.Data + (ulonglong)(local_2c0 - 1 & uVar37) * 4); iVar20 != -1;
          iVar20 = *(int *)(local_308.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc + 4)) {
        if (*(uint *)(local_308.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc) == uVar37) {
          if (iVar20 != -1) {
            *(uint *)(local_308.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc) = uVar37;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_308,local_6a8.Index,1);
            goto LAB_14c9612f1;
          }
          break;
        }
      }
    }
    uVar38 = local_308.Data.ArrayNum - local_308.NumFreeIndices;
    uVar34 = 1;
    if (3 < uVar38) {
      uVar39 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
      lVar31 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_70c = (undefined4)lVar31;
      uVar34 = 1 << ((byte)lVar31 & 0x1f);
    }
    if (((int)uVar38 < 1) || ((int)uVar34 <= (int)local_2c0)) {
      uVar37 = local_2c0 - 1 & uVar37;
      *(uint *)((longlong)local_6a8.Pointer + 8) = uVar37;
      FVar29.Data = local_2d0;
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        FVar29.Data = local_2c8.Data;
      }
      uVar39 = (longlong)(int)local_2c0 - 1U & (longlong)(int)uVar37;
      *(uint *)((longlong)local_6a8.Pointer + 4) = *(uint *)(FVar29.Data + uVar39 * 4);
      *(int *)(FVar29.Data + uVar39 * 4) = local_6a8.Index;
    }
    else {
      local_2c0 = uVar34;
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c8,0,0,4);
      }
      if (uVar34 != 0) {
        uVar37 = uVar34;
        if (uVar34 < 2) {
          if (local_2c8.Data != (FScriptContainerElement *)0x0) {
            uVar37 = 0;
            goto LAB_14c9610f2;
          }
        }
        else {
LAB_14c9610f2:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_2c8,0,uVar37,4);
        }
        if (0 < (int)uVar34) {
          uVar42 = (ulonglong)uVar34;
          uVar39 = 0;
          do {
            FVar29.Data = local_2d0;
            if (local_2c8.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_2c8.Data;
            }
            uVar24 = uVar39 & (longlong)(int)uVar34 - 1U;
            uVar39 = uVar39 + 1;
            *(undefined4 *)(FVar29.Data + uVar24 * 4) = 0xffffffff;
            uVar42 = uVar42 - 1;
          } while (uVar42 != 0);
        }
      }
      if (local_2c0 != 0) {
        pTStack_770 = &local_308.AllocationFlags;
        local_778 = 0;
        uStack_774 = 1;
        iStack_764 = 0;
        iStack_760 = 0;
        if (local_308.AllocationFlags.NumBits != 0) {
          FVar40 = (ForElementType<unsigned_int>)&local_308.AllocationFlags;
          if (local_308.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar40 = local_308.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar37 = *(uint *)FVar40;
          local_778 = 0;
          iStack_760 = 0;
          while (uVar37 == 0) {
            iStack_760 = iStack_760 + 0x20;
            lVar31 = (longlong)local_778;
            local_778 = local_778 + 1;
            if ((int)(local_308.AllocationFlags.NumBits + -1 +
                     (local_308.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_778)
            goto LAB_14c96120d;
            uVar37 = *(uint *)((uchar *)((longlong)FVar40 + 4) + lVar31 * 4);
          }
          uStack_774 = -uVar37 & uVar37;
          uVar39 = (ulonglong)uStack_774 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          local_708 = (int)lVar31;
          iStack_764 = local_708 + -1 + iStack_760;
          if (local_308.AllocationFlags.NumBits < iStack_764) {
LAB_14c96120d:
            iStack_764 = local_308.AllocationFlags.NumBits;
          }
        }
        local_768 = 0xffffffff;
        local_6d0 = &local_308;
        local_6c8._padding_ = CONCAT44(uStack_774,local_778);
        local_6c8.CurrentBitIndex = iStack_764;
        local_6c8.UnvisitedBitMask = 0xffffffff;
        local_6c8._28_4_ = uStack_75c;
        local_6c8.BaseBitIndex = iStack_760;
        iVar20 = iStack_764;
        local_6c8.Array = pTStack_770;
        if (iStack_764 < local_308.AllocationFlags.NumBits) {
          do {
            pFVar9 = (local_6d0->Data).AllocatorInstance.Data;
            lVar31 = (longlong)iVar20;
            uVar37 = local_2c0 - 1 & *(uint *)(pFVar9 + lVar31 * 0xc);
            *(uint *)(pFVar9 + lVar31 * 0xc + 8) = uVar37;
            FVar29.Data = local_2d0;
            if (local_2c8.Data != (FScriptContainerElement *)0x0) {
              FVar29.Data = local_2c8.Data;
            }
            uVar39 = (longlong)(int)local_2c0 - 1U & (longlong)(int)uVar37;
            *(undefined4 *)(pFVar9 + lVar31 * 0xc + 4) = *(undefined4 *)(FVar29.Data + uVar39 * 4);
            *(int *)(FVar29.Data + uVar39 * 4) = iVar20;
            local_6c8.UnvisitedBitMask = local_6c8.UnvisitedBitMask & ~local_6c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6c8);
            iVar20 = local_6c8.CurrentBitIndex;
          } while (local_6c8.CurrentBitIndex < (local_6c8.Array)->NumBits);
        }
      }
    }
LAB_14c9612f1:
    this_00 = local_740;
    iVar20 = local_308.FirstFreeIndex;
    local_218 = local_278;
    uVar22 = uStack_270;
    uVar13 = local_258;
    plStack_1f0 = plStack_250;
  }
  pTStack_260 = &local_308;
  local_278 = (longlong)
              Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FBooleanMeshesOp::CalculateResult'::__l47::<lambda_1>,bool,int>
              ::Call;
  uStack_270 = uStack_210;
  local_258 = local_208[2];
  plStack_250 = (longlong *)0x0;
  local_268 = 0x528d8308;
  uStack_264 = 1;
  uStack_210 = uVar22;
  local_208[2] = uVar13;
  if (local_218 != 0) {
    plVar30 = local_208;
    if (plStack_1f0 != (longlong *)0x0) {
      plVar30 = plStack_1f0;
    }
    (**(code **)(*plVar30 + 0x10))();
  }
  FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_2b8);
  if (this_00 == (FProgressCancel *)0x0) {
LAB_14c96141c:
    pFVar10 = ((local_5a8.Result)->AttributeSet).Ptr;
    pTVar25 = FDynamicMesh3::GetBounds(local_5a8.Result,&local_620,false);
    dVar15 = __real_bff0000000000000;
    dVar14 = __real_3ff0000000000000;
    dVar12 = (pTVar25->Max).field0_0x0._s_0.Z - (pTVar25->Min).field0_0x0._s_0.Z;
    dVar44 = (pTVar25->Max).field0_0x0._s_0.Y - (pTVar25->Min).field0_0x0._s_0.Y;
    dVar11 = (pTVar25->Max).field0_0x0._s_0.X - (pTVar25->Min).field0_0x0._s_0.X;
    uVar18 = local_2b8._16_4_;
    uVar39 = (ulonglong)(int)local_2b8._16_4_;
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    if (dVar44 <= 0.0) {
      dVar44 = 0.0;
    }
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    pFVar36 = (FEdgeLoop *)(local_2b8._8_8_ + uVar39 * 0x40);
    if (dVar12 <= dVar44) {
      dVar12 = dVar44;
    }
    if (dVar12 <= dVar11) {
      dVar12 = dVar11;
    }
    dVar12 = __real_3ff0000000000000 / dVar12;
    this_01 = (FEdgeLoop *)local_2b8._8_8_;
    while( true ) {
      FVar29.Data = (FScriptContainerElement *)0x0;
      if ((int)uVar39 != uVar18) {
        local_7c8 = 0;
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_7c8);
      }
      pTVar2 = local_7a0;
      if (this_01 == pFVar36) break;
      iVar20 = (local_5a8.Result)->GroupIDCounter;
      (local_5a8.Result)->GroupIDCounter = iVar20 + 1;
      pFVar26 = FEdgeLoop::FEdgeLoop(&local_5f0,this_01);
      FMinimalHoleFiller::FMinimalHoleFiller
                ((FMinimalHoleFiller *)local_1e8,local_5a8.Result,pFVar26);
      bVar19 = FMinimalHoleFiller::Fill((FMinimalHoleFiller *)local_1e8,iVar20);
      if ((bVar19) && (pFVar10 != (FDynamicMeshAttributeSet *)0x0)) {
        local_730.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_730.ArrayNum = 0;
        local_730.ArrayMax = 0;
        FEdgeLoop::GetVertices<UE::Math::TVector<double>_>(this_01,&local_730);
        PolygonTriangulation::ComputePolygonPlane<double>
                  (&local_730,(TVector<double> *)&local_758._s_0,(TVector<double> *)&local_660._s_0)
        ;
        local_758._s_0.X = local_758._s_0.X * dVar15;
        local_758._s_0.Y = local_758._s_0.Y * dVar15;
        local_758._s_0.Z = local_758._s_0.Z * dVar15;
        if (local_730.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_730.AllocatorInstance.Data);
        }
        uVar17 = local_758._s_0.Z;
        uVar13 = local_758._s_0.Y;
        uVar22 = local_758._s_0.X;
        local_738.Mesh = (FDynamicMesh3 *)pFVar16->_padding_;
        local_698._s_0.X = local_660._s_0.X;
        local_698._s_0.Y = local_660._s_0.Y;
        local_680._s_0.X = 0.0;
        local_648._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_648._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_648._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        local_680._s_0.W = dVar14;
        local_680._s_0.Y = 0.0;
        local_680._s_0.Z = 0.0;
        local_698._s_0.Z = local_660._s_0.Z;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_680._s_0,(TVector<double> *)&local_648._s_0,
                   (TVector<double> *)&local_758._s_0);
        local_720._s_0.X = (float)(double)uVar22;
        local_720._s_0.Y = (float)(double)uVar13;
        local_720._s_0.Z = (float)(double)uVar17;
        FDynamicMeshEditor::SetTriangleNormals
                  (&local_738,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_1e8 + 8),
                   (TVector<float> *)&local_720._s_0);
        local_704 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FDynamicMeshEditor::SetTriangleUVsFromProjection
                  (&local_738,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_1e8 + 8),
                   (TFrame3<double> *)&local_698._s_0,(float)dVar12,
                   (TVector2<float> *)&local_704._s_0,true,0);
      }
      FMinimalHoleFiller::~FMinimalHoleFiller((FMinimalHoleFiller *)local_1e8);
      uVar39 = local_2b8._16_8_ & 0xffffffff;
      this_01 = this_01 + 1;
    }
    iVar20 = local_7a0->ArrayNum;
    local_7c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar35 = (local_7a0->AllocatorInstance).Data;
    local_7c0.ArrayNum = 0;
    local_7c0.ArrayMax = 0;
    pFVar9 = pFVar35 + (longlong)iVar20 * 4;
    pFVar41 = FVar29.Data;
    while( true ) {
      if (pTVar2->ArrayNum != iVar20) {
        local_7c7[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_7c7);
        pFVar41 = (FScriptContainerElement *)(local_7c0._8_8_ & 0xffffffff);
        FVar29.Data = local_7c0.AllocatorInstance.Data;
      }
      iVar21 = (int)pFVar41;
      if (pFVar35 == pFVar9) break;
      local_7b0[0] = *(uint *)pFVar35;
      if ((((-1 < (int)local_7b0[0]) &&
           ((int)local_7b0[0] <
            (int)(((local_5a8.Result)->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 ((local_5a8.Result)->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (((local_5a8.Result)->EdgeRefCounts).RefCounts.Blocks.
                                 AllocatorInstance.Data + (ulonglong)(local_7b0[0] >> 9) * 8) +
                              (ulonglong)(local_7b0[0] & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (*(int *)(*(longlong *)
                    (((local_5a8.Result)->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_7b0[0] >> 9) * 8) + 0xc +
                  (ulonglong)(local_7b0[0] & 0x1ff) * 0x10) == -1)) {
        if ((FVar29.Data <= (FScriptContainerElement *)local_7b0) &&
           ((FScriptContainerElement *)local_7b0 < FVar29.Data + (longlong)local_7c0.ArrayMax * 4))
        {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar19) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar29.Data = local_7c0.AllocatorInstance.Data;
          iVar21 = local_7c0.ArrayNum;
        }
        if (iVar21 == local_7c0.ArrayMax) {
          iVar21 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_7c0.AllocatorInstance,&local_7c0.ArrayMax);
          FVar29.Data = local_7c0.AllocatorInstance.Data;
        }
        local_7c0.ArrayNum = iVar21 + 1U;
        *(uint *)(FVar29.Data + (longlong)iVar21 * 4) = local_7b0[0];
        pFVar41 = (FScriptContainerElement *)(ulonglong)(iVar21 + 1U);
        FVar29.Data = local_7c0.AllocatorInstance.Data;
      }
      pFVar35 = pFVar35 + 4;
    }
    if (pTVar2 != &local_7c0) {
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      FVar32.Data = FVar29.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
        FVar32.Data = local_7c0.AllocatorInstance.Data;
        iVar21 = local_7c0.ArrayNum;
      }
      iVar20 = local_7c0.ArrayMax;
      FVar29.Data = (FScriptContainerElement *)0x0;
      (pTVar2->AllocatorInstance).Data = FVar32.Data;
      local_7c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7c0.ArrayNum = 0;
      local_7c0.ArrayMax = 0;
      pTVar2->ArrayNum = iVar21;
      pTVar2->ArrayMax = iVar20;
    }
    if (FVar29.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar29.Data);
    }
    local_2c0 = 0;
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_308);
  }
  else {
    bVar19 = FProgressCancel::Cancelled(this_00);
    if (!bVar19) goto LAB_14c96141c;
    local_2c0 = 0;
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_308,0);
    if (local_308.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_308.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data);
  }
  if ((code *)local_278 != (code *)0x0) {
    plVar30 = (longlong *)&local_268;
    if (plStack_250 != (longlong *)0x0) {
      plVar30 = plStack_250;
    }
    (**(code **)(*plVar30 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_2b8._24_8_,local_2b8._32_4_);
  if ((FEdgeSpan *)local_2b8._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_2b8._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_2b8._8_8_,local_2b8._16_4_);
  if ((FEdgeLoop *)local_2b8._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_2b8._8_8_);
  }
LAB_14c961999:
  FMeshBoolean::~FMeshBoolean(&local_5a8);
  return;
}

// SetTransform @ 14c985740

void __thiscall
UE::Geometry::FBooleanMeshesOp::SetTransform(FBooleanMeshesOp *this,TTransformSRT3<double> *param_1)

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

