// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Execute @ 14ae6f5c0

void __thiscall
Metasound::FrontendQueryPrivate::FScoreStepExecuter::Execute
          (FScoreStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  uint *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined4 uVar19;
  FKeyForward local_res8;
  undefined1 local_c7;
  undefined1 local_c6 [2];
  uint local_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
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
  
  iVar6 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::ScoreQueryStep::Execute");
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FScoreStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId803,"MetaSound::ScoreQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x323);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FScoreStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId803);
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    iVar2 = *(int *)&(param_1->Elements).field_0x28;
    iStack_b0 = 0;
    local_98 = 0;
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
    uStack_ac = 1;
    iStack_9c = 0;
    if (iVar2 != 0) {
      puVar14 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)pTVar15;
      }
      uVar11 = *puVar14;
      while (uVar11 == 0) {
        lVar9 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14ae6f70d;
        uVar11 = puVar14[lVar9 + 1];
      }
      uStack_ac = -uVar11 & uVar11;
      uVar1 = (ulonglong)uStack_ac * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_88 = (int)lVar9;
      iStack_9c = local_98 + -1 + local_88;
      if (iVar2 < iStack_9c) {
        iStack_9c = iVar2;
      }
    }
LAB_14ae6f70d:
    uVar11 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_90 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar16 = uVar11 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
    uStack_a0 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_9c;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar11 >> 5;
    TStack_78._28_4_ = iStack_9c;
    TStack_78.BaseBitIndex = local_98;
    uStack_58 = CONCAT44(uStack_8c,iStack_90);
    local_c4 = uVar11;
    local_c0 = pTVar15;
    local_b8 = param_1;
    local_a8 = (undefined1 *)pTVar15;
    iStack_94 = iStack_9c;
    local_80 = param_1;
    TStack_78.Array = pTVar15;
    if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar11 != uVar3) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)pTVar15;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar10;
        uVar16 = uVar16 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = uVar3;
        local_c4 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14ae6f812;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_84 = (int)lVar9;
      uVar11 = local_84 + -1 + uVar16;
      local_c4 = uVar11;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
        local_c4 = uVar3;
      }
    }
LAB_14ae6f812:
    local_res8 = SUB81(this,0);
    while( true ) {
      pTVar7 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_c7 = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_c7);
      }
      if (((TStack_78.CurrentBitIndex == uVar11) && (TStack_78.Array == pTVar15)) &&
         (pTVar7 == param_1)) break;
      uVar16 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,
                          (FFrontendQueryKey *)
                          (*(longlong *)&pTVar7->Elements +
                          (longlong)TStack_78.CurrentBitIndex * 0x28),local_res8,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
      if (uVar16 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar16 < (param_2->Pairs).ArrayNum) {
          uVar11 = ~uVar16 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->Pairs).AllocatorInstance.Data;
        lVar9 = (longlong)(int)uVar16 * 0xe0;
        pFVar17 = pFVar4 + lVar9 + 0x20;
        pTVar15 = local_c0;
        uVar11 = local_c4;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          iVar2 = *(int *)(pFVar4 + lVar9 + 0xd8);
          if (*(FScriptContainerElement **)(pFVar4 + lVar9 + 0xd0) != (FScriptContainerElement *)0x0
             ) {
            pFVar17 = *(FScriptContainerElement **)(pFVar4 + lVar9 + 0xd0);
          }
          pFVar12 = pFVar17 + (longlong)iVar2 * 0xb0;
          while( true ) {
            if (*(int *)(pFVar4 + lVar9 + 0xd8) != iVar2) {
              local_c6[0] = 0;
              `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_c6);
            }
            pTVar15 = local_c0;
            uVar11 = local_c4;
            if (pFVar17 == pFVar12) break;
            uVar19 = (**(code **)(**(longlong **)&this->field_0x8 + 8))
                               (*(longlong **)&this->field_0x8,pFVar17);
            *(undefined4 *)(pFVar17 + 0xa8) = uVar19;
            pFVar17 = pFVar17 + 0xb0;
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
  if (0 < iVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

