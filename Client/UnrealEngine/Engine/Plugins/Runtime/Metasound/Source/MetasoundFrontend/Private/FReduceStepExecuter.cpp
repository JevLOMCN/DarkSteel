// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// Execute @ 14ae6f210

void __thiscall
Metasound::FrontendQueryPrivate::FReduceStepExecuter::Execute
          (FReduceStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  undefined1 *puVar1;
  FFrontendQueryKey *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  FKeyForward local_res8;
  undefined1 local_c7 [7];
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_c0;
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
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar6 = GCycleStatsShouldEmitNamedEvents;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::ReduceQueryStep::Execute");
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FReduceStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId746,"MetaSound::ReduceQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x2ea);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FReduceStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId746);
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    iVar4 = *(int *)&(param_1->Elements).field_0x28;
    iStack_b8 = 0;
    local_a0 = 0;
    puVar1 = &(param_1->Elements).field_0x10;
    uStack_b4 = 1;
    iStack_a4 = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar12 = *puVar15;
      while (uVar12 == 0) {
        lVar10 = (longlong)iStack_b8;
        local_a0 = local_a0 + 0x20;
        iStack_b8 = iStack_b8 + 1;
        iStack_a4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ae6f35d;
        uVar12 = puVar15[lVar10 + 1];
      }
      uStack_b4 = -uVar12 & uVar12;
      uVar3 = (ulonglong)uStack_b4 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_90 = (int)lVar10;
      iStack_a4 = local_a0 + -1 + local_90;
      if (iVar4 < iStack_a4) {
        iStack_a4 = iVar4;
      }
    }
LAB_14ae6f35d:
    uVar12 = *(uint *)&(param_1->Elements).field_0x28;
    iStack_98 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
    uVar16 = uVar12 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
    uStack_a8 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_a4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar12 >> 5;
    TStack_78._28_4_ = iStack_a4;
    TStack_78.BaseBitIndex = local_a0;
    uStack_58 = CONCAT44(uStack_94,iStack_98);
    local_c0 = param_1;
    local_b0 = puVar1;
    iStack_9c = iStack_a4;
    local_80 = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar12 != uVar9) {
      puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar12 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14ae6f45f;
        uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_8c = (int)lVar10;
      uVar12 = local_8c + -1 + uVar16;
      if ((int)uVar9 < (int)uVar12) {
        uVar12 = uVar9;
      }
    }
LAB_14ae6f45f:
    local_res8 = SUB81(this,0);
    while( true ) {
      pTVar7 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_c7[0] = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_c7);
      }
      if (((TStack_78.CurrentBitIndex == uVar12) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == param_1)) break;
      pFVar2 = (FFrontendQueryKey *)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_78.CurrentBitIndex * 0x28);
      uVar16 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&param_2->Pairs,pFVar2,local_res8,
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
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar16 * 0xe0 + 0x20;
        if ((pFVar14 != (FScriptContainerElement *)0x0) && (0 < *(int *)(pFVar14 + 0xb8))) {
          (**(code **)(**(longlong **)&this->field_0x8 + 8))(*(longlong **)&this->field_0x8,pFVar2);
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// IsDependentOnPartitionComposition @ 14ae7a4a0

bool __thiscall
Metasound::FrontendQueryPrivate::FReduceStepExecuter::IsDependentOnPartitionComposition
          (FReduceStepExecuter *this)

{
  return true;
}

// Merge @ 14ae7d900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FrontendQueryPrivate::FReduceStepExecuter::Merge
          (FReduceStepExecuter *this,FIncremental *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  FFrontendQueryKey *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FIncremental *pFVar5;
  code *pcVar6;
  FKeyForward FVar7;
  FIncremental *pFVar8;
  undefined8 this_00;
  FIncremental *pFVar9;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *this_01;
  longlong lVar10;
  ForElementType<Metasound::FFrontendQueryEntry> FVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  char cVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStackY_298 [32];
  FKeyForward local_258;
  char local_257;
  char local_256;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_250;
  FIncremental *local_248;
  FIncremental *local_240;
  int iStack_238;
  uint uStack_234;
  undefined1 *local_230;
  undefined4 uStack_228;
  int iStack_224;
  int local_220;
  int iStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  undefined1 local_208 [24];
  FIncremental *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_1c0;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_100;
  ulonglong local_40;
  
  iVar3 = GCycleStatsShouldEmitNamedEvents;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_248 = param_1;
  local_208._8_8_ = param_2;
  local_208._16_8_ = this;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_257 = '\0';
  }
  else {
    local_257 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::ReduceQueryStep::Merge");
  }
  bVar20 = CpuChannel->Enabled < 0;
  if (bVar20) {
    local_256 = '\0';
  }
  else {
    local_256 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FReduceStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId714,"MetaSound::ReduceQueryStep::Merge",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x2ca);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FReduceStepExecuter::Merge(Metasound::FFrontendQueryStep::FIncremental&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId714);
  }
  TStepExecuterBase<Metasound::IFrontendQueryReduceStep>::Remove
            ((TStepExecuterBase<Metasound::IFrontendQueryReduceStep> *)this,
             &param_1->ActiveRemovalKeys,&param_1->ActiveRemovalSelection,param_2);
  cVar13 = 0 < iVar3;
  cVar18 = !bVar20;
  if (*(longlong *)&this->field_0x8 != 0) {
    iVar3 = *(int *)&(param_1->ActiveKeys).Elements.field_0x28;
    iStack_238 = 0;
    local_220 = 0;
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->ActiveKeys).Elements.field_0x10;
    uStack_234 = 1;
    iStack_224 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(param_1->ActiveKeys).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)pTVar17;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_238;
        local_220 = local_220 + 0x20;
        iStack_238 = iStack_238 + 1;
        iStack_224 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_238) goto LAB_14ae7da7d;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_234 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_234 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_210 = (int)lVar10;
      iStack_224 = local_220 + -1 + local_210;
      if (iVar3 < iStack_224) {
        iStack_224 = iVar3;
      }
    }
LAB_14ae7da7d:
    uVar14 = *(uint *)&(param_1->ActiveKeys).Elements.field_0x28;
    iStack_218 = *(int *)&(param_1->ActiveKeys).Elements.field_0x8 -
                 *(int *)&(param_1->ActiveKeys).Elements.field_0x34;
    uVar19 = uVar14 & 0xffffffe0;
    TStack_1e8._padding_ = CONCAT44(uStack_234,iStack_238);
    uStack_228 = 0xffffffff;
    TStack_1e8.CurrentBitIndex = iStack_224;
    TStack_1e8.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar14 >> 5;
    TStack_1e8._28_4_ = iStack_224;
    TStack_1e8.BaseBitIndex = local_220;
    uStack_1c8 = CONCAT44(uStack_214,iStack_218);
    local_250 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)CONCAT44(local_250._4_4_,uVar14);
    local_240 = param_1;
    local_230 = (undefined1 *)pTVar17;
    iStack_21c = iStack_224;
    local_1f0 = param_1;
    TStack_1e8.Array = pTVar17;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar8 = local_248;
    FVar7 = local_258;
    uVar4 = *(uint *)&(param_1->ActiveKeys).Elements.field_0x28;
    if (uVar14 != uVar4) {
      puVar15 = *(undefined1 **)&(param_1->ActiveKeys).Elements.field_0x20;
      local_250 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)CONCAT44(local_250._4_4_,uVar4);
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)pTVar17;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar19 = uVar19 + 0x20;
        iVar12 = iVar12 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14ae7db90;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_20c = (int)lVar10;
      uVar19 = local_20c + -1 + uVar19;
      if ((int)uVar4 < (int)uVar19) {
        uVar19 = uVar4;
      }
      local_250 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)CONCAT44(local_250._4_4_,uVar19);
    }
LAB_14ae7db90:
    iVar3 = (int)local_250;
    while( true ) {
      pFVar9 = local_1f0;
      if (*(int *)&(local_1f0->ActiveKeys).Elements.field_0x8 -
          *(int *)&(local_1f0->ActiveKeys).Elements.field_0x34 != (int)uStack_1c8) {
        local_258 = (FKeyForward)0x0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
      }
      if (((TStack_1e8.CurrentBitIndex == iVar3) && (TStack_1e8.Array == pTVar17)) &&
         (cVar13 = local_257, cVar18 = local_256, pFVar9 == pFVar8)) break;
      pFVar1 = (FFrontendQueryKey *)
               (*(longlong *)&(pFVar9->ActiveKeys).Elements +
               (longlong)TStack_1e8.CurrentBitIndex * 0x28);
      uVar14 = Algo::
               BinarySearchBy<TArray<TTuple<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>,TSizedDefaultAllocator<32>_>,Metasound::FFrontendQueryKey,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>::FKeyForward,TLess<Metasound::FFrontendQueryKey_const_&>_>
                         (&(pFVar8->ActiveSelection).Pairs,pFVar1,FVar7,
                          (TLess<Metasound::FFrontendQueryKey_const_&>)FVar7);
      if (uVar14 != 0xffffffff) {
        uVar19 = 0;
        if ((int)uVar14 < (pFVar8->ActiveSelection).Pairs.ArrayNum) {
          uVar19 = ~uVar14 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = local_208._8_8_;
        local_250 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)((pFVar8->ActiveSelection).Pairs.AllocatorInstance.Data +
                       (longlong)(int)uVar14 * 0xe0 + 0x20);
        if ((local_250 !=
             (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)0x0) && (0 < local_250->ArrayNum)) {
          pFVar9 = (FIncremental *)
                   TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   ::Find((TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                           *)local_208._8_8_,pFVar1);
          if (pFVar9 == (FIncremental *)0x0) {
            pFVar9 = (FIncremental *)
                     TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                     ::Emplace<Metasound::FFrontendQueryKey_const_&>
                               ((TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                                 *)this_00,pFVar1);
          }
          local_1c0.AllocatorInstance.SecondaryData =
               (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
          pFVar5 = (FIncremental *)(pFVar9->ActiveRemovalSelection).Pairs.AllocatorInstance.Data;
          iVar12 = (pFVar9->ActiveRemovalSelection).Pairs.ArrayNum;
          local_248 = pFVar9;
          if (pFVar5 != (FIncremental *)0x0) {
            local_248 = pFVar5;
          }
          local_1c0.ArrayNum = iVar12;
          if (iVar12 == 0) {
            local_1c0.ArrayMax = 1;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                      (0xb0,8,iVar12,0,&local_1c0.AllocatorInstance,iVar12,&local_1c0.ArrayMax);
            FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_1c0;
            if (local_1c0.AllocatorInstance.SecondaryData !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar11 = local_1c0.AllocatorInstance.SecondaryData;
            }
            ConstructItems<Metasound::FFrontendQueryEntry,Metasound::FFrontendQueryEntry,int>
                      ((void *)FVar11,(FFrontendQueryEntry *)local_248,iVar12);
          }
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::
          Append<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                    ((TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar9,local_250);
          (**(code **)(**(longlong **)(local_208._16_8_ + 8) + 8))
                    (*(longlong **)(local_208._16_8_ + 8),pFVar1,pFVar9);
          FrontendQueryPrivate::Difference
                    (&local_100,&local_1c0,
                     (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      *)pFVar9);
          iVar12 = local_100.ArrayNum;
          if (0 < iVar12) {
            this_01 = TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                      ::Find(&pFVar8->ActiveRemovalSelection,pFVar1);
            if (this_01 ==
                (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
              this_01 = TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                        ::Emplace<Metasound::FFrontendQueryKey_const_&>
                                  (&pFVar8->ActiveRemovalSelection,pFVar1);
            }
            TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            ::
            Append<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      (this_01,&local_100);
            TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
            ::Emplace<Metasound::FFrontendQueryKey_const_&>
                      (&pFVar8->ActiveRemovalKeys,(FFrontendQueryKey *)local_208,(bool *)pFVar1);
            iVar12 = local_100.ArrayNum;
          }
          FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_100;
          if (local_100.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar11 = local_100.AllocatorInstance.SecondaryData;
          }
          DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)FVar11,iVar12);
          if (local_100.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
          }
          FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_1c0;
          if (local_1c0.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar11 = local_1c0.AllocatorInstance.SecondaryData;
          }
          DestructItems<Metasound::FFrontendQueryEntry,int>
                    ((FFrontendQueryEntry *)FVar11,local_1c0.ArrayNum);
          if (local_1c0.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FMemory::Free((void *)local_1c0.AllocatorInstance.SecondaryData);
          }
        }
      }
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar8->ActiveKeys).Elements.field_0x10;
    }
  }
  if (cVar18 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar13 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

