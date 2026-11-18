// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// Execute @ 14ae6eb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FrontendQueryPrivate::FLimitStepExecuter::Execute
          (FLimitStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  FKeyForward FVar7;
  FFrontendQueryKey *this_00;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  ForElementType<Metasound::FFrontendQueryEntry> FVar17;
  FFrontendQueryKey *pFVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  char cVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStackY_1e8 [32];
  FKeyForward local_198;
  char local_197;
  char local_196;
  uint local_194;
  int local_190;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  FFrontendQueryKey *local_180;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_140;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_108;
  ulonglong local_48;
  
  iVar3 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_180 = (FFrontendQueryKey *)param_2;
  local_140 = param_1;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_197 = '\0';
  }
  else {
    local_197 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::LimitQueryStep::Execute");
  }
  bVar22 = CpuChannel->Enabled < 0;
  if (bVar22) {
    local_196 = '\0';
  }
  else {
    local_196 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FLimitStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId920,"MetaSound::LimitQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x398);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FLimitStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId920);
  }
  cVar13 = 0 < iVar3;
  cVar20 = !bVar22;
  if (*(longlong **)&this->field_0x8 != (longlong *)0x0) {
    local_190 = (**(code **)(**(longlong **)&this->field_0x8 + 8))();
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
    iStack_170 = 0;
    local_158 = 0;
    uStack_16c = 1;
    iStack_15c = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)pTVar19;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_170;
        local_158 = local_158 + 0x20;
        iStack_170 = iStack_170 + 1;
        iStack_15c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_14ae6eccd;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_16c = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_16c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_148 = (int)lVar10;
      iStack_15c = local_158 + -1 + local_148;
      if (iVar3 < iStack_15c) {
        iStack_15c = iVar3;
      }
    }
LAB_14ae6eccd:
    uVar14 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_150 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar21 = uVar14 & 0xffffffe0;
    TStack_130._padding_ = CONCAT44(uStack_16c,iStack_170);
    uStack_160 = 0xffffffff;
    TStack_130.CurrentBitIndex = iStack_15c;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_130._28_4_ = iStack_15c;
    TStack_130.BaseBitIndex = local_158;
    uStack_110 = CONCAT44(uStack_14c,iStack_150);
    local_194 = uVar14;
    local_188 = pTVar19;
    local_178 = param_1;
    local_168 = (undefined1 *)pTVar19;
    iStack_154 = iStack_15c;
    local_138 = param_1;
    TStack_130.Array = pTVar19;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar22)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_180;
    FVar7 = local_198;
    uVar4 = *(uint *)&(param_1->Elements).field_0x28;
    uVar6 = local_194;
    if (uVar14 != uVar4) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)pTVar19;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar21 = uVar21 + 0x20;
        iVar12 = iVar12 + 1;
        local_194 = uVar4;
        uVar6 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14ae6edf0;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_144 = (int)lVar10;
      local_194 = local_144 + -1 + uVar21;
      uVar6 = local_194;
      if ((int)uVar4 < (int)local_194) {
        local_194 = uVar4;
        uVar6 = uVar4;
      }
    }
LAB_14ae6edf0:
    do {
      pTVar8 = local_138;
      if (*(int *)&(local_138->Elements).field_0x8 - *(int *)&(local_138->Elements).field_0x34 !=
          (int)uStack_110) {
        local_198 = (FKeyForward)0x0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_198);
      }
      if (((TStack_130.CurrentBitIndex == uVar6) && (TStack_130.Array == pTVar19)) &&
         (cVar13 = local_197, cVar20 = local_196, pTVar8 == local_140)) break;
      pFVar18 = (FFrontendQueryKey *)
                (*(longlong *)&pTVar8->Elements + (longlong)TStack_130.CurrentBitIndex * 0x28);
      local_180 = pFVar18;
      uVar14 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         ((TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>
                           *)this_00,pFVar18,FVar7,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)FVar7);
      if (uVar14 != 0xffffffff) {
        uVar21 = 0;
        if ((int)uVar14 < (int)(this_00->Key)._padding_) {
          uVar21 = ~uVar14 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar10 = (this_00->Key)._padding_ + 0x20 + (longlong)(int)uVar14 * 0xe0;
        pTVar19 = local_188;
        if ((lVar10 != 0) && (local_190 < *(int *)(lVar10 + 0xb8))) {
          local_108.ArrayMax = 1;
          uVar14 = 0;
          local_108.AllocatorInstance.SecondaryData =
               (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
          local_108.ArrayNum = 0;
          if (0 < local_190) {
            do {
              pFVar18 = local_180;
              if (*(int *)(lVar10 + 0xb8) <= (int)uVar14) break;
              if (((int)uVar14 < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar11 = lVar10;
              if (*(longlong *)(lVar10 + 0xb0) != 0) {
                lVar11 = *(longlong *)(lVar10 + 0xb0);
              }
              FVar17 = (ForElementType<Metasound::FFrontendQueryEntry>)
                       ((ulonglong)uVar14 * 0xb0 + lVar11);
              FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_108;
              if (local_108.AllocatorInstance.SecondaryData !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = local_108.AllocatorInstance.SecondaryData;
              }
              if ((ulonglong)FVar9 <= (ulonglong)FVar17) {
                FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_108;
                if (local_108.AllocatorInstance.SecondaryData !=
                    (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                  FVar9 = local_108.AllocatorInstance.SecondaryData;
                }
                if (((ulonglong)FVar17 <
                     (ulonglong)((longlong)local_108.ArrayMax * 0xb0 + (longlong)FVar9)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (local_108.ArrayNum == local_108.ArrayMax) {
                local_108.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                               (0x8b0,&local_108.AllocatorInstance,&local_108.ArrayMax);
              }
              lVar11 = (longlong)local_108.ArrayNum;
              FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_108;
              if (local_108.AllocatorInstance.SecondaryData !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = local_108.AllocatorInstance.SecondaryData;
              }
              local_108.ArrayNum = local_108.ArrayNum + 1;
              FFrontendQueryEntry::FFrontendQueryEntry
                        ((FFrontendQueryEntry *)(lVar11 * 0xb0 + (longlong)FVar9),
                         (FFrontendQueryEntry *)FVar17);
              uVar14 = uVar14 + 1;
              pFVar18 = local_180;
            } while ((int)uVar14 < local_190);
          }
          FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
                  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                  ::Find((TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                          *)this_00,pFVar18);
          if (FVar9 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Value != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                ,0x141,L"");
            if (bVar22) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
LAB_14ae6f0b1:
            FVar17 = FVar9;
            if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar17 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar17,*(int *)((longlong)FVar9 + 0xb8));
            iVar3 = local_108.ArrayNum;
            piVar1 = (int *)((longlong)FVar9 + 0xbc);
            *(int *)((longlong)FVar9 + 0xb8) = local_108.ArrayNum;
            FVar17 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_108;
            if (local_108.AllocatorInstance.SecondaryData !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar17 = local_108.AllocatorInstance.SecondaryData;
            }
            if ((local_108.ArrayNum == 0) && (*piVar1 == 0)) {
              *piVar1 = 1;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0xb0,8,local_108.ArrayNum,*piVar1,
                         (ForElementType<Metasound::FFrontendQueryEntry> *)FVar9,local_108.ArrayNum,
                         piVar1);
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
              }
              ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                        ((void *)FVar9,(FFrontendQueryEntry *)FVar17,iVar3);
            }
          }
          else if (FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)&local_108)
          goto LAB_14ae6f0b1;
          FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_108;
          if (local_108.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar9 = local_108.AllocatorInstance.SecondaryData;
          }
          DestructItems<Metasound::FFrontendQueryEntry,int>
                    ((FFrontendQueryEntry *)FVar9,local_108.ArrayNum);
          pTVar19 = local_188;
          if (local_108.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
            pTVar19 = local_188;
          }
        }
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    } while( true );
  }
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar13 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// IsDependentOnPartitionComposition @ 14ae7a490

bool __thiscall
Metasound::FrontendQueryPrivate::FLimitStepExecuter::IsDependentOnPartitionComposition
          (FLimitStepExecuter *this)

{
  return true;
}

// Merge @ 14ae7d2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FrontendQueryPrivate::FLimitStepExecuter::Merge
          (FLimitStepExecuter *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  FFrontendQueryKey *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  uint uVar6;
  TLess<Metasound::FFrontendQueryKey_const_&> TVar7;
  FIncremental *pFVar8;
  undefined8 uVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  ForElementType<Metasound::FFrontendQueryEntry> FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  TLess<Metasound::FFrontendQueryKey_const_&> TVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  ForElementType<Metasound::FFrontendQueryEntry> FVar20;
  uint *puVar21;
  int iVar22;
  undefined1 *puVar23;
  FScriptContainerElement *pFVar24;
  ForElementType<Metasound::FFrontendQueryEntry> FVar25;
  char cVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auStack_178 [32];
  ForElementType<Metasound::FFrontendQueryEntry> local_158;
  ForElementType<Metasound::FFrontendQueryEntry> local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  TLess<Metasound::FFrontendQueryKey_const_&> local_128;
  char local_127;
  char local_126;
  uint local_124;
  int local_120;
  FIncremental *local_118;
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_110;
  FIncremental *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [20];
  uint uStack_bc;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  iVar22 = GCycleStatsShouldEmitNamedEvents;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_118 = param_1;
  local_110 = param_2;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::LimitQueryStep::Merge");
  }
  cVar16 = 0 < iVar22;
  bVar28 = CpuChannel->Enabled < 0;
  if (bVar28) {
    local_126 = '\0';
  }
  else {
    local_126 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FLimitStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId889,"MetaSound::LimitQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x379);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FLimitStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId889);
  }
  cVar26 = !bVar28;
  TStepExecuterBase<Metasound::IFrontendQueryLimitStep>::Remove
            ((TStepExecuterBase<Metasound::IFrontendQueryLimitStep> *)this,
             &param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  if (*(longlong **)&this->field_0x8 != (longlong *)0x0) {
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    iVar18 = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_120 = (**(code **)(**(longlong **)&this->field_0x8 + 8))();
    iVar22 = *(int *)&(param_1->ActiveKeys).Elements.field_0x28;
    puVar23 = &(param_1->ActiveKeys).Elements.field_0x10;
    uStack_fc = 1;
    local_e8 = 0;
    iStack_ec = local_e8;
    if (iVar22 != 0) {
      puVar21 = *(uint **)&(param_1->ActiveKeys).Elements.field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar23;
      }
      uVar17 = *puVar21;
      local_e8 = 0;
      iVar18 = 0;
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar18;
        local_e8 = local_e8 + 0x20;
        iVar18 = iVar18 + 1;
        iStack_ec = iVar22;
        if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14ae7d49d;
        uVar17 = puVar21[lVar12 + 1];
      }
      uStack_fc = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_fc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_d8 = (int)lVar12;
      iStack_ec = local_e8 + -1 + local_d8;
      if (iVar22 < iStack_ec) {
        iStack_ec = iVar22;
      }
    }
LAB_14ae7d49d:
    iStack_e0 = *(int *)&(param_1->ActiveKeys).Elements.field_0x8 -
                *(int *)&(param_1->ActiveKeys).Elements.field_0x34;
    uVar17 = *(uint *)&(param_1->ActiveKeys).Elements.field_0x28;
    uStack_f0 = 0xffffffff;
    uStack_bc = uStack_fc;
    local_d0._16_4_ = iVar18;
    uVar27 = uVar17 & 0xffffffe0;
    uStack_b0 = CONCAT44(iStack_ec,0xffffffff);
    iVar15 = (int)uVar17 >> 5;
    local_a8 = CONCAT44(iStack_ec,local_e8);
    uStack_a0 = CONCAT44(uStack_dc,iStack_e0);
    local_124 = uVar17;
    local_108 = param_1;
    iStack_100 = iVar18;
    local_f8 = puVar23;
    iStack_e4 = iStack_ec;
    local_d0._8_8_ = param_1;
    local_b8 = puVar23;
    if ((((int)uVar17 < 0) || (iVar22 < (int)uVar17)) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar28)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar8 = local_118;
    TVar7 = local_128;
    uVar3 = *(uint *)&(param_1->ActiveKeys).Elements.field_0x28;
    TVar14 = local_128;
    uVar6 = local_124;
    if (uVar17 != uVar3) {
      puVar4 = *(undefined1 **)&(param_1->ActiveKeys).Elements.field_0x20;
      puVar19 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar19 = puVar4;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar15;
        uVar27 = uVar27 + 0x20;
        iVar15 = iVar15 + 1;
        local_124 = uVar3;
        uVar6 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14ae7d5d0;
        uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_d4 = (int)lVar12;
      local_124 = local_d4 + -1 + uVar27;
      uVar6 = local_124;
      if ((int)uVar3 < (int)local_124) {
        local_124 = uVar3;
        uVar6 = uVar3;
      }
    }
LAB_14ae7d5d0:
    while( true ) {
      uVar9 = local_d0._8_8_;
      if (*(int *)&(((TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
                      *)local_d0._8_8_)->Elements).field_0x8 -
          *(int *)&(((TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
                      *)local_d0._8_8_)->Elements).field_0x34 != (int)uStack_a0) {
        local_128 = (TLess<Metasound::FFrontendQueryKey_const_&>)0x0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_128);
      }
      cVar26 = local_126;
      cVar16 = local_127;
      if (((uStack_b0._4_4_ == uVar6) && (local_b8 == puVar23)) && ((FIncremental *)uVar9 == pFVar8)
         ) break;
      pFVar1 = (FFrontendQueryKey *)
               (*(longlong *)
                 &((TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
                    *)uVar9)->Elements + (longlong)(int)uStack_b0._4_4_ * 0x28);
      uVar17 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&(pFVar8->ActiveSelection).Pairs,pFVar1,(FKeyForward)TVar7,TVar14);
      if (uVar17 != 0xffffffff) {
        iVar22 = (pFVar8->ActiveSelection).Pairs.ArrayNum;
        uVar27 = 0;
        if ((int)uVar17 < iVar22) {
          uVar27 = ~uVar17 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (local_158 = (ForElementType<Metasound::FFrontendQueryEntry>)(longlong)(int)uVar17,
           local_150 = (ForElementType<Metasound::FFrontendQueryEntry>)(longlong)iVar22,
           bVar28 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar24 = (pFVar8->ActiveSelection).Pairs.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 0xe0 + 0x20;
        if (pFVar24 != (FScriptContainerElement *)0x0) {
          FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find(local_110,pFVar1);
          if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)
                     TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                     ::Emplace<Metasound::FFrontendQueryKey_const_&>(local_110,pFVar1);
          }
          iVar18 = local_120 - *(int *)((longlong)FVar10 + 0xb8);
          iVar22 = *(int *)(pFVar24 + 0xb8);
          if (iVar18 < *(int *)(pFVar24 + 0xb8)) {
            iVar22 = iVar18;
          }
          if (0 < iVar22) {
            TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
            ::Emplace<Metasound::FFrontendQueryKey_const_&>
                      (&local_98,(FFrontendQueryKey *)local_d0,(bool *)pFVar1);
            for (iVar22 = 0;
                (TVar14 = local_128, -1 < iVar22 && (iVar22 < *(int *)(pFVar24 + 0xb8)));
                iVar22 = iVar22 + 1) {
              if (iVar22 < 0) {
                local_158 = (ForElementType<Metasound::FFrontendQueryEntry>)(longlong)iVar22;
                local_150 = (ForElementType<Metasound::FFrontendQueryEntry>)
                            (longlong)*(int *)(pFVar24 + 0xb8);
                bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar28) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              FVar20 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0);
              pFVar13 = pFVar24;
              if (*(FScriptContainerElement **)(pFVar24 + 0xb0) != (FScriptContainerElement *)0x0) {
                pFVar13 = *(FScriptContainerElement **)(pFVar24 + 0xb0);
              }
              FVar25 = (ForElementType<Metasound::FFrontendQueryEntry>)
                       ((longlong)iVar22 * 0xb0 + (longlong)pFVar13);
              FVar11 = FVar10;
              if (FVar20 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar11 = FVar20;
              }
              if ((ulonglong)FVar11 <= (ulonglong)FVar25) {
                FVar11 = FVar10;
                if (FVar20 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                  FVar11 = FVar20;
                }
                if ((ulonglong)FVar25 <
                    (ulonglong)
                    ((longlong)*(int *)((longlong)FVar10 + 0xbc) * 0xb0 + (longlong)FVar11)) {
                  local_140 = (longlong)*(int *)((longlong)FVar10 + 0xb8);
                  local_138 = 0xb0;
                  local_150 = FVar10;
                  if (FVar20 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                    local_150 = FVar20;
                  }
                  local_158 = FVar25;
                  local_148 = (longlong)*(int *)((longlong)FVar10 + 0xbc);
                  bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar28) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
              }
              iVar18 = *(int *)((longlong)FVar10 + 0xb8);
              if (iVar18 == *(int *)((longlong)FVar10 + 0xbc)) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                                   (0x8b0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar10,
                                    (int *)((longlong)FVar10 + 0xbc));
              }
              *(int *)((longlong)FVar10 + 0xb8) = iVar18 + 1;
              FVar20 = FVar10;
              if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar10 + 0xb0) !=
                  (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
                FVar20 = *(ForElementType<Metasound::FFrontendQueryEntry> *)
                          ((longlong)FVar10 + 0xb0);
              }
              FFrontendQueryEntry::FFrontendQueryEntry
                        ((FFrontendQueryEntry *)((longlong)iVar18 * 0xb0 + (longlong)FVar20),
                         (FFrontendQueryEntry *)FVar25);
            }
          }
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_d0 + 0x10));
      puVar23 = &(pFVar8->ActiveKeys).Elements.field_0x10;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  if (cVar26 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar16 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

