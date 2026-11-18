// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Execute @ 14ae6e5b0

void __thiscall
Metasound::FrontendQueryPrivate::FFilterStepExecuter::Execute
          (FFilterStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  void *_Dst;
  ForElementType<Metasound::FFrontendQueryEntry> FVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  uint uVar17;
  bool bVar18;
  FKeyForward local_res8;
  undefined1 local_e7 [3];
  uint local_e4;
  longlong *local_e0;
  uint local_d8;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
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
  code *local_90;
  longlong local_88;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar3 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::FilterQueryStep::Execute");
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FFilterStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId776,"MetaSound::FilterQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x308);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FFilterStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId776);
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    iVar10 = *(int *)&(param_1->Elements).field_0x28;
    iStack_c0 = 0;
    local_a8 = 0;
    pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
    uStack_bc = 1;
    iStack_ac = 0;
    if (iVar10 != 0) {
      puVar14 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)pTVar16;
      }
      uVar12 = *puVar14;
      while (uVar12 == 0) {
        lVar8 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14ae6e6fd;
        uVar12 = puVar14[lVar8 + 1];
      }
      uStack_bc = -uVar12 & uVar12;
      uVar1 = (ulonglong)uStack_bc * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_98 = (int)lVar8;
      iStack_ac = local_a8 + -1 + local_98;
      if (iVar10 < iStack_ac) {
        iStack_ac = iVar10;
      }
    }
LAB_14ae6e6fd:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_a0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar17 = uVar12 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
    uStack_b0 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar12 >> 5;
    TStack_78._28_4_ = iStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iStack_a0);
    local_e4 = uVar12;
    local_d0 = pTVar16;
    local_c8 = param_1;
    local_b8 = (undefined1 *)pTVar16;
    iStack_a4 = iStack_ac;
    local_80 = param_1;
    TStack_78.Array = pTVar16;
    if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar7) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = (undefined1 *)pTVar16;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar11;
        uVar17 = uVar17 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar7;
        local_e4 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14ae6e813;
        uVar12 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_94 = (int)lVar8;
      uVar12 = local_94 + -1 + uVar17;
      local_e4 = uVar12;
      if ((int)uVar7 < (int)uVar12) {
        uVar12 = uVar7;
        local_e4 = uVar7;
      }
    }
LAB_14ae6e813:
    local_res8 = SUB81(this,0);
    while( true ) {
      pTVar4 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_e7[0] = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e7);
      }
      if (((TStack_78.CurrentBitIndex == uVar12) && (TStack_78.Array == pTVar16)) &&
         (pTVar4 == param_1)) break;
      uVar17 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,
                          (FFrontendQueryKey *)
                          (*(longlong *)&pTVar4->Elements +
                          (longlong)TStack_78.CurrentBitIndex * 0x28),local_res8,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)local_res8);
      if (uVar17 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar17 < (param_2->Pairs).ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar15 = (ForElementType<Metasound::FFrontendQueryEntry>)
                 ((longlong)(param_2->Pairs).AllocatorInstance.Data +
                 (longlong)(int)uVar17 * 0xe0 + 0x20);
        pTVar16 = local_d0;
        if (FVar15 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          for (uVar17 = 0;
              (pTVar16 = local_d0, uVar12 = local_e4, -1 < (int)uVar17 &&
              ((int)uVar17 <
               *(int *)((ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar15 + 0xb8))
                       ->InlineData)); uVar17 = uVar17 + 1) {
            local_e0 = *(longlong **)&this->field_0x8;
            local_90 = *(code **)(*local_e0 + 8);
            local_d8 = ~uVar17;
            uVar12 = local_d8 >> 0x1f;
            if (((int)uVar17 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar9 = FVar15;
            if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar15 + 0xb0) !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar15 + 0xb0);
            }
            local_88 = (longlong)(int)uVar17 * 0xb0;
            cVar6 = (*local_90)(local_e0,(longlong)FVar9 + local_88);
            if (cVar6 == '\0') {
              uVar7 = 0;
              if ((int)uVar17 < *(int *)((longlong)FVar15 + 0xb8)) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar9 = FVar15;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar15 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar15 + 0xb0)
                ;
              }
              _Dst = (void *)(local_88 + (longlong)FVar9);
              local_e0 = (longlong *)(ulonglong)*(byte *)((longlong)_Dst + 0xa0);
              if ((&DAT_00000004 < local_e0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[(longlong)local_e0])((longlong)_Dst + 0x10);
              iVar10 = local_d8 + *(int *)((longlong)FVar15 + 0xb8);
              if (iVar10 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + 0xb0),(longlong)iVar10 * 0xb0);
              }
              *(int *)((longlong)FVar15 + 0xb8) = *(int *)((longlong)FVar15 + 0xb8) + -1;
              UE::Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0xb0,8,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar15,
                         *(int *)((longlong)FVar15 + 0xb8),(int *)((longlong)FVar15 + 0xbc));
              uVar17 = uVar17 - 1;
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
  if (0 < iVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

