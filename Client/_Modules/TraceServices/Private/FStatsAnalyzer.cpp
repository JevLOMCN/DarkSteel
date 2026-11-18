// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 7

// FStatsAnalyzer @ 14d3cd2e0

FStatsAnalyzer * __thiscall
TraceServices::FStatsAnalyzer::FStatsAnalyzer
          (FStatsAnalyzer *this,IAnalysisSession *param_1,IEditableCounterProvider *param_2)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FStatsAnalyzer_TraceServices__6B_;
  *(undefined8 *)&this->EditableCountersMap = 0;
  *(undefined8 *)&(this->EditableCountersMap).field_0x8 = 0;
  *(undefined8 *)&(this->EditableCountersMap).field_0x20 = 0;
  this->EditableCounterProvider = param_2;
  *(undefined4 *)&(this->EditableCountersMap).field_0x28 = 0;
  *(undefined4 *)&(this->EditableCountersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EditableCountersMap).field_0x34 = 0;
  *(undefined4 *)&(this->EditableCountersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EditableCountersMap).field_0x40 = 0;
  *(undefined4 *)&(this->EditableCountersMap).field_0x48 = 0;
  *(undefined8 *)&this->Int64ResetEveryFrameCountersMap = 0;
  *(undefined8 *)&(this->Int64ResetEveryFrameCountersMap).field_0x8 = 0;
  *(undefined8 *)&(this->Int64ResetEveryFrameCountersMap).field_0x20 = 0;
  *(undefined4 *)&(this->Int64ResetEveryFrameCountersMap).field_0x28 = 0;
  *(undefined4 *)&(this->Int64ResetEveryFrameCountersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->Int64ResetEveryFrameCountersMap).field_0x34 = 0;
  *(undefined4 *)&(this->Int64ResetEveryFrameCountersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Int64ResetEveryFrameCountersMap).field_0x40 = 0;
  *(undefined4 *)&(this->Int64ResetEveryFrameCountersMap).field_0x48 = 0;
  *(undefined8 *)&this->FloatResetEveryFrameCountersMap = 0;
  *(undefined8 *)&(this->FloatResetEveryFrameCountersMap).field_0x8 = 0;
  *(undefined8 *)&(this->FloatResetEveryFrameCountersMap).field_0x20 = 0;
  *(undefined4 *)&(this->FloatResetEveryFrameCountersMap).field_0x28 = 0;
  *(undefined4 *)&(this->FloatResetEveryFrameCountersMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatResetEveryFrameCountersMap).field_0x34 = 0;
  *(undefined4 *)&(this->FloatResetEveryFrameCountersMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FloatResetEveryFrameCountersMap).field_0x40 = 0;
  *(undefined4 *)&(this->FloatResetEveryFrameCountersMap).field_0x48 = 0;
  *(undefined8 *)&this->ThreadStatesMap = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x34 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ThreadStatesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ThreadStatesMap).field_0x48 = 0;
  return this;
}

// operator() @ 14d3d19c0

void __thiscall
`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l6::<lambda_2>::operator()
          (void *this,double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  if (**(char **)((longlong)this + 8) == '\0') {
    if (param_2 != 0.0) goto LAB_14d3d1a18;
LAB_14d3d19f9:
    dVar2 = **(double **)((longlong)this + 0x18);
    if (dVar2 == 0.0) goto LAB_14d3d1a18;
    dVar1 = **(double **)((longlong)this + 0x10);
  }
  else {
    if (param_2 == 0.0) goto LAB_14d3d19f9;
    **(char **)((longlong)this + 8) = '\0';
    dVar2 = 0.0;
    dVar1 = param_1;
  }
  (**(code **)(**(longlong **)this + 0x48))(*(longlong **)this,dVar1,dVar2);
LAB_14d3d1a18:
  **(double **)((longlong)this + 0x10) = param_1;
  **(double **)((longlong)this + 0x18) = param_2;
  return;
}

// CreateFrameCounters @ 14d3d69c0

void __thiscall TraceServices::FStatsAnalyzer::CreateFrameCounters(FStatsAnalyzer *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  FString *pFVar13;
  undefined8 uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_248;
  FLLMScope local_240 [2];
  IAnalysisSession *local_238;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *local_230;
  int iStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  int iStack_214;
  int local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  FMemScope local_1d0;
  FString local_1c8;
  FString local_1b8;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  code *local_118;
  longlong **local_110;
  code *local_108;
  longlong **local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  FString local_b8;
  FString local_a8 [2];
  undefined4 local_7c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name323,L"Insights/FStatsAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_240,LLMScope_Name323,false,None,Default,true);
  FMemScope::FMemScope(&local_1d0,&LLMScope_Name323,true);
  local_238 = this->Session;
  (**(code **)((longlong)*local_238 + 0xa0))(local_238);
  puVar2 = &(this->FloatResetEveryFrameCountersMap).field_0x10;
  iVar3 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
  local_230 = &this->FloatResetEveryFrameCountersMap;
  iStack_228 = 0;
  local_248 = 1;
  local_210 = 0;
  uStack_224 = 1;
  iStack_214 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->FloatResetEveryFrameCountersMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uStack_224 = *puVar20;
    while (uStack_224 == 0) {
      lVar15 = (longlong)iStack_228;
      local_210 = local_210 + 0x20;
      iStack_228 = iStack_228 + 1;
      uStack_224 = 1;
      iStack_214 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228) goto LAB_14d3d6aef;
      uStack_224 = puVar20[lVar15 + 1];
    }
    uStack_224 = -uStack_224 & uStack_224;
    uVar1 = (ulonglong)uStack_224 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_200 = (int)lVar15;
    iStack_214 = local_210 + -1 + local_200;
    if (iVar3 < iStack_214) {
      iStack_214 = iVar3;
    }
  }
LAB_14d3d6aef:
  uVar17 = *(uint *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
  uStack_20c = local_7c;
  iStack_208 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x8 -
               *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x34;
  uVar21 = uVar17 & 0xffffffe0;
  uStack_218 = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uStack_224,iStack_228);
  TStack_170.CurrentBitIndex = iStack_214;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_170._28_4_ = local_7c;
  TStack_170.BaseBitIndex = local_210;
  uStack_150 = CONCAT44(uStack_204,iStack_208);
  local_220 = puVar2;
  local_178 = local_230;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
  if (uVar17 != uVar4) {
    puVar19 = *(undefined1 **)&(this->FloatResetEveryFrameCountersMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d3d6c10;
      uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1fc = (int)lVar15;
    uVar17 = local_1fc + -1 + uVar21;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14d3d6c10:
  uVar22 = (undefined4)__real_7ff0000000000000;
  uVar23 = (undefined4)__real_fff0000000000000;
  while( true ) {
    pTVar6 = local_178;
    if (*(int *)&local_178->field_0x8 - *(int *)&local_178->field_0x34 != (int)uStack_150) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_170.CurrentBitIndex == uVar17) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &this->FloatResetEveryFrameCountersMap)) break;
    plVar10 = (longlong *)
              (**(code **)((longlong)*this->EditableCounterProvider + 0x20))
                        (this->EditableCounterProvider,
                         *(undefined8 *)
                          (*(longlong *)pTVar6 + 8 + (longlong)TStack_170.CurrentBitIndex * 0x18));
    if (plVar10 != (longlong *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
      pwVar12 = (wchar_t *)(**(code **)(*plVar10 + 8))(plVar10);
      pFVar13 = ::FString::FString(&local_b8,pwVar12);
      ::FString::ConcatFC(&local_1c8,pFVar13,L" (1/frame)");
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      pcVar5 = *(code **)(*plVar11 + 8);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_1c8.Data.ArrayNum != 0) {
        FVar16.Data = local_1c8.Data.AllocatorInstance.Data;
      }
      uVar14 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar16.Data);
      (*pcVar5)(plVar11,uVar14);
      lVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x10);
        uVar14 = (**(code **)(*plVar10 + 0x10))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      lVar15 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x18);
        uVar14 = (**(code **)(*plVar10 + 0x18))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      pcVar5 = *(code **)(*plVar11 + 0x20);
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
      (*pcVar5)(plVar11,uVar8);
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      pcVar5 = *(code **)(*plVar11 + 0x30);
      uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
      (*pcVar5)(plVar11,uVar9);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      local_f0 = local_res10;
      local_1f0 = 0;
      local_e8 = &local_1f0;
      local_1e8 = 0;
      local_e0 = &local_1e8;
      local_res10[0] = 1;
      local_110 = &local_f8;
      local_118 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l6::<lambda_2>,void,double,double>
                  ::Call;
      local_f8 = plVar11;
      (**(code **)(*plVar10 + 0x40))(plVar10,uVar23,uVar22,0,&local_118);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  puVar2 = &(this->Int64ResetEveryFrameCountersMap).field_0x10;
  iStack_1a0 = 0;
  iVar3 = *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
  local_1a8 = &this->Int64ResetEveryFrameCountersMap;
  local_188 = 0;
  iStack_18c = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->Int64ResetEveryFrameCountersMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar15 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0) goto LAB_14d3d6ea1;
      uVar17 = puVar20[lVar15 + 1];
    }
    local_248 = -uVar17 & uVar17;
    uVar1 = (ulonglong)local_248 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_1f8 = (int)lVar15;
    iStack_18c = local_188 + -1 + local_1f8;
    if (iVar3 < iStack_18c) {
      iStack_18c = iVar3;
    }
  }
LAB_14d3d6ea1:
  uVar17 = *(uint *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
  uStack_19c = local_248;
  uVar21 = uVar17 & 0xffffffe0;
  iStack_184 = iStack_214;
  iStack_180 = *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x8 -
               *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x34;
  uStack_190 = 0xffffffff;
  TStack_140._padding_ = CONCAT44(local_248,iStack_1a0);
  TStack_140.CurrentBitIndex = iStack_18c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_140._28_4_ = iStack_214;
  TStack_140.BaseBitIndex = local_188;
  uStack_120 = CONCAT44(uStack_17c,iStack_180);
  local_198 = puVar2;
  local_148 = local_1a8;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
  if (uVar17 != uVar4) {
    puVar19 = *(undefined1 **)&(this->Int64ResetEveryFrameCountersMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d3d6fd0;
      uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar17 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14d3d6fd0:
  while( true ) {
    pTVar6 = local_148;
    if (*(int *)&local_148->field_0x8 - *(int *)&local_148->field_0x34 != (int)uStack_120) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_140.CurrentBitIndex == uVar17) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &this->Int64ResetEveryFrameCountersMap)) break;
    plVar10 = (longlong *)
              (**(code **)((longlong)*this->EditableCounterProvider + 0x20))
                        (this->EditableCounterProvider,
                         *(undefined8 *)
                          (*(longlong *)pTVar6 + 8 + (longlong)TStack_140.CurrentBitIndex * 0x18));
    if (plVar10 != (longlong *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
      pwVar12 = (wchar_t *)(**(code **)(*plVar10 + 8))(plVar10);
      pFVar13 = ::FString::FString(local_a8,pwVar12);
      ::FString::ConcatFC(&local_1b8,pFVar13,L" (1/frame)");
      if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
      }
      pcVar5 = *(code **)(*plVar11 + 8);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_1b8.Data.ArrayNum != 0) {
        FVar16.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      uVar14 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar16.Data);
      (*pcVar5)(plVar11,uVar14);
      lVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x10);
        uVar14 = (**(code **)(*plVar10 + 0x10))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      lVar15 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x18);
        uVar14 = (**(code **)(*plVar10 + 0x18))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      pcVar5 = *(code **)(*plVar11 + 0x20);
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
      (*pcVar5)(plVar11,uVar8);
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      pcVar5 = *(code **)(*plVar11 + 0x30);
      uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
      (*pcVar5)(plVar11,uVar9);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      local_d0 = local_res18;
      local_1e0 = 0;
      local_c8 = &local_1e0;
      local_res18[0] = 1;
      local_c0 = &local_1d8;
      local_1d8 = 0;
      local_100 = &local_d8;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l13::<lambda_3>,void,double,__int64>
                  ::Call;
      local_d8 = plVar11;
      (**(code **)(*plVar10 + 0x38))(plVar10,uVar23,uVar22,0,&local_108);
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  (**(code **)((longlong)*local_238 + 0xa8))(local_238);
  FMemScope::~FMemScope(&local_1d0);
  FLLMScope::~FLLMScope(local_240);
  return;
}

// GetThreadState @ 14d3e32d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> * __thiscall
TraceServices::FStatsAnalyzer::GetThreadState
          (FStatsAnalyzer *this,
          TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *__return_storage_ptr__,
          uint param_1)

{
  TMap<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *pTVar5;
  undefined1 *puVar6;
  uint local_res18 [4];
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  uint *local_18;
  TReferenceControllerBase<1> **local_10;
  
  this_00 = &this->ThreadStatesMap;
  local_res18[0] = param_1;
  if (*(int *)&(this->ThreadStatesMap).field_0x8 != *(int *)&(this->ThreadStatesMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ThreadStatesMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ThreadStatesMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ThreadStatesMap).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)((longlong)iVar4 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1) {
          pTVar5 = TMapBase<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
                   ::FindChecked((TMapBase<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
                                  *)this_00,param_1);
          __return_storage_ptr__->Object = pTVar5->Object;
          pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
          if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
            return __return_storage_ptr__;
          }
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          return __return_storage_ptr__;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar4 != -1);
    }
  }
  pTStack_20 = ::operator_new(0x18);
  if (pTStack_20 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pTStack_20 = _UNK_150651568;
  }
  else {
    pTStack_20->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFThreadState_FStatsAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    local_28 = pTStack_20 + 1;
    pTStack_20->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_20[1]._padding_ = 0;
    if ((local_28 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_18 = local_res18;
  local_28->_padding_ = 0;
  local_10 = &local_28;
  TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_const_&>_>
            ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_const_&>
              *)&stack0x00000008,(bool *)&local_18);
  __return_storage_ptr__->Object = (FThreadState *)local_28;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return __return_storage_ptr__;
}

// OnAnalysisBegin @ 14d3e9500

void __thiscall
TraceServices::FStatsAnalyzer::OnAnalysisBegin(FStatsAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"Stats","Spec",0);
  (**(code **)*pFVar1)(pFVar1,1,"Stats","EventBatch",0);
  (**(code **)*pFVar1)(pFVar1,2,"Stats","EventBatch2",0);
  (**(code **)*pFVar1)(pFVar1,3,"Misc","BeginFrame",0);
  return;
}

// OnAnalysisEnd @ 14d3eac40

void __thiscall TraceServices::FStatsAnalyzer::OnAnalysisEnd(FStatsAnalyzer *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  FString *pFVar13;
  undefined8 uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  uint uStack_248;
  FLLMScope aFStack_240 [2];
  IAnalysisSession *pIStack_238;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTStack_230;
  int iStack_228;
  uint uStack_224;
  undefined1 *puStack_220;
  undefined4 uStack_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  FMemScope FStack_1d0;
  FString FStack_1c8;
  FString FStack_1b8;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTStack_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *puStack_198;
  undefined4 uStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTStack_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTStack_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  code *pcStack_118;
  longlong **pplStack_110;
  code *pcStack_108;
  longlong **pplStack_100;
  longlong *plStack_f8;
  undefined1 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  longlong *plStack_d8;
  undefined1 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  FString FStack_b8;
  FString aFStack_a8 [2];
  undefined4 uStack_7c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name323,L"Insights/FStatsAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(aFStack_240,LLMScope_Name323,false,None,Default,true);
  FMemScope::FMemScope(&FStack_1d0,&LLMScope_Name323,true);
  pIStack_238 = this->Session;
  (**(code **)((longlong)*pIStack_238 + 0xa0))(pIStack_238);
  puVar2 = &(this->FloatResetEveryFrameCountersMap).field_0x10;
  iVar3 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
  pTStack_230 = &this->FloatResetEveryFrameCountersMap;
  iStack_228 = 0;
  uStack_248 = 1;
  iStack_210 = 0;
  uStack_224 = 1;
  iStack_214 = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->FloatResetEveryFrameCountersMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uStack_224 = *puVar20;
    while (uStack_224 == 0) {
      lVar15 = (longlong)iStack_228;
      iStack_210 = iStack_210 + 0x20;
      iStack_228 = iStack_228 + 1;
      uStack_224 = 1;
      iStack_214 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228) goto LAB_14d3d6aef;
      uStack_224 = puVar20[lVar15 + 1];
    }
    uStack_224 = -uStack_224 & uStack_224;
    uVar1 = (ulonglong)uStack_224 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_200 = (int)lVar15;
    iStack_214 = iStack_210 + -1 + iStack_200;
    if (iVar3 < iStack_214) {
      iStack_214 = iVar3;
    }
  }
LAB_14d3d6aef:
  uVar17 = *(uint *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
  uStack_20c = uStack_7c;
  iStack_208 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x8 -
               *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x34;
  uVar21 = uVar17 & 0xffffffe0;
  uStack_218 = 0xffffffff;
  TStack_170._padding_ = CONCAT44(uStack_224,iStack_228);
  TStack_170.CurrentBitIndex = iStack_214;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_170._28_4_ = uStack_7c;
  TStack_170.BaseBitIndex = iStack_210;
  uStack_150 = CONCAT44(uStack_204,iStack_208);
  puStack_220 = puVar2;
  pTStack_178 = pTStack_230;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
  if (uVar17 != uVar4) {
    puVar19 = *(undefined1 **)&(this->FloatResetEveryFrameCountersMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d3d6c10;
      uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_1fc = (int)lVar15;
    uVar17 = iStack_1fc + -1 + uVar21;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14d3d6c10:
  uVar22 = (undefined4)__real_7ff0000000000000;
  uVar23 = (undefined4)__real_fff0000000000000;
  while( true ) {
    pTVar6 = pTStack_178;
    if (*(int *)&pTStack_178->field_0x8 - *(int *)&pTStack_178->field_0x34 != (int)uStack_150) {
      auStackX_8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (((TStack_170.CurrentBitIndex == uVar17) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &this->FloatResetEveryFrameCountersMap)) break;
    plVar10 = (longlong *)
              (**(code **)((longlong)*this->EditableCounterProvider + 0x20))
                        (this->EditableCounterProvider,
                         *(undefined8 *)
                          (*(longlong *)pTVar6 + 8 + (longlong)TStack_170.CurrentBitIndex * 0x18));
    if (plVar10 != (longlong *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
      pwVar12 = (wchar_t *)(**(code **)(*plVar10 + 8))(plVar10);
      pFVar13 = ::FString::FString(&FStack_b8,pwVar12);
      ::FString::ConcatFC(&FStack_1c8,pFVar13,L" (1/frame)");
      if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
      }
      pcVar5 = *(code **)(*plVar11 + 8);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (FStack_1c8.Data.ArrayNum != 0) {
        FVar16.Data = FStack_1c8.Data.AllocatorInstance.Data;
      }
      uVar14 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar16.Data);
      (*pcVar5)(plVar11,uVar14);
      lVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x10);
        uVar14 = (**(code **)(*plVar10 + 0x10))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      lVar15 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x18);
        uVar14 = (**(code **)(*plVar10 + 0x18))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      pcVar5 = *(code **)(*plVar11 + 0x20);
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
      (*pcVar5)(plVar11,uVar8);
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      pcVar5 = *(code **)(*plVar11 + 0x30);
      uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
      (*pcVar5)(plVar11,uVar9);
      if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
      }
      puStack_f0 = auStackX_10;
      uStack_1f0 = 0;
      puStack_e8 = &uStack_1f0;
      uStack_1e8 = 0;
      puStack_e0 = &uStack_1e8;
      auStackX_10[0] = 1;
      pplStack_110 = &plStack_f8;
      pcStack_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l6::<lambda_2>,void,double,double>
                    ::Call;
      plStack_f8 = plVar11;
      (**(code **)(*plVar10 + 0x40))(plVar10,uVar23,uVar22,0,&pcStack_118);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  }
  puVar2 = &(this->Int64ResetEveryFrameCountersMap).field_0x10;
  iStack_1a0 = 0;
  iVar3 = *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
  pTStack_1a8 = &this->Int64ResetEveryFrameCountersMap;
  iStack_188 = 0;
  iStack_18c = 0;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->Int64ResetEveryFrameCountersMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar15 = (longlong)iStack_1a0;
      iStack_188 = iStack_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0) goto LAB_14d3d6ea1;
      uVar17 = puVar20[lVar15 + 1];
    }
    uStack_248 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_248 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_1f8 = (int)lVar15;
    iStack_18c = iStack_188 + -1 + iStack_1f8;
    if (iVar3 < iStack_18c) {
      iStack_18c = iVar3;
    }
  }
LAB_14d3d6ea1:
  uVar17 = *(uint *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
  uStack_19c = uStack_248;
  uVar21 = uVar17 & 0xffffffe0;
  iStack_184 = iStack_214;
  iStack_180 = *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x8 -
               *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x34;
  uStack_190 = 0xffffffff;
  TStack_140._padding_ = CONCAT44(uStack_248,iStack_1a0);
  TStack_140.CurrentBitIndex = iStack_18c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_140._28_4_ = iStack_214;
  TStack_140.BaseBitIndex = iStack_188;
  uStack_120 = CONCAT44(uStack_17c,iStack_180);
  puStack_198 = puVar2;
  pTStack_148 = pTStack_1a8;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
  if (uVar17 != uVar4) {
    puVar19 = *(undefined1 **)&(this->Int64ResetEveryFrameCountersMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar21 = uVar21 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d3d6fd0;
      uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar17 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_14d3d6fd0:
  while( true ) {
    pTVar6 = pTStack_148;
    if (*(int *)&pTStack_148->field_0x8 - *(int *)&pTStack_148->field_0x34 != (int)uStack_120) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
    }
    if (((TStack_140.CurrentBitIndex == uVar17) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &this->Int64ResetEveryFrameCountersMap)) break;
    plVar10 = (longlong *)
              (**(code **)((longlong)*this->EditableCounterProvider + 0x20))
                        (this->EditableCounterProvider,
                         *(undefined8 *)
                          (*(longlong *)pTVar6 + 8 + (longlong)TStack_140.CurrentBitIndex * 0x18));
    if (plVar10 != (longlong *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
      pwVar12 = (wchar_t *)(**(code **)(*plVar10 + 8))(plVar10);
      pFVar13 = ::FString::FString(aFStack_a8,pwVar12);
      ::FString::ConcatFC(&FStack_1b8,pFVar13,L" (1/frame)");
      if (aFStack_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_a8[0].Data.AllocatorInstance.Data);
      }
      pcVar5 = *(code **)(*plVar11 + 8);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (FStack_1b8.Data.ArrayNum != 0) {
        FVar16.Data = FStack_1b8.Data.AllocatorInstance.Data;
      }
      uVar14 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar16.Data);
      (*pcVar5)(plVar11,uVar14);
      lVar15 = (**(code **)(*plVar10 + 0x10))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x10);
        uVar14 = (**(code **)(*plVar10 + 0x10))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      lVar15 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (lVar15 != 0) {
        pcVar5 = *(code **)(*plVar11 + 0x18);
        uVar14 = (**(code **)(*plVar10 + 0x18))(plVar10);
        (*pcVar5)(plVar11,uVar14);
      }
      pcVar5 = *(code **)(*plVar11 + 0x20);
      uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
      (*pcVar5)(plVar11,uVar8);
      (**(code **)(*plVar11 + 0x28))(plVar11,0);
      pcVar5 = *(code **)(*plVar11 + 0x30);
      uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
      (*pcVar5)(plVar11,uVar9);
      if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
      }
      puStack_d0 = auStackX_18;
      uStack_1e0 = 0;
      puStack_c8 = &uStack_1e0;
      auStackX_18[0] = 1;
      puStack_c0 = &uStack_1d8;
      uStack_1d8 = 0;
      pplStack_100 = &plStack_d8;
      pcStack_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TraceServices::FStatsAnalyzer::CreateFrameCounters'::__l13::<lambda_3>,void,double,__int64>
                    ::Call;
      plStack_d8 = plVar11;
      (**(code **)(*plVar10 + 0x38))(plVar10,uVar23,uVar22,0,&pcStack_108);
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  (**(code **)((longlong)*pIStack_238 + 0xa8))(pIStack_238);
  FMemScope::~FMemScope(&FStack_1d0);
  FLLMScope::~FLLMScope(aFStack_240);
  return;
}

// OnEvent @ 14d3f65d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FStatsAnalyzer::OnEvent
          (FStatsAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTVar1;
  TMap<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
  *this_00;
  longlong lVar2;
  uint uVar3;
  FEventData *this_01;
  FEventTime *this_02;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *pTVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  ulong64 uVar14;
  TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1> *pTVar15;
  ulong64 uVar16;
  FArrayReader *this_03;
  IEditableCounter **ppIVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uchar *puVar20;
  wchar_t *pwVar21;
  IEditableCounter *pIVar22;
  byte bVar23;
  longlong lVar24;
  IEditableCounter **ppIVar25;
  ForAnyElementType FVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  IAnalysisSession *pIVar30;
  uint uVar31;
  IEditableCounter **ppIVar32;
  int iVar33;
  int iVar34;
  byte *pbVar35;
  IEditableCounter **ppIVar36;
  uint *puVar37;
  uint uVar38;
  int iVar39;
  IEditableCounter **ppIVar40;
  IEditableCounter **ppIVar41;
  undefined4 uVar42;
  double dVar43;
  uint local_278;
  undefined1 local_274;
  char local_273 [3];
  IEditableCounter *local_270;
  longlong *local_268;
  TReferenceControllerBase<1> *local_260;
  FString local_258;
  undefined1 local_248 [4];
  int local_244;
  FLLMScope local_240 [2];
  TReferenceControllerBase<1> *local_238;
  FString local_230;
  TReferenceControllerBase<1> *local_220;
  TReferenceControllerBase<1> *pTStack_218;
  FString local_210;
  uint local_200 [2];
  IAnalysisSession *local_1f8;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0 [8];
  TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&> local_1b8;
  IEditableCounter **local_1a8;
  FMemScope local_1a0;
  int local_198;
  int local_194;
  int local_190;
  undefined1 local_18c [12];
  int local_180;
  FString local_178;
  FString local_168;
  TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&> local_158;
  int iStack_148;
  undefined4 uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TReferenceControllerBase<1> *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  uint *local_c0;
  IEditableCounter **local_b8;
  uint *local_b0;
  IEditableCounter **local_a8;
  uint *local_a0;
  IEditableCounter **local_98;
  uint *local_90;
  TReferenceControllerBase<1> **local_88;
  int *local_80;
  longlong **local_78;
  undefined4 local_54;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name42,L"Insights/FStatsAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_240,LLMScope_Name42,false,None,Default,true);
  FMemScope::FMemScope(&local_1a0,&LLMScope_Name42,true);
  pIVar30 = this->Session;
  local_1f8 = pIVar30;
  (**(code **)((longlong)*pIVar30 + 0xa0))(pIVar30);
  this_01 = param_3->EventData;
  if (param_1 == 0) {
    bVar9 = false;
    local_278 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_01,"Id",0);
    local_270 = TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                ::FindRef((TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                           *)&this->EditableCountersMap,local_278);
    if (local_270 == (IEditableCounter *)0x0) {
      local_270 = (IEditableCounter *)
                  (**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
      local_c0 = &local_278;
      local_b8 = &local_270;
      TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&>_>
                ((TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
                  *)&this->EditableCountersMap,
                 (TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&> *
                 )local_1c0,(bool *)&local_c0);
    }
    else {
      bVar9 = true;
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    plVar19 = (longlong *)
              (**(code **)((longlong)*this->EditableCounterProvider + 0x20))
                        (this->EditableCounterProvider,local_270);
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_230.Data.ArrayNum = 0;
    local_230.Data.ArrayMax = 0;
    local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.Data.ArrayNum = 0;
    local_210.Data.ArrayMax = 0;
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetString(this_01,"Name",&local_258);
    if (bVar11) {
      UE::Trace::IAnalyzer::FEventData::GetString(this_01,"Description",&local_230);
      UE::Trace::IAnalyzer::FEventData::GetString(this_01,"Group",&local_210);
    }
    else {
      puVar20 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_01);
      ::FString::FString(&local_178,(char *)puVar20);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      local_258.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      local_258.Data.ArrayMax = local_178.Data.ArrayMax;
      local_258.Data.ArrayNum = local_178.Data.ArrayNum;
      puVar20 = UE::Trace::IAnalyzer::FEventData::GetAttachment(this_01);
      iVar33 = local_178.Data.ArrayNum + -1;
      if (local_178.Data.ArrayNum == 0) {
        iVar33 = 0;
      }
      ::FString::operator=(&local_230,(wchar_t *)(puVar20 + (longlong)iVar33 + 1));
    }
    iVar33 = local_258.Data.ArrayNum;
    if (local_258.Data.ArrayNum < 2) {
      if (2 < (byte)LogTraceServices._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
      ::FString::PrintfImpl(&local_168,L"<noname stats counter %u>");
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      local_258.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      local_258.Data.ArrayMax = local_168.Data.ArrayMax;
      local_258.Data.ArrayNum = local_168.Data.ArrayNum;
      iVar33 = local_168.Data.ArrayNum;
    }
    if (bVar9) {
      if (plVar19 != (longlong *)0x0) {
        pwVar21 = (wchar_t *)(**(code **)(*plVar19 + 8))(plVar19);
        FVar26.Data = (FScriptContainerElement *)L"";
        if (local_258.Data.ArrayNum != 0) {
          FVar26.Data = local_258.Data.AllocatorInstance.Data;
        }
        iVar33 = wcscmp((wchar_t *)FVar26.Data,pwVar21);
        if ((iVar33 != 0) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
    else {
      FVar26.Data = (FScriptContainerElement *)L"";
      if (iVar33 != 0) {
        FVar26.Data = local_258.Data.AllocatorInstance.Data;
      }
      pcVar4 = *(code **)((longlong)*local_270 + 8);
      uVar18 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,FVar26.Data);
      (*pcVar4)(local_270,uVar18);
    }
    if (1 < local_210.Data.ArrayNum) {
      if (bVar9) {
        if (plVar19 != (longlong *)0x0) {
          pwVar21 = (wchar_t *)(**(code **)(*plVar19 + 0x10))(plVar19);
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_210.Data.ArrayNum != 0) {
            FVar26.Data = local_210.Data.AllocatorInstance.Data;
          }
          iVar33 = wcscmp((wchar_t *)FVar26.Data,pwVar21);
          if ((iVar33 != 0) && (1 < (byte)LogTraceServices._0_1_)) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
          }
        }
      }
      else {
        pcVar4 = *(code **)((longlong)*local_270 + 0x10);
        uVar18 = (**(code **)((longlong)*this->Session + 0xd0))
                           (this->Session,local_210.Data.AllocatorInstance.Data);
        (*pcVar4)(local_270,uVar18);
      }
    }
    if (local_230.Data.ArrayNum < 2) goto LAB_14d3f7483;
    if (bVar9) {
      if (plVar19 == (longlong *)0x0) {
LAB_14d3f7483:
        bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_01,"IsFloatingPoint",false);
        if (bVar9) {
          if (plVar19 != (longlong *)0x0) goto LAB_14d3f74c9;
          goto LAB_14d3f7513;
        }
        goto LAB_14d3f749d;
      }
      pwVar21 = (wchar_t *)(**(code **)(*plVar19 + 0x18))(plVar19);
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_230.Data.ArrayNum != 0) {
        FVar26.Data = local_230.Data.AllocatorInstance.Data;
      }
      iVar33 = wcscmp((wchar_t *)FVar26.Data,pwVar21);
      if ((iVar33 == 0) || ((byte)LogTraceServices._0_1_ < 2)) goto LAB_14d3f7483;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_01,"IsFloatingPoint",false);
LAB_14d3f74c9:
      cVar13 = (**(code **)(*plVar19 + 0x20))(plVar19);
      if ((bVar11 == (bool)cVar13) || ((byte)LogTraceServices._0_1_ < 2)) {
LAB_14d3f7513:
        bVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>
                           (this_01,"ShouldClearEveryFrame",false);
        if (bVar9) {
          if (plVar19 != (longlong *)0x0) goto LAB_14d3f75e0;
          goto LAB_14d3f760f;
        }
        goto LAB_14d3f7532;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      bVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>
                         (this_01,"ShouldClearEveryFrame",false);
LAB_14d3f75e0:
      cVar13 = (**(code **)(*plVar19 + 0x28))(plVar19);
      if ((bVar12 != (bool)cVar13) && (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)*local_270 + 0x18);
      uVar18 = (**(code **)((longlong)*this->Session + 0xd0))
                         (this->Session,local_230.Data.AllocatorInstance.Data);
      (*pcVar4)(local_270,uVar18);
      bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_01,"IsFloatingPoint",false);
LAB_14d3f749d:
      (**(code **)((longlong)*local_270 + 0x20))(local_270,bVar11);
      bVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>
                         (this_01,"ShouldClearEveryFrame",false);
LAB_14d3f7532:
      (**(code **)((longlong)*local_270 + 0x28))(local_270,bVar12);
      if (bVar12 != false) {
        if (bVar11 == false) {
          pIVar22 = TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                    ::FindRef((TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                               *)&this->Int64ResetEveryFrameCountersMap,local_278);
          if (pIVar22 == (IEditableCounter *)0x0) {
            local_a0 = &local_278;
            local_98 = &local_270;
            TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&>_>
                      ((TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
                        *)&this->Int64ResetEveryFrameCountersMap,&local_1b8,(bool *)&local_a0);
          }
        }
        else {
          pIVar22 = TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                    ::FindRef((TMapBase<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                               *)&this->FloatResetEveryFrameCountersMap,local_278);
          if (pIVar22 == (IEditableCounter *)0x0) {
            local_b0 = &local_278;
            local_a8 = &local_270;
            TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&>_>
                      ((TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
                        *)&this->FloatResetEveryFrameCountersMap,
                       (TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&>
                        *)(local_1c0 + 4),(bool *)&local_b0);
          }
        }
      }
    }
LAB_14d3f760f:
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_01,"IsMemory",false);
    if (bVar9) {
      if (((plVar19 != (longlong *)0x0) &&
          (uVar31 = (**(code **)(*plVar19 + 0x30))(plVar19), bVar11 != uVar31)) &&
         (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    else {
      (**(code **)((longlong)*local_270 + 0x30))(local_270,bVar11);
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    goto LAB_14d3f7697;
  }
  if ((param_1 != 1) && (param_1 != 2)) {
    if (param_1 == 3) {
      bVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_01,"FrameType",'\0');
      if (bVar8 < 2) {
        if (bVar8 == 0) {
          uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_01,"Cycle",0);
          dVar43 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar14);
          iVar39 = 0;
          puVar27 = &(this->FloatResetEveryFrameCountersMap).field_0x10;
          iVar33 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
          local_238 = (TReferenceControllerBase<1> *)&this->FloatResetEveryFrameCountersMap;
          local_260 = (TReferenceControllerBase<1> *)&DAT_00000001;
          iStack_1e8 = 0;
          local_1d0 = 0;
          iVar34 = 0;
          uStack_1e4 = 1;
          iStack_1d4 = 0;
          if (iVar33 != 0) {
            puVar37 = *(uint **)&(this->FloatResetEveryFrameCountersMap).field_0x20;
            if (puVar37 == (uint *)0x0) {
              puVar37 = (uint *)puVar27;
            }
            uStack_1e4 = *puVar37;
            local_1d0 = 0;
            while (uStack_1e4 == 0) {
              lVar24 = (longlong)iStack_1e8;
              local_1d0 = local_1d0 + 0x20;
              iStack_1e8 = iStack_1e8 + 1;
              if ((int)(iVar33 + -1 + (iVar33 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8) {
                iVar34 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
                uStack_1e4 = 1;
                iStack_1d4 = iVar33;
                goto LAB_14d3f67c5;
              }
              uStack_1e4 = puVar37[lVar24 + 1];
            }
            iVar34 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
            uStack_1e4 = -uStack_1e4 & uStack_1e4;
            uVar29 = (ulonglong)uStack_1e4 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_198 = (int)lVar24;
            iStack_1d4 = local_198 + -1 + local_1d0;
            if (iVar34 < iStack_1d4) {
              iStack_1d4 = iVar33;
            }
          }
LAB_14d3f67c5:
          uStack_1cc = local_54;
          iStack_1c8 = *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x8 -
                       *(int *)&(this->FloatResetEveryFrameCountersMap).field_0x34;
          uVar31 = *(uint *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
          uVar38 = uVar31 & 0xffffffe0;
          TStack_118._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
          uStack_1d8 = 0xffffffff;
          TStack_118.CurrentBitIndex = iStack_1d4;
          TStack_118.UnvisitedBitMask = 0xffffffff;
          iVar33 = (int)uVar31 >> 5;
          TStack_118._28_4_ = local_54;
          TStack_118.BaseBitIndex = local_1d0;
          uStack_f8 = CONCAT44(uStack_1c4,iStack_1c8);
          local_1f0 = (TMap<unsigned_int,TraceServices::IEditableCounter_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>_>
                       *)local_238;
          local_1e0 = puVar27;
          local_120 = local_238;
          TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
          if ((((int)uVar31 < 0) || (iVar34 < (int)uVar31)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pTVar5 = local_238;
          uVar3 = *(uint *)&(this->FloatResetEveryFrameCountersMap).field_0x28;
          if (uVar31 != uVar3) {
            puVar28 = *(undefined1 **)&(this->FloatResetEveryFrameCountersMap).field_0x20;
            if (puVar28 == (undefined1 *)0x0) {
              puVar28 = puVar27;
            }
            uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar33 * 4);
            while (uVar31 == 0) {
              lVar24 = (longlong)iVar33;
              uVar38 = uVar38 + 0x20;
              iVar33 = iVar33 + 1;
              uVar31 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
              goto LAB_14d3f68f0;
              uVar31 = *(uint *)(puVar28 + lVar24 * 4 + 4);
            }
            uVar29 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar24 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_194 = (int)lVar24;
            uVar31 = local_194 + -1 + uVar38;
            if ((int)uVar3 < (int)uVar31) {
              uVar31 = uVar3;
            }
          }
LAB_14d3f68f0:
          while( true ) {
            pTVar6 = local_120;
            if ((int)local_120->SharedReferenceCount -
                *(int *)((longlong)&local_120[3]._padding_ + 4) != (int)uStack_f8) {
              local_274 = 0;
              `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_274);
            }
            pIVar30 = local_1f8;
            if (((TStack_118.CurrentBitIndex == uVar31) &&
                (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
               (pTVar6 == pTVar5)) break;
            plVar19 = *(longlong **)
                       (pTVar6->_padding_ + 8 + (longlong)TStack_118.CurrentBitIndex * 0x18);
            (**(code **)(*plVar19 + 0x48))(plVar19,SUB84(dVar43,0),0);
            TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
          }
          local_130 = 0;
          puVar27 = &(this->Int64ResetEveryFrameCountersMap).field_0x10;
          iVar33 = *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
          pTVar1 = &this->Int64ResetEveryFrameCountersMap;
          iStack_134 = 0;
          if (iVar33 != 0) {
            puVar37 = *(uint **)&(this->Int64ResetEveryFrameCountersMap).field_0x20;
            if (puVar37 == (uint *)0x0) {
              puVar37 = (uint *)puVar27;
            }
            uVar31 = *puVar37;
            while (uVar31 == 0) {
              lVar24 = (longlong)iVar39;
              local_130 = local_130 + 0x20;
              iVar39 = iVar39 + 1;
              iStack_134 = iVar33;
              if ((int)(iVar33 + -1 + (iVar33 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar39)
              goto LAB_14d3f69f1;
              uVar31 = puVar37[lVar24 + 1];
            }
            local_260 = (TReferenceControllerBase<1> *)CONCAT44(local_260._4_4_,-uVar31 & uVar31);
            uVar29 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar24 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            local_190 = (int)lVar24;
            iStack_134 = local_130 + -1 + local_190;
            if (iVar33 < iStack_134) {
              iStack_134 = iVar33;
            }
          }
LAB_14d3f69f1:
          uVar31 = *(uint *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
          uStack_144 = SUB84(local_260,0);
          iStack_12c = iStack_1d4;
          iStack_128 = *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x8 -
                       *(int *)&(this->Int64ResetEveryFrameCountersMap).field_0x34;
          uStack_138 = 0xffffffff;
          uVar38 = uVar31 & 0xffffffe0;
          TStack_e8._padding_ = CONCAT44(uStack_144,iVar39);
          TStack_e8.CurrentBitIndex = iStack_134;
          TStack_e8.UnvisitedBitMask = 0xffffffff;
          iVar34 = (int)uVar31 >> 5;
          TStack_e8._28_4_ = iStack_1d4;
          TStack_e8.BaseBitIndex = local_130;
          uStack_c8 = CONCAT44(uStack_124,iStack_128);
          local_158.Value = (IEditableCounter **)pTVar1;
          iStack_148 = iVar39;
          local_140 = puVar27;
          local_f0 = pTVar1;
          TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
          if ((((int)uVar31 < 0) || (iVar33 < (int)uVar31)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          uVar3 = *(uint *)&(this->Int64ResetEveryFrameCountersMap).field_0x28;
          if (uVar31 != uVar3) {
            puVar28 = *(undefined1 **)&(this->Int64ResetEveryFrameCountersMap).field_0x20;
            if (puVar28 == (undefined1 *)0x0) {
              puVar28 = puVar27;
            }
            uVar31 = -1 << ((byte)uVar31 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar34 * 4);
            while (uVar31 == 0) {
              lVar24 = (longlong)iVar34;
              uVar38 = uVar38 + 0x20;
              iVar34 = iVar34 + 1;
              uVar31 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
              goto LAB_14d3f6b00;
              uVar31 = *(uint *)(puVar28 + lVar24 * 4 + 4);
            }
            uVar29 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
            lVar24 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar31 = (uVar38 - 1) + (int)lVar24;
            if ((int)uVar3 < (int)uVar31) {
              uVar31 = uVar3;
            }
          }
LAB_14d3f6b00:
          while( true ) {
            pTVar7 = local_f0;
            if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
              `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::IEditableCounter_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
            }
            if (((TStack_e8.CurrentBitIndex == uVar31) &&
                (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
               (pTVar7 == pTVar1)) break;
            plVar19 = *(longlong **)
                       (*(longlong *)pTVar7 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18);
            (**(code **)(*plVar19 + 0x50))(plVar19,SUB84(dVar43,0),0);
            TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
          }
        }
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameType < TraceFrameType_Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\StatsTraceAnalysis.cpp"
                           ,0x11b,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
      }
    }
    goto LAB_14d3f7697;
  }
  uVar31 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_01,"ThreadId",0);
  if (uVar31 == 0) {
    local_200[0] = UE::Trace::IAnalyzer::FThreadInfo::GetId(param_3->ThreadInfo);
  }
  else {
    local_200[0] = 0x70000000;
  }
  local_200[0] = local_200[0] | uVar31;
  ppIVar40 = (IEditableCounter **)0x0;
  this_00 = &this->ThreadStatesMap;
  if (*(int *)&(this->ThreadStatesMap).field_0x8 != *(int *)&(this->ThreadStatesMap).field_0x34) {
    puVar27 = *(undefined1 **)&(this->ThreadStatesMap).field_0x40;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(this->ThreadStatesMap).field_0x38;
    }
    iVar33 = *(int *)(puVar27 +
                     (ulonglong)(*(int *)&(this->ThreadStatesMap).field_0x48 - 1U & local_200[0]) *
                     4);
    if (iVar33 != -1) {
      do {
        if (*(uint *)((longlong)iVar33 * 0x20 + *(longlong *)&this_00->field_0x0) == local_200[0]) {
          pTVar15 = TMapBase<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
                    ::FindChecked((TMapBase<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>_>
                                   *)this_00,local_200[0]);
          local_260 = (TReferenceControllerBase<1> *)pTVar15->Object;
          local_238 = (pTVar15->SharedReferenceCount).ReferenceController;
          if (local_238 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_238->SharedReferenceCount =
                 (atomic<int>)((int)local_238->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_14d3f6cf1;
        }
        iVar33 = *(int *)((longlong)iVar33 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar33 != -1);
    }
  }
  pTStack_218 = ::operator_new(0x18);
  if (pTStack_218 == (TReferenceControllerBase<1> *)0x0) {
    local_220 = ___xmm_00000000000000000000000000000010;
    pTStack_218 = _UNK_150651568;
  }
  else {
    pTStack_218->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_218->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFThreadState_FStatsAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    local_220 = pTStack_218 + 1;
    pTStack_218->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_218[1]._padding_ = 0;
    if ((local_220 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
  }
  local_90 = local_200;
  local_220->_padding_ = 0;
  local_88 = &local_220;
  TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_const_&>_>
            ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FStatsAnalyzer::FThreadState,1>_const_&>
              *)local_18c,(bool *)&local_90);
  local_260 = local_220;
  local_238 = pTStack_218;
  if (pTStack_218 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_218->SharedReferenceCount = (atomic<int>)((int)pTStack_218->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_218);
LAB_14d3f6cf1:
  this_02 = param_3->EventTime;
  uVar14 = UE::Trace::IAnalyzer::FEventTime::GetTimestamp(param_3->EventTime);
  uVar16 = UE::Trace::IAnalyzer::FEventTime::AsCycle64(this_02);
  local_1b8.Value = (IEditableCounter **)(uVar16 - uVar14);
  this_03 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_3->EventData,"Data");
  uVar31 = UE::Trace::IAnalyzer::FArrayReader::Num(this_03);
  ppIVar17 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_03,0,local_273);
  if (ppIVar17 == (IEditableCounter **)0x0) {
LAB_14d3f6d5f:
    ppIVar17 = ppIVar40;
  }
  else {
    iVar33 = -(int)local_273[0];
    if (iVar33 < 0) {
      iVar33 = (int)local_273[0];
    }
    if (iVar33 != 1) goto LAB_14d3f6d5f;
  }
  if (((int)uVar31 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if (ppIVar17 == (IEditableCounter **)0x0) {
    uVar31 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
    ppIVar17 = (IEditableCounter **)
               UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
    if (((int)uVar31 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
  }
  pTVar5 = local_260;
  local_1a8 = (IEditableCounter **)((longlong)(int)uVar31 + (longlong)ppIVar17);
  bVar9 = ppIVar17 == local_1a8;
  if (ppIVar17 < local_1a8) {
    ppIVar25 = ppIVar40;
    ppIVar41 = ppIVar40;
    do {
      do {
        bVar8 = *(byte *)ppIVar17;
        ppIVar17 = (IEditableCounter **)((longlong)ppIVar17 + 1);
        ppIVar41 = (IEditableCounter **)
                   ((ulonglong)ppIVar41 | (ulonglong)(bVar8 & 0x7f) << ((byte)ppIVar25 & 0x3f));
        ppIVar25 = (IEditableCounter **)((longlong)ppIVar25 + 7);
      } while ((char)bVar8 < '\0');
      local_244 = (int)((ulonglong)ppIVar41 >> 3);
      ppIVar25 = ppIVar40;
      ppIVar36 = ppIVar40;
      if (*(int *)&(this->EditableCountersMap).field_0x8 !=
          *(int *)&(this->EditableCountersMap).field_0x34) {
        puVar27 = *(undefined1 **)&(this->EditableCountersMap).field_0x40;
        puVar28 = &(this->EditableCountersMap).field_0x38;
        if (puVar27 != (undefined1 *)0x0) {
          puVar28 = puVar27;
        }
        iVar33 = *(int *)(puVar28 +
                         ((ulonglong)(*(int *)&(this->EditableCountersMap).field_0x48 - 1) &
                         (ulonglong)ppIVar41 >> 3 & 0xffffffff) * 4);
        if (iVar33 != -1) {
          lVar24 = *(longlong *)&(this->EditableCountersMap).field_0x0;
          do {
            lVar2 = lVar24 + (longlong)iVar33 * 0x18;
            if (*(int *)(lVar24 + (longlong)iVar33 * 0x18) == local_244) {
              if ((lVar2 != 0) &&
                 (local_268 = *(longlong **)(lVar2 + 8), local_268 != (longlong *)0x0))
              goto LAB_14d3f6f20;
              break;
            }
            iVar33 = *(int *)(lVar2 + 0x10);
          } while (iVar33 != -1);
        }
      }
      local_268 = (longlong *)0x0;
      local_268 = (longlong *)(**(code **)((longlong)*this->EditableCounterProvider + 0x28))();
      ::FString::PrintfImpl((FString *)(local_18c + 4),L"<unknown stats counter %u>");
      pwVar21 = L"";
      if (local_180 != 0) {
        pwVar21 = (wchar_t *)local_18c._4_8_;
      }
      pcVar4 = *(code **)(*local_268 + 8);
      uVar18 = (**(code **)((longlong)*this->Session + 0xd0))(this->Session,pwVar21);
      (*pcVar4)(local_268,uVar18);
      local_80 = &local_244;
      local_78 = &local_268;
      TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::IEditableCounter_*_const_&>_>
                ((TSet<TTuple<unsigned_int,TraceServices::IEditableCounter_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::IEditableCounter_*,0>,FDefaultSetAllocator>
                  *)&this->EditableCountersMap,&local_158,(bool *)&local_80);
      if ((wchar_t *)local_18c._4_8_ != (wchar_t *)0x0) {
        FMemory::Free((void *)local_18c._4_8_);
      }
LAB_14d3f6f20:
      do {
        ppIVar32 = ppIVar17;
        ppIVar17 = (IEditableCounter **)((longlong)ppIVar32 + 1);
        ppIVar36 = (IEditableCounter **)
                   ((ulonglong)ppIVar36 |
                   (ulonglong)(*(byte *)ppIVar32 & 0x7f) << ((byte)ppIVar25 & 0x3f));
        ppIVar25 = (IEditableCounter **)((longlong)ppIVar25 + 7);
      } while ((char)*(byte *)ppIVar32 < '\0');
      if ((param_1 == 2) && (local_1b8.Value <= ppIVar36)) {
        pTVar5->_padding_ = 0;
      }
      pbVar35 = (byte *)(pTVar5->_padding_ + (longlong)ppIVar36);
      dVar43 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,(ulong64)pbVar35);
      pTVar5->_padding_ = (longlong)pbVar35;
      uVar42 = SUB84(dVar43,0);
      switch((uint)ppIVar41 & 7) {
      case 0:
        (**(code **)(*local_268 + 0x40))(local_268,uVar42,1);
        break;
      case 1:
        (**(code **)(*local_268 + 0x40))(local_268,uVar42,0xffffffffffffffff);
        break;
      case 2:
        ppIVar25 = ppIVar40;
        ppIVar41 = ppIVar40;
        do {
          bVar8 = *(byte *)ppIVar17;
          ppIVar17 = (IEditableCounter **)((longlong)ppIVar17 + 1);
          bVar23 = (byte)ppIVar25;
          ppIVar25 = (IEditableCounter **)((longlong)ppIVar25 + 7);
          ppIVar41 = (IEditableCounter **)
                     ((ulonglong)ppIVar41 | (ulonglong)(bVar8 & 0x7f) << (bVar23 & 0x3f));
        } while ((char)bVar8 < '\0');
        uVar29 = (ulonglong)ppIVar41 >> 1;
        if (((ulonglong)ppIVar41 & 1) != 0) {
          uVar29 = ~uVar29;
        }
        (**(code **)(*local_268 + 0x40))(local_268,uVar42,uVar29);
        break;
      case 3:
        ppIVar25 = ppIVar40;
        ppIVar41 = ppIVar40;
        do {
          bVar8 = *(byte *)ppIVar17;
          ppIVar17 = (IEditableCounter **)((longlong)ppIVar17 + 1);
          bVar23 = (byte)ppIVar25;
          ppIVar25 = (IEditableCounter **)((longlong)ppIVar25 + 7);
          ppIVar41 = (IEditableCounter **)
                     ((ulonglong)ppIVar41 | (ulonglong)(bVar8 & 0x7f) << (bVar23 & 0x3f));
        } while ((char)bVar8 < '\0');
        uVar29 = (ulonglong)ppIVar41 >> 1;
        if (((ulonglong)ppIVar41 & 1) != 0) {
          uVar29 = ~uVar29;
        }
        (**(code **)(*local_268 + 0x50))(local_268,uVar42,uVar29);
        break;
      case 4:
        local_260 = (TReferenceControllerBase<1> *)*ppIVar17;
        ppIVar17 = (IEditableCounter **)((longlong)ppIVar32 + 9);
        (**(code **)(*local_268 + 0x38))(local_268,uVar42,local_260);
        break;
      case 5:
        local_260 = (TReferenceControllerBase<1> *)*ppIVar17;
        ppIVar17 = (IEditableCounter **)((longlong)ppIVar32 + 9);
        (**(code **)(*local_268 + 0x48))(local_268,uVar42,local_260);
      }
      bVar9 = ppIVar17 == local_1a8;
      ppIVar25 = ppIVar40;
      pIVar30 = local_1f8;
      ppIVar41 = ppIVar40;
    } while (ppIVar17 < local_1a8);
  }
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferPtr == BufferEnd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\StatsTraceAnalysis.cpp"
                         ,0x113,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_238);
LAB_14d3f7697:
  (**(code **)((longlong)*pIVar30 + 0xa8))(pIVar30);
  FMemScope::~FMemScope(&local_1a0);
  FLLMScope::~FLLMScope(local_240);
  return true;
}

