// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// Execute @ 14ae6daf0

void __thiscall
Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMapStep>::Execute
          (TMapStepExecuterBase<Metasound::IFrontendQueryMapStep> *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  ForElementType<Metasound::FFrontendQueryEntry> *pFVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  ForElementType<Metasound::FFrontendQueryEntry> *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  ForElementType<Metasound::FFrontendQueryEntry> FVar23;
  uint uVar24;
  ForElementType<Metasound::FFrontendQueryEntry> FVar25;
  bool bVar26;
  FKeyForward local_res8;
  undefined1 local_f7;
  undefined1 local_f6 [6];
  ForElementType<Metasound::FFrontendQueryEntry> *local_f0;
  undefined1 local_e8 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  local_e0;
  FScriptContainerElement *local_d0;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  undefined1 local_90 [24];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar7 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::MapStepQuery::Execute");
  }
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMapStep>::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId640,"MetaSound::MapStepQuery::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x280);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMapStep>::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId640);
  }
  if ((*(longlong *)&this->field_0x8 != 0) &&
     (iVar22 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34,
     0 < iVar22)) {
    iStack_c0 = 0;
    uStack_bc = 1;
    local_b8 = &(param_1->Elements).field_0x10;
    local_e0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Pairs.ArrayNum = 0;
    local_e0.Pairs.ArrayMax = 0;
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    local_a8 = 0;
    iStack_ac = iStack_c0;
    if (iVar3 != 0) {
      puVar21 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_b8;
      }
      uVar15 = *puVar21;
      local_a8 = 0;
      iStack_c0 = 0;
      while (uVar15 == 0) {
        lVar10 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14ae6dc5d;
        uVar15 = puVar21[lVar10 + 1];
      }
      uStack_bc = -uVar15 & uVar15;
      uVar12 = (ulonglong)uStack_bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_98 = (int)lVar10;
      iStack_ac = local_a8 + -1 + local_98;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_14ae6dc5d:
    uVar15 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_b0 = 0xffffffff;
    uVar24 = uVar15 & 0xffffffe0;
    TStack_78.CurrentBitIndex = iStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
    TStack_78._28_4_ = iStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iVar22);
    iVar13 = (int)uVar15 >> 5;
    local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)CONCAT44(local_f0._4_4_,uVar15);
    local_c8 = param_1;
    iStack_a4 = iStack_ac;
    iStack_a0 = iVar22;
    local_90._16_8_ = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if (((int)uVar15 < 0) || (uVar20 = uVar15, iVar3 < (int)uVar15)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = (uint)local_f0;
    }
    uVar4 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar20 != uVar4) {
      puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
      local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)CONCAT44(local_f0._4_4_,uVar4);
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(param_1->Elements).field_0x10;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar13;
        uVar24 = uVar24 + 0x20;
        iVar13 = iVar13 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14ae6dd70;
        uVar15 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_94 = (int)lVar10;
      uVar24 = local_94 + -1 + uVar24;
      if ((int)uVar4 < (int)uVar24) {
        uVar24 = uVar4;
      }
      local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)CONCAT44(local_f0._4_4_,uVar24);
    }
LAB_14ae6dd70:
    local_res8 = SUB81(this,0);
    iVar22 = (uint)local_f0;
    while( true ) {
      uVar8 = local_90._16_8_;
      if (*(int *)&((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90._16_8_)->field_0x8 -
          *(int *)&((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90._16_8_)->field_0x34 != (int)uStack_58) {
        local_f7 = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_f7);
      }
      if (((TStack_78.CurrentBitIndex == iVar22) &&
          (TStack_78.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)) &&
         ((TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
           *)uVar8 == param_1)) break;
      uVar15 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,
                          (FFrontendQueryKey *)
                          (*(longlong *)
                            (TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)uVar8 + (longlong)TStack_78.CurrentBitIndex * 0x28),local_res8,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
      if (uVar15 != 0xffffffff) {
        uVar24 = 0;
        if ((int)uVar15 < (param_2->Pairs).ArrayNum) {
          uVar24 = ~uVar15 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_2->Pairs).AllocatorInstance.Data;
        lVar10 = (longlong)(int)uVar15 * 0xe0;
        FVar23 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)pFVar5 + lVar10 + 0x20);
        if (FVar23 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          pFVar1 = (ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar23 + 0xb8);
          iVar3 = *(int *)pFVar1->InlineData;
          pFVar11 = (ForElementType<Metasound::FFrontendQueryEntry> *)(pFVar5 + lVar10 + 0xd0);
          pFVar19 = pFVar5 + lVar10 + 0xd8;
          if (0 < iVar3) {
            FVar25 = FVar23;
            if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar23 + 0xb0) !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar25 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar23 + 0xb0);
            }
            FVar16 = (ForElementType<Metasound::FFrontendQueryEntry>)
                     ((longlong)iVar3 * 0xb0 + (longlong)FVar25);
            local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)(pFVar5 + lVar10 + 0xd0);
            local_d0 = pFVar5 + lVar10 + 0xd8;
            while( true ) {
              if (*(int *)pFVar1->InlineData != iVar3) {
                local_f6[0] = 0;
                `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_f6);
              }
              pFVar11 = local_f0;
              pFVar19 = local_d0;
              if (FVar25 == FVar16) break;
              (**(code **)(*(longlong *)this + 0x30))(this,FVar25,&local_e0);
              FVar25 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar25 + 0xb0);
            }
          }
          piVar2 = (int *)((longlong)FVar23 + 0xbc);
          FVar25 = *pFVar11;
          if (*piVar2 < 0) {
            if (FVar25 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar25 = FVar23;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar25,*(int *)pFVar19);
            pFVar1->InlineData[0] = '\0';
            pFVar1->InlineData[1] = '\0';
            pFVar1->InlineData[2] = '\0';
            pFVar1->InlineData[3] = '\0';
            if (*piVar2 != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0xb0,8,0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar23,0,piVar2)
              ;
            }
          }
          else {
            if (FVar25 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar25 = FVar23;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar25,*(int *)pFVar19);
            pFVar1->InlineData[0] = '\0';
            pFVar1->InlineData[1] = '\0';
            pFVar1->InlineData[2] = '\0';
            pFVar1->InlineData[3] = '\0';
          }
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
    ::Reset(param_1);
    iVar22 = local_e0.Pairs.ArrayNum;
    uVar12 = (ulonglong)local_e0.Pairs.ArrayNum;
    pTVar17 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
               *)(local_e0.Pairs.AllocatorInstance.Data + uVar12 * 0xe0);
    FVar14.Data = local_e0.Pairs.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar22) {
        `TCheckedPointerIterator<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *)FVar14.Data == pTVar17) break;
      TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
      ::Emplace<Metasound::FFrontendQueryKey_const_&>
                (param_1,(FFrontendQueryKey *)local_90,(bool *)FVar14.Data);
      uVar12 = local_e0.Pairs._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0xe0;
    }
    TStepExecuterBase<Metasound::IFrontendQueryMapStep>::Append
              ((TStepExecuterBase<Metasound::IFrontendQueryMapStep> *)this,param_1,&local_e0,param_2
              );
    DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
              ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)local_e0.Pairs.AllocatorInstance.Data,local_e0.Pairs.ArrayNum);
    if ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *)local_e0.Pairs.AllocatorInstance.Data !=
        (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *)0x0) {
      FMemory::Free(local_e0.Pairs.AllocatorInstance.Data);
    }
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Execute @ 14ae6e050

void __thiscall
Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::
Execute(TMapStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *this,
       TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
       *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                *param_2)

{
  ForElementType<Metasound::FFrontendQueryEntry> *pFVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  ForElementType<Metasound::FFrontendQueryEntry> *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  ForElementType<Metasound::FFrontendQueryEntry> FVar23;
  uint uVar24;
  ForElementType<Metasound::FFrontendQueryEntry> FVar25;
  bool bVar26;
  FKeyForward local_res8;
  undefined1 local_f7;
  undefined1 local_f6 [6];
  ForElementType<Metasound::FFrontendQueryEntry> *local_f0;
  undefined1 local_e8 [8];
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  local_e0;
  FScriptContainerElement *local_d0;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  undefined1 local_90 [24];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar7 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::MapStepQuery::Execute");
  }
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId640,"MetaSound::MapStepQuery::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x280);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::TMapStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId640);
  }
  if ((*(longlong *)&this->field_0x8 != 0) &&
     (iVar22 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34,
     0 < iVar22)) {
    iStack_c0 = 0;
    uStack_bc = 1;
    local_b8 = &(param_1->Elements).field_0x10;
    local_e0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Pairs.ArrayNum = 0;
    local_e0.Pairs.ArrayMax = 0;
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    local_a8 = 0;
    iStack_ac = iStack_c0;
    if (iVar3 != 0) {
      puVar21 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_b8;
      }
      uVar15 = *puVar21;
      local_a8 = 0;
      iStack_c0 = 0;
      while (uVar15 == 0) {
        lVar10 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14ae6e1bd;
        uVar15 = puVar21[lVar10 + 1];
      }
      uStack_bc = -uVar15 & uVar15;
      uVar12 = (ulonglong)uStack_bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_98 = (int)lVar10;
      iStack_ac = local_a8 + -1 + local_98;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_14ae6e1bd:
    uVar15 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_b0 = 0xffffffff;
    uVar24 = uVar15 & 0xffffffe0;
    TStack_78.CurrentBitIndex = iStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
    TStack_78._28_4_ = iStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iVar22);
    iVar13 = (int)uVar15 >> 5;
    local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)CONCAT44(local_f0._4_4_,uVar15);
    local_c8 = param_1;
    iStack_a4 = iStack_ac;
    iStack_a0 = iVar22;
    local_90._16_8_ = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if (((int)uVar15 < 0) || (uVar20 = uVar15, iVar3 < (int)uVar15)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = (uint)local_f0;
    }
    uVar4 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar20 != uVar4) {
      puVar18 = *(undefined1 **)&(param_1->Elements).field_0x20;
      local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)CONCAT44(local_f0._4_4_,uVar4);
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(param_1->Elements).field_0x10;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar13;
        uVar24 = uVar24 + 0x20;
        iVar13 = iVar13 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14ae6e2d0;
        uVar15 = *(uint *)(puVar18 + lVar10 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_94 = (int)lVar10;
      uVar24 = local_94 + -1 + uVar24;
      if ((int)uVar4 < (int)uVar24) {
        uVar24 = uVar4;
      }
      local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)CONCAT44(local_f0._4_4_,uVar24);
    }
LAB_14ae6e2d0:
    local_res8 = SUB81(this,0);
    iVar22 = (uint)local_f0;
    while( true ) {
      uVar8 = local_90._16_8_;
      if (*(int *)&((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90._16_8_)->field_0x8 -
          *(int *)&((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_90._16_8_)->field_0x34 != (int)uStack_58) {
        local_f7 = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_f7);
      }
      if (((TStack_78.CurrentBitIndex == iVar22) &&
          (TStack_78.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)) &&
         ((TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
           *)uVar8 == param_1)) break;
      uVar15 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,
                          (FFrontendQueryKey *)
                          (*(longlong *)
                            (TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)uVar8 + (longlong)TStack_78.CurrentBitIndex * 0x28),local_res8,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
      if (uVar15 != 0xffffffff) {
        uVar24 = 0;
        if ((int)uVar15 < (param_2->Pairs).ArrayNum) {
          uVar24 = ~uVar15 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_2->Pairs).AllocatorInstance.Data;
        lVar10 = (longlong)(int)uVar15 * 0xe0;
        FVar23 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)pFVar5 + lVar10 + 0x20);
        if (FVar23 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          pFVar1 = (ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar23 + 0xb8);
          iVar3 = *(int *)pFVar1->InlineData;
          pFVar11 = (ForElementType<Metasound::FFrontendQueryEntry> *)(pFVar5 + lVar10 + 0xd0);
          pFVar19 = pFVar5 + lVar10 + 0xd8;
          if (0 < iVar3) {
            FVar25 = FVar23;
            if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar23 + 0xb0) !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar25 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar23 + 0xb0);
            }
            FVar16 = (ForElementType<Metasound::FFrontendQueryEntry>)
                     ((longlong)iVar3 * 0xb0 + (longlong)FVar25);
            local_f0 = (ForElementType<Metasound::FFrontendQueryEntry> *)(pFVar5 + lVar10 + 0xd0);
            local_d0 = pFVar5 + lVar10 + 0xd8;
            while( true ) {
              if (*(int *)pFVar1->InlineData != iVar3) {
                local_f6[0] = 0;
                `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_f6);
              }
              pFVar11 = local_f0;
              pFVar19 = local_d0;
              if (FVar25 == FVar16) break;
              (**(code **)(*(longlong *)this + 0x30))(this,FVar25,&local_e0);
              FVar25 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar25 + 0xb0);
            }
          }
          piVar2 = (int *)((longlong)FVar23 + 0xbc);
          FVar25 = *pFVar11;
          if (*piVar2 < 0) {
            if (FVar25 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar25 = FVar23;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar25,*(int *)pFVar19);
            pFVar1->InlineData[0] = '\0';
            pFVar1->InlineData[1] = '\0';
            pFVar1->InlineData[2] = '\0';
            pFVar1->InlineData[3] = '\0';
            if (*piVar2 != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0xb0,8,0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar23,0,piVar2)
              ;
            }
          }
          else {
            if (FVar25 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar25 = FVar23;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar25,*(int *)pFVar19);
            pFVar1->InlineData[0] = '\0';
            pFVar1->InlineData[1] = '\0';
            pFVar1->InlineData[2] = '\0';
            pFVar1->InlineData[3] = '\0';
          }
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
    ::Reset(param_1);
    iVar22 = local_e0.Pairs.ArrayNum;
    uVar12 = (ulonglong)local_e0.Pairs.ArrayNum;
    pTVar17 = (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
               *)(local_e0.Pairs.AllocatorInstance.Data + uVar12 * 0xe0);
    FVar14.Data = local_e0.Pairs.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar22) {
        `TCheckedPointerIterator<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *)FVar14.Data == pTVar17) break;
      TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
      ::Emplace<Metasound::FFrontendQueryKey_const_&>
                (param_1,(FFrontendQueryKey *)local_90,(bool *)FVar14.Data);
      uVar12 = local_e0.Pairs._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0xe0;
    }
    TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep>::Append
              ((TStepExecuterBase<Metasound::IFrontendQueryMultiMapStep> *)this,param_1,&local_e0,
               param_2);
    DestructItems<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,int>
              ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                *)local_e0.Pairs.AllocatorInstance.Data,local_e0.Pairs.ArrayNum);
    if ((TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *)local_e0.Pairs.AllocatorInstance.Data !=
        (TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
         *)0x0) {
      FMemory::Free(local_e0.Pairs.AllocatorInstance.Data);
    }
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

