// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 4

// operator() @ 14c94b480

bool __thiscall
`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_28;
  
  lVar3 = **(longlong **)this;
  lVar8 = 0;
  uVar6 = *(uint *)(*(longlong *)
                     (*(longlong *)(lVar3 + 0x1c8) + (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
                   (ulonglong)(param_1 & 0x1ff) * 0x10);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x188) + (ulonglong)(uVar6 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
  local_28 = (int)uVar1;
  lVar7 = lVar8;
  if (local_28 != param_1) {
    if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
      lVar7 = 4;
    }
    else {
      lVar7 = -4;
      if (*(int *)(lVar4 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc) == param_1) {
        lVar7 = 8;
      }
    }
  }
  lVar4 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
  uVar6 = UE::Geometry::TIndexMap<int>::GetFrom((TIndexMap<int> *)(lVar3 + 0x2e0),uVar6);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x180) + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 0xc + lVar7);
  uVar6 = *(uint *)(*(longlong *)
                     (*(longlong *)(lVar3 + 0x1c8) + (ulonglong)((uint)param_2 >> 9) * 8) + 8 +
                   (ulonglong)(param_2 & 0x1ff) * 0x10);
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x188) + (ulonglong)(uVar6 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar3 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
  local_28 = (int)uVar1;
  if (local_28 != param_2) {
    if ((int)((ulonglong)uVar1 >> 0x20) == param_2) {
      lVar8 = 4;
    }
    else {
      lVar8 = -4;
      if (*(int *)(lVar3 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc) == param_2) {
        lVar8 = 8;
      }
    }
  }
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
  uVar6 = UE::Geometry::TIndexMap<int>::GetFrom
                    ((TIndexMap<int> *)(**(longlong **)this + 0x2e0),uVar6);
  bVar5 = UE::Geometry::FOffsetMeshRegion::EdgesSeparateSameGroupsAndAreColinearAtBorder
                    (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 8) + 8),iVar2,
                     *(int *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x180) + (ulonglong)(uVar6 >> 9) * 8) +
                              (ulonglong)(uVar6 & 0x1ff) * 0xc + lVar8),
                     *(bool *)(*(longlong *)((longlong)this + 8) + 0xd8));
  return bVar5;
}

// BooleanExtrude @ 14c95eb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UE::Geometry::FExtrudeOp::BooleanExtrude(FExtrudeOp *this,FProgressCancel *param_1)

{
  int *piVar1;
  EDirectionMode EVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  FExtrudeOp *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FDynamicSubmesh3 *this_00;
  FDynamicSubmesh3 *pFVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte bVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint *puVar20;
  ForAnyElementType FVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  FRefCountVector *pFVar27;
  int *piVar28;
  FScriptContainerElement *pFVar29;
  FDynamicSubmesh3 *pFVar30;
  int iVar31;
  ulonglong uVar32;
  uint *puVar33;
  ForElementType<unsigned_int> FVar34;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar35;
  FScriptContainerElement *pFVar36;
  undefined1 auStackY_758 [32];
  undefined1 local_708;
  undefined1 local_707;
  undefined1 local_706;
  undefined1 local_705;
  byte local_704;
  uint local_700 [2];
  FDynamicSubmesh3 *local_6f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6f0;
  IndexIterator local_6e0;
  FExtrudeOp *local_6d0;
  uint local_6c8;
  uint uStack_6c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6c0;
  undefined4 local_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  undefined4 uStack_6ac;
  uint local_6a8;
  uint uStack_6a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6a0;
  undefined4 local_698;
  uint uStack_694;
  uint uStack_690;
  undefined4 uStack_68c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_688;
  FProgressCancel *local_680;
  FMeshConnectedComponents local_678;
  FScriptContainerElement *local_660;
  int *piStack_658;
  undefined8 local_650;
  undefined4 local_648;
  int local_644;
  undefined4 local_640;
  int local_63c;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_630;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_610;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  FScriptContainerElement *local_5e8;
  int *piStack_5e0;
  int local_5d8;
  undefined4 uStack_5d4;
  IndexIterator local_5d0;
  FSparseArrayAllocationInfo local_5c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_5b0;
  TQuaternion<double>_u_0 local_5a0;
  double local_580;
  double dStack_578;
  double local_570;
  double local_568;
  double dStack_560;
  double local_558;
  TQuaternion<double>_u_0 local_550;
  double local_530;
  double dStack_528;
  double local_520;
  double local_518;
  double dStack_510;
  double local_508;
  TFunction<bool___cdecl(int,int)> local_4e8;
  undefined1 local_4b8 [552];
  int local_290;
  bool local_238;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_218;
  FScriptContainerElement local_1e0 [8];
  ForAnyElementType local_1d8;
  uint local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [4];
  undefined **local_198 [2];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  code *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  EVertexExtrusionVectorType local_140;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  FDynamicSubmesh3 **ppFStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  bool local_104;
  bool local_103;
  double local_100;
  ForAnyElementType local_e0;
  int local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  code *local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  code *local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_758;
  local_6d0 = this;
  local_680 = param_1;
  if ((param_1 != (FProgressCancel *)0x0) && (bVar8 = FProgressCancel::Cancelled(param_1), bVar8)) {
    return (bool)0;
  }
  pFVar30 = (FDynamicSubmesh3 *)0x0;
  pTVar35 = &this->TriangleSelection;
  local_6f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6f0.ArrayNum = 0;
  local_6f0.ArrayMax = 0;
  local_5b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_688 = pTVar35;
  TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_5b0,(int *)(pTVar35->AllocatorInstance).Data,(this->TriangleSelection).ArrayNum,
             0);
  ExtrudeOpLocals::UpdateSelectionGroups((FDynamicMesh3 *)this->_padding_,&local_5b0,&local_6f0);
  pFVar3 = (FDynamicMesh3 *)this->_padding_;
  this_00 = ::operator_new(0x5f0);
  pFVar13 = pFVar30;
  if (this_00 != (FDynamicSubmesh3 *)0x0) {
    pFVar13 = FDynamicSubmesh3::FDynamicSubmesh3(this_00,pFVar3,pTVar35,0xf,true);
  }
  FVar26.Data = local_6f0.AllocatorInstance.Data;
  iVar31 = local_6f0.ArrayNum;
  local_6f8 = pFVar13;
  if ((local_6f0.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if (0 < iVar31) {
    do {
      uVar25 = (uint)pFVar30;
      uVar24 = 0;
      if ((int)uVar25 < iVar31) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar10 = TIndexMap<int>::GetTo(&(pFVar13->Mappings).GroupMap,*(uint *)FVar26.Data);
      if ((uVar24 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      *(uint *)FVar26.Data = uVar10;
      pFVar30 = (FDynamicSubmesh3 *)(ulonglong)(uVar25 + 1);
      FVar26.Data = FVar26.Data + 4;
      this = local_6d0;
      pTVar35 = local_688;
      param_1 = local_680;
    } while ((int)(uVar25 + 1) < iVar31);
  }
  if (param_1 != (FProgressCancel *)0x0) {
    bVar8 = FProgressCancel::Cancelled(param_1);
    if (bVar8) {
      uVar9 = 0;
      goto LAB_14c95fe44;
    }
  }
  FOffsetMeshRegion::FOffsetMeshRegion((FOffsetMeshRegion *)local_198,&local_6f8->Submesh);
  uVar24 = (this->TriangleSelection).ArrayNum;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (local_17c < (int)uVar24) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar24,&local_188,local_180,&local_17c);
  }
  pFVar13 = local_6f8;
  pFVar27 = &(local_6f8->Submesh).TriangleRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_6e0,pFVar27,0,
             (pFVar27->RefCounts).CurBlock * 0x200 +
             (local_6f8->Submesh).TriangleRefCounts.RefCounts.CurBlockUsed);
  iVar31 = (pFVar27->RefCounts).CurBlock * 0x200 +
           (pFVar13->Submesh).TriangleRefCounts.RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_5d0,pFVar27,iVar31,iVar31);
  uVar24 = local_6e0._8_4_;
  local_1c8 = local_138;
  uVar14 = uStack_130;
joined_r0x00014c95ee3b:
  local_6e0._8_4_ = uVar24;
  if (uVar24 != local_5d0._8_4_) {
    local_700[0] = uVar24;
    local_138 = local_1c8;
    uStack_130 = uVar14;
    if (((local_188.Data <= (FScriptContainerElement *)local_700) &&
        ((FScriptContainerElement *)local_700 < local_188.Data + (longlong)local_17c * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    iVar31 = local_180;
    if (local_180 == local_17c) {
      iVar31 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_188,&local_17c);
    }
    uVar24 = uVar24 + 1;
    local_180 = iVar31 + 1;
    *(uint *)(local_188.Data + (longlong)iVar31 * 4) = local_700[0];
    local_1c8 = local_138;
    uVar14 = uStack_130;
    if ((int)uVar24 < (int)local_6e0._12_4_) {
      do {
        if ((*(short *)(*(longlong *)
                         (*(longlong *)(local_6e0._0_8_ + 8) + (ulonglong)(uVar24 >> 9) * 8) +
                       (ulonglong)(uVar24 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)
                        (*(longlong *)(local_6e0._0_8_ + 8) + (ulonglong)(uVar24 >> 9) * 8) +
                      (ulonglong)(uVar24 & 0x1ff) * 2) != -1)) break;
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < (int)local_6e0._12_4_);
    }
    goto joined_r0x00014c95ee3b;
  }
  puVar23 = (uint *)0x0;
  plVar19 = (longlong *)CONCAT44(uStack_10c,uStack_110);
  ppFStack_120 = &local_6f8;
  local_138 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l2::<lambda_1>,bool,int,int>
              ::Call;
  uStack_130 = uStack_1c0;
  local_1b8[2]._0_4_ = SUB84(this,0);
  local_1b8[2]._4_4_ = (undefined4)((ulonglong)this >> 0x20);
  local_118 = (undefined4)local_1b8[2];
  uStack_114 = local_1b8[2]._4_4_;
  uStack_110 = 0;
  uStack_10c = 0;
  local_128 = 0x528d8448;
  uStack_124 = 1;
  uStack_1c0 = uVar14;
  if (local_1c8 != (code *)0x0) {
    plVar18 = local_1b8;
    if (plVar19 != (longlong *)0x0) {
      plVar18 = plVar19;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  uVar14 = uStack_170;
  pcVar6 = local_178;
  plVar19 = (longlong *)CONCAT44(uStack_14c,uStack_150);
  local_108 = this->UVScaleFactor;
  if (this->DirectionMode == SingleDirection) {
    local_178 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l15::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
                ::Call;
    uStack_170 = uStack_b0;
    local_158 = (undefined4)local_98;
    uStack_154 = local_98._4_4_;
    uStack_150 = 0;
    uStack_14c = 0;
    local_168 = 0x528d8468;
    uStack_164 = 1;
    uStack_160 = (undefined4)local_1b8[2];
    uStack_15c = local_1b8[2]._4_4_;
    local_b8 = pcVar6;
    uStack_b0 = uVar14;
    if (pcVar6 != (code *)0x0) {
      plVar18 = local_a8;
LAB_14c95f152:
      uStack_14c = 0;
      uStack_150 = 0;
      uStack_15c = local_1b8[2]._4_4_;
      uStack_160 = (undefined4)local_1b8[2];
      uStack_164 = 1;
      if (plVar19 != (longlong *)0x0) {
        plVar18 = plVar19;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  else {
    local_178 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FExtrudeOp::BooleanExtrude'::__l17::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
                ::Call;
    uStack_170 = uStack_80;
    local_158 = (undefined4)local_68;
    uStack_154 = local_68._4_4_;
    uStack_150 = 0;
    uStack_14c = 0;
    local_168 = 0x528d8488;
    uStack_164 = 1;
    uStack_160 = (undefined4)local_1b8[2];
    uStack_15c = local_1b8[2]._4_4_;
    local_88 = pcVar6;
    uStack_80 = uVar14;
    if (pcVar6 != (code *)0x0) {
      plVar18 = local_78;
      goto LAB_14c95f152;
    }
  }
  EVar2 = this->DirectionMode;
  local_140 = Zero;
  if (EVar2 == VertexNormals) {
    local_140 = VertexNormal;
  }
  else if (EVar2 == SelectedTriangleNormals) {
    local_140 = SelectionTriNormalsAngleWeightedAverage;
  }
  else if (EVar2 == SelectedTriangleNormalsEven) {
    local_140 = SelectionTriNormalsAngleWeightedAdjusted;
  }
  local_100 = this->MaxScaleForAdjustingTriNormalsOffset;
  local_103 = 0.0 < this->ExtrudeDistance;
  local_104 = true;
  FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_198);
  FMeshNormals::QuickComputeVertexNormalsForTriangles
            ((FDynamicMesh3 *)this->_padding_,&local_d0,true,true,false);
  if (param_1 == (FProgressCancel *)0x0) {
LAB_14c95f23f:
    local_4b8._232_8_ = param_1;
    if (this->bShellsToSolids != false) {
      local_678.Mesh = (FDynamicMesh3 *)this->_padding_;
      local_678.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_678.Components.Array.ArrayNum = 0;
      local_678.Components.Array.ArrayMax = 0;
      local_4e8._0_8_ = 0;
      local_4e8._40_8_ = 0;
      FMeshConnectedComponents::FindTrianglesConnectedToSeeds(&local_678,pTVar35,&local_4e8);
      uVar24 = (this->TriangleSelection).ArrayNum;
      pFVar36 = (this->TriangleSelection).AllocatorInstance.Data;
      if ((int)uVar24 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      local_218.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_218.AllocationFlags.NumBits = 0;
      local_218.AllocationFlags.MaxBits = 0x80;
      local_218.FirstFreeIndex = -1;
      local_218.NumFreeIndices = 0;
      local_1d8.Data = (FScriptContainerElement *)0x0;
      local_1d0 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve(&local_218,uVar24);
        uVar25 = 1;
        if (3 < uVar24) {
          uVar32 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_648 = (int)lVar16;
          uVar25 = 1 << ((byte)lVar16 & 0x1f);
        }
        if ((local_1d0 == 0) || ((int)local_1d0 < (int)uVar25)) {
          local_1d0 = uVar25;
          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,4);
          }
          if (uVar25 != 0) {
            uVar10 = uVar25;
            if (uVar25 < 2) {
              if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                uVar10 = 0;
                goto LAB_14c95f38e;
              }
            }
            else {
LAB_14c95f38e:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_1d8,0,uVar10,4);
            }
            if (0 < (int)uVar25) {
              uVar32 = (ulonglong)uVar25;
              puVar20 = puVar23;
              do {
                FVar26.Data = local_1e0;
                if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_1d8.Data;
                }
                uVar15 = (ulonglong)puVar20 & (longlong)(int)uVar25 - 1U;
                puVar20 = (uint *)((longlong)puVar20 + 1);
                *(undefined4 *)(FVar26.Data + uVar15 * 4) = 0xffffffff;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
          }
          if (local_1d0 != 0) {
            pTStack_6c0 = &local_218.AllocationFlags;
            local_6c8 = 0;
            uStack_6c4 = 1;
            uStack_6b4 = 0;
            uStack_6b0 = 0;
            puVar20 = puVar23;
            if (local_218.AllocationFlags.NumBits != 0) {
              FVar34 = (ForElementType<unsigned_int>)&local_218.AllocationFlags;
              if (local_218.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar34 = local_218.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar25 = *(uint *)FVar34;
              puVar33 = puVar23;
              while (uVar25 == 0) {
                uStack_6b0 = (int)puVar33 + 0x20;
                puVar33 = (uint *)(ulonglong)uStack_6b0;
                iVar31 = (int)puVar20;
                local_6c8 = iVar31 + 1;
                puVar20 = (uint *)(ulonglong)local_6c8;
                if ((int)((local_218.AllocationFlags.NumBits - 1U) +
                         ((int)(local_218.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_6c8) goto LAB_14c95f49d;
                uVar25 = *(uint *)((uchar *)((longlong)FVar34 + 4) + (longlong)iVar31 * 4);
              }
              uStack_6c4 = -uVar25 & uVar25;
              uVar32 = (ulonglong)uStack_6c4 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_644 = (int)lVar16;
              uStack_6b4 = (int)lVar16 + -1 + uStack_6b0;
              puVar20 = (uint *)(ulonglong)uStack_6b4;
              if (local_218.AllocationFlags.NumBits < (int)uStack_6b4) {
LAB_14c95f49d:
                puVar20 = (uint *)(ulonglong)(uint)local_218.AllocationFlags.NumBits;
                uStack_6b4 = local_218.AllocationFlags.NumBits;
              }
            }
            local_6b8 = 0xffffffff;
            local_638 = &local_218;
            local_630._padding_ = CONCAT44(uStack_6c4,local_6c8);
            local_630.Array = pTStack_6c0;
            local_630.UnvisitedBitMask = 0xffffffff;
            local_630.CurrentBitIndex = uStack_6b4;
            local_630.BaseBitIndex = uStack_6b0;
            local_630._28_4_ = uStack_6ac;
            if ((int)puVar20 < local_218.AllocationFlags.NumBits) {
              do {
                pFVar29 = (local_638->Data).AllocatorInstance.Data;
                lVar16 = (longlong)(int)puVar20;
                uVar25 = local_1d0 - 1 & *(uint *)(pFVar29 + lVar16 * 0xc);
                *(uint *)(pFVar29 + lVar16 * 0xc + 8) = uVar25;
                FVar26.Data = local_1e0;
                if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_1d8.Data;
                }
                uVar32 = (longlong)(int)local_1d0 - 1U & (longlong)(int)uVar25;
                *(undefined4 *)(pFVar29 + lVar16 * 0xc + 4) =
                     *(undefined4 *)(FVar26.Data + uVar32 * 4);
                *(int *)(FVar26.Data + uVar32 * 4) = (int)puVar20;
                local_630.UnvisitedBitMask = local_630.UnvisitedBitMask & ~local_630._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_630);
                puVar20 = (uint *)(ulonglong)(uint)local_630.CurrentBitIndex;
              } while (local_630.CurrentBitIndex < (local_630.Array)->NumBits);
            }
          }
        }
      }
      pFVar29 = pFVar36 + (longlong)(int)uVar24 * 4;
      FVar26.Data = local_678.Components.Array.AllocatorInstance.Data;
      iVar31 = local_218.FirstFreeIndex;
      for (; local_678.Components.Array.AllocatorInstance.Data = FVar26.Data,
          local_218.FirstFreeIndex = iVar31, pFVar36 != pFVar29; pFVar36 = pFVar36 + 4) {
        if (local_218.NumFreeIndices == 0) {
          iVar31 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)&local_218,&local_218.Data.ArrayNum,
                              &local_218.Data.ArrayMax);
          iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             (&local_218.AllocationFlags,1);
          FVar34 = (ForElementType<unsigned_int>)&local_218.AllocationFlags;
          if (local_218.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar34 = local_218.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar17 = (byte)iVar12 & 0x1f;
          if (iVar12 < 0) {
            iVar12 = iVar12 + 0x1f;
            bVar17 = bVar17 - 0x20;
          }
          puVar20 = (uint *)((longlong)FVar34 + (longlong)(iVar12 >> 5) * 4);
          *puVar20 = *puVar20 & ~(1 << (bVar17 & 0x1f));
        }
        else {
          local_218.FirstFreeIndex =
               *(int *)(local_218.Data.AllocatorInstance.Data + (longlong)iVar31 * 0xc + 4);
          local_218.NumFreeIndices = local_218.NumFreeIndices + -1;
          if (local_218.NumFreeIndices != 0) {
            *(undefined4 *)
             (local_218.Data.AllocatorInstance.Data + (longlong)local_218.FirstFreeIndex * 0xc) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_218,&local_5c0,iVar31);
        puVar20 = puVar23;
        if (local_5c0.Pointer != (uint *)0x0) {
          *(uint *)local_5c0.Pointer = *(uint *)pFVar36;
          *(uint *)((longlong)local_5c0.Pointer + 4) = 0xffffffff;
          puVar20 = local_5c0.Pointer;
        }
        uVar24 = *puVar20;
        if ((local_218.Data.ArrayNum - local_218.NumFreeIndices != 1) &&
           (local_218.Data.ArrayNum != local_218.NumFreeIndices)) {
          FVar26.Data = local_1e0;
          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
            FVar26.Data = local_1d8.Data;
          }
          for (iVar31 = *(int *)(FVar26.Data + (ulonglong)(local_1d0 - 1 & uVar24) * 4);
              iVar31 != -1;
              iVar31 = *(int *)(local_218.Data.AllocatorInstance.Data + (longlong)iVar31 * 0xc + 4))
          {
            if (*(uint *)(local_218.Data.AllocatorInstance.Data + (longlong)iVar31 * 0xc) == uVar24)
            {
              if (iVar31 != -1) {
                *(uint *)(local_218.Data.AllocatorInstance.Data + (longlong)iVar31 * 0xc) = uVar24;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_218,local_5c0.Index,1);
                goto LAB_14c95f95f;
              }
              break;
            }
          }
        }
        uVar10 = 1;
        uVar25 = local_218.Data.ArrayNum - local_218.NumFreeIndices;
        if (3 < uVar25) {
          uVar32 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_640 = (int)lVar16;
          uVar10 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((int)uVar25 < 1) || ((int)uVar10 <= (int)local_1d0)) {
          uVar24 = local_1d0 - 1 & uVar24;
          puVar20[2] = uVar24;
          FVar26.Data = local_1e0;
          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
            FVar26.Data = local_1d8.Data;
          }
          uVar32 = (longlong)(int)local_1d0 - 1U & (longlong)(int)uVar24;
          puVar20[1] = *(uint *)(FVar26.Data + uVar32 * 4);
          *(int *)(FVar26.Data + uVar32 * 4) = local_5c0.Index;
        }
        else {
          local_1d0 = uVar10;
          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,4);
          }
          if (uVar10 != 0) {
            uVar24 = uVar10;
            if (uVar10 < 2) {
              if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                uVar24 = 0;
                goto LAB_14c95f76b;
              }
            }
            else {
LAB_14c95f76b:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_1d8,0,uVar24,4);
            }
            if (0 < (int)uVar10) {
              uVar32 = (ulonglong)uVar10;
              puVar20 = puVar23;
              do {
                FVar26.Data = local_1e0;
                if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_1d8.Data;
                }
                uVar15 = (ulonglong)puVar20 & (longlong)(int)uVar10 - 1U;
                puVar20 = (uint *)((longlong)puVar20 + 1);
                *(undefined4 *)(FVar26.Data + uVar15 * 4) = 0xffffffff;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
          }
          if (local_1d0 != 0) {
            pTStack_6a0 = &local_218.AllocationFlags;
            local_6a8 = 0;
            uStack_6a4 = 1;
            uStack_694 = 0;
            uStack_690 = 0;
            puVar20 = puVar23;
            if (local_218.AllocationFlags.NumBits != 0) {
              FVar34 = (ForElementType<unsigned_int>)&local_218.AllocationFlags;
              if (local_218.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar34 = local_218.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar24 = *(uint *)FVar34;
              puVar33 = puVar23;
              while (uVar24 == 0) {
                uStack_690 = (int)puVar33 + 0x20;
                puVar33 = (uint *)(ulonglong)uStack_690;
                iVar31 = (int)puVar20;
                local_6a8 = iVar31 + 1;
                puVar20 = (uint *)(ulonglong)local_6a8;
                if ((int)((local_218.AllocationFlags.NumBits - 1U) +
                         ((int)(local_218.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_6a8) goto LAB_14c95f87d;
                uVar24 = *(uint *)((uchar *)((longlong)FVar34 + 4) + (longlong)iVar31 * 4);
              }
              uStack_6a4 = -uVar24 & uVar24;
              uVar32 = (ulonglong)uStack_6a4 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_63c = (int)lVar16;
              uStack_694 = (int)lVar16 + -1 + uStack_690;
              puVar20 = (uint *)(ulonglong)uStack_694;
              if (local_218.AllocationFlags.NumBits < (int)uStack_694) {
LAB_14c95f87d:
                puVar20 = (uint *)(ulonglong)(uint)local_218.AllocationFlags.NumBits;
                uStack_694 = local_218.AllocationFlags.NumBits;
              }
            }
            local_698 = 0xffffffff;
            local_610 = &local_218;
            local_608._padding_ = CONCAT44(uStack_6a4,local_6a8);
            local_608.Array = pTStack_6a0;
            local_608.UnvisitedBitMask = 0xffffffff;
            local_608.CurrentBitIndex = uStack_694;
            local_608.BaseBitIndex = uStack_690;
            local_608._28_4_ = uStack_68c;
            if ((int)puVar20 < local_218.AllocationFlags.NumBits) {
              do {
                pFVar4 = (local_610->Data).AllocatorInstance.Data;
                lVar16 = (longlong)(int)puVar20;
                uVar24 = local_1d0 - 1 & *(uint *)(pFVar4 + lVar16 * 0xc);
                *(uint *)(pFVar4 + lVar16 * 0xc + 8) = uVar24;
                FVar26.Data = local_1e0;
                if (local_1d8.Data != (FScriptContainerElement *)0x0) {
                  FVar26.Data = local_1d8.Data;
                }
                uVar32 = (longlong)(int)local_1d0 - 1U & (longlong)(int)uVar24;
                *(undefined4 *)(pFVar4 + lVar16 * 0xc + 4) =
                     *(undefined4 *)(FVar26.Data + uVar32 * 4);
                *(int *)(FVar26.Data + uVar32 * 4) = (int)puVar20;
                local_608.UnvisitedBitMask = local_608.UnvisitedBitMask & ~local_608._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
                puVar20 = (uint *)(ulonglong)(uint)local_608.CurrentBitIndex;
              } while (local_608.CurrentBitIndex < (local_608.Array)->NumBits);
            }
          }
        }
LAB_14c95f95f:
        FVar26.Data = local_678.Components.Array.AllocatorInstance.Data;
        iVar31 = local_218.FirstFreeIndex;
      }
      piStack_5e0 = &local_678.Components.Array.ArrayNum;
      local_5e8 = FVar26.Data;
      local_5d8 = local_678.Components.Array.ArrayNum;
      pFVar36 = FVar26.Data + (longlong)local_678.Components.Array.ArrayNum * 8;
      local_650 = CONCAT44(uStack_5d4,local_678.Components.Array.ArrayNum);
      local_660 = FVar26.Data;
      piStack_658 = piStack_5e0;
      iVar31 = local_678.Components.Array.ArrayNum;
LAB_14c95f9b0:
      if (*piStack_658 != iVar31) {
        local_708 = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_708);
      }
      if (FVar26.Data != pFVar36) {
        puVar5 = *(undefined8 **)FVar26.Data;
        puVar20 = (uint *)*puVar5;
        iVar12 = *(int *)(puVar5 + 1);
        puVar23 = puVar20 + iVar12;
        while( true ) {
          if (*(int *)(puVar5 + 1) != iVar12) {
            local_707 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_707);
          }
          pFVar7 = local_6d0;
          if (puVar20 == puVar23) break;
          if (local_218.Data.ArrayNum == local_218.NumFreeIndices) goto LAB_14c95fab7;
          FVar21.Data = local_1e0;
          if (local_1d8.Data != (FScriptContainerElement *)0x0) {
            FVar21.Data = local_1d8.Data;
          }
          iVar11 = *(int *)(FVar21.Data + (ulonglong)(local_1d0 - 1 & *puVar20) * 4);
          if (iVar11 == -1) goto LAB_14c95fab7;
          while (*(uint *)(local_218.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc) !=
                 *puVar20) {
            iVar11 = *(int *)(local_218.Data.AllocatorInstance.Data + (longlong)iVar11 * 0xc + 4);
            if (iVar11 == -1) {
              FVar26.Data = FVar26.Data + 8;
              goto LAB_14c95f9b0;
            }
          }
          puVar20 = puVar20 + 1;
        }
        piVar28 = (int *)*puVar5;
        iVar31 = *(int *)(puVar5 + 1);
        piVar1 = piVar28 + iVar31;
        while( true ) {
          if (*(int *)(puVar5 + 1) != iVar31) {
            local_706 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_706);
          }
          if (piVar28 == piVar1) break;
          FDynamicMesh3::RemoveTriangle((FDynamicMesh3 *)pFVar7->_padding_,*piVar28,true,false);
          piVar28 = piVar28 + 1;
        }
        iVar31 = (int)local_650;
LAB_14c95fab7:
        FVar26.Data = FVar26.Data + 8;
        goto LAB_14c95f9b0;
      }
      local_1d0 = 0;
      local_660 = FVar26.Data;
      if (local_1d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_218);
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_678.Components);
      this = local_6d0;
      local_4b8._232_8_ = local_680;
    }
    local_5a0._s_0.X = 0.0;
    local_5a0._s_0.Y = 0.0;
    local_570 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_5a0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_5a0._s_0.W = _UNK_15061cbc8;
    local_580 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_578 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_568 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_560 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_558 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_550._s_0.X = 0.0;
    local_550._s_0.Y = 0.0;
    local_550._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_550._s_0.W = _UNK_15061cbc8;
    local_530 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_528 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_520 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_518 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_510 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_508 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    FMeshBoolean::FMeshBoolean
              ((FMeshBoolean *)local_4b8,(FDynamicMesh3 *)this->_padding_,
               (TTransformSRT3<double> *)&local_550._s_0,&local_6f8->Submesh,
               (TTransformSRT3<double> *)&local_5a0._s_0,(FDynamicMesh3 *)this->_padding_,
               (uint)(this->ExtrudeDistance <= 0.0));
    local_4b8[0xe0] = true;
    local_4b8[0xf0] = true;
    local_4b8[0x1d8] = true;
    local_704 = FMeshBoolean::Compute((FMeshBoolean *)local_4b8);
    pTVar35 = &this->ExtrudedFaceNewGids;
    piVar1 = &(this->ExtrudedFaceNewGids).ArrayMax;
    (this->ExtrudedFaceNewGids).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar35->AllocatorInstance,0,piVar1);
    }
    iVar31 = local_6f0.ArrayNum;
    pFVar36 = local_6f0.AllocatorInstance.Data + (longlong)local_6f0.ArrayNum * 4;
    FVar26.Data = local_6f0.AllocatorInstance.Data;
    while( true ) {
      if (local_6f0.ArrayNum != iVar31) {
        local_705 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_705);
      }
      if (FVar26.Data == pFVar36) break;
      uVar24 = *(uint *)FVar26.Data;
      if (local_238 == false) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bWantForward",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                           ,0xac,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      if (local_4b8._488_4_ == local_4b8._532_4_) {
LAB_14c95fd8c:
        FVar26.Data = FVar26.Data + 4;
      }
      else {
        puVar22 = (undefined1 *)((longlong)&((FMeshBoolean *)local_4b8)->SecondMeshGroupMap + 0x38);
        if ((undefined1 *)local_4b8._544_8_ != (undefined1 *)0x0) {
          puVar22 = (undefined1 *)local_4b8._544_8_;
        }
        uVar25 = *(uint *)(puVar22 + (ulonglong)(local_290 - 1U & uVar24) * 4);
        if (uVar25 == 0xffffffff) goto LAB_14c95fd8c;
        do {
          puVar23 = (uint *)((longlong)(int)uVar25 * 0x10 + local_4b8._480_8_);
          if (*puVar23 == uVar24) {
            pFVar29 = (FScriptContainerElement *)(puVar23 + 1);
            if (puVar23 == (uint *)0x0) {
              pFVar29 = (FScriptContainerElement *)0x0;
            }
            if (pFVar29 != (FScriptContainerElement *)0x0) {
              pFVar4 = (pTVar35->AllocatorInstance).Data;
              if ((pFVar4 <= pFVar29) &&
                 (pFVar29 < pFVar4 + (longlong)(this->ExtrudedFaceNewGids).ArrayMax * 4)) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar8) {
                  pcVar6 = (code *)swi(3);
                  uVar9 = (*pcVar6)();
                  return (bool)uVar9;
                }
              }
              iVar12 = (this->ExtrudedFaceNewGids).ArrayNum;
              if (iVar12 == (this->ExtrudedFaceNewGids).ArrayMax) {
                iVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar35->AllocatorInstance,piVar1);
              }
              (this->ExtrudedFaceNewGids).ArrayNum = iVar12 + 1;
              *(uint *)((pTVar35->AllocatorInstance).Data + (longlong)iVar12 * 4) = *(uint *)pFVar29
              ;
            }
            goto LAB_14c95fd8c;
          }
          uVar25 = puVar23[2];
        } while (uVar25 != 0xffffffff);
        FVar26.Data = FVar26.Data + 4;
      }
    }
    FMeshBoolean::~FMeshBoolean((FMeshBoolean *)local_4b8);
    puVar23 = (uint *)(ulonglong)local_704;
  }
  else if (param_1->WasCancelled == false) {
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar6 = *(code **)&param_1->CancelF;
    plVar19 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar18 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar19 != (longlong *)0x0) {
      plVar18 = plVar19;
    }
    uVar14 = (**(code **)(*plVar18 + 8))();
    bVar8 = (bool)(*pcVar6)(uVar14);
    param_1->WasCancelled = bVar8;
    if (bVar8 == false) goto LAB_14c95f23f;
  }
  uVar9 = SUB81(puVar23,0);
  local_198[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
            ((FOffsetInfo *)local_e0.Data,local_d8);
  if ((FOffsetInfo *)local_e0.Data != (FOffsetInfo *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_138 != (code *)0x0) {
    plVar19 = (longlong *)&local_128;
    if ((longlong *)CONCAT44(uStack_10c,uStack_110) != (longlong *)0x0) {
      plVar19 = (longlong *)CONCAT44(uStack_10c,uStack_110);
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_178 != (code *)0x0) {
    plVar19 = (longlong *)&local_168;
    if ((longlong *)CONCAT44(uStack_14c,uStack_150) != (longlong *)0x0) {
      plVar19 = (longlong *)CONCAT44(uStack_14c,uStack_150);
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
LAB_14c95fe44:
  pFVar13 = local_6f8;
  if (local_6f8 != (FDynamicSubmesh3 *)0x0) {
    FDynamicSubmesh3::~FDynamicSubmesh3(local_6f8);
    ::operator_delete(pFVar13,0x5f0);
  }
  if (local_6f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f0.AllocatorInstance.Data);
  }
  return (bool)uVar9;
}

// CalculateResult @ 14c964010

void __thiscall UE::Geometry::FExtrudeOp::CalculateResult(FExtrudeOp *this,FProgressCancel *param_1)

{
  FDynamicMesh3 *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (__real_3f1a36e2e0000000 <=
      (double)CONCAT44((uint)((ulonglong)this->ExtrudeDistance >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(this->ExtrudeDistance,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                      )) {
    if ((param_1 != (FProgressCancel *)0x0) && (bVar2 = FProgressCancel::Cancelled(param_1), bVar2))
    {
      return;
    }
    this_00 = (FDynamicMesh3 *)this->_padding_;
    if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FDynamicMesh3::Copy(this_00,(this->OriginalMesh).Object,true,true,true,true);
    if (this->ExtrudeMode == Boolean) {
                    /* WARNING: Could not recover jumptable at 0x00014c9640cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x20))();
      return;
    }
    (**(code **)(this->_padding_ + 0x28))(this,param_1);
  }
  return;
}

// MoveAndStitchExtrude @ 14c982a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FExtrudeOp::MoveAndStitchExtrude(FExtrudeOp *this,FProgressCancel *param_1)

{
  int *piVar1;
  int iVar2;
  EDirectionMode EVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  undefined ***pppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ForAnyElementType _Src;
  bool bVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined1 auStackY_1a8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  longlong local_148;
  undefined8 uStack_140;
  undefined **local_138 [4];
  undefined **local_118 [2];
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  code *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  FExtrudeOp *pFStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  EVertexExtrusionVectorType local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  FExtrudeOp *pFStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  bool local_84;
  bool local_83;
  double local_80;
  EVersion local_64;
  ForAnyElementType local_60;
  int local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return false;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar4 = *(code **)&param_1->CancelF;
    plVar13 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar12 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    bVar9 = (bool)(*pcVar4)(uVar10);
    param_1->WasCancelled = bVar9;
    if (bVar9 != false) {
      return false;
    }
  }
  pTVar15 = &this->TriangleSelection;
  local_158.ArrayNum = (this->TriangleSelection).ArrayNum;
  lVar14 = (longlong)local_158.ArrayNum;
  pFVar5 = (pTVar15->AllocatorInstance).Data;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_158.ArrayNum == 0) {
    local_158.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_158.ArrayNum,0,&local_158.AllocatorInstance,local_158.ArrayNum,
               &local_158.ArrayMax);
    memcpy(local_158.AllocatorInstance.Data,pFVar5,lVar14 << 2);
  }
  ExtrudeOpLocals::UpdateSelectionGroups((FDynamicMesh3 *)this->_padding_,&local_158,&local_168);
  FOffsetMeshRegion::FOffsetMeshRegion
            ((FOffsetMeshRegion *)local_118,(FDynamicMesh3 *)this->_padding_);
  local_64 = Legacy;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_108 != pTVar15) {
    iVar2 = (this->TriangleSelection).ArrayNum;
    pFVar5 = (pTVar15->AllocatorInstance).Data;
    local_100 = iVar2;
    if ((iVar2 == 0) && (local_fc == 0)) {
      local_fc = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,local_fc,&local_108,iVar2,&local_fc);
      if (iVar2 != 0) {
        memcpy(local_108.Data,pFVar5,(longlong)iVar2 << 2);
      }
    }
  }
  uVar10 = uStack_b0;
  local_148 = (longlong)local_b8;
  uVar7 = local_98;
  uVar8 = uStack_94;
  pppuVar6 = (undefined ***)CONCAT44(uStack_8c,uStack_90);
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l2::<lambda_1>,bool,int,int>
             ::Call;
  uStack_b0 = uStack_140;
  local_98 = local_138[2]._0_4_;
  uStack_94 = local_138[2]._4_4_;
  uStack_90 = 0;
  uStack_8c = 0;
  local_a8 = 0x528d84a8;
  uStack_a4 = 1;
  pFStack_a0 = this;
  uStack_140 = uVar10;
  local_138[2]._0_4_ = uVar7;
  local_138[2]._4_4_ = uVar8;
  if (local_148 != 0) {
    pppuVar11 = local_138;
    if (pppuVar6 != (undefined ***)0x0) {
      pppuVar11 = pppuVar6;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  uVar10 = uStack_f0;
  local_148 = (longlong)local_f8;
  pppuVar6 = (undefined ***)CONCAT44(uStack_cc,uStack_d0);
  local_88 = this->UVScaleFactor;
  if (this->DirectionMode == SingleDirection) {
    local_138[0] = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::`8'::<lambda_2>,0,0>
                    ::_vftable_;
    local_f8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l8::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
               ::Call;
  }
  else {
    local_138[0] = &Core::Private::Function::
                    TFunction_OwnedObject<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::`10'::<lambda_3>,0,0>
                    ::_vftable_;
    local_f8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FExtrudeOp::MoveAndStitchExtrude'::__l10::<lambda_3>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int>
               ::Call;
  }
  uStack_f0 = uStack_140;
  local_d8 = local_138[2]._0_4_;
  uStack_d4 = local_138[2]._4_4_;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_140 = uVar10;
  local_e8._0_4_ = local_138[0]._0_4_;
  local_e8._4_4_ = local_138[0]._4_4_;
  pFStack_e0 = this;
  if (local_148 != 0) {
    pppuVar11 = local_138;
    if (pppuVar6 != (undefined ***)0x0) {
      pppuVar11 = pppuVar6;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  EVar3 = this->DirectionMode;
  if (EVar3 == VertexNormals) {
    local_c0 = VertexNormal;
  }
  else if (EVar3 == SelectedTriangleNormals) {
    local_c0 = SelectionTriNormalsAngleWeightedAverage;
  }
  else {
    local_c0 = Zero;
    if (EVar3 == SelectedTriangleNormalsEven) {
      local_c0 = SelectionTriNormalsAngleWeightedAdjusted;
    }
  }
  local_80 = this->MaxScaleForAdjustingTriNormalsOffset;
  local_84 = this->bShellsToSolids;
  local_83 = 0.0 < this->ExtrudeDistance;
  FOffsetMeshRegion::Apply((FOffsetMeshRegion *)local_118);
  if (param_1 == (FProgressCancel *)0x0) {
LAB_14c982d7a:
    FMeshNormals::QuickComputeVertexNormalsForTriangles
              ((FDynamicMesh3 *)this->_padding_,&local_50,true,true,false);
    _Src.Data = local_168.AllocatorInstance.Data;
    pTVar15 = &this->ExtrudedFaceNewGids;
    if (pTVar15 != &local_168) {
      iVar2 = local_168.ArrayNum;
      lVar14 = (longlong)local_168.ArrayNum;
      piVar1 = &(this->ExtrudedFaceNewGids).ArrayMax;
      (this->ExtrudedFaceNewGids).ArrayNum = local_168.ArrayNum;
      if ((local_168.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_168.ArrayNum,*piVar1,&pTVar15->AllocatorInstance,local_168.ArrayNum,
                   piVar1);
        if (iVar2 != 0) {
          memcpy((pTVar15->AllocatorInstance).Data,_Src.Data,lVar14 << 2);
        }
      }
    }
    bVar9 = true;
  }
  else {
    if (param_1->WasCancelled == false) {
      Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
      pcVar4 = *(code **)&param_1->CancelF;
      plVar13 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar12 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar13 != (longlong *)0x0) {
        plVar12 = plVar13;
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      bVar9 = (bool)(*pcVar4)(uVar10);
      param_1->WasCancelled = bVar9;
      if (bVar9 == false) goto LAB_14c982d7a;
    }
    bVar9 = false;
  }
  local_118[0] = &___7FOffsetMeshRegion_Geometry_UE__6B_;
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FOffsetMeshRegion::FOffsetInfo,int>
            ((FOffsetInfo *)local_60.Data,local_58);
  if ((FOffsetInfo *)local_60.Data != (FOffsetInfo *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_b8 != (code *)0x0) {
    plVar13 = (longlong *)&local_a8;
    if ((longlong *)CONCAT44(uStack_8c,uStack_90) != (longlong *)0x0) {
      plVar13 = (longlong *)CONCAT44(uStack_8c,uStack_90);
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_f8 != (code *)0x0) {
    plVar13 = &local_e8;
    if ((longlong *)CONCAT44(uStack_cc,uStack_d0) != (longlong *)0x0) {
      plVar13 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return bVar9;
}

