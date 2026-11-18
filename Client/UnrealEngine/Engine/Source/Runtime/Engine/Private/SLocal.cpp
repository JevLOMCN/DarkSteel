// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AggregateAndPrint @ 1480211d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UNetDriver::PrintDebugRelevantActors'::__l2::SLocal::AggregateAndPrint
          (TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  UObject *pUVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  UObject *pUVar8;
  int *piVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  int iVar12;
  int iVar13;
  FString *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  int iVar21;
  undefined1 auStack_348 [32];
  FScriptContainerElement *local_328;
  longlong local_320;
  FIdentityFunctor local_318;
  FIdentityFunctor local_317 [7];
  FString *local_310;
  FWeakObjectPtr local_308;
  FWeakObjectPtr local_300;
  int local_2f8;
  TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *local_2f0;
  uint local_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2e0;
  undefined4 local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  uint local_2c8;
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c0;
  undefined4 local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  undefined1 auStack_2a0 [16];
  uint uStack_290;
  uint uStack_28c;
  longlong local_288;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  *pTStack_280;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  *local_278;
  undefined2 local_270;
  longlong *local_268;
  undefined1 auStack_260 [16];
  uint uStack_250;
  uint uStack_24c;
  longlong local_248;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  *pTStack_240;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  *local_238;
  undefined2 local_230;
  UObject *local_228;
  UObject *local_220;
  FIdentityFunctor *local_218;
  FIdentityFunctor **local_210;
  FIdentityFunctor *local_208;
  FIdentityFunctor **local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  undefined1 local_148 [32];
  longlong local_128;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  *pTStack_120;
  undefined1 local_118 [32];
  longlong local_f8;
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  *pTStack_f0;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_2f8 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_e8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar15 = 0;
  uVar19 = uVar15;
  local_310 = param_2;
  local_2f0 = param_1;
  while ((iVar12 = (int)uVar19, -1 < iVar12 && (iVar12 < param_1->ArrayNum))) {
    if (iVar12 < 0) {
      local_328 = (FScriptContainerElement *)(longlong)iVar12;
      local_320 = (longlong)param_1->ArrayNum;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8));
    if (pUVar8 != (UObject *)0x0) {
      pUVar1 = *(UObject **)&pUVar8->field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_308.ObjectIndex = 0;
      local_308.ObjectSerialNumber = 0;
      local_228 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_308,(FObjectPtr)&local_228);
      piVar9 = TMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>
               ::FindOrAddImpl<TWeakObjectPtr<UClass,FWeakObjectPtr>_>
                         ((TMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>
                           *)local_98,local_308.ObjectSerialNumber ^ local_308.ObjectIndex,
                          (TWeakObjectPtr<UClass,FWeakObjectPtr> *)&local_308);
      *piVar9 = *piVar9 + 1;
      pUVar8 = *(UObject **)(*(longlong *)&pUVar8->field_0x10 + 0x40);
      param_1 = local_2f0;
      if (pUVar8 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        local_300.ObjectIndex = 0;
        local_300.ObjectSerialNumber = 0;
        local_220 = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(&local_300,(FObjectPtr)&local_220);
        piVar9 = TMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>
                 ::FindOrAddImpl<TWeakObjectPtr<UClass,FWeakObjectPtr>_>
                           ((TMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>
                             *)local_e8,local_300.ObjectSerialNumber ^ local_300.ObjectIndex,
                            (TWeakObjectPtr<UClass,FWeakObjectPtr> *)&local_300);
        *piVar9 = *piVar9 + 1;
        param_1 = local_2f0;
      }
    }
    uVar19 = (ulonglong)(iVar12 + 1);
  }
  local_218 = &local_318;
  local_210 = &local_218;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar2 = local_98._0_8_;
    iVar12 = local_98._8_4_ - local_64;
    if ((iVar12 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<__UNetDriver::PrintDebugRelevantActors_::__l2::SLocal::AggregateAndPrint_::__l2::FCompareActorClassCount>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)uVar2,iVar12,local_318,
               (FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<_public:_static_void___cdecl__public:_void___cdecl_UNetDriver::PrintDebugRelevantActors(void)_::_2_::SLocal::AggregateAndPrint(TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,FString)_::_2_::FCompareActorClassCount>_>
                *)&local_210);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 != 0) {
    uVar17 = uVar16;
    if (uVar16 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_1480214b8;
      }
    }
    else {
LAB_1480214b8:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4);
    }
    if (0 < (int)uVar16) {
      uVar18 = uVar15;
      do {
        FVar11.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar10 = uVar18 & (longlong)(int)uVar16 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)((longlong)FVar11.Data + uVar10 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  iVar21 = 1;
  iVar12 = 1;
  if (local_50 != 0) {
    pTStack_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_2e8 = 0;
    uStack_2e4 = 1;
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    uVar19 = uVar15;
    if (local_70 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_78;
      }
      uVar16 = *(uint *)FVar20;
      uVar18 = uVar15;
      while (uVar16 == 0) {
        uStack_2d0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_2d0;
        iVar13 = (int)uVar19;
        local_2e8 = iVar13 + 1;
        uVar19 = (ulonglong)local_2e8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2e8)
        goto LAB_1480215e3;
        uVar16 = ((uint *)((longlong)FVar20 + 4))[iVar13];
      }
      uStack_2e4 = -uVar16 & uVar16;
      uVar19 = (ulonglong)uStack_2e4 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_2f8 = (int)lVar4;
      uStack_2d4 = local_2f8 + -1 + uStack_2d0;
      uVar19 = (ulonglong)uStack_2d4;
      if ((int)local_70 < (int)uStack_2d4) {
LAB_1480215e3:
        uVar19 = (ulonglong)local_70;
        uStack_2d4 = local_70;
      }
    }
    local_2d8 = 0xffffffff;
    local_198 = (longlong *)local_98;
    local_190._padding_ = CONCAT44(uStack_2e4,local_2e8);
    local_190.CurrentBitIndex = uStack_2d4;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_2cc;
    local_190.BaseBitIndex = uStack_2d0;
    local_190.Array = pTStack_2e0;
    if ((int)uVar19 < (int)local_70) {
      do {
        iVar13 = (int)uVar19;
        lVar4 = *local_198 + (longlong)iVar13 * 0x14;
        uVar2 = *(undefined8 *)(*local_198 + (longlong)iVar13 * 0x14);
        uVar16 = ((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) & local_50 - 1;
        *(uint *)(lVar4 + 0x10) = uVar16;
        FVar11.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar19 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar11.Data + uVar19 * 4);
        *(int *)((longlong)FVar11.Data + uVar19 * 4) = iVar13;
        local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
        uVar19 = (ulonglong)(uint)local_190.CurrentBitIndex;
      } while (local_190.CurrentBitIndex < (local_190.Array)->NumBits);
    }
  }
  local_208 = local_317;
  local_200 = &local_208;
  if (0 < local_e8._8_4_ - local_b4) {
    TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8);
    uVar2 = local_e8._0_8_;
    iVar13 = local_e8._8_4_ - local_b4;
    if ((iVar13 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<__UNetDriver::PrintDebugRelevantActors_::__l2::SLocal::AggregateAndPrint_::__l2::FCompareActorClassCount>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *)uVar2,iVar13,local_317[0],
               (FElementCompareClass<TSortableMapBase<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>_>::FValueComparisonClass<_public:_static_void___cdecl__public:_void___cdecl_UNetDriver::PrintDebugRelevantActors(void)_::_2_::SLocal::AggregateAndPrint(TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&,FString)_::_2_::FCompareActorClassCount>_>
                *)&local_200);
  }
  uVar16 = local_a0;
  uVar19 = (ulonglong)local_a0;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar16 == 0) goto LAB_1480217cd;
  uVar17 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
      uVar17 = 0;
      goto LAB_148021773;
    }
  }
  else {
LAB_148021773:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar17,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar15;
    do {
      FVar11.Data = (FScriptContainerElement *)local_b0;
      if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar11.Data = local_a8.Data;
      }
      uVar10 = (longlong)(int)uVar16 - 1U & uVar18;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar11.Data + uVar10 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_1480217cd:
  if (local_a0 != 0) {
    pTStack_2c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_2c8 = 0;
    uStack_2c4 = 1;
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    uVar19 = uVar15;
    if (local_c0 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_c8;
      }
      uVar16 = *(uint *)FVar20;
      uVar18 = uVar15;
      while (uVar16 == 0) {
        uStack_2b0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_2b0;
        iVar13 = (int)uVar19;
        local_2c8 = iVar13 + 1;
        uVar19 = (ulonglong)local_2c8;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2c8)
        goto LAB_14802188a;
        uVar16 = ((uint *)((longlong)FVar20 + 4))[iVar13];
      }
      uStack_2c4 = -uVar16 & uVar16;
      uVar19 = (ulonglong)uStack_2c4 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_2b4 = (uStack_2b0 - 1) + (int)lVar4;
      uVar19 = (ulonglong)uStack_2b4;
      if ((int)local_c0 < (int)uStack_2b4) {
LAB_14802188a:
        uVar19 = (ulonglong)local_c0;
        uStack_2b4 = local_c0;
      }
    }
    local_2b8 = 0xffffffff;
    local_170 = (longlong *)local_e8;
    local_168._padding_ = CONCAT44(uStack_2c4,local_2c8);
    local_168.CurrentBitIndex = uStack_2b4;
    local_168.UnvisitedBitMask = 0xffffffff;
    local_168._28_4_ = uStack_2ac;
    local_168.BaseBitIndex = uStack_2b0;
    local_168.Array = pTStack_2c0;
    if ((int)uVar19 < (int)local_c0) {
      do {
        iVar13 = (int)uVar19;
        lVar4 = *local_170 + (longlong)iVar13 * 0x14;
        uVar2 = *(undefined8 *)(*local_170 + (longlong)iVar13 * 0x14);
        uVar16 = ((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) & local_a0 - 1;
        *(uint *)(lVar4 + 0x10) = uVar16;
        FVar11.Data = (FScriptContainerElement *)local_b0;
        if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = local_a8.Data;
        }
        uVar19 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar11.Data + uVar19 * 4);
        *(int *)((longlong)FVar11.Data + uVar19 * 4) = iVar13;
        local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
        uVar19 = (ulonglong)(uint)local_168.CurrentBitIndex;
      } while (local_168.CurrentBitIndex < (local_168.Array)->NumBits);
    }
  }
  if ((2 < (byte)LogNet._0_1_) &&
     (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
     2 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  if (2 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_148,
             (TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
              *)local_98);
  local_278 = (TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
               *)local_98;
  local_270 = 0;
  stack0xfffffffffffffd68 = local_148._16_16_;
  local_2a8 = (longlong *)local_148._0_8_;
  auStack_2a0._0_8_ = local_148._8_8_;
  local_288 = local_128;
  pTStack_280 = pTStack_120;
  uVar19 = local_148._24_8_ >> 0x20;
  if (local_148._28_4_ < *(int *)(local_148._16_8_ + 0x18)) {
    do {
      plVar6 = local_2a8;
      if (2 < (byte)LogNet._0_1_) {
        lVar4 = (longlong)(int)uVar19 * 0x14;
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_2a8 + lVar4));
        if (*(longlong *)&pUVar8[1].field_0x18 == 0) {
          FVar11.Data = (FScriptContainerElement *)&u_NULL;
        }
        else {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + lVar4));
          uVar15 = 1;
          local_1f8 = *(FName *)(*(longlong *)&pUVar8[1].field_0x18 + 0x18);
          ::FName::ToString(&local_1f8,&local_1c8);
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_1c8.Data.ArrayNum != 0) {
            FVar11.Data = local_1c8.Data.AllocatorInstance.Data;
          }
        }
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + lVar4));
        local_1f0.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        local_1f0.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&local_1f0,&local_1d8);
        local_328 = FVar11.Data;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if ((uVar15 != 0) &&
           (uVar15 = 0, local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      uStack_290 = uStack_290 & ~auStack_2a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2a0);
      uVar19 = (ulonglong)uStack_28c;
    } while ((int)uStack_28c < *(int *)(auStack_2a0._8_8_ + 0x18));
    if (((char)local_270 != '\0') && (local_270._1_1_ != '\0')) {
      uVar16 = *(int *)&(local_278->Elements).field_0x8 - *(int *)&(local_278->Elements).field_0x34;
      if (3 < uVar16) {
        uVar19 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_278->HashSize < iVar12)) || (iVar12 < local_278->HashSize)) {
        local_278->HashSize = iVar12;
        TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::Rehash(local_278);
      }
    }
  }
  bVar7 = false;
  if (((2 < (byte)LogNet._0_1_) &&
      (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
      2 < (byte)LogNet._0_1_)) &&
     (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
     2 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_118,
             (TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
              *)local_e8);
  local_238 = (TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
               *)local_e8;
  local_230 = 0;
  stack0xfffffffffffffda8 = local_118._16_16_;
  local_268 = (longlong *)local_118._0_8_;
  auStack_260._0_8_ = local_118._8_8_;
  local_248 = local_f8;
  pTStack_240 = pTStack_f0;
  uVar19 = local_118._24_8_ >> 0x20;
  if (local_118._28_4_ < *(int *)(local_118._16_8_ + 0x18)) {
    do {
      plVar6 = local_268;
      if (2 < (byte)LogNet._0_1_) {
        lVar4 = (longlong)(int)uVar19 * 0x14;
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_268 + lVar4));
        if (*(longlong *)&pUVar8[1].field_0x18 == 0) {
          FVar11.Data = (FScriptContainerElement *)&u_NULL;
        }
        else {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + lVar4));
          bVar7 = true;
          local_1e8 = *(FName *)(*(longlong *)&pUVar8[1].field_0x18 + 0x18);
          ::FName::ToString(&local_1e8,&local_1a8);
          FVar11.Data = (FScriptContainerElement *)L"";
          if (local_1a8.Data.ArrayNum != 0) {
            FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
          }
        }
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + lVar4));
        local_1e0.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        local_1e0.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&local_1e0,&local_1b8);
        local_328 = FVar11.Data;
        UE::Logging::Private::BasicLog<3>
                  (&::SLocal::AggregateAndPrint'[::N]::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      uStack_250 = uStack_250 & ~auStack_260._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_260);
      uVar19 = (ulonglong)uStack_24c;
    } while ((int)uStack_24c < *(int *)(auStack_260._8_8_ + 0x18));
    if (((char)local_230 != '\0') && (local_230._1_1_ != '\0')) {
      uVar16 = *(int *)&(local_238->Elements).field_0x8 - *(int *)&(local_238->Elements).field_0x34;
      if (3 < uVar16) {
        uVar19 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_238->HashSize < iVar21)) || (iVar21 < local_238->HashSize)) {
        local_238->HashSize = iVar21;
        TSet<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
        ::Rehash(local_238);
      }
    }
  }
  pFVar14 = local_310;
  if ((2 < (byte)LogNet._0_1_) &&
     (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
     pFVar14 = local_310, 2 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  if (2 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  local_a0 = 0;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  pFVar3 = (pFVar14->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

