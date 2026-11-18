// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// Execute @ 14ae6f9e0

void __thiscall
Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute
          (FSortStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FKeyForward FVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  FFrontendQueryEntry *pFVar12;
  FFrontendQueryEntry *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  bool bVar19;
  undefined1 local_b8 [4];
  uint local_b4;
  ForElementType<unsigned_int> local_b0;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  FSortStepExecuter *local_70;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar7 = GCycleStatsShouldEmitNamedEvents;
  FVar4 = (FKeyForward)(0 < GCycleStatsShouldEmitNamedEvents);
  if ((bool)FVar4) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::SortQueryStep::Execute");
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId858,"MetaSound::SortQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x35a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId858);
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    iStack_a0 = 0;
    iVar2 = *(int *)&(param_1->Elements).field_0x28;
    local_b0 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
    local_88 = 0;
    uStack_9c = 1;
    iStack_8c = 0;
    if (iVar2 != 0) {
      puVar18 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_b0;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar11 = (longlong)iStack_a0;
        local_88 = local_88 + 0x20;
        iStack_a0 = iStack_a0 + 1;
        iStack_8c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14ae6fb2e;
        uVar16 = puVar18[lVar11 + 1];
      }
      uStack_9c = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_9c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_78 = (int)lVar11;
      iStack_8c = local_78 + -1 + local_88;
      if (iVar2 < iStack_8c) {
        iStack_8c = iVar2;
      }
    }
LAB_14ae6fb2e:
    iStack_80 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar16 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_90 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_8c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
    uVar15 = uVar16 & 0xffffffe0;
    iVar14 = (int)uVar16 >> 5;
    TStack_60._28_4_ = iStack_8c;
    TStack_60.BaseBitIndex = local_88;
    uStack_40 = CONCAT44(uStack_7c,iStack_80);
    local_b4 = uVar16;
    local_a8 = param_1;
    local_98 = (undefined1 *)local_b0;
    iStack_84 = iStack_8c;
    local_70 = this;
    local_68 = param_1;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
    if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar8 = local_b0;
    uVar3 = *(int *)((longlong)local_b0 + 0x18);
    uVar6 = local_b4;
    if (uVar16 != uVar3) {
      FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_b0;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar14;
        uVar15 = uVar15 + 0x20;
        iVar14 = iVar14 + 1;
        local_b4 = uVar3;
        uVar6 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ae6fc50;
        uVar16 = *(uint *)((undefined1 *)((longlong)FVar17 + 4) + lVar11 * 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_74 = (int)lVar11;
      local_b4 = local_74 + -1 + uVar15;
      uVar6 = local_b4;
      if ((int)uVar3 < (int)local_b4) {
        local_b4 = uVar3;
        uVar6 = uVar3;
      }
    }
LAB_14ae6fc50:
    while( true ) {
      pTVar9 = local_68;
      if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
          (int)uStack_40) {
        local_b8[0] = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
      }
      if (((TStack_60.CurrentBitIndex == uVar6) &&
          ((ForElementType<unsigned_int>)TStack_60.Array == FVar8)) && (pTVar9 == param_1)) break;
      uVar16 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,
                          (FFrontendQueryKey *)
                          (*(longlong *)&pTVar9->Elements +
                          (longlong)TStack_60.CurrentBitIndex * 0x28),FVar4,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)FVar4);
      if (uVar16 != 0xffffffff) {
        uVar15 = 0;
        if ((int)uVar16 < (param_2->Pairs).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar12 = (FFrontendQueryEntry *)
                  ((param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar16 * 0xe0 + 0x20);
        if (pFVar12 != (FFrontendQueryEntry *)0x0) {
          pFVar13 = pFVar12;
          if (*(FFrontendQueryEntry **)&pFVar12[1].ID != (FFrontendQueryEntry *)0x0) {
            pFVar13 = *(FFrontendQueryEntry **)&pFVar12[1].ID;
          }
          AlgoImpl::
          IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Execute_::__l5::<lambda_1>_>_>
                    (pFVar13,pFVar12[1].ID.C,(FIdentityFunctor)FVar4,(<lambda_1> *)&local_70);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// IsDependentOnPartitionComposition @ 14ae7a4b0

bool __thiscall
Metasound::FrontendQueryPrivate::FSortStepExecuter::IsDependentOnPartitionComposition
          (FSortStepExecuter *this)

{
  return true;
}

// Merge @ 14ae7deb0

void __thiscall
Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge
          (FSortStepExecuter *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  ForElementType<Metasound::FFrontendQueryEntry> this_00;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  bool bVar16;
  FKeyForward local_res10;
  undefined1 local_d8 [4];
  uint local_d4;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_d0;
  FFrontendQueryKey *local_c8;
  FIncremental *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  FSortStepExecuter *local_88;
  FIncremental *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar5 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::SortQueryStep::Merge");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId826,"MetaSound::SortQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x33a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId826);
  }
  TStepExecuterBase<Metasound::IFrontendQuerySortStep>::Remove
            ((TStepExecuterBase<Metasound::IFrontendQuerySortStep> *)this,
             &param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  if (*(longlong *)&this->field_0x8 != 0) {
    iStack_b8 = 0;
    puVar1 = &(param_1->ActiveKeys).Elements.field_0x10;
    iVar3 = *(int *)&(param_1->ActiveKeys).Elements.field_0x28;
    local_a0 = 0;
    uStack_b4 = 1;
    iStack_a4 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(param_1->ActiveKeys).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar12 = *puVar15;
      while (uVar12 == 0) {
        lVar9 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ae7e00d;
        uVar12 = puVar15[lVar9 + 1];
      }
      uStack_b4 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uStack_b4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_90 = (int)lVar9;
      iStack_a4 = local_a0 + -1 + local_90;
      if (iVar3 < iStack_a4) {
        iStack_a4 = iVar3;
      }
    }
LAB_14ae7e00d:
    local_d4 = *(uint *)&(param_1->ActiveKeys).Elements.field_0x28;
    iStack_98 = *(int *)&(param_1->ActiveKeys).Elements.field_0x8 -
                *(int *)&(param_1->ActiveKeys).Elements.field_0x34;
    uVar12 = local_d4 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uStack_a8 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_a4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)local_d4 >> 5;
    TStack_78._28_4_ = iStack_a4;
    TStack_78.BaseBitIndex = local_a0;
    uStack_58 = CONCAT44(uStack_94,iStack_98);
    bVar7 = (byte)local_d4;
    local_c0 = param_1;
    local_b0 = puVar1;
    iStack_9c = iStack_a4;
    local_88 = this;
    local_80 = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)local_d4 < 0) || (iVar3 < (int)local_d4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = *(uint *)&(param_1->ActiveKeys).Elements.field_0x28;
    if (local_d4 != uVar8) {
      puVar14 = *(undefined1 **)&(param_1->ActiveKeys).Elements.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = -1 << (bVar7 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        local_d4 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14ae7e10d;
        uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_8c = (int)lVar9;
      local_d4 = local_8c + -1 + uVar12;
      if ((int)uVar8 < (int)local_d4) {
        local_d4 = uVar8;
      }
    }
LAB_14ae7e10d:
    local_res10 = SUB81(param_1,0);
    while( true ) {
      if (*(int *)&(local_80->ActiveKeys).Elements.field_0x8 -
          *(int *)&(local_80->ActiveKeys).Elements.field_0x34 != (int)uStack_58) {
        local_d8[0] = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
      }
      if (((TStack_78.CurrentBitIndex == local_d4) &&
          (TStack_78.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->ActiveKeys).Elements.field_0x10)) &&
         (local_80 == param_1)) break;
      local_c8 = (FFrontendQueryKey *)
                 (*(longlong *)&(local_80->ActiveKeys).Elements +
                 (longlong)TStack_78.CurrentBitIndex * 0x28);
      uVar12 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&(param_1->ActiveSelection).Pairs,local_c8,local_res10,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
      if (uVar12 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar12 < (param_1->ActiveSelection).Pairs.ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_d0 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    *)((param_1->ActiveSelection).Pairs.AllocatorInstance.Data +
                      (longlong)(int)uVar12 * 0xe0 + 0x20);
        if (local_d0 !=
            (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          uVar12 = Algo::
                   BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                             (&param_2->Pairs,local_c8,local_res10,
                              (TLess<Metasound::FFrontendQueryKey_const_&>)local_res10);
          if (uVar12 != 0xffffffff) {
            uVar8 = 0;
            if ((int)uVar12 < (param_2->Pairs).ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = (ForElementType<Metasound::FFrontendQueryEntry>)
                      ((longlong)(param_2->Pairs).AllocatorInstance.Data +
                      (longlong)(int)uVar12 * 0xe0 + 0x20);
            if (this_00 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              ::
              Append<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                        ((TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                          *)this_00,local_d0);
              FVar10 = this_00;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)this_00 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)this_00 + 0xb0);
              }
              AlgoImpl::
              IntroSortInternal<Metasound::FFrontendQueryEntry,int,FIdentityFunctor,TDereferenceWrapper<Metasound::FFrontendQueryEntry,_Metasound::FrontendQueryPrivate::FSortStepExecuter::Merge_::__l5::<lambda_1>_>_>
                        ((FFrontendQueryEntry *)FVar10,*(int *)((longlong)this_00 + 0xb8),
                         (FIdentityFunctor)local_res10,(<lambda_1> *)&local_88);
              goto LAB_14ae7e2d8;
            }
          }
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          ::
          Emplace<Metasound::FFrontendQueryKey_const_&,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
                    (param_2,local_c8,local_d0);
        }
      }
LAB_14ae7e2d8:
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

