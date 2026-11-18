// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 98

// `dynamic_initializer_for_'FAutoRTFMConvexHullTestsInstance'' @ 140f4faf0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FAutoRTFMConvexHullTestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutoRTFMConvexHullTests");
  FAutoRTFMConvexHullTests::FAutoRTFMConvexHullTests(&FAutoRTFMConvexHullTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAutoRTFMConvexHullTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FAutoRTFMDynamicMesh3TestAutomationTestInstance'' @ 140f4fb40

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FAutoRTFMDynamicMesh3TestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAutoRTFMDynamicMesh3Test");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMDynamicMesh3TestAutomationTestInstance,&local_18,false
            );
  FAutoRTFMDynamicMesh3TestAutomationTestInstance._0_8_ = &___7FAutoRTFMDynamicMesh3Test__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAutoRTFMDynamicMesh3TestAutomationTestInstance__);
  return;
}

// `scalar_deleting_destructor' @ 1435ce060

void * __thiscall
FAutoRTFMConvexHullTests::_scalar_deleting_destructor_(FAutoRTFMConvexHullTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435cef30

void * __thiscall
FAutoRTFMDynamicMesh3Test::_scalar_deleting_destructor_
          (FAutoRTFMDynamicMesh3Test *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// AddUniqueImpl<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::FParentChildCell> @ 1435cf1a0

int __thiscall
TArray<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::FParentChildCell,TSizedDefaultAllocator<32>_>
::
AddUniqueImpl<_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet_::__l2::FParentChildCell>
          (void *this,FParentChildCell *param_1)

{
  undefined8 *puVar1;
  FParentChildCell *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FParentChildCell *pFVar8;
  
  pFVar2 = *(FParentChildCell **)this;
  if (pFVar2 != pFVar2 + *(int *)((longlong)this + 8)) {
    pFVar8 = pFVar2;
    do {
      if ((((pFVar8->ChildCellIndex).field0_0x0._s_0.X ==
            (param_1->ChildCellIndex).field0_0x0._s_0.X) &&
          ((pFVar8->ChildCellIndex).field0_0x0._s_0.Y == (param_1->ChildCellIndex).field0_0x0._s_0.Y
          )) && ((pFVar8->ChildCellIndex).field0_0x0._s_0.Z ==
                 (param_1->ChildCellIndex).field0_0x0._s_0.Z)) {
        iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar2) / 0x24);
        if (iVar7 != -1) {
          return iVar7;
        }
        break;
      }
      pFVar8 = pFVar8 + 1;
    } while (pFVar8 != pFVar2 + *(int *)((longlong)this + 8));
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + *(int *)((longlong)this + 0xc))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = *(int *)((longlong)this + 8);
  if (iVar7 == *(int *)((longlong)this + 0xc)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x424,this,(int *)((longlong)this + 0xc));
    *(int *)((longlong)this + 8) = iVar7;
  }
  *(int *)((longlong)this + 8) = iVar7 + 1;
  uVar5 = *(undefined8 *)((longlong)&(param_1->ParentCellIndex).field0_0x0 + 8);
  lVar3 = *(longlong *)this;
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x24);
  *puVar1 = *(undefined8 *)&(param_1->ParentCellIndex).field0_0x0;
  puVar1[1] = uVar5;
  uVar5 = *(undefined8 *)&param_1->ChildNum;
  lVar3 = lVar3 + (longlong)iVar7 * 0x24;
  *(undefined8 *)(lVar3 + 0x10) =
       *(undefined8 *)((longlong)&(param_1->ChildCellIndex).field0_0x0 + 4);
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(uint *)(lVar3 + 0x20) = param_1->NewCellID;
  return iVar7;
}

// AllocatedIteration<`UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject'::__l2::<lambda_1>_> @ 1435cf2f0

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
AllocatedIteration<_UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject_::__l2::<lambda_1>_>
          (TSparseGrid3<unsigned_int> *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  FSparseDynamicOctree3 *this_00;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  TSparseGrid3<unsigned_int> *pTVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  longlong local_b8;
  TSparseGrid3<unsigned_int> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TSparseGrid3<unsigned_int> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint *local_40;
  
  iVar11 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)&(this->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1435cf38d;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_a4 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_a4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_94 = (int)lVar12 + -1 + local_90;
    if (iVar11 < iStack_94) {
      iStack_94 = iVar11;
    }
  }
LAB_1435cf38d:
  uVar15 = *(uint *)&(this->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_88 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = this;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = this;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1435cf490;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_1435cf490:
  while( true ) {
    pTVar9 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == this))
    break;
    this_00 = param_1->__this;
    lVar12 = *(longlong *)&pTVar9->Elements;
    puVar17 = *(uint **)((longlong)TStack_78.CurrentBitIndex * 0x20 + 0x10 + lVar12);
    puVar2 = (undefined8 *)((longlong)TStack_78.CurrentBitIndex * 0x20 + lVar12);
    local_50 = *puVar2;
    uStack_48 = puVar2[1];
    local_40 = puVar17;
    dVar8 = FSparseDynamicOctree3::FindNearestRayCellIntersection
                      (this_00,(FSparseOctreeCell *)
                               ((ulonglong)(*puVar17 & 0x1ff) * 0x34 +
                               *(longlong *)
                                ((this_00->Cells).Blocks.AllocatorInstance.Data +
                                (ulonglong)(*puVar17 >> 9) * 8)),param_1->Ray);
    if (dVar8 < *param_1->MaxDistance) {
      pTVar5 = param_1->Queue;
      local_b8 = (ulonglong)(*puVar17 & 0x1ff) * 0x34 +
                 *(longlong *)
                  ((this_00->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(*puVar17 >> 9) * 8);
      pFVar6 = (pTVar5->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)pTVar5->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = pTVar5->ArrayNum;
      if (iVar11 == pTVar5->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
      }
      pTVar5->ArrayNum = iVar11 + 1;
      *(longlong *)((pTVar5->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_b8;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return;
}

// AllocatedIteration<`UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius'::__l12::<lambda_2>_> @ 1435cf610

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
AllocatedIteration<_UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius_::__l12::<lambda_2>_>
          (TSparseGrid3<unsigned_int> *this,<lambda_2> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  double dVar16;
  double dVar17;
  undefined1 local_res8 [8];
  double local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1435cf6bd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1435cf6bd:
  uVar11 = *(uint *)&(this->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar7,iVar12);
  TStack_a0.CurrentBitIndex = iVar8;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_a0._28_4_ = iVar8;
  TStack_a0.BaseBitIndex = iVar14;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Elements).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1435cf7d0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1435cf7d0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_80
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_a0.CurrentBitIndex == uVar11) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar7 = **(uint **)((longlong)TStack_a0.CurrentBitIndex * 0x20 + 0x10 +
                       *(longlong *)&this->Elements);
    lVar9 = *(longlong *)
             ((param_1->__this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8)
            + (ulonglong)(uVar7 & 0x1ff) * 0x34;
    pdVar4 = param_1->ThresholdSq;
    local_50 = param_1->__this->RootDimension /
               (double)(ulonglong)(1L << (*(byte *)(lVar9 + 4) & 0x1f));
    dVar17 = *pdVar4;
    local_78._s_0.X = (double)*(int *)(lVar9 + 8) * local_50;
    local_78._s_0.Y = (double)*(int *)(lVar9 + 0xc) * local_50;
    local_78._s_0.Z = (double)*(int *)(lVar9 + 0x10) * local_50;
    local_60 = local_78._s_0.X + local_50;
    local_58 = local_78._s_0.Y + local_50;
    local_50 = local_78._s_0.Z + local_50;
    dVar16 = TAxisAlignedBox3<double>::DistanceSquared
                       ((TAxisAlignedBox3<double> *)&local_78._s_0,&param_1->QueryPt);
    if (dVar16 < dVar17) {
      local_res20 = dVar17;
      dVar17 = (double)(**(code **)param_1->RootFn)
                                 (*(undefined8 *)&param_1->RootFn->field_0x8,&local_res20,lVar9);
      *pdVar4 = dVar17;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  return;
}

// AllocatedIteration<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_3>_> @ 1435cf940

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
AllocatedIteration<_UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue_::__l2::<lambda_3>_>
          (TSparseGrid3<unsigned_int> *this,<lambda_3> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1435cf9dd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1435cf9dd:
  uVar10 = *(uint *)&(this->Elements).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1435cfae0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1435cfae0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    `UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_3>::operator()
              (param_1,*(uint **)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                                 *(longlong *)&this->Elements));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ApplyBRIO<float,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>,ZOrderCurvePointsLocal::FQuadTreeNode> @ 1435cfb70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ZOrderCurvePointsLocal::
ApplyBRIO<float,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>,ZOrderCurvePointsLocal::FQuadTreeNode>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_2,TAxisAlignedBox2<float> *param_3
          ,int param_4,FRandomStream *param_5)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TVector2<float> *pTVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_res8;
  uint local_158;
  longlong local_148;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
  local_140;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  int local_108;
  int local_104 [3];
  TVector2<float>_u_0 local_f8;
  float fStack_f0;
  float fStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_c8;
  TArrayView<int,int> local_b8;
  TVector2<float> *local_a8;
  undefined8 uStack_a0;
  
  fVar22 = (param_3->Max).field0_0x0._s_0.X;
  fVar23 = (param_3->Min).field0_0x0._s_0.X;
  if ((fVar22 < fVar23) ||
     (fVar25 = (param_3->Min).field0_0x0._s_0.Y, pfVar1 = &(param_3->Max).field0_0x0._s_0.Y,
     *pfVar1 <= fVar25 && fVar25 != *pfVar1)) {
    local_a8 = param_2->DataPtr;
    uStack_a0 = *(undefined8 *)&param_2->ArrayNum;
    uVar5 = *(undefined8 *)&param_2->ArrayNum;
    if (local_a8 != local_a8 + (int)uVar5) {
      fVar25 = (param_3->Min).field0_0x0._s_0.Y;
      fVar24 = (param_3->Max).field0_0x0._s_0.Y;
      pTVar11 = local_a8;
      do {
        fVar3 = (pTVar11->field0_0x0)._s_0.X;
        if (fVar3 < fVar23) {
          (param_3->Min).field0_0x0._s_0.X = fVar3;
          fVar23 = fVar3;
        }
        if (fVar22 < fVar3) {
          (param_3->Max).field0_0x0._s_0.X = fVar3;
          fVar22 = fVar3;
        }
        fVar3 = (pTVar11->field0_0x0)._s_0.Y;
        if (fVar3 < fVar25) {
          (param_3->Min).field0_0x0._s_0.Y = fVar3;
          fVar25 = fVar3;
        }
        if (fVar24 < fVar3) {
          (param_3->Max).field0_0x0._s_0.Y = fVar3;
          fVar24 = fVar3;
        }
        pTVar11 = pTVar11 + 1;
      } while (pTVar11 != local_a8 + (int)uVar5);
    }
  }
  iVar13 = param_1->ArrayNum;
  uVar10 = param_2->ArrayNum;
  lVar20 = (longlong)(int)uVar10;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar13 + uVar10,Default);
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 4;
  if (((int)uVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = 0;
  pFVar17 = pFVar2;
  if (0 < param_2->ArrayNum) {
    do {
      uVar14 = 0;
      if ((int)uVar12 < (int)uVar10) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(uint *)pFVar17 = uVar12;
      uVar12 = uVar12 + 1;
      pFVar17 = pFVar17 + 4;
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  if (1 < (int)uVar10) {
    dVar21 = log((double)(int)uVar10);
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    iVar13 = (int)(dVar21 * __real_3ff71547652b82fe);
    local_108 = iVar13;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_118,iVar13,Default);
    local_158 = iVar13 - 1;
    uVar12 = 0;
    if ((int)local_158 < local_118.ArrayNum) {
      uVar12 = ~local_158 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar16 = (longlong)(int)local_158;
    *(uint *)(local_118.AllocatorInstance.Data + lVar16 * 4) = uVar10;
    fVar23 = __real_3f000000;
    fVar22 = __real_3f800000;
    if (0 < (int)local_158) {
      local_res8 = iVar13 + -2;
      uVar12 = uVar10;
      do {
        uVar14 = 0;
        pFVar17 = pFVar2;
        if (0 < (int)uVar12) {
          do {
            uVar9 = param_5->Seed * 0xbb38435 + 0x3619636b;
            param_5->Seed = uVar9;
            if ((float)(uVar9 >> 9 | 0x3f800000) - fVar22 < fVar23) {
              uVar12 = uVar12 - 1;
              lVar20 = lVar20 + -1;
              uVar9 = 0;
              if ((int)uVar12 < (int)uVar10) {
                uVar9 = ~uVar12 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = 0;
              if ((int)uVar14 < (int)uVar10) {
                uVar9 = ~uVar14 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar4 = *(undefined4 *)pFVar17;
              uVar14 = uVar14 - 1;
              *(undefined4 *)pFVar17 = *(undefined4 *)(pFVar2 + lVar20 * 4);
              pFVar17 = pFVar17 + -4;
              *(undefined4 *)(pFVar2 + lVar20 * 4) = uVar4;
            }
            uVar14 = uVar14 + 1;
            pFVar17 = pFVar17 + 4;
          } while ((int)uVar14 < (int)uVar12);
        }
        uVar14 = 0;
        if ((int)local_res8 < local_118.ArrayNum) {
          uVar14 = -local_158 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_158 = local_158 - 1;
        local_res8 = local_res8 + -1;
        *(uint *)(local_118.AllocatorInstance.Data + lVar16 * 4 + -4) = uVar12;
        lVar16 = lVar16 + -1;
      } while (0 < lVar16);
    }
    iVar13 = 0;
    local_140.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Nodes.ArrayNum = 0;
    local_140.Nodes.ArrayMax = 0;
    local_140.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.MaxDepthBuckets.ArrayNum = 0;
    local_140.MaxDepthBuckets.ArrayMax = 0;
    local_140.Num = 0;
    local_res8 = 0;
    if (0 < local_108) {
      local_148 = 0;
      iVar19 = local_108;
      do {
        uVar10 = 0;
        if ((int)local_res8 < local_118.ArrayNum) {
          uVar10 = ~local_res8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar18 = *(int *)(local_118.AllocatorInstance.Data + local_148 * 4);
        if (iVar18 != iVar13) {
          bVar8 = (longlong)local_140.Nodes._8_8_ < 0;
          local_140.Nodes._8_8_ = local_140.Nodes._8_8_ & 0xffffffff00000000;
          if (bVar8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)&local_140,0,&local_140.Nodes.ArrayMax);
          }
          if ((longlong)local_140.MaxDepthBuckets._8_8_ < 0) {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_140.MaxDepthBuckets.AllocatorInstance.Data,
                       local_140.MaxDepthBuckets.ArrayNum);
            iVar7 = local_140.MaxDepthBuckets.ArrayMax;
            local_140.MaxDepthBuckets._8_8_ = local_140.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
            if (iVar7 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,&local_140.MaxDepthBuckets.AllocatorInstance,0,
                         &local_140.MaxDepthBuckets.ArrayMax);
            }
          }
          else {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_140.MaxDepthBuckets.AllocatorInstance.Data,
                       local_140.MaxDepthBuckets.ArrayNum);
            local_140.MaxDepthBuckets._8_8_ = local_140.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
          }
          iVar18 = iVar18 - iVar13;
          local_140.Num = 0;
          pFVar17 = pFVar2 + (longlong)iVar13 * 4;
          local_e8 = pFVar17;
          iStack_e0 = iVar18;
          if ((iVar18 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar22 = (param_3->Min).field0_0x0._s_0.X;
          fVar23 = (param_3->Min).field0_0x0._s_0.Y;
          fVar25 = (param_3->Max).field0_0x0._s_0.X;
          fVar24 = (param_3->Max).field0_0x0._s_0.Y;
          pTVar11 = param_2->DataPtr;
          uVar5._0_4_ = param_2->ArrayNum;
          uVar5._4_4_ = *(undefined4 *)&param_2->field_0xc;
          local_f8._s_0.X = fVar22;
          local_f8._s_0.Y = fVar23;
          fStack_f0 = fVar25;
          fStack_ec = fVar24;
          TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
          ::Reset(&local_140);
          iVar13 = local_140.Nodes.ArrayNum;
          if (local_140.Nodes.ArrayNum == local_140.Nodes.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)&local_140,&local_140.Nodes.ArrayMax);
          }
          local_140.Nodes.ArrayNum = iVar13 + 1;
          *(undefined8 *)(local_140.Nodes.AllocatorInstance.Data + (longlong)iVar13 * 0x10) =
               0xffffffffffffffff;
          *(undefined8 *)(local_140.Nodes.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8) =
               0xffffffffffffffff;
          local_140.MaxDepth = param_4;
          if (((fVar25 < fVar22) || (fVar24 < fVar23)) &&
             (pFVar17 != pFVar17 + (longlong)iVar18 * 4)) {
            pFVar15 = pFVar17;
            do {
              uVar10 = *(uint *)pFVar15;
              uVar12 = 0;
              if ((int)uVar10 < (int)uVar5) {
                uVar12 = ~uVar10 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar3 = pTVar11[(int)uVar10].field0_0x0._s_0.X;
              if (fVar3 < fVar22) {
                fVar22 = fVar3;
                local_f8._s_0.X = fVar3;
              }
              if (fVar25 < fVar3) {
                fVar25 = fVar3;
                fStack_f0 = fVar3;
              }
              fVar3 = pTVar11[(int)uVar10].field0_0x0._s_0.Y;
              if (fVar3 < fVar23) {
                fVar23 = fVar3;
                local_f8._s_0.Y = fVar3;
              }
              if (fVar24 < fVar3) {
                fVar24 = fVar3;
                fStack_ec = fVar3;
              }
              pFVar15 = pFVar15 + 4;
              iVar19 = local_108;
            } while (pFVar15 != pFVar17 + (longlong)iVar18 * 4);
          }
          pFVar15 = pFVar17 + (longlong)iVar18 * 4;
          for (; pFVar17 != pFVar15; pFVar17 = pFVar17 + 4) {
            local_c8.DataPtr = pTVar11;
            local_c8._8_8_ = uVar5;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
            ::AddPointHelper(&local_140,&local_c8,*(uint *)pFVar17,
                             (TAxisAlignedBox2<float> *)&local_f8._s_0);
          }
          if (local_140.Num == iVar18) {
            local_104[0] = 0;
            if ((local_140.Nodes.ArrayNum < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_b8._12_4_ = uStack_dc;
            local_b8.ArrayNum = iStack_e0;
            local_b8.DataPtr = (int *)local_e8;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
            ::InPlaceExtractZOrderCurveHelper
                      (&local_140,&local_b8,(FQuadTreeNode *)local_140.Nodes.AllocatorInstance.Data,
                       0,(bool)((byte)local_res8 & 1),local_104);
            if ((local_104[0] != iVar18) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Idx == OrderView.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                                   ,0x184,L""), bVar8)) goto code_r0x0001435d036b;
          }
          else {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5583982759300301182>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                               ,0x17e,"Num == OrderView.Num()");
            if (bVar8) {
code_r0x0001435d036b:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        uVar10 = 0;
        if ((int)local_res8 < local_118.ArrayNum) {
          uVar10 = ~local_res8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_res8 = local_res8 + 1;
        iVar13 = *(int *)(local_118.AllocatorInstance.Data + local_148 * 4);
        local_148 = local_148 + 1;
      } while ((int)local_res8 < iVar19);
    }
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               local_140.MaxDepthBuckets.AllocatorInstance.Data,local_140.MaxDepthBuckets.ArrayNum);
    if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
        local_140.MaxDepthBuckets.AllocatorInstance.Data !=
        (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_140.MaxDepthBuckets.AllocatorInstance.Data);
    }
    if (local_140.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Nodes.AllocatorInstance.Data);
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyBRIO<float,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>,ZOrderCurvePointsLocal::FOctreeNode> @ 1435d0460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ZOrderCurvePointsLocal::
ApplyBRIO<float,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>,ZOrderCurvePointsLocal::FOctreeNode>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,TAxisAlignedBox3<float> *param_3,
          int param_4,FRandomStream *param_5)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TVector<float> *pTVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_res8;
  uint local_188;
  longlong local_178;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  local_170;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  int local_138;
  int local_134 [3];
  TVector<float>_u_0 local_128;
  float fStack_11c;
  undefined8 local_118;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<UE::Math::TVector<float>_const_,int> local_e8;
  TArrayView<int,int> local_d8;
  TVector<float> *local_c8;
  undefined8 uStack_c0;
  
  fVar22 = (param_3->Max).field0_0x0._s_0.X;
  fVar23 = (param_3->Min).field0_0x0._s_0.X;
  if (((fVar22 < fVar23) ||
      (fVar27 = (param_3->Min).field0_0x0._s_0.Y, pfVar1 = &(param_3->Max).field0_0x0._s_0.Y,
      *pfVar1 <= fVar27 && fVar27 != *pfVar1)) ||
     (fVar27 = (param_3->Min).field0_0x0._s_0.Z, pfVar1 = &(param_3->Max).field0_0x0._s_0.Z,
     *pfVar1 <= fVar27 && fVar27 != *pfVar1)) {
    local_c8 = param_2->DataPtr;
    uStack_c0 = *(undefined8 *)&param_2->ArrayNum;
    uVar5 = *(undefined8 *)&param_2->ArrayNum;
    if (local_c8 != local_c8 + (int)uVar5) {
      fVar27 = (param_3->Min).field0_0x0._s_0.Y;
      fVar26 = (param_3->Max).field0_0x0._s_0.Y;
      fVar25 = (param_3->Max).field0_0x0._s_0.Z;
      fVar24 = (param_3->Min).field0_0x0._s_0.Z;
      pTVar11 = local_c8;
      do {
        fVar3 = (pTVar11->field0_0x0)._s_0.X;
        if (fVar3 < fVar23) {
          (param_3->Min).field0_0x0._s_0.X = fVar3;
          fVar23 = fVar3;
        }
        if (fVar22 < fVar3) {
          (param_3->Max).field0_0x0._s_0.X = fVar3;
          fVar22 = fVar3;
        }
        fVar3 = (pTVar11->field0_0x0)._s_0.Y;
        if (fVar3 < fVar27) {
          (param_3->Min).field0_0x0._s_0.Y = fVar3;
          fVar27 = fVar3;
        }
        if (fVar26 < fVar3) {
          (param_3->Max).field0_0x0._s_0.Y = fVar3;
          fVar26 = fVar3;
        }
        fVar3 = (pTVar11->field0_0x0)._s_0.Z;
        if (fVar3 <= fVar24) {
          fVar24 = fVar3;
        }
        fVar3 = (pTVar11->field0_0x0)._s_0.Z;
        if (fVar25 <= fVar3) {
          fVar25 = fVar3;
        }
        pTVar11 = pTVar11 + 1;
      } while (pTVar11 != local_c8 + (int)uVar5);
      (param_3->Max).field0_0x0._s_0.Z = fVar25;
      (param_3->Min).field0_0x0._s_0.Z = fVar24;
    }
  }
  iVar13 = param_1->ArrayNum;
  uVar10 = param_2->ArrayNum;
  lVar20 = (longlong)(int)uVar10;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar13 + uVar10,Default);
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 4;
  if (((int)uVar10 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = 0;
  pFVar17 = pFVar2;
  if (0 < param_2->ArrayNum) {
    do {
      uVar14 = 0;
      if ((int)uVar12 < (int)uVar10) {
        uVar14 = ~uVar12 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(uint *)pFVar17 = uVar12;
      uVar12 = uVar12 + 1;
      pFVar17 = pFVar17 + 4;
    } while ((int)uVar12 < param_2->ArrayNum);
  }
  if (1 < (int)uVar10) {
    dVar21 = log((double)(int)uVar10);
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    iVar13 = (int)(dVar21 * __real_3ff71547652b82fe);
    local_138 = iVar13;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_148,iVar13,Default);
    local_188 = iVar13 - 1;
    uVar12 = 0;
    if ((int)local_188 < local_148.ArrayNum) {
      uVar12 = ~local_188 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar16 = (longlong)(int)local_188;
    *(uint *)(local_148.AllocatorInstance.Data + lVar16 * 4) = uVar10;
    fVar23 = __real_3f000000;
    fVar22 = __real_3f800000;
    if (0 < (int)local_188) {
      local_res8 = iVar13 + -2;
      uVar12 = uVar10;
      do {
        uVar14 = 0;
        pFVar17 = pFVar2;
        if (0 < (int)uVar12) {
          do {
            uVar9 = param_5->Seed * 0xbb38435 + 0x3619636b;
            param_5->Seed = uVar9;
            if ((float)(uVar9 >> 9 | 0x3f800000) - fVar22 < fVar23) {
              uVar12 = uVar12 - 1;
              lVar20 = lVar20 + -1;
              uVar9 = 0;
              if ((int)uVar12 < (int)uVar10) {
                uVar9 = ~uVar12 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = 0;
              if ((int)uVar14 < (int)uVar10) {
                uVar9 = ~uVar14 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar4 = *(undefined4 *)pFVar17;
              uVar14 = uVar14 - 1;
              *(undefined4 *)pFVar17 = *(undefined4 *)(pFVar2 + lVar20 * 4);
              pFVar17 = pFVar17 + -4;
              *(undefined4 *)(pFVar2 + lVar20 * 4) = uVar4;
            }
            uVar14 = uVar14 + 1;
            pFVar17 = pFVar17 + 4;
          } while ((int)uVar14 < (int)uVar12);
        }
        uVar14 = 0;
        if ((int)local_res8 < local_148.ArrayNum) {
          uVar14 = -local_188 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_188 = local_188 - 1;
        local_res8 = local_res8 + -1;
        *(uint *)(local_148.AllocatorInstance.Data + lVar16 * 4 + -4) = uVar12;
        lVar16 = lVar16 + -1;
      } while (0 < lVar16);
    }
    iVar13 = 0;
    local_170.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Nodes.ArrayNum = 0;
    local_170.Nodes.ArrayMax = 0;
    local_170.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.MaxDepthBuckets.ArrayNum = 0;
    local_170.MaxDepthBuckets.ArrayMax = 0;
    local_170.Num = 0;
    local_res8 = 0;
    if (0 < local_138) {
      local_178 = 0;
      iVar19 = local_138;
      do {
        uVar10 = 0;
        if ((int)local_res8 < local_148.ArrayNum) {
          uVar10 = ~local_res8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar18 = *(int *)(local_148.AllocatorInstance.Data + local_178 * 4);
        if (iVar18 != iVar13) {
          bVar8 = (longlong)local_170.Nodes._8_8_ < 0;
          local_170.Nodes._8_8_ = local_170.Nodes._8_8_ & 0xffffffff00000000;
          if (bVar8) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,0,(ForAnyElementType *)&local_170,0,&local_170.Nodes.ArrayMax);
          }
          if ((longlong)local_170.MaxDepthBuckets._8_8_ < 0) {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_170.MaxDepthBuckets.AllocatorInstance.Data,
                       local_170.MaxDepthBuckets.ArrayNum);
            iVar7 = local_170.MaxDepthBuckets.ArrayMax;
            local_170.MaxDepthBuckets._8_8_ = local_170.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
            if (iVar7 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,&local_170.MaxDepthBuckets.AllocatorInstance,0,
                         &local_170.MaxDepthBuckets.ArrayMax);
            }
          }
          else {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_170.MaxDepthBuckets.AllocatorInstance.Data,
                       local_170.MaxDepthBuckets.ArrayNum);
            local_170.MaxDepthBuckets._8_8_ = local_170.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
          }
          iVar18 = iVar18 - iVar13;
          local_170.Num = 0;
          pFVar17 = pFVar2 + (longlong)iVar13 * 4;
          local_108 = pFVar17;
          iStack_100 = iVar18;
          if ((iVar18 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_118 = *(undefined8 *)((longlong)&(param_3->Max).field0_0x0 + 4);
          fVar22 = (param_3->Min).field0_0x0._s_0.X;
          fVar23 = (param_3->Min).field0_0x0._s_0.Y;
          fVar27 = (param_3->Min).field0_0x0._s_0.Z;
          fVar26 = (param_3->Max).field0_0x0._s_0.X;
          pTVar11 = param_2->DataPtr;
          uVar5._0_4_ = param_2->ArrayNum;
          uVar5._4_4_ = *(undefined4 *)&param_2->field_0xc;
          local_128._s_0.X = fVar22;
          local_128._s_0.Y = fVar23;
          local_128._s_0.Z = fVar27;
          fStack_11c = fVar26;
          TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
          ::Reset(&local_170);
          iVar13 = local_170.Nodes.ArrayNum;
          if (local_170.Nodes.ArrayNum == local_170.Nodes.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x420,(ForAnyElementType *)&local_170,&local_170.Nodes.ArrayMax);
          }
          local_170.Nodes.ArrayNum = iVar13 + 1;
          lVar20 = (longlong)iVar13 * 0x20;
          *(undefined8 *)(local_170.Nodes.AllocatorInstance.Data + lVar20) = 0xffffffffffffffff;
          *(undefined8 *)(local_170.Nodes.AllocatorInstance.Data + lVar20 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(local_170.Nodes.AllocatorInstance.Data + lVar20 + 0x10) =
               0xffffffffffffffff;
          *(undefined8 *)(local_170.Nodes.AllocatorInstance.Data + lVar20 + 0x18) =
               0xffffffffffffffff;
          local_170.MaxDepth = param_4;
          if ((((fVar26 < fVar22) || ((float)local_118 < fVar23)) || (local_118._4_4_ < fVar27)) &&
             (pFVar17 != pFVar17 + (longlong)iVar18 * 4)) {
            pFVar15 = pFVar17;
            fVar25 = local_118._4_4_;
            fVar24 = (float)local_118;
            do {
              uVar10 = *(uint *)pFVar15;
              uVar12 = 0;
              if ((int)uVar10 < (int)uVar5) {
                uVar12 = ~uVar10 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              fVar3 = pTVar11[(int)uVar10].field0_0x0._s_0.X;
              if (fVar3 < fVar22) {
                fVar22 = fVar3;
                local_128._s_0.X = fVar3;
              }
              if (fVar26 < fVar3) {
                fVar26 = fVar3;
                fStack_11c = fVar3;
              }
              fVar3 = pTVar11[(int)uVar10].field0_0x0._s_0.Y;
              if (fVar3 < fVar23) {
                fVar23 = fVar3;
                local_128._s_0.Y = fVar3;
              }
              if (fVar24 < fVar3) {
                local_118 = CONCAT44(local_118._4_4_,fVar3);
                fVar24 = fVar3;
              }
              fVar3 = pTVar11[(int)uVar10].field0_0x0._s_0.Z;
              if (fVar3 < fVar27) {
                fVar27 = fVar3;
                local_128._s_0.Z = fVar3;
              }
              if (fVar25 < fVar3) {
                local_118 = CONCAT44(fVar3,(float)local_118);
                fVar25 = fVar3;
              }
              pFVar15 = pFVar15 + 4;
              iVar19 = local_138;
            } while (pFVar15 != pFVar17 + (longlong)iVar18 * 4);
          }
          pFVar15 = pFVar17 + (longlong)iVar18 * 4;
          for (; pFVar17 != pFVar15; pFVar17 = pFVar17 + 4) {
            local_e8.DataPtr = pTVar11;
            local_e8._8_8_ = uVar5;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
            ::AddPointHelper(&local_170,&local_e8,*(uint *)pFVar17,
                             (TAxisAlignedBox3<float> *)&local_128._s_0);
          }
          if (local_170.Num == iVar18) {
            local_134[0] = 0;
            if ((local_170.Nodes.ArrayNum < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_d8._12_4_ = uStack_fc;
            local_d8.ArrayNum = iStack_100;
            local_d8.DataPtr = (int *)local_108;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
            ::InPlaceExtractZOrderCurveHelper
                      (&local_170,&local_d8,(FOctreeNode *)local_170.Nodes.AllocatorInstance.Data,0,
                       (bool)((byte)local_res8 & 1),local_134);
            if ((local_134[0] != iVar18) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Idx == OrderView.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                                   ,0x184,L""), bVar8)) goto code_r0x0001435d0d1a;
          }
          else {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5583982759300301182>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                               ,0x17e,"Num == OrderView.Num()");
            if (bVar8) {
code_r0x0001435d0d1a:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        uVar10 = 0;
        if ((int)local_res8 < local_148.ArrayNum) {
          uVar10 = ~local_res8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_res8 = local_res8 + 1;
        iVar13 = *(int *)(local_148.AllocatorInstance.Data + local_178 * 4);
        local_178 = local_178 + 1;
      } while ((int)local_res8 < iVar19);
    }
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               local_170.MaxDepthBuckets.AllocatorInstance.Data,local_170.MaxDepthBuckets.ArrayNum);
    if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
        local_170.MaxDepthBuckets.AllocatorInstance.Data !=
        (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_170.MaxDepthBuckets.AllocatorInstance.Data);
    }
    if (local_170.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Nodes.AllocatorInstance.Data);
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyBRIO<double,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>,ZOrderCurvePointsLocal::FQuadTreeNode> @ 1435d0e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ZOrderCurvePointsLocal::
ApplyBRIO<double,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>,ZOrderCurvePointsLocal::FQuadTreeNode>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_2,
          TAxisAlignedBox2<double> *param_3,int param_4,FRandomStream *param_5)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  TVector2<double>_u_0_s_0 TVar4;
  TVector2<double>_u_0_s_0 TVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  TVector2<double> *pTVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  uint local_res8;
  uint local_168;
  longlong local_158;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
  local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  int local_118;
  int local_114 [3];
  undefined1 local_108 [16];
  TVector2<double>_u_0_s_0 local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_c8;
  TArrayView<int,int> local_b8;
  TVector2<double> *local_a8;
  undefined8 uStack_a0;
  
  dVar24 = (param_3->Max).field0_0x0._s_0.X;
  dVar26 = (param_3->Min).field0_0x0._s_0.X;
  if ((dVar24 < dVar26) ||
     (dVar28 = (param_3->Min).field0_0x0._s_0.Y, pdVar1 = &(param_3->Max).field0_0x0._s_0.Y,
     *pdVar1 <= dVar28 && dVar28 != *pdVar1)) {
    local_a8 = param_2->DataPtr;
    uStack_a0 = *(undefined8 *)&param_2->ArrayNum;
    uVar6 = *(undefined8 *)&param_2->ArrayNum;
    if (local_a8 != local_a8 + (int)uVar6) {
      dVar28 = (param_3->Min).field0_0x0._s_0.Y;
      dVar27 = (param_3->Max).field0_0x0._s_0.Y;
      pTVar14 = local_a8;
      do {
        dVar3 = (pTVar14->field0_0x0)._s_0.X;
        if (dVar3 < dVar26) {
          (param_3->Min).field0_0x0._s_0.X = dVar3;
          dVar26 = dVar3;
        }
        if (dVar24 < dVar3) {
          (param_3->Max).field0_0x0._s_0.X = dVar3;
          dVar24 = dVar3;
        }
        dVar3 = (pTVar14->field0_0x0)._s_0.Y;
        if (dVar3 < dVar28) {
          (param_3->Min).field0_0x0._s_0.Y = dVar3;
          dVar28 = dVar3;
        }
        if (dVar27 < dVar3) {
          (param_3->Max).field0_0x0._s_0.Y = dVar3;
          dVar27 = dVar3;
        }
        pTVar14 = pTVar14 + 1;
      } while (pTVar14 != local_a8 + (int)uVar6);
    }
  }
  iVar16 = param_1->ArrayNum;
  uVar13 = param_2->ArrayNum;
  lVar23 = (longlong)(int)uVar13;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar16 + uVar13,Default);
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar16 * 4;
  if (((int)uVar13 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = 0;
  pFVar20 = pFVar2;
  if (0 < param_2->ArrayNum) {
    do {
      uVar17 = 0;
      if ((int)uVar15 < (int)uVar13) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(uint *)pFVar20 = uVar15;
      uVar15 = uVar15 + 1;
      pFVar20 = pFVar20 + 4;
    } while ((int)uVar15 < param_2->ArrayNum);
  }
  if (1 < (int)uVar13) {
    dVar24 = log((double)(int)uVar13);
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    iVar16 = (int)(dVar24 * __real_3ff71547652b82fe);
    local_118 = iVar16;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_128,iVar16,Default);
    local_168 = iVar16 - 1;
    uVar15 = 0;
    if ((int)local_168 < local_128.ArrayNum) {
      uVar15 = ~local_168 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar19 = (longlong)(int)local_168;
    *(uint *)(local_128.AllocatorInstance.Data + lVar19 * 4) = uVar13;
    fVar10 = __real_3f000000;
    fVar9 = __real_3f800000;
    if (0 < (int)local_168) {
      local_res8 = iVar16 + -2;
      uVar15 = uVar13;
      do {
        uVar17 = 0;
        pFVar20 = pFVar2;
        if (0 < (int)uVar15) {
          do {
            uVar12 = param_5->Seed * 0xbb38435 + 0x3619636b;
            param_5->Seed = uVar12;
            if ((float)(uVar12 >> 9 | 0x3f800000) - fVar9 < fVar10) {
              uVar15 = uVar15 - 1;
              lVar23 = lVar23 + -1;
              uVar12 = 0;
              if ((int)uVar15 < (int)uVar13) {
                uVar12 = ~uVar15 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar12 = 0;
              if ((int)uVar17 < (int)uVar13) {
                uVar12 = ~uVar17 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar35 = *(undefined4 *)pFVar20;
              uVar17 = uVar17 - 1;
              *(undefined4 *)pFVar20 = *(undefined4 *)(pFVar2 + lVar23 * 4);
              pFVar20 = pFVar20 + -4;
              *(undefined4 *)(pFVar2 + lVar23 * 4) = uVar35;
            }
            uVar17 = uVar17 + 1;
            pFVar20 = pFVar20 + 4;
          } while ((int)uVar17 < (int)uVar15);
        }
        uVar17 = 0;
        if ((int)local_res8 < local_128.ArrayNum) {
          uVar17 = -local_168 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_168 = local_168 - 1;
        local_res8 = local_res8 + -1;
        *(uint *)(local_128.AllocatorInstance.Data + lVar19 * 4 + -4) = uVar15;
        lVar19 = lVar19 + -1;
      } while (0 < lVar19);
    }
    iVar16 = 0;
    local_150.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Nodes.ArrayNum = 0;
    local_150.Nodes.ArrayMax = 0;
    local_150.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.MaxDepthBuckets.ArrayNum = 0;
    local_150.MaxDepthBuckets.ArrayMax = 0;
    local_150.Num = 0;
    local_res8 = 0;
    if (0 < local_118) {
      local_158 = 0;
      iVar22 = local_118;
      do {
        uVar13 = 0;
        if ((int)local_res8 < local_128.ArrayNum) {
          uVar13 = ~local_res8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar21 = *(int *)(local_128.AllocatorInstance.Data + local_158 * 4);
        if (iVar21 != iVar16) {
          bVar11 = (longlong)local_150.Nodes._8_8_ < 0;
          local_150.Nodes._8_8_ = local_150.Nodes._8_8_ & 0xffffffff00000000;
          if (bVar11) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)&local_150,0,&local_150.Nodes.ArrayMax);
          }
          if ((longlong)local_150.MaxDepthBuckets._8_8_ < 0) {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_150.MaxDepthBuckets.AllocatorInstance.Data,
                       local_150.MaxDepthBuckets.ArrayNum);
            iVar8 = local_150.MaxDepthBuckets.ArrayMax;
            local_150.MaxDepthBuckets._8_8_ = local_150.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
            if (iVar8 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,&local_150.MaxDepthBuckets.AllocatorInstance,0,
                         &local_150.MaxDepthBuckets.ArrayMax);
            }
          }
          else {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_150.MaxDepthBuckets.AllocatorInstance.Data,
                       local_150.MaxDepthBuckets.ArrayNum);
            local_150.MaxDepthBuckets._8_8_ = local_150.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
          }
          iVar21 = iVar21 - iVar16;
          local_150.Num = 0;
          pFVar20 = pFVar2 + (longlong)iVar16 * 4;
          local_e8 = pFVar20;
          iStack_e0 = iVar21;
          if ((iVar21 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TVar4 = (param_3->Min).field0_0x0._s_0;
          uVar35 = TVar4.X._0_4_;
          uVar36 = TVar4.X._4_4_;
          uVar31 = TVar4.Y._0_4_;
          uVar32 = TVar4.Y._4_4_;
          TVar5 = (param_3->Max).field0_0x0._s_0;
          uVar33 = TVar5.X._0_4_;
          uVar34 = TVar5.X._4_4_;
          uVar29 = TVar5.Y._0_4_;
          uVar30 = TVar5.Y._4_4_;
          pTVar14 = param_2->DataPtr;
          uVar6._0_4_ = param_2->ArrayNum;
          uVar6._4_4_ = *(undefined4 *)&param_2->field_0xc;
          local_108 = (undefined1  [16])TVar4;
          local_f8 = TVar5;
          TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
          ::Reset(&local_150);
          iVar16 = local_150.Nodes.ArrayNum;
          if (local_150.Nodes.ArrayNum == local_150.Nodes.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)&local_150,&local_150.Nodes.ArrayMax);
          }
          local_150.Nodes.ArrayNum = iVar16 + 1;
          *(undefined8 *)(local_150.Nodes.AllocatorInstance.Data + (longlong)iVar16 * 0x10) =
               0xffffffffffffffff;
          *(undefined8 *)(local_150.Nodes.AllocatorInstance.Data + (longlong)iVar16 * 0x10 + 8) =
               0xffffffffffffffff;
          local_150.MaxDepth = param_4;
          if (((TVar5.X < TVar4.X) || (TVar5.Y < TVar4.Y)) &&
             (pFVar20 != pFVar20 + (longlong)iVar21 * 4)) {
            pFVar18 = pFVar20;
            do {
              uVar13 = *(uint *)pFVar18;
              uVar15 = 0;
              if ((int)uVar13 < (int)uVar6) {
                uVar15 = ~uVar13 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              dVar24 = pTVar14[(int)uVar13].field0_0x0._s_0.X;
              uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
              if (dVar24 < (double)CONCAT44(uVar36,uVar35)) {
                local_108._0_8_ = dVar24;
                uVar35 = SUB84(dVar24,0);
                uVar36 = uVar25;
              }
              if ((double)CONCAT44(uVar34,uVar33) <= dVar24 &&
                  dVar24 != (double)CONCAT44(uVar34,uVar33)) {
                local_f8.X = dVar24;
                uVar33 = SUB84(dVar24,0);
                uVar34 = uVar25;
              }
              dVar24 = pTVar14[(int)uVar13].field0_0x0._s_0.Y;
              uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
              if (dVar24 < (double)CONCAT44(uVar32,uVar31)) {
                local_108._8_8_ = dVar24;
                uVar31 = SUB84(dVar24,0);
                uVar32 = uVar25;
              }
              if ((double)CONCAT44(uVar30,uVar29) <= dVar24 &&
                  dVar24 != (double)CONCAT44(uVar30,uVar29)) {
                local_f8.Y = dVar24;
                uVar29 = SUB84(dVar24,0);
                uVar30 = uVar25;
              }
              pFVar18 = pFVar18 + 4;
              iVar22 = local_118;
            } while (pFVar18 != pFVar20 + (longlong)iVar21 * 4);
          }
          pFVar18 = pFVar20 + (longlong)iVar21 * 4;
          for (; pFVar20 != pFVar18; pFVar20 = pFVar20 + 4) {
            local_c8.DataPtr = pTVar14;
            local_c8._8_8_ = uVar6;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
            ::AddPointHelper(&local_150,&local_c8,*(uint *)pFVar20,
                             (TAxisAlignedBox2<double> *)local_108);
          }
          if (local_150.Num == iVar21) {
            local_114[0] = 0;
            if ((local_150.Nodes.ArrayNum < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_b8._12_4_ = uStack_dc;
            local_b8.ArrayNum = iStack_e0;
            local_b8.DataPtr = (int *)local_e8;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
            ::InPlaceExtractZOrderCurveHelper
                      (&local_150,&local_b8,(FQuadTreeNode *)local_150.Nodes.AllocatorInstance.Data,
                       0,(bool)((byte)local_res8 & 1),local_114);
            if ((local_114[0] != iVar21) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Idx == OrderView.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                                    ,0x184,L""), bVar11)) goto code_r0x0001435d162a;
          }
          else {
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5583982759300301182>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                                ,0x17e,"Num == OrderView.Num()");
            if (bVar11) {
code_r0x0001435d162a:
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        uVar13 = 0;
        if ((int)local_res8 < local_128.ArrayNum) {
          uVar13 = ~local_res8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_res8 = local_res8 + 1;
        iVar16 = *(int *)(local_128.AllocatorInstance.Data + local_158 * 4);
        local_158 = local_158 + 1;
      } while ((int)local_res8 < iVar22);
    }
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               local_150.MaxDepthBuckets.AllocatorInstance.Data,local_150.MaxDepthBuckets.ArrayNum);
    if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
        local_150.MaxDepthBuckets.AllocatorInstance.Data !=
        (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_150.MaxDepthBuckets.AllocatorInstance.Data);
    }
    if (local_150.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Nodes.AllocatorInstance.Data);
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyBRIO<double,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>,ZOrderCurvePointsLocal::FOctreeNode> @ 1435d1720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ZOrderCurvePointsLocal::
ApplyBRIO<double,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>,ZOrderCurvePointsLocal::FOctreeNode>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TAxisAlignedBox3<double> *param_3,int param_4,FRandomStream *param_5)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  uint local_res8;
  uint local_198;
  longlong local_188;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  int local_148;
  int local_144 [3];
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<UE::Math::TVector<double>_const_,int> local_e8;
  TArrayView<int,int> local_d8;
  TVector<double> *local_c8;
  undefined8 uStack_c0;
  
  dVar25 = (param_3->Max).field0_0x0._s_0.X;
  dVar27 = (param_3->Min).field0_0x0._s_0.X;
  if (((dVar25 < dVar27) ||
      (dVar30 = (param_3->Min).field0_0x0._s_0.Y, pdVar1 = &(param_3->Max).field0_0x0._s_0.Y,
      *pdVar1 <= dVar30 && dVar30 != *pdVar1)) ||
     (dVar30 = (param_3->Min).field0_0x0._s_0.Z, pdVar1 = &(param_3->Max).field0_0x0._s_0.Z,
     *pdVar1 <= dVar30 && dVar30 != *pdVar1)) {
    local_c8 = param_2->DataPtr;
    uStack_c0 = *(undefined8 *)&param_2->ArrayNum;
    uVar7 = *(undefined8 *)&param_2->ArrayNum;
    if (local_c8 != local_c8 + (int)uVar7) {
      uVar3 = *(undefined8 *)((longlong)&(param_3->Min).field0_0x0 + 8);
      uVar31 = (undefined4)uVar3;
      uVar32 = (undefined4)((ulonglong)uVar3 >> 0x20);
      dVar30 = (param_3->Max).field0_0x0._s_0.Y;
      dVar29 = (param_3->Max).field0_0x0._s_0.Z;
      dVar28 = (param_3->Min).field0_0x0._s_0.Z;
      pTVar15 = local_c8;
      do {
        dVar4 = (pTVar15->field0_0x0)._s_0.X;
        if (dVar4 < dVar27) {
          (param_3->Min).field0_0x0._s_0.X = dVar4;
          dVar27 = dVar4;
        }
        if (dVar25 < dVar4) {
          (param_3->Max).field0_0x0._s_0.X = dVar4;
          dVar25 = dVar4;
        }
        dVar4 = (pTVar15->field0_0x0)._s_0.Y;
        if (dVar4 < (double)CONCAT44(uVar32,uVar31)) {
          (param_3->Min).field0_0x0._s_0.Y = dVar4;
          uVar31 = SUB84(dVar4,0);
          uVar32 = (int)((ulonglong)dVar4 >> 0x20);
        }
        if (dVar30 < dVar4) {
          (param_3->Max).field0_0x0._s_0.Y = dVar4;
          dVar30 = dVar4;
        }
        dVar4 = (pTVar15->field0_0x0)._s_0.Z;
        if (dVar4 <= dVar28) {
          dVar28 = dVar4;
        }
        dVar4 = (pTVar15->field0_0x0)._s_0.Z;
        if (dVar29 <= dVar4) {
          dVar29 = dVar4;
        }
        pTVar15 = pTVar15 + 1;
      } while (pTVar15 != local_c8 + (int)uVar7);
      (param_3->Max).field0_0x0._s_0.Z = dVar29;
      (param_3->Min).field0_0x0._s_0.Z = dVar28;
    }
  }
  iVar17 = param_1->ArrayNum;
  uVar14 = param_2->ArrayNum;
  lVar24 = (longlong)(int)uVar14;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar17 + uVar14,Default);
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar17 * 4;
  if (((int)uVar14 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar16 = 0;
  pFVar21 = pFVar2;
  if (0 < param_2->ArrayNum) {
    do {
      uVar18 = 0;
      if ((int)uVar16 < (int)uVar14) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)pFVar21 = uVar16;
      uVar16 = uVar16 + 1;
      pFVar21 = pFVar21 + 4;
    } while ((int)uVar16 < param_2->ArrayNum);
  }
  if (1 < (int)uVar14) {
    dVar25 = log((double)(int)uVar14);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    iVar17 = (int)(dVar25 * __real_3ff71547652b82fe);
    local_148 = iVar17;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_158,iVar17,Default);
    local_198 = iVar17 - 1;
    uVar16 = 0;
    if ((int)local_198 < local_158.ArrayNum) {
      uVar16 = ~local_198 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar20 = (longlong)(int)local_198;
    *(uint *)(local_158.AllocatorInstance.Data + lVar20 * 4) = uVar14;
    fVar11 = __real_3f000000;
    fVar10 = __real_3f800000;
    if (0 < (int)local_198) {
      local_res8 = iVar17 + -2;
      uVar16 = uVar14;
      do {
        uVar18 = 0;
        pFVar21 = pFVar2;
        if (0 < (int)uVar16) {
          do {
            uVar13 = param_5->Seed * 0xbb38435 + 0x3619636b;
            param_5->Seed = uVar13;
            if ((float)(uVar13 >> 9 | 0x3f800000) - fVar10 < fVar11) {
              uVar16 = uVar16 - 1;
              lVar24 = lVar24 + -1;
              uVar13 = 0;
              if ((int)uVar16 < (int)uVar14) {
                uVar13 = ~uVar16 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar13 = 0;
              if ((int)uVar18 < (int)uVar14) {
                uVar13 = ~uVar18 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar31 = *(undefined4 *)pFVar21;
              uVar18 = uVar18 - 1;
              *(undefined4 *)pFVar21 = *(undefined4 *)(pFVar2 + lVar24 * 4);
              pFVar21 = pFVar21 + -4;
              *(undefined4 *)(pFVar2 + lVar24 * 4) = uVar31;
            }
            uVar18 = uVar18 + 1;
            pFVar21 = pFVar21 + 4;
          } while ((int)uVar18 < (int)uVar16);
        }
        uVar18 = 0;
        if ((int)local_res8 < local_158.ArrayNum) {
          uVar18 = -local_198 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_198 = local_198 - 1;
        local_res8 = local_res8 + -1;
        *(uint *)(local_158.AllocatorInstance.Data + lVar20 * 4 + -4) = uVar16;
        lVar20 = lVar20 + -1;
      } while (0 < lVar20);
    }
    iVar17 = 0;
    local_180.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Nodes.ArrayNum = 0;
    local_180.Nodes.ArrayMax = 0;
    local_180.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.MaxDepthBuckets.ArrayNum = 0;
    local_180.MaxDepthBuckets.ArrayMax = 0;
    local_180.Num = 0;
    local_res8 = 0;
    if (0 < local_148) {
      local_188 = 0;
      iVar23 = local_148;
      do {
        uVar14 = 0;
        if ((int)local_res8 < local_158.ArrayNum) {
          uVar14 = ~local_res8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar22 = *(int *)(local_158.AllocatorInstance.Data + local_188 * 4);
        if (iVar22 != iVar17) {
          bVar12 = (longlong)local_180.Nodes._8_8_ < 0;
          local_180.Nodes._8_8_ = local_180.Nodes._8_8_ & 0xffffffff00000000;
          if (bVar12) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,4,0,(ForAnyElementType *)&local_180,0,&local_180.Nodes.ArrayMax);
          }
          if ((longlong)local_180.MaxDepthBuckets._8_8_ < 0) {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_180.MaxDepthBuckets.AllocatorInstance.Data,
                       local_180.MaxDepthBuckets.ArrayNum);
            iVar9 = local_180.MaxDepthBuckets.ArrayMax;
            local_180.MaxDepthBuckets._8_8_ = local_180.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
            if (iVar9 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,&local_180.MaxDepthBuckets.AllocatorInstance,0,
                         &local_180.MaxDepthBuckets.ArrayMax);
            }
          }
          else {
            DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                       local_180.MaxDepthBuckets.AllocatorInstance.Data,
                       local_180.MaxDepthBuckets.ArrayNum);
            local_180.MaxDepthBuckets._8_8_ = local_180.MaxDepthBuckets._8_8_ & 0xffffffff00000000;
          }
          iVar22 = iVar22 - iVar17;
          local_180.Num = 0;
          pFVar21 = pFVar2 + (longlong)iVar17 * 4;
          local_108 = pFVar21;
          iStack_100 = iVar22;
          if ((iVar22 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_128._16_8_ = *(double *)((longlong)&(param_3->Max).field0_0x0 + 8);
          local_128._24_8_ = *(double *)((longlong)&(param_3->Max).field0_0x0 + 0x10);
          auVar5 = *(undefined1 (*) [16])&(param_3->Min).field0_0x0;
          uVar31 = auVar5._0_4_;
          uVar42 = auVar5._4_4_;
          uVar36 = auVar5._8_4_;
          uVar37 = auVar5._12_4_;
          auVar6 = *(undefined1 (*) [16])((longlong)&(param_3->Min).field0_0x0 + 0x10);
          uVar32 = auVar6._0_4_;
          uVar33 = auVar6._4_4_;
          uVar40 = auVar6._8_4_;
          uVar41 = auVar6._12_4_;
          pTVar15 = param_2->DataPtr;
          uVar7._0_4_ = param_2->ArrayNum;
          uVar7._4_4_ = *(undefined4 *)&param_2->field_0xc;
          local_138 = auVar5;
          local_128._0_16_ = auVar6;
          TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
          ::Reset(&local_180);
          iVar17 = local_180.Nodes.ArrayNum;
          if (local_180.Nodes.ArrayNum == local_180.Nodes.ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x420,(ForAnyElementType *)&local_180,&local_180.Nodes.ArrayMax);
          }
          uVar34 = (undefined4)local_128._24_8_;
          uVar35 = SUB84(local_128._24_8_,4);
          uVar38 = (undefined4)local_128._16_8_;
          uVar39 = SUB84(local_128._16_8_,4);
          local_180.Nodes.ArrayNum = iVar17 + 1;
          lVar24 = (longlong)iVar17 * 0x20;
          *(undefined8 *)(local_180.Nodes.AllocatorInstance.Data + lVar24) = 0xffffffffffffffff;
          *(undefined8 *)(local_180.Nodes.AllocatorInstance.Data + lVar24 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(local_180.Nodes.AllocatorInstance.Data + lVar24 + 0x10) =
               0xffffffffffffffff;
          *(undefined8 *)(local_180.Nodes.AllocatorInstance.Data + lVar24 + 0x18) =
               0xffffffffffffffff;
          local_180.MaxDepth = param_4;
          if ((((auVar6._8_8_ < auVar5._0_8_) || ((double)local_128._16_8_ < auVar5._8_8_)) ||
              ((double)local_128._24_8_ < auVar6._0_8_)) &&
             (pFVar21 != pFVar21 + (longlong)iVar22 * 4)) {
            pFVar19 = pFVar21;
            do {
              uVar14 = *(uint *)pFVar19;
              uVar16 = 0;
              if ((int)uVar14 < (int)uVar7) {
                uVar16 = ~uVar14 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              dVar25 = pTVar15[(int)uVar14].field0_0x0._s_0.X;
              uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
              if (dVar25 < (double)CONCAT44(uVar42,uVar31)) {
                local_138._0_8_ = dVar25;
                uVar31 = SUB84(dVar25,0);
                uVar42 = uVar26;
              }
              if ((double)CONCAT44(uVar41,uVar40) <= dVar25 &&
                  dVar25 != (double)CONCAT44(uVar41,uVar40)) {
                local_128._8_8_ = dVar25;
                uVar40 = SUB84(dVar25,0);
                uVar41 = uVar26;
              }
              dVar25 = pTVar15[(int)uVar14].field0_0x0._s_0.Y;
              uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
              if (dVar25 < (double)CONCAT44(uVar37,uVar36)) {
                local_138._8_8_ = dVar25;
                uVar36 = SUB84(dVar25,0);
                uVar37 = uVar26;
              }
              if ((double)CONCAT44(uVar39,uVar38) <= dVar25 &&
                  dVar25 != (double)CONCAT44(uVar39,uVar38)) {
                uVar38 = SUB84(dVar25,0);
                uVar39 = uVar26;
                local_128._16_8_ = dVar25;
              }
              dVar25 = pTVar15[(int)uVar14].field0_0x0._s_0.Z;
              uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
              if (dVar25 < (double)CONCAT44(uVar33,uVar32)) {
                local_128._0_8_ = dVar25;
                uVar32 = SUB84(dVar25,0);
                uVar33 = uVar26;
              }
              if ((double)CONCAT44(uVar35,uVar34) <= dVar25 &&
                  dVar25 != (double)CONCAT44(uVar35,uVar34)) {
                uVar34 = SUB84(dVar25,0);
                uVar35 = uVar26;
                local_128._24_8_ = dVar25;
              }
              pFVar19 = pFVar19 + 4;
              iVar23 = local_148;
            } while (pFVar19 != pFVar21 + (longlong)iVar22 * 4);
          }
          pFVar19 = pFVar21 + (longlong)iVar22 * 4;
          for (; pFVar21 != pFVar19; pFVar21 = pFVar21 + 4) {
            local_e8.DataPtr = pTVar15;
            local_e8._8_8_ = uVar7;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
            ::AddPointHelper(&local_180,&local_e8,*(uint *)pFVar21,
                             (TAxisAlignedBox3<double> *)local_138);
          }
          if (local_180.Num == iVar22) {
            local_144[0] = 0;
            if ((local_180.Nodes.ArrayNum < 1) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_d8._12_4_ = uStack_fc;
            local_d8.ArrayNum = iStack_100;
            local_d8.DataPtr = (int *)local_108;
            TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
            ::InPlaceExtractZOrderCurveHelper
                      (&local_180,&local_d8,(FOctreeNode *)local_180.Nodes.AllocatorInstance.Data,0,
                       (bool)((byte)local_res8 & 1),local_144);
            if ((local_144[0] != iVar22) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Idx == OrderView.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                                    ,0x184,L""), bVar12)) goto code_r0x0001435d1fea;
          }
          else {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5583982759300301182>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Spatial\\ZOrderCurvePoints.cpp"
                                ,0x17e,"Num == OrderView.Num()");
            if (bVar12) {
code_r0x0001435d1fea:
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        uVar14 = 0;
        if ((int)local_res8 < local_158.ArrayNum) {
          uVar14 = ~local_res8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_res8 = local_res8 + 1;
        iVar17 = *(int *)(local_158.AllocatorInstance.Data + local_188 * 4);
        local_188 = local_188 + 1;
      } while ((int)local_res8 < iVar23);
    }
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               local_180.MaxDepthBuckets.AllocatorInstance.Data,local_180.MaxDepthBuckets.ArrayNum);
    if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
        local_180.MaxDepthBuckets.AllocatorInstance.Data !=
        (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_180.MaxDepthBuckets.AllocatorInstance.Data);
    }
    if (local_180.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Nodes.AllocatorInstance.Data);
    }
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
  }
  return;
}

// Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_> @ 1435d20f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<bool> * __cdecl
Async<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l24::<lambda_1>_>
          (TFuture<bool> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TArray<_public:_bool___cdecl_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&)_::_2_::FThreadContext,TSizedDefaultAllocator<32>_>
  *pTVar6;
  wchar_t *pwVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  atomic<unsigned_char> aVar10;
  int iVar11;
  FTaskBase *pFVar12;
  TFuture<bool> *pTVar13;
  FTaskBase *pFVar14;
  FTSTicker *this;
  undefined8 uVar15;
  FTaskBase *pFVar16;
  FRunnableThread *pFVar17;
  undefined8 *puVar18;
  code **ppcVar19;
  FPipe *pFVar20;
  FSharedReferencer<1> FVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  FTaskBase *pFVar24;
  FTaskBase *pFVar25;
  Type TVar26;
  FTaskBase *pFVar27;
  FTaskBase *this_00;
  undefined1 auStackY_1e8 [32];
  EExtendedTaskPriority local_1a8;
  ETaskPriority local_1a7 [7];
  FTaskBase *local_1a0;
  EAsyncExecution local_198;
  TFuture<bool> *local_190;
  FTaskBase *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar25 = (FTaskBase *)0x0;
  local_1a0 = (FTaskBase *)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_198 = param_1;
  local_190 = __return_storage_ptr__;
  local_188 = (FTaskBase *)param_3;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x30,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::`24'::<lambda_1>,1,1>
        ::_vftable_;
  pTVar6 = param_2->ThreadContexts;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)pTVar6;
  pwVar7 = (wchar_t *)param_2->ThreadUVScale;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).
  SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)param_2->bAbort;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName = pwVar7;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  LastTask = *(atomic<UE::Tasks::Private::FTaskBase_*> *)&param_2->Index;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,bool>
               ::Call;
  }
  pFVar12 = operator_new(0x90);
  if (pFVar12 == (FTaskBase *)0x0) {
    local_1a0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar12 = pFVar25;
  }
  else {
    *(atomic<int> *)&pFVar12->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar12->_padding_)[1] = (atomic<int>)0x1;
    pFVar12->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_;
    FFutureState::FFutureState((FFutureState *)&pFVar12->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar12->_padding_;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
    local_1a0 = pFVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    LOCK();
    *(atomic<int> *)&pFVar12->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar12->_padding_ + 1);
    UNLOCK();
  }
  pFVar24 = this_00;
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar26 = GameThread;
    if (local_198 == TaskGraph) {
      TVar26 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar24 = pFVar25;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask__N____6B_;
      pFVar24 = pFVar14;
    }
    pFVar24[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar24[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar24[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar24[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_1a0 = (FTaskBase *)0x0;
    pFVar24[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar24[1]._padding_ != 0) {
      local_f8 = pFVar25;
    }
    pFVar24[1].Pipe = (FPipe *)this_00;
    *(FTaskBase **)&pFVar24[1].StateChangeEvent = pFVar12;
    *(undefined1 *)&pFVar24[1].ExecutingThreadId = 1;
    *(Type *)&pFVar24[1].TraceId = TVar26;
    UE::Tasks::Private::TranslatePriority(TVar26,local_1a7,&local_1a8);
    UE::Tasks::Private::FTaskBase::Init(pFVar24,L"GraphTask",local_1a7[0],local_1a8,None);
    if (pFVar24 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar24->RefCount = (atomic<unsigned_int>)((int)pFVar24->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar24,0x130);
      LOCK();
      paVar1 = &pFVar24->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar24->_padding_)(pFVar24,1);
      }
    }
    goto LAB_1435d23a4;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1a0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar12;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar19 = local_50 + 2;
    *ppcVar19 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar19 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar19 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar19 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar19 = local_50;
      }
      (**(code **)(*ppcVar19 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar20 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar20 = local_a0;
      }
      (**(code **)(*(code **)pFVar20 + 0x10))();
    }
LAB_1435d23a4:
    pTVar13 = local_190;
    *(FTaskBase **)local_190 = this_00;
    *(FTaskBase **)&local_190->field_0x8 = pFVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_1435d2bca;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pFVar16 = operator_new(0x70);
      pFVar14 = local_188;
      pFVar27 = pFVar25;
      if (pFVar16 != (FTaskBase *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        pTVar8 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1a0 = (FTaskBase *)0x0;
        pFVar16->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
        pFVar16->_padding_ = (longlong)local_f8;
        pFVar16->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar16->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar16->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar16->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar16->_padding_ != 0) {
          local_f8 = pFVar25;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar16->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_170.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar16->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar16->ExecutingThreadId = pFVar12;
        (pFVar16->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar16->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar14 = pFVar25;
        pFVar24 = pFVar25;
        pFVar25 = (FTaskBase *)&DAT_00000001;
        pFVar27 = pFVar16;
      }
      if (pFVar25 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar23.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar17 = FRunnableThread::Create
                          ((FRunnable *)pFVar27,(wchar_t *)FVar23.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar17;
      if ((pFVar17 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      iVar11 = (**(code **)(pFVar17->_padding_ + 0x28))(pFVar17);
      if ((iVar11 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
LAB_1435d2788:
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar25 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      aVar10 = (atomic<unsigned_char>)(*(code *)pFVar25)(uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar13 = (TFuture<bool> *)(*pcVar5)();
          return pTVar13;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      (this_00->Prerequisites).Mutex.State = aVar10;
      FFutureState::MarkComplete((FFutureState *)this_00);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((!bVar9) && (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), !bVar9))
    goto LAB_1435d2788;
    TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
    pFVar16 = operator_new(0x70);
    pFVar14 = local_188;
    pFVar27 = pFVar25;
    if (pFVar16 != (FTaskBase *)0x0) {
      if ((local_158.bFutureRetrieved != false) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!bFutureRetrieved",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x24d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      pTVar8 = local_158.State.Object;
      local_158.bFutureRetrieved = true;
      if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TFuture<bool> *)(*pcVar5)();
        return pTVar13;
      }
      if (local_158.State.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      local_1a0 = (FTaskBase *)0x0;
      pFVar16->_padding_ = (longlong)&___7__TAsyncRunnable__N__6B_;
      pFVar16->_padding_ = (longlong)local_f8;
      pFVar16->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar16->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
      pFVar16->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
      *(TEventCount<unsigned_int> **)&(pFVar16->RefCount).field_0x0 = local_e8.EmptyEventRef.Object;
      if (pFVar16->_padding_ != 0) {
        local_f8 = pFVar25;
      }
      *(TReferenceControllerBase<1> **)
       &(pFVar16->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
           local_158.State.SharedReferenceCount.ReferenceController;
      *(FTaskBase **)&(pFVar16->StateChangeEvent).Count = this_00;
      *(FTaskBase **)&pFVar16->ExecutingThreadId = pFVar12;
      (pFVar16->TraceId).field_0x0 = 1;
      *(TFutureState<FRunnableThread_*> **)
       (pFVar16->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
      pFVar14 = pFVar25;
      pFVar24 = pFVar25;
      pFVar25 = (FTaskBase *)&DAT_00000002;
      pFVar27 = pFVar16;
    }
    if (pFVar25 != (FTaskBase *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar14);
    }
    FAsyncThreadIndex::GetNext();
    FString::PrintfImpl(&local_120,L"TAsync %d");
    FVar23.Data = (FScriptContainerElement *)L"";
    if (local_120.Data.ArrayNum != 0) {
      FVar23.Data = local_120.Data.AllocatorInstance.Data;
    }
    pFVar17 = FForkProcessHelper::CreateForkableThread
                        ((FRunnable *)pFVar27,(wchar_t *)FVar23.Data,0,TPri_Normal,
                         0xffffffffffffffff,None,false);
    local_178 = pFVar17;
    if ((pFVar17 == (FRunnableThread *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x161,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    iVar11 = (**(code **)(pFVar17->_padding_ + 0x28))(pFVar17);
    if ((iVar11 != 0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x162,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
        ((local_158.State.Object)->field_0x68 == '\0')) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.State.SharedReferenceCount.ReferenceController);
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (!bVar9) goto LAB_1435d2788;
    if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("GThreadPool != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                           ,0x16f,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
    pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
    puVar18 = operator_new(0x60);
    if (puVar18 == (undefined8 *)0x0) {
      (*pcVar5)(GThreadPool,0,3);
    }
    else {
      puVar18[1] = 0;
      local_1a0 = (FTaskBase *)0x0;
      *puVar18 = &___7__TAsyncQueuedWork__N__6B_;
      puVar18[2] = local_f8;
      puVar18[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
      local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)(puVar18 + 4) = local_e8.LastTask._0_4_;
      *(undefined4 *)((longlong)puVar18 + 0x24) = local_e8.LastTask._4_4_;
      *(undefined4 *)(puVar18 + 5) = local_e8.TaskCount._0_4_;
      *(undefined4 *)((longlong)puVar18 + 0x2c) = local_e8.TaskCount._4_4_;
      puVar18[6] = local_e8.EmptyEventRef.Object;
      if (puVar18[2] != 0) {
        local_f8 = pFVar25;
      }
      puVar18[8] = this_00;
      puVar18[9] = pFVar12;
      *(undefined1 *)(puVar18 + 10) = 1;
      (*pcVar5)(GThreadPool,puVar18,3);
      pFVar24 = pFVar25;
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TFuture<bool> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pTVar13 = local_190;
  *(FTaskBase **)local_190 = this_00;
  *(FTaskBase **)&local_190->field_0x8 = pFVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar24 != (FTaskBase *)0x0) &&
      ((char)(pFVar24->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TFuture<bool> *)(*pcVar5)();
    return pTVar13;
  }
LAB_1435d2bca:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 0x10))();
  }
  if (local_188->_padding_ != 0) {
    plVar22 = &local_188->_padding_;
    if ((longlong *)local_188->_padding_ != (longlong *)0x0) {
      plVar22 = (longlong *)local_188->_padding_;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  return pTVar13;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMDynamicMesh3Test::RunTest'::__l2::<lambda_1>_> @ 1435d2c80

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_1>_>
          (void *param_1)

{
  atomic<unsigned_char> *this;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar4 = *(longlong *)param_1;
  if (*(char *)(lVar4 + 0x21c) != '\0') {
    this = (atomic<unsigned_char> *)(lVar4 + 0x21d);
    LOCK();
    FVar1.State = *this;
    if (FVar1.State == (atomic<unsigned_char>)0x0) {
      *this = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar1.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)this);
    }
    *(int *)(lVar4 + 0x220) = *(int *)(lVar4 + 0x220) + 1;
    LOCK();
    aVar2 = *this;
    *this = (atomic<unsigned_char>)((char)*this + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this);
    }
  }
  uVar3 = **(uint **)((longlong)param_1 + 8);
  uVar7 = UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar7 <= uVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x29,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = **(uint **)((longlong)param_1 + 0x10);
  uVar7 = UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar7 != uVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetTopologyChangeStamp() == StartingTopologyChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x2a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMDynamicMesh3Test::RunTest'::__l2::<lambda_2>_> @ 1435d2d60

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_2>_>
          (void *param_1)

{
  atomic<unsigned_char> *paVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  
  lVar5 = *(longlong *)param_1;
  if (*(char *)(lVar5 + 0x21c) != '\0') {
    paVar1 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
    LOCK();
    FVar2.State = *paVar1;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *paVar1 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)paVar1);
    }
    *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
    LOCK();
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)paVar1);
    }
  }
  if (*(char *)(lVar5 + 0x224) != '\0') {
    paVar1 = (atomic<unsigned_char> *)(lVar5 + 0x225);
    LOCK();
    FVar2.State = *paVar1;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *paVar1 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)paVar1);
    }
    *(int *)(lVar5 + 0x228) = *(int *)(lVar5 + 0x228) + 1;
    LOCK();
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)paVar1);
    }
  }
  uVar4 = **(uint **)((longlong)param_1 + 8);
  uVar8 = UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar8 <= uVar4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x35,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = **(uint **)((longlong)param_1 + 0x10);
  uVar8 = UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar8 <= uVar4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetTopologyChangeStamp() > StartingTopologyChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x36,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMDynamicMesh3Test::RunTest'::__l2::<lambda_3>_> @ 1435d2ea0

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_3>_>
          (void *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EMeshResult EVar4;
  uint uVar5;
  
  EVar4 = UE::Geometry::FDynamicMesh3::RemoveVertex(*(FDynamicMesh3 **)param_1,10,false);
  if (EVar4 != Ok) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.RemoveVertex(VertexID, false) == UE::Geometry::EMeshResult::Ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                       ,0x40,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = **(uint **)((longlong)param_1 + 8);
  uVar5 = UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(*(FDynamicMesh3 **)param_1);
  if (uVar5 <= uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = **(uint **)((longlong)param_1 + 0x10);
  uVar5 = UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(*(FDynamicMesh3 **)param_1);
  if (uVar5 <= uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.GetTopologyChangeStamp() > StartingTopologyChangeStamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMDynamicMesh3Test::RunTest'::__l2::<lambda_4>_> @ 1435d2f70

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_4>_>
          (void *param_1)

{
  atomic<unsigned_char> *this;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar4 = *(longlong *)param_1;
  if (*(char *)(lVar4 + 0x21c) != '\0') {
    this = (atomic<unsigned_char> *)(lVar4 + 0x21d);
    LOCK();
    FVar1.State = *this;
    if (FVar1.State == (atomic<unsigned_char>)0x0) {
      *this = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar1.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)this);
    }
    *(int *)(lVar4 + 0x220) = *(int *)(lVar4 + 0x220) + 1;
    LOCK();
    aVar2 = *this;
    *this = (atomic<unsigned_char>)((char)*this + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this);
    }
  }
  uVar3 = **(uint **)((longlong)param_1 + 8);
  uVar7 = UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar7 <= uVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x4d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = **(uint **)((longlong)param_1 + 0x10);
  uVar7 = UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar7 != uVar3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetTopologyChangeStamp() == StartingTopologyChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x4e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMDynamicMesh3Test::RunTest'::__l2::<lambda_5>_> @ 1435d3050

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_5>_>
          (void *param_1)

{
  atomic<unsigned_char> *paVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  
  lVar5 = *(longlong *)param_1;
  if (*(char *)(lVar5 + 0x21c) != '\0') {
    paVar1 = (atomic<unsigned_char> *)(lVar5 + 0x21d);
    LOCK();
    FVar2.State = *paVar1;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *paVar1 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)paVar1);
    }
    *(int *)(lVar5 + 0x220) = *(int *)(lVar5 + 0x220) + 1;
    LOCK();
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)paVar1);
    }
  }
  if (*(char *)(lVar5 + 0x224) != '\0') {
    paVar1 = (atomic<unsigned_char> *)(lVar5 + 0x225);
    LOCK();
    FVar2.State = *paVar1;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *paVar1 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)paVar1);
    }
    *(int *)(lVar5 + 0x228) = *(int *)(lVar5 + 0x228) + 1;
    LOCK();
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)paVar1);
    }
  }
  uVar4 = **(uint **)((longlong)param_1 + 8);
  uVar8 = UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar8 <= uVar4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x5b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = **(uint **)((longlong)param_1 + 0x10);
  uVar8 = UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(*(FDynamicMesh3 **)param_1);
  if ((uVar8 <= uVar4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.GetTopologyChangeStamp() > StartingTopologyChangeStamp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                         ,0x5c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`FAutoRTFMDynamicMesh3Test::RunTest'::__l2::<lambda_6>_> @ 1435d3190

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FAutoRTFMDynamicMesh3Test::RunTest_::__l2::<lambda_6>_>
          (void *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EMeshResult EVar4;
  uint uVar5;
  
  EVar4 = UE::Geometry::FDynamicMesh3::RemoveVertex(*(FDynamicMesh3 **)param_1,10,false);
  if (EVar4 != Ok) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.RemoveVertex(VertexID, false) == UE::Geometry::EMeshResult::Ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                       ,0x68,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = **(uint **)((longlong)param_1 + 8);
  uVar5 = UE::Geometry::FDynamicMesh3::GetShapeChangeStamp(*(FDynamicMesh3 **)param_1);
  if (uVar5 <= uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.GetShapeChangeStamp() > StartingShapeChangeStamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                       ,0x69,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = **(uint **)((longlong)param_1 + 0x10);
  uVar5 = UE::Geometry::FDynamicMesh3::GetTopologyChangeStamp(*(FDynamicMesh3 **)param_1);
  if (uVar5 <= uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.GetTopologyChangeStamp() > StartingTopologyChangeStamp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Tests\\AutoRTFMDynamicMesh3Tests.cpp"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int> @ 1435d3e60

void __cdecl
ConstructItems<UE::InternalUVPacking::FUVIsland,UE::InternalUVPacking::FUVIsland,int>
          (void *param_1,FUVIsland *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FUVIsland *pFVar4;
  ForAnyElementType *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar4 = param_2;
    do {
      pTVar6 = &pFVar4->Triangles;
      *(undefined4 *)((longlong)pTVar6 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           *(undefined4 *)((longlong)(pTVar6 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar5,iVar2,piVar1);
        memcpy(pFVar5->Data,pFVar3,(longlong)iVar2 << 2);
      }
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 1))->field0_0x0)._s_0.Y;
      pFVar5[2].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 1))->field0_0x0)._s_0.X;
      pFVar5[3].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 2))->field0_0x0)._s_0.Y;
      pFVar5[4].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 2))->field0_0x0)._s_0.X;
      pFVar5[5].Data = pFVar3;
      pFVar5[6].Data = *(FScriptContainerElement **)(pTVar6 + 3);
      pFVar5[7].Data = *(FScriptContainerElement **)((longlong)(pTVar6 + 3) + 8);
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 4))->field0_0x0)._s_0.Y;
      pFVar5[8].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 4))->field0_0x0)._s_0.X;
      pFVar5[9].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)
               (((TMatrix2<double> *)(pTVar6 + 5))->Row0).field0_0x0._s_0.Y;
      pFVar5[10].Data =
           (FScriptContainerElement *)(((TMatrix2<double> *)(pTVar6 + 5))->Row0).field0_0x0._s_0.X;
      pFVar5[0xb].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 6))->field0_0x0)._s_0.Y;
      pFVar5[0xc].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 6))->field0_0x0)._s_0.X;
      pFVar5[0xd].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)
               (((TMatrix2<double> *)(pTVar6 + 7))->Row0).field0_0x0._s_0.Y;
      pFVar5[0xe].Data =
           (FScriptContainerElement *)(((TMatrix2<double> *)(pTVar6 + 7))->Row0).field0_0x0._s_0.X;
      pFVar5[0xf].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 8))->field0_0x0)._s_0.Y;
      pFVar5[0x10].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 8))->field0_0x0)._s_0.X;
      pFVar5[0x11].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 9))->field0_0x0)._s_0.Y;
      pFVar5[0x12].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 9))->field0_0x0)._s_0.X;
      pFVar5[0x13].Data = pFVar3;
      pFVar3 = (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 10))->field0_0x0)._s_0.Y;
      pFVar4 = (FUVIsland *)(pTVar6 + 0xb);
      pFVar5[0x14].Data =
           (FScriptContainerElement *)(((TVector2<double> *)(pTVar6 + 10))->field0_0x0)._s_0.X;
      pFVar5[0x15].Data = pFVar3;
      pFVar5 = pFVar5 + 0x17;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TAxisAlignedBox2<double>,int> @ 1435d3fa0

void __cdecl
DefaultConstructItems<UE::Geometry::TAxisAlignedBox2<double>,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0x7fefffffffffffff;
      *puVar1 = 0x7fefffffffffffff;
      puVar1[1] = 0xffefffffffffffff;
      puVar1[2] = 0xffefffffffffffff;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Geometry::TSparseListSet<int>::FListHandle,int> @ 1435d3fe0

void __cdecl
DefaultConstructItems<UE::Geometry::TSparseListSet<int>::FListHandle,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DefaultConstructItems<UE::Geometry::FUVSpaceAllocator::FRun,int> @ 1435d4000

void __cdecl
DefaultConstructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l2::FThreadContext,int> @ 1435d4030

void __cdecl
DefaultConstructItems<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l2::FThreadContext,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      lVar1 = lVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::InternalUVPacking::FUVIsland,int> @ 1435d4070

void __cdecl DefaultConstructItems<UE::InternalUVPacking::FUVIsland,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGeometrySet3::FCurve,int> @ 1435d40a0

void __cdecl DestructItems<UE::Geometry::FGeometrySet3::FCurve,int>(FCurve *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TPolyline<double,3> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Geometry;
    do {
      pFVar1 = (pTVar2->Vertices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TPolyline<double,3> *)((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGeometryError,int> @ 1435d40e0

void __cdecl DestructItems<UE::Geometry::FGeometryError,int>(FGeometryError *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Message;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                ((FDateTime *)(pFVar3 + 1) + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pIVar2 = (pFVar3->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pFVar3 = pFVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FGeometryWarning,int> @ 1435d4130

void __cdecl
DestructItems<UE::Geometry::FGeometryWarning,int>(FGeometryWarning *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Message;
    do {
      pFVar1 = (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                ((FDateTime *)(pFVar3 + 1) + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pIVar2 = (pFVar3->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pFVar3 = pFVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int> @ 1435d4180

void __cdecl DestructItems<UE::Geometry::FUVSpaceAllocator::FRun,int>(FRun *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Geometry::FUVSpaceAllocator::FSegment,TSizedDefaultAllocator<32>_> *pTVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar2 = &param_1->Segments;
    pFVar1 = (((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->
             AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FRun *)(pTVar2 + 2);
  }
  return;
}

// DestructItems<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l2::FThreadContext,int> @ 1435d41d0

void __cdecl
DestructItems<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l2::FThreadContext,int>
          (FThreadContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(param_1->Result).field_0x8);
    DestructItems<UE::InternalUVPacking::FUVIsland,int>
              ((FUVIsland *)(param_1->Charts).AllocatorInstance.Data,(param_1->Charts).ArrayNum);
    pFVar1 = (param_1->Charts).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::InternalUVPacking::FUVIsland,int> @ 1435d4220

void __cdecl DestructItems<UE::InternalUVPacking::FUVIsland,int>(FUVIsland *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Triangles).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FUVIsland *)(&param_1->Triangles + 0xb);
  }
  return;
}

// DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int> @ 1435d4260

void __cdecl
DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1,int param_2
          )

{
  ForElementType<int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::FParentChildCell,TSizedDefaultAllocator<32>_>,int> @ 1435d42a0

void __cdecl
DestructItems<TArray<_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet_::__l2::FParentChildCell,TSizedDefaultAllocator<32>_>,int>
          (TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::Geometry::TSparseListSet<int>::FChunk,TDefaultDelete<UE::Geometry::TSparseListSet<int>::FChunk>_>,int> @ 1435d42e0

void __cdecl
DestructItems<TUniquePtr<UE::Geometry::TSparseListSet<int>::FChunk,TDefaultDelete<UE::Geometry::TSparseListSet<int>::FChunk>_>,int>
          (TUniquePtr<UE::Geometry::TSparseListSet<int>::FChunk,TDefaultDelete<UE::Geometry::TSparseListSet<int>::FChunk>_>
           *param_1,int param_2)

{
  FChunk *pFVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FChunk *)0x0) {
      pFVar2 = (pFVar1->ElementBuffer).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      operator_delete(pFVar1,0x18);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::Geometry::TDynamicVector<int,512>,TDefaultDelete<UE::Geometry::TDynamicVector<int,512>_>_>,int> @ 1435d4340

void __cdecl
DestructItems<TUniquePtr<UE::Geometry::TDynamicVector<int,512>,TDefaultDelete<UE::Geometry::TDynamicVector<int,512>_>_>,int>
          (TUniquePtr<UE::Geometry::TDynamicVector<int,512>,TDefaultDelete<UE::Geometry::TDynamicVector<int,512>_>_>
           *param_1,int param_2)

{
  TDynamicVector<int,512> *this;
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (TDynamicVector<int,512> *)0x0) {
      UE::Geometry::TDynamicVector<int,512>::Empty(this,0);
      pFVar1 = (this->Blocks).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      operator_delete(this,0x18);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enumerate<`UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery'::__l4::<lambda_1>_> @ 1435d4fd0

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery_::__l4::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  uint uVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [4];
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 != 0xffffffff) {
    uVar8 = uVar1 + 1;
    uVar10 = (ulonglong)uVar8;
    iVar7 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (iVar7 < 8) {
      uVar9 = uVar8;
      while ((int)uVar9 <= (int)(uVar1 + iVar7)) {
        pTVar2 = param_2->ObjectIDs;
        local_38[0] = *(undefined4 *)
                       (*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)pTVar2->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar2->ArrayNum;
        if (iVar6 == pTVar2->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar6 + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
      }
    }
    else {
      uVar9 = uVar8;
      while ((int)uVar9 <= (int)(uVar1 + 8)) {
        pTVar2 = param_2->ObjectIDs;
        local_30[0] = *(undefined4 *)
                       (*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_30) &&
            ((FScriptContainerElement *)local_30 < pFVar3 + (longlong)pTVar2->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar2->ArrayNum;
        if (iVar7 == pTVar2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar7 + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_30[0];
      }
      for (uVar1 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar1 + 9 >> 9) * 8) + (ulonglong)(uVar1 + 9 & 0x1ff) * 4)
          ; uVar1 != 0xffffffff;
          uVar1 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4))
      {
        pTVar2 = param_2->ObjectIDs;
        local_28[0] = *(undefined4 *)
                       (*(longlong *)
                         ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)pTVar2->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar2->ArrayNum;
        if (iVar7 == pTVar2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar7 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FSparseDynamicOctree3::RangeQuery'::__l8::<lambda_1>_> @ 1435d5330

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FSparseDynamicOctree3::RangeQuery_::__l8::<lambda_1>_>
          (FSmallListSet *this,int param_1,<lambda_1> *param_2)

{
  uint uVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [4];
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 != 0xffffffff) {
    uVar8 = uVar1 + 1;
    uVar10 = (ulonglong)uVar8;
    iVar7 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (iVar7 < 8) {
      uVar9 = uVar8;
      while ((int)uVar9 <= (int)(uVar1 + iVar7)) {
        pTVar2 = param_2->ObjectIDs;
        local_38[0] = *(undefined4 *)
                       (*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)pTVar2->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = pTVar2->ArrayNum;
        if (iVar6 == pTVar2->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar6 + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
      }
    }
    else {
      uVar9 = uVar8;
      while ((int)uVar9 <= (int)(uVar1 + 8)) {
        pTVar2 = param_2->ObjectIDs;
        local_30[0] = *(undefined4 *)
                       (*(longlong *)
                         ((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_30) &&
            ((FScriptContainerElement *)local_30 < pFVar3 + (longlong)pTVar2->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar2->ArrayNum;
        if (iVar7 == pTVar2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar7 + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_30[0];
      }
      for (uVar1 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar1 + 9 >> 9) * 8) + (ulonglong)(uVar1 + 9 & 0x1ff) * 4)
          ; uVar1 != 0xffffffff;
          uVar1 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4))
      {
        pTVar2 = param_2->ObjectIDs;
        local_28[0] = *(undefined4 *)
                       (*(longlong *)
                         ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)pTVar2->ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = pTVar2->ArrayNum;
        if (iVar7 == pTVar2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
        }
        pTVar2->ArrayNum = iVar7 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
      }
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FSparseDynamicPointOctree3::RangeQuery'::__l7::<lambda_2>_> @ 1435d5690

void __thiscall
UE::Geometry::TSparseListSet<int>::
Enumerate<_UE::Geometry::FSparseDynamicPointOctree3::RangeQuery_::__l7::<lambda_2>_>
          (TSparseListSet<int> *this,int param_1,<lambda_2> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  TSparseListSet<int> *pTVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 local_res10 [2];
  undefined4 local_48 [4];
  
  lVar15 = *(longlong *)
            ((this->Lists).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x60;
  if (*(longlong *)(lVar15 + 0x50) != 0) {
    iVar2 = *(int *)(lVar15 + 0x48);
    uVar12 = 0;
    if (0 < iVar2) {
      lVar14 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < *(int *)(lVar15 + 0x48)) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = lVar15;
        if (*(longlong *)(lVar15 + 0x40) != 0) {
          lVar11 = *(longlong *)(lVar15 + 0x40);
        }
        puVar13 = *(undefined4 **)(lVar11 + lVar14 * 8);
        pTVar10 = (TSparseListSet<int> *)(lVar15 + 0x58);
        if (uVar12 != iVar2 - 1U) {
          pTVar10 = this;
        }
        puVar1 = puVar13 + pTVar10->BlockSize;
        while (puVar13 != puVar1) {
          local_res10[0] = *puVar13;
          puVar13 = puVar13 + 1;
          local_48[0] = local_res10[0];
          cVar7 = (**(code **)param_2->PredicateFunc)
                            (*(undefined8 *)&param_2->PredicateFunc->field_0x8,local_res10);
          if (cVar7 != '\0') {
            pTVar3 = param_2->PointIDs;
            pFVar4 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
                ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)pTVar3->ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = pTVar3->ArrayNum;
            if (iVar9 == pTVar3->ArrayMax) {
              iVar9 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
            }
            pTVar3->ArrayNum = iVar9 + 1;
            *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_48[0];
          }
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar2);
    }
  }
  return;
}

// Enumerate<``UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>::operator()'::__l10::<lambda_2>_> @ 1435d58c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TSparseListSet<int>::
Enumerate<__UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints_::__l2::<lambda_1>::operator()_::__l10::<lambda_2>_>
          (TSparseListSet<int> *this,int param_1,<lambda_2> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar4;
  <lambda_1> *p<Var5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TSparseListSet<int> *pTVar10;
  longlong lVar11;
  TTuple<int,double> *pTVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *puVar15;
  double dVar16;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  longlong local_a0;
  undefined1 local_88 [16];
  TTuple<int,double> local_78;
  undefined1 local_68 [48];
  
  lVar13 = *(longlong *)
            ((this->Lists).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x60;
  if (*(longlong *)(lVar13 + 0x50) != 0) {
    iVar2 = *(int *)(lVar13 + 0x48);
    uVar14 = 0;
    if (0 < iVar2) {
      local_a0 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar14 < *(int *)(lVar13 + 0x48)) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar11 = lVar13;
        if (*(longlong *)(lVar13 + 0x40) != 0) {
          lVar11 = *(longlong *)(lVar13 + 0x40);
        }
        puVar15 = *(undefined4 **)(lVar11 + local_a0 * 8);
        pTVar10 = (TSparseListSet<int> *)(lVar13 + 0x58);
        if (uVar14 != iVar2 - 1U) {
          pTVar10 = this;
        }
        puVar1 = puVar15 + pTVar10->BlockSize;
        while (puVar15 != puVar1) {
          uVar3 = *puVar15;
          puVar15 = puVar15 + 1;
          local_res10[0] = uVar3;
          cVar8 = (**(code **)param_2->PredicateFunc)
                            (*(undefined8 *)&param_2->PredicateFunc->field_0x8,local_res10);
          if ((cVar8 != '\0') &&
             (local_res20[0] = uVar3,
             dVar16 = (double)(**(code **)param_2->DistSqFunc)
                                        (*(undefined8 *)&param_2->DistSqFunc->field_0x8,local_res20)
             , dVar16 < *param_2->CurThresholdSq)) {
            this_00 = param_2->FoundPoints;
            piVar4 = param_2->NumToFind;
            p<Var5 = param_2->HeapPredicate;
            if (this_00->ArrayNum < *piVar4) {
              pTVar12 = (TTuple<int,double> *)local_88;
              local_88._0_4_ = uVar3;
              local_88._8_8_ = dVar16;
            }
            else {
              local_78._8_8_ = 0;
              local_78._0_4_ = 0;
              TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_>::
              HeapPop<__UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                        (this_00,&local_78,p<Var5,No);
              pTVar12 = (TTuple<int,double> *)local_68;
              local_68._0_4_ = uVar3;
              local_68._8_8_ = dVar16;
            }
            TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_>::
            HeapPush<__UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                      (this_00,pTVar12,p<Var5);
            if (this_00->ArrayNum == *piVar4) {
              if ((this_00->ArrayNum < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *param_2->CurThresholdSq = *(double *)((this_00->AllocatorInstance).Data + 8);
            }
          }
        }
        local_a0 = local_a0 + 1;
        uVar14 = uVar14 + 1;
      } while (local_a0 < iVar2);
    }
  }
  return;
}

// Enumerate<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l13::<lambda_4>_> @ 1435d5b60

void __thiscall
UE::Geometry::FSmallListSet::
Enumerate<_UE::Geometry::FSparseDynamicOctree3::CheckValidity_::__l13::<lambda_4>_>
          (FSmallListSet *this,int param_1,<lambda_4> *param_2)

{
  uint uVar1;
  int iVar2;
  TFunction<void___cdecl(bool)> *pTVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 local_res10 [2];
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->ListHeads).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (uVar1 != 0xffffffff) {
    uVar8 = uVar1 + 1;
    uVar10 = (ulonglong)uVar8;
    iVar2 = *(int *)(*(longlong *)
                      ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (iVar2 < 8) {
      uVar9 = uVar8;
      while ((int)uVar9 <= (int)(iVar2 + uVar1)) {
        pTVar3 = param_2->CheckOrFailF;
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
              (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar5 = (**(code **)param_2->IsValidObjectIDFunc)
                          (*(undefined8 *)&param_2->IsValidObjectIDFunc->field_0x8,local_res10);
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar5);
        Core::Private::Function::CheckCallable(*(void **)pTVar3);
        pcVar4 = *(code **)pTVar3;
        plVar7 = *(longlong **)&pTVar3->field_0x28;
        if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&pTVar3->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar4)(uVar6,local_res10);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
      }
    }
    else {
      uVar9 = uVar8;
      while ((int)uVar9 <= (int)(uVar1 + 8)) {
        pTVar3 = param_2->CheckOrFailF;
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)((this->ListBlocks).Blocks.AllocatorInstance.Data + (uVar10 >> 9) * 8) +
              (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar5 = (**(code **)param_2->IsValidObjectIDFunc)
                          (*(undefined8 *)&param_2->IsValidObjectIDFunc->field_0x8,local_res10);
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar5);
        Core::Private::Function::CheckCallable(*(void **)pTVar3);
        pcVar4 = *(code **)pTVar3;
        plVar7 = *(longlong **)&pTVar3->field_0x28;
        if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&pTVar3->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar4)(uVar6,local_res10);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar8 = uVar8 + 1;
      }
      for (uVar1 = *(uint *)(*(longlong *)
                              ((this->ListBlocks).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar1 + 9 >> 9) * 8) + (ulonglong)(uVar1 + 9 & 0x1ff) * 4)
          ; uVar1 != 0xffffffff;
          uVar1 = *(uint *)(*(longlong *)
                             ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4))
      {
        pTVar3 = param_2->CheckOrFailF;
        local_res10[0] =
             *(undefined4 *)
              (*(longlong *)
                ((this->LinkedListElements).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        uVar5 = (**(code **)param_2->IsValidObjectIDFunc)
                          (*(undefined8 *)&param_2->IsValidObjectIDFunc->field_0x8,local_res10);
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar5);
        Core::Private::Function::CheckCallable(*(void **)pTVar3);
        pcVar4 = *(code **)pTVar3;
        plVar7 = *(longlong **)&pTVar3->field_0x28;
        if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
          plVar7 = (longlong *)&pTVar3->field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar4)(uVar6,local_res10);
      }
    }
  }
  return;
}

// HeapPop<``UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 1435d5ea0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_>::
HeapPop<__UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_> *this,TTuple<int,double> *param_1,
          <lambda_1> *param_2,EAllowShrinking param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  uVar4 = *(undefined8 *)(pFVar1 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)pFVar1;
  *(undefined8 *)&param_1->field_0x8 = uVar4;
  if ((this->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar12 = this->ArrayNum + -1;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar1,pFVar1 + (longlong)(this->ArrayNum - iVar12) * 0x10,(longlong)iVar12 << 4);
  }
  iVar12 = this->ArrayNum + -1;
  this->ArrayNum = iVar12;
  if (param_3 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar12,&this->ArrayMax);
  }
  iVar12 = this->ArrayNum;
  pFVar1 = (this->AllocatorInstance).Data;
  if (1 < iVar12) {
    do {
      iVar3 = iVar11 * 2;
      iVar10 = iVar3 + 1;
      if (iVar3 + 2 < iVar12) {
        if (*(double *)(pFVar1 + (longlong)iVar3 * 0x10 + 0x28) <=
            *(double *)(pFVar1 + (longlong)iVar10 * 0x10 + 8) &&
            *(double *)(pFVar1 + (longlong)iVar10 * 0x10 + 8) !=
            *(double *)(pFVar1 + (longlong)iVar3 * 0x10 + 0x28)) {
          iVar10 = iVar3;
        }
        iVar10 = iVar10 + 1;
      }
      lVar9 = (longlong)iVar11;
      lVar8 = (longlong)iVar10;
      if (*(double *)(pFVar1 + lVar8 * 0x10 + 8) <= *(double *)(pFVar1 + lVar9 * 0x10 + 8)) {
        return;
      }
      uVar4 = *(undefined8 *)(pFVar1 + lVar8 * 0x10 + 8);
      uVar5 = *(undefined8 *)(pFVar1 + lVar9 * 0x10);
      uVar6 = *(undefined8 *)(pFVar1 + lVar9 * 0x10 + 8);
      *(undefined8 *)(pFVar1 + lVar9 * 0x10) = *(undefined8 *)(pFVar1 + lVar8 * 0x10);
      *(undefined8 *)(pFVar1 + lVar9 * 0x10 + 8) = uVar4;
      *(undefined8 *)(pFVar1 + lVar8 * 0x10) = uVar5;
      *(undefined8 *)(pFVar1 + lVar8 * 0x10 + 8) = uVar6;
      iVar11 = iVar10;
    } while (iVar10 * 2 + 1 < iVar12);
  }
  return;
}

// HeapPush<``UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 1435d6040

int __thiscall
TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_>::
HeapPush<__UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_> *this,TTuple<int,double> *param_1,
          <lambda_1> *param_2)

{
  FScriptContainerElement *pFVar1;
  TTuple<int,double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  pTVar2 = (TTuple<int,double> *)(this->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + this->ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
  }
  iVar8 = this->ArrayNum;
  if (iVar8 == this->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar8 + 1;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar1 + 8) = uVar4;
  pFVar1 = (this->AllocatorInstance).Data;
  iVar8 = this->ArrayNum + -1;
  if (0 < iVar8) {
    while( true ) {
      lVar10 = (longlong)iVar8;
      iVar9 = (iVar8 + -1) / 2;
      lVar11 = (longlong)iVar9;
      if (*(double *)(pFVar1 + lVar10 * 0x10 + 8) <= *(double *)(pFVar1 + lVar11 * 0x10 + 8)) break;
      uVar4 = *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8);
      uVar5 = *(undefined8 *)(pFVar1 + lVar10 * 0x10);
      uVar6 = *(undefined8 *)(pFVar1 + lVar10 * 0x10 + 8);
      *(undefined8 *)(pFVar1 + lVar10 * 0x10) = *(undefined8 *)(pFVar1 + lVar11 * 0x10);
      *(undefined8 *)(pFVar1 + lVar10 * 0x10 + 8) = uVar4;
      *(undefined8 *)(pFVar1 + lVar11 * 0x10) = uVar5;
      *(undefined8 *)(pFVar1 + lVar11 * 0x10 + 8) = uVar6;
      iVar8 = iVar9;
      if (iVar9 < 1) {
        return iVar9;
      }
    }
  }
  return iVar8;
}

// HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<`UE::InternalUVPacking::FStandardChartPacker::ScaleCharts'::__l2::FCompareCharts>_> @ 1435d6150

void __cdecl
AlgoImpl::
HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::FCompareCharts>_>
          (FUVIsland *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<_protected:_void___cdecl_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&,double)_::_2_::FCompareCharts>
          *param_5)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  FUVIsland *pFVar31;
  FUVIsland *pFVar32;
  int iVar33;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar33 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      lVar30 = (longlong)iVar2 + 2;
      if ((param_1[iVar33].MaxUV.field0_0x0._s_0.Y - param_1[iVar33].MinUV.field0_0x0._s_0.Y) *
          param_1[iVar33].UVScale.field0_0x0._s_0.Y *
          (param_1[iVar33].MaxUV.field0_0x0._s_0.X - param_1[iVar33].MinUV.field0_0x0._s_0.X) *
          param_1[iVar33].UVScale.field0_0x0._s_0.X <
          (param_1[lVar30].MaxUV.field0_0x0._s_0.Y - param_1[lVar30].MinUV.field0_0x0._s_0.Y) *
          param_1[lVar30].UVScale.field0_0x0._s_0.Y *
          (param_1[lVar30].MaxUV.field0_0x0._s_0.X - param_1[lVar30].MinUV.field0_0x0._s_0.X) *
          param_1[lVar30].UVScale.field0_0x0._s_0.X) {
        iVar33 = iVar2;
      }
      iVar33 = iVar33 + 1;
    }
    pFVar32 = param_1 + param_2;
    pFVar31 = param_1 + iVar33;
    if (((pFVar32->MaxUV).field0_0x0._s_0.Y - (pFVar32->MinUV).field0_0x0._s_0.Y) *
        (pFVar32->UVScale).field0_0x0._s_0.Y *
        ((pFVar32->MaxUV).field0_0x0._s_0.X - (pFVar32->MinUV).field0_0x0._s_0.X) *
        (pFVar32->UVScale).field0_0x0._s_0.X <=
        ((pFVar31->MaxUV).field0_0x0._s_0.Y - (pFVar31->MinUV).field0_0x0._s_0.Y) *
        (pFVar31->UVScale).field0_0x0._s_0.Y *
        ((pFVar31->MaxUV).field0_0x0._s_0.X - (pFVar31->MinUV).field0_0x0._s_0.X) *
        (pFVar31->UVScale).field0_0x0._s_0.X) break;
    iVar26 = pFVar32->Id;
    uVar27 = *(undefined4 *)&pFVar32->field_0x4;
    pFVar3 = (pFVar32->Triangles).AllocatorInstance.Data;
    dVar1 = (pFVar32->PackingBias).field0_0x0._s_0.Y;
    iVar28 = (pFVar32->Triangles).ArrayNum;
    iVar29 = (pFVar32->Triangles).ArrayMax;
    dVar4 = (pFVar32->MinUV).field0_0x0._s_0.X;
    dVar5 = (pFVar32->MinUV).field0_0x0._s_0.Y;
    dVar6 = (pFVar32->MaxUV).field0_0x0._s_0.X;
    dVar7 = (pFVar32->MaxUV).field0_0x0._s_0.Y;
    dVar8 = pFVar32->UVArea;
    dVar9 = pFVar32->ScaleToWorld;
    dVar10 = (pFVar32->UVScale).field0_0x0._s_0.X;
    dVar11 = (pFVar32->UVScale).field0_0x0._s_0.Y;
    dVar12 = (pFVar32->UVRotation).Row0.field0_0x0._s_0.X;
    dVar13 = (pFVar32->UVRotation).Row0.field0_0x0._s_0.Y;
    dVar14 = (pFVar32->UVRotation).Row1.field0_0x0._s_0.X;
    dVar15 = (pFVar32->UVRotation).Row1.field0_0x0._s_0.Y;
    dVar16 = (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.X;
    dVar17 = (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.Y;
    dVar18 = (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.X;
    dVar19 = (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.Y;
    dVar20 = (pFVar32->OrientationBiasShift).field0_0x0._s_0.X;
    dVar21 = (pFVar32->OrientationBiasShift).field0_0x0._s_0.Y;
    dVar22 = (pFVar32->PackingBias).field0_0x0._s_0.X;
    uVar25 = *(undefined4 *)&pFVar31->field_0x4;
    pFVar23 = (pFVar31->Triangles).AllocatorInstance.Data;
    pFVar32->Id = pFVar31->Id;
    *(undefined4 *)&pFVar32->field_0x4 = uVar25;
    (pFVar32->Triangles).AllocatorInstance.Data = pFVar23;
    iVar2 = (pFVar31->Triangles).ArrayMax;
    dVar24 = (pFVar31->MinUV).field0_0x0._s_0.X;
    (pFVar32->Triangles).ArrayNum = (pFVar31->Triangles).ArrayNum;
    (pFVar32->Triangles).ArrayMax = iVar2;
    (pFVar32->MinUV).field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->MaxUV).field0_0x0._s_0.X;
    (pFVar32->MinUV).field0_0x0._s_0.Y = (pFVar31->MinUV).field0_0x0._s_0.Y;
    (pFVar32->MaxUV).field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar31->UVArea;
    (pFVar32->MaxUV).field0_0x0._s_0.Y = (pFVar31->MaxUV).field0_0x0._s_0.Y;
    pFVar32->UVArea = dVar24;
    dVar24 = (pFVar31->UVScale).field0_0x0._s_0.X;
    pFVar32->ScaleToWorld = pFVar31->ScaleToWorld;
    (pFVar32->UVScale).field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVRotation).Row0.field0_0x0._s_0.X;
    (pFVar32->UVScale).field0_0x0._s_0.Y = (pFVar31->UVScale).field0_0x0._s_0.Y;
    (pFVar32->UVRotation).Row0.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVRotation).Row1.field0_0x0._s_0.X;
    (pFVar32->UVRotation).Row0.field0_0x0._s_0.Y = (pFVar31->UVRotation).Row0.field0_0x0._s_0.Y;
    (pFVar32->UVRotation).Row1.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.X;
    (pFVar32->UVRotation).Row1.field0_0x0._s_0.Y = (pFVar31->UVRotation).Row1.field0_0x0._s_0.Y;
    (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.X;
    (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.Y =
         (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.Y;
    (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->OrientationBiasShift).field0_0x0._s_0.X;
    (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.Y =
         (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.Y;
    (pFVar32->OrientationBiasShift).field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->PackingBias).field0_0x0._s_0.X;
    (pFVar32->OrientationBiasShift).field0_0x0._s_0.Y =
         (pFVar31->OrientationBiasShift).field0_0x0._s_0.Y;
    (pFVar32->PackingBias).field0_0x0._s_0.X = dVar24;
    (pFVar32->PackingBias).field0_0x0._s_0.Y = (pFVar31->PackingBias).field0_0x0._s_0.Y;
    pFVar31->Id = iVar26;
    *(undefined4 *)&pFVar31->field_0x4 = uVar27;
    (pFVar31->Triangles).AllocatorInstance.Data = pFVar3;
    (pFVar31->Triangles).ArrayNum = iVar28;
    (pFVar31->Triangles).ArrayMax = iVar29;
    (pFVar31->MinUV).field0_0x0._s_0.X = dVar4;
    (pFVar31->MinUV).field0_0x0._s_0.Y = dVar5;
    (pFVar31->MaxUV).field0_0x0._s_0.X = dVar6;
    (pFVar31->MaxUV).field0_0x0._s_0.Y = dVar7;
    pFVar31->UVArea = dVar8;
    pFVar31->ScaleToWorld = dVar9;
    (pFVar31->UVScale).field0_0x0._s_0.X = dVar10;
    (pFVar31->UVScale).field0_0x0._s_0.Y = dVar11;
    (pFVar31->UVRotation).Row0.field0_0x0._s_0.X = dVar12;
    (pFVar31->UVRotation).Row0.field0_0x0._s_0.Y = dVar13;
    (pFVar31->UVRotation).Row1.field0_0x0._s_0.X = dVar14;
    (pFVar31->UVRotation).Row1.field0_0x0._s_0.Y = dVar15;
    (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.X = dVar16;
    (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.Y = dVar17;
    (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.X = dVar18;
    (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar19;
    (pFVar31->OrientationBiasShift).field0_0x0._s_0.X = dVar20;
    (pFVar31->OrientationBiasShift).field0_0x0._s_0.Y = dVar21;
    (pFVar31->PackingBias).field0_0x0._s_0.X = dVar22;
    (pFVar31->PackingBias).field0_0x0._s_0.Y = dVar1;
    param_2 = iVar33;
  }
  return;
}

// HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<`UE::InternalUVPacking::FStandardChartPacker::ScaleCharts'::__l2::<lambda_1>_>_> @ 1435d6430

void __cdecl
AlgoImpl::
HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>_>
          (FUVIsland *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<_protected:_void___cdecl_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&,double)_::_2_::<lambda_1>_>
          *param_5)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  FUVIsland *pFVar31;
  FUVIsland *pFVar32;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar2 = param_2 * 2;
    iVar30 = iVar2 + 1;
    if (iVar2 + 2 < param_3) {
      if (param_1[(longlong)iVar2 + 2].Id < param_1[iVar30].Id) {
        iVar30 = iVar2;
      }
      iVar30 = iVar30 + 1;
    }
    pFVar31 = param_1 + iVar30;
    pFVar32 = param_1 + param_2;
    if (pFVar31->Id <= pFVar32->Id) break;
    iVar26 = pFVar32->Id;
    uVar27 = *(undefined4 *)&pFVar32->field_0x4;
    pFVar3 = (pFVar32->Triangles).AllocatorInstance.Data;
    dVar1 = (pFVar32->PackingBias).field0_0x0._s_0.Y;
    iVar28 = (pFVar32->Triangles).ArrayNum;
    iVar29 = (pFVar32->Triangles).ArrayMax;
    dVar4 = (pFVar32->MinUV).field0_0x0._s_0.X;
    dVar5 = (pFVar32->MinUV).field0_0x0._s_0.Y;
    dVar6 = (pFVar32->MaxUV).field0_0x0._s_0.X;
    dVar7 = (pFVar32->MaxUV).field0_0x0._s_0.Y;
    dVar8 = pFVar32->UVArea;
    dVar9 = pFVar32->ScaleToWorld;
    dVar10 = (pFVar32->UVScale).field0_0x0._s_0.X;
    dVar11 = (pFVar32->UVScale).field0_0x0._s_0.Y;
    dVar12 = (pFVar32->UVRotation).Row0.field0_0x0._s_0.X;
    dVar13 = (pFVar32->UVRotation).Row0.field0_0x0._s_0.Y;
    dVar14 = (pFVar32->UVRotation).Row1.field0_0x0._s_0.X;
    dVar15 = (pFVar32->UVRotation).Row1.field0_0x0._s_0.Y;
    dVar16 = (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.X;
    dVar17 = (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.Y;
    dVar18 = (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.X;
    dVar19 = (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.Y;
    dVar20 = (pFVar32->OrientationBiasShift).field0_0x0._s_0.X;
    dVar21 = (pFVar32->OrientationBiasShift).field0_0x0._s_0.Y;
    dVar22 = (pFVar32->PackingBias).field0_0x0._s_0.X;
    uVar25 = *(undefined4 *)&pFVar31->field_0x4;
    pFVar23 = (pFVar31->Triangles).AllocatorInstance.Data;
    pFVar32->Id = pFVar31->Id;
    *(undefined4 *)&pFVar32->field_0x4 = uVar25;
    (pFVar32->Triangles).AllocatorInstance.Data = pFVar23;
    iVar2 = (pFVar31->Triangles).ArrayMax;
    dVar24 = (pFVar31->MinUV).field0_0x0._s_0.X;
    (pFVar32->Triangles).ArrayNum = (pFVar31->Triangles).ArrayNum;
    (pFVar32->Triangles).ArrayMax = iVar2;
    (pFVar32->MinUV).field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->MaxUV).field0_0x0._s_0.X;
    (pFVar32->MinUV).field0_0x0._s_0.Y = (pFVar31->MinUV).field0_0x0._s_0.Y;
    (pFVar32->MaxUV).field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar31->UVArea;
    (pFVar32->MaxUV).field0_0x0._s_0.Y = (pFVar31->MaxUV).field0_0x0._s_0.Y;
    pFVar32->UVArea = dVar24;
    dVar24 = (pFVar31->UVScale).field0_0x0._s_0.X;
    pFVar32->ScaleToWorld = pFVar31->ScaleToWorld;
    (pFVar32->UVScale).field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVRotation).Row0.field0_0x0._s_0.X;
    (pFVar32->UVScale).field0_0x0._s_0.Y = (pFVar31->UVScale).field0_0x0._s_0.Y;
    (pFVar32->UVRotation).Row0.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVRotation).Row1.field0_0x0._s_0.X;
    (pFVar32->UVRotation).Row0.field0_0x0._s_0.Y = (pFVar31->UVRotation).Row0.field0_0x0._s_0.Y;
    (pFVar32->UVRotation).Row1.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.X;
    (pFVar32->UVRotation).Row1.field0_0x0._s_0.Y = (pFVar31->UVRotation).Row1.field0_0x0._s_0.Y;
    (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.X;
    (pFVar32->UVPackingScale).Row0.field0_0x0._s_0.Y =
         (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.Y;
    (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->OrientationBiasShift).field0_0x0._s_0.X;
    (pFVar32->UVPackingScale).Row1.field0_0x0._s_0.Y =
         (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.Y;
    (pFVar32->OrientationBiasShift).field0_0x0._s_0.X = dVar24;
    dVar24 = (pFVar31->PackingBias).field0_0x0._s_0.X;
    (pFVar32->OrientationBiasShift).field0_0x0._s_0.Y =
         (pFVar31->OrientationBiasShift).field0_0x0._s_0.Y;
    (pFVar32->PackingBias).field0_0x0._s_0.X = dVar24;
    (pFVar32->PackingBias).field0_0x0._s_0.Y = (pFVar31->PackingBias).field0_0x0._s_0.Y;
    pFVar31->Id = iVar26;
    *(undefined4 *)&pFVar31->field_0x4 = uVar27;
    (pFVar31->Triangles).AllocatorInstance.Data = pFVar3;
    (pFVar31->Triangles).ArrayNum = iVar28;
    (pFVar31->Triangles).ArrayMax = iVar29;
    (pFVar31->MinUV).field0_0x0._s_0.X = dVar4;
    (pFVar31->MinUV).field0_0x0._s_0.Y = dVar5;
    (pFVar31->MaxUV).field0_0x0._s_0.X = dVar6;
    (pFVar31->MaxUV).field0_0x0._s_0.Y = dVar7;
    pFVar31->UVArea = dVar8;
    pFVar31->ScaleToWorld = dVar9;
    (pFVar31->UVScale).field0_0x0._s_0.X = dVar10;
    (pFVar31->UVScale).field0_0x0._s_0.Y = dVar11;
    (pFVar31->UVRotation).Row0.field0_0x0._s_0.X = dVar12;
    (pFVar31->UVRotation).Row0.field0_0x0._s_0.Y = dVar13;
    (pFVar31->UVRotation).Row1.field0_0x0._s_0.X = dVar14;
    (pFVar31->UVRotation).Row1.field0_0x0._s_0.Y = dVar15;
    (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.X = dVar16;
    (pFVar31->UVPackingScale).Row0.field0_0x0._s_0.Y = dVar17;
    (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.X = dVar18;
    (pFVar31->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar19;
    (pFVar31->OrientationBiasShift).field0_0x0._s_0.X = dVar20;
    (pFVar31->OrientationBiasShift).field0_0x0._s_0.Y = dVar21;
    (pFVar31->PackingBias).field0_0x0._s_0.X = dVar22;
    (pFVar31->PackingBias).field0_0x0._s_0.Y = dVar1;
    param_2 = iVar30;
  }
  return;
}

// HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>_>_> @ 1435d6680

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_1>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments(void)_::_2_::<lambda_1>_>
          param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1435d67a4:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            uVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = uVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::
                          operator()(param_4.Predicate,(uint)param_1[(longlong)iVar7 + 2],
                                     (uint)param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::
                        operator()(param_4.Predicate,(uint)param_1[iVar9],(uint)param_1[iVar4]);
                if (!bVar3) break;
                uVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = uVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,(uint)param_1[(longlong)iVar5 + 2],(uint)param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,(uint)param_1[iVar4],(uint)param_1[iVar6]);
    if (!bVar3) goto LAB_1435d67a4;
    uVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>_>_> @ 1435d68a0

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_2>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments(void)_::_2_::<lambda_2>_>
          param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_1435d69c4:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            uVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = uVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::
                          operator()(param_4.Predicate,(uint)param_1[(longlong)iVar7 + 2],
                                     (uint)param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::
                        operator()(param_4.Predicate,(uint)param_1[iVar9],(uint)param_1[iVar4]);
                if (!bVar3) break;
                uVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = uVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::operator()
                        (param_4.Predicate,(uint)param_1[(longlong)iVar5 + 2],(uint)param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::operator()
                      (param_4.Predicate,(uint)param_1[iVar4],(uint)param_1[iVar6]);
    if (!bVar3) goto LAB_1435d69c4;
    uVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = uVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_> @ 1435d6ac0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,DescendingPredicate<float> *param_4)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar9 = iVar6;
  iVar10 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_1435d6bf3:
      if (iVar10 == 0) {
        iVar6 = param_2 + -1;
        lVar11 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar9 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = iVar9;
            if (1 < iVar6) {
              do {
                iVar10 = iVar5 * 2;
                iVar9 = iVar10 + 1;
                if (iVar10 + 2 < iVar6) {
                  iVar8 = param_1[iVar9];
                  pfVar7 = TArrayView<float_const_,int>::operator[]
                                     (&param_4->CompValues,param_1[(longlong)iVar10 + 2]);
                  fVar1 = *pfVar7;
                  pfVar7 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar8);
                  if (*pfVar7 <= fVar1 && fVar1 != *pfVar7) {
                    iVar9 = iVar10;
                  }
                  iVar9 = iVar9 + 1;
                }
                iVar10 = param_1[iVar9];
                pfVar7 = TArrayView<float_const_,int>::operator[]
                                   (&param_4->CompValues,param_1[iVar5]);
                fVar1 = *pfVar7;
                pfVar7 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar10);
                if (fVar1 < *pfVar7 || fVar1 == *pfVar7) break;
                iVar10 = param_1[iVar5];
                param_1[iVar5] = param_1[iVar9];
                param_1[iVar9] = iVar10;
                iVar5 = iVar9;
              } while (iVar9 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar5 = iVar10 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar10 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      iVar2 = param_1[iVar8];
      pfVar7 = TArrayView<float_const_,int>::operator[]
                         (&param_4->CompValues,param_1[(longlong)iVar6 + 2]);
      fVar1 = *pfVar7;
      pfVar7 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar2);
      if (*pfVar7 <= fVar1 && fVar1 != *pfVar7) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar6 = param_1[iVar8];
    pfVar7 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,param_1[iVar5]);
    fVar1 = *pfVar7;
    pfVar7 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar6);
    if (fVar1 < *pfVar7 || fVar1 == *pfVar7) goto LAB_1435d6bf3;
    iVar2 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = iVar2;
    iVar5 = iVar8;
  } while( true );
}

// HeapSortInternal<UE::Geometry::FUVSpaceAllocator::FSegment,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_>_> @ 1435d6d10

void __cdecl
AlgoImpl::
HeapSortInternal<UE::Geometry::FUVSpaceAllocator::FSegment,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_>_>
          (FSegment *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_> param_4)

{
  FSegment *pFVar1;
  FSegment *pFVar2;
  FSegment FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1435d6df2:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].StartPos < param_1[iVar6].StartPos) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->StartPos <= pFVar2->StartPos) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].StartPos < param_1[iVar8].StartPos) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->StartPos <= pFVar2->StartPos) goto LAB_1435d6df2;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,`UE::InternalUVPacking::FStandardChartPacker::ScaleCharts'::__l2::<lambda_1>_> @ 1435d6ea0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>
          (FUVIsland *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  FScriptContainerElement *pFVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  FUVIsland *pFVar33;
  FUVIsland *pFVar34;
  int iVar35;
  FUVIsland *pFVar36;
  longlong lVar37;
  FIdentityFunctor local_res10 [8];
  <lambda_1> local_res20 [8];
  TReversePredicate<_protected:_void___cdecl_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&,double)_::_2_::<lambda_1>_>
  local_c8 [24];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar30) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  local_c8[0].Predicate = local_res20;
  local_res10[0] = param_3;
  if ((param_2 < 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                          ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar30)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar31 = (param_2 + -2) / 2;
  HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>_>
            (param_1,iVar31,param_2,local_res10,local_c8);
  while (iVar31 != 0) {
    iVar31 = iVar31 + -1;
    HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>_>
              (param_1,iVar31,param_2,local_res10,local_c8);
  }
  iVar31 = param_2 + -1;
  lVar37 = (longlong)iVar31;
  if (0 < iVar31) {
    pFVar33 = param_1 + lVar37;
    do {
      iVar32 = param_1->Id;
      uVar27 = *(undefined4 *)&param_1->field_0x4;
      pFVar4 = (param_1->Triangles).AllocatorInstance.Data;
      dVar1 = (param_1->PackingBias).field0_0x0._s_0.Y;
      iVar3 = (param_1->Triangles).ArrayNum;
      iVar28 = (param_1->Triangles).ArrayMax;
      dVar5 = (param_1->MinUV).field0_0x0._s_0.X;
      dVar6 = (param_1->MinUV).field0_0x0._s_0.Y;
      dVar7 = (param_1->MaxUV).field0_0x0._s_0.X;
      dVar8 = (param_1->MaxUV).field0_0x0._s_0.Y;
      dVar9 = param_1->UVArea;
      dVar10 = param_1->ScaleToWorld;
      dVar11 = (param_1->UVScale).field0_0x0._s_0.X;
      dVar12 = (param_1->UVScale).field0_0x0._s_0.Y;
      dVar13 = (param_1->UVRotation).Row0.field0_0x0._s_0.X;
      dVar14 = (param_1->UVRotation).Row0.field0_0x0._s_0.Y;
      dVar15 = (param_1->UVRotation).Row1.field0_0x0._s_0.X;
      dVar16 = (param_1->UVRotation).Row1.field0_0x0._s_0.Y;
      dVar17 = (param_1->UVPackingScale).Row0.field0_0x0._s_0.X;
      dVar18 = (param_1->UVPackingScale).Row0.field0_0x0._s_0.Y;
      dVar19 = (param_1->UVPackingScale).Row1.field0_0x0._s_0.X;
      dVar20 = (param_1->UVPackingScale).Row1.field0_0x0._s_0.Y;
      dVar21 = (param_1->OrientationBiasShift).field0_0x0._s_0.X;
      dVar22 = (param_1->OrientationBiasShift).field0_0x0._s_0.Y;
      dVar23 = (param_1->PackingBias).field0_0x0._s_0.X;
      uVar26 = *(undefined4 *)&pFVar33->field_0x4;
      pFVar24 = (pFVar33->Triangles).AllocatorInstance.Data;
      param_1->Id = pFVar33->Id;
      *(undefined4 *)&param_1->field_0x4 = uVar26;
      (param_1->Triangles).AllocatorInstance.Data = pFVar24;
      iVar35 = (pFVar33->Triangles).ArrayMax;
      dVar25 = (pFVar33->MinUV).field0_0x0._s_0.X;
      (param_1->Triangles).ArrayNum = (pFVar33->Triangles).ArrayNum;
      (param_1->Triangles).ArrayMax = iVar35;
      (param_1->MinUV).field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->MaxUV).field0_0x0._s_0.X;
      (param_1->MinUV).field0_0x0._s_0.Y = (pFVar33->MinUV).field0_0x0._s_0.Y;
      (param_1->MaxUV).field0_0x0._s_0.X = dVar25;
      dVar25 = pFVar33->UVArea;
      (param_1->MaxUV).field0_0x0._s_0.Y = (pFVar33->MaxUV).field0_0x0._s_0.Y;
      param_1->UVArea = dVar25;
      dVar25 = (pFVar33->UVScale).field0_0x0._s_0.X;
      param_1->ScaleToWorld = pFVar33->ScaleToWorld;
      (param_1->UVScale).field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->UVRotation).Row0.field0_0x0._s_0.X;
      (param_1->UVScale).field0_0x0._s_0.Y = (pFVar33->UVScale).field0_0x0._s_0.Y;
      (param_1->UVRotation).Row0.field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->UVRotation).Row1.field0_0x0._s_0.X;
      (param_1->UVRotation).Row0.field0_0x0._s_0.Y = (pFVar33->UVRotation).Row0.field0_0x0._s_0.Y;
      (param_1->UVRotation).Row1.field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.X;
      (param_1->UVRotation).Row1.field0_0x0._s_0.Y = (pFVar33->UVRotation).Row1.field0_0x0._s_0.Y;
      (param_1->UVPackingScale).Row0.field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.X;
      (param_1->UVPackingScale).Row0.field0_0x0._s_0.Y =
           (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.Y;
      (param_1->UVPackingScale).Row1.field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->OrientationBiasShift).field0_0x0._s_0.X;
      (param_1->UVPackingScale).Row1.field0_0x0._s_0.Y =
           (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.Y;
      (param_1->OrientationBiasShift).field0_0x0._s_0.X = dVar25;
      dVar25 = (pFVar33->PackingBias).field0_0x0._s_0.X;
      (param_1->OrientationBiasShift).field0_0x0._s_0.Y =
           (pFVar33->OrientationBiasShift).field0_0x0._s_0.Y;
      (param_1->PackingBias).field0_0x0._s_0.X = dVar25;
      (param_1->PackingBias).field0_0x0._s_0.Y = (pFVar33->PackingBias).field0_0x0._s_0.Y;
      pFVar33->Id = iVar32;
      *(undefined4 *)&pFVar33->field_0x4 = uVar27;
      (pFVar33->Triangles).AllocatorInstance.Data = pFVar4;
      (pFVar33->Triangles).ArrayNum = iVar3;
      (pFVar33->Triangles).ArrayMax = iVar28;
      (pFVar33->MinUV).field0_0x0._s_0.X = dVar5;
      (pFVar33->MinUV).field0_0x0._s_0.Y = dVar6;
      (pFVar33->MaxUV).field0_0x0._s_0.X = dVar7;
      (pFVar33->MaxUV).field0_0x0._s_0.Y = dVar8;
      pFVar33->UVArea = dVar9;
      pFVar33->ScaleToWorld = dVar10;
      (pFVar33->UVScale).field0_0x0._s_0.X = dVar11;
      (pFVar33->UVScale).field0_0x0._s_0.Y = dVar12;
      (pFVar33->UVRotation).Row0.field0_0x0._s_0.X = dVar13;
      (pFVar33->UVRotation).Row0.field0_0x0._s_0.Y = dVar14;
      (pFVar33->UVRotation).Row1.field0_0x0._s_0.X = dVar15;
      (pFVar33->UVRotation).Row1.field0_0x0._s_0.Y = dVar16;
      (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.X = dVar17;
      (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.Y = dVar18;
      (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.X = dVar19;
      (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar20;
      (pFVar33->OrientationBiasShift).field0_0x0._s_0.X = dVar21;
      (pFVar33->OrientationBiasShift).field0_0x0._s_0.Y = dVar22;
      (pFVar33->PackingBias).field0_0x0._s_0.X = dVar23;
      (pFVar33->PackingBias).field0_0x0._s_0.Y = dVar1;
      iVar35 = 0;
      if (1 < iVar31) {
        do {
          iVar3 = iVar35 * 2;
          iVar32 = iVar3 + 1;
          if (iVar3 + 2 < iVar31) {
            if (param_1[(longlong)iVar3 + 2].Id < param_1[iVar32].Id) {
              iVar32 = iVar3;
            }
            iVar32 = iVar32 + 1;
          }
          pFVar34 = param_1 + iVar32;
          pFVar36 = param_1 + iVar35;
          if (pFVar34->Id <= pFVar36->Id) break;
          iVar3 = pFVar36->Id;
          uVar27 = *(undefined4 *)&pFVar36->field_0x4;
          pFVar4 = (pFVar36->Triangles).AllocatorInstance.Data;
          dVar1 = (pFVar36->PackingBias).field0_0x0._s_0.Y;
          iVar28 = (pFVar36->Triangles).ArrayNum;
          iVar29 = (pFVar36->Triangles).ArrayMax;
          dVar5 = (pFVar36->MinUV).field0_0x0._s_0.X;
          dVar6 = (pFVar36->MinUV).field0_0x0._s_0.Y;
          dVar7 = (pFVar36->MaxUV).field0_0x0._s_0.X;
          dVar8 = (pFVar36->MaxUV).field0_0x0._s_0.Y;
          dVar9 = pFVar36->UVArea;
          dVar10 = pFVar36->ScaleToWorld;
          dVar11 = (pFVar36->UVScale).field0_0x0._s_0.X;
          dVar12 = (pFVar36->UVScale).field0_0x0._s_0.Y;
          dVar13 = (pFVar36->UVRotation).Row0.field0_0x0._s_0.X;
          dVar14 = (pFVar36->UVRotation).Row0.field0_0x0._s_0.Y;
          dVar15 = (pFVar36->UVRotation).Row1.field0_0x0._s_0.X;
          dVar16 = (pFVar36->UVRotation).Row1.field0_0x0._s_0.Y;
          dVar17 = (pFVar36->UVPackingScale).Row0.field0_0x0._s_0.X;
          dVar18 = (pFVar36->UVPackingScale).Row0.field0_0x0._s_0.Y;
          dVar19 = (pFVar36->UVPackingScale).Row1.field0_0x0._s_0.X;
          dVar20 = (pFVar36->UVPackingScale).Row1.field0_0x0._s_0.Y;
          dVar21 = (pFVar36->OrientationBiasShift).field0_0x0._s_0.X;
          dVar22 = (pFVar36->OrientationBiasShift).field0_0x0._s_0.Y;
          dVar23 = (pFVar36->PackingBias).field0_0x0._s_0.X;
          uVar26 = *(undefined4 *)&pFVar34->field_0x4;
          pFVar24 = (pFVar34->Triangles).AllocatorInstance.Data;
          pFVar36->Id = pFVar34->Id;
          *(undefined4 *)&pFVar36->field_0x4 = uVar26;
          (pFVar36->Triangles).AllocatorInstance.Data = pFVar24;
          iVar35 = (pFVar34->Triangles).ArrayMax;
          dVar25 = (pFVar34->MinUV).field0_0x0._s_0.X;
          (pFVar36->Triangles).ArrayNum = (pFVar34->Triangles).ArrayNum;
          (pFVar36->Triangles).ArrayMax = iVar35;
          (pFVar36->MinUV).field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->MaxUV).field0_0x0._s_0.X;
          (pFVar36->MinUV).field0_0x0._s_0.Y = (pFVar34->MinUV).field0_0x0._s_0.Y;
          (pFVar36->MaxUV).field0_0x0._s_0.X = dVar25;
          dVar25 = pFVar34->UVArea;
          (pFVar36->MaxUV).field0_0x0._s_0.Y = (pFVar34->MaxUV).field0_0x0._s_0.Y;
          pFVar36->UVArea = dVar25;
          dVar25 = (pFVar34->UVScale).field0_0x0._s_0.X;
          pFVar36->ScaleToWorld = pFVar34->ScaleToWorld;
          (pFVar36->UVScale).field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->UVRotation).Row0.field0_0x0._s_0.X;
          (pFVar36->UVScale).field0_0x0._s_0.Y = (pFVar34->UVScale).field0_0x0._s_0.Y;
          (pFVar36->UVRotation).Row0.field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->UVRotation).Row1.field0_0x0._s_0.X;
          (pFVar36->UVRotation).Row0.field0_0x0._s_0.Y =
               (pFVar34->UVRotation).Row0.field0_0x0._s_0.Y;
          (pFVar36->UVRotation).Row1.field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.X;
          (pFVar36->UVRotation).Row1.field0_0x0._s_0.Y =
               (pFVar34->UVRotation).Row1.field0_0x0._s_0.Y;
          (pFVar36->UVPackingScale).Row0.field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->UVPackingScale).Row1.field0_0x0._s_0.X;
          (pFVar36->UVPackingScale).Row0.field0_0x0._s_0.Y =
               (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.Y;
          (pFVar36->UVPackingScale).Row1.field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->OrientationBiasShift).field0_0x0._s_0.X;
          (pFVar36->UVPackingScale).Row1.field0_0x0._s_0.Y =
               (pFVar34->UVPackingScale).Row1.field0_0x0._s_0.Y;
          (pFVar36->OrientationBiasShift).field0_0x0._s_0.X = dVar25;
          dVar25 = (pFVar34->PackingBias).field0_0x0._s_0.X;
          (pFVar36->OrientationBiasShift).field0_0x0._s_0.Y =
               (pFVar34->OrientationBiasShift).field0_0x0._s_0.Y;
          (pFVar36->PackingBias).field0_0x0._s_0.X = dVar25;
          (pFVar36->PackingBias).field0_0x0._s_0.Y = (pFVar34->PackingBias).field0_0x0._s_0.Y;
          pFVar34->Id = iVar3;
          *(undefined4 *)&pFVar34->field_0x4 = uVar27;
          (pFVar34->Triangles).AllocatorInstance.Data = pFVar4;
          (pFVar34->Triangles).ArrayNum = iVar28;
          (pFVar34->Triangles).ArrayMax = iVar29;
          (pFVar34->MinUV).field0_0x0._s_0.X = dVar5;
          (pFVar34->MinUV).field0_0x0._s_0.Y = dVar6;
          (pFVar34->MaxUV).field0_0x0._s_0.X = dVar7;
          (pFVar34->MaxUV).field0_0x0._s_0.Y = dVar8;
          pFVar34->UVArea = dVar9;
          pFVar34->ScaleToWorld = dVar10;
          (pFVar34->UVScale).field0_0x0._s_0.X = dVar11;
          (pFVar34->UVScale).field0_0x0._s_0.Y = dVar12;
          (pFVar34->UVRotation).Row0.field0_0x0._s_0.X = dVar13;
          (pFVar34->UVRotation).Row0.field0_0x0._s_0.Y = dVar14;
          (pFVar34->UVRotation).Row1.field0_0x0._s_0.X = dVar15;
          (pFVar34->UVRotation).Row1.field0_0x0._s_0.Y = dVar16;
          (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.X = dVar17;
          (pFVar34->UVPackingScale).Row0.field0_0x0._s_0.Y = dVar18;
          (pFVar34->UVPackingScale).Row1.field0_0x0._s_0.X = dVar19;
          (pFVar34->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar20;
          (pFVar34->OrientationBiasShift).field0_0x0._s_0.X = dVar21;
          (pFVar34->OrientationBiasShift).field0_0x0._s_0.Y = dVar22;
          (pFVar34->PackingBias).field0_0x0._s_0.X = dVar23;
          (pFVar34->PackingBias).field0_0x0._s_0.Y = dVar1;
          iVar35 = iVar32;
        } while (iVar32 * 2 + 1 < iVar31);
      }
      iVar31 = iVar31 + -1;
      lVar37 = lVar37 + -1;
      pFVar33 = pFVar33 + -1;
    } while (0 < lVar37);
  }
  return;
}

// IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>_>_> @ 1435d8100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_1>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments(void)_::_2_::<lambda_1>_>
          param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort **ppuVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  ushort *local_358;
  ushort *local_348;
  ushort *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppuVar7 = &local_348;
    do {
      puVar4 = ppuVar7[1];
      puVar5 = *ppuVar7;
      local_358 = ppuVar7[2];
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1435d81c0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[iVar3 >> 1];
          puVar10[iVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_1435d81f0:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x0001435d81f9;
          goto LAB_1435d8210;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            bVar2 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::
                    operator()(param_4.Predicate,(uint)*puVar9,(uint)*puVar5);
            puVar8 = puVar5;
            if (!bVar2) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_1435d82dc;
      }
LAB_1435d82cb:
      HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_1>_>_>
                (puVar5,iVar3,param_3,param_4);
LAB_1435d82dc:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_348 <= ppuVar7);
  }
  return;
code_r0x0001435d81f9:
  bVar2 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,(uint)*puVar10,(uint)*puVar5);
  if (!bVar2) goto LAB_1435d81f0;
LAB_1435d8210:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    bVar2 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,(uint)*puVar8,(uint)*puVar10);
  } while (!bVar2);
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1435d81f0;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-2 - (longlong)puVar10) & 0xfffffffffffffffeU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffeU)) {
    if (puVar5 < puVar4) {
      *ppuVar7 = puVar5;
      ppuVar7[1] = puVar4;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_1435d82dc;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *ppuVar7 = puVar10;
      ppuVar7[1] = puVar9 + -2;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_1435d82dc;
  }
  iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_1435d82cb;
  goto LAB_1435d81c0;
}

// IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,`UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>_>_> @ 1435d83a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_2>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,_public:_void___cdecl_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments(void)_::_2_::<lambda_2>_>
          param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort **ppuVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  ushort *local_358;
  ushort *local_348;
  ushort *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppuVar7 = &local_348;
    do {
      puVar4 = ppuVar7[1];
      puVar5 = *ppuVar7;
      local_358 = ppuVar7[2];
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1435d8460:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[iVar3 >> 1];
          puVar10[iVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_1435d8490:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x0001435d8499;
          goto LAB_1435d84b0;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar9 = puVar8, puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            bVar2 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::
                    operator()(param_4.Predicate,(uint)*puVar9,(uint)*puVar5);
            puVar8 = puVar5;
            if (!bVar2) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_1435d857c;
      }
LAB_1435d856b:
      HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,_UE::Geometry::FUVSpaceAllocator::CreateUsedSegments_::__l2::<lambda_2>_>_>
                (puVar5,iVar3,param_3,param_4);
LAB_1435d857c:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_348 <= ppuVar7);
  }
  return;
code_r0x0001435d8499:
  bVar2 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::operator()
                    (param_4.Predicate,(uint)*puVar10,(uint)*puVar5);
  if (!bVar2) goto LAB_1435d8490;
LAB_1435d84b0:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    bVar2 = `UE::Geometry::FUVSpaceAllocator::CreateUsedSegments'::__l2::<lambda_2>::operator()
                      (param_4.Predicate,(uint)*puVar8,(uint)*puVar10);
  } while (!bVar2);
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1435d8490;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-2 - (longlong)puVar10) & 0xfffffffffffffffeU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffeU)) {
    if (puVar5 < puVar4) {
      *ppuVar7 = puVar5;
      ppuVar7[1] = puVar4;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_1435d857c;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *ppuVar7 = puVar10;
      ppuVar7[1] = puVar9 + -2;
      *(int *)(ppuVar7 + 2) = iVar6;
      ppuVar7 = ppuVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_1435d857c;
  }
  iVar3 = (int)((longlong)puVar4 - (longlong)puVar5 >> 1) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_1435d856b;
  goto LAB_1435d8460;
}

// IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_> @ 1435d8640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,DescendingPredicate<float> *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_3c8 [32];
  int local_3a8;
  DescendingPredicate<float> local_398 [2];
  int *local_378;
  int *local_368;
  int *local_360;
  undefined4 local_358;
  undefined1 local_350 [744];
  ulonglong local_68;
  
  if (1 < param_2) {
    local_68 = __security_cookie.value ^ (ulonglong)auStack_3c8;
    local_360 = param_1 + (longlong)param_2 + -1;
    local_368 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_358 = (undefined4)(longlong)fVar10;
    memset(local_350,0,0x2e8);
    ppiVar5 = &local_368;
    do {
      piVar6 = ppiVar5[1];
      piVar4 = *ppiVar5;
      local_378 = ppiVar5[2];
      iVar2 = (int)((longlong)piVar6 - (longlong)piVar4 >> 2) + 1;
      local_3a8 = (int)local_378;
      piVar9 = piVar4;
      local_398[0].CompValues.DataPtr = (float *)ppiVar5;
      if ((int)local_378 != 0) {
LAB_1435d8712:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          piVar7 = piVar6 + 1;
          iVar1 = piVar9[iVar2 >> 1];
          piVar9[iVar2 >> 1] = *piVar9;
          *piVar9 = iVar1;
          piVar4 = piVar9;
LAB_1435d8740:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar6) goto code_r0x0001435d8749;
          goto LAB_1435d8770;
        }
        for (; piVar7 = piVar9, piVar4 = piVar9, piVar9 < piVar6; piVar6 = piVar6 + -1) {
          while (piVar4 = piVar4 + 1, piVar4 <= piVar6) {
            iVar2 = *piVar4;
            pfVar3 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,*piVar7);
            fVar10 = *pfVar3;
            pfVar3 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar2);
            if (*pfVar3 <= fVar10 && fVar10 != *pfVar3) {
              piVar7 = piVar4;
            }
          }
          iVar2 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar2;
          ppiVar5 = (int **)local_398[0].CompValues.DataPtr;
        }
        goto LAB_1435d8862;
      }
LAB_1435d8846:
      local_398[0].CompValues.DataPtr = (param_4->CompValues).DataPtr;
      local_398[0].CompValues.ArrayNum = (param_4->CompValues).ArrayNum;
      local_398[0].CompValues._12_4_ = *(undefined4 *)&(param_4->CompValues).field_0xc;
      HeapSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
                (piVar4,iVar2,param_3,local_398);
LAB_1435d8862:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_368 <= ppiVar5);
  }
  return;
code_r0x0001435d8749:
  iVar2 = *piVar4;
  pfVar3 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,*piVar9);
  fVar10 = *pfVar3;
  pfVar3 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar2);
  if (fVar10 < *pfVar3 || fVar10 == *pfVar3) goto LAB_1435d8740;
LAB_1435d8770:
  do {
    piVar8 = piVar7;
    piVar7 = piVar8 + -1;
    if (piVar7 <= piVar9) break;
    iVar2 = *piVar9;
    pfVar3 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,*piVar7);
    fVar10 = *pfVar3;
    pfVar3 = TArrayView<float_const_,int>::operator[](&param_4->CompValues,iVar2);
  } while (fVar10 < *pfVar3 || fVar10 == *pfVar3);
  if (piVar4 <= piVar7) {
    iVar2 = *piVar4;
    *piVar4 = *piVar7;
    *piVar7 = iVar2;
    goto LAB_1435d8740;
  }
  iVar2 = *piVar9;
  *piVar9 = *piVar7;
  local_3a8 = local_3a8 + -1;
  *piVar7 = iVar2;
  if ((longlong)((longlong)piVar7 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar6 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar6) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar6;
      *(int *)(ppiVar5 + 2) = local_3a8;
      ppiVar5 = ppiVar5 + 3;
      local_398[0].CompValues.DataPtr = (float *)ppiVar5;
    }
    if (piVar7 <= piVar9 + 1) goto LAB_1435d8862;
    piVar6 = piVar8 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar7) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar8 + -2;
      *(int *)(ppiVar5 + 2) = local_3a8;
      ppiVar5 = ppiVar5 + 3;
      local_398[0].CompValues.DataPtr = (float *)ppiVar5;
    }
    if (piVar6 <= piVar4) goto LAB_1435d8862;
  }
  iVar2 = (int)((longlong)piVar6 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if (local_3a8 == 0) goto LAB_1435d8846;
  goto LAB_1435d8712;
}

// IntroSortInternal<UE::Geometry::FUVSpaceAllocator::FSegment,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_>_> @ 1435d8930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::Geometry::FUVSpaceAllocator::FSegment,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_>_>
          (FSegment *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_> param_4)

{
  FSegment *pFVar1;
  FSegment FVar2;
  int iVar3;
  FSegment *pFVar4;
  FSegment **ppFVar5;
  FSegment *pFVar6;
  FSegment *pFVar7;
  FSegment *pFVar8;
  FSegment *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FSegment *local_338;
  FSegment *local_328;
  FSegment *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_1435d89e0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_1435d8a10:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x0001435d8a19;
          goto LAB_1435d8a20;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->StartPos < pFVar1->StartPos) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_1435d8ada;
      }
LAB_1435d8ac9:
      local_338 = pFVar1;
      HeapSortInternal<UE::Geometry::FUVSpaceAllocator::FSegment,int,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FUVSpaceAllocator::FSegment,TLess<void>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_1435d8ada:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x0001435d8a19:
  if (pFVar4->StartPos <= pFVar9->StartPos) goto LAB_1435d8a10;
LAB_1435d8a20:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->StartPos <= pFVar6->StartPos);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_1435d8a10;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_1435d8ada;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_1435d8ada;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_1435d8ac9;
  goto LAB_1435d89e0;
}

// IntroSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,`UE::InternalUVPacking::FStandardChartPacker::ScaleCharts'::__l2::FCompareCharts> @ 1435d8b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::FCompareCharts>
          (FUVIsland *param_1,int param_2,FIdentityFunctor param_3,FCompareCharts param_4)

{
  undefined8 *puVar1;
  FUVIsland *pFVar2;
  double dVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  int iVar33;
  FUVIsland *pFVar34;
  longlong lVar35;
  FUVIsland *pFVar36;
  longlong lVar37;
  FUVIsland *pFVar38;
  FUVIsland *pFVar39;
  FUVIsland *pFVar40;
  FUVIsland *pFVar41;
  FUVIsland **ppFVar42;
  int iVar43;
  float fVar44;
  undefined1 auStackY_488 [32];
  FCompareCharts local_458 [8];
  FIdentityFunctor local_450 [8];
  FIdentityFunctor local_448 [8];
  TReversePredicate<_protected:_void___cdecl_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&,double)_::_2_::FCompareCharts>
  local_440;
  TReversePredicate<_protected:_void___cdecl_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts(TArray<UE::InternalUVPacking::FUVIsland,TSizedDefaultAllocator<32>_>_&,double)_::_2_::FCompareCharts>
  local_438 [3];
  FUVIsland *local_420;
  undefined8 local_418;
  FScriptContainerElement *pFStack_410;
  undefined8 local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  FUVIsland *local_358;
  FUVIsland *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_488;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar44 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar44;
    memset(local_340,0,0x2e8);
    ppFVar42 = &local_358;
    do {
      pFVar41 = ppFVar42[1];
      pFVar39 = *ppFVar42;
      pFVar2 = ppFVar42[2];
      local_420._0_4_ = (int)pFVar2;
      lVar35 = ((longlong)pFVar41 - (longlong)pFVar39) +
               SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar41 - (longlong)pFVar39),
                      8);
      iVar43 = ((int)(lVar35 >> 7) - (int)(lVar35 >> 0x3f)) + 1;
      pFVar38 = pFVar39;
      if ((int)local_420 != 0) {
LAB_1435d8c55:
        if (8 < iVar43) {
          pFVar39 = pFVar38 + iVar43 / 2;
          iVar33 = pFVar39->Id;
          uVar29 = *(undefined4 *)&pFVar39->field_0x4;
          pFVar5 = (pFVar39->Triangles).AllocatorInstance.Data;
          dVar3 = (pFVar39->PackingBias).field0_0x0._s_0.Y;
          iVar30 = (pFVar39->Triangles).ArrayNum;
          iVar31 = (pFVar39->Triangles).ArrayMax;
          dVar6 = (pFVar39->MinUV).field0_0x0._s_0.X;
          dVar7 = (pFVar39->MinUV).field0_0x0._s_0.Y;
          dVar8 = (pFVar39->MaxUV).field0_0x0._s_0.X;
          dVar9 = (pFVar39->MaxUV).field0_0x0._s_0.Y;
          dVar10 = pFVar39->UVArea;
          dVar11 = pFVar39->ScaleToWorld;
          dVar12 = (pFVar39->UVScale).field0_0x0._s_0.X;
          dVar13 = (pFVar39->UVScale).field0_0x0._s_0.Y;
          dVar14 = (pFVar39->UVRotation).Row0.field0_0x0._s_0.X;
          dVar15 = (pFVar39->UVRotation).Row0.field0_0x0._s_0.Y;
          dVar16 = (pFVar39->UVRotation).Row1.field0_0x0._s_0.X;
          dVar17 = (pFVar39->UVRotation).Row1.field0_0x0._s_0.Y;
          dVar18 = (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.X;
          dVar19 = (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.Y;
          dVar20 = (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.X;
          dVar21 = (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.Y;
          dVar22 = (pFVar39->OrientationBiasShift).field0_0x0._s_0.X;
          dVar23 = (pFVar39->OrientationBiasShift).field0_0x0._s_0.Y;
          dVar24 = (pFVar39->PackingBias).field0_0x0._s_0.X;
          uVar28 = *(undefined4 *)&pFVar38->field_0x4;
          pFVar25 = (pFVar38->Triangles).AllocatorInstance.Data;
          pFVar39->Id = pFVar38->Id;
          *(undefined4 *)&pFVar39->field_0x4 = uVar28;
          (pFVar39->Triangles).AllocatorInstance.Data = pFVar25;
          iVar43 = (pFVar38->Triangles).ArrayMax;
          dVar26 = (pFVar38->MinUV).field0_0x0._s_0.X;
          (pFVar39->Triangles).ArrayNum = (pFVar38->Triangles).ArrayNum;
          (pFVar39->Triangles).ArrayMax = iVar43;
          (pFVar39->MinUV).field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->MaxUV).field0_0x0._s_0.X;
          (pFVar39->MinUV).field0_0x0._s_0.Y = (pFVar38->MinUV).field0_0x0._s_0.Y;
          (pFVar39->MaxUV).field0_0x0._s_0.X = dVar26;
          dVar26 = pFVar38->UVArea;
          (pFVar39->MaxUV).field0_0x0._s_0.Y = (pFVar38->MaxUV).field0_0x0._s_0.Y;
          pFVar39->UVArea = dVar26;
          dVar26 = (pFVar38->UVScale).field0_0x0._s_0.X;
          pFVar39->ScaleToWorld = pFVar38->ScaleToWorld;
          (pFVar39->UVScale).field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.X;
          (pFVar39->UVScale).field0_0x0._s_0.Y = (pFVar38->UVScale).field0_0x0._s_0.Y;
          (pFVar39->UVRotation).Row0.field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.X;
          (pFVar39->UVRotation).Row0.field0_0x0._s_0.Y =
               (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y;
          (pFVar39->UVRotation).Row1.field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X;
          (pFVar39->UVRotation).Row1.field0_0x0._s_0.Y =
               (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y;
          (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X;
          (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.Y =
               (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y;
          (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.X;
          (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.Y =
               (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y;
          (pFVar39->OrientationBiasShift).field0_0x0._s_0.X = dVar26;
          dVar26 = (pFVar38->PackingBias).field0_0x0._s_0.X;
          (pFVar39->OrientationBiasShift).field0_0x0._s_0.Y =
               (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y;
          (pFVar39->PackingBias).field0_0x0._s_0.X = dVar26;
          (pFVar39->PackingBias).field0_0x0._s_0.Y = (pFVar38->PackingBias).field0_0x0._s_0.Y;
          pFVar38->Id = iVar33;
          *(undefined4 *)&pFVar38->field_0x4 = uVar29;
          (pFVar38->Triangles).AllocatorInstance.Data = pFVar5;
          (pFVar38->Triangles).ArrayNum = iVar30;
          (pFVar38->Triangles).ArrayMax = iVar31;
          (pFVar38->MinUV).field0_0x0._s_0.X = dVar6;
          (pFVar38->MinUV).field0_0x0._s_0.Y = dVar7;
          (pFVar38->MaxUV).field0_0x0._s_0.X = dVar8;
          (pFVar38->MaxUV).field0_0x0._s_0.Y = dVar9;
          pFVar38->UVArea = dVar10;
          pFVar38->ScaleToWorld = dVar11;
          (pFVar38->UVScale).field0_0x0._s_0.X = dVar12;
          (pFVar38->UVScale).field0_0x0._s_0.Y = dVar13;
          (pFVar38->UVRotation).Row0.field0_0x0._s_0.X = dVar14;
          (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y = dVar15;
          (pFVar38->UVRotation).Row1.field0_0x0._s_0.X = dVar16;
          (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y = dVar17;
          (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X = dVar18;
          (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y = dVar19;
          (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X = dVar20;
          (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar21;
          (pFVar38->OrientationBiasShift).field0_0x0._s_0.X = dVar22;
          (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y = dVar23;
          (pFVar38->PackingBias).field0_0x0._s_0.X = dVar24;
          (pFVar38->PackingBias).field0_0x0._s_0.Y = dVar3;
          pFVar36 = pFVar41 + 1;
          pFVar39 = pFVar38;
LAB_1435d8df0:
          pFVar34 = pFVar39;
          pFVar39 = pFVar34 + 1;
          if (pFVar39 <= pFVar41) goto code_r0x0001435d8dff;
          goto LAB_1435d8e60;
        }
        if (pFVar38 < pFVar41) {
          pFVar2 = pFVar38 + 1;
          do {
            pFVar39 = pFVar38;
            if (pFVar2 <= pFVar41) {
              pFVar36 = pFVar2;
              if (0x2df < (ulonglong)((longlong)pFVar41 + (0xb8 - (longlong)pFVar2))) {
                do {
                  pFVar34 = pFVar36;
                  if (((pFVar39->MaxUV).field0_0x0._s_0.Y - (pFVar39->MinUV).field0_0x0._s_0.Y) *
                      (pFVar39->UVScale).field0_0x0._s_0.Y *
                      ((pFVar39->MaxUV).field0_0x0._s_0.X - (pFVar39->MinUV).field0_0x0._s_0.X) *
                      (pFVar39->UVScale).field0_0x0._s_0.X <=
                      ((pFVar36->MaxUV).field0_0x0._s_0.Y - (pFVar36->MinUV).field0_0x0._s_0.Y) *
                      (pFVar36->UVScale).field0_0x0._s_0.Y *
                      ((pFVar36->MaxUV).field0_0x0._s_0.X - (pFVar36->MinUV).field0_0x0._s_0.X) *
                      (pFVar36->UVScale).field0_0x0._s_0.X) {
                    pFVar34 = pFVar39;
                  }
                  pFVar39 = pFVar36 + 1;
                  if (((pFVar34->MaxUV).field0_0x0._s_0.Y - (pFVar34->MinUV).field0_0x0._s_0.Y) *
                      (pFVar34->UVScale).field0_0x0._s_0.Y *
                      ((pFVar34->MaxUV).field0_0x0._s_0.X - (pFVar34->MinUV).field0_0x0._s_0.X) *
                      (pFVar34->UVScale).field0_0x0._s_0.X <=
                      (pFVar36[1].MaxUV.field0_0x0._s_0.Y - pFVar36[1].MinUV.field0_0x0._s_0.Y) *
                      pFVar36[1].UVScale.field0_0x0._s_0.Y *
                      (pFVar36[1].MaxUV.field0_0x0._s_0.X - pFVar36[1].MinUV.field0_0x0._s_0.X) *
                      pFVar36[1].UVScale.field0_0x0._s_0.X) {
                    pFVar39 = pFVar34;
                  }
                  if ((pFVar36[2].MaxUV.field0_0x0._s_0.Y - pFVar36[2].MinUV.field0_0x0._s_0.Y) *
                      pFVar36[2].UVScale.field0_0x0._s_0.Y *
                      (pFVar36[2].MaxUV.field0_0x0._s_0.X - pFVar36[2].MinUV.field0_0x0._s_0.X) *
                      pFVar36[2].UVScale.field0_0x0._s_0.X <
                      ((pFVar39->MaxUV).field0_0x0._s_0.Y - (pFVar39->MinUV).field0_0x0._s_0.Y) *
                      (pFVar39->UVScale).field0_0x0._s_0.Y *
                      ((pFVar39->MaxUV).field0_0x0._s_0.X - (pFVar39->MinUV).field0_0x0._s_0.X) *
                      (pFVar39->UVScale).field0_0x0._s_0.X) {
                    pFVar39 = pFVar36 + 2;
                  }
                  if ((pFVar36[3].MaxUV.field0_0x0._s_0.Y - pFVar36[3].MinUV.field0_0x0._s_0.Y) *
                      pFVar36[3].UVScale.field0_0x0._s_0.Y *
                      (pFVar36[3].MaxUV.field0_0x0._s_0.X - pFVar36[3].MinUV.field0_0x0._s_0.X) *
                      pFVar36[3].UVScale.field0_0x0._s_0.X <
                      ((pFVar39->MaxUV).field0_0x0._s_0.Y - (pFVar39->MinUV).field0_0x0._s_0.Y) *
                      (pFVar39->UVScale).field0_0x0._s_0.Y *
                      ((pFVar39->MaxUV).field0_0x0._s_0.X - (pFVar39->MinUV).field0_0x0._s_0.X) *
                      (pFVar39->UVScale).field0_0x0._s_0.X) {
                    pFVar39 = pFVar36 + 3;
                  }
                  pFVar36 = pFVar36 + 4;
                } while (pFVar36 <= pFVar41 + -3);
              }
              for (; pFVar36 <= pFVar41; pFVar36 = pFVar36 + 1) {
                pFVar34 = pFVar36;
                if (((pFVar39->MaxUV).field0_0x0._s_0.Y - (pFVar39->MinUV).field0_0x0._s_0.Y) *
                    (pFVar39->UVScale).field0_0x0._s_0.Y *
                    ((pFVar39->MaxUV).field0_0x0._s_0.X - (pFVar39->MinUV).field0_0x0._s_0.X) *
                    (pFVar39->UVScale).field0_0x0._s_0.X <=
                    ((pFVar36->MaxUV).field0_0x0._s_0.Y - (pFVar36->MinUV).field0_0x0._s_0.Y) *
                    (pFVar36->UVScale).field0_0x0._s_0.Y *
                    ((pFVar36->MaxUV).field0_0x0._s_0.X - (pFVar36->MinUV).field0_0x0._s_0.X) *
                    (pFVar36->UVScale).field0_0x0._s_0.X) {
                  pFVar34 = pFVar39;
                }
                pFVar39 = pFVar34;
              }
            }
            local_418 = *(undefined8 *)pFVar39;
            pFStack_410 = (pFVar39->Triangles).AllocatorInstance.Data;
            local_368 = (pFVar39->PackingBias).field0_0x0._s_0.Y;
            local_408._0_4_ = (pFVar39->Triangles).ArrayNum;
            local_408._4_4_ = (pFVar39->Triangles).ArrayMax;
            dStack_400 = (pFVar39->MinUV).field0_0x0._s_0.X;
            pFVar36 = pFVar41 + -1;
            local_3f8 = (pFVar39->MinUV).field0_0x0._s_0.Y;
            dStack_3f0 = (pFVar39->MaxUV).field0_0x0._s_0.X;
            local_3e8 = (pFVar39->MaxUV).field0_0x0._s_0.Y;
            dStack_3e0 = pFVar39->UVArea;
            local_3d8 = pFVar39->ScaleToWorld;
            dStack_3d0 = (pFVar39->UVScale).field0_0x0._s_0.X;
            local_3c8 = (pFVar39->UVScale).field0_0x0._s_0.Y;
            dStack_3c0 = (pFVar39->UVRotation).Row0.field0_0x0._s_0.X;
            local_3b8 = (pFVar39->UVRotation).Row0.field0_0x0._s_0.Y;
            dStack_3b0 = (pFVar39->UVRotation).Row1.field0_0x0._s_0.X;
            local_3a8 = (pFVar39->UVRotation).Row1.field0_0x0._s_0.Y;
            dStack_3a0 = (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.X;
            local_398 = (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.Y;
            dStack_390 = (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.X;
            local_388 = (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.Y;
            dStack_380 = (pFVar39->OrientationBiasShift).field0_0x0._s_0.X;
            local_378 = (pFVar39->OrientationBiasShift).field0_0x0._s_0.Y;
            dStack_370 = (pFVar39->PackingBias).field0_0x0._s_0.X;
            uVar28 = *(undefined4 *)&pFVar41->field_0x4;
            pFVar5 = (pFVar41->Triangles).AllocatorInstance.Data;
            pFVar39->Id = pFVar41->Id;
            *(undefined4 *)&pFVar39->field_0x4 = uVar28;
            (pFVar39->Triangles).AllocatorInstance.Data = pFVar5;
            iVar43 = (pFVar41->Triangles).ArrayMax;
            dVar3 = (pFVar41->MinUV).field0_0x0._s_0.X;
            (pFVar39->Triangles).ArrayNum = (pFVar41->Triangles).ArrayNum;
            (pFVar39->Triangles).ArrayMax = iVar43;
            (pFVar39->MinUV).field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->MaxUV).field0_0x0._s_0.X;
            (pFVar39->MinUV).field0_0x0._s_0.Y = (pFVar41->MinUV).field0_0x0._s_0.Y;
            (pFVar39->MaxUV).field0_0x0._s_0.X = dVar3;
            dVar3 = pFVar41->UVArea;
            (pFVar39->MaxUV).field0_0x0._s_0.Y = (pFVar41->MaxUV).field0_0x0._s_0.Y;
            pFVar39->UVArea = dVar3;
            dVar3 = (pFVar41->UVScale).field0_0x0._s_0.X;
            pFVar39->ScaleToWorld = pFVar41->ScaleToWorld;
            (pFVar39->UVScale).field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->UVRotation).Row0.field0_0x0._s_0.X;
            (pFVar39->UVScale).field0_0x0._s_0.Y = (pFVar41->UVScale).field0_0x0._s_0.Y;
            (pFVar39->UVRotation).Row0.field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->UVRotation).Row1.field0_0x0._s_0.X;
            (pFVar39->UVRotation).Row0.field0_0x0._s_0.Y =
                 (pFVar41->UVRotation).Row0.field0_0x0._s_0.Y;
            (pFVar39->UVRotation).Row1.field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->UVPackingScale).Row0.field0_0x0._s_0.X;
            (pFVar39->UVRotation).Row1.field0_0x0._s_0.Y =
                 (pFVar41->UVRotation).Row1.field0_0x0._s_0.Y;
            (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->UVPackingScale).Row1.field0_0x0._s_0.X;
            (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.Y =
                 (pFVar41->UVPackingScale).Row0.field0_0x0._s_0.Y;
            (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->OrientationBiasShift).field0_0x0._s_0.X;
            (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.Y =
                 (pFVar41->UVPackingScale).Row1.field0_0x0._s_0.Y;
            (pFVar39->OrientationBiasShift).field0_0x0._s_0.X = dVar3;
            dVar3 = (pFVar41->PackingBias).field0_0x0._s_0.X;
            (pFVar39->OrientationBiasShift).field0_0x0._s_0.Y =
                 (pFVar41->OrientationBiasShift).field0_0x0._s_0.Y;
            (pFVar39->PackingBias).field0_0x0._s_0.X = dVar3;
            (pFVar39->PackingBias).field0_0x0._s_0.Y = (pFVar41->PackingBias).field0_0x0._s_0.Y;
            *(undefined8 *)pFVar41 = local_418;
            (pFVar41->Triangles).AllocatorInstance.Data = pFStack_410;
            (pFVar41->Triangles).ArrayNum = (undefined4)local_408;
            (pFVar41->Triangles).ArrayMax = local_408._4_4_;
            (pFVar41->MinUV).field0_0x0._s_0.X = dStack_400;
            (pFVar41->MinUV).field0_0x0._s_0.Y = local_3f8;
            (pFVar41->MaxUV).field0_0x0._s_0.X = dStack_3f0;
            (pFVar41->MaxUV).field0_0x0._s_0.Y = local_3e8;
            pFVar41->UVArea = dStack_3e0;
            pFVar41->ScaleToWorld = local_3d8;
            (pFVar41->UVScale).field0_0x0._s_0.X = dStack_3d0;
            (pFVar41->UVScale).field0_0x0._s_0.Y = local_3c8;
            (pFVar41->UVRotation).Row0.field0_0x0._s_0.X = dStack_3c0;
            (pFVar41->UVRotation).Row0.field0_0x0._s_0.Y = local_3b8;
            (pFVar41->UVRotation).Row1.field0_0x0._s_0.X = dStack_3b0;
            (pFVar41->UVRotation).Row1.field0_0x0._s_0.Y = local_3a8;
            (pFVar41->UVPackingScale).Row0.field0_0x0._s_0.X = dStack_3a0;
            (pFVar41->UVPackingScale).Row0.field0_0x0._s_0.Y = local_398;
            (pFVar41->UVPackingScale).Row1.field0_0x0._s_0.X = dStack_390;
            (pFVar41->UVPackingScale).Row1.field0_0x0._s_0.Y = local_388;
            (pFVar41->OrientationBiasShift).field0_0x0._s_0.X = dStack_380;
            (pFVar41->OrientationBiasShift).field0_0x0._s_0.Y = local_378;
            (pFVar41->PackingBias).field0_0x0._s_0.X = dStack_370;
            (pFVar41->PackingBias).field0_0x0._s_0.Y = local_368;
            pFVar41 = pFVar36;
          } while (pFVar38 < pFVar36);
        }
        goto LAB_1435d995f;
      }
LAB_1435d92bc:
      local_458[0] = param_4;
      local_448[0] = param_3;
      local_420 = pFVar2;
      if (iVar43 < 0) {
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar32) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1435d970c:
        local_438[0].Predicate = local_458;
        local_440.Predicate = local_458;
        local_450[0] = param_3;
        if ((iVar43 < 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Num >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                                ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar32))
        {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar33 = (iVar43 + -2) / 2;
        HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::FCompareCharts>_>
                  (pFVar39,iVar33,iVar43,local_450,&local_440);
        while (iVar33 != 0) {
          iVar33 = iVar33 + -1;
          HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::FCompareCharts>_>
                    (pFVar39,iVar33,iVar43,local_450,&local_440);
        }
        iVar43 = iVar43 + -1;
        if (0 < iVar43) {
          lVar35 = (longlong)iVar43 * 0xb8;
          do {
            local_418 = *(undefined8 *)pFVar39;
            pFStack_410 = (pFVar39->Triangles).AllocatorInstance.Data;
            local_368 = (pFVar39->PackingBias).field0_0x0._s_0.Y;
            puVar1 = (undefined8 *)((longlong)&pFVar39->Id + lVar35);
            local_408._0_4_ = (pFVar39->Triangles).ArrayNum;
            local_408._4_4_ = (pFVar39->Triangles).ArrayMax;
            dStack_400 = (pFVar39->MinUV).field0_0x0._s_0.X;
            local_3f8 = (pFVar39->MinUV).field0_0x0._s_0.Y;
            dStack_3f0 = (pFVar39->MaxUV).field0_0x0._s_0.X;
            local_3e8 = (pFVar39->MaxUV).field0_0x0._s_0.Y;
            dStack_3e0 = pFVar39->UVArea;
            local_3d8 = pFVar39->ScaleToWorld;
            dStack_3d0 = (pFVar39->UVScale).field0_0x0._s_0.X;
            local_3c8 = (pFVar39->UVScale).field0_0x0._s_0.Y;
            dStack_3c0 = (pFVar39->UVRotation).Row0.field0_0x0._s_0.X;
            local_3b8 = (pFVar39->UVRotation).Row0.field0_0x0._s_0.Y;
            dStack_3b0 = (pFVar39->UVRotation).Row1.field0_0x0._s_0.X;
            local_3a8 = (pFVar39->UVRotation).Row1.field0_0x0._s_0.Y;
            dStack_3a0 = (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.X;
            local_398 = (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.Y;
            dStack_390 = (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.X;
            local_388 = (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.Y;
            dStack_380 = (pFVar39->OrientationBiasShift).field0_0x0._s_0.X;
            local_378 = (pFVar39->OrientationBiasShift).field0_0x0._s_0.Y;
            dStack_370 = (pFVar39->PackingBias).field0_0x0._s_0.X;
            pFVar5 = (FScriptContainerElement *)puVar1[1];
            *(undefined8 *)pFVar39 = *puVar1;
            (pFVar39->Triangles).AllocatorInstance.Data = pFVar5;
            uVar27 = puVar1[2];
            dVar3 = (double)puVar1[3];
            (pFVar39->Triangles).ArrayNum = (int)uVar27;
            (pFVar39->Triangles).ArrayMax = (int)((ulonglong)uVar27 >> 0x20);
            (pFVar39->MinUV).field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[5];
            (pFVar39->MinUV).field0_0x0._s_0.Y = (double)puVar1[4];
            (pFVar39->MaxUV).field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[7];
            (pFVar39->MaxUV).field0_0x0._s_0.Y = (double)puVar1[6];
            pFVar39->UVArea = dVar3;
            dVar3 = (double)puVar1[9];
            pFVar39->ScaleToWorld = (double)puVar1[8];
            (pFVar39->UVScale).field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[0xb];
            (pFVar39->UVScale).field0_0x0._s_0.Y = (double)puVar1[10];
            (pFVar39->UVRotation).Row0.field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[0xd];
            (pFVar39->UVRotation).Row0.field0_0x0._s_0.Y = (double)puVar1[0xc];
            (pFVar39->UVRotation).Row1.field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[0xf];
            (pFVar39->UVRotation).Row1.field0_0x0._s_0.Y = (double)puVar1[0xe];
            (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[0x11];
            (pFVar39->UVPackingScale).Row0.field0_0x0._s_0.Y = (double)puVar1[0x10];
            (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[0x13];
            (pFVar39->UVPackingScale).Row1.field0_0x0._s_0.Y = (double)puVar1[0x12];
            (pFVar39->OrientationBiasShift).field0_0x0._s_0.X = dVar3;
            dVar3 = (double)puVar1[0x15];
            (pFVar39->OrientationBiasShift).field0_0x0._s_0.Y = (double)puVar1[0x14];
            (pFVar39->PackingBias).field0_0x0._s_0.X = dVar3;
            (pFVar39->PackingBias).field0_0x0._s_0.Y = (double)puVar1[0x16];
            *puVar1 = local_418;
            puVar1[1] = pFStack_410;
            puVar1[2] = local_408;
            puVar1[3] = dStack_400;
            puVar1[4] = local_3f8;
            puVar1[5] = dStack_3f0;
            puVar1[6] = local_3e8;
            puVar1[7] = dStack_3e0;
            puVar1[8] = local_3d8;
            puVar1[9] = dStack_3d0;
            puVar1[10] = local_3c8;
            puVar1[0xb] = dStack_3c0;
            puVar1[0xc] = local_3b8;
            puVar1[0xd] = dStack_3b0;
            puVar1[0xe] = local_3a8;
            puVar1[0xf] = dStack_3a0;
            puVar1[0x10] = local_398;
            puVar1[0x11] = dStack_390;
            puVar1[0x12] = local_388;
            puVar1[0x13] = dStack_380;
            puVar1[0x14] = local_378;
            puVar1[0x15] = dStack_370;
            puVar1[0x16] = local_368;
            HeapSiftDown<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,TReversePredicate<_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::FCompareCharts>_>
                      (pFVar39,0,iVar43,local_448,local_438);
            iVar43 = iVar43 + -1;
            lVar35 = lVar35 + -0xb8;
          } while (0 < iVar43);
        }
      }
      else if (iVar43 != 0) goto LAB_1435d970c;
LAB_1435d995f:
      ppFVar42 = ppFVar42 + -3;
    } while (&local_358 <= ppFVar42);
  }
  return;
code_r0x0001435d8dff:
  if (((pFVar38->MaxUV).field0_0x0._s_0.Y - (pFVar38->MinUV).field0_0x0._s_0.Y) *
      (pFVar38->UVScale).field0_0x0._s_0.Y *
      ((pFVar38->MaxUV).field0_0x0._s_0.X - (pFVar38->MinUV).field0_0x0._s_0.X) *
      (pFVar38->UVScale).field0_0x0._s_0.X <=
      (pFVar34[1].MaxUV.field0_0x0._s_0.Y - pFVar34[1].MinUV.field0_0x0._s_0.Y) *
      pFVar34[1].UVScale.field0_0x0._s_0.Y *
      (pFVar34[1].MaxUV.field0_0x0._s_0.X - pFVar34[1].MinUV.field0_0x0._s_0.X) *
      pFVar34[1].UVScale.field0_0x0._s_0.X) goto LAB_1435d8df0;
LAB_1435d8e60:
  do {
    pFVar40 = pFVar36;
    pFVar36 = pFVar40 + -1;
    if (pFVar36 <= pFVar38) break;
  } while ((pFVar40[-1].MaxUV.field0_0x0._s_0.X - pFVar40[-1].MinUV.field0_0x0._s_0.X) *
           pFVar40[-1].UVScale.field0_0x0._s_0.X *
           (pFVar40[-1].MaxUV.field0_0x0._s_0.Y - pFVar40[-1].MinUV.field0_0x0._s_0.Y) *
           pFVar40[-1].UVScale.field0_0x0._s_0.Y <=
           ((pFVar38->MaxUV).field0_0x0._s_0.Y - (pFVar38->MinUV).field0_0x0._s_0.Y) *
           (pFVar38->UVScale).field0_0x0._s_0.Y *
           ((pFVar38->MaxUV).field0_0x0._s_0.X - (pFVar38->MinUV).field0_0x0._s_0.X) *
           (pFVar38->UVScale).field0_0x0._s_0.X);
  if (pFVar39 <= pFVar36) {
    iVar33 = pFVar39->Id;
    uVar29 = *(undefined4 *)&pFVar39->field_0x4;
    pFVar5 = pFVar34[1].Triangles.AllocatorInstance.Data;
    dVar3 = pFVar34[1].PackingBias.field0_0x0._s_0.Y;
    iVar30 = pFVar34[1].Triangles.ArrayNum;
    iVar31 = pFVar34[1].Triangles.ArrayMax;
    dVar6 = pFVar34[1].MinUV.field0_0x0._s_0.X;
    dVar7 = pFVar34[1].MinUV.field0_0x0._s_0.Y;
    dVar8 = pFVar34[1].MaxUV.field0_0x0._s_0.X;
    dVar9 = pFVar34[1].MaxUV.field0_0x0._s_0.Y;
    dVar10 = pFVar34[1].UVArea;
    dVar11 = pFVar34[1].ScaleToWorld;
    dVar12 = pFVar34[1].UVScale.field0_0x0._s_0.X;
    dVar13 = pFVar34[1].UVScale.field0_0x0._s_0.Y;
    dVar14 = pFVar34[1].UVRotation.Row0.field0_0x0._s_0.X;
    dVar15 = pFVar34[1].UVRotation.Row0.field0_0x0._s_0.Y;
    dVar16 = pFVar34[1].UVRotation.Row1.field0_0x0._s_0.X;
    dVar17 = pFVar34[1].UVRotation.Row1.field0_0x0._s_0.Y;
    dVar18 = pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.X;
    dVar19 = pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.Y;
    dVar20 = pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.X;
    dVar21 = pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.Y;
    dVar22 = pFVar34[1].OrientationBiasShift.field0_0x0._s_0.X;
    dVar23 = pFVar34[1].OrientationBiasShift.field0_0x0._s_0.Y;
    dVar24 = pFVar34[1].PackingBias.field0_0x0._s_0.X;
    uVar28 = *(undefined4 *)&pFVar36->field_0x4;
    pFVar25 = pFVar40[-1].Triangles.AllocatorInstance.Data;
    pFVar39->Id = pFVar36->Id;
    *(undefined4 *)&pFVar39->field_0x4 = uVar28;
    pFVar34[1].Triangles.AllocatorInstance.Data = pFVar25;
    iVar43 = pFVar40[-1].Triangles.ArrayMax;
    dVar26 = pFVar40[-1].MinUV.field0_0x0._s_0.X;
    pFVar34[1].Triangles.ArrayNum = pFVar40[-1].Triangles.ArrayNum;
    pFVar34[1].Triangles.ArrayMax = iVar43;
    pFVar34[1].MinUV.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].MaxUV.field0_0x0._s_0.X;
    pFVar34[1].MinUV.field0_0x0._s_0.Y = pFVar40[-1].MinUV.field0_0x0._s_0.Y;
    pFVar34[1].MaxUV.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].UVArea;
    pFVar34[1].MaxUV.field0_0x0._s_0.Y = pFVar40[-1].MaxUV.field0_0x0._s_0.Y;
    pFVar34[1].UVArea = dVar26;
    dVar26 = pFVar40[-1].UVScale.field0_0x0._s_0.X;
    pFVar34[1].ScaleToWorld = pFVar40[-1].ScaleToWorld;
    pFVar34[1].UVScale.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.X;
    pFVar34[1].UVScale.field0_0x0._s_0.Y = pFVar40[-1].UVScale.field0_0x0._s_0.Y;
    pFVar34[1].UVRotation.Row0.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.X;
    pFVar34[1].UVRotation.Row0.field0_0x0._s_0.Y = pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.Y;
    pFVar34[1].UVRotation.Row1.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.X;
    pFVar34[1].UVRotation.Row1.field0_0x0._s_0.Y = pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.Y;
    pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.X;
    pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.Y =
         pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.Y;
    pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.X;
    pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.Y =
         pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.Y;
    pFVar34[1].OrientationBiasShift.field0_0x0._s_0.X = dVar26;
    dVar26 = pFVar40[-1].PackingBias.field0_0x0._s_0.X;
    pFVar34[1].OrientationBiasShift.field0_0x0._s_0.Y =
         pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.Y;
    pFVar34[1].PackingBias.field0_0x0._s_0.X = dVar26;
    pFVar34[1].PackingBias.field0_0x0._s_0.Y = pFVar40[-1].PackingBias.field0_0x0._s_0.Y;
    pFVar36->Id = iVar33;
    *(undefined4 *)&pFVar36->field_0x4 = uVar29;
    pFVar40[-1].Triangles.AllocatorInstance.Data = pFVar5;
    pFVar40[-1].Triangles.ArrayNum = iVar30;
    pFVar40[-1].Triangles.ArrayMax = iVar31;
    pFVar40[-1].MinUV.field0_0x0._s_0.X = dVar6;
    pFVar40[-1].MinUV.field0_0x0._s_0.Y = dVar7;
    pFVar40[-1].MaxUV.field0_0x0._s_0.X = dVar8;
    pFVar40[-1].MaxUV.field0_0x0._s_0.Y = dVar9;
    pFVar40[-1].UVArea = dVar10;
    pFVar40[-1].ScaleToWorld = dVar11;
    pFVar40[-1].UVScale.field0_0x0._s_0.X = dVar12;
    pFVar40[-1].UVScale.field0_0x0._s_0.Y = dVar13;
    pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.X = dVar14;
    pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.Y = dVar15;
    pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.X = dVar16;
    pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.Y = dVar17;
    pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.X = dVar18;
    pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.Y = dVar19;
    pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.X = dVar20;
    pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.Y = dVar21;
    pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.X = dVar22;
    pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.Y = dVar23;
    pFVar40[-1].PackingBias.field0_0x0._s_0.X = dVar24;
    pFVar40[-1].PackingBias.field0_0x0._s_0.Y = dVar3;
    goto LAB_1435d8df0;
  }
  local_418 = *(undefined8 *)pFVar38;
  pFStack_410 = (pFVar38->Triangles).AllocatorInstance.Data;
  local_368 = (pFVar38->PackingBias).field0_0x0._s_0.Y;
  local_420._0_4_ = (int)local_420 + -1;
  local_408._0_4_ = (pFVar38->Triangles).ArrayNum;
  local_408._4_4_ = (pFVar38->Triangles).ArrayMax;
  dStack_400 = (pFVar38->MinUV).field0_0x0._s_0.X;
  local_3f8 = (pFVar38->MinUV).field0_0x0._s_0.Y;
  dStack_3f0 = (pFVar38->MaxUV).field0_0x0._s_0.X;
  local_3e8 = (pFVar38->MaxUV).field0_0x0._s_0.Y;
  dStack_3e0 = pFVar38->UVArea;
  local_3d8 = pFVar38->ScaleToWorld;
  dStack_3d0 = (pFVar38->UVScale).field0_0x0._s_0.X;
  local_3c8 = (pFVar38->UVScale).field0_0x0._s_0.Y;
  dStack_3c0 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.X;
  local_3b8 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y;
  dStack_3b0 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.X;
  local_3a8 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y;
  dStack_3a0 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X;
  local_398 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y;
  dStack_390 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X;
  local_388 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y;
  dStack_380 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.X;
  local_378 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y;
  dStack_370 = (pFVar38->PackingBias).field0_0x0._s_0.X;
  uVar28 = *(undefined4 *)&pFVar36->field_0x4;
  pFVar5 = pFVar40[-1].Triangles.AllocatorInstance.Data;
  lVar35 = (longlong)pFVar36 + (-0xb8 - (longlong)pFVar38);
  pFVar38->Id = pFVar36->Id;
  *(undefined4 *)&pFVar38->field_0x4 = uVar28;
  (pFVar38->Triangles).AllocatorInstance.Data = pFVar5;
  iVar43 = pFVar40[-1].Triangles.ArrayMax;
  dVar3 = pFVar40[-1].MinUV.field0_0x0._s_0.X;
  (pFVar38->Triangles).ArrayNum = pFVar40[-1].Triangles.ArrayNum;
  (pFVar38->Triangles).ArrayMax = iVar43;
  (pFVar38->MinUV).field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].MaxUV.field0_0x0._s_0.X;
  (pFVar38->MinUV).field0_0x0._s_0.Y = pFVar40[-1].MinUV.field0_0x0._s_0.Y;
  (pFVar38->MaxUV).field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].UVArea;
  (pFVar38->MaxUV).field0_0x0._s_0.Y = pFVar40[-1].MaxUV.field0_0x0._s_0.Y;
  pFVar38->UVArea = dVar3;
  dVar3 = pFVar40[-1].UVScale.field0_0x0._s_0.X;
  pFVar38->ScaleToWorld = pFVar40[-1].ScaleToWorld;
  (pFVar38->UVScale).field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.X;
  (pFVar38->UVScale).field0_0x0._s_0.Y = pFVar40[-1].UVScale.field0_0x0._s_0.Y;
  (pFVar38->UVRotation).Row0.field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.X;
  (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y = pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.Y;
  (pFVar38->UVRotation).Row1.field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.X;
  (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y = pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.Y;
  (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.X;
  (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y =
       pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.Y;
  (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.X;
  (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y =
       pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.Y;
  (pFVar38->OrientationBiasShift).field0_0x0._s_0.X = dVar3;
  dVar3 = pFVar40[-1].PackingBias.field0_0x0._s_0.X;
  (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y =
       pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.Y;
  (pFVar38->PackingBias).field0_0x0._s_0.X = dVar3;
  (pFVar38->PackingBias).field0_0x0._s_0.Y = pFVar40[-1].PackingBias.field0_0x0._s_0.Y;
  *(undefined8 *)pFVar36 = local_418;
  pFVar40[-1].Triangles.AllocatorInstance.Data = pFStack_410;
  pFVar40[-1].Triangles.ArrayNum = (undefined4)local_408;
  pFVar40[-1].Triangles.ArrayMax = local_408._4_4_;
  pFVar40[-1].MinUV.field0_0x0._s_0.X = dStack_400;
  pFVar40[-1].MinUV.field0_0x0._s_0.Y = local_3f8;
  pFVar40[-1].MaxUV.field0_0x0._s_0.X = dStack_3f0;
  pFVar40[-1].MaxUV.field0_0x0._s_0.Y = local_3e8;
  pFVar40[-1].UVArea = dStack_3e0;
  pFVar40[-1].ScaleToWorld = local_3d8;
  pFVar40[-1].UVScale.field0_0x0._s_0.X = dStack_3d0;
  pFVar40[-1].UVScale.field0_0x0._s_0.Y = local_3c8;
  pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.X = dStack_3c0;
  pFVar40[-1].UVRotation.Row0.field0_0x0._s_0.Y = local_3b8;
  pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.X = dStack_3b0;
  pFVar40[-1].UVRotation.Row1.field0_0x0._s_0.Y = local_3a8;
  pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.X = dStack_3a0;
  pFVar40[-1].UVPackingScale.Row0.field0_0x0._s_0.Y = local_398;
  pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.X = dStack_390;
  pFVar40[-1].UVPackingScale.Row1.field0_0x0._s_0.Y = local_388;
  pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.X = dStack_380;
  pFVar40[-1].OrientationBiasShift.field0_0x0._s_0.Y = local_378;
  pFVar40[-1].PackingBias.field0_0x0._s_0.X = dStack_370;
  pFVar40[-1].PackingBias.field0_0x0._s_0.Y = local_368;
  lVar35 = lVar35 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar35),8);
  lVar37 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar41 - (longlong)pFVar39),8) +
           ((longlong)pFVar41 - (longlong)pFVar39);
  if ((lVar35 >> 7) - (lVar35 >> 0x3f) < (lVar37 >> 7) - (lVar37 >> 0x3f)) {
    if (pFVar39 < pFVar41) {
      *ppFVar42 = pFVar39;
      ppFVar42[1] = pFVar41;
      *(int *)(ppFVar42 + 2) = (int)local_420;
      ppFVar42 = ppFVar42 + 3;
    }
    if (pFVar36 <= pFVar38 + 1) goto LAB_1435d995f;
    pFVar41 = pFVar40 + -2;
    pFVar39 = pFVar38;
  }
  else {
    if (pFVar38 + 1 < pFVar36) {
      *ppFVar42 = pFVar38;
      ppFVar42[1] = pFVar40 + -2;
      *(int *)(ppFVar42 + 2) = (int)local_420;
      ppFVar42 = ppFVar42 + 3;
    }
    if (pFVar41 <= pFVar39) goto LAB_1435d995f;
  }
  lVar35 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar41 - (longlong)pFVar39),8) +
           ((longlong)pFVar41 - (longlong)pFVar39);
  iVar43 = ((int)(lVar35 >> 7) - (int)(lVar35 >> 0x3f)) + 1;
  pFVar38 = pFVar39;
  if ((int)local_420 == 0) goto LAB_1435d92bc;
  goto LAB_1435d8c55;
}

// IntroSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,`UE::InternalUVPacking::FStandardChartPacker::ScaleCharts'::__l2::<lambda_1>_> @ 1435d99c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>
          (FUVIsland *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FUVIsland *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  FUVIsland *pFVar33;
  FUVIsland *pFVar34;
  FUVIsland *pFVar35;
  FUVIsland *pFVar36;
  FUVIsland *pFVar37;
  FUVIsland *pFVar38;
  FUVIsland **ppFVar39;
  float fVar40;
  undefined1 auStack_428 [48];
  FUVIsland *local_3f8;
  undefined8 local_3f0;
  FScriptContainerElement *pFStack_3e8;
  undefined8 local_3e0;
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  FUVIsland *local_338;
  FUVIsland *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_428;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar40;
    memset(local_320,0,0x2e8);
    ppFVar39 = &local_338;
    do {
      pFVar33 = ppFVar39[1];
      pFVar38 = *ppFVar39;
      pFVar1 = ppFVar39[2];
      local_3f8._0_4_ = (int)pFVar1;
      lVar31 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar33 - (longlong)pFVar38),
                      8) + ((longlong)pFVar33 - (longlong)pFVar38);
      iVar30 = ((int)(lVar31 >> 7) - (int)(lVar31 >> 0x3f)) + 1;
      pFVar37 = pFVar38;
      if ((int)local_3f8 != 0) {
LAB_1435d9ab0:
        if (8 < iVar30) {
          pFVar38 = pFVar37 + iVar30 / 2;
          iVar26 = pFVar38->Id;
          uVar27 = *(undefined4 *)&pFVar38->field_0x4;
          pFVar3 = (pFVar38->Triangles).AllocatorInstance.Data;
          dVar2 = (pFVar38->PackingBias).field0_0x0._s_0.Y;
          iVar28 = (pFVar38->Triangles).ArrayNum;
          iVar29 = (pFVar38->Triangles).ArrayMax;
          dVar4 = (pFVar38->MinUV).field0_0x0._s_0.X;
          dVar5 = (pFVar38->MinUV).field0_0x0._s_0.Y;
          dVar6 = (pFVar38->MaxUV).field0_0x0._s_0.X;
          dVar7 = (pFVar38->MaxUV).field0_0x0._s_0.Y;
          dVar8 = pFVar38->UVArea;
          dVar9 = pFVar38->ScaleToWorld;
          dVar10 = (pFVar38->UVScale).field0_0x0._s_0.X;
          dVar11 = (pFVar38->UVScale).field0_0x0._s_0.Y;
          dVar12 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.X;
          dVar13 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y;
          dVar14 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.X;
          dVar15 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y;
          dVar16 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X;
          dVar17 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y;
          dVar18 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X;
          dVar19 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y;
          dVar20 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.X;
          dVar21 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y;
          dVar22 = (pFVar38->PackingBias).field0_0x0._s_0.X;
          uVar25 = *(undefined4 *)&pFVar37->field_0x4;
          pFVar23 = (pFVar37->Triangles).AllocatorInstance.Data;
          pFVar38->Id = pFVar37->Id;
          *(undefined4 *)&pFVar38->field_0x4 = uVar25;
          (pFVar38->Triangles).AllocatorInstance.Data = pFVar23;
          iVar30 = (pFVar37->Triangles).ArrayMax;
          dVar24 = (pFVar37->MinUV).field0_0x0._s_0.X;
          (pFVar38->Triangles).ArrayNum = (pFVar37->Triangles).ArrayNum;
          (pFVar38->Triangles).ArrayMax = iVar30;
          (pFVar38->MinUV).field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->MaxUV).field0_0x0._s_0.X;
          (pFVar38->MinUV).field0_0x0._s_0.Y = (pFVar37->MinUV).field0_0x0._s_0.Y;
          (pFVar38->MaxUV).field0_0x0._s_0.X = dVar24;
          dVar24 = pFVar37->UVArea;
          (pFVar38->MaxUV).field0_0x0._s_0.Y = (pFVar37->MaxUV).field0_0x0._s_0.Y;
          pFVar38->UVArea = dVar24;
          dVar24 = (pFVar37->UVScale).field0_0x0._s_0.X;
          pFVar38->ScaleToWorld = pFVar37->ScaleToWorld;
          (pFVar38->UVScale).field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->UVRotation).Row0.field0_0x0._s_0.X;
          (pFVar38->UVScale).field0_0x0._s_0.Y = (pFVar37->UVScale).field0_0x0._s_0.Y;
          (pFVar38->UVRotation).Row0.field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->UVRotation).Row1.field0_0x0._s_0.X;
          (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y =
               (pFVar37->UVRotation).Row0.field0_0x0._s_0.Y;
          (pFVar38->UVRotation).Row1.field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.X;
          (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y =
               (pFVar37->UVRotation).Row1.field0_0x0._s_0.Y;
          (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.X;
          (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y =
               (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.Y;
          (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->OrientationBiasShift).field0_0x0._s_0.X;
          (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y =
               (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.Y;
          (pFVar38->OrientationBiasShift).field0_0x0._s_0.X = dVar24;
          dVar24 = (pFVar37->PackingBias).field0_0x0._s_0.X;
          (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y =
               (pFVar37->OrientationBiasShift).field0_0x0._s_0.Y;
          (pFVar38->PackingBias).field0_0x0._s_0.X = dVar24;
          (pFVar38->PackingBias).field0_0x0._s_0.Y = (pFVar37->PackingBias).field0_0x0._s_0.Y;
          pFVar37->Id = iVar26;
          *(undefined4 *)&pFVar37->field_0x4 = uVar27;
          (pFVar37->Triangles).AllocatorInstance.Data = pFVar3;
          (pFVar37->Triangles).ArrayNum = iVar28;
          (pFVar37->Triangles).ArrayMax = iVar29;
          (pFVar37->MinUV).field0_0x0._s_0.X = dVar4;
          (pFVar37->MinUV).field0_0x0._s_0.Y = dVar5;
          (pFVar37->MaxUV).field0_0x0._s_0.X = dVar6;
          (pFVar37->MaxUV).field0_0x0._s_0.Y = dVar7;
          pFVar37->UVArea = dVar8;
          pFVar37->ScaleToWorld = dVar9;
          (pFVar37->UVScale).field0_0x0._s_0.X = dVar10;
          (pFVar37->UVScale).field0_0x0._s_0.Y = dVar11;
          (pFVar37->UVRotation).Row0.field0_0x0._s_0.X = dVar12;
          (pFVar37->UVRotation).Row0.field0_0x0._s_0.Y = dVar13;
          (pFVar37->UVRotation).Row1.field0_0x0._s_0.X = dVar14;
          (pFVar37->UVRotation).Row1.field0_0x0._s_0.Y = dVar15;
          (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.X = dVar16;
          (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.Y = dVar17;
          (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.X = dVar18;
          (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.Y = dVar19;
          (pFVar37->OrientationBiasShift).field0_0x0._s_0.X = dVar20;
          (pFVar37->OrientationBiasShift).field0_0x0._s_0.Y = dVar21;
          (pFVar37->PackingBias).field0_0x0._s_0.X = dVar22;
          (pFVar37->PackingBias).field0_0x0._s_0.Y = dVar2;
          pFVar35 = pFVar33 + 1;
          pFVar38 = pFVar37;
LAB_1435d9c60:
          pFVar34 = pFVar38;
          pFVar38 = pFVar34 + 1;
          if (pFVar38 <= pFVar33) goto code_r0x0001435d9c6c;
          goto LAB_1435d9c74;
        }
        for (; pFVar38 = pFVar37, pFVar1 = pFVar37, pFVar37 < pFVar33; pFVar33 = pFVar33 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar33) {
            if (pFVar38->Id < pFVar1->Id) {
              pFVar38 = pFVar1;
            }
          }
          local_3f0 = *(undefined8 *)pFVar38;
          pFStack_3e8 = (pFVar38->Triangles).AllocatorInstance.Data;
          local_340 = (pFVar38->PackingBias).field0_0x0._s_0.Y;
          local_3e0._0_4_ = (pFVar38->Triangles).ArrayNum;
          local_3e0._4_4_ = (pFVar38->Triangles).ArrayMax;
          dStack_3d8 = (pFVar38->MinUV).field0_0x0._s_0.X;
          local_3d0 = (pFVar38->MinUV).field0_0x0._s_0.Y;
          dStack_3c8 = (pFVar38->MaxUV).field0_0x0._s_0.X;
          local_3c0 = (pFVar38->MaxUV).field0_0x0._s_0.Y;
          dStack_3b8 = pFVar38->UVArea;
          local_3b0 = pFVar38->ScaleToWorld;
          dStack_3a8 = (pFVar38->UVScale).field0_0x0._s_0.X;
          local_3a0 = (pFVar38->UVScale).field0_0x0._s_0.Y;
          dStack_398 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.X;
          local_390 = (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y;
          dStack_388 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.X;
          local_380 = (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y;
          dStack_378 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X;
          local_370 = (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y;
          dStack_368 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X;
          local_360 = (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y;
          dStack_358 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.X;
          local_350 = (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y;
          dStack_348 = (pFVar38->PackingBias).field0_0x0._s_0.X;
          uVar25 = *(undefined4 *)&pFVar33->field_0x4;
          pFVar3 = (pFVar33->Triangles).AllocatorInstance.Data;
          pFVar38->Id = pFVar33->Id;
          *(undefined4 *)&pFVar38->field_0x4 = uVar25;
          (pFVar38->Triangles).AllocatorInstance.Data = pFVar3;
          iVar30 = (pFVar33->Triangles).ArrayMax;
          dVar2 = (pFVar33->MinUV).field0_0x0._s_0.X;
          (pFVar38->Triangles).ArrayNum = (pFVar33->Triangles).ArrayNum;
          (pFVar38->Triangles).ArrayMax = iVar30;
          (pFVar38->MinUV).field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->MaxUV).field0_0x0._s_0.X;
          (pFVar38->MinUV).field0_0x0._s_0.Y = (pFVar33->MinUV).field0_0x0._s_0.Y;
          (pFVar38->MaxUV).field0_0x0._s_0.X = dVar2;
          dVar2 = pFVar33->UVArea;
          (pFVar38->MaxUV).field0_0x0._s_0.Y = (pFVar33->MaxUV).field0_0x0._s_0.Y;
          pFVar38->UVArea = dVar2;
          dVar2 = (pFVar33->UVScale).field0_0x0._s_0.X;
          pFVar38->ScaleToWorld = pFVar33->ScaleToWorld;
          (pFVar38->UVScale).field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->UVRotation).Row0.field0_0x0._s_0.X;
          (pFVar38->UVScale).field0_0x0._s_0.Y = (pFVar33->UVScale).field0_0x0._s_0.Y;
          (pFVar38->UVRotation).Row0.field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->UVRotation).Row1.field0_0x0._s_0.X;
          (pFVar38->UVRotation).Row0.field0_0x0._s_0.Y =
               (pFVar33->UVRotation).Row0.field0_0x0._s_0.Y;
          (pFVar38->UVRotation).Row1.field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.X;
          (pFVar38->UVRotation).Row1.field0_0x0._s_0.Y =
               (pFVar33->UVRotation).Row1.field0_0x0._s_0.Y;
          (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.X;
          (pFVar38->UVPackingScale).Row0.field0_0x0._s_0.Y =
               (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.Y;
          (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->OrientationBiasShift).field0_0x0._s_0.X;
          (pFVar38->UVPackingScale).Row1.field0_0x0._s_0.Y =
               (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.Y;
          (pFVar38->OrientationBiasShift).field0_0x0._s_0.X = dVar2;
          dVar2 = (pFVar33->PackingBias).field0_0x0._s_0.X;
          (pFVar38->OrientationBiasShift).field0_0x0._s_0.Y =
               (pFVar33->OrientationBiasShift).field0_0x0._s_0.Y;
          (pFVar38->PackingBias).field0_0x0._s_0.X = dVar2;
          (pFVar38->PackingBias).field0_0x0._s_0.Y = (pFVar33->PackingBias).field0_0x0._s_0.Y;
          *(undefined8 *)pFVar33 = local_3f0;
          (pFVar33->Triangles).AllocatorInstance.Data = pFStack_3e8;
          (pFVar33->Triangles).ArrayNum = (undefined4)local_3e0;
          (pFVar33->Triangles).ArrayMax = local_3e0._4_4_;
          (pFVar33->MinUV).field0_0x0._s_0.X = dStack_3d8;
          (pFVar33->MinUV).field0_0x0._s_0.Y = local_3d0;
          (pFVar33->MaxUV).field0_0x0._s_0.X = dStack_3c8;
          (pFVar33->MaxUV).field0_0x0._s_0.Y = local_3c0;
          pFVar33->UVArea = dStack_3b8;
          pFVar33->ScaleToWorld = local_3b0;
          (pFVar33->UVScale).field0_0x0._s_0.X = dStack_3a8;
          (pFVar33->UVScale).field0_0x0._s_0.Y = local_3a0;
          (pFVar33->UVRotation).Row0.field0_0x0._s_0.X = dStack_398;
          (pFVar33->UVRotation).Row0.field0_0x0._s_0.Y = local_390;
          (pFVar33->UVRotation).Row1.field0_0x0._s_0.X = dStack_388;
          (pFVar33->UVRotation).Row1.field0_0x0._s_0.Y = local_380;
          (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.X = dStack_378;
          (pFVar33->UVPackingScale).Row0.field0_0x0._s_0.Y = local_370;
          (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.X = dStack_368;
          (pFVar33->UVPackingScale).Row1.field0_0x0._s_0.Y = local_360;
          (pFVar33->OrientationBiasShift).field0_0x0._s_0.X = dStack_358;
          (pFVar33->OrientationBiasShift).field0_0x0._s_0.Y = local_350;
          (pFVar33->PackingBias).field0_0x0._s_0.X = dStack_348;
          (pFVar33->PackingBias).field0_0x0._s_0.Y = local_340;
        }
        goto LAB_1435da094;
      }
LAB_1435da084:
      local_3f8 = pFVar1;
      HeapSortInternal<UE::InternalUVPacking::FUVIsland,int,FIdentityFunctor,_UE::InternalUVPacking::FStandardChartPacker::ScaleCharts_::__l2::<lambda_1>_>
                (pFVar38,iVar30,param_3,param_4);
LAB_1435da094:
      ppFVar39 = ppFVar39 + -3;
    } while (&local_338 <= ppFVar39);
  }
  return;
code_r0x0001435d9c6c:
  if (pFVar38->Id <= pFVar37->Id) goto LAB_1435d9c60;
LAB_1435d9c74:
  do {
    pFVar36 = pFVar35;
    pFVar35 = pFVar36 + -1;
    if (pFVar35 <= pFVar37) break;
  } while (pFVar37->Id <= pFVar35->Id);
  if (pFVar38 <= pFVar35) {
    iVar26 = pFVar38->Id;
    uVar27 = *(undefined4 *)&pFVar38->field_0x4;
    pFVar3 = pFVar34[1].Triangles.AllocatorInstance.Data;
    dVar2 = pFVar34[1].PackingBias.field0_0x0._s_0.Y;
    iVar28 = pFVar34[1].Triangles.ArrayNum;
    iVar29 = pFVar34[1].Triangles.ArrayMax;
    dVar4 = pFVar34[1].MinUV.field0_0x0._s_0.X;
    dVar5 = pFVar34[1].MinUV.field0_0x0._s_0.Y;
    dVar6 = pFVar34[1].MaxUV.field0_0x0._s_0.X;
    dVar7 = pFVar34[1].MaxUV.field0_0x0._s_0.Y;
    dVar8 = pFVar34[1].UVArea;
    dVar9 = pFVar34[1].ScaleToWorld;
    dVar10 = pFVar34[1].UVScale.field0_0x0._s_0.X;
    dVar11 = pFVar34[1].UVScale.field0_0x0._s_0.Y;
    dVar12 = pFVar34[1].UVRotation.Row0.field0_0x0._s_0.X;
    dVar13 = pFVar34[1].UVRotation.Row0.field0_0x0._s_0.Y;
    dVar14 = pFVar34[1].UVRotation.Row1.field0_0x0._s_0.X;
    dVar15 = pFVar34[1].UVRotation.Row1.field0_0x0._s_0.Y;
    dVar16 = pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.X;
    dVar17 = pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.Y;
    dVar18 = pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.X;
    dVar19 = pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.Y;
    dVar20 = pFVar34[1].OrientationBiasShift.field0_0x0._s_0.X;
    dVar21 = pFVar34[1].OrientationBiasShift.field0_0x0._s_0.Y;
    dVar22 = pFVar34[1].PackingBias.field0_0x0._s_0.X;
    uVar25 = *(undefined4 *)&pFVar35->field_0x4;
    pFVar23 = pFVar36[-1].Triangles.AllocatorInstance.Data;
    pFVar38->Id = pFVar35->Id;
    *(undefined4 *)&pFVar38->field_0x4 = uVar25;
    pFVar34[1].Triangles.AllocatorInstance.Data = pFVar23;
    iVar30 = pFVar36[-1].Triangles.ArrayMax;
    dVar24 = pFVar36[-1].MinUV.field0_0x0._s_0.X;
    pFVar34[1].Triangles.ArrayNum = pFVar36[-1].Triangles.ArrayNum;
    pFVar34[1].Triangles.ArrayMax = iVar30;
    pFVar34[1].MinUV.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].MaxUV.field0_0x0._s_0.X;
    pFVar34[1].MinUV.field0_0x0._s_0.Y = pFVar36[-1].MinUV.field0_0x0._s_0.Y;
    pFVar34[1].MaxUV.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].UVArea;
    pFVar34[1].MaxUV.field0_0x0._s_0.Y = pFVar36[-1].MaxUV.field0_0x0._s_0.Y;
    pFVar34[1].UVArea = dVar24;
    dVar24 = pFVar36[-1].UVScale.field0_0x0._s_0.X;
    pFVar34[1].ScaleToWorld = pFVar36[-1].ScaleToWorld;
    pFVar34[1].UVScale.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.X;
    pFVar34[1].UVScale.field0_0x0._s_0.Y = pFVar36[-1].UVScale.field0_0x0._s_0.Y;
    pFVar34[1].UVRotation.Row0.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.X;
    pFVar34[1].UVRotation.Row0.field0_0x0._s_0.Y = pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.Y;
    pFVar34[1].UVRotation.Row1.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.X;
    pFVar34[1].UVRotation.Row1.field0_0x0._s_0.Y = pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.Y;
    pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.X;
    pFVar34[1].UVPackingScale.Row0.field0_0x0._s_0.Y =
         pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.Y;
    pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.X;
    pFVar34[1].UVPackingScale.Row1.field0_0x0._s_0.Y =
         pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.Y;
    pFVar34[1].OrientationBiasShift.field0_0x0._s_0.X = dVar24;
    dVar24 = pFVar36[-1].PackingBias.field0_0x0._s_0.X;
    pFVar34[1].OrientationBiasShift.field0_0x0._s_0.Y =
         pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.Y;
    pFVar34[1].PackingBias.field0_0x0._s_0.X = dVar24;
    pFVar34[1].PackingBias.field0_0x0._s_0.Y = pFVar36[-1].PackingBias.field0_0x0._s_0.Y;
    pFVar35->Id = iVar26;
    *(undefined4 *)&pFVar35->field_0x4 = uVar27;
    pFVar36[-1].Triangles.AllocatorInstance.Data = pFVar3;
    pFVar36[-1].Triangles.ArrayNum = iVar28;
    pFVar36[-1].Triangles.ArrayMax = iVar29;
    pFVar36[-1].MinUV.field0_0x0._s_0.X = dVar4;
    pFVar36[-1].MinUV.field0_0x0._s_0.Y = dVar5;
    pFVar36[-1].MaxUV.field0_0x0._s_0.X = dVar6;
    pFVar36[-1].MaxUV.field0_0x0._s_0.Y = dVar7;
    pFVar36[-1].UVArea = dVar8;
    pFVar36[-1].ScaleToWorld = dVar9;
    pFVar36[-1].UVScale.field0_0x0._s_0.X = dVar10;
    pFVar36[-1].UVScale.field0_0x0._s_0.Y = dVar11;
    pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.X = dVar12;
    pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.Y = dVar13;
    pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.X = dVar14;
    pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.Y = dVar15;
    pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.X = dVar16;
    pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.Y = dVar17;
    pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.X = dVar18;
    pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.Y = dVar19;
    pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.X = dVar20;
    pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.Y = dVar21;
    pFVar36[-1].PackingBias.field0_0x0._s_0.X = dVar22;
    pFVar36[-1].PackingBias.field0_0x0._s_0.Y = dVar2;
    goto LAB_1435d9c60;
  }
  local_3f0 = *(undefined8 *)pFVar37;
  pFStack_3e8 = (pFVar37->Triangles).AllocatorInstance.Data;
  local_340 = (pFVar37->PackingBias).field0_0x0._s_0.Y;
  local_3f8._0_4_ = (int)local_3f8 + -1;
  local_3e0._0_4_ = (pFVar37->Triangles).ArrayNum;
  local_3e0._4_4_ = (pFVar37->Triangles).ArrayMax;
  dStack_3d8 = (pFVar37->MinUV).field0_0x0._s_0.X;
  local_3d0 = (pFVar37->MinUV).field0_0x0._s_0.Y;
  dStack_3c8 = (pFVar37->MaxUV).field0_0x0._s_0.X;
  local_3c0 = (pFVar37->MaxUV).field0_0x0._s_0.Y;
  dStack_3b8 = pFVar37->UVArea;
  local_3b0 = pFVar37->ScaleToWorld;
  dStack_3a8 = (pFVar37->UVScale).field0_0x0._s_0.X;
  local_3a0 = (pFVar37->UVScale).field0_0x0._s_0.Y;
  dStack_398 = (pFVar37->UVRotation).Row0.field0_0x0._s_0.X;
  local_390 = (pFVar37->UVRotation).Row0.field0_0x0._s_0.Y;
  dStack_388 = (pFVar37->UVRotation).Row1.field0_0x0._s_0.X;
  local_380 = (pFVar37->UVRotation).Row1.field0_0x0._s_0.Y;
  dStack_378 = (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.X;
  local_370 = (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.Y;
  dStack_368 = (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.X;
  local_360 = (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.Y;
  dStack_358 = (pFVar37->OrientationBiasShift).field0_0x0._s_0.X;
  local_350 = (pFVar37->OrientationBiasShift).field0_0x0._s_0.Y;
  dStack_348 = (pFVar37->PackingBias).field0_0x0._s_0.X;
  uVar25 = *(undefined4 *)&pFVar35->field_0x4;
  pFVar3 = pFVar36[-1].Triangles.AllocatorInstance.Data;
  lVar31 = (longlong)pFVar35 + (-0xb8 - (longlong)pFVar37);
  pFVar37->Id = pFVar35->Id;
  *(undefined4 *)&pFVar37->field_0x4 = uVar25;
  (pFVar37->Triangles).AllocatorInstance.Data = pFVar3;
  iVar30 = pFVar36[-1].Triangles.ArrayMax;
  dVar2 = pFVar36[-1].MinUV.field0_0x0._s_0.X;
  (pFVar37->Triangles).ArrayNum = pFVar36[-1].Triangles.ArrayNum;
  (pFVar37->Triangles).ArrayMax = iVar30;
  (pFVar37->MinUV).field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].MaxUV.field0_0x0._s_0.X;
  (pFVar37->MinUV).field0_0x0._s_0.Y = pFVar36[-1].MinUV.field0_0x0._s_0.Y;
  (pFVar37->MaxUV).field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].UVArea;
  (pFVar37->MaxUV).field0_0x0._s_0.Y = pFVar36[-1].MaxUV.field0_0x0._s_0.Y;
  pFVar37->UVArea = dVar2;
  dVar2 = pFVar36[-1].UVScale.field0_0x0._s_0.X;
  pFVar37->ScaleToWorld = pFVar36[-1].ScaleToWorld;
  (pFVar37->UVScale).field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.X;
  (pFVar37->UVScale).field0_0x0._s_0.Y = pFVar36[-1].UVScale.field0_0x0._s_0.Y;
  (pFVar37->UVRotation).Row0.field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.X;
  (pFVar37->UVRotation).Row0.field0_0x0._s_0.Y = pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.Y;
  (pFVar37->UVRotation).Row1.field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.X;
  (pFVar37->UVRotation).Row1.field0_0x0._s_0.Y = pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.Y;
  (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.X;
  (pFVar37->UVPackingScale).Row0.field0_0x0._s_0.Y =
       pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.Y;
  (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.X;
  (pFVar37->UVPackingScale).Row1.field0_0x0._s_0.Y =
       pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.Y;
  (pFVar37->OrientationBiasShift).field0_0x0._s_0.X = dVar2;
  dVar2 = pFVar36[-1].PackingBias.field0_0x0._s_0.X;
  (pFVar37->OrientationBiasShift).field0_0x0._s_0.Y =
       pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.Y;
  (pFVar37->PackingBias).field0_0x0._s_0.X = dVar2;
  (pFVar37->PackingBias).field0_0x0._s_0.Y = pFVar36[-1].PackingBias.field0_0x0._s_0.Y;
  *(undefined8 *)pFVar35 = local_3f0;
  pFVar36[-1].Triangles.AllocatorInstance.Data = pFStack_3e8;
  pFVar36[-1].Triangles.ArrayNum = (undefined4)local_3e0;
  pFVar36[-1].Triangles.ArrayMax = local_3e0._4_4_;
  pFVar36[-1].MinUV.field0_0x0._s_0.X = dStack_3d8;
  pFVar36[-1].MinUV.field0_0x0._s_0.Y = local_3d0;
  pFVar36[-1].MaxUV.field0_0x0._s_0.X = dStack_3c8;
  pFVar36[-1].MaxUV.field0_0x0._s_0.Y = local_3c0;
  pFVar36[-1].UVArea = dStack_3b8;
  pFVar36[-1].ScaleToWorld = local_3b0;
  pFVar36[-1].UVScale.field0_0x0._s_0.X = dStack_3a8;
  pFVar36[-1].UVScale.field0_0x0._s_0.Y = local_3a0;
  pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.X = dStack_398;
  pFVar36[-1].UVRotation.Row0.field0_0x0._s_0.Y = local_390;
  pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.X = dStack_388;
  pFVar36[-1].UVRotation.Row1.field0_0x0._s_0.Y = local_380;
  pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.X = dStack_378;
  pFVar36[-1].UVPackingScale.Row0.field0_0x0._s_0.Y = local_370;
  pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.X = dStack_368;
  pFVar36[-1].UVPackingScale.Row1.field0_0x0._s_0.Y = local_360;
  pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.X = dStack_358;
  pFVar36[-1].OrientationBiasShift.field0_0x0._s_0.Y = local_350;
  pFVar36[-1].PackingBias.field0_0x0._s_0.X = dStack_348;
  pFVar36[-1].PackingBias.field0_0x0._s_0.Y = local_340;
  lVar31 = lVar31 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar31),8);
  lVar32 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar33 - (longlong)pFVar38),8) +
           ((longlong)pFVar33 - (longlong)pFVar38);
  if ((lVar31 >> 7) - (lVar31 >> 0x3f) < (lVar32 >> 7) - (lVar32 >> 0x3f)) {
    if (pFVar38 < pFVar33) {
      *ppFVar39 = pFVar38;
      ppFVar39[1] = pFVar33;
      *(int *)(ppFVar39 + 2) = (int)local_3f8;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar35 <= pFVar37 + 1) goto LAB_1435da094;
    pFVar33 = pFVar36 + -2;
    pFVar38 = pFVar37;
  }
  else {
    if (pFVar37 + 1 < pFVar35) {
      *ppFVar39 = pFVar37;
      ppFVar39[1] = pFVar36 + -2;
      *(int *)(ppFVar39 + 2) = (int)local_3f8;
      ppFVar39 = ppFVar39 + 3;
    }
    if (pFVar33 <= pFVar38) goto LAB_1435da094;
  }
  lVar31 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar33 - (longlong)pFVar38),8) +
           ((longlong)pFVar33 - (longlong)pFVar38);
  iVar30 = ((int)(lVar31 >> 7) - (int)(lVar31 >> 0x3f)) + 1;
  pFVar37 = pFVar38;
  if ((int)local_3f8 == 0) goto LAB_1435da084;
  goto LAB_1435d9ab0;
}

// Launch<`UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>_> @ 1435da2c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>_::__l2::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FTaskBase *this;
  undefined7 in_register_00000081;
  undefined4 *puVar7;
  ETaskFlags in_stack_00000030;
  
  puVar7 = (undefined4 *)CONCAT71(in_register_00000081,param_3);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____ConstructDenseUniformMeshPointSampling_VFDynamicMesh3_Geometry_UE___UELocal__YAXAEBVFDynamicMesh3_Geometry_UE__NNHAEBUFNonUniformSamplingConfig_2_HAEAUFDenseSamplePointSet_2_H_Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)&this[1]._padding_ = *puVar7;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar4;
    *(undefined4 *)&this[1]._padding_ = uVar5;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = uVar6;
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____ConstructDenseUniformMeshPointSampling_VFDynamicMesh3_Geometry_UE___UELocal__YAXAEBVFDynamicMesh3_Geometry_UE__NNHAEBUFNonUniformSamplingConfig_2_HAEAUFDenseSamplePointSet_2_H_Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Merge<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,`UE::Geometry::FMeshConnectedComponents::SortByCount'::__l5::<lambda_1>_>_> @ 1435da3d0

void __cdecl
AlgoImpl::
Merge<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l5::<lambda_1>_>_>
          (FComponent **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_public:_void___cdecl_UE::Geometry::FMeshConnectedComponents::SortByCount(bool)_::_5_::<lambda_1>_>
          param_5)

{
  FComponent **ppFVar1;
  FComponent *pFVar2;
  int iVar3;
  FComponent **ppFVar4;
  FComponent **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FComponent **ppFVar12;
  FComponent **ppFVar13;
  FComponent **ppFVar5;
  
  if (0 < param_2) {
    iVar8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar8) {
        uVar9 = param_2 - iVar8;
        do {
          iVar3 = (uVar9 >> 1) + iVar11;
          if ((param_1[param_2]->Indices).ArrayNum <=
              (param_1[(longlong)iVar3 + (longlong)iVar8]->Indices).ArrayNum) {
            iVar11 = iVar3 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar8 = iVar8 + iVar11;
      if (param_2 <= iVar8) {
        return;
      }
      iVar11 = 0;
      ppFVar1 = param_1 + iVar8;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if (((*ppFVar1)->Indices).ArrayNum <
              (param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->Indices).ArrayNum) {
            iVar11 = uVar10 + iVar11 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar7 = (iVar11 - iVar8) + param_2;
      iVar3 = param_2 - iVar8;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        ppFVar4 = ppFVar1 + iVar3;
        ppFVar12 = ppFVar1;
        ppFVar5 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar6 = ppFVar4 + 1;
            ppFVar13 = ppFVar12 + 1;
            pFVar2 = *ppFVar12;
            *ppFVar12 = *ppFVar4;
            *ppFVar4 = pFVar2;
            ppFVar12 = ppFVar13;
            if (ppFVar6 == ppFVar1 + iVar7) break;
            ppFVar4 = ppFVar6;
            if (ppFVar13 == ppFVar5) {
              ppFVar5 = ppFVar6;
            }
          }
          ppFVar4 = ppFVar5;
        } while (ppFVar13 != ppFVar5);
      }
      param_2 = param_2 + iVar11;
      iVar8 = iVar8 + 1 + iVar11;
    } while (iVar8 < param_2);
  }
  return;
}

// Merge<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,`UE::Geometry::FMeshConnectedComponents::SortByCount'::__l7::<lambda_2>_>_> @ 1435da530

void __cdecl
AlgoImpl::
Merge<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l7::<lambda_2>_>_>
          (FComponent **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_public:_void___cdecl_UE::Geometry::FMeshConnectedComponents::SortByCount(bool)_::_7_::<lambda_2>_>
          param_5)

{
  FComponent **ppFVar1;
  FComponent *pFVar2;
  int iVar3;
  FComponent **ppFVar4;
  FComponent **ppFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FComponent **ppFVar12;
  FComponent **ppFVar13;
  FComponent **ppFVar5;
  
  if (0 < param_2) {
    iVar8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar11 = 0;
      if (0 < param_2 - iVar8) {
        uVar9 = param_2 - iVar8;
        do {
          iVar3 = (uVar9 >> 1) + iVar11;
          if ((param_1[(longlong)iVar3 + (longlong)iVar8]->Indices).ArrayNum <=
              (param_1[param_2]->Indices).ArrayNum) {
            iVar11 = iVar3 + (uVar9 & 1);
          }
          uVar10 = uVar9 >> 1;
          uVar9 = uVar9 >> 1;
        } while (uVar10 != 0);
      }
      iVar8 = iVar8 + iVar11;
      if (param_2 <= iVar8) {
        return;
      }
      iVar11 = 0;
      ppFVar1 = param_1 + iVar8;
      if (0 < param_3 - param_2) {
        uVar9 = param_3 - param_2;
        iVar11 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if ((param_1[(longlong)(int)(uVar10 + iVar11) + (longlong)param_2]->Indices).ArrayNum <
              ((*ppFVar1)->Indices).ArrayNum) {
            iVar11 = uVar10 + iVar11 + (uVar9 & 1);
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
      }
      iVar7 = (iVar11 - iVar8) + param_2;
      iVar3 = param_2 - iVar8;
      if ((iVar3 != 0) && (iVar3 < iVar7)) {
        ppFVar4 = ppFVar1 + iVar3;
        ppFVar12 = ppFVar1;
        ppFVar5 = ppFVar1 + iVar3;
        do {
          while( true ) {
            ppFVar6 = ppFVar4 + 1;
            ppFVar13 = ppFVar12 + 1;
            pFVar2 = *ppFVar12;
            *ppFVar12 = *ppFVar4;
            *ppFVar4 = pFVar2;
            ppFVar12 = ppFVar13;
            if (ppFVar6 == ppFVar1 + iVar7) break;
            ppFVar4 = ppFVar6;
            if (ppFVar13 == ppFVar5) {
              ppFVar5 = ppFVar6;
            }
          }
          ppFVar4 = ppFVar5;
        } while (ppFVar13 != ppFVar5);
      }
      param_2 = param_2 + iVar11;
      iVar8 = iVar8 + 1 + iVar11;
    } while (iVar8 < param_2);
  }
  return;
}

// OrderPoints<float> @ 1435dc030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
PriorityOrderPointsLocal::OrderPoints<float>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,
          TArrayView<TArrayView<float_const_,int>_const_,int> *param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined4 uVar2;
  TVector<float> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FIdentityFunctor FVar6;
  longlong lVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArrayView<TArrayView<float_const_,int>_const_,int> *pTVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  long64 lVar19;
  TArrayView<float_const_,int> *pTVar20;
  float *pfVar21;
  byte bVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  size_t sVar29;
  longlong *plVar30;
  FScriptContainerElement *pFVar31;
  ForElementType<FSetElementId> FVar32;
  ForElementType<unsigned_int> FVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStackY_438 [32];
  FIdentityFunctor local_3e8;
  bool local_3e7;
  FIdentityFunctor local_3e6 [2];
  float local_3e4;
  float local_3e0;
  uint local_3dc;
  ForAnyElementType local_3d8;
  undefined8 local_3d0;
  uint local_3c8;
  undefined1 local_3c4 [4];
  TArray<int,TSizedDefaultAllocator<32>_> *local_3c0;
  int local_3b8;
  TArrayView<TArrayView<float_const_,int>_const_,int> *local_3b0;
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  int local_398;
  ulonglong local_390;
  size_t local_388;
  ForAnyElementType *local_380;
  int local_378;
  int local_374;
  int local_370;
  ForAnyElementType local_368;
  int local_360 [2];
  TVector<float>_u_0 local_358;
  int local_348;
  int local_344;
  int local_340;
  longlong *local_338;
  int iStack_330;
  uint uStack_32c;
  TBitArray<FDefaultBitArrayAllocator> *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  int local_318;
  undefined4 uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  longlong local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  long64 local_2e8;
  long64 local_2e0;
  longlong *local_2d8;
  int local_2d0;
  int local_2cc;
  undefined1 local_2c8 [8];
  int local_2c0;
  int local_2bc;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  FSparseArrayAllocationInfo local_258;
  FSparseArrayAllocationInfo local_248;
  DescendingPredicate<float> local_238;
  DescendingPredicate<float> local_228 [2];
  undefined4 local_1fc;
  undefined4 local_1dc;
  undefined1 local_1d8 [32];
  ForElementType<unsigned_int> local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  ForElementType<FSetElementId> local_198;
  int local_190;
  longlong local_188;
  undefined8 local_180;
  TBitArray<FDefaultBitArrayAllocator> local_178;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  iVar17 = param_2->ArrayNum;
  sVar29 = (size_t)iVar17;
  iVar26 = 8;
  if (param_6 < 8) {
    iVar26 = param_6;
  }
  local_348 = 1;
  if (1 < iVar26) {
    local_348 = iVar26;
  }
  local_3c0 = param_1;
  local_3b8 = iVar17;
  local_3b0 = param_3;
  local_370 = param_4;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar17,Default);
  if (iVar17 != 0) {
    uVar24 = 0;
    local_300 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    uVar13 = local_300;
    uStack_2f8 = _UNK_150a9e6b8;
    uVar14 = uStack_2f8;
    uStack_2f8._0_4_ = (float)_UNK_150a9e6b8;
    uStack_2f8._4_4_ = (float)((ulonglong)_UNK_150a9e6b8 >> 0x20);
    local_300._4_4_ = (float)((ulonglong)___xmm_ff7fffff7f7fffff7f7fffff7f7fffff >> 0x20);
    local_300._0_4_ = (float)___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
    fVar44 = local_300._4_4_;
    fVar38 = (float)local_300;
    fVar42 = uStack_2f8._4_4_;
    fVar43 = __real_ff7fffff;
    fVar45 = __real_ff7fffff;
    fVar47 = (float)uStack_2f8;
    local_388 = sVar29;
    if (0 < iVar17) {
      lVar35 = 0;
      lVar28 = 0;
      local_300 = uVar13;
      uStack_2f8 = uVar14;
      do {
        uVar25 = 0;
        if ((int)uVar24 < param_1->ArrayNum) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = param_2->ArrayNum;
        *(uint *)((param_1->AllocatorInstance).Data + lVar35 * 4) = uVar24;
        uVar25 = 0;
        if ((int)uVar24 < iVar17) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar3 = param_2->DataPtr;
        fVar46 = *(float *)((longlong)&pTVar3->field0_0x0 + lVar28);
        if (fVar46 < fVar38) {
          fVar38 = fVar46;
        }
        if (fVar42 < fVar46) {
          fVar42 = fVar46;
        }
        fVar46 = *(float *)((longlong)&pTVar3->field0_0x0 + lVar28 + 4);
        if (fVar46 < fVar44) {
          fVar44 = fVar46;
        }
        if (fVar43 < fVar46) {
          fVar43 = fVar46;
        }
        fVar46 = *(float *)((longlong)&pTVar3->field0_0x0 + lVar28 + 8);
        if (fVar46 < fVar47) {
          fVar47 = fVar46;
        }
        if (fVar45 < fVar46) {
          fVar45 = fVar46;
        }
        uVar24 = uVar24 + 1;
        lVar35 = lVar35 + 1;
        lVar28 = lVar28 + 0xc;
        param_3 = local_3b0;
        iVar17 = local_3b8;
        uVar13 = local_300;
        uVar14 = uStack_2f8;
      } while (lVar35 < (longlong)sVar29);
    }
    uStack_2f8 = uVar14;
    local_300 = uVar13;
    fVar46 = __real_3f000000;
    local_368.Data = (FScriptContainerElement *)0x0;
    local_360[0] = 0;
    local_360[1] = 0;
    fVar39 = (fVar42 + fVar38) * __real_3f000000;
    fVar40 = (fVar43 + fVar44) * __real_3f000000;
    fVar41 = (fVar45 + fVar47) * __real_3f000000;
    local_3e4 = fVar38;
    local_3e0 = fVar44;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar17,&local_368,local_360,local_360 + 1);
    sVar29 = local_388;
    uVar24 = 0;
    if (0 < (longlong)local_388) {
      lVar35 = 0;
      lVar28 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar24 < param_2->ArrayNum) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar3 = param_2->DataPtr;
        fVar44 = *(float *)((longlong)&pTVar3->field0_0x0 + lVar28);
        fVar38 = *(float *)((longlong)&pTVar3->field0_0x0 + lVar28 + 4);
        fVar46 = *(float *)((longlong)&pTVar3->field0_0x0 + lVar28 + 8);
        uVar25 = 0;
        if ((int)uVar24 < local_360[0]) {
          uVar25 = ~uVar24 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar24 = uVar24 + 1;
        lVar35 = lVar35 + 1;
        *(float *)(local_368.Data + lVar28) = fVar44 - fVar39;
        *(float *)(local_368.Data + lVar28 + 4) = fVar38 - fVar40;
        *(float *)(local_368.Data + lVar28 + 8) = fVar46 - fVar41;
        lVar28 = lVar28 + 0xc;
        param_3 = local_3b0;
        fVar44 = local_3e0;
        fVar38 = local_3e4;
        fVar46 = __real_3f000000;
      } while (lVar35 < (longlong)sVar29);
    }
    uVar24 = param_3->ArrayNum;
    local_380 = &local_368;
    uVar25 = 0;
    fVar44 = (fVar43 - fVar44) * fVar46;
    fVar42 = (fVar42 - fVar38) * fVar46;
    fVar46 = (fVar45 - fVar47) * fVar46;
    fVar38 = (fVar44 + __real_3a83126f) -
             ((float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000) - __real_3a83126f);
    fVar44 = (fVar46 + __real_3a83126f) -
             ((float)((uint)fVar46 ^ __xmm_80000000800000008000000080000000) - __real_3a83126f);
    fVar42 = (fVar42 + __real_3a83126f) -
             ((float)((uint)fVar42 ^ __xmm_80000000800000008000000080000000) - __real_3a83126f);
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    if (fVar44 <= 0.0) {
      fVar44 = 0.0;
    }
    if (fVar42 <= 0.0) {
      fVar42 = 0.0;
    }
    if (fVar44 <= fVar38) {
      fVar44 = fVar38;
    }
    if (fVar44 <= fVar42) {
      fVar44 = fVar42;
    }
    fVar38 = (float)uVar24;
    if (0 < (int)uVar24) {
      lVar35 = 0;
      lVar28 = 0;
      local_3e0 = (float)uVar24;
      do {
        uVar27 = 0;
        if ((int)uVar25 < (int)uVar24) {
          uVar27 = ~uVar25 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar38 = (float)uVar25;
        if (*(int *)((longlong)&param_3->DataPtr->ArrayNum + lVar28) == 0) break;
        uVar25 = uVar25 + 1;
        lVar35 = lVar35 + 1;
        lVar28 = lVar28 + 0x10;
        fVar38 = local_3e0;
      } while (lVar35 < (int)uVar24);
    }
    local_3e0 = fVar38;
    fVar38 = __real_bf000000;
    local_3c8 = 0;
    local_3a8.Data = (FScriptContainerElement *)0x0;
    iVar17 = 0x1e;
    if (param_5 < 0x1e) {
      iVar17 = param_5;
    }
    local_3a0 = 0;
    local_188 = 0;
    iVar26 = 1;
    if (1 < iVar17) {
      iVar26 = iVar17;
    }
    local_180 = 0;
    local_340 = 1 << ((byte)iVar26 & 0x1f);
    local_178.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_178.NumBits = 0;
    local_178.MaxBits = 0x80;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = (undefined1 *)0x0;
    local_140 = 0;
    local_138.Elements._0_8_ = 0;
    local_138.Elements._8_8_ = 0;
    local_138.Elements._32_8_ = 0;
    local_138.Elements._40_4_ = 0;
    local_138.Elements._44_4_ = 0x80;
    local_138.Elements._48_4_ = 0xffffffff;
    local_138.Elements._52_4_ = 0;
    local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_138.HashSize = 0;
    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8._8_8_ = 0;
    local_1b8 = (ForElementType<unsigned_int>)0x0;
    local_1b0 = 0;
    local_1ac = 0x80;
    local_1a8 = -1;
    local_1a4 = 0;
    local_198 = (ForElementType<FSetElementId>)0x0;
    local_190 = 0;
    local_3d8.Data = (FScriptContainerElement *)0x0;
    local_3d0 = 0;
    local_398 = 2;
    uVar24 = 0;
    if (0 < local_3b8) {
LAB_1435dc663:
      iVar26 = local_398;
      iVar17 = local_3b8;
      uVar24 = local_3c8;
      uVar37 = 0;
      if (local_398 <= local_340) {
        TSet<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>,TDefaultMapHashableKeyFuncs<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData,0>,FDefaultSetAllocator>
        ::Reset(&local_188);
        if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements(&local_138);
          bVar15 = (longlong)local_138.Elements._8_8_ < 0;
          local_138.Elements._8_8_ = local_138.Elements._8_8_ & 0xffffffff00000000;
          if (bVar15) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)&local_138,0,
                       (int *)&local_138.Elements.field_0xc);
          }
          local_138.Elements._48_4_ = 0xffffffff;
          local_138.Elements._52_4_ = 0;
          local_138.Elements._40_4_ = 0;
        }
        if (local_1d8._8_4_ != local_1a4) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8);
          bVar15 = (longlong)local_1d8._8_8_ < 0;
          local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
          if (bVar15) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
          }
          local_1a8 = -1;
          local_1a4 = 0;
          local_1b0 = 0;
        }
        uVar11 = local_3a0;
        uVar36 = local_3a0 >> 0x20;
        local_3a0 = local_3a0 & 0xffffffff00000000;
        iVar1 = iVar26 * local_348 + 2;
        local_390 = CONCAT44(local_390._4_4_,iVar1);
        fVar42 = fVar44 / (float)(iVar26 * local_348);
        local_358._s_0.X = fVar42 * fVar38;
        local_358._s_0.Y = local_358._s_0.X;
        local_358._s_0.Z = local_358._s_0.X;
        if (((longlong)uVar11 < 0) && ((int)uVar36 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&local_3a8,0,(int *)((longlong)&local_3a0 + 4));
        }
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar17,&local_3a8,(int *)&local_3a0,
                            (int *)((longlong)&local_3a0 + 4));
        memset(local_3a8.Data + iVar17,0,local_388);
        pTVar8 = local_3c0;
        if (0 < (int)uVar24) {
          uVar36 = uVar37;
          do {
            uVar25 = (uint)uVar37;
            uVar24 = 0;
            if ((int)uVar25 < pTVar8->ArrayNum) {
              uVar24 = ~uVar25 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar17 = *(int *)((pTVar8->AllocatorInstance).Data + uVar36);
            local_2e8 = `PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
                                  (&local_380,iVar17,&UE::Math::TVector<float>::ZeroVector,
                                   fVar44 / (float)iVar26,(longlong)iVar26);
            TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
                      (&local_138,(long64 *)(local_2c8 + 4),(bool *)&local_2e8);
            local_2e0 = `PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
                                  (&local_380,iVar17,(TVector<float> *)&local_358._s_0,fVar42,
                                   (longlong)iVar1);
            TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                      ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8,
                       (long64 *)local_2c8,(bool *)&local_2e0);
            uVar37 = (ulonglong)(uVar25 + 1);
            uVar36 = uVar36 + 4;
            uVar24 = local_3c8;
          } while ((int)(uVar25 + 1) < (int)local_3c8);
        }
        lVar28 = (longlong)(int)uVar24;
        bVar15 = true;
        param_1 = local_3c0;
        if (lVar28 < (longlong)local_388) {
          lVar34 = (longlong)local_398;
          lVar35 = (longlong)(int)local_390;
LAB_1435dc900:
          pTVar8 = local_3c0;
          uVar25 = 0;
          if ((int)uVar24 < local_3c0->ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar17 = *(int *)((pTVar8->AllocatorInstance).Data + lVar28 * 4);
          local_308 = `PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
                                (&local_380,iVar17,&UE::Math::TVector<float>::ZeroVector,
                                 fVar44 / (float)iVar26,lVar34);
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            FVar32 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar32 = local_138.Hash.SecondaryData;
            }
            for (iVar1 = *(int *)((longlong)FVar32 +
                                 ((local_308 >> 0x20) * 0x17 + local_308 &
                                 (ulonglong)(local_138.HashSize - 1)) * 4); iVar1 != -1;
                iVar1 = *(int *)(local_138.Elements._0_8_ + (longlong)iVar1 * 0x10 + 8)) {
              if (*(longlong *)(local_138.Elements._0_8_ + (longlong)iVar1 * 0x10) == local_308)
              goto LAB_1435dcad9;
            }
          }
          lVar19 = `PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
                             (&local_380,iVar17,(TVector<float> *)&local_358._s_0,fVar42,lVar35);
          if (local_1d8._8_4_ != local_1a4) {
            FVar32 = (ForElementType<FSetElementId>)local_1a0;
            if (local_198 != (ForElementType<FSetElementId>)0x0) {
              FVar32 = local_198;
            }
            for (iVar17 = *(int *)((longlong)FVar32 +
                                  ((lVar19 >> 0x20) * 0x17 + lVar19 & (ulonglong)(local_190 - 1)) *
                                  4); iVar17 != -1;
                iVar17 = *(int *)(local_1d8._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
              if (*(longlong *)(local_1d8._0_8_ + (longlong)iVar17 * 0x10) == lVar19)
              goto LAB_1435dcad9;
            }
          }
          uVar25 = (int)((ulonglong)local_308 >> 0x20) * 0x17 + (int)local_308;
          if ((int)local_180 != local_154) {
            puVar23 = local_150;
            if (local_148 != (undefined1 *)0x0) {
              puVar23 = local_148;
            }
            iVar17 = *(int *)(puVar23 + (ulonglong)(local_140 - 1U & uVar25) * 4);
            while (iVar17 != -1) {
              plVar30 = (longlong *)((longlong)iVar17 * 0x20 + local_188);
              if (*plVar30 == local_308) {
                if (plVar30 != (longlong *)0x0) goto LAB_1435dcb1d;
                break;
              }
              iVar17 = (int)plVar30[3];
            }
          }
          local_2d8 = &local_308;
          TSet<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>,TDefaultMapHashableKeyFuncs<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                    (&local_188,(uint)&local_344,
                     (TKeyInitializer<__int64_const_&> *)(ulonglong)uVar25,(bool *)&local_2d8);
          plVar30 = (longlong *)((longlong)local_344 * 0x20 + local_188);
LAB_1435dcb1d:
          uVar25 = 0;
          if ((int)uVar24 < local_3c0->ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar17 = *(int *)((local_3c0->AllocatorInstance).Data + lVar28 * 4);
          if ((int)local_3e0 < 1) {
            if ((int)plVar30[1] == -1) {
              *(uint *)(plVar30 + 1) = uVar24;
              bVar22 = 1;
            }
            else {
LAB_1435dcc65:
              bVar22 = 0;
            }
          }
          else {
            if ((int)plVar30[1] != -1) {
              pTVar20 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[](local_3b0,0)
              ;
              pfVar21 = TArrayView<float_const_,int>::operator[](pTVar20,iVar17);
              if (*(float *)(plVar30 + 2) < *pfVar21) {
                pTVar20 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[]
                                    (local_3b0,0);
                pfVar21 = TArrayView<float_const_,int>::operator[](pTVar20,iVar17);
                *(float *)(plVar30 + 2) = *pfVar21;
                *(uint *)(plVar30 + 1) = uVar24;
              }
              if (1 < (int)local_3e0) {
                pTVar20 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[]
                                    (local_3b0,1);
                pfVar21 = TArrayView<float_const_,int>::operator[](pTVar20,iVar17);
                if (*(float *)((longlong)plVar30 + 0x14) <= *pfVar21 &&
                    *pfVar21 != *(float *)((longlong)plVar30 + 0x14)) {
                  pTVar20 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[]
                                      (local_3b0,1);
                  pfVar21 = TArrayView<float_const_,int>::operator[](pTVar20,iVar17);
                  *(float *)((longlong)plVar30 + 0x14) = *pfVar21;
                  *(uint *)((longlong)plVar30 + 0xc) = uVar24;
                }
              }
              goto LAB_1435dcc65;
            }
            *(uint *)((longlong)plVar30 + 0xc) = uVar24;
            *(uint *)(plVar30 + 1) = uVar24;
            pTVar20 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[](local_3b0,0);
            pfVar21 = TArrayView<float_const_,int>::operator[](pTVar20,iVar17);
            *(float *)(plVar30 + 2) = *pfVar21;
            if (1 < (int)local_3e0) {
              pTVar20 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[](local_3b0,1)
              ;
              pfVar21 = TArrayView<float_const_,int>::operator[](pTVar20,iVar17);
              *(float *)((longlong)plVar30 + 0x14) = *pfVar21;
            }
            bVar22 = 1;
          }
          bVar15 = (bool)(bVar15 & bVar22);
          goto LAB_1435dcc6a;
        }
      }
    }
LAB_1435ddade:
    pTVar9 = local_3b0;
    iVar17 = local_3b8;
    if (((0 < (int)local_3e0) && ((local_370 < 0 || ((int)uVar24 < local_370)))) &&
       ((int)uVar24 < local_3b8)) {
      if ((local_3b0->ArrayNum < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar20 = pTVar9->DataPtr;
      pfVar21 = pTVar20->DataPtr;
      uVar14._0_4_ = pTVar20->ArrayNum;
      uVar14._4_4_ = *(undefined4 *)&pTVar20->field_0xc;
      uVar25 = 0;
      if ((int)uVar24 < param_1->ArrayNum) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar31 = (param_1->AllocatorInstance).Data;
      if (((int)(iVar17 - uVar24) < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_228[0].CompValues.DataPtr = pfVar21;
      local_228[0].CompValues._8_8_ = uVar14;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
                ((int *)(pFVar31 + (longlong)(int)uVar24 * 4),iVar17 - uVar24,local_3e6[0],local_228
                );
    }
    if (local_3d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data);
    }
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    local_140 = 0;
    if (local_148 != (undefined1 *)0x0) {
      FMemory::Free(local_148);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<__int64,_PriorityOrderPointsLocal::OrderPoints<float>_::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188);
    if (local_3a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data);
    }
    if (local_368.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data);
    }
  }
  return;
LAB_1435dcad9:
  bVar15 = false;
LAB_1435dcc6a:
  lVar7 = local_3d0;
  uVar24 = uVar24 + 1;
  lVar28 = lVar28 + 1;
  if ((longlong)local_388 <= lVar28) goto code_r0x0001435dcc7a;
  goto LAB_1435dc900;
code_r0x0001435dcc7a:
  param_1 = local_3c0;
  uVar24 = local_3c8;
  if (bVar15) goto LAB_1435ddade;
  uVar24 = local_3d0._4_4_;
  local_3e4 = 0.0;
  local_3d0 = (ulonglong)local_3d0._4_4_ << 0x20;
  if ((lVar7 < 0) && (uVar24 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_3d8,0,(int *)((longlong)&local_3d0 + 4));
  }
  iVar17 = local_178.NumBits;
  iStack_330 = 0;
  uStack_32c = 1;
  local_318 = 0;
  uStack_31c = 0;
  if (local_178.NumBits != 0) {
    FVar33 = (ForElementType<unsigned_int>)&local_178;
    if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar33 = local_178.AllocatorInstance.SecondaryData;
    }
    uVar24 = *(uint *)FVar33;
    while (uVar24 == 0) {
      lVar28 = (longlong)iStack_330;
      local_318 = local_318 + 0x20;
      iStack_330 = iStack_330 + 1;
      uStack_31c = local_178.NumBits;
      if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_330) goto LAB_1435dcd40;
      uVar24 = *(uint *)((uchar *)((longlong)FVar33 + 4) + lVar28 * 4);
    }
    uStack_32c = -uVar24 & uVar24;
    uVar37 = (ulonglong)uStack_32c * 2 + 1;
    lVar28 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_2c0 = (int)lVar28;
    uStack_31c = local_2c0 + -1 + local_318;
    if (local_178.NumBits < (int)uStack_31c) {
      uStack_31c = local_178.NumBits;
    }
  }
LAB_1435dcd40:
  local_338 = &local_188;
  uStack_314 = local_1fc;
  local_328 = &local_178;
  uVar24 = local_178.NumBits & 0xffffffe0;
  iStack_310 = (int)local_180 - local_154;
  TStack_2b0._padding_ = CONCAT44(uStack_32c,iStack_330);
  uStack_320 = 0xffffffff;
  TStack_2b0.CurrentBitIndex = uStack_31c;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar26 = local_178.NumBits >> 5;
  TStack_2b0._28_4_ = local_1fc;
  TStack_2b0.BaseBitIndex = local_318;
  uStack_290 = CONCAT44(uStack_30c,iStack_310);
  bVar22 = (byte)local_178.NumBits;
  local_3dc = local_178.NumBits;
  local_2b8 = local_338;
  TStack_2b0.Array = local_328;
  if ((local_178.NumBits < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar25 = local_3dc;
  if (iVar17 != local_178.NumBits) {
    FVar33 = (ForElementType<unsigned_int>)&local_178;
    if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar33 = local_178.AllocatorInstance.SecondaryData;
    }
    uVar25 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar33 + (longlong)iVar26 * 4);
    while (uVar25 == 0) {
      lVar28 = (longlong)iVar26;
      uVar24 = uVar24 + 0x20;
      iVar26 = iVar26 + 1;
      if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar26) {
        local_3dc = local_178.NumBits;
        uVar25 = local_178.NumBits;
        goto LAB_1435dce80;
      }
      uVar25 = *(uint *)((uchar *)((longlong)FVar33 + 4) + lVar28 * 4);
    }
    uVar37 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_2bc = (int)lVar28;
    local_3dc = (uVar24 - 1) + local_2bc;
    uVar25 = local_3dc;
    if (local_178.NumBits < (int)local_3dc) {
      local_3dc = local_178.NumBits;
      uVar25 = local_178.NumBits;
    }
  }
LAB_1435dce80:
  while( true ) {
    plVar30 = local_2b8;
    if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
      local_3c4[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3c4);
    }
    iVar17 = local_178.NumBits;
    pTVar8 = local_3c0;
    lVar28 = (longlong)TStack_2b0.CurrentBitIndex;
    if (((TStack_2b0.CurrentBitIndex == uVar25) && (TStack_2b0.Array == &local_178)) &&
       (plVar30 == &local_188)) break;
    lVar35 = *plVar30;
    uVar24 = *(uint *)(lVar28 * 0x20 + 8 + lVar35);
    uVar27 = 0;
    if ((int)uVar24 < local_3c0->ArrayNum) {
      uVar27 = ~uVar24 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar24 = *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar24 * 4);
    uVar27 = 0;
    if ((int)uVar24 < (int)local_3a0) {
      uVar27 = ~uVar24 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10.Data = local_3a8.Data;
    if (local_3a8.Data[(int)uVar24] == (FScriptContainerElement)0x0) {
      lVar19 = `PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
                         (&local_380,uVar24,(TVector<float> *)&local_358._s_0,fVar42,
                          (longlong)(int)local_390);
      local_3e8 = (FIdentityFunctor)0x0;
      if (local_1a4 == 0) {
        iVar26 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                            (int *)(local_1d8 + 0xc));
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),false);
        iVar17 = local_1a8;
      }
      else {
        local_1a4 = local_1a4 + -1;
        iVar17 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10 + 4);
        iVar26 = local_1a8;
        if (local_1a4 != 0) {
          *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar17 * 0x10) = 0xffffffff;
        }
      }
      local_1a8 = iVar17;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1d8,&local_258,iVar26);
      pvVar12 = local_258.Pointer;
      if (local_258.Pointer != (TSparseSetElement<__int64> *)0x0) {
        *(long64 *)local_258.Pointer = lVar19;
        *(undefined4 *)((longlong)local_258.Pointer + 8) = 0xffffffff;
      }
      local_378 = local_258.Index;
      uVar27 = (int)((ulonglong)*(undefined8 *)local_258.Pointer >> 0x20) * 0x17 +
               (int)*(undefined8 *)local_258.Pointer;
      bVar15 = TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TryReplaceExisting
                         ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8
                          ,uVar27,local_258.Pointer,&local_378,(bool *)&local_3e8);
      if (!bVar15) {
        TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RehashOrLink
                  ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8,uVar27
                   ,pvVar12,local_378);
      }
      if (local_3e8 == (FIdentityFunctor)0x0) {
        local_3e4 = (float)((int)local_3e4 + 1);
        FVar10.Data[(int)uVar24] = (FScriptContainerElement)0x1;
        pFVar31 = (FScriptContainerElement *)(lVar35 + 8 + lVar28 * 0x20);
        if (((local_3d8.Data <= pFVar31) &&
            (pFVar31 < local_3d8.Data + (longlong)(int)local_3d0._4_4_ * 4)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = (int)local_3d0;
        if ((int)local_3d0 == local_3d0._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_3d8,(int *)((longlong)&local_3d0 + 4));
        }
        local_3d0 = CONCAT44(local_3d0._4_4_,iVar17 + 1);
        *(undefined4 *)(local_3d8.Data + (longlong)iVar17 * 4) = *(undefined4 *)pFVar31;
      }
    }
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  if (1 < (int)local_3e0) {
    iStack_330 = 0;
    local_318 = 0;
    uStack_32c = 1;
    uStack_31c = 0;
    if (local_178.NumBits != 0) {
      FVar33 = (ForElementType<unsigned_int>)&local_178;
      if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar33 = local_178.AllocatorInstance.SecondaryData;
      }
      uVar24 = *(uint *)FVar33;
      while (uVar24 == 0) {
        lVar28 = (longlong)iStack_330;
        local_318 = local_318 + 0x20;
        iStack_330 = iStack_330 + 1;
        uStack_31c = local_178.NumBits;
        if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iStack_330) goto LAB_1435dd230;
        uVar24 = *(uint *)((uchar *)((longlong)FVar33 + 4) + lVar28 * 4);
      }
      uStack_32c = -uVar24 & uVar24;
      uVar37 = (ulonglong)uStack_32c * 2 + 1;
      lVar28 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_2d0 = (int)lVar28;
      uStack_31c = local_318 + -1 + local_2d0;
      if (local_178.NumBits < (int)uStack_31c) {
        uStack_31c = local_178.NumBits;
      }
    }
LAB_1435dd230:
    local_338 = &local_188;
    uStack_314 = local_1dc;
    local_328 = &local_178;
    uVar24 = local_178.NumBits & 0xffffffe0;
    iStack_310 = (int)local_180 - local_154;
    TStack_280._padding_ = CONCAT44(uStack_32c,iStack_330);
    uStack_320 = 0xffffffff;
    TStack_280.CurrentBitIndex = uStack_31c;
    TStack_280.UnvisitedBitMask = 0xffffffff;
    iVar26 = local_178.NumBits >> 5;
    TStack_280._28_4_ = local_1dc;
    TStack_280.BaseBitIndex = local_318;
    uStack_260 = CONCAT44(uStack_30c,iStack_310);
    bVar22 = (byte)local_178.NumBits;
    local_3dc = local_178.NumBits;
    local_288 = local_338;
    TStack_280.Array = local_328;
    if ((local_178.NumBits < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar25 = local_3dc;
    if (iVar17 != local_178.NumBits) {
      FVar33 = (ForElementType<unsigned_int>)&local_178;
      if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar33 = local_178.AllocatorInstance.SecondaryData;
      }
      uVar25 = -1 << (bVar22 & 0x1f) & *(uint *)((longlong)FVar33 + (longlong)iVar26 * 4);
      while (uVar25 == 0) {
        lVar28 = (longlong)iVar26;
        uVar24 = uVar24 + 0x20;
        iVar26 = iVar26 + 1;
        if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar26) {
          local_3dc = local_178.NumBits;
          uVar25 = local_178.NumBits;
          goto LAB_1435dd370;
        }
        uVar25 = *(uint *)((uchar *)((longlong)FVar33 + 4) + lVar28 * 4);
      }
      uVar37 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_2cc = (int)lVar28;
      local_3dc = local_2cc + -1 + uVar24;
      uVar25 = local_3dc;
      if (local_178.NumBits < (int)local_3dc) {
        local_3dc = local_178.NumBits;
        uVar25 = local_178.NumBits;
      }
    }
LAB_1435dd370:
    while( true ) {
      plVar30 = local_288;
      if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
        local_3e6[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e6);
      }
      pTVar8 = local_3c0;
      if (((TStack_280.CurrentBitIndex == uVar25) && (TStack_280.Array == &local_178)) &&
         (plVar30 == &local_188)) break;
      lVar28 = *plVar30;
      lVar35 = (longlong)TStack_280.CurrentBitIndex * 0x20;
      uVar24 = *(uint *)(lVar35 + 0xc + lVar28);
      uVar27 = 0;
      if ((int)uVar24 < local_3c0->ArrayNum) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar24 = *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar24 * 4);
      uVar27 = 0;
      if ((int)uVar24 < (int)local_3a0) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar10.Data = local_3a8.Data;
      if (local_3a8.Data[(int)uVar24] == (FScriptContainerElement)0x0) {
        lVar19 = `PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
                           (&local_380,uVar24,(TVector<float> *)&local_358._s_0,fVar42,
                            (longlong)(int)local_390);
        local_3e7 = false;
        if (local_1a4 == 0) {
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                              (int *)(local_1d8 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),false);
          iVar17 = local_1a8;
        }
        else {
          local_1a4 = local_1a4 + -1;
          iVar17 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10 + 4);
          iVar26 = local_1a8;
          if (local_1a4 != 0) {
            *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar17 * 0x10) = 0xffffffff;
          }
        }
        local_1a8 = iVar17;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1d8,&local_248,iVar26);
        pvVar12 = local_248.Pointer;
        if (local_248.Pointer != (TSparseSetElement<__int64> *)0x0) {
          *(long64 *)local_248.Pointer = lVar19;
          *(undefined4 *)((longlong)local_248.Pointer + 8) = 0xffffffff;
        }
        local_374 = local_248.Index;
        uVar27 = (int)((ulonglong)*(undefined8 *)local_248.Pointer >> 0x20) * 0x17 +
                 (int)*(undefined8 *)local_248.Pointer;
        bVar15 = TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TryReplaceExisting
                           ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)
                            local_1d8,uVar27,local_248.Pointer,&local_374,&local_3e7);
        if (!bVar15) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RehashOrLink
                    ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8,
                     uVar27,pvVar12,local_374);
        }
        if (local_3e7 == false) {
          local_3e4 = (float)((int)local_3e4 + 1);
          FVar10.Data[(int)uVar24] = (FScriptContainerElement)0x1;
          pFVar31 = (FScriptContainerElement *)(lVar28 + 0xc + lVar35);
          if (((local_3d8.Data <= (FScriptContainerElement *)(lVar28 + 0xc + lVar35)) &&
              (pFVar31 < local_3d8.Data + (longlong)(int)local_3d0._4_4_ * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar17 = (int)local_3d0;
          if ((int)local_3d0 == local_3d0._4_4_) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_3d8,(int *)((longlong)&local_3d0 + 4));
          }
          local_3d0 = CONCAT44(local_3d0._4_4_,iVar17 + 1);
          *(undefined4 *)(local_3d8.Data + (longlong)iVar17 * 4) = *(undefined4 *)pFVar31;
        }
      }
      TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
    }
  }
  uVar37 = (ulonglong)(int)local_3e4;
  uVar24 = 0;
  lVar28 = 0;
  fVar42 = local_3e4;
  local_390 = uVar37;
  if (0 < (int)local_3e4) {
    lVar35 = (longlong)(int)local_3c8 * 4;
    uVar25 = local_3c8;
    do {
      pTVar8 = local_3c0;
      uVar27 = 0;
      if ((int)uVar25 < local_3c0->ArrayNum) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar27 = *(uint *)((pTVar8->AllocatorInstance).Data + lVar35);
      uVar18 = 0;
      if ((int)uVar27 < (int)local_3a0) {
        uVar18 = ~uVar27 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((local_3a8.Data[(int)uVar27] == (FScriptContainerElement)0x0) &&
         ((int)uVar24 < (int)local_3d0)) {
        iVar17 = (int)uVar37 + local_3c8;
        do {
          uVar27 = uVar24;
          lVar34 = lVar28;
          uVar24 = 0;
          if ((int)uVar27 < (int)local_3d0) {
            uVar24 = ~uVar27 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (iVar17 <= *(int *)(local_3d8.Data + lVar34 * 4)) {
            uVar24 = 0;
            if ((int)uVar27 < (int)local_3d0) {
              uVar24 = ~uVar27 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar8 = local_3c0;
            uVar24 = 0;
            if ((int)*(uint *)(local_3d8.Data + lVar34 * 4) < local_3c0->ArrayNum) {
              uVar24 = ~*(uint *)(local_3d8.Data + lVar34 * 4) >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar24 = 0;
            if ((int)uVar27 < (int)local_3d0) {
              uVar24 = ~uVar27 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar24 = *(uint *)(local_3d8.Data + lVar34 * 4);
            uVar18 = 0;
            if ((int)uVar24 < pTVar8->ArrayNum) {
              uVar18 = ~uVar24 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar31 = (pTVar8->AllocatorInstance).Data;
            uVar18 = 0;
            if ((int)uVar25 < local_3c0->ArrayNum) {
              uVar18 = ~uVar25 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (local_3c0->AllocatorInstance).Data;
            uVar2 = *(undefined4 *)(pFVar4 + lVar35);
            *(undefined4 *)(pFVar4 + lVar35) = *(undefined4 *)(pFVar31 + (longlong)(int)uVar24 * 4);
            *(undefined4 *)(pFVar31 + (longlong)(int)uVar24 * 4) = uVar2;
            break;
          }
          lVar28 = lVar34 + 1;
          uVar24 = uVar27 + 1;
        } while ((int)(uVar27 + 1) < (int)local_3d0);
        uVar24 = uVar27 + 1;
        lVar28 = lVar34 + 1;
        uVar37 = (ulonglong)(uint)local_3e4;
      }
      fVar42 = (float)uVar37;
      uVar25 = uVar25 + 1;
      lVar35 = lVar35 + 4;
      local_390 = local_390 - 1;
    } while (local_390 != 0);
    local_390 = 0;
  }
  pTVar9 = local_3b0;
  FVar6 = local_3e8;
  param_1 = local_3c0;
  if (0 < (int)local_3e0) {
    if ((local_3b0->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_1 = local_3c0;
    uVar24 = local_3c8;
    pTVar20 = pTVar9->DataPtr;
    lVar28 = (longlong)(int)local_3c8;
    pfVar21 = pTVar20->DataPtr;
    uVar13._0_4_ = pTVar20->ArrayNum;
    uVar13._4_4_ = *(undefined4 *)&pTVar20->field_0xc;
    uVar25 = 0;
    if ((int)local_3c8 < local_3c0->ArrayNum) {
      uVar25 = ~local_3c8 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar31 = (param_1->AllocatorInstance).Data;
    if (((int)fVar42 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_238.CompValues.DataPtr = pfVar21;
    local_238.CompValues._8_8_ = uVar13;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
              ((int *)(pFVar31 + lVar28 * 4),(int)fVar42,FVar6,&local_238);
    local_3c8 = uVar24;
  }
  local_3c8 = local_3c8 + (int)fVar42;
  uVar24 = local_3c8;
  if (((-1 < local_370) && (local_370 <= (int)local_3c8)) ||
     (local_398 = local_398 * 2, local_3b8 <= (int)local_3c8)) goto LAB_1435ddade;
  goto LAB_1435dc663;
}

// OrderPoints<double> @ 1435ddce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
PriorityOrderPointsLocal::OrderPoints<double>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TArrayView<TArrayView<float_const_,int>_const_,int> *param_3,int param_4,int param_5,
          int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FIdentityFunctor FVar10;
  longlong lVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TArrayView<TArrayView<float_const_,int>_const_,int> *pTVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  void *pvVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  long64 lVar21;
  TArrayView<float_const_,int> *pTVar22;
  float *pfVar23;
  byte bVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  size_t sVar31;
  longlong *plVar32;
  FScriptContainerElement *pFVar33;
  ForElementType<FSetElementId> FVar34;
  ForElementType<unsigned_int> FVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  double dVar40;
  double dVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStackY_458 [32];
  FIdentityFunctor local_408;
  bool local_407;
  FIdentityFunctor local_406 [2];
  uint local_404;
  ForAnyElementType local_400;
  undefined8 local_3f8;
  uint local_3f0;
  undefined1 local_3ec [4];
  uint local_3e8;
  uint local_3e4;
  TArray<int,TSizedDefaultAllocator<32>_> *local_3e0;
  int local_3d8;
  TArrayView<TArrayView<float_const_,int>_const_,int> *local_3d0;
  ForAnyElementType local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  ulonglong local_3b0;
  size_t local_3a8;
  ForAnyElementType *local_3a0;
  int local_398;
  int local_394;
  int local_390;
  undefined8 local_388;
  ForAnyElementType local_380;
  int local_378 [3];
  int local_36c;
  longlong *local_368;
  int iStack_360;
  uint uStack_35c;
  TBitArray<FDefaultBitArrayAllocator> *local_358;
  undefined4 uStack_350;
  uint uStack_34c;
  int local_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  longlong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  TVector<double>_u_0 local_300;
  long64 local_2e8;
  long64 local_2e0;
  longlong *local_2d8;
  int local_2d0;
  int local_2cc;
  undefined1 local_2c8 [8];
  int local_2c0;
  int local_2bc;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  longlong *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  FSparseArrayAllocationInfo local_258;
  FSparseArrayAllocationInfo local_248;
  DescendingPredicate<float> local_238;
  DescendingPredicate<float> local_228 [2];
  undefined4 local_1fc;
  undefined4 local_1dc;
  undefined1 local_1d8 [32];
  ForElementType<unsigned_int> local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined1 local_1a0 [8];
  ForElementType<FSetElementId> local_198;
  int local_190;
  longlong local_188;
  undefined8 local_180;
  TBitArray<FDefaultBitArrayAllocator> local_178;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  iVar19 = param_2->ArrayNum;
  sVar31 = (size_t)iVar19;
  iVar28 = 8;
  if (param_6 < 8) {
    iVar28 = param_6;
  }
  local_378[2] = 1;
  if (1 < iVar28) {
    local_378[2] = iVar28;
  }
  local_3e0 = param_1;
  local_3d8 = iVar19;
  local_3d0 = param_3;
  local_390 = param_4;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,iVar19,Default);
  if (iVar19 != 0) {
    uVar26 = 0;
    local_330 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_328 = _UNK_150a9e648;
    uVar43 = (undefined4)_UNK_150a9e648;
    uVar44 = (undefined4)((ulonglong)_UNK_150a9e648 >> 0x20);
    uVar45 = (undefined4)___xmm_7fefffffffffffff7fefffffffffffff;
    uVar46 = (undefined4)((ulonglong)___xmm_7fefffffffffffff7fefffffffffffff >> 0x20);
    local_320 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_318 = _UNK_150a9e6d8;
    uVar55 = (undefined4)___xmm_ffefffffffffffff7fefffffffffffff;
    uVar56 = (undefined4)((ulonglong)___xmm_ffefffffffffffff7fefffffffffffff >> 0x20);
    uVar53 = (undefined4)_UNK_150a9e6d8;
    uVar54 = (undefined4)((ulonglong)_UNK_150a9e6d8 >> 0x20);
    local_310 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_308 = _UNK_1508ffb58;
    uVar49 = (undefined4)_UNK_1508ffb58;
    uVar50 = (undefined4)((ulonglong)_UNK_1508ffb58 >> 0x20);
    uVar51 = (undefined4)___xmm_ffefffffffffffffffefffffffffffff;
    uVar52 = (undefined4)((ulonglong)___xmm_ffefffffffffffffffefffffffffffff >> 0x20);
    local_3a8 = sVar31;
    if (0 < iVar19) {
      lVar37 = 0;
      lVar30 = 0;
      do {
        uVar27 = 0;
        if ((int)uVar26 < param_1->ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar19 = param_2->ArrayNum;
        *(uint *)((param_1->AllocatorInstance).Data + lVar37 * 4) = uVar26;
        uVar27 = 0;
        if ((int)uVar26 < iVar19) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = param_2->DataPtr;
        dVar40 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar30);
        uVar47 = (undefined4)((ulonglong)dVar40 >> 0x20);
        if (dVar40 < (double)CONCAT44(uVar46,uVar45)) {
          uVar45 = SUB84(dVar40,0);
          uVar46 = uVar47;
        }
        if ((double)CONCAT44(uVar54,uVar53) <= dVar40 && dVar40 != (double)CONCAT44(uVar54,uVar53))
        {
          uVar53 = SUB84(dVar40,0);
          uVar54 = uVar47;
        }
        dVar40 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar30 + 8);
        uVar47 = (undefined4)((ulonglong)dVar40 >> 0x20);
        if (dVar40 < (double)CONCAT44(uVar44,uVar43)) {
          uVar43 = SUB84(dVar40,0);
          uVar44 = uVar47;
        }
        if ((double)CONCAT44(uVar52,uVar51) <= dVar40 && dVar40 != (double)CONCAT44(uVar52,uVar51))
        {
          uVar51 = SUB84(dVar40,0);
          uVar52 = uVar47;
        }
        dVar40 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar30 + 0x10);
        uVar47 = (undefined4)((ulonglong)dVar40 >> 0x20);
        if (dVar40 < (double)CONCAT44(uVar56,uVar55)) {
          uVar55 = SUB84(dVar40,0);
          uVar56 = uVar47;
        }
        if ((double)CONCAT44(uVar50,uVar49) <= dVar40 && dVar40 != (double)CONCAT44(uVar50,uVar49))
        {
          uVar49 = SUB84(dVar40,0);
          uVar50 = uVar47;
        }
        uVar26 = uVar26 + 1;
        lVar37 = lVar37 + 1;
        lVar30 = lVar30 + 0x18;
        param_3 = local_3d0;
        iVar19 = local_3d8;
      } while (lVar37 < (longlong)sVar31);
    }
    uVar47 = SUB84(__real_3fe0000000000000,0);
    uVar48 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    local_3b8 = CONCAT44(uVar46,uVar45);
    local_388 = CONCAT44(uVar44,uVar43);
    local_380.Data = (FScriptContainerElement *)0x0;
    local_378[0] = 0;
    local_378[1] = 0;
    dVar40 = ((double)CONCAT44(uVar54,uVar53) + (double)CONCAT44(uVar46,uVar45)) *
             __real_3fe0000000000000;
    dVar41 = ((double)CONCAT44(uVar52,uVar51) + (double)CONCAT44(uVar44,uVar43)) *
             __real_3fe0000000000000;
    dVar7 = ((double)CONCAT44(uVar50,uVar49) + (double)CONCAT44(uVar56,uVar55)) *
            __real_3fe0000000000000;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar19,&local_380,local_378,local_378 + 1);
    sVar31 = local_3a8;
    uVar26 = 0;
    if (0 < (longlong)local_3a8) {
      lVar37 = 0;
      lVar30 = 0;
      do {
        uVar27 = 0;
        if ((int)uVar26 < param_2->ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar4 = param_2->DataPtr;
        dVar1 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar30);
        dVar2 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar30 + 8);
        dVar3 = *(double *)((longlong)&pTVar4->field0_0x0 + lVar30 + 0x10);
        uVar27 = 0;
        if ((int)uVar26 < local_378[0]) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar26 = uVar26 + 1;
        lVar37 = lVar37 + 1;
        *(double *)(local_380.Data + lVar30) = dVar1 - dVar40;
        *(double *)(local_380.Data + lVar30 + 8) = dVar2 - dVar41;
        *(double *)(local_380.Data + lVar30 + 0x10) = dVar3 - dVar7;
        lVar30 = lVar30 + 0x18;
      } while (lVar37 < (longlong)sVar31);
      uVar43 = (undefined4)local_388;
      uVar44 = (undefined4)((ulonglong)local_388 >> 0x20);
      uVar45 = (undefined4)local_3b8;
      uVar46 = (undefined4)((ulonglong)local_3b8 >> 0x20);
      uVar47 = SUB84(__real_3fe0000000000000,0);
      uVar48 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      param_3 = local_3d0;
    }
    uVar26 = param_3->ArrayNum;
    local_3a0 = &local_380;
    uVar27 = 0;
    dVar40 = ((double)CONCAT44(uVar52,uVar51) - (double)CONCAT44(uVar44,uVar43)) *
             (double)CONCAT44(uVar48,uVar47);
    dVar1 = ((double)CONCAT44(uVar54,uVar53) - (double)CONCAT44(uVar46,uVar45)) *
            (double)CONCAT44(uVar48,uVar47);
    dVar41 = ((double)CONCAT44(uVar50,uVar49) - (double)CONCAT44(uVar56,uVar55)) *
             (double)CONCAT44(uVar48,uVar47);
    uVar29 = (uint)__xmm_80000000000000008000000000000000;
    uVar42 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar40 = (dVar40 + __real_3f50624de0000000) -
             ((double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^ uVar42,SUB84(dVar40,0) ^ uVar29)
             - __real_3f50624de0000000);
    dVar7 = (dVar41 + __real_3f50624de0000000) -
            ((double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^ uVar42,SUB84(dVar41,0) ^ uVar29) -
            __real_3f50624de0000000);
    dVar41 = (dVar1 + __real_3f50624de0000000) -
             ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar42,SUB84(dVar1,0) ^ uVar29) -
             __real_3f50624de0000000);
    if (dVar40 <= 0.0) {
      dVar40 = 0.0;
    }
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    if (dVar41 <= 0.0) {
      dVar41 = 0.0;
    }
    if (dVar7 <= dVar40) {
      dVar7 = dVar40;
    }
    if (dVar7 <= dVar41) {
      dVar7 = dVar41;
    }
    uVar29 = uVar26;
    if (0 < (int)uVar26) {
      lVar37 = 0;
      lVar30 = 0;
      local_3e4 = uVar26;
      do {
        uVar29 = 0;
        if ((int)uVar27 < (int)uVar26) {
          uVar29 = ~uVar27 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar29 = uVar27;
        if (*(int *)((longlong)&param_3->DataPtr->ArrayNum + lVar30) == 0) break;
        uVar27 = uVar27 + 1;
        lVar37 = lVar37 + 1;
        lVar30 = lVar30 + 0x10;
        uVar29 = local_3e4;
      } while (lVar37 < (int)uVar26);
    }
    local_3e4 = uVar29;
    dVar40 = __real_bfe0000000000000;
    local_3f0 = 0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    iVar19 = 0x1e;
    if (param_5 < 0x1e) {
      iVar19 = param_5;
    }
    iVar28 = 2;
    local_3c0 = 0;
    local_188 = 0;
    iVar20 = 1;
    if (1 < iVar19) {
      iVar20 = iVar19;
    }
    local_180 = 0;
    iVar19 = 1 << ((byte)iVar20 & 0x1f);
    local_178.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_178.NumBits = 0;
    local_178.MaxBits = 0x80;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = (undefined1 *)0x0;
    local_140 = 0;
    local_138.Elements._0_8_ = 0;
    local_138.Elements._8_8_ = 0;
    local_138.Elements._32_8_ = 0;
    local_138.Elements._40_4_ = 0;
    local_138.Elements._44_4_ = 0x80;
    local_138.Elements._48_4_ = 0xffffffff;
    local_138.Elements._52_4_ = 0;
    local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_138.HashSize = 0;
    local_1d8._0_8_ = (FScriptContainerElement *)0x0;
    local_1d8._8_8_ = 0;
    local_1b8 = (ForElementType<unsigned_int>)0x0;
    local_1b0 = 0;
    local_1ac = 0x80;
    local_1a8 = -1;
    local_1a4 = 0;
    local_198 = (ForElementType<FSetElementId>)0x0;
    local_190 = 0;
    local_400.Data = (FScriptContainerElement *)0x0;
    local_3f8 = 0;
    local_388 = CONCAT44(local_388._4_4_,iVar19);
    local_3b8 = CONCAT44(local_3b8._4_4_,2);
    uVar26 = 0;
    if (0 < local_3d8) {
LAB_1435de331:
      iVar20 = local_3d8;
      uVar26 = local_3f0;
      uVar39 = 0;
      if (iVar28 <= iVar19) {
        TSet<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>,TDefaultMapHashableKeyFuncs<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData,0>,FDefaultSetAllocator>
        ::Reset(&local_188);
        if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements(&local_138);
          bVar17 = (longlong)local_138.Elements._8_8_ < 0;
          local_138.Elements._8_8_ = local_138.Elements._8_8_ & 0xffffffff00000000;
          if (bVar17) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)&local_138,0,
                       (int *)&local_138.Elements.field_0xc);
          }
          local_138.Elements._48_4_ = 0xffffffff;
          local_138.Elements._52_4_ = 0;
          local_138.Elements._40_4_ = 0;
        }
        if (local_1d8._8_4_ != local_1a4) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8);
          bVar17 = (longlong)local_1d8._8_8_ < 0;
          local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
          if (bVar17) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
          }
          local_1a8 = -1;
          local_1a4 = 0;
          local_1b0 = 0;
        }
        uVar15 = local_3c0;
        uVar38 = local_3c0 >> 0x20;
        local_3c0 = local_3c0 & 0xffffffff00000000;
        iVar19 = iVar28 * local_378[2] + 2;
        local_3b0 = CONCAT44(local_3b0._4_4_,iVar19);
        dVar41 = dVar7 / (double)(iVar28 * local_378[2]);
        local_300._s_0.X = dVar41 * dVar40;
        local_300._s_0.Y = local_300._s_0.X;
        local_300._s_0.Z = local_300._s_0.X;
        if (((longlong)uVar15 < 0) && ((int)uVar38 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&local_3c8,0,(int *)((longlong)&local_3c0 + 4));
        }
        iVar20 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar20,&local_3c8,(int *)&local_3c0,
                            (int *)((longlong)&local_3c0 + 4));
        memset(local_3c8.Data + iVar20,0,local_3a8);
        pTVar12 = local_3e0;
        if (0 < (int)uVar26) {
          uVar38 = uVar39;
          do {
            uVar27 = (uint)uVar39;
            uVar26 = 0;
            if ((int)uVar27 < pTVar12->ArrayNum) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar20 = *(int *)((pTVar12->AllocatorInstance).Data + uVar38);
            local_2e8 = `PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::
                        operator()(&local_3a0,iVar20,&UE::Math::TVector<double>::ZeroVector,
                                   dVar7 / (double)iVar28,(longlong)iVar28);
            TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64_const_&>
                      (&local_138,(long64 *)(local_2c8 + 4),(bool *)&local_2e8);
            local_2e0 = `PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::
                        operator()(&local_3a0,iVar20,(TVector<double> *)&local_300._s_0,dVar41,
                                   (longlong)iVar19);
            TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::Emplace<__int64>
                      ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8,
                       (long64 *)local_2c8,(bool *)&local_2e0);
            uVar39 = (ulonglong)(uVar27 + 1);
            uVar38 = uVar38 + 4;
            uVar26 = local_3f0;
          } while ((int)(uVar27 + 1) < (int)local_3f0);
        }
        lVar30 = (longlong)(int)uVar26;
        bVar17 = true;
        param_1 = local_3e0;
        if (lVar30 < (longlong)local_3a8) {
          lVar36 = (longlong)(int)local_3b8;
          lVar37 = (longlong)(int)local_3b0;
LAB_1435de5d0:
          pTVar12 = local_3e0;
          uVar27 = 0;
          if ((int)uVar26 < local_3e0->ArrayNum) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar19 = *(int *)((pTVar12->AllocatorInstance).Data + lVar30 * 4);
          local_338 = `PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::operator()
                                (&local_3a0,iVar19,&UE::Math::TVector<double>::ZeroVector,
                                 dVar7 / (double)iVar28,lVar36);
          if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
            FVar34 = (ForElementType<FSetElementId>)&local_138.Hash;
            if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar34 = local_138.Hash.SecondaryData;
            }
            for (iVar20 = *(int *)((longlong)FVar34 +
                                  ((local_338 >> 0x20) * 0x17 + local_338 &
                                  (ulonglong)(local_138.HashSize - 1)) * 4); iVar20 != -1;
                iVar20 = *(int *)(local_138.Elements._0_8_ + (longlong)iVar20 * 0x10 + 8)) {
              if (*(longlong *)(local_138.Elements._0_8_ + (longlong)iVar20 * 0x10) == local_338)
              goto LAB_1435de7a9;
            }
          }
          lVar21 = `PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::operator()
                             (&local_3a0,iVar19,(TVector<double> *)&local_300._s_0,dVar41,lVar37);
          if (local_1d8._8_4_ != local_1a4) {
            FVar34 = (ForElementType<FSetElementId>)local_1a0;
            if (local_198 != (ForElementType<FSetElementId>)0x0) {
              FVar34 = local_198;
            }
            for (iVar19 = *(int *)((longlong)FVar34 +
                                  ((lVar21 >> 0x20) * 0x17 + lVar21 & (ulonglong)(local_190 - 1)) *
                                  4); iVar19 != -1;
                iVar19 = *(int *)(local_1d8._0_8_ + (longlong)iVar19 * 0x10 + 8)) {
              if (*(longlong *)(local_1d8._0_8_ + (longlong)iVar19 * 0x10) == lVar21)
              goto LAB_1435de7a9;
            }
          }
          uVar27 = (int)((ulonglong)local_338 >> 0x20) * 0x17 + (int)local_338;
          if ((int)local_180 != local_154) {
            puVar25 = local_150;
            if (local_148 != (undefined1 *)0x0) {
              puVar25 = local_148;
            }
            iVar19 = *(int *)(puVar25 + (ulonglong)(local_140 - 1U & uVar27) * 4);
            while (iVar19 != -1) {
              plVar32 = (longlong *)((longlong)iVar19 * 0x20 + local_188);
              if (*plVar32 == local_338) {
                if (plVar32 != (longlong *)0x0) goto LAB_1435de7f3;
                break;
              }
              iVar19 = (int)plVar32[3];
            }
          }
          local_2d8 = &local_338;
          TSet<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>,TDefaultMapHashableKeyFuncs<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
                    (&local_188,(uint)&local_36c,
                     (TKeyInitializer<__int64_const_&> *)(ulonglong)uVar27,(bool *)&local_2d8);
          plVar32 = (longlong *)((longlong)local_36c * 0x20 + local_188);
LAB_1435de7f3:
          uVar27 = 0;
          if ((int)uVar26 < local_3e0->ArrayNum) {
            uVar27 = ~uVar26 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar19 = *(int *)((local_3e0->AllocatorInstance).Data + lVar30 * 4);
          if ((int)local_3e4 < 1) {
            if ((int)plVar32[1] == -1) {
              *(uint *)(plVar32 + 1) = uVar26;
              bVar24 = 1;
            }
            else {
LAB_1435de93b:
              bVar24 = 0;
            }
          }
          else {
            if ((int)plVar32[1] != -1) {
              pTVar22 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[](local_3d0,0)
              ;
              pfVar23 = TArrayView<float_const_,int>::operator[](pTVar22,iVar19);
              if (*(float *)(plVar32 + 2) < *pfVar23) {
                pTVar22 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[]
                                    (local_3d0,0);
                pfVar23 = TArrayView<float_const_,int>::operator[](pTVar22,iVar19);
                *(float *)(plVar32 + 2) = *pfVar23;
                *(uint *)(plVar32 + 1) = uVar26;
              }
              if (1 < (int)local_3e4) {
                pTVar22 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[]
                                    (local_3d0,1);
                pfVar23 = TArrayView<float_const_,int>::operator[](pTVar22,iVar19);
                if (*(float *)((longlong)plVar32 + 0x14) <= *pfVar23 &&
                    *pfVar23 != *(float *)((longlong)plVar32 + 0x14)) {
                  pTVar22 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[]
                                      (local_3d0,1);
                  pfVar23 = TArrayView<float_const_,int>::operator[](pTVar22,iVar19);
                  *(float *)((longlong)plVar32 + 0x14) = *pfVar23;
                  *(uint *)((longlong)plVar32 + 0xc) = uVar26;
                }
              }
              goto LAB_1435de93b;
            }
            *(uint *)((longlong)plVar32 + 0xc) = uVar26;
            *(uint *)(plVar32 + 1) = uVar26;
            pTVar22 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[](local_3d0,0);
            pfVar23 = TArrayView<float_const_,int>::operator[](pTVar22,iVar19);
            *(float *)(plVar32 + 2) = *pfVar23;
            if (1 < (int)local_3e4) {
              pTVar22 = TArrayView<TArrayView<float_const_,int>_const_,int>::operator[](local_3d0,1)
              ;
              pfVar23 = TArrayView<float_const_,int>::operator[](pTVar22,iVar19);
              *(float *)((longlong)plVar32 + 0x14) = *pfVar23;
            }
            bVar24 = 1;
          }
          bVar17 = (bool)(bVar17 & bVar24);
          goto LAB_1435de940;
        }
      }
    }
LAB_1435df7be:
    pTVar13 = local_3d0;
    iVar19 = local_3d8;
    if (((0 < (int)local_3e4) && ((local_390 < 0 || ((int)uVar26 < local_390)))) &&
       ((int)uVar26 < local_3d8)) {
      if ((local_3d0->ArrayNum < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar22 = pTVar13->DataPtr;
      pfVar23 = pTVar22->DataPtr;
      uVar9._0_4_ = pTVar22->ArrayNum;
      uVar9._4_4_ = *(undefined4 *)&pTVar22->field_0xc;
      uVar27 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar33 = (param_1->AllocatorInstance).Data;
      if (((int)(iVar19 - uVar26) < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_238.CompValues.DataPtr = pfVar23;
      local_238.CompValues._8_8_ = uVar9;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
                ((int *)(pFVar33 + (longlong)(int)uVar26 * 4),iVar19 - uVar26,local_406[0],
                 &local_238);
    }
    if (local_400.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data);
    }
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<__int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
    local_140 = 0;
    if (local_148 != (undefined1 *)0x0) {
      FMemory::Free(local_148);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<__int64,_PriorityOrderPointsLocal::OrderPoints<double>_::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188);
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
    if (local_380.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data);
    }
  }
  return;
LAB_1435de7a9:
  bVar17 = false;
LAB_1435de940:
  lVar11 = local_3f8;
  uVar26 = uVar26 + 1;
  lVar30 = lVar30 + 1;
  if ((longlong)local_3a8 <= lVar30) goto code_r0x0001435de950;
  goto LAB_1435de5d0;
code_r0x0001435de950:
  param_1 = local_3e0;
  uVar26 = local_3f0;
  if (bVar17) goto LAB_1435df7be;
  uVar26 = local_3f8._4_4_;
  local_3e8 = 0;
  local_3f8 = (ulonglong)local_3f8._4_4_ << 0x20;
  if ((lVar11 < 0) && (uVar26 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_400,0,(int *)((longlong)&local_3f8 + 4));
  }
  iVar19 = local_178.NumBits;
  iStack_360 = 0;
  uStack_35c = 1;
  local_348 = 0;
  uStack_34c = 0;
  if (local_178.NumBits != 0) {
    FVar35 = (ForElementType<unsigned_int>)&local_178;
    if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar35 = local_178.AllocatorInstance.SecondaryData;
    }
    uVar26 = *(uint *)FVar35;
    while (uVar26 == 0) {
      lVar30 = (longlong)iStack_360;
      local_348 = local_348 + 0x20;
      iStack_360 = iStack_360 + 1;
      uStack_34c = local_178.NumBits;
      if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iStack_360) goto LAB_1435dea23;
      uVar26 = *(uint *)((uchar *)((longlong)FVar35 + 4) + lVar30 * 4);
    }
    uStack_35c = -uVar26 & uVar26;
    uVar39 = (ulonglong)uStack_35c * 2 + 1;
    lVar30 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_2c0 = (int)lVar30;
    uStack_34c = local_2c0 + -1 + local_348;
    if (local_178.NumBits < (int)uStack_34c) {
      uStack_34c = local_178.NumBits;
    }
  }
LAB_1435dea23:
  local_368 = &local_188;
  uStack_344 = local_1fc;
  local_358 = &local_178;
  uVar26 = local_178.NumBits & 0xffffffe0;
  iStack_340 = (int)local_180 - local_154;
  TStack_2b0._padding_ = CONCAT44(uStack_35c,iStack_360);
  uStack_350 = 0xffffffff;
  TStack_2b0.CurrentBitIndex = uStack_34c;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar28 = local_178.NumBits >> 5;
  TStack_2b0._28_4_ = local_1fc;
  TStack_2b0.BaseBitIndex = local_348;
  uStack_290 = CONCAT44(uStack_33c,iStack_340);
  bVar24 = (byte)local_178.NumBits;
  local_404 = local_178.NumBits;
  local_2b8 = local_368;
  TStack_2b0.Array = local_358;
  if ((local_178.NumBits < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar27 = local_404;
  if (iVar19 != local_178.NumBits) {
    FVar35 = (ForElementType<unsigned_int>)&local_178;
    if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar35 = local_178.AllocatorInstance.SecondaryData;
    }
    uVar27 = -1 << (bVar24 & 0x1f) & *(uint *)((longlong)FVar35 + (longlong)iVar28 * 4);
    while (uVar27 == 0) {
      lVar30 = (longlong)iVar28;
      uVar26 = uVar26 + 0x20;
      iVar28 = iVar28 + 1;
      if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar28) {
        local_404 = local_178.NumBits;
        uVar27 = local_178.NumBits;
        goto LAB_1435deb60;
      }
      uVar27 = *(uint *)((uchar *)((longlong)FVar35 + 4) + lVar30 * 4);
    }
    uVar39 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar30 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    local_2bc = (int)lVar30;
    local_404 = (uVar26 - 1) + local_2bc;
    uVar27 = local_404;
    if (local_178.NumBits < (int)local_404) {
      local_404 = local_178.NumBits;
      uVar27 = local_178.NumBits;
    }
  }
LAB_1435deb60:
  while( true ) {
    plVar32 = local_2b8;
    if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
      local_3ec[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3ec);
    }
    iVar19 = local_178.NumBits;
    pTVar12 = local_3e0;
    lVar30 = (longlong)TStack_2b0.CurrentBitIndex;
    if (((TStack_2b0.CurrentBitIndex == uVar27) && (TStack_2b0.Array == &local_178)) &&
       (plVar32 == &local_188)) break;
    lVar37 = *plVar32;
    uVar26 = *(uint *)(lVar30 * 0x20 + 8 + lVar37);
    uVar29 = 0;
    if ((int)uVar26 < local_3e0->ArrayNum) {
      uVar29 = ~uVar26 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar26 = *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar26 * 4);
    uVar29 = 0;
    if ((int)uVar26 < (int)local_3c0) {
      uVar29 = ~uVar26 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar14.Data = local_3c8.Data;
    if (local_3c8.Data[(int)uVar26] == (FScriptContainerElement)0x0) {
      lVar21 = `PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::operator()
                         (&local_3a0,uVar26,(TVector<double> *)&local_300._s_0,dVar41,
                          (longlong)(int)local_3b0);
      local_408 = (FIdentityFunctor)0x0;
      if (local_1a4 == 0) {
        iVar28 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                            (int *)(local_1d8 + 0xc));
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),false);
        iVar19 = local_1a8;
      }
      else {
        local_1a4 = local_1a4 + -1;
        iVar19 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10 + 4);
        iVar28 = local_1a8;
        if (local_1a4 != 0) {
          *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar19 * 0x10) = 0xffffffff;
        }
      }
      local_1a8 = iVar19;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1d8,&local_258,iVar28);
      pvVar16 = local_258.Pointer;
      if (local_258.Pointer != (TSparseSetElement<__int64> *)0x0) {
        *(long64 *)local_258.Pointer = lVar21;
        *(undefined4 *)((longlong)local_258.Pointer + 8) = 0xffffffff;
      }
      local_398 = local_258.Index;
      uVar29 = (int)((ulonglong)*(undefined8 *)local_258.Pointer >> 0x20) * 0x17 +
               (int)*(undefined8 *)local_258.Pointer;
      bVar17 = TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TryReplaceExisting
                         ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8
                          ,uVar29,local_258.Pointer,&local_398,(bool *)&local_408);
      if (!bVar17) {
        TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RehashOrLink
                  ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8,uVar29
                   ,pvVar16,local_398);
      }
      if (local_408 == (FIdentityFunctor)0x0) {
        local_3e8 = local_3e8 + 1;
        FVar14.Data[(int)uVar26] = (FScriptContainerElement)0x1;
        pFVar33 = (FScriptContainerElement *)(lVar37 + 8 + lVar30 * 0x20);
        if (((local_400.Data <= pFVar33) &&
            (pFVar33 < local_400.Data + (longlong)(int)local_3f8._4_4_ * 4)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar19 = (int)local_3f8;
        if ((int)local_3f8 == local_3f8._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_400,(int *)((longlong)&local_3f8 + 4));
        }
        local_3f8 = CONCAT44(local_3f8._4_4_,iVar19 + 1);
        *(undefined4 *)(local_400.Data + (longlong)iVar19 * 4) = *(undefined4 *)pFVar33;
      }
    }
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  if (1 < (int)local_3e4) {
    iStack_360 = 0;
    local_348 = 0;
    uStack_35c = 1;
    uStack_34c = 0;
    if (local_178.NumBits != 0) {
      FVar35 = (ForElementType<unsigned_int>)&local_178;
      if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar35 = local_178.AllocatorInstance.SecondaryData;
      }
      uVar26 = *(uint *)FVar35;
      while (uVar26 == 0) {
        lVar30 = (longlong)iStack_360;
        local_348 = local_348 + 0x20;
        iStack_360 = iStack_360 + 1;
        uStack_34c = local_178.NumBits;
        if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iStack_360) goto LAB_1435def13;
        uVar26 = *(uint *)((uchar *)((longlong)FVar35 + 4) + lVar30 * 4);
      }
      uStack_35c = -uVar26 & uVar26;
      uVar39 = (ulonglong)uStack_35c * 2 + 1;
      lVar30 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_2d0 = (int)lVar30;
      uStack_34c = local_348 + -1 + local_2d0;
      if (local_178.NumBits < (int)uStack_34c) {
        uStack_34c = local_178.NumBits;
      }
    }
LAB_1435def13:
    local_368 = &local_188;
    uStack_344 = local_1dc;
    local_358 = &local_178;
    uVar26 = local_178.NumBits & 0xffffffe0;
    iStack_340 = (int)local_180 - local_154;
    TStack_280._padding_ = CONCAT44(uStack_35c,iStack_360);
    uStack_350 = 0xffffffff;
    TStack_280.CurrentBitIndex = uStack_34c;
    TStack_280.UnvisitedBitMask = 0xffffffff;
    iVar28 = local_178.NumBits >> 5;
    TStack_280._28_4_ = local_1dc;
    TStack_280.BaseBitIndex = local_348;
    uStack_260 = CONCAT44(uStack_33c,iStack_340);
    bVar24 = (byte)local_178.NumBits;
    local_404 = local_178.NumBits;
    local_288 = local_368;
    TStack_280.Array = local_358;
    if ((local_178.NumBits < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar27 = local_404;
    if (iVar19 != local_178.NumBits) {
      FVar35 = (ForElementType<unsigned_int>)&local_178;
      if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar35 = local_178.AllocatorInstance.SecondaryData;
      }
      uVar27 = -1 << (bVar24 & 0x1f) & *(uint *)((longlong)FVar35 + (longlong)iVar28 * 4);
      while (uVar27 == 0) {
        lVar30 = (longlong)iVar28;
        uVar26 = uVar26 + 0x20;
        iVar28 = iVar28 + 1;
        if ((int)((local_178.NumBits - 1U) + ((int)(local_178.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            iVar28) {
          local_404 = local_178.NumBits;
          uVar27 = local_178.NumBits;
          goto LAB_1435df050;
        }
        uVar27 = *(uint *)((uchar *)((longlong)FVar35 + 4) + lVar30 * 4);
      }
      uVar39 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_2cc = (int)lVar30;
      local_404 = local_2cc + -1 + uVar26;
      uVar27 = local_404;
      if (local_178.NumBits < (int)local_404) {
        local_404 = local_178.NumBits;
        uVar27 = local_178.NumBits;
      }
    }
LAB_1435df050:
    while( true ) {
      plVar32 = local_288;
      if ((int)local_288[1] - *(int *)((longlong)local_288 + 0x34) != (int)uStack_260) {
        local_406[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_406);
      }
      pTVar12 = local_3e0;
      if (((TStack_280.CurrentBitIndex == uVar27) && (TStack_280.Array == &local_178)) &&
         (plVar32 == &local_188)) break;
      lVar30 = *plVar32;
      lVar37 = (longlong)TStack_280.CurrentBitIndex * 0x20;
      uVar26 = *(uint *)(lVar37 + 0xc + lVar30);
      uVar29 = 0;
      if ((int)uVar26 < local_3e0->ArrayNum) {
        uVar29 = ~uVar26 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar26 = *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar26 * 4);
      uVar29 = 0;
      if ((int)uVar26 < (int)local_3c0) {
        uVar29 = ~uVar26 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar14.Data = local_3c8.Data;
      if (local_3c8.Data[(int)uVar26] == (FScriptContainerElement)0x0) {
        lVar21 = `PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::operator()
                           (&local_3a0,uVar26,(TVector<double> *)&local_300._s_0,dVar41,
                            (longlong)(int)local_3b0);
        local_407 = false;
        if (local_1a4 == 0) {
          iVar28 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,1,(ForAnyElementType *)local_1d8,(int *)(local_1d8 + 8),
                              (int *)(local_1d8 + 0xc));
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),false);
          iVar19 = local_1a8;
        }
        else {
          local_1a4 = local_1a4 + -1;
          iVar19 = *(int *)(local_1d8._0_8_ + (longlong)local_1a8 * 0x10 + 4);
          iVar28 = local_1a8;
          if (local_1a4 != 0) {
            *(undefined4 *)(local_1d8._0_8_ + (longlong)iVar19 * 0x10) = 0xffffffff;
          }
        }
        local_1a8 = iVar19;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1d8,&local_248,iVar28);
        pvVar16 = local_248.Pointer;
        if (local_248.Pointer != (TSparseSetElement<__int64> *)0x0) {
          *(long64 *)local_248.Pointer = lVar21;
          *(undefined4 *)((longlong)local_248.Pointer + 8) = 0xffffffff;
        }
        local_394 = local_248.Index;
        uVar29 = (int)((ulonglong)*(undefined8 *)local_248.Pointer >> 0x20) * 0x17 +
                 (int)*(undefined8 *)local_248.Pointer;
        bVar17 = TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::TryReplaceExisting
                           ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)
                            local_1d8,uVar29,local_248.Pointer,&local_394,&local_407);
        if (!bVar17) {
          TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator>::RehashOrLink
                    ((TSet<__int64,DefaultKeyFuncs<__int64,0>,FDefaultSetAllocator> *)local_1d8,
                     uVar29,pvVar16,local_394);
        }
        if (local_407 == false) {
          local_3e8 = local_3e8 + 1;
          FVar14.Data[(int)uVar26] = (FScriptContainerElement)0x1;
          pFVar33 = (FScriptContainerElement *)(lVar30 + 0xc + lVar37);
          if (((local_400.Data <= (FScriptContainerElement *)(lVar30 + 0xc + lVar37)) &&
              (pFVar33 < local_400.Data + (longlong)(int)local_3f8._4_4_ * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar19 = (int)local_3f8;
          if ((int)local_3f8 == local_3f8._4_4_) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_400,(int *)((longlong)&local_3f8 + 4));
          }
          local_3f8 = CONCAT44(local_3f8._4_4_,iVar19 + 1);
          *(undefined4 *)(local_400.Data + (longlong)iVar19 * 4) = *(undefined4 *)pFVar33;
        }
      }
      TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
    }
  }
  uVar39 = (ulonglong)(int)local_3e8;
  uVar26 = 0;
  lVar30 = 0;
  uVar27 = local_3e8;
  local_3b0 = uVar39;
  if (0 < (int)local_3e8) {
    lVar37 = (longlong)(int)local_3f0 * 4;
    uVar29 = local_3f0;
    do {
      pTVar12 = local_3e0;
      uVar27 = 0;
      if ((int)uVar29 < local_3e0->ArrayNum) {
        uVar27 = ~uVar29 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar27 = *(uint *)((pTVar12->AllocatorInstance).Data + lVar37);
      uVar42 = 0;
      if ((int)uVar27 < (int)local_3c0) {
        uVar42 = ~uVar27 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((local_3c8.Data[(int)uVar27] == (FScriptContainerElement)0x0) &&
         ((int)uVar26 < (int)local_3f8)) {
        iVar19 = (int)uVar39 + local_3f0;
        do {
          uVar27 = uVar26;
          lVar36 = lVar30;
          uVar26 = 0;
          if ((int)uVar27 < (int)local_3f8) {
            uVar26 = ~uVar27 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (iVar19 <= *(int *)(local_400.Data + lVar36 * 4)) {
            uVar26 = 0;
            if ((int)uVar27 < (int)local_3f8) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar12 = local_3e0;
            uVar26 = 0;
            if ((int)*(uint *)(local_400.Data + lVar36 * 4) < local_3e0->ArrayNum) {
              uVar26 = ~*(uint *)(local_400.Data + lVar36 * 4) >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar26 = 0;
            if ((int)uVar27 < (int)local_3f8) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar26 = *(uint *)(local_400.Data + lVar36 * 4);
            uVar42 = 0;
            if ((int)uVar26 < pTVar12->ArrayNum) {
              uVar42 = ~uVar26 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar33 = (pTVar12->AllocatorInstance).Data;
            uVar42 = 0;
            if ((int)uVar29 < local_3e0->ArrayNum) {
              uVar42 = ~uVar29 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (local_3e0->AllocatorInstance).Data;
            uVar43 = *(undefined4 *)(pFVar5 + lVar37);
            *(undefined4 *)(pFVar5 + lVar37) = *(undefined4 *)(pFVar33 + (longlong)(int)uVar26 * 4);
            *(undefined4 *)(pFVar33 + (longlong)(int)uVar26 * 4) = uVar43;
            break;
          }
          lVar30 = lVar36 + 1;
          uVar26 = uVar27 + 1;
        } while ((int)(uVar27 + 1) < (int)local_3f8);
        uVar26 = uVar27 + 1;
        lVar30 = lVar36 + 1;
        uVar39 = (ulonglong)local_3e8;
      }
      uVar27 = (uint)uVar39;
      uVar29 = uVar29 + 1;
      lVar37 = lVar37 + 4;
      local_3b0 = local_3b0 - 1;
    } while (local_3b0 != 0);
    local_3b0 = 0;
  }
  pTVar13 = local_3d0;
  FVar10 = local_408;
  param_1 = local_3e0;
  if (0 < (int)local_3e4) {
    if ((local_3d0->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_1 = local_3e0;
    uVar26 = local_3f0;
    pTVar22 = pTVar13->DataPtr;
    lVar30 = (longlong)(int)local_3f0;
    pfVar23 = pTVar22->DataPtr;
    uVar8._0_4_ = pTVar22->ArrayNum;
    uVar8._4_4_ = *(undefined4 *)&pTVar22->field_0xc;
    uVar29 = 0;
    if ((int)local_3f0 < local_3e0->ArrayNum) {
      uVar29 = ~local_3f0 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar33 = (param_1->AllocatorInstance).Data;
    if (((int)uVar27 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_228[0].CompValues.DataPtr = pfVar23;
    local_228[0].CompValues._8_8_ = uVar8;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,PriorityOrderPointsLocal::DescendingPredicate<float>_>
              ((int *)(pFVar33 + lVar30 * 4),uVar27,FVar10,local_228);
    local_3f0 = uVar26;
  }
  local_3f0 = local_3f0 + uVar27;
  uVar26 = local_3f0;
  if ((-1 < local_390) && (local_390 <= (int)local_3f0)) goto LAB_1435df7be;
  iVar28 = (int)local_3b8 * 2;
  local_3b8 = CONCAT44(local_3b8._4_4_,iVar28);
  if (local_3d8 <= (int)local_3f0) goto LAB_1435df7be;
  iVar19 = (int)local_388;
  goto LAB_1435de331;
}

// RangeIteration<`UE::Geometry::FSparseDynamicPointOctree3::RangeQuery'::__l2::<lambda_1>_> @ 1435df9c0

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
RangeIteration<_UE::Geometry::FSparseDynamicPointOctree3::RangeQuery_::__l2::<lambda_1>_>
          (TSparseGrid3<unsigned_int> *this,FVector3i *param_1,FVector3i *param_2,
          <lambda_1> *param_3)

{
  int iVar1;
  uint *puVar2;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong local_58;
  FVector3i_u_0 local_50 [2];
  
  iVar9 = (param_1->field0_0x0)._s_0.Z;
  if (iVar9 <= (param_2->field0_0x0)._s_0.Z) {
    do {
      iVar12 = (param_1->field0_0x0)._s_0.Y;
      if (iVar12 <= (param_2->field0_0x0)._s_0.Y) {
        iVar1 = (param_2->field0_0x0)._s_0.X;
        do {
          for (iVar11 = (param_1->field0_0x0)._s_0.X; iVar11 <= iVar1; iVar11 = iVar11 + 1) {
            local_50[0]._0_4_ = iVar11;
            local_50[0]._4_4_ = iVar12;
            local_50[0]._8_4_ = iVar9;
            uVar7 = FCrc::MemCrc_DEPRECATED(local_50,0xc,0);
            iVar8 = TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<UE::Geometry::FVector3i>
                              ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                                *)this,uVar7,(FVector3i *)&local_50[0]._s_0);
            if (((iVar8 != -1) &&
                (lVar10 = (longlong)iVar8 * 0x20 + *(longlong *)&this->Elements, lVar10 != 0)) &&
               (puVar2 = *(uint **)(lVar10 + 0x10), puVar2 != (uint *)0x0)) {
              uVar7 = *puVar2;
              pTVar3 = param_3->Queue;
              local_58 = (ulonglong)(uVar7 & 0x1ff) * 0x34 +
                         *(longlong *)
                          ((param_3->__this->Cells).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar7 >> 9) * 8);
              pFVar4 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                  ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)pTVar3->ArrayMax * 8))
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar8 = pTVar3->ArrayNum;
              if (iVar8 == pTVar3->ArrayMax) {
                iVar8 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
              }
              pTVar3->ArrayNum = iVar8 + 1;
              *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_58;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 <= (param_2->field0_0x0)._s_0.Y);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= (param_2->field0_0x0)._s_0.Z);
  }
  return;
}

// RangeIteration<`UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius'::__l10::<lambda_1>_> @ 1435dfbd0

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
RangeIteration<_UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius_::__l10::<lambda_1>_>
          (TSparseGrid3<unsigned_int> *this,FVector3i *param_1,FVector3i *param_2,
          <lambda_1> *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double local_90;
  FVector3i_u_0 local_88;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  iVar9 = (param_1->field0_0x0)._s_0.Z;
  if (iVar9 <= (param_2->field0_0x0)._s_0.Z) {
    iVar1 = (param_2->field0_0x0)._s_0.Y;
    do {
      iVar10 = (param_1->field0_0x0)._s_0.Y;
      if (iVar10 <= iVar1) {
        iVar2 = (param_2->field0_0x0)._s_0.X;
        do {
          for (iVar8 = (param_1->field0_0x0)._s_0.X; iVar8 <= iVar2; iVar8 = iVar8 + 1) {
            local_88._s_0.X = iVar8;
            local_88._s_0.Y = iVar10;
            local_88._s_0.Z = iVar9;
            uVar5 = FCrc::MemCrc_DEPRECATED(&local_88,0xc,0);
            iVar6 = TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<UE::Geometry::FVector3i>
                              ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                                *)this,uVar5,(FVector3i *)&local_88._s_0);
            if (((iVar6 != -1) &&
                (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)&this->Elements, lVar7 != 0)) &&
               (puVar3 = *(uint **)(lVar7 + 0x10), puVar3 != (uint *)0x0)) {
              uVar5 = *puVar3;
              lVar7 = *(longlong *)
                       ((param_3->__this->Cells).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 0x34;
              pdVar4 = param_3->ThresholdSq;
              local_50 = param_3->__this->RootDimension /
                         (double)(ulonglong)(1L << (*(byte *)(lVar7 + 4) & 0x1f));
              dVar12 = *pdVar4;
              local_78._s_0.X = (double)*(int *)(lVar7 + 8) * local_50;
              local_78._s_0.Y = (double)*(int *)(lVar7 + 0xc) * local_50;
              local_78._s_0.Z = (double)*(int *)(lVar7 + 0x10) * local_50;
              local_60 = local_78._s_0.X + local_50;
              local_58 = local_78._s_0.Y + local_50;
              local_50 = local_78._s_0.Z + local_50;
              dVar11 = TAxisAlignedBox3<double>::DistanceSquared
                                 ((TAxisAlignedBox3<double> *)&local_78._s_0,&param_3->QueryPt);
              if (dVar11 < dVar12) {
                local_90 = dVar12;
                dVar12 = (double)(**(code **)param_3->RootFn)
                                           (*(undefined8 *)&param_3->RootFn->field_0x8,&local_90);
                *pdVar4 = dVar12;
              }
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 <= iVar1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= (param_2->field0_0x0)._s_0.Z);
  }
  return;
}

// RangeIteration<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l16::<lambda_1>_> @ 1435dfe00

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
RangeIteration<_UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue_::__l16::<lambda_1>_>
          (TSparseGrid3<unsigned_int> *this,FVector3i *param_1,FVector3i *param_2,
          <lambda_1> *param_3)

{
  uint *puVar1;
  FSparseDynamicOctree3 *pFVar2;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar11;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong local_98;
  FVector3i_u_0 local_90;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  
  iVar9 = (param_1->field0_0x0)._s_0.Z;
  if (iVar9 <= (param_2->field0_0x0)._s_0.Z) {
    do {
      iVar15 = (param_1->field0_0x0)._s_0.Y;
      if (iVar15 <= (param_2->field0_0x0)._s_0.Y) {
        do {
          iVar14 = (param_1->field0_0x0)._s_0.X;
          if (iVar14 <= (param_2->field0_0x0)._s_0.X) {
            do {
              local_90._s_0.X = iVar14;
              local_90._s_0.Y = iVar15;
              local_90._s_0.Z = iVar9;
              uVar7 = FCrc::MemCrc_DEPRECATED(&local_90,0xc,0);
              iVar8 = TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<UE::Geometry::FVector3i>
                                ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                                  *)this,uVar7,(FVector3i *)&local_90._s_0);
              if (((iVar8 != -1) &&
                  (lVar10 = (longlong)iVar8 * 0x20 + *(longlong *)&this->Elements, lVar10 != 0)) &&
                 (puVar1 = *(uint **)(lVar10 + 0x10), puVar1 != (uint *)0x0)) {
                uVar7 = *puVar1;
                pFVar2 = param_3->__this;
                lVar16 = (ulonglong)(uVar7 & 0x1ff) * 0x34;
                uVar13 = (ulonglong)(uVar7 >> 9);
                lVar10 = *(longlong *)((pFVar2->Cells).Blocks.AllocatorInstance.Data + uVar13 * 8);
                local_58 = pFVar2->RootDimension /
                           (double)(ulonglong)(1L << (*(byte *)(lVar10 + 4 + lVar16) & 0x1f));
                dVar17 = (double)*(int *)(lVar10 + 8 + lVar16) * local_58;
                dVar20 = local_58 * pFVar2->MaxExpandFactor;
                dVar18 = (double)*(int *)(lVar10 + 0xc + lVar16) * local_58;
                dVar19 = (double)*(int *)(lVar10 + 0x10 + lVar16) * local_58;
                local_80 = dVar17 - dVar20;
                local_78 = dVar18 - dVar20;
                local_70 = dVar19 - dVar20;
                local_68 = dVar17 + dVar20 + local_58;
                local_60 = dVar18 + dVar20 + local_58;
                local_58 = dVar19 + dVar20 + local_58;
                cVar5 = (**(code **)param_3->BoundsOverlapFn)
                                  (*(undefined8 *)&param_3->BoundsOverlapFn->field_0x8,&local_80);
                if (cVar5 != '\0') {
                  FVar12 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)param_3->Queue;
                  local_98 = *(longlong *)
                              ((pFVar2->Cells).Blocks.AllocatorInstance.Data + uVar13 * 8) + lVar16;
                  FVar3 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)
                           ((longlong)FVar12 + 0x100);
                  FVar11 = FVar12;
                  if (FVar3 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                    FVar11 = FVar3;
                  }
                  if ((ulonglong)FVar11 <= &local_98) {
                    FVar11 = FVar12;
                    if (FVar3 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                      FVar11 = FVar3;
                    }
                    if ((&local_98 <
                         (longlong *)
                         ((longlong)FVar11 + (longlong)*(int *)((longlong)FVar12 + 0x10c) * 8)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  iVar8 = *(int *)((longlong)FVar12 + 0x108);
                  if (iVar8 == *(int *)((longlong)FVar12 + 0x10c)) {
                    iVar8 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                                      (0x808,(ForElementType<UE::Geometry::FSparseOctreeCell_const_*>
                                              *)FVar12,(int *)((longlong)FVar12 + 0x10c));
                  }
                  *(int *)((longlong)FVar12 + 0x108) = iVar8 + 1;
                  if (*(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)
                       ((longlong)FVar12 + 0x100) !=
                      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                    FVar12 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)
                              ((longlong)FVar12 + 0x100);
                  }
                  *(longlong *)((longlong)FVar12 + (longlong)iVar8 * 8) = local_98;
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 <= (param_2->field0_0x0)._s_0.X);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 <= (param_2->field0_0x0)._s_0.Y);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= (param_2->field0_0x0)._s_0.Z);
  }
  return;
}

// RangeIteration<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l18::<lambda_2>_> @ 1435e0140

void __thiscall
UE::Geometry::TSparseGrid3<unsigned_int>::
RangeIteration<_UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue_::__l18::<lambda_2>_>
          (TSparseGrid3<unsigned_int> *this,FVector3i *param_1,FVector3i *param_2,
          <lambda_2> *param_3)

{
  uint *puVar1;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar8;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong local_48;
  FVector3i_u_0 local_40 [2];
  
  iVar12 = (param_1->field0_0x0)._s_0.Z;
  if (iVar12 <= (param_2->field0_0x0)._s_0.Z) {
    do {
      iVar10 = (param_1->field0_0x0)._s_0.Y;
      if (iVar10 <= (param_2->field0_0x0)._s_0.Y) {
        do {
          iVar11 = (param_1->field0_0x0)._s_0.X;
          if (iVar11 <= (param_2->field0_0x0)._s_0.X) {
            do {
              local_40[0]._0_4_ = iVar11;
              local_40[0]._4_4_ = iVar10;
              local_40[0]._8_4_ = iVar12;
              uVar5 = FCrc::MemCrc_DEPRECATED(local_40,0xc,0);
              iVar6 = TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<UE::Geometry::FVector3i>
                                ((TSet<TTuple<UE::Geometry::FVector3i,unsigned_int_*>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,unsigned_int_*,0>,FDefaultSetAllocator>
                                  *)this,uVar5,(FVector3i *)&local_40[0]._s_0);
              if (((iVar6 != -1) &&
                  (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)&this->Elements, lVar7 != 0)) &&
                 (puVar1 = *(uint **)(lVar7 + 0x10), puVar1 != (uint *)0x0)) {
                uVar5 = *puVar1;
                FVar9 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)param_3->Queue;
                local_48 = (ulonglong)(uVar5 & 0x1ff) * 0x34 +
                           *(longlong *)
                            ((param_3->__this->Cells).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar5 >> 9) * 8);
                FVar2 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)
                         ((longlong)FVar9 + 0x100);
                FVar8 = FVar9;
                if (FVar2 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                  FVar8 = FVar2;
                }
                if ((ulonglong)FVar8 <= &local_48) {
                  FVar8 = FVar9;
                  if (FVar2 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                    FVar8 = FVar2;
                  }
                  if ((&local_48 <
                       (longlong *)
                       ((longlong)FVar8 + (longlong)*(int *)((longlong)FVar9 + 0x10c) * 8)) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                iVar6 = *(int *)((longlong)FVar9 + 0x108);
                if (iVar6 == *(int *)((longlong)FVar9 + 0x10c)) {
                  iVar6 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                                    (0x808,(ForElementType<UE::Geometry::FSparseOctreeCell_const_*>
                                            *)FVar9,(int *)((longlong)FVar9 + 0x10c));
                }
                *(int *)((longlong)FVar9 + 0x108) = iVar6 + 1;
                if (*(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)
                     ((longlong)FVar9 + 0x100) !=
                    (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                  FVar9 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)
                           ((longlong)FVar9 + 0x100);
                }
                *(longlong *)((longlong)FVar9 + (longlong)iVar6 * 8) = local_48;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 <= (param_2->field0_0x0)._s_0.X);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 <= (param_2->field0_0x0)._s_0.Y);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 <= (param_2->field0_0x0)._s_0.Z);
  }
  return;
}

// RotateInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*> @ 1435e0a20

int __cdecl
AlgoImpl::RotateInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*>
          (FComponent **param_1,int param_2,int param_3)

{
  FComponent *pFVar1;
  FComponent **ppFVar2;
  FComponent **ppFVar4;
  FComponent **ppFVar5;
  FComponent **ppFVar6;
  FComponent **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,`UE::Geometry::FMeshConnectedComponents::SortByCount'::__l5::<lambda_1>_>_> @ 1435e0aa0

void __cdecl
AlgoImpl::
StableSortInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l5::<lambda_1>_>_>
          (FComponent **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_public:_void___cdecl_UE::Geometry::FMeshConnectedComponents::SortByCount(bool)_::_5_::<lambda_1>_>
          param_4)

{
  FComponent *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar6 = 1;
    do {
      if (iVar6 < param_2) {
        pFVar1 = param_1[lVar3];
        if ((pFVar1->Indices).ArrayNum < (param_1[lVar3 + 1]->Indices).ArrayNum) {
          param_1[lVar3] = param_1[lVar3 + 1];
          param_1[lVar3 + 1] = pFVar1;
        }
      }
      iVar6 = iVar6 + 2;
      lVar3 = lVar3 + 2;
    } while (lVar3 < param_2);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar2 <= iVar5) {
          iVar7 = iVar2;
        }
        Merge<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l5::<lambda_1>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StableSortInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,`UE::Geometry::FMeshConnectedComponents::SortByCount'::__l7::<lambda_2>_>_> @ 1435e0ba0

void __cdecl
AlgoImpl::
StableSortInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l7::<lambda_2>_>_>
          (FComponent **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_public:_void___cdecl_UE::Geometry::FMeshConnectedComponents::SortByCount(bool)_::_7_::<lambda_2>_>
          param_4)

{
  FComponent *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar6 = 1;
    do {
      if (iVar6 < param_2) {
        pFVar1 = param_1[lVar3];
        if ((param_1[lVar3 + 1]->Indices).ArrayNum < (pFVar1->Indices).ArrayNum) {
          param_1[lVar3] = param_1[lVar3 + 1];
          param_1[lVar3 + 1] = pFVar1;
        }
      }
      iVar6 = iVar6 + 2;
      lVar3 = lVar3 + 2;
    } while (lVar3 < param_2);
  }
  iVar6 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar6 * 2;
      iVar4 = 0;
      iVar5 = param_2;
      do {
        iVar7 = iVar5;
        if (iVar2 <= iVar5) {
          iVar7 = iVar2;
        }
        Merge<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l7::<lambda_2>_>_>
                  (param_1 + iVar4,iVar6,iVar7,param_3,param_4);
        iVar4 = iVar4 + iVar2;
        iVar5 = iVar5 + iVar6 * -2;
      } while (iVar4 < param_2);
      iVar6 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// ZOrderCurve2<float> @ 1435e1b60

void __cdecl
ZOrderCurvePointsLocal::ZOrderCurve2<float>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_2,TAxisAlignedBox2<float> *param_3
          ,int param_4)

{
  float fVar1;
  code *pcVar2;
  TVector2<float> *pTVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TVector2<float> *pTVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<float>_u_0 local_98;
  float fStack_90;
  float fStack_8c;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_88;
  TVector2<float> *local_78;
  undefined8 uStack_70;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
  local_68 [2];
  
  iVar8 = 0;
  fVar13 = (param_3->Min).field0_0x0._s_0.X;
  fVar11 = (param_3->Min).field0_0x0._s_0.Y;
  fVar12 = (param_3->Max).field0_0x0._s_0.X;
  fVar10 = (param_3->Max).field0_0x0._s_0.Y;
  pTVar3 = param_2->DataPtr;
  uVar4._0_4_ = param_2->ArrayNum;
  uVar4._4_4_ = *(undefined4 *)&param_2->field_0xc;
  local_68[0].Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].Nodes.ArrayNum = 0;
  local_68[0].Nodes.ArrayMax = 0;
  local_68[0].MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].MaxDepthBuckets.ArrayMax = 0;
  local_98._s_0.X = fVar13;
  local_98._s_0.Y = fVar11;
  fStack_90 = fVar12;
  fStack_8c = fVar10;
  local_78 = pTVar3;
  uStack_70 = uVar4;
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0,0);
  local_68[0].MaxDepthBuckets.ArrayNum = 0;
  local_68[0].Num = 0;
  iVar6 = local_68[0].Nodes.ArrayNum;
  if (local_68[0].Nodes.ArrayNum == local_68[0].Nodes.ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)local_68,&local_68[0].Nodes.ArrayMax);
  }
  local_68[0].Nodes.ArrayNum = iVar6 + 1;
  *(undefined8 *)(local_68[0].Nodes.AllocatorInstance.Data + (longlong)iVar6 * 0x10) =
       0xffffffffffffffff;
  *(undefined8 *)(local_68[0].Nodes.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
       0xffffffffffffffff;
  if ((fVar12 < fVar13) || (fVar10 < fVar11)) {
    for (pTVar7 = pTVar3; pTVar7 != pTVar3 + (int)uVar4; pTVar7 = pTVar7 + 1) {
      fVar1 = (pTVar7->field0_0x0)._s_0.X;
      if (fVar1 < fVar13) {
        fVar13 = fVar1;
        local_98._s_0.X = fVar1;
      }
      if (fVar12 < fVar1) {
        fVar12 = fVar1;
        fStack_90 = fVar1;
      }
      fVar1 = (pTVar7->field0_0x0)._s_0.Y;
      if (fVar1 < fVar11) {
        fVar11 = fVar1;
        local_98._s_0.Y = fVar1;
      }
      if (fVar10 < fVar1) {
        fVar10 = fVar1;
        fStack_8c = fVar1;
      }
    }
  }
  local_68[0].MaxDepth = param_4;
  if (0 < (int)uVar4) {
    do {
      local_88.DataPtr = pTVar3;
      local_88._8_8_ = uVar4;
      TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
      ::AddPointHelper(local_68,&local_88,iVar8,(TAxisAlignedBox2<float> *)&local_98._s_0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar4);
  }
  uVar9 = param_2->ArrayNum + param_1->ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (param_1->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
  }
  if ((local_68[0].Nodes.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<float>,UE::Geometry::TAxisAlignedBox2<float>_>
  ::ExtractZOrderCurveHelper
            (local_68,param_1,(FQuadTreeNode *)local_68[0].Nodes.AllocatorInstance.Data,0);
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             local_68[0].MaxDepthBuckets.AllocatorInstance.Data,local_68[0].MaxDepthBuckets.ArrayNum
            );
  if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
      local_68[0].MaxDepthBuckets.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_68[0].MaxDepthBuckets.AllocatorInstance.Data);
  }
  if (local_68[0].Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Nodes.AllocatorInstance.Data);
  }
  return;
}

// ZOrderCurve2<double> @ 1435e1d90

void __cdecl
ZOrderCurvePointsLocal::ZOrderCurve2<double>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<double>_const_,int> *param_2,
          TAxisAlignedBox2<double> *param_3,int param_4)

{
  double dVar1;
  TVector2<double>_u_0_s_0 TVar2;
  TVector2<double>_u_0_s_0 TVar3;
  code *pcVar4;
  TVector2<double> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TVector2<double> *pTVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_b8;
  TVector2<double> *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  TVector2<double>_u_0_s_0 local_88;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
  local_78 [2];
  
  iVar10 = 0;
  TVar2 = (param_3->Max).field0_0x0._s_0;
  uVar15 = TVar2.X._0_4_;
  uVar16 = TVar2.X._4_4_;
  TVar3 = (param_3->Min).field0_0x0._s_0;
  uVar17 = TVar3.X._0_4_;
  uVar18 = TVar3.X._4_4_;
  local_78[0].Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar5 = param_2->DataPtr;
  uVar6._0_4_ = param_2->ArrayNum;
  uVar6._4_4_ = *(undefined4 *)&param_2->field_0xc;
  local_78[0].Nodes.ArrayNum = 0;
  local_78[0].Nodes.ArrayMax = 0;
  local_78[0].MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78[0].MaxDepthBuckets.ArrayMax = 0;
  local_a8 = pTVar5;
  uStack_a0 = uVar6;
  local_98 = (undefined1  [16])TVar3;
  local_88 = TVar2;
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0,0);
  local_78[0].MaxDepthBuckets.ArrayNum = 0;
  local_78[0].Num = 0;
  iVar8 = local_78[0].Nodes.ArrayNum;
  if (local_78[0].Nodes.ArrayNum == local_78[0].Nodes.ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)local_78,&local_78[0].Nodes.ArrayMax);
  }
  local_78[0].Nodes.ArrayNum = iVar8 + 1;
  dVar13 = TVar2.Y;
  dVar14 = TVar3.Y;
  *(undefined8 *)(local_78[0].Nodes.AllocatorInstance.Data + (longlong)iVar8 * 0x10) =
       0xffffffffffffffff;
  *(undefined8 *)(local_78[0].Nodes.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
       0xffffffffffffffff;
  if ((TVar2.X < TVar3.X) || (dVar13 < dVar14)) {
    for (pTVar9 = pTVar5; pTVar9 != pTVar5 + (int)uVar6; pTVar9 = pTVar9 + 1) {
      dVar1 = (pTVar9->field0_0x0)._s_0.X;
      uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
      if (dVar1 < (double)CONCAT44(uVar18,uVar17)) {
        local_98._0_8_ = dVar1;
        uVar17 = SUB84(dVar1,0);
        uVar18 = uVar12;
      }
      if ((double)CONCAT44(uVar16,uVar15) <= dVar1 && dVar1 != (double)CONCAT44(uVar16,uVar15)) {
        local_88.X = dVar1;
        uVar15 = SUB84(dVar1,0);
        uVar16 = uVar12;
      }
      dVar1 = (pTVar9->field0_0x0)._s_0.Y;
      if (dVar1 < dVar14) {
        local_98._8_8_ = dVar1;
        dVar14 = dVar1;
      }
      if (dVar13 < dVar1) {
        local_88.Y = dVar1;
        dVar13 = dVar1;
      }
    }
  }
  local_78[0].MaxDepth = param_4;
  if (0 < (int)uVar6) {
    do {
      local_b8.DataPtr = pTVar5;
      local_b8._8_8_ = uVar6;
      TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
      ::AddPointHelper(local_78,&local_b8,iVar10,(TAxisAlignedBox2<double> *)local_98);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar6);
  }
  uVar11 = param_2->ArrayNum + param_1->ArrayNum;
  if (-1 < (int)uVar11) {
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    if ((local_78[0].Nodes.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TIndexSpatialTree<ZOrderCurvePointsLocal::FQuadTreeNode,UE::Math::TVector2<double>,UE::Geometry::TAxisAlignedBox2<double>_>
    ::ExtractZOrderCurveHelper
              (local_78,param_1,(FQuadTreeNode *)local_78[0].Nodes.AllocatorInstance.Data,0);
    DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
               local_78[0].MaxDepthBuckets.AllocatorInstance.Data,
               local_78[0].MaxDepthBuckets.ArrayNum);
    if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
        local_78[0].MaxDepthBuckets.AllocatorInstance.Data !=
        (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      FMemory::Free(local_78[0].MaxDepthBuckets.AllocatorInstance.Data);
    }
    if (local_78[0].Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Nodes.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// ZOrderCurve3<float> @ 1435e1fe0

void __cdecl
ZOrderCurvePointsLocal::ZOrderCurve3<float>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,TAxisAlignedBox3<float> *param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  TVector<float>_u_0 local_58 [2];
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  local_38;
  
  local_58[0]._0_8_ = *(undefined8 *)&(param_3->Min).field0_0x0;
  local_58._8_8_ = *(undefined8 *)((longlong)&(param_3->Min).field0_0x0 + 8);
  local_58[1]._4_8_ = *(undefined8 *)((longlong)&(param_3->Max).field0_0x0 + 4);
  local_68.DataPtr = param_2->DataPtr;
  local_68.ArrayNum = param_2->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Nodes.ArrayNum = 0;
  local_38.Nodes.ArrayMax = 0;
  local_38.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.MaxDepthBuckets.ArrayNum = 0;
  local_38.MaxDepthBuckets.ArrayMax = 0;
  local_38.Num = 0;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  ::Init(&local_38,&local_68,(TAxisAlignedBox3<float> *)&local_58[0]._s_0,param_4);
  uVar3 = param_2->ArrayNum + param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (param_1->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
  }
  if (local_38.Nodes.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<float>,UE::Geometry::TAxisAlignedBox3<float>_>
  ::ExtractZOrderCurveHelper
            (&local_38,param_1,(FOctreeNode *)local_38.Nodes.AllocatorInstance.Data,0);
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             local_38.MaxDepthBuckets.AllocatorInstance.Data,local_38.MaxDepthBuckets.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
      local_38.MaxDepthBuckets.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_38.MaxDepthBuckets.AllocatorInstance.Data);
  }
  if (local_38.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Nodes.AllocatorInstance.Data);
  }
  return;
}

// ZOrderCurve3<double> @ 1435e2110

void __cdecl
ZOrderCurvePointsLocal::ZOrderCurve3<double>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TAxisAlignedBox3<double> *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> local_78;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  local_68;
  TVector<double>_u_0 local_38;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_38._s_0.X = (param_3->Min).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
  local_38._s_0.Z = (param_3->Min).field0_0x0._s_0.Z;
  dStack_20 = (param_3->Max).field0_0x0._s_0.X;
  local_18 = (param_3->Max).field0_0x0._s_0.Y;
  dStack_10 = (param_3->Max).field0_0x0._s_0.Z;
  local_68.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.DataPtr = param_2->DataPtr;
  local_78.ArrayNum = param_2->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_68.Nodes.ArrayNum = 0;
  local_68.Nodes.ArrayMax = 0;
  local_68.MaxDepthBuckets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MaxDepthBuckets.ArrayNum = 0;
  local_68.MaxDepthBuckets.ArrayMax = 0;
  local_68.Num = 0;
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  ::Init(&local_68,&local_78,(TAxisAlignedBox3<double> *)&local_38._s_0,param_4);
  uVar3 = param_2->ArrayNum + param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (param_1->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
  }
  if (local_68.Nodes.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TIndexSpatialTree<ZOrderCurvePointsLocal::FOctreeNode,UE::Math::TVector<double>,UE::Geometry::TAxisAlignedBox3<double>_>
  ::ExtractZOrderCurveHelper
            (&local_68,param_1,(FOctreeNode *)local_68.Nodes.AllocatorInstance.Data,0);
  DestructItems<TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
             local_68.MaxDepthBuckets.AllocatorInstance.Data,local_68.MaxDepthBuckets.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
      local_68.MaxDepthBuckets.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_68.MaxDepthBuckets.AllocatorInstance.Data);
  }
  if (local_68.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Nodes.AllocatorInstance.Data);
  }
  return;
}

// ~<lambda_1> @ 1435e4620

void __thiscall
`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::
<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001435e4687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,0,0> @ 1435e4900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FSparseDynamicOctree3::CheckValidity_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1435e4920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l24::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4
  ::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,0,0> @ 1435e4940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::InternalUVPacking::FStandardChartPacker::PackCharts_::__l6::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::`6'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1> @ 1435e4960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::InternalUVPacking::FStandardChartPacker::FindBestPacking_::__l24::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::`24'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,0,0> @ 1435e4980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FSparseDynamicOctree3::CheckValidity_::__l5::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,0,0> @ 1435e49a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,0,0>::
~TFunction_OwnedObject<_UE::Geometry::FSparseDynamicOctree3::CheckValidity_::__l9::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`9'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1435e4a60

void __thiscall
TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<__int64,_PriorityOrderPointsLocal::OrderPoints<float>_::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1435e4b00

void __thiscall
TSparseArray<TSparseSetElement<TTuple<__int64,`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<__int64,_PriorityOrderPointsLocal::OrderPoints<double>_::__l2::FBestPtData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator() @ 1435e6c00

long64 __thiscall
`PriorityOrderPointsLocal::OrderPoints<float>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<float> *param_2,float param_3,long64 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  
  plVar1 = *(longlong **)this;
  lVar8 = (longlong)param_1;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0 = extraout_XMM0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
  }
  lVar2 = *plVar1;
  fVar12 = __real_3f800000 / param_3;
  lVar7 = param_4 / 2;
  auVar9 = roundps(in_XMM0,ZEXT416((uint)((*(float *)(lVar2 + 4 + lVar8 * 0xc) -
                                          (param_2->field0_0x0)._s_0.Y) * fVar12)),1);
  auVar10 = roundps(auVar9,ZEXT416((uint)((*(float *)(lVar2 + lVar8 * 0xc) -
                                          (param_2->field0_0x0)._s_0.X) * fVar12)),1);
  auVar11 = roundps(auVar10,ZEXT416((uint)((*(float *)(lVar2 + 8 + lVar8 * 0xc) -
                                           (param_2->field0_0x0)._s_0.Z) * fVar12)),1);
  return (longlong)auVar11._0_4_ +
         ((longlong)auVar9._0_4_ + lVar7 + ((longlong)auVar10._0_4_ + lVar7) * param_4) * param_4 +
         lVar7;
}

// operator() @ 1435e6d10

long64 __thiscall
`PriorityOrderPointsLocal::OrderPoints<double>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double> *param_2,double param_3,long64 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  plVar1 = *(longlong **)this;
  lVar8 = (longlong)param_1;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_XMM0 = extraout_XMM0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      lVar6 = (*pcVar3)();
      return lVar6;
    }
  }
  lVar2 = *plVar1;
  dVar12 = __real_3ff0000000000000 / param_3;
  lVar7 = param_4 / 2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (*(double *)(lVar2 + 8 + lVar8 * 0x18) - (param_2->field0_0x0)._s_0.Y) * dVar12;
  auVar9 = roundpd(in_XMM0,auVar9,1);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (*(double *)(lVar2 + lVar8 * 0x18) - (param_2->field0_0x0)._s_0.X) * dVar12;
  auVar10 = roundpd(auVar9,auVar10,1);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (*(double *)(lVar2 + 0x10 + lVar8 * 0x18) - (param_2->field0_0x0)._s_0.Z) * dVar12
  ;
  auVar11 = roundpd(auVar10,auVar11,1);
  return (longlong)auVar11._0_8_ +
         ((longlong)auVar9._0_8_ + lVar7 + ((longlong)auVar10._0_8_ + lVar7) * param_4) * param_4 +
         lVar7;
}

// `scalar_deleting_destructor' @ 1435ec340

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec3b0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UELocal::ConstructDenseUniformMeshPointSampling<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>_>'::__l4
  ::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::__l6::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::PackCharts'::`6'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec4c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::__l24::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::InternalUVPacking::FStandardChartPacker::FindBestPacking'::`24'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`5'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`9'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1435ec580

void * __thiscall
UE::Geometry::FGridBoxMeshGenerator::_scalar_deleting_destructor_
          (FGridBoxMeshGenerator *this,uint param_1)

{
  FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// GenerateSweepCurve @ 1436060f0

void __cdecl
RevolveUtil::GenerateSweepCurve
          (TVector<double> *param_1,TVector<double> *param_2,double param_3,double param_4,
          double param_5,int param_6,
          TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  int iVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar15;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  TVector<double>_u_0 local_110;
  TQuaternion<double>_u_0 local_f8;
  TVector<double> local_d8 [8];
  
  iVar14 = 0;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  if (0 < param_6) {
    do {
      __libm_sse2_sincos_();
      dVar15 = (double)iVar14 * param_5;
      uVar8 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      dVar6 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (param_2->field0_0x0)._s_0.Y;
      dVar7 = (param_2->field0_0x0)._s_0.X * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_110._s_0.X = dVar15 * (param_2->field0_0x0)._s_0.X - dVar1;
      dVar9 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (param_2->field0_0x0)._s_0.Z;
      local_110._s_0.Y = dVar15 * (param_2->field0_0x0)._s_0.Y - dVar2;
      local_110._s_0.Z = dVar15 * (param_2->field0_0x0)._s_0.Z - dVar3;
      local_f8._s_0.X = dVar7;
      local_f8._s_0.Y = dVar6;
      local_f8._s_0.Z = dVar9;
      pTVar12 = UE::Geometry::operator*<double>
                          (local_d8,(TQuaternion<double> *)&local_f8._s_0,
                           (TVector<double> *)&local_110._s_0);
      pFVar4 = (param_7->AllocatorInstance).Data;
      local_148 = (param_1->field0_0x0)._s_0.X + (pTVar12->field0_0x0)._s_0.X;
      dStack_140 = (pTVar12->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      local_138 = (pTVar12->field0_0x0)._s_0.Z + (param_1->field0_0x0)._s_0.Z;
      dStack_130 = dVar7;
      local_128 = dVar6;
      dStack_120 = dVar9;
      local_118 = uVar8;
      if (((pFVar4 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar4 + (longlong)param_7->ArrayMax * 0x38)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = param_7->ArrayNum;
      if (iVar11 == param_7->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&param_7->AllocatorInstance,&param_7->ArrayMax);
      }
      iVar14 = iVar14 + 1;
      param_7->ArrayNum = iVar11 + 1;
      lVar13 = (longlong)iVar11 * 0x38;
      pFVar4 = (param_7->AllocatorInstance).Data;
      *(double *)(pFVar4 + lVar13) = local_148;
      *(double *)(pFVar4 + lVar13 + 8) = dStack_140;
      *(double *)(pFVar4 + lVar13 + 0x10) = local_138;
      *(double *)(pFVar4 + lVar13 + 0x10 + 8) = dStack_130;
      *(double *)(pFVar4 + lVar13 + 0x20) = local_128;
      *(double *)(pFVar4 + lVar13 + 0x20 + 8) = dStack_120;
      *(undefined8 *)(pFVar4 + lVar13 + 0x30) = local_118;
    } while (iVar14 < param_6);
  }
  return;
}

// MakeProfileCurveMidpointOfFirstStep @ 14360da40

void __cdecl
RevolveUtil::MakeProfileCurveMidpointOfFirstStep
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,double param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_res8 [8];
  double local_res10;
  
  local_res10 = tan(param_2 * __real_3f81df46a2529d39);
  iVar2 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    dVar10 = (param_4->field0_0x0)._s_0.Z;
    dVar6 = *(double *)pFVar5 - (param_3->field0_0x0)._s_0.X;
    dVar9 = *(double *)(pFVar5 + 0x10) - (param_3->field0_0x0)._s_0.Z;
    dVar4 = *(double *)(pFVar5 + 8) - (param_3->field0_0x0)._s_0.Y;
    dVar14 = dVar6 * dVar10 - dVar9 * (param_4->field0_0x0)._s_0.X;
    dVar8 = dVar9 * (param_4->field0_0x0)._s_0.Y - dVar4 * dVar10;
    dVar15 = dVar4 * (param_4->field0_0x0)._s_0.X - dVar6 * (param_4->field0_0x0)._s_0.Y;
    auVar7._0_8_ = dVar14 * dVar14;
    auVar7._8_8_ = 0;
    auVar11._0_8_ = dVar8 * dVar8 + auVar7._0_8_ + dVar15 * dVar15;
    auVar11._8_8_ = 0;
    auVar7 = sqrtpd(auVar7,auVar11);
    if (auVar7._0_8_ <= 0.0) {
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar13 = __real_3ff0000000000000 / auVar7._0_8_;
      dVar14 = dVar13 * dVar14;
      dVar15 = dVar13 * dVar15;
      dVar13 = dVar13 * dVar8;
    }
    dVar8 = (param_4->field0_0x0)._s_0.X * dVar6 + (param_4->field0_0x0)._s_0.Y * dVar4 +
            dVar10 * dVar9;
    dVar4 = dVar8 * (param_4->field0_0x0)._s_0.Y - dVar4;
    dVar6 = dVar8 * (param_4->field0_0x0)._s_0.X - dVar6;
    dVar9 = dVar8 * dVar10 - dVar9;
    auVar12._0_8_ = dVar9 * dVar9;
    auVar12._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar4 * dVar4 + dVar6 * dVar6 + auVar12._0_8_;
    auVar7 = sqrtpd(auVar12,auVar3);
    dVar10 = auVar7._0_8_ * local_res10;
    *(double *)pFVar5 = *(double *)pFVar5 - dVar10 * dVar13;
    *(double *)(pFVar5 + 8) = *(double *)(pFVar5 + 8) - dVar10 * dVar14;
    *(double *)(pFVar5 + 0x10) = *(double *)(pFVar5 + 0x10) - dVar10 * dVar15;
    pFVar5 = pFVar5 + 0x18;
  }
  return;
}

// ProfileIsCCWRelativeRevolve @ 143614430

bool __cdecl
RevolveUtil::ProfileIsCCWRelativeRevolve
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,bool param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar21 [16];
  
  iVar13 = param_1->ArrayNum;
  if (iVar13 < 2) {
LAB_143614861:
    uVar8 = 1;
  }
  else {
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar14 = 0;
    uVar11 = 1;
    lVar12 = 0x18;
    dVar5 = (*(double *)(pFVar2 + 8) - (param_2->field0_0x0)._s_0.Y) * (param_3->field0_0x0)._s_0.Y
            + (*(double *)pFVar2 - (param_2->field0_0x0)._s_0.X) * (param_3->field0_0x0)._s_0.X +
            (*(double *)(pFVar2 + 0x10) - (param_2->field0_0x0)._s_0.Z) *
            (param_3->field0_0x0)._s_0.Z;
    do {
      uVar10 = 0;
      if ((int)uVar11 < iVar13) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      dVar1 = (param_3->field0_0x0)._s_0.Y;
      dVar15 = (param_3->field0_0x0)._s_0.X;
      dVar18 = (param_3->field0_0x0)._s_0.Z;
      uVar8 = (ulonglong)uVar11;
      iVar13 = param_1->ArrayNum;
      dVar4 = (*(double *)(pFVar2 + lVar12 + 8) - (param_2->field0_0x0)._s_0.Y) * dVar1 +
              (*(double *)(pFVar2 + lVar12) - (param_2->field0_0x0)._s_0.X) * dVar15 +
              (*(double *)(pFVar2 + lVar12 + 0x10) - (param_2->field0_0x0)._s_0.Z) * dVar18;
      if (dVar5 <= dVar4) {
        uVar8 = uVar14 & 0xffffffff;
        dVar4 = dVar5;
      }
      dVar5 = dVar4;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x18;
      uVar10 = (uint)uVar8;
      uVar14 = (ulonglong)(int)uVar10;
    } while ((int)uVar11 < iVar13);
    if (!param_4) {
      if (uVar10 == 0) goto LAB_143614863;
      if (uVar10 == iVar13 - 1U) goto LAB_143614861;
    }
    uVar11 = 0;
    if ((int)uVar10 < iVar13) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar13 = param_1->ArrayNum;
    dVar15 = dVar15 * dVar5 - (*(double *)(pFVar2 + uVar14 * 0x18) - (param_2->field0_0x0)._s_0.X);
    dVar1 = dVar1 * dVar5 - (*(double *)(pFVar2 + uVar14 * 0x18 + 8) - (param_2->field0_0x0)._s_0.Y)
    ;
    uVar9 = (int)(iVar13 + -1 + uVar10) % iVar13;
    dVar18 = dVar5 * dVar18 -
             (*(double *)(pFVar2 + uVar14 * 0x18 + 0x10) - (param_2->field0_0x0)._s_0.Z);
    lVar12 = (longlong)(int)uVar9;
    uVar11 = 0;
    if ((int)uVar9 < iVar13) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar1 * dVar1 + dVar15 * dVar15 + dVar18 * dVar18;
    auVar21 = sqrtpd(unaff_XMM12,auVar21);
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    dVar1 = *(double *)(pFVar2 + lVar12 * 0x18 + 8) - (param_2->field0_0x0)._s_0.Y;
    dVar18 = *(double *)(pFVar2 + lVar12 * 0x18) - (param_2->field0_0x0)._s_0.X;
    dVar15 = *(double *)(pFVar2 + lVar12 * 0x18 + 0x10) - (param_2->field0_0x0)._s_0.Z;
    uVar10 = (int)(uVar10 + 1) % param_1->ArrayNum;
    lVar12 = (longlong)(int)uVar10;
    uVar11 = 0;
    if ((int)uVar10 < param_1->ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    dVar4 = dVar1 * (param_3->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.X * dVar18 +
            dVar15 * (param_3->field0_0x0)._s_0.Z;
    dVar1 = dVar4 * (param_3->field0_0x0)._s_0.Y - dVar1;
    dVar18 = dVar4 * (param_3->field0_0x0)._s_0.X - dVar18;
    dVar15 = dVar4 * (param_3->field0_0x0)._s_0.Z - dVar15;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = dVar1 * dVar1 + dVar18 * dVar18 + dVar15 * dVar15;
    auVar20 = sqrtpd(unaff_XMM11,auVar20);
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    dVar1 = *(double *)(pFVar2 + lVar12 * 0x18 + 8) - (param_2->field0_0x0)._s_0.Y;
    dVar19 = *(double *)(pFVar2 + lVar12 * 0x18) - (param_2->field0_0x0)._s_0.X;
    dVar15 = *(double *)(pFVar2 + lVar12 * 0x18 + 0x10) - (param_2->field0_0x0)._s_0.Z;
    dVar18 = (param_3->field0_0x0)._s_0.X * dVar19 + dVar1 * (param_3->field0_0x0)._s_0.Y +
             dVar15 * (param_3->field0_0x0)._s_0.Z;
    dVar15 = dVar18 * (param_3->field0_0x0)._s_0.Z - dVar15;
    dVar1 = dVar18 * (param_3->field0_0x0)._s_0.Y - dVar1;
    dVar19 = dVar18 * (param_3->field0_0x0)._s_0.X - dVar19;
    auVar16._0_8_ = dVar15 * dVar15;
    auVar16._8_8_ = 0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar1 * dVar1 + dVar19 * dVar19 + auVar16._0_8_;
    auVar17 = sqrtpd(auVar16,auVar17);
    uVar8 = (ulonglong)
            (0.0 < (dVar18 - dVar5) * (auVar20._0_8_ - auVar21._0_8_) -
                   (auVar17._0_8_ - auVar21._0_8_) * (dVar4 - dVar5));
  }
LAB_143614863:
  return SUB81(uVar8,0);
}

// WeldPointsOnAxis @ 14361efd0

void __cdecl
RevolveUtil::WeldPointsOnAxis
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,double param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_res8 [2];
  int local_res20 [2];
  
  iVar13 = param_1->ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar13) {
    do {
      uVar12 = local_res8[0];
      uVar10 = 0;
      if ((int)local_res8[0] < iVar13) {
        uVar10 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar1 = (param_2->field0_0x0)._s_0.Y;
      dVar2 = (param_2->field0_0x0)._s_0.X;
      dVar3 = (param_2->field0_0x0)._s_0.Z;
      lVar11 = (longlong)(int)uVar12;
      pFVar4 = (param_1->AllocatorInstance).Data;
      dVar15 = *(double *)(pFVar4 + lVar11 * 0x18 + 8) - dVar1;
      dVar16 = *(double *)(pFVar4 + lVar11 * 0x18) - dVar2;
      dVar14 = *(double *)(pFVar4 + lVar11 * 0x18 + 0x10) - dVar3;
      dVar7 = (param_3->field0_0x0)._s_0.X * dVar16 + dVar15 * (param_3->field0_0x0)._s_0.Y +
              dVar14 * (param_3->field0_0x0)._s_0.Z;
      dVar8 = dVar7 * (param_3->field0_0x0)._s_0.X;
      dVar16 = dVar8 - dVar16;
      dVar6 = dVar7 * (param_3->field0_0x0)._s_0.Y;
      dVar7 = dVar7 * (param_3->field0_0x0)._s_0.Z;
      dVar15 = dVar6 - dVar15;
      dVar14 = dVar7 - dVar14;
      if (dVar15 * dVar15 + dVar16 * dVar16 + dVar14 * dVar14 < param_4 * param_4) {
        uVar10 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar11 = (longlong)(int)uVar12;
        pFVar4 = (param_1->AllocatorInstance).Data;
        *(double *)(pFVar4 + lVar11 * 0x18) = dVar8 + dVar2;
        *(double *)(pFVar4 + lVar11 * 0x18 + 8) = dVar6 + dVar1;
        *(double *)(pFVar4 + lVar11 * 0x18 + 0x10) = dVar7 + dVar3;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_5,local_res20,(bool *)local_res8);
        uVar12 = local_res8[0];
      }
      iVar13 = param_1->ArrayNum;
      local_res8[0] = uVar12 + 1;
    } while ((int)local_res8[0] < iVar13);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FAutoRTFMConvexHullTestsInstance'' @ 150361bc0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FAutoRTFMConvexHullTestsInstance__(void)

{
  if (FAutoRTFMConvexHullTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FAutoRTFMConvexHullTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
                 );
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMConvexHullTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FAutoRTFMDynamicMesh3TestAutomationTestInstance'' @ 150361bf0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAutoRTFMDynamicMesh3TestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAutoRTFMDynamicMesh3TestAutomationTestInstance);
  return;
}

// operator() @ 15049fd60

bool __thiscall
``UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7861995548667020094>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7861995548667020094>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

