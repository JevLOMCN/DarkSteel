// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 17

// FVoronoiPartitioner @ 14e802120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FVoronoiPartitioner * __thiscall
FVoronoiPartitioner::FVoronoiPartitioner
          (FVoronoiPartitioner *this,FGeometryCollection *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVoronoiPartitioner *pFVar5;
  <lambda_1> local_res18;
  FVoronoiPartitioner *local_58;
  FGeometryCollection *local_50;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FVoronoiPartitioner **local_30;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  (this->TransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformIndices).ArrayNum = 0;
  (this->TransformIndices).ArrayMax = 0;
  (this->Centroids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Centroids).ArrayNum = 0;
  (this->Centroids).ArrayMax = 0;
  (this->Partitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Partitions).ArrayNum = 0;
  (this->Partitions).ArrayMax = 0;
  (this->PartitionSize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartitionSize).ArrayNum = 0;
  (this->PartitionSize).ArrayMax = 0;
  (this->PartitionCenters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartitionCenters).ArrayNum = 0;
  (this->PartitionCenters).ArrayMax = 0;
  (this->Connectivity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connectivity).ArrayNum = 0;
  (this->Connectivity).ArrayMax = 0;
  (this->Visited).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Visited).ArrayNum = 0;
  (this->Visited).ArrayMax = 0;
  uVar4 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FVoronoiPartitioner *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = (FVoronoiPartitioner *)
           TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      ((longlong)param_2 * 0x50 + param_1->_padding_),&local_28);
  if (this != pFVar5) {
    pFVar1 = (this->TransformIndices).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->TransformIndices).AllocatorInstance.Data =
         (pFVar5->TransformIndices).AllocatorInstance.Data;
    (pFVar5->TransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TransformIndices).ArrayNum = (pFVar5->TransformIndices).ArrayNum;
    (this->TransformIndices).ArrayMax = (pFVar5->TransformIndices).ArrayMax;
    (pFVar5->TransformIndices).ArrayNum = 0;
    (pFVar5->TransformIndices).ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Centroids,(this->TransformIndices).ArrayNum,Default);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVoronoiPartitioner::GenerateCentroids'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = &local_58;
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  local_58 = this;
  local_50 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->TransformIndices).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_38,local_res18,None,&local_48);
  return this;
}

// operator() @ 14e802950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FVoronoiPartitioner::GenerateCentroids'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TVector<double>_u_0 local_98;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)this;
  lVar10 = (longlong)param_1;
  iVar1 = (int)plVar2[1];
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_a8 = lVar10;
    local_a0 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVoronoiPartitioner::GenerateBounds
            ((TBox<double> *)&local_98._s_0,*(FGeometryCollection **)((longlong)this + 8),
             *(int *)(*plVar2 + lVar10 * 4));
  lVar3 = *(longlong *)this;
  iVar1 = *(int *)(lVar3 + 0x18);
  local_a0 = (longlong)iVar1;
  uVar9 = 0;
  if (param_1 < iVar1) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  dVar5 = (local_98._s_0.X + local_80) * __real_3fe0000000000000;
  dVar6 = (local_98._s_0.Y + local_78) * __real_3fe0000000000000;
  dVar7 = (local_98._s_0.Z + local_70) * __real_3fe0000000000000;
  if (uVar9 == 0) {
    local_a8 = lVar10;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  *(double *)(lVar3 + lVar10 * 0x18) = dVar5;
  *(double *)(lVar3 + 8 + lVar10 * 0x18) = dVar6;
  *(double *)(lVar3 + 0x10 + lVar10 * 0x18) = dVar7;
  return;
}

// CollectConnections @ 14e807f80

void __thiscall
FVoronoiPartitioner::CollectConnections
          (FVoronoiPartitioner *this,FGeometryCollection *param_1,int param_2,int param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  int local_148 [2];
  longlong *local_140;
  int iStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98 [4];
  undefined4 local_74;
  undefined4 local_54;
  
  iVar9 = 0;
  lVar18 = (longlong)param_2;
  uVar14 = (uint)~param_2 >> 0x1f;
  uVar13 = 0;
  if (param_2 < *(int *)&(param_1->SimulationType).field_0x18) {
    uVar13 = uVar14;
  }
  local_res20 = param_3;
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar5 = FGeometryCollection::GeometryGroup;
  if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar18 * 4) == 1) {
    pFVar10 = ::FName::FName(local_98,"Proximity");
    pTVar11 = FManagedArrayCollection::
              GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                        ((FManagedArrayCollection *)param_1,*pFVar10,FVar5);
    uVar13 = 0;
    if (param_2 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
      uVar13 = uVar14;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar18 * 4);
    uVar14 = 0;
    if ((int)uVar13 < *(int *)&pTVar11->field_0x18) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_138 = 0;
    uStack_134 = 1;
    plVar19 = (longlong *)((longlong)(int)uVar13 * 0x50 + *(longlong *)&pTVar11->field_0x10);
    iVar9 = (int)plVar19[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar19 + 2);
    local_120 = 0;
    iStack_124 = 0;
    if (iVar9 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar13 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      iStack_138 = 0;
      local_120 = 0;
      while (uVar13 == 0) {
        lVar18 = (longlong)iStack_138;
        local_120 = local_120 + 0x20;
        iStack_138 = iStack_138 + 1;
        iStack_124 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138) goto LAB_14e80815f;
        uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      }
      uStack_134 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_134 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_110 = (int)lVar18;
      iStack_124 = local_120 + -1 + local_110;
      if (iVar9 < iStack_124) {
        iStack_124 = iVar9;
      }
    }
LAB_14e80815f:
    uVar13 = *(uint *)(plVar19 + 5);
    uStack_11c = local_74;
    iStack_118 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
    uVar14 = uVar13 & 0xffffffe0;
    uStack_128 = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_134,iStack_138);
    TStack_f0.CurrentBitIndex = iStack_124;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar13 >> 5;
    TStack_f0._28_4_ = local_74;
    TStack_f0.BaseBitIndex = local_120;
    uStack_d0 = CONCAT44(uStack_114,iStack_118);
    local_140 = plVar19;
    local_130 = pTVar1;
    local_100 = plVar19;
    local_f8 = plVar19;
    TStack_f0.Array = pTVar1;
    if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar6 = local_100;
    uVar8 = *(uint *)(plVar19 + 5);
    if (uVar13 != uVar8) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar15 * 4);
      while (uVar13 == 0) {
        lVar18 = (longlong)iVar15;
        uVar14 = uVar14 + 0x20;
        iVar15 = iVar15 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14e808280;
        uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_10c = (int)lVar18;
      uVar13 = local_10c + -1 + uVar14;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_14e808280:
    while( true ) {
      plVar19 = local_f8;
      if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_f0.CurrentBitIndex == uVar13) && (TStack_f0.Array == pTVar1)) &&
         (plVar19 == plVar6)) break;
      uVar14 = *(uint *)(*plVar19 + (longlong)TStack_f0.CurrentBitIndex * 0xc);
      uVar8 = 0;
      if ((int)uVar14 < *(int *)&(param_1->TransformIndex).field_0x18) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = FGeometryCollectionClusteringUtility::GetParentOfBoneAtSpecifiedLevel
                        (param_1,*(int *)(*(longlong *)&(param_1->TransformIndex).field_0x10 +
                                         (longlong)(int)uVar14 * 4),local_res20,false);
      pFVar3 = (this->TransformIndices).AllocatorInstance.Data;
      for (pFVar12 = pFVar3; pFVar12 != pFVar3 + (longlong)(this->TransformIndices).ArrayNum * 4;
          pFVar12 = pFVar12 + 4) {
        if (*(int *)pFVar12 == iVar9) {
          local_148[0] = (int)((longlong)pFVar12 - (longlong)pFVar3 >> 2);
          if (-1 < local_148[0]) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (param_4,&local_108,(bool *)local_148);
          }
          goto LAB_14e80835b;
        }
      }
      local_148[0] = -1;
LAB_14e80835b:
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    }
  }
  else {
    uVar13 = 0;
    if (param_2 < (int)param_1->_padding_) {
      uVar13 = uVar14;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_134 = 1;
    plVar19 = (longlong *)(lVar18 * 0x50 + param_1->_padding_);
    local_120 = 0;
    iVar15 = (int)plVar19[5];
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar19 + 2);
    iStack_124 = 0;
    if (iVar15 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar13 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      while (uVar13 == 0) {
        lVar18 = (longlong)iVar9;
        local_120 = local_120 + 0x20;
        iVar9 = iVar9 + 1;
        iStack_124 = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14e80846e;
        uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      }
      uStack_134 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_134 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_104 = (int)lVar18;
      iStack_124 = local_120 + -1 + local_104;
      if (iVar15 < iStack_124) {
        iStack_124 = iVar15;
      }
    }
LAB_14e80846e:
    uVar13 = *(uint *)(plVar19 + 5);
    uStack_11c = local_54;
    uVar14 = uVar13 & 0xffffffe0;
    iStack_118 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
    uStack_128 = 0xffffffff;
    TStack_c0._padding_ = CONCAT44(uStack_134,iVar9);
    TStack_c0.CurrentBitIndex = iStack_124;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar13 >> 5;
    TStack_c0._28_4_ = local_54;
    TStack_c0.BaseBitIndex = local_120;
    uStack_a0 = CONCAT44(uStack_114,iStack_118);
    local_140 = plVar19;
    iStack_138 = iVar9;
    local_130 = pTVar1;
    local_c8 = plVar19;
    TStack_c0.Array = pTVar1;
    if ((((int)uVar13 < 0) || (iVar15 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = *(uint *)(plVar19 + 5);
    if (uVar13 != uVar8) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar13 == 0) {
        lVar18 = (longlong)iVar16;
        uVar14 = uVar14 + 0x20;
        iVar16 = iVar16 + 1;
        uVar13 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14e808580;
        uVar13 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar18 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar13 = (int)lVar18 + -1 + uVar14;
      if ((int)uVar8 < (int)uVar13) {
        uVar13 = uVar8;
      }
    }
LAB_14e808580:
    while( true ) {
      plVar6 = local_c8;
      if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_c0.CurrentBitIndex == uVar13) && (TStack_c0.Array == pTVar1)) &&
         (plVar6 == plVar19)) break;
      CollectConnections(this,param_1,*(int *)(*plVar6 + (longlong)TStack_c0.CurrentBitIndex * 0xc),
                         local_res20,param_4);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
  }
  return;
}

// FindClosestPartitionCenter @ 14e80eed0

int __thiscall
FVoronoiPartitioner::FindClosestPartitionCenter(FVoronoiPartitioner *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  
  uVar6 = 0;
  uVar4 = 0xffffffff;
  if (0 < this->PartitionCount) {
    lVar7 = 0;
    fVar13 = __real_7f7fffff;
    uVar8 = 0xffffffff;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->PartitionCenters).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->PartitionCenters).AllocatorInstance.Data;
      dVar12 = *(double *)(pFVar1 + lVar7 + 8) - (param_1->field0_0x0)._s_0.Y;
      dVar11 = *(double *)(pFVar1 + lVar7) - (param_1->field0_0x0)._s_0.X;
      dVar9 = *(double *)(pFVar1 + lVar7 + 0x10) - (param_1->field0_0x0)._s_0.Z;
      fVar10 = (float)(dVar12 * dVar12 + dVar11 * dVar11 + dVar9 * dVar9);
      uVar4 = uVar6;
      if (fVar13 <= fVar10) {
        fVar10 = fVar13;
        uVar4 = uVar8;
      }
      fVar13 = fVar10;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
      uVar8 = uVar4;
    } while ((int)uVar6 < this->PartitionCount);
    if (uVar4 < 0x80000000) {
      return uVar4;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ClosestPartition > INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                     ,0x222,L"");
  if (!bVar3) {
    return uVar4;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// GenerateBounds @ 14e80f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TBox<double> * __cdecl
FVoronoiPartitioner::GenerateBounds
          (TBox<double> *__return_storage_ptr__,FGeometryCollection *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TBox<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar23;
  float fVar25;
  double dVar24;
  float fVar26;
  double dVar27;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  undefined8 local_138;
  float local_130;
  undefined1 local_128 [24];
  TVector<double>_u_0 TStack_110;
  uchar local_f8;
  uchar uStack_f7;
  uchar uStack_f6;
  uchar uStack_f5;
  uchar uStack_f4;
  uchar uStack_f3;
  uchar uStack_f2;
  uchar uStack_f1;
  __m128 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  TBox<double> local_b8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar11 = 0;
  lVar12 = (longlong)param_2;
  iVar7 = *(int *)&(param_1->SimulationType).field_0x18;
  uVar13 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  uVar6 = uVar9;
  if (param_2 < iVar7) {
    uVar6 = uVar13;
  }
  if ((uVar6 == 0) &&
     (local_168 = lVar12, local_160 = (longlong)iVar7,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TBox<double> *)(*pcVar4)();
    return pTVar8;
  }
  if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar12 * 4) != 1) {
    iVar7 = *(int *)&(param_1->SimulationType).field_0x18;
    uVar6 = uVar9;
    if (param_2 < iVar7) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (local_168 = lVar12, local_160 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar4)();
      return pTVar8;
    }
    if ((*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar12 * 4) != 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeometryCollection->IsRigid(TransformIndex) || GeometryCollection->IsClustered(TransformIndex)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                           ,0x199,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar7 = *(int *)&(param_1->SimulationType).field_0x18;
  uVar6 = uVar9;
  if (param_2 < iVar7) {
    uVar6 = uVar13;
  }
  if ((uVar6 == 0) &&
     (local_168 = lVar12, local_160 = (longlong)iVar7,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TBox<double> *)(*pcVar4)();
    return pTVar8;
  }
  uVar6 = 0;
  if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar12 * 4) == 1) {
    GeometryCollectionAlgo::GlobalMatrix3f
              ((TTransform<float> *)&local_e8,
               (TManagedArray<UE::Math::TTransform<float>_> *)&param_1->_padding_,
               (TManagedArray<int> *)&param_1->_padding_,param_2);
    iVar7 = *(int *)&(param_1->TransformToGeometryIndex).field_0x18;
    if (param_2 < iVar7) {
      uVar9 = uVar13;
    }
    if ((uVar9 == 0) &&
       (local_168 = lVar12, local_160 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar4)();
      return pTVar8;
    }
    iVar7 = *(int *)&(param_1->VertexStart).field_0x18;
    uVar9 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 + lVar12 * 4);
    lVar12 = (longlong)(int)uVar9;
    uVar13 = uVar6;
    if ((int)uVar9 < iVar7) {
      uVar13 = ~uVar9 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (local_168 = lVar12, local_160 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar4)();
      return pTVar8;
    }
    iVar7 = *(int *)&(param_1->VertexCount).field_0x18;
    iVar2 = *(int *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar12 * 4);
    if ((int)uVar9 < iVar7) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (local_168 = lVar12, local_160 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar4)();
      return pTVar8;
    }
    iVar7 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar12 * 4);
    lVar12 = (longlong)iVar7;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_158,iVar7,Default);
    if (0 < iVar7) {
      lVar10 = 0;
      lVar14 = (longlong)iVar2 * 0xc;
      do {
        iVar7 = *(int *)&(param_1->Vertex).field_0x18;
        uVar9 = uVar11 + iVar2;
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_168 = (longlong)(int)uVar9;
          local_160 = (longlong)iVar7;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TBox<double> *)(*pcVar4)();
            return pTVar8;
          }
        }
        lVar3 = *(longlong *)&(param_1->Vertex).field_0x10;
        uVar20 = *(undefined8 *)(lVar14 + lVar3);
        fVar23 = (float)uVar20 * local_c8;
        fVar25 = (float)((ulonglong)uVar20 >> 0x20) * fStack_c4;
        fVar26 = *(float *)(lVar14 + 8 + lVar3) * fStack_c0;
        uVar6 = 0;
        if ((int)uVar11 < local_158.ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        fVar19 = fVar25 * local_e8.m128_f32[0] - local_e8.m128_f32[1] * fVar23;
        fVar21 = fVar26 * local_e8.m128_f32[1] - local_e8.m128_f32[2] * fVar25;
        fVar22 = fVar23 * local_e8.m128_f32[2] - local_e8.m128_f32[0] * fVar26;
        fVar21 = fVar21 + fVar21;
        fVar22 = fVar22 + fVar22;
        fVar19 = fVar19 + fVar19;
        fVar23 = local_e8.m128_f32[3] * fVar21 + fVar23 +
                 (fVar19 * local_e8.m128_f32[1] - local_e8.m128_f32[2] * fVar22) + local_d8;
        fVar25 = local_e8.m128_f32[3] * fVar22 + fVar25 +
                 (fVar21 * local_e8.m128_f32[2] - local_e8.m128_f32[0] * fVar19) + fStack_d4;
        local_138 = CONCAT44(fVar25,fVar23);
        local_130 = local_e8.m128_f32[3] * fVar19 + fVar26 +
                    (fVar22 * local_e8.m128_f32[0] - local_e8.m128_f32[1] * fVar21) + fStack_d0;
        dVar27 = (double)local_130;
        if (uVar6 == 0) {
          local_168 = (longlong)(int)uVar11;
          local_160 = (longlong)local_158.ArrayNum;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TBox<double> *)(*pcVar4)();
            return pTVar8;
          }
        }
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0xc;
        *(double *)(local_158.AllocatorInstance.Data + lVar10) = (double)fVar23;
        *(double *)(local_158.AllocatorInstance.Data + lVar10 + 8) = (double)fVar25;
        *(double *)(local_158.AllocatorInstance.Data + lVar10 + 0x10) = dVar27;
        lVar10 = lVar10 + 0x18;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    iVar7 = local_158.ArrayNum;
    if (local_158.ArrayNum < 1) {
      local_168 = 0;
      local_160 = (longlong)local_158.ArrayNum;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TBox<double> *)(*pcVar4)();
        return pTVar8;
      }
    }
    UE::Math::TBox<double>::TBox<double>
              (__return_storage_ptr__,(TVector<double> *)local_158.AllocatorInstance.Data,iVar7);
    local_148.AllocatorInstance.Data = local_158.AllocatorInstance.Data;
  }
  else {
    iVar7 = (int)param_1->_padding_;
    uVar9 = uVar6;
    if (param_2 < iVar7) {
      uVar9 = uVar13;
    }
    if ((uVar9 == 0) &&
       (local_168 = lVar12, local_160 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar4)();
      return pTVar8;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (lVar12 * 0x50 + param_1->_padding_),&local_148);
    iVar7 = local_148.ArrayNum;
    if (iVar7 == 0) {
      __return_storage_ptr__->IsValid = '\0';
    }
    else {
      if (iVar7 < 1) {
        local_160 = (longlong)iVar7;
        local_168 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TBox<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      GenerateBounds((TBox<double> *)local_128,param_1,*(int *)local_148.AllocatorInstance.Data);
      uVar9 = 1;
      if (1 < local_148.ArrayNum) {
        lVar12 = 4;
        do {
          uVar11 = uVar6;
          if ((int)uVar9 < local_148.ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_160 = (longlong)local_148.ArrayNum;
            local_168 = (longlong)(int)uVar9;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TBox<double> *)(*pcVar4)();
              return pTVar8;
            }
          }
          pTVar8 = GenerateBounds(&local_b8,param_1,
                                  *(int *)(local_148.AllocatorInstance.Data + lVar12));
          if (local_f8 == '\0') {
            if (pTVar8->IsValid != '\0') {
              local_128._0_16_ = *(undefined1 (*) [16])&(pTVar8->Min).field0_0x0;
              unique0x100007f8 = *(undefined1 (*) [16])((longlong)&(pTVar8->Min).field0_0x0 + 0x10);
              TStack_110._s_0.Y = (pTVar8->Max).field0_0x0._s_0.Y;
              TStack_110._s_0.Z = (pTVar8->Max).field0_0x0._s_0.Z;
              local_f8 = pTVar8->IsValid;
              uStack_f7 = pTVar8->Pad[0];
              uStack_f6 = pTVar8->Pad[1];
              uStack_f5 = pTVar8->Pad[2];
              uStack_f4 = pTVar8->Pad[3];
              uStack_f3 = pTVar8->Pad[4];
              uStack_f2 = pTVar8->Pad[5];
              uStack_f1 = pTVar8->Pad[6];
            }
          }
          else if (pTVar8->IsValid != '\0') {
            dVar27 = (pTVar8->Min).field0_0x0._s_0.X;
            if (dVar27 <= (double)local_128._0_8_) {
              local_128._0_8_ = dVar27;
            }
            dVar27 = *(double *)((longlong)&(pTVar8->Min).field0_0x0 + 8);
            if ((double)local_128._8_8_ <= dVar27) {
              dVar27 = (double)local_128._8_8_;
            }
            dVar24 = (pTVar8->Min).field0_0x0._s_0.Z;
            if ((double)local_128._16_8_ <= dVar24) {
              dVar24 = (double)local_128._16_8_;
            }
            uVar20 = *(undefined8 *)&(pTVar8->Max).field0_0x0;
            if ((double)uVar20 <= TStack_110._s_0.X) {
              uVar20 = TStack_110._s_0.X;
            }
            dVar1 = *(double *)((longlong)&(pTVar8->Max).field0_0x0 + 8);
            uVar15 = SUB84(dVar1,0);
            uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= TStack_110._s_0.Y) {
              uVar15 = SUB84(TStack_110._s_0.Y,0);
              uVar16 = (undefined4)((ulonglong)TStack_110._8_8_ >> 0x20);
            }
            dVar1 = *(double *)((longlong)&(pTVar8->Max).field0_0x0 + 0x10);
            uVar17 = SUB84(dVar1,0);
            uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
            if (dVar1 <= TStack_110._s_0.Z) {
              uVar17 = SUB84(TStack_110._s_0.Z,0);
              uVar18 = (undefined4)((ulonglong)TStack_110._16_8_ >> 0x20);
            }
            TStack_110._12_4_ = uVar16;
            TStack_110._8_4_ = uVar15;
            TStack_110._20_4_ = uVar18;
            TStack_110._16_4_ = uVar17;
            local_128._8_4_ = SUB84(dVar27,0);
            local_128._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            unique0x10000261 = (int)uVar20;
            local_128._16_8_ = dVar24;
            unique0x10000265 = (int)((ulonglong)uVar20 >> 0x20);
          }
          uVar9 = uVar9 + 1;
          lVar12 = lVar12 + 4;
        } while ((int)uVar9 < local_148.ArrayNum);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)local_128._0_8_;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)local_128._8_8_;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)local_128._16_8_;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = TStack_110._s_0.X;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = TStack_110._s_0.Y;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = TStack_110._s_0.Z;
      __return_storage_ptr__->IsValid = local_f8;
      __return_storage_ptr__->Pad[0] = uStack_f7;
      __return_storage_ptr__->Pad[1] = uStack_f6;
      __return_storage_ptr__->Pad[2] = uStack_f5;
      __return_storage_ptr__->Pad[3] = uStack_f4;
      __return_storage_ptr__->Pad[4] = uStack_f3;
      __return_storage_ptr__->Pad[5] = uStack_f2;
      __return_storage_ptr__->Pad[6] = uStack_f1;
    }
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateCentroid @ 14e810b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FVoronoiPartitioner::GenerateCentroid
          (FVoronoiPartitioner *this,TVector<double> *__return_storage_ptr__,
          FGeometryCollection *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  GenerateBounds((TBox<double> *)&local_48._s_0,param_1,param_2);
  dVar1 = __real_3fe0000000000000;
  dVar2 = (local_48._s_0.Z + local_20) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (local_48._s_0.X + local_30) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (local_48._s_0.Y + local_28) * dVar1;
  return __return_storage_ptr__;
}

// GenerateCentroids @ 14e810c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVoronoiPartitioner::GenerateCentroids(FVoronoiPartitioner *this,FGeometryCollection *param_1)

{
  <lambda_1> local_res8;
  FVoronoiPartitioner *local_38;
  FGeometryCollection *local_30;
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FVoronoiPartitioner **local_10;
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Centroids,(this->TransformIndices).ArrayNum,Default);
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FVoronoiPartitioner::GenerateCentroids'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = &local_38;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_38 = this;
  local_30 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->TransformIndices).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,local_res8,None,&local_28);
  return;
}

// GenerateConnectivity @ 14e810cc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVoronoiPartitioner::GenerateConnectivity(FVoronoiPartitioner *this,FGeometryCollection *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<int> *pTVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res18;
  FName local_res20;
  
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Connectivity,(this->TransformIndices).ArrayNum,Default);
  FVar4 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_res18,"Level");
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar4);
  FVar4 = FTransformCollection::TransformGroup;
  if (bVar5) {
    pFVar8 = ::FName::FName(&local_res20,"Level");
    pTVar9 = FManagedArrayCollection::GetAttribute<int>
                       ((FManagedArrayCollection *)param_1,*pFVar8,FVar4);
    uVar10 = 0;
    if (0 < (this->TransformIndices).ArrayNum) {
      lVar12 = 0;
      do {
        uVar11 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < (this->Connectivity).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Connectivity).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar10 < (this->TransformIndices).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = *(uint *)((this->TransformIndices).AllocatorInstance.Data + lVar12);
        uVar7 = 0;
        if ((int)uVar6 < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar6 * 4);
        uVar6 = 0;
        if ((int)uVar10 < (this->TransformIndices).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        CollectConnections(this,param_1,
                           *(int *)((this->TransformIndices).AllocatorInstance.Data + lVar12),iVar1,
                           (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           (pFVar2 + (longlong)(int)uVar10 * 0x50));
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 4;
      } while ((int)uVar10 < (this->TransformIndices).ArrayNum);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2180697871345516896>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                       ,0x160,
                       "GeometryCollection->HasAttribute(\"Level\", FGeometryCollection::TransformGroup)"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// GetNonEmptyPartitionCount @ 14e814070

int __thiscall FVoronoiPartitioner::GetNonEmptyPartitionCount(FVoronoiPartitioner *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->PartitionSize).AllocatorInstance.Data;
  iVar2 = (this->PartitionSize).ArrayNum;
  iVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->PartitionSize).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar3 = iVar5 + 1;
    if (*(int *)pFVar4 != 0) {
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    pFVar4 = pFVar4 + 4;
  }
  return (this->PartitionSize).ArrayNum - iVar5;
}

// GetPartition @ 14e8140e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FVoronoiPartitioner::GetPartition
          (FVoronoiPartitioner *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar5 = (this->TransformIndices).ArrayNum;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  uVar11 = uVar9;
  if (0 < (this->TransformIndices).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (this->Partitions).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      if (*(int *)((this->Partitions).AllocatorInstance.Data + uVar11) == param_1) {
        uVar5 = 0;
        if ((int)uVar8 < (this->TransformIndices).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar10 = (this->TransformIndices).AllocatorInstance.Data + uVar11;
        if (((pFVar2 <= pFVar10) && (pFVar10 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar10;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 4;
    } while ((int)(uVar8 + 1) < (this->TransformIndices).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitializePartitions @ 14e815960

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVoronoiPartitioner::InitializePartitions
          (FVoronoiPartitioner *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  int local_res8 [2];
  int local_res10 [2];
  
  if ((this->PartitionCount < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PartitionCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                         ,0x1c7,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar17 = param_1->ArrayNum;
  if (iVar17 < 1) {
    iVar17 = (this->TransformIndices).ArrayNum;
    if (this->PartitionCount < iVar17) {
      iVar17 = this->PartitionCount;
    }
    this->PartitionCount = iVar17;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->PartitionCenters,iVar17,Default);
    fVar18 = (float)(this->TransformIndices).ArrayNum;
    iVar17 = (int)ROUND((fVar18 + fVar18) / (float)this->PartitionCount - __real_3f000000) >> 1;
    if (iVar17 < 1) {
      iVar17 = 1;
    }
    uVar12 = 0;
    uVar13 = uVar12;
    uVar15 = uVar12;
    if (0 < this->PartitionCount) {
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 0;
        if ((int)uVar11 < (this->Centroids).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Centroids).AllocatorInstance.Data;
        pFVar2 = pFVar4 + (longlong)(int)uVar11 * 0x18;
        uVar6 = *(undefined8 *)pFVar2;
        uVar7 = *(undefined8 *)(pFVar2 + 8);
        uVar3 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
        uVar14 = (uint)uVar15;
        uVar10 = 0;
        if ((int)uVar14 < (this->PartitionCenters).ArrayNum) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->PartitionCenters).AllocatorInstance.Data;
        uVar12 = (ulonglong)(uVar11 + iVar17);
        pFVar2 = pFVar4 + uVar13;
        *(undefined8 *)pFVar2 = uVar6;
        *(undefined8 *)(pFVar2 + 8) = uVar7;
        *(undefined8 *)(pFVar4 + uVar13 + 0x10) = uVar3;
        uVar13 = uVar13 + 0x18;
        uVar15 = (ulonglong)(uVar14 + 1);
      } while ((int)(uVar14 + 1) < this->PartitionCount);
    }
  }
  else {
    piVar16 = &(this->PartitionCenters).ArrayMax;
    piVar1 = &(this->PartitionCenters).ArrayNum;
    *piVar1 = 0;
    if ((this->PartitionCenters).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PartitionCenters).AllocatorInstance,0,piVar16);
    }
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar17,&(this->PartitionCenters).AllocatorInstance,piVar1,piVar16);
    memcpy((this->PartitionCenters).AllocatorInstance.Data + (longlong)iVar9 * 0x18,param_1->DataPtr
           ,(longlong)iVar17 * 0x18);
  }
  piVar16 = &(this->TransformIndices).ArrayNum;
  local_res8[0] = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->Partitions,local_res8,*piVar16);
  local_res10[0] = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&this->PartitionSize,local_res10,this->PartitionCount);
  if (0 < this->PartitionCount) {
    iVar17 = *piVar16;
    if (((this->PartitionSize).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(this->PartitionSize).AllocatorInstance.Data = iVar17;
  }
  return;
}

// KMeansPartition @ 14e815d70

void __thiscall
FVoronoiPartitioner::KMeansPartition
          (FVoronoiPartitioner *this,int param_1,int param_2,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_3)

{
  bool bVar1;
  int iVar2;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  iVar2 = param_3->ArrayNum;
  this->PartitionCount = param_1;
  if (iVar2 != 0) {
    this->PartitionCount = iVar2;
  }
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  InitializePartitions(this,&local_18);
  iVar2 = 0;
  if (0 < param_2 + 1) {
    do {
      bVar1 = Refine(this);
      if (!bVar1) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2 + 1);
  }
  return;
}

// MarkVisited @ 14e815de0

void __thiscall FVoronoiPartitioner::MarkVisited(FVoronoiPartitioner *this,int param_1,int param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  uVar6 = 0;
  if (param_1 < (this->Visited).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->Visited).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  uVar6 = 0;
  if (param_1 < (this->Connectivity).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = 0;
  pFVar14 = (this->Connectivity).AllocatorInstance.Data + (longlong)param_1 * 0x50;
  iVar12 = 0;
  iVar3 = *(int *)(pFVar14 + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar14 + 0x10);
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e815f1d;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar12 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e815f1d:
  uVar9 = *(uint *)(pFVar14 + 0x28);
  uVar13 = uVar9 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar6,iVar10);
  TStack_88.CurrentBitIndex = iVar7;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar12;
  uStack_68 = CONCAT44(uStack_94,*(int *)(pFVar14 + 8) - *(int *)(pFVar14 + 0x34));
  TStack_88.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)(pFVar14 + 0x28);
  if (uVar9 != uVar6) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar14 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e816020;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14e816020:
  while( true ) {
    if (*(int *)(pFVar14 + 8) - *(int *)(pFVar14 + 0x34) != (int)uStack_68) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_88.CurrentBitIndex == uVar9) && (TStack_88.Array == pTVar1)) break;
    uVar6 = *(uint *)(*(longlong *)pFVar14 + (longlong)TStack_88.CurrentBitIndex * 0xc);
    uVar13 = 0;
    if ((int)uVar6 < (this->Visited).ArrayNum) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->Visited).AllocatorInstance.Data[(int)uVar6] == (FScriptContainerElement)0x0) {
      uVar13 = 0;
      if ((int)uVar6 < (this->Partitions).ArrayNum) {
        uVar13 = ~uVar6 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)((this->Partitions).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) == param_2)
      {
        MarkVisited(this,uVar6,param_2);
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// MergeSingleElementPartitions @ 14e8166e0

void __thiscall
FVoronoiPartitioner::MergeSingleElementPartitions
          (FVoronoiPartitioner *this,FGeometryCollection *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  uint local_res18;
  longlong local_e8;
  longlong local_e0;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  if ((this->Connectivity).ArrayNum == 0) {
    GenerateConnectivity(this,param_1);
  }
  local_res18 = 0;
  if (0 < (this->TransformIndices).ArrayNum) {
    local_e0 = 0;
    local_e8 = 0;
    do {
      uVar15 = ~local_res18 >> 0x1f;
      uVar6 = 0;
      if ((int)local_res18 < (this->Partitions).ArrayNum) {
        uVar6 = uVar15;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)((this->Partitions).AllocatorInstance.Data + local_e8 * 4);
      uVar7 = 0;
      if ((int)uVar6 < (this->PartitionSize).ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)((this->PartitionSize).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) == 1) {
        iVar14 = (this->TransformIndices).ArrayNum + 1;
        uVar18 = 0xffffffff;
        uVar7 = 0;
        if ((int)local_res18 < (this->Connectivity).ArrayNum) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = 0;
        pFVar17 = (this->Connectivity).AllocatorInstance.Data + local_e0;
        iVar3 = *(int *)(pFVar17 + 0x28);
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar17 + 0x10);
        iVar13 = 0;
        uVar7 = 1;
        iVar8 = 0;
        if (iVar3 != 0) {
          pTVar12 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar17 + 0x20) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar17 + 0x20);
          }
          uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
          while (uVar10 == 0) {
            lVar9 = (longlong)iVar11;
            iVar13 = iVar13 + 0x20;
            iVar11 = iVar11 + 1;
            iVar8 = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e816913;
            uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar7 = -uVar10 & uVar10;
          uVar2 = (ulonglong)uVar7 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar8 = (int)lVar9 + -1 + iVar13;
          if (iVar3 < iVar8) {
            iVar8 = iVar3;
          }
        }
LAB_14e816913:
        uVar10 = *(uint *)(pFVar17 + 0x28);
        uVar16 = uVar10 & 0xffffffe0;
        TStack_80._padding_ = CONCAT44(uVar7,iVar11);
        TStack_80.CurrentBitIndex = iVar8;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        iVar11 = (int)uVar10 >> 5;
        TStack_80._28_4_ = local_3c;
        TStack_80.BaseBitIndex = iVar13;
        uStack_60 = CONCAT44(uStack_8c,*(int *)(pFVar17 + 8) - *(int *)(pFVar17 + 0x34));
        TStack_80.Array = pTVar1;
        if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(uint *)(pFVar17 + 0x28);
        if (uVar10 != uVar7) {
          pTVar12 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar17 + 0x20) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar17 + 0x20);
          }
          uVar10 = -1 << ((byte)uVar10 & 0x1f) &
                   *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
          while (uVar10 == 0) {
            lVar9 = (longlong)iVar11;
            uVar16 = uVar16 + 0x20;
            iVar11 = iVar11 + 1;
            uVar10 = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_14e816a30;
            uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar10 = (int)lVar9 + -1 + uVar16;
          if ((int)uVar7 < (int)uVar10) {
            uVar10 = uVar7;
          }
        }
LAB_14e816a30:
        while( true ) {
          if (*(int *)(pFVar17 + 8) - *(int *)(pFVar17 + 0x34) != (int)uStack_60) {
            local_res8[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if ((TStack_80.CurrentBitIndex == uVar10) && (TStack_80.Array == pTVar1)) break;
          uVar7 = *(uint *)(*(longlong *)pFVar17 + (longlong)TStack_80.CurrentBitIndex * 0xc);
          uVar16 = 0;
          if ((int)uVar7 < (this->Partitions).ArrayNum) {
            uVar16 = ~uVar7 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar7 = *(uint *)((this->Partitions).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
          if (uVar7 != uVar6) {
            uVar16 = 0;
            if ((int)uVar7 < (this->PartitionSize).ArrayNum) {
              uVar16 = ~uVar7 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar3 = *(int *)((this->PartitionSize).AllocatorInstance.Data + (longlong)(int)uVar7 * 4
                            );
            if ((0 < iVar3) && ((uVar18 == 0xffffffff || (iVar3 < iVar14)))) {
              iVar14 = iVar3;
              uVar18 = uVar7;
            }
          }
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        }
        if (uVar18 != 0xffffffff) {
          uVar7 = 0;
          if ((int)local_res18 < (this->Partitions).ArrayNum) {
            uVar7 = uVar15;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(uint *)((this->Partitions).AllocatorInstance.Data + local_e8 * 4) = uVar18;
          uVar15 = 0;
          if ((int)uVar6 < (this->PartitionSize).ArrayNum) {
            uVar15 = ~uVar6 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (this->PartitionSize).AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
          *(int *)pFVar17 = *(int *)pFVar17 + -1;
          uVar6 = 0;
          if ((int)uVar18 < (this->PartitionSize).ArrayNum) {
            uVar6 = ~uVar18 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar17 = (this->PartitionSize).AllocatorInstance.Data + (longlong)(int)uVar18 * 4;
          *(int *)pFVar17 = *(int *)pFVar17 + 1;
        }
      }
      local_res18 = local_res18 + 1;
      local_e0 = local_e0 + 0x50;
      local_e8 = local_e8 + 1;
    } while ((int)local_res18 < (this->TransformIndices).ArrayNum);
  }
  return;
}

// MergeSmallPartitions @ 14e816cb0

void __thiscall
FVoronoiPartitioner::MergeSmallPartitions
          (FVoronoiPartitioner *this,FGeometryCollection *param_1,float param_2)

{
  code *pcVar1;
  int iVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  TManagedArray<float> *pTVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_148 [2];
  ForAnyElementType local_140;
  int local_138;
  int iStack_134;
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  undefined4 local_120;
  uint local_11c;
  uint local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  FScriptContainerElement *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName local_90 [4];
  undefined4 local_6c;
  
  if ((this->Connectivity).ArrayNum == 0) {
    GenerateConnectivity(this,param_1);
  }
  FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)param_1);
  FVar3 = FTransformCollection::TransformGroup;
  pFVar12 = ::FName::FName(local_90,"Volume");
  pTVar13 = FManagedArrayCollection::GetAttribute<float>
                      ((FManagedArrayCollection *)param_1,*pFVar12,FVar3);
  uVar22 = (this->PartitionSize).ArrayNum;
  uVar17 = (ulonglong)uVar22;
  uVar18 = 0;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_124 = 0;
  local_120 = 0;
  fVar27 = param_2 * param_2 * param_2;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar17);
  }
  local_128 = 0;
  if ((uVar22 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&local_130,0,&local_124), 0 < (int)uVar22)) {
    do {
      if ((local_130.Data <= (FScriptContainerElement *)&local_120) &&
         (((FScriptContainerElement *)&local_120 < local_130.Data + (longlong)local_124 * 4 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_128 == local_124) {
        local_128 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_130,&local_124);
      }
      iVar9 = local_128 + 1;
      *(undefined4 *)(local_130.Data + (longlong)local_128 * 4) = local_120;
      uVar17 = uVar17 - 1;
      local_128 = iVar9;
    } while (uVar17 != 0);
  }
  iVar9 = GetNonEmptyPartitionCount(this);
  uVar17 = uVar18;
  if (0 < (this->TransformIndices).ArrayNum) {
    do {
      uVar20 = (uint)uVar18;
      uVar22 = 0;
      if ((int)uVar20 < (this->Partitions).ArrayNum) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar22 = *(uint *)((this->Partitions).AllocatorInstance.Data + uVar17);
      uVar10 = 0;
      uVar15 = uVar10;
      if ((int)uVar20 < (this->TransformIndices).ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar15 = *(uint *)((this->TransformIndices).AllocatorInstance.Data + uVar17);
      uVar11 = uVar10;
      if ((int)uVar15 < *(int *)&pTVar13->field_0x18) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar26 = *(float *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar15 * 4);
      if ((int)uVar22 < local_128) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar18 = (ulonglong)(uVar20 + 1);
      *(float *)(local_130.Data + (longlong)(int)uVar22 * 4) =
           fVar26 + *(float *)(local_130.Data + (longlong)(int)uVar22 * 4);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar20 + 1) < (this->TransformIndices).ArrayNum);
  }
  uVar22 = (this->Partitions).ArrayNum;
  uVar17 = 0;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  iStack_134 = 0;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (0 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&local_140,0,&iStack_134);
  }
  uVar18 = uVar17;
  iVar2 = iVar9;
  fVar26 = __real_7f7fffff;
  fVar7 = __real_7f7fffff;
  if (0 < local_128) {
    do {
      uVar20 = (uint)uVar17;
      uVar22 = 0;
      if ((int)uVar20 < local_128) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(float *)(local_130.Data + uVar18) <= fVar27 &&
          fVar27 != *(float *)(local_130.Data + uVar18)) {
        if (local_138 == iStack_134) {
          local_138 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_140,&iStack_134);
        }
        lVar14 = (longlong)local_138;
        local_138 = local_138 + 1;
        *(uint *)(local_140.Data + lVar14 * 4) = uVar20;
      }
      uVar17 = (ulonglong)(uVar20 + 1);
      uVar18 = uVar18 + 4;
      fVar26 = __real_7f7fffff;
      fVar7 = __real_7f7fffff;
    } while ((int)(uVar20 + 1) < local_128);
  }
joined_r0x00014e8170c1:
  while (__real_7f7fffff = fVar7, fVar7 = __real_7f7fffff, __real_7f7fffff = fVar26, local_138 != 0)
  {
    if ((local_138 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar16 = local_138 + -1;
    uVar22 = *(uint *)(local_140.Data + (longlong)iVar16 * 4);
    uVar17 = (ulonglong)(int)uVar22;
    iVar23 = (local_138 - iVar16) + -1;
    local_res20 = uVar22;
    if (iVar23 != 0) {
      memmove(local_140.Data + (longlong)iVar16 * 4,local_140.Data + (longlong)iVar16 * 4 + 4,
              (longlong)iVar23 << 2);
    }
    local_138 = local_138 + -1;
    if (iVar9 < 3) break;
    local_118 = ~uVar22 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar22 < local_128) {
      uVar20 = local_118;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar26 = __real_7f7fffff;
    if (*(float *)(local_130.Data + uVar17 * 4) <= fVar27 &&
        fVar27 != *(float *)(local_130.Data + uVar17 * 4)) {
      local_148[0] = 0xffffffff;
      local_11c = 0;
      if (0 < (this->TransformIndices).ArrayNum) {
        local_108 = 0;
        local_110 = 0;
        fVar26 = fVar7;
LAB_14e8171f0:
        lVar19 = local_108;
        lVar14 = local_110;
        uVar22 = local_11c;
        uVar15 = ~local_11c;
        uVar20 = 0;
        if ((int)local_11c < (this->Partitions).ArrayNum) {
          uVar20 = uVar15 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((this->Partitions).AllocatorInstance.Data + lVar14) == (int)uVar17) {
          uVar20 = 0;
          if ((int)uVar22 < (this->Connectivity).ArrayNum) {
            uVar20 = uVar15 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iStack_e8 = 0;
          pFVar25 = (this->Connectivity).AllocatorInstance.Data + lVar19;
          iVar9 = *(int *)(pFVar25 + 0x28);
          local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 0x10);
          local_d0 = 0;
          uStack_e4 = 1;
          iStack_d4 = 0;
          if (iVar9 != 0) {
            pTVar24 = local_e0;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20);
            }
            uVar22 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
            while (uVar22 == 0) {
              lVar14 = (longlong)iStack_e8;
              local_d0 = local_d0 + 0x20;
              iStack_e8 = iStack_e8 + 1;
              iStack_d4 = iVar9;
              if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
              goto LAB_14e81732e;
              uVar22 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar14 * 4 + 4);
            }
            uStack_e4 = -uVar22 & uVar22;
            uVar17 = (ulonglong)uStack_e4 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_100 = (int)lVar14;
            iStack_d4 = local_d0 + -1 + local_100;
            if (iVar9 < iStack_d4) {
              iStack_d4 = iVar9;
            }
          }
LAB_14e81732e:
          uVar22 = *(uint *)(pFVar25 + 0x28);
          uStack_cc = local_6c;
          iStack_c8 = *(int *)(pFVar25 + 8) - *(int *)(pFVar25 + 0x34);
          uVar20 = uVar22 & 0xffffffe0;
          TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
          uStack_d8 = 0xffffffff;
          TStack_b8.CurrentBitIndex = iStack_d4;
          TStack_b8.UnvisitedBitMask = 0xffffffff;
          iVar16 = (int)uVar22 >> 5;
          TStack_b8._28_4_ = local_6c;
          TStack_b8.BaseBitIndex = local_d0;
          uStack_98 = CONCAT44(uStack_c4,iStack_c8);
          local_f8 = pFVar25;
          local_f0 = pFVar25;
          local_c0 = pFVar25;
          TStack_b8.Array = local_e0;
          if ((((int)uVar22 < 0) || (iVar9 < (int)uVar22)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar5 = local_f8;
          uVar10 = local_res20;
          uVar15 = *(uint *)(pFVar25 + 0x28);
          if (uVar22 != uVar15) {
            pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 0x10);
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar25 + 0x20);
            }
            uVar22 = -1 << ((byte)uVar22 & 0x1f) &
                     *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
            while (uVar22 == 0) {
              lVar14 = (longlong)iVar16;
              uVar20 = uVar20 + 0x20;
              iVar16 = iVar16 + 1;
              uVar22 = uVar15;
              if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_14e817440;
              uVar22 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar14 * 4 + 4);
            }
            uVar17 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
            lVar14 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_fc = (int)lVar14;
            uVar22 = local_fc + -1 + uVar20;
            if ((int)uVar15 < (int)uVar22) {
              uVar22 = uVar15;
            }
          }
LAB_14e817440:
          do {
            pFVar6 = local_c0;
            if (*(int *)(local_c0 + 8) - *(int *)(local_c0 + 0x34) != (int)uStack_98) {
              local_res18[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (((TStack_b8.CurrentBitIndex == uVar22) &&
                (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar25 + 0x10))) &&
               (pFVar6 == pFVar5)) goto LAB_14e81759f;
            uVar20 = *(uint *)(*(longlong *)pFVar6 + (longlong)TStack_b8.CurrentBitIndex * 0xc);
            uVar15 = 0;
            if ((int)uVar20 < (this->Partitions).ArrayNum) {
              uVar15 = ~uVar20 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar20 = *(uint *)((this->Partitions).AllocatorInstance.Data + (longlong)(int)uVar20 * 4
                              );
            if (uVar20 != uVar10) {
              if (local_148[0] != 0xffffffff) {
                uVar15 = 0;
                if ((int)uVar20 < local_128) {
                  uVar15 = ~uVar20 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                if (fVar26 < *(float *)(local_130.Data + (longlong)(int)uVar20 * 4) ||
                    fVar26 == *(float *)(local_130.Data + (longlong)(int)uVar20 * 4))
                goto LAB_14e817589;
              }
              uVar15 = 0;
              if ((int)uVar20 < local_128) {
                uVar15 = ~uVar20 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              fVar26 = *(float *)(local_130.Data + (longlong)(int)uVar20 * 4);
              local_148[0] = uVar20;
            }
LAB_14e817589:
            TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
          } while( true );
        }
        goto LAB_14e8175b2;
      }
    }
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  return;
LAB_14e81759f:
  uVar17 = (ulonglong)uVar10;
  lVar19 = local_108;
  lVar14 = local_110;
  uVar22 = local_11c;
LAB_14e8175b2:
  uVar20 = local_118;
  lVar21 = 0;
  local_11c = uVar22 + 1;
  local_110 = lVar14 + 4;
  local_108 = lVar19 + 0x50;
  if ((this->TransformIndices).ArrayNum <= (int)local_11c) goto code_r0x00014e8175d5;
  goto LAB_14e8171f0;
code_r0x00014e8175d5:
  iVar9 = iVar2;
  fVar26 = __real_7f7fffff;
  if (local_148[0] != 0xffffffff) {
    iVar16 = (int)uVar17;
    uVar22 = 0;
    if (iVar16 < local_128) {
      uVar22 = local_118;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar14 = (longlong)(int)local_148[0];
    fVar26 = *(float *)(local_130.Data + (longlong)iVar16 * 4);
    uVar22 = 0;
    if ((int)local_148[0] < local_128) {
      uVar22 = ~local_148[0] >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(float *)(local_130.Data + lVar14 * 4) = fVar26 + *(float *)(local_130.Data + lVar14 * 4);
    uVar22 = 0;
    if (iVar16 < local_128) {
      uVar22 = uVar20;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(local_130.Data + (longlong)iVar16 * 4) = 0;
    lVar14 = (longlong)(int)local_148[0];
    uVar22 = 0;
    if ((int)local_148[0] < (this->PartitionSize).ArrayNum) {
      uVar22 = ~local_148[0] >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar25 = (this->PartitionSize).AllocatorInstance.Data;
    uVar22 = 0;
    if (iVar16 < (this->PartitionSize).ArrayNum) {
      uVar22 = uVar20;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar19 = (longlong)(int)local_148[0];
    fVar26 = (float)(*(int *)((this->PartitionSize).AllocatorInstance.Data + (longlong)iVar16 * 4) +
                    *(int *)(pFVar25 + lVar14 * 4));
    uVar22 = 0;
    if ((int)local_148[0] < (this->PartitionSize).ArrayNum) {
      uVar22 = ~local_148[0] >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)((this->PartitionSize).AllocatorInstance.Data + lVar19 * 4) = (int)fVar26;
    if (fVar26 < fVar27) {
      if (((local_140.Data <= (FScriptContainerElement *)local_148) &&
          ((FScriptContainerElement *)local_148 < local_140.Data + (longlong)iStack_134 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_138 == iStack_134) {
        local_138 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_140,&iStack_134);
      }
      iVar9 = local_138 + 1;
      *(uint *)(local_140.Data + (longlong)local_138 * 4) = local_148[0];
      local_138 = iVar9;
      if ((iVar9 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar4.Data = local_140.Data;
      uVar22 = 0;
      if ((int)(local_138 - 1U) < local_138) {
        uVar22 = ~(local_138 - 1U) >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar22 = *(uint *)(local_140.Data + (longlong)local_138 * 4 + -4);
      *(uint *)(local_140.Data + (longlong)local_138 * 4 + -4) = *(uint *)FVar4.Data;
      *(uint *)FVar4.Data = uVar22;
    }
    uVar22 = 0;
    if (iVar16 < (this->PartitionSize).ArrayNum) {
      uVar22 = uVar20;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar22 = 0;
    iVar9 = iVar2 + -1;
    *(undefined4 *)((this->PartitionSize).AllocatorInstance.Data + (longlong)iVar16 * 4) = 0;
    iVar2 = iVar9;
    fVar26 = __real_7f7fffff;
    if (0 < (this->TransformIndices).ArrayNum) {
      do {
        uVar20 = 0;
        if ((int)uVar22 < (this->Partitions).ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar20 = local_148[0];
        if (*(int *)((this->Partitions).AllocatorInstance.Data + lVar21) == (int)uVar17) {
          uVar15 = 0;
          if ((int)uVar22 < (this->Partitions).ArrayNum) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(uint *)((this->Partitions).AllocatorInstance.Data + lVar21) = uVar20;
          uVar17 = (ulonglong)local_res20;
        }
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 4;
        fVar26 = __real_7f7fffff;
      } while ((int)uVar22 < (this->TransformIndices).ArrayNum);
    }
  }
  goto joined_r0x00014e8170c1;
}

// Refine @ 14e8192c0

bool __thiscall FVoronoiPartitioner::Refine(FVoronoiPartitioner *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  longlong local_res20;
  
  fVar9 = __real_7f7fffff;
  uVar25 = 0;
  bVar12 = true;
  if (0 < (this->Centroids).ArrayNum) {
    local_res20 = 0;
    uVar23 = uVar25;
    do {
      uVar17 = 0;
      uVar18 = (uint)uVar25;
      uVar24 = ~uVar18 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar18 < (this->Centroids).ArrayNum) {
        uVar13 = uVar24;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      uVar19 = 0xffffffff;
      uVar13 = 0xffffffff;
      pFVar2 = (this->Centroids).AllocatorInstance.Data;
      uVar25 = 0xffffffffffffffff;
      uVar22 = uVar17;
      fVar7 = fVar9;
      if (this->PartitionCount < 1) {
LAB_14e81946c:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClosestPartition > INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                            ,0x222,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
      }
      else {
        do {
          uVar20 = (uint)uVar17;
          uVar13 = 0;
          if ((int)uVar20 < (this->PartitionCenters).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          pFVar3 = (this->PartitionCenters).AllocatorInstance.Data;
          fVar26 = (float)((*(double *)(pFVar3 + uVar22 * 0x18 + 8) -
                           *(double *)(pFVar2 + local_res20 + 8)) *
                           (*(double *)(pFVar3 + uVar22 * 0x18 + 8) -
                           *(double *)(pFVar2 + local_res20 + 8)) +
                           (*(double *)(pFVar3 + uVar22 * 0x18) - *(double *)(pFVar2 + local_res20))
                           * (*(double *)(pFVar3 + uVar22 * 0x18) -
                             *(double *)(pFVar2 + local_res20)) +
                          (*(double *)(pFVar3 + uVar22 * 0x18 + 0x10) -
                          *(double *)(pFVar2 + local_res20 + 0x10)) *
                          (*(double *)(pFVar3 + uVar22 * 0x18 + 0x10) -
                          *(double *)(pFVar2 + local_res20 + 0x10)));
          uVar16 = uVar17;
          uVar17 = uVar22;
          if (fVar7 <= fVar26) {
            uVar16 = uVar19;
            uVar17 = uVar25;
            fVar26 = fVar7;
          }
          uVar25 = uVar17;
          uVar17 = (ulonglong)(uVar20 + 1);
          uVar13 = (uint)uVar16;
          uVar19 = uVar16;
          uVar22 = uVar22 + 1;
          fVar7 = fVar26;
        } while ((int)(uVar20 + 1) < this->PartitionCount);
        if (0x7fffffff < uVar13) goto LAB_14e81946c;
      }
      uVar17 = 0;
      uVar20 = 0;
      if ((int)uVar18 < (this->Partitions).ArrayNum) {
        uVar20 = uVar24;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      uVar20 = 0;
      if (uVar13 != *(uint *)((this->Partitions).AllocatorInstance.Data + uVar23 * 4)) {
        bVar12 = false;
        uVar14 = uVar20;
        if ((int)uVar18 < (this->Partitions).ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        uVar14 = *(uint *)((this->Partitions).AllocatorInstance.Data + uVar23 * 4);
        uVar15 = uVar20;
        if ((int)uVar14 < (this->PartitionSize).ArrayNum) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar2 = (this->PartitionSize).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
        *(int *)pFVar2 = *(int *)pFVar2 + -1;
        uVar14 = uVar20;
        if ((int)uVar13 < (this->PartitionSize).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar2 = (this->PartitionSize).AllocatorInstance.Data + uVar25 * 4;
        *(int *)pFVar2 = *(int *)pFVar2 + 1;
        uVar14 = uVar20;
        if ((int)uVar18 < (this->Partitions).ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        *(uint *)((this->Partitions).AllocatorInstance.Data + uVar23 * 4) = uVar13;
      }
      uVar25 = (ulonglong)(uVar18 + 1);
      local_res20 = local_res20 + 0x18;
      uVar23 = uVar23 + 1;
    } while ((int)(uVar18 + 1) < (this->Centroids).ArrayNum);
    if (!bVar12) {
      uVar25 = uVar17;
      uVar23 = uVar17;
      uVar19 = uVar17;
      if (0 < this->PartitionCount) {
        do {
          uVar18 = (uint)uVar23;
          uVar13 = uVar20;
          if ((int)uVar18 < (this->PartitionSize).ArrayNum) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          if (0 < *(int *)((this->PartitionSize).AllocatorInstance.Data + uVar19)) {
            uVar13 = uVar20;
            if ((int)uVar18 < (this->PartitionCenters).ArrayNum) {
              uVar13 = ~uVar18 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            pFVar2 = (this->PartitionCenters).AllocatorInstance.Data;
            *(undefined8 *)(pFVar2 + uVar25) = 0;
            *(undefined8 *)(pFVar2 + uVar25 + 8) = 0;
            *(undefined8 *)(pFVar2 + uVar25 + 0x10) = 0;
          }
          uVar25 = uVar25 + 0x18;
          uVar23 = (ulonglong)(uVar18 + 1);
          uVar19 = uVar19 + 4;
        } while ((int)(uVar18 + 1) < this->PartitionCount);
      }
      uVar25 = uVar17;
      uVar23 = uVar17;
      uVar19 = uVar17;
      if (0 < (this->Partitions).ArrayNum) {
        do {
          uVar18 = (uint)uVar23;
          uVar13 = uVar20;
          if ((int)uVar18 < (this->Centroids).ArrayNum) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          pFVar2 = (this->Centroids).AllocatorInstance.Data;
          uVar13 = uVar20;
          if ((int)uVar18 < (this->Partitions).ArrayNum) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          uVar13 = *(uint *)((this->Partitions).AllocatorInstance.Data + uVar19 * 4);
          lVar21 = (longlong)(int)uVar13;
          uVar24 = uVar20;
          if ((int)uVar13 < (this->PartitionCenters).ArrayNum) {
            uVar24 = ~uVar13 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          pFVar3 = (this->PartitionCenters).AllocatorInstance.Data;
          *(double *)(pFVar3 + lVar21 * 0x18) =
               *(double *)(pFVar3 + lVar21 * 0x18) + *(double *)(pFVar2 + uVar25);
          *(double *)(pFVar3 + lVar21 * 0x18 + 8) =
               *(double *)(pFVar2 + uVar25 + 8) + *(double *)(pFVar3 + lVar21 * 0x18 + 8);
          *(double *)(pFVar3 + lVar21 * 0x18 + 0x10) =
               *(double *)(pFVar2 + uVar25 + 0x10) + *(double *)(pFVar3 + lVar21 * 0x18 + 0x10);
          uVar25 = uVar25 + 0x18;
          uVar23 = (ulonglong)(uVar18 + 1);
          uVar19 = uVar19 + 1;
        } while ((int)(uVar18 + 1) < (this->Partitions).ArrayNum);
      }
      dVar8 = __real_3ff0000000000000;
      uVar25 = uVar17;
      uVar23 = uVar17;
      if (0 < this->PartitionCount) {
        do {
          uVar24 = (uint)uVar25;
          uVar18 = ~uVar24 >> 0x1f;
          uVar13 = uVar20;
          if ((int)uVar24 < (this->PartitionSize).ArrayNum) {
            uVar13 = uVar18;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          if (0 < *(int *)((this->PartitionSize).AllocatorInstance.Data + uVar23)) {
            uVar13 = uVar20;
            if ((int)uVar24 < (this->PartitionSize).ArrayNum) {
              uVar13 = uVar18;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            iVar1 = *(int *)((this->PartitionSize).AllocatorInstance.Data + uVar23);
            uVar13 = uVar20;
            if ((int)uVar24 < (this->PartitionCenters).ArrayNum) {
              uVar13 = uVar18;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            pFVar2 = (this->PartitionCenters).AllocatorInstance.Data;
            dVar27 = dVar8 / (double)iVar1;
            dVar6 = *(double *)(pFVar2 + uVar17 + 8) * dVar27;
            auVar5._8_4_ = SUB84(dVar6,0);
            auVar5._0_8_ = *(double *)(pFVar2 + uVar17) * dVar27;
            auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            *(undefined1 (*) [16])(pFVar2 + uVar17) = auVar5;
            *(double *)(pFVar2 + uVar17 + 0x10) = dVar27 * *(double *)(pFVar2 + uVar17 + 0x10);
          }
          uVar17 = uVar17 + 0x18;
          uVar25 = (ulonglong)(uVar24 + 1);
          uVar23 = uVar23 + 4;
        } while ((int)(uVar24 + 1) < this->PartitionCount);
      }
      return true;
    }
  }
  return false;
}

// SplitDisconnectedPartitions @ 14e822630

void __thiscall
FVoronoiPartitioner::SplitDisconnectedPartitions
          (FVoronoiPartitioner *this,FGeometryCollection *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool local_res8 [8];
  longlong local_res18;
  undefined4 local_48 [4];
  
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->Visited,local_res8,(this->TransformIndices).ArrayNum);
  if ((this->Connectivity).ArrayNum == 0) {
    GenerateConnectivity(this,param_1);
  }
  uVar12 = 0;
  if (0 < this->PartitionCount) {
    local_res18 = 0;
    do {
      pFVar3 = (this->Partitions).AllocatorInstance.Data;
      for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)(this->Partitions).ArrayNum * 4;
          pFVar9 = pFVar9 + 4) {
        if (*(uint *)pFVar9 == uVar12) {
          iVar8 = (int)((longlong)pFVar9 - (longlong)pFVar3 >> 2);
          if (-1 < iVar8) {
            MarkVisited(this,iVar8,uVar12);
            bVar5 = false;
            uVar11 = 0;
            lVar13 = 0;
            if (0 < (this->TransformIndices).ArrayNum) {
              do {
                uVar10 = ~uVar11 >> 0x1f;
                uVar7 = 0;
                if ((int)uVar11 < (this->Partitions).ArrayNum) {
                  uVar7 = uVar10;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (*(uint *)((this->Partitions).AllocatorInstance.Data + lVar13 * 4) == uVar12) {
                  uVar7 = 0;
                  if ((int)uVar11 < (this->Visited).ArrayNum) {
                    uVar7 = uVar10;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if ((this->Visited).AllocatorInstance.Data[lVar13] == (FScriptContainerElement)0x0
                     ) {
                    pTVar1 = &this->PartitionSize;
                    if (!bVar5) {
                      this->PartitionCount = this->PartitionCount + 1;
                      pFVar3 = (pTVar1->AllocatorInstance).Data;
                      bVar5 = true;
                      local_48[0] = 0;
                      if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
                          ((FScriptContainerElement *)local_48 <
                           pFVar3 + (longlong)(this->PartitionSize).ArrayMax * 4)) &&
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
                      iVar8 = (this->PartitionSize).ArrayNum;
                      piVar2 = &(this->PartitionSize).ArrayMax;
                      if (iVar8 == *piVar2) {
                        iVar8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&pTVar1->AllocatorInstance,piVar2);
                      }
                      (this->PartitionSize).ArrayNum = iVar8 + 1;
                      *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) =
                           local_48[0];
                    }
                    iVar8 = this->PartitionCount;
                    uVar7 = 0;
                    if ((int)uVar11 < (this->Partitions).ArrayNum) {
                      uVar7 = uVar10;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    *(int *)((this->Partitions).AllocatorInstance.Data + lVar13 * 4) = iVar8 + -1;
                    uVar10 = this->PartitionCount - 1;
                    uVar7 = 0;
                    if ((int)uVar10 < (this->PartitionSize).ArrayNum) {
                      uVar7 = ~uVar10 >> 0x1f;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 4;
                    *(int *)pFVar3 = *(int *)pFVar3 + 1;
                    uVar7 = 0;
                    if ((int)uVar12 < (this->PartitionSize).ArrayNum) {
                      uVar7 = ~uVar12 >> 0x1f;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar3 = (pTVar1->AllocatorInstance).Data + local_res18;
                    *(int *)pFVar3 = *(int *)pFVar3 + -1;
                  }
                }
                uVar11 = uVar11 + 1;
                lVar13 = lVar13 + 1;
              } while ((int)uVar11 < (this->TransformIndices).ArrayNum);
            }
          }
          break;
        }
      }
      local_res18 = local_res18 + 4;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < this->PartitionCount);
  }
  return;
}

