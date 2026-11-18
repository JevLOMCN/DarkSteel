// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Execute @ 14ae70490

void __thiscall
Metasound::FrontendQueryPrivate::FTransformStepExecuter::Execute
          (FTransformStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  uint *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  FKeyForward local_res8;
  undefined1 local_c7;
  undefined1 local_c6 [2];
  uint local_c4;
  ForElementType<unsigned_int> local_c0;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar5 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::TransformQueryStep::Execute");
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FTransformStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId610,"MetaSound::TransformQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x262);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FTransformStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId610);
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    iStack_b0 = 0;
    local_98 = 0;
    local_c0 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
    uStack_ac = 1;
    iStack_9c = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_c0;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        lVar10 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14ae705dd;
        uVar13 = puVar15[lVar10 + 1];
      }
      uStack_ac = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_88 = (int)lVar10;
      iStack_9c = local_98 + -1 + local_88;
      if (iVar3 < iStack_9c) {
        iStack_9c = iVar3;
      }
    }
LAB_14ae705dd:
    iStack_90 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar13 = *(uint *)&(param_1->Elements).field_0x28;
    uStack_a0 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_9c;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uVar16 = uVar13 & 0xffffffe0;
    iVar11 = (int)uVar13 >> 5;
    TStack_78._28_4_ = iStack_9c;
    TStack_78.BaseBitIndex = local_98;
    uStack_58 = CONCAT44(uStack_8c,iStack_90);
    local_c4 = uVar13;
    local_b8 = param_1;
    local_a8 = (undefined1 *)local_c0;
    iStack_94 = iStack_9c;
    local_80 = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar6 = local_c0;
    uVar9 = *(int *)((longlong)local_c0 + 0x18);
    if (uVar13 != uVar9) {
      FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_c0;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = uVar9;
        local_c4 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14ae706f2;
        uVar13 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar10 * 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_84 = (int)lVar10;
      uVar13 = local_84 + -1 + uVar16;
      local_c4 = uVar13;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
        local_c4 = uVar9;
      }
    }
LAB_14ae706f2:
    local_res8 = SUB81(this,0);
    while( true ) {
      pTVar7 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_c7 = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_c7);
      }
      if (((TStack_78.CurrentBitIndex == uVar13) &&
          ((ForElementType<unsigned_int>)TStack_78.Array == FVar6)) && (pTVar7 == param_1)) break;
      uVar16 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,
                          (FFrontendQueryKey *)
                          (*(longlong *)&pTVar7->Elements +
                          (longlong)TStack_78.CurrentBitIndex * 0x28),local_res8,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
      if (uVar16 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar16 < (param_2->Pairs).ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar17 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar16 * 0xe0 + 0x20;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          pFVar1 = pFVar17 + 0xb8;
          iVar3 = *(int *)pFVar1;
          if (0 < iVar3) {
            if (*(FScriptContainerElement **)(pFVar17 + 0xb0) != (FScriptContainerElement *)0x0) {
              pFVar17 = *(FScriptContainerElement **)(pFVar17 + 0xb0);
            }
            pFVar12 = pFVar17 + (longlong)iVar3 * 0xb0;
            while( true ) {
              if (*(int *)pFVar1 != iVar3) {
                local_c6[0] = 0;
                `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_c6);
              }
              uVar13 = local_c4;
              if (pFVar17 == pFVar12) break;
              (**(code **)(**(longlong **)&this->field_0x8 + 8))
                        (*(longlong **)&this->field_0x8,pFVar17 + 0x10);
              pFVar17 = pFVar17 + 0xb0;
            }
          }
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

