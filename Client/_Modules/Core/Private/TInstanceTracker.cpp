// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// CheckCurrentlyInstantiated @ 141d772b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest>
::CheckCurrentlyInstantiated
          (initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>
           *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *pTVar20;
  undefined1 auStack_248 [32];
  FIdentityFunctor local_228;
  FIdentityFunctor local_227 [7];
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  int local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined4 local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  undefined4 local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  FIdentityFunctor *local_1a8;
  FIdentityFunctor *local_1a0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_104;
  undefined4 local_e4;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.AllocationFlags.NumBits = 0;
  local_d8.AllocationFlags.MaxBits = 0x80;
  local_d8.FirstFreeIndex = -1;
  local_d8.NumFreeIndices = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
  ::operator=(&local_d8,
              &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
               Constructed);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*,0>,FDefaultSetAllocator>
  ::operator=(&local_88,
              &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringDest>::
               Destructed);
  uVar7 = 1;
  pTVar1 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)param_1->_Last;
  FVar11.Data = local_98.Data;
  for (pTVar20 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)param_1->_First;
      pTVar20 != pTVar1; pTVar20 = pTVar20 + 1) {
    TVar2 = *pTVar20;
    uVar9 = ((uint)((ulonglong)TVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)TVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    if (local_d8.Data.ArrayNum == local_d8.NumFreeIndices) goto LAB_141d7746d;
    pFVar18 = local_a0;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      pFVar18 = FVar11.Data;
    }
    iVar13 = *(int *)(pFVar18 + (ulonglong)(local_90 - 1 & uVar9) * 4);
    while( true ) {
      if (iVar13 == -1) goto LAB_141d7746d;
      if (((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
          ((longlong)local_d8.Data.AllocatorInstance.Data + (longlong)iVar13 * 0x10))->_s_1 == TVar2
         ) break;
      iVar13 = *(int *)((longlong)local_d8.Data.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8
                       );
    }
    pFVar18 = local_a0;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      pFVar18 = FVar11.Data;
    }
    uVar9 = *(uint *)(pFVar18 + (longlong)(int)(local_90 - 1 & uVar9) * 4);
    if (uVar9 != 0xffffffff) {
LAB_141d77540:
      lVar14 = (longlong)(int)uVar9 * 0x10;
      if (((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
          ((longlong)local_d8.Data.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10))->_s_1 !=
          TVar2) goto code_r0x000141d77551;
      if (((int)uVar9 < 0) || (local_d8.AllocationFlags.NumBits <= (int)uVar9)) {
LAB_141d7759b:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        FVar11.Data = local_98.Data;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else {
        FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
        if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        uVar6 = uVar9;
        if ((int)uVar9 < 0) {
          uVar6 = uVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar9 & 0x1f) & 1) ==
            0) goto LAB_141d7759b;
      }
      FVar15.Data = local_d8.Data.AllocatorInstance.Data;
      pFVar18 = local_a0;
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        pFVar18 = FVar11.Data;
      }
      pFVar18 = pFVar18 + (longlong)*(int *)(local_d8.Data.AllocatorInstance.Data + lVar14 + 0xc) *
                          4;
      while( true ) {
        uVar6 = *(uint *)pFVar18;
        if ((uVar6 == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (uVar6 == uVar9) break;
        pFVar18 = local_d8.Data.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10 + 8;
      }
      *(uint *)pFVar18 = *(uint *)(FVar15.Data + lVar14 + 8);
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(&local_d8,uVar9,1);
      FVar11.Data = local_98.Data;
    }
LAB_141d77646:
  }
  local_1a8 = &local_228;
  if (0 < local_d8.Data.ArrayNum - local_d8.NumFreeIndices) {
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(&local_d8);
    FVar11.Data = local_d8.Data.AllocatorInstance.Data;
    iVar13 = local_d8.Data.ArrayNum - local_d8.NumFreeIndices;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)FVar11.Data,iVar13,
               local_228,
               (FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>)_::_2_::<lambda_1>_>
                *)&local_1a8);
    FVar11.Data = local_98.Data;
  }
  uVar9 = local_90;
  uVar17 = (ulonglong)local_90;
  FVar15.Data = (FScriptContainerElement *)0x0;
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
    FVar15.Data = local_98.Data;
  }
  if (uVar9 != 0) {
    uVar6 = uVar9;
    if (uVar9 < 2) {
      FVar11.Data = (FScriptContainerElement *)0x0;
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        uVar6 = 0;
        goto LAB_141d77701;
      }
    }
    else {
LAB_141d77701:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar6,4);
      FVar11.Data = local_98.Data;
    }
    if (0 < (int)uVar9) {
      uVar12 = 0;
      do {
        pFVar18 = local_a0;
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          pFVar18 = FVar11.Data;
        }
        uVar8 = (longlong)(int)uVar9 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(pFVar18 + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
        FVar11.Data = local_98.Data;
      } while (uVar17 != 0);
    }
  }
  if (local_90 != 0) {
    uStack_1ec = 1;
    local_1f0 = 0;
    iStack_1dc = 0;
    iStack_1d8 = 0;
    pTStack_1e8 = &local_d8.AllocationFlags;
    if (local_d8.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
      if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      iStack_1d8 = 0;
      local_1f0 = 0;
      while (uVar9 == 0) {
        iStack_1d8 = iStack_1d8 + 0x20;
        lVar14 = (longlong)local_1f0;
        local_1f0 = local_1f0 + 1;
        if ((int)(local_d8.AllocationFlags.NumBits + -1 +
                 (local_d8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1f0)
        goto LAB_141d77822;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uStack_1ec = -uVar9 & uVar9;
      uVar17 = (ulonglong)uStack_1ec * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1b0 = (int)lVar14;
      iStack_1dc = iStack_1d8 + -1 + local_1b0;
      if (local_d8.AllocationFlags.NumBits < iStack_1dc) {
LAB_141d77822:
        iStack_1dc = local_d8.AllocationFlags.NumBits;
      }
    }
    local_1e0 = 0xffffffff;
    local_198 = &local_d8;
    local_190._padding_ = CONCAT44(uStack_1ec,local_1f0);
    local_190.CurrentBitIndex = iStack_1dc;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_1d4;
    local_190.BaseBitIndex = iStack_1d8;
    iVar13 = iStack_1dc;
    local_190.Array = pTStack_1e8;
    if (iStack_1dc < local_d8.AllocationFlags.NumBits) {
      do {
        pFVar18 = (local_198->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        uVar9 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar18 >> 4)
                ) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_90 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar9;
        FVar11.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_98.Data;
        }
        uVar17 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar11.Data + uVar17 * 4);
        *(int *)(FVar11.Data + uVar17 * 4) = iVar13;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        iVar13 = local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
    }
  }
  local_1a0 = local_227;
  if (0 < local_88.Data.ArrayNum - local_88.NumFreeIndices) {
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(&local_88);
    FVar11.Data = local_88.Data.AllocatorInstance.Data;
    iVar13 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)FVar11.Data,iVar13,
               local_227[0],
               (FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringDest_const_*>)_::_2_::<lambda_2>_>
                *)&local_1a0);
  }
  uVar9 = local_40;
  uVar17 = (ulonglong)local_40;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar9 == 0) goto LAB_141d77a12;
  uVar6 = uVar9;
  if (uVar9 < 2) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar6 = 0;
      goto LAB_141d779b7;
    }
  }
  else {
LAB_141d779b7:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar6,4);
  }
  if (0 < (int)uVar9) {
    uVar12 = 0;
    do {
      FVar11.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_48.Data;
      }
      uVar8 = uVar12 & (longlong)(int)uVar9 - 1U;
      uVar12 = uVar12 + 1;
      *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_141d77a12:
  if (local_40 != 0) {
    TStack_218.Array = &local_88.AllocationFlags;
    uStack_1cc = 1;
    local_1d0 = 0;
    iStack_1bc = 0;
    iStack_1b8 = 0;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      iStack_1b8 = 0;
      local_1d0 = 0;
      while (uVar9 == 0) {
        iStack_1b8 = iStack_1b8 + 0x20;
        lVar14 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        if ((int)(local_88.AllocationFlags.NumBits + -1 +
                 (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1d0)
        goto LAB_141d77acc;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uStack_1cc = -uVar9 & uVar9;
      uVar17 = (ulonglong)uStack_1cc * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStack_1bc = iStack_1b8 + -1 + (int)lVar14;
      if (local_88.AllocationFlags.NumBits < iStack_1bc) {
LAB_141d77acc:
        iStack_1bc = local_88.AllocationFlags.NumBits;
      }
    }
    local_1c0 = 0xffffffff;
    local_220 = &local_88;
    TStack_218._padding_ = CONCAT44(uStack_1cc,local_1d0);
    TStack_218.CurrentBitIndex = iStack_1bc;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    TStack_218._28_4_ = uStack_1b4;
    TStack_218.BaseBitIndex = iStack_1b8;
    iVar13 = iStack_1bc;
    pTStack_1c8 = TStack_218.Array;
    if (iStack_1bc < local_88.AllocationFlags.NumBits) {
      do {
        pFVar18 = (local_220->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        uVar9 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar18 >> 4)
                ) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_40 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar9;
        FVar11.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_48.Data;
        }
        uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar11.Data + uVar17 * 4);
        *(int *)(FVar11.Data + uVar17 * 4) = iVar13;
        TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
        iVar13 = TStack_218.CurrentBitIndex;
      } while (TStack_218.CurrentBitIndex < (TStack_218.Array)->NumBits);
    }
  }
  if (local_d8.Data.ArrayNum - local_d8.NumFreeIndices ==
      local_88.Data.ArrayNum - local_88.NumFreeIndices) {
    iVar13 = 0;
    TStack_168.BaseBitIndex = 0;
    uVar9 = 1;
    iVar16 = 0;
    if (local_d8.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
      if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      while (uVar9 == 0) {
        lVar14 = (longlong)iVar13;
        TStack_168.BaseBitIndex = TStack_168.BaseBitIndex + 0x20;
        iVar13 = iVar13 + 1;
        uVar9 = 1;
        iVar16 = local_d8.AllocationFlags.NumBits;
        if ((int)(local_d8.AllocationFlags.NumBits + -1 +
                 (local_d8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_141d77c3e;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uVar9 = -uVar9 & uVar9;
      uVar17 = (ulonglong)uVar9 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar16 = TStack_168.BaseBitIndex + -1 + (int)lVar14;
      if (local_d8.AllocationFlags.NumBits < iVar16) {
        iVar16 = local_d8.AllocationFlags.NumBits;
      }
    }
LAB_141d77c3e:
    local_170 = &local_d8;
    iVar19 = 0;
    TStack_168.Array = &local_d8.AllocationFlags;
    TStack_218.BaseBitIndex = 0;
    TStack_218._padding_ = CONCAT44(uVar9,iVar13);
    TStack_168._padding_ = TStack_218._padding_;
    TStack_168._28_4_ = local_104;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    TStack_168.CurrentBitIndex = iVar16;
    TStack_218.CurrentBitIndex = 0;
    if (local_d8.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
      if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      while (uVar9 == 0) {
        lVar14 = (longlong)iVar19;
        TStack_218.BaseBitIndex = TStack_218.BaseBitIndex + 0x20;
        iVar19 = iVar19 + 1;
        TStack_218.CurrentBitIndex = local_d8.AllocationFlags.NumBits;
        if ((int)(local_d8.AllocationFlags.NumBits + -1 +
                 (local_d8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_141d77d0c;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uVar7 = -uVar9 & uVar9;
      uVar17 = (ulonglong)uVar7 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      TStack_218.CurrentBitIndex = (int)lVar14 + -1 + TStack_218.BaseBitIndex;
      if (local_d8.AllocationFlags.NumBits < TStack_218.CurrentBitIndex) {
        TStack_218.CurrentBitIndex = local_d8.AllocationFlags.NumBits;
      }
    }
LAB_141d77d0c:
    local_220 = &local_d8;
    TStack_218.Array = &local_d8.AllocationFlags;
    TStack_218._padding_ = CONCAT44(uVar7,iVar19);
    TStack_218.UnvisitedBitMask = 0xffffffff;
    TStack_218._28_4_ = local_e4;
    TStack_140._padding_ = TStack_218._padding_;
    TStack_140.BaseBitIndex = TStack_218.BaseBitIndex;
    TStack_140._28_4_ = local_e4;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    TStack_140.CurrentBitIndex = TStack_218.CurrentBitIndex;
    local_148 = local_220;
    TStack_140.Array = TStack_218.Array;
    if (iVar16 < local_d8.AllocationFlags.NumBits) {
      do {
        if (*(longlong *)((local_170->Data).AllocatorInstance.Data + (longlong)iVar16 * 0x10) !=
            *(longlong *)
             ((local_148->Data).AllocatorInstance.Data + (longlong)TStack_140.CurrentBitIndex * 0x10
             )) goto LAB_141d7746d;
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
        TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
        iVar16 = TStack_168.CurrentBitIndex;
      } while (TStack_168.CurrentBitIndex < (TStack_168.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_141d7746d:
    bVar4 = false;
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringDest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8);
  return bVar4;
code_r0x000141d77551:
  uVar9 = *(uint *)((longlong)local_d8.Data.AllocatorInstance.Data + lVar14 + 8);
  if (uVar9 == 0xffffffff) goto LAB_141d77646;
  goto LAB_141d77540;
}

// CheckCurrentlyInstantiated @ 141d77df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
`anonymous_namespace'::
TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource>::
CheckCurrentlyInstantiated
          (initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>
           *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *pTVar20;
  undefined1 auStack_248 [32];
  FIdentityFunctor local_228;
  FIdentityFunctor local_227 [7];
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  int local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined4 local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  undefined4 local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  FIdentityFunctor *local_1a8;
  FIdentityFunctor *local_1a0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_104;
  undefined4 local_e4;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.AllocationFlags.NumBits = 0;
  local_d8.AllocationFlags.MaxBits = 0x80;
  local_d8.FirstFreeIndex = -1;
  local_d8.NumFreeIndices = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
  ::operator=(&local_d8,
              &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
               Constructed);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  TSet<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,DefaultKeyFuncs<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*,0>,FDefaultSetAllocator>
  ::operator=(&local_88,
              &TInstanceTracker<`FRelocateConstructItemsTest::TestBody'::`23'::FStringSource>::
               Destructed);
  uVar7 = 1;
  pTVar1 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)param_1->_Last;
  FVar11.Data = local_98.Data;
  for (pTVar20 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 *)param_1->_First;
      pTVar20 != pTVar1; pTVar20 = pTVar20 + 1) {
    TVar2 = *pTVar20;
    uVar9 = ((uint)((ulonglong)TVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)TVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    if (local_d8.Data.ArrayNum == local_d8.NumFreeIndices) goto LAB_141d77fad;
    pFVar18 = local_a0;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      pFVar18 = FVar11.Data;
    }
    iVar13 = *(int *)(pFVar18 + (ulonglong)(local_90 - 1 & uVar9) * 4);
    while( true ) {
      if (iVar13 == -1) goto LAB_141d77fad;
      if (((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
          ((longlong)local_d8.Data.AllocatorInstance.Data + (longlong)iVar13 * 0x10))->_s_1 == TVar2
         ) break;
      iVar13 = *(int *)((longlong)local_d8.Data.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8
                       );
    }
    pFVar18 = local_a0;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      pFVar18 = FVar11.Data;
    }
    uVar9 = *(uint *)(pFVar18 + (longlong)(int)(local_90 - 1 & uVar9) * 4);
    if (uVar9 != 0xffffffff) {
LAB_141d78080:
      lVar14 = (longlong)(int)uVar9 * 0x10;
      if (((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)
          ((longlong)local_d8.Data.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10))->_s_1 !=
          TVar2) goto code_r0x000141d78091;
      if (((int)uVar9 < 0) || (local_d8.AllocationFlags.NumBits <= (int)uVar9)) {
LAB_141d780db:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        FVar11.Data = local_98.Data;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else {
        FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
        if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        uVar6 = uVar9;
        if ((int)uVar9 < 0) {
          uVar6 = uVar9 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar9 & 0x1f) & 1) ==
            0) goto LAB_141d780db;
      }
      FVar15.Data = local_d8.Data.AllocatorInstance.Data;
      pFVar18 = local_a0;
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        pFVar18 = FVar11.Data;
      }
      pFVar18 = pFVar18 + (longlong)*(int *)(local_d8.Data.AllocatorInstance.Data + lVar14 + 0xc) *
                          4;
      while( true ) {
        uVar6 = *(uint *)pFVar18;
        if ((uVar6 == 0xffffffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (uVar6 == uVar9) break;
        pFVar18 = local_d8.Data.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10 + 8;
      }
      *(uint *)pFVar18 = *(uint *)(FVar15.Data + lVar14 + 8);
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(&local_d8,uVar9,1);
      FVar11.Data = local_98.Data;
    }
LAB_141d78186:
  }
  local_1a8 = &local_228;
  if (0 < local_d8.Data.ArrayNum - local_d8.NumFreeIndices) {
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(&local_d8);
    FVar11.Data = local_d8.Data.AllocatorInstance.Data;
    iVar13 = local_d8.Data.ArrayNum - local_d8.NumFreeIndices;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_1>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)FVar11.Data,iVar13,
               local_228,
               (FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>)_::_2_::<lambda_1>_>
                *)&local_1a8);
    FVar11.Data = local_98.Data;
  }
  uVar9 = local_90;
  uVar17 = (ulonglong)local_90;
  FVar15.Data = (FScriptContainerElement *)0x0;
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
    FVar15.Data = local_98.Data;
  }
  if (uVar9 != 0) {
    uVar6 = uVar9;
    if (uVar9 < 2) {
      FVar11.Data = (FScriptContainerElement *)0x0;
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        uVar6 = 0;
        goto LAB_141d78241;
      }
    }
    else {
LAB_141d78241:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar6,4);
      FVar11.Data = local_98.Data;
    }
    if (0 < (int)uVar9) {
      uVar12 = 0;
      do {
        pFVar18 = local_a0;
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          pFVar18 = FVar11.Data;
        }
        uVar8 = (longlong)(int)uVar9 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(pFVar18 + uVar8 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
        FVar11.Data = local_98.Data;
      } while (uVar17 != 0);
    }
  }
  if (local_90 != 0) {
    uStack_1ec = 1;
    local_1f0 = 0;
    iStack_1dc = 0;
    iStack_1d8 = 0;
    pTStack_1e8 = &local_d8.AllocationFlags;
    if (local_d8.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
      if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      iStack_1d8 = 0;
      local_1f0 = 0;
      while (uVar9 == 0) {
        iStack_1d8 = iStack_1d8 + 0x20;
        lVar14 = (longlong)local_1f0;
        local_1f0 = local_1f0 + 1;
        if ((int)(local_d8.AllocationFlags.NumBits + -1 +
                 (local_d8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1f0)
        goto LAB_141d78362;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uStack_1ec = -uVar9 & uVar9;
      uVar17 = (ulonglong)uStack_1ec * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1b0 = (int)lVar14;
      iStack_1dc = iStack_1d8 + -1 + local_1b0;
      if (local_d8.AllocationFlags.NumBits < iStack_1dc) {
LAB_141d78362:
        iStack_1dc = local_d8.AllocationFlags.NumBits;
      }
    }
    local_1e0 = 0xffffffff;
    local_198 = &local_d8;
    local_190._padding_ = CONCAT44(uStack_1ec,local_1f0);
    local_190.CurrentBitIndex = iStack_1dc;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_1d4;
    local_190.BaseBitIndex = iStack_1d8;
    iVar13 = iStack_1dc;
    local_190.Array = pTStack_1e8;
    if (iStack_1dc < local_d8.AllocationFlags.NumBits) {
      do {
        pFVar18 = (local_198->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        uVar9 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar18 >> 4)
                ) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_90 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar9;
        FVar11.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_98.Data;
        }
        uVar17 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar11.Data + uVar17 * 4);
        *(int *)(FVar11.Data + uVar17 * 4) = iVar13;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        iVar13 = local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
    }
  }
  local_1a0 = local_227;
  if (0 < local_88.Data.ArrayNum - local_88.NumFreeIndices) {
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(&local_88);
    FVar11.Data = local_88.Data.AllocatorInstance.Data;
    iVar13 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,DefaultKeyFuncs<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*,0>,FDefaultSetAllocator>::FElementCompareClass<__anonymous_namespace_::TInstanceTracker<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource>::CheckCurrentlyInstantiated_::__l2::<lambda_2>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)FVar11.Data,iVar13,
               local_227[0],
               (FElementCompareClass<_public:_static_bool___cdecl__anonymous_namespace_::TInstanceTracker<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource>::CheckCurrentlyInstantiated(std::initializer_list<_protected:_void___cdecl_FRelocateConstructItemsTest::TestBody(FString_const_&)_::_23_::FStringSource_const_*>)_::_2_::<lambda_2>_>
                *)&local_1a0);
  }
  uVar9 = local_40;
  uVar17 = (ulonglong)local_40;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar9 == 0) goto LAB_141d78552;
  uVar6 = uVar9;
  if (uVar9 < 2) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar6 = 0;
      goto LAB_141d784f7;
    }
  }
  else {
LAB_141d784f7:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar6,4);
  }
  if (0 < (int)uVar9) {
    uVar12 = 0;
    do {
      FVar11.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar11.Data = local_48.Data;
      }
      uVar8 = uVar12 & (longlong)(int)uVar9 - 1U;
      uVar12 = uVar12 + 1;
      *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_141d78552:
  if (local_40 != 0) {
    TStack_218.Array = &local_88.AllocationFlags;
    uStack_1cc = 1;
    local_1d0 = 0;
    iStack_1bc = 0;
    iStack_1b8 = 0;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      iStack_1b8 = 0;
      local_1d0 = 0;
      while (uVar9 == 0) {
        iStack_1b8 = iStack_1b8 + 0x20;
        lVar14 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        if ((int)(local_88.AllocationFlags.NumBits + -1 +
                 (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1d0)
        goto LAB_141d7860c;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uStack_1cc = -uVar9 & uVar9;
      uVar17 = (ulonglong)uStack_1cc * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStack_1bc = iStack_1b8 + -1 + (int)lVar14;
      if (local_88.AllocationFlags.NumBits < iStack_1bc) {
LAB_141d7860c:
        iStack_1bc = local_88.AllocationFlags.NumBits;
      }
    }
    local_1c0 = 0xffffffff;
    local_220 = &local_88;
    TStack_218._padding_ = CONCAT44(uStack_1cc,local_1d0);
    TStack_218.CurrentBitIndex = iStack_1bc;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    TStack_218._28_4_ = uStack_1b4;
    TStack_218.BaseBitIndex = iStack_1b8;
    iVar13 = iStack_1bc;
    pTStack_1c8 = TStack_218.Array;
    if (iStack_1bc < local_88.AllocationFlags.NumBits) {
      do {
        pFVar18 = (local_220->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
        uVar9 = ((uint)(*(ulonglong *)pFVar18 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar18 >> 4)
                ) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & local_40 - 1;
        *(uint *)(pFVar18 + 0xc) = uVar9;
        FVar11.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_48.Data;
        }
        uVar17 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pFVar18 + 8) = *(undefined4 *)(FVar11.Data + uVar17 * 4);
        *(int *)(FVar11.Data + uVar17 * 4) = iVar13;
        TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
        iVar13 = TStack_218.CurrentBitIndex;
      } while (TStack_218.CurrentBitIndex < (TStack_218.Array)->NumBits);
    }
  }
  if (local_d8.Data.ArrayNum - local_d8.NumFreeIndices ==
      local_88.Data.ArrayNum - local_88.NumFreeIndices) {
    iVar13 = 0;
    TStack_168.BaseBitIndex = 0;
    uVar9 = 1;
    iVar16 = 0;
    if (local_d8.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
      if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      while (uVar9 == 0) {
        lVar14 = (longlong)iVar13;
        TStack_168.BaseBitIndex = TStack_168.BaseBitIndex + 0x20;
        iVar13 = iVar13 + 1;
        uVar9 = 1;
        iVar16 = local_d8.AllocationFlags.NumBits;
        if ((int)(local_d8.AllocationFlags.NumBits + -1 +
                 (local_d8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_141d7877e;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uVar9 = -uVar9 & uVar9;
      uVar17 = (ulonglong)uVar9 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar16 = TStack_168.BaseBitIndex + -1 + (int)lVar14;
      if (local_d8.AllocationFlags.NumBits < iVar16) {
        iVar16 = local_d8.AllocationFlags.NumBits;
      }
    }
LAB_141d7877e:
    local_170 = &local_d8;
    iVar19 = 0;
    TStack_168.Array = &local_d8.AllocationFlags;
    TStack_218.BaseBitIndex = 0;
    TStack_218._padding_ = CONCAT44(uVar9,iVar13);
    TStack_168._padding_ = TStack_218._padding_;
    TStack_168._28_4_ = local_104;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    TStack_168.CurrentBitIndex = iVar16;
    TStack_218.CurrentBitIndex = 0;
    if (local_d8.AllocationFlags.NumBits != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_d8.AllocationFlags;
      if (local_d8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_d8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar10;
      while (uVar9 == 0) {
        lVar14 = (longlong)iVar19;
        TStack_218.BaseBitIndex = TStack_218.BaseBitIndex + 0x20;
        iVar19 = iVar19 + 1;
        TStack_218.CurrentBitIndex = local_d8.AllocationFlags.NumBits;
        if ((int)(local_d8.AllocationFlags.NumBits + -1 +
                 (local_d8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_141d7884c;
        uVar9 = *(uint *)((uchar *)((longlong)FVar10 + 4) + lVar14 * 4);
      }
      uVar7 = -uVar9 & uVar9;
      uVar17 = (ulonglong)uVar7 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      TStack_218.CurrentBitIndex = (int)lVar14 + -1 + TStack_218.BaseBitIndex;
      if (local_d8.AllocationFlags.NumBits < TStack_218.CurrentBitIndex) {
        TStack_218.CurrentBitIndex = local_d8.AllocationFlags.NumBits;
      }
    }
LAB_141d7884c:
    local_220 = &local_d8;
    TStack_218.Array = &local_d8.AllocationFlags;
    TStack_218._padding_ = CONCAT44(uVar7,iVar19);
    TStack_218.UnvisitedBitMask = 0xffffffff;
    TStack_218._28_4_ = local_e4;
    TStack_140._padding_ = TStack_218._padding_;
    TStack_140.BaseBitIndex = TStack_218.BaseBitIndex;
    TStack_140._28_4_ = local_e4;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    TStack_140.CurrentBitIndex = TStack_218.CurrentBitIndex;
    local_148 = local_220;
    TStack_140.Array = TStack_218.Array;
    if (iVar16 < local_d8.AllocationFlags.NumBits) {
      do {
        if (*(longlong *)((local_170->Data).AllocatorInstance.Data + (longlong)iVar16 * 0x10) !=
            *(longlong *)
             ((local_148->Data).AllocatorInstance.Data + (longlong)TStack_140.CurrentBitIndex * 0x10
             )) goto LAB_141d77fad;
        TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
        TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
        iVar16 = TStack_168.CurrentBitIndex;
      } while (TStack_168.CurrentBitIndex < (TStack_168.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_141d77fad:
    bVar4 = false;
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<`FRelocateConstructItemsTest::TestBody'::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<_FRelocateConstructItemsTest::TestBody_::__l23::FStringSource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8);
  return bVar4;
code_r0x000141d78091:
  uVar9 = *(uint *)((longlong)local_d8.Data.AllocatorInstance.Data + lVar14 + 8);
  if (uVar9 == 0xffffffff) goto LAB_141d78186;
  goto LAB_141d78080;
}

